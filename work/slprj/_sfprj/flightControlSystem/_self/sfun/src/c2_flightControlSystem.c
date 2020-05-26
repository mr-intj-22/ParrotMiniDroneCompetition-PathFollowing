/* Include files */

#include "flightControlSystem_sfun.h"
#include "c2_flightControlSystem.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtRSInfo c2_emlrtRSI = { 24, /* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 25,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 45,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 54,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 75,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 77,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 85,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 90,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 41,/* lineNo */
  "find",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 153,/* lineNo */
  "find",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 397,/* lineNo */
  "find",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 43,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 16,/* lineNo */
  "any",                               /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/ops/any.m"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 143,/* lineNo */
  "allOrAny",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 96,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 175,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 208,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 218,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 969,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 936,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_v_emlrtRSI = { 110,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_w_emlrtRSI = { 111,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_x_emlrtRSI = { 112,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_y_emlrtRSI = { 127,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_ab_emlrtRSI = { 144,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_bb_emlrtRSI = { 145,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_cb_emlrtRSI = { 147,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_db_emlrtRSI = { 45,/* lineNo */
  "mpower",                            /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/ops/mpower.m"/* pathName */
};

static emlrtRSInfo c2_eb_emlrtRSI = { 55,/* lineNo */
  "power",                             /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo c2_fb_emlrtRSI = { 20,/* lineNo */
  "sum",                               /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/datafun/sum.m"/* pathName */
};

static emlrtRTEInfo c2_emlrtRTEI = { 41,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo c2_b_emlrtRTEI = { 42,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo c2_c_emlrtRTEI = { 153,/* lineNo */
  13,                                  /* colNo */
  "find",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo c2_d_emlrtRTEI = { 49,/* lineNo */
  37,                                  /* colNo */
  "mean",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/datafun/mean.m"/* pName */
};

static emlrtRTEInfo c2_e_emlrtRTEI = { 45,/* lineNo */
  1,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_f_emlrtRTEI = { 90,/* lineNo */
  46,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_g_emlrtRTEI = { 75,/* lineNo */
  50,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_h_emlrtRTEI = { 85,/* lineNo */
  54,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_i_emlrtRTEI = { 110,/* lineNo */
  23,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_j_emlrtRTEI = { 111,/* lineNo */
  23,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_k_emlrtRTEI = { 118,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_l_emlrtRTEI = { 115,/* lineNo */
  22,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_m_emlrtRTEI = { 119,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_n_emlrtRTEI = { 115,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_o_emlrtRTEI = { 144,/* lineNo */
  47,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_p_emlrtRTEI = { 144,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_q_emlrtRTEI = { 106,/* lineNo */
  37,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_r_emlrtRTEI = { 145,/* lineNo */
  48,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_s_emlrtRTEI = { 145,/* lineNo */
  34,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_t_emlrtRTEI = { 147,/* lineNo */
  23,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_u_emlrtRTEI = { 96,/* lineNo */
  41,                                  /* colNo */
  "sumprod",                           /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/datafun/private/sumprod.m"/* pName */
};

static emlrtBCInfo c2_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  45,                                  /* lineNo */
  13,                                  /* colNo */
  "ps",                                /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_emlrtDCI = { 45, /* lineNo */
  13,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  115,                                 /* lineNo */
  37,                                  /* colNo */
  "points",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c2_v_emlrtRTEI = { 122,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtECInfo c2_emlrtECI = { -1, /* nDims */
  147,                                 /* lineNo */
  23,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtDCInfo c2_b_emlrtDCI = { 118,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_c_emlrtDCI = { 118,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c2_d_emlrtDCI = { 119,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_e_emlrtDCI = { 119,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c2_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  123,                                 /* lineNo */
  19,                                  /* colNo */
  "points",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_f_emlrtDCI = { 123,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  123,                                 /* lineNo */
  40,                                  /* colNo */
  "points",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_g_emlrtDCI = { 123,/* lineNo */
  40,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  124,                                 /* lineNo */
  19,                                  /* colNo */
  "points",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_h_emlrtDCI = { 124,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  124,                                 /* lineNo */
  40,                                  /* colNo */
  "points",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_i_emlrtDCI = { 124,/* lineNo */
  40,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  27,                                  /* colNo */
  "norms",                             /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_j_emlrtDCI = { 144,/* lineNo */
  27,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  13,                                  /* colNo */
  "norms",                             /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_k_emlrtDCI = { 127,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  27,                                  /* colNo */
  "angles",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_l_emlrtDCI = { 145,/* lineNo */
  27,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_j_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  139,                                 /* lineNo */
  21,                                  /* colNo */
  "angles",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_m_emlrtDCI = { 139,/* lineNo */
  21,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_k_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  21,                                  /* colNo */
  "angles",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_n_emlrtDCI = { 137,/* lineNo */
  21,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_l_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  21,                                  /* colNo */
  "angles",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_o_emlrtDCI = { 133,/* lineNo */
  21,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  131,                                 /* lineNo */
  21,                                  /* colNo */
  "angles",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_p_emlrtDCI = { 131,/* lineNo */
  21,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static const char_T c2_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
  'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

static const char_T c2_cv1[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
  'E', 'r', 'r', 'o', 'r' };

/* Function Declarations */
static void initialize_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance);
static void enable_c2_flightControlSystem(SFc2_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance);
static void c2_update_jit_animation_state_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance);
static void c2_do_animation_call_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const mxArray *c2_st);
static void finalize_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance);
static void c2_chartstep_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c2_sp);
static void initSimStructsc2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance);
static real_T c2_mean(SFc2_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c2_sp, real_T c2_x_data[], int32_T
                      c2_x_size[2]);
static void c2_check_forloop_overflow_error
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c2_sp);
static void c2_indexShapeCheck(SFc2_flightControlSystemInstanceStruct
  *chartInstance);
static real_T c2_combineVectorElements(SFc2_flightControlSystemInstanceStruct
  *chartInstance, real_T c2_x_data[], int32_T c2_x_size[1]);
static void c2_find_circle(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_b_BW[19200]);
static void c2_edge(SFc2_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c2_sp, boolean_T c2_varargin_1[19200], boolean_T
                    c2_varargout_1[19200]);
static real_T c2_sum(SFc2_flightControlSystemInstanceStruct *chartInstance,
                     real32_T c2_x[19200]);
static real_T c2_sqrt(SFc2_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c2_sp, real_T c2_x);
static void c2_get_heading(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_p, real_T c2_points_data[], int32_T
  c2_points_size[2], real_T c2_b_prev_heading, real_T *c2_b_heading, real_T
  *c2_b_xb, real_T *c2_b_yb);
static real_T c2_b_sum(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_x_data[], int32_T c2_x_size[1]);
static real_T c2_emlrt_marshallIn(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c2_b_flag, const char_T *c2_identifier);
static real_T c2_b_emlrt_marshallIn(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static uint8_T c2_c_emlrt_marshallIn(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_flightControlSystem, const
  char_T *c2_identifier);
static uint8_T c2_d_emlrt_marshallIn(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static const mxArray *c2_chart_data_browse_helper
  (SFc2_flightControlSystemInstanceStruct *chartInstance, int32_T c2_ssIdNumber);
static void c2_b_sqrt(SFc2_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c2_sp, real_T *c2_x);
static int32_T c2__s32_d_(SFc2_flightControlSystemInstanceStruct *chartInstance,
  real_T c2_b_b, int32_T c2_EMLOvCount_src_loc, uint32_T c2_ssid_src_loc,
  int32_T c2_offset_src_loc, int32_T c2_length_src_loc);
static void init_dsm_address_info(SFc2_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc2_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c2_st, "Image_Toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_is_active_c2_flightControlSystem = 0U;
}

static void initialize_params_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_flightControlSystem(SFc2_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_jit_animation_state_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(5, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", chartInstance->c2_flag, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", chartInstance->c2_heading, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", chartInstance->c2_xb, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", chartInstance->c2_yb, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c2_y, 4, c2_f_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  *chartInstance->c2_flag = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 0)), "flag");
  *chartInstance->c2_heading = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 1)), "heading");
  *chartInstance->c2_xb = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 2)), "xb");
  *chartInstance->c2_yb = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 3)), "yb");
  chartInstance->c2_is_active_c2_flightControlSystem = c2_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 4)),
     "is_active_c2_flightControlSystem");
  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static void finalize_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void sf_gateway_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c2_i;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U,
                    *chartInstance->c2_prev_flag);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U,
                    *chartInstance->c2_prev_heading);
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U, (real_T)
                      (*chartInstance->c2_BW)[c2_i]);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  c2_chartstep_c2_flightControlSystem(chartInstance, &c2_st);
  c2_do_animation_call_c2_flightControlSystem(chartInstance);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U, *chartInstance->c2_flag);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 4U,
                    *chartInstance->c2_heading);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 5U, *chartInstance->c2_xb);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 6U, *chartInstance->c2_yb);
}

static void mdl_start_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const int32_T c2_condTxtStartIdx[1] = { 1009 };

  static const int32_T c2_condTxtEndIdx[1] = { 1028 };

  static const int32_T c2_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_b_condTxtStartIdx[1] = { 1069 };

  static const int32_T c2_b_condTxtEndIdx[1] = { 1087 };

  static const int32_T c2_b_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_c_condTxtStartIdx[1] = { 1130 };

  static const int32_T c2_c_condTxtEndIdx[1] = { 1146 };

  static const int32_T c2_c_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_d_condTxtStartIdx[1] = { 1185 };

  static const int32_T c2_d_condTxtEndIdx[1] = { 1202 };

  static const int32_T c2_d_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_e_condTxtStartIdx[1] = { 1553 };

  static const int32_T c2_e_condTxtEndIdx[1] = { 1561 };

  static const int32_T c2_e_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_f_condTxtStartIdx[4] = { 2078, 2102, 2141, 2164 };

  static const int32_T c2_f_condTxtEndIdx[4] = { 2097, 2118, 2159, 2181 };

  static const int32_T c2_f_postfixPredicateTree[11] = { 0, -1, 1, -1, -3, 2, -1,
    3, -1, -3, -2 };

  static const int32_T c2_g_condTxtStartIdx[1] = { 2348 };

  static const int32_T c2_g_condTxtEndIdx[1] = { 2356 };

  static const int32_T c2_g_postfixPredicateTree[2] = { 0, -1 };

  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    14U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 4U, 0U, 16U, 0U,
                  0U, 0U, 1U, 0U, 10U, 7U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 4496);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, "find_circle",
                     2786, -1, 2932);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, "bias", 2938,
                     -1, 3028);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, "get_heading",
                     3034, -1, 4492);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 1005, 1028, -1,
                    1064);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 1065, 1087, -1,
                    1125);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 1126, 1146, -1,
                    1180);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 1181, 1202, -1,
                    1239);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 4U, 1372, 1381,
                    1397, 2780);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 5U, 1397, 1410,
                    1835, 2780);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 6U, 1549, 1561,
                    1619, 1834);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 7U, 1680, 1698, -1,
                    1826);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 8U, 1835, 1848,
                    2641, 2780);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 9U, 2073, 2182,
                    2265, 2640);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 10U, 2344, 2356,
                    2462, 2632);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 11U, 3281, 3289, -1,
                    3344);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 12U, 3776, 3788,
                    3977, 4175);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 13U, 3805, 3825,
                    3892, 3964);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 14U, 3998, 4023,
                    4090, 4159);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 15U, 4401, 4436, -1,
                    4484);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 3462, 3476,
                     4187);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 1008, 1028,
                      1U, 0U, c2_condTxtStartIdx, c2_condTxtEndIdx, 2U,
                      c2_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 1068, 1087,
                      1U, 1U, c2_b_condTxtStartIdx, c2_b_condTxtEndIdx, 2U,
                      c2_b_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 1129, 1146,
                      1U, 2U, c2_c_condTxtStartIdx, c2_c_condTxtEndIdx, 2U,
                      c2_c_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 1184, 1202,
                      1U, 3U, c2_d_condTxtStartIdx, c2_d_condTxtEndIdx, 2U,
                      c2_d_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 4U, 1552, 1561,
                      1U, 4U, c2_e_condTxtStartIdx, c2_e_condTxtEndIdx, 2U,
                      c2_e_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 5U, 2076, 2182,
                      4U, 5U, c2_f_condTxtStartIdx, c2_f_condTxtEndIdx, 11U,
                      c2_f_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 6U, 2347, 2356,
                      1U, 9U, c2_g_condTxtStartIdx, c2_g_condTxtEndIdx, 2U,
                      c2_g_postfixPredicateTree);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 1375,
    1381, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 1404,
    1410, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 1683,
    1698, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 1842,
    1848, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 4U, 3284,
    3289, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 5U, 3779,
    3788, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 6U, 3808,
    3825, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 7U, 4001,
    4023, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 8U, 4404,
    4436, -1, 4U);
}

