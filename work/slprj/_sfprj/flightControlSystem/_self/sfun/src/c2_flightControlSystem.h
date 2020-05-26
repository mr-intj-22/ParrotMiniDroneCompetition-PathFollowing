#ifndef __c2_flightControlSystem_h__
#define __c2_flightControlSystem_h__

/* Type Definitions */
#ifndef struct_emxArray_int32_T_19200
#define struct_emxArray_int32_T_19200

struct emxArray_int32_T_19200
{
  int32_T data[19200];
  int32_T size[1];
};

#endif                                 /*struct_emxArray_int32_T_19200*/

#ifndef typedef_c2_emxArray_int32_T_19200
#define typedef_c2_emxArray_int32_T_19200

typedef struct emxArray_int32_T_19200 c2_emxArray_int32_T_19200;

#endif                                 /*typedef_c2_emxArray_int32_T_19200*/

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
  void *c2_fcnDataPtrs[27];
  char_T *c2_dataNames[27];
  uint32_T c2_numFcnVars;
  uint32_T c2_ssIds[27];
  uint32_T c2_statuses[27];
  void *c2_outMexFcns[27];
  void *c2_inMexFcns[27];
  real_T c2_HoughSpace[2553600];
  real_T c2_x_data[67200];
  real_T c2_b_x_data[67200];
  real_T c2_c_x_data[67200];
  real_T c2_PeakCircles[67200];
  real_T c2_radii_all_data[67200];
  real_T c2_yy_data[67200];
  real_T c2_xx_data[67200];
  real_T c2_b_xx_data[67200];
  real_T c2_b_yy_data[67200];
  int32_T c2_ii_data[67200];
  int32_T c2_jj_data[67200];
  real_T c2_E_y_data[19200];
  real_T c2_E_x_data[19200];
  real_T c2_cc_votes_data[19200];
  real_T c2_varargin_2_data[19200];
  real_T c2_varargin_3_data[19200];
  real_T c2_idxStrongR_data[19200];
  real_T c2_idxStrongC_data[19200];
  real_T c2_r_data[19200];
  real_T c2_c_data[19200];
  real_T c2_badPix_data[19200];
  real_T c2_b_r_data[19200];
  real_T c2_b_c_data[19200];
  real_T c2_b_varargin_2_data[19200];
  real_T c2_c_varargin_2_data[19200];
  real_T c2_locationsVar_data[19200];
  real_T c2_locations_data[19200];
  real_T c2_b_locations_data[19200];
  real_T c2_d_x_data[19200];
  real_T c2_X[14641];
  real_T c2_Y[14641];
  real_T c2_b_X[14641];
  real_T c2_Radii[14641];
  real_T c2_b_Y[14641];
  real_T c2_R_data[14641];
  real_T c2_CC_y_data[14641];
  real_T c2_CC_x_data[14641];
  real_T c2_b_cc_votes_data[14641];
  real_T c2_d_varargin_2_data[14641];
  real_T c2_b_varargin_3_data[14641];
  int32_T c2_b_ii_data[19200];
  int32_T c2_b_jj_data[19200];
  real32_T c2_a[19200];
  real32_T c2_b_a[19200];
  real32_T c2_dx[19200];
  real32_T c2_b_dx[19200];
  real32_T c2_dy[19200];
  real32_T c2_b_dy[19200];
  real32_T c2_c_dx[19200];
  real32_T c2_c_dy[19200];
  real32_T c2_varargin_1[19200];
  real32_T c2_e_x_data[19200];
  int32_T c2_c_ii_data[19200];
  int32_T c2_c_jj_data[19200];
  c2_emxArray_int32_T_19200 c2_jd_emlrtRSI;
  int32_T c2_d_ii_data[19200];
  int32_T c2_b_badPix_data[19200];
  int32_T c2_c_badPix_data[19200];
  int32_T c2_b_data[19200];
  int32_T c2_tmp_data[19200];
  int32_T c2_e_ii_data[14641];
  int32_T c2_d_jj_data[14641];
  boolean_T c2_BW[19200];
  boolean_T c2_b_BW[19200];
  boolean_T c2_edgeimage[19200];
  boolean_T c2_b_edgeimage[19200];
  boolean_T c2_E[19200];
  boolean_T c2_x[19200];
  boolean_T c2_f_x_data[19200];
  real_T c2_g_x_data[67200];
  real_T c2_h_x_data[67200];
  real_T c2_i_x_data[67200];
  real_T c2_j_x_data[67200];
  real_T c2_k_x_data[67200];
  real_T c2_l_x_data[67200];
  real_T c2_m_x_data[67200];
  int32_T c2_idx_data[19200];
  int32_T c2_b_idx_data[19200];
  CovrtStateflowInstance *c2_covrtInstance;
  void *c2_fEmlrtCtx;
  real_T *c2_flag;
  boolean_T (*c2_c_BW)[19200];
  real_T *c2_prev_heading;
  real_T *c2_prev_flag;
  real_T *c2_heading;
  real_T *c2_land;
  real_T *c2_xb;
  real_T *c2_yb;
  real_T *c2_prev_land;
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
