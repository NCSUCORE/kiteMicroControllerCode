/**
   CORE Lab Ocean Kite Project
   @file KiteSensor.ino
   @author Zachary B Leonard (zbleonar)

   Developed from Final_Result.ino

   Recieves data from kite's imu and depth sensors.
   Sends data over UART to UART-RS485 converter.
*/
#include "LordIMUdriver.h" // for IMU
#include "MS5837_CORE.h" // for pressure sensor
#include <Wire.h>
//#include <Adafruit_Sensor.h> //TODO is this needed?
#include <HardwareSerial.h>

//MS5837 sensor; // Initializing the BAR02 sensor //TODO change the name from sensor to something better

HardwareSerial SerialRxTx(1); //RX, TX

uint8_t resp;

unsigned long timer0; //TODO delete?

union Data {
  uint32_t i;
  float f;
};
//temp
union Data t;
//euler angles
union Data x;
union Data y;
union Data z;
//gyro rates
union Data wx;
union Data wy;
union Data wz;
//acc
union Data ax;
union Data ay;
union Data az;

int t1;
int t2;

int IMUindex = 0;

char sgData[150]; //TODO delete this!

void setup()
{
  // Set up IMU
  resp = imuInitFromSaved(921600); //Baud rates: 9600,19200,115200,230400,460800,921600

  // Set up UART output to external RS485 module
  SerialRxTx.begin(115200); //This is the software serial connected to the RX and TX pins. We can't see the output in the COM ports.  //TODO increase by switching to HW serial TODO
//Serial.begin(230400);//TEST
//Serial.println("test");

  // Set up I2C depth sensor input
//  Wire.begin();
//  while (!sensor.init()) {
//    delay(5000);
//  }
//  sensor.setModel(MS5837::MS5837_02BA);
//  sensor.setFluidDensity(998.2); // kg/m^3 (freshwater, 1029 for seawater)

  // Delay before running loop()
  delay(1000);

  // Get first depth sensor reading
//  sensor.readPT1();
//  delay(20);
//  sensor.readPT2();
//  delay(20);
//  sensor.readPT3();

//  p.f = sensor.pressure();
//  d.f = sensor.depth();

  // Light red LED
  pinMode(13, OUTPUT);  //Used for checking if UART to RS485 transceiver is working (switching on the LED)
  digitalWrite(13, HIGH);
}

void nextIMUsample() {
  // Get next imu packet
  imuNext(&x.i, &y.i, &z.i, &wx.i, &wy.i, &wz.i, &ax.i, &ay.i, &az.i);
  //  x.f *= 180/3.14159;
  //  y.f *= 180/3.14159;
  //  z.f *= 180/3.14159;
  //  wx.f *= 180/3.14159;
  //  wy.f *= 180/3.14159;
  //  wz.f *= 180/3.14159;
}

void writeToSpeedgoat() {
  SerialRxTx.write(0x47);
  SerialRxTx.write(0xBB);
  SerialRxTx.write(0x3C);
  SerialRxTx.write(0x2B);
//  Serial.printf("%d",x.i >> 24);
//  Serial.printf("%d",x.i >> 16);
//  Serial.printf("%d",x.i >> 8);
//  Serial.printf("%d",x.i);
//
//  Serial.printf("%d",y.i >> 24);
//  Serial.printf("%d",y.i >> 16);
//  Serial.printf("%d",y.i >> 8);
//  Serial.printf("%d",y.i);
//
//  Serial.printf("%d",z.i >> 24);
//  Serial.printf("%d",z.i >> 16);
//  Serial.printf("%d",z.i >> 8);
//  Serial.printf("%d",z.i);
  
  SerialRxTx.write(x.i >> 24);
  SerialRxTx.write(x.i >> 16);
  SerialRxTx.write(x.i >> 8);
  SerialRxTx.write(x.i);

  SerialRxTx.write(y.i >> 24);
  SerialRxTx.write(y.i >> 16);
  SerialRxTx.write(y.i >> 8);
  SerialRxTx.write(y.i);

  SerialRxTx.write(z.i >> 24);
  SerialRxTx.write(z.i >> 16);
  SerialRxTx.write(z.i >> 8);
  SerialRxTx.write(z.i);

  SerialRxTx.write(wx.i >> 24);
  SerialRxTx.write(wx.i >> 16);
  SerialRxTx.write(wx.i >> 8);
  SerialRxTx.write(wx.i);

  SerialRxTx.write(wy.i >> 24);
  SerialRxTx.write(wy.i >> 16);
  SerialRxTx.write(wy.i >> 8);
  SerialRxTx.write(wy.i);

  SerialRxTx.write(wz.i >> 24);
  SerialRxTx.write(wz.i >> 16);
  SerialRxTx.write(wz.i >> 8);
  SerialRxTx.write(wz.i);

  SerialRxTx.write(ax.i >> 24);
  SerialRxTx.write(ax.i >> 16);
  SerialRxTx.write(ax.i >> 8);
  SerialRxTx.write(ax.i);

  SerialRxTx.write(ay.i >> 24);
  SerialRxTx.write(ay.i >> 16);
  SerialRxTx.write(ay.i >> 8);
  SerialRxTx.write(ay.i);

  SerialRxTx.write(az.i >> 24);
  SerialRxTx.write(az.i >> 16);
  SerialRxTx.write(az.i >> 8);
  SerialRxTx.write(az.i);
//  Serial.println("g");
//  SerialRxTx.write(t.i >> 24);
//  SerialRxTx.write(t.i >> 16);
//  SerialRxTx.write(t.i >> 8);
//  SerialRxTx.write(t.i);
  
}

void loop()
{
//Serial.println("A");
  // Wait for IMU sample
  //imuSerialFlush();
  while (imuSerialAvailable() < 54) { //54
//    delayMicroseconds(100);
    delay(1);
  }
//Serial.println("B");
  // Begin next depth sensor reading and get timer start time
//  sensor.readPT1(); //need to do work for ??ms after this call

  // Get and transmit an IMU sample
  nextIMUsample(); // Get an IMU sample
//  writeToSpeedgoat(); // Transmit IMU and old pressure data
//Serial.println("C");
  // Wait for depth sensor
//  delayMicroseconds(700);
//  delay(2);

  // Continue next depth sensor reading
//  sensor.readPT2(); //need to do work for ??ms after this call

  // Wait for depth sensor
//  delayMicroseconds(700);
//  delay(2);

  // Finish depth sensor calc and get depth sensor reading
//  sensor.readPT3();
//  p.f = sensor.pressure();
//  d.f = sensor.depth();
  writeToSpeedgoat(); // Transmit pressure data and old IMU data
  //Serial.println("D");
}
