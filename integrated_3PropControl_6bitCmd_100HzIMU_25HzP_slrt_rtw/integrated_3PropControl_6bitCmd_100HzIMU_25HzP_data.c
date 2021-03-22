/*
 * integrated_3PropControl_6bitCmd_100HzIMU_25HzP_data.c
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

#include "integrated_3PropControl_6bitCmd_100HzIMU_25HzP.h"
#include "integrated_3PropControl_6bitCmd_100HzIMU_25HzP_private.h"

/* Block parameters (default storage) */
P_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P = {
  /* Mask Parameter: Controller_ctrlSurfDefMax
   * Referenced by:
   *   '<S1>/Constant'
   *   '<S1>/Constant1'
   *   '<S1>/Constant2'
   */
  45.0,

  /* Mask Parameter: Controller_pitchKP
   * Referenced by:
   *   '<S1>/Gain'
   *   '<S1>/Gain1'
   */
  1.0,

  /* Mask Parameter: Controller_rollKP
   * Referenced by: '<S1>/Gain2'
   */
  1.0,

  /* Computed Parameter: ReadIntStatusv3_P1_Size
   * Referenced by: '<S69>/Read Int Status (v3) '
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Read Int Status (v3) '
   */
  1.0,

  /* Computed Parameter: ReadIntStatusv3_P2_Size
   * Referenced by: '<S69>/Read Int Status (v3) '
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Read Int Status (v3) '
   */
  -1.0,

  /* Computed Parameter: ReadIntStatusv3_P3_Size
   * Referenced by: '<S69>/Read Int Status (v3) '
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Read Int Status (v3) '
   */
  4.0,

  /* Computed Parameter: IntSourceFilterWritev31_P1_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterWritev31_P2_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterWritev31_P3_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parFilter
   * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
   */
  2.0,

  /* Computed Parameter: IntSourceFilterWritev31_P4_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
   */
  -1.0,

  /* Computed Parameter: IntSourceFilterWritev31_P5_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
   */
  4.0,

  /* Computed Parameter: WriteHWFIFOv31_P1_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Write HW FIFO (v3) 1'
   */
  1.0,

  /* Computed Parameter: WriteHWFIFOv31_P2_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Write HW FIFO (v3) 1'
   */
  1.0,

  /* Computed Parameter: WriteHWFIFOv31_P3_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parSampleTime
   * Referenced by: '<S69>/Write HW FIFO (v3) 1'
   */
  -1.0,

  /* Computed Parameter: WriteHWFIFOv31_P4_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Write HW FIFO (v3) 1'
   */
  -1.0,

  /* Computed Parameter: WriteHWFIFOv31_P5_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Write HW FIFO (v3) 1'
   */
  4.0,

  /* Computed Parameter: WriteHWFIFOv31_P6_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parTxTrigLvl
   * Referenced by: '<S69>/Write HW FIFO (v3) 1'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterWritev32_P1_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterWritev32_P2_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
   */
  2.0,

  /* Computed Parameter: IntSourceFilterWritev32_P3_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parFilter
   * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
   */
  2.0,

  /* Computed Parameter: IntSourceFilterWritev32_P4_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
   */
  -1.0,

  /* Computed Parameter: IntSourceFilterWritev32_P5_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
   */
  4.0,

  /* Computed Parameter: WriteHWFIFOv32_P1_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Write HW FIFO (v3) 2'
   */
  1.0,

  /* Computed Parameter: WriteHWFIFOv32_P2_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Write HW FIFO (v3) 2'
   */
  2.0,

  /* Computed Parameter: WriteHWFIFOv32_P3_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parSampleTime
   * Referenced by: '<S69>/Write HW FIFO (v3) 2'
   */
  -1.0,

  /* Computed Parameter: WriteHWFIFOv32_P4_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Write HW FIFO (v3) 2'
   */
  -1.0,

  /* Computed Parameter: WriteHWFIFOv32_P5_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Write HW FIFO (v3) 2'
   */
  4.0,

  /* Computed Parameter: WriteHWFIFOv32_P6_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parTxTrigLvl
   * Referenced by: '<S69>/Write HW FIFO (v3) 2'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterWritev33_P1_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterWritev33_P2_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
   */
  3.0,

  /* Computed Parameter: IntSourceFilterWritev33_P3_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parFilter
   * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
   */
  2.0,

  /* Computed Parameter: IntSourceFilterWritev33_P4_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
   */
  -1.0,

  /* Computed Parameter: IntSourceFilterWritev33_P5_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
   */
  4.0,

  /* Computed Parameter: WriteHWFIFOv33_P1_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Write HW FIFO (v3) 3'
   */
  1.0,

  /* Computed Parameter: WriteHWFIFOv33_P2_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Write HW FIFO (v3) 3'
   */
  3.0,

  /* Computed Parameter: WriteHWFIFOv33_P3_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parSampleTime
   * Referenced by: '<S69>/Write HW FIFO (v3) 3'
   */
  -1.0,

  /* Computed Parameter: WriteHWFIFOv33_P4_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Write HW FIFO (v3) 3'
   */
  -1.0,

  /* Computed Parameter: WriteHWFIFOv33_P5_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Write HW FIFO (v3) 3'
   */
  4.0,

  /* Computed Parameter: WriteHWFIFOv33_P6_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parTxTrigLvl
   * Referenced by: '<S69>/Write HW FIFO (v3) 3'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterWritev34_P1_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterWritev34_P2_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
   */
  4.0,

  /* Computed Parameter: IntSourceFilterWritev34_P3_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parFilter
   * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
   */
  2.0,

  /* Computed Parameter: IntSourceFilterWritev34_P4_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
   */
  -1.0,

  /* Computed Parameter: IntSourceFilterWritev34_P5_Size
   * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
   */
  4.0,

  /* Computed Parameter: WriteHWFIFOv34_P1_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Write HW FIFO (v3) 4'
   */
  1.0,

  /* Computed Parameter: WriteHWFIFOv34_P2_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Write HW FIFO (v3) 4'
   */
  4.0,

  /* Computed Parameter: WriteHWFIFOv34_P3_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parSampleTime
   * Referenced by: '<S69>/Write HW FIFO (v3) 4'
   */
  -1.0,

  /* Computed Parameter: WriteHWFIFOv34_P4_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Write HW FIFO (v3) 4'
   */
  -1.0,

  /* Computed Parameter: WriteHWFIFOv34_P5_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Write HW FIFO (v3) 4'
   */
  4.0,

  /* Computed Parameter: WriteHWFIFOv34_P6_Size
   * Referenced by: '<S69>/Write HW FIFO (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parTxTrigLvl
   * Referenced by: '<S69>/Write HW FIFO (v3) 4'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S69>/Constant'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterReadv31_P1_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterReadv31_P2_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterReadv31_P3_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parFilter
   * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterReadv31_P4_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
   */
  -1.0,

  /* Computed Parameter: IntSourceFilterReadv31_P5_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
   */
  4.0,

  /* Computed Parameter: ReadHWFIFOv31_P1_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Read HW FIFO (v3) 1'
   */
  1.0,

  /* Computed Parameter: ReadHWFIFOv31_P2_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Read HW FIFO (v3) 1'
   */
  1.0,

  /* Computed Parameter: ReadHWFIFOv31_P3_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parFlush
   * Referenced by: '<S69>/Read HW FIFO (v3) 1'
   */
  1.0,

  /* Computed Parameter: ReadHWFIFOv31_P4_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parSampleTime
   * Referenced by: '<S69>/Read HW FIFO (v3) 1'
   */
  -1.0,

  /* Computed Parameter: ReadHWFIFOv31_P5_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Read HW FIFO (v3) 1'
   */
  -1.0,

  /* Computed Parameter: ReadHWFIFOv31_P6_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Read HW FIFO (v3) 1'
   */
  4.0,

  /* Computed Parameter: IntSourceFilterReadv32_P1_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterReadv32_P2_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
   */
  2.0,

  /* Computed Parameter: IntSourceFilterReadv32_P3_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parFilter
   * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterReadv32_P4_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
   */
  -1.0,

  /* Computed Parameter: IntSourceFilterReadv32_P5_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
   */
  4.0,

  /* Computed Parameter: ReadHWFIFOv32_P1_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Read HW FIFO (v3) 2'
   */
  1.0,

  /* Computed Parameter: ReadHWFIFOv32_P2_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Read HW FIFO (v3) 2'
   */
  2.0,

  /* Computed Parameter: ReadHWFIFOv32_P3_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parFlush
   * Referenced by: '<S69>/Read HW FIFO (v3) 2'
   */
  1.0,

  /* Computed Parameter: ReadHWFIFOv32_P4_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parSampleTime
   * Referenced by: '<S69>/Read HW FIFO (v3) 2'
   */
  -1.0,

  /* Computed Parameter: ReadHWFIFOv32_P5_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Read HW FIFO (v3) 2'
   */
  -1.0,

  /* Computed Parameter: ReadHWFIFOv32_P6_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Read HW FIFO (v3) 2'
   */
  4.0,

  /* Computed Parameter: IntSourceFilterReadv33_P1_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterReadv33_P2_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
   */
  3.0,

  /* Computed Parameter: IntSourceFilterReadv33_P3_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parFilter
   * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterReadv33_P4_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
   */
  -1.0,

  /* Computed Parameter: IntSourceFilterReadv33_P5_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
   */
  4.0,

  /* Computed Parameter: ReadHWFIFOv33_P1_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Read HW FIFO (v3) 3'
   */
  1.0,

  /* Computed Parameter: ReadHWFIFOv33_P2_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Read HW FIFO (v3) 3'
   */
  3.0,

  /* Computed Parameter: ReadHWFIFOv33_P3_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parFlush
   * Referenced by: '<S69>/Read HW FIFO (v3) 3'
   */
  1.0,

  /* Computed Parameter: ReadHWFIFOv33_P4_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parSampleTime
   * Referenced by: '<S69>/Read HW FIFO (v3) 3'
   */
  -1.0,

  /* Computed Parameter: ReadHWFIFOv33_P5_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Read HW FIFO (v3) 3'
   */
  -1.0,

  /* Computed Parameter: ReadHWFIFOv33_P6_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Read HW FIFO (v3) 3'
   */
  4.0,

  /* Computed Parameter: IntSourceFilterReadv34_P1_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterReadv34_P2_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
   */
  4.0,

  /* Computed Parameter: IntSourceFilterReadv34_P3_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parFilter
   * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
   */
  1.0,

  /* Computed Parameter: IntSourceFilterReadv34_P4_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
   */
  -1.0,

  /* Computed Parameter: IntSourceFilterReadv34_P5_Size
   * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
   */
  4.0,

  /* Computed Parameter: ReadHWFIFOv34_P1_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S69>/Read HW FIFO (v3) 4'
   */
  1.0,

  /* Computed Parameter: ReadHWFIFOv34_P2_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S69>/Read HW FIFO (v3) 4'
   */
  4.0,

  /* Computed Parameter: ReadHWFIFOv34_P3_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parFlush
   * Referenced by: '<S69>/Read HW FIFO (v3) 4'
   */
  1.0,

  /* Computed Parameter: ReadHWFIFOv34_P4_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parSampleTime
   * Referenced by: '<S69>/Read HW FIFO (v3) 4'
   */
  -1.0,

  /* Computed Parameter: ReadHWFIFOv34_P5_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S69>/Read HW FIFO (v3) 4'
   */
  -1.0,

  /* Computed Parameter: ReadHWFIFOv34_P6_Size
   * Referenced by: '<S69>/Read HW FIFO (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S69>/Read HW FIFO (v3) 4'
   */
  4.0,

  /* Computed Parameter: SetupChannelv31_P1_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  1.0,

  /* Computed Parameter: SetupChannelv31_P2_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  1.0,

  /* Computed Parameter: SetupChannelv31_P3_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  -1.0,

  /* Computed Parameter: SetupChannelv31_P4_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  4.0,

  /* Computed Parameter: SetupChannelv31_P5_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parTransceiver
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  4.0,

  /* Computed Parameter: SetupChannelv31_P6_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parTxTerm
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  0.0,

  /* Computed Parameter: SetupChannelv31_P7_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parRxTerm
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  0.0,

  /* Computed Parameter: SetupChannelv31_P8_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parMessageMonitoring
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  0.0,

  /* Computed Parameter: SetupChannelv31_P9_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parStandardBaud
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  1.0,

  /* Computed Parameter: SetupChannelv31_P10_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parBaudrate
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  8.0,

  /* Computed Parameter: SetupChannelv31_P11_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parBaudDivisor
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  1.0,

  /* Computed Parameter: SetupChannelv31_P12_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parSamplingRate
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  2.0,

  /* Computed Parameter: SetupChannelv31_P13_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parPrescale
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  0.0,

  /* Computed Parameter: SetupChannelv31_P14_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parParity
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  1.0,

  /* Computed Parameter: SetupChannelv31_P15_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parDataBits
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  4.0,

  /* Computed Parameter: SetupChannelv31_P16_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parStopBits
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  1.0,

  /* Computed Parameter: SetupChannelv31_P17_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parTxTrigLvl
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  1.0,

  /* Computed Parameter: SetupChannelv31_P18_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parRxTrigLvl
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  1.0,

  /* Computed Parameter: SetupChannelv31_P19_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parHandshake
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  1.0,

  /* Computed Parameter: SetupChannelv31_P20_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parRtsHysteresis
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  1.0,

  /* Computed Parameter: SetupChannelv31_P21_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parXon
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  17.0,

  /* Computed Parameter: SetupChannelv31_P22_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parXoff
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  19.0,

  /* Computed Parameter: SetupChannelv31_P23_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parAutoTurnaround
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  0.0,

  /* Computed Parameter: SetupChannelv31_P24_Size
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parTurnaroundDelay
   * Referenced by: '<S6>/Setup Channel (v3) 1'
   */
  0.0,

  /* Computed Parameter: SetupChannelv32_P1_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  1.0,

  /* Computed Parameter: SetupChannelv32_P2_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  2.0,

  /* Computed Parameter: SetupChannelv32_P3_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  -1.0,

  /* Computed Parameter: SetupChannelv32_P4_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  4.0,

  /* Computed Parameter: SetupChannelv32_P5_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parTransceiver
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  4.0,

  /* Computed Parameter: SetupChannelv32_P6_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parTxTerm
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  0.0,

  /* Computed Parameter: SetupChannelv32_P7_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parRxTerm
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  0.0,

  /* Computed Parameter: SetupChannelv32_P8_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parMessageMonitoring
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  0.0,

  /* Computed Parameter: SetupChannelv32_P9_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parStandardBaud
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  1.0,

  /* Computed Parameter: SetupChannelv32_P10_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parBaudrate
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  6.0,

  /* Computed Parameter: SetupChannelv32_P11_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parBaudDivisor
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  1.0,

  /* Computed Parameter: SetupChannelv32_P12_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parSamplingRate
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  2.0,

  /* Computed Parameter: SetupChannelv32_P13_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parPrescale
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  0.0,

  /* Computed Parameter: SetupChannelv32_P14_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parParity
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  1.0,

  /* Computed Parameter: SetupChannelv32_P15_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parDataBits
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  4.0,

  /* Computed Parameter: SetupChannelv32_P16_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parStopBits
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  1.0,

  /* Computed Parameter: SetupChannelv32_P17_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parTxTrigLvl
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  1.0,

  /* Computed Parameter: SetupChannelv32_P18_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parRxTrigLvl
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  1.0,

  /* Computed Parameter: SetupChannelv32_P19_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parHandshake
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  1.0,

  /* Computed Parameter: SetupChannelv32_P20_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parRtsHysteresis
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  1.0,

  /* Computed Parameter: SetupChannelv32_P21_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parXon
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  17.0,

  /* Computed Parameter: SetupChannelv32_P22_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parXoff
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  19.0,

  /* Computed Parameter: SetupChannelv32_P23_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parAutoTurnaround
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  0.0,

  /* Computed Parameter: SetupChannelv32_P24_Size
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parTurnaroundDelay
   * Referenced by: '<S6>/Setup Channel (v3) 2'
   */
  0.0,

  /* Computed Parameter: SetupChannelv33_P1_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  1.0,

  /* Computed Parameter: SetupChannelv33_P2_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  3.0,

  /* Computed Parameter: SetupChannelv33_P3_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  -1.0,

  /* Computed Parameter: SetupChannelv33_P4_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  4.0,

  /* Computed Parameter: SetupChannelv33_P5_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parTransceiver
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  1.0,

  /* Computed Parameter: SetupChannelv33_P6_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parTxTerm
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  0.0,

  /* Computed Parameter: SetupChannelv33_P7_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parRxTerm
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  0.0,

  /* Computed Parameter: SetupChannelv33_P8_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parMessageMonitoring
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  0.0,

  /* Computed Parameter: SetupChannelv33_P9_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parStandardBaud
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  1.0,

  /* Computed Parameter: SetupChannelv33_P10_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parBaudrate
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  6.0,

  /* Computed Parameter: SetupChannelv33_P11_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parBaudDivisor
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  1.0,

  /* Computed Parameter: SetupChannelv33_P12_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parSamplingRate
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  2.0,

  /* Computed Parameter: SetupChannelv33_P13_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parPrescale
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  0.0,

  /* Computed Parameter: SetupChannelv33_P14_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parParity
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  1.0,

  /* Computed Parameter: SetupChannelv33_P15_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parDataBits
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  4.0,

  /* Computed Parameter: SetupChannelv33_P16_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parStopBits
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  1.0,

  /* Computed Parameter: SetupChannelv33_P17_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parTxTrigLvl
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  1.0,

  /* Computed Parameter: SetupChannelv33_P18_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parRxTrigLvl
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  1.0,

  /* Computed Parameter: SetupChannelv33_P19_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parHandshake
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  1.0,

  /* Computed Parameter: SetupChannelv33_P20_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parRtsHysteresis
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  1.0,

  /* Computed Parameter: SetupChannelv33_P21_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parXon
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  17.0,

  /* Computed Parameter: SetupChannelv33_P22_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parXoff
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  19.0,

  /* Computed Parameter: SetupChannelv33_P23_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parAutoTurnaround
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  0.0,

  /* Computed Parameter: SetupChannelv33_P24_Size
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parTurnaroundDelay
   * Referenced by: '<S6>/Setup Channel (v3) 3'
   */
  0.0,

  /* Computed Parameter: SetupChannelv34_P1_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  1.0,

  /* Computed Parameter: SetupChannelv34_P2_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  4.0,

  /* Computed Parameter: SetupChannelv34_P3_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  -1.0,

  /* Computed Parameter: SetupChannelv34_P4_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  4.0,

  /* Computed Parameter: SetupChannelv34_P5_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parTransceiver
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  1.0,

  /* Computed Parameter: SetupChannelv34_P6_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parTxTerm
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  0.0,

  /* Computed Parameter: SetupChannelv34_P7_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parRxTerm
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  0.0,

  /* Computed Parameter: SetupChannelv34_P8_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parMessageMonitoring
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  0.0,

  /* Computed Parameter: SetupChannelv34_P9_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parStandardBaud
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  1.0,

  /* Computed Parameter: SetupChannelv34_P10_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parBaudrate
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  6.0,

  /* Computed Parameter: SetupChannelv34_P11_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parBaudDivisor
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  1.0,

  /* Computed Parameter: SetupChannelv34_P12_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parSamplingRate
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  2.0,

  /* Computed Parameter: SetupChannelv34_P13_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parPrescale
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  0.0,

  /* Computed Parameter: SetupChannelv34_P14_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parParity
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  1.0,

  /* Computed Parameter: SetupChannelv34_P15_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parDataBits
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  4.0,

  /* Computed Parameter: SetupChannelv34_P16_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parStopBits
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  1.0,

  /* Computed Parameter: SetupChannelv34_P17_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parTxTrigLvl
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  1.0,

  /* Computed Parameter: SetupChannelv34_P18_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parRxTrigLvl
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  1.0,

  /* Computed Parameter: SetupChannelv34_P19_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parHandshake
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  1.0,

  /* Computed Parameter: SetupChannelv34_P20_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parRtsHysteresis
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  1.0,

  /* Computed Parameter: SetupChannelv34_P21_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parXon
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  17.0,

  /* Computed Parameter: SetupChannelv34_P22_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parXoff
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  19.0,

  /* Computed Parameter: SetupChannelv34_P23_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parAutoTurnaround
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  0.0,

  /* Computed Parameter: SetupChannelv34_P24_Size
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parTurnaroundDelay
   * Referenced by: '<S6>/Setup Channel (v3) 4'
   */
  0.0,

  /* Expression: EulerSP(1)
   * Referenced by: '<S2>/pitchSP'
   */
  0.0,

  /* Computed Parameter: FIFObinread_P1_Size
   * Referenced by: '<S3>/FIFO bin read '
   */
  { 1.0, 1.0 },

  /* Expression: maxsize
   * Referenced by: '<S3>/FIFO bin read '
   */
  33.0,

  /* Computed Parameter: FIFObinread_P2_Size
   * Referenced by: '<S3>/FIFO bin read '
   */
  { 1.0, 1.0 },

  /* Expression: outputtype
   * Referenced by: '<S3>/FIFO bin read '
   */
  6.0,

  /* Computed Parameter: FIFObinread_P3_Size
   * Referenced by: '<S3>/FIFO bin read '
   */
  { 1.0, 1.0 },

  /* Expression: sampletime
   * Referenced by: '<S3>/FIFO bin read '
   */
  0.01,

  /* Computed Parameter: FIFObinread_P4_Size
   * Referenced by: '<S3>/FIFO bin read '
   */
  { 1.0, 1.0 },

  /* Expression: hdr
   * Referenced by: '<S3>/FIFO bin read '
   */
  153.0,

  /* Computed Parameter: FIFObinread_P5_Size
   * Referenced by: '<S3>/FIFO bin read '
   */
  { 1.0, 1.0 },

  /* Expression: hlengths
   * Referenced by: '<S3>/FIFO bin read '
   */
  1.0,

  /* Computed Parameter: FIFObinread_P6_Size
   * Referenced by: '<S3>/FIFO bin read '
   */
  { 1.0, 1.0 },

  /* Expression: lengths
   * Referenced by: '<S3>/FIFO bin read '
   */
  33.0,

  /* Computed Parameter: FIFObinread_P7_Size
   * Referenced by: '<S3>/FIFO bin read '
   */
  { 1.0, 1.0 },

  /* Expression: hold
   * Referenced by: '<S3>/FIFO bin read '
   */
  1.0,

  /* Computed Parameter: FIFObinread_P8_Size
   * Referenced by: '<S3>/FIFO bin read '
   */
  { 1.0, 1.0 },

  /* Expression: enable
   * Referenced by: '<S3>/FIFO bin read '
   */
  0.0,

  /* Expression: 180/pi
   * Referenced by: '<S3>/Gain1'
   */
  57.295779513082323,

  /* Expression: -1
   * Referenced by: '<S1>/Gain3'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Gain4'
   */
  1.0,

  /* Expression: 99
   * Referenced by: '<S1>/Saturation2'
   */
  99.0,

  /* Expression: 10
   * Referenced by: '<S1>/Saturation2'
   */
  10.0,

  /* Expression: EulerSP(3)
   * Referenced by: '<S2>/yawSP'
   */
  0.0,

  /* Expression: 180/pi
   * Referenced by: '<S3>/Gain2'
   */
  57.295779513082323,

  /* Expression: -1
   * Referenced by: '<S1>/Gain5'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Gain6'
   */
  1.0,

  /* Expression: 99
   * Referenced by: '<S1>/Saturation1'
   */
  99.0,

  /* Expression: 10
   * Referenced by: '<S1>/Saturation1'
   */
  10.0,

  /* Expression: 180/pi
   * Referenced by: '<S3>/Gain'
   */
  57.295779513082323,

  /* Expression: EulerSP(2)
   * Referenced by: '<S2>/rollSP'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S1>/Gain7'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Gain8'
   */
  1.0,

  /* Expression: 99
   * Referenced by: '<S1>/Saturation'
   */
  99.0,

  /* Expression: 10
   * Referenced by: '<S1>/Saturation'
   */
  10.0,

  /* Computed Parameter: ASCIIEncode_P1_Size
   * Referenced by: '<Root>/ASCII Encode '
   */
  { 1.0, 6.0 },

  /* Computed Parameter: ASCIIEncode_P1
   * Referenced by: '<Root>/ASCII Encode '
   */
  { 37.0, 100.0, 37.0, 100.0, 37.0, 100.0 },

  /* Computed Parameter: ASCIIEncode_P2_Size
   * Referenced by: '<Root>/ASCII Encode '
   */
  { 1.0, 1.0 },

  /* Expression: maxlength
   * Referenced by: '<Root>/ASCII Encode '
   */
  256.0,

  /* Computed Parameter: ASCIIEncode_P3_Size
   * Referenced by: '<Root>/ASCII Encode '
   */
  { 1.0, 1.0 },

  /* Expression: nvars
   * Referenced by: '<Root>/ASCII Encode '
   */
  3.0,

  /* Computed Parameter: ASCIIEncode_P4_Size
   * Referenced by: '<Root>/ASCII Encode '
   */
  { 1.0, 3.0 },

  /* Expression: varids
   * Referenced by: '<Root>/ASCII Encode '
   */
  { 3.0, 3.0, 3.0 },

  /* Computed Parameter: EnableTxIntv31_P1_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S6>/Enable Tx Int (v3) 1'
   */
  1.0,

  /* Computed Parameter: EnableTxIntv31_P2_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S6>/Enable Tx Int (v3) 1'
   */
  1.0,

  /* Computed Parameter: EnableTxIntv31_P3_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S6>/Enable Tx Int (v3) 1'
   */
  -1.0,

  /* Computed Parameter: EnableTxIntv31_P4_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 1'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S6>/Enable Tx Int (v3) 1'
   */
  4.0,

  /* Computed Parameter: EnableTxIntv32_P1_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S6>/Enable Tx Int (v3) 2'
   */
  1.0,

  /* Computed Parameter: EnableTxIntv32_P2_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S6>/Enable Tx Int (v3) 2'
   */
  2.0,

  /* Computed Parameter: EnableTxIntv32_P3_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S6>/Enable Tx Int (v3) 2'
   */
  -1.0,

  /* Computed Parameter: EnableTxIntv32_P4_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 2'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S6>/Enable Tx Int (v3) 2'
   */
  4.0,

  /* Computed Parameter: EnableTxIntv33_P1_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S6>/Enable Tx Int (v3) 3'
   */
  1.0,

  /* Computed Parameter: EnableTxIntv33_P2_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S6>/Enable Tx Int (v3) 3'
   */
  3.0,

  /* Computed Parameter: EnableTxIntv33_P3_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S6>/Enable Tx Int (v3) 3'
   */
  -1.0,

  /* Computed Parameter: EnableTxIntv33_P4_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 3'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S6>/Enable Tx Int (v3) 3'
   */
  4.0,

  /* Computed Parameter: EnableTxIntv34_P1_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleId
   * Referenced by: '<S6>/Enable Tx Int (v3) 4'
   */
  1.0,

  /* Computed Parameter: EnableTxIntv34_P2_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parChannel
   * Referenced by: '<S6>/Enable Tx Int (v3) 4'
   */
  4.0,

  /* Computed Parameter: EnableTxIntv34_P3_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parSlot
   * Referenced by: '<S6>/Enable Tx Int (v3) 4'
   */
  -1.0,

  /* Computed Parameter: EnableTxIntv34_P4_Size
   * Referenced by: '<S6>/Enable Tx Int (v3) 4'
   */
  { 1.0, 1.0 },

  /* Expression: parModuleType
   * Referenced by: '<S6>/Enable Tx Int (v3) 4'
   */
  4.0,

  /* Expression: 180/pi
   * Referenced by: '<S3>/Gain5'
   */
  57.295779513082323,

  /* Expression: 180/pi
   * Referenced by: '<S3>/Gain4'
   */
  57.295779513082323,

  /* Expression: 180/pi
   * Referenced by: '<S3>/Gain3'
   */
  57.295779513082323,

  /* Computed Parameter: Constant1_Value
   * Referenced by: '<S69>/Constant1'
   */
  1U,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S69>/Constant2'
   */
  1U,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S69>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant4_Value
   * Referenced by: '<S69>/Constant4'
   */
  1U
};
