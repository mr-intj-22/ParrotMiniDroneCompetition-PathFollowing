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

static emlrtRSInfo c2_c_emlrtRSI = { 42,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 45,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 49,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 56,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 60,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 82,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 84,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 88,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 96,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 101,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 41,/* lineNo */
  "find",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 153,/* lineNo */
  "find",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 397,/* lineNo */
  "find",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 43,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 16,/* lineNo */
  "any",                               /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/ops/any.m"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 143,/* lineNo */
  "allOrAny",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 119,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 133,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_v_emlrtRSI = { 135,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_w_emlrtRSI = { 137,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_x_emlrtRSI = { 142,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_y_emlrtRSI = { 151,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_ab_emlrtRSI = { 153,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_bb_emlrtRSI = { 102,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_cb_emlrtRSI = { 120,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_db_emlrtRSI = { 673,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_eb_emlrtRSI = { 674,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_fb_emlrtRSI = { 679,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_gb_emlrtRSI = { 680,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_hb_emlrtRSI = { 45,/* lineNo */
  "mpower",                            /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/ops/mpower.m"/* pathName */
};

static emlrtRSInfo c2_ib_emlrtRSI = { 55,/* lineNo */
  "power",                             /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo c2_jb_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo c2_kb_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo c2_lb_emlrtRSI = { 769,/* lineNo */
  "imfilter",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo c2_mb_emlrtRSI = { 80,/* lineNo */
  "padarray",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/padarray.m"/* pathName */
};

static emlrtRSInfo c2_nb_emlrtRSI = { 732,/* lineNo */
  "padarray",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/padarray.m"/* pathName */
};

static emlrtRSInfo c2_ob_emlrtRSI = { 734,/* lineNo */
  "padarray",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/padarray.m"/* pathName */
};

static emlrtRSInfo c2_pb_emlrtRSI = { 843,/* lineNo */
  "imfilter",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo c2_qb_emlrtRSI = { 917,/* lineNo */
  "imfilter",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo c2_rb_emlrtRSI = { 945,/* lineNo */
  "imfilter",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo c2_sb_emlrtRSI = { 957,/* lineNo */
  "imfilter",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfilter.m"/* pathName */
};

static emlrtRSInfo c2_tb_emlrtRSI = { 831,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_ub_emlrtRSI = { 718,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_vb_emlrtRSI = { 723,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_wb_emlrtRSI = { 726,/* lineNo */
  "edge",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/edge.m"/* pathName */
};

static emlrtRSInfo c2_xb_emlrtRSI = { 37,/* lineNo */
  "find",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo c2_yb_emlrtRSI = { 147,/* lineNo */
  "find",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo c2_ac_emlrtRSI = { 252,/* lineNo */
  "find",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo c2_bc_emlrtRSI = { 251,/* lineNo */
  "find",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo c2_cc_emlrtRSI = { 250,/* lineNo */
  "find",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo c2_dc_emlrtRSI = { 60,/* lineNo */
  "bwselect",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pathName */
};

static emlrtRSInfo c2_ec_emlrtRSI = { 64,/* lineNo */
  "bwselect",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pathName */
};

static emlrtRSInfo c2_fc_emlrtRSI = { 65,/* lineNo */
  "bwselect",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pathName */
};

static emlrtRSInfo c2_gc_emlrtRSI = { 66,/* lineNo */
  "bwselect",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pathName */
};

static emlrtRSInfo c2_hc_emlrtRSI = { 70,/* lineNo */
  "bwselect",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pathName */
};

static emlrtRSInfo c2_ic_emlrtRSI = { 71,/* lineNo */
  "bwselect",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pathName */
};

static emlrtRSInfo c2_jc_emlrtRSI = { 77,/* lineNo */
  "bwselect",                          /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pathName */
};

static emlrtRSInfo c2_kc_emlrtRSI = { 8,/* lineNo */
  "eml_warning",                       /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/eml/eml_warning.m"/* pathName */
};

static emlrtRSInfo c2_lc_emlrtRSI = { 13,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo c2_mc_emlrtRSI = { 17,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo c2_nc_emlrtRSI = { 16,/* lineNo */
  "sub2ind",                           /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pathName */
};

static emlrtRSInfo c2_oc_emlrtRSI = { 108,/* lineNo */
  "imfill",                            /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pathName */
};

static emlrtRSInfo c2_pc_emlrtRSI = { 223,/* lineNo */
  "imfill",                            /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pathName */
};

static emlrtRSInfo c2_qc_emlrtRSI = { 234,/* lineNo */
  "imfill",                            /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pathName */
};

static emlrtRSInfo c2_rc_emlrtRSI = { 274,/* lineNo */
  "imfill",                            /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pathName */
};

static emlrtRSInfo c2_sc_emlrtRSI = { 276,/* lineNo */
  "imfill",                            /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pathName */
};

static emlrtRSInfo c2_tc_emlrtRSI = { 279,/* lineNo */
  "imfill",                            /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pathName */
};

static emlrtRSInfo c2_uc_emlrtRSI = { 76,/* lineNo */
  "validateattributes",                /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pathName */
};

static emlrtRSInfo c2_vc_emlrtRSI = { 13,/* lineNo */
  "any",                               /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/ops/any.m"/* pathName */
};

static emlrtRSInfo c2_wc_emlrtRSI = { 22,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo c2_xc_emlrtRSI = { 26,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo c2_yc_emlrtRSI = { 76,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imreconstruct.m"/* pathName */
};

static emlrtRSInfo c2_ad_emlrtRSI = { 33,/* lineNo */
  "find",                              /* fcnName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo c2_bd_emlrtRSI = { 176,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_cd_emlrtRSI = { 177,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_dd_emlrtRSI = { 178,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_ed_emlrtRSI = { 193,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_fd_emlrtRSI = { 210,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_gd_emlrtRSI = { 211,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_hd_emlrtRSI = { 213,/* lineNo */
  "Image Processing System/Compress",  /* fcnName */
  "#flightControlSystem:2236"          /* pathName */
};

static emlrtRSInfo c2_id_emlrtRSI = { 20,/* lineNo */
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

static emlrtRTEInfo c2_d_emlrtRTEI = { 24,/* lineNo */
  59,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_e_emlrtRTEI = { 49,/* lineNo */
  37,                                  /* colNo */
  "mean",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/datafun/mean.m"/* pName */
};

static emlrtRTEInfo c2_f_emlrtRTEI = { 25,/* lineNo */
  60,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_g_emlrtRTEI = { 42,/* lineNo */
  1,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_h_emlrtRTEI = { 101,/* lineNo */
  46,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_i_emlrtRTEI = { 82,/* lineNo */
  50,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_j_emlrtRTEI = { 96,/* lineNo */
  54,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_k_emlrtRTEI = { 38,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo c2_l_emlrtRTEI = { 39,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo c2_m_emlrtRTEI = { 34,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo c2_n_emlrtRTEI = { 35,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo c2_o_emlrtRTEI = { 142,/* lineNo */
  48,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_p_emlrtRTEI = { 142,/* lineNo */
  65,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_q_emlrtRTEI = { 142,/* lineNo */
  82,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_r_emlrtRTEI = { 41,/* lineNo */
  30,                                  /* colNo */
  "sub2ind",                           /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pName */
};

static emlrtRTEInfo c2_s_emlrtRTEI = { 153,/* lineNo */
  28,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_t_emlrtRTEI = { 153,/* lineNo */
  52,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_u_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "sub2ind",                           /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pName */
};

static emlrtRTEInfo c2_v_emlrtRTEI = { 48,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pName */
};

static emlrtRTEInfo c2_w_emlrtRTEI = { 99,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo c2_x_emlrtRTEI = { 48,/* lineNo */
  17,                                  /* colNo */
  "sub2ind",                           /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pName */
};

static emlrtRTEInfo c2_y_emlrtRTEI = { 48,/* lineNo */
  5,                                   /* colNo */
  "sub2ind",                           /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pName */
};

static emlrtRTEInfo c2_ab_emlrtRTEI = { 142,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_bb_emlrtRTEI = { 143,/* lineNo */
  24,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_cb_emlrtRTEI = { 143,/* lineNo */
  36,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_db_emlrtRTEI = { 145,/* lineNo */
  38,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c2_eb_emlrtRTEI = { 110,/* lineNo */
  17,                                  /* colNo */
  "imfilter",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfilter.m"/* pName */
};

static emlrtRTEInfo c2_fb_emlrtRTEI = { 820,/* lineNo */
  21,                                  /* colNo */
  "imfilter",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfilter.m"/* pName */
};

static emlrtRTEInfo c2_gb_emlrtRTEI = { 147,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo c2_hb_emlrtRTEI = { 250,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo c2_ib_emlrtRTEI = { 251,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo c2_jb_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "round",                             /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elfun/round.m"/* pName */
};

static emlrtRTEInfo c2_kb_emlrtRTEI = { 27,/* lineNo */
  5,                                   /* colNo */
  "bwselect",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pName */
};

static emlrtRTEInfo c2_lb_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "bwselect",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pName */
};

static emlrtRTEInfo c2_mb_emlrtRTEI = { 60,/* lineNo */
  16,                                  /* colNo */
  "bwselect",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pName */
};

static emlrtRTEInfo c2_nb_emlrtRTEI = { 60,/* lineNo */
  26,                                  /* colNo */
  "bwselect",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pName */
};

static emlrtRTEInfo c2_ob_emlrtRTEI = { 60,/* lineNo */
  15,                                  /* colNo */
  "bwselect",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pName */
};

static emlrtRTEInfo c2_pb_emlrtRTEI = { 61,/* lineNo */
  16,                                  /* colNo */
  "bwselect",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pName */
};

static emlrtRTEInfo c2_qb_emlrtRTEI = { 61,/* lineNo */
  26,                                  /* colNo */
  "bwselect",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pName */
};

static emlrtRTEInfo c2_rb_emlrtRTEI = { 60,/* lineNo */
  1,                                   /* colNo */
  "bwselect",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pName */
};

static emlrtRTEInfo c2_sb_emlrtRTEI = { 65,/* lineNo */
  7,                                   /* colNo */
  "bwselect",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pName */
};

static emlrtRTEInfo c2_tb_emlrtRTEI = { 66,/* lineNo */
  7,                                   /* colNo */
  "bwselect",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pName */
};

static emlrtRTEInfo c2_ub_emlrtRTEI = { 70,/* lineNo */
  1,                                   /* colNo */
  "bwselect",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pName */
};

static emlrtRTEInfo c2_vb_emlrtRTEI = { 153,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo c2_wb_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo c2_xb_emlrtRTEI = { 138,/* lineNo */
  14,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo c2_yb_emlrtRTEI = { 259,/* lineNo */
  1,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo c2_ac_emlrtRTEI = { 104,/* lineNo */
  40,                                  /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtRTEInfo c2_bc_emlrtRTEI = { 108,/* lineNo */
  47,                                  /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtRTEInfo c2_cc_emlrtRTEI = { 222,/* lineNo */
  12,                                  /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtRTEInfo c2_dc_emlrtRTEI = { 222,/* lineNo */
  25,                                  /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtRTEInfo c2_ec_emlrtRTEI = { 234,/* lineNo */
  20,                                  /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtRTEInfo c2_fc_emlrtRTEI = { 263,/* lineNo */
  18,                                  /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtRTEInfo c2_gc_emlrtRTEI = { 258,/* lineNo */
  20,                                  /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtRTEInfo c2_hc_emlrtRTEI = { 263,/* lineNo */
  36,                                  /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtRTEInfo c2_ic_emlrtRTEI = { 258,/* lineNo */
  5,                                   /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtRTEInfo c2_jc_emlrtRTEI = { 263,/* lineNo */
  5,                                   /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtRTEInfo c2_kc_emlrtRTEI = { 274,/* lineNo */
  8,                                   /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtRTEInfo c2_lc_emlrtRTEI = { 252,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo c2_mc_emlrtRTEI = { 176,/* lineNo */
  23,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_nc_emlrtRTEI = { 177,/* lineNo */
  23,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_oc_emlrtRTEI = { 184,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_pc_emlrtRTEI = { 181,/* lineNo */
  22,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_qc_emlrtRTEI = { 185,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_rc_emlrtRTEI = { 181,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_sc_emlrtRTEI = { 210,/* lineNo */
  47,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_tc_emlrtRTEI = { 210,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_uc_emlrtRTEI = { 172,/* lineNo */
  37,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_vc_emlrtRTEI = { 211,/* lineNo */
  48,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_wc_emlrtRTEI = { 211,/* lineNo */
  34,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_xc_emlrtRTEI = { 213,/* lineNo */
  23,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_yc_emlrtRTEI = { 96,/* lineNo */
  41,                                  /* colNo */
  "sumprod",                           /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/lib/matlab/datafun/private/sumprod.m"/* pName */
};

static emlrtRTEInfo c2_ad_emlrtRTEI = { 17,/* lineNo */
  38,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo c2_bd_emlrtRTEI = { 168,/* lineNo */
  32,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo c2_cd_emlrtRTEI = { 170,/* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo c2_dd_emlrtRTEI = { 183,/* lineNo */
  9,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo c2_ed_emlrtRTEI = { 299,/* lineNo */
  5,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo c2_fd_emlrtRTEI = { 26,/* lineNo */
  13,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "/opt/MATLAB/R2019b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtBCInfo c2_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  42,                                  /* lineNo */
  13,                                  /* colNo */
  "ps",                                /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_emlrtDCI = { 42, /* lineNo */
  13,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo c2_gd_emlrtRTEI = { 139,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtECInfo c2_emlrtECI = { -1, /* nDims */
  143,                                 /* lineNo */
  13,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtDCInfo c2_b_emlrtDCI = { 148,/* lineNo */
  42,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_b_emlrtBCI = { 1,/* iFirst */
  40,                                  /* iLast */
  148,                                 /* lineNo */
  42,                                  /* colNo */
  "HoughSpace",                        /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_c_emlrtBCI = { 1,/* iFirst */
  14641,                               /* iLast */
  136,                                 /* lineNo */
  9,                                   /* colNo */
  "Radii",                             /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_c_emlrtDCI = { 136,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  53,                                  /* colNo */
  "E_y",                               /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_d_emlrtDCI = { 142,/* lineNo */
  53,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  70,                                  /* colNo */
  "E_x",                               /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_e_emlrtDCI = { 142,/* lineNo */
  70,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_f_emlrtBCI = { 1,/* iFirst */
  67200,                               /* iLast */
  150,                                 /* lineNo */
  13,                                  /* colNo */
  "PeakCircles",                       /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_f_emlrtDCI = { 150,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_g_emlrtDCI = { 143,/* lineNo */
  24,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_g_emlrtBCI = { 1,/* iFirst */
  2688000,                             /* iLast */
  143,                                 /* lineNo */
  24,                                  /* colNo */
  "HoughSpace",                        /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_h_emlrtBCI = { 1,/* iFirst */
  2688000,                             /* iLast */
  143,                                 /* lineNo */
  47,                                  /* colNo */
  "HoughSpace",                        /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_h_emlrtDCI = { 143,/* lineNo */
  47,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_i_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  100,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_j_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  100,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_b_emlrtECI = { -1,/* nDims */
  60,                                  /* lineNo */
  15,                                  /* colNo */
  "bwselect",                          /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/bwselect.m"/* pName */
};

static emlrtECInfo c2_c_emlrtECI = { -1,/* nDims */
  222,                                 /* lineNo */
  5,                                   /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtBCInfo c2_k_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  222,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m",/* pName */
  3                                    /* checkKind */
};

static emlrtECInfo c2_d_emlrtECI = { -1,/* nDims */
  263,                                 /* lineNo */
  17,                                  /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtRTEInfo c2_hd_emlrtRTEI = { 277,/* lineNo */
  13,                                  /* colNo */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m"/* pName */
};

static emlrtBCInfo c2_l_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "imfill",                            /* fName */
  "/opt/MATLAB/R2019b/toolbox/images/images/eml/imfill.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_e_emlrtECI = { -1,/* nDims */
  213,                                 /* lineNo */
  23,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtRTEInfo c2_id_emlrtRTEI = { 188,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236"          /* pName */
};

static emlrtBCInfo c2_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  181,                                 /* lineNo */
  37,                                  /* colNo */
  "points",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_i_emlrtDCI = { 184,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_j_emlrtDCI = { 184,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c2_k_emlrtDCI = { 185,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_l_emlrtDCI = { 185,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c2_n_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  189,                                 /* lineNo */
  19,                                  /* colNo */
  "points",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_m_emlrtDCI = { 189,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_o_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  189,                                 /* lineNo */
  40,                                  /* colNo */
  "points",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_n_emlrtDCI = { 189,/* lineNo */
  40,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_p_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  19,                                  /* colNo */
  "points",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_o_emlrtDCI = { 190,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_q_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  40,                                  /* colNo */
  "points",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_p_emlrtDCI = { 190,/* lineNo */
  40,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_r_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  210,                                 /* lineNo */
  27,                                  /* colNo */
  "norms",                             /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_q_emlrtDCI = { 210,/* lineNo */
  27,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_s_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  193,                                 /* lineNo */
  13,                                  /* colNo */
  "norms",                             /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_r_emlrtDCI = { 193,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_t_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  211,                                 /* lineNo */
  27,                                  /* colNo */
  "angles",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_s_emlrtDCI = { 211,/* lineNo */
  27,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_u_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  205,                                 /* lineNo */
  21,                                  /* colNo */
  "angles",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_t_emlrtDCI = { 205,/* lineNo */
  21,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_v_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  21,                                  /* colNo */
  "angles",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_u_emlrtDCI = { 203,/* lineNo */
  21,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_w_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  199,                                 /* lineNo */
  21,                                  /* colNo */
  "angles",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_v_emlrtDCI = { 199,/* lineNo */
  21,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_x_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  197,                                 /* lineNo */
  21,                                  /* colNo */
  "angles",                            /* aName */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_w_emlrtDCI = { 197,/* lineNo */
  21,                                  /* colNo */
  "Image Processing System/Compress",  /* fName */
  "#flightControlSystem:2236",         /* pName */
  1                                    /* checkKind */
};

static const char_T c2_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
  'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

static const char_T c2_cv1[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
  'b', '2', 'i', 'n', 'd', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O', 'f',
  'R', 'a', 'n', 'g', 'e' };

static const char_T c2_cv2[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
  'b', '2', 'i', 'n', 'd', ':', 'S', 'u', 'b', 's', 'c', 'r', 'i', 'p', 't', 'V',
  'e', 'c', 't', 'o', 'r', 'S', 'i', 'z', 'e' };

static const real_T c2_dv[13] = { 3.4813359214923066E-5, 0.00054457256285105169,
  0.0051667606200595231, 0.029732654490475546, 0.10377716120747749,
  0.219696252000246, 0.28209557151935094, 0.219696252000246, 0.10377716120747749,
  0.029732654490475546, 0.0051667606200595231, 0.00054457256285105169,
  3.4813359214923066E-5 };

static const char_T c2_cv3[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i',
  'l', 't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
  'a', 'i', 'l', 'e', 'd' };

static const char_T c2_cv4[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
  'E', 'r', 'r', 'o', 'r' };

static const char_T c2_cv5[25] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
  'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm', 'i', 's', 'm', 'a', 't', 'c', 'h'
};

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
                      const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
                      c2_x_size[2]);
static void c2_check_forloop_overflow_error
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c2_sp);
static void c2_indexShapeCheck(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, int32_T c2_matrixSize, int32_T
  c2_indexSize[2]);
static real_T c2_b_mean(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T c2_x_size[1]);
static real_T c2_combineVectorElements(SFc2_flightControlSystemInstanceStruct
  *chartInstance, real_T c2_n_x_data[], int32_T c2_x_size[1]);
static void c2_find_circle(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_d_BW[19200], real_T *c2_xc, real_T
  *c2_yc, real_T *c2_r);
static void c2_edge(SFc2_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c2_sp, boolean_T c2_b_varargin_1[19200],
                    boolean_T c2_varargout_1[19200]);
static void c2_imfilter(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real32_T c2_b_varargin_1[19200], real32_T c2_b[19200]);
static void c2_padImage(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real32_T c2_a_tmp[19200], real32_T c2_c_a[21120]);
static boolean_T c2_isequal(SFc2_flightControlSystemInstanceStruct
  *chartInstance, real_T c2_b_varargin_1[2], real_T c2_varargin_2[2]);
static void c2_b_imfilter(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real32_T c2_b_varargin_1[19200], real_T
  c2_varargin_2[13], real32_T c2_b[19200]);
static void c2_b_padImage(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real32_T c2_a_tmp[19200], real32_T c2_c_a[20640]);
static void c2_c_imfilter(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real32_T c2_b_varargin_1[19200], real32_T c2_b[19200]);
static void c2_d_imfilter(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real32_T c2_b_varargin_1[19200], real_T
  c2_varargin_2[13], real32_T c2_b[19200]);
static void c2_hypot(SFc2_flightControlSystemInstanceStruct *chartInstance,
                     real32_T c2_b_x[19200], real32_T c2_y[19200], real32_T
                     c2_r[19200]);
static void c2_thinAndThreshold(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real32_T c2_d_dx[19200], real32_T
  c2_d_dy[19200], real32_T c2_magGrad[19200], boolean_T c2_H[19200]);
static void c2_eml_find(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_b_x[19200], int32_T c2_i_data[], int32_T
  c2_i_size[1], int32_T c2_j_data[], int32_T c2_j_size[1]);
static void c2_round(SFc2_flightControlSystemInstanceStruct *chartInstance,
                     real_T c2_n_x_data[], int32_T c2_x_size[1], real_T
                     c2_o_x_data[], int32_T c2_b_x_size[1]);
static void c2_bwselect(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_b_varargin_1[19200], real_T
  c2_e_varargin_2_data[], int32_T c2_varargin_2_size[1], real_T
  c2_c_varargin_3_data[], int32_T c2_varargin_3_size[1], boolean_T
  c2_varargout_1[19200]);
static void c2_b_eml_find(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_n_x_data[], int32_T c2_x_size[1],
  int32_T c2_i_data[], int32_T c2_i_size[1]);
static void c2_warning(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp);
static void c2_nullAssignment(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
  c2_x_size[1], int32_T c2_c_idx_data[], int32_T c2_idx_size[1], real_T
  c2_o_x_data[], int32_T c2_b_x_size[1]);
static void c2_onearg_null_assignment(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
  c2_x_size[1], int32_T c2_c_idx_data[], int32_T c2_idx_size[1], real_T
  c2_o_x_data[], int32_T c2_b_x_size[1]);
static void c2_make_bitarray(SFc2_flightControlSystemInstanceStruct
  *chartInstance, int32_T c2_n, int32_T c2_c_idx_data[], int32_T c2_idx_size[1],
  boolean_T c2_b_b_data[], int32_T c2_b_size[2]);
static int32_T c2_num_true(SFc2_flightControlSystemInstanceStruct *chartInstance,
  boolean_T c2_b_b_data[], int32_T c2_b_size[2]);
static boolean_T c2_allinrange(SFc2_flightControlSystemInstanceStruct
  *chartInstance, real_T c2_n_x_data[], int32_T c2_x_size[1], int32_T c2_hi);
static void c2_imfill(SFc2_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c2_sp, boolean_T c2_b_varargin_1[19200],
                      real_T c2_e_varargin_2_data[], int32_T c2_varargin_2_size
                      [1], boolean_T c2_I2[19200]);
static boolean_T c2_b_isequal(SFc2_flightControlSystemInstanceStruct
  *chartInstance, real_T c2_varargin_1_data[], int32_T c2_varargin_1_size[1]);
static void c2_checkLocations(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_c_locations_data[], int32_T
  c2_locations_size[1], real_T c2_b_locationsVar_data[], int32_T
  c2_locationsVar_size[1]);
static void c2_validateattributes(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_a_data[], int32_T
  c2_a_size[1]);
static boolean_T c2_any(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_n_x_data[], int32_T c2_x_size[1]);
static void c2_b_warning(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp);
static void c2_b_nullAssignment(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
  c2_x_size[1], int32_T c2_idx, real_T c2_o_x_data[], int32_T c2_b_x_size[1]);
static void c2_imreconstruct(SFc2_flightControlSystemInstanceStruct
  *chartInstance, boolean_T c2_marker[19200], boolean_T c2_mask[19200],
  boolean_T c2_im[19200]);
static void c2_c_eml_find(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_b_x[19200], int32_T c2_i_data[], int32_T
  c2_i_size[1]);
static void c2_meshgrid(SFc2_flightControlSystemInstanceStruct *chartInstance,
  real_T c2_b_x[121], real_T c2_y[121], real_T c2_xx[14641], real_T c2_yy[14641]);
static void c2_power(SFc2_flightControlSystemInstanceStruct *chartInstance,
                     real_T c2_c_a[14641], real_T c2_y[14641]);
static void c2_sqrt(SFc2_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c2_sp, real_T c2_b_x[14641], real_T c2_c_x[14641]);
static void c2_b_round(SFc2_flightControlSystemInstanceStruct *chartInstance,
  real_T c2_b_x[14641], real_T c2_c_x[14641]);
static void c2_d_eml_find(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_b_x[14641], int32_T c2_i_data[], int32_T
  c2_i_size[1], int32_T c2_j_data[], int32_T c2_j_size[1], real_T c2_v_data[],
  int32_T c2_v_size[1]);
static void c2_e_eml_find(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_b_x[67200], int32_T c2_i_data[], int32_T
  c2_i_size[1], int32_T c2_j_data[], int32_T c2_j_size[1], real_T c2_v_data[],
  int32_T c2_v_size[1]);
static void c2_get_heading(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_p, real_T c2_points_data[], int32_T
  c2_points_size[2], real_T c2_b_prev_heading, real_T *c2_b_heading, real_T
  *c2_b_xb, real_T *c2_b_yb);
static real_T c2_sum(SFc2_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
                     c2_x_size[1]);
static const mxArray *c2_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const char_T c2_u[34]);
static const mxArray *c2_b_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const char_T c2_u[36]);
static const mxArray *c2_c_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const char_T c2_u[30]);
static const mxArray *c2_d_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const boolean_T c2_u
   [19200]);
static const mxArray *c2_e_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const char_T c2_u[2]);
static const mxArray *c2_f_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const real_T c2_u);
static const mxArray *c2_g_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const char_T c2_u[3]);
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
static void c2_c_round(SFc2_flightControlSystemInstanceStruct *chartInstance,
  real_T c2_n_x_data[], int32_T c2_x_size[1]);
static void c2_c_nullAssignment(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
  c2_x_size[1], int32_T c2_c_idx_data[], int32_T c2_idx_size[1]);
static void c2_b_onearg_null_assignment(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
  c2_x_size[1], int32_T c2_c_idx_data[], int32_T c2_idx_size[1]);
static void c2_d_nullAssignment(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
  c2_x_size[1], int32_T c2_idx);
static void c2_b_sqrt(SFc2_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c2_sp, real_T c2_b_x[14641]);
static void c2_d_round(SFc2_flightControlSystemInstanceStruct *chartInstance,
  real_T c2_b_x[14641]);
static int32_T c2__s32_d_(SFc2_flightControlSystemInstanceStruct *chartInstance,
  real_T c2_b, int32_T c2_EMLOvCount_src_loc, uint32_T c2_ssid_src_loc, int32_T
  c2_offset_src_loc, int32_T c2_length_src_loc);
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
  const mxArray *c2_g_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(6, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", chartInstance->c2_flag, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", chartInstance->c2_heading, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", chartInstance->c2_land, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", chartInstance->c2_xb, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y", chartInstance->c2_yb, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_y, 4, c2_f_y);
  c2_g_y = NULL;
  sf_mex_assign(&c2_g_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c2_y, 5, c2_g_y);
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
  *chartInstance->c2_land = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 2)), "land");
  *chartInstance->c2_xb = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 3)), "xb");
  *chartInstance->c2_yb = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 4)), "yb");
  chartInstance->c2_is_active_c2_flightControlSystem = c2_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 5)),
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
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U,
                    *chartInstance->c2_prev_land);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U,
                    *chartInstance->c2_prev_flag);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U,
                    *chartInstance->c2_prev_heading);
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U, (real_T)
                      (*chartInstance->c2_c_BW)[c2_i]);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  c2_chartstep_c2_flightControlSystem(chartInstance, &c2_st);
  c2_do_animation_call_c2_flightControlSystem(chartInstance);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 4U, *chartInstance->c2_flag);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 5U,
                    *chartInstance->c2_heading);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 6U, *chartInstance->c2_land);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 7U, *chartInstance->c2_xb);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 8U, *chartInstance->c2_yb);
}

static void mdl_start_c2_flightControlSystem
  (SFc2_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const int32_T c2_condTxtStartIdx[1] = { 1026 };

  static const int32_T c2_condTxtEndIdx[1] = { 1045 };

  static const int32_T c2_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_b_condTxtStartIdx[1] = { 1086 };

  static const int32_T c2_b_condTxtEndIdx[1] = { 1104 };

  static const int32_T c2_b_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_c_condTxtStartIdx[1] = { 1147 };

  static const int32_T c2_c_condTxtEndIdx[1] = { 1163 };

  static const int32_T c2_c_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_d_condTxtStartIdx[1] = { 1202 };

  static const int32_T c2_d_condTxtEndIdx[1] = { 1219 };

  static const int32_T c2_d_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_e_condTxtStartIdx[1] = { 1619 };

  static const int32_T c2_e_condTxtEndIdx[1] = { 1627 };

  static const int32_T c2_e_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_f_condTxtStartIdx[2] = { 1694, 1713 };

  static const int32_T c2_f_condTxtEndIdx[2] = { 1709, 1728 };

  static const int32_T c2_f_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c2_g_condTxtStartIdx[4] = { 2268, 2292, 2331, 2354 };

  static const int32_T c2_g_condTxtEndIdx[4] = { 2287, 2308, 2349, 2371 };

  static const int32_T c2_g_postfixPredicateTree[11] = { 0, -1, 1, -1, -3, 2, -1,
    3, -1, -3, -2 };

  static const int32_T c2_h_condTxtStartIdx[1] = { 2538 };

  static const int32_T c2_h_condTxtEndIdx[1] = { 2546 };

  static const int32_T c2_h_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_i_condTxtStartIdx[2] = { 2625, 2644 };

  static const int32_T c2_i_condTxtEndIdx[2] = { 2640, 2659 };

  static const int32_T c2_i_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c2_j_condTxtStartIdx[1] = { 5917 };

  static const int32_T c2_j_condTxtEndIdx[1] = { 5935 };

  static const int32_T c2_j_postfixPredicateTree[2] = { 0, -1 };

  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    18U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 4U, 0U, 20U, 0U,
                  0U, 0U, 3U, 0U, 15U, 10U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 8061);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, "find_circle",
                     3084, -1, 6496);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, "bias", 6502,
                     -1, 6592);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, "get_heading",
                     6598, -1, 8056);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 1022, 1045, -1,
                    1081);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 1082, 1104, -1,
                    1142);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 1143, 1163, -1,
                    1197);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 1198, 1219, -1,
                    1256);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 4U, 1399, 1411,
                    1437, 3078);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 5U, 1437, 1450,
                    1463, 3078);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 6U, 1463, 1476,
                    2025, 3078);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 7U, 1615, 1627,
                    1809, 2024);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 8U, 1691, 1728, -1,
                    1762);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 9U, 1870, 1888, -1,
                    2016);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 10U, 2025, 2038,
                    2939, 3078);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 11U, 2263, 2372,
                    2455, 2938);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 12U, 2534, 2546,
                    2760, 2930);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 13U, 2622, 2659, -1,
                    2701);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 14U, 5913, 5935, -1,
                    6050);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 15U, 6845, 6853, -1,
                    6908);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 16U, 7340, 7352,
                    7541, 7739);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 17U, 7369, 7389,
                    7456, 7528);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 18U, 7562, 7587,
                    7654, 7723);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 19U, 7965, 8000, -1,
                    8048);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 5019, 5043,
                     5331);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 5457, 5482,
                     6062);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 7026, 7040,
                     7751);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 1025, 1045,
                      1U, 0U, c2_condTxtStartIdx, c2_condTxtEndIdx, 2U,
                      c2_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 1085, 1104,
                      1U, 1U, c2_b_condTxtStartIdx, c2_b_condTxtEndIdx, 2U,
                      c2_b_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 1146, 1163,
                      1U, 2U, c2_c_condTxtStartIdx, c2_c_condTxtEndIdx, 2U,
                      c2_c_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 1201, 1219,
                      1U, 3U, c2_d_condTxtStartIdx, c2_d_condTxtEndIdx, 2U,
                      c2_d_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 4U, 1618, 1627,
                      1U, 4U, c2_e_condTxtStartIdx, c2_e_condTxtEndIdx, 2U,
                      c2_e_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 5U, 1694, 1728,
                      2U, 5U, c2_f_condTxtStartIdx, c2_f_condTxtEndIdx, 3U,
                      c2_f_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 6U, 2266, 2372,
                      4U, 7U, c2_g_condTxtStartIdx, c2_g_condTxtEndIdx, 11U,
                      c2_g_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 7U, 2537, 2546,
                      1U, 11U, c2_h_condTxtStartIdx, c2_h_condTxtEndIdx, 2U,
                      c2_h_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 8U, 2625, 2659,
                      2U, 12U, c2_i_condTxtStartIdx, c2_i_condTxtEndIdx, 3U,
                      c2_i_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 9U, 5916, 5935,
                      1U, 14U, c2_j_condTxtStartIdx, c2_j_condTxtEndIdx, 2U,
                      c2_j_postfixPredicateTree);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 1444,
    1450, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 1470,
    1476, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 1694,
    1709, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 1713,
    1728, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 4U, 1873,
    1888, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 5U, 2032,
    2038, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 6U, 2625,
    2640, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 7U, 2644,
    2659, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 8U, 6848,
    6853, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 9U, 7343,
    7352, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 10U, 7372,
    7389, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 11U, 7565,
    7587, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 12U, 7968,
    8000, -1, 4U);
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
  real_T c2_b_prev_flag;
  real_T c2_b_prev_land;
  real_T c2_b_x;
  real_T c2_c_x;
  real_T c2_d_x;
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
  boolean_T c2_b;
  int32_T c2_b_ii;
  int32_T c2_i8;
  int32_T c2_f_ii_data[160];
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
  int32_T c2_g_ii_data[120];
  int32_T c2_iv[2];
  int32_T c2_b_ii_size[1];
  int32_T c2_b_i_size[1];
  int32_T c2_b_loop_ub;
  int32_T c2_i12;
  real_T c2_b_i_data[120];
  int32_T c2_x_size[1];
  int32_T c2_c_loop_ub;
  int32_T c2_i13;
  boolean_T c2_b2;
  const mxArray *c2_y = NULL;
  int32_T c2_b_x_size[1];
  int32_T c2_d_loop_ub;
  const mxArray *c2_b_y = NULL;
  int32_T c2_i14;
  real_T c2_left_point;
  int32_T c2_i15;
  int32_T c2_c_idx;
  int32_T c2_e_ii;
  boolean_T c2_b3;
  int32_T c2_f_ii;
  int32_T c2_i16;
  int32_T c2_e_loop_ub;
  int32_T c2_i17;
  real_T c2_top_point;
  int32_T c2_i18;
  int32_T c2_d_idx;
  int32_T c2_g_ii;
  boolean_T c2_b4;
  int32_T c2_h_ii;
  int32_T c2_i19;
  int32_T c2_iv1[2];
  int32_T c2_f_loop_ub;
  int32_T c2_i20;
  int32_T c2_g_loop_ub;
  int32_T c2_i21;
  boolean_T c2_b5;
  const mxArray *c2_c_y = NULL;
  int32_T c2_c_x_size[1];
  int32_T c2_h_loop_ub;
  const mxArray *c2_d_y = NULL;
  int32_T c2_i22;
  real_T c2_right_point;
  int32_T c2_i23;
  real_T c2_e_x;
  real_T c2_ps[8];
  boolean_T c2_b_b;
  real_T c2_f_x;
  boolean_T c2_c_b;
  real_T c2_g_x;
  boolean_T c2_d_b;
  real_T c2_h_x;
  boolean_T c2_e_b;
  int32_T c2_i24;
  boolean_T c2_f_b[8];
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_iy;
  boolean_T c2_bv[4];
  int32_T c2_b_i1;
  int32_T c2_b_i2;
  int32_T c2_j;
  int32_T c2_trueCount;
  int32_T c2_c_a;
  int32_T c2_b_i;
  int32_T c2_d_a;
  int32_T c2_tmp_size[1];
  int32_T c2_e_a;
  int32_T c2_partialTrueCount;
  int32_T c2_c_i;
  int32_T c2_f_a;
  int32_T c2_g_b;
  int32_T c2_points_size[2];
  int32_T c2_g_a;
  int32_T c2_b_tmp_data[4];
  int32_T c2_h_b;
  int32_T c2_i27;
  boolean_T c2_overflow;
  real_T c2_p;
  int32_T c2_i_loop_ub;
  int32_T c2_i28;
  boolean_T c2_b6;
  real_T c2_i_x;
  real_T c2_d;
  int32_T c2_ix;
  real_T c2_j_x;
  real_T c2_b_land;
  int32_T c2_i29;
  boolean_T c2_i_b;
  real_T c2_points_data[8];
  real_T c2_k_x;
  const mxArray *c2_e_y = NULL;
  real_T c2_l_x;
  static char_T c2_b_cv[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  boolean_T c2_j_b;
  boolean_T c2_b7;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  static char_T c2_b_cv1[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o',
    'l', 'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  real_T c2_b_flag;
  const mxArray *c2_h_y = NULL;
  int32_T c2_b_points_size[2];
  real_T c2_m_x;
  real_T c2_n_x;
  real_T c2_i_y;
  real_T c2_unusedU0;
  boolean_T c2_k_b;
  real_T c2_o_x;
  int32_T c2_j_loop_ub;
  boolean_T c2_guard1 = false;
  real_T c2_j_y;
  int32_T c2_i30;
  boolean_T c2_guard2 = false;
  real_T c2_p_x;
  boolean_T c2_guard3 = false;
  boolean_T c2_l_b;
  real_T c2_b_points_data[10];
  real_T c2_c_heading;
  real_T c2_c_xb;
  real_T c2_c_yb;
  real_T c2_q_x;
  boolean_T c2_m_b;
  real_T c2_r_x;
  real_T c2_s_x;
  real_T c2_t_x;
  boolean_T c2_n_b;
  real_T c2_k_y;
  boolean_T c2_o_b;
  real_T c2_u_x;
  boolean_T c2_p_b;
  real_T c2_d_xb;
  real_T c2_v_x;
  boolean_T c2_q_b;
  real_T c2_d_yb;
  int32_T c2_c_points_size[2];
  boolean_T c2_r_b;
  real_T c2_l_y;
  real_T c2_w_x;
  int32_T c2_k_loop_ub;
  boolean_T c2_s_b;
  real_T c2_x_x;
  real_T c2_y_x;
  real_T c2_m_y;
  real_T c2_unusedU1;
  int32_T c2_i31;
  boolean_T c2_t_b;
  real_T c2_ab_x;
  real_T c2_n_y;
  real_T c2_bb_x;
  real_T c2_c_points_data[10];
  real_T c2_o_y;
  real_T c2_cb_x;
  real_T c2_d_heading;
  real_T c2_e_xb;
  real_T c2_e_yb;
  real_T c2_db_x;
  boolean_T c2_u_b;
  real_T c2_eb_x;
  real_T c2_fb_x;
  int32_T c2_d_points_size[2];
  real_T c2_p_y;
  int32_T c2_l_loop_ub;
  real_T c2_gb_x;
  int32_T c2_i32;
  real_T c2_q_y;
  real_T c2_hb_x;
  real_T c2_ib_x;
  real_T c2_d_points_data[10];
  real_T c2_f_xb;
  real_T c2_jb_x;
  real_T c2_e_heading;
  real_T c2_g_xb;
  real_T c2_f_yb;
  real_T c2_g_yb;
  real_T c2_r_y;
  real_T c2_kb_x;
  real_T c2_lb_x;
  real_T c2_mb_x;
  real_T c2_nb_x;
  real_T c2_ob_x;
  real_T c2_s_y;
  real_T c2_pb_x;
  real_T c2_t_y;
  real_T c2_qb_x;
  real_T c2_rb_x;
  real_T c2_sb_x;
  real_T c2_u_y;
  boolean_T c2_guard4 = false;
  real_T c2_tb_x;
  real_T c2_ub_x;
  real_T c2_vb_x;
  real_T c2_v_y;
  real_T c2_wb_x;
  real_T c2_xb_x;
  real_T c2_yb_x;
  real_T c2_w_y;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    chartInstance->c2_BW[c2_i] = (*chartInstance->c2_c_BW)[c2_i];
  }

  c2_b_prev_heading = *chartInstance->c2_prev_heading;
  c2_b_prev_flag = *chartInstance->c2_prev_flag;
  c2_b_prev_land = *chartInstance->c2_prev_land;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  c2_b_x = c2_b_prev_heading;
  c2_c_x = c2_b_x;
  c2_d_x = c2_c_x;
  c2_b_prev_heading = muDoubleScalarRem(c2_d_x, 6.2831853071795862);
  c2_b_heading = c2_b_prev_heading;
  c2_b_xb = 0.0;
  c2_b_yb = 0.0;
  c2_i1 = 0;
  for (c2_i2 = 0; c2_i2 < 160; c2_i2++) {
    c2_top[c2_i2] = chartInstance->c2_BW[c2_i1];
    c2_i1 += 120;
  }

  c2_i3 = 0;
  for (c2_i4 = 0; c2_i4 < 160; c2_i4++) {
    c2_bottom[c2_i4] = chartInstance->c2_BW[c2_i3 + 119];
    c2_i3 += 120;
  }

  for (c2_i5 = 0; c2_i5 < 120; c2_i5++) {
    c2_right[c2_i5] = chartInstance->c2_BW[c2_i5 + 19080];
  }

  for (c2_i6 = 0; c2_i6 < 120; c2_i6++) {
    c2_left[c2_i6] = chartInstance->c2_BW[c2_i6];
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
      c2_f_ii_data[c2_idx - 1] = c2_b_ii;
      if (c2_idx >= 160) {
        c2_exitg1 = true;
      } else {
        c2_ii++;
      }
    } else {
      c2_ii++;
    }
  }

  c2_b = (1 > c2_idx);
  if (c2_b) {
    c2_i8 = 0;
  } else {
    c2_i8 = c2_idx;
  }

  c2_ii_size[1] = c2_i8;
  c2_i_size[0] = 1;
  c2_i_size[1] = c2_ii_size[1];
  c2_loop_ub = c2_ii_size[0] * c2_ii_size[1] - 1;
  for (c2_i9 = 0; c2_i9 <= c2_loop_ub; c2_i9++) {
    c2_i_data[c2_i9] = (real_T)c2_f_ii_data[c2_i9];
  }

  c2_st.site = &c2_emlrtRSI;
  c2_bottom_point = c2_mean(chartInstance, &c2_st, c2_i_data, c2_i_size);
  c2_st.site = &c2_emlrtRSI;
  for (c2_i10 = 0; c2_i10 < 120; c2_i10++) {
    c2_left[c2_i10] = !c2_left[c2_i10];
  }

  c2_b_st.site = &c2_m_emlrtRSI;
  c2_c_st.site = &c2_n_emlrtRSI;
  c2_b_idx = 0;
  c2_c_ii = 1;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_c_ii - 1 < 120)) {
    c2_d_ii = c2_c_ii;
    if (c2_left[c2_d_ii - 1]) {
      c2_b_idx++;
      c2_g_ii_data[c2_b_idx - 1] = c2_d_ii;
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

  c2_iv[0] = 1;
  c2_iv[1] = c2_i11;
  c2_d_st.site = &c2_o_emlrtRSI;
  c2_indexShapeCheck(chartInstance, &c2_d_st, 120, c2_iv);
  c2_b_ii_size[0] = c2_i11;
  c2_b_i_size[0] = c2_b_ii_size[0];
  c2_b_loop_ub = c2_b_ii_size[0] - 1;
  for (c2_i12 = 0; c2_i12 <= c2_b_loop_ub; c2_i12++) {
    c2_b_i_data[c2_i12] = (real_T)c2_g_ii_data[c2_i12];
  }

  c2_st.site = &c2_emlrtRSI;
  c2_x_size[0] = c2_b_i_size[0];
  c2_c_loop_ub = c2_b_i_size[0] - 1;
  for (c2_i13 = 0; c2_i13 <= c2_c_loop_ub; c2_i13++) {
    chartInstance->c2_x_data[c2_i13] = c2_b_i_data[c2_i13];
  }

  if ((c2_x_size[0] == 1) || ((real_T)c2_x_size[0] != 1.0)) {
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

  c2_b_x_size[0] = c2_x_size[0];
  c2_d_loop_ub = c2_x_size[0] - 1;
  for (c2_i14 = 0; c2_i14 <= c2_d_loop_ub; c2_i14++) {
    chartInstance->c2_b_x_data[c2_i14] = chartInstance->c2_x_data[c2_i14];
  }

  c2_left_point = c2_combineVectorElements(chartInstance,
    chartInstance->c2_b_x_data, c2_b_x_size) / (real_T)c2_x_size[0];
  for (c2_i15 = 0; c2_i15 < 160; c2_i15++) {
    c2_top[c2_i15] = !c2_top[c2_i15];
  }

  c2_c_idx = 0;
  c2_ii_size[0] = 1;
  c2_e_ii = 1;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_e_ii - 1 < 160)) {
    c2_f_ii = c2_e_ii;
    if (c2_top[c2_f_ii - 1]) {
      c2_c_idx++;
      c2_f_ii_data[c2_c_idx - 1] = c2_f_ii;
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
    c2_i16 = 0;
  } else {
    c2_i16 = c2_c_idx;
  }

  c2_ii_size[1] = c2_i16;
  c2_i_size[0] = 1;
  c2_i_size[1] = c2_ii_size[1];
  c2_e_loop_ub = c2_ii_size[0] * c2_ii_size[1] - 1;
  for (c2_i17 = 0; c2_i17 <= c2_e_loop_ub; c2_i17++) {
    c2_i_data[c2_i17] = (real_T)c2_f_ii_data[c2_i17];
  }

  c2_st.site = &c2_b_emlrtRSI;
  c2_top_point = c2_mean(chartInstance, &c2_st, c2_i_data, c2_i_size);
  c2_st.site = &c2_b_emlrtRSI;
  for (c2_i18 = 0; c2_i18 < 120; c2_i18++) {
    c2_right[c2_i18] = !c2_right[c2_i18];
  }

  c2_b_st.site = &c2_m_emlrtRSI;
  c2_c_st.site = &c2_n_emlrtRSI;
  c2_d_idx = 0;
  c2_g_ii = 1;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_g_ii - 1 < 120)) {
    c2_h_ii = c2_g_ii;
    if (c2_right[c2_h_ii - 1]) {
      c2_d_idx++;
      c2_g_ii_data[c2_d_idx - 1] = c2_h_ii;
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
    c2_i19 = 0;
  } else {
    c2_i19 = c2_d_idx;
  }

  c2_iv1[0] = 1;
  c2_iv1[1] = c2_i19;
  c2_d_st.site = &c2_o_emlrtRSI;
  c2_indexShapeCheck(chartInstance, &c2_d_st, 120, c2_iv1);
  c2_b_ii_size[0] = c2_i19;
  c2_b_i_size[0] = c2_b_ii_size[0];
  c2_f_loop_ub = c2_b_ii_size[0] - 1;
  for (c2_i20 = 0; c2_i20 <= c2_f_loop_ub; c2_i20++) {
    c2_b_i_data[c2_i20] = (real_T)c2_g_ii_data[c2_i20];
  }

  c2_st.site = &c2_b_emlrtRSI;
  c2_x_size[0] = c2_b_i_size[0];
  c2_g_loop_ub = c2_b_i_size[0] - 1;
  for (c2_i21 = 0; c2_i21 <= c2_g_loop_ub; c2_i21++) {
    chartInstance->c2_x_data[c2_i21] = c2_b_i_data[c2_i21];
  }

  if ((c2_x_size[0] == 1) || ((real_T)c2_x_size[0] != 1.0)) {
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

  c2_c_x_size[0] = c2_x_size[0];
  c2_h_loop_ub = c2_x_size[0] - 1;
  for (c2_i22 = 0; c2_i22 <= c2_h_loop_ub; c2_i22++) {
    chartInstance->c2_c_x_data[c2_i22] = chartInstance->c2_x_data[c2_i22];
  }

  c2_right_point = c2_combineVectorElements(chartInstance,
    chartInstance->c2_c_x_data, c2_c_x_size) / (real_T)c2_x_size[0];
  for (c2_i23 = 0; c2_i23 < 8; c2_i23++) {
    c2_ps[c2_i23] = rtNaN;
  }

  c2_e_x = c2_bottom_point;
  c2_b_b = muDoubleScalarIsNaN(c2_e_x);
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 0, covrtEmlMcdcEval
                     (chartInstance->c2_covrtInstance, 4U, 0, 0,
                      !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0,
         0, c2_b_b)))) {
    c2_ps[0] = c2_bottom_point;
    c2_ps[4] = 1.0;
  }

  c2_f_x = c2_right_point;
  c2_c_b = muDoubleScalarIsNaN(c2_f_x);
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 1, covrtEmlMcdcEval
                     (chartInstance->c2_covrtInstance, 4U, 0, 1,
                      !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0,
         1, c2_c_b)))) {
    c2_ps[1] = 160.0;
    c2_ps[5] = 120.0 - c2_right_point;
  }

  c2_g_x = c2_top_point;
  c2_d_b = muDoubleScalarIsNaN(c2_g_x);
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 2, covrtEmlMcdcEval
                     (chartInstance->c2_covrtInstance, 4U, 0, 2,
                      !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0,
         2, c2_d_b)))) {
    c2_ps[2] = c2_top_point;
    c2_ps[6] = 120.0;
  }

  c2_h_x = c2_left_point;
  c2_e_b = muDoubleScalarIsNaN(c2_h_x);
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 3, covrtEmlMcdcEval
                     (chartInstance->c2_covrtInstance, 4U, 0, 3,
                      !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0,
         3, c2_e_b)))) {
    c2_ps[3] = 1.0;
    c2_ps[7] = 120.0 - c2_left_point;
  }

  for (c2_i24 = 0; c2_i24 < 8; c2_i24++) {
    c2_f_b[c2_i24] = muDoubleScalarIsNaN(c2_ps[c2_i24]);
  }

  c2_st.site = &c2_c_emlrtRSI;
  for (c2_i25 = 0; c2_i25 < 8; c2_i25++) {
    c2_f_b[c2_i25] = !c2_f_b[c2_i25];
  }

  c2_b_st.site = &c2_q_emlrtRSI;
  for (c2_i26 = 0; c2_i26 < 4; c2_i26++) {
    c2_bv[c2_i26] = false;
  }

  c2_iy = -1;
  c2_b_i1 = 0;
  c2_b_i2 = 4;
  for (c2_j = 0; c2_j < 4; c2_j++) {
    c2_c_a = c2_b_i1 + 1;
    c2_b_i1 = c2_c_a;
    c2_d_a = c2_b_i2 + 1;
    c2_b_i2 = c2_d_a;
    c2_e_a = c2_iy + 1;
    c2_iy = c2_e_a;
    c2_c_st.site = &c2_r_emlrtRSI;
    c2_f_a = c2_b_i1;
    c2_g_b = c2_b_i2;
    c2_g_a = c2_f_a;
    c2_h_b = c2_g_b;
    if (c2_g_a > c2_h_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_h_b > 2147483643);
    }

    if (c2_overflow) {
      c2_d_st.site = &c2_s_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    c2_ix = c2_b_i1;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_ix <= c2_b_i2)) {
      if (!c2_f_b[c2_ix - 1]) {
        c2_b7 = true;
      } else {
        c2_b7 = false;
      }

      if (!c2_b7) {
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
      c2_b_tmp_data[c2_partialTrueCount] = c2_c_i + 1;
      c2_partialTrueCount++;
    }

    c2_c_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_points_size[0] = c2_tmp_size[0];
  c2_points_size[1] = 2;
  for (c2_i27 = 0; c2_i27 < 2; c2_i27++) {
    c2_i_loop_ub = c2_tmp_size[0] - 1;
    for (c2_i28 = 0; c2_i28 <= c2_i_loop_ub; c2_i28++) {
      c2_d = (real_T)c2_b_tmp_data[c2_i28];
      c2_i29 = (int32_T)emlrtIntegerCheckR2012b(c2_d, &c2_emlrtDCI, c2_sp);
      c2_points_data[c2_i28 + c2_points_size[0] * c2_i27] = c2_ps
        [(emlrtDynamicBoundsCheckR2012b(c2_i29, 1, 4, &c2_emlrtBCI, c2_sp) +
          (c2_i27 << 2)) - 1];
    }
  }

  c2_p = (real_T)c2_points_size[0];
  if ((c2_p == 0.0) && (c2_b_prev_flag == 0.0)) {
    c2_b6 = true;
  } else {
    c2_st.site = &c2_d_emlrtRSI;
    c2_i_x = c2_b_prev_land;
    c2_j_x = c2_i_x;
    c2_i_b = muDoubleScalarIsNaN(c2_j_x);
    if (c2_i_b) {
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
        19), false);
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
        19), false);
      sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_e_y, 14, sf_mex_call(&c2_st,
        "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14,
        c2_f_y)));
    }

    if (c2_b_prev_land != 0.0) {
      c2_b6 = true;
    } else {
      c2_b6 = false;
    }
  }

  c2_b_land = (real_T)c2_b6;
  c2_st.site = &c2_e_emlrtRSI;
  c2_k_x = c2_b_prev_land;
  c2_l_x = c2_k_x;
  c2_j_b = muDoubleScalarIsNaN(c2_l_x);
  if (c2_j_b) {
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    c2_h_y = NULL;
    sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_g_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_h_y)));
  }

  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 4, c2_b_prev_land
                     != 0.0)) {
    c2_b_flag = 0.0;
  } else if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 5,
              covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U, 0U,
    0U, c2_p, 0.0, -1, 0U, c2_p == 0.0))) {
    c2_b_flag = -1.0;
  } else if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 6,
              covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U, 0U,
    1U, c2_p, 1.0, -1, 0U, c2_p == 1.0))) {
    c2_st.site = &c2_f_emlrtRSI;
    c2_find_circle(chartInstance, &c2_st, chartInstance->c2_BW, &c2_n_x, &c2_i_y,
                   &c2_unusedU0);
    c2_o_x = c2_n_x;
    c2_j_y = c2_i_y;
    c2_p_x = c2_o_x;
    c2_l_b = muDoubleScalarIsNaN(c2_p_x);
    if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 7,
                       covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0,
          4, !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 4, c2_l_b))))
    {
      c2_b_flag = 0.0;
      c2_st.site = &c2_g_emlrtRSI;
      c2_s_x = c2_o_x;
      c2_k_y = 120.0 - c2_j_y;
      covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 2);
      c2_d_xb = -(80.0 - c2_s_x) / 160.0;
      c2_d_yb = -(60.0 - c2_k_y) / 120.0;
      c2_b_xb = c2_d_xb;
      c2_b_yb = c2_d_yb;
      c2_x_x = c2_b_xb;
      c2_ab_x = c2_x_x;
      c2_bb_x = c2_ab_x;
      c2_o_y = muDoubleScalarAbs(c2_bb_x);
      c2_db_x = c2_b_xb;
      c2_eb_x = c2_db_x;
      c2_fb_x = c2_eb_x;
      c2_p_y = muDoubleScalarAbs(c2_fb_x);
      c2_guard1 = false;
      if (covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 5,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c2_covrtInstance, 4U, 0U, 2U, c2_o_y,
                            0.035, -1, 2U, c2_p_y < 0.035))) {
        c2_hb_x = c2_b_yb;
        c2_ib_x = c2_hb_x;
        c2_jb_x = c2_ib_x;
        c2_r_y = muDoubleScalarAbs(c2_jb_x);
        c2_kb_x = c2_b_yb;
        c2_lb_x = c2_kb_x;
        c2_nb_x = c2_lb_x;
        c2_s_y = muDoubleScalarAbs(c2_nb_x);
        if (covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 6,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c2_covrtInstance, 4U, 0U, 3U,
                              c2_r_y, 0.035, -1, 2U, c2_s_y < 0.035))) {
          covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 5, true);
          covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 8, true);
          c2_b_land = 1.0;
        } else {
          c2_guard1 = true;
        }
      } else {
        c2_guard1 = true;
      }

      if (c2_guard1) {
        covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 5, false);
        covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 8, false);
      }

      c2_b_xb *= 0.5;
      c2_b_yb *= 0.5;
    } else {
      c2_b_flag = 1.0;
      if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 9,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c2_covrtInstance, 4U, 0U, 4U,
                          c2_b_prev_flag, -1.0, -1, 0U, c2_b_prev_flag == -1.0)))
      {
        c2_r_x = c2_top_point;
        c2_n_b = muDoubleScalarIsNaN(c2_r_x);
        c2_u_x = c2_left_point;
        c2_p_b = muDoubleScalarIsNaN(c2_u_x);
        c2_q_b = !c2_p_b;
        c2_l_y = 2.0 * (real_T)c2_q_b;
        c2_w_x = c2_bottom_point;
        c2_s_b = muDoubleScalarIsNaN(c2_w_x);
        c2_t_b = !c2_s_b;
        c2_n_y = 3.0 * (real_T)c2_t_b;
        c2_b_heading = 1.5707963267948966 * (((real_T)!c2_n_b + c2_l_y) + c2_n_y);
      }
    }
  } else if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 10,
              covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U, 0U,
    5U, c2_p, 2.0, -1, 0U, c2_p == 2.0))) {
    c2_m_x = c2_bottom_point;
    c2_k_b = muDoubleScalarIsNaN(c2_m_x);
    c2_guard1 = false;
    c2_guard2 = false;
    c2_guard3 = false;
    if (!covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 7, c2_k_b)) {
      c2_q_x = c2_top_point;
      c2_m_b = muDoubleScalarIsNaN(c2_q_x);
      if (!covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 8, c2_m_b))
      {
        c2_guard2 = true;
      } else {
        c2_guard3 = true;
      }
    } else {
      c2_guard3 = true;
    }

    if (c2_guard3) {
      c2_t_x = c2_right_point;
      c2_o_b = muDoubleScalarIsNaN(c2_t_x);
      if (!covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 9, c2_o_b))
      {
        c2_v_x = c2_left_point;
        c2_r_b = muDoubleScalarIsNaN(c2_v_x);
        if (!covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 10, c2_r_b))
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
      covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 6, true);
      covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 11, true);
      c2_c_points_size[0] = c2_points_size[0];
      c2_c_points_size[1] = 2;
      c2_k_loop_ub = c2_points_size[0] * c2_points_size[1] - 1;
      for (c2_i31 = 0; c2_i31 <= c2_k_loop_ub; c2_i31++) {
        c2_c_points_data[c2_i31] = c2_points_data[c2_i31];
      }

      c2_st.site = &c2_h_emlrtRSI;
      c2_get_heading(chartInstance, &c2_st, c2_p, c2_c_points_data,
                     c2_c_points_size, c2_b_prev_heading, &c2_d_heading,
                     &c2_e_xb, &c2_e_yb);
      c2_b_flag = 1.0;
      c2_b_heading = c2_d_heading;
      c2_b_xb = c2_e_xb;
      c2_b_yb = c2_e_yb;
    }

    if (c2_guard1) {
      covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 6, false);
      covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 11, false);
      c2_st.site = &c2_i_emlrtRSI;
      c2_find_circle(chartInstance, &c2_st, chartInstance->c2_BW, &c2_y_x,
                     &c2_m_y, &c2_unusedU1);
      c2_o_x = c2_y_x;
      c2_j_y = c2_m_y;
      c2_cb_x = c2_o_x;
      c2_u_b = muDoubleScalarIsNaN(c2_cb_x);
      if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 12,
                         covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0,
            7, !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 11,
             c2_u_b)))) {
        c2_b_flag = 0.0;
        c2_st.site = &c2_j_emlrtRSI;
        c2_gb_x = c2_o_x;
        c2_q_y = 120.0 - c2_j_y;
        covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 2);
        c2_f_xb = -(80.0 - c2_gb_x) / 160.0;
        c2_g_yb = -(60.0 - c2_q_y) / 120.0;
        c2_b_xb = c2_f_xb;
        c2_b_yb = c2_g_yb;
        c2_mb_x = c2_b_xb;
        c2_ob_x = c2_mb_x;
        c2_pb_x = c2_ob_x;
        c2_t_y = muDoubleScalarAbs(c2_pb_x);
        c2_qb_x = c2_b_xb;
        c2_rb_x = c2_qb_x;
        c2_sb_x = c2_rb_x;
        c2_u_y = muDoubleScalarAbs(c2_sb_x);
        c2_guard4 = false;
        if (covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 12,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c2_covrtInstance, 4U, 0U, 6U,
                              c2_t_y, 0.035, -1, 2U, c2_u_y < 0.035))) {
          c2_tb_x = c2_b_yb;
          c2_ub_x = c2_tb_x;
          c2_vb_x = c2_ub_x;
          c2_v_y = muDoubleScalarAbs(c2_vb_x);
          c2_wb_x = c2_b_yb;
          c2_xb_x = c2_wb_x;
          c2_yb_x = c2_xb_x;
          c2_w_y = muDoubleScalarAbs(c2_yb_x);
          if (covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 13,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c2_covrtInstance, 4U, 0U, 7U,
                                c2_v_y, 0.035, -1, 2U, c2_w_y < 0.035))) {
            covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 8, true);
            covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 13, true);
            c2_b_land = 1.0;
          } else {
            c2_guard4 = true;
          }
        } else {
          c2_guard4 = true;
        }

        if (c2_guard4) {
          covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 8, false);
          covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 13, false);
        }

        c2_b_xb *= 0.5;
        c2_b_yb *= 0.5;
      } else {
        c2_d_points_size[0] = c2_points_size[0];
        c2_d_points_size[1] = 2;
        c2_l_loop_ub = c2_points_size[0] * c2_points_size[1] - 1;
        for (c2_i32 = 0; c2_i32 <= c2_l_loop_ub; c2_i32++) {
          c2_d_points_data[c2_i32] = c2_points_data[c2_i32];
        }

        c2_st.site = &c2_k_emlrtRSI;
        c2_get_heading(chartInstance, &c2_st, c2_p, c2_d_points_data,
                       c2_d_points_size, c2_b_prev_heading, &c2_e_heading,
                       &c2_g_xb, &c2_f_yb);
        c2_b_flag = 1.0;
        c2_b_heading = c2_e_heading;
        c2_b_xb = c2_g_xb;
        c2_b_yb = c2_f_yb;
      }
    }
  } else {
    c2_b_points_size[0] = c2_points_size[0];
    c2_b_points_size[1] = 2;
    c2_j_loop_ub = c2_points_size[0] * c2_points_size[1] - 1;
    for (c2_i30 = 0; c2_i30 <= c2_j_loop_ub; c2_i30++) {
      c2_b_points_data[c2_i30] = c2_points_data[c2_i30];
    }

    c2_st.site = &c2_l_emlrtRSI;
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
  *chartInstance->c2_land = c2_b_land;
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
                      const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
                      c2_x_size[2])
{
  boolean_T c2_b;
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
  c2_b = (c2_x_size[1] == 1);
  if (c2_b || ((real_T)c2_x_size[1] != 1.0)) {
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
    c2_d_y = c2_n_x_data[0];
    for (c2_k = 1; c2_k < c2_b_vlen; c2_k++) {
      c2_xoffset = c2_k + 1;
      c2_ix = c2_xoffset - 1;
      c2_d_y += c2_n_x_data[c2_ix];
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
  *chartInstance, const emlrtStack *c2_sp, int32_T c2_matrixSize, int32_T
  c2_indexSize[2])
{
  emlrtStack c2_st;
  int32_T c2_size1;
  boolean_T c2_b;
  boolean_T c2_c;
  boolean_T c2_nonSingletonDimFound;
  boolean_T c2_b_c;
  boolean_T c2_b_b;
  const mxArray *c2_y = NULL;
  static char_T c2_b_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  const mxArray *c2_b_y = NULL;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_size1 = c2_matrixSize;
  if (c2_size1 != 1) {
    c2_b = false;
  } else {
    c2_b = true;
  }

  if (c2_b) {
    c2_nonSingletonDimFound = false;
    if (c2_indexSize[1] != 1) {
      c2_nonSingletonDimFound = true;
    }

    c2_b_b = c2_nonSingletonDimFound;
    if (c2_b_b) {
      c2_c = true;
    } else {
      c2_c = false;
    }
  } else {
    c2_c = false;
  }

  c2_st.site = &c2_p_emlrtRSI;
  c2_b_c = c2_c;
  if (c2_b_c) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_b_y)));
  }
}