static void c2_chartstep_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c2_sp)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  int32_T c2_i;
  real_T c2_b_prev_heading;
  boolean_T c2_b_BW[19200];
  real_T c2_b_prev_flag;
  real_T c2_x;
  real_T c2_b_x;
  real_T c2_c_x;
  real_T c2_b_heading;
  real_T c2_b_xb;
  real_T c2_b_yb;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  boolean_T c2_top[160];
  int32_T c2_i4;
  int32_T c2_i5;
  boolean_T c2_bottom[160];
  int32_T c2_i6;
  boolean_T c2_right[120];
  int32_T c2_i7;
  boolean_T c2_left[120];
  int32_T c2_idx;
  int32_T c2_ii_size[2];
  int32_T c2_ii;
  boolean_T c2_exitg1;
  boolean_T c2_b_b;
  int32_T c2_b_ii;
  int32_T c2_i8;
  int32_T c2_ii_data[160];
  int32_T c2_i_size[2];
  int32_T c2_loop_ub;
  int32_T c2_i9;
  real_T c2_i_data[160];
  real_T c2_bottom_point;
  int32_T c2_i10;
  int32_T c2_b_idx;
  int32_T c2_c_ii;
  boolean_T c2_b1;
  int32_T c2_d_ii;
  int32_T c2_i11;
  int32_T c2_b_ii_data[120];
  int32_T c2_b_ii_size[1];
  int32_T c2_b_i_size[1];
  int32_T c2_b_loop_ub;
  int32_T c2_i12;
  real_T c2_b_i_data[120];
  boolean_T c2_b2;
  const mxArray *c2_y = NULL;
  int32_T c2_c_i_size[1];
  int32_T c2_c_loop_ub;
  const mxArray *c2_b_y = NULL;
  int32_T c2_i13;
  real_T c2_left_point;
  real_T c2_c_i_data[120];
  int32_T c2_i14;
  int32_T c2_c_idx;
  int32_T c2_e_ii;
  boolean_T c2_b3;
  int32_T c2_f_ii;
  int32_T c2_i15;
  int32_T c2_d_loop_ub;
  int32_T c2_i16;
  real_T c2_top_point;
  int32_T c2_i17;
  int32_T c2_d_idx;
  int32_T c2_g_ii;
  boolean_T c2_b4;
  int32_T c2_h_ii;
  int32_T c2_i18;
  int32_T c2_e_loop_ub;
  int32_T c2_i19;
  boolean_T c2_b5;
  const mxArray *c2_c_y = NULL;
  int32_T c2_d_i_size[1];
  int32_T c2_f_loop_ub;
  const mxArray *c2_d_y = NULL;
  int32_T c2_i20;
  real_T c2_right_point;
  real_T c2_d_i_data[120];
  int32_T c2_i21;
  real_T c2_d_x;
  real_T c2_ps[8];
  boolean_T c2_c_b;
  real_T c2_e_x;
  boolean_T c2_d_b;
  real_T c2_f_x;
  boolean_T c2_e_b;
  real_T c2_g_x;
  boolean_T c2_f_b;
  int32_T c2_i22;
  boolean_T c2_g_b[8];
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_iy;
  boolean_T c2_bv[4];
  int32_T c2_b_i1;
  int32_T c2_b_i2;
  int32_T c2_j;
  int32_T c2_trueCount;
  int32_T c2_a;
  int32_T c2_b_i;
  int32_T c2_b_a;
  int32_T c2_tmp_size[1];
  int32_T c2_c_a;
  int32_T c2_partialTrueCount;
  int32_T c2_c_i;
  int32_T c2_d_a;
  int32_T c2_h_b;
  int32_T c2_points_size[2];
  int32_T c2_e_a;
  int32_T c2_tmp_data[4];
  int32_T c2_i_b;
  int32_T c2_i25;
  boolean_T c2_overflow;
  real_T c2_p;
  int32_T c2_g_loop_ub;
  int32_T c2_i26;
  real_T c2_b_flag;
  real_T c2_d;
  int32_T c2_ix;
  int32_T c2_b_points_size[2];
  real_T c2_h_x;
  int32_T c2_i27;
  boolean_T c2_j_b;
  real_T c2_points_data[8];
  int32_T c2_h_loop_ub;
  boolean_T c2_guard1 = false;
  int32_T c2_i28;
  boolean_T c2_guard2 = false;
  boolean_T c2_guard3 = false;
  boolean_T c2_b6;
  real_T c2_b_points_data[10];
  real_T c2_c_heading;
  real_T c2_c_xb;
  real_T c2_c_yb;
  real_T c2_i_x;
  real_T c2_j_x;
  boolean_T c2_k_b;
  boolean_T c2_l_b;
  real_T c2_k_x;
  real_T c2_l_x;
  boolean_T c2_m_b;
  boolean_T c2_n_b;
  boolean_T c2_o_b;
  real_T c2_e_y;
  real_T c2_m_x;
  real_T c2_n_x;
  int32_T c2_c_points_size[2];
  boolean_T c2_p_b;
  boolean_T c2_q_b;
  boolean_T c2_r_b;
  int32_T c2_i_loop_ub;
  real_T c2_f_y;
  int32_T c2_i29;
  real_T c2_c_points_data[10];
  real_T c2_d_heading;
  real_T c2_d_xb;
  real_T c2_d_yb;
  int32_T c2_d_points_size[2];
  int32_T c2_j_loop_ub;
  int32_T c2_i30;
  real_T c2_d_points_data[10];
  real_T c2_e_heading;
  real_T c2_e_xb;
  real_T c2_e_yb;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    c2_b_BW[c2_i] = (*chartInstance->c2_BW)[c2_i];
  }

  c2_b_prev_heading = *chartInstance->c2_prev_heading;
  c2_b_prev_flag = *chartInstance->c2_prev_flag;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  c2_x = c2_b_prev_heading;
  c2_b_x = c2_x;
  c2_c_x = c2_b_x;
  c2_b_prev_heading = muDoubleScalarRem(c2_c_x, 6.2831853071795862);
  c2_b_heading = c2_b_prev_heading;
  c2_b_xb = 0.0;
  c2_b_yb = 0.0;
  c2_i1 = 0;
  for (c2_i2 = 0; c2_i2 < 160; c2_i2++) {
    c2_top[c2_i2] = c2_b_BW[c2_i1];
    c2_i1 += 120;
  }

  c2_i3 = 0;
  for (c2_i4 = 0; c2_i4 < 160; c2_i4++) {
    c2_bottom[c2_i4] = c2_b_BW[c2_i3 + 119];
    c2_i3 += 120;
  }

  for (c2_i5 = 0; c2_i5 < 120; c2_i5++) {
    c2_right[c2_i5] = c2_b_BW[c2_i5 + 19080];
  }

  for (c2_i6 = 0; c2_i6 < 120; c2_i6++) {
    c2_left[c2_i6] = c2_b_BW[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 160; c2_i7++) {
    c2_bottom[c2_i7] = !c2_bottom[c2_i7];
  }

  c2_idx = 0;
  c2_ii_size[0] = 1;
  c2_ii = 1;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_ii - 1 < 160)) {
    c2_b_ii = c2_ii;
    if (c2_bottom[c2_b_ii - 1]) {
      c2_idx++;
      c2_ii_data[c2_idx - 1] = c2_b_ii;
      if (c2_idx >= 160) {
        c2_exitg1 = true;
      } else {
        c2_ii++;
      }
    } else {
      c2_ii++;
    }
  }

  c2_b_b = (1 > c2_idx);
  if (c2_b_b) {
    c2_i8 = 0;
  } else {
    c2_i8 = c2_idx;
  }

  c2_ii_size[1] = c2_i8;
  c2_i_size[0] = 1;
  c2_i_size[1] = c2_ii_size[1];
  c2_loop_ub = c2_ii_size[0] * c2_ii_size[1] - 1;
  for (c2_i9 = 0; c2_i9 <= c2_loop_ub; c2_i9++) {
    c2_i_data[c2_i9] = (real_T)c2_ii_data[c2_i9];
  }

  c2_st.site = &c2_emlrtRSI;
  c2_bottom_point = c2_mean(chartInstance, &c2_st, c2_i_data, c2_i_size);
  c2_st.site = &c2_emlrtRSI;
  for (c2_i10 = 0; c2_i10 < 120; c2_i10++) {
    c2_left[c2_i10] = !c2_left[c2_i10];
  }

  c2_b_st.site = &c2_i_emlrtRSI;
  c2_c_st.site = &c2_j_emlrtRSI;
  c2_b_idx = 0;
  c2_c_ii = 1;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_c_ii - 1 < 120)) {
    c2_d_ii = c2_c_ii;
    if (c2_left[c2_d_ii - 1]) {
      c2_b_idx++;
      c2_b_ii_data[c2_b_idx - 1] = c2_d_ii;
      if (c2_b_idx >= 120) {
        c2_exitg1 = true;
      } else {
        c2_c_ii++;
      }
    } else {
      c2_c_ii++;
    }
  }

  c2_b1 = (1 > c2_b_idx);
  if (c2_b1) {
    c2_i11 = 0;
  } else {
    c2_i11 = c2_b_idx;
  }

  c2_d_st.site = &c2_k_emlrtRSI;
  c2_indexShapeCheck(chartInstance);
  c2_b_ii_size[0] = c2_i11;
  c2_b_i_size[0] = c2_b_ii_size[0];
  c2_b_loop_ub = c2_b_ii_size[0] - 1;
  for (c2_i12 = 0; c2_i12 <= c2_b_loop_ub; c2_i12++) {
    c2_b_i_data[c2_i12] = (real_T)c2_b_ii_data[c2_i12];
  }

  c2_st.site = &c2_emlrtRSI;
  if ((c2_b_i_size[0] == 1) || ((real_T)c2_b_i_size[0] != 1.0)) {
    c2_b2 = true;
  } else {
    c2_b2 = false;
  }

  if (!c2_b2) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_b_y)));
  }

  c2_c_i_size[0] = c2_b_i_size[0];
  c2_c_loop_ub = c2_b_i_size[0] - 1;
  for (c2_i13 = 0; c2_i13 <= c2_c_loop_ub; c2_i13++) {
    c2_c_i_data[c2_i13] = c2_b_i_data[c2_i13];
  }

  c2_left_point = c2_combineVectorElements(chartInstance, c2_c_i_data,
    c2_c_i_size) / (real_T)c2_b_i_size[0];
  for (c2_i14 = 0; c2_i14 < 160; c2_i14++) {
    c2_top[c2_i14] = !c2_top[c2_i14];
  }

  c2_c_idx = 0;
  c2_ii_size[0] = 1;
  c2_e_ii = 1;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_e_ii - 1 < 160)) {
    c2_f_ii = c2_e_ii;
    if (c2_top[c2_f_ii - 1]) {
      c2_c_idx++;
      c2_ii_data[c2_c_idx - 1] = c2_f_ii;
      if (c2_c_idx >= 160) {
        c2_exitg1 = true;
      } else {
        c2_e_ii++;
      }
    } else {
      c2_e_ii++;
    }
  }

  c2_b3 = (1 > c2_c_idx);
  if (c2_b3) {
    c2_i15 = 0;
  } else {
    c2_i15 = c2_c_idx;
  }

  c2_ii_size[1] = c2_i15;
  c2_i_size[0] = 1;
  c2_i_size[1] = c2_ii_size[1];
  c2_d_loop_ub = c2_ii_size[0] * c2_ii_size[1] - 1;
  for (c2_i16 = 0; c2_i16 <= c2_d_loop_ub; c2_i16++) {
    c2_i_data[c2_i16] = (real_T)c2_ii_data[c2_i16];
  }

  c2_st.site = &c2_b_emlrtRSI;
  c2_top_point = c2_mean(chartInstance, &c2_st, c2_i_data, c2_i_size);
  c2_st.site = &c2_b_emlrtRSI;
  for (c2_i17 = 0; c2_i17 < 120; c2_i17++) {
    c2_right[c2_i17] = !c2_right[c2_i17];
  }

  c2_b_st.site = &c2_i_emlrtRSI;
  c2_c_st.site = &c2_j_emlrtRSI;
  c2_d_idx = 0;
  c2_g_ii = 1;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_g_ii - 1 < 120)) {
    c2_h_ii = c2_g_ii;
    if (c2_right[c2_h_ii - 1]) {
      c2_d_idx++;
      c2_b_ii_data[c2_d_idx - 1] = c2_h_ii;
      if (c2_d_idx >= 120) {
        c2_exitg1 = true;
      } else {
        c2_g_ii++;
      }
    } else {
      c2_g_ii++;
    }
  }

  c2_b4 = (1 > c2_d_idx);
  if (c2_b4) {
    c2_i18 = 0;
  } else {
    c2_i18 = c2_d_idx;
  }

  c2_d_st.site = &c2_k_emlrtRSI;
  c2_indexShapeCheck(chartInstance);
  c2_b_ii_size[0] = c2_i18;
  c2_b_i_size[0] = c2_b_ii_size[0];
  c2_e_loop_ub = c2_b_ii_size[0] - 1;
  for (c2_i19 = 0; c2_i19 <= c2_e_loop_ub; c2_i19++) {
    c2_b_i_data[c2_i19] = (real_T)c2_b_ii_data[c2_i19];
  }

  c2_st.site = &c2_b_emlrtRSI;
  if ((c2_b_i_size[0] == 1) || ((real_T)c2_b_i_size[0] != 1.0)) {
    c2_b5 = true;
  } else {
    c2_b5 = false;
  }

  if (!c2_b5) {
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_c_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_d_y)));
  }

  c2_d_i_size[0] = c2_b_i_size[0];
  c2_f_loop_ub = c2_b_i_size[0] - 1;
  for (c2_i20 = 0; c2_i20 <= c2_f_loop_ub; c2_i20++) {
    c2_d_i_data[c2_i20] = c2_b_i_data[c2_i20];
  }

  c2_right_point = c2_combineVectorElements(chartInstance, c2_d_i_data,
    c2_d_i_size) / (real_T)c2_b_i_size[0];
  for (c2_i21 = 0; c2_i21 < 8; c2_i21++) {
    c2_ps[c2_i21] = rtNaN;
  }

  c2_d_x = c2_bottom_point;
  c2_c_b = muDoubleScalarIsNaN(c2_d_x);
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 0, covrtEmlMcdcEval
                     (chartInstance->c2_covrtInstance, 4U, 0, 0,
                      !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0,
         0, c2_c_b)))) {
    c2_ps[0] = c2_bottom_point;
    c2_ps[4] = 1.0;
  }

  c2_e_x = c2_right_point;
  c2_d_b = muDoubleScalarIsNaN(c2_e_x);
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 1, covrtEmlMcdcEval
                     (chartInstance->c2_covrtInstance, 4U, 0, 1,
                      !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0,
         1, c2_d_b)))) {
    c2_ps[1] = 160.0;
    c2_ps[5] = 120.0 - c2_right_point;
  }

  c2_f_x = c2_top_point;
  c2_e_b = muDoubleScalarIsNaN(c2_f_x);
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 2, covrtEmlMcdcEval
                     (chartInstance->c2_covrtInstance, 4U, 0, 2,
                      !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0,
         2, c2_e_b)))) {
    c2_ps[2] = c2_top_point;
    c2_ps[6] = 120.0;
  }

  c2_g_x = c2_left_point;
  c2_f_b = muDoubleScalarIsNaN(c2_g_x);
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 3, covrtEmlMcdcEval
                     (chartInstance->c2_covrtInstance, 4U, 0, 3,
                      !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0,
         3, c2_f_b)))) {
    c2_ps[3] = 1.0;
    c2_ps[7] = 120.0 - c2_left_point;
  }

  for (c2_i22 = 0; c2_i22 < 8; c2_i22++) {
    c2_g_b[c2_i22] = muDoubleScalarIsNaN(c2_ps[c2_i22]);
  }

  c2_st.site = &c2_c_emlrtRSI;
  for (c2_i23 = 0; c2_i23 < 8; c2_i23++) {
    c2_g_b[c2_i23] = !c2_g_b[c2_i23];
  }

  c2_b_st.site = &c2_m_emlrtRSI;
  for (c2_i24 = 0; c2_i24 < 4; c2_i24++) {
    c2_bv[c2_i24] = false;
  }

  c2_iy = -1;
  c2_b_i1 = 0;
  c2_b_i2 = 4;
  for (c2_j = 0; c2_j < 4; c2_j++) {
    c2_a = c2_b_i1 + 1;
    c2_b_i1 = c2_a;
    c2_b_a = c2_b_i2 + 1;
    c2_b_i2 = c2_b_a;
    c2_c_a = c2_iy + 1;
    c2_iy = c2_c_a;
    c2_c_st.site = &c2_n_emlrtRSI;
    c2_d_a = c2_b_i1;
    c2_h_b = c2_b_i2;
    c2_e_a = c2_d_a;
    c2_i_b = c2_h_b;
    if (c2_e_a > c2_i_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_i_b > 2147483643);
    }

    if (c2_overflow) {
      c2_d_st.site = &c2_o_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    c2_ix = c2_b_i1;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_ix <= c2_b_i2)) {
      if (!c2_g_b[c2_ix - 1]) {
        c2_b6 = true;
      } else {
        c2_b6 = false;
      }

      if (!c2_b6) {
        c2_bv[c2_iy] = true;
        c2_exitg1 = true;
      } else {
        c2_ix += 4;
      }
    }
  }

  c2_trueCount = 0;
  c2_b_i = 0;
  while (c2_b_i <= 3) {
    if (c2_bv[c2_b_i]) {
      c2_trueCount++;
    }

    c2_b_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_tmp_size[0] = c2_trueCount;
  c2_partialTrueCount = 0;
  c2_c_i = 0;
  while (c2_c_i <= 3) {
    if (c2_bv[c2_c_i]) {
      c2_tmp_data[c2_partialTrueCount] = c2_c_i + 1;
      c2_partialTrueCount++;
    }

    c2_c_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_points_size[0] = c2_tmp_size[0];
  c2_points_size[1] = 2;
  for (c2_i25 = 0; c2_i25 < 2; c2_i25++) {
    c2_g_loop_ub = c2_tmp_size[0] - 1;
    for (c2_i26 = 0; c2_i26 <= c2_g_loop_ub; c2_i26++) {
      c2_d = (real_T)c2_tmp_data[c2_i26];
      c2_i27 = (int32_T)emlrtIntegerCheckR2012b(c2_d, &c2_emlrtDCI, c2_sp);
      c2_points_data[c2_i26 + c2_points_size[0] * c2_i25] = c2_ps
        [(emlrtDynamicBoundsCheckR2012b(c2_i27, 1, 4, &c2_emlrtBCI, c2_sp) +
          (c2_i25 << 2)) - 1];
    }
  }

  c2_p = (real_T)c2_points_size[0];
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 4,
                     covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance,
        4U, 0U, 0U, c2_p, 0.0, -1, 0U, c2_p == 0.0))) {
    c2_b_flag = -1.0;
  } else if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 5,
              covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U, 0U,
    1U, c2_p, 1.0, -1, 0U, c2_p == 1.0))) {
    c2_st.site = &c2_d_emlrtRSI;
    c2_find_circle(chartInstance, &c2_st, c2_b_BW);
    covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 4, true);
    covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 4, false);
    covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 6, false);
    c2_b_flag = 1.0;
    if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 7,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c2_covrtInstance, 4U, 0U, 2U,
                        c2_b_prev_flag, -1.0, -1, 0U, c2_b_prev_flag == -1.0)))
    {
      c2_j_x = c2_top_point;
      c2_l_b = muDoubleScalarIsNaN(c2_j_x);
      c2_k_x = c2_left_point;
      c2_m_b = muDoubleScalarIsNaN(c2_k_x);
      c2_o_b = !c2_m_b;
      c2_e_y = 2.0 * (real_T)c2_o_b;
      c2_n_x = c2_bottom_point;
      c2_q_b = muDoubleScalarIsNaN(c2_n_x);
      c2_r_b = !c2_q_b;
      c2_f_y = 3.0 * (real_T)c2_r_b;
      c2_b_heading = 1.5707963267948966 * (((real_T)!c2_l_b + c2_e_y) + c2_f_y);
    }
  } else if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 8,
              covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U, 0U,
    3U, c2_p, 2.0, -1, 0U, c2_p == 2.0))) {
    c2_h_x = c2_bottom_point;
    c2_j_b = muDoubleScalarIsNaN(c2_h_x);
    c2_guard1 = false;
    c2_guard2 = false;
    c2_guard3 = false;
    if (!covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 5, c2_j_b)) {
      c2_i_x = c2_top_point;
      c2_k_b = muDoubleScalarIsNaN(c2_i_x);
      if (!covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 6, c2_k_b))
      {
        c2_guard2 = true;
      } else {
        c2_guard3 = true;
      }
    } else {
      c2_guard3 = true;
    }

    if (c2_guard3) {
      c2_l_x = c2_right_point;
      c2_n_b = muDoubleScalarIsNaN(c2_l_x);
      if (!covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 7, c2_n_b))
      {
        c2_m_x = c2_left_point;
        c2_p_b = muDoubleScalarIsNaN(c2_m_x);
        if (!covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 8, c2_p_b))
        {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      } else {
        c2_guard1 = true;
      }
    }

    if (c2_guard2) {
      covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 5, true);
      covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 9, true);
      c2_c_points_size[0] = c2_points_size[0];
      c2_c_points_size[1] = 2;
      c2_i_loop_ub = c2_points_size[0] * c2_points_size[1] - 1;
      for (c2_i29 = 0; c2_i29 <= c2_i_loop_ub; c2_i29++) {
        c2_c_points_data[c2_i29] = c2_points_data[c2_i29];
      }

      c2_st.site = &c2_e_emlrtRSI;
      c2_get_heading(chartInstance, &c2_st, c2_p, c2_c_points_data,
                     c2_c_points_size, c2_b_prev_heading, &c2_d_heading,
                     &c2_d_xb, &c2_d_yb);
      c2_b_flag = 1.0;
      c2_b_heading = c2_d_heading;
      c2_b_xb = c2_d_xb;
      c2_b_yb = c2_d_yb;
    }

    if (c2_guard1) {
      covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 5, false);
      covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 9, false);
      c2_st.site = &c2_f_emlrtRSI;
      c2_find_circle(chartInstance, &c2_st, c2_b_BW);
      covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 9, true);
      covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 6, false);
      covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 10, false);
      c2_d_points_size[0] = c2_points_size[0];
      c2_d_points_size[1] = 2;
      c2_j_loop_ub = c2_points_size[0] * c2_points_size[1] - 1;
      for (c2_i30 = 0; c2_i30 <= c2_j_loop_ub; c2_i30++) {
        c2_d_points_data[c2_i30] = c2_points_data[c2_i30];
      }

      c2_st.site = &c2_g_emlrtRSI;
      c2_get_heading(chartInstance, &c2_st, c2_p, c2_d_points_data,
                     c2_d_points_size, c2_b_prev_heading, &c2_e_heading,
                     &c2_e_xb, &c2_e_yb);
      c2_b_flag = 1.0;
      c2_b_heading = c2_e_heading;
      c2_b_xb = c2_e_xb;
      c2_b_yb = c2_e_yb;
    }
  } else {
    c2_b_points_size[0] = c2_points_size[0];
    c2_b_points_size[1] = 2;
    c2_h_loop_ub = c2_points_size[0] * c2_points_size[1] - 1;
    for (c2_i28 = 0; c2_i28 <= c2_h_loop_ub; c2_i28++) {
      c2_b_points_data[c2_i28] = c2_points_data[c2_i28];
    }

    c2_st.site = &c2_h_emlrtRSI;
    c2_get_heading(chartInstance, &c2_st, c2_p, c2_b_points_data,
                   c2_b_points_size, c2_b_prev_heading, &c2_c_heading, &c2_c_xb,
                   &c2_c_yb);
    c2_b_flag = 1.0;
    c2_b_heading = c2_c_heading;
    c2_b_xb = c2_c_xb;
    c2_b_yb = c2_c_yb;
  }

  *chartInstance->c2_flag = c2_b_flag;
  *chartInstance->c2_heading = c2_b_heading;
  *chartInstance->c2_xb = c2_b_xb;
  *chartInstance->c2_yb = c2_b_yb;
}

