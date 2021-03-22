/*
 * integrated_3PropControl_6bitCmd_100HzIMU_25HzP_private.h
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

#ifndef RTW_HEADER_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_private_h_
#define RTW_HEADER_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "integrated_3PropControl_6bitCmd_100HzIMU_25HzP.h"

/* Define interrupt functions for board 1 */
void __cdecl xpcIO5XXintastart(xpcPCIDevice *);
void __cdecl xpcIO5XXintastop(xpcPCIDevice *);
int __cdecl xpcIO5XXintaprehook(xpcPCIDevice *);
xpcPCIDevice xpcDev_1;

/* Done with interrupt functions for board 1 */
extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern real_T rt_roundd_snf(real_T u);
extern void fiforead(const void *iPorts[], void *oPorts[], int *settings);
extern const char *fifowrite(int32_T *fifo, void *iPtr, void **oPtrs,
  int *settings);
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern void sg_serial_read_int_status_s_v3(SimStruct *rts);
extern void sg_serial_int_source_filter_s_v3(SimStruct *rts);
extern void sg_serial_write_hw_fifo_s_v3(SimStruct *rts);
extern void sg_serial_read_hw_fifo_s_v3(SimStruct *rts);
extern void sg_serial_setup_channel_s_v3(SimStruct *rts);
extern void fiforeadbinhdr(SimStruct *rts);
extern void asciiencode(SimStruct *rts);
extern void sg_serial_enable_tx_int_s_v3(SimStruct *rts);
extern void integrated_3PropContr_BitShift1(uint32_T rtu_u,
  B_BitShift1_integrated_3PropC_T *localB);
extern void integrated_3PropContr_BitShift2(uint32_T rtu_u,
  B_BitShift2_integrated_3PropC_T *localB);
extern void integrated_3PropContr_BitShift3(uint32_T rtu_u,
  B_BitShift3_integrated_3PropC_T *localB);
extern void integrated_3PropContr_ISR_Start(void);
extern void integrated_3PropControl_6bi_ISR(void);
extern void integrated_3PropContro_ISR_Term(void);

#endif
      /* RTW_HEADER_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_private_h_ */
