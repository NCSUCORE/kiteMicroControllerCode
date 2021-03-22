/*
 * integrated_3PropControl_6bitCmd_100HzIMU_25HzP_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "integrated_3PropControl_6bitCmd_100HzIMU_25HzP".
 *
 * Model version              : 1.30
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Sun Mar 21 20:41:13 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "integrated_3PropControl_6bitCmd_100HzIMU_25HzP_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "integrated_3PropControl_6bitCmd_100HzIMU_25HzP.h"
#include "integrated_3PropControl_6bitCmd_100HzIMU_25HzP_capi.h"
#include "integrated_3PropControl_6bitCmd_100HzIMU_25HzP_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("Cast To Double1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Cast To Double2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("Cast To Double3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("ASCII Encode "),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 4, 0, TARGET_STRING("Controller/Gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 5, 0, TARGET_STRING("Controller/Gain1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 6, 0, TARGET_STRING("Controller/Gain2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 7, 0, TARGET_STRING("Controller/Gain3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 8, 0, TARGET_STRING("Controller/Gain4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 9, 0, TARGET_STRING("Controller/Gain5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 10, 0, TARGET_STRING("Controller/Gain6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 11, 0, TARGET_STRING("Controller/Gain7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 12, 0, TARGET_STRING("Controller/Gain8"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Controller/Round"),
    TARGET_STRING("pitchCmd"), 0, 1, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Controller/Round1"),
    TARGET_STRING("yawcmd"), 0, 1, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Controller/Round2"),
    TARGET_STRING("rollCmd"), 0, 1, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Controller/Saturation"),
    TARGET_STRING("rollCmd"), 0, 1, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Controller/Saturation1"),
    TARGET_STRING("yawCmd"), 0, 1, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Controller/Saturation2"),
    TARGET_STRING("pitchCmd"), 0, 1, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Controller/Add"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Controller/Add1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Controller/Add2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Controller/Add3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Controller/Add4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 24, 0, TARGET_STRING("Controller/Add5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Kite Measurements /Gain"),
    TARGET_STRING("Roll"), 0, 1, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Kite Measurements /Gain1"),
    TARGET_STRING("Pitch"), 0, 1, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Kite Measurements /Gain2"),
    TARGET_STRING("Yaw"), 0, 1, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Kite Measurements /Gain3"),
    TARGET_STRING("Roll Rate"), 0, 1, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Kite Measurements /Gain4"),
    TARGET_STRING("Pitch Rate"), 0, 1, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Kite Measurements /Gain5"),
    TARGET_STRING("Yaw Rate"), 0, 1, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Kite Measurements /FIFO bin read "),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 32, 0, TARGET_STRING("Send Receive (v3) /Rate Transition"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 33, 0, TARGET_STRING("Send Receive (v3) /Rate Transition1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 34, 0, TARGET_STRING("Send Receive (v3) /Rate Transition2"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 35, 0, TARGET_STRING("Send Receive (v3) /Rate Transition3"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 36, 0, TARGET_STRING("Send Receive (v3) /Rate Transition4"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 37, 0, TARGET_STRING("Send Receive (v3) /Rate Transition5"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 38, 0, TARGET_STRING("Send Receive (v3) /Rate Transition6"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 39, 0, TARGET_STRING("Send Receive (v3) /Rate Transition7"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 40, 0, TARGET_STRING("Send Receive (v3) /FIFO write 1/p1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 41, 0, TARGET_STRING("Send Receive (v3) /FIFO write 1/p2"),
    TARGET_STRING(""), 1, 3, 0, 0, 0 },

  { 42, 0, TARGET_STRING("Send Receive (v3) /FIFO write 2/p1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 43, 0, TARGET_STRING("Send Receive (v3) /FIFO write 2/p2"),
    TARGET_STRING(""), 1, 3, 0, 0, 0 },

  { 44, 0, TARGET_STRING("Send Receive (v3) /FIFO write 3/p1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 45, 0, TARGET_STRING("Send Receive (v3) /FIFO write 3/p2"),
    TARGET_STRING(""), 1, 3, 0, 0, 0 },

  { 46, 0, TARGET_STRING("Send Receive (v3) /FIFO write 4/p1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 47, 0, TARGET_STRING("Send Receive (v3) /FIFO write 4/p2"),
    TARGET_STRING(""), 1, 3, 0, 0, 0 },

  { 48, 0, TARGET_STRING("Controller/Saturation Dynamic/LowerRelop1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 49, 0, TARGET_STRING("Controller/Saturation Dynamic/UpperRelop"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 50, 0, TARGET_STRING("Controller/Saturation Dynamic/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 51, 0, TARGET_STRING("Controller/Saturation Dynamic/Switch2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 52, 0, TARGET_STRING("Controller/Saturation Dynamic1/LowerRelop1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 53, 0, TARGET_STRING("Controller/Saturation Dynamic1/UpperRelop"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 54, 0, TARGET_STRING("Controller/Saturation Dynamic1/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 55, 0, TARGET_STRING("Controller/Saturation Dynamic1/Switch2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 56, 0, TARGET_STRING("Controller/Saturation Dynamic2/LowerRelop1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 57, 0, TARGET_STRING("Controller/Saturation Dynamic2/UpperRelop"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 58, 0, TARGET_STRING("Controller/Saturation Dynamic2/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 59, 0, TARGET_STRING("Controller/Saturation Dynamic2/Switch2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 60, 0, TARGET_STRING("Kite Measurements /binary2double/Cast To Double1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 61, 0, TARGET_STRING("Kite Measurements /binary2double/Bit Packing "),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 62, 0, TARGET_STRING("Kite Measurements /binary2double/Bit Packing 1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 63, 0, TARGET_STRING("Kite Measurements /binary2double/Bit Packing 2"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 64, 0, TARGET_STRING("Kite Measurements /binary2double/Bit Packing 3"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 65, 0, TARGET_STRING("Kite Measurements /binary2double/Bit Packing 4"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 66, 0, TARGET_STRING("Kite Measurements /binary2double/Bitwise Operator"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 67, 0, TARGET_STRING("Kite Measurements /binary2double1/Cast To Double1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 68, 0, TARGET_STRING("Kite Measurements /binary2double1/Bit Packing "),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 69, 0, TARGET_STRING("Kite Measurements /binary2double1/Bit Packing 1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 70, 0, TARGET_STRING("Kite Measurements /binary2double1/Bit Packing 2"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 71, 0, TARGET_STRING("Kite Measurements /binary2double1/Bit Packing 3"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 72, 0, TARGET_STRING("Kite Measurements /binary2double1/Bit Packing 4"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 73, 0, TARGET_STRING("Kite Measurements /binary2double1/Bitwise Operator"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 74, 0, TARGET_STRING("Kite Measurements /binary2double2/Cast To Double1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 75, 0, TARGET_STRING("Kite Measurements /binary2double2/Bit Packing "),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 76, 0, TARGET_STRING("Kite Measurements /binary2double2/Bit Packing 1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 77, 0, TARGET_STRING("Kite Measurements /binary2double2/Bit Packing 2"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 78, 0, TARGET_STRING("Kite Measurements /binary2double2/Bit Packing 3"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 79, 0, TARGET_STRING("Kite Measurements /binary2double2/Bit Packing 4"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 80, 0, TARGET_STRING("Kite Measurements /binary2double2/Bitwise Operator"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 81, 0, TARGET_STRING("Kite Measurements /binary2double3/Cast To Double1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 82, 0, TARGET_STRING("Kite Measurements /binary2double3/Bit Packing "),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 83, 0, TARGET_STRING("Kite Measurements /binary2double3/Bit Packing 1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 84, 0, TARGET_STRING("Kite Measurements /binary2double3/Bit Packing 2"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 85, 0, TARGET_STRING("Kite Measurements /binary2double3/Bit Packing 3"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 86, 0, TARGET_STRING("Kite Measurements /binary2double3/Bit Packing 4"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 87, 0, TARGET_STRING("Kite Measurements /binary2double3/Bitwise Operator"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 88, 0, TARGET_STRING("Kite Measurements /binary2double4/Cast To Double1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 89, 0, TARGET_STRING("Kite Measurements /binary2double4/Bit Packing "),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 90, 0, TARGET_STRING("Kite Measurements /binary2double4/Bit Packing 1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 91, 0, TARGET_STRING("Kite Measurements /binary2double4/Bit Packing 2"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 92, 0, TARGET_STRING("Kite Measurements /binary2double4/Bit Packing 3"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 93, 0, TARGET_STRING("Kite Measurements /binary2double4/Bit Packing 4"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 94, 0, TARGET_STRING("Kite Measurements /binary2double4/Bitwise Operator"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 95, 0, TARGET_STRING("Kite Measurements /binary2double5/Cast To Double1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 96, 0, TARGET_STRING("Kite Measurements /binary2double5/Bit Packing "),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 97, 0, TARGET_STRING("Kite Measurements /binary2double5/Bit Packing 1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 98, 0, TARGET_STRING("Kite Measurements /binary2double5/Bit Packing 2"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 99, 0, TARGET_STRING("Kite Measurements /binary2double5/Bit Packing 3"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 100, 0, TARGET_STRING("Kite Measurements /binary2double5/Bit Packing 4"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 101, 0, TARGET_STRING("Kite Measurements /binary2double5/Bitwise Operator"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 102, 0, TARGET_STRING("Kite Measurements /binary2double6/Cast To Double1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 103, 0, TARGET_STRING("Kite Measurements /binary2double6/Bit Packing "),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 104, 0, TARGET_STRING("Kite Measurements /binary2double6/Bit Packing 1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 105, 0, TARGET_STRING("Kite Measurements /binary2double6/Bit Packing 2"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 106, 0, TARGET_STRING("Kite Measurements /binary2double6/Bit Packing 3"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 107, 0, TARGET_STRING("Kite Measurements /binary2double6/Bit Packing 4"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 108, 0, TARGET_STRING("Kite Measurements /binary2double6/Bitwise Operator"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 109, 0, TARGET_STRING("Kite Measurements /binary2double7/Cast To Double1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 110, 0, TARGET_STRING("Kite Measurements /binary2double7/Bit Packing "),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 111, 0, TARGET_STRING("Kite Measurements /binary2double7/Bit Packing 1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 112, 0, TARGET_STRING("Kite Measurements /binary2double7/Bit Packing 2"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 113, 0, TARGET_STRING("Kite Measurements /binary2double7/Bit Packing 3"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 114, 0, TARGET_STRING("Kite Measurements /binary2double7/Bit Packing 4"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 115, 0, TARGET_STRING("Kite Measurements /binary2double7/Bitwise Operator"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 116, 1, TARGET_STRING(
    "Kite Measurements /binary2double/Bit Shift1/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 117, 3, TARGET_STRING(
    "Kite Measurements /binary2double/Bit Shift2/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 118, 5, TARGET_STRING(
    "Kite Measurements /binary2double/Bit Shift3/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 119, 7, TARGET_STRING(
    "Kite Measurements /binary2double1/Bit Shift1/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 120, 9, TARGET_STRING(
    "Kite Measurements /binary2double1/Bit Shift2/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 121, 11, TARGET_STRING(
    "Kite Measurements /binary2double1/Bit Shift3/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 122, 13, TARGET_STRING(
    "Kite Measurements /binary2double2/Bit Shift1/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 123, 15, TARGET_STRING(
    "Kite Measurements /binary2double2/Bit Shift2/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 124, 17, TARGET_STRING(
    "Kite Measurements /binary2double2/Bit Shift3/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 125, 19, TARGET_STRING(
    "Kite Measurements /binary2double3/Bit Shift1/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 126, 21, TARGET_STRING(
    "Kite Measurements /binary2double3/Bit Shift2/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 127, 23, TARGET_STRING(
    "Kite Measurements /binary2double3/Bit Shift3/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 128, 25, TARGET_STRING(
    "Kite Measurements /binary2double4/Bit Shift1/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 129, 27, TARGET_STRING(
    "Kite Measurements /binary2double4/Bit Shift2/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 130, 29, TARGET_STRING(
    "Kite Measurements /binary2double4/Bit Shift3/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 131, 31, TARGET_STRING(
    "Kite Measurements /binary2double5/Bit Shift1/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 132, 33, TARGET_STRING(
    "Kite Measurements /binary2double5/Bit Shift2/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 133, 35, TARGET_STRING(
    "Kite Measurements /binary2double5/Bit Shift3/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 134, 37, TARGET_STRING(
    "Kite Measurements /binary2double6/Bit Shift1/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 135, 39, TARGET_STRING(
    "Kite Measurements /binary2double6/Bit Shift2/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 136, 41, TARGET_STRING(
    "Kite Measurements /binary2double6/Bit Shift3/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 137, 43, TARGET_STRING(
    "Kite Measurements /binary2double7/Bit Shift1/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 138, 45, TARGET_STRING(
    "Kite Measurements /binary2double7/Bit Shift2/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 139, 47, TARGET_STRING(
    "Kite Measurements /binary2double7/Bit Shift3/bit_shift"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 140, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Logical Operator"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 141, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Relational Operator"),
    TARGET_STRING(""), 0, 3, 3, 0, 1 },

  { 142, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/FIFO read 1/p1"),
    TARGET_STRING(""), 0, 5, 4, 0, 1 },

  { 143, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/FIFO read 1/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 1 },

  { 144, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/FIFO read 2/p1"),
    TARGET_STRING(""), 0, 5, 4, 0, 1 },

  { 145, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/FIFO read 2/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 1 },

  { 146, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/FIFO read 3/p1"),
    TARGET_STRING(""), 0, 5, 4, 0, 1 },

  { 147, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/FIFO read 3/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 1 },

  { 148, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/FIFO read 4/p1"),
    TARGET_STRING(""), 0, 5, 4, 0, 1 },

  { 149, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/FIFO read 4/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 1 },

  { 150, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/FIFO write 1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 151, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/FIFO write 2"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 152, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/FIFO write 3"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 153, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/FIFO write 4"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 154, 49, TARGET_STRING(
    "Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 1"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 155, 49, TARGET_STRING(
    "Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 2"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 156, 49, TARGET_STRING(
    "Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 3"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 157, 49, TARGET_STRING(
    "Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 4"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 158, 49, TARGET_STRING(
    "Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 1"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 159, 49, TARGET_STRING(
    "Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 2"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 160, 49, TARGET_STRING(
    "Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 3"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 161, 49, TARGET_STRING(
    "Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 4"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 162, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 1"),
    TARGET_STRING(""), 0, 5, 4, 0, 1 },

  { 163, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 2"),
    TARGET_STRING(""), 0, 5, 4, 0, 1 },

  { 164, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 3"),
    TARGET_STRING(""), 0, 5, 4, 0, 1 },

  { 165, 49, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 4"),
    TARGET_STRING(""), 0, 5, 4, 0, 1 },

  { 166, 49, TARGET_STRING(
    "Send Receive (v3) /ISR/doWhile/Read Int Status (v3) "),
    TARGET_STRING(""), 0, 0, 3, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 167, TARGET_STRING("Controller"),
    TARGET_STRING("ctrlSurfDefMax"), 1, 0, 0 },

  { 168, TARGET_STRING("Controller"),
    TARGET_STRING("pitchKP"), 1, 0, 0 },

  { 169, TARGET_STRING("Controller"),
    TARGET_STRING("rollKP"), 1, 0, 0 },

  { 170, TARGET_STRING("ASCII Encode "),
    TARGET_STRING("P1"), 1, 5, 0 },

  { 171, TARGET_STRING("ASCII Encode "),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 172, TARGET_STRING("ASCII Encode "),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 173, TARGET_STRING("ASCII Encode "),
    TARGET_STRING("P4"), 1, 6, 0 },

  { 174, TARGET_STRING("Controller/Gain3"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 175, TARGET_STRING("Controller/Gain4"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 176, TARGET_STRING("Controller/Gain5"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 177, TARGET_STRING("Controller/Gain6"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 178, TARGET_STRING("Controller/Gain7"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 179, TARGET_STRING("Controller/Gain8"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 180, TARGET_STRING("Controller/Saturation"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 181, TARGET_STRING("Controller/Saturation"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 182, TARGET_STRING("Controller/Saturation1"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 183, TARGET_STRING("Controller/Saturation1"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 184, TARGET_STRING("Controller/Saturation2"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 185, TARGET_STRING("Controller/Saturation2"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 186, TARGET_STRING("Euler setpoints /pitchSP"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 187, TARGET_STRING("Euler setpoints /rollSP"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 188, TARGET_STRING("Euler setpoints /yawSP"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 189, TARGET_STRING("Kite Measurements /Gain"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 190, TARGET_STRING("Kite Measurements /Gain1"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 191, TARGET_STRING("Kite Measurements /Gain2"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 192, TARGET_STRING("Kite Measurements /Gain3"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 193, TARGET_STRING("Kite Measurements /Gain4"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 194, TARGET_STRING("Kite Measurements /Gain5"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 195, TARGET_STRING("Kite Measurements /FIFO bin read "),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 196, TARGET_STRING("Kite Measurements /FIFO bin read "),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 197, TARGET_STRING("Kite Measurements /FIFO bin read "),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 198, TARGET_STRING("Kite Measurements /FIFO bin read "),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 199, TARGET_STRING("Kite Measurements /FIFO bin read "),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 200, TARGET_STRING("Kite Measurements /FIFO bin read "),
    TARGET_STRING("P6"), 1, 0, 0 },

  { 201, TARGET_STRING("Kite Measurements /FIFO bin read "),
    TARGET_STRING("P7"), 1, 0, 0 },

  { 202, TARGET_STRING("Kite Measurements /FIFO bin read "),
    TARGET_STRING("P8"), 1, 0, 0 },

  { 203, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 1"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 204, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 1"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 205, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 1"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 206, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 1"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 207, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 2"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 208, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 2"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 209, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 2"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 210, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 2"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 211, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 3"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 212, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 3"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 213, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 3"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 214, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 3"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 215, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 4"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 216, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 4"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 217, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 4"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 218, TARGET_STRING("Send Receive (v3) /Enable Tx Int (v3) 4"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 219, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 220, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 221, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 222, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 223, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 224, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P6"), 1, 0, 0 },

  { 225, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P7"), 1, 0, 0 },

  { 226, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P8"), 1, 0, 0 },

  { 227, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P9"), 1, 0, 0 },

  { 228, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P10"), 1, 0, 0 },

  { 229, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P11"), 1, 0, 0 },

  { 230, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P12"), 1, 0, 0 },

  { 231, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P13"), 1, 0, 0 },

  { 232, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P14"), 1, 0, 0 },

  { 233, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P15"), 1, 0, 0 },

  { 234, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P16"), 1, 0, 0 },

  { 235, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P17"), 1, 0, 0 },

  { 236, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P18"), 1, 0, 0 },

  { 237, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P19"), 1, 0, 0 },

  { 238, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P20"), 1, 0, 0 },

  { 239, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P21"), 1, 0, 0 },

  { 240, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P22"), 1, 0, 0 },

  { 241, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P23"), 1, 0, 0 },

  { 242, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 1"),
    TARGET_STRING("P24"), 1, 0, 0 },

  { 243, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 244, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 245, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 246, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 247, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 248, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P6"), 1, 0, 0 },

  { 249, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P7"), 1, 0, 0 },

  { 250, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P8"), 1, 0, 0 },

  { 251, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P9"), 1, 0, 0 },

  { 252, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P10"), 1, 0, 0 },

  { 253, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P11"), 1, 0, 0 },

  { 254, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P12"), 1, 0, 0 },

  { 255, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P13"), 1, 0, 0 },

  { 256, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P14"), 1, 0, 0 },

  { 257, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P15"), 1, 0, 0 },

  { 258, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P16"), 1, 0, 0 },

  { 259, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P17"), 1, 0, 0 },

  { 260, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P18"), 1, 0, 0 },

  { 261, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P19"), 1, 0, 0 },

  { 262, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P20"), 1, 0, 0 },

  { 263, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P21"), 1, 0, 0 },

  { 264, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P22"), 1, 0, 0 },

  { 265, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P23"), 1, 0, 0 },

  { 266, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 2"),
    TARGET_STRING("P24"), 1, 0, 0 },

  { 267, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 268, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 269, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 270, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 271, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 272, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P6"), 1, 0, 0 },

  { 273, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P7"), 1, 0, 0 },

  { 274, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P8"), 1, 0, 0 },

  { 275, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P9"), 1, 0, 0 },

  { 276, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P10"), 1, 0, 0 },

  { 277, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P11"), 1, 0, 0 },

  { 278, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P12"), 1, 0, 0 },

  { 279, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P13"), 1, 0, 0 },

  { 280, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P14"), 1, 0, 0 },

  { 281, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P15"), 1, 0, 0 },

  { 282, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P16"), 1, 0, 0 },

  { 283, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P17"), 1, 0, 0 },

  { 284, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P18"), 1, 0, 0 },

  { 285, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P19"), 1, 0, 0 },

  { 286, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P20"), 1, 0, 0 },

  { 287, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P21"), 1, 0, 0 },

  { 288, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P22"), 1, 0, 0 },

  { 289, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P23"), 1, 0, 0 },

  { 290, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 3"),
    TARGET_STRING("P24"), 1, 0, 0 },

  { 291, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 292, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 293, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 294, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 295, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 296, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P6"), 1, 0, 0 },

  { 297, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P7"), 1, 0, 0 },

  { 298, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P8"), 1, 0, 0 },

  { 299, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P9"), 1, 0, 0 },

  { 300, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P10"), 1, 0, 0 },

  { 301, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P11"), 1, 0, 0 },

  { 302, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P12"), 1, 0, 0 },

  { 303, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P13"), 1, 0, 0 },

  { 304, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P14"), 1, 0, 0 },

  { 305, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P15"), 1, 0, 0 },

  { 306, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P16"), 1, 0, 0 },

  { 307, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P17"), 1, 0, 0 },

  { 308, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P18"), 1, 0, 0 },

  { 309, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P19"), 1, 0, 0 },

  { 310, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P20"), 1, 0, 0 },

  { 311, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P21"), 1, 0, 0 },

  { 312, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P22"), 1, 0, 0 },

  { 313, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P23"), 1, 0, 0 },

  { 314, TARGET_STRING("Send Receive (v3) /Setup Channel (v3) 4"),
    TARGET_STRING("P24"), 1, 0, 0 },

  { 315, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 316, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Constant1"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 317, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Constant2"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 318, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Constant3"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 319, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Constant4"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 320, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 1"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 321, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 1"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 322, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 1"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 323, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 1"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 324, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 1"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 325, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 2"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 326, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 2"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 327, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 2"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 328, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 2"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 329, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 2"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 330, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 3"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 331, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 3"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 332, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 3"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 333, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 3"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 334, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 3"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 335, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 4"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 336, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 4"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 337, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 4"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 338, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 4"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 339, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 4"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 340, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 1"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 341, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 1"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 342, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 1"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 343, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 1"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 344, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 1"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 345, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 2"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 346, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 2"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 347, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 2"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 348, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 2"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 349, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 2"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 350, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 3"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 351, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 3"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 352, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 3"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 353, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 3"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 354, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 3"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 355, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 4"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 356, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 4"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 357, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 4"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 358, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 4"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 359, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 4"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 360, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 1"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 361, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 1"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 362, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 1"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 363, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 1"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 364, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 1"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 365, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 1"),
    TARGET_STRING("P6"), 1, 0, 0 },

  { 366, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 2"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 367, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 2"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 368, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 2"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 369, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 2"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 370, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 2"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 371, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 2"),
    TARGET_STRING("P6"), 1, 0, 0 },

  { 372, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 3"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 373, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 3"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 374, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 3"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 375, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 3"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 376, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 3"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 377, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 3"),
    TARGET_STRING("P6"), 1, 0, 0 },

  { 378, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 4"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 379, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 4"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 380, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 4"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 381, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 4"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 382, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 4"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 383, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 4"),
    TARGET_STRING("P6"), 1, 0, 0 },

  { 384, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read Int Status (v3) "),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 385, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read Int Status (v3) "),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 386, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Read Int Status (v3) "),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 387, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 1"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 388, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 1"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 389, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 1"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 390, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 1"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 391, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 1"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 392, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 1"),
    TARGET_STRING("P6"), 1, 0, 0 },

  { 393, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 2"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 394, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 2"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 395, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 2"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 396, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 2"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 397, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 2"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 398, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 2"),
    TARGET_STRING("P6"), 1, 0, 0 },

  { 399, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 3"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 400, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 3"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 401, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 3"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 402, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 3"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 403, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 3"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 404, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 3"),
    TARGET_STRING("P6"), 1, 0, 0 },

  { 405, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 4"),
    TARGET_STRING("P1"), 1, 0, 0 },

  { 406, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 4"),
    TARGET_STRING("P2"), 1, 0, 0 },

  { 407, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 4"),
    TARGET_STRING("P3"), 1, 0, 0 },

  { 408, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 4"),
    TARGET_STRING("P4"), 1, 0, 0 },

  { 409, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 4"),
    TARGET_STRING("P5"), 1, 0, 0 },

  { 410, TARGET_STRING("Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 4"),
    TARGET_STRING("P6"), 1, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_dc,/* 0: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble2,/* 1: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble3,/* 2: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ASCIIEncode[0],/* 3: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain,/* 4: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain1,/* 5: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain2,/* 6: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain3,/* 7: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain4,/* 8: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain5,/* 9: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain6,/* 10: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain7,/* 11: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain8,/* 12: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.pitchCmd,/* 13: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.yawcmd,/* 14: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.rollCmd,/* 15: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.rollCmd_l,/* 16: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.yawCmd,/* 17: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.pitchCmd_c,/* 18: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add,/* 19: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add1,/* 20: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add2,/* 21: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add3,/* 22: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add4,/* 23: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add5,/* 24: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Roll,/* 25: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Pitch,/* 26: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Yaw,/* 27: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RollRate,/* 28: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.PitchRate,/* 29: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.YawRate,/* 30: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[0],/* 31: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition,/* 32: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition1,/* 33: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition2,/* 34: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition3,/* 35: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition4,/* 36: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition5,/* 37: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition6,/* 38: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition7,/* 39: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1_o1,/* 40: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1_o2,/* 41: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2_o1,/* 42: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2_o2,/* 43: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3_o1,/* 44: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3_o2,/* 45: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4_o1,/* 46: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4_o2,/* 47: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.LowerRelop1,/* 48: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.UpperRelop,/* 49: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch,/* 50: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch2,/* 51: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.LowerRelop1_i,/* 52: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.UpperRelop_n,/* 53: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch_c,/* 54: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch2_k,/* 55: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.LowerRelop1_i2,/* 56: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.UpperRelop_m,/* 57: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch_m,/* 58: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch2_c,/* 59: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_j,/* 60: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_p,/* 61: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_l,/* 62: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_f,/* 63: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_o,/* 64: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_p,/* 65: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_g,/* 66: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1,/* 67: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking,/* 68: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1,/* 69: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2,/* 70: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3,/* 71: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4,/* 72: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator,/* 73: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_o,/* 74: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_k,/* 75: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_k,/* 76: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_p,/* 77: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_l,/* 78: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_n,/* 79: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_n,/* 80: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_l,/* 81: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_n,/* 82: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_a,/* 83: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_po,/* 84: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_ku,/* 85: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_l,/* 86: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_bf,/* 87: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_m,/* 88: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_l0,/* 89: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_d,/* 90: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_o,/* 91: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_g,/* 92: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_c,/* 93: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_be,/* 94: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_b,/* 95: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_b,/* 96: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_ac,/* 97: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_pq,/* 98: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_lt,/* 99: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_g,/* 100: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_gw,/* 101: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_g,/* 102: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_ng,/* 103: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_o,/* 104: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_l,/* 105: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_e,/* 106: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_cr,/* 107: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_l,/* 108: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_d,/* 109: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_l,/* 110: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_m,/* 111: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_d,/* 112: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_k,/* 113: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_pr,/* 114: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_b,/* 115: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1.y,/* 116: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2.y,/* 117: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3.y,/* 118: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_m.y,/* 119: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_f.y,/* 120: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_d.y,/* 121: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_mz.y,/* 122: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_g.y,/* 123: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_f.y,/* 124: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_i.y,/* 125: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_d.y,/* 126: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_j.y,/* 127: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_f.y,/* 128: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_fi.y,/* 129: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_n.y,/* 130: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_b.y,/* 131: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_e.y,/* 132: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_a.y,/* 133: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_a.y,/* 134: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_k.y,/* 135: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_l.y,/* 136: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_j.y,/* 137: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_i.y,/* 138: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_a0.y,/* 139: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.LogicalOperator,/* 140: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RelationalOperator[0],/* 141: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread1_o1[0],/* 142: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread1_o2,/* 143: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread2_o1[0],/* 144: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread2_o2,/* 145: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread3_o1[0],/* 146: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread3_o2,/* 147: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread4_o1[0],/* 148: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread4_o2,/* 149: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1,/* 150: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2,/* 151: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3,/* 152: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4,/* 153: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterReadv31,/* 154: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterReadv32,/* 155: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterReadv33,/* 156: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterReadv34,/* 157: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterWritev31,/* 158: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterWritev32,/* 159: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterWritev33,/* 160: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterWritev34,/* 161: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadHWFIFOv31[0],/* 162: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadHWFIFOv32[0],/* 163: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadHWFIFOv33[0],/* 164: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadHWFIFOv34[0],/* 165: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3[0],/* 166: Signal */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax,/* 167: Mask Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_pitchKP,/* 168: Mask Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_rollKP,/* 169: Mask Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ASCIIEncode_P1[0],/* 170: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ASCIIEncode_P2,/* 171: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ASCIIEncode_P3,/* 172: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ASCIIEncode_P4[0],/* 173: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain3_Gain,/* 174: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain4_Gain,/* 175: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain5_Gain,/* 176: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain6_Gain,/* 177: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain7_Gain,/* 178: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain8_Gain,/* 179: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Saturation_UpperSat,/* 180: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Saturation_LowerSat,/* 181: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Saturation1_UpperSat,/* 182: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Saturation1_LowerSat,/* 183: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Saturation2_UpperSat,/* 184: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Saturation2_LowerSat,/* 185: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.pitchSP_Value,/* 186: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.rollSP_Value,/* 187: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.yawSP_Value,/* 188: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain_Gain,/* 189: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain1_Gain,/* 190: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain2_Gain,/* 191: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain3_Gain_a,/* 192: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain4_Gain_b,/* 193: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain5_Gain_j,/* 194: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P1,/* 195: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P2,/* 196: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P3,/* 197: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P4,/* 198: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P5,/* 199: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P6,/* 200: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P7,/* 201: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P8,/* 202: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv31_P1,/* 203: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv31_P2,/* 204: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv31_P3,/* 205: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv31_P4,/* 206: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv32_P1,/* 207: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv32_P2,/* 208: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv32_P3,/* 209: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv32_P4,/* 210: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv33_P1,/* 211: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv33_P2,/* 212: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv33_P3,/* 213: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv33_P4,/* 214: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv34_P1,/* 215: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv34_P2,/* 216: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv34_P3,/* 217: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv34_P4,/* 218: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P1,/* 219: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P2,/* 220: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P3,/* 221: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P4,/* 222: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P5,/* 223: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P6,/* 224: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P7,/* 225: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P8,/* 226: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P9,/* 227: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P10,/* 228: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P11,/* 229: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P12,/* 230: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P13,/* 231: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P14,/* 232: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P15,/* 233: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P16,/* 234: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P17,/* 235: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P18,/* 236: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P19,/* 237: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P20,/* 238: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P21,/* 239: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P22,/* 240: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P23,/* 241: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P24,/* 242: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P1,/* 243: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P2,/* 244: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P3,/* 245: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P4,/* 246: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P5,/* 247: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P6,/* 248: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P7,/* 249: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P8,/* 250: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P9,/* 251: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P10,/* 252: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P11,/* 253: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P12,/* 254: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P13,/* 255: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P14,/* 256: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P15,/* 257: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P16,/* 258: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P17,/* 259: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P18,/* 260: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P19,/* 261: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P20,/* 262: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P21,/* 263: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P22,/* 264: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P23,/* 265: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P24,/* 266: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P1,/* 267: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P2,/* 268: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P3,/* 269: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P4,/* 270: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P5,/* 271: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P6,/* 272: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P7,/* 273: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P8,/* 274: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P9,/* 275: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P10,/* 276: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P11,/* 277: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P12,/* 278: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P13,/* 279: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P14,/* 280: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P15,/* 281: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P16,/* 282: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P17,/* 283: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P18,/* 284: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P19,/* 285: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P20,/* 286: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P21,/* 287: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P22,/* 288: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P23,/* 289: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P24,/* 290: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P1,/* 291: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P2,/* 292: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P3,/* 293: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P4,/* 294: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P5,/* 295: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P6,/* 296: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P7,/* 297: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P8,/* 298: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P9,/* 299: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P10,/* 300: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P11,/* 301: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P12,/* 302: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P13,/* 303: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P14,/* 304: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P15,/* 305: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P16,/* 306: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P17,/* 307: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P18,/* 308: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P19,/* 309: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P20,/* 310: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P21,/* 311: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P22,/* 312: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P23,/* 313: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P24,/* 314: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant_Value,/* 315: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant1_Value,/* 316: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant2_Value,/* 317: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant3_Value,/* 318: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant4_Value,/* 319: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv31_P1,/* 320: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv31_P2,/* 321: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv31_P3,/* 322: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv31_P4,/* 323: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv31_P5,/* 324: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv32_P1,/* 325: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv32_P2,/* 326: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv32_P3,/* 327: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv32_P4,/* 328: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv32_P5,/* 329: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv33_P1,/* 330: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv33_P2,/* 331: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv33_P3,/* 332: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv33_P4,/* 333: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv33_P5,/* 334: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv34_P1,/* 335: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv34_P2,/* 336: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv34_P3,/* 337: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv34_P4,/* 338: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv34_P5,/* 339: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev31_P1,/* 340: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev31_P2,/* 341: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev31_P3,/* 342: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev31_P4,/* 343: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev31_P5,/* 344: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev32_P1,/* 345: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev32_P2,/* 346: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev32_P3,/* 347: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev32_P4,/* 348: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev32_P5,/* 349: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev33_P1,/* 350: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev33_P2,/* 351: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev33_P3,/* 352: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev33_P4,/* 353: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev33_P5,/* 354: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev34_P1,/* 355: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev34_P2,/* 356: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev34_P3,/* 357: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev34_P4,/* 358: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev34_P5,/* 359: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv31_P1,/* 360: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv31_P2,/* 361: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv31_P3,/* 362: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv31_P4,/* 363: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv31_P5,/* 364: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv31_P6,/* 365: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv32_P1,/* 366: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv32_P2,/* 367: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv32_P3,/* 368: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv32_P4,/* 369: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv32_P5,/* 370: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv32_P6,/* 371: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv33_P1,/* 372: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv33_P2,/* 373: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv33_P3,/* 374: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv33_P4,/* 375: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv33_P5,/* 376: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv33_P6,/* 377: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv34_P1,/* 378: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv34_P2,/* 379: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv34_P3,/* 380: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv34_P4,/* 381: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv34_P5,/* 382: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv34_P6,/* 383: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadIntStatusv3_P1,/* 384: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadIntStatusv3_P2,/* 385: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadIntStatusv3_P3,/* 386: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv31_P1,/* 387: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv31_P2,/* 388: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv31_P3,/* 389: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv31_P4,/* 390: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv31_P5,/* 391: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv31_P6,/* 392: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv32_P1,/* 393: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv32_P2,/* 394: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv32_P3,/* 395: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv32_P4,/* 396: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv32_P5,/* 397: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv32_P6,/* 398: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv33_P1,/* 399: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv33_P2,/* 400: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv33_P3,/* 401: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv33_P4,/* 402: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv33_P5,/* 403: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv33_P6,/* 404: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv34_P1,/* 405: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv34_P2,/* 406: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv34_P3,/* 407: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv34_P4,/* 408: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv34_P5,/* 409: Block Parameter */
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv34_P6,/* 410: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 },

  { "numeric", "serialfifoptr", 0, 0, sizeof(serialfifoptr), SS_STRUCT, 0, 0, 0
  },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0, 0 },

  { "float", "real32_T", 0, 0, sizeof(real32_T), SS_SINGLE, 0, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  256,                                 /* 2 */
  1,                                   /* 3 */
  34,                                  /* 4 */
  1,                                   /* 5 */
  4,                                   /* 6 */
  1,                                   /* 7 */
  257,                                 /* 8 */
  1,                                   /* 9 */
  1,                                   /* 10 */
  6,                                   /* 11 */
  1,                                   /* 12 */
  3                                    /* 13 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.01, 0.0, -1.0, -2.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[3],
    1, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 167,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 244,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2543954581U,
    4255110305U,
    1803984167U,
    2498425459U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void integrated_3PropControl_6bitCmd_100HzIMU_25HzP_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->DataMapInfo.mmi,
     &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->DataMapInfo.mmi,
     rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->DataMapInfo.mmi,
     rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->DataMapInfo.mmi.InstanceMap.rtpAddress
    = rtmGetDefaultParam(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->
    DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void integrated_3PropControl_6bitCmd_100HzIMU_25HzP_host_InitializeDataMapInfo
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_host_DataMapInfo_T *dataMap,
     const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: integrated_3PropControl_6bitCmd_100HzIMU_25HzP_capi.c */