static real_T c2_b_mean(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T c2_x_size[1])
{
  boolean_T c2_b;
  const mxArray *c2_b_y = NULL;
  int32_T c2_b_x_size[1];
  int32_T c2_loop_ub;
  const mxArray *c2_c_y = NULL;
  int32_T c2_i;
  if ((c2_x_size[0] == 1) || ((real_T)c2_x_size[0] != 1.0)) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  if (!c2_b) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_b_y, 14, sf_mex_call(c2_sp,
      "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 1U, 14, c2_c_y)));
  }

  c2_b_x_size[0] = c2_x_size[0];
  c2_loop_ub = c2_x_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    chartInstance->c2_m_x_data[c2_i] = c2_n_x_data[c2_i];
  }

  return c2_combineVectorElements(chartInstance, chartInstance->c2_m_x_data,
    c2_b_x_size) / (real_T)c2_x_size[0];
}

static real_T c2_combineVectorElements(SFc2_flightControlSystemInstanceStruct
  *chartInstance, real_T c2_n_x_data[], int32_T c2_x_size[1])
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
    c2_y = c2_n_x_data[0];
    for (c2_k = 1; c2_k < c2_b_vlen; c2_k++) {
      c2_xoffset = c2_k + 1;
      c2_ix = c2_xoffset - 1;
      c2_y += c2_n_x_data[c2_ix];
    }
  }

  return c2_y;
}

