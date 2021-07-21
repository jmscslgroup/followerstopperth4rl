//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: followerstopperth4rl.cpp
//
// Code generated for Simulink model 'followerstopperth4rl'.
//
// Model version                  : 3.46
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Wed Jul 21 13:12:54 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "followerstopperth4rl.h"
#include "followerstopperth4rl_private.h"

// Block signals (default storage)
B_followerstopperth4rl_T followerstopperth4rl_B;

// Block states (default storage)
DW_followerstopperth4rl_T followerstopperth4rl_DW;

// Real-time model
RT_MODEL_followerstopperth4rl_T followerstopperth4rl_M_ =
  RT_MODEL_followerstopperth4rl_T();
RT_MODEL_followerstopperth4rl_T *const followerstopperth4rl_M =
  &followerstopperth4rl_M_;

// Model step function
void followerstopperth4rl_step(void)
{
  SL_Bus_followerstopperth4rl_std_msgs_Float64 b_varargout_2;
  SL_Bus_followerstopperth4rl_std_msgs_Float64 rtb_BusAssignment1_n;
  SL_Bus_followerstopperth4rl_std_msgs_UInt8 rtb_BusAssignment1_a;
  real_T b_idx_0;
  real_T rtb_Subtract1;
  real_T value;
  real_T value_0;
  real_T value_1;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe4'
  // MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Inport: '<S15>/In1'

  b_varargout_1 = Sub_followerstopperth4rl_430.getLatestMessage
    (&followerstopperth4rl_B.BusAssignment1);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S15>/Enable'

  if (b_varargout_1) {
    followerstopperth4rl_B.In1_p = followerstopperth4rl_B.BusAssignment1;
  }

  // End of MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe4'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe5'
  // MATLABSystem: '<S7>/SourceBlock' incorporates:
  //   Inport: '<S16>/In1'

  b_varargout_1 = Sub_followerstopperth4rl_431.getLatestMessage
    (&followerstopperth4rl_B.BusAssignment1);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S16>/Enable'

  if (b_varargout_1) {
    followerstopperth4rl_B.In1_h = followerstopperth4rl_B.BusAssignment1;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe5'

  // Sum: '<Root>/Subtract1'
  rtb_Subtract1 = followerstopperth4rl_B.In1_p.Linear.Z +
    followerstopperth4rl_B.In1_h.Linear.X;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S5>/SourceBlock' incorporates:
  //   Inport: '<S14>/In1'

  b_varargout_1 = Sub_followerstopperth4rl_429.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S14>/Enable'

  if (b_varargout_1) {
    followerstopperth4rl_B.In1_m = b_varargout_2;
  }

  // End of MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe6'
  // MATLABSystem: '<S8>/SourceBlock' incorporates:
  //   Inport: '<S17>/In1'

  b_varargout_1 = Sub_followerstopperth4rl_471.getLatestMessage
    (&followerstopperth4rl_B.BusAssignment1);

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S17>/Enable'

  if (b_varargout_1) {
    followerstopperth4rl_B.In1 = followerstopperth4rl_B.BusAssignment1;
  }

  // End of MATLABSystem: '<S8>/SourceBlock'
  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe6'

  // MATLABSystem: '<S2>/Get Parameter2'
  ParamGet_followerstopperth4rl_448.get_parameter(&value);

  // MATLABSystem: '<S2>/Get Parameter1'
  ParamGet_followerstopperth4rl_447.get_parameter(&followerstopperth4rl_B.x2);

  // MATLABSystem: '<S2>/Get Parameter3'
  ParamGet_followerstopperth4rl_449.get_parameter(&followerstopperth4rl_B.x3);

  // MATLABSystem: '<S2>/Get Parameter4'
  ParamGet_followerstopperth4rl_450.get_parameter(&followerstopperth4rl_B.x1);

  // MATLABSystem: '<S2>/Get Parameter5'
  ParamGet_followerstopperth4rl_463.get_parameter(&value_0);

  // MATLABSystem: '<S2>/Get Parameter6'
  ParamGet_followerstopperth4rl_465.get_parameter(&value_1);

  // MATLAB Function: '<S2>/MATLAB Function2' incorporates:
  //   MATLABSystem: '<S2>/Get Parameter1'
  //   MATLABSystem: '<S2>/Get Parameter2'
  //   MATLABSystem: '<S2>/Get Parameter3'
  //   MATLABSystem: '<S2>/Get Parameter4'
  //   MATLABSystem: '<S2>/Get Parameter5'
  //   MATLABSystem: '<S2>/Get Parameter6'

  b_idx_0 = followerstopperth4rl_B.In1_p.Linear.Z;
  if (followerstopperth4rl_B.In1_p.Linear.Z >= 0.0) {
    b_idx_0 = 0.0;
  }

  b_idx_0 = b_idx_0 * b_idx_0 * 0.5;
  followerstopperth4rl_B.x1 = (b_idx_0 / 1.5 + followerstopperth4rl_B.x1) +
    value * followerstopperth4rl_B.In1_h.Linear.X;
  followerstopperth4rl_B.x2 = (b_idx_0 + value_0) + followerstopperth4rl_B.x2 *
    followerstopperth4rl_B.In1_h.Linear.X;
  followerstopperth4rl_B.x3 = (b_idx_0 / 0.5 + value_1) +
    followerstopperth4rl_B.x3 * followerstopperth4rl_B.In1_h.Linear.X;
  value_1 = rtb_Subtract1;
  if (rtb_Subtract1 < 0.0) {
    value_1 = 0.0;
  }

  if (rtb_Subtract1 > followerstopperth4rl_B.In1.Linear.X) {
    value_1 = followerstopperth4rl_B.In1.Linear.X;
  }

  rtb_Subtract1 = 0.0;
  if (followerstopperth4rl_B.In1_m.Data > followerstopperth4rl_B.x3) {
    rtb_Subtract1 = followerstopperth4rl_B.In1.Linear.X;
  }

  if ((followerstopperth4rl_B.In1_m.Data > followerstopperth4rl_B.x2) &&
      (followerstopperth4rl_B.In1_m.Data <= followerstopperth4rl_B.x3)) {
    rtb_Subtract1 = (followerstopperth4rl_B.In1.Linear.X - value_1) *
      (followerstopperth4rl_B.In1_m.Data - followerstopperth4rl_B.x2) /
      (followerstopperth4rl_B.x3 - followerstopperth4rl_B.x2) + value_1;
  }

  if ((followerstopperth4rl_B.In1_m.Data > followerstopperth4rl_B.x1) &&
      (followerstopperth4rl_B.In1_m.Data <= followerstopperth4rl_B.x2)) {
    rtb_Subtract1 = (followerstopperth4rl_B.In1_m.Data -
                     followerstopperth4rl_B.x1) * value_1 /
      (followerstopperth4rl_B.x2 - followerstopperth4rl_B.x1);
  }

  if (followerstopperth4rl_B.In1_m.Data > followerstopperth4rl_B.x3) {
    // BusAssignment: '<S3>/Bus Assignment1'
    rtb_BusAssignment1_a.Data = 0U;
  } else if ((followerstopperth4rl_B.In1_m.Data > followerstopperth4rl_B.x2) &&
             (followerstopperth4rl_B.In1_m.Data <= followerstopperth4rl_B.x3)) {
    // BusAssignment: '<S3>/Bus Assignment1'
    rtb_BusAssignment1_a.Data = 1U;
  } else if ((followerstopperth4rl_B.In1_m.Data > followerstopperth4rl_B.x1) &&
             (followerstopperth4rl_B.In1_m.Data <= followerstopperth4rl_B.x2)) {
    // BusAssignment: '<S3>/Bus Assignment1'
    rtb_BusAssignment1_a.Data = 2U;
  } else {
    // BusAssignment: '<S3>/Bus Assignment1'
    rtb_BusAssignment1_a.Data = 3U;
  }

  // Outputs for Atomic SubSystem: '<S3>/Publish1'
  // MATLABSystem: '<S13>/SinkBlock'
  Pub_followerstopperth4rl_406.publish(&rtb_BusAssignment1_a);

  // End of Outputs for SubSystem: '<S3>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Constant: '<S1>/Constant'
  //   MATLAB Function: '<S2>/MATLAB Function2'

  followerstopperth4rl_B.BusAssignment1 = followerstopperth4rl_P.Constant_Value;
  followerstopperth4rl_B.BusAssignment1.Linear.X = rtb_Subtract1;
  followerstopperth4rl_B.BusAssignment1.Angular.Z =
    followerstopperth4rl_P.Constant1_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S4>/SinkBlock'
  Pub_followerstopperth4rl_401.publish(&followerstopperth4rl_B.BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<S2>/Bus Assignment1' incorporates:
  //   MATLABSystem: '<S2>/Get Parameter2'

  rtb_BusAssignment1_n.Data = value;

  // Outputs for Atomic SubSystem: '<S2>/Publish1'
  // MATLABSystem: '<S11>/SinkBlock'
  Pub_followerstopperth4rl_452.publish(&rtb_BusAssignment1_n);

  // End of Outputs for SubSystem: '<S2>/Publish1'
}

// Model initialize function
void followerstopperth4rl_initialize(void)
{
  {
    int32_T i;
    char_T b_zeroDelimTopic_4[12];
    char_T b_zeroDelimTopic_1[10];
    char_T b_zeroDelimTopic[8];
    char_T b_zeroDelimTopic_3[7];
    char_T b_zeroDelimTopic_2[6];
    char_T b_zeroDelimTopic_0[4];
    char_T b_zeroDelimName[3];
    static const char_T tmp[7] = { 'r', 'e', 'l', '_', 'v', 'e', 'l' };

    static const char_T tmp_0[9] = { 'l', 'e', 'a', 'd', '_', 'd', 'i', 's', 't'
    };

    static const char_T tmp_1[5] = { 'v', '_', 'r', 'e', 'f' };

    static const char_T tmp_2[6] = { 'r', 'e', 'g', 'i', 'o', 'n' };

    static const char_T tmp_3[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_4[11] = { 't', 'i', 'm', 'h', 'e', 'a', 'd', 'w',
      'a', 'y', '1' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe4'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S15>/Out1' incorporates:
    //   Inport: '<S15>/In1'

    followerstopperth4rl_B.In1_p = followerstopperth4rl_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

    // Start for MATLABSystem: '<S6>/SourceBlock'
    followerstopperth4rl_DW.obj_o.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[7] = '\x00';
    Sub_followerstopperth4rl_430.createSubscriber(&b_zeroDelimTopic[0], 1);
    followerstopperth4rl_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe5'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S16>/Out1' incorporates:
    //   Inport: '<S16>/In1'

    followerstopperth4rl_B.In1_h = followerstopperth4rl_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    followerstopperth4rl_DW.obj_is.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj_is.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 'v';
    b_zeroDelimTopic_0[1] = 'e';
    b_zeroDelimTopic_0[2] = 'l';
    b_zeroDelimTopic_0[3] = '\x00';
    Sub_followerstopperth4rl_431.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    followerstopperth4rl_DW.obj_is.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<Root>/Subscribe5'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S14>/Out1' incorporates:
    //   Inport: '<S14>/In1'

    followerstopperth4rl_B.In1_m = followerstopperth4rl_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'

    // Start for MATLABSystem: '<S5>/SourceBlock'
    followerstopperth4rl_DW.obj_f.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_1[i] = tmp_0[i];
    }

    b_zeroDelimTopic_1[9] = '\x00';
    Sub_followerstopperth4rl_429.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    followerstopperth4rl_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe6'
    // SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S17>/Out1' incorporates:
    //   Inport: '<S17>/In1'

    followerstopperth4rl_B.In1 = followerstopperth4rl_P.Out1_Y0_b;

    // End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem'

    // Start for MATLABSystem: '<S8>/SourceBlock'
    followerstopperth4rl_DW.obj_d.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      b_zeroDelimTopic_2[i] = tmp_1[i];
    }

    b_zeroDelimTopic_2[5] = '\x00';
    Sub_followerstopperth4rl_471.createSubscriber(&b_zeroDelimTopic_2[0], 1);
    followerstopperth4rl_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe6'

    // SystemInitialize for Atomic SubSystem: '<S3>/Publish1'
    // Start for MATLABSystem: '<S13>/SinkBlock'
    followerstopperth4rl_DW.obj_nc.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj_nc.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimTopic_3[i] = tmp_2[i];
    }

    b_zeroDelimTopic_3[6] = '\x00';
    Pub_followerstopperth4rl_406.createPublisher(&b_zeroDelimTopic_3[0], 1);
    followerstopperth4rl_DW.obj_nc.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S13>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S3>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    followerstopperth4rl_DW.obj_c.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic[i] = tmp_3[i];
    }

    b_zeroDelimTopic[7] = '\x00';
    Pub_followerstopperth4rl_401.createPublisher(&b_zeroDelimTopic[0], 1);
    followerstopperth4rl_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<S2>/Publish1'
    // Start for MATLABSystem: '<S11>/SinkBlock'
    followerstopperth4rl_DW.obj_ij.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj_ij.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_4[i] = tmp_4[i];
    }

    b_zeroDelimTopic_4[11] = '\x00';
    Pub_followerstopperth4rl_452.createPublisher(&b_zeroDelimTopic_4[0], 1);
    followerstopperth4rl_DW.obj_ij.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S2>/Publish1'

    // Start for MATLABSystem: '<S2>/Get Parameter2'
    followerstopperth4rl_DW.obj_p.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj_p.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '1';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstopperth4rl_448.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstopperth4rl_448.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstopperth4rl_448.set_initial_value(0.4);
    followerstopperth4rl_DW.obj_p.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter1'
    followerstopperth4rl_DW.obj_n.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj_n.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '2';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstopperth4rl_447.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstopperth4rl_447.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstopperth4rl_447.set_initial_value(1.2);
    followerstopperth4rl_DW.obj_n.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter3'
    followerstopperth4rl_DW.obj_i.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj_i.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '3';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstopperth4rl_449.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstopperth4rl_449.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstopperth4rl_449.set_initial_value(1.8);
    followerstopperth4rl_DW.obj_i.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter4'
    followerstopperth4rl_DW.obj_k.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj_k.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '1';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstopperth4rl_450.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstopperth4rl_450.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstopperth4rl_450.set_initial_value(4.5);
    followerstopperth4rl_DW.obj_k.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter5'
    followerstopperth4rl_DW.obj_e.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj_e.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '2';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstopperth4rl_463.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstopperth4rl_463.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstopperth4rl_463.set_initial_value(5.25);
    followerstopperth4rl_DW.obj_e.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter6'
    followerstopperth4rl_DW.obj.matlabCodegenIsDeleted = false;
    followerstopperth4rl_DW.obj.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '3';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstopperth4rl_465.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstopperth4rl_465.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstopperth4rl_465.set_initial_value(6.0);
    followerstopperth4rl_DW.obj.isSetupComplete = true;
  }
}

