/**
 * CORE Lab Ocean Kite Project
 * @file LordIMUSaveSettings.ino
 * @author Zachary B Leonard (zbleonar)
 * 
 * Sets up IMU for kite project and saves the settings
 * so that the IMU does not need to be initalized each
 * time the kite is powered on.
 */
#include "LordIMUdriver.h" // for IMU

uint8_t resp;

void setup()
{
  // Set up IMU
  imuIdle();
  resp = imuInit(115200); //Baud rates: 9600,19200,115200,230400,460800,921600
  imuEnable();

  // Save IMU settings
  imuSave();
  
  // Switch on the LED
  pinMode(13, OUTPUT);
  digitalWrite(13,HIGH);
}

void loop()
{

}