static void initSimStructsc2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c2_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static real_T c2_mean(SFc2_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c2_sp, real_T c2_x_data[], int32_T
                      c2_x_size[2])
{
  boolean_T c2_b_b;
  boolean_T c2_b1;
  const mxArray *c2_b_y = NULL;
  int32_T c2_vlen;
  boolean_T c2_b2;
  const mxArray *c2_c_y = NULL;
  int32_T c2_b_vlen;
  real_T c2_d_y;
  int32_T c2_k;
  int32_T c2_xoffset;
  int32_T c2_ix;
  (void)chartInstance;
  c2_b_b = (c2_x_size[1] == 1);
  if (c2_b_b || ((real_T)c2_x_size[1] != 1.0)) {
    c2_b1 = true;
  } else {
    c2_b1 = false;
  }

  if (!c2_b1) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_b_y, 14, sf_mex_call(c2_sp,
      "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 1U, 14, c2_c_y)));
  }

  c2_vlen = c2_x_size[1];
  c2_b2 = (c2_x_size[1] == 0);
  if (c2_b2 || (c2_vlen == 0)) {
    c2_d_y = 0.0;
  } else {
    c2_b_vlen = c2_vlen;
    c2_d_y = c2_x_data[0];
    for (c2_k = 1; c2_k < c2_b_vlen; c2_k++) {
      c2_xoffset = c2_k + 1;
      c2_ix = c2_xoffset - 1;
      c2_d_y += c2_x_data[c2_ix];
    }
  }

  return c2_d_y / (real_T)c2_x_size[1];
}

