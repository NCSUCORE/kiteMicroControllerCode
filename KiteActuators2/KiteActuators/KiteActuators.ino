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

void setup() {

  Serial.begin(115200);

  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  mySerial.begin(115200);

  servo_starboard.attach(14,1334,1666);
  servo_port.attach(12,1334,1666);
  servo_elevator.attach(32,1334,1666);
  servo_rudder.attach(15,1334,1666);

  servo_starboard.writeMicroseconds(starCMD);
  servo_port.write(portCMD);
  servo_elevator.write(elevatorCMD);
  servo_rudder.write(rudderCMD);

  Serial.println("Beginning code.");

  // Delay before running loop()
  delay(1000);

}

void loop() {
  while (mySerial.available() < 7)  {
    delay(1);
  }

  while (mySerial.read() != 97)  {
    while (mySerial.available() < 7) {
      delay(1);
    }
  }

  for (int i = 0; i < 6; i++) {
    arr[i] = mySerial.read();
  }

  starCMD = (arr[1]<<8) + arr[0];
  portCMD = 3000-starCMD;
  elevatorCMD = (arr[3]<<8) + arr[2];
  rudderCMD = (arr[5]<<8) + arr[4];

//  Serial.println(servo_starboard.attached());
//  Serial.println(servo_starboard.readMicroseconds());
//
//  Serial.printf("s%d",starCMD);
//  Serial.printf("p%d",portCMD);
//  Serial.printf("e%d",elevatorCMD);
//  Serial.printf("r%d\n",rudderCMD);

  servo_starboard.writeMicroseconds(starCMD);
  servo_port.writeMicroseconds(portCMD);
  servo_elevator.writeMicroseconds(elevatorCMD);
  servo_rudder.writeMicroseconds(rudderCMD);
}
