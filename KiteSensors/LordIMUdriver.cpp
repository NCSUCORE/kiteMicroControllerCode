/**
 * CORE Lab Ocean Kite Project
 * @file LordIMUdriver.cpp
 * @author Zachary B Leonard (zbleonar)
 * 
 * UART driver for Lord 3DM-CX5-25 IMU
 */

#include <HardwareSerial.h>
#include <stdint.h>

//Rx = 33  Tx = 27
HardwareSerial Serial3327(2);

void checksum(uint8_t *cmd, uint8_t cmdLen);

void imuSerialFlush()
{
  Serial3327.flush();
}

uint8_t imuSerialAvailable()
{
  return Serial3327.available();
}

uint8_t imuGetData()
{
  while(imuSerialAvailable() == 0) {
    //do nothing
  }
  return Serial3327.read();
}

uint8_t imuSetBaud(uint32_t baud)
{
  //Declare variables
  uint8_t response;
  uint8_t temp;
  uint8_t imuSetupCmdLen = 13;
  uint8_t* imuSetupCmd = (uint8_t*)malloc(sizeof(uint8_t)*imuSetupCmdLen);
  imuSetupCmd[0] = 0x75; //Sync1
  imuSetupCmd[1] = 0x65; //Sync2
  imuSetupCmd[2] = 0x0C; //Desc. Set
  imuSetupCmd[3] = 0x07; //Payload length
  imuSetupCmd[4] = 0x07; //Field length
  imuSetupCmd[5] = 0x40; //Field desc.
  imuSetupCmd[6] = 0x01; //Use new settings
  imuSetupCmd[7] = (uint8_t)((baud & 0xFF000000) >> 6*4); //Baud Byte 1 MSB
  imuSetupCmd[8] = (uint8_t)((baud & 0x00FF0000) >> 4*4); //Baud Byte 2
  imuSetupCmd[9] = (uint8_t)((baud & 0x0000FF00) >> 2*4); //Baud Byte 3
  imuSetupCmd[10] = (uint8_t)(baud & 0x000000FF); //Baud Btye 4 LSB
  checksum(imuSetupCmd, imuSetupCmdLen);

  //Setup IMU data ouput
  do {
    for (int i = 0; i < imuSetupCmdLen; i++) {
      Serial3327.write(imuSetupCmd[i]);
    }
    temp = Serial3327.read(); //Read from IMU
  } while( temp != 0x75 );
  free(imuSetupCmd);
  response = Serial3327.read();

  //Error check ack/nack response
  if (response == 0x65) {
    response = Serial3327.read();
  } else {
    return 0xFF;
  }
  if (response == 0x0C) {
    response = Serial3327.read();
  } else {
    return 0xFE;
  }
  if (response == 0x04) {
    response = Serial3327.read();
  } else {
    return 0xFD;
  }
  if (response == 0x04) {
    response = Serial3327.read();
  } else {
    return 0xFC;
  }
  if (response == 0xF1) {
    response = Serial3327.read();
  } else {
    return 0xFB;
  }
  if (response == 0x40) {
    response = Serial3327.read();
  } else {
    return 0xFA;
  }
  if (response == 0x00) {
    response = Serial3327.read();
  } else {
    return 0xF9;
  }
  if (response == 0x1F) {
    response = Serial3327.read();
  } else {
    return 0xF8;
  }
  if (response == 0x2A) {
    return 0x00;
  } else {
    return 0xF7;
  }

}