static void c2_check_forloop_overflow_error
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c2_sp)
{
  const mxArray *c2_y = NULL;
  static char_T c2_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  static char_T c2_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp,
    "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 2U, 14, c2_b_y,
    14, c2_c_y)));
}

static void c2_indexShapeCheck(SFc2_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static real_T c2_combineVectorElements(SFc2_flightControlSystemInstanceStruct
  *chartInstance, real_T c2_x_data[], int32_T c2_x_size[1])
{
  real_T c2_y;
  int32_T c2_vlen;
  int32_T c2_b_vlen;
  int32_T c2_k;
  int32_T c2_xoffset;
  int32_T c2_ix;
  (void)chartInstance;
  c2_vlen = c2_x_size[0];
  if ((c2_x_size[0] == 0) || (c2_vlen == 0)) {
    c2_y = 0.0;
  } else {
    c2_b_vlen = c2_vlen;
    c2_y = c2_x_data[0];
    for (c2_k = 1; c2_k < c2_b_vlen; c2_k++) {
      c2_xoffset = c2_k + 1;
      c2_ix = c2_xoffset - 1;
      c2_y += c2_x_data[c2_ix];
    }
  }

  return c2_y;
}

static void c2_find_circle(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_b_BW[19200])
{
  emlrtStack c2_st;
  int32_T c2_i;
  boolean_T c2_c_BW[19200];
  boolean_T c2_unusedExpr[19200];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 1);
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    c2_c_BW[c2_i] = c2_b_BW[c2_i];
  }

  c2_st.site = &c2_p_emlrtRSI;
  c2_edge(chartInstance, &c2_st, c2_c_BW, c2_unusedExpr);
}

