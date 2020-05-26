#ifndef __c2_flightControlSystem_h__
#define __c2_flightControlSystem_h__

/* Type Definitions */
#ifndef typedef_SFc2_flightControlSystemInstanceStruct
#define typedef_SFc2_flightControlSystemInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c2_sfEvent;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_flightControlSystem;
  uint8_T c2_JITStateAnimation[1];
  uint8_T c2_JITTransitionAnimation[1];
  void *c2_RuntimeVar;
  uint32_T c2_mlFcnLineNumber;
  void *c2_fcnDataPtrs[23];
  char_T *c2_dataNames[23];
  uint32_T c2_numFcnVars;
  uint32_T c2_ssIds[23];
  uint32_T c2_statuses[23];
  void *c2_outMexFcns[23];
  void *c2_inMexFcns[23];
  real32_T c2_pGradient1[19200];
  real32_T c2_pGradient2[19200];
  real32_T c2_b[19200];
  CovrtStateflowInstance *c2_covrtInstance;
  void *c2_fEmlrtCtx;
  real_T *c2_flag;
  boolean_T (*c2_BW)[19200];
  real_T *c2_prev_heading;
  real_T *c2_prev_flag;
  real_T *c2_heading;
  real_T *c2_xb;
  real_T *c2_yb;
} SFc2_flightControlSystemInstanceStruct;

#endif                                 /*typedef_SFc2_flightControlSystemInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_flightControlSystem_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c2_flightControlSystem_get_check_sum(mxArray *plhs[]);
extern void c2_flightControlSystem_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
