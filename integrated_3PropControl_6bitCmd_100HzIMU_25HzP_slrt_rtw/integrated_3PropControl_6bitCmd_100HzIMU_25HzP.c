/*
 * integrated_3PropControl_6bitCmd_100HzIMU_25HzP.c
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

#include "rt_logging_mmi.h"
#include "integrated_3PropControl_6bitCmd_100HzIMU_25HzP_capi.h"
#include "integrated_3PropControl_6bitCmd_100HzIMU_25HzP.h"
#include "integrated_3PropControl_6bitCmd_100HzIMU_25HzP_private.h"

const int8_T integrated_3PropControl_6bitCmd_100HzIMU_25HzP_I8GND = 0;/* int8_T ground */
const uint8_T integrated_3PropControl_6bitCmd_100HzIMU_25HzP_U8GND = 0U;/* uint8_T ground */

/* Block signals (default storage) */
B_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B;

/* Block states (default storage) */
DW_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW;

/* Real-time model */
RT_MODEL_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M_;
RT_MODEL_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T *const
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M =
  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M_;

/* xPC Target Async Interrupt Block '<S6>/IRQ Source' */
void xPCISR1(void)
{
  {
    /* Reset subsysRan breadcrumbs */
    srClearBC(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ISR_SubsysRanBC);

    /* RateTransition: '<S6>/Rate Transition' */
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1_o1;

    /* RateTransition: '<S6>/Rate Transition2' */
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition2 =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2_o1;

    /* RateTransition: '<S6>/Rate Transition4' */
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition4 =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3_o1;

    /* RateTransition: '<S6>/Rate Transition5' */
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition5 =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4_o1;

    /* S-Function (xpcinterrupt): '<S6>/IRQ Source' */
    integrated_3PropControl_6bi_ISR();

    /* End of Outputs for S-Function (xpcinterrupt): '<S6>/IRQ Source' */
  }

  xpceDAQUpdateTimeStamp(1,
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.t[1]);
  xpceDAQPostEvent(1);
}

/*
 * Output and update for atomic system:
 *    '<S12>/Bit Shift1'
 *    '<S13>/Bit Shift1'
 *    '<S14>/Bit Shift1'
 *    '<S15>/Bit Shift1'
 *    '<S16>/Bit Shift1'
 *    '<S17>/Bit Shift1'
 *    '<S18>/Bit Shift1'
 *    '<S19>/Bit Shift1'
 */
void integrated_3PropContr_BitShift1(uint32_T rtu_u,
  B_BitShift1_integrated_3PropC_T *localB)
{
  /* MATLAB Function: '<S20>/bit_shift' */
  localB->y = rtu_u << 16;
}

/*
 * Output and update for atomic system:
 *    '<S12>/Bit Shift2'
 *    '<S13>/Bit Shift2'
 *    '<S14>/Bit Shift2'
 *    '<S15>/Bit Shift2'
 *    '<S16>/Bit Shift2'
 *    '<S17>/Bit Shift2'
 *    '<S18>/Bit Shift2'
 *    '<S19>/Bit Shift2'
 */
void integrated_3PropContr_BitShift2(uint32_T rtu_u,
  B_BitShift2_integrated_3PropC_T *localB)
{
  /* MATLAB Function: '<S21>/bit_shift' */
  localB->y = rtu_u << 24;
}

/*
 * Output and update for atomic system:
 *    '<S12>/Bit Shift3'
 *    '<S13>/Bit Shift3'
 *    '<S14>/Bit Shift3'
 *    '<S15>/Bit Shift3'
 *    '<S16>/Bit Shift3'
 *    '<S17>/Bit Shift3'
 *    '<S18>/Bit Shift3'
 *    '<S19>/Bit Shift3'
 */
void integrated_3PropContr_BitShift3(uint32_T rtu_u,
  B_BitShift3_integrated_3PropC_T *localB)
{
  /* MATLAB Function: '<S22>/bit_shift' */
  localB->y = rtu_u << 8;
}

/* Start for function-call system: '<S6>/ISR' */
void integrated_3PropContr_ISR_Start(void)
{
  /* Start for Iterator SubSystem: '<S68>/doWhile' */

  /* Start for S-Function (sg_serial_read_int_status_s_v3): '<S69>/Read Int Status (v3) ' */
  /* Level2 S-Function Block: '<S69>/Read Int Status (v3) ' (sg_serial_read_int_status_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Write (v3) 1' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Write (v3) 1' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fiforead): '<S69>/FIFO read 1' incorporates:
   *  Constant: '<S69>/Constant1'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_IWORK[0] = 256;/* Max to read */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_IWORK[1] = 1;/* Min to read */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_IWORK[2] = 0;/* Use delimiter? */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_IWORK[3] = 13;/* delimiter */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_IWORK[4] = 2;/* FIFO type */

  /* Input pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_PWORK[0] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_PWORK[1] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterWritev31;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_PWORK[2] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant1_Value;

  /* Output pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_PWORK[3] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread1_o1[0];
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_PWORK[4] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread1_o2;

  /* Start for S-Function (sg_serial_write_hw_fifo_s_v3): '<S69>/Write HW FIFO (v3) 1' */
  /* Level2 S-Function Block: '<S69>/Write HW FIFO (v3) 1' (sg_serial_write_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Write (v3) 2' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Write (v3) 2' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fiforead): '<S69>/FIFO read 2' incorporates:
   *  Constant: '<S69>/Constant2'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_IWORK[0] = 256;/* Max to read */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_IWORK[1] = 1;/* Min to read */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_IWORK[2] = 0;/* Use delimiter? */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_IWORK[3] = 13;/* delimiter */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_IWORK[4] = 2;/* FIFO type */

  /* Input pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_PWORK[0] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition2;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_PWORK[1] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterWritev32;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_PWORK[2] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant2_Value;

  /* Output pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_PWORK[3] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread2_o1[0];
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_PWORK[4] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread2_o2;

  /* Start for S-Function (sg_serial_write_hw_fifo_s_v3): '<S69>/Write HW FIFO (v3) 2' */
  /* Level2 S-Function Block: '<S69>/Write HW FIFO (v3) 2' (sg_serial_write_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Write (v3) 3' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Write (v3) 3' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fiforead): '<S69>/FIFO read 3' incorporates:
   *  Constant: '<S69>/Constant3'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_IWORK[0] = 256;/* Max to read */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_IWORK[1] = 1;/* Min to read */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_IWORK[2] = 0;/* Use delimiter? */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_IWORK[3] = 13;/* delimiter */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_IWORK[4] = 2;/* FIFO type */

  /* Input pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_PWORK[0] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition4;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_PWORK[1] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterWritev33;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_PWORK[2] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant3_Value;

  /* Output pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_PWORK[3] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread3_o1[0];
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_PWORK[4] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread3_o2;

  /* Start for S-Function (sg_serial_write_hw_fifo_s_v3): '<S69>/Write HW FIFO (v3) 3' */
  /* Level2 S-Function Block: '<S69>/Write HW FIFO (v3) 3' (sg_serial_write_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Write (v3) 4' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Write (v3) 4' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fiforead): '<S69>/FIFO read 4' incorporates:
   *  Constant: '<S69>/Constant4'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_IWORK[0] = 256;/* Max to read */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_IWORK[1] = 1;/* Min to read */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_IWORK[2] = 0;/* Use delimiter? */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_IWORK[3] = 13;/* delimiter */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_IWORK[4] = 2;/* FIFO type */

  /* Input pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_PWORK[0] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition5;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_PWORK[1] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterWritev34;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_PWORK[2] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant4_Value;

  /* Output pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_PWORK[3] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread4_o1[0];
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_PWORK[4] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread4_o2;

  /* Start for S-Function (sg_serial_write_hw_fifo_s_v3): '<S69>/Write HW FIFO (v3) 4' */
  /* Level2 S-Function Block: '<S69>/Write HW FIFO (v3) 4' (sg_serial_write_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Read (v3) 1' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Read (v3) 1' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_read_hw_fifo_s_v3): '<S69>/Read HW FIFO (v3) 1' */
  /* Level2 S-Function Block: '<S69>/Read HW FIFO (v3) 1' (sg_serial_read_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S69>/FIFO write 1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_IWORK_n[0] = 1024;/* fifo size */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_IWORK_n[1] = 2;/* fifo type */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_IWORK_n[2] = 257;/* inport width */

  /* allocate memory for FIFO */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK_d[0] =
    malloc(4 * (1024 + 3));
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK_d[0] ==
      NULL) {
    rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                      "Error allocating memory");
    return;
  }

  /* Input pointer */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK_d[1] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadHWFIFOv31[0];

  /* Output pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK_d[2] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK_d[3] = NULL;

  {
    /* Initialize the fifo */
    int *fifo =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK_d[0];
    memset(fifo, 0, 4 * (1024 + 3));
    serialfifoptr *oPtr =
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1;
    fifo[0] = 1024;
    oPtr->ptrlow = (uint32_T)fifo;
    oPtr->ptrhigh = 0;
    oPtr->token = (int)'FiFo';
  }

  /* Start for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Read (v3) 2' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Read (v3) 2' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_read_hw_fifo_s_v3): '<S69>/Read HW FIFO (v3) 2' */
  /* Level2 S-Function Block: '<S69>/Read HW FIFO (v3) 2' (sg_serial_read_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S69>/FIFO write 2' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_IWORK_g[0] = 1024;/* fifo size */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_IWORK_g[1] = 2;/* fifo type */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_IWORK_g[2] = 257;/* inport width */

  /* allocate memory for FIFO */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK_f[0] =
    malloc(4 * (1024 + 3));
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK_f[0] ==
      NULL) {
    rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                      "Error allocating memory");
    return;
  }

  /* Input pointer */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK_f[1] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadHWFIFOv32[0];

  /* Output pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK_f[2] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK_f[3] = NULL;

  {
    /* Initialize the fifo */
    int *fifo =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK_f[0];
    memset(fifo, 0, 4 * (1024 + 3));
    serialfifoptr *oPtr =
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2;
    fifo[0] = 1024;
    oPtr->ptrlow = (uint32_T)fifo;
    oPtr->ptrhigh = 0;
    oPtr->token = (int)'FiFo';
  }

  /* Start for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Read (v3) 3' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Read (v3) 3' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_read_hw_fifo_s_v3): '<S69>/Read HW FIFO (v3) 3' */
  /* Level2 S-Function Block: '<S69>/Read HW FIFO (v3) 3' (sg_serial_read_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S69>/FIFO write 3' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_IWORK_o[0] = 1024;/* fifo size */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_IWORK_o[1] = 2;/* fifo type */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_IWORK_o[2] = 257;/* inport width */

  /* allocate memory for FIFO */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK_j[0] =
    malloc(4 * (1024 + 3));
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK_j[0] ==
      NULL) {
    rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                      "Error allocating memory");
    return;
  }

  /* Input pointer */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK_j[1] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadHWFIFOv33[0];

  /* Output pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK_j[2] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK_j[3] = NULL;

  {
    /* Initialize the fifo */
    int *fifo =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK_j[0];
    memset(fifo, 0, 4 * (1024 + 3));
    serialfifoptr *oPtr =
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3;
    fifo[0] = 1024;
    oPtr->ptrlow = (uint32_T)fifo;
    oPtr->ptrhigh = 0;
    oPtr->token = (int)'FiFo';
  }

  /* Start for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Read (v3) 4' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Read (v3) 4' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_read_hw_fifo_s_v3): '<S69>/Read HW FIFO (v3) 4' */
  /* Level2 S-Function Block: '<S69>/Read HW FIFO (v3) 4' (sg_serial_read_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S69>/FIFO write 4' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_IWORK_m[0] = 1024;/* fifo size */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_IWORK_m[1] = 2;/* fifo type */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_IWORK_m[2] = 257;/* inport width */

  /* allocate memory for FIFO */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK_n[0] =
    malloc(4 * (1024 + 3));
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK_n[0] ==
      NULL) {
    rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                      "Error allocating memory");
    return;
  }

  /* Input pointer */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK_n[1] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadHWFIFOv34[0];

  /* Output pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK_n[2] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK_n[3] = NULL;

  {
    /* Initialize the fifo */
    int *fifo =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK_n[0];
    memset(fifo, 0, 4 * (1024 + 3));
    serialfifoptr *oPtr =
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4;
    fifo[0] = 1024;
    oPtr->ptrlow = (uint32_T)fifo;
    oPtr->ptrhigh = 0;
    oPtr->token = (int)'FiFo';
  }

  /* End of Start for SubSystem: '<S68>/doWhile' */
}

