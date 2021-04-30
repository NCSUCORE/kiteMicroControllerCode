#include <Servo.h>

Servo servo_starboard;
Servo servo_elevator;
Servo servo_rudder;
Servo servo_port;

int period = 0;
int counter = 0;


void setup() {

  servo_starboard.attach(14);
  servo_elevator.attach(32);
  servo_rudder.attach(15);
  servo_port.attach(12);

  servo_starboard.writeMicroseconds(1500);
  servo_elevator.writeMicroseconds(1500);
  servo_rudder.writeMicroseconds(1500);
  servo_port.writeMicroseconds(1500);
}

void loop() {

  period = 5000;

//  servo_elevator.writeMicroseconds(1500);
//  servo_rudder.writeMicroseconds(1500);

  while (counter < 1){
    
    servo_starboard.writeMicroseconds(1380);
    servo_port.writeMicroseconds(1620);
    delay(period);
    servo_starboard.writeMicroseconds(1620);
    servo_port.writeMicroseconds(1380);
    delay(period);
    
    
    }

}
