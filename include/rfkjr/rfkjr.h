/*
 * rfkjr.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "rfkjr".
 *
 * Model version              : 1.31
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C++ source code generated on : Wed Nov 20 18:00:21 2024
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
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S4>/Enabled Subsystem' */
struct B_EnabledSubsystem_rfkjr_T {
  SL_Bus_rfkjr_std_msgs_Float64 In1;   /* '<S8>/In1' */
};

/* Block signals (default storage) */
struct B_rfkjr_T {
  B_EnabledSubsystem_rfkjr_T EnabledSubsystem_o;/* '<S6>/Enabled Subsystem' */
  B_EnabledSubsystem_rfkjr_T EnabledSubsystem_b;/* '<S5>/Enabled Subsystem' */
  B_EnabledSubsystem_rfkjr_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_rfkjr_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S3>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_h;/* '<S6>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_d;/* '<S5>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_p;/* '<S4>/SourceBlock' */
  boolean_T objisempty;                /* '<S6>/SourceBlock' */
  boolean_T objisempty_l;              /* '<S5>/SourceBlock' */
  boolean_T objisempty_o;              /* '<S4>/SourceBlock' */
  boolean_T objisempty_m;              /* '<S3>/SinkBlock' */
};

/* Parameters for system: '<S4>/Enabled Subsystem' */
struct P_EnabledSubsystem_rfkjr_T_ {
  SL_Bus_rfkjr_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                         * Referenced by: '<S8>/Out1'
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
  SL_Bus_rfkjr_std_msgs_Float64 Constant_Value_b;/* Computed Parameter: Constant_Value_b
                                                  * Referenced by: '<S6>/Constant'
                                                  */
  real_T Saturation_UpperSat;          /* Expression: 5
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -5
                                        * Referenced by: '<S7>/Saturation'
                                        */
  P_EnabledSubsystem_rfkjr_T EnabledSubsystem_o;/* '<S6>/Enabled Subsystem' */
  P_EnabledSubsystem_rfkjr_T EnabledSubsystem_b;/* '<S5>/Enabled Subsystem' */
  P_EnabledSubsystem_rfkjr_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_rfkjr_T {
  const char_T *errorStatus;
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
 * '<S6>'   : 'rfkjr/Subscribe3'
 * '<S7>'   : 'rfkjr/ego_car'
 * '<S8>'   : 'rfkjr/Subscribe/Enabled Subsystem'
 * '<S9>'   : 'rfkjr/Subscribe1/Enabled Subsystem'
 * '<S10>'  : 'rfkjr/Subscribe3/Enabled Subsystem'
 */
#endif                                 /* rfkjr_h_ */