/* Output and update for function-call system: '<S6>/ISR' */
void integrated_3PropControl_6bi_ISR(void)
{
  int32_T s69_iter;
  rtw_xpc_mutex_take
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.semIdForTask1);
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.clockTick1 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.rtmClockTickBuf1;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.clockTickH1 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.rtmBufClockTickBufH1;
  rtw_xpc_mutex_give
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.semIdForTask1);
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.t[1] =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.clockTick1 *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.stepSize1 +
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.clockTickH1 *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.stepSize1 *
    4294967296.0;

  /* Outputs for Iterator SubSystem: '<S68>/doWhile' incorporates:
   *  WhileIterator: '<S69>/While Iterator'
   */
  s69_iter = 1;
  do {
    /* Level2 S-Function Block: '<S69>/Read Int Status (v3) ' (sg_serial_read_int_status_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[0];
      sfcnOutputs(rts,1);
    }

    /* Level2 S-Function Block: '<S69>/Int Source Filter Write (v3) 1' (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[1];
      sfcnOutputs(rts,1);
    }

    {
      void **iPtrs =
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_PWORK[0];
      void **oPtrs =
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_PWORK[3];
      fiforead(iPtrs, oPtrs,
               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread1_IWORK
               [0]);
    }

    /* Level2 S-Function Block: '<S69>/Write HW FIFO (v3) 1' (sg_serial_write_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[2];
      sfcnOutputs(rts,1);
    }

    /* Level2 S-Function Block: '<S69>/Int Source Filter Write (v3) 2' (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[3];
      sfcnOutputs(rts,1);
    }

    {
      void **iPtrs =
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_PWORK[0];
      void **oPtrs =
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_PWORK[3];
      fiforead(iPtrs, oPtrs,
               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread2_IWORK
               [0]);
    }

    /* Level2 S-Function Block: '<S69>/Write HW FIFO (v3) 2' (sg_serial_write_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[4];
      sfcnOutputs(rts,1);
    }

    /* Level2 S-Function Block: '<S69>/Int Source Filter Write (v3) 3' (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[5];
      sfcnOutputs(rts,1);
    }

    {
      void **iPtrs =
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_PWORK[0];
      void **oPtrs =
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_PWORK[3];
      fiforead(iPtrs, oPtrs,
               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread3_IWORK
               [0]);
    }

    /* Level2 S-Function Block: '<S69>/Write HW FIFO (v3) 3' (sg_serial_write_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[6];
      sfcnOutputs(rts,1);
    }

    /* Level2 S-Function Block: '<S69>/Int Source Filter Write (v3) 4' (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[7];
      sfcnOutputs(rts,1);
    }

    {
      void **iPtrs =
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_PWORK[0];
      void **oPtrs =
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_PWORK[3];
      fiforead(iPtrs, oPtrs,
               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOread4_IWORK
               [0]);
    }

    /* Level2 S-Function Block: '<S69>/Write HW FIFO (v3) 4' (sg_serial_write_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[8];
      sfcnOutputs(rts,1);
    }

    /* Level2 S-Function Block: '<S69>/Int Source Filter Read (v3) 1' (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[9];
      sfcnOutputs(rts,1);
    }

    /* Level2 S-Function Block: '<S69>/Read HW FIFO (v3) 1' (sg_serial_read_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[10];
      sfcnOutputs(rts,1);
    }

    {
      const char *err;
      static char msg[100];
      err = fifowrite
        (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK_d[0],
         integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK_d[1],
         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK_d[2],
         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_IWORK_n[0]);
      if (err) {
        if (strncmp("FIFO", err, 4)) {
          rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                            err);
        } else {
          int n = strlen(err);
          strcpy(msg, err);
          strncpy(msg + n, "Rx channel 1", 99 - n);
          rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                            msg);
        }
      }
    }

    /* Level2 S-Function Block: '<S69>/Int Source Filter Read (v3) 2' (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[11];
      sfcnOutputs(rts,1);
    }

    /* Level2 S-Function Block: '<S69>/Read HW FIFO (v3) 2' (sg_serial_read_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[12];
      sfcnOutputs(rts,1);
    }

    {
      const char *err;
      static char msg[100];
      err = fifowrite
        (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK_f[0],
         integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK_f[1],
         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK_f[2],
         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_IWORK_g[0]);
      if (err) {
        if (strncmp("FIFO", err, 4)) {
          rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                            err);
        } else {
          int n = strlen(err);
          strcpy(msg, err);
          strncpy(msg + n, "Rx channel 2", 99 - n);
          rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                            msg);
        }
      }
    }

    /* Level2 S-Function Block: '<S69>/Int Source Filter Read (v3) 3' (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[13];
      sfcnOutputs(rts,1);
    }

    /* Level2 S-Function Block: '<S69>/Read HW FIFO (v3) 3' (sg_serial_read_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[14];
      sfcnOutputs(rts,1);
    }

    {
      const char *err;
      static char msg[100];
      err = fifowrite
        (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK_j[0],
         integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK_j[1],
         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK_j[2],
         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_IWORK_o[0]);
      if (err) {
        if (strncmp("FIFO", err, 4)) {
          rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                            err);
        } else {
          int n = strlen(err);
          strcpy(msg, err);
          strncpy(msg + n, "Rx channel 3", 99 - n);
          rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                            msg);
        }
      }
    }

    /* Level2 S-Function Block: '<S69>/Int Source Filter Read (v3) 4' (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[15];
      sfcnOutputs(rts,1);
    }

    /* Level2 S-Function Block: '<S69>/Read HW FIFO (v3) 4' (sg_serial_read_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[16];
      sfcnOutputs(rts,1);
    }

    {
      const char *err;
      static char msg[100];
      err = fifowrite
        (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK_n[0],
         integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK_n[1],
         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK_n[2],
         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_IWORK_m[0]);
      if (err) {
        if (strncmp("FIFO", err, 4)) {
          rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                            err);
        } else {
          int n = strlen(err);
          strcpy(msg, err);
          strncpy(msg + n, "Rx channel 4", 99 - n);
          rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                            msg);
        }
      }
    }

    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RelationalOperator[0] =
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant_Value !=
       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3[0]);
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RelationalOperator[1] =
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant_Value !=
       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3[1]);
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RelationalOperator[2] =
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant_Value !=
       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3[2]);
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RelationalOperator[3] =
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Constant_Value !=
       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3[3]);
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.LogicalOperator =
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RelationalOperator[0] ||
       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RelationalOperator[1] ||
       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RelationalOperator[2] ||
       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RelationalOperator[3]);
    s69_iter++;
  } while (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.LogicalOperator &&
           (s69_iter <= 8));

  /* End of Outputs for SubSystem: '<S68>/doWhile' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ISR_SubsysRanBC = 4;
}

/* Termination for function-call system: '<S6>/ISR' */
void integrated_3PropContro_ISR_Term(void)
{
  /* Terminate for Iterator SubSystem: '<S68>/doWhile' */

  /* Terminate for S-Function (sg_serial_read_int_status_s_v3): '<S69>/Read Int Status (v3) ' */
  /* Level2 S-Function Block: '<S69>/Read Int Status (v3) ' (sg_serial_read_int_status_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Write (v3) 1' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Write (v3) 1' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_write_hw_fifo_s_v3): '<S69>/Write HW FIFO (v3) 1' */
  /* Level2 S-Function Block: '<S69>/Write HW FIFO (v3) 1' (sg_serial_write_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Write (v3) 2' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Write (v3) 2' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_write_hw_fifo_s_v3): '<S69>/Write HW FIFO (v3) 2' */
  /* Level2 S-Function Block: '<S69>/Write HW FIFO (v3) 2' (sg_serial_write_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Write (v3) 3' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Write (v3) 3' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_write_hw_fifo_s_v3): '<S69>/Write HW FIFO (v3) 3' */
  /* Level2 S-Function Block: '<S69>/Write HW FIFO (v3) 3' (sg_serial_write_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Write (v3) 4' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Write (v3) 4' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_write_hw_fifo_s_v3): '<S69>/Write HW FIFO (v3) 4' */
  /* Level2 S-Function Block: '<S69>/Write HW FIFO (v3) 4' (sg_serial_write_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Read (v3) 1' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Read (v3) 1' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_read_hw_fifo_s_v3): '<S69>/Read HW FIFO (v3) 1' */
  /* Level2 S-Function Block: '<S69>/Read HW FIFO (v3) 1' (sg_serial_read_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S69>/FIFO write 1' */

  /* Free fifo memory */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK_d[0]) {
    free(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK_d[0]);
  }

  /* Terminate for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Read (v3) 2' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Read (v3) 2' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_read_hw_fifo_s_v3): '<S69>/Read HW FIFO (v3) 2' */
  /* Level2 S-Function Block: '<S69>/Read HW FIFO (v3) 2' (sg_serial_read_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S69>/FIFO write 2' */

  /* Free fifo memory */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK_f[0]) {
    free(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK_f[0]);
  }

  /* Terminate for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Read (v3) 3' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Read (v3) 3' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_read_hw_fifo_s_v3): '<S69>/Read HW FIFO (v3) 3' */
  /* Level2 S-Function Block: '<S69>/Read HW FIFO (v3) 3' (sg_serial_read_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S69>/FIFO write 3' */

  /* Free fifo memory */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK_j[0]) {
    free(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK_j[0]);
  }

  /* Terminate for S-Function (sg_serial_int_source_filter_s_v3): '<S69>/Int Source Filter Read (v3) 4' */
  /* Level2 S-Function Block: '<S69>/Int Source Filter Read (v3) 4' (sg_serial_int_source_filter_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_read_hw_fifo_s_v3): '<S69>/Read HW FIFO (v3) 4' */
  /* Level2 S-Function Block: '<S69>/Read HW FIFO (v3) 4' (sg_serial_read_hw_fifo_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S69>/FIFO write 4' */

  /* Free fifo memory */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK_n[0]) {
    free(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK_n[0]);
  }

  /* End of Terminate for SubSystem: '<S68>/doWhile' */
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model output function */
static void integrated_3PropControl_6bitCmd_100HzIMU_25HzP_output(void)
{
  real_T u0;
  real_T u1;
  real_T u2;

  /* S-Function (sg_serial_setup_channel_s_v3): '<S6>/Setup Channel (v3) 1' */

  /* Level2 S-Function Block: '<S6>/Setup Channel (v3) 1' (sg_serial_setup_channel_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[17];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_serial_setup_channel_s_v3): '<S6>/Setup Channel (v3) 2' */

  /* Level2 S-Function Block: '<S6>/Setup Channel (v3) 2' (sg_serial_setup_channel_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[18];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_serial_setup_channel_s_v3): '<S6>/Setup Channel (v3) 3' */

  /* Level2 S-Function Block: '<S6>/Setup Channel (v3) 3' (sg_serial_setup_channel_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[19];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_serial_setup_channel_s_v3): '<S6>/Setup Channel (v3) 4' */

  /* Level2 S-Function Block: '<S6>/Setup Channel (v3) 4' (sg_serial_setup_channel_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[20];
    sfcnOutputs(rts,0);
  }

  /* RateTransition: '<S6>/Rate Transition3' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition3 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2;

  /* S-Function (fiforeadbinhdr): '<S3>/FIFO bin read ' */

  /* Level2 S-Function Block: '<S3>/FIFO bin read ' (fiforeadbinhdr) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[21];
    sfcnOutputs(rts,0);
  }

  /* S-Function (xpcbitpacking): '<S13>/Bit Packing 1' */

  /* Bit Packing: <S13>/Bit Packing 1 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[5]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S13>/Bit Shift2' */
  integrated_3PropContr_BitShift2
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_f);

  /* End of Outputs for SubSystem: '<S13>/Bit Shift2' */

  /* S-Function (xpcbitpacking): '<S13>/Bit Packing 2' */

  /* Bit Packing: <S13>/Bit Packing 2 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[6]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S13>/Bit Shift1' */
  integrated_3PropContr_BitShift1
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_m);

  /* End of Outputs for SubSystem: '<S13>/Bit Shift1' */

  /* S-Function (xpcbitpacking): '<S13>/Bit Packing 3' */

  /* Bit Packing: <S13>/Bit Packing 3 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[7]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S13>/Bit Shift3' */
  integrated_3PropContr_BitShift3
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_d);

  /* End of Outputs for SubSystem: '<S13>/Bit Shift3' */

  /* S-Function (xpcbitpacking): '<S13>/Bit Packing 4' */

  /* Bit Packing: <S13>/Bit Packing 4 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[8]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* S-Function (sfix_bitop): '<S13>/Bitwise Operator' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_f.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_m.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_d.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4;

  /* S-Function (xpcbitpacking): '<S13>/Bit Packing ' */

  /* Bit Packing: <S13>/Bit Packing  */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
    *(pack_ptr + 1) = ((*(unpack_ptr + 1) ) ) ;
    *(pack_ptr + 2) = ((*(unpack_ptr + 2) ) ) ;
    *(pack_ptr + 3) = ((*(unpack_ptr + 3) ) ) ;
  }

  /* DataTypeConversion: '<S13>/Cast To Double1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking;

  /* Gain: '<S3>/Gain1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Pitch =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain1_Gain *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1;

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S2>/pitchSP'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.pitchSP_Value -
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Pitch;

  /* Gain: '<S1>/Gain' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_pitchKP *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add;

  /* RelationalOperator: '<S7>/LowerRelop1' incorporates:
   *  Constant: '<S1>/Constant'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.LowerRelop1 =
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain >
     integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax);

  /* Gain: '<S1>/Gain3' incorporates:
   *  Constant: '<S1>/Constant'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain3 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain3_Gain *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax;

  /* RelationalOperator: '<S7>/UpperRelop' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.UpperRelop =
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain <
     integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain3);

  /* Switch: '<S7>/Switch' */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.UpperRelop) {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain3;
  } else {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain;
  }

  /* End of Switch: '<S7>/Switch' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S1>/Constant'
   */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.LowerRelop1) {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch2 =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax;
  } else {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch2 =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* Sum: '<S1>/Add3' incorporates:
   *  Constant: '<S1>/Constant'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add3 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax +
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch2;

  /* Gain: '<S1>/Gain4' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain4 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain4_Gain *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add3;

  /* Rounding: '<S1>/Round' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.pitchCmd = rt_roundd_snf
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain4);

  /* Saturate: '<S1>/Saturation2' */
  u0 = integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.pitchCmd;
  u1 = integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Saturation2_LowerSat;
  u2 = integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Saturation2_UpperSat;
  if (u0 > u2) {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.pitchCmd_c = u2;
  } else if (u0 < u1) {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.pitchCmd_c = u1;
  } else {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.pitchCmd_c = u0;
  }

  /* End of Saturate: '<S1>/Saturation2' */

  /* DataTypeConversion: '<Root>/Cast To Double1' */
  u0 = floor(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.pitchCmd_c);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_dc = (uint8_T)
    (u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<Root>/Cast To Double1' */

  /* S-Function (xpcbitpacking): '<S14>/Bit Packing 1' */

  /* Bit Packing: <S14>/Bit Packing 1 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_k);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[9]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S14>/Bit Shift2' */
  integrated_3PropContr_BitShift2
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_k,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_g);

  /* End of Outputs for SubSystem: '<S14>/Bit Shift2' */

  /* S-Function (xpcbitpacking): '<S14>/Bit Packing 2' */

  /* Bit Packing: <S14>/Bit Packing 2 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_p);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[10]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S14>/Bit Shift1' */
  integrated_3PropContr_BitShift1
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_p,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_mz);

  /* End of Outputs for SubSystem: '<S14>/Bit Shift1' */

  /* S-Function (xpcbitpacking): '<S14>/Bit Packing 3' */

  /* Bit Packing: <S14>/Bit Packing 3 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_l);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[11]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S14>/Bit Shift3' */
  integrated_3PropContr_BitShift3
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_l,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_f);

  /* End of Outputs for SubSystem: '<S14>/Bit Shift3' */

  /* S-Function (xpcbitpacking): '<S14>/Bit Packing 4' */

  /* Bit Packing: <S14>/Bit Packing 4 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_n);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[12]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* S-Function (sfix_bitop): '<S14>/Bitwise Operator' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_n =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_g.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_mz.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_f.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_n;

  /* S-Function (xpcbitpacking): '<S14>/Bit Packing ' */

  /* Bit Packing: <S14>/Bit Packing  */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_k);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_n) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
    *(pack_ptr + 1) = ((*(unpack_ptr + 1) ) ) ;
    *(pack_ptr + 2) = ((*(unpack_ptr + 2) ) ) ;
    *(pack_ptr + 3) = ((*(unpack_ptr + 3) ) ) ;
  }

  /* DataTypeConversion: '<S14>/Cast To Double1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_o =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_k;

  /* Gain: '<S3>/Gain2' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Yaw =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain2_Gain *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_o;

  /* Sum: '<S1>/Add1' incorporates:
   *  Constant: '<S2>/yawSP'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add1 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.yawSP_Value -
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Yaw;

  /* Gain: '<S1>/Gain2' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain2 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_rollKP *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add1;

  /* RelationalOperator: '<S8>/LowerRelop1' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.LowerRelop1_i =
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain2 >
     integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax);

  /* Gain: '<S1>/Gain5' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain5 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain5_Gain *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax;

  /* RelationalOperator: '<S8>/UpperRelop' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.UpperRelop_n =
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain2 <
     integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain5);

  /* Switch: '<S8>/Switch' */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.UpperRelop_n) {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch_c =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain5;
  } else {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch_c =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain2;
  }

  /* End of Switch: '<S8>/Switch' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.LowerRelop1_i) {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch2_k =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax;
  } else {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch2_k =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch_c;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* Sum: '<S1>/Add4' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add4 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax +
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch2_k;

  /* Gain: '<S1>/Gain6' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain6 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain6_Gain *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add4;

  /* Rounding: '<S1>/Round1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.yawcmd = rt_roundd_snf
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain6);

  /* Saturate: '<S1>/Saturation1' */
  u0 = integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.yawcmd;
  u1 = integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Saturation1_LowerSat;
  u2 = integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Saturation1_UpperSat;
  if (u0 > u2) {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.yawCmd = u2;
  } else if (u0 < u1) {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.yawCmd = u1;
  } else {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.yawCmd = u0;
  }

  /* End of Saturate: '<S1>/Saturation1' */

  /* DataTypeConversion: '<Root>/Cast To Double2' */
  u0 = floor(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.yawCmd);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble2 = (uint8_T)(u0 <
    0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<Root>/Cast To Double2' */

  /* S-Function (xpcbitpacking): '<S12>/Bit Packing 1' */

  /* Bit Packing: <S12>/Bit Packing 1 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_l);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[1]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S12>/Bit Shift2' */
  integrated_3PropContr_BitShift2
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_l,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2);

  /* End of Outputs for SubSystem: '<S12>/Bit Shift2' */

  /* S-Function (xpcbitpacking): '<S12>/Bit Packing 2' */

  /* Bit Packing: <S12>/Bit Packing 2 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_f);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[2]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S12>/Bit Shift1' */
  integrated_3PropContr_BitShift1
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_f,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1);

  /* End of Outputs for SubSystem: '<S12>/Bit Shift1' */

  /* S-Function (xpcbitpacking): '<S12>/Bit Packing 3' */

  /* Bit Packing: <S12>/Bit Packing 3 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_o);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[3]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S12>/Bit Shift3' */
  integrated_3PropContr_BitShift3
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_o,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3);

  /* End of Outputs for SubSystem: '<S12>/Bit Shift3' */

  /* S-Function (xpcbitpacking): '<S12>/Bit Packing 4' */

  /* Bit Packing: <S12>/Bit Packing 4 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_p);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[4]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* S-Function (sfix_bitop): '<S12>/Bitwise Operator' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_g =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_p;

  /* S-Function (xpcbitpacking): '<S12>/Bit Packing ' */

  /* Bit Packing: <S12>/Bit Packing  */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_p);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_g) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
    *(pack_ptr + 1) = ((*(unpack_ptr + 1) ) ) ;
    *(pack_ptr + 2) = ((*(unpack_ptr + 2) ) ) ;
    *(pack_ptr + 3) = ((*(unpack_ptr + 3) ) ) ;
  }

  /* DataTypeConversion: '<S12>/Cast To Double1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_j =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_p;

  /* Gain: '<S3>/Gain' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Roll =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain_Gain *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_j;

  /* Sum: '<S1>/Add2' incorporates:
   *  Constant: '<S2>/rollSP'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add2 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Roll -
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.rollSP_Value;

  /* Gain: '<S1>/Gain1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain1 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_pitchKP *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add2;

  /* RelationalOperator: '<S9>/LowerRelop1' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.LowerRelop1_i2 =
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain1 >
     integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax);

  /* Gain: '<S1>/Gain7' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain7 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain7_Gain *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax;

  /* RelationalOperator: '<S9>/UpperRelop' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.UpperRelop_m =
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain1 <
     integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain7);

  /* Switch: '<S9>/Switch' */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.UpperRelop_m) {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch_m =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain7;
  } else {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch_m =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain1;
  }

  /* End of Switch: '<S9>/Switch' */

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.LowerRelop1_i2) {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch2_c =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax;
  } else {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch2_c =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch_m;
  }

  /* End of Switch: '<S9>/Switch2' */

  /* Sum: '<S1>/Add5' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add5 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Controller_ctrlSurfDefMax +
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Switch2_c;

  /* Gain: '<S1>/Gain8' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain8 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain8_Gain *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Add5;

  /* Rounding: '<S1>/Round2' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.rollCmd = rt_roundd_snf
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.Gain8);

  /* Saturate: '<S1>/Saturation' */
  u0 = integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.rollCmd;
  u1 = integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Saturation_LowerSat;
  u2 = integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Saturation_UpperSat;
  if (u0 > u2) {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.rollCmd_l = u2;
  } else if (u0 < u1) {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.rollCmd_l = u1;
  } else {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.rollCmd_l = u0;
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* DataTypeConversion: '<Root>/Cast To Double3' */
  u0 = floor(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.rollCmd_l);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble3 = (uint8_T)(u0 <
    0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<Root>/Cast To Double3' */

  /* S-Function (asciiencode): '<Root>/ASCII Encode ' */

  /* Level2 S-Function Block: '<Root>/ASCII Encode ' (asciiencode) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[22];
    sfcnOutputs(rts,0);
  }

  /* S-Function (fifowrite): '<S6>/FIFO write 1' */
  {
    const char *err;
    static char msg[100];
    err = fifowrite
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK[0],
       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK[1],
       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK[2],
       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_IWORK[0]);
    if (err) {
      if (strncmp("FIFO", err, 4)) {
        rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M, err);
      } else {
        int n = strlen(err);
        strcpy(msg, err);
        strncpy(msg + n, "Tx channel 1", 99 - n);
        rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M, msg);
      }
    }
  }

  /* S-Function (sg_serial_enable_tx_int_s_v3): '<S6>/Enable Tx Int (v3) 1' */

  /* Level2 S-Function Block: '<S6>/Enable Tx Int (v3) 1' (sg_serial_enable_tx_int_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[23];
    sfcnOutputs(rts,0);
  }

  /* S-Function (fifowrite): '<S6>/FIFO write 2' */
  {
    const char *err;
    static char msg[100];
    err = fifowrite
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK[0],
       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK[1],
       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK[2],
       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_IWORK[0]);
    if (err) {
      if (strncmp("FIFO", err, 4)) {
        rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M, err);
      } else {
        int n = strlen(err);
        strcpy(msg, err);
        strncpy(msg + n, "Tx channel 2", 99 - n);
        rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M, msg);
      }
    }
  }

  /* S-Function (sg_serial_enable_tx_int_s_v3): '<S6>/Enable Tx Int (v3) 2' */

  /* Level2 S-Function Block: '<S6>/Enable Tx Int (v3) 2' (sg_serial_enable_tx_int_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[24];
    sfcnOutputs(rts,0);
  }

  /* S-Function (fifowrite): '<S6>/FIFO write 3' */
  {
    const char *err;
    static char msg[100];
    err = fifowrite
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK[0],
       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK[1],
       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK[2],
       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_IWORK[0]);
    if (err) {
      if (strncmp("FIFO", err, 4)) {
        rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M, err);
      } else {
        int n = strlen(err);
        strcpy(msg, err);
        strncpy(msg + n, "Tx channel 3", 99 - n);
        rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M, msg);
      }
    }
  }

  /* S-Function (sg_serial_enable_tx_int_s_v3): '<S6>/Enable Tx Int (v3) 3' */

  /* Level2 S-Function Block: '<S6>/Enable Tx Int (v3) 3' (sg_serial_enable_tx_int_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[25];
    sfcnOutputs(rts,0);
  }

  /* S-Function (fifowrite): '<S6>/FIFO write 4' */
  {
    const char *err;
    static char msg[100];
    err = fifowrite
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK[0],
       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK[1],
       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK[2],
       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_IWORK[0]);
    if (err) {
      if (strncmp("FIFO", err, 4)) {
        rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M, err);
      } else {
        int n = strlen(err);
        strcpy(msg, err);
        strncpy(msg + n, "Tx channel 4", 99 - n);
        rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M, msg);
      }
    }
  }

  /* S-Function (sg_serial_enable_tx_int_s_v3): '<S6>/Enable Tx Int (v3) 4' */

  /* Level2 S-Function Block: '<S6>/Enable Tx Int (v3) 4' (sg_serial_enable_tx_int_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[26];
    sfcnOutputs(rts,0);
  }

  /* RateTransition: '<S6>/Rate Transition1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition1 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1;

  /* RateTransition: '<S6>/Rate Transition6' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition6 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3;

  /* RateTransition: '<S6>/Rate Transition7' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition7 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4;

  /* S-Function (scblock): '<S4>/S-Function' */
  /* ok to acquire for <S4>/S-Function */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.SFunction_IWORK.AcquireOK =
    1;

  /* S-Function (scblock): '<S5>/S-Function' */
  /* ok to acquire for <S5>/S-Function */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.SFunction_IWORK_l.AcquireOK =
    1;

  /* S-Function (xpcbitpacking): '<S19>/Bit Packing 1' */

  /* Bit Packing: <S19>/Bit Packing 1 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_m);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[29]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S19>/Bit Shift2' */
  integrated_3PropContr_BitShift2
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_m,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_i);

  /* End of Outputs for SubSystem: '<S19>/Bit Shift2' */

  /* S-Function (xpcbitpacking): '<S19>/Bit Packing 2' */

  /* Bit Packing: <S19>/Bit Packing 2 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_d);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[30]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S19>/Bit Shift1' */
  integrated_3PropContr_BitShift1
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_d,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_j);

  /* End of Outputs for SubSystem: '<S19>/Bit Shift1' */

  /* S-Function (xpcbitpacking): '<S19>/Bit Packing 3' */

  /* Bit Packing: <S19>/Bit Packing 3 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_k);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[31]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S19>/Bit Shift3' */
  integrated_3PropContr_BitShift3
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_k,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_a0);

  /* End of Outputs for SubSystem: '<S19>/Bit Shift3' */

  /* S-Function (xpcbitpacking): '<S19>/Bit Packing 4' */

  /* Bit Packing: <S19>/Bit Packing 4 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_pr);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[32]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* S-Function (sfix_bitop): '<S19>/Bitwise Operator' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_b =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_i.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_j.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_a0.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_pr;

  /* S-Function (xpcbitpacking): '<S19>/Bit Packing ' */

  /* Bit Packing: <S19>/Bit Packing  */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_l);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_b) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
    *(pack_ptr + 1) = ((*(unpack_ptr + 1) ) ) ;
    *(pack_ptr + 2) = ((*(unpack_ptr + 2) ) ) ;
    *(pack_ptr + 3) = ((*(unpack_ptr + 3) ) ) ;
  }

  /* DataTypeConversion: '<S19>/Cast To Double1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_d =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_l;

  /* S-Function (xpcbitpacking): '<S15>/Bit Packing 1' */

  /* Bit Packing: <S15>/Bit Packing 1 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_a);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[13]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S15>/Bit Shift2' */
  integrated_3PropContr_BitShift2
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_a,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_d);

  /* End of Outputs for SubSystem: '<S15>/Bit Shift2' */

  /* S-Function (xpcbitpacking): '<S15>/Bit Packing 2' */

  /* Bit Packing: <S15>/Bit Packing 2 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_po);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[14]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S15>/Bit Shift1' */
  integrated_3PropContr_BitShift1
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_po,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_i);

  /* End of Outputs for SubSystem: '<S15>/Bit Shift1' */

  /* S-Function (xpcbitpacking): '<S15>/Bit Packing 3' */

  /* Bit Packing: <S15>/Bit Packing 3 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_ku);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[15]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S15>/Bit Shift3' */
  integrated_3PropContr_BitShift3
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_ku,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_j);

  /* End of Outputs for SubSystem: '<S15>/Bit Shift3' */

  /* S-Function (xpcbitpacking): '<S15>/Bit Packing 4' */

  /* Bit Packing: <S15>/Bit Packing 4 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_l);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[16]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* S-Function (sfix_bitop): '<S15>/Bitwise Operator' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_bf =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_d.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_i.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_j.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_l;

  /* S-Function (xpcbitpacking): '<S15>/Bit Packing ' */

  /* Bit Packing: <S15>/Bit Packing  */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_n);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_bf) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
    *(pack_ptr + 1) = ((*(unpack_ptr + 1) ) ) ;
    *(pack_ptr + 2) = ((*(unpack_ptr + 2) ) ) ;
    *(pack_ptr + 3) = ((*(unpack_ptr + 3) ) ) ;
  }

  /* DataTypeConversion: '<S15>/Cast To Double1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_l =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_n;

  /* S-Function (xpcbitpacking): '<S16>/Bit Packing 1' */

  /* Bit Packing: <S16>/Bit Packing 1 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_d);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[17]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S16>/Bit Shift2' */
  integrated_3PropContr_BitShift2
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_d,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_fi);

  /* End of Outputs for SubSystem: '<S16>/Bit Shift2' */

  /* S-Function (xpcbitpacking): '<S16>/Bit Packing 2' */

  /* Bit Packing: <S16>/Bit Packing 2 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_o);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[18]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S16>/Bit Shift1' */
  integrated_3PropContr_BitShift1
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_o,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_f);

  /* End of Outputs for SubSystem: '<S16>/Bit Shift1' */

  /* S-Function (xpcbitpacking): '<S16>/Bit Packing 3' */

  /* Bit Packing: <S16>/Bit Packing 3 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_g);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[19]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S16>/Bit Shift3' */
  integrated_3PropContr_BitShift3
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_g,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_n);

  /* End of Outputs for SubSystem: '<S16>/Bit Shift3' */

  /* S-Function (xpcbitpacking): '<S16>/Bit Packing 4' */

  /* Bit Packing: <S16>/Bit Packing 4 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_c);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[20]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* S-Function (sfix_bitop): '<S16>/Bitwise Operator' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_be =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_fi.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_f.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_n.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_c;

  /* S-Function (xpcbitpacking): '<S16>/Bit Packing ' */

  /* Bit Packing: <S16>/Bit Packing  */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_l0);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_be) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
    *(pack_ptr + 1) = ((*(unpack_ptr + 1) ) ) ;
    *(pack_ptr + 2) = ((*(unpack_ptr + 2) ) ) ;
    *(pack_ptr + 3) = ((*(unpack_ptr + 3) ) ) ;
  }

  /* DataTypeConversion: '<S16>/Cast To Double1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_m =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_l0;

  /* S-Function (xpcbitpacking): '<S17>/Bit Packing 1' */

  /* Bit Packing: <S17>/Bit Packing 1 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_ac);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[21]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S17>/Bit Shift2' */
  integrated_3PropContr_BitShift2
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_ac,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_e);

  /* End of Outputs for SubSystem: '<S17>/Bit Shift2' */

  /* S-Function (xpcbitpacking): '<S17>/Bit Packing 2' */

  /* Bit Packing: <S17>/Bit Packing 2 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_pq);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[22]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S17>/Bit Shift1' */
  integrated_3PropContr_BitShift1
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_pq,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_b);

  /* End of Outputs for SubSystem: '<S17>/Bit Shift1' */

  /* S-Function (xpcbitpacking): '<S17>/Bit Packing 3' */

  /* Bit Packing: <S17>/Bit Packing 3 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_lt);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[23]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S17>/Bit Shift3' */
  integrated_3PropContr_BitShift3
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_lt,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_a);

  /* End of Outputs for SubSystem: '<S17>/Bit Shift3' */

  /* S-Function (xpcbitpacking): '<S17>/Bit Packing 4' */

  /* Bit Packing: <S17>/Bit Packing 4 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_g);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[24]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* S-Function (sfix_bitop): '<S17>/Bitwise Operator' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_gw =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_e.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_b.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_a.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_g;

  /* S-Function (xpcbitpacking): '<S17>/Bit Packing ' */

  /* Bit Packing: <S17>/Bit Packing  */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_b);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_gw) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
    *(pack_ptr + 1) = ((*(unpack_ptr + 1) ) ) ;
    *(pack_ptr + 2) = ((*(unpack_ptr + 2) ) ) ;
    *(pack_ptr + 3) = ((*(unpack_ptr + 3) ) ) ;
  }

  /* DataTypeConversion: '<S17>/Cast To Double1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_b =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_b;

  /* S-Function (xpcbitpacking): '<S18>/Bit Packing 1' */

  /* Bit Packing: <S18>/Bit Packing 1 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_o);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[25]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S18>/Bit Shift2' */
  integrated_3PropContr_BitShift2
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_o,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_k);

  /* End of Outputs for SubSystem: '<S18>/Bit Shift2' */

  /* S-Function (xpcbitpacking): '<S18>/Bit Packing 2' */

  /* Bit Packing: <S18>/Bit Packing 2 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_l);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[26]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S18>/Bit Shift1' */
  integrated_3PropContr_BitShift1
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_l,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_a);

  /* End of Outputs for SubSystem: '<S18>/Bit Shift1' */

  /* S-Function (xpcbitpacking): '<S18>/Bit Packing 3' */

  /* Bit Packing: <S18>/Bit Packing 3 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_e);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[27]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* Outputs for Atomic SubSystem: '<S18>/Bit Shift3' */
  integrated_3PropContr_BitShift3
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_e,
     &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_l);

  /* End of Outputs for SubSystem: '<S18>/Bit Shift3' */

  /* S-Function (xpcbitpacking): '<S18>/Bit Packing 4' */

  /* Bit Packing: <S18>/Bit Packing 4 */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_cr);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread[28]) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
  }

  /* S-Function (sfix_bitop): '<S18>/Bitwise Operator' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_l =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift2_k.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift1_a.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitShift3_l.y |
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_cr;

  /* S-Function (xpcbitpacking): '<S18>/Bit Packing ' */

  /* Bit Packing: <S18>/Bit Packing  */
  {
    uint8_T *pack_ptr, *unpack_ptr;
    pack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_ng);
    unpack_ptr = (uint8_T*)
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitwiseOperator_l) ;
    *pack_ptr = ((*unpack_ptr ) ) ;
    *(pack_ptr + 1) = ((*(unpack_ptr + 1) ) ) ;
    *(pack_ptr + 2) = ((*(unpack_ptr + 2) ) ) ;
    *(pack_ptr + 3) = ((*(unpack_ptr + 3) ) ) ;
  }

  /* DataTypeConversion: '<S18>/Cast To Double1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_g =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_ng;

  /* S-Function (scblock): '<S10>/S-Function' */
  /* ok to acquire for <S10>/S-Function */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.SFunction_IWORK_p.AcquireOK =
    1;

  /* S-Function (scblock): '<S11>/S-Function' */
  /* ok to acquire for <S11>/S-Function */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.SFunction_IWORK_k.AcquireOK =
    1;

  /* Gain: '<S3>/Gain5' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.YawRate =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain5_Gain_j *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_b;

  /* Gain: '<S3>/Gain4' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.PitchRate =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain4_Gain_b *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_m;

  /* Gain: '<S3>/Gain3' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RollRate =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.Gain3_Gain_a *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_l;
}

/* Model update function */
static void integrated_3PropControl_6bitCmd_100HzIMU_25HzP_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.clockTick0))
  {
    ++integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.clockTickH0;
  }

  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.t[0] =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.clockTick0 *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.stepSize0 +
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.clockTickH0 *
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.stepSize0 *
    4294967296.0;
  rtw_xpc_mutex_take
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.semIdForTask1);
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.rtmClockTickBuf1 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.clockTick0;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.rtmBufClockTickBufH1 =
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.clockTickH0;
  rtw_xpc_mutex_give
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.semIdForTask1);
}

