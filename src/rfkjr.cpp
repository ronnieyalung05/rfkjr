/*
 * rfkjr.cpp
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

#include "rfkjr.h"
#include "rtwtypes.h"
#include "rfkjr_types.h"
#include "rfkjr_private.h"
#include <string.h>

/* Block signals (default storage) */
B_rfkjr_T rfkjr_B;

/* Block states (default storage) */
DW_rfkjr_T rfkjr_DW;

/* Real-time model */
RT_MODEL_rfkjr_T rfkjr_M_ = RT_MODEL_rfkjr_T();
RT_MODEL_rfkjr_T *const rfkjr_M = &rfkjr_M_;

/*
 * System initialize for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 *    '<S6>/Enabled Subsystem'
 */
void rfkjr_EnabledSubsystem_Init(B_EnabledSubsystem_rfkjr_T *localB,
  P_EnabledSubsystem_rfkjr_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S8>/In1' incorporates:
   *  Outport: '<S8>/Out1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 *    '<S6>/Enabled Subsystem'
 */
void rfkjr_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_rfkjr_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_rfkjr_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S8>/Enable'
   */
  if (rtu_Enable) {
    /* SignalConversion generated from: '<S8>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
}

/* Model step function */
void rfkjr_step(void)
{
  SL_Bus_rfkjr_std_msgs_Float64 rtb_BusAssignment;
  SL_Bus_rfkjr_std_msgs_Float64 tmp;
  real_T rtb_accel_cmd;
  boolean_T b_varargout_1;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S4>/SourceBlock' */
  b_varargout_1 = Sub_rfkjr_16.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S4>/SourceBlock' */
  rfkjr_EnabledSubsystem(b_varargout_1, &tmp, &rfkjr_B.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe3' */
  /* MATLABSystem: '<S6>/SourceBlock' */
  b_varargout_1 = Sub_rfkjr_24.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S6>/SourceBlock' */
  rfkjr_EnabledSubsystem(b_varargout_1, &tmp, &rfkjr_B.EnabledSubsystem_o);

  /* End of Outputs for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe3' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe1' */
  /* MATLABSystem: '<S5>/SourceBlock' */
  b_varargout_1 = Sub_rfkjr_22.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S5>/SourceBlock' */
  rfkjr_EnabledSubsystem(b_varargout_1, &tmp, &rfkjr_B.EnabledSubsystem_b);

  /* End of Outputs for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe1' */

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  if (rfkjr_B.EnabledSubsystem_b.In1.Data > 0.0) {
    rtb_accel_cmd = 0.05 * rfkjr_B.EnabledSubsystem_b.In1.Data;
  } else {
    rtb_accel_cmd = 0.25 * rfkjr_B.EnabledSubsystem_b.In1.Data;
  }

  rtb_accel_cmd += (rfkjr_B.EnabledSubsystem_o.In1.Data -
                    rfkjr_B.EnabledSubsystem.In1.Data * 2.5) * 0.5;
  if (rfkjr_B.EnabledSubsystem_o.In1.Data > 100.0) {
    if (rfkjr_B.EnabledSubsystem.In1.Data < 20.0) {
      rtb_accel_cmd = (20.0 - rfkjr_B.EnabledSubsystem.In1.Data) * 0.05;
    } else if (rfkjr_B.EnabledSubsystem.In1.Data > 20.0) {
      rtb_accel_cmd = (20.0 - rfkjr_B.EnabledSubsystem.In1.Data) * 0.25;
    } else {
      rtb_accel_cmd = 0.0;
    }
  }

  if (!(rtb_accel_cmd >= -2.0)) {
    rtb_accel_cmd = -2.0;
  }

  if (!(rtb_accel_cmd <= 1.5)) {
    rtb_accel_cmd = 1.5;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */

  /* Saturate: '<S7>/Saturation' */
  if (rtb_accel_cmd > rfkjr_P.Saturation_UpperSat) {
    /* BusAssignment: '<Root>/Bus Assignment' */
    rtb_BusAssignment.Data = rfkjr_P.Saturation_UpperSat;
  } else if (rtb_accel_cmd < rfkjr_P.Saturation_LowerSat) {
    /* BusAssignment: '<Root>/Bus Assignment' */
    rtb_BusAssignment.Data = rfkjr_P.Saturation_LowerSat;
  } else {
    /* BusAssignment: '<Root>/Bus Assignment' */
    rtb_BusAssignment.Data = rtb_accel_cmd;
  }

  /* End of Saturate: '<S7>/Saturation' */

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S3>/SinkBlock' */
  Pub_rfkjr_17.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */
}

/* Model initialize function */
void rfkjr_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset((static_cast<void *>(&rfkjr_B)), 0,
                sizeof(B_rfkjr_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&rfkjr_DW), 0,
                sizeof(DW_rfkjr_T));

  {
    char_T b_zeroDelimTopic_2[18];
    char_T b_zeroDelimTopic[17];
    char_T b_zeroDelimTopic_0[11];
    char_T b_zeroDelimTopic_1[9];
    static const char_T b_zeroDelimTopic_3[17] = "/car/state/vel_x";
    static const char_T b_zeroDelimTopic_4[11] = "/lead_dist";
    static const char_T b_zeroDelimTopic_5[9] = "/rel_vel";
    static const char_T b_zeroDelimTopic_6[18] = "/egocar/cmd_accel";

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S4>/SourceBlock' */
    rfkjr_DW.obj_p.matlabCodegenIsDeleted = false;
    rfkjr_DW.objisempty_o = true;
    rfkjr_DW.obj_p.isInitialized = 1;
    for (int32_T i = 0; i < 17; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_3[i];
    }

    Sub_rfkjr_16.createSubscriber(&b_zeroDelimTopic[0], 1);
    rfkjr_DW.obj_p.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S4>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe3' */
    /* Start for MATLABSystem: '<S6>/SourceBlock' */
    rfkjr_DW.obj_h.matlabCodegenIsDeleted = false;
    rfkjr_DW.objisempty = true;
    rfkjr_DW.obj_h.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_4[i];
    }

    Sub_rfkjr_24.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    rfkjr_DW.obj_h.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S6>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe3' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe1' */
    /* Start for MATLABSystem: '<S5>/SourceBlock' */
    rfkjr_DW.obj_d.matlabCodegenIsDeleted = false;
    rfkjr_DW.objisempty_l = true;
    rfkjr_DW.obj_d.isInitialized = 1;
    for (int32_T i = 0; i < 9; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_5[i];
    }

    Sub_rfkjr_22.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    rfkjr_DW.obj_d.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe1' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S3>/SinkBlock' */
    rfkjr_DW.obj.matlabCodegenIsDeleted = false;
    rfkjr_DW.objisempty_m = true;
    rfkjr_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 18; i++) {
      b_zeroDelimTopic_2[i] = b_zeroDelimTopic_6[i];
    }

    Pub_rfkjr_17.createPublisher(&b_zeroDelimTopic_2[0], 1);
    rfkjr_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S3>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  rfkjr_EnabledSubsystem_Init(&rfkjr_B.EnabledSubsystem,
    &rfkjr_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe3' */
  /* SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem' */
  rfkjr_EnabledSubsystem_Init(&rfkjr_B.EnabledSubsystem_o,
    &rfkjr_P.EnabledSubsystem_o);

  /* End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe3' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  rfkjr_EnabledSubsystem_Init(&rfkjr_B.EnabledSubsystem_b,
    &rfkjr_P.EnabledSubsystem_b);

  /* End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe1' */
}

/* Model terminate function */
void rfkjr_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S4>/SourceBlock' */
  if (!rfkjr_DW.obj_p.matlabCodegenIsDeleted) {
    rfkjr_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S4>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe3' */
  /* Terminate for MATLABSystem: '<S6>/SourceBlock' */
  if (!rfkjr_DW.obj_h.matlabCodegenIsDeleted) {
    rfkjr_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S6>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe3' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S5>/SourceBlock' */
  if (!rfkjr_DW.obj_d.matlabCodegenIsDeleted) {
    rfkjr_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe1' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S3>/SinkBlock' */
  if (!rfkjr_DW.obj.matlabCodegenIsDeleted) {
    rfkjr_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S3>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */
}
