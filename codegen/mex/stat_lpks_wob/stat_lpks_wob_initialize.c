/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * stat_lpks_wob_initialize.c
 *
 * Code generation for function 'stat_lpks_wob_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stat_lpks_wob.h"
#include "stat_lpks_wob_initialize.h"
#include "_coder_stat_lpks_wob_mex.h"
#include "stat_lpks_wob_data.h"

/* Function Definitions */
void stat_lpks_wob_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (stat_lpks_wob_initialize.c) */