/* Model initialize function */
static void integrated_3PropControl_6bitCmd_100HzIMU_25HzP_initialize(void)
{
  /* Start for S-Function (sg_serial_setup_channel_s_v3): '<S6>/Setup Channel (v3) 1' */
  /* Level2 S-Function Block: '<S6>/Setup Channel (v3) 1' (sg_serial_setup_channel_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_setup_channel_s_v3): '<S6>/Setup Channel (v3) 2' */
  /* Level2 S-Function Block: '<S6>/Setup Channel (v3) 2' (sg_serial_setup_channel_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_setup_channel_s_v3): '<S6>/Setup Channel (v3) 3' */
  /* Level2 S-Function Block: '<S6>/Setup Channel (v3) 3' (sg_serial_setup_channel_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_serial_setup_channel_s_v3): '<S6>/Setup Channel (v3) 4' */
  /* Level2 S-Function Block: '<S6>/Setup Channel (v3) 4' (sg_serial_setup_channel_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (xpcinterrupt): '<S6>/IRQ Source' incorporates:
   *  SubSystem: '<S6>/ISR'
   */
  integrated_3PropContr_ISR_Start();

  /* End of Start for S-Function (xpcinterrupt): '<S6>/IRQ Source' */

  /* Start for S-Function (fiforeadbinhdr): '<S3>/FIFO bin read ' */
  /* Level2 S-Function Block: '<S3>/FIFO bin read ' (fiforeadbinhdr) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (xpcbitpacking): '<S13>/Bit Packing 1' */

  /* Bit Packing: <S13>/Bit Packing 1 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S13>/Bit Packing 2' */

  /* Bit Packing: <S13>/Bit Packing 2 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S13>/Bit Packing 3' */

  /* Bit Packing: <S13>/Bit Packing 3 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S13>/Bit Packing 4' */

  /* Bit Packing: <S13>/Bit Packing 4 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S13>/Bit Packing ' */

  /* Bit Packing: <S13>/Bit Packing  */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S14>/Bit Packing 1' */

  /* Bit Packing: <S14>/Bit Packing 1 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_k, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S14>/Bit Packing 2' */

  /* Bit Packing: <S14>/Bit Packing 2 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_p, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S14>/Bit Packing 3' */

  /* Bit Packing: <S14>/Bit Packing 3 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_l, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S14>/Bit Packing 4' */

  /* Bit Packing: <S14>/Bit Packing 4 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_n, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S14>/Bit Packing ' */

  /* Bit Packing: <S14>/Bit Packing  */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_k, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S12>/Bit Packing 1' */

  /* Bit Packing: <S12>/Bit Packing 1 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_l, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S12>/Bit Packing 2' */

  /* Bit Packing: <S12>/Bit Packing 2 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_f, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S12>/Bit Packing 3' */

  /* Bit Packing: <S12>/Bit Packing 3 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_o, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S12>/Bit Packing 4' */

  /* Bit Packing: <S12>/Bit Packing 4 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_p, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S12>/Bit Packing ' */

  /* Bit Packing: <S12>/Bit Packing  */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_p, 0,4);

  /* Start for S-Function (asciiencode): '<Root>/ASCII Encode ' */
  /* Level2 S-Function Block: '<Root>/ASCII Encode ' (asciiencode) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S6>/FIFO write 1' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_IWORK[0] = 1024;/* fifo size */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_IWORK[1] = 6;/* fifo type */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_IWORK[2] = 256;/* inport width */

  /* allocate memory for FIFO */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK[0] = malloc
    (4 * (1024 + 3));
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK[0] ==
      NULL) {
    rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                      "Error allocating memory");
    return;
  }

  /* Input pointer */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK[1] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ASCIIEncode[0];

  /* Output pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK[2] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1_o1;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK[3] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1_o2;

  {
    /* Initialize the fifo */
    int *fifo =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK[0];
    memset(fifo, 0, 4 * (1024 + 3));
    serialfifoptr *oPtr =
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1_o1;
    fifo[0] = 1024;
    oPtr->ptrlow = (uint32_T)fifo;
    oPtr->ptrhigh = 0;
    oPtr->token = (int)'FiFo';
  }

  /* Start for S-Function (sg_serial_enable_tx_int_s_v3): '<S6>/Enable Tx Int (v3) 1' */
  /* Level2 S-Function Block: '<S6>/Enable Tx Int (v3) 1' (sg_serial_enable_tx_int_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S6>/FIFO write 2' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_IWORK[0] = 1024;/* fifo size */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_IWORK[1] = 5;/* fifo type */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_IWORK[2] = 1;/* inport width */

  /* allocate memory for FIFO */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK[0] = malloc
    (4 * (1024 + 3));
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK[0] ==
      NULL) {
    rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                      "Error allocating memory");
    return;
  }

  /* Input pointer */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK[1] =
    ((int8_T*) &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_I8GND);

  /* Output pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK[2] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2_o1;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK[3] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2_o2;

  {
    /* Initialize the fifo */
    int *fifo =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK[0];
    memset(fifo, 0, 4 * (1024 + 3));
    serialfifoptr *oPtr =
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2_o1;
    fifo[0] = 1024;
    oPtr->ptrlow = (uint32_T)fifo;
    oPtr->ptrhigh = 0;
    oPtr->token = (int)'FiFo';
  }

  /* Start for S-Function (sg_serial_enable_tx_int_s_v3): '<S6>/Enable Tx Int (v3) 2' */
  /* Level2 S-Function Block: '<S6>/Enable Tx Int (v3) 2' (sg_serial_enable_tx_int_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[24];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S6>/FIFO write 3' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_IWORK[0] = 1024;/* fifo size */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_IWORK[1] = 6;/* fifo type */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_IWORK[2] = 1;/* inport width */

  /* allocate memory for FIFO */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK[0] = malloc
    (4 * (1024 + 3));
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK[0] ==
      NULL) {
    rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                      "Error allocating memory");
    return;
  }

  /* Input pointer */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK[1] =
    ((uint8_T*) &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_U8GND);

  /* Output pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK[2] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3_o1;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK[3] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3_o2;

  {
    /* Initialize the fifo */
    int *fifo =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK[0];
    memset(fifo, 0, 4 * (1024 + 3));
    serialfifoptr *oPtr =
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3_o1;
    fifo[0] = 1024;
    oPtr->ptrlow = (uint32_T)fifo;
    oPtr->ptrhigh = 0;
    oPtr->token = (int)'FiFo';
  }

  /* Start for S-Function (sg_serial_enable_tx_int_s_v3): '<S6>/Enable Tx Int (v3) 3' */
  /* Level2 S-Function Block: '<S6>/Enable Tx Int (v3) 3' (sg_serial_enable_tx_int_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[25];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S6>/FIFO write 4' */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_IWORK[0] = 1024;/* fifo size */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_IWORK[1] = 6;/* fifo type */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_IWORK[2] = 1;/* inport width */

  /* allocate memory for FIFO */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK[0] = malloc
    (4 * (1024 + 3));
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK[0] ==
      NULL) {
    rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                      "Error allocating memory");
    return;
  }

  /* Input pointer */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK[1] =
    ((uint8_T*) &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_U8GND);

  /* Output pointer(s) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK[2] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4_o1;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK[3] =
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4_o2;

  {
    /* Initialize the fifo */
    int *fifo =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK[0];
    memset(fifo, 0, 4 * (1024 + 3));
    serialfifoptr *oPtr =
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4_o1;
    fifo[0] = 1024;
    oPtr->ptrlow = (uint32_T)fifo;
    oPtr->ptrhigh = 0;
    oPtr->token = (int)'FiFo';
  }

  /* Start for S-Function (sg_serial_enable_tx_int_s_v3): '<S6>/Enable Tx Int (v3) 4' */
  /* Level2 S-Function Block: '<S6>/Enable Tx Int (v3) 4' (sg_serial_enable_tx_int_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[26];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scblock): '<S4>/S-Function' */

  /* S-Function Block: <S4>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("Cast To Double1"));
        rl32eAddSignal(1, rl32eGetSignalNo("Cast To Double2"));
        rl32eAddSignal(1, rl32eGetSignalNo("Cast To Double3"));
        rl32eSetScope(1, 4, 1000);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("Cast To Double1"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 1, 2.0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 100.0);
        xpceScopeAcqOK(1,
                       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* Start for S-Function (scblock): '<S5>/S-Function' */

  /* S-Function Block: <S5>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("Cast To Double1"));
        rl32eAddSignal(2, rl32eGetSignalNo("Cast To Double2"));
        rl32eAddSignal(2, rl32eGetSignalNo("Cast To Double3"));
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Cast To Double1"),"%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Cast To Double2"),"%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Cast To Double3"),"%15.6f");
        rl32eSetScope(2, 4, 1000);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("Cast To Double1"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 0.0);
        rl32eSetTargetScope(2, 11, -0.5);
        rl32eSetTargetScope(2, 10, 0.5);
        xpceScopeAcqOK(2,
                       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.SFunction_IWORK_l.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* Start for S-Function (xpcbitpacking): '<S19>/Bit Packing 1' */

  /* Bit Packing: <S19>/Bit Packing 1 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_m, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S19>/Bit Packing 2' */

  /* Bit Packing: <S19>/Bit Packing 2 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_d, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S19>/Bit Packing 3' */

  /* Bit Packing: <S19>/Bit Packing 3 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_k, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S19>/Bit Packing 4' */

  /* Bit Packing: <S19>/Bit Packing 4 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_pr, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S19>/Bit Packing ' */

  /* Bit Packing: <S19>/Bit Packing  */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_l, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S15>/Bit Packing 1' */

  /* Bit Packing: <S15>/Bit Packing 1 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_a, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S15>/Bit Packing 2' */

  /* Bit Packing: <S15>/Bit Packing 2 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_po, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S15>/Bit Packing 3' */

  /* Bit Packing: <S15>/Bit Packing 3 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_ku, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S15>/Bit Packing 4' */

  /* Bit Packing: <S15>/Bit Packing 4 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_l, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S15>/Bit Packing ' */

  /* Bit Packing: <S15>/Bit Packing  */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_n, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S16>/Bit Packing 1' */

  /* Bit Packing: <S16>/Bit Packing 1 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_d, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S16>/Bit Packing 2' */

  /* Bit Packing: <S16>/Bit Packing 2 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_o, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S16>/Bit Packing 3' */

  /* Bit Packing: <S16>/Bit Packing 3 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_g, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S16>/Bit Packing 4' */

  /* Bit Packing: <S16>/Bit Packing 4 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_c, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S16>/Bit Packing ' */

  /* Bit Packing: <S16>/Bit Packing  */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_l0, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S17>/Bit Packing 1' */

  /* Bit Packing: <S17>/Bit Packing 1 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_ac, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S17>/Bit Packing 2' */

  /* Bit Packing: <S17>/Bit Packing 2 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_pq, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S17>/Bit Packing 3' */

  /* Bit Packing: <S17>/Bit Packing 3 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_lt, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S17>/Bit Packing 4' */

  /* Bit Packing: <S17>/Bit Packing 4 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_g, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S17>/Bit Packing ' */

  /* Bit Packing: <S17>/Bit Packing  */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_b, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S18>/Bit Packing 1' */

  /* Bit Packing: <S18>/Bit Packing 1 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking1_o, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S18>/Bit Packing 2' */

  /* Bit Packing: <S18>/Bit Packing 2 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking2_l, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S18>/Bit Packing 3' */

  /* Bit Packing: <S18>/Bit Packing 3 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking3_e, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S18>/Bit Packing 4' */

  /* Bit Packing: <S18>/Bit Packing 4 */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking4_cr, 0,4);

  /* Start for S-Function (xpcbitpacking): '<S18>/Bit Packing ' */

  /* Bit Packing: <S18>/Bit Packing  */
  memset(&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.BitPacking_ng, 0,4);

  /* Start for S-Function (scblock): '<S10>/S-Function' */

  /* S-Function Block: <S10>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("Kite Measurements /Gain2"));
        rl32eAddSignal(3, rl32eGetSignalNo("Kite Measurements /Gain1"));
        rl32eAddSignal(3, rl32eGetSignalNo("Kite Measurements /Gain"));
        rl32eSetScope(3, 4, 1000);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo("Kite Measurements /Gain2"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 2.0);
        rl32eSetTargetScope(3, 11, -90.0);
        rl32eSetTargetScope(3, 10, 90.0);
        xpceScopeAcqOK(3,
                       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.SFunction_IWORK_p.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* Start for S-Function (scblock): '<S11>/S-Function' */

  /* S-Function Block: <S11>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,2)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("Kite Measurements /Gain5"));
        rl32eAddSignal(4, rl32eGetSignalNo("Kite Measurements /Gain4"));
        rl32eAddSignal(4, rl32eGetSignalNo("Kite Measurements /Gain3"));
        rl32eSetScope(4, 4, 1000);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("Kite Measurements /Gain5"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        rl32eSetTargetScope(4, 1, 3.0);
        rl32eSetTargetScope(4, 11, -50.0);
        rl32eSetTargetScope(4, 10, 50.0);
        xpceScopeAcqOK(4,
                       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.SFunction_IWORK_k.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* user code (Start function Trailer) */
  {
    uint8_T irq = 2;
    uint32_T found = 0;
    uint32_T ind;
    uint16_T devid[1];
    devid[0] = (uint16_T)852;

    /* Call xpcGetPCIDeviceInfo to fill in the structure */
    for (ind = 0 ; ind < 1 ; ind++ ) {
      if (xpcGetPCIDeviceInfo( (uint16_T)5032, devid[ind], (uint16_T)0,
                              (uint16_T)0, 0, -1, &xpcDev_1 ) == 0 ) {
        found = 1;
        break;
      }
    }

    if (found == 0 ) {
      rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
                        "Interrupting board at [0, -1]: Not present");
      return;
    }

    if (irq == 2 || irq == 16) {
      irq = (uint8_T)xpcDev_1.InterruptLine;
    }

    /* connect ISR system to config space irq */
    if (xpceRegisterISR( irq, xPCISR1,
                        xpcIO5XXintaprehook,
                        NULL,
                        xpcIO5XXintastart,
                        xpcIO5XXintastop,
                        0,
                        &xpcDev_1) == -1) {
      static uint8_T ermsg[100];
      sprintf( ermsg, "ISR reg failed for IRQ %d at [0, -1].", irq );
      rtmSetErrorStatus(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M, ermsg);
      return;
    }
  }

  xpcOutpB( 0xA0, 0x20 );
  xpcOutpB( 0x20, 0x20 );
  rtw_xpc_mutex_create
    (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.semIdForTask1);
}

