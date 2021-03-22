/*
 * integrated_3PropControl_6bitCmd_100HzIMU_25HzP.h
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

#ifndef RTW_HEADER_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_h_
#define RTW_HEADER_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef integrated_3PropControl_6bitCmd_100HzIMU_25HzP_COMMON_INCLUDES_
# define integrated_3PropControl_6bitCmd_100HzIMU_25HzP_COMMON_INCLUDES_
#include <xpctarget.h>
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#endif     /* integrated_3PropControl_6bitCmd_100HzIMU_25HzP_COMMON_INCLUDES_ */

#include "integrated_3PropControl_6bitCmd_100HzIMU_25HzP_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtw_xpc.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
# define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
# define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
# define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
# define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
# define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
# define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
# define rtmGettimingBridge(rtm)       ()
#endif

#ifndef rtmSettimingBridge
# define rtmSettimingBridge(rtm, val)  ()
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)
#define rtModel_integrated_3PropControl_6bitCmd_100HzIMU_25HzP RT_MODEL_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T

/* Definition for use in the target main file */
#define integrated_3PropControl_6bitCmd_100HzIMU_25HzP_rtModel RT_MODEL_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T

/* Block signals for system '<S12>/Bit Shift1' */
typedef struct {
  uint32_T y;                          /* '<S20>/bit_shift' */
} B_BitShift1_integrated_3PropC_T;

/* Block signals for system '<S12>/Bit Shift2' */
typedef struct {
  uint32_T y;                          /* '<S21>/bit_shift' */
} B_BitShift2_integrated_3PropC_T;

/* Block signals for system '<S12>/Bit Shift3' */
typedef struct {
  uint32_T y;                          /* '<S22>/bit_shift' */
} B_BitShift3_integrated_3PropC_T;