static void c2_edge(SFc2_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c2_sp, boolean_T c2_varargin_1[19200], boolean_T
                    c2_varargout_1[19200])
{
  emlrtStack c2_st;
  int32_T c2_i;
  real_T c2_srcSizeT[2];
  int32_T c2_i1;
  real_T c2_cutoff;
  real32_T c2_b_b[19200];
  real_T c2_d;
  real_T c2_b_cutoff;
  int32_T c2_i2;
  real_T c2_c_cutoff;
  int8_T c2_offset[4];
  int32_T c2_i3;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_q_emlrtRSI;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_srcSizeT[c2_i] = 120.0 + 40.0 * (real_T)c2_i;
  }

  edgesobelprewitt_boolean_tbb(c2_varargin_1, c2_srcSizeT, true, 1.0, 1.0,
    chartInstance->c2_pGradient1, chartInstance->c2_pGradient2,
    chartInstance->c2_b);
  for (c2_i1 = 0; c2_i1 < 19200; c2_i1++) {
    c2_b_b[c2_i1] = chartInstance->c2_b[c2_i1];
  }

  c2_cutoff = 4.0 * c2_sum(chartInstance, c2_b_b) / 19200.0;
  c2_d = c2_cutoff;
  c2_st.site = &c2_r_emlrtRSI;
  c2_b_sqrt(chartInstance, &c2_st, &c2_d);
  c2_b_cutoff = c2_cutoff;
  for (c2_i2 = 0; c2_i2 < 4; c2_i2++) {
    c2_offset[c2_i2] = 0;
  }

  c2_c_cutoff = c2_b_cutoff;
  for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
    c2_srcSizeT[c2_i3] = 120.0 + 40.0 * (real_T)c2_i3;
  }

  edgethinning_real32_tbb(chartInstance->c2_b, chartInstance->c2_pGradient1,
    chartInstance->c2_pGradient2, 1.0, 1.0, c2_offset, 2.2204460492503131E-14,
    c2_c_cutoff, c2_varargout_1, c2_srcSizeT);
}

static real_T c2_sum(SFc2_flightControlSystemInstanceStruct *chartInstance,
                     real32_T c2_x[19200])
{
  real_T c2_y;
  int32_T c2_k;
  int32_T c2_xoffset;
  int32_T c2_ix;
  (void)chartInstance;
  c2_y = c2_x[0];
  for (c2_k = 0; c2_k < 19199; c2_k++) {
    c2_xoffset = c2_k;
    c2_ix = c2_xoffset;
    c2_y += (real_T)c2_x[c2_ix + 1];
  }

  return c2_y;
}

static real_T c2_sqrt(SFc2_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c2_sp, real_T c2_x)
{
  real_T c2_b_x;
  c2_b_x = c2_x;
  c2_b_sqrt(chartInstance, c2_sp, &c2_b_x);
  return c2_b_x;
}

