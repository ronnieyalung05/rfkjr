/*
 * rfkjr.h
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

#ifndef rfkjr_h_
#define rfkjr_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "rfkjr_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

/* Block signals for system '<S4>/Enabled Subsystem' */
struct B_EnabledSubsystem_rfkjr_T {
  SL_Bus_rfkjr_std_msgs_Float64 In1;   /* '<S9>/In1' */
};

/* Block signals (default storage) */
struct B_rfkjr_T {
  char_T b_zeroDelimTopic[21];
  real_T TransferFcn;                  /* '<S8>/Transfer Fcn' */
  real_T accel_cmd;                    /* '<Root>/MATLAB Function1' */
  B_EnabledSubsystem_rfkjr_T EnabledSubsystem_o;/* '<S7>/Enabled Subsystem' */
  B_EnabledSubsystem_rfkjr_T EnabledSubsystem_a;/* '<S6>/Enabled Subsystem' */
  B_EnabledSubsystem_rfkjr_T EnabledSubsystem_b;/* '<S5>/Enabled Subsystem' */
  B_EnabledSubsystem_rfkjr_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_rfkjr_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S3>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_h;/* '<S7>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_m;/* '<S6>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_d;/* '<S5>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_p;/* '<S4>/SourceBlock' */
  int_T Integrator_IWORK;              /* '<S8>/Integrator' */
  boolean_T objisempty;                /* '<S7>/SourceBlock' */
  boolean_T objisempty_g;              /* '<S6>/SourceBlock' */
  boolean_T objisempty_l;              /* '<S5>/SourceBlock' */
  boolean_T objisempty_o;              /* '<S4>/SourceBlock' */
  boolean_T objisempty_m;              /* '<S3>/SinkBlock' */
};

/* Continuous states (default storage) */
struct X_rfkjr_T {
  real_T Integrator_CSTATE;            /* '<S8>/Integrator' */
  real_T TransferFcn_CSTATE;           /* '<S8>/Transfer Fcn' */
};

/* State derivatives (default storage) */
struct XDot_rfkjr_T {
  real_T Integrator_CSTATE;            /* '<S8>/Integrator' */
  real_T TransferFcn_CSTATE;           /* '<S8>/Transfer Fcn' */
};

/* State disabled  */
struct XDis_rfkjr_T {
  boolean_T Integrator_CSTATE;         /* '<S8>/Integrator' */
  boolean_T TransferFcn_CSTATE;        /* '<S8>/Transfer Fcn' */
};

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
struct ODE3_IntgData {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
};

#endif

/* Parameters for system: '<S4>/Enabled Subsystem' */
struct P_EnabledSubsystem_rfkjr_T_ {
  SL_Bus_rfkjr_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                         * Referenced by: '<S9>/Out1'
                                         */
};

/* Parameters (default storage) */
struct P_rfkjr_T_ {
  SL_Bus_rfkjr_std_msgs_Float64 Constant_Value;/* Computed Parameter: Constant_Value
                                                * Referenced by: '<S1>/Constant'
                                                */
  SL_Bus_rfkjr_std_msgs_Float64 Constant_Value_h;/* Computed Parameter: Constant_Value_h
                                                  * Referenced by: '<S4>/Constant'
                                                  */
  SL_Bus_rfkjr_std_msgs_Float64 Constant_Value_m;/* Computed Parameter: Constant_Value_m
                                                  * Referenced by: '<S5>/Constant'
                                                  */
  SL_Bus_rfkjr_std_msgs_Float64 Constant_Value_a;/* Computed Parameter: Constant_Value_a
                                                  * Referenced by: '<S6>/Constant'
                                                  */
  SL_Bus_rfkjr_std_msgs_Float64 Constant_Value_b;/* Computed Parameter: Constant_Value_b
                                                  * Referenced by: '<S7>/Constant'
                                                  */
  real_T Saturation_UpperSat;          /* Expression: 80
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S8>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S8>/Transfer Fcn'
                                        */
  P_EnabledSubsystem_rfkjr_T EnabledSubsystem_o;/* '<S7>/Enabled Subsystem' */
  P_EnabledSubsystem_rfkjr_T EnabledSubsystem_a;/* '<S6>/Enabled Subsystem' */
  P_EnabledSubsystem_rfkjr_T EnabledSubsystem_b;/* '<S5>/Enabled Subsystem' */
  P_EnabledSubsystem_rfkjr_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_rfkjr_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_rfkjr_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  XDis_rfkjr_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[2];
  real_T odeF[3][2];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    boolean_T firstInitCondFlag;
    time_T tStart;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_rfkjr_T rfkjr_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_rfkjr_T rfkjr_B;

#ifdef __cplusplus

}

#endif

/* Continuous states (default storage) */
extern X_rfkjr_T rfkjr_X;

/* Disabled states (default storage) */
extern XDis_rfkjr_T rfkjr_XDis;

/* Block states (default storage) */
extern struct DW_rfkjr_T rfkjr_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void rfkjr_initialize(void);
  extern void rfkjr_step(void);
  extern void rfkjr_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_rfkjr_T *const rfkjr_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'rfkjr'
 * '<S1>'   : 'rfkjr/Blank Message'
 * '<S2>'   : 'rfkjr/MATLAB Function1'
 * '<S3>'   : 'rfkjr/Publish'
 * '<S4>'   : 'rfkjr/Subscribe'
 * '<S5>'   : 'rfkjr/Subscribe1'
 * '<S6>'   : 'rfkjr/Subscribe2'
 * '<S7>'   : 'rfkjr/Subscribe3'
 * '<S8>'   : 'rfkjr/ego_car'
 * '<S9>'   : 'rfkjr/Subscribe/Enabled Subsystem'
 * '<S10>'  : 'rfkjr/Subscribe1/Enabled Subsystem'
 * '<S11>'  : 'rfkjr/Subscribe2/Enabled Subsystem'
 * '<S12>'  : 'rfkjr/Subscribe3/Enabled Subsystem'
 */
#endif                                 /* rfkjr_h_ */