uint8_t imuDataSetup()
{
  //Declare variables
  uint8_t response;
  uint8_t temp;
  uint8_t imuSetupCmdLen = 16;
  uint8_t* imuSetupCmd = (uint8_t*)malloc(sizeof(uint8_t)*imuSetupCmdLen);
  imuSetupCmd[0] = 0x75; //Sync1
  imuSetupCmd[1] = 0x65; //Sync2
  imuSetupCmd[2] = 0x0C; //Desc. Set
  imuSetupCmd[3] = 0x0A; //Payload length
  imuSetupCmd[4] = 0x0A; //Field length
  imuSetupCmd[5] = 0x08; //Field desc.
  imuSetupCmd[6] = 0x01; //Use new settings
  imuSetupCmd[7] = 0x02; //Num settings
  imuSetupCmd[8] = 0x0C; //Setting 1 descriptor = Complementary Filter Euler Angles
  imuSetupCmd[9] = 0x00; //Setting 1 rate byte 1 MSB
  imuSetupCmd[10] = 0x0A; //Setting 1 rate byte 2 LSB (0x0A = 100Hz) (0x14 = 50Hz) (0xC8 = 25Hz) 
  imuSetupCmd[11] = 0x05; //Setting 2 descriptor = Scaled Gyro Vector
  imuSetupCmd[12] = 0x00; //Setting 2 rate byte 1 MSB
  imuSetupCmd[13] = 0x0A; //Setting 2 rate byte 2 LSB (0x0A = 100Hz) (0x14 = 50Hz) (0x28 = 25Hz) (0xC8 = 25Hz) 
  checksum(imuSetupCmd, imuSetupCmdLen);

  //Setup IMU data ouput
  do {
    for (int i = 0; i < imuSetupCmdLen; i++) {
      Serial3327.write(imuSetupCmd[i]);
    }
    temp = Serial3327.read(); //Read from IMU
  } while( temp != 0x75 );
  free(imuSetupCmd);
  response = Serial3327.read();

  //Error check ack/nack response
  if (response == 0x65) {
    response = Serial3327.read();
  } else {
    return 0xFF;
  }
  if (response == 0x0C) {
    response = Serial3327.read();
  } else {
    return 0xFE;
  }
  if (response == 0x04) {
    response = Serial3327.read();
  } else {
    return 0xFD;
  }
  if (response == 0x04) {
    response = Serial3327.read();
  } else {
    return 0xFC;
  }
  if (response == 0xF1) {
    response = Serial3327.read();
  } else {
    return 0xFB;
  }
  if (response == 0x08) {
    response = Serial3327.read();
  } else {
    return 0xFA;
  }
  if (response == 0x00) {
    response = Serial3327.read();
  } else {
    return 0xF9;
  }
  if (response == 0xE7) {
    response = Serial3327.read();
  } else {
    return 0xF8;
  }
  if (response == 0xBA) {
    return 0x00;
  } else {
    return 0xF7;
  }

}

uint8_t imuIdle()
{
  //Declare variables
  uint8_t response;
  uint8_t temp;
  uint8_t imuSetupCmdLen = 8;
  uint8_t* imuSetupCmd = (uint8_t*)malloc(sizeof(uint8_t)*imuSetupCmdLen);
  imuSetupCmd[0] = 0x75; //Sync1
  imuSetupCmd[1] = 0x65; //Sync2
  imuSetupCmd[2] = 0x01; //Desc. Set
  imuSetupCmd[3] = 0x02; //Payload length
  imuSetupCmd[4] = 0x02; //Field length
  imuSetupCmd[5] = 0x02; //Field desc.
  checksum(imuSetupCmd, imuSetupCmdLen);

  //Setup IMU data ouput
//do {
    for (int i = 0; i < imuSetupCmdLen; i++) {
      Serial3327.write(imuSetupCmd[i]);
    }
    temp = Serial3327.read(); //Read from IMU
//} while( temp != 0x75 );
  free(imuSetupCmd);
  response = Serial3327.read();

/*//Error check ack/nack response
  if (response == 0x65) {
    response = Serial3327.read();
  } else {
    return 0xFF;
  }
  if (response == 0x01) {
    response = Serial3327.read();
  } else {
    return 0xFE;
  }
  if (response == 0x04) {
    response = Serial3327.read();
  } else {
    return 0xFD;
  }
  if (response == 0x04) {
    response = Serial3327.read();
  } else {
    return 0xFC;
  }
  if (response == 0xF1) {
    response = Serial3327.read();
  } else {
    return 0xFB;
  }
  if (response == 0x02) {
    response = Serial3327.read();
  } else {
    return 0xFA;
  }
  if (response == 0x00) {
    response = Serial3327.read();
  } else {
    return 0xF9;
  }
  if (response == 0xD6) {
    response = Serial3327.read();
  } else {
    return 0xF8;
  }
  if (response == 0x6C) {
    return 0x00;
  } else {
    return 0xF7;
  }
*/
}

