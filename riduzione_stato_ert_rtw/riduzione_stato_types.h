/*
 * riduzione_stato_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "riduzione_stato".
 *
 * Model version              : 2.29
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C source code generated on : Tue May 28 21:00:47 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_riduzione_stato_types_h_
#define RTW_HEADER_riduzione_stato_types_h_
#include "rtwtypes.h"
#include "MW_SVD.h"

/* Custom Type definition for MATLABSystem: '<Root>/IN2A' */
#include "MW_SVD.h"
#ifndef struct_tag_KxFW01GBdhqk5JOEHU3GlD
#define struct_tag_KxFW01GBdhqk5JOEHU3GlD

struct tag_KxFW01GBdhqk5JOEHU3GlD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
};

#endif                                 /* struct_tag_KxFW01GBdhqk5JOEHU3GlD */

#ifndef typedef_mbed_DigitalWrite_riduzione_s_T
#define typedef_mbed_DigitalWrite_riduzione_s_T

typedef struct tag_KxFW01GBdhqk5JOEHU3GlD mbed_DigitalWrite_riduzione_s_T;

#endif                             /* typedef_mbed_DigitalWrite_riduzione_s_T */

#ifndef struct_tag_UndvUYqhBVOhRRpUse3fWF
#define struct_tag_UndvUYqhBVOhRRpUse3fWF

struct tag_UndvUYqhBVOhRRpUse3fWF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_PWM_HANDLE;
};

#endif                                 /* struct_tag_UndvUYqhBVOhRRpUse3fWF */

#ifndef typedef_mbed_PWMOutput_riduzione_stat_T
#define typedef_mbed_PWMOutput_riduzione_stat_T

typedef struct tag_UndvUYqhBVOhRRpUse3fWF mbed_PWMOutput_riduzione_stat_T;

#endif                             /* typedef_mbed_PWMOutput_riduzione_stat_T */

#ifndef struct_tag_sGWFgQTjADKFs5f99dqloH
#define struct_tag_sGWFgQTjADKFs5f99dqloH

struct tag_sGWFgQTjADKFs5f99dqloH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
};

#endif                                 /* struct_tag_sGWFgQTjADKFs5f99dqloH */

#ifndef typedef_soc_stm_QEP_riduzione_stato_T
#define typedef_soc_stm_QEP_riduzione_stato_T

typedef struct tag_sGWFgQTjADKFs5f99dqloH soc_stm_QEP_riduzione_stato_T;

#endif                               /* typedef_soc_stm_QEP_riduzione_stato_T */

/* Parameters (default storage) */
typedef struct P_riduzione_stato_T_ P_riduzione_stato_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_riduzione_stato_T RT_MODEL_riduzione_stato_T;

#endif                                 /* RTW_HEADER_riduzione_stato_types_h_ */