/* Model terminate function */
static void integrated_3PropControl_6bitCmd_100HzIMU_25HzP_terminate(void)
{
  /* user code (Terminate function Header) */

  /* disable interrupt for IRQ 2 */
  xpceDeRegisterISR( &xpcDev_1 );
  rtw_xpc_mutex_delete
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.semIdForTask1);

  /* Terminate for S-Function (sg_serial_setup_channel_s_v3): '<S6>/Setup Channel (v3) 1' */
  /* Level2 S-Function Block: '<S6>/Setup Channel (v3) 1' (sg_serial_setup_channel_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_setup_channel_s_v3): '<S6>/Setup Channel (v3) 2' */
  /* Level2 S-Function Block: '<S6>/Setup Channel (v3) 2' (sg_serial_setup_channel_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_setup_channel_s_v3): '<S6>/Setup Channel (v3) 3' */
  /* Level2 S-Function Block: '<S6>/Setup Channel (v3) 3' (sg_serial_setup_channel_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_serial_setup_channel_s_v3): '<S6>/Setup Channel (v3) 4' */
  /* Level2 S-Function Block: '<S6>/Setup Channel (v3) 4' (sg_serial_setup_channel_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcinterrupt): '<S6>/IRQ Source' incorporates:
   *  SubSystem: '<S6>/ISR'
   */
  integrated_3PropContro_ISR_Term();

  /* End of Terminate for S-Function (xpcinterrupt): '<S6>/IRQ Source' */

  /* Terminate for S-Function (fiforeadbinhdr): '<S3>/FIFO bin read ' */
  /* Level2 S-Function Block: '<S3>/FIFO bin read ' (fiforeadbinhdr) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (asciiencode): '<Root>/ASCII Encode ' */
  /* Level2 S-Function Block: '<Root>/ASCII Encode ' (asciiencode) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S6>/FIFO write 1' */

  /* Free fifo memory */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK[0]) {
    free(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite1_PWORK[0]);
  }

  /* Terminate for S-Function (sg_serial_enable_tx_int_s_v3): '<S6>/Enable Tx Int (v3) 1' */
  /* Level2 S-Function Block: '<S6>/Enable Tx Int (v3) 1' (sg_serial_enable_tx_int_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S6>/FIFO write 2' */

  /* Free fifo memory */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK[0]) {
    free(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite2_PWORK[0]);
  }

  /* Terminate for S-Function (sg_serial_enable_tx_int_s_v3): '<S6>/Enable Tx Int (v3) 2' */
  /* Level2 S-Function Block: '<S6>/Enable Tx Int (v3) 2' (sg_serial_enable_tx_int_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S6>/FIFO write 3' */

  /* Free fifo memory */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK[0]) {
    free(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite3_PWORK[0]);
  }

  /* Terminate for S-Function (sg_serial_enable_tx_int_s_v3): '<S6>/Enable Tx Int (v3) 3' */
  /* Level2 S-Function Block: '<S6>/Enable Tx Int (v3) 3' (sg_serial_enable_tx_int_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S6>/FIFO write 4' */

  /* Free fifo memory */
  if (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK[0]) {
    free(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFOwrite4_PWORK[0]);
  }

  /* Terminate for S-Function (sg_serial_enable_tx_int_s_v3): '<S6>/Enable Tx Int (v3) 4' */
  /* Level2 S-Function Block: '<S6>/Enable Tx Int (v3) 4' (sg_serial_enable_tx_int_s_v3) */
  {
    SimStruct *rts =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[26];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_initialize();
}

