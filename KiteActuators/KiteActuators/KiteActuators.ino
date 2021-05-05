#include <SoftwareSerial.h>
//#include <AltSoftSerial.h>
#include <Servo.h>


#include <HardwareSerial.h>
//AltSoftSerial mySerial;
//SoftwareSerial mySerial(16, 17); //RX and TX pins on the Nano

HardwareSerial mySerial(1); //RX, TX

Servo servo_starboard;
Servo servo_port;
Servo servo_elevator;
Servo servo_rudder;

float arr[4];

void setup() {

  Serial.begin(115200);

  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  mySerial.begin(115200);

  servo_starboard.attach(14);
  servo_elevator.attach(32);
  servo_rudder.attach(15);
  servo_port.attach(12);

  servo_starboard.writeMicroseconds(1500);
  servo_port.write(1500);
  servo_elevator.write(1500);
  servo_rudder.write(1500);

  Serial.println("Beginning code.");

  // Delay before running loop()
  delay(1000);

}

void loop() {
  while (mySerial.available() < 4)  {
    delay(1);
  }

  while (mySerial.read() != -128)  {
    while (mySerial.available() < 4) {
      delay(1);
    }
  }

  arr[1] = mySerial.read();
  arr[2] = mySerial.read();
  arr[3] = mySerial.read();

  arr[1] = arr[1] * 1.309804 + 1500;
  arr[2] = arr[2] * 1.309804 + 1500;
  arr[3] = arr[3] * 1.309804 + 1500;

  servo_starboard.writeMicroseconds((int)arr[3]);
  servo_port.writeMicroseconds((int)(3000 - arr[3]));
  servo_elevator.writeMicroseconds((int)arr[1]);
  servo_rudder.writeMicroseconds(1500);

}