static void c2_get_heading(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_p, real_T c2_points_data[], int32_T
  c2_points_size[2], real_T c2_b_prev_heading, real_T *c2_b_heading, real_T
  *c2_b_xb, real_T *c2_b_yb)
{
  emlrtStack c2_st;
  int32_T c2_i;
  int32_T c2_x_size[1];
  int32_T c2_loop_ub;
  int32_T c2_i1;
  real_T c2_x_data[120];
  boolean_T c2_b_b;
  const mxArray *c2_y = NULL;
  int32_T c2_b_x_size[1];
  int32_T c2_b_loop_ub;
  const mxArray *c2_b_y = NULL;
  int32_T c2_i2;
  real_T c2_mean_x;
  real_T c2_b_x_data[120];
  int32_T c2_i3;
  int32_T c2_c_loop_ub;
  int32_T c2_i4;
  boolean_T c2_b1;
  const mxArray *c2_c_y = NULL;
  int32_T c2_c_x_size[1];
  int32_T c2_d_loop_ub;
  const mxArray *c2_d_y = NULL;
  int32_T c2_i5;
  real_T c2_mean_y;
  real_T c2_c_x_data[120];
  real_T c2_x;
  real_T c2_e_y;
  real_T c2_c_xb;
  real_T c2_c_yb;
  int32_T c2_i6;
  real_T c2_d;
  int32_T c2_i7;
  real_T c2_u;
  int32_T c2_b_points_size[2];
  int32_T c2_i8;
  real_T c2_f_y;
  int32_T c2_i9;
  int32_T c2_e_loop_ub;
  int32_T c2_norms_size[1];
  int32_T c2_i10;
  real_T c2_d1;
  real_T c2_b_points_data[10];
  real_T c2_b_u;
  int32_T c2_f_loop_ub;
  int32_T c2_i11;
  real_T c2_g_y;
  int32_T c2_g_loop_ub;
  int32_T c2_i12;
  real_T c2_d2;
  real_T c2_norms_data[4];
  real_T c2_c_u;
  real_T c2_h_y;
  int32_T c2_angles_size[1];
  real_T c2_d3;
  real_T c2_d_u;
  real_T c2_i_y;
  int32_T c2_h_loop_ub;
  int32_T c2_i13;
  real_T c2_d4;
  real_T c2_angles_data[4];
  int32_T c2_i14;
  int32_T c2_b_i;
  real_T c2_c_i;
  int32_T c2_i15;
  int32_T c2_i_loop_ub;
  real_T c2_x_1;
  int32_T c2_i16;
  int32_T c2_i17;
  real_T c2_y_1;
  real_T c2_d5;
  boolean_T c2_b2;
  int32_T c2_i18;
  real_T c2_x_2;
  real_T c2_d6;
  const mxArray *c2_j_y = NULL;
  int32_T c2_i19;
  int32_T c2_d_x_size[1];
  real_T c2_y_2;
  int32_T c2_j_loop_ub;
  const mxArray *c2_k_y = NULL;
  int32_T c2_i20;
  real_T c2_a;
  real_T c2_b_a;
  real_T c2_l_y;
  real_T c2_d_x_data[120];
  real_T c2_c_a;
  int32_T c2_tmp_size[1];
  real_T c2_b_x;
  int32_T c2_k_loop_ub;
  real_T c2_d_a;
  int32_T c2_i21;
  real_T c2_c;
  int32_T c2_end;
  boolean_T c2_tmp_data[4];
  real_T c2_e_a;
  int32_T c2_trueCount;
  real_T c2_f_a;
  int32_T c2_d_i;
  real_T c2_g_a;
  real_T c2_c_x;
  real_T c2_h_a;
  int32_T c2_weighted_norms_size[1];
  real_T c2_b_c;
  int32_T c2_partialTrueCount;
  int32_T c2_e_i;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_d7;
  boolean_T c2_b_p;
  int32_T c2_l_loop_ub;
  int32_T c2_i22;
  int32_T c2_i23;
  real_T c2_weighted_norms_data[4];
  boolean_T c2_c_p;
  const mxArray *c2_m_y = NULL;
  boolean_T c2_b3;
  int32_T c2_i24;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  real_T c2_slope;
  const mxArray *c2_p_y = NULL;
  int32_T c2_e_x_size[1];
  static char_T c2_b_cv[4] = { 's', 'q', 'r', 't' };

  int32_T c2_m_loop_ub;
  const mxArray *c2_q_y = NULL;
  int32_T c2_i25;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_l_x;
  real_T c2_m_x;
  real_T c2_n_x;
  real_T c2_r_y;
  real_T c2_e_x_data[120];
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_n_loop_ub;
  int32_T c2_i30;
  int32_T c2_b_end;
  int32_T c2_b_trueCount;
  int32_T c2_f_i;
  int32_T c2_weighted_angles_size[1];
  int32_T c2_b_partialTrueCount;
  int32_T c2_g_i;
  int32_T c2_b_weighted_norms_size[1];
  real_T c2_d8;
  int32_T c2_o_loop_ub;
  int32_T c2_i31;
  int32_T c2_i32;
  real_T c2_weighted_angles_data[4];
  real_T c2_b_weighted_norms_data[4];
  real_T c2_o_x;
  real_T c2_p_x;
  real_T c2_q_x;
  real_T c2_s_y;
  real_T c2_r_x;
  real_T c2_s_x;
  real_T c2_t_x;
  real_T c2_t_y;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 3);
  c2_st.site = &c2_v_emlrtRSI;
  c2_i = c2_points_size[0];
  c2_x_size[0] = c2_i;
  c2_loop_ub = c2_i - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_x_data[c2_i1] = c2_points_data[c2_i1];
  }

  if ((c2_x_size[0] == 1) || ((real_T)c2_x_size[0] != 1.0)) {
    c2_b_b = true;
  } else {
    c2_b_b = false;
  }

  if (!c2_b_b) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_b_y)));
  }

  c2_b_x_size[0] = c2_x_size[0];
  c2_b_loop_ub = c2_x_size[0] - 1;
  for (c2_i2 = 0; c2_i2 <= c2_b_loop_ub; c2_i2++) {
    c2_b_x_data[c2_i2] = c2_x_data[c2_i2];
  }

  c2_mean_x = c2_combineVectorElements(chartInstance, c2_b_x_data, c2_b_x_size) /
    (real_T)c2_x_size[0];
  c2_st.site = &c2_w_emlrtRSI;
  c2_i3 = c2_points_size[0];
  c2_x_size[0] = c2_i3;
  c2_c_loop_ub = c2_i3 - 1;
  for (c2_i4 = 0; c2_i4 <= c2_c_loop_ub; c2_i4++) {
    c2_x_data[c2_i4] = c2_points_data[c2_i4 + c2_points_size[0]];
  }

  if ((c2_x_size[0] == 1) || ((real_T)c2_x_size[0] != 1.0)) {
    c2_b1 = true;
  } else {
    c2_b1 = false;
  }

  if (!c2_b1) {
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_c_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_d_y)));
  }

  c2_c_x_size[0] = c2_x_size[0];
  c2_d_loop_ub = c2_x_size[0] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_d_loop_ub; c2_i5++) {
    c2_c_x_data[c2_i5] = c2_x_data[c2_i5];
  }

  c2_mean_y = c2_combineVectorElements(chartInstance, c2_c_x_data, c2_c_x_size) /
    (real_T)c2_x_size[0];
  c2_st.site = &c2_x_emlrtRSI;
  c2_x = c2_mean_x;
  c2_e_y = c2_mean_y;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 2);
  c2_c_xb = -(160.0 - 2.0 * c2_x) / 160.0;
  c2_c_yb = -(120.0 - 2.0 * c2_e_y) / 120.0;
  *c2_b_xb = c2_c_xb;
  *c2_b_yb = c2_c_yb;
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 11,
                     covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance,
        4U, 0U, 4U, c2_p, 2.0, -1, 4U, c2_p > 2.0))) {
    c2_i6 = c2_points_size[0];
    c2_i7 = emlrtDynamicBoundsCheckR2012b(1, 1, c2_i6, &c2_b_emlrtBCI, c2_sp) -
      1;
    c2_b_points_size[0] = c2_points_size[0] + 1;
    for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
      c2_e_loop_ub = c2_points_size[0] - 1;
      for (c2_i10 = 0; c2_i10 <= c2_e_loop_ub; c2_i10++) {
        c2_b_points_data[c2_i10 + c2_b_points_size[0] * c2_i8] =
          c2_points_data[c2_i10 + c2_points_size[0] * c2_i8];
      }
    }

    for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
      c2_b_points_data[c2_points_size[0] + c2_b_points_size[0] * c2_i9] =
        c2_points_data[c2_i7 + c2_points_size[0] * c2_i9];
    }

    c2_points_size[0] = c2_b_points_size[0];
    c2_f_loop_ub = c2_b_points_size[0] * 2 - 1;
    for (c2_i11 = 0; c2_i11 <= c2_f_loop_ub; c2_i11++) {
      c2_points_data[c2_i11] = c2_b_points_data[c2_i11];
    }
  }

  c2_d = emlrtNonNegativeCheckR2012b(c2_p, &c2_c_emlrtDCI, c2_sp);
  c2_u = emlrtIntegerCheckR2012b(c2_d, &c2_b_emlrtDCI, c2_sp);
  if (c2_u < 0.0) {
    c2_f_y = muDoubleScalarCeil(c2_u);
  } else {
    c2_f_y = muDoubleScalarFloor(c2_u);
  }

  c2_norms_size[0] = c2__s32_d_(chartInstance, c2_f_y, 0, 1U, 3362, 19);
  c2_d1 = emlrtNonNegativeCheckR2012b(c2_p, &c2_c_emlrtDCI, c2_sp);
  c2_b_u = emlrtIntegerCheckR2012b(c2_d1, &c2_b_emlrtDCI, c2_sp);
  if (c2_b_u < 0.0) {
    c2_g_y = muDoubleScalarCeil(c2_b_u);
  } else {
    c2_g_y = muDoubleScalarFloor(c2_b_u);
  }

  c2_g_loop_ub = c2__s32_d_(chartInstance, c2_g_y, 0, 1U, 3362, 19) - 1;
  for (c2_i12 = 0; c2_i12 <= c2_g_loop_ub; c2_i12++) {
    c2_norms_data[c2_i12] = 0.0;
  }

  c2_d2 = emlrtNonNegativeCheckR2012b(c2_p, &c2_e_emlrtDCI, c2_sp);
  c2_c_u = emlrtIntegerCheckR2012b(c2_d2, &c2_d_emlrtDCI, c2_sp);
  if (c2_c_u < 0.0) {
    c2_h_y = muDoubleScalarCeil(c2_c_u);
  } else {
    c2_h_y = muDoubleScalarFloor(c2_c_u);
  }

  c2_angles_size[0] = c2__s32_d_(chartInstance, c2_h_y, 0, 1U, 3391, 19);
  c2_d3 = emlrtNonNegativeCheckR2012b(c2_p, &c2_e_emlrtDCI, c2_sp);
  c2_d_u = emlrtIntegerCheckR2012b(c2_d3, &c2_d_emlrtDCI, c2_sp);
  if (c2_d_u < 0.0) {
    c2_i_y = muDoubleScalarCeil(c2_d_u);
  } else {
    c2_i_y = muDoubleScalarFloor(c2_d_u);
  }

  c2_h_loop_ub = c2__s32_d_(chartInstance, c2_i_y, 0, 1U, 3391, 19) - 1;
  for (c2_i13 = 0; c2_i13 <= c2_h_loop_ub; c2_i13++) {
    c2_angles_data[c2_i13] = 0.0;
  }

  c2_d4 = c2_p - 1.0;
  c2_i14 = (int32_T)c2_d4;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, c2_d4, mxDOUBLE_CLASS, c2_i14,
    &c2_v_emlrtRTEI, c2_sp);
  c2_b_i = 0;
  while (c2_b_i <= c2_i14 - 1) {
    c2_c_i = (real_T)c2_b_i + 1.0;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 0, 1);
    c2_i15 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_f_emlrtDCI, c2_sp);
    c2_x_1 = c2_points_data[emlrtDynamicBoundsCheckR2012b(c2_i15, 1,
      c2_points_size[0], &c2_c_emlrtBCI, c2_sp) - 1];
    c2_i17 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_g_emlrtDCI, c2_sp);
    c2_y_1 = c2_points_data[(emlrtDynamicBoundsCheckR2012b(c2_i17, 1,
      c2_points_size[0], &c2_d_emlrtBCI, c2_sp) + c2_points_size[0]) - 1];
    c2_d5 = c2_c_i + 1.0;
    c2_i18 = (int32_T)emlrtIntegerCheckR2012b(c2_d5, &c2_h_emlrtDCI, c2_sp);
    c2_x_2 = c2_points_data[emlrtDynamicBoundsCheckR2012b(c2_i18, 1,
      c2_points_size[0], &c2_e_emlrtBCI, c2_sp) - 1];
    c2_d6 = c2_c_i + 1.0;
    c2_i19 = (int32_T)emlrtIntegerCheckR2012b(c2_d6, &c2_i_emlrtDCI, c2_sp);
    c2_y_2 = c2_points_data[(emlrtDynamicBoundsCheckR2012b(c2_i19, 1,
      c2_points_size[0], &c2_f_emlrtBCI, c2_sp) + c2_points_size[0]) - 1];
    c2_st.site = &c2_y_emlrtRSI;
    c2_a = c2_x_2 - c2_x_1;
    c2_b_a = c2_a;
    c2_c_a = c2_b_a;
    c2_b_x = c2_c_a;
    c2_d_a = c2_b_x;
    c2_c = c2_d_a * c2_d_a;
    c2_st.site = &c2_y_emlrtRSI;
    c2_e_a = c2_y_2 - c2_y_1;
    c2_f_a = c2_e_a;
    c2_g_a = c2_f_a;
    c2_c_x = c2_g_a;
    c2_h_a = c2_c_x;
    c2_b_c = c2_h_a * c2_h_a;
    c2_st.site = &c2_y_emlrtRSI;
    c2_d_x = c2_c + c2_b_c;
    c2_e_x = c2_d_x;
    c2_f_x = c2_e_x;
    if (c2_f_x < 0.0) {
      c2_b_p = true;
    } else {
      c2_b_p = false;
    }

    c2_c_p = c2_b_p;
    if (c2_c_p) {
      c2_m_y = NULL;
      sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_n_y = NULL;
      sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_p_y = NULL;
      sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 4),
                    false);
      sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_m_y, 14, sf_mex_call(&c2_st,
        "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 2U, 14,
        c2_n_y, 14, c2_p_y)));
    }

    c2_e_x = muDoubleScalarSqrt(c2_e_x);
    c2_i24 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_k_emlrtDCI, c2_sp);
    c2_norms_data[emlrtDynamicBoundsCheckR2012b(c2_i24, 1, c2_norms_size[0],
      &c2_h_emlrtBCI, c2_sp) - 1] = c2_e_x;
    c2_slope = (c2_y_2 - c2_y_1) / (c2_x_2 - c2_x_1);
    if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 12,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c2_covrtInstance, 4U, 0U, 5U, c2_slope,
                        0.0, -1, 2U, c2_slope < 0.0))) {
      if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 13,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c2_covrtInstance, 4U, 0U, 6U,
                          c2_b_prev_heading, 3.1415926535897931, -1, 4U,
                          c2_b_prev_heading > 3.1415926535897931))) {
        c2_j_x = c2_slope;
        c2_n_x = c2_j_x;
        c2_n_x = muDoubleScalarAtan(c2_n_x);
        c2_i29 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_p_emlrtDCI, c2_sp);
        c2_angles_data[emlrtDynamicBoundsCheckR2012b(c2_i29, 1, c2_angles_size[0],
          &c2_m_emlrtBCI, c2_sp) - 1] = c2_n_x + 6.2831853071795862;
      } else {
        c2_i_x = c2_slope;
        c2_m_x = c2_i_x;
        c2_m_x = muDoubleScalarAtan(c2_m_x);
        c2_i28 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_o_emlrtDCI, c2_sp);
        c2_angles_data[emlrtDynamicBoundsCheckR2012b(c2_i28, 1, c2_angles_size[0],
          &c2_l_emlrtBCI, c2_sp) - 1] = c2_m_x + 3.1415926535897931;
      }
    } else if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 14,
                covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
                 0U, 7U, c2_b_prev_heading, 3.1101767270538954, -1, 4U,
                 c2_b_prev_heading > 3.1101767270538954))) {
      c2_h_x = c2_slope;
      c2_l_x = c2_h_x;
      c2_l_x = muDoubleScalarAtan(c2_l_x);
      c2_i27 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_n_emlrtDCI, c2_sp);
      c2_angles_data[emlrtDynamicBoundsCheckR2012b(c2_i27, 1, c2_angles_size[0],
        &c2_k_emlrtBCI, c2_sp) - 1] = c2_l_x + 3.1415926535897931;
    } else {
      c2_g_x = c2_slope;
      c2_k_x = c2_g_x;
      c2_k_x = muDoubleScalarAtan(c2_k_x);
      c2_i26 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_m_emlrtDCI, c2_sp);
      c2_angles_data[emlrtDynamicBoundsCheckR2012b(c2_i26, 1, c2_angles_size[0],
        &c2_j_emlrtBCI, c2_sp) - 1] = c2_k_x;
    }

    c2_b_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 0, 0);
  c2_st.site = &c2_ab_emlrtRSI;
  c2_x_size[0] = c2_norms_size[0];
  c2_i_loop_ub = c2_norms_size[0] - 1;
  for (c2_i16 = 0; c2_i16 <= c2_i_loop_ub; c2_i16++) {
    c2_x_data[c2_i16] = c2_norms_data[c2_i16];
  }

  if ((c2_x_size[0] == 1) || ((real_T)c2_x_size[0] != 1.0)) {
    c2_b2 = true;
  } else {
    c2_b2 = false;
  }

  if (!c2_b2) {
    c2_j_y = NULL;
    sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c2_k_y = NULL;
    sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_j_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_k_y)));
  }

  c2_d_x_size[0] = c2_x_size[0];
  c2_j_loop_ub = c2_x_size[0] - 1;
  for (c2_i20 = 0; c2_i20 <= c2_j_loop_ub; c2_i20++) {
    c2_d_x_data[c2_i20] = c2_x_data[c2_i20];
  }

  c2_l_y = c2_combineVectorElements(chartInstance, c2_d_x_data, c2_d_x_size) /
    (real_T)c2_x_size[0];
  c2_tmp_size[0] = c2_norms_size[0];
  c2_k_loop_ub = c2_norms_size[0] - 1;
  for (c2_i21 = 0; c2_i21 <= c2_k_loop_ub; c2_i21++) {
    c2_tmp_data[c2_i21] = (c2_norms_data[c2_i21] >= c2_l_y);
  }

  c2_end = c2_tmp_size[0] - 1;
  c2_trueCount = 0;
  c2_d_i = 0;
  while (c2_d_i <= c2_end) {
    if (c2_tmp_data[c2_d_i]) {
      c2_trueCount++;
    }

    c2_d_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_weighted_norms_size[0] = c2_trueCount;
  c2_partialTrueCount = 0;
  c2_e_i = 0;
  while (c2_e_i <= c2_end) {
    if (c2_tmp_data[c2_e_i]) {
      c2_d7 = (real_T)(c2_e_i + 1);
      c2_i22 = (int32_T)emlrtIntegerCheckR2012b(c2_d7, &c2_j_emlrtDCI, c2_sp);
      c2_weighted_norms_data[c2_partialTrueCount] =
        c2_norms_data[emlrtDynamicBoundsCheckR2012b(c2_i22, 1, c2_norms_size[0],
        &c2_g_emlrtBCI, c2_sp) - 1];
      c2_partialTrueCount++;
    }

    c2_e_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_st.site = &c2_bb_emlrtRSI;
  c2_x_size[0] = c2_norms_size[0];
  c2_l_loop_ub = c2_norms_size[0] - 1;
  for (c2_i23 = 0; c2_i23 <= c2_l_loop_ub; c2_i23++) {
    c2_x_data[c2_i23] = c2_norms_data[c2_i23];
  }

  if ((c2_x_size[0] == 1) || ((real_T)c2_x_size[0] != 1.0)) {
    c2_b3 = true;
  } else {
    c2_b3 = false;
  }

  if (!c2_b3) {
    c2_o_y = NULL;
    sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c2_q_y = NULL;
    sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_o_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_q_y)));
  }

  c2_e_x_size[0] = c2_x_size[0];
  c2_m_loop_ub = c2_x_size[0] - 1;
  for (c2_i25 = 0; c2_i25 <= c2_m_loop_ub; c2_i25++) {
    c2_e_x_data[c2_i25] = c2_x_data[c2_i25];
  }

  c2_r_y = c2_combineVectorElements(chartInstance, c2_e_x_data, c2_e_x_size) /
    (real_T)c2_x_size[0];
  c2_tmp_size[0] = c2_norms_size[0];
  c2_n_loop_ub = c2_norms_size[0] - 1;
  for (c2_i30 = 0; c2_i30 <= c2_n_loop_ub; c2_i30++) {
    c2_tmp_data[c2_i30] = (c2_norms_data[c2_i30] >= c2_r_y);
  }

  c2_b_end = c2_tmp_size[0] - 1;
  c2_b_trueCount = 0;
  c2_f_i = 0;
  while (c2_f_i <= c2_b_end) {
    if (c2_tmp_data[c2_f_i]) {
      c2_b_trueCount++;
    }

    c2_f_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_weighted_angles_size[0] = c2_b_trueCount;
  c2_b_partialTrueCount = 0;
  c2_g_i = 0;
  while (c2_g_i <= c2_b_end) {
    if (c2_tmp_data[c2_g_i]) {
      c2_d8 = (real_T)(c2_g_i + 1);
      c2_i31 = (int32_T)emlrtIntegerCheckR2012b(c2_d8, &c2_l_emlrtDCI, c2_sp);
      c2_weighted_angles_data[c2_b_partialTrueCount] =
        c2_angles_data[emlrtDynamicBoundsCheckR2012b(c2_i31, 1, c2_angles_size[0],
        &c2_i_emlrtBCI, c2_sp) - 1];
      c2_b_partialTrueCount++;
    }

    c2_g_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  emlrtSizeEqCheck1DR2012b(c2_weighted_norms_size[0], c2_weighted_angles_size[0],
    &c2_emlrtECI, c2_sp);
  c2_b_weighted_norms_size[0] = c2_weighted_norms_size[0];
  c2_o_loop_ub = c2_weighted_norms_size[0] - 1;
  for (c2_i32 = 0; c2_i32 <= c2_o_loop_ub; c2_i32++) {
    c2_b_weighted_norms_data[c2_i32] = c2_weighted_norms_data[c2_i32] *
      c2_weighted_angles_data[c2_i32];
  }

  c2_st.site = &c2_cb_emlrtRSI;
  *c2_b_heading = c2_b_sum(chartInstance, &c2_st, c2_b_weighted_norms_data,
    c2_b_weighted_norms_size) / c2_b_sum(chartInstance, &c2_st,
    c2_weighted_norms_data, c2_weighted_norms_size);
  c2_o_x = *c2_b_heading - c2_b_prev_heading;
  c2_p_x = c2_o_x;
  c2_q_x = c2_p_x;
  c2_s_y = muDoubleScalarAbs(c2_q_x);
  c2_r_x = *c2_b_heading - c2_b_prev_heading;
  c2_s_x = c2_r_x;
  c2_t_x = c2_s_x;
  c2_t_y = muDoubleScalarAbs(c2_t_x);
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 15,
                     covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance,
        4U, 0U, 8U, c2_s_y, 1.5707963267948966, -1, 4U, c2_t_y >
        1.5707963267948966))) {
    *c2_b_heading = c2_b_prev_heading;
  }
}

