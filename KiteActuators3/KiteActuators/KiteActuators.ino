#include <SoftwareSerial.h>
//#include <AltSoftSerial.h>
#include "ESP32Servo.h"
#include <stdint.h>
#include <HardwareSerial.h>
//AltSoftSerial mySerial;
//SoftwareSerial mySerial(16, 17); //RX and TX pins on the Nano

HardwareSerial mySerial(1); //RX, TX

Servo servo_starboard;
Servo servo_port;
Servo servo_elevator;
Servo servo_rudder;

uint8_t arr[6];

int starCMD = 1500;
int portCMD = 1500;
int elevatorCMD = 1500;
int rudderCMD = 1500;

//int starCMDmin = 1200;
//int starCMDmax = 1800;
//int portCMDmin = 1200;
//int portCMDmax = 1800;
//int elevCMDmin = 1072;
//int elevCMDmax = 2072;
//int rudderCMDmin = 1334;
//int rudderCMDmax = 1666;

void setup() {

  Serial.begin(115200);

  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  mySerial.begin(115200);

  servo_starboard.attach(14,1200,1800); //14 32 12 15 for new kite. 14 12 32 15 for old kite. - SPER
  servo_port.attach(32,1200,1800);
  servo_elevator.attach(12,1072,2072);
  servo_rudder.attach(15,1000,2000);

  servo_starboard.writeMicroseconds(starCMD);
  servo_port.write(portCMD);
  servo_elevator.write(elevatorCMD);
  servo_rudder.write(rudderCMD);

  //Serial.println("Beginning code.");

  // Delay before running loop()
  delay(1000);

}

void loop() {
  while (mySerial.available() < 8)  {
    delay(1);
  }

  while (mySerial.read() != 0x01 || mySerial.read() != 0x11)  {
    while (mySerial.available() < 8) {
      delay(1);
    }
  }

  for (int i = 0; i < 6; i++) {
    arr[i] = mySerial.read();
  }
  uint8_t checksumRecB1 = mySerial.read();
  uint8_t checksumRecB2 = mySerial.read();  
  uint16_t checksumRec = ((uint16_t) checksumRecB1 << 8) + (uint16_t) checksumRecB2;
  uint16_t checksumCalc = checksum(arr,6);
  //Serial.printf("%d, %d\n",checksumRec,checksumCalc);

  if (checksumRec == checksumCalc) {
    starCMD = 3000-((arr[1]<<8) + arr[0]);
    portCMD = starCMD;

    //    Adding a bias to star and port commands 
    starCMD = starCMD - 36; 
    portCMD = portCMD + 72; 
    elevatorCMD = (arr[3]<<8) + arr[2];
    rudderCMD = (arr[5]<<8) + arr[4];

//    // For plotting
//    Serial.print(starCMD);
//    Serial.print(", ");
//    Serial.print(elevatorCMD);
//    Serial.print(", ");
//    Serial.println(rudderCMD);

    
      servo_starboard.writeMicroseconds(starCMD);
      servo_port.writeMicroseconds(portCMD);
      servo_elevator.writeMicroseconds(elevatorCMD);
      servo_rudder.writeMicroseconds(rudderCMD);
    
  }
}

uint16_t checksum(uint8_t *cmd, uint8_t cmdLen)
{
  uint8_t checksum_b1 = 0;
  uint8_t checksum_b2 = 0;
  for (int i = 0; i < cmdLen; i++) {
    checksum_b1 += cmd[i];
    checksum_b2 += checksum_b1;
  }
  return ((uint16_t) checksum_b1 << 8) + (uint16_t) checksum_b2;
}
