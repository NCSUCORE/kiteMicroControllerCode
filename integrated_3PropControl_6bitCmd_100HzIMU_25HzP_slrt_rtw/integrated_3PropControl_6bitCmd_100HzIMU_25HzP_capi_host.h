#ifndef RTW_HEADER_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_cap_host_h_
#define RTW_HEADER_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} integrated_3PropControl_6bitCmd_100HzIMU_25HzP_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void integrated_3PropControl_6bitCmd_100HzIMU_25HzP_host_InitializeDataMapInfo
    (integrated_3PropControl_6bitCmd_100HzIMU_25HzP_host_DataMapInfo_T *dataMap,
     const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif
     /* RTW_HEADER_integrated_3PropControl_6bitCmd_100HzIMU_25HzP_cap_host_h_ */

/* EOF: integrated_3PropControl_6bitCmd_100HzIMU_25HzP_capi_host.h */