/* Block signals (default storage) */
typedef struct {
  serialfifoptr RateTransition3;       /* '<S6>/Rate Transition3' */
  serialfifoptr FIFOwrite1_o1;         /* '<S6>/FIFO write 1' */
  serialfifoptr FIFOwrite2_o1;         /* '<S6>/FIFO write 2' */
  serialfifoptr FIFOwrite3_o1;         /* '<S6>/FIFO write 3' */
  serialfifoptr FIFOwrite4_o1;         /* '<S6>/FIFO write 4' */
  serialfifoptr RateTransition1;       /* '<S6>/Rate Transition1' */
  serialfifoptr RateTransition6;       /* '<S6>/Rate Transition6' */
  serialfifoptr RateTransition7;       /* '<S6>/Rate Transition7' */
  serialfifoptr RateTransition;        /* '<S6>/Rate Transition' */
  serialfifoptr RateTransition2;       /* '<S6>/Rate Transition2' */
  serialfifoptr RateTransition4;       /* '<S6>/Rate Transition4' */
  serialfifoptr RateTransition5;       /* '<S6>/Rate Transition5' */
  serialfifoptr FIFOwrite1;            /* '<S69>/FIFO write 1' */
  serialfifoptr FIFOwrite2;            /* '<S69>/FIFO write 2' */
  serialfifoptr FIFOwrite3;            /* '<S69>/FIFO write 3' */
  serialfifoptr FIFOwrite4;            /* '<S69>/FIFO write 4' */
  real_T CastToDouble1;                /* '<S13>/Cast To Double1' */
  real_T Pitch;                        /* '<S3>/Gain1' */
  real_T Add;                          /* '<S1>/Add' */
  real_T Gain;                         /* '<S1>/Gain' */
  real_T Gain3;                        /* '<S1>/Gain3' */
  real_T Switch;                       /* '<S7>/Switch' */
  real_T Switch2;                      /* '<S7>/Switch2' */
  real_T Add3;                         /* '<S1>/Add3' */
  real_T Gain4;                        /* '<S1>/Gain4' */
  real_T pitchCmd;                     /* '<S1>/Round' */
  real_T pitchCmd_c;                   /* '<S1>/Saturation2' */
  real_T CastToDouble1_o;              /* '<S14>/Cast To Double1' */
  real_T Yaw;                          /* '<S3>/Gain2' */
  real_T Add1;                         /* '<S1>/Add1' */
  real_T Gain2;                        /* '<S1>/Gain2' */
  real_T Gain5;                        /* '<S1>/Gain5' */
  real_T Switch_c;                     /* '<S8>/Switch' */
  real_T Switch2_k;                    /* '<S8>/Switch2' */
  real_T Add4;                         /* '<S1>/Add4' */
  real_T Gain6;                        /* '<S1>/Gain6' */
  real_T yawcmd;                       /* '<S1>/Round1' */
  real_T yawCmd;                       /* '<S1>/Saturation1' */
  real_T CastToDouble1_j;              /* '<S12>/Cast To Double1' */
  real_T Roll;                         /* '<S3>/Gain' */
  real_T Add2;                         /* '<S1>/Add2' */
  real_T Gain1;                        /* '<S1>/Gain1' */
  real_T Gain7;                        /* '<S1>/Gain7' */
  real_T Switch_m;                     /* '<S9>/Switch' */
  real_T Switch2_c;                    /* '<S9>/Switch2' */
  real_T Add5;                         /* '<S1>/Add5' */
  real_T Gain8;                        /* '<S1>/Gain8' */
  real_T rollCmd;                      /* '<S1>/Round2' */
  real_T rollCmd_l;                    /* '<S1>/Saturation' */
  real_T CastToDouble1_d;              /* '<S19>/Cast To Double1' */
  real_T CastToDouble1_l;              /* '<S15>/Cast To Double1' */
  real_T CastToDouble1_m;              /* '<S16>/Cast To Double1' */
  real_T CastToDouble1_b;              /* '<S17>/Cast To Double1' */
  real_T CastToDouble1_g;              /* '<S18>/Cast To Double1' */
  real_T YawRate;                      /* '<S3>/Gain5' */
  real_T PitchRate;                    /* '<S3>/Gain4' */
  real_T RollRate;                     /* '<S3>/Gain3' */
  uint32_T BitPacking1;                /* '<S13>/Bit Packing 1' */
  uint32_T BitPacking2;                /* '<S13>/Bit Packing 2' */
  uint32_T BitPacking3;                /* '<S13>/Bit Packing 3' */
  uint32_T BitPacking4;                /* '<S13>/Bit Packing 4' */
  uint32_T BitwiseOperator;            /* '<S13>/Bitwise Operator' */
  uint32_T BitPacking1_k;              /* '<S14>/Bit Packing 1' */
  uint32_T BitPacking2_p;              /* '<S14>/Bit Packing 2' */
  uint32_T BitPacking3_l;              /* '<S14>/Bit Packing 3' */
  uint32_T BitPacking4_n;              /* '<S14>/Bit Packing 4' */
  uint32_T BitwiseOperator_n;          /* '<S14>/Bitwise Operator' */
  uint32_T BitPacking1_l;              /* '<S12>/Bit Packing 1' */
  uint32_T BitPacking2_f;              /* '<S12>/Bit Packing 2' */
  uint32_T BitPacking3_o;              /* '<S12>/Bit Packing 3' */
  uint32_T BitPacking4_p;              /* '<S12>/Bit Packing 4' */
  uint32_T BitwiseOperator_g;          /* '<S12>/Bitwise Operator' */
  uint32_T BitPacking1_m;              /* '<S19>/Bit Packing 1' */
  uint32_T BitPacking2_d;              /* '<S19>/Bit Packing 2' */
  uint32_T BitPacking3_k;              /* '<S19>/Bit Packing 3' */
  uint32_T BitPacking4_pr;             /* '<S19>/Bit Packing 4' */
  uint32_T BitwiseOperator_b;          /* '<S19>/Bitwise Operator' */
  uint32_T BitPacking1_a;              /* '<S15>/Bit Packing 1' */
  uint32_T BitPacking2_po;             /* '<S15>/Bit Packing 2' */
  uint32_T BitPacking3_ku;             /* '<S15>/Bit Packing 3' */
  uint32_T BitPacking4_l;              /* '<S15>/Bit Packing 4' */
  uint32_T BitwiseOperator_bf;         /* '<S15>/Bitwise Operator' */
  uint32_T BitPacking1_d;              /* '<S16>/Bit Packing 1' */
  uint32_T BitPacking2_o;              /* '<S16>/Bit Packing 2' */
  uint32_T BitPacking3_g;              /* '<S16>/Bit Packing 3' */
  uint32_T BitPacking4_c;              /* '<S16>/Bit Packing 4' */
  uint32_T BitwiseOperator_be;         /* '<S16>/Bitwise Operator' */
  uint32_T BitPacking1_ac;             /* '<S17>/Bit Packing 1' */
  uint32_T BitPacking2_pq;             /* '<S17>/Bit Packing 2' */
  uint32_T BitPacking3_lt;             /* '<S17>/Bit Packing 3' */
  uint32_T BitPacking4_g;              /* '<S17>/Bit Packing 4' */
  uint32_T BitwiseOperator_gw;         /* '<S17>/Bitwise Operator' */
  uint32_T BitPacking1_o;              /* '<S18>/Bit Packing 1' */
  uint32_T BitPacking2_l;              /* '<S18>/Bit Packing 2' */
  uint32_T BitPacking3_e;              /* '<S18>/Bit Packing 3' */
  uint32_T BitPacking4_cr;             /* '<S18>/Bit Packing 4' */
  uint32_T BitwiseOperator_l;          /* '<S18>/Bitwise Operator' */
  uint32_T IntSourceFilterWritev31; /* '<S69>/Int Source Filter Write (v3) 1' */
  uint32_T FIFOread1_o1[257];          /* '<S69>/FIFO read 1' */
  uint32_T FIFOread1_o2;               /* '<S69>/FIFO read 1' */
  uint32_T IntSourceFilterWritev32; /* '<S69>/Int Source Filter Write (v3) 2' */
  uint32_T FIFOread2_o1[257];          /* '<S69>/FIFO read 2' */
  uint32_T FIFOread2_o2;               /* '<S69>/FIFO read 2' */
  uint32_T IntSourceFilterWritev33; /* '<S69>/Int Source Filter Write (v3) 3' */
  uint32_T FIFOread3_o1[257];          /* '<S69>/FIFO read 3' */
  uint32_T FIFOread3_o2;               /* '<S69>/FIFO read 3' */
  uint32_T IntSourceFilterWritev34; /* '<S69>/Int Source Filter Write (v3) 4' */
  uint32_T FIFOread4_o1[257];          /* '<S69>/FIFO read 4' */
  uint32_T FIFOread4_o2;               /* '<S69>/FIFO read 4' */
  uint32_T IntSourceFilterReadv31;   /* '<S69>/Int Source Filter Read (v3) 1' */
  uint32_T ReadHWFIFOv31[257];         /* '<S69>/Read HW FIFO (v3) 1' */
  uint32_T IntSourceFilterReadv32;   /* '<S69>/Int Source Filter Read (v3) 2' */
  uint32_T ReadHWFIFOv32[257];         /* '<S69>/Read HW FIFO (v3) 2' */
  uint32_T IntSourceFilterReadv33;   /* '<S69>/Int Source Filter Read (v3) 3' */
  uint32_T ReadHWFIFOv33[257];         /* '<S69>/Read HW FIFO (v3) 3' */
  uint32_T IntSourceFilterReadv34;   /* '<S69>/Int Source Filter Read (v3) 4' */
  uint32_T ReadHWFIFOv34[257];         /* '<S69>/Read HW FIFO (v3) 4' */
  real32_T BitPacking;                 /* '<S13>/Bit Packing ' */
  real32_T BitPacking_k;               /* '<S14>/Bit Packing ' */
  real32_T BitPacking_p;               /* '<S12>/Bit Packing ' */
  real32_T BitPacking_l;               /* '<S19>/Bit Packing ' */
  real32_T BitPacking_n;               /* '<S15>/Bit Packing ' */
  real32_T BitPacking_l0;              /* '<S16>/Bit Packing ' */
  real32_T BitPacking_b;               /* '<S17>/Bit Packing ' */
  real32_T BitPacking_ng;              /* '<S18>/Bit Packing ' */
  uint8_T FIFObinread[34];             /* '<S3>/FIFO bin read ' */
  uint8_T CastToDouble1_dc;            /* '<Root>/Cast To Double1' */
  uint8_T CastToDouble2;               /* '<Root>/Cast To Double2' */
  uint8_T CastToDouble3;               /* '<Root>/Cast To Double3' */
  uint8_T ASCIIEncode[256];            /* '<Root>/ASCII Encode ' */
  uint8_T ReadIntStatusv3[4];          /* '<S69>/Read Int Status (v3) ' */
  boolean_T LowerRelop1;               /* '<S7>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S7>/UpperRelop' */
  boolean_T LowerRelop1_i;             /* '<S8>/LowerRelop1' */
  boolean_T UpperRelop_n;              /* '<S8>/UpperRelop' */
  boolean_T LowerRelop1_i2;            /* '<S9>/LowerRelop1' */
  boolean_T UpperRelop_m;              /* '<S9>/UpperRelop' */
  boolean_T FIFOwrite1_o2;             /* '<S6>/FIFO write 1' */
  boolean_T FIFOwrite2_o2;             /* '<S6>/FIFO write 2' */
  boolean_T FIFOwrite3_o2;             /* '<S6>/FIFO write 3' */
  boolean_T FIFOwrite4_o2;             /* '<S6>/FIFO write 4' */
  boolean_T RelationalOperator[4];     /* '<S69>/Relational Operator' */
  boolean_T LogicalOperator;           /* '<S69>/Logical Operator' */
  B_BitShift3_integrated_3PropC_T BitShift3_a0;/* '<S19>/Bit Shift3' */
  B_BitShift2_integrated_3PropC_T BitShift2_i;/* '<S19>/Bit Shift2' */
  B_BitShift1_integrated_3PropC_T BitShift1_j;/* '<S19>/Bit Shift1' */
  B_BitShift3_integrated_3PropC_T BitShift3_l;/* '<S18>/Bit Shift3' */
  B_BitShift2_integrated_3PropC_T BitShift2_k;/* '<S18>/Bit Shift2' */
  B_BitShift1_integrated_3PropC_T BitShift1_a;/* '<S18>/Bit Shift1' */
  B_BitShift3_integrated_3PropC_T BitShift3_a;/* '<S17>/Bit Shift3' */
  B_BitShift2_integrated_3PropC_T BitShift2_e;/* '<S17>/Bit Shift2' */
  B_BitShift1_integrated_3PropC_T BitShift1_b;/* '<S17>/Bit Shift1' */
  B_BitShift3_integrated_3PropC_T BitShift3_n;/* '<S16>/Bit Shift3' */
  B_BitShift2_integrated_3PropC_T BitShift2_fi;/* '<S16>/Bit Shift2' */
  B_BitShift1_integrated_3PropC_T BitShift1_f;/* '<S16>/Bit Shift1' */
  B_BitShift3_integrated_3PropC_T BitShift3_j;/* '<S15>/Bit Shift3' */
  B_BitShift2_integrated_3PropC_T BitShift2_d;/* '<S15>/Bit Shift2' */
  B_BitShift1_integrated_3PropC_T BitShift1_i;/* '<S15>/Bit Shift1' */
  B_BitShift3_integrated_3PropC_T BitShift3_f;/* '<S14>/Bit Shift3' */
  B_BitShift2_integrated_3PropC_T BitShift2_g;/* '<S14>/Bit Shift2' */
  B_BitShift1_integrated_3PropC_T BitShift1_mz;/* '<S14>/Bit Shift1' */
  B_BitShift3_integrated_3PropC_T BitShift3_d;/* '<S13>/Bit Shift3' */
  B_BitShift2_integrated_3PropC_T BitShift2_f;/* '<S13>/Bit Shift2' */
  B_BitShift1_integrated_3PropC_T BitShift1_m;/* '<S13>/Bit Shift1' */
  B_BitShift3_integrated_3PropC_T BitShift3;/* '<S12>/Bit Shift3' */
  B_BitShift2_integrated_3PropC_T BitShift2;/* '<S12>/Bit Shift2' */
  B_BitShift1_integrated_3PropC_T BitShift1;/* '<S12>/Bit Shift1' */
} B_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  void *FIFObinread_PWORK[2];          /* '<S3>/FIFO bin read ' */
  void *BitPacking1_PWORK[3];          /* '<S13>/Bit Packing 1' */
  void *BitPacking2_PWORK[3];          /* '<S13>/Bit Packing 2' */
  void *BitPacking3_PWORK[3];          /* '<S13>/Bit Packing 3' */
  void *BitPacking4_PWORK[3];          /* '<S13>/Bit Packing 4' */
  void *BitPacking_PWORK[3];           /* '<S13>/Bit Packing ' */
  void *BitPacking1_PWORK_n[3];        /* '<S14>/Bit Packing 1' */
  void *BitPacking2_PWORK_i[3];        /* '<S14>/Bit Packing 2' */
  void *BitPacking3_PWORK_p[3];        /* '<S14>/Bit Packing 3' */
  void *BitPacking4_PWORK_a[3];        /* '<S14>/Bit Packing 4' */
  void *BitPacking_PWORK_j[3];         /* '<S14>/Bit Packing ' */
  void *BitPacking1_PWORK_k[3];        /* '<S12>/Bit Packing 1' */
  void *BitPacking2_PWORK_l[3];        /* '<S12>/Bit Packing 2' */
  void *BitPacking3_PWORK_pn[3];       /* '<S12>/Bit Packing 3' */
  void *BitPacking4_PWORK_g[3];        /* '<S12>/Bit Packing 4' */
  void *BitPacking_PWORK_l[3];         /* '<S12>/Bit Packing ' */
  void *ASCIIEncode_PWORK;             /* '<Root>/ASCII Encode ' */
  void *FIFOwrite1_PWORK[4];           /* '<S6>/FIFO write 1' */
  void *EnableTxIntv31_PWORK;          /* '<S6>/Enable Tx Int (v3) 1' */
  void *FIFOwrite2_PWORK[4];           /* '<S6>/FIFO write 2' */
  void *EnableTxIntv32_PWORK;          /* '<S6>/Enable Tx Int (v3) 2' */
  void *FIFOwrite3_PWORK[4];           /* '<S6>/FIFO write 3' */
  void *EnableTxIntv33_PWORK;          /* '<S6>/Enable Tx Int (v3) 3' */
  void *FIFOwrite4_PWORK[4];           /* '<S6>/FIFO write 4' */
  void *EnableTxIntv34_PWORK;          /* '<S6>/Enable Tx Int (v3) 4' */
  void *BitPacking1_PWORK_p[3];        /* '<S19>/Bit Packing 1' */
  void *BitPacking2_PWORK_g[3];        /* '<S19>/Bit Packing 2' */
  void *BitPacking3_PWORK_e[3];        /* '<S19>/Bit Packing 3' */
  void *BitPacking4_PWORK_b[3];        /* '<S19>/Bit Packing 4' */
  void *BitPacking_PWORK_o[3];         /* '<S19>/Bit Packing ' */
  void *BitPacking1_PWORK_m[3];        /* '<S15>/Bit Packing 1' */
  void *BitPacking2_PWORK_b[3];        /* '<S15>/Bit Packing 2' */
  void *BitPacking3_PWORK_n[3];        /* '<S15>/Bit Packing 3' */
  void *BitPacking4_PWORK_e[3];        /* '<S15>/Bit Packing 4' */
  void *BitPacking_PWORK_i[3];         /* '<S15>/Bit Packing ' */
  void *BitPacking1_PWORK_nq[3];       /* '<S16>/Bit Packing 1' */
  void *BitPacking2_PWORK_o[3];        /* '<S16>/Bit Packing 2' */
  void *BitPacking3_PWORK_o[3];        /* '<S16>/Bit Packing 3' */
  void *BitPacking4_PWORK_k[3];        /* '<S16>/Bit Packing 4' */
  void *BitPacking_PWORK_in[3];        /* '<S16>/Bit Packing ' */
  void *BitPacking1_PWORK_b[3];        /* '<S17>/Bit Packing 1' */
  void *BitPacking2_PWORK_h[3];        /* '<S17>/Bit Packing 2' */
  void *BitPacking3_PWORK_j[3];        /* '<S17>/Bit Packing 3' */
  void *BitPacking4_PWORK_i[3];        /* '<S17>/Bit Packing 4' */
  void *BitPacking_PWORK_k[3];         /* '<S17>/Bit Packing ' */
  void *BitPacking1_PWORK_i[3];        /* '<S18>/Bit Packing 1' */
  void *BitPacking2_PWORK_j[3];        /* '<S18>/Bit Packing 2' */
  void *BitPacking3_PWORK_f[3];        /* '<S18>/Bit Packing 3' */
  void *BitPacking4_PWORK_o[3];        /* '<S18>/Bit Packing 4' */
  void *BitPacking_PWORK_e[3];         /* '<S18>/Bit Packing ' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S3>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<S3>/Scope1' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<S3>/Scope2' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<S3>/Scope3' */

  void *ReadIntStatusv3_PWORK;         /* '<S69>/Read Int Status (v3) ' */
  void *IntSourceFilterWritev31_PWORK;
                                    /* '<S69>/Int Source Filter Write (v3) 1' */
  void *FIFOread1_PWORK[5];            /* '<S69>/FIFO read 1' */
  void *WriteHWFIFOv31_PWORK[3];       /* '<S69>/Write HW FIFO (v3) 1' */
  void *IntSourceFilterWritev32_PWORK;
                                    /* '<S69>/Int Source Filter Write (v3) 2' */
  void *FIFOread2_PWORK[5];            /* '<S69>/FIFO read 2' */
  void *WriteHWFIFOv32_PWORK[3];       /* '<S69>/Write HW FIFO (v3) 2' */
  void *IntSourceFilterWritev33_PWORK;
                                    /* '<S69>/Int Source Filter Write (v3) 3' */
  void *FIFOread3_PWORK[5];            /* '<S69>/FIFO read 3' */
  void *WriteHWFIFOv33_PWORK[3];       /* '<S69>/Write HW FIFO (v3) 3' */
  void *IntSourceFilterWritev34_PWORK;
                                    /* '<S69>/Int Source Filter Write (v3) 4' */
  void *FIFOread4_PWORK[5];            /* '<S69>/FIFO read 4' */
  void *WriteHWFIFOv34_PWORK[3];       /* '<S69>/Write HW FIFO (v3) 4' */
  void *IntSourceFilterReadv31_PWORK;/* '<S69>/Int Source Filter Read (v3) 1' */
  void *ReadHWFIFOv31_PWORK[3];        /* '<S69>/Read HW FIFO (v3) 1' */
  void *FIFOwrite1_PWORK_d[4];         /* '<S69>/FIFO write 1' */
  void *IntSourceFilterReadv32_PWORK;/* '<S69>/Int Source Filter Read (v3) 2' */
  void *ReadHWFIFOv32_PWORK[3];        /* '<S69>/Read HW FIFO (v3) 2' */
  void *FIFOwrite2_PWORK_f[4];         /* '<S69>/FIFO write 2' */
  void *IntSourceFilterReadv33_PWORK;/* '<S69>/Int Source Filter Read (v3) 3' */
  void *ReadHWFIFOv33_PWORK[3];        /* '<S69>/Read HW FIFO (v3) 3' */
  void *FIFOwrite3_PWORK_j[4];         /* '<S69>/FIFO write 3' */
  void *IntSourceFilterReadv34_PWORK;/* '<S69>/Int Source Filter Read (v3) 4' */
  void *ReadHWFIFOv34_PWORK[3];        /* '<S69>/Read HW FIFO (v3) 4' */
  void *FIFOwrite4_PWORK_n[4];         /* '<S69>/FIFO write 4' */
  int_T BitPacking1_IWORK[2];          /* '<S13>/Bit Packing 1' */
  int_T BitPacking2_IWORK[2];          /* '<S13>/Bit Packing 2' */
  int_T BitPacking3_IWORK[2];          /* '<S13>/Bit Packing 3' */
  int_T BitPacking4_IWORK[2];          /* '<S13>/Bit Packing 4' */
  int_T BitPacking_IWORK[2];           /* '<S13>/Bit Packing ' */
  int_T BitPacking1_IWORK_b[2];        /* '<S14>/Bit Packing 1' */
  int_T BitPacking2_IWORK_c[2];        /* '<S14>/Bit Packing 2' */
  int_T BitPacking3_IWORK_j[2];        /* '<S14>/Bit Packing 3' */
  int_T BitPacking4_IWORK_p[2];        /* '<S14>/Bit Packing 4' */
  int_T BitPacking_IWORK_e[2];         /* '<S14>/Bit Packing ' */
  int_T BitPacking1_IWORK_c[2];        /* '<S12>/Bit Packing 1' */
  int_T BitPacking2_IWORK_ch[2];       /* '<S12>/Bit Packing 2' */
  int_T BitPacking3_IWORK_i[2];        /* '<S12>/Bit Packing 3' */
  int_T BitPacking4_IWORK_k[2];        /* '<S12>/Bit Packing 4' */
  int_T BitPacking_IWORK_l[2];         /* '<S12>/Bit Packing ' */
  int_T FIFOwrite1_IWORK[3];           /* '<S6>/FIFO write 1' */
  int_T EnableTxIntv31_IWORK;          /* '<S6>/Enable Tx Int (v3) 1' */
  int_T FIFOwrite2_IWORK[3];           /* '<S6>/FIFO write 2' */
  int_T EnableTxIntv32_IWORK;          /* '<S6>/Enable Tx Int (v3) 2' */
  int_T FIFOwrite3_IWORK[3];           /* '<S6>/FIFO write 3' */
  int_T EnableTxIntv33_IWORK;          /* '<S6>/Enable Tx Int (v3) 3' */
  int_T FIFOwrite4_IWORK[3];           /* '<S6>/FIFO write 4' */
  int_T EnableTxIntv34_IWORK;          /* '<S6>/Enable Tx Int (v3) 4' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S4>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_l;                 /* '<S5>/S-Function' */

  int_T BitPacking1_IWORK_i[2];        /* '<S19>/Bit Packing 1' */
  int_T BitPacking2_IWORK_m[2];        /* '<S19>/Bit Packing 2' */
  int_T BitPacking3_IWORK_jm[2];       /* '<S19>/Bit Packing 3' */
  int_T BitPacking4_IWORK_h[2];        /* '<S19>/Bit Packing 4' */
  int_T BitPacking_IWORK_m[2];         /* '<S19>/Bit Packing ' */
  int_T BitPacking1_IWORK_a[2];        /* '<S15>/Bit Packing 1' */
  int_T BitPacking2_IWORK_g[2];        /* '<S15>/Bit Packing 2' */
  int_T BitPacking3_IWORK_b[2];        /* '<S15>/Bit Packing 3' */
  int_T BitPacking4_IWORK_o[2];        /* '<S15>/Bit Packing 4' */
  int_T BitPacking_IWORK_k[2];         /* '<S15>/Bit Packing ' */
  int_T BitPacking1_IWORK_bb[2];       /* '<S16>/Bit Packing 1' */
  int_T BitPacking2_IWORK_mg[2];       /* '<S16>/Bit Packing 2' */
  int_T BitPacking3_IWORK_k[2];        /* '<S16>/Bit Packing 3' */
  int_T BitPacking4_IWORK_hf[2];       /* '<S16>/Bit Packing 4' */
  int_T BitPacking_IWORK_g[2];         /* '<S16>/Bit Packing ' */
  int_T BitPacking1_IWORK_d[2];        /* '<S17>/Bit Packing 1' */
  int_T BitPacking2_IWORK_a[2];        /* '<S17>/Bit Packing 2' */
  int_T BitPacking3_IWORK_e[2];        /* '<S17>/Bit Packing 3' */
  int_T BitPacking4_IWORK_d[2];        /* '<S17>/Bit Packing 4' */
  int_T BitPacking_IWORK_o[2];         /* '<S17>/Bit Packing ' */
  int_T BitPacking1_IWORK_p[2];        /* '<S18>/Bit Packing 1' */
  int_T BitPacking2_IWORK_p[2];        /* '<S18>/Bit Packing 2' */
  int_T BitPacking3_IWORK_d[2];        /* '<S18>/Bit Packing 3' */
  int_T BitPacking4_IWORK_l[2];        /* '<S18>/Bit Packing 4' */
  int_T BitPacking_IWORK_p[2];         /* '<S18>/Bit Packing ' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK_p;                 /* '<S10>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_k;                 /* '<S11>/S-Function' */

  int_T ReadIntStatusv3_IWORK[2];      /* '<S69>/Read Int Status (v3) ' */
  int_T IntSourceFilterWritev31_IWORK;
                                    /* '<S69>/Int Source Filter Write (v3) 1' */
  int_T FIFOread1_IWORK[5];            /* '<S69>/FIFO read 1' */
  int_T WriteHWFIFOv31_IWORK[2];       /* '<S69>/Write HW FIFO (v3) 1' */
  int_T IntSourceFilterWritev32_IWORK;
                                    /* '<S69>/Int Source Filter Write (v3) 2' */
  int_T FIFOread2_IWORK[5];            /* '<S69>/FIFO read 2' */
  int_T WriteHWFIFOv32_IWORK[2];       /* '<S69>/Write HW FIFO (v3) 2' */
  int_T IntSourceFilterWritev33_IWORK;
                                    /* '<S69>/Int Source Filter Write (v3) 3' */
  int_T FIFOread3_IWORK[5];            /* '<S69>/FIFO read 3' */
  int_T WriteHWFIFOv33_IWORK[2];       /* '<S69>/Write HW FIFO (v3) 3' */
  int_T IntSourceFilterWritev34_IWORK;
                                    /* '<S69>/Int Source Filter Write (v3) 4' */
  int_T FIFOread4_IWORK[5];            /* '<S69>/FIFO read 4' */
  int_T WriteHWFIFOv34_IWORK[2];       /* '<S69>/Write HW FIFO (v3) 4' */
  int_T IntSourceFilterReadv31_IWORK;/* '<S69>/Int Source Filter Read (v3) 1' */
  int_T ReadHWFIFOv31_IWORK;           /* '<S69>/Read HW FIFO (v3) 1' */
  int_T FIFOwrite1_IWORK_n[3];         /* '<S69>/FIFO write 1' */
  int_T IntSourceFilterReadv32_IWORK;/* '<S69>/Int Source Filter Read (v3) 2' */
  int_T ReadHWFIFOv32_IWORK;           /* '<S69>/Read HW FIFO (v3) 2' */
  int_T FIFOwrite2_IWORK_g[3];         /* '<S69>/FIFO write 2' */
  int_T IntSourceFilterReadv33_IWORK;/* '<S69>/Int Source Filter Read (v3) 3' */
  int_T ReadHWFIFOv33_IWORK;           /* '<S69>/Read HW FIFO (v3) 3' */
  int_T FIFOwrite3_IWORK_o[3];         /* '<S69>/FIFO write 3' */
  int_T IntSourceFilterReadv34_IWORK;/* '<S69>/Int Source Filter Read (v3) 4' */
  int_T ReadHWFIFOv34_IWORK;           /* '<S69>/Read HW FIFO (v3) 4' */
  int_T FIFOwrite4_IWORK_m[3];         /* '<S69>/FIFO write 4' */
  int8_T ISR_SubsysRanBC;              /* '<S6>/ISR' */
} DW_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T;