static void c2_find_circle(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_d_BW[19200], real_T *c2_xc, real_T
  *c2_yc, real_T *c2_r)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_ii_size[1];
  int32_T c2_jj_size[1];
  int32_T c2_E_y_size[1];
  int32_T c2_loop_ub;
  int32_T c2_i3;
  int32_T c2_E_x_size[1];
  int32_T c2_b_loop_ub;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  real_T c2_b_dv[121];
  real_T c2_dv1[121];
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_b_i;
  int32_T c2_c_i;
  real_T c2_d;
  int32_T c2_b_ii_size[1];
  int32_T c2_b_jj_size[1];
  int32_T c2_R_size[1];
  int32_T c2_i10;
  int32_T c2_CC_y_size[1];
  int32_T c2_c_loop_ub;
  int32_T c2_i11;
  int32_T c2_CC_x_size[1];
  int32_T c2_d_loop_ub;
  int32_T c2_i12;
  int32_T c2_b_varargin_1;
  int32_T c2_c_varargin_1;
  real_T c2_d1;
  int32_T c2_i13;
  int32_T c2_d_i;
  real_T c2_e_i;
  int32_T c2_i14;
  int32_T c2_radius;
  real_T c2_E_y;
  int32_T c2_cc_votes_size[1];
  int32_T c2_exitg1;
  int32_T c2_e_loop_ub;
  int32_T c2_i15;
  real_T c2_b_radius;
  int32_T c2_i16;
  real_T c2_d2;
  real_T c2_E_x;
  int32_T c2_i17;
  int32_T c2_varargin_2_size[1];
  int32_T c2_c_radius;
  int32_T c2_f_loop_ub;
  static char_T c2_b_cv[2] = { 'o', 'n' };

  int32_T c2_i18;
  int32_T c2_i19;
  static char_T c2_b_cv1[2] = { 'y', 'x' };

  static char_T c2_b_cv2[3] = { 'o', 'f', 'f' };

  real_T c2_twoPiR;
  int32_T c2_i20;
  int32_T c2_varargin_3_size[1];
  int32_T c2_f_i;
  int32_T c2_g_loop_ub;
  int32_T c2_i21;
  int32_T c2_g_i;
  int32_T c2_b_cc_votes_size[1];
  int32_T c2_h_loop_ub;
  int32_T c2_i22;
  real_T c2_d3;
  int32_T c2_c_ii_size[1];
  int32_T c2_c_jj_size[1];
  int32_T c2_radii_all_size[1];
  int32_T c2_i23;
  int32_T c2_yy_size[1];
  int32_T c2_i_loop_ub;
  real_T c2_cc_votes[2];
  int32_T c2_i24;
  real_T c2_varargin_2[2];
  int32_T c2_xx_size[1];
  int32_T c2_j_loop_ub;
  int32_T c2_i25;
  int32_T c2_b_varargin_2_size[1];
  int32_T c2_k_loop_ub;
  int32_T c2_b_xx_size[1];
  int32_T c2_i26;
  int32_T c2_l_loop_ub;
  int32_T c2_i27;
  real_T c2_b_cc_votes[2];
  int32_T c2_b_yy_size[1];
  real_T c2_varargin_3[2];
  int32_T c2_m_loop_ub;
  int32_T c2_i28;
  int32_T c2_b_varargin_3_size[1];
  int32_T c2_n_loop_ub;
  int32_T c2_i29;
  int32_T c2_o_loop_ub;
  int32_T c2_i30;
  int32_T c2_p_loop_ub;
  int32_T c2_i31;
  int32_T c2_q_loop_ub;
  int32_T c2_i32;
  int32_T c2_r_loop_ub;
  int32_T c2_i33;
  int32_T c2_s_loop_ub;
  int32_T c2_i34;
  int32_T c2_t_loop_ub;
  int32_T c2_i35;
  int32_T c2_u_loop_ub;
  int32_T c2_i36;
  int32_T c2_v_loop_ub;
  int32_T c2_i37;
  int32_T c2_w_loop_ub;
  int32_T c2_i38;
  int32_T c2_x_loop_ub;
  int32_T c2_i39;
  int32_T c2_y_loop_ub;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_ab_loop_ub;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_bb_loop_ub;
  int32_T c2_i44;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 1);
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    chartInstance->c2_b_BW[c2_i] = c2_d_BW[c2_i];
  }

  c2_st.site = &c2_t_emlrtRSI;
  c2_edge(chartInstance, &c2_st, chartInstance->c2_b_BW,
          chartInstance->c2_edgeimage);
  for (c2_i1 = 0; c2_i1 < 2688000; c2_i1++) {
    chartInstance->c2_HoughSpace[c2_i1] = 0.0;
  }

  c2_st.site = &c2_u_emlrtRSI;
  for (c2_i2 = 0; c2_i2 < 19200; c2_i2++) {
    chartInstance->c2_b_edgeimage[c2_i2] = chartInstance->c2_edgeimage[c2_i2];
  }

  c2_b_st.site = &c2_xb_emlrtRSI;
  c2_eml_find(chartInstance, &c2_b_st, chartInstance->c2_b_edgeimage,
              chartInstance->c2_b_ii_data, c2_ii_size,
              chartInstance->c2_b_jj_data, c2_jj_size);
  c2_E_y_size[0] = c2_ii_size[0];
  c2_loop_ub = c2_ii_size[0] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_loop_ub; c2_i3++) {
    chartInstance->c2_E_y_data[c2_i3] = (real_T)chartInstance->
      c2_b_ii_data[c2_i3];
  }

  c2_E_x_size[0] = c2_jj_size[0];
  c2_b_loop_ub = c2_jj_size[0] - 1;
  for (c2_i4 = 0; c2_i4 <= c2_b_loop_ub; c2_i4++) {
    chartInstance->c2_E_x_data[c2_i4] = (real_T)chartInstance->
      c2_b_jj_data[c2_i4];
  }

  for (c2_i5 = 0; c2_i5 < 121; c2_i5++) {
    c2_b_dv[c2_i5] = (real_T)c2_i5;
  }

  for (c2_i6 = 0; c2_i6 < 121; c2_i6++) {
    c2_dv1[c2_i6] = (real_T)c2_i6;
  }

  c2_meshgrid(chartInstance, c2_b_dv, c2_dv1, chartInstance->c2_X,
              chartInstance->c2_Y);
  for (c2_i7 = 0; c2_i7 < 14641; c2_i7++) {
    chartInstance->c2_b_X[c2_i7] = chartInstance->c2_X[c2_i7] - 60.0;
  }

  c2_power(chartInstance, chartInstance->c2_b_X, chartInstance->c2_Radii);
  for (c2_i8 = 0; c2_i8 < 14641; c2_i8++) {
    chartInstance->c2_b_Y[c2_i8] = chartInstance->c2_Y[c2_i8] - 60.0;
  }

  c2_power(chartInstance, chartInstance->c2_b_Y, chartInstance->c2_X);
  for (c2_i9 = 0; c2_i9 < 14641; c2_i9++) {
    chartInstance->c2_Radii[c2_i9] += chartInstance->c2_X[c2_i9];
  }

  c2_st.site = &c2_v_emlrtRSI;
  c2_b_sqrt(chartInstance, &c2_st, chartInstance->c2_Radii);
  c2_d_round(chartInstance, chartInstance->c2_Radii);
  c2_b_i = 0;
  while (c2_b_i <= 14640) {
    c2_b_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_c_i = 0;
  while (c2_c_i <= 14640) {
    if ((chartInstance->c2_Radii[c2_c_i] < 21.0) || (chartInstance->
         c2_Radii[c2_c_i] > 60.0)) {
      c2_d = (real_T)(c2_c_i + 1);
      c2_i10 = (int32_T)emlrtIntegerCheckR2012b(c2_d, &c2_c_emlrtDCI, c2_sp);
      chartInstance->c2_Radii[emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 14641,
        &c2_c_emlrtBCI, c2_sp) - 1] = 0.0;
    }

    c2_c_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_st.site = &c2_w_emlrtRSI;
  c2_b_st.site = &c2_ad_emlrtRSI;
  c2_d_eml_find(chartInstance, &c2_b_st, chartInstance->c2_Radii,
                chartInstance->c2_e_ii_data, c2_b_ii_size,
                chartInstance->c2_d_jj_data, c2_b_jj_size,
                chartInstance->c2_R_data, c2_R_size);
  c2_CC_y_size[0] = c2_b_ii_size[0];
  c2_c_loop_ub = c2_b_ii_size[0] - 1;
  for (c2_i11 = 0; c2_i11 <= c2_c_loop_ub; c2_i11++) {
    chartInstance->c2_CC_y_data[c2_i11] = (real_T)chartInstance->
      c2_e_ii_data[c2_i11];
  }

  c2_CC_x_size[0] = c2_b_jj_size[0];
  c2_d_loop_ub = c2_b_jj_size[0] - 1;
  for (c2_i12 = 0; c2_i12 <= c2_d_loop_ub; c2_i12++) {
    chartInstance->c2_CC_x_data[c2_i12] = (real_T)chartInstance->
      c2_d_jj_data[c2_i12];
  }

  c2_b_varargin_1 = c2_E_x_size[0];
  c2_c_varargin_1 = c2_b_varargin_1;
  c2_d1 = (real_T)c2_c_varargin_1;
  c2_i13 = (int32_T)c2_d1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, c2_d1, mxDOUBLE_CLASS, c2_i13,
    &c2_gd_emlrtRTEI, c2_sp);
  c2_d_i = 0;
  while (c2_d_i <= c2_i13 - 1) {
    c2_e_i = 1.0 + (real_T)c2_d_i;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 0, 1);
    c2_st.site = &c2_x_emlrtRSI;
    c2_i14 = (int32_T)emlrtIntegerCheckR2012b(c2_e_i, &c2_d_emlrtDCI, &c2_st);
    c2_E_y = chartInstance->c2_E_y_data[emlrtDynamicBoundsCheckR2012b(c2_i14, 1,
      c2_E_y_size[0], &c2_d_emlrtBCI, &c2_st) - 1];
    c2_cc_votes_size[0] = c2_CC_y_size[0];
    c2_e_loop_ub = c2_CC_y_size[0] - 1;
    for (c2_i15 = 0; c2_i15 <= c2_e_loop_ub; c2_i15++) {
      chartInstance->c2_b_cc_votes_data[c2_i15] = (chartInstance->
        c2_CC_y_data[c2_i15] + c2_E_y) - 1.0;
    }

    c2_i16 = (int32_T)emlrtIntegerCheckR2012b(c2_e_i, &c2_e_emlrtDCI, &c2_st);
    c2_E_x = chartInstance->c2_E_x_data[emlrtDynamicBoundsCheckR2012b(c2_i16, 1,
      c2_E_x_size[0], &c2_e_emlrtBCI, &c2_st) - 1];
    c2_varargin_2_size[0] = c2_CC_x_size[0];
    c2_f_loop_ub = c2_CC_x_size[0] - 1;
    for (c2_i19 = 0; c2_i19 <= c2_f_loop_ub; c2_i19++) {
      chartInstance->c2_d_varargin_2_data[c2_i19] = (chartInstance->
        c2_CC_x_data[c2_i19] + c2_E_x) - 1.0;
    }

    c2_varargin_3_size[0] = c2_R_size[0];
    c2_g_loop_ub = c2_R_size[0] - 1;
    for (c2_i21 = 0; c2_i21 <= c2_g_loop_ub; c2_i21++) {
      chartInstance->c2_b_varargin_3_data[c2_i21] = (chartInstance->
        c2_R_data[c2_i21] - 21.0) + 1.0;
    }

    c2_b_st.site = &c2_nc_emlrtRSI;
    c2_b_cc_votes_size[0] = c2_cc_votes_size[0];
    c2_h_loop_ub = c2_cc_votes_size[0] - 1;
    for (c2_i22 = 0; c2_i22 <= c2_h_loop_ub; c2_i22++) {
      chartInstance->c2_cc_votes_data[c2_i22] =
        chartInstance->c2_b_cc_votes_data[c2_i22];
    }

    if (!c2_allinrange(chartInstance, chartInstance->c2_cc_votes_data,
                       c2_b_cc_votes_size, 240)) {
      sf_mex_call(&c2_b_st, "error", 0U, 2U, 14, c2_c_emlrt_marshallOut
                  (chartInstance, c2_cv1), 14, sf_mex_call(&c2_b_st, "getString",
        1U, 1U, 14, sf_mex_call(&c2_b_st, "message", 1U, 1U, 14,
        c2_c_emlrt_marshallOut(chartInstance, c2_cv1))));
    }

    c2_cc_votes[0] = (real_T)c2_cc_votes_size[0];
    c2_cc_votes[1] = 1.0;
    c2_varargin_2[0] = (real_T)c2_varargin_2_size[0];
    c2_varargin_2[1] = 1.0;
    if (!c2_isequal(chartInstance, c2_cc_votes, c2_varargin_2)) {
      sf_mex_call(&c2_b_st, "error", 0U, 2U, 14, c2_emlrt_marshallOut
                  (chartInstance, c2_cv2), 14, sf_mex_call(&c2_b_st, "getString",
        1U, 1U, 14, sf_mex_call(&c2_b_st, "message", 1U, 1U, 14,
        c2_emlrt_marshallOut(chartInstance, c2_cv2))));
    }

    c2_b_varargin_2_size[0] = c2_varargin_2_size[0];
    c2_k_loop_ub = c2_varargin_2_size[0] - 1;
    for (c2_i26 = 0; c2_i26 <= c2_k_loop_ub; c2_i26++) {
      chartInstance->c2_varargin_2_data[c2_i26] =
        chartInstance->c2_d_varargin_2_data[c2_i26];
    }

    if (!c2_allinrange(chartInstance, chartInstance->c2_varargin_2_data,
                       c2_b_varargin_2_size, 280)) {
      sf_mex_call(&c2_b_st, "error", 0U, 2U, 14, c2_c_emlrt_marshallOut
                  (chartInstance, c2_cv1), 14, sf_mex_call(&c2_b_st, "getString",
        1U, 1U, 14, sf_mex_call(&c2_b_st, "message", 1U, 1U, 14,
        c2_c_emlrt_marshallOut(chartInstance, c2_cv1))));
    }

    c2_b_cc_votes[0] = (real_T)c2_cc_votes_size[0];
    c2_b_cc_votes[1] = 1.0;
    c2_varargin_3[0] = (real_T)c2_varargin_3_size[0];
    c2_varargin_3[1] = 1.0;
    if (!c2_isequal(chartInstance, c2_b_cc_votes, c2_varargin_3)) {
      sf_mex_call(&c2_b_st, "error", 0U, 2U, 14, c2_emlrt_marshallOut
                  (chartInstance, c2_cv2), 14, sf_mex_call(&c2_b_st, "getString",
        1U, 1U, 14, sf_mex_call(&c2_b_st, "message", 1U, 1U, 14,
        c2_emlrt_marshallOut(chartInstance, c2_cv2))));
    }

    c2_b_varargin_3_size[0] = c2_varargin_3_size[0];
    c2_n_loop_ub = c2_varargin_3_size[0] - 1;
    for (c2_i29 = 0; c2_i29 <= c2_n_loop_ub; c2_i29++) {
      chartInstance->c2_varargin_3_data[c2_i29] =
        chartInstance->c2_b_varargin_3_data[c2_i29];
    }

    if (!c2_allinrange(chartInstance, chartInstance->c2_varargin_3_data,
                       c2_b_varargin_3_size, 40)) {
      sf_mex_call(&c2_b_st, "error", 0U, 2U, 14, c2_c_emlrt_marshallOut
                  (chartInstance, c2_cv1), 14, sf_mex_call(&c2_b_st, "getString",
        1U, 1U, 14, sf_mex_call(&c2_b_st, "message", 1U, 1U, 14,
        c2_c_emlrt_marshallOut(chartInstance, c2_cv1))));
    }

    c2_b_ii_size[0] = c2_cc_votes_size[0];
    c2_o_loop_ub = c2_cc_votes_size[0] - 1;
    for (c2_i30 = 0; c2_i30 <= c2_o_loop_ub; c2_i30++) {
      chartInstance->c2_e_ii_data[c2_i30] = (int32_T)
        chartInstance->c2_b_cc_votes_data[c2_i30];
    }

    c2_ii_size[0] = c2_varargin_2_size[0];
    c2_p_loop_ub = c2_varargin_2_size[0] - 1;
    for (c2_i31 = 0; c2_i31 <= c2_p_loop_ub; c2_i31++) {
      chartInstance->c2_b_ii_data[c2_i31] = (int32_T)
        chartInstance->c2_d_varargin_2_data[c2_i31] - 1;
    }

    c2_q_loop_ub = c2_ii_size[0] - 1;
    for (c2_i32 = 0; c2_i32 <= c2_q_loop_ub; c2_i32++) {
      chartInstance->c2_b_ii_data[c2_i32] *= 240;
    }

    c2_r_loop_ub = c2_ii_size[0] - 1;
    for (c2_i33 = 0; c2_i33 <= c2_r_loop_ub; c2_i33++) {
      chartInstance->c2_d_jj_data[c2_i33] = chartInstance->c2_b_ii_data[c2_i33];
    }

    c2_s_loop_ub = c2_b_ii_size[0] - 1;
    for (c2_i34 = 0; c2_i34 <= c2_s_loop_ub; c2_i34++) {
      chartInstance->c2_e_ii_data[c2_i34] += chartInstance->c2_d_jj_data[c2_i34];
    }

    c2_ii_size[0] = c2_varargin_3_size[0];
    c2_t_loop_ub = c2_varargin_3_size[0] - 1;
    for (c2_i35 = 0; c2_i35 <= c2_t_loop_ub; c2_i35++) {
      chartInstance->c2_b_ii_data[c2_i35] = (int32_T)
        chartInstance->c2_b_varargin_3_data[c2_i35] - 1;
    }

    c2_u_loop_ub = c2_ii_size[0] - 1;
    for (c2_i36 = 0; c2_i36 <= c2_u_loop_ub; c2_i36++) {
      chartInstance->c2_b_ii_data[c2_i36] *= 67200;
    }

    c2_v_loop_ub = c2_ii_size[0] - 1;
    for (c2_i37 = 0; c2_i37 <= c2_v_loop_ub; c2_i37++) {
      chartInstance->c2_d_jj_data[c2_i37] = chartInstance->c2_b_ii_data[c2_i37];
    }

    c2_w_loop_ub = c2_b_ii_size[0] - 1;
    for (c2_i38 = 0; c2_i38 <= c2_w_loop_ub; c2_i38++) {
      chartInstance->c2_e_ii_data[c2_i38] += chartInstance->c2_d_jj_data[c2_i38];
    }

    c2_cc_votes_size[0] = c2_b_ii_size[0];
    c2_x_loop_ub = c2_b_ii_size[0] - 1;
    for (c2_i39 = 0; c2_i39 <= c2_x_loop_ub; c2_i39++) {
      chartInstance->c2_b_cc_votes_data[c2_i39] = (real_T)
        chartInstance->c2_e_ii_data[c2_i39];
    }

    c2_b_jj_size[0] = c2_cc_votes_size[0];
    c2_y_loop_ub = c2_cc_votes_size[0] - 1;
    for (c2_i40 = 0; c2_i40 <= c2_y_loop_ub; c2_i40++) {
      c2_i41 = (int32_T)emlrtIntegerCheckR2012b
        (chartInstance->c2_b_cc_votes_data[c2_i40], &c2_g_emlrtDCI, c2_sp);
      chartInstance->c2_d_jj_data[c2_i40] = emlrtDynamicBoundsCheckR2012b(c2_i41,
        1, 2688000, &c2_g_emlrtBCI, c2_sp);
    }

    c2_varargin_2_size[0] = c2_cc_votes_size[0];
    c2_ab_loop_ub = c2_cc_votes_size[0] - 1;
    for (c2_i42 = 0; c2_i42 <= c2_ab_loop_ub; c2_i42++) {
      c2_i43 = (int32_T)emlrtIntegerCheckR2012b
        (chartInstance->c2_b_cc_votes_data[c2_i42], &c2_h_emlrtDCI, c2_sp);
      chartInstance->c2_d_varargin_2_data[c2_i42] = chartInstance->
        c2_HoughSpace[emlrtDynamicBoundsCheckR2012b(c2_i43, 1, 2688000,
        &c2_h_emlrtBCI, c2_sp) - 1];
    }

    emlrtSubAssignSizeCheck1dR2017a(c2_b_jj_size[0], c2_varargin_2_size[0],
      &c2_emlrtECI, c2_sp);
    c2_bb_loop_ub = c2_varargin_2_size[0] - 1;
    for (c2_i44 = 0; c2_i44 <= c2_bb_loop_ub; c2_i44++) {
      chartInstance->c2_HoughSpace[chartInstance->c2_d_jj_data[c2_i44] - 1] =
        chartInstance->c2_d_varargin_2_data[c2_i44] + 1.0;
    }

    c2_d_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 0, 0);
  *c2_xc = rtNaN;
  *c2_yc = rtNaN;
  *c2_r = rtNaN;
  c2_radius = 0;
  do {
    c2_exitg1 = 0;
    if (c2_radius < 40) {
      c2_b_radius = 21.0 + (real_T)c2_radius;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 1, 1);
      c2_d2 = (c2_b_radius - 21.0) + 1.0;
      c2_i17 = (int32_T)emlrtIntegerCheckR2012b(c2_d2, &c2_b_emlrtDCI, c2_sp);
      c2_c_radius = emlrtDynamicBoundsCheckR2012b(c2_i17, 1, 40, &c2_b_emlrtBCI,
        c2_sp) - 1;
      for (c2_i18 = 0; c2_i18 < 280; c2_i18++) {
        for (c2_i20 = 0; c2_i20 < 240; c2_i20++) {
          chartInstance->c2_PeakCircles[c2_i20 + 240 * c2_i18] =
            chartInstance->c2_HoughSpace[(c2_i20 + 240 * c2_i18) + 67200 *
            c2_c_radius];
        }
      }

      c2_twoPiR = 6.2831853071795862 * c2_b_radius * 0.333;
      c2_f_i = 0;
      while (c2_f_i <= 67199) {
        c2_f_i++;
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }

      c2_g_i = 0;
      while (c2_g_i <= 67199) {
        if (chartInstance->c2_PeakCircles[c2_g_i] < c2_twoPiR) {
          c2_d3 = (real_T)(c2_g_i + 1);
          c2_i23 = (int32_T)emlrtIntegerCheckR2012b(c2_d3, &c2_f_emlrtDCI, c2_sp);
          chartInstance->c2_PeakCircles[emlrtDynamicBoundsCheckR2012b(c2_i23, 1,
            67200, &c2_f_emlrtBCI, c2_sp) - 1] = 0.0;
        }

        c2_g_i++;
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }

      c2_st.site = &c2_y_emlrtRSI;
      c2_b_st.site = &c2_ad_emlrtRSI;
      c2_e_eml_find(chartInstance, &c2_b_st, chartInstance->c2_PeakCircles,
                    chartInstance->c2_ii_data, c2_c_ii_size,
                    chartInstance->c2_jj_data, c2_c_jj_size,
                    chartInstance->c2_radii_all_data, c2_radii_all_size);
      c2_yy_size[0] = c2_c_ii_size[0];
      c2_i_loop_ub = c2_c_ii_size[0] - 1;
      for (c2_i24 = 0; c2_i24 <= c2_i_loop_ub; c2_i24++) {
        chartInstance->c2_yy_data[c2_i24] = (real_T)chartInstance->
          c2_ii_data[c2_i24];
      }

      c2_xx_size[0] = c2_c_jj_size[0];
      c2_j_loop_ub = c2_c_jj_size[0] - 1;
      for (c2_i25 = 0; c2_i25 <= c2_j_loop_ub; c2_i25++) {
        chartInstance->c2_xx_data[c2_i25] = (real_T)chartInstance->
          c2_jj_data[c2_i25];
      }

      if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 14,
                         covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0,
            9, !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 14,
             c2_radii_all_size[0] == 0)))) {
        c2_b_xx_size[0] = c2_xx_size[0];
        c2_l_loop_ub = c2_xx_size[0] - 1;
        for (c2_i27 = 0; c2_i27 <= c2_l_loop_ub; c2_i27++) {
          chartInstance->c2_b_xx_data[c2_i27] = chartInstance->c2_xx_data[c2_i27]
            - 60.0;
        }

        c2_st.site = &c2_ab_emlrtRSI;
        *c2_xc = c2_b_mean(chartInstance, &c2_st, chartInstance->c2_b_xx_data,
                           c2_b_xx_size);
        c2_b_yy_size[0] = c2_yy_size[0];
        c2_m_loop_ub = c2_yy_size[0] - 1;
        for (c2_i28 = 0; c2_i28 <= c2_m_loop_ub; c2_i28++) {
          chartInstance->c2_b_yy_data[c2_i28] = chartInstance->c2_yy_data[c2_i28]
            - 60.0;
        }

        c2_st.site = &c2_ab_emlrtRSI;
        *c2_yc = c2_b_mean(chartInstance, &c2_st, chartInstance->c2_b_yy_data,
                           c2_b_yy_size);
        *c2_r = c2_b_radius;
        c2_exitg1 = 1;
      } else {
        c2_radius++;
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }
    } else {
      covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 1, 0);
      c2_exitg1 = 1;
    }
  } while (c2_exitg1 == 0);

  sf_mex_call(c2_sp, "imshow", 0U, 1U, 14, c2_d_emlrt_marshallOut(chartInstance,
    chartInstance->c2_edgeimage));
  sf_mex_call(c2_sp, "hold", 0U, 1U, 14, c2_e_emlrt_marshallOut(chartInstance,
    c2_b_cv));
  sf_mex_call(c2_sp, "plot", 0U, 3U, 14, c2_f_emlrt_marshallOut(chartInstance,
    *c2_xc), 14, c2_f_emlrt_marshallOut(chartInstance, *c2_yc), 14,
              c2_e_emlrt_marshallOut(chartInstance, c2_b_cv1));
  sf_mex_call(c2_sp, "hold", 0U, 1U, 14, c2_g_emlrt_marshallOut(chartInstance,
    c2_b_cv2));
}