static real_T c2_b_sum(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_x_data[], int32_T c2_x_size[1])
{
  emlrtStack c2_st;
  boolean_T c2_b_b;
  const mxArray *c2_b_y = NULL;
  int32_T c2_b_x_size[1];
  int32_T c2_loop_ub;
  const mxArray *c2_c_y = NULL;
  int32_T c2_i;
  real_T c2_b_x_data[120];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_fb_emlrtRSI;
  if ((c2_x_size[0] == 1) || ((real_T)c2_x_size[0] != 1.0)) {
    c2_b_b = true;
  } else {
    c2_b_b = false;
  }

  if (!c2_b_b) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_b_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_c_y)));
  }

  c2_b_x_size[0] = c2_x_size[0];
  c2_loop_ub = c2_x_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_b_x_data[c2_i] = c2_x_data[c2_i];
  }

  return c2_combineVectorElements(chartInstance, c2_b_x_data, c2_b_x_size);
}

static real_T c2_emlrt_marshallIn(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c2_b_flag, const char_T *c2_identifier)
{
  real_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_flag), &c2_thisId);
  sf_mex_destroy(&c2_b_flag);
  return c2_y;
}

static real_T c2_b_emlrt_marshallIn(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_y;
  real_T c2_d;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static uint8_T c2_c_emlrt_marshallIn(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_flightControlSystem, const
  char_T *c2_identifier)
{
  uint8_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_flightControlSystem), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_flightControlSystem);
  return c2_y;
}