uint8_t imuEnable()
{
  //Declare variables
  uint8_t response;
  uint8_t temp;
  uint8_t imuSetupCmdLen = 16;
  uint8_t* imuSetupCmd = (uint8_t*)malloc(sizeof(uint8_t)*imuSetupCmdLen);
  imuSetupCmd[0] = 0x75; //Sync1
  imuSetupCmd[1] = 0x65; //Sync2
  imuSetupCmd[2] = 0x0C; //Desc. Set
  imuSetupCmd[3] = 0x0A; //Payload length
  imuSetupCmd[4] = 0x05; //Field length
  imuSetupCmd[5] = 0x11; //Field desc.
  imuSetupCmd[6] = 0x01; //Data (function)
  imuSetupCmd[7] = 0x01; //Data (IMU)
  imuSetupCmd[8] = 0x01; //Data (On)
  imuSetupCmd[9] = 0x05; //Field length 2
  imuSetupCmd[10] = 0x11; //Field desc. 2
  imuSetupCmd[11] = 0x01; //Data (function)
  imuSetupCmd[12] = 0x03; //Data (Estimation filter)
  imuSetupCmd[13] = 0x01; //Data (On)
  checksum(imuSetupCmd, imuSetupCmdLen);

  //Setup IMU data ouput
  //do {
    for (int i = 0; i < imuSetupCmdLen; i++) {
      Serial3327.write(imuSetupCmd[i]);
    }
    temp = Serial3327.read(); //Read from IMU
  //} while( temp != 0x75 );
  free(imuSetupCmd);
  response = Serial3327.read();

/*//Error check ack/nack response
  if (response == 0x65) {
    response = Serial3327.read();
  } else {
    return 0xFF;
  }
  if (response == 0x0C) {
    response = Serial3327.read();
  } else {
    return 0xFE;
  }
  if (response == 0x08) {
    response = Serial3327.read();
  } else {
    return 0xFD;
  }
  if (response == 0x04) {
    response = Serial3327.read();
  } else {
    return 0xFC;
  }
  if (response == 0xF1) {
    response = Serial3327.read();
  } else {
    return 0xFB;
  }
  if (response == 0x11) {
    response = Serial3327.read();
  } else {
    return 0xFA;
  }
  if (response == 0x00) {
    response = Serial3327.read();
  } else {
    return 0xF9;
  }
  if (response == 0x04) {
    response = Serial3327.read();
  } else {
    return 0xF8;
  }
  if (response == 0xF1) {
    response = Serial3327.read();
  } else {
    return 0xF7;
  }
  if (response == 0x11) {
    response = Serial3327.read();
  } else {
    return 0xFA;
  }
  if (response == 0x00) {
    response = Serial3327.read();
  } else {
    return 0xFA;
  }
  if (response == 0xFA) {
    response = Serial3327.read();
  } else {
    return 0xFA;
  }
  if (response == 0xB5) {
    return 0x00;
  } else {
    return 0xF9;
  }
*/
}
uint8_t imuInit(uint32_t baud)
{
  //Initialize UART on Huzzah32
  Serial3327.begin(115200, SERIAL_8N1, 33, 27);

  //Idle IMU during setup
  //imuIdle();

  //Change the baud rate
  uint8_t temp = 0x01;
  do {
    temp = imuSetBaud(baud);
  } while (temp != 0x00);
  delay(250);

  //Reinitialize UART on Huzzah32 with desired baud rate
  Serial3327.end();
  Serial3327.begin(baud, SERIAL_8N1, 33, 27);

  //Wake the IMU from idle
  //imuEnable();
  
  //Setup IMU data output information and associated frequency
  return imuDataSetup();
}

uint8_t imuInitFromSaved(uint32_t baud)
{
  Serial3327.begin(baud, SERIAL_8N1, 33, 27);
  return 0;
}

void checksum(uint8_t *cmd, uint8_t cmdLen)
{
  cmd[cmdLen - 2] = 0;
  cmd[cmdLen - 1] = 0;
  for (int i = 0; i < cmdLen - 2; i++) {
    cmd[cmdLen - 2] += cmd[i];
    cmd[cmdLen - 1] += cmd[cmdLen - 2];
  }
}