static void c2_edge(SFc2_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c2_sp, boolean_T c2_b_varargin_1[19200],
                    boolean_T c2_varargout_1[19200])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  real_T c2_derivGaussKernel[13];
  static real_T c2_b_dv[13] = { 0.00050975920363612861, 0.0025659736304223,
    0.014594040963812248, 0.049305200293708981, 0.09498179875488523,
    0.089159205155936727, 0.0, -0.089159205155936727, -0.09498179875488523,
    -0.049305200293708981, -0.014594040963812248, -0.0025659736304223,
    -0.00050975920363612861 };

  int32_T c2_i3;
  static real_T c2_dv1[6] = { 0.0020299751839417141, 0.010218281014351701,
    0.058116735860084041, 0.19634433732941295, 0.37823877042972093,
    0.35505190018248872 };

  real_T c2_y;
  real_T c2_b_x[6];
  int32_T c2_k;
  real_T c2_c_x;
  int32_T c2_xoffset;
  real_T c2_d_x;
  int32_T c2_ix;
  real_T c2_e_x;
  real_T c2_b_y;
  int32_T c2_i4;
  int32_T c2_i5;
  real_T c2_b_derivGaussKernel[6];
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  real_T c2_c_derivGaussKernel[13];
  int32_T c2_i9;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  real32_T c2_f_x;
  real32_T c2_g_x;
  boolean_T c2_b;
  boolean_T c2_p;
  int32_T c2_idx;
  int32_T c2_b_k;
  boolean_T c2_exitg1;
  int32_T c2_first;
  real32_T c2_magmax;
  real32_T c2_ex;
  real32_T c2_h_x;
  int32_T c2_i14;
  real32_T c2_i_x;
  int32_T c2_c_k;
  real32_T c2_c_y;
  boolean_T c2_b_b;
  real32_T c2_d_y;
  boolean_T c2_b_p;
  int32_T c2_i15;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    chartInstance->c2_a[c2_i] = (real32_T)c2_b_varargin_1[c2_i];
  }

  c2_st.site = &c2_bb_emlrtRSI;
  for (c2_i1 = 0; c2_i1 < 13; c2_i1++) {
    c2_derivGaussKernel[c2_i1] = c2_b_dv[c2_i1];
  }

  for (c2_i2 = 0; c2_i2 < 6; c2_i2++) {
    c2_derivGaussKernel[c2_i2] = c2_dv1[c2_i2];
  }

  for (c2_i3 = 0; c2_i3 < 6; c2_i3++) {
    c2_b_x[c2_i3] = c2_derivGaussKernel[c2_i3 + 7];
  }

  c2_y = c2_b_x[0];
  for (c2_k = 0; c2_k < 5; c2_k++) {
    c2_xoffset = c2_k;
    c2_ix = c2_xoffset;
    c2_y += c2_b_x[c2_ix + 1];
  }

  c2_c_x = c2_y;
  c2_d_x = c2_c_x;
  c2_e_x = c2_d_x;
  c2_b_y = muDoubleScalarAbs(c2_e_x);
  for (c2_i4 = 0; c2_i4 < 6; c2_i4++) {
    c2_b_derivGaussKernel[c2_i4] = c2_derivGaussKernel[c2_i4 + 7] / c2_b_y;
  }

  for (c2_i5 = 0; c2_i5 < 6; c2_i5++) {
    c2_derivGaussKernel[c2_i5 + 7] = c2_b_derivGaussKernel[c2_i5];
  }

  for (c2_i6 = 0; c2_i6 < 19200; c2_i6++) {
    chartInstance->c2_b_a[c2_i6] = chartInstance->c2_a[c2_i6];
  }

  c2_b_st.site = &c2_db_emlrtRSI;
  c2_imfilter(chartInstance, &c2_b_st, chartInstance->c2_b_a,
              chartInstance->c2_dx);
  for (c2_i7 = 0; c2_i7 < 19200; c2_i7++) {
    chartInstance->c2_b_dx[c2_i7] = chartInstance->c2_dx[c2_i7];
  }

  for (c2_i8 = 0; c2_i8 < 13; c2_i8++) {
    c2_c_derivGaussKernel[c2_i8] = c2_derivGaussKernel[c2_i8];
  }

  c2_b_st.site = &c2_eb_emlrtRSI;
  c2_b_imfilter(chartInstance, &c2_b_st, chartInstance->c2_b_dx,
                c2_c_derivGaussKernel, chartInstance->c2_dx);
  c2_b_st.site = &c2_fb_emlrtRSI;
  c2_c_imfilter(chartInstance, &c2_b_st, chartInstance->c2_a,
                chartInstance->c2_dy);
  for (c2_i9 = 0; c2_i9 < 19200; c2_i9++) {
    chartInstance->c2_b_dy[c2_i9] = chartInstance->c2_dy[c2_i9];
  }

  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_d_imfilter(chartInstance, &c2_b_st, chartInstance->c2_b_dy,
                c2_derivGaussKernel, chartInstance->c2_dy);
  for (c2_i10 = 0; c2_i10 < 19200; c2_i10++) {
    chartInstance->c2_c_dx[c2_i10] = chartInstance->c2_dx[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 19200; c2_i11++) {
    chartInstance->c2_c_dy[c2_i11] = chartInstance->c2_dy[c2_i11];
  }

  c2_hypot(chartInstance, chartInstance->c2_c_dx, chartInstance->c2_c_dy,
           chartInstance->c2_a);
  for (c2_i12 = 0; c2_i12 < 19200; c2_i12++) {
    chartInstance->c2_varargin_1[c2_i12] = chartInstance->c2_a[c2_i12];
  }

  for (c2_i13 = 0; c2_i13 < 19200; c2_i13++) {
    chartInstance->c2_e_x_data[c2_i13] = chartInstance->c2_varargin_1[c2_i13];
  }

  c2_f_x = chartInstance->c2_e_x_data[0];
  c2_g_x = c2_f_x;
  c2_b = muSingleScalarIsNaN(c2_g_x);
  c2_p = !c2_b;
  if (c2_p) {
    c2_idx = 1;
  } else {
    c2_idx = 0;
    c2_b_k = 2;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_b_k < 19201)) {
      c2_h_x = chartInstance->c2_e_x_data[c2_b_k - 1];
      c2_i_x = c2_h_x;
      c2_b_b = muSingleScalarIsNaN(c2_i_x);
      c2_b_p = !c2_b_b;
      if (c2_b_p) {
        c2_idx = c2_b_k;
        c2_exitg1 = true;
      } else {
        c2_b_k++;
      }
    }
  }

  if (c2_idx == 0) {
    c2_magmax = chartInstance->c2_e_x_data[0];
  } else {
    c2_first = c2_idx - 1;
    c2_ex = chartInstance->c2_e_x_data[c2_first];
    c2_i14 = c2_first;
    for (c2_c_k = c2_i14 + 1; c2_c_k + 1 < 19201; c2_c_k++) {
      if (c2_ex < chartInstance->c2_e_x_data[c2_c_k]) {
        c2_ex = chartInstance->c2_e_x_data[c2_c_k];
      }
    }

    c2_magmax = c2_ex;
  }

  if (c2_magmax > 0.0F) {
    c2_c_y = c2_magmax;
    c2_d_y = c2_c_y;
    for (c2_i15 = 0; c2_i15 < 19200; c2_i15++) {
      chartInstance->c2_a[c2_i15] /= c2_d_y;
    }
  }

  c2_st.site = &c2_cb_emlrtRSI;
  c2_thinAndThreshold(chartInstance, &c2_st, chartInstance->c2_dx,
                      chartInstance->c2_dy, chartInstance->c2_a, c2_varargout_1);
}

static void c2_imfilter(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real32_T c2_b_varargin_1[19200], real32_T c2_b[19200])
{
  emlrtStack c2_st;
  int32_T c2_i;
  real32_T c2_c_varargin_1[19200];
  real32_T c2_c_a[21120];
  boolean_T c2_tooBig;
  int32_T c2_b_i;
  boolean_T c2_modeFlag;
  boolean_T c2_b_modeFlag;
  boolean_T c2_c_modeFlag;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  boolean_T c2_conn[13];
  int32_T c2_i4;
  real_T c2_padSizeT[2];
  int32_T c2_i5;
  int32_T c2_i6;
  real_T c2_outSizeT[2];
  int32_T c2_i7;
  real_T c2_connDimsT[2];
  int32_T c2_i8;
  real_T c2_startT[2];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    c2_c_varargin_1[c2_i] = c2_b_varargin_1[c2_i];
  }

  c2_st.site = &c2_jb_emlrtRSI;
  c2_padImage(chartInstance, &c2_st, c2_c_varargin_1, c2_c_a);
  c2_tooBig = true;
  for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
    c2_tooBig = false;
  }

  if (!c2_tooBig) {
    c2_modeFlag = true;
  } else {
    c2_modeFlag = false;
  }

  if (c2_modeFlag) {
    c2_b_modeFlag = true;
  } else {
    c2_b_modeFlag = false;
  }

  c2_c_modeFlag = c2_b_modeFlag;
  if (c2_c_modeFlag) {
    for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
      c2_padSizeT[c2_i2] = 132.0 + 28.0 * (real_T)c2_i2;
    }

    for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
      c2_outSizeT[c2_i4] = 120.0 + 40.0 * (real_T)c2_i4;
    }

    for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
      c2_connDimsT[c2_i6] = 13.0 + -12.0 * (real_T)c2_i6;
    }

    ippfilter_real32(c2_c_a, c2_b, c2_outSizeT, 2.0, c2_padSizeT, c2_dv,
                     c2_connDimsT, true);
  } else {
    for (c2_i1 = 0; c2_i1 < 13; c2_i1++) {
      c2_conn[c2_i1] = true;
    }

    for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
      c2_padSizeT[c2_i3] = 132.0 + 28.0 * (real_T)c2_i3;
    }

    for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
      c2_outSizeT[c2_i5] = 120.0 + 40.0 * (real_T)c2_i5;
    }

    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_connDimsT[c2_i7] = 13.0 + -12.0 * (real_T)c2_i7;
    }

    for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
      c2_startT[c2_i8] = 6.0 + -6.0 * (real_T)c2_i8;
    }

    imfilter_real32(c2_c_a, c2_b, 2.0, c2_outSizeT, 2.0, c2_padSizeT, c2_dv,
                    13.0, c2_conn, 2.0, c2_connDimsT, c2_startT, 2.0, true, true);
  }
}

static void c2_padImage(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real32_T c2_a_tmp[19200], real32_T c2_c_a[21120])
{
  emlrtStack c2_st;
  int32_T c2_j;
  real_T c2_b_j;
  int32_T c2_i;
  real_T c2_b_i;
  int32_T c2_c_i;
  static int32_T c2_idxA[320] = { 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66,
    67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
    86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103,
    104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118,
    119, 120, 120, 120, 120, 120, 120, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66,
    67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
    86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103,
    104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118,
    119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133,
    134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
    149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160 };

  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_lb_emlrtRSI;
  for (c2_j = 0; c2_j < 160; c2_j++) {
    c2_b_j = (real_T)c2_j + 1.0;
    for (c2_i = 0; c2_i < 132; c2_i++) {
      c2_b_i = (real_T)c2_i + 1.0;
      c2_c_i = c2_idxA[(int32_T)c2_b_j + 159];
      c2_c_a[((int32_T)c2_b_i + 132 * ((int32_T)c2_b_j - 1)) - 1] = c2_a_tmp
        [(emlrtDynamicBoundsCheckR2012b(c2_idxA[(int32_T)c2_b_i - 1], 1, 120,
           &c2_i_emlrtBCI, &c2_st) + 120 * (emlrtDynamicBoundsCheckR2012b(c2_c_i,
            1, 160, &c2_j_emlrtBCI, &c2_st) - 1)) - 1];
    }
  }
}

