#include "slrtappmapping.h"
#include "./maps/integrated_3PropControl_6bitCmd_100HzIMU_25HzP.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <integrated_3PropControl_6bitCmd_100HzIMU_25HzP> */
		{ /* SignalMapInfo */
			integrated_3PropControl_6bitCmd_100HzIMU_25HzP_BIOMAP,
			integrated_3PropControl_6bitCmd_100HzIMU_25HzP_LBLMAP,
			integrated_3PropControl_6bitCmd_100HzIMU_25HzP_SIDMAP,
			integrated_3PropControl_6bitCmd_100HzIMU_25HzP_SBIO,
			integrated_3PropControl_6bitCmd_100HzIMU_25HzP_SLBL,
			{0,2508},
			167,
		},
		{ /* ParamMapInfo */
			integrated_3PropControl_6bitCmd_100HzIMU_25HzP_PTIDSMAP,
			integrated_3PropControl_6bitCmd_100HzIMU_25HzP_PTNAMESMAP,
			integrated_3PropControl_6bitCmd_100HzIMU_25HzP_SPTMAP,
			{0,243},
			244,
		},
		"integrated_3PropControl_6bitCmd_100HzIMU_25HzP",
		"",
		"integrated_3PropControl_6bitCmd_100HzIMU_25HzP",
		6,
		integrated_3PropControl_6bitCmd_100HzIMU_25HzP_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}