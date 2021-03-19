/**
 * CORE Lab Ocean Kite Project
 * @file LordIMUdriver.h
 * @author Zachary B Leonard (zbleonar)
 * 
 * UART driver header file for Lord 3DM-CX5-25 IMU
 */

/**
 * Initialize communication with IMU over UART
 * @param aptr Void Pointer which must be a pointer to a Problem. TODO
 * @param bptr Void Pointer which must be a pointer to a Problem to compare against. TODO
 * @return int 0 if initialize success. TODO
 */
uint8_t imuInit(uint32_t baud);

uint8_t imuInitFromSaved(uint32_t baud);

uint8_t imuNextCFeulerPlusGyro(uint32_t *x, uint32_t *y, uint32_t *z, uint32_t *wx, uint32_t *wy, uint32_t *wz);

uint8_t imuNextEKFplusGyro(uint32_t *x, uint32_t *y, uint32_t *z, uint32_t *wx, uint32_t *wy, uint32_t *wz);

uint8_t testPing();

void checksum(uint8_t *cmd, uint8_t cmdLen);

uint8_t imuGetData();

uint8_t imuSerialAvailable();

uint8_t imuIdle();

uint8_t imuEnable();

void imuSerialFlush();

uint8_t imuSave();
