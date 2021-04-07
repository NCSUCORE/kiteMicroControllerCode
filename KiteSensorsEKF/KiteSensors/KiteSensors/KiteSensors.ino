/**
 * CORE Lab Ocean Kite Project
 * @file KiteSensor.ino
 * @author Zachary B Leonard (zbleonar)
 * 
 * Developed from Final_Result.ino
 * 
 * Recieves data from kite's imu and depth sensors.
 * Sends data over UART to UART-RS485 converter.
 */
#include "LordIMUdriver.h" // for IMU
//#include "MS5837_CORE.h" // for pressure sensor
#include "MS5837.h" // for pressure sensor
#include <Wire.h>
//#include <Adafruit_Sensor.h> //TODO is this needed?
#include <HardwareSerial.h>

MS5837 sensor; // Initializing the BAR02 sensor //TODO change the name from sensor to something better

HardwareSerial SerialRxTx(1); //RX, TX

uint8_t resp;

union Data {
  uint32_t i;
  float f;  
};
union Data p;
union Data d;
union Data x;
union Data y;
union Data z;
union Data wx;
union Data wy;
union Data wz;

int t1;
int t2;

int IMUindex = 0;

char sgData[150]; //TODO delete this!

void setup()
{
  // Set up IMU
  resp = imuInitFromSaved(115200); //Baud rates: 9600,19200,115200,230400,460800,921600

  // Set up UART output to external RS485 module
  SerialRxTx.begin(115200); //This is the software serial connected to the RX and TX pins. We can't see the output in the COM ports.  //TODO increase by switching to HW serial TODO
  pinMode(13, OUTPUT);  //Used for checking if UART to RS485 transceiver is working (switching on the LED)
  digitalWrite(13,HIGH);

  // Set up I2C depth sensor input
  Wire.begin();
  while (!sensor.init()) {
    delay(5000);
  }
  sensor.setModel(MS5837::MS5837_02BA);
  sensor.setFluidDensity(998.2); // kg/m^3 (freshwater, 1029 for seawater)

  // Delay before running loop()
  delay(1000);

  // Get first depth sensor reading
  sensor.read();
  delay(20);
//  sensor.readPT2();
  delay(20);
//  sensor.readPT3();
  p.f = sensor.pressure();
  d.f = sensor.depth();
}

void nextIMUsample() {
  //Flush buffers
  imuSerialFlush();
  SerialRxTx.flush();

  // Get next imu packet
  imuNext(&x.i,&y.i,&z.i,&wx.i,&wy.i,&wz.i);
//  x.f *= 180/3.14159;
//  y.f *= 180/3.14159;
//  z.f *= 180/3.14159;
//  wx.f *= 180/3.14159;
//  wy.f *= 180/3.14159;
//  wz.f *= 180/3.14159;
}

void writeToSpeedgoat() {
  //SerialRxTx.write(0x7E);
  //SerialRxTx.write(0x96);
  //SerialRxTx.write(0x76);
  SerialRxTx.write(0x99);
  
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

  SerialRxTx.write(p.i >> 24);
  SerialRxTx.write(p.i >> 16);
  SerialRxTx.write(p.i >> 8);
  SerialRxTx.write(p.i);
  
  SerialRxTx.write(d.i >> 24);
  SerialRxTx.write(d.i >> 16);
  SerialRxTx.write(d.i >> 8);
  SerialRxTx.write(d.i);
}

void loop()
{
  // Begin next depth sensor reading
//  sensor.readPT1(); //need to do work for 20ms after this call

//  // Get and transmit 2 IMU samples (at 100Hz >=20ms)
//  for (int i = 0; i < 2; i++) {
//    nextIMUsample(); // Get an IMU sample
//    writeToSpeedgoat(); // Transmit IMU and retransmit old pressure data
//  }

  // Continue next depth sensor reading
//  sensor.readPT2(); //need to do work for 20ms after this call

//  // Get and transmit 2 IMU samples (at 100Hz >=20ms)
//  for (int i = 0; i < 2; i++) {
//    nextIMUsample(); // Get an IMU sample
//    writeToSpeedgoat(); // Transmit IMU and retransmit old pressure data
//  }

//  // Get and transmit an IMU sample
//  nextIMUsample(); // Get an IMU sample
//  writeToSpeedgoat(); // Transmit IMU and retransmit old pressure data
//
//  nextIMUsample(); // Get an IMU sample

  
  // Finish and get next depth sensor reading, get an IMU sample and transmit both samples
  sensor.read();
//  nextIMUsample(); // Get an IMU sample
  p.f = sensor.pressure();
  d.f = sensor.temperature();
  writeToSpeedgoat();
}
