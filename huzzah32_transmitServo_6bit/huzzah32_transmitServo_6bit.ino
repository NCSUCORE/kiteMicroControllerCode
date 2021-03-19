#include <SoftwareSerial.h>
//#include <AltSoftSerial.h>
#include <Servo.h>

//AltSoftSerial mySerial;
SoftwareSerial mySerial(16, 17); //RX and TX pins on the Nano

Servo servo_starboard;
Servo servo_port;
Servo servo_elevator;
Servo servo_rudder;

int num0;
int num1;
int num2;
int num3;
int num4;
int valid;
int var;
int starboard_angle;
int port_angle;
int elevator_angle;
int rudder_angle;
int strt,flag;
int arr[6];

//char st[100];

void setup() {

  Serial.begin(38400);


  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  mySerial.begin(38400);

  servo_starboard.attach(14);
  servo_port.attach(12);
  servo_elevator.attach(32);
  servo_rudder.attach(15);

  servo_starboard.write(90);
  servo_port.write(90);
  servo_elevator.write(90);
  servo_rudder.write(90);

  Serial.println("Beginning code.");
  flag = 0;

}

void loop() {

if (mySerial.available()){
    if(flag>5) {
    

    num1 = 10*arr[0] + arr[1];
    num2 = 10*arr[2] + arr[3];
    num3 = 10*arr[4] + arr[5];

    
//Printing the three 2-digit numbers received followed by the angles that the servos are programmed to
    Serial.print(num1);
    Serial.print(", ");
    Serial.print(num2);
    Serial.print(", ");
    Serial.print(num3);
    Serial.print("\t\t\t");
    Serial.print(2*num1 - 20);
    Serial.print(", ");
    Serial.print(2*num2 - 20);
    Serial.print(", ");
    Serial.print(2*num3 - 20);
    Serial.print(", ");
    Serial.println(200 - 2*num3);

//    starboard_angle = performance(arr[0]);
//    port_angle = performance(arr[1]);
//    elevator_angle = performance(arr[2]);
//    rudder_angle = performance(arr[3]);

    servo_starboard.write(2*num3 - 20);     
    servo_port.write(200 - 2*num3);      
    servo_elevator.write(2*num1 - 20);
    servo_rudder.write(2*num2 - 20);
//    delay(10);
    
      flag=0;
    }
    arr[flag] = mySerial.read();
    arr[flag]-=48;
    flag++;

}

}
