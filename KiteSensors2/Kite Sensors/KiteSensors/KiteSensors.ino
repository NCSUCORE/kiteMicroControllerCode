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
#include "Wire.h"
#include <Adafruit_Sensor.h> //TODO is this needed?
#include <HardwareSerial.h>

MS5837 sensor; // Initializing the pressure sensor //TODO change the name from sensor to something better

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
//pressure
union Data p;

//pressure sensor index
int pIndex = 0;

//send arrays
uint8_t arrSendIMU[40];
uint8_t arrSendPressure[4];

int t1;
int t2;

int IMUindex = 0;

char sgData[150]; //TODO delete this!

void setup()
{

  //Serial.begin(1000000);
  //Serial.println("Starting...");

  // Set up IMU
  resp = imuInitFromSaved(921600, 0x80); //Baud rates: 9600,19200,115200,230400,460800,921600 //filterHeaders: 0x82=EKF 0x80=CF

  // Set up UART output to external RS485 module
  SerialRxTx.begin(115200); //This is the UART connected to the RX and TX pins

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
  sensor.readPT1();
  delay(20);
  sensor.readPT2();
  delay(20);
  sensor.readPT3();

  p.f = sensor.pressure();
//  d.f = sensor.depth();

  // Light red LED
  pinMode(13, OUTPUT);  //Used for checking if UART to RS485 transceiver is working (switching on the LED)
  digitalWrite(13, HIGH);

  //sensor.readPT1();
  // Flush IMU serial reading UART buffer
  imuSerialFlush();
}

void nextIMUsample() {
//  if (imuSerialAvailable() > 100) {
//    imuSerialFlush();
//  }
  // Wait for IMU sample
  while (imuSerialAvailable() < 54) { //54
    delayMicroseconds(1000);
    //delay(2);
  }
  // Get next imu packet
  imuNext(&x.i, &y.i, &z.i, &wx.i, &wy.i, &wz.i, &ax.i, &ay.i, &az.i);
}

void writeToSpeedgoatIMU() {
//  Serial.printf("%f\n",x.f);
//  Serial.printf("%f\n",y.f);
//  Serial.printf("%f\n",z.f);
//
//  Serial.printf("%f\n",wx.f);
//  Serial.printf("%f\n",wy.f);
//  Serial.printf("%f\n",wz.f);
//
//  Serial.printf("%f\n",ax.f);
//  Serial.printf("%f\n",ay.f);
//  Serial.printf("%f\n",az.f);
  
  SerialRxTx.write(0x47);
  SerialRxTx.write(0xBB);
  SerialRxTx.write(0x3C);
  SerialRxTx.write(0x2B);

  SerialRxTx.write(x.i >> 24);
  arrSendIMU[0] = x.i >> 24;
  SerialRxTx.write(x.i >> 16);
  arrSendIMU[1] = x.i >> 16;
  SerialRxTx.write(x.i >> 8);
  arrSendIMU[2] = x.i >> 8;
  SerialRxTx.write(x.i);
  arrSendIMU[3] = x.i;

  SerialRxTx.write(y.i >> 24);
  arrSendIMU[4] = y.i >> 24;
  SerialRxTx.write(y.i >> 16);
  arrSendIMU[5] = y.i >> 16;
  SerialRxTx.write(y.i >> 8);
  arrSendIMU[6] = y.i >> 8;
  SerialRxTx.write(y.i);
  arrSendIMU[7] = y.i;

  SerialRxTx.write(z.i >> 24);
  arrSendIMU[8] = z.i >> 24;
  SerialRxTx.write(z.i >> 16);
  arrSendIMU[9] = z.i >> 16;
  SerialRxTx.write(z.i >> 8);
  arrSendIMU[10] = z.i >> 8;
  SerialRxTx.write(z.i);
  arrSendIMU[11] = z.i;

  SerialRxTx.write(wx.i >> 24);
  arrSendIMU[12] = wx.i >> 24;
  SerialRxTx.write(wx.i >> 16);
  arrSendIMU[13] = wx.i >> 16;
  SerialRxTx.write(wx.i >> 8);
  arrSendIMU[14] = wx.i >> 8;
  SerialRxTx.write(wx.i);
  arrSendIMU[15] = wx.i;

  SerialRxTx.write(wy.i >> 24);
  arrSendIMU[16] = wy.i >> 24;
  SerialRxTx.write(wy.i >> 16);
  arrSendIMU[17] = wy.i >> 16;
  SerialRxTx.write(wy.i >> 8);
  arrSendIMU[18] = wy.i >> 8;
  SerialRxTx.write(wy.i);
  arrSendIMU[19] = wy.i;

  SerialRxTx.write(wz.i >> 24);
  arrSendIMU[20] = wz.i >> 24;
  SerialRxTx.write(wz.i >> 16);
  arrSendIMU[21] = wz.i >> 16;
  SerialRxTx.write(wz.i >> 8);
  arrSendIMU[22] = wz.i >> 8;
  SerialRxTx.write(wz.i);
  arrSendIMU[23] = wz.i;

  SerialRxTx.write(ax.i >> 24);
  arrSendIMU[24] = ax.i >> 24;
  SerialRxTx.write(ax.i >> 16);
  arrSendIMU[25] = ax.i >> 16;
  SerialRxTx.write(ax.i >> 8);
  arrSendIMU[26] = ax.i >> 8;
  SerialRxTx.write(ax.i);
  arrSendIMU[27] = ax.i;

  SerialRxTx.write(ay.i >> 24);
  arrSendIMU[28] = ay.i >> 24;
  SerialRxTx.write(ay.i >> 16);
  arrSendIMU[29] = ay.i >> 16;
  SerialRxTx.write(ay.i >> 8);
  arrSendIMU[30] = ay.i >> 8;
  SerialRxTx.write(ay.i);
  arrSendIMU[31] = ay.i;

  SerialRxTx.write(az.i >> 24);
  arrSendIMU[32] = az.i >> 24;
  SerialRxTx.write(az.i >> 16);
  arrSendIMU[33] = az.i >> 16;
  SerialRxTx.write(az.i >> 8);
  arrSendIMU[34] = az.i >> 8;
  SerialRxTx.write(az.i);
  arrSendIMU[35] = az.i;

  arrSendIMU[36] = 0;
  arrSendIMU[37] = 0;
  arrSendIMU[38] = 0;
  arrSendIMU[39] = 0;

  // Checksum
  uint16_t checksum = checksumCalc(arrSendIMU,40);
  SerialRxTx.write(checksum >> 8);
  SerialRxTx.write(checksum);
}

