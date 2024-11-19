/*
 * rfkjr_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "rfkjr".
 *
 * Model version              : 1.8
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C++ source code generated on : Mon Nov 18 01:27:32 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rfkjr_private_h_
#define rfkjr_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "rfkjr.h"
#include "rfkjr_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetFirstInitCond
#define rtmSetFirstInitCond(rtm, val)  ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm)        ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern void rfkjr_EnabledSubsystem_Init(B_EnabledSubsystem_rfkjr_T *localB,
  P_EnabledSubsystem_rfkjr_T *localP);
extern void rfkjr_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_rfkjr_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_rfkjr_T *localB);

/* private model entry point functions */
extern void rfkjr_derivatives(void);

#endif                                 /* rfkjr_private_h_ */
