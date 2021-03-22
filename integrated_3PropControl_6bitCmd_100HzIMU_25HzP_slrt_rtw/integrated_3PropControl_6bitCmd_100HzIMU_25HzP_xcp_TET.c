#include <stdio.h>

/** TET record for one model thread */
typedef struct SLRTTET_tag {
  double minTET;                       /* Minimal TET since model starts*/
  double maxTET;                       /* Maximal TET since model starts*/
  double TET;                          /* average TET since model starts*/
} SLRTTET_T;

SLRTTET_T slrtTETViaXCP[2];
void SLRT_update_TET(const int tid, const double mdltime, const double currTET)
{
  if (tid >= 2 ) {
    printf("Error: task ID %d is out of range. This model has %d tasks", tid, 2);
    return;
  }

  if (mdltime > 1.0e-9 ) {             /* > machine epsilon */
    if (currTET < slrtTETViaXCP[tid].minTET ) {
      slrtTETViaXCP[tid].minTET = currTET;
    }

    if (currTET > slrtTETViaXCP[tid].maxTET ) {
      slrtTETViaXCP[tid].maxTET = currTET;
    }

    /* Basic Exponential Smoothing */
#define ALPHA_FACTOR                   (0.01)

    slrtTETViaXCP[tid].TET = slrtTETViaXCP[tid].TET * ( 1.0 - ALPHA_FACTOR )
      + currTET * ALPHA_FACTOR;

#undef ALPHA_FACTOR

  } else {                             /*first time*/
    slrtTETViaXCP[tid].minTET = currTET;
    slrtTETViaXCP[tid].maxTET = currTET;
    slrtTETViaXCP[tid].TET = currTET;
  }
}