static boolean_T c2_isequal(SFc2_flightControlSystemInstanceStruct
  *chartInstance, real_T c2_b_varargin_1[2], real_T c2_varargin_2[2])
{
  boolean_T c2_p;
  boolean_T c2_b_p;
  int32_T c2_k;
  boolean_T c2_exitg1;
  real_T c2_b_k;
  real_T c2_x1;
  real_T c2_x2;
  boolean_T c2_c_p;
  (void)chartInstance;
  c2_p = false;
  c2_b_p = true;
  c2_k = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_k < 2)) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_x1 = c2_b_varargin_1[(int32_T)c2_b_k - 1];
    c2_x2 = c2_varargin_2[(int32_T)c2_b_k - 1];
    c2_c_p = (c2_x1 == c2_x2);
    if (!c2_c_p) {
      c2_b_p = false;
      c2_exitg1 = true;
    } else {
      c2_k++;
    }
  }

  if (c2_b_p) {
    c2_p = true;
  }

  return c2_p;
}

static void c2_b_imfilter(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real32_T c2_b_varargin_1[19200], real_T
  c2_varargin_2[13], real32_T c2_b[19200])
{
  emlrtStack c2_st;
  int32_T c2_i;
  real32_T c2_c_varargin_1[19200];
  real32_T c2_c_a[20640];
  int32_T c2_trueCount;
  int32_T c2_b_i;
  int32_T c2_tmp_size[1];
  int32_T c2_partialTrueCount;
  int32_T c2_c_i;
  int32_T c2_nonzero_h_size[1];
  int32_T c2_loop_ub;
  int32_T c2_b_tmp_data[13];
  int32_T c2_i1;
  int32_T c2_i2;
  real_T c2_nonzero_h_data[13];
  boolean_T c2_densityFlag;
  boolean_T c2_connb[13];
  boolean_T c2_tooBig;
  int32_T c2_d_i;
  boolean_T c2_modeFlag;
  boolean_T c2_b_modeFlag;
  boolean_T c2_c_modeFlag;
  real_T c2_numKernElem;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  real_T c2_padSizeT[2];
  int32_T c2_i6;
  int32_T c2_i7;
  real_T c2_outSizeT[2];
  int32_T c2_i8;
  real_T c2_connDimsT[2];
  int32_T c2_i9;
  real_T c2_startT[2];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    c2_c_varargin_1[c2_i] = c2_b_varargin_1[c2_i];
  }

  c2_st.site = &c2_jb_emlrtRSI;
  c2_b_padImage(chartInstance, &c2_st, c2_c_varargin_1, c2_c_a);
  c2_trueCount = 0;
  for (c2_b_i = 0; c2_b_i < 13; c2_b_i++) {
    if (c2_varargin_2[c2_b_i] != 0.0) {
      c2_trueCount++;
    }
  }

  c2_tmp_size[0] = c2_trueCount;
  c2_partialTrueCount = 0;
  for (c2_c_i = 0; c2_c_i < 13; c2_c_i++) {
    if (c2_varargin_2[c2_c_i] != 0.0) {
      c2_b_tmp_data[c2_partialTrueCount] = c2_c_i + 1;
      c2_partialTrueCount++;
    }
  }

  c2_nonzero_h_size[0] = c2_tmp_size[0];
  c2_loop_ub = c2_tmp_size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_nonzero_h_data[c2_i1] = c2_varargin_2[c2_b_tmp_data[c2_i1] - 1];
  }

  for (c2_i2 = 0; c2_i2 < 13; c2_i2++) {
    c2_connb[c2_i2] = (c2_varargin_2[c2_i2] != 0.0);
  }

  c2_densityFlag = false;
  if ((real_T)c2_nonzero_h_size[0] / 13.0 > 0.05) {
    c2_densityFlag = true;
  }

  c2_tooBig = true;
  for (c2_d_i = 0; c2_d_i < 2; c2_d_i++) {
    c2_tooBig = false;
  }

  if (c2_densityFlag && (!c2_tooBig)) {
    c2_modeFlag = true;
  } else {
    c2_modeFlag = false;
  }

  if (c2_modeFlag) {
    c2_b_modeFlag = true;
  } else {
    c2_b_modeFlag = false;
  }

  c2_c_modeFlag = c2_b_modeFlag;
  if (c2_c_modeFlag) {
    for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
      c2_padSizeT[c2_i3] = 120.0 + 52.0 * (real_T)c2_i3;
    }

    for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
      c2_outSizeT[c2_i5] = 120.0 + 40.0 * (real_T)c2_i5;
    }

    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_connDimsT[c2_i7] = 1.0 + 12.0 * (real_T)c2_i7;
    }

    ippfilter_real32(c2_c_a, c2_b, c2_outSizeT, 2.0, c2_padSizeT, c2_varargin_2,
                     c2_connDimsT, true);
  } else {
    c2_numKernElem = (real_T)c2_nonzero_h_size[0];
    for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
      c2_padSizeT[c2_i4] = 120.0 + 52.0 * (real_T)c2_i4;
    }

    for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
      c2_outSizeT[c2_i6] = 120.0 + 40.0 * (real_T)c2_i6;
    }

    for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
      c2_connDimsT[c2_i8] = 1.0 + 12.0 * (real_T)c2_i8;
    }

    for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
      c2_startT[c2_i9] = 6.0 * (real_T)c2_i9;
    }

    imfilter_real32(c2_c_a, c2_b, 2.0, c2_outSizeT, 2.0, c2_padSizeT,
                    &c2_nonzero_h_data[0], c2_numKernElem, c2_connb, 2.0,
                    c2_connDimsT, c2_startT, 2.0, true, true);
  }
}

static void c2_b_padImage(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real32_T c2_a_tmp[19200], real32_T c2_c_a[20640])
{
  emlrtStack c2_st;
  int32_T c2_j;
  real_T c2_b_j;
  int32_T c2_i;
  real_T c2_b_i;
  int32_T c2_c_i;
  static int32_T c2_idxA[344] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33,
    34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
    53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71,
    72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
    91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107,
    108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1,
    1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
    40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58,
    59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
    78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96,
    97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112,
    113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142,
    143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157,
    158, 159, 160, 160, 160, 160, 160, 160, 160 };

  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_lb_emlrtRSI;
  for (c2_j = 0; c2_j < 172; c2_j++) {
    c2_b_j = (real_T)c2_j + 1.0;
    for (c2_i = 0; c2_i < 120; c2_i++) {
      c2_b_i = (real_T)c2_i + 1.0;
      c2_c_i = c2_idxA[(int32_T)c2_b_j + 171];
      c2_c_a[((int32_T)c2_b_i + 120 * ((int32_T)c2_b_j - 1)) - 1] = c2_a_tmp
        [(emlrtDynamicBoundsCheckR2012b(c2_idxA[(int32_T)c2_b_i - 1], 1, 120,
           &c2_i_emlrtBCI, &c2_st) + 120 * (emlrtDynamicBoundsCheckR2012b(c2_c_i,
            1, 160, &c2_j_emlrtBCI, &c2_st) - 1)) - 1];
    }
  }
}

static void c2_c_imfilter(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real32_T c2_b_varargin_1[19200], real32_T c2_b[19200])
{
  emlrtStack c2_st;
  int32_T c2_i;
  real32_T c2_c_varargin_1[19200];
  real32_T c2_c_a[20640];
  int32_T c2_trueCount;
  int32_T c2_b_i;
  int32_T c2_tmp_size[1];
  int32_T c2_partialTrueCount;
  int32_T c2_c_i;
  int32_T c2_nonzero_h_size[1];
  int32_T c2_loop_ub;
  int32_T c2_b_tmp_data[13];
  int32_T c2_i1;
  boolean_T c2_densityFlag;
  real_T c2_nonzero_h_data[13];
  boolean_T c2_tooBig;
  int32_T c2_d_i;
  boolean_T c2_modeFlag;
  boolean_T c2_b_modeFlag;
  boolean_T c2_c_modeFlag;
  real_T c2_numKernElem;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  real_T c2_padSizeT[2];
  int32_T c2_i5;
  boolean_T c2_conn[13];
  int32_T c2_i6;
  real_T c2_outSizeT[2];
  int32_T c2_i7;
  real_T c2_connDimsT[2];
  int32_T c2_i8;
  int32_T c2_i9;
  real_T c2_startT[2];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    c2_c_varargin_1[c2_i] = c2_b_varargin_1[c2_i];
  }

  c2_st.site = &c2_jb_emlrtRSI;
  c2_b_padImage(chartInstance, &c2_st, c2_c_varargin_1, c2_c_a);
  c2_trueCount = 0;
  for (c2_b_i = 0; c2_b_i < 13; c2_b_i++) {
    if (c2_dv[c2_b_i] != 0.0) {
      c2_trueCount++;
    }
  }

  c2_tmp_size[0] = c2_trueCount;
  c2_partialTrueCount = 0;
  for (c2_c_i = 0; c2_c_i < 13; c2_c_i++) {
    if (c2_dv[c2_c_i] != 0.0) {
      c2_b_tmp_data[c2_partialTrueCount] = c2_c_i + 1;
      c2_partialTrueCount++;
    }
  }

  c2_nonzero_h_size[0] = c2_tmp_size[0];
  c2_loop_ub = c2_tmp_size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_nonzero_h_data[c2_i1] = c2_dv[c2_b_tmp_data[c2_i1] - 1];
  }

  c2_densityFlag = false;
  if ((real_T)c2_nonzero_h_size[0] / 13.0 > 0.05) {
    c2_densityFlag = true;
  }

  c2_tooBig = true;
  for (c2_d_i = 0; c2_d_i < 2; c2_d_i++) {
    c2_tooBig = false;
  }

  if (c2_densityFlag && (!c2_tooBig)) {
    c2_modeFlag = true;
  } else {
    c2_modeFlag = false;
  }

  if (c2_modeFlag) {
    c2_b_modeFlag = true;
  } else {
    c2_b_modeFlag = false;
  }

  c2_c_modeFlag = c2_b_modeFlag;
  if (c2_c_modeFlag) {
    for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
      c2_padSizeT[c2_i2] = 120.0 + 52.0 * (real_T)c2_i2;
    }

    for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
      c2_outSizeT[c2_i4] = 120.0 + 40.0 * (real_T)c2_i4;
    }

    for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
      c2_connDimsT[c2_i6] = 1.0 + 12.0 * (real_T)c2_i6;
    }

    ippfilter_real32(c2_c_a, c2_b, c2_outSizeT, 2.0, c2_padSizeT, c2_dv,
                     c2_connDimsT, true);
  } else {
    c2_numKernElem = (real_T)c2_nonzero_h_size[0];
    for (c2_i3 = 0; c2_i3 < 13; c2_i3++) {
      c2_conn[c2_i3] = true;
    }

    for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
      c2_padSizeT[c2_i5] = 120.0 + 52.0 * (real_T)c2_i5;
    }

    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_outSizeT[c2_i7] = 120.0 + 40.0 * (real_T)c2_i7;
    }

    for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
      c2_connDimsT[c2_i8] = 1.0 + 12.0 * (real_T)c2_i8;
    }

    for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
      c2_startT[c2_i9] = 6.0 * (real_T)c2_i9;
    }

    imfilter_real32(c2_c_a, c2_b, 2.0, c2_outSizeT, 2.0, c2_padSizeT,
                    &c2_nonzero_h_data[0], c2_numKernElem, c2_conn, 2.0,
                    c2_connDimsT, c2_startT, 2.0, true, true);
  }
}

static void c2_d_imfilter(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real32_T c2_b_varargin_1[19200], real_T
  c2_varargin_2[13], real32_T c2_b[19200])
{
  emlrtStack c2_st;
  int32_T c2_i;
  real32_T c2_c_varargin_1[19200];
  real32_T c2_c_a[21120];
  int32_T c2_trueCount;
  int32_T c2_b_i;
  int32_T c2_tmp_size[1];
  int32_T c2_partialTrueCount;
  int32_T c2_c_i;
  int32_T c2_nonzero_h_size[1];
  int32_T c2_loop_ub;
  int32_T c2_b_tmp_data[13];
  int32_T c2_i1;
  int32_T c2_i2;
  real_T c2_nonzero_h_data[13];
  boolean_T c2_densityFlag;
  boolean_T c2_connb[13];
  boolean_T c2_tooBig;
  int32_T c2_d_i;
  boolean_T c2_modeFlag;
  boolean_T c2_b_modeFlag;
  boolean_T c2_c_modeFlag;
  real_T c2_numKernElem;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  real_T c2_padSizeT[2];
  int32_T c2_i6;
  int32_T c2_i7;
  real_T c2_outSizeT[2];
  int32_T c2_i8;
  real_T c2_connDimsT[2];
  int32_T c2_i9;
  real_T c2_startT[2];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    c2_c_varargin_1[c2_i] = c2_b_varargin_1[c2_i];
  }

  c2_st.site = &c2_jb_emlrtRSI;
  c2_padImage(chartInstance, &c2_st, c2_c_varargin_1, c2_c_a);
  c2_trueCount = 0;
  for (c2_b_i = 0; c2_b_i < 13; c2_b_i++) {
    if (c2_varargin_2[c2_b_i] != 0.0) {
      c2_trueCount++;
    }
  }

  c2_tmp_size[0] = c2_trueCount;
  c2_partialTrueCount = 0;
  for (c2_c_i = 0; c2_c_i < 13; c2_c_i++) {
    if (c2_varargin_2[c2_c_i] != 0.0) {
      c2_b_tmp_data[c2_partialTrueCount] = c2_c_i + 1;
      c2_partialTrueCount++;
    }
  }

  c2_nonzero_h_size[0] = c2_tmp_size[0];
  c2_loop_ub = c2_tmp_size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_nonzero_h_data[c2_i1] = c2_varargin_2[c2_b_tmp_data[c2_i1] - 1];
  }

  for (c2_i2 = 0; c2_i2 < 13; c2_i2++) {
    c2_connb[c2_i2] = (c2_varargin_2[c2_i2] != 0.0);
  }

  c2_densityFlag = false;
  if ((real_T)c2_nonzero_h_size[0] / 13.0 > 0.05) {
    c2_densityFlag = true;
  }

  c2_tooBig = true;
  for (c2_d_i = 0; c2_d_i < 2; c2_d_i++) {
    c2_tooBig = false;
  }

  if (c2_densityFlag && (!c2_tooBig)) {
    c2_modeFlag = true;
  } else {
    c2_modeFlag = false;
  }

  if (c2_modeFlag) {
    c2_b_modeFlag = true;
  } else {
    c2_b_modeFlag = false;
  }

  c2_c_modeFlag = c2_b_modeFlag;
  if (c2_c_modeFlag) {
    for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
      c2_padSizeT[c2_i3] = 132.0 + 28.0 * (real_T)c2_i3;
    }

    for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
      c2_outSizeT[c2_i5] = 120.0 + 40.0 * (real_T)c2_i5;
    }

    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_connDimsT[c2_i7] = 13.0 + -12.0 * (real_T)c2_i7;
    }

    ippfilter_real32(c2_c_a, c2_b, c2_outSizeT, 2.0, c2_padSizeT, c2_varargin_2,
                     c2_connDimsT, true);
  } else {
    c2_numKernElem = (real_T)c2_nonzero_h_size[0];
    for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
      c2_padSizeT[c2_i4] = 132.0 + 28.0 * (real_T)c2_i4;
    }

    for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
      c2_outSizeT[c2_i6] = 120.0 + 40.0 * (real_T)c2_i6;
    }

    for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
      c2_connDimsT[c2_i8] = 13.0 + -12.0 * (real_T)c2_i8;
    }

    for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
      c2_startT[c2_i9] = 6.0 + -6.0 * (real_T)c2_i9;
    }

    imfilter_real32(c2_c_a, c2_b, 2.0, c2_outSizeT, 2.0, c2_padSizeT,
                    &c2_nonzero_h_data[0], c2_numKernElem, c2_connb, 2.0,
                    c2_connDimsT, c2_startT, 2.0, true, true);
  }
}

static void c2_hypot(SFc2_flightControlSystemInstanceStruct *chartInstance,
                     real32_T c2_b_x[19200], real32_T c2_y[19200], real32_T
                     c2_r[19200])
{
  int32_T c2_k;
  int32_T c2_b_k;
  real32_T c2_c_x;
  real32_T c2_b_y;
  real32_T c2_x1;
  real32_T c2_x2;
  real32_T c2_c_a;
  real32_T c2_b;
  real32_T c2_z;
  (void)chartInstance;
  for (c2_k = 0; c2_k < 19200; c2_k++) {
    c2_b_k = c2_k;
    c2_c_x = c2_b_x[c2_b_k];
    c2_b_y = c2_y[c2_b_k];
    c2_x1 = c2_c_x;
    c2_x2 = c2_b_y;
    c2_c_a = c2_x1;
    c2_b = c2_x2;
    c2_z = muSingleScalarHypot(c2_c_a, c2_b);
    c2_r[c2_b_k] = c2_z;
  }
}

static void c2_thinAndThreshold(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real32_T c2_d_dx[19200], real32_T
  c2_d_dy[19200], real32_T c2_magGrad[19200], boolean_T c2_H[19200])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_i;
  int32_T c2_i1;
  real_T c2_szT[2];
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_ii_size[1];
  int32_T c2_jj_size[1];
  int32_T c2_idxStrongR_size[1];
  int32_T c2_loop_ub;
  int32_T c2_i4;
  int32_T c2_idxStrongC_size[1];
  int32_T c2_b_loop_ub;
  int32_T c2_i5;
  int32_T c2_i6;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_ub_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_b_st.site = &c2_tb_emlrtRSI;
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    chartInstance->c2_E[c2_i] = false;
  }

  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_szT[c2_i1] = 120.0 + 40.0 * (real_T)c2_i1;
  }

  cannythresholding_real32_tbb(c2_d_dx, c2_d_dy, c2_magGrad, c2_szT, 0.3,
    chartInstance->c2_E);
  for (c2_i2 = 0; c2_i2 < 19200; c2_i2++) {
    chartInstance->c2_x[c2_i2] = ((real_T)c2_magGrad[c2_i2] > 0.35);
  }

  c2_st.site = &c2_vb_emlrtRSI;
  for (c2_i3 = 0; c2_i3 < 19200; c2_i3++) {
    chartInstance->c2_x[c2_i3] = (chartInstance->c2_x[c2_i3] &&
      chartInstance->c2_E[c2_i3]);
  }

  c2_b_st.site = &c2_xb_emlrtRSI;
  c2_eml_find(chartInstance, &c2_b_st, chartInstance->c2_x,
              chartInstance->c2_c_ii_data, c2_ii_size,
              chartInstance->c2_c_jj_data, c2_jj_size);
  c2_idxStrongR_size[0] = c2_ii_size[0];
  c2_loop_ub = c2_ii_size[0] - 1;
  for (c2_i4 = 0; c2_i4 <= c2_loop_ub; c2_i4++) {
    chartInstance->c2_idxStrongR_data[c2_i4] = (real_T)
      chartInstance->c2_c_ii_data[c2_i4];
  }

  c2_idxStrongC_size[0] = c2_jj_size[0];
  c2_b_loop_ub = c2_jj_size[0] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_b_loop_ub; c2_i5++) {
    chartInstance->c2_idxStrongC_data[c2_i5] = (real_T)
      chartInstance->c2_c_jj_data[c2_i5];
  }

  if (c2_idxStrongC_size[0] != 0) {
    c2_st.site = &c2_wb_emlrtRSI;
    c2_bwselect(chartInstance, &c2_st, chartInstance->c2_E,
                chartInstance->c2_idxStrongC_data, c2_idxStrongC_size,
                chartInstance->c2_idxStrongR_data, c2_idxStrongR_size, c2_H);
  } else {
    for (c2_i6 = 0; c2_i6 < 19200; c2_i6++) {
      c2_H[c2_i6] = false;
    }
  }
}

static void c2_eml_find(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_b_x[19200], int32_T c2_i_data[], int32_T
  c2_i_size[1], int32_T c2_j_data[], int32_T c2_j_size[1])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_idx;
  int32_T c2_ii;
  int32_T c2_jj;
  boolean_T c2_exitg1;
  boolean_T c2_b;
  boolean_T c2_guard1 = false;
  int32_T c2_i;
  int32_T c2_iv[2];
  boolean_T c2_b1;
  int32_T c2_i1;
  int32_T c2_iv1[2];
  boolean_T c2_b2;
  int32_T c2_i2;
  int32_T c2_iv2[2];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_yb_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_idx = 0;
  c2_ii = 1;
  c2_jj = 1;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_jj <= 160)) {
    c2_guard1 = false;
    if (c2_b_x[(c2_ii + 120 * (c2_jj - 1)) - 1]) {
      c2_idx++;
      c2_i_data[c2_idx - 1] = c2_ii;
      c2_j_data[c2_idx - 1] = c2_jj;
      if (c2_idx >= 19200) {
        c2_exitg1 = true;
      } else {
        c2_guard1 = true;
      }
    } else {
      c2_guard1 = true;
    }

    if (c2_guard1) {
      c2_ii++;
      if (c2_ii > 120) {
        c2_ii = 1;
        c2_jj++;
      }
    }
  }

  c2_b = (1 > c2_idx);
  if (c2_b) {
    c2_i = 0;
  } else {
    c2_i = c2_idx;
  }

  c2_iv[0] = 1;
  c2_iv[1] = c2_i;
  c2_b_st.site = &c2_cc_emlrtRSI;
  c2_indexShapeCheck(chartInstance, &c2_b_st, 19200, c2_iv);
  c2_i_size[0] = c2_i;
  c2_b1 = (1 > c2_idx);
  if (c2_b1) {
    c2_i1 = 0;
  } else {
    c2_i1 = c2_idx;
  }

  c2_iv1[0] = 1;
  c2_iv1[1] = c2_i1;
  c2_b_st.site = &c2_bc_emlrtRSI;
  c2_indexShapeCheck(chartInstance, &c2_b_st, 19200, c2_iv1);
  c2_j_size[0] = c2_i1;
  c2_b2 = (1 > c2_idx);
  if (c2_b2) {
    c2_i2 = 0;
  } else {
    c2_i2 = c2_idx;
  }

  c2_iv2[0] = 1;
  c2_iv2[1] = c2_i2;
  c2_b_st.site = &c2_ac_emlrtRSI;
  c2_indexShapeCheck(chartInstance, &c2_b_st, 19200, c2_iv2);
}

static void c2_round(SFc2_flightControlSystemInstanceStruct *chartInstance,
                     real_T c2_n_x_data[], int32_T c2_x_size[1], real_T
                     c2_o_x_data[], int32_T c2_b_x_size[1])
{
  int32_T c2_loop_ub;
  int32_T c2_i;
  c2_b_x_size[0] = c2_x_size[0];
  c2_loop_ub = c2_x_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_o_x_data[c2_i] = c2_n_x_data[c2_i];
  }

  c2_c_round(chartInstance, c2_o_x_data, c2_b_x_size);
}