uint8_t testPing()
{
  //Declare variables
  uint8_t response;
  uint8_t temp;

  //Read response
  do {
    //Ping IMU 0x7565 0102 0201 E0C6
    Serial3327.write(0x75);
    Serial3327.write(0x65);
    Serial3327.write(0x01);
    Serial3327.write(0x02);
    Serial3327.write(0x02);
    Serial3327.write(0x01);
    Serial3327.write(0xE0);
    Serial3327.write(0xC6);
    //Read from IMU
    temp = Serial3327.read();
  } while( temp != 0x75 );

  response = Serial3327.read();

  if (response == 0x65) {
    response = Serial3327.read();
  } else {
    return 0xFF;
  }
  if (response == 0x01) {
    response = Serial3327.read();
  } else {
    return 0xFE;
  }
  if (response == 0x04) {
    response = Serial3327.read();
  } else {
    return 0xFD;
  }
  if (response == 0x04) {
    response = Serial3327.read();
  } else {
    return 0xFC;
  }
  if (response == 0xf1) {
    response = Serial3327.read();
  } else {
    return 0xFB;
  }
  if (response == 0x01) {
    response = Serial3327.read();
  } else {
    return 0xFA;
  }
  if (response == 0x00) {
    response = Serial3327.read();
  } else {
    return 0xF9;
  }
  if (response == 0xd5) {
    response = Serial3327.read();
  } else {
    return 0xF8;
  }
  if (response == 0x6a) {
    return 0x00;
  } else {
    return 0xF7;
  }
}

uint8_t imuSave()
{
  //Declare variables
  uint8_t response;
  uint8_t temp;
  uint8_t imuSetupCmdLen = 14;
  uint8_t* imuSetupCmd = (uint8_t*)malloc(sizeof(uint8_t)*imuSetupCmdLen);
  imuSetupCmd[0] = 0x75; //Sync1
  imuSetupCmd[1] = 0x65; //Sync2
  imuSetupCmd[2] = 0x0C; //Desc. Set
  imuSetupCmd[3] = 0x08; //Payload length
  imuSetupCmd[4] = 0x04; //Field length
  imuSetupCmd[5] = 0x08; //Field desc.
  imuSetupCmd[6] = 0x03;
  imuSetupCmd[7] = 0x00;
  imuSetupCmd[8] = 0x04;
  imuSetupCmd[9] = 0x0A;
  imuSetupCmd[10] = 0x03;
  imuSetupCmd[11] = 0x00;
  checksum(imuSetupCmd, imuSetupCmdLen);

  //Setup IMU data ouput
  for (int i = 0; i < imuSetupCmdLen; i++) {
    Serial3327.write(imuSetupCmd[i]);
  }
  free(imuSetupCmd);
//while( temp != 0x75 ) {
//  response = Serial3327.read();
//}
//TODO Error check ack/nack response
  return 0;
}

uint8_t imuNextCFeulerPlusGyro(uint32_t *x, uint32_t *y, uint32_t *z, uint32_t *wx, uint32_t *wy, uint32_t *wz)
{
  //Declare variables
  uint8_t lenPayload;
  uint8_t MIPdata[50]; //TODO reduce to 30 TODO
  uint8_t MIPindex;
  uint8_t len;
  uint32_t *states[] = {y,z,x,wy,wz,wx};
  
  //Reset buffers for next MIP
  imuSerialFlush();
  MIPindex = 0;
  
  //Recieve CF MIP
  MIPdata[MIPindex] = imuGetData();
  if(MIPdata[MIPindex++] == 0x75) {
    MIPdata[MIPindex] = imuGetData();
    if(MIPdata[MIPindex++] == 0x65) {
      MIPdata[MIPindex] = imuGetData();
      if(MIPdata[MIPindex++] == 0x80) {
        MIPdata[MIPindex++] = imuGetData();//total length
        
        //Recieve first payload (Euler angles)
        MIPdata[MIPindex] = imuGetData();//length
        len = MIPdata[MIPindex++] - 2;
        MIPdata[MIPindex++] = imuGetData();//cmd desc TODO
        for(int i = 0; i < len; i++) { //TODO
          MIPdata[MIPindex++] = imuGetData();
        }

        //Store Euler angles
        for(int i = 0; i < 3; i++) {
            *states[i] = 0x00000000;
          for(int j = 0; j < 4; j++) {
            *states[i] |= MIPdata[4*i+j+6] << 8*(3-j);
          }
        }
        
        //Recieve second payload (gyro rates)
        MIPdata[MIPindex] = imuGetData();//length
        len = MIPdata[MIPindex++] - 2;
        MIPdata[MIPindex++] = imuGetData();//cmd desc TODO
        for(int i = 0; i < len; i++) { //TODO
          MIPdata[MIPindex++] = imuGetData();
        }

        //Store gyro rates
        for(int i = 3; i < 6; i++) {
            *states[i] = 0x00000000;
          for(int j = 0; j < 4; j++) {
            *states[i] |= MIPdata[4*i+j+8] << 8*(3-j);
          }
        }
        
        //Calculate checksum and error check it with actual checksum
        checksum(MIPdata, MIPindex + 2);
        if(MIPdata[MIPindex++] == imuGetData()) {
          if(MIPdata[MIPindex] == imuGetData()) {
            return 0x00;
          }
        } else {
          return 0xFF;
        }
      }
    }
  }
}