/* Backward compatible GRT Identifiers */
#define rtB                            integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B
#define BlockIO                        B_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T
#define rtP                            integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P
#define Parameters                     P_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T
#define rtDWork                        integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW
#define D_Work                         DW_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T

/* Parameters (default storage) */
struct P_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T_ {
  real_T Controller_ctrlSurfDefMax; /* Mask Parameter: Controller_ctrlSurfDefMax
                                     * Referenced by:
                                     *   '<S1>/Constant'
                                     *   '<S1>/Constant1'
                                     *   '<S1>/Constant2'
                                     */
  real_T Controller_pitchKP;           /* Mask Parameter: Controller_pitchKP
                                        * Referenced by:
                                        *   '<S1>/Gain'
                                        *   '<S1>/Gain1'
                                        */
  real_T Controller_rollKP;            /* Mask Parameter: Controller_rollKP
                                        * Referenced by: '<S1>/Gain2'
                                        */
  real_T ReadIntStatusv3_P1_Size[2];
                                  /* Computed Parameter: ReadIntStatusv3_P1_Size
                                   * Referenced by: '<S69>/Read Int Status (v3) '
                                   */
  real_T ReadIntStatusv3_P1;           /* Expression: parModuleId
                                        * Referenced by: '<S69>/Read Int Status (v3) '
                                        */
  real_T ReadIntStatusv3_P2_Size[2];
                                  /* Computed Parameter: ReadIntStatusv3_P2_Size
                                   * Referenced by: '<S69>/Read Int Status (v3) '
                                   */
  real_T ReadIntStatusv3_P2;           /* Expression: parSlot
                                        * Referenced by: '<S69>/Read Int Status (v3) '
                                        */
  real_T ReadIntStatusv3_P3_Size[2];
                                  /* Computed Parameter: ReadIntStatusv3_P3_Size
                                   * Referenced by: '<S69>/Read Int Status (v3) '
                                   */
  real_T ReadIntStatusv3_P3;           /* Expression: parModuleType
                                        * Referenced by: '<S69>/Read Int Status (v3) '
                                        */
  real_T IntSourceFilterWritev31_P1_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev31_P1_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
                           */
  real_T IntSourceFilterWritev31_P1;   /* Expression: parModuleId
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
                                        */
  real_T IntSourceFilterWritev31_P2_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev31_P2_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
                           */
  real_T IntSourceFilterWritev31_P2;   /* Expression: parChannel
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
                                        */
  real_T IntSourceFilterWritev31_P3_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev31_P3_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
                           */
  real_T IntSourceFilterWritev31_P3;   /* Expression: parFilter
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
                                        */
  real_T IntSourceFilterWritev31_P4_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev31_P4_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
                           */
  real_T IntSourceFilterWritev31_P4;   /* Expression: parSlot
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
                                        */
  real_T IntSourceFilterWritev31_P5_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev31_P5_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
                           */
  real_T IntSourceFilterWritev31_P5;   /* Expression: parModuleType
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 1'
                                        */
  real_T WriteHWFIFOv31_P1_Size[2];/* Computed Parameter: WriteHWFIFOv31_P1_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 1'
                                    */
  real_T WriteHWFIFOv31_P1;            /* Expression: parModuleId
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 1'
                                        */
  real_T WriteHWFIFOv31_P2_Size[2];/* Computed Parameter: WriteHWFIFOv31_P2_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 1'
                                    */
  real_T WriteHWFIFOv31_P2;            /* Expression: parChannel
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 1'
                                        */
  real_T WriteHWFIFOv31_P3_Size[2];/* Computed Parameter: WriteHWFIFOv31_P3_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 1'
                                    */
  real_T WriteHWFIFOv31_P3;            /* Expression: parSampleTime
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 1'
                                        */
  real_T WriteHWFIFOv31_P4_Size[2];/* Computed Parameter: WriteHWFIFOv31_P4_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 1'
                                    */
  real_T WriteHWFIFOv31_P4;            /* Expression: parSlot
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 1'
                                        */
  real_T WriteHWFIFOv31_P5_Size[2];/* Computed Parameter: WriteHWFIFOv31_P5_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 1'
                                    */
  real_T WriteHWFIFOv31_P5;            /* Expression: parModuleType
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 1'
                                        */
  real_T WriteHWFIFOv31_P6_Size[2];/* Computed Parameter: WriteHWFIFOv31_P6_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 1'
                                    */
  real_T WriteHWFIFOv31_P6;            /* Expression: parTxTrigLvl
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 1'
                                        */
  real_T IntSourceFilterWritev32_P1_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev32_P1_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
                           */
  real_T IntSourceFilterWritev32_P1;   /* Expression: parModuleId
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
                                        */
  real_T IntSourceFilterWritev32_P2_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev32_P2_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
                           */
  real_T IntSourceFilterWritev32_P2;   /* Expression: parChannel
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
                                        */
  real_T IntSourceFilterWritev32_P3_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev32_P3_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
                           */
  real_T IntSourceFilterWritev32_P3;   /* Expression: parFilter
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
                                        */
  real_T IntSourceFilterWritev32_P4_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev32_P4_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
                           */
  real_T IntSourceFilterWritev32_P4;   /* Expression: parSlot
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
                                        */
  real_T IntSourceFilterWritev32_P5_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev32_P5_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
                           */
  real_T IntSourceFilterWritev32_P5;   /* Expression: parModuleType
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 2'
                                        */
  real_T WriteHWFIFOv32_P1_Size[2];/* Computed Parameter: WriteHWFIFOv32_P1_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 2'
                                    */
  real_T WriteHWFIFOv32_P1;            /* Expression: parModuleId
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 2'
                                        */
  real_T WriteHWFIFOv32_P2_Size[2];/* Computed Parameter: WriteHWFIFOv32_P2_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 2'
                                    */
  real_T WriteHWFIFOv32_P2;            /* Expression: parChannel
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 2'
                                        */
  real_T WriteHWFIFOv32_P3_Size[2];/* Computed Parameter: WriteHWFIFOv32_P3_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 2'
                                    */
  real_T WriteHWFIFOv32_P3;            /* Expression: parSampleTime
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 2'
                                        */
  real_T WriteHWFIFOv32_P4_Size[2];/* Computed Parameter: WriteHWFIFOv32_P4_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 2'
                                    */
  real_T WriteHWFIFOv32_P4;            /* Expression: parSlot
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 2'
                                        */
  real_T WriteHWFIFOv32_P5_Size[2];/* Computed Parameter: WriteHWFIFOv32_P5_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 2'
                                    */
  real_T WriteHWFIFOv32_P5;            /* Expression: parModuleType
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 2'
                                        */
  real_T WriteHWFIFOv32_P6_Size[2];/* Computed Parameter: WriteHWFIFOv32_P6_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 2'
                                    */
  real_T WriteHWFIFOv32_P6;            /* Expression: parTxTrigLvl
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 2'
                                        */
  real_T IntSourceFilterWritev33_P1_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev33_P1_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
                           */
  real_T IntSourceFilterWritev33_P1;   /* Expression: parModuleId
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
                                        */
  real_T IntSourceFilterWritev33_P2_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev33_P2_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
                           */
  real_T IntSourceFilterWritev33_P2;   /* Expression: parChannel
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
                                        */
  real_T IntSourceFilterWritev33_P3_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev33_P3_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
                           */
  real_T IntSourceFilterWritev33_P3;   /* Expression: parFilter
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
                                        */
  real_T IntSourceFilterWritev33_P4_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev33_P4_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
                           */
  real_T IntSourceFilterWritev33_P4;   /* Expression: parSlot
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
                                        */
  real_T IntSourceFilterWritev33_P5_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev33_P5_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
                           */
  real_T IntSourceFilterWritev33_P5;   /* Expression: parModuleType
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 3'
                                        */
  real_T WriteHWFIFOv33_P1_Size[2];/* Computed Parameter: WriteHWFIFOv33_P1_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 3'
                                    */
  real_T WriteHWFIFOv33_P1;            /* Expression: parModuleId
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 3'
                                        */
  real_T WriteHWFIFOv33_P2_Size[2];/* Computed Parameter: WriteHWFIFOv33_P2_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 3'
                                    */
  real_T WriteHWFIFOv33_P2;            /* Expression: parChannel
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 3'
                                        */
  real_T WriteHWFIFOv33_P3_Size[2];/* Computed Parameter: WriteHWFIFOv33_P3_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 3'
                                    */
  real_T WriteHWFIFOv33_P3;            /* Expression: parSampleTime
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 3'
                                        */
  real_T WriteHWFIFOv33_P4_Size[2];/* Computed Parameter: WriteHWFIFOv33_P4_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 3'
                                    */
  real_T WriteHWFIFOv33_P4;            /* Expression: parSlot
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 3'
                                        */
  real_T WriteHWFIFOv33_P5_Size[2];/* Computed Parameter: WriteHWFIFOv33_P5_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 3'
                                    */
  real_T WriteHWFIFOv33_P5;            /* Expression: parModuleType
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 3'
                                        */
  real_T WriteHWFIFOv33_P6_Size[2];/* Computed Parameter: WriteHWFIFOv33_P6_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 3'
                                    */
  real_T WriteHWFIFOv33_P6;            /* Expression: parTxTrigLvl
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 3'
                                        */
  real_T IntSourceFilterWritev34_P1_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev34_P1_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
                           */
  real_T IntSourceFilterWritev34_P1;   /* Expression: parModuleId
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
                                        */
  real_T IntSourceFilterWritev34_P2_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev34_P2_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
                           */
  real_T IntSourceFilterWritev34_P2;   /* Expression: parChannel
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
                                        */
  real_T IntSourceFilterWritev34_P3_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev34_P3_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
                           */
  real_T IntSourceFilterWritev34_P3;   /* Expression: parFilter
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
                                        */
  real_T IntSourceFilterWritev34_P4_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev34_P4_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
                           */
  real_T IntSourceFilterWritev34_P4;   /* Expression: parSlot
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
                                        */
  real_T IntSourceFilterWritev34_P5_Size[2];
                          /* Computed Parameter: IntSourceFilterWritev34_P5_Size
                           * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
                           */
  real_T IntSourceFilterWritev34_P5;   /* Expression: parModuleType
                                        * Referenced by: '<S69>/Int Source Filter Write (v3) 4'
                                        */
  real_T WriteHWFIFOv34_P1_Size[2];/* Computed Parameter: WriteHWFIFOv34_P1_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 4'
                                    */
  real_T WriteHWFIFOv34_P1;            /* Expression: parModuleId
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 4'
                                        */
  real_T WriteHWFIFOv34_P2_Size[2];/* Computed Parameter: WriteHWFIFOv34_P2_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 4'
                                    */
  real_T WriteHWFIFOv34_P2;            /* Expression: parChannel
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 4'
                                        */
  real_T WriteHWFIFOv34_P3_Size[2];/* Computed Parameter: WriteHWFIFOv34_P3_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 4'
                                    */
  real_T WriteHWFIFOv34_P3;            /* Expression: parSampleTime
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 4'
                                        */
  real_T WriteHWFIFOv34_P4_Size[2];/* Computed Parameter: WriteHWFIFOv34_P4_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 4'
                                    */
  real_T WriteHWFIFOv34_P4;            /* Expression: parSlot
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 4'
                                        */
  real_T WriteHWFIFOv34_P5_Size[2];/* Computed Parameter: WriteHWFIFOv34_P5_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 4'
                                    */
  real_T WriteHWFIFOv34_P5;            /* Expression: parModuleType
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 4'
                                        */
  real_T WriteHWFIFOv34_P6_Size[2];/* Computed Parameter: WriteHWFIFOv34_P6_Size
                                    * Referenced by: '<S69>/Write HW FIFO (v3) 4'
                                    */
  real_T WriteHWFIFOv34_P6;            /* Expression: parTxTrigLvl
                                        * Referenced by: '<S69>/Write HW FIFO (v3) 4'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S69>/Constant'
                                        */
  real_T IntSourceFilterReadv31_P1_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv31_P1_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
                            */
  real_T IntSourceFilterReadv31_P1;    /* Expression: parModuleId
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
                                        */
  real_T IntSourceFilterReadv31_P2_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv31_P2_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
                            */
  real_T IntSourceFilterReadv31_P2;    /* Expression: parChannel
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
                                        */
  real_T IntSourceFilterReadv31_P3_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv31_P3_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
                            */
  real_T IntSourceFilterReadv31_P3;    /* Expression: parFilter
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
                                        */
  real_T IntSourceFilterReadv31_P4_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv31_P4_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
                            */
  real_T IntSourceFilterReadv31_P4;    /* Expression: parSlot
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
                                        */
  real_T IntSourceFilterReadv31_P5_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv31_P5_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
                            */
  real_T IntSourceFilterReadv31_P5;    /* Expression: parModuleType
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 1'
                                        */
  real_T ReadHWFIFOv31_P1_Size[2];  /* Computed Parameter: ReadHWFIFOv31_P1_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 1'
                                     */
  real_T ReadHWFIFOv31_P1;             /* Expression: parModuleId
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 1'
                                        */
  real_T ReadHWFIFOv31_P2_Size[2];  /* Computed Parameter: ReadHWFIFOv31_P2_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 1'
                                     */
  real_T ReadHWFIFOv31_P2;             /* Expression: parChannel
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 1'
                                        */
  real_T ReadHWFIFOv31_P3_Size[2];  /* Computed Parameter: ReadHWFIFOv31_P3_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 1'
                                     */
  real_T ReadHWFIFOv31_P3;             /* Expression: parFlush
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 1'
                                        */
  real_T ReadHWFIFOv31_P4_Size[2];  /* Computed Parameter: ReadHWFIFOv31_P4_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 1'
                                     */
  real_T ReadHWFIFOv31_P4;             /* Expression: parSampleTime
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 1'
                                        */
  real_T ReadHWFIFOv31_P5_Size[2];  /* Computed Parameter: ReadHWFIFOv31_P5_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 1'
                                     */
  real_T ReadHWFIFOv31_P5;             /* Expression: parSlot
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 1'
                                        */
  real_T ReadHWFIFOv31_P6_Size[2];  /* Computed Parameter: ReadHWFIFOv31_P6_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 1'
                                     */
  real_T ReadHWFIFOv31_P6;             /* Expression: parModuleType
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 1'
                                        */
  real_T IntSourceFilterReadv32_P1_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv32_P1_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
                            */
  real_T IntSourceFilterReadv32_P1;    /* Expression: parModuleId
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
                                        */
  real_T IntSourceFilterReadv32_P2_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv32_P2_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
                            */
  real_T IntSourceFilterReadv32_P2;    /* Expression: parChannel
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
                                        */
  real_T IntSourceFilterReadv32_P3_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv32_P3_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
                            */
  real_T IntSourceFilterReadv32_P3;    /* Expression: parFilter
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
                                        */
  real_T IntSourceFilterReadv32_P4_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv32_P4_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
                            */
  real_T IntSourceFilterReadv32_P4;    /* Expression: parSlot
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
                                        */
  real_T IntSourceFilterReadv32_P5_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv32_P5_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
                            */
  real_T IntSourceFilterReadv32_P5;    /* Expression: parModuleType
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 2'
                                        */
  real_T ReadHWFIFOv32_P1_Size[2];  /* Computed Parameter: ReadHWFIFOv32_P1_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 2'
                                     */
  real_T ReadHWFIFOv32_P1;             /* Expression: parModuleId
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 2'
                                        */
  real_T ReadHWFIFOv32_P2_Size[2];  /* Computed Parameter: ReadHWFIFOv32_P2_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 2'
                                     */
  real_T ReadHWFIFOv32_P2;             /* Expression: parChannel
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 2'
                                        */
  real_T ReadHWFIFOv32_P3_Size[2];  /* Computed Parameter: ReadHWFIFOv32_P3_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 2'
                                     */
  real_T ReadHWFIFOv32_P3;             /* Expression: parFlush
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 2'
                                        */
  real_T ReadHWFIFOv32_P4_Size[2];  /* Computed Parameter: ReadHWFIFOv32_P4_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 2'
                                     */
  real_T ReadHWFIFOv32_P4;             /* Expression: parSampleTime
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 2'
                                        */
  real_T ReadHWFIFOv32_P5_Size[2];  /* Computed Parameter: ReadHWFIFOv32_P5_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 2'
                                     */
  real_T ReadHWFIFOv32_P5;             /* Expression: parSlot
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 2'
                                        */
  real_T ReadHWFIFOv32_P6_Size[2];  /* Computed Parameter: ReadHWFIFOv32_P6_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 2'
                                     */
  real_T ReadHWFIFOv32_P6;             /* Expression: parModuleType
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 2'
                                        */
  real_T IntSourceFilterReadv33_P1_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv33_P1_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
                            */
  real_T IntSourceFilterReadv33_P1;    /* Expression: parModuleId
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
                                        */
  real_T IntSourceFilterReadv33_P2_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv33_P2_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
                            */
  real_T IntSourceFilterReadv33_P2;    /* Expression: parChannel
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
                                        */
  real_T IntSourceFilterReadv33_P3_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv33_P3_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
                            */
  real_T IntSourceFilterReadv33_P3;    /* Expression: parFilter
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
                                        */
  real_T IntSourceFilterReadv33_P4_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv33_P4_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
                            */
  real_T IntSourceFilterReadv33_P4;    /* Expression: parSlot
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
                                        */
  real_T IntSourceFilterReadv33_P5_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv33_P5_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
                            */
  real_T IntSourceFilterReadv33_P5;    /* Expression: parModuleType
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 3'
                                        */
  real_T ReadHWFIFOv33_P1_Size[2];  /* Computed Parameter: ReadHWFIFOv33_P1_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 3'
                                     */
  real_T ReadHWFIFOv33_P1;             /* Expression: parModuleId
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 3'
                                        */
  real_T ReadHWFIFOv33_P2_Size[2];  /* Computed Parameter: ReadHWFIFOv33_P2_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 3'
                                     */
  real_T ReadHWFIFOv33_P2;             /* Expression: parChannel
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 3'
                                        */
  real_T ReadHWFIFOv33_P3_Size[2];  /* Computed Parameter: ReadHWFIFOv33_P3_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 3'
                                     */
  real_T ReadHWFIFOv33_P3;             /* Expression: parFlush
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 3'
                                        */
  real_T ReadHWFIFOv33_P4_Size[2];  /* Computed Parameter: ReadHWFIFOv33_P4_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 3'
                                     */
  real_T ReadHWFIFOv33_P4;             /* Expression: parSampleTime
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 3'
                                        */
  real_T ReadHWFIFOv33_P5_Size[2];  /* Computed Parameter: ReadHWFIFOv33_P5_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 3'
                                     */
  real_T ReadHWFIFOv33_P5;             /* Expression: parSlot
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 3'
                                        */
  real_T ReadHWFIFOv33_P6_Size[2];  /* Computed Parameter: ReadHWFIFOv33_P6_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 3'
                                     */
  real_T ReadHWFIFOv33_P6;             /* Expression: parModuleType
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 3'
                                        */
  real_T IntSourceFilterReadv34_P1_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv34_P1_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
                            */
  real_T IntSourceFilterReadv34_P1;    /* Expression: parModuleId
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
                                        */
  real_T IntSourceFilterReadv34_P2_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv34_P2_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
                            */
  real_T IntSourceFilterReadv34_P2;    /* Expression: parChannel
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
                                        */
  real_T IntSourceFilterReadv34_P3_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv34_P3_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
                            */
  real_T IntSourceFilterReadv34_P3;    /* Expression: parFilter
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
                                        */
  real_T IntSourceFilterReadv34_P4_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv34_P4_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
                            */
  real_T IntSourceFilterReadv34_P4;    /* Expression: parSlot
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
                                        */
  real_T IntSourceFilterReadv34_P5_Size[2];
                           /* Computed Parameter: IntSourceFilterReadv34_P5_Size
                            * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
                            */
  real_T IntSourceFilterReadv34_P5;    /* Expression: parModuleType
                                        * Referenced by: '<S69>/Int Source Filter Read (v3) 4'
                                        */
  real_T ReadHWFIFOv34_P1_Size[2];  /* Computed Parameter: ReadHWFIFOv34_P1_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 4'
                                     */
  real_T ReadHWFIFOv34_P1;             /* Expression: parModuleId
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 4'
                                        */
  real_T ReadHWFIFOv34_P2_Size[2];  /* Computed Parameter: ReadHWFIFOv34_P2_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 4'
                                     */
  real_T ReadHWFIFOv34_P2;             /* Expression: parChannel
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 4'
                                        */
  real_T ReadHWFIFOv34_P3_Size[2];  /* Computed Parameter: ReadHWFIFOv34_P3_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 4'
                                     */
  real_T ReadHWFIFOv34_P3;             /* Expression: parFlush
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 4'
                                        */
  real_T ReadHWFIFOv34_P4_Size[2];  /* Computed Parameter: ReadHWFIFOv34_P4_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 4'
                                     */
  real_T ReadHWFIFOv34_P4;             /* Expression: parSampleTime
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 4'
                                        */
  real_T ReadHWFIFOv34_P5_Size[2];  /* Computed Parameter: ReadHWFIFOv34_P5_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 4'
                                     */
  real_T ReadHWFIFOv34_P5;             /* Expression: parSlot
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 4'
                                        */
  real_T ReadHWFIFOv34_P6_Size[2];  /* Computed Parameter: ReadHWFIFOv34_P6_Size
                                     * Referenced by: '<S69>/Read HW FIFO (v3) 4'
                                     */
  real_T ReadHWFIFOv34_P6;             /* Expression: parModuleType
                                        * Referenced by: '<S69>/Read HW FIFO (v3) 4'
                                        */
  real_T SetupChannelv31_P1_Size[2];
                                  /* Computed Parameter: SetupChannelv31_P1_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 1'
                                   */
  real_T SetupChannelv31_P1;           /* Expression: parModuleId
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P2_Size[2];
                                  /* Computed Parameter: SetupChannelv31_P2_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 1'
                                   */
  real_T SetupChannelv31_P2;           /* Expression: parChannel
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P3_Size[2];
                                  /* Computed Parameter: SetupChannelv31_P3_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 1'
                                   */
  real_T SetupChannelv31_P3;           /* Expression: parSlot
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P4_Size[2];
                                  /* Computed Parameter: SetupChannelv31_P4_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 1'
                                   */
  real_T SetupChannelv31_P4;           /* Expression: parModuleType
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P5_Size[2];
                                  /* Computed Parameter: SetupChannelv31_P5_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 1'
                                   */
  real_T SetupChannelv31_P5;           /* Expression: parTransceiver
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P6_Size[2];
                                  /* Computed Parameter: SetupChannelv31_P6_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 1'
                                   */
  real_T SetupChannelv31_P6;           /* Expression: parTxTerm
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P7_Size[2];
                                  /* Computed Parameter: SetupChannelv31_P7_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 1'
                                   */
  real_T SetupChannelv31_P7;           /* Expression: parRxTerm
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P8_Size[2];
                                  /* Computed Parameter: SetupChannelv31_P8_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 1'
                                   */
  real_T SetupChannelv31_P8;           /* Expression: parMessageMonitoring
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P9_Size[2];
                                  /* Computed Parameter: SetupChannelv31_P9_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 1'
                                   */
  real_T SetupChannelv31_P9;           /* Expression: parStandardBaud
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P10_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P10_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P10;          /* Expression: parBaudrate
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P11_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P11_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P11;          /* Expression: parBaudDivisor
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P12_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P12_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P12;          /* Expression: parSamplingRate
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P13_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P13_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P13;          /* Expression: parPrescale
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P14_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P14_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P14;          /* Expression: parParity
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P15_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P15_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P15;          /* Expression: parDataBits
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P16_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P16_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P16;          /* Expression: parStopBits
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P17_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P17_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P17;          /* Expression: parTxTrigLvl
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P18_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P18_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P18;          /* Expression: parRxTrigLvl
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P19_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P19_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P19;          /* Expression: parHandshake
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P20_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P20_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P20;          /* Expression: parRtsHysteresis
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P21_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P21_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P21;          /* Expression: parXon
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P22_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P22_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P22;          /* Expression: parXoff
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P23_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P23_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P23;          /* Expression: parAutoTurnaround
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv31_P24_Size[2];
                                 /* Computed Parameter: SetupChannelv31_P24_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 1'
                                  */
  real_T SetupChannelv31_P24;          /* Expression: parTurnaroundDelay
                                        * Referenced by: '<S6>/Setup Channel (v3) 1'
                                        */
  real_T SetupChannelv32_P1_Size[2];
                                  /* Computed Parameter: SetupChannelv32_P1_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 2'
                                   */
  real_T SetupChannelv32_P1;           /* Expression: parModuleId
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P2_Size[2];
                                  /* Computed Parameter: SetupChannelv32_P2_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 2'
                                   */
  real_T SetupChannelv32_P2;           /* Expression: parChannel
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P3_Size[2];
                                  /* Computed Parameter: SetupChannelv32_P3_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 2'
                                   */
  real_T SetupChannelv32_P3;           /* Expression: parSlot
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P4_Size[2];
                                  /* Computed Parameter: SetupChannelv32_P4_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 2'
                                   */
  real_T SetupChannelv32_P4;           /* Expression: parModuleType
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P5_Size[2];
                                  /* Computed Parameter: SetupChannelv32_P5_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 2'
                                   */
  real_T SetupChannelv32_P5;           /* Expression: parTransceiver
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P6_Size[2];
                                  /* Computed Parameter: SetupChannelv32_P6_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 2'
                                   */
  real_T SetupChannelv32_P6;           /* Expression: parTxTerm
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P7_Size[2];
                                  /* Computed Parameter: SetupChannelv32_P7_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 2'
                                   */
  real_T SetupChannelv32_P7;           /* Expression: parRxTerm
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P8_Size[2];
                                  /* Computed Parameter: SetupChannelv32_P8_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 2'
                                   */
  real_T SetupChannelv32_P8;           /* Expression: parMessageMonitoring
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P9_Size[2];
                                  /* Computed Parameter: SetupChannelv32_P9_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 2'
                                   */
  real_T SetupChannelv32_P9;           /* Expression: parStandardBaud
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P10_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P10_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P10;          /* Expression: parBaudrate
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P11_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P11_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P11;          /* Expression: parBaudDivisor
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P12_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P12_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P12;          /* Expression: parSamplingRate
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P13_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P13_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P13;          /* Expression: parPrescale
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P14_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P14_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P14;          /* Expression: parParity
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P15_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P15_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P15;          /* Expression: parDataBits
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P16_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P16_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P16;          /* Expression: parStopBits
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P17_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P17_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P17;          /* Expression: parTxTrigLvl
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P18_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P18_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P18;          /* Expression: parRxTrigLvl
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P19_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P19_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P19;          /* Expression: parHandshake
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P20_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P20_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P20;          /* Expression: parRtsHysteresis
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P21_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P21_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P21;          /* Expression: parXon
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P22_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P22_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P22;          /* Expression: parXoff
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P23_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P23_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P23;          /* Expression: parAutoTurnaround
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv32_P24_Size[2];
                                 /* Computed Parameter: SetupChannelv32_P24_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 2'
                                  */
  real_T SetupChannelv32_P24;          /* Expression: parTurnaroundDelay
                                        * Referenced by: '<S6>/Setup Channel (v3) 2'
                                        */
  real_T SetupChannelv33_P1_Size[2];
                                  /* Computed Parameter: SetupChannelv33_P1_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 3'
                                   */
  real_T SetupChannelv33_P1;           /* Expression: parModuleId
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P2_Size[2];
                                  /* Computed Parameter: SetupChannelv33_P2_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 3'
                                   */
  real_T SetupChannelv33_P2;           /* Expression: parChannel
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P3_Size[2];
                                  /* Computed Parameter: SetupChannelv33_P3_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 3'
                                   */
  real_T SetupChannelv33_P3;           /* Expression: parSlot
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P4_Size[2];
                                  /* Computed Parameter: SetupChannelv33_P4_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 3'
                                   */
  real_T SetupChannelv33_P4;           /* Expression: parModuleType
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P5_Size[2];
                                  /* Computed Parameter: SetupChannelv33_P5_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 3'
                                   */
  real_T SetupChannelv33_P5;           /* Expression: parTransceiver
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P6_Size[2];
                                  /* Computed Parameter: SetupChannelv33_P6_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 3'
                                   */
  real_T SetupChannelv33_P6;           /* Expression: parTxTerm
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P7_Size[2];
                                  /* Computed Parameter: SetupChannelv33_P7_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 3'
                                   */
  real_T SetupChannelv33_P7;           /* Expression: parRxTerm
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P8_Size[2];
                                  /* Computed Parameter: SetupChannelv33_P8_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 3'
                                   */
  real_T SetupChannelv33_P8;           /* Expression: parMessageMonitoring
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P9_Size[2];
                                  /* Computed Parameter: SetupChannelv33_P9_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 3'
                                   */
  real_T SetupChannelv33_P9;           /* Expression: parStandardBaud
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P10_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P10_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P10;          /* Expression: parBaudrate
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P11_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P11_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P11;          /* Expression: parBaudDivisor
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P12_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P12_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P12;          /* Expression: parSamplingRate
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P13_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P13_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P13;          /* Expression: parPrescale
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P14_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P14_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P14;          /* Expression: parParity
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P15_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P15_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P15;          /* Expression: parDataBits
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P16_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P16_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P16;          /* Expression: parStopBits
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P17_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P17_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P17;          /* Expression: parTxTrigLvl
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P18_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P18_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P18;          /* Expression: parRxTrigLvl
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P19_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P19_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P19;          /* Expression: parHandshake
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P20_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P20_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P20;          /* Expression: parRtsHysteresis
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P21_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P21_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P21;          /* Expression: parXon
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P22_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P22_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P22;          /* Expression: parXoff
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P23_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P23_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P23;          /* Expression: parAutoTurnaround
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv33_P24_Size[2];
                                 /* Computed Parameter: SetupChannelv33_P24_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 3'
                                  */
  real_T SetupChannelv33_P24;          /* Expression: parTurnaroundDelay
                                        * Referenced by: '<S6>/Setup Channel (v3) 3'
                                        */
  real_T SetupChannelv34_P1_Size[2];
                                  /* Computed Parameter: SetupChannelv34_P1_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 4'
                                   */
  real_T SetupChannelv34_P1;           /* Expression: parModuleId
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P2_Size[2];
                                  /* Computed Parameter: SetupChannelv34_P2_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 4'
                                   */
  real_T SetupChannelv34_P2;           /* Expression: parChannel
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P3_Size[2];
                                  /* Computed Parameter: SetupChannelv34_P3_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 4'
                                   */
  real_T SetupChannelv34_P3;           /* Expression: parSlot
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P4_Size[2];
                                  /* Computed Parameter: SetupChannelv34_P4_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 4'
                                   */
  real_T SetupChannelv34_P4;           /* Expression: parModuleType
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P5_Size[2];
                                  /* Computed Parameter: SetupChannelv34_P5_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 4'
                                   */
  real_T SetupChannelv34_P5;           /* Expression: parTransceiver
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P6_Size[2];
                                  /* Computed Parameter: SetupChannelv34_P6_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 4'
                                   */
  real_T SetupChannelv34_P6;           /* Expression: parTxTerm
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P7_Size[2];
                                  /* Computed Parameter: SetupChannelv34_P7_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 4'
                                   */
  real_T SetupChannelv34_P7;           /* Expression: parRxTerm
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P8_Size[2];
                                  /* Computed Parameter: SetupChannelv34_P8_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 4'
                                   */
  real_T SetupChannelv34_P8;           /* Expression: parMessageMonitoring
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P9_Size[2];
                                  /* Computed Parameter: SetupChannelv34_P9_Size
                                   * Referenced by: '<S6>/Setup Channel (v3) 4'
                                   */
  real_T SetupChannelv34_P9;           /* Expression: parStandardBaud
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P10_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P10_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P10;          /* Expression: parBaudrate
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P11_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P11_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P11;          /* Expression: parBaudDivisor
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P12_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P12_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P12;          /* Expression: parSamplingRate
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P13_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P13_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P13;          /* Expression: parPrescale
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P14_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P14_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P14;          /* Expression: parParity
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P15_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P15_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P15;          /* Expression: parDataBits
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P16_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P16_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P16;          /* Expression: parStopBits
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P17_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P17_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P17;          /* Expression: parTxTrigLvl
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P18_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P18_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P18;          /* Expression: parRxTrigLvl
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P19_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P19_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P19;          /* Expression: parHandshake
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P20_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P20_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P20;          /* Expression: parRtsHysteresis
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P21_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P21_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P21;          /* Expression: parXon
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P22_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P22_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P22;          /* Expression: parXoff
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P23_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P23_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P23;          /* Expression: parAutoTurnaround
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T SetupChannelv34_P24_Size[2];
                                 /* Computed Parameter: SetupChannelv34_P24_Size
                                  * Referenced by: '<S6>/Setup Channel (v3) 4'
                                  */
  real_T SetupChannelv34_P24;          /* Expression: parTurnaroundDelay
                                        * Referenced by: '<S6>/Setup Channel (v3) 4'
                                        */
  real_T pitchSP_Value;                /* Expression: EulerSP(1)
                                        * Referenced by: '<S2>/pitchSP'
                                        */
  real_T FIFObinread_P1_Size[2];      /* Computed Parameter: FIFObinread_P1_Size
                                       * Referenced by: '<S3>/FIFO bin read '
                                       */
  real_T FIFObinread_P1;               /* Expression: maxsize
                                        * Referenced by: '<S3>/FIFO bin read '
                                        */
  real_T FIFObinread_P2_Size[2];      /* Computed Parameter: FIFObinread_P2_Size
                                       * Referenced by: '<S3>/FIFO bin read '
                                       */
  real_T FIFObinread_P2;               /* Expression: outputtype
                                        * Referenced by: '<S3>/FIFO bin read '
                                        */
  real_T FIFObinread_P3_Size[2];      /* Computed Parameter: FIFObinread_P3_Size
                                       * Referenced by: '<S3>/FIFO bin read '
                                       */
  real_T FIFObinread_P3;               /* Expression: sampletime
                                        * Referenced by: '<S3>/FIFO bin read '
                                        */
  real_T FIFObinread_P4_Size[2];      /* Computed Parameter: FIFObinread_P4_Size
                                       * Referenced by: '<S3>/FIFO bin read '
                                       */
  real_T FIFObinread_P4;               /* Expression: hdr
                                        * Referenced by: '<S3>/FIFO bin read '
                                        */
  real_T FIFObinread_P5_Size[2];      /* Computed Parameter: FIFObinread_P5_Size
                                       * Referenced by: '<S3>/FIFO bin read '
                                       */
  real_T FIFObinread_P5;               /* Expression: hlengths
                                        * Referenced by: '<S3>/FIFO bin read '
                                        */
  real_T FIFObinread_P6_Size[2];      /* Computed Parameter: FIFObinread_P6_Size
                                       * Referenced by: '<S3>/FIFO bin read '
                                       */
  real_T FIFObinread_P6;               /* Expression: lengths
                                        * Referenced by: '<S3>/FIFO bin read '
                                        */
  real_T FIFObinread_P7_Size[2];      /* Computed Parameter: FIFObinread_P7_Size
                                       * Referenced by: '<S3>/FIFO bin read '
                                       */
  real_T FIFObinread_P7;               /* Expression: hold
                                        * Referenced by: '<S3>/FIFO bin read '
                                        */
  real_T FIFObinread_P8_Size[2];      /* Computed Parameter: FIFObinread_P8_Size
                                       * Referenced by: '<S3>/FIFO bin read '
                                       */
  real_T FIFObinread_P8;               /* Expression: enable
                                        * Referenced by: '<S3>/FIFO bin read '
                                        */
  real_T Gain1_Gain;                   /* Expression: 180/pi
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real_T Gain3_Gain;                   /* Expression: -1
                                        * Referenced by: '<S1>/Gain3'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1
                                        * Referenced by: '<S1>/Gain4'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 99
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 10
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  real_T yawSP_Value;                  /* Expression: EulerSP(3)
                                        * Referenced by: '<S2>/yawSP'
                                        */
  real_T Gain2_Gain;                   /* Expression: 180/pi
                                        * Referenced by: '<S3>/Gain2'
                                        */
  real_T Gain5_Gain;                   /* Expression: -1
                                        * Referenced by: '<S1>/Gain5'
                                        */
  real_T Gain6_Gain;                   /* Expression: 1
                                        * Referenced by: '<S1>/Gain6'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 99
                                        * Referenced by: '<S1>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 10
                                        * Referenced by: '<S1>/Saturation1'
                                        */
  real_T Gain_Gain;                    /* Expression: 180/pi
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T rollSP_Value;                 /* Expression: EulerSP(2)
                                        * Referenced by: '<S2>/rollSP'
                                        */
  real_T Gain7_Gain;                   /* Expression: -1
                                        * Referenced by: '<S1>/Gain7'
                                        */
  real_T Gain8_Gain;                   /* Expression: 1
                                        * Referenced by: '<S1>/Gain8'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 99
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 10
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T ASCIIEncode_P1_Size[2];      /* Computed Parameter: ASCIIEncode_P1_Size
                                       * Referenced by: '<Root>/ASCII Encode '
                                       */
  real_T ASCIIEncode_P1[6];            /* Computed Parameter: ASCIIEncode_P1
                                        * Referenced by: '<Root>/ASCII Encode '
                                        */
  real_T ASCIIEncode_P2_Size[2];      /* Computed Parameter: ASCIIEncode_P2_Size
                                       * Referenced by: '<Root>/ASCII Encode '
                                       */
  real_T ASCIIEncode_P2;               /* Expression: maxlength
                                        * Referenced by: '<Root>/ASCII Encode '
                                        */
  real_T ASCIIEncode_P3_Size[2];      /* Computed Parameter: ASCIIEncode_P3_Size
                                       * Referenced by: '<Root>/ASCII Encode '
                                       */
  real_T ASCIIEncode_P3;               /* Expression: nvars
                                        * Referenced by: '<Root>/ASCII Encode '
                                        */
  real_T ASCIIEncode_P4_Size[2];      /* Computed Parameter: ASCIIEncode_P4_Size
                                       * Referenced by: '<Root>/ASCII Encode '
                                       */
  real_T ASCIIEncode_P4[3];            /* Expression: varids
                                        * Referenced by: '<Root>/ASCII Encode '
                                        */
  real_T EnableTxIntv31_P1_Size[2];/* Computed Parameter: EnableTxIntv31_P1_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 1'
                                    */
  real_T EnableTxIntv31_P1;            /* Expression: parModuleId
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 1'
                                        */
  real_T EnableTxIntv31_P2_Size[2];/* Computed Parameter: EnableTxIntv31_P2_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 1'
                                    */
  real_T EnableTxIntv31_P2;            /* Expression: parChannel
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 1'
                                        */
  real_T EnableTxIntv31_P3_Size[2];/* Computed Parameter: EnableTxIntv31_P3_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 1'
                                    */
  real_T EnableTxIntv31_P3;            /* Expression: parSlot
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 1'
                                        */
  real_T EnableTxIntv31_P4_Size[2];/* Computed Parameter: EnableTxIntv31_P4_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 1'
                                    */
  real_T EnableTxIntv31_P4;            /* Expression: parModuleType
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 1'
                                        */
  real_T EnableTxIntv32_P1_Size[2];/* Computed Parameter: EnableTxIntv32_P1_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 2'
                                    */
  real_T EnableTxIntv32_P1;            /* Expression: parModuleId
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 2'
                                        */
  real_T EnableTxIntv32_P2_Size[2];/* Computed Parameter: EnableTxIntv32_P2_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 2'
                                    */
  real_T EnableTxIntv32_P2;            /* Expression: parChannel
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 2'
                                        */
  real_T EnableTxIntv32_P3_Size[2];/* Computed Parameter: EnableTxIntv32_P3_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 2'
                                    */
  real_T EnableTxIntv32_P3;            /* Expression: parSlot
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 2'
                                        */
  real_T EnableTxIntv32_P4_Size[2];/* Computed Parameter: EnableTxIntv32_P4_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 2'
                                    */
  real_T EnableTxIntv32_P4;            /* Expression: parModuleType
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 2'
                                        */
  real_T EnableTxIntv33_P1_Size[2];/* Computed Parameter: EnableTxIntv33_P1_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 3'
                                    */
  real_T EnableTxIntv33_P1;            /* Expression: parModuleId
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 3'
                                        */
  real_T EnableTxIntv33_P2_Size[2];/* Computed Parameter: EnableTxIntv33_P2_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 3'
                                    */
  real_T EnableTxIntv33_P2;            /* Expression: parChannel
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 3'
                                        */
  real_T EnableTxIntv33_P3_Size[2];/* Computed Parameter: EnableTxIntv33_P3_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 3'
                                    */
  real_T EnableTxIntv33_P3;            /* Expression: parSlot
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 3'
                                        */
  real_T EnableTxIntv33_P4_Size[2];/* Computed Parameter: EnableTxIntv33_P4_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 3'
                                    */
  real_T EnableTxIntv33_P4;            /* Expression: parModuleType
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 3'
                                        */
  real_T EnableTxIntv34_P1_Size[2];/* Computed Parameter: EnableTxIntv34_P1_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 4'
                                    */
  real_T EnableTxIntv34_P1;            /* Expression: parModuleId
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 4'
                                        */
  real_T EnableTxIntv34_P2_Size[2];/* Computed Parameter: EnableTxIntv34_P2_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 4'
                                    */
  real_T EnableTxIntv34_P2;            /* Expression: parChannel
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 4'
                                        */
  real_T EnableTxIntv34_P3_Size[2];/* Computed Parameter: EnableTxIntv34_P3_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 4'
                                    */
  real_T EnableTxIntv34_P3;            /* Expression: parSlot
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 4'
                                        */
  real_T EnableTxIntv34_P4_Size[2];/* Computed Parameter: EnableTxIntv34_P4_Size
                                    * Referenced by: '<S6>/Enable Tx Int (v3) 4'
                                    */
  real_T EnableTxIntv34_P4;            /* Expression: parModuleType
                                        * Referenced by: '<S6>/Enable Tx Int (v3) 4'
                                        */
  real_T Gain5_Gain_j;                 /* Expression: 180/pi
                                        * Referenced by: '<S3>/Gain5'
                                        */
  real_T Gain4_Gain_b;                 /* Expression: 180/pi
                                        * Referenced by: '<S3>/Gain4'
                                        */
  real_T Gain3_Gain_a;                 /* Expression: 180/pi
                                        * Referenced by: '<S3>/Gain3'
                                        */
  uint32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S69>/Constant1'
                                        */
  uint32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S69>/Constant2'
                                        */
  uint32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S69>/Constant3'
                                        */
  uint32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S69>/Constant4'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[27];
    SimStruct *childSFunctionPtrs[27];
    struct _ssBlkInfo2 blkInfo2[27];
    struct _ssSFcnModelMethods2 methods2[27];
    struct _ssSFcnModelMethods3 methods3[27];
    struct _ssSFcnModelMethods4 methods4[27];
    struct _ssStatesInfo2 statesInfo2[27];
    ssPeriodicStatesInfo periodicStatesInfo[27];
    struct _ssPortInfo2 inputOutputPortInfo2[27];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[24];
      mxArray *params[24];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[24];
      mxArray *params[24];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[24];
      mxArray *params[24];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[24];
      mxArray *params[24];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      real_T const *UPtrs2[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn26;
  } NonInlinedSFcns;

  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  void *dwork;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    void *semIdForTask1;
    uint32_T rtmClockTickBuf1;
    uint32_T rtmBufClockTickBufH1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_P;

/* Block signals (default storage) */
extern B_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_B;

/* Block states (default storage) */
extern DW_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_DW;

/* External data declarations for dependent source files */
extern const int8_T integrated_3PropControl_6bitCmd_100HzIMU_25HzP_I8GND;/* int8_T ground */
extern const uint8_T integrated_3PropControl_6bitCmd_100HzIMU_25HzP_U8GND;/* uint8_T ground */

/*====================*
 * External functions *
 *====================*/
extern integrated_3PropControl_6bitCmd_100HzIMU_25HzP_rtModel
  *integrated_3PropControl_6bitCmd_100HzIMU_25HzP(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_T *const
  integrated_3PropControl_6bitCmd_100HzIMU_25HzP_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP'
 * '<S1>'   : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Controller'
 * '<S2>'   : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Euler setpoints '
 * '<S3>'   : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements '
 * '<S4>'   : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Scope '
 * '<S5>'   : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Scope 1'
 * '<S6>'   : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) '
 * '<S7>'   : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Controller/Saturation Dynamic'
 * '<S8>'   : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Controller/Saturation Dynamic1'
 * '<S9>'   : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Controller/Saturation Dynamic2'
 * '<S10>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /Scope 2'
 * '<S11>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /Scope 3'
 * '<S12>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double'
 * '<S13>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double1'
 * '<S14>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double2'
 * '<S15>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double3'
 * '<S16>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double4'
 * '<S17>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double5'
 * '<S18>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double6'
 * '<S19>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double7'
 * '<S20>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double/Bit Shift1'
 * '<S21>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double/Bit Shift2'
 * '<S22>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double/Bit Shift3'
 * '<S23>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double/Bit Shift1/bit_shift'
 * '<S24>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double/Bit Shift2/bit_shift'
 * '<S25>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double/Bit Shift3/bit_shift'
 * '<S26>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double1/Bit Shift1'
 * '<S27>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double1/Bit Shift2'
 * '<S28>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double1/Bit Shift3'
 * '<S29>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double1/Bit Shift1/bit_shift'
 * '<S30>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double1/Bit Shift2/bit_shift'
 * '<S31>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double1/Bit Shift3/bit_shift'
 * '<S32>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double2/Bit Shift1'
 * '<S33>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double2/Bit Shift2'
 * '<S34>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double2/Bit Shift3'
 * '<S35>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double2/Bit Shift1/bit_shift'
 * '<S36>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double2/Bit Shift2/bit_shift'
 * '<S37>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double2/Bit Shift3/bit_shift'
 * '<S38>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double3/Bit Shift1'
 * '<S39>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double3/Bit Shift2'
 * '<S40>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double3/Bit Shift3'
 * '<S41>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double3/Bit Shift1/bit_shift'
 * '<S42>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double3/Bit Shift2/bit_shift'
 * '<S43>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double3/Bit Shift3/bit_shift'
 * '<S44>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double4/Bit Shift1'
 * '<S45>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double4/Bit Shift2'
 * '<S46>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double4/Bit Shift3'
 * '<S47>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double4/Bit Shift1/bit_shift'
 * '<S48>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double4/Bit Shift2/bit_shift'
 * '<S49>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double4/Bit Shift3/bit_shift'
 * '<S50>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double5/Bit Shift1'
 * '<S51>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double5/Bit Shift2'
 * '<S52>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double5/Bit Shift3'
 * '<S53>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double5/Bit Shift1/bit_shift'
 * '<S54>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double5/Bit Shift2/bit_shift'
 * '<S55>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double5/Bit Shift3/bit_shift'
 * '<S56>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double6/Bit Shift1'
 * '<S57>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double6/Bit Shift2'
 * '<S58>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double6/Bit Shift3'
 * '<S59>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double6/Bit Shift1/bit_shift'
 * '<S60>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double6/Bit Shift2/bit_shift'
 * '<S61>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double6/Bit Shift3/bit_shift'
 * '<S62>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double7/Bit Shift1'
 * '<S63>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double7/Bit Shift2'
 * '<S64>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double7/Bit Shift3'
 * '<S65>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double7/Bit Shift1/bit_shift'
 * '<S66>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double7/Bit Shift2/bit_shift'
 * '<S67>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Kite Measurements /binary2double7/Bit Shift3/bit_shift'
 * '<S68>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR'
 * '<S69>'  : 'integrated_3PropControl_6bitCmd_100HzIMU_25HzP/Send Receive (v3) /ISR/doWhile'
 */
#endif        /* RTW_HEADER_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_h_ */