static void c2_bwselect(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_b_varargin_1[19200], real_T
  c2_e_varargin_2_data[], int32_T c2_varargin_2_size[1], real_T
  c2_c_varargin_3_data[], int32_T c2_varargin_3_size[1], boolean_T
  c2_varargout_1[19200])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_r_size[1];
  int32_T c2_loop_ub;
  int32_T c2_i;
  int32_T c2_c_size[1];
  int32_T c2_b_loop_ub;
  int32_T c2_i1;
  int32_T c2_x_size[1];
  int32_T c2_c_loop_ub;
  int32_T c2_i2;
  int32_T c2_tmp_size[1];
  int32_T c2_d_loop_ub;
  int32_T c2_i3;
  boolean_T c2_b_tmp_data[19200];
  int32_T c2_e_loop_ub;
  int32_T c2_i4;
  int32_T c2_f_loop_ub;
  int32_T c2_i5;
  int32_T c2_g_loop_ub;
  int32_T c2_i6;
  int32_T c2_h_loop_ub;
  int32_T c2_i7;
  int32_T c2_i_loop_ub;
  int32_T c2_i8;
  int32_T c2_ii_size[1];
  int32_T c2_badPix_size[1];
  int32_T c2_j_loop_ub;
  int32_T c2_i9;
  int32_T c2_b_r_size[1];
  int32_T c2_b_badPix_size[1];
  int32_T c2_k_loop_ub;
  int32_T c2_l_loop_ub;
  int32_T c2_i10;
  int32_T c2_i11;
  real_T c2_r[2];
  int32_T c2_c_badPix_size[1];
  int32_T c2_m_loop_ub;
  real_T c2_c[2];
  int32_T c2_i12;
  int32_T c2_b_c_size[1];
  int32_T c2_n_loop_ub;
  int32_T c2_i13;
  int32_T c2_o_loop_ub;
  int32_T c2_i14;
  int32_T c2_b_size[1];
  int32_T c2_p_loop_ub;
  int32_T c2_i15;
  int32_T c2_q_loop_ub;
  int32_T c2_i16;
  int32_T c2_r_loop_ub;
  int32_T c2_i17;
  int32_T c2_s_loop_ub;
  int32_T c2_i18;
  int32_T c2_i19;
  boolean_T c2_c_varargin_1[19200];
  int32_T c2_i20;
  int32_T c2_i21;
  boolean_T c2_b_varargout_1[19200];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_r_size[0] = c2_varargin_3_size[0];
  c2_loop_ub = c2_varargin_3_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    chartInstance->c2_r_data[c2_i] = c2_c_varargin_3_data[c2_i];
  }

  c2_c_round(chartInstance, chartInstance->c2_r_data, c2_r_size);
  c2_c_size[0] = c2_varargin_2_size[0];
  c2_b_loop_ub = c2_varargin_2_size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_b_loop_ub; c2_i1++) {
    chartInstance->c2_c_data[c2_i1] = c2_e_varargin_2_data[c2_i1];
  }

  c2_c_round(chartInstance, chartInstance->c2_c_data, c2_c_size);
  c2_x_size[0] = c2_r_size[0];
  c2_c_loop_ub = c2_r_size[0] - 1;
  for (c2_i2 = 0; c2_i2 <= c2_c_loop_ub; c2_i2++) {
    chartInstance->c2_f_x_data[c2_i2] = (chartInstance->c2_r_data[c2_i2] < 1.0);
  }

  c2_tmp_size[0] = c2_r_size[0];
  c2_d_loop_ub = c2_r_size[0] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_d_loop_ub; c2_i3++) {
    c2_b_tmp_data[c2_i3] = (chartInstance->c2_r_data[c2_i3] > 120.0);
  }

  emlrtSizeEqCheck1DR2012b(c2_x_size[0], c2_tmp_size[0], &c2_b_emlrtECI, c2_sp);
  c2_e_loop_ub = c2_x_size[0] - 1;
  for (c2_i4 = 0; c2_i4 <= c2_e_loop_ub; c2_i4++) {
    chartInstance->c2_f_x_data[c2_i4] = (chartInstance->c2_f_x_data[c2_i4] ||
      c2_b_tmp_data[c2_i4]);
  }

  c2_tmp_size[0] = c2_c_size[0];
  c2_f_loop_ub = c2_c_size[0] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_f_loop_ub; c2_i5++) {
    c2_b_tmp_data[c2_i5] = (chartInstance->c2_c_data[c2_i5] < 1.0);
  }

  emlrtSizeEqCheck1DR2012b(c2_x_size[0], c2_tmp_size[0], &c2_b_emlrtECI, c2_sp);
  c2_g_loop_ub = c2_x_size[0] - 1;
  for (c2_i6 = 0; c2_i6 <= c2_g_loop_ub; c2_i6++) {
    chartInstance->c2_f_x_data[c2_i6] = (chartInstance->c2_f_x_data[c2_i6] ||
      c2_b_tmp_data[c2_i6]);
  }

  c2_tmp_size[0] = c2_c_size[0];
  c2_h_loop_ub = c2_c_size[0] - 1;
  for (c2_i7 = 0; c2_i7 <= c2_h_loop_ub; c2_i7++) {
    c2_b_tmp_data[c2_i7] = (chartInstance->c2_c_data[c2_i7] > 160.0);
  }

  emlrtSizeEqCheck1DR2012b(c2_x_size[0], c2_tmp_size[0], &c2_b_emlrtECI, c2_sp);
  c2_st.site = &c2_dc_emlrtRSI;
  c2_i_loop_ub = c2_x_size[0] - 1;
  for (c2_i8 = 0; c2_i8 <= c2_i_loop_ub; c2_i8++) {
    chartInstance->c2_f_x_data[c2_i8] = (chartInstance->c2_f_x_data[c2_i8] ||
      c2_b_tmp_data[c2_i8]);
  }

  c2_b_st.site = &c2_m_emlrtRSI;
  c2_b_eml_find(chartInstance, &c2_b_st, chartInstance->c2_f_x_data, c2_x_size,
                chartInstance->c2_d_ii_data, c2_ii_size);
  c2_badPix_size[0] = c2_ii_size[0];
  c2_j_loop_ub = c2_ii_size[0] - 1;
  for (c2_i9 = 0; c2_i9 <= c2_j_loop_ub; c2_i9++) {
    chartInstance->c2_badPix_data[c2_i9] = (real_T)chartInstance->
      c2_d_ii_data[c2_i9];
  }

  if (c2_badPix_size[0] != 0) {
    c2_st.site = &c2_ec_emlrtRSI;
    c2_b_st.site = &c2_kc_emlrtRSI;
    c2_warning(chartInstance, &c2_b_st);
    c2_b_badPix_size[0] = c2_badPix_size[0];
    c2_l_loop_ub = c2_badPix_size[0] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_l_loop_ub; c2_i11++) {
      chartInstance->c2_b_badPix_data[c2_i11] = (int32_T)
        chartInstance->c2_badPix_data[c2_i11];
    }

    c2_st.site = &c2_fc_emlrtRSI;
    c2_c_nullAssignment(chartInstance, &c2_st, chartInstance->c2_r_data,
                        c2_r_size, chartInstance->c2_b_badPix_data,
                        c2_b_badPix_size);
    c2_c_badPix_size[0] = c2_badPix_size[0];
    c2_m_loop_ub = c2_badPix_size[0] - 1;
    for (c2_i12 = 0; c2_i12 <= c2_m_loop_ub; c2_i12++) {
      chartInstance->c2_c_badPix_data[c2_i12] = (int32_T)
        chartInstance->c2_badPix_data[c2_i12];
    }

    c2_st.site = &c2_gc_emlrtRSI;
    c2_c_nullAssignment(chartInstance, &c2_st, chartInstance->c2_c_data,
                        c2_c_size, chartInstance->c2_c_badPix_data,
                        c2_c_badPix_size);
  }

  c2_st.site = &c2_hc_emlrtRSI;
  c2_b_st.site = &c2_nc_emlrtRSI;
  c2_b_r_size[0] = c2_r_size[0];
  c2_k_loop_ub = c2_r_size[0] - 1;
  for (c2_i10 = 0; c2_i10 <= c2_k_loop_ub; c2_i10++) {
    chartInstance->c2_b_r_data[c2_i10] = chartInstance->c2_r_data[c2_i10];
  }

  if (!c2_allinrange(chartInstance, chartInstance->c2_b_r_data, c2_b_r_size, 120))
  {
    sf_mex_call(&c2_b_st, "error", 0U, 2U, 14, c2_c_emlrt_marshallOut
                (chartInstance, c2_cv1), 14, sf_mex_call(&c2_b_st, "getString",
      1U, 1U, 14, sf_mex_call(&c2_b_st, "message", 1U, 1U, 14,
      c2_c_emlrt_marshallOut(chartInstance, c2_cv1))));
  }

  c2_r[0] = (real_T)c2_r_size[0];
  c2_r[1] = 1.0;
  c2_c[0] = (real_T)c2_c_size[0];
  c2_c[1] = 1.0;
  if (!c2_isequal(chartInstance, c2_r, c2_c)) {
    sf_mex_call(&c2_b_st, "error", 0U, 2U, 14, c2_emlrt_marshallOut
                (chartInstance, c2_cv2), 14, sf_mex_call(&c2_b_st, "getString",
      1U, 1U, 14, sf_mex_call(&c2_b_st, "message", 1U, 1U, 14,
      c2_emlrt_marshallOut(chartInstance, c2_cv2))));
  }

  c2_b_c_size[0] = c2_c_size[0];
  c2_n_loop_ub = c2_c_size[0] - 1;
  for (c2_i13 = 0; c2_i13 <= c2_n_loop_ub; c2_i13++) {
    chartInstance->c2_b_c_data[c2_i13] = chartInstance->c2_c_data[c2_i13];
  }

  if (!c2_allinrange(chartInstance, chartInstance->c2_b_c_data, c2_b_c_size, 160))
  {
    sf_mex_call(&c2_b_st, "error", 0U, 2U, 14, c2_c_emlrt_marshallOut
                (chartInstance, c2_cv1), 14, sf_mex_call(&c2_b_st, "getString",
      1U, 1U, 14, sf_mex_call(&c2_b_st, "message", 1U, 1U, 14,
      c2_c_emlrt_marshallOut(chartInstance, c2_cv1))));
  }

  c2_ii_size[0] = c2_r_size[0];
  c2_o_loop_ub = c2_r_size[0] - 1;
  for (c2_i14 = 0; c2_i14 <= c2_o_loop_ub; c2_i14++) {
    chartInstance->c2_d_ii_data[c2_i14] = (int32_T)chartInstance->
      c2_r_data[c2_i14];
  }

  c2_b_size[0] = c2_c_size[0];
  c2_p_loop_ub = c2_c_size[0] - 1;
  for (c2_i15 = 0; c2_i15 <= c2_p_loop_ub; c2_i15++) {
    chartInstance->c2_b_data[c2_i15] = (int32_T)chartInstance->c2_c_data[c2_i15]
      - 1;
  }

  c2_q_loop_ub = c2_b_size[0] - 1;
  for (c2_i16 = 0; c2_i16 <= c2_q_loop_ub; c2_i16++) {
    chartInstance->c2_b_data[c2_i16] *= 120;
  }

  c2_r_loop_ub = c2_ii_size[0] - 1;
  for (c2_i17 = 0; c2_i17 <= c2_r_loop_ub; c2_i17++) {
    chartInstance->c2_d_ii_data[c2_i17] += chartInstance->c2_b_data[c2_i17];
  }

  c2_r_size[0] = c2_ii_size[0];
  c2_s_loop_ub = c2_ii_size[0] - 1;
  for (c2_i18 = 0; c2_i18 <= c2_s_loop_ub; c2_i18++) {
    chartInstance->c2_r_data[c2_i18] = (real_T)chartInstance->
      c2_d_ii_data[c2_i18];
  }

  for (c2_i19 = 0; c2_i19 < 19200; c2_i19++) {
    c2_c_varargin_1[c2_i19] = !c2_b_varargin_1[c2_i19];
  }

  c2_st.site = &c2_ic_emlrtRSI;
  c2_imfill(chartInstance, &c2_st, c2_c_varargin_1, chartInstance->c2_r_data,
            c2_r_size, c2_varargout_1);
  for (c2_i20 = 0; c2_i20 < 19200; c2_i20++) {
    c2_varargout_1[c2_i20] = (c2_varargout_1[c2_i20] && c2_b_varargin_1[c2_i20]);
  }

  c2_st.site = &c2_jc_emlrtRSI;
  for (c2_i21 = 0; c2_i21 < 19200; c2_i21++) {
    c2_b_varargout_1[c2_i21] = c2_varargout_1[c2_i21];
  }

  c2_b_st.site = &c2_m_emlrtRSI;
  c2_c_eml_find(chartInstance, &c2_b_st, c2_b_varargout_1,
                chartInstance->c2_jd_emlrtRSI.data,
                chartInstance->c2_jd_emlrtRSI.size);
}

static void c2_b_eml_find(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_n_x_data[], int32_T c2_x_size[1],
  int32_T c2_i_data[], int32_T c2_i_size[1])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_nx;
  int32_T c2_k;
  int32_T c2_b_nx;
  int32_T c2_idx;
  int32_T c2_ii;
  boolean_T c2_exitg1;
  int32_T c2_b_ii;
  const mxArray *c2_y = NULL;
  boolean_T c2_b;
  const mxArray *c2_b_y = NULL;
  int32_T c2_i;
  int32_T c2_iv[2];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_nx = c2_x_size[0];
  c2_st.site = &c2_n_emlrtRSI;
  c2_k = c2_nx;
  c2_b_nx = c2_nx - 1;
  c2_idx = 0;
  c2_i_size[0] = c2_k;
  c2_ii = 1;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_ii - 1 <= c2_b_nx)) {
    c2_b_ii = c2_ii;
    if (c2_n_x_data[c2_b_ii - 1]) {
      c2_idx++;
      c2_i_data[c2_idx - 1] = c2_b_ii;
      if (c2_idx >= c2_k) {
        c2_exitg1 = true;
      } else {
        c2_ii++;
      }
    } else {
      c2_ii++;
    }
  }

  if (!(c2_idx <= c2_k)) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_b_y)));
  }

  if (c2_k == 1) {
    if (c2_idx == 0) {
      c2_i_size[0] = 0;
    }
  } else {
    c2_b = (1 > c2_idx);
    if (c2_b) {
      c2_i = 0;
    } else {
      c2_i = c2_idx;
    }

    c2_iv[0] = 1;
    c2_iv[1] = c2_i;
    c2_b_st.site = &c2_o_emlrtRSI;
    c2_indexShapeCheck(chartInstance, &c2_b_st, c2_i_size[0], c2_iv);
    c2_i_size[0] = c2_i;
  }
}

static void c2_warning(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp)
{
  const mxArray *c2_y = NULL;
  static char_T c2_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c2_b_y = NULL;
  static char_T c2_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c2_c_y = NULL;
  static char_T c2_msgID[26] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'b', 'w',
    's', 'e', 'l', 'e', 'c', 't', ':', 'o', 'u', 't', 'O', 'f', 'R', 'a', 'n',
    'g', 'e' };

  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_msgID, 10, 0U, 1U, 0U, 2, 1, 26),
                false);
  sf_mex_call(c2_sp, "feval", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp, "feval",
    1U, 2U, 14, c2_b_y, 14, c2_c_y));
}

static void c2_nullAssignment(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
  c2_x_size[1], int32_T c2_c_idx_data[], int32_T c2_idx_size[1], real_T
  c2_o_x_data[], int32_T c2_b_x_size[1])
{
  int32_T c2_loop_ub;
  int32_T c2_i;
  int32_T c2_b_idx_size[1];
  int32_T c2_b_loop_ub;
  int32_T c2_i1;
  c2_b_x_size[0] = c2_x_size[0];
  c2_loop_ub = c2_x_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_o_x_data[c2_i] = c2_n_x_data[c2_i];
  }

  c2_b_idx_size[0] = c2_idx_size[0];
  c2_b_loop_ub = c2_idx_size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_b_loop_ub; c2_i1++) {
    chartInstance->c2_idx_data[c2_i1] = c2_c_idx_data[c2_i1];
  }

  c2_c_nullAssignment(chartInstance, c2_sp, c2_o_x_data, c2_b_x_size,
                      chartInstance->c2_idx_data, c2_b_idx_size);
}

static void c2_onearg_null_assignment(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
  c2_x_size[1], int32_T c2_c_idx_data[], int32_T c2_idx_size[1], real_T
  c2_o_x_data[], int32_T c2_b_x_size[1])
{
  int32_T c2_loop_ub;
  int32_T c2_i;
  int32_T c2_b_idx_size[1];
  int32_T c2_b_loop_ub;
  int32_T c2_i1;
  int32_T c2_d_idx_data[19200];
  c2_b_x_size[0] = c2_x_size[0];
  c2_loop_ub = c2_x_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_o_x_data[c2_i] = c2_n_x_data[c2_i];
  }

  c2_b_idx_size[0] = c2_idx_size[0];
  c2_b_loop_ub = c2_idx_size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_b_loop_ub; c2_i1++) {
    c2_d_idx_data[c2_i1] = c2_c_idx_data[c2_i1];
  }

  c2_b_onearg_null_assignment(chartInstance, c2_sp, c2_o_x_data, c2_b_x_size,
    c2_d_idx_data, c2_b_idx_size);
}

static void c2_make_bitarray(SFc2_flightControlSystemInstanceStruct
  *chartInstance, int32_T c2_n, int32_T c2_c_idx_data[], int32_T c2_idx_size[1],
  boolean_T c2_b_b_data[], int32_T c2_b_size[2])
{
  int32_T c2_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_k;
  int32_T c2_b_k;
  (void)chartInstance;
  c2_b_size[0] = 1;
  c2_b_size[1] = c2_n;
  c2_loop_ub = c2_n - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_b_b_data[c2_i] = false;
  }

  c2_i1 = c2_idx_size[0] - 1;
  for (c2_k = 1; c2_k - 1 <= c2_i1; c2_k++) {
    c2_b_k = c2_k - 1;
    c2_b_b_data[c2_c_idx_data[c2_b_k] - 1] = true;
  }
}

static int32_T c2_num_true(SFc2_flightControlSystemInstanceStruct *chartInstance,
  boolean_T c2_b_b_data[], int32_T c2_b_size[2])
{
  int32_T c2_n;
  int32_T c2_i;
  int32_T c2_k;
  int32_T c2_b_k;
  (void)chartInstance;
  c2_n = 0;
  c2_i = c2_b_size[1] - 1;
  for (c2_k = 1; c2_k - 1 <= c2_i; c2_k++) {
    c2_b_k = c2_k - 1;
    c2_n += (int32_T)c2_b_b_data[c2_b_k];
  }

  return c2_n;
}

static boolean_T c2_allinrange(SFc2_flightControlSystemInstanceStruct
  *chartInstance, real_T c2_n_x_data[], int32_T c2_x_size[1], int32_T c2_hi)
{
  boolean_T c2_p;
  real_T c2_d;
  int32_T c2_i;
  int32_T c2_k;
  int32_T c2_exitg1;
  real_T c2_b_k;
  boolean_T c2_b;
  (void)chartInstance;
  c2_d = (real_T)c2_x_size[0];
  c2_i = (int32_T)c2_d - 1;
  c2_k = 0;
  do {
    c2_exitg1 = 0;
    if (c2_k <= c2_i) {
      c2_b_k = (real_T)c2_k + 1.0;
      if ((c2_n_x_data[(int32_T)c2_b_k - 1] >= 1.0) && (c2_n_x_data[(int32_T)
           c2_b_k - 1] <= (real_T)c2_hi)) {
        c2_b = true;
      } else {
        c2_b = false;
      }

      if (!c2_b) {
        c2_p = false;
        c2_exitg1 = 1;
      } else {
        c2_k++;
      }
    } else {
      c2_p = true;
      c2_exitg1 = 1;
    }
  } while (c2_exitg1 == 0);

  return c2_p;
}

static void c2_imfill(SFc2_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c2_sp, boolean_T c2_b_varargin_1[19200],
                      real_T c2_e_varargin_2_data[], int32_T c2_varargin_2_size
                      [1], boolean_T c2_I2[19200])
{
  emlrtStack c2_st;
  int32_T c2_b_varargin_2_size[1];
  int32_T c2_loop_ub;
  int32_T c2_i;
  static char_T c2_b_cv[36] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm', 'f',
    'i', 'l', 'l', ':', 'n', 'o', 'I', 'n', 't', 'e', 'r', 'a', 'c', 't', 'i',
    'v', 'e', 'I', 'n', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  int32_T c2_c_varargin_2_size[1];
  int32_T c2_b_loop_ub;
  int32_T c2_i1;
  int32_T c2_locationsVar_size[1];
  int32_T c2_i2;
  int32_T c2_i3;
  boolean_T c2_mask[19200];
  int32_T c2_i4;
  int32_T c2_tmp_size[1];
  int32_T c2_c_loop_ub;
  int32_T c2_i5;
  int32_T c2_b_tmp_size[1];
  int32_T c2_i6;
  int32_T c2_d_loop_ub;
  int32_T c2_i7;
  boolean_T c2_b_tmp_data[19200];
  int32_T c2_e_loop_ub;
  int32_T c2_i8;
  int32_T c2_i9;
  boolean_T c2_b_I2[19200];
  int32_T c2_i10;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_varargin_2_size[0] = c2_varargin_2_size[0];
  c2_loop_ub = c2_varargin_2_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    chartInstance->c2_b_varargin_2_data[c2_i] = c2_e_varargin_2_data[c2_i];
  }

  if (c2_b_isequal(chartInstance, chartInstance->c2_b_varargin_2_data,
                   c2_b_varargin_2_size)) {
    sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_b_emlrt_marshallOut(chartInstance,
      c2_b_cv), 14, sf_mex_call(c2_sp, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, "message", 1U, 1U, 14, c2_b_emlrt_marshallOut(chartInstance,
      c2_b_cv))));
  }

  c2_c_varargin_2_size[0] = c2_varargin_2_size[0];
  c2_b_loop_ub = c2_varargin_2_size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_b_loop_ub; c2_i1++) {
    chartInstance->c2_c_varargin_2_data[c2_i1] = c2_e_varargin_2_data[c2_i1];
  }

  c2_st.site = &c2_oc_emlrtRSI;
  c2_checkLocations(chartInstance, &c2_st, chartInstance->c2_c_varargin_2_data,
                    c2_c_varargin_2_size, chartInstance->c2_locationsVar_data,
                    c2_locationsVar_size);
  for (c2_i2 = 0; c2_i2 < 19200; c2_i2++) {
    c2_mask[c2_i2] = c2_b_varargin_1[c2_i2];
  }

  for (c2_i3 = 0; c2_i3 < 19200; c2_i3++) {
    c2_mask[c2_i3] = !c2_mask[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 19200; c2_i4++) {
    c2_I2[c2_i4] = false;
  }

  c2_tmp_size[0] = c2_locationsVar_size[0];
  c2_c_loop_ub = c2_locationsVar_size[0] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_c_loop_ub; c2_i5++) {
    c2_i6 = (int32_T)chartInstance->c2_locationsVar_data[c2_i5];
    chartInstance->c2_tmp_data[c2_i5] = emlrtDynamicBoundsCheckR2012b(c2_i6, 1,
      19200, &c2_k_emlrtBCI, c2_sp);
  }

  c2_b_tmp_size[0] = c2_locationsVar_size[0];
  c2_d_loop_ub = c2_locationsVar_size[0] - 1;
  for (c2_i7 = 0; c2_i7 <= c2_d_loop_ub; c2_i7++) {
    c2_b_tmp_data[c2_i7] = c2_mask[(int32_T)chartInstance->
      c2_locationsVar_data[c2_i7] - 1];
  }

  emlrtSubAssignSizeCheck1dR2017a(c2_tmp_size[0], c2_b_tmp_size[0],
    &c2_c_emlrtECI, c2_sp);
  c2_e_loop_ub = c2_b_tmp_size[0] - 1;
  for (c2_i8 = 0; c2_i8 <= c2_e_loop_ub; c2_i8++) {
    c2_I2[chartInstance->c2_tmp_data[c2_i8] - 1] = c2_b_tmp_data[c2_i8];
  }

  for (c2_i9 = 0; c2_i9 < 19200; c2_i9++) {
    c2_b_I2[c2_i9] = c2_I2[c2_i9];
  }

  c2_imreconstruct(chartInstance, c2_b_I2, c2_mask, c2_I2);
  for (c2_i10 = 0; c2_i10 < 19200; c2_i10++) {
    c2_I2[c2_i10] = (c2_b_varargin_1[c2_i10] || c2_I2[c2_i10]);
  }
}

static boolean_T c2_b_isequal(SFc2_flightControlSystemInstanceStruct
  *chartInstance, real_T c2_varargin_1_data[], int32_T c2_varargin_1_size[1])
{
  boolean_T c2_p;
  boolean_T c2_b_p;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  real_T c2_x1;
  boolean_T c2_e_p;
  (void)chartInstance;
  c2_p = false;
  c2_b_p = false;
  if (!((real_T)c2_varargin_1_size[0] != 1.0)) {
    c2_b_p = true;
  }

  if (c2_b_p) {
    c2_c_p = true;
  } else {
    c2_c_p = false;
  }

  c2_d_p = c2_c_p;
  if (c2_c_p && (c2_varargin_1_size[0] != 0)) {
    c2_x1 = c2_varargin_1_data[0];
    c2_e_p = (c2_x1 == 0.0);
    if (!c2_e_p) {
      c2_d_p = false;
    }
  }

  if (c2_d_p) {
    c2_p = true;
  }

  return c2_p;
}

static void c2_checkLocations(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_c_locations_data[], int32_T
  c2_locations_size[1], real_T c2_b_locationsVar_data[], int32_T
  c2_locationsVar_size[1])
{
  emlrtStack c2_st;
  int32_T c2_b_locations_size[1];
  int32_T c2_loop_ub;
  int32_T c2_i;
  int32_T c2_c_locations_size[1];
  int32_T c2_badPixels_size[1];
  int32_T c2_b_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_d_loop_ub;
  int32_T c2_tmp_size[1];
  boolean_T c2_badPixels_data[19200];
  int32_T c2_i3;
  int32_T c2_e_loop_ub;
  int32_T c2_i4;
  int32_T c2_f_loop_ub;
  boolean_T c2_b_tmp_data[19200];
  int32_T c2_i5;
  int32_T c2_g_loop_ub;
  int32_T c2_i6;
  int32_T c2_b_badPixels_size[1];
  int32_T c2_h_loop_ub;
  int32_T c2_i7;
  boolean_T c2_b_badPixels_data[19200];
  real_T c2_numelBadPix;
  int32_T c2_i8;
  int32_T c2_s;
  real_T c2_b_s;
  int32_T c2_i9;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_locations_size[0] = c2_locations_size[0];
  c2_loop_ub = c2_locations_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    chartInstance->c2_locations_data[c2_i] = c2_c_locations_data[c2_i];
  }

  c2_st.site = &c2_qc_emlrtRSI;
  c2_validateattributes(chartInstance, &c2_st, chartInstance->c2_locations_data,
                        c2_b_locations_size);
  c2_locationsVar_size[0] = 0;
  if (c2_locations_size[0] != 0) {
    c2_c_locations_size[0] = c2_locations_size[0] + c2_locationsVar_size[0];
    c2_b_loop_ub = c2_locations_size[0] - 1;
    for (c2_i1 = 0; c2_i1 <= c2_b_loop_ub; c2_i1++) {
      chartInstance->c2_b_locations_data[c2_i1] = c2_c_locations_data[c2_i1];
    }

    c2_d_loop_ub = c2_locationsVar_size[0] - 1;
    for (c2_i3 = 0; c2_i3 <= c2_d_loop_ub; c2_i3++) {
      chartInstance->c2_b_locations_data[c2_i3 + c2_locations_size[0]] =
        c2_b_locationsVar_data[c2_i3];
    }

    c2_locationsVar_size[0] = c2_c_locations_size[0];
    c2_f_loop_ub = c2_c_locations_size[0] - 1;
    for (c2_i5 = 0; c2_i5 <= c2_f_loop_ub; c2_i5++) {
      c2_b_locationsVar_data[c2_i5] = chartInstance->c2_b_locations_data[c2_i5];
    }
  }

  c2_badPixels_size[0] = c2_locations_size[0];
  c2_c_loop_ub = c2_locations_size[0] - 1;
  for (c2_i2 = 0; c2_i2 <= c2_c_loop_ub; c2_i2++) {
    c2_badPixels_data[c2_i2] = (c2_c_locations_data[c2_i2] < 1.0);
  }

  c2_tmp_size[0] = c2_locations_size[0];
  c2_e_loop_ub = c2_locations_size[0] - 1;
  for (c2_i4 = 0; c2_i4 <= c2_e_loop_ub; c2_i4++) {
    c2_b_tmp_data[c2_i4] = (c2_c_locations_data[c2_i4] > 19200.0);
  }

  emlrtSizeEqCheck1DR2012b(c2_badPixels_size[0], c2_tmp_size[0], &c2_d_emlrtECI,
    c2_sp);
  c2_g_loop_ub = c2_badPixels_size[0] - 1;
  for (c2_i6 = 0; c2_i6 <= c2_g_loop_ub; c2_i6++) {
    c2_badPixels_data[c2_i6] = (c2_badPixels_data[c2_i6] || c2_b_tmp_data[c2_i6]);
  }

  c2_b_badPixels_size[0] = c2_badPixels_size[0];
  c2_h_loop_ub = c2_badPixels_size[0] - 1;
  for (c2_i7 = 0; c2_i7 <= c2_h_loop_ub; c2_i7++) {
    c2_b_badPixels_data[c2_i7] = c2_badPixels_data[c2_i7];
  }

  c2_st.site = &c2_rc_emlrtRSI;
  if (c2_any(chartInstance, &c2_st, c2_b_badPixels_data, c2_b_badPixels_size)) {
    c2_numelBadPix = (real_T)c2_badPixels_size[0];
    c2_st.site = &c2_sc_emlrtRSI;
    c2_b_warning(chartInstance, &c2_st);
    c2_i8 = (int32_T)(((-1.0 - c2_numelBadPix) + 1.0) / -1.0);
    emlrtForLoopVectorCheckR2012b(c2_numelBadPix, -1.0, 1.0, mxDOUBLE_CLASS,
      c2_i8, &c2_hd_emlrtRTEI, c2_sp);
    for (c2_s = 0; c2_s < c2_i8; c2_s++) {
      c2_b_s = c2_numelBadPix + -(real_T)c2_s;
      c2_i9 = (int32_T)c2_b_s;
      if (c2_badPixels_data[emlrtDynamicBoundsCheckR2012b(c2_i9, 1,
           c2_badPixels_size[0], &c2_l_emlrtBCI, c2_sp) - 1]) {
        c2_st.site = &c2_tc_emlrtRSI;
        c2_d_nullAssignment(chartInstance, &c2_st, c2_b_locationsVar_data,
                            c2_locationsVar_size, (int32_T)c2_b_s);
      }
    }
  }
}