uint8_t imuNextEKFplusGyro(uint32_t *x, uint32_t *y, uint32_t *z, uint32_t *wx, uint32_t *wy, uint32_t *wz)
{
  //Declare variables
  uint8_t lenPayload;
  uint8_t MIPdata[30]; //TODO reduce to 30 TODO
  uint8_t MIPindex;
  uint8_t len;
  uint32_t *states[] = {x,y,z,wx,wy,wz};
  
  //Flush buffer
  imuSerialFlush();

  for(int a = 0; a < 2; a++) {
    MIPindex = 0;
    MIPdata[MIPindex] = imuGetData();
    if(MIPdata[MIPindex++] == 0x75) {
      MIPdata[MIPindex] = imuGetData();
      if(MIPdata[MIPindex++] == 0x65) {
        MIPdata[MIPindex] = imuGetData();
        if(MIPdata[MIPindex] == 0x80) { //Recieve Gyro MIP
          MIPindex++;
          MIPdata[MIPindex++] = imuGetData();//total length
          
          //Recieve payload (gyro rates)
          MIPdata[MIPindex] = imuGetData();//length
          len = MIPdata[MIPindex++] - 2;
          MIPdata[MIPindex++] = imuGetData();//cmd desc TODO
          for(int i = 0; i < len; i++) { //TODO
            MIPdata[MIPindex++] = imuGetData();
          }
  
          //Store gyro rates
          for(int i = 0; i < 3; i++) {
              *states[i+3] = 0x00000000;
            for(int j = 0; j < 4; j++) {
              *states[i+3] |= MIPdata[4*i+j+6] << 8*(3-j);
            }
          }
          
          //Calculate checksum and error check it with actual checksum
          checksum(MIPdata, MIPindex + 2);
          if(MIPdata[MIPindex++] == imuGetData()) {
            if(MIPdata[MIPindex] == imuGetData()) {
              // do nothing
            } else {
              return 0xFF;
            }
          }

        } else if (MIPdata[MIPindex] == 0x82) { //Recieve EKF Euler MIP
          MIPindex++;
          MIPdata[MIPindex++] = imuGetData();//total length
          
          //Recieve payload (Euler angles)
          MIPdata[MIPindex] = imuGetData();//length
          len = MIPdata[MIPindex++] - 2;
          MIPdata[MIPindex++] = imuGetData();//cmd desc TODO
          for(int i = 0; i < len; i++) { //TODO
            MIPdata[MIPindex++] = imuGetData();
          }
  
          //Store Euler angles
          for(int i = 0; i < 3; i++) {
              *states[i] = 0x00000000;
            for(int j = 0; j < 4; j++) {
              *states[i] |= MIPdata[4*i+j+6] << 8*(3-j);
            }
          }
          
          //Calculate checksum and error check it with actual checksum
          checksum(MIPdata, MIPindex + 2);
          if(MIPdata[MIPindex++] == imuGetData()) {
            if(MIPdata[MIPindex] == imuGetData()) {
              // do nothing
            } else {
              return 0xFF;
            }
          }
        }
      }
    }
  }
}
