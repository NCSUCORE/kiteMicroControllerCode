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

  servo_starboard.writeMicroseconds(1500);
  servo_port.write(1500);
  servo_elevator.write(1500);
  servo_rudder.write(1500);

  Serial.println("Beginning code.");
  flag = 0;

}

void loop() {

if (mySerial.available()){
    if(flag>5) {
    

    num1 = 10*arr[0] + arr[1];
    num2 = 10*arr[2] + arr[3];
    num3 = 10*arr[4] + arr[5];

//Note on servo.WriteMicroseconds()
//The max counter clockwise value is 1000, the max clockwise value is 2000 and 1500 is in the middle
//To limit travel choose a range with 1500 as the middle, eg 1300-1700
//Once this is done, create an algorithm to map 10 to the lower limit and 100 to the higher limit
//Keep in mind the limitations of the int datatype when creating the algorithm

//Current range is 1000-2000, alg is (100*num1 + 8000)/9
//Printing the three 2-digit numbers received followed by the angles that the servos are programmed to
    Serial.print(num1);
    Serial.print(", ");
    Serial.print(num2);
    Serial.print(", ");
    Serial.print(num3);
    Serial.print("\t\t\t");
    Serial.print((100*num1 + 8000)/9);
    Serial.print(", ");
    Serial.print((100*num2 + 8000)/9);
    Serial.print(", ");
    Serial.print((100*num3 + 8000)/9);
    Serial.print(", ");
    Serial.println(3000 - ((100*num3 + 8000)/9));

//    starboard_angle = performance(arr[0]);
//    port_angle = performance(arr[1]);
//    elevator_angle = performance(arr[2]);
//    rudder_angle = performance(arr[3]);

    servo_starboard.writeMicroseconds((100*num3 + 8000)/9);     
    servo_port.writeMicroseconds(3000 - ((100*num3 + 8000)/9));      
    servo_elevator.writeMicroseconds((100*num1 + 8000)/9);
    servo_rudder.writeMicroseconds((100*num3 + 8000)/9);
//    delay(10);
    
      flag=0;
    }
    arr[flag] = mySerial.read();
    arr[flag]-=48;
    flag++;

}

}
