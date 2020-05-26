#include "__cf_flightControlSystem.h"
#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef flightControlSystem_COMMON_INCLUDES_
#define flightControlSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "flightControlSystem_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T fau3qf03xm ; } hrtts4l5bc ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T jeigph1w3t_mbvzarwird [ 12 ] ; real32_T
g155hum4of_cl54gopm0x [ 9 ] ; real32_T g155hum4of_kkiq3xxxve [ 9 ] ; real_T
oxyk4znhp5_cxarnvbvui [ 4 ] ; real_T c4puh0aj2v [ 3 ] ; real_T
kqm3jkrmki_bhxxfovxdy [ 3 ] ; real_T g155hum4of_pbm3vprmfu [ 3 ] ; real32_T
fp0u5nlpgw [ 6 ] ; real32_T fv [ 4 ] ; real_T kchcocokra [ 2 ] ; real_T
jtobujruvv [ 2 ] ; real_T kjojdfkfgk_cv5hdgrwft [ 2 ] ; real32_T arfzeh3qs4 [
3 ] ; real32_T axhgnxrhij [ 3 ] ; real32_T ar3nqf0tz4_fqdqrf4qbc [ 3 ] ;
real32_T gim1zqbiif_g2mlkqadfk [ 3 ] ; real_T kkzeiiel2k ; real_T b31kr2s5or
; real_T khyoimdert ; real_T fmncic4o4f ; real_T dzxv5pp3or ; real_T
bowrb0xa2c [ 2 ] ; real_T as22idn2n0 [ 2 ] ; real_T ar3nqf0tz4 [ 2 ] ; real_T
c12ls2wszl [ 2 ] ; real_T jnn5lz0per [ 2 ] ; real_T a4lsm2epnd_g1smspu5ke ;
real_T itj43s3ndh_merlcviukg ; real_T fv2bmglt0t_nz4o0shxby ; real_T
pgtkkan1bw_ppxrqq0gsf ; real_T a0kz531hkt_idx_0 ; real_T a0kz531hkt_idx_1 ;
real_T ph54jd1dkw_llw0u2ae0v ; real32_T lg0fd5e53i [ 2 ] ; real32_T
ercmqqmldg [ 2 ] ; real32_T gwfdiculxk [ 2 ] ; real32_T b4pavfef0y [ 2 ] ;
real32_T e4bratxxxb_jwzvbuczlb [ 2 ] ; real32_T l4a4q4stof_dhmrxtyqop [ 2 ] ;
real32_T hweri54hre_guugdwf2m3 [ 2 ] ; real32_T ltavsvi5xw ; real32_T
fpldlpy5uu [ 4 ] ; real32_T hospkear0q [ 2 ] ; real32_T gfns3kgfjw [ 2 ] ;
real32_T k0goapas04 [ 3 ] ; real32_T oifirjcnm5 [ 16 ] ; real32_T l4a4q4stof
[ 4 ] ; real32_T nluqpntbot [ 4 ] ; real32_T faltdm0cip [ 2 ] ; real32_T
gnjojvq4cm [ 2 ] ; real32_T bjbzr2pzjd [ 2 ] ; real32_T ddif4goqom_nuebgmauvi
[ 2 ] ; real32_T ogtayargxh_bsqwvugooi [ 2 ] ; real32_T acc1 ; real32_T
e10024skqk_ldqodwenvz ; real32_T cjr3pr5fdi_dhamdvybc1 ; real32_T
mxx5usl0fl_dypejvacrn ; real32_T bbe5mjwk1f_lxo5edjg3c ; real32_T
cgkzo2biyi_owjr1h1vqy ; real32_T ptnwsicd12_bjbgfqrolh ; real32_T
gemz4nxt34_idx_2 ; real32_T f040btpsio_idx_1 ; real32_T f040btpsio_idx_2 ;
real32_T kfl24lczp1_idx_1 ; real32_T cfkgwlp0pd_idx_1 ; real32_T
gemz4nxt34_idx_0 ; real32_T cfkgwlp0pd_idx_0 ; real32_T gemz4nxt34_idx_1 ;
real32_T cfkgwlp0pd_idx_2 ; real32_T ebzpum1j2m_idx_1 ; real32_T
ebzpum1j2m_idx_2 ; real32_T oifirjcnm5_idx_0 ; real32_T oifirjcnm5_idx_1 ;
real32_T gf2ur4ozs0_idx_1 ; int32_T j ; int32_T denIdx ; int32_T memOffset ;
int32_T i ; uint32_T cxewroht2j ; uint32_T hncby4q12z ; uint32_T e54ajko4cc ;
real32_T a0mzdmrcod [ 6 ] ; real32_T hrzithqxqj [ 2 ] ; uint8_T j1mq3vnmtv ;
boolean_T gvq0kd5401 ; boolean_T htqh4psaeq ; boolean_T ethynrlyyv ;
boolean_T lpcb3n1tac ; } eo4bbte2ey ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T mck2owxrk2 ; real_T etwz51o21c [ 2 ] ; real_T
c4t5e3w5ek [ 3 ] ; real_T la41hpfp0y ; real_T k1csdkbypq ; real_T bw2ribqmwm
; real_T fl2edockfe ; struct { void * LoggedData ; void * SignalProbe ; }
mpopad3fr1 ; real32_T jxg1zvdttz [ 2 ] ; real32_T kgows215bs [ 3 ] ; real32_T
liybiw1jbg [ 5 ] ; real32_T nbbc5odoq4 [ 15 ] ; real32_T kzeijhdtif [ 2 ] ;
real32_T heeedoxzle [ 10 ] ; real32_T gqxdiwstsm [ 2 ] ; real32_T a3uar2xrsb
[ 2 ] ; real32_T lw3rw5s0ye [ 2 ] ; real32_T cosb2ibhn3 [ 2 ] ; real32_T
fuo05buemm [ 2 ] ; real32_T ppp4ajc3p1 ; int32_T cfcgwprtdx ; uint32_T
npsllq52wf ; uint32_T i13qoukcsn ; uint32_T dxm3w2i52x ; real32_T ik5zcuhoy3
; real32_T lfi3mnae2m [ 3 ] ; real32_T lpva1qajzk ; real32_T dhhdwwczx2 [ 2 ]
; int8_T ii2o5s5qnf ; int8_T gafzug4yea ; int8_T nuogwfijir ; int8_T
hihnlferdi ; int8_T pxamy50saq ; int8_T btfjf5acqg ; int8_T oa1muqt4on ;
int8_T h0cudiu0ft ; uint8_T ozjz0fr0k4 ; uint8_T pvn1aiza5a ; boolean_T
j20mj4ai3a ; boolean_T bgpppixzwr ; boolean_T cmab1dak24 ; boolean_T
jtnjtissuf ; hrtts4l5bc ciy1c2o0rv ; hrtts4l5bc jvbbqhrajh ; hrtts4l5bc
clwiujjdqo ; hrtts4l5bc acfz1zxm4t ; hrtts4l5bc ghadbep3bbv ; } dmp1xsadgu ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T tmp_data [ 28800 ] ; real_T b_A_data [ 28800 ] ;
real_T b_A_data_mbvzarwird [ 28800 ] ; real_T y_data [ 14400 ] ; real_T
x_data [ 14400 ] ; real_T B_data [ 14400 ] ; int32_T ii_data [ 14400 ] ;
int32_T jj_data [ 14400 ] ; uint8_T b_varargout_3 [ 19200 ] ; uint8_T
b_varargout_2 [ 19200 ] ; uint8_T ozkwgqqkwi_cl54gopm0x [ 19200 ] ; boolean_T
owgqjqpndy_kkiq3xxxve [ 19200 ] ; boolean_T pkmbyvenx5_cxarnvbvui [ 14400 ] ;
boolean_T pkmbyvenx5_bhxxfovxdy [ 14400 ] ; real_T ewpbovq5gh_pbm3vprmfu [ 4
] ; real_T b [ 2 ] ; real_T tau_data [ 2 ] ; real_T work [ 2 ] ; real_T vn1 [
2 ] ; real_T vn2 [ 2 ] ; uint64_T u ; int64_T i ; real_T kmvh3atckm ; real_T
nc ; real_T xbias ; real_T d ; real_T a3vzwjj3qo_fqdqrf4qbc ; real_T
k32zllvxsq_g2mlkqadfk ; real_T temp2 ; real_T b_atmp ; real_T xnorm ; real_T
scale ; real_T absxk ; real_T t ; real_T temp ; real_T c ; int32_T tmp_size [
2 ] ; int32_T jpvt [ 2 ] ; int32_T b_A_size [ 2 ] ; int32_T
b_A_size_cv5hdgrwft [ 2 ] ; int32_T i_g1smspu5ke ; int32_T idxMaxVal ;
int32_T maxVal ; int32_T omegaTemp ; int32_T muA2P3 ; int32_T y_size ;
int32_T x_size ; int32_T i1 ; int32_T ii_size ; int32_T jj_size ; int32_T rr
; eo4bbte2ey otjykwnhb3s ; } ircitwx3zdm ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int32_T lihbmdiebu [ 256 ] ; int32_T c5rl2ioahw [ 256 ] ;
int32_T drhqrzyuri [ 256 ] ; bjqsgn0csy l152eirbdu ; real_T pbsmqozsw0 ;
real_T oq44mkeutp [ 8 ] ; int8_T fb0f52aifb ; boolean_T jjrfotind4 ;
dmp1xsadgu otjykwnhb3s ; } nllkaxiwhzw ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct bpvdgm2xq5_ { uint8_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct nu4qaxumex_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real32_T P_6 ; real32_T P_7 ; real32_T P_8 ;
real32_T P_9 ; real32_T P_10 ; real32_T P_11 ; real32_T P_12 ; real32_T P_13
; real32_T P_14 ; real32_T P_15 ; real32_T P_16 ; real32_T P_17 ; real32_T
P_18 ; real32_T P_19 ; real32_T P_20 ; real32_T P_21 ; real32_T P_22 ;
real32_T P_23 ; real32_T P_24 ; real32_T P_25 ; real32_T P_26 ; real32_T P_27
; real32_T P_28 ; uint32_T P_29 ; uint32_T P_30 ; uint32_T P_31 ; uint32_T
P_32 ; uint32_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37
; real_T P_38 [ 4 ] ; real_T P_39 [ 4 ] ; real_T P_40 ; real_T P_41 ; real_T
P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ;
real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T
P_53 ; real_T P_54 ; real_T P_55 [ 4 ] ; real_T P_56 [ 2 ] ; real_T P_57 [ 2
] ; real_T P_58 [ 4 ] ; real_T P_59 [ 2 ] ; real_T P_60 [ 2 ] ; real_T P_61 ;
real_T P_62 [ 4 ] ; real_T P_63 [ 2 ] ; real_T P_64 ; real_T P_65 ; real_T
P_66 ; real_T P_67 ; real_T P_68 [ 2 ] ; real_T P_69 [ 3 ] ; real_T P_70 [ 3
] ; real_T P_71 [ 4 ] ; real_T P_72 [ 4 ] ; real_T P_73 [ 4 ] ; real32_T P_74
[ 2 ] ; real32_T P_75 ; real32_T P_76 ; real32_T P_77 ; real32_T P_78 [ 2 ] ;
real32_T P_79 ; real32_T P_80 ; real32_T P_81 ; real32_T P_82 ; real32_T P_83
; real32_T P_84 ; real32_T P_85 ; real32_T P_86 ; real32_T P_87 ; real32_T
P_88 ; real32_T P_89 ; real32_T P_90 ; real32_T P_91 ; real32_T P_92 ;
real32_T P_93 ; real32_T P_94 ; real32_T P_95 [ 4 ] ; real32_T P_96 [ 4 ] ;
real32_T P_97 ; real32_T P_98 [ 3 ] ; real32_T P_99 ; real32_T P_100 [ 6 ] ;
real32_T P_101 [ 6 ] ; real32_T P_102 [ 6 ] ; real32_T P_103 [ 6 ] ; real32_T
P_104 ; real32_T P_105 ; real32_T P_106 ; real32_T P_107 [ 6 ] ; real32_T
P_108 ; real32_T P_109 [ 6 ] ; real32_T P_110 [ 6 ] ; real32_T P_111 ;
real32_T P_112 ; real32_T P_113 ; real32_T P_114 ; real32_T P_115 ; real32_T
P_116 ; real32_T P_117 [ 2 ] ; real32_T P_118 ; real32_T P_119 ; real32_T
P_120 ; real32_T P_121 ; real32_T P_122 ; real32_T P_123 [ 2 ] ; real32_T
P_124 ; real32_T P_125 ; real32_T P_126 ; real32_T P_127 ; real32_T P_128 ;
real32_T P_129 ; real32_T P_130 ; real32_T P_131 ; real32_T P_132 ; real32_T
P_133 ; real32_T P_134 ; real32_T P_135 ; real32_T P_136 ; real32_T P_137 [ 4
] ; real32_T P_138 ; real32_T P_139 ; real32_T P_140 [ 16 ] ; real32_T P_141
; real32_T P_142 ; real32_T P_143 ; real32_T P_144 [ 4 ] ; real32_T P_145 [ 4
] ; real32_T P_146 [ 4 ] ; real32_T P_147 [ 4 ] ; real32_T P_148 [ 4 ] ;
real32_T P_149 [ 4 ] ; real32_T P_150 [ 4 ] ; real32_T P_151 [ 4 ] ; real32_T
P_152 [ 4 ] ; real32_T P_153 [ 4 ] ; real32_T P_154 [ 2 ] ; uint32_T P_155 ;
uint32_T P_156 ; uint32_T P_157 ; uint32_T P_158 ; uint32_T P_159 ; uint32_T
P_160 ; uint32_T P_161 ; uint32_T P_162 ; uint32_T P_163 ; boolean_T P_164 ;
uint8_T P_165 ; bpvdgm2xq5 ciy1c2o0rv ; bpvdgm2xq5 jvbbqhrajh ; bpvdgm2xq5
clwiujjdqo ; bpvdgm2xq5 acfz1zxm4t ; bpvdgm2xq5 ghadbep3bbv ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct ileg2v2ld1r_ { real_T P_1 ; real_T P_2 [ 4 ] ; uint8_T P_3 ; uint8_T
P_4 ; uint8_T P_5 ; uint8_T P_6 ; uint8_T P_7 ; uint8_T P_8 [ 256 ] ;
nu4qaxumex otjykwnhb3s ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct diqjpw4041 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 23 ] ; int32_T * vardimsAddress [
23 ] ; RTWLoggingFcnPtr loggingPtrs [ 23 ] ; sysRanDType * systemRan [ 23 ] ;
int_T systemTid [ 23 ] ; } DataMapInfo ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ipf5ube4r0 rtm ; } lhjbdsj2rjg ;
#endif
extern struct_8SSZ93PxvPkADZcA4gG8MD rtP_Sensors ; extern void ha1ipjbq54 (
uint8_T * o3vpgniqky ) ; extern void gwlyno50ln ( void ) ; extern void
k3yxem35zg ( void ) ; extern void bog0frvixl ( void ) ; extern void
pyvd4pdf3iTID0 ( void ) ; extern void pyvd4pdf3iTID1 ( void ) ; extern void
pyvd4pdf3iTID2 ( void ) ; extern void flightControlSystemTID0 ( const
CommandBus * iarztl0jur , const SensorsBus * pxdb2gu5va , real32_T pikqq4svts
[ 4 ] , uint8_T * o3vpgniqky ) ; extern void flightControlSystemTID1 ( void )
; extern void flightControlSystemTID2 ( void ) ; extern void o2f5l50guo (
void ) ; extern void f4qzdbbxmw ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_flightControlSystem_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_flightControlSystem_GetDWork ( ) ; extern void
mr_flightControlSystem_SetDWork ( const mxArray * ssDW ) ; extern void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * flightControlSystem_GetCAPIStaticMap (
void ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern void ghadbep3bb ( uint8_T * hfpztkhwej , bpvdgm2xq5 * localP ) ;
extern void ic5jb3movn ( eo4bbte2ey * localB , dmp1xsadgu * localDW ,
nu4qaxumex * localP ) ; extern void bxsrqc204k ( dmp1xsadgu * localDW ,
nu4qaxumex * localP ) ; extern void kegjp2lgms ( eo4bbte2ey * localB ,
dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern void lsjhvu4egy (
eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern
void otjykwnhb3 ( ipf5ube4r0 * const accn4cnket , const CommandBus *
ipxpc4eli1 , const SensorsBus * fp0u5nlpgw , const real_T jmrok3dizz [ 4 ] ,
eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern
void otjykwnhb3TID2 ( eo4bbte2ey * localB , nu4qaxumex * localP ) ;
#endif
void mr_flightControlSystem_CreateInitRestoreData ( ) ; void
mr_flightControlSystem_CopyFromInitRestoreData ( ) ; void
mr_flightControlSystem_DestroyInitRestoreData ( ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern lhjbdsj2rjg lhjbdsj2rj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern ircitwx3zdm ksm0js2nhsy ; extern nllkaxiwhzw dqykr4eggmg ;
#endif
#endif