static uint8_T c2_d_emlrt_marshallIn(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_y;
  uint8_T c2_b_u;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static const mxArray *c2_chart_data_browse_helper
  (SFc2_flightControlSystemInstanceStruct *chartInstance, int32_T c2_ssIdNumber)
{
  const mxArray *c2_mxData = NULL;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  c2_mxData = NULL;
  switch (c2_ssIdNumber) {
   case 9U:
    c2_d = *chartInstance->c2_flag;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", *chartInstance->c2_BW, 11,
      0U, 1U, 0U, 2, 120, 160), false);
    break;

   case 6U:
    c2_d1 = *chartInstance->c2_prev_heading;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 10U:
    c2_d2 = *chartInstance->c2_prev_flag;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c2_d3 = *chartInstance->c2_heading;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c2_d4 = *chartInstance->c2_xb;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d4, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c2_d5 = *chartInstance->c2_yb;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d5, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }

  return c2_mxData;
}

static void c2_b_sqrt(SFc2_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c2_sp, real_T *c2_x)
{
  real_T c2_b_x;
  boolean_T c2_p;
  boolean_T c2_b_p;
  const mxArray *c2_y = NULL;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  static char_T c2_b_cv[4] = { 's', 'q', 'r', 't' };

  (void)chartInstance;
  c2_b_x = *c2_x;
  if (c2_b_x < 0.0) {
    c2_p = true;
  } else {
    c2_p = false;
  }

  c2_b_p = c2_p;
  if (c2_b_p) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp,
      "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 2U, 14, c2_b_y,
      14, c2_c_y)));
  }

  *c2_x = muDoubleScalarSqrt(*c2_x);
}

static int32_T c2__s32_d_(SFc2_flightControlSystemInstanceStruct *chartInstance,
  real_T c2_b_b, int32_T c2_EMLOvCount_src_loc, uint32_T c2_ssid_src_loc,
  int32_T c2_offset_src_loc, int32_T c2_length_src_loc)
{
  int32_T c2_a;
  real_T c2_c_b;
  (void)c2_EMLOvCount_src_loc;
  c2_a = (int32_T)c2_b_b;
  if (c2_b_b < 0.0) {
    c2_c_b = muDoubleScalarCeil(c2_b_b);
  } else {
    c2_c_b = muDoubleScalarFloor(c2_b_b);
  }

  if ((real_T)c2_a != c2_c_b) {
    sf_data_overflow_error(chartInstance->S, c2_ssid_src_loc, c2_offset_src_loc,
      c2_length_src_loc);
  }

  return c2_a;
}

static void init_dsm_address_info(SFc2_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_flag = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_BW = (boolean_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_prev_heading = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_prev_flag = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_heading = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_xb = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c2_yb = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(680803632U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2034696415U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(616830114U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(922093141U);
}

mxArray *sf_c2_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.EdgeSobelPrewittTbbBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.EdgeThinningTbbBuildable"));
  return(mxcell3p);
}

mxArray *sf_c2_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("edgesobelprewitt_boolean_tbb");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiB2YGFgYAPSHEDMxAABrFA+I5TNCBdngYsrAHFJZUEqSLy4KNkzBUjnJeaC+Ym"
    "lFZ55aflg8y0YEOazYTGfEcl8Tqg4BHywp0y/kgNIvwGSfhYs+lmQ9AsAeWk5iel8UP7Aul/EAV"
    "0/Nvezo7gfws9ITUzJzEtnGBz+kCEqHphQ/MHEUJHEMEjcr0CW+yup5n4FB8r0Q+wPIOB+BbR0B"
    "OJnFscnJpdklqXGJxvFp+VkpmeUOOfnlRTl5wRXFpek5sL8BwAtlCrS"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sCDdnU2Hu2dlYo9cXhBaUBG";
}

static void sf_opaque_initialize_c2_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c2_flightControlSystem
    ((SFc2_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c2_flightControlSystem((SFc2_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c2_flightControlSystem(void *chartInstanceVar)
{
  enable_c2_flightControlSystem((SFc2_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c2_flightControlSystem(void *chartInstanceVar)
{
  disable_c2_flightControlSystem((SFc2_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c2_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c2_flightControlSystem((SFc2_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c2_flightControlSystem
    ((SFc2_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c2_flightControlSystem((SFc2_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c2_flightControlSystem(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    finalize_c2_flightControlSystem((SFc2_flightControlSystemInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_flightControlSystem((SFc2_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_flightControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_flightControlSystem
      ((SFc2_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc2_flightControlSystem((SFc2_flightControlSystemInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [17] = {
    "eNrtVstu00AUddK0UARVkZDYdBGxAYkN6gpWlLxopJRWuC0gFtXUvolHGc+YeSTtFj6FHUsk2PA",
    "D/AnbfgJ3nKRNHTtuG1qKhCXXHefcc899+M44heaGg9cS3j/vOs4CPm/iXXQG1/xwXRi7B+9Lzs",
    "Ph+jOCuAm3iCShcqZenITwGpRgRlPBm7wtUmGUt0EC9xAbCamz2BQNDaO82zDcs3zqTUC9wA2EY",
    "X4FbYm/ydkhskVGbyFPjUrwdAPA14EUphM0GOkcK5a6Xw3A6yoTTgtBgXZNZGWpDcM0jRjUD8Br",
    "cqUJKlYn2lxNNFT1QWaYNlLljoAijBglPDXagCgXIkywhp3Ix7+bRmNQSZgXEKkrEJAeqBbtxpy",
    "CQ5KTKvxhn3KihaSE1UNWtYaT2rYY6tkQPrApCUFtFQmkGwnKdXb93QZGWudkn0EN9k0nm82FD8",
    "YWf5dCH2Rm3tpV0QNJOrDJM53GCakfxNU67pJJmKYh7BL5wsP6KfAzuxc7R7kE6wTbaJEFgzjIp",
    "tqWtIfpzWQzYdN2Zt4nY8JBsVUeLGar92BaFY7ZGh6vEsZUJmxbRC3oAYtZa0ST6bABazoukiIi",
    "HexaH5NsW7wquE8nauEZpUVYxXartVqvcFKkizuBNbkG2SYepH23ygvANwwwUJxMOnaXQupTZau",
    "VgxrWNA/lqLbhtb6QXQx0ymd/EoKtQSYwVB3MPvbujsI2nwaz2c/Fjeb8E+dkzt8+w5wf2SWfj8",
    "Z4Cik8ztgz6XexeBo/l/BbxDeFQiG2Wxuzu5PwU0rYWdwy3rdav7715fvHP75//VL79LGW578w4",
    "b8Q/2/tjkrn2xeXhuuV0QA6bs/eRFdY7PqYrlIK//0x/uXhWlVrPt9ZXTerPnsnnnlvgwrZqbwc",
    "5CtH73xC7+h92U7Cwyiea0p6TX+4Yds1MYNtzPI/HdO7kJOPxeH7wXX0fDb7B2vJOqblq3QqXyW",
    "njbv8eN/+Pf331pL2afpvJOpt1wEeZijvONcjjpUz1aF4Ko6ic7DvXBP95QvpP/xj+strs9kP/G",
    "/l6C8n+qgcn5v2CJ6CerDnre61Ge0EdjPWUjD3UGkIl844r6fNy/PaOVds96/o/J+Xy4/vLOefu",
    "QvalWY8b12V3azxnfccOMu5MTnnnAR+eQY/l42f9fx8HvxvBFVwEw==",
    ""
  };

  static char newstr [1181] = "";
  newstr[0] = '\0';
  for (i = 0; i < 17; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c2_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3051834378U));
  ssSetChecksum1(S,(727413367U));
  ssSetChecksum2(S,(2863838907U));
  ssSetChecksum3(S,(1149403972U));
}

static void mdlRTW_c2_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c2_flightControlSystem(SimStruct *S)
{
  SFc2_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc2_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc2_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_flightControlSystem;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c2_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c2_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_flightControlSystem;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_flightControlSystem;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_start_c2_flightControlSystem(chartInstance);
}

void c2_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
