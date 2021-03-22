/***************************************************************/
/* XCP: No ASAP2 objects found for calibration and measurement */
/***************************************************************/

#include "xcpmdlapi.h"

ModelXcpInfo mxi = {
  0,

  { "", 0 },

  { 0, 0, 0, 0 }
};

ModelXcpInfo* mdlXcp_GetMdlXcpInfo()
{
  return &mxi;
}