static void c2_validateattributes(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_a_data[], int32_T
  c2_a_size[1])
{
  emlrtStack c2_st;
  boolean_T c2_p;
  real_T c2_d;
  int32_T c2_i;
  int32_T c2_k;
  boolean_T c2_exitg1;
  real_T c2_b_k;
  boolean_T c2_b;
  real_T c2_b_x;
  boolean_T c2_b_p;
  const mxArray *c2_y = NULL;
  static char_T c2_b_cv[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'f',
    'i', 'l', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'P', 'o', 's',
    'i', 't', 'i', 'v', 'e' };

  boolean_T c2_c_p;
  const mxArray *c2_b_y = NULL;
  real_T c2_d1;
  static char_T c2_b_cv1[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  int32_T c2_i1;
  const mxArray *c2_c_y = NULL;
  int32_T c2_c_k;
  static char_T c2_b_cv2[26] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '2', ',', ' ', 'L', 'O', 'C', 'A', 'T', 'I', 'O', 'N',
    'S', ',' };

  real_T c2_d_k;
  boolean_T c2_b1;
  real_T c2_c_x;
  real_T c2_d_x;
  real_T c2_e_x;
  const mxArray *c2_d_y = NULL;
  boolean_T c2_b_b;
  static char_T c2_b_cv3[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm',
    'f', 'i', 'l', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'I', 'n',
    't', 'e', 'g', 'e', 'r' };

  boolean_T c2_b2;
  const mxArray *c2_e_y = NULL;
  boolean_T c2_c_b;
  static char_T c2_b_cv4[47] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'I', 'n', 't', 'e', 'g', 'e', 'r' };

  const mxArray *c2_f_y = NULL;
  boolean_T c2_d_p;
  real_T c2_f_x;
  static char_T c2_b_cv5[26] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '2', ',', ' ', 'L', 'O', 'C', 'A', 'T', 'I', 'O', 'N',
    'S', ',' };

  real_T c2_g_x;
  boolean_T c2_e_p;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_uc_emlrtRSI;
  c2_p = true;
  c2_d = (real_T)c2_a_size[0];
  c2_i = (int32_T)c2_d - 1;
  c2_k = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_k <= c2_i)) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_b_x = c2_a_data[(int32_T)c2_b_k - 1];
    c2_b_p = !(c2_b_x <= 0.0);
    if (c2_b_p) {
      c2_k++;
    } else {
      c2_p = false;
      c2_exitg1 = true;
    }
  }

  if (c2_p) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  if (!c2_b) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1, 26),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 2U, 14, c2_b_y,
      14, c2_c_y)));
  }

  c2_st.site = &c2_uc_emlrtRSI;
  c2_c_p = true;
  c2_d1 = (real_T)c2_a_size[0];
  c2_i1 = (int32_T)c2_d1 - 1;
  c2_c_k = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_c_k <= c2_i1)) {
    c2_d_k = (real_T)c2_c_k + 1.0;
    c2_c_x = c2_a_data[(int32_T)c2_d_k - 1];
    c2_d_x = c2_c_x;
    c2_e_x = c2_d_x;
    c2_b_b = muDoubleScalarIsNaN(c2_e_x);
    c2_b2 = !c2_b_b;
    c2_c_b = c2_b2;
    if (c2_c_b) {
      c2_f_x = c2_c_x;
      c2_g_x = c2_f_x;
      if (c2_g_x == c2_c_x) {
        c2_d_p = true;
      } else {
        c2_d_p = false;
      }
    } else {
      c2_d_p = false;
    }

    c2_e_p = c2_d_p;
    if (c2_e_p) {
      c2_c_k++;
    } else {
      c2_c_p = false;
      c2_exitg1 = true;
    }
  }

  if (c2_c_p) {
    c2_b1 = true;
  } else {
    c2_b1 = false;
  }

  if (!c2_b1) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv4, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv5, 10, 0U, 1U, 0U, 2, 1, 26),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_d_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 2U, 14, c2_e_y,
      14, c2_f_y)));
  }
}

static boolean_T c2_any(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_n_x_data[], int32_T c2_x_size[1])
{
  boolean_T c2_y;
  emlrtStack c2_st;
  boolean_T c2_b;
  const mxArray *c2_b_y = NULL;
  static char_T c2_b_cv[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  real_T c2_vlen;
  const mxArray *c2_c_y = NULL;
  real_T c2_c_a;
  int32_T c2_c;
  int32_T c2_d_a;
  int32_T c2_vspread;
  int32_T c2_b_b;
  int32_T c2_i2;
  int32_T c2_e_a;
  int32_T c2_ix;
  boolean_T c2_exitg1;
  boolean_T c2_b1;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_vc_emlrtRSI;
  if ((c2_x_size[0] == 1) || ((real_T)c2_x_size[0] != 1.0)) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  if (!c2_b) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_b_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_c_y)));
  }

  c2_y = false;
  c2_vlen = (real_T)c2_x_size[0];
  c2_c_a = c2_vlen;
  c2_c = (int32_T)c2_c_a;
  c2_d_a = c2_c - 1;
  c2_vspread = c2_d_a;
  c2_b_b = c2_vspread;
  c2_i2 = c2_b_b;
  c2_e_a = c2_i2 + 1;
  c2_i2 = c2_e_a;
  c2_ix = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_ix + 1 <= c2_i2)) {
    if (!c2_n_x_data[c2_ix]) {
      c2_b1 = true;
    } else {
      c2_b1 = false;
    }

    if (!c2_b1) {
      c2_y = true;
      c2_exitg1 = true;
    } else {
      c2_ix++;
    }
  }

  return c2_y;
}

static void c2_b_warning(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp)
{
  const mxArray *c2_y = NULL;
  static char_T c2_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c2_b_y = NULL;
  static char_T c2_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c2_c_y = NULL;
  static char_T c2_msgID[24] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'f', 'i', 'l', 'l', ':', 'o', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g', 'e' };

  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_msgID, 10, 0U, 1U, 0U, 2, 1, 24),
                false);
  sf_mex_call(c2_sp, "feval", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp, "feval",
    1U, 2U, 14, c2_b_y, 14, c2_c_y));
}

static void c2_b_nullAssignment(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
  c2_x_size[1], int32_T c2_idx, real_T c2_o_x_data[], int32_T c2_b_x_size[1])
{
  int32_T c2_loop_ub;
  int32_T c2_i;
  c2_b_x_size[0] = c2_x_size[0];
  c2_loop_ub = c2_x_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_o_x_data[c2_i] = c2_n_x_data[c2_i];
  }

  c2_d_nullAssignment(chartInstance, c2_sp, c2_o_x_data, c2_b_x_size, c2_idx);
}

static void c2_imreconstruct(SFc2_flightControlSystemInstanceStruct
  *chartInstance, boolean_T c2_marker[19200], boolean_T c2_mask[19200],
  boolean_T c2_im[19200])
{
  int32_T c2_i;
  int32_T c2_i1;
  real_T c2_imSizeT[2];
  (void)chartInstance;
  for (c2_i = 0; c2_i < 19200; c2_i++) {
    c2_im[c2_i] = c2_marker[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_imSizeT[c2_i1] = 120.0 + 40.0 * (real_T)c2_i1;
  }

  ippreconstruct_uint8((uint8_T *)&c2_im[0], (uint8_T *)&c2_mask[0], c2_imSizeT,
                       2.0);
}

static void c2_c_eml_find(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, boolean_T c2_b_x[19200], int32_T c2_i_data[], int32_T
  c2_i_size[1])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_idx;
  int32_T c2_ii;
  boolean_T c2_exitg1;
  boolean_T c2_b;
  int32_T c2_b_ii;
  int32_T c2_i;
  int32_T c2_iv[2];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_n_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_idx = 0;
  c2_ii = 1;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_ii - 1 < 19200)) {
    c2_b_ii = c2_ii;
    if (c2_b_x[c2_b_ii - 1]) {
      c2_idx++;
      c2_i_data[c2_idx - 1] = c2_b_ii;
      if (c2_idx >= 19200) {
        c2_exitg1 = true;
      } else {
        c2_ii++;
      }
    } else {
      c2_ii++;
    }
  }

  c2_b = (1 > c2_idx);
  if (c2_b) {
    c2_i = 0;
  } else {
    c2_i = c2_idx;
  }

  c2_iv[0] = 1;
  c2_iv[1] = c2_i;
  c2_b_st.site = &c2_o_emlrtRSI;
  c2_indexShapeCheck(chartInstance, &c2_b_st, 19200, c2_iv);
  c2_i_size[0] = c2_i;
}

static void c2_meshgrid(SFc2_flightControlSystemInstanceStruct *chartInstance,
  real_T c2_b_x[121], real_T c2_y[121], real_T c2_xx[14641], real_T c2_yy[14641])
{
  int32_T c2_j;
  int32_T c2_b_j;
  int32_T c2_i;
  int32_T c2_b_i;
  (void)chartInstance;
  for (c2_j = 0; c2_j < 121; c2_j++) {
    c2_b_j = c2_j;
    for (c2_i = 0; c2_i < 121; c2_i++) {
      c2_b_i = c2_i;
      c2_xx[c2_b_i + 121 * c2_b_j] = c2_b_x[c2_b_j];
      c2_yy[c2_b_i + 121 * c2_b_j] = c2_y[c2_b_i];
    }
  }
}

static void c2_power(SFc2_flightControlSystemInstanceStruct *chartInstance,
                     real_T c2_c_a[14641], real_T c2_y[14641])
{
  int32_T c2_k;
  int32_T c2_b_k;
  real_T c2_d_a;
  real_T c2_b_y;
  (void)chartInstance;
  for (c2_k = 0; c2_k < 14641; c2_k++) {
    c2_b_k = c2_k;
    c2_d_a = c2_c_a[c2_b_k];
    c2_b_y = c2_d_a * c2_d_a;
    c2_y[c2_b_k] = c2_b_y;
  }
}

static void c2_sqrt(SFc2_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c2_sp, real_T c2_b_x[14641], real_T c2_c_x[14641])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 14641; c2_i++) {
    c2_c_x[c2_i] = c2_b_x[c2_i];
  }

  c2_b_sqrt(chartInstance, c2_sp, c2_c_x);
}

static void c2_b_round(SFc2_flightControlSystemInstanceStruct *chartInstance,
  real_T c2_b_x[14641], real_T c2_c_x[14641])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 14641; c2_i++) {
    c2_c_x[c2_i] = c2_b_x[c2_i];
  }

  c2_d_round(chartInstance, c2_c_x);
}

static void c2_d_eml_find(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_b_x[14641], int32_T c2_i_data[], int32_T
  c2_i_size[1], int32_T c2_j_data[], int32_T c2_j_size[1], real_T c2_v_data[],
  int32_T c2_v_size[1])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_idx;
  int32_T c2_ii;
  int32_T c2_jj;
  boolean_T c2_exitg1;
  boolean_T c2_b;
  boolean_T c2_guard1 = false;
  int32_T c2_i;
  int32_T c2_iv[2];
  boolean_T c2_b1;
  int32_T c2_i1;
  int32_T c2_iv1[2];
  boolean_T c2_b2;
  int32_T c2_i2;
  int32_T c2_iv2[2];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_yb_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_idx = 0;
  c2_ii = 0;
  c2_jj = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_jj + 1 <= 121)) {
    c2_guard1 = false;
    if (c2_b_x[c2_ii + 121 * c2_jj] != 0.0) {
      c2_idx++;
      c2_i_data[c2_idx - 1] = c2_ii + 1;
      c2_j_data[c2_idx - 1] = c2_jj + 1;
      c2_v_data[c2_idx - 1] = c2_b_x[c2_ii + 121 * c2_jj];
      if (c2_idx >= 14641) {
        c2_exitg1 = true;
      } else {
        c2_guard1 = true;
      }
    } else {
      c2_guard1 = true;
    }

    if (c2_guard1) {
      c2_ii++;
      if (c2_ii + 1 > 121) {
        c2_ii = 0;
        c2_jj++;
      }
    }
  }

  c2_b = (1 > c2_idx);
  if (c2_b) {
    c2_i = 0;
  } else {
    c2_i = c2_idx;
  }

  c2_iv[0] = 1;
  c2_iv[1] = c2_i;
  c2_b_st.site = &c2_cc_emlrtRSI;
  c2_indexShapeCheck(chartInstance, &c2_b_st, 14641, c2_iv);
  c2_i_size[0] = c2_i;
  c2_b1 = (1 > c2_idx);
  if (c2_b1) {
    c2_i1 = 0;
  } else {
    c2_i1 = c2_idx;
  }

  c2_iv1[0] = 1;
  c2_iv1[1] = c2_i1;
  c2_b_st.site = &c2_bc_emlrtRSI;
  c2_indexShapeCheck(chartInstance, &c2_b_st, 14641, c2_iv1);
  c2_j_size[0] = c2_i1;
  c2_b2 = (1 > c2_idx);
  if (c2_b2) {
    c2_i2 = 0;
  } else {
    c2_i2 = c2_idx;
  }

  c2_iv2[0] = 1;
  c2_iv2[1] = c2_i2;
  c2_b_st.site = &c2_ac_emlrtRSI;
  c2_indexShapeCheck(chartInstance, &c2_b_st, 14641, c2_iv2);
  c2_v_size[0] = c2_i2;
}

static void c2_e_eml_find(SFc2_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_b_x[67200], int32_T c2_i_data[], int32_T
  c2_i_size[1], int32_T c2_j_data[], int32_T c2_j_size[1], real_T c2_v_data[],
  int32_T c2_v_size[1])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_idx;
  int32_T c2_ii;
  int32_T c2_jj;
  boolean_T c2_exitg1;
  boolean_T c2_b;
  boolean_T c2_guard1 = false;
  int32_T c2_i;
  int32_T c2_iv[2];
  boolean_T c2_b1;
  int32_T c2_i1;
  int32_T c2_iv1[2];
  boolean_T c2_b2;
  int32_T c2_i2;
  int32_T c2_iv2[2];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_yb_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_idx = 0;
  c2_ii = 0;
  c2_jj = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_jj + 1 <= 280)) {
    c2_guard1 = false;
    if (c2_b_x[c2_ii + 240 * c2_jj] != 0.0) {
      c2_idx++;
      c2_i_data[c2_idx - 1] = c2_ii + 1;
      c2_j_data[c2_idx - 1] = c2_jj + 1;
      c2_v_data[c2_idx - 1] = c2_b_x[c2_ii + 240 * c2_jj];
      if (c2_idx >= 67200) {
        c2_exitg1 = true;
      } else {
        c2_guard1 = true;
      }
    } else {
      c2_guard1 = true;
    }

    if (c2_guard1) {
      c2_ii++;
      if (c2_ii + 1 > 240) {
        c2_ii = 0;
        c2_jj++;
      }
    }
  }

  c2_b = (1 > c2_idx);
  if (c2_b) {
    c2_i = 0;
  } else {
    c2_i = c2_idx;
  }

  c2_iv[0] = 1;
  c2_iv[1] = c2_i;
  c2_b_st.site = &c2_cc_emlrtRSI;
  c2_indexShapeCheck(chartInstance, &c2_b_st, 67200, c2_iv);
  c2_i_size[0] = c2_i;
  c2_b1 = (1 > c2_idx);
  if (c2_b1) {
    c2_i1 = 0;
  } else {
    c2_i1 = c2_idx;
  }

  c2_iv1[0] = 1;
  c2_iv1[1] = c2_i1;
  c2_b_st.site = &c2_bc_emlrtRSI;
  c2_indexShapeCheck(chartInstance, &c2_b_st, 67200, c2_iv1);
  c2_j_size[0] = c2_i1;
  c2_b2 = (1 > c2_idx);
  if (c2_b2) {
    c2_i2 = 0;
  } else {
    c2_i2 = c2_idx;
  }

  c2_iv2[0] = 1;
  c2_iv2[1] = c2_i2;
  c2_b_st.site = &c2_ac_emlrtRSI;
  c2_indexShapeCheck(chartInstance, &c2_b_st, 67200, c2_iv2);
  c2_v_size[0] = c2_i2;
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
  boolean_T c2_b;
  const mxArray *c2_y = NULL;
  int32_T c2_b_x_size[1];
  int32_T c2_b_loop_ub;
  const mxArray *c2_b_y = NULL;
  int32_T c2_i2;
  real_T c2_mean_x;
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
  real_T c2_b_x;
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
  real_T c2_c_a;
  real_T c2_d_a;
  real_T c2_l_y;
  real_T c2_e_a;
  int32_T c2_tmp_size[1];
  real_T c2_c_x;
  int32_T c2_k_loop_ub;
  real_T c2_f_a;
  int32_T c2_i21;
  real_T c2_c;
  int32_T c2_end;
  boolean_T c2_b_tmp_data[4];
  real_T c2_g_a;
  int32_T c2_trueCount;
  real_T c2_h_a;
  int32_T c2_d_i;
  real_T c2_i_a;
  real_T c2_d_x;
  real_T c2_j_a;
  int32_T c2_weighted_norms_size[1];
  real_T c2_b_c;
  int32_T c2_partialTrueCount;
  int32_T c2_e_i;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_g_x;
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
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_l_x;
  real_T c2_m_x;
  real_T c2_n_x;
  real_T c2_o_x;
  real_T c2_r_y;
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
  real_T c2_p_x;
  real_T c2_q_x;
  real_T c2_r_x;
  real_T c2_s_y;
  real_T c2_s_x;
  real_T c2_t_x;
  real_T c2_u_x;
  real_T c2_t_y;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 3);
  c2_st.site = &c2_bd_emlrtRSI;
  c2_i = c2_points_size[0];
  c2_x_size[0] = c2_i;
  c2_loop_ub = c2_i - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    chartInstance->c2_g_x_data[c2_i1] = c2_points_data[c2_i1];
  }

  if ((c2_x_size[0] == 1) || ((real_T)c2_x_size[0] != 1.0)) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  if (!c2_b) {
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
    chartInstance->c2_h_x_data[c2_i2] = chartInstance->c2_g_x_data[c2_i2];
  }

  c2_mean_x = c2_combineVectorElements(chartInstance, chartInstance->c2_h_x_data,
    c2_b_x_size) / (real_T)c2_x_size[0];
  c2_st.site = &c2_cd_emlrtRSI;
  c2_i3 = c2_points_size[0];
  c2_x_size[0] = c2_i3;
  c2_c_loop_ub = c2_i3 - 1;
  for (c2_i4 = 0; c2_i4 <= c2_c_loop_ub; c2_i4++) {
    chartInstance->c2_g_x_data[c2_i4] = c2_points_data[c2_i4 + c2_points_size[0]];
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
    chartInstance->c2_i_x_data[c2_i5] = chartInstance->c2_g_x_data[c2_i5];
  }

  c2_mean_y = c2_combineVectorElements(chartInstance, chartInstance->c2_i_x_data,
    c2_c_x_size) / (real_T)c2_x_size[0];
  c2_st.site = &c2_dd_emlrtRSI;
  c2_b_x = c2_mean_x;
  c2_e_y = c2_mean_y;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 2);
  c2_c_xb = -(80.0 - c2_b_x) / 160.0;
  c2_c_yb = -(60.0 - c2_e_y) / 120.0;
  *c2_b_xb = c2_c_xb;
  *c2_b_yb = c2_c_yb;
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 15,
                     covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance,
        4U, 0U, 8U, c2_p, 2.0, -1, 4U, c2_p > 2.0))) {
    c2_i6 = c2_points_size[0];
    c2_i7 = emlrtDynamicBoundsCheckR2012b(1, 1, c2_i6, &c2_m_emlrtBCI, c2_sp) -
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

  c2_d = emlrtNonNegativeCheckR2012b(c2_p, &c2_j_emlrtDCI, c2_sp);
  c2_u = emlrtIntegerCheckR2012b(c2_d, &c2_i_emlrtDCI, c2_sp);
  if (c2_u < 0.0) {
    c2_f_y = muDoubleScalarCeil(c2_u);
  } else {
    c2_f_y = muDoubleScalarFloor(c2_u);
  }

  c2_norms_size[0] = c2__s32_d_(chartInstance, c2_f_y, 0, 1U, 6926, 19);
  c2_d1 = emlrtNonNegativeCheckR2012b(c2_p, &c2_j_emlrtDCI, c2_sp);
  c2_b_u = emlrtIntegerCheckR2012b(c2_d1, &c2_i_emlrtDCI, c2_sp);
  if (c2_b_u < 0.0) {
    c2_g_y = muDoubleScalarCeil(c2_b_u);
  } else {
    c2_g_y = muDoubleScalarFloor(c2_b_u);
  }

  c2_g_loop_ub = c2__s32_d_(chartInstance, c2_g_y, 0, 1U, 6926, 19) - 1;
  for (c2_i12 = 0; c2_i12 <= c2_g_loop_ub; c2_i12++) {
    c2_norms_data[c2_i12] = 0.0;
  }

  c2_d2 = emlrtNonNegativeCheckR2012b(c2_p, &c2_l_emlrtDCI, c2_sp);
  c2_c_u = emlrtIntegerCheckR2012b(c2_d2, &c2_k_emlrtDCI, c2_sp);
  if (c2_c_u < 0.0) {
    c2_h_y = muDoubleScalarCeil(c2_c_u);
  } else {
    c2_h_y = muDoubleScalarFloor(c2_c_u);
  }

  c2_angles_size[0] = c2__s32_d_(chartInstance, c2_h_y, 0, 1U, 6955, 19);
  c2_d3 = emlrtNonNegativeCheckR2012b(c2_p, &c2_l_emlrtDCI, c2_sp);
  c2_d_u = emlrtIntegerCheckR2012b(c2_d3, &c2_k_emlrtDCI, c2_sp);
  if (c2_d_u < 0.0) {
    c2_i_y = muDoubleScalarCeil(c2_d_u);
  } else {
    c2_i_y = muDoubleScalarFloor(c2_d_u);
  }

  c2_h_loop_ub = c2__s32_d_(chartInstance, c2_i_y, 0, 1U, 6955, 19) - 1;
  for (c2_i13 = 0; c2_i13 <= c2_h_loop_ub; c2_i13++) {
    c2_angles_data[c2_i13] = 0.0;
  }

  c2_d4 = c2_p - 1.0;
  c2_i14 = (int32_T)c2_d4;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, c2_d4, mxDOUBLE_CLASS, c2_i14,
    &c2_id_emlrtRTEI, c2_sp);
  c2_b_i = 0;
  while (c2_b_i <= c2_i14 - 1) {
    c2_c_i = (real_T)c2_b_i + 1.0;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 2, 1);
    c2_i15 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_m_emlrtDCI, c2_sp);
    c2_x_1 = c2_points_data[emlrtDynamicBoundsCheckR2012b(c2_i15, 1,
      c2_points_size[0], &c2_n_emlrtBCI, c2_sp) - 1];
    c2_i17 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_n_emlrtDCI, c2_sp);
    c2_y_1 = c2_points_data[(emlrtDynamicBoundsCheckR2012b(c2_i17, 1,
      c2_points_size[0], &c2_o_emlrtBCI, c2_sp) + c2_points_size[0]) - 1];
    c2_d5 = c2_c_i + 1.0;
    c2_i18 = (int32_T)emlrtIntegerCheckR2012b(c2_d5, &c2_o_emlrtDCI, c2_sp);
    c2_x_2 = c2_points_data[emlrtDynamicBoundsCheckR2012b(c2_i18, 1,
      c2_points_size[0], &c2_p_emlrtBCI, c2_sp) - 1];
    c2_d6 = c2_c_i + 1.0;
    c2_i19 = (int32_T)emlrtIntegerCheckR2012b(c2_d6, &c2_p_emlrtDCI, c2_sp);
    c2_y_2 = c2_points_data[(emlrtDynamicBoundsCheckR2012b(c2_i19, 1,
      c2_points_size[0], &c2_q_emlrtBCI, c2_sp) + c2_points_size[0]) - 1];
    c2_st.site = &c2_ed_emlrtRSI;
    c2_c_a = c2_x_2 - c2_x_1;
    c2_d_a = c2_c_a;
    c2_e_a = c2_d_a;
    c2_c_x = c2_e_a;
    c2_f_a = c2_c_x;
    c2_c = c2_f_a * c2_f_a;
    c2_st.site = &c2_ed_emlrtRSI;
    c2_g_a = c2_y_2 - c2_y_1;
    c2_h_a = c2_g_a;
    c2_i_a = c2_h_a;
    c2_d_x = c2_i_a;
    c2_j_a = c2_d_x;
    c2_b_c = c2_j_a * c2_j_a;
    c2_st.site = &c2_ed_emlrtRSI;
    c2_e_x = c2_c + c2_b_c;
    c2_f_x = c2_e_x;
    c2_g_x = c2_f_x;
    if (c2_g_x < 0.0) {
      c2_b_p = true;
    } else {
      c2_b_p = false;
    }

    c2_c_p = c2_b_p;
    if (c2_c_p) {
      c2_m_y = NULL;
      sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_n_y = NULL;
      sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_p_y = NULL;
      sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 4),
                    false);
      sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_m_y, 14, sf_mex_call(&c2_st,
        "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 2U, 14,
        c2_n_y, 14, c2_p_y)));
    }

    c2_f_x = muDoubleScalarSqrt(c2_f_x);
    c2_i24 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_r_emlrtDCI, c2_sp);
    c2_norms_data[emlrtDynamicBoundsCheckR2012b(c2_i24, 1, c2_norms_size[0],
      &c2_s_emlrtBCI, c2_sp) - 1] = c2_f_x;
    c2_slope = (c2_y_2 - c2_y_1) / (c2_x_2 - c2_x_1);
    if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 16,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c2_covrtInstance, 4U, 0U, 9U, c2_slope,
                        0.0, -1, 2U, c2_slope < 0.0))) {
      if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 17,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c2_covrtInstance, 4U, 0U, 10U,
                          c2_b_prev_heading, 3.1415926535897931, -1, 4U,
                          c2_b_prev_heading > 3.1415926535897931))) {
        c2_k_x = c2_slope;
        c2_o_x = c2_k_x;
        c2_o_x = muDoubleScalarAtan(c2_o_x);
        c2_i29 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_w_emlrtDCI, c2_sp);
        c2_angles_data[emlrtDynamicBoundsCheckR2012b(c2_i29, 1, c2_angles_size[0],
          &c2_x_emlrtBCI, c2_sp) - 1] = c2_o_x + 6.2831853071795862;
      } else {
        c2_j_x = c2_slope;
        c2_n_x = c2_j_x;
        c2_n_x = muDoubleScalarAtan(c2_n_x);
        c2_i28 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_v_emlrtDCI, c2_sp);
        c2_angles_data[emlrtDynamicBoundsCheckR2012b(c2_i28, 1, c2_angles_size[0],
          &c2_w_emlrtBCI, c2_sp) - 1] = c2_n_x + 3.1415926535897931;
      }
    } else if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 18,
                covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
                 0U, 11U, c2_b_prev_heading, 3.1101767270538954, -1, 4U,
                 c2_b_prev_heading > 3.1101767270538954))) {
      c2_i_x = c2_slope;
      c2_m_x = c2_i_x;
      c2_m_x = muDoubleScalarAtan(c2_m_x);
      c2_i27 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_u_emlrtDCI, c2_sp);
      c2_angles_data[emlrtDynamicBoundsCheckR2012b(c2_i27, 1, c2_angles_size[0],
        &c2_v_emlrtBCI, c2_sp) - 1] = c2_m_x + 3.1415926535897931;
    } else {
      c2_h_x = c2_slope;
      c2_l_x = c2_h_x;
      c2_l_x = muDoubleScalarAtan(c2_l_x);
      c2_i26 = (int32_T)emlrtIntegerCheckR2012b(c2_c_i, &c2_t_emlrtDCI, c2_sp);
      c2_angles_data[emlrtDynamicBoundsCheckR2012b(c2_i26, 1, c2_angles_size[0],
        &c2_u_emlrtBCI, c2_sp) - 1] = c2_l_x;
    }

    c2_b_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 2, 0);
  c2_st.site = &c2_fd_emlrtRSI;
  c2_x_size[0] = c2_norms_size[0];
  c2_i_loop_ub = c2_norms_size[0] - 1;
  for (c2_i16 = 0; c2_i16 <= c2_i_loop_ub; c2_i16++) {
    chartInstance->c2_g_x_data[c2_i16] = c2_norms_data[c2_i16];
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
    chartInstance->c2_j_x_data[c2_i20] = chartInstance->c2_g_x_data[c2_i20];
  }

  c2_l_y = c2_combineVectorElements(chartInstance, chartInstance->c2_j_x_data,
    c2_d_x_size) / (real_T)c2_x_size[0];
  c2_tmp_size[0] = c2_norms_size[0];
  c2_k_loop_ub = c2_norms_size[0] - 1;
  for (c2_i21 = 0; c2_i21 <= c2_k_loop_ub; c2_i21++) {
    c2_b_tmp_data[c2_i21] = (c2_norms_data[c2_i21] >= c2_l_y);
  }

  c2_end = c2_tmp_size[0] - 1;
  c2_trueCount = 0;
  c2_d_i = 0;
  while (c2_d_i <= c2_end) {
    if (c2_b_tmp_data[c2_d_i]) {
      c2_trueCount++;
    }

    c2_d_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_weighted_norms_size[0] = c2_trueCount;
  c2_partialTrueCount = 0;
  c2_e_i = 0;
  while (c2_e_i <= c2_end) {
    if (c2_b_tmp_data[c2_e_i]) {
      c2_d7 = (real_T)(c2_e_i + 1);
      c2_i22 = (int32_T)emlrtIntegerCheckR2012b(c2_d7, &c2_q_emlrtDCI, c2_sp);
      c2_weighted_norms_data[c2_partialTrueCount] =
        c2_norms_data[emlrtDynamicBoundsCheckR2012b(c2_i22, 1, c2_norms_size[0],
        &c2_r_emlrtBCI, c2_sp) - 1];
      c2_partialTrueCount++;
    }

    c2_e_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_st.site = &c2_gd_emlrtRSI;
  c2_x_size[0] = c2_norms_size[0];
  c2_l_loop_ub = c2_norms_size[0] - 1;
  for (c2_i23 = 0; c2_i23 <= c2_l_loop_ub; c2_i23++) {
    chartInstance->c2_g_x_data[c2_i23] = c2_norms_data[c2_i23];
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
    chartInstance->c2_k_x_data[c2_i25] = chartInstance->c2_g_x_data[c2_i25];
  }

  c2_r_y = c2_combineVectorElements(chartInstance, chartInstance->c2_k_x_data,
    c2_e_x_size) / (real_T)c2_x_size[0];
  c2_tmp_size[0] = c2_norms_size[0];
  c2_n_loop_ub = c2_norms_size[0] - 1;
  for (c2_i30 = 0; c2_i30 <= c2_n_loop_ub; c2_i30++) {
    c2_b_tmp_data[c2_i30] = (c2_norms_data[c2_i30] >= c2_r_y);
  }

  c2_b_end = c2_tmp_size[0] - 1;
  c2_b_trueCount = 0;
  c2_f_i = 0;
  while (c2_f_i <= c2_b_end) {
    if (c2_b_tmp_data[c2_f_i]) {
      c2_b_trueCount++;
    }

    c2_f_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_weighted_angles_size[0] = c2_b_trueCount;
  c2_b_partialTrueCount = 0;
  c2_g_i = 0;
  while (c2_g_i <= c2_b_end) {
    if (c2_b_tmp_data[c2_g_i]) {
      c2_d8 = (real_T)(c2_g_i + 1);
      c2_i31 = (int32_T)emlrtIntegerCheckR2012b(c2_d8, &c2_s_emlrtDCI, c2_sp);
      c2_weighted_angles_data[c2_b_partialTrueCount] =
        c2_angles_data[emlrtDynamicBoundsCheckR2012b(c2_i31, 1, c2_angles_size[0],
        &c2_t_emlrtBCI, c2_sp) - 1];
      c2_b_partialTrueCount++;
    }

    c2_g_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  emlrtSizeEqCheck1DR2012b(c2_weighted_norms_size[0], c2_weighted_angles_size[0],
    &c2_e_emlrtECI, c2_sp);
  c2_b_weighted_norms_size[0] = c2_weighted_norms_size[0];
  c2_o_loop_ub = c2_weighted_norms_size[0] - 1;
  for (c2_i32 = 0; c2_i32 <= c2_o_loop_ub; c2_i32++) {
    c2_b_weighted_norms_data[c2_i32] = c2_weighted_norms_data[c2_i32] *
      c2_weighted_angles_data[c2_i32];
  }

  c2_st.site = &c2_hd_emlrtRSI;
  *c2_b_heading = c2_sum(chartInstance, &c2_st, c2_b_weighted_norms_data,
    c2_b_weighted_norms_size) / c2_sum(chartInstance, &c2_st,
    c2_weighted_norms_data, c2_weighted_norms_size);
  c2_p_x = *c2_b_heading - c2_b_prev_heading;
  c2_q_x = c2_p_x;
  c2_r_x = c2_q_x;
  c2_s_y = muDoubleScalarAbs(c2_r_x);
  c2_s_x = *c2_b_heading - c2_b_prev_heading;
  c2_t_x = c2_s_x;
  c2_u_x = c2_t_x;
  c2_t_y = muDoubleScalarAbs(c2_u_x);
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 19,
                     covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance,
        4U, 0U, 12U, c2_s_y, 1.5707963267948966, -1, 4U, c2_t_y >
        1.5707963267948966))) {
    *c2_b_heading = c2_b_prev_heading;
  }
}