// Model terminate function
void followerstopperth4rl_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe4'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!followerstopperth4rl_DW.obj_o.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe4'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe5'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!followerstopperth4rl_DW.obj_is.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj_is.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe5'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  if (!followerstopperth4rl_DW.obj_f.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe6'
  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  if (!followerstopperth4rl_DW.obj_d.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe6'

  // Terminate for MATLABSystem: '<S2>/Get Parameter2'
  if (!followerstopperth4rl_DW.obj_p.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter2'

  // Terminate for MATLABSystem: '<S2>/Get Parameter1'
  if (!followerstopperth4rl_DW.obj_n.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter1'

  // Terminate for MATLABSystem: '<S2>/Get Parameter3'
  if (!followerstopperth4rl_DW.obj_i.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj_i.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter3'

  // Terminate for MATLABSystem: '<S2>/Get Parameter4'
  if (!followerstopperth4rl_DW.obj_k.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter4'

  // Terminate for MATLABSystem: '<S2>/Get Parameter5'
  if (!followerstopperth4rl_DW.obj_e.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter5'

  // Terminate for MATLABSystem: '<S2>/Get Parameter6'
  if (!followerstopperth4rl_DW.obj.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter6'

  // Terminate for Atomic SubSystem: '<S3>/Publish1'
  // Terminate for MATLABSystem: '<S13>/SinkBlock'
  if (!followerstopperth4rl_DW.obj_nc.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj_nc.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S13>/SinkBlock'
  // End of Terminate for SubSystem: '<S3>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S4>/SinkBlock'
  if (!followerstopperth4rl_DW.obj_c.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<S2>/Publish1'
  // Terminate for MATLABSystem: '<S11>/SinkBlock'
  if (!followerstopperth4rl_DW.obj_ij.matlabCodegenIsDeleted) {
    followerstopperth4rl_DW.obj_ij.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/SinkBlock'
  // End of Terminate for SubSystem: '<S2>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