void writeToSpeedgoatPressure() {

  // Header
  SerialRxTx.write(0x58);
  SerialRxTx.write(0xCC);
  SerialRxTx.write(0x4D);
  SerialRxTx.write(0x3C);

  // Data
  SerialRxTx.write(p.i >> 24);
  arrSendPressure[0] = p.i >> 24;
  SerialRxTx.write(p.i >> 16);
  arrSendPressure[1] = p.i >> 16;
  SerialRxTx.write(p.i >> 8);
  arrSendPressure[2] = p.i >> 8;
  SerialRxTx.write(p.i);
  arrSendPressure[3] = p.i;
  //Serial.printf("%f\n",p.f);

  // Checksum
  uint16_t checksum = checksumCalc(arrSendPressure,4);
  SerialRxTx.write(checksum >> 8);
  SerialRxTx.write(checksum);
}

void loop()
{
  // Get and transmit an IMU sample (with old pressure data)
  nextIMUsample(); // Get an IMU sample
  //sensor.readPT2();
  writeToSpeedgoatIMU(); // Transmit IMU data
  SerialRxTx.flush();
  //if (pIndex > 1) {
    // Begin next depth sensor reading and get timer start time
    sensor.readPT1(); //need to do work for ??ms after this call
    // Wait for depth sensor
    delayMicroseconds(700);
    //delay(2);
  
    // Continue next depth sensor reading
    sensor.readPT2(); //need to do work for ??ms after this call
    // Wait for depth sensor
    delayMicroseconds(700);
    //delay(2);
  
    // Finish depth sensor calc and get depth sensor and IMU readings
    sensor.readPT3();
    p.f = sensor.pressure();
    writeToSpeedgoatPressure(); // Transmit Pressure data
    SerialRxTx.flush();
    //sensor.readPT1();
  //  pIndex = 0;
  //} else {
   // pIndex++;
 // }
}

uint16_t checksumCalc(uint8_t *cmd, uint8_t cmdLen)
{
  uint8_t checksum_b1 = 0;
  uint8_t checksum_b2 = 0;
  for (int i = 0; i < cmdLen; i++) {
    checksum_b1 += cmd[i];
    checksum_b2 += checksum_b1;
  }
  return ((uint16_t) checksum_b1 << 8) + (uint16_t) checksum_b2;
}