static real_T c2_sum(SFc2_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
                     c2_x_size[1])
{
  emlrtStack c2_st;
  boolean_T c2_b;
  const mxArray *c2_b_y = NULL;
  int32_T c2_b_x_size[1];
  int32_T c2_loop_ub;
  const mxArray *c2_c_y = NULL;
  int32_T c2_i;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_id_emlrtRSI;
  if ((c2_x_size[0] == 1) || ((real_T)c2_x_size[0] != 1.0)) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  if (!c2_b) {
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
    chartInstance->c2_l_x_data[c2_i] = c2_n_x_data[c2_i];
  }

  return c2_combineVectorElements(chartInstance, chartInstance->c2_l_x_data,
    c2_b_x_size);
}

static const mxArray *c2_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const char_T c2_u[34])
{
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 10, 0U, 1U, 0U, 2, 1, 34), false);
  return c2_y;
}

static const mxArray *c2_b_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const char_T c2_u[36])
{
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 10, 0U, 1U, 0U, 2, 1, 36), false);
  return c2_y;
}

static const mxArray *c2_c_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const char_T c2_u[30])
{
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 10, 0U, 1U, 0U, 2, 1, 30), false);
  return c2_y;
}

static const mxArray *c2_d_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const boolean_T c2_u
   [19200])
{
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 11, 0U, 1U, 0U, 2, 120, 160),
                false);
  return c2_y;
}

static const mxArray *c2_e_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const char_T c2_u[2])
{
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 10, 0U, 1U, 0U, 2, 1, 2), false);
  return c2_y;
}

static const mxArray *c2_f_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const real_T c2_u)
{
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 0, 0U, 0U, 0U, 0), false);
  return c2_y;
}

static const mxArray *c2_g_emlrt_marshallOut
  (SFc2_flightControlSystemInstanceStruct *chartInstance, const char_T c2_u[3])
{
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 10, 0U, 1U, 0U, 2, 1, 3), false);
  return c2_y;
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
  real_T c2_d6;
  real_T c2_d7;
  c2_mxData = NULL;
  switch (c2_ssIdNumber) {
   case 9U:
    c2_d = *chartInstance->c2_flag;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", *chartInstance->c2_c_BW,
      11, 0U, 1U, 0U, 2, 120, 160), false);
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

   case 11U:
    c2_d4 = *chartInstance->c2_land;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d4, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c2_d5 = *chartInstance->c2_xb;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d5, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c2_d6 = *chartInstance->c2_yb;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d6, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 12U:
    c2_d7 = *chartInstance->c2_prev_land;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d7, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }

  return c2_mxData;
}

static void c2_c_round(SFc2_flightControlSystemInstanceStruct *chartInstance,
  real_T c2_n_x_data[], int32_T c2_x_size[1])
{
  int32_T c2_nx;
  int32_T c2_k;
  int32_T c2_b_k;
  real_T c2_b_x;
  real_T c2_c_x;
  (void)chartInstance;
  c2_nx = c2_x_size[0] - 1;
  for (c2_k = 1; c2_k - 1 <= c2_nx; c2_k++) {
    c2_b_k = c2_k - 1;
    c2_b_x = c2_n_x_data[c2_b_k];
    c2_c_x = c2_b_x;
    c2_c_x = muDoubleScalarRound(c2_c_x);
    c2_n_x_data[c2_b_k] = c2_c_x;
  }
}

static void c2_c_nullAssignment(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
  c2_x_size[1], int32_T c2_c_idx_data[], int32_T c2_idx_size[1])
{
  emlrtStack c2_st;
  int32_T c2_n;
  boolean_T c2_p;
  real_T c2_d;
  int32_T c2_i;
  int32_T c2_k;
  boolean_T c2_exitg1;
  real_T c2_b_k;
  const mxArray *c2_y = NULL;
  int32_T c2_b_idx_size[1];
  int32_T c2_b_x;
  int32_T c2_loop_ub;
  const mxArray *c2_b_y = NULL;
  int32_T c2_c_x;
  int32_T c2_i1;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_lc_emlrtRSI;
  c2_n = c2_x_size[0];
  c2_p = true;
  c2_d = (real_T)c2_idx_size[0];
  c2_i = (int32_T)c2_d - 1;
  c2_k = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_k <= c2_i)) {
    c2_b_k = (real_T)c2_k + 1.0;
    if ((c2_c_idx_data[(int32_T)c2_b_k - 1] < 1) || (c2_c_idx_data[(int32_T)
         c2_b_k - 1] > c2_n)) {
      c2_p = false;
      c2_exitg1 = true;
    } else {
      c2_b_x = c2_c_idx_data[(int32_T)c2_b_k - 1];
      c2_c_x = c2_b_x;
      if (c2_c_idx_data[(int32_T)c2_b_k - 1] != c2_c_x) {
        c2_p = false;
        c2_exitg1 = true;
      } else {
        c2_k++;
      }
    }
  }

  if (!c2_p) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1, 25),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1, 25),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_b_y)));
  }

  c2_b_idx_size[0] = c2_idx_size[0];
  c2_loop_ub = c2_idx_size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    chartInstance->c2_b_idx_data[c2_i1] = c2_c_idx_data[c2_i1];
  }

  c2_st.site = &c2_mc_emlrtRSI;
  c2_b_onearg_null_assignment(chartInstance, &c2_st, c2_n_x_data, c2_x_size,
    chartInstance->c2_b_idx_data, c2_b_idx_size);
}

static void c2_b_onearg_null_assignment(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
  c2_x_size[1], int32_T c2_c_idx_data[], int32_T c2_idx_size[1])
{
  int32_T c2_nxin;
  int32_T c2_nrowx;
  int32_T c2_b_idx_size[1];
  int32_T c2_loop_ub;
  int32_T c2_i;
  int32_T c2_d_idx_data[19200];
  boolean_T c2_b_b_data[19200];
  int32_T c2_b_size[2];
  int32_T c2_b_b_size[2];
  int32_T c2_b_loop_ub;
  int32_T c2_i1;
  int32_T c2_nxout;
  boolean_T c2_c_b_data[19200];
  int32_T c2_nb;
  int32_T c2_k0;
  int32_T c2_k;
  int32_T c2_b_k;
  boolean_T c2_b;
  int32_T c2_i2;
  c2_nxin = c2_x_size[0];
  c2_nrowx = c2_x_size[0];
  c2_b_idx_size[0] = c2_idx_size[0];
  c2_loop_ub = c2_idx_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_d_idx_data[c2_i] = c2_c_idx_data[c2_i];
  }

  c2_make_bitarray(chartInstance, c2_nxin, c2_d_idx_data, c2_b_idx_size,
                   c2_b_b_data, c2_b_size);
  c2_b_b_size[0] = 1;
  c2_b_b_size[1] = c2_b_size[1];
  c2_b_loop_ub = c2_b_size[0] * c2_b_size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_b_loop_ub; c2_i1++) {
    c2_c_b_data[c2_i1] = c2_b_b_data[c2_i1];
  }

  c2_nxout = c2_nxin - c2_num_true(chartInstance, c2_c_b_data, c2_b_b_size);
  c2_nb = c2_b_size[1];
  c2_k0 = -1;
  for (c2_k = 1; c2_k - 1 < c2_nxin; c2_k++) {
    c2_b_k = c2_k - 1;
    if ((c2_b_k + 1 > c2_nb) || (!c2_b_b_data[c2_b_k])) {
      c2_k0++;
      c2_n_x_data[c2_k0] = c2_n_x_data[c2_b_k];
    }
  }

  if (!(c2_nxout <= c2_nrowx)) {
    sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_c_emlrt_marshallOut(chartInstance,
      c2_cv3), 14, sf_mex_call(c2_sp, "getString", 1U, 1U, 14, sf_mex_call(c2_sp,
      "message", 1U, 1U, 14, c2_c_emlrt_marshallOut(chartInstance, c2_cv3))));
  }

  c2_b = (1 > c2_nxout);
  if (c2_b) {
    c2_i2 = 0;
  } else {
    c2_i2 = c2_nxout;
  }

  c2_x_size[0] = c2_i2;
}

static void c2_d_nullAssignment(SFc2_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_n_x_data[], int32_T
  c2_x_size[1], int32_T c2_idx)
{
  emlrtStack c2_st;
  int32_T c2_b_idx;
  int32_T c2_c_idx;
  real_T c2_d;
  int32_T c2_n;
  boolean_T c2_p;
  int32_T c2_b_x;
  int32_T c2_c_x;
  const mxArray *c2_y = NULL;
  int32_T c2_d_idx;
  const mxArray *c2_b_y = NULL;
  int32_T c2_nrowx;
  int32_T c2_nrows;
  int32_T c2_i;
  const mxArray *c2_c_y = NULL;
  boolean_T c2_b;
  const mxArray *c2_d_y = NULL;
  int32_T c2_b_i;
  int32_T c2_b_x_size[1];
  int32_T c2_loop_ub;
  int32_T c2_i1;
  int32_T c2_b_loop_ub;
  int32_T c2_i2;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_wc_emlrtRSI;
  c2_b_idx = c2_idx;
  c2_c_idx = c2_b_idx;
  c2_d = (real_T)c2_x_size[0];
  c2_n = (int32_T)c2_d;
  c2_p = true;
  if (c2_c_idx > c2_n) {
    c2_p = false;
  } else {
    c2_b_x = c2_c_idx;
    c2_c_x = c2_b_x;
    if (c2_c_idx != c2_c_x) {
      c2_p = false;
    }
  }

  if (!c2_p) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1, 25),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1, 25),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_b_y)));
  }

  c2_st.site = &c2_xc_emlrtRSI;
  c2_d_idx = c2_idx;
  c2_nrowx = c2_x_size[0];
  c2_nrows = c2_nrowx - 1;
  for (c2_i = c2_d_idx; c2_i <= c2_nrows; c2_i++) {
    c2_n_x_data[c2_i - 1] = c2_n_x_data[c2_i];
  }

  if (!(c2_nrows <= c2_nrowx)) {
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_c_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_d_y)));
  }

  c2_b = (1 > c2_nrows);
  if (c2_b) {
    c2_b_i = -1;
  } else {
    c2_b_i = c2_nrows - 1;
  }

  c2_b_x_size[0] = c2_b_i + 1;
  c2_loop_ub = c2_b_i;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    chartInstance->c2_d_x_data[c2_i1] = c2_n_x_data[c2_i1];
  }

  c2_x_size[0] = c2_b_x_size[0];
  c2_b_loop_ub = c2_b_x_size[0] - 1;
  for (c2_i2 = 0; c2_i2 <= c2_b_loop_ub; c2_i2++) {
    c2_n_x_data[c2_i2] = chartInstance->c2_d_x_data[c2_i2];
  }
}

static void c2_b_sqrt(SFc2_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c2_sp, real_T c2_b_x[14641])
{
  boolean_T c2_p;
  int32_T c2_k;
  real_T c2_b_k;
  const mxArray *c2_y = NULL;
  int32_T c2_c_k;
  boolean_T c2_b_p;
  const mxArray *c2_b_y = NULL;
  int32_T c2_d_k;
  real_T c2_c_x;
  const mxArray *c2_c_y = NULL;
  real_T c2_d_x;
  static char_T c2_b_cv[4] = { 's', 'q', 'r', 't' };

  (void)chartInstance;
  c2_p = false;
  for (c2_k = 0; c2_k < 14641; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    if (c2_p || (c2_b_x[(int32_T)c2_b_k - 1] < 0.0)) {
      c2_b_p = true;
    } else {
      c2_b_p = false;
    }

    c2_p = c2_b_p;
  }

  if (c2_p) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp,
      "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 2U, 14, c2_b_y,
      14, c2_c_y)));
  }

  for (c2_c_k = 0; c2_c_k < 14641; c2_c_k++) {
    c2_d_k = c2_c_k;
    c2_c_x = c2_b_x[c2_d_k];
    c2_d_x = c2_c_x;
    c2_d_x = muDoubleScalarSqrt(c2_d_x);
    c2_b_x[c2_d_k] = c2_d_x;
  }
}

static void c2_d_round(SFc2_flightControlSystemInstanceStruct *chartInstance,
  real_T c2_b_x[14641])
{
  int32_T c2_k;
  int32_T c2_b_k;
  real_T c2_c_x;
  real_T c2_d_x;
  (void)chartInstance;
  for (c2_k = 0; c2_k < 14641; c2_k++) {
    c2_b_k = c2_k;
    c2_c_x = c2_b_x[c2_b_k];
    c2_d_x = c2_c_x;
    c2_d_x = muDoubleScalarRound(c2_d_x);
    c2_b_x[c2_b_k] = c2_d_x;
  }
}

static int32_T c2__s32_d_(SFc2_flightControlSystemInstanceStruct *chartInstance,
  real_T c2_b, int32_T c2_EMLOvCount_src_loc, uint32_T c2_ssid_src_loc, int32_T
  c2_offset_src_loc, int32_T c2_length_src_loc)
{
  int32_T c2_c_a;
  real_T c2_b_b;
  (void)c2_EMLOvCount_src_loc;
  c2_c_a = (int32_T)c2_b;
  if (c2_b < 0.0) {
    c2_b_b = muDoubleScalarCeil(c2_b);
  } else {
    c2_b_b = muDoubleScalarFloor(c2_b);
  }

  if ((real_T)c2_c_a != c2_b_b) {
    sf_data_overflow_error(chartInstance->S, c2_ssid_src_loc, c2_offset_src_loc,
      c2_length_src_loc);
  }

  return c2_c_a;
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
  chartInstance->c2_c_BW = (boolean_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_prev_heading = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_prev_flag = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_heading = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_land = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c2_xb = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c2_yb = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c2_prev_land = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2850039640U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(689065498U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3686488908U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2510765389U);
}

mxArray *sf_c2_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,4);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.CannyThresholdingTbbBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
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
  mxArray *incompatibleSymbol = mxCreateString("ippfilter_real32");
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
    "eNpjYPT0ZQACPhDBysDABqQ4gJiJAQJYoXxGBogcI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Sg4g/QZI+lmw6GdB0i8A5KXlJKbzQfkD634RB3"
    "T92NzPjuJ+CD8jNTElMy+dYXD4Q42seMhJzEsZHO6XIcr9TCjuZ2KoSGIYJOGvQJb7K6nmfgUHy"
    "vRD7A8g4H4FtHwA4mcWxycml2SWpcYnG8Wn5WSmZ5Q45+eVFOXnBFcWl6TmwvwHAHX3L0M="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sfncjVRjlG06TIRpjaH7SZ";
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
    "eNrtVstu00AUnURpAQmqCqGyYRGxAJaIBbCjNA+I1NKqLkWwqab2TTzNeMbMI21XbPkLFizZsOQ",
    "bkPgM9nwCd5ykTR0/2oZHkbDkuuOce+bch+9cUumsEbwW8H5/nZB5fF7Gu0qG19xoXZm4h+9r5O",
    "5o/RFBwkYbVNFIk8JL0Ag2QUtuDZOiI7oyE8ZEFxQIH7GxVCaPTbPIcib6bSt8x6dfhcwPvVBaH",
    "qygLQ3WBT9EttiaDeRpMgW+aQMEJlTS9sI2p70jxcrsN0Lw+9pGRS5oMJ6NnSy9ZrlhMYfWAfgd",
    "oQ1FxfpYm2eogYY5yHXTeaq9MVBGMWdUZHobUu1BjAE28DIO8O+6NehUGuaHVJkVCOkA9CrrJ5x",
    "SQJqTafxhlwlqpGKUtyLecIbT2jY46lmTAfCCgKC2FQW0H0smTH7+vTZ62hJ0l0MTdm0vn82Dt9",
    "Ylf5vBPqjcuHUbcgCK9mBd5G6aBKR1kGTrqEqmYYZFsE3VUx/zpyHIrV6sHO1RzBNsoUUeDBInO",
    "3pLsQGGN5fNRh1XmWWfjI2GydZlsIStNYCiLByxtX3RoJzrXNiWjFdhADxhbVJDi2FD1mxcrGRM",
    "e1i1AQbZlXhDioBN5cK32siogeXWXF19gZ0iW9wxrCMMqC71Ieu71X4IgeWAjmJnMsl2GaQB0y5",
    "bJahRTstQRHetaO5L1UdHCz77YxdcDnKBke5h9LF2X2os8yKYi34pbtzn75PjPn/1FH1+bJd+3p",
    "vgqWTwkIlnet8r1ZP4WmrfKr6p4OXslifsrpFiO4dbxPvD5pel6tcHjz9+e/3907u1m2X7V6b2r",
    "yT/O7vPc2c7FxdG61vjBnRUnoOpqnDY5xO6ahn8SxP8i6O17gp/b3tzjz+7/3Crsxnv0eePvDej",
    "/JTonU/pHb+vu054GCd9TSu/E4wObLemdniMOf7HE3rnS+JxZfR+eP14Mpv97eV0HrPiVTsRrxr",
    "p4ik/Wbd/T/+N5bR9lv5LqXy7dYjDDBM9cjH8uHOuPOAwEVwM/bdOpb96Qn+VHOySCxL/+rn0H/",
    "4y/fXl2eyH+2+U6K+nvoN6MvftUJziBrDjP9jpctYL3TBhlOTeoTYQLZzyvCnq92e1I3/Y7l/R+",
    "T8uv9+/08xvtXPazc04L/4pu1n9O+scO8vcm+5zJIVfnGGf342fdf4/C/4nkNBzXw==",
    ""
  };

  static char newstr [1193] = "";
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
  ssSetChecksum0(S,(381178527U));
  ssSetChecksum1(S,(942852610U));
  ssSetChecksum2(S,(3847867811U));
  ssSetChecksum3(S,(390954923U));
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