void MdlTerminate(void)
{
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_terminate();
}

/* Registration function */
RT_MODEL_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T
  *integrated_3PropControl_6bitCmd_100HzIMU_25HzP(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M, 0,
                sizeof(RT_MODEL_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T));
  rtsiSetSolverName
    (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->solverInfo,
     "FixedStepDiscrete");
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->solverInfoPtr =
    (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.sampleTimeTaskIDPtr
      = (&mdlTsMap[0]);
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.sampleTimes =
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.sampleTimesArray
       [0]);
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.offsetTimes =
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.offsetTimesArray
       [0]);

    /* task periods */
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.sampleTimes[0] =
      (0.01);

    /* task offsets */
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.offsetTimes[0] =
      (0.0);
  }

  rtmSetTPtr(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M,
             &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.sampleHits =
      (&mdlSampleHits[0]);
  }

  rtmSetTFinal(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M, -1);
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.stepSize0 = 0.01;
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.stepSize1 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo =
      &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo, (NULL));
    rtliSetLogT(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo,
                "tout");
    rtliSetLogX(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo, "");
    rtliSetLogXFinal
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo, "rt_");
    rtliSetLogFormat
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo, 2);
    rtliSetLogMaxRows
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo, 0);
    rtliSetLogDecimation
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo, 1);
    rtliSetLogY(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->rtwLogInfo, (NULL));
  }

  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->solverInfoPtr =
    (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->solverInfo);
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize
    (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->solverInfo, 0.01);
  rtsiSetSolverMode
    (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->solverInfo,
     SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->blockIO = ((void *)
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B);
  (void) memset(((void *) &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B), 0,
                sizeof(B_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T));

  {
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition3 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1_o1 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2_o1 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3_o1 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4_o1 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition1 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition6 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition7 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition2 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition4 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition5 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3 =
      serialfifoground;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4 =
      serialfifoground;
  }

  /* parameters */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->defaultParam = ((real_T *)
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P);

  /* states (dwork) */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->dwork = ((void *)
    &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW);
  (void) memset((void *)&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW, 0,
                sizeof(DW_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.sfcnInfo;
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Sizes.numSampTimes);
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.taskTimePtrs
      [0] = &(rtmGetTPtr(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M)[0]);
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.taskTimePtrs
      [1] = &(rtmGetTPtr(integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart
                     (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal
                     (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo,
                      &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->solverInfoPtr);
  }

  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Sizes.numSFcns = (27);

  /* register each child */
  {
    (void) memset((void *)
                  &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  27*sizeof(SimStruct));
    integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions =
      (&integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.childSFunctionPtrs
       [0]);

    {
      int_T i;
      for (i = 0; i < 27; i++) {
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[i] = (
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.childSFunctions
          [i]);
      }
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Read Int Status (v3)  (sg_serial_read_int_status_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn0.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 4);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read Int Status (v3) ");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Read Int Status (v3) ");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadIntStatusv3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadIntStatusv3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadIntStatusv3_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadIntStatusv3_IWORK
                 [0]);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadIntStatusv3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadIntStatusv3_IWORK
                   [0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadIntStatusv3_PWORK);
      }

      /* registration */
      sg_serial_read_int_status_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Int Source Filter Write (v3) 1 (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn1.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn1.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn1.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterWritev31));
        }
      }

      /* path info */
      ssSetModelName(rts, "Int Source Filter Write (v3) 1");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 1");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev31_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev31_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev31_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev31_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev31_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev31_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev31_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev31_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev31_PWORK);
      }

      /* registration */
      sg_serial_int_source_filter_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Write HW FIFO (v3) 1 (sg_serial_write_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn2.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn2.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread1_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 257);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread1_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write HW FIFO (v3) 1");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 1");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv31_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv31_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv31_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv31_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv31_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv31_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv31_IWORK
                 [0]);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv31_PWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv31_IWORK
                   [0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 3);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv31_PWORK
                   [0]);
      }

      /* registration */
      sg_serial_write_hw_fifo_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 257);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Int Source Filter Write (v3) 2 (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn3.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn3.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn3.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterWritev32));
        }
      }

      /* path info */
      ssSetModelName(rts, "Int Source Filter Write (v3) 2");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 2");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev32_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev32_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev32_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev32_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev32_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev32_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev32_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev32_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev32_PWORK);
      }

      /* registration */
      sg_serial_int_source_filter_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Write HW FIFO (v3) 2 (sg_serial_write_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn4.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn4.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread2_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 257);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread2_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write HW FIFO (v3) 2");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 2");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv32_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv32_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv32_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv32_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv32_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv32_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv32_IWORK
                 [0]);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv32_PWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv32_IWORK
                   [0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 3);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv32_PWORK
                   [0]);
      }

      /* registration */
      sg_serial_write_hw_fifo_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 257);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Int Source Filter Write (v3) 3 (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [5]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn5.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn5.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn5.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn5.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterWritev33));
        }
      }

      /* path info */
      ssSetModelName(rts, "Int Source Filter Write (v3) 3");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 3");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev33_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev33_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev33_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev33_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev33_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev33_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev33_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev33_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev33_PWORK);
      }

      /* registration */
      sg_serial_int_source_filter_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Write HW FIFO (v3) 3 (sg_serial_write_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [6]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn6.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn6.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread3_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 257);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread3_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write HW FIFO (v3) 3");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 3");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv33_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv33_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv33_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv33_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv33_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv33_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv33_IWORK
                 [0]);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv33_PWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv33_IWORK
                   [0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 3);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv33_PWORK
                   [0]);
      }

      /* registration */
      sg_serial_write_hw_fifo_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 257);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Int Source Filter Write (v3) 4 (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [7]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn7.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn7.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn7.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn7.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn7.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterWritev34));
        }
      }

      /* path info */
      ssSetModelName(rts, "Int Source Filter Write (v3) 4");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Int Source Filter Write (v3) 4");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev34_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev34_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev34_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev34_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterWritev34_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev34_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev34_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev34_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterWritev34_PWORK);
      }

      /* registration */
      sg_serial_int_source_filter_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Write HW FIFO (v3) 4 (sg_serial_write_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [8]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn8.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn8.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread4_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 257);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOread4_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write HW FIFO (v3) 4");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Write HW FIFO (v3) 4");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv34_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv34_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv34_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv34_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv34_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.WriteHWFIFOv34_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv34_IWORK
                 [0]);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv34_PWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv34_IWORK
                   [0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 3);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.WriteHWFIFOv34_PWORK
                   [0]);
      }

      /* registration */
      sg_serial_write_hw_fifo_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 257);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Int Source Filter Read (v3) 1 (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [9]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn9.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn9.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn9.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn9.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn9.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterReadv31));
        }
      }

      /* path info */
      ssSetModelName(rts, "Int Source Filter Read (v3) 1");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 1");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv31_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv31_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv31_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv31_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv31_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv31_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv31_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv31_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv31_PWORK);
      }

      /* registration */
      sg_serial_int_source_filter_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Read HW FIFO (v3) 1 (sg_serial_read_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [10]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn10.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn10.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterReadv31);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn10.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn10.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn10.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 257);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadHWFIFOv31));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read HW FIFO (v3) 1");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 1");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv31_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv31_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv31_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv31_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv31_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv31_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv31_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv31_PWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv31_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 3);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv31_PWORK
                   [0]);
      }

      /* registration */
      sg_serial_read_hw_fifo_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Int Source Filter Read (v3) 2 (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [11]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn11.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn11.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn11.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn11.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn11.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn11.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterReadv32));
        }
      }

      /* path info */
      ssSetModelName(rts, "Int Source Filter Read (v3) 2");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 2");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv32_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv32_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv32_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv32_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv32_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv32_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv32_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv32_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv32_PWORK);
      }

      /* registration */
      sg_serial_int_source_filter_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Read HW FIFO (v3) 2 (sg_serial_read_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [12]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn12.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn12.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn12.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterReadv32);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn12.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn12.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn12.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 257);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadHWFIFOv32));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read HW FIFO (v3) 2");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 2");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv32_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv32_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv32_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv32_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv32_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv32_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv32_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv32_PWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv32_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 3);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv32_PWORK
                   [0]);
      }

      /* registration */
      sg_serial_read_hw_fifo_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Int Source Filter Read (v3) 3 (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [13]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn13.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn13.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn13.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn13.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn13.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn13.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterReadv33));
        }
      }

      /* path info */
      ssSetModelName(rts, "Int Source Filter Read (v3) 3");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 3");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv33_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv33_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv33_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv33_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv33_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv33_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv33_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv33_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv33_PWORK);
      }

      /* registration */
      sg_serial_int_source_filter_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Read HW FIFO (v3) 3 (sg_serial_read_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [14]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn14.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn14.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn14.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterReadv33);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn14.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn14.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn14.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 257);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadHWFIFOv33));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read HW FIFO (v3) 3");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 3");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv33_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv33_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv33_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv33_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv33_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv33_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv33_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv33_PWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv33_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 3);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv33_PWORK
                   [0]);
      }

      /* registration */
      sg_serial_read_hw_fifo_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Int Source Filter Read (v3) 4 (sg_serial_int_source_filter_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [15]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn15.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn15.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn15.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadIntStatusv3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn15.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn15.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn15.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterReadv34));
        }
      }

      /* path info */
      ssSetModelName(rts, "Int Source Filter Read (v3) 4");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Int Source Filter Read (v3) 4");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv34_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv34_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv34_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv34_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.IntSourceFilterReadv34_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv34_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv34_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv34_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.IntSourceFilterReadv34_PWORK);
      }

      /* registration */
      sg_serial_int_source_filter_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S69>/Read HW FIFO (v3) 4 (sg_serial_read_hw_fifo_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [16]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn16.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn16.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn16.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.IntSourceFilterReadv34);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn16.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn16.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn16.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 257);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ReadHWFIFOv34));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read HW FIFO (v3) 4");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile/Read HW FIFO (v3) 4");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv34_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv34_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv34_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv34_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv34_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ReadHWFIFOv34_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv34_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv34_PWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv34_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 3);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ReadHWFIFOv34_PWORK
                   [0]);
      }

      /* registration */
      sg_serial_read_hw_fifo_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S6>/Setup Channel (v3) 1 (sg_serial_setup_channel_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [17]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [17]);
      }

      /* path info */
      ssSetModelName(rts, "Setup Channel (v3) 1");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /Setup Channel (v3) 1");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv31_P24_Size);
      }

      /* registration */
      sg_serial_setup_channel_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S6>/Setup Channel (v3) 2 (sg_serial_setup_channel_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [18]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [18]);
      }

      /* path info */
      ssSetModelName(rts, "Setup Channel (v3) 2");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /Setup Channel (v3) 2");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv32_P24_Size);
      }

      /* registration */
      sg_serial_setup_channel_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S6>/Setup Channel (v3) 3 (sg_serial_setup_channel_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [19]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [19]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [19]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [19]);
      }

      /* path info */
      ssSetModelName(rts, "Setup Channel (v3) 3");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /Setup Channel (v3) 3");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv33_P24_Size);
      }

      /* registration */
      sg_serial_setup_channel_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S6>/Setup Channel (v3) 4 (sg_serial_setup_channel_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [20]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [20]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [20]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [20]);
      }

      /* path info */
      ssSetModelName(rts, "Setup Channel (v3) 4");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /Setup Channel (v3) 4");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.SetupChannelv34_P24_Size);
      }

      /* registration */
      sg_serial_setup_channel_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S3>/FIFO bin read  (fiforeadbinhdr) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [21]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [21]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [21]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [21]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn21.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn21.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn21.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.RateTransition3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn21.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn21.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn21.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 34);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFObinread));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO bin read ");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /FIFO bin read ");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.FIFObinread_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFObinread_PWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.FIFObinread_PWORK
                   [0]);
      }

      /* registration */
      fiforeadbinhdr(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<Root>/ASCII Encode  (asciiencode) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [22]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [22]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [22]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          uint8_T const **sfcnUPtrs = (uint8_T const **)
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.UPtrs0;
          sfcnUPtrs[0] =
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble1_dc;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          uint8_T const **sfcnUPtrs = (uint8_T const **)
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.UPtrs1;
          sfcnUPtrs[0] =
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble2;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          uint8_T const **sfcnUPtrs = (uint8_T const **)
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.UPtrs2;
          sfcnUPtrs[0] =
            &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.CastToDouble3;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 256);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.ASCIIEncode));
        }
      }

      /* path info */
      ssSetModelName(rts, "ASCII Encode ");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/ASCII Encode ");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ASCIIEncode_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ASCIIEncode_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ASCIIEncode_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.ASCIIEncode_P4_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ASCIIEncode_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.ASCIIEncode_PWORK);
      }

      /* registration */
      asciiencode(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S6>/Enable Tx Int (v3) 1 (sg_serial_enable_tx_int_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [23]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [23]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [23]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [23]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn23.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn23.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn23.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite1_o2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Enable Tx Int (v3) 1");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /Enable Tx Int (v3) 1");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv31_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv31_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv31_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv31_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv31_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv31_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv31_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv31_PWORK);
      }

      /* registration */
      sg_serial_enable_tx_int_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S6>/Enable Tx Int (v3) 2 (sg_serial_enable_tx_int_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [24]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [24]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [24]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn24.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn24.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn24.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite2_o2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Enable Tx Int (v3) 2");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /Enable Tx Int (v3) 2");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv32_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv32_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv32_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv32_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv32_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv32_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv32_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv32_PWORK);
      }

      /* registration */
      sg_serial_enable_tx_int_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S6>/Enable Tx Int (v3) 3 (sg_serial_enable_tx_int_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [25]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [25]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [25]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [25]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn25.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn25.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn25.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite3_o2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Enable Tx Int (v3) 3");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /Enable Tx Int (v3) 3");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv33_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv33_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv33_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv33_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv33_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv33_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn25.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn25.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv33_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv33_PWORK);
      }

      /* registration */
      sg_serial_enable_tx_int_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: integrated_3PropControl_6bitCmd_100HzIMU_25HzP/<S6>/Enable Tx Int (v3) 4 (sg_serial_enable_tx_int_s_v3) */
    {
      SimStruct *rts =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap =
        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.blkInfo2
                         [26]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.inputOutputPortInfo2
        [26]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts,
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods2
                           [26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods3
                           [26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.methods4
                           [26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.statesInfo2
                         [26]);
        ssSetPeriodicStatesInfo(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.periodicStatesInfo
          [26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn26.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn26.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn26.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B.FIFOwrite4_o2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Enable Tx Int (v3) 4");
      ssSetPath(rts,
                "integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /Enable Tx Int (v3) 4");
      ssSetRTModel(rts,integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv34_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv34_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv34_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P.EnableTxIntv34_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv34_IWORK);
      ssSetPWork(rts, (void **)
                 &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv34_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv34_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW.EnableTxIntv34_PWORK);
      }

      /* registration */
      sg_serial_enable_tx_int_s_v3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Sizes.numContStates = (0);/* Number of continuous states */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Sizes.numY = (0);/* Number of model outputs */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Sizes.numU = (0);/* Number of model inputs */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Sizes.numSampTimes = (1);/* Number of sample times */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Sizes.numBlocks = (290);/* Number of blocks */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Sizes.numBlockIO = (167);/* Number of block outputs */
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M->Sizes.numBlockPrms = (681);/* Sum of parameter "widths" */
  return integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
