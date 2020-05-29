#include "__cf_flightControlSystem.h"
#include "flightControlSystem_capi.h"
#include "flightControlSystem.h"
#include "flightControlSystem_private.h"
#include "div_s32s64_round.h"
#include "ixamax_7mCbsXvX.h"
int_T nmtwkzsqud [ 3 ] ; static RegMdlInfo rtMdlInfo_flightControlSystem [
151 ] = { { "ezsua5bijx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "flightControlSystem" } , { "edl35owv4q" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "jig1nknlld" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "npn1dfesfs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "iffergcei1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bsr3dujuk0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "crxyn1tssm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lwj4qypsny" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bpvdgm2xq5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "hrtts4l5bc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "mqmoncitu3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k5baggiqtb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lbu5phzg3y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "mtaqz0ggi1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "mfdtth4fkl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cn2vepzj0w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dfqhc4tws4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ph1mky0ofs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "femqyyfyjs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "nu4qaxumex" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dmp1xsadgu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "eo4bbte2ey" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lhjbdsj2rjg" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"lhjbdsj2rj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "h5liyesltnn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "kekotmnbk54" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "no25hyfktuo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ht3wudfgy2u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "iesycof4wox" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "eev4eat4b5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cspyln32yuv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "dhuzh5wmni3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b1hr2q0zjhm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nllkaxiwhzw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "ircitwx3zdm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "h5liyesltn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "kekotmnbk5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "no25hyfktu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ht3wudfgy2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "iesycof4wo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cspyln32yu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dhuzh5wmni" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "b1hr2q0zjh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "nllkaxiwhz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ircitwx3zd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "b42rzqdx01" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "o2f5l50guo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "m0l5se3ogg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "bog0frvixl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "o5hyd2bjrc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "pyvd4pdf3i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gwlyno50ln" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ha1ipjbq54" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "f4qzdbbxmw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "k3yxem35zg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dw0zngvhyq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "o0d2t1xos2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "oplbkbi520" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "eyt3piuhqz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "kegjp2lgms" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nwvibpjmp0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lsjhvu4egy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bxsrqc204k" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ic5jb3movn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "n4xf3lkvmk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cyp5v4ller" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mr51bswvyz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "otjykwnhb3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Control System" } , {
"itmfjpgv1o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dychmi5jvf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "okzguhbnst" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gjrgypdhn2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nsvs5ni5i5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "b5nnaqep53" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ghadbep3bb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"Geofencing error" } , { "flightControlSystem" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "kbdrtfznkty" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "d0ohl2eoh0m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nmtwkzsqud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "mu24dhzibl1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dqykr4eggmg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ksm0js2nhsy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "kbdrtfznkt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "d0ohl2eoh0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mu24dhzibl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "diqjpw4041" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ipf5ube4r0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "parrot_ImageProcess1" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "csfix32_En45" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , -
1 , ( void * ) "sfix32_En45" } , { "sfix32_En45" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "csfix32_En22" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1
, ( void * ) "sfix32_En22" } , { "sfix32_En22" , MDL_INFO_ID_DATA_TYPE , 0 ,
- 1 , ( NULL ) } , { "csfix32_En30" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 ,
( void * ) "sfix32_En30" } , { "sfix32_En30" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "cufix32_En11" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , (
void * ) "ufix32_En11" } , { "ufix32_En11" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "cufix16_En11" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , (
void * ) "ufix16_En11" } , { "ufix16_En11" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "cufix8_En11" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , (
void * ) "ufix8_En11" } , { "ufix8_En11" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 ,
( NULL ) } , { "cufix16_En8" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void
* ) "ufix16_En8" } , { "ufix16_En8" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "cufix8_En8" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void *
) "ufix8_En8" } , { "ufix8_En8" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "cufix16_En9" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * )
"ufix16_En9" } , { "ufix16_En9" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "cufix8_En9" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * )
"ufix8_En9" } , { "ufix8_En9" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) }
, { "struct_aKbzPKUD53Ge8QU5pxO4kE" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_S5XPVZr9Ltni4p5tjvWJ6C" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_8SSZ93PxvPkADZcA4gG8MD" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_eFnp8sKFNJLN84XLbLzaFF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_FIfaVnupBjYAxo1EdNiDlF" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_eF5OUT33sX0T9pzS8027m" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_X1tFsdWsY5fUn8DhZV5x2G" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_fXH7zguz7yYqVGXrbzMetE" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_OSJpyIZcrpXqReVWwh9iuG" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_p3FXZIgqtjF2uqDpmYjb6C" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_OMRgDnJcZuQneKEj9vdTyD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_q6UUpnZ4gTjFvULFx6Rxa" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "struct_IZWOW0zYvpphl7qLgSfN7E" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "struct_hxsmtt0xTZOLDNa2Rz7GAF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_XRMsui9C07VjBvdq1msujB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_eAf0NJvzCY9HYTXF7bLNgB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "SensorsBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acquisition_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_vbat_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_ultrasound_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_list_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_pressure_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_magn_mG_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_fifo_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acc_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"extraSensorData_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"CommandBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_flightControlSystem_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "flightControlSystem" } , { "mr_flightControlSystem_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"flightControlSystem.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"flightControlSystem.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"flightControlSystem" } } ; ileg2v2ld1r b1hr2q0zjh = { 1.5707963267948966 , {
1.5707963267948966 , 1.5707963267948966 , 0.0 , 0.0 } , 233U , 150U , 153U ,
100U , 0U , { 0U , 1U , 2U , 3U , 4U , 5U , 6U , 7U , 8U , 9U , 10U , 11U ,
12U , 13U , 14U , 15U , 16U , 17U , 18U , 19U , 20U , 21U , 22U , 23U , 24U ,
25U , 26U , 27U , 28U , 29U , 30U , 31U , 32U , 33U , 34U , 35U , 36U , 37U ,
38U , 39U , 40U , 41U , 42U , 43U , 44U , 45U , 46U , 47U , 48U , 49U , 50U ,
51U , 52U , 53U , 54U , 55U , 56U , 57U , 58U , 59U , 60U , 61U , 62U , 63U ,
64U , 65U , 66U , 67U , 68U , 69U , 70U , 71U , 72U , 73U , 74U , 75U , 76U ,
77U , 78U , 79U , 80U , 81U , 82U , 83U , 84U , 85U , 86U , 87U , 88U , 89U ,
90U , 91U , 92U , 93U , 94U , 95U , 96U , 97U , 98U , 99U , 100U , 101U ,
102U , 103U , 104U , 105U , 106U , 107U , 108U , 109U , 110U , 111U , 112U ,
113U , 114U , 115U , 116U , 117U , 118U , 119U , 120U , 121U , 122U , 123U ,
124U , 125U , 126U , 127U , 128U , 129U , 130U , 131U , 132U , 133U , 134U ,
135U , 136U , 137U , 138U , 139U , 140U , 141U , 142U , 143U , 144U , 145U ,
146U , 147U , 148U , 149U , 150U , 151U , 152U , 153U , 154U , 155U , 156U ,
157U , 158U , 159U , 160U , 161U , 162U , 163U , 164U , 165U , 166U , 167U ,
168U , 169U , 170U , 171U , 172U , 173U , 174U , 175U , 176U , 177U , 178U ,
179U , 180U , 181U , 182U , 183U , 184U , 185U , 186U , 187U , 188U , 189U ,
190U , 191U , 192U , 193U , 194U , 195U , 196U , 197U , 198U , 199U , 200U ,
201U , 202U , 203U , 204U , 205U , 206U , 207U , 208U , 209U , 210U , 211U ,
212U , 213U , 214U , 215U , 216U , 217U , 218U , 219U , 220U , 221U , 222U ,
223U , 224U , 225U , 226U , 227U , 228U , 229U , 230U , 231U , 232U , 233U ,
234U , 235U , 236U , 237U , 238U , 239U , 240U , 241U , 242U , 243U , 244U ,
245U , 246U , 247U , 248U , 249U , 250U , 251U , 252U , 253U , 254U , 255U }
, { 50.0 , - 1.0 , 0.8 , 0.4 , 0.1 , 0.0 , 0.0F , 10.0F , 10.0F , 6.0F , 6.0F
, 0.01F , 0.01F , 9.79038F , 9.82962F , - 0.4F , 0.0F , 0.0F , 80.0F , 80.0F
, 0.6F , 0.5F , 0.6F , 0.5F , 7.0F , 7.0F , 5.0F , 5.0F , - 0.4F ,
4294967295U , 4294967295U , 4294967295U , 100U , 800U , 0.0 , 0.0 , 0.0 , 0.0
, { 3.7568380197861018E-6 , 1.1270514059358305E-5 , 1.1270514059358305E-5 ,
3.7568380197861018E-6 } , { 1.0 , - 2.9371707284498907 , 2.8762997234793319 ,
- 0.939098940325283 } , 0.0 , 0.0008 , 0.001 , 0.0 , 0.0008 , 0.0005 , 0.0 ,
0.0 , 0.2 , 0.0 , 0.5 , 600.0 , - 0.9 , 0.0 , - 1.2 , { 1.0 , 0.0 , 0.005 ,
1.0 } , { 0.0 , 0.005 } , { 1.0 , 0.0 } , { 0.0026241420641871047 ,
0.0069776736071489849 , 0.0069776736071489849 , 0.037607692935054574 } , {
0.026590304322228503 , 0.069776736071493345 } , { 0.026241420641871044 ,
0.069776736071489848 } , 0.0 , { 0.0026948589925819772 ,
0.0071657120718242586 , 0.0071657120718242586 , 0.038107692935054546 } , {
0.0 , 1.0 } , 0.0 , 0.0 , 0.0005 , 0.1 , { - 0.046 , 0.0 } , { 0.0 , 0.0 ,
9.81 } , { 0.0 , 0.0 , - 9.81 } , { 0.62732804493044858 , 0.0 , 0.0 ,
0.62732804493044858 } , { 0.1254656089860898 , 0.0 , - 0.0 ,
0.1254656089860898 } , { 0.12546560898608972 , 0.0 , 0.0 ,
0.12546560898608972 } , { 0.1F , - 0.1F } , - 1.0F , 3.0F , - 3.0F , { -
0.24F , 0.24F } , 0.5F , 0.8F , 0.45F , 0.999F , 0.001F , 0.101936802F ,
0.001F , 0.999F , - 1.0F , 1.15F , 0.0F , 0.0F , 0.005F , 0.0F , - 1.0F ,
0.0832137167F , { 3.75683794E-6F , 1.12705138E-5F , 1.12705138E-5F ,
3.75683794E-6F } , { 1.0F , - 2.93717074F , 2.87629962F , - 0.939098954F } ,
0.0F , { 0.0F , 0.0F , 0.0F } , - 1.0F , { 0.0F , 0.0F , 9.81F , 0.0F , 0.0F
, 0.0F } , { 0.994075298F , 0.996184587F , 1.00549F , 1.00139189F ,
0.993601203F , 1.00003F } , { 0.282124132F , 1.27253926F , 2.42084408F ,
2.42084408F , 1.27253926F , 0.282124132F } , { 1.0F , 2.22871494F ,
2.52446198F , 1.57725322F , 0.54102242F , 0.0795623958F } , 0.0F , 0.005F ,
0.0F , { 0.0264077242F , 0.140531361F , 0.33306092F , 0.33306092F ,
0.140531361F , 0.0264077242F } , 0.0F , { 0.282124132F , 1.27253926F ,
2.42084408F , 2.42084408F , 1.27253926F , 0.282124132F } , { 1.0F ,
2.22871494F , 2.52446198F , 1.57725322F , 0.54102242F , 0.0795623958F } ,
0.0F , 200.0F , 0.0F , 0.0F , 0.0F , 0.001F , { 0.002F , 0.003F } , 0.005F ,
0.0F , 2.0F , - 2.0F , 0.01F , { 0.013F , 0.011F } , - 0.61803F , 0.005F ,
0.0F , 2.0F , - 2.0F , 1.20204329F , - 1.20204329F , 0.004F , 0.0012F , 0.24F
, - 1530.72681F , 500.0F , 10.0F , { 1.0F , - 1.0F , 1.0F , - 1.0F } , 1.0F ,
1.0F , { 0.25F , 0.25F , 0.25F , 0.25F , 103.573624F , - 103.573624F ,
103.573624F , - 103.573624F , - 5.66592F , - 5.66592F , 5.66592F , 5.66592F ,
- 5.66592F , 5.66592F , 5.66592F , - 5.66592F } , 0.0F , 2.0F , 0.0F , { 1.0F
, 0.0F , 0.0F , 1.0F } , { 0.005F , 0.0F , 0.0F , 0.005F } , { 1.0F , 0.0F ,
0.0F , 1.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } , { 0.717328072F , 0.0F , 0.0F
, 0.717328072F } , { 1.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F , 0.0F ,
0.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } , { 0.09F , 0.0F , 0.0F , 0.09F } , {
5.0F , 0.0F , 0.0F , 5.0F } , { 0.0F , 0.0F } , 0U , 0U , 0U , 1U , 0U , 1U ,
0U , 1U , 0U , 1 , 0U , { 0U } , { 88U } , { 69U } , { 99U } , { 1U } } } ;
lhjbdsj2rjg lhjbdsj2rj ; ircitwx3zdm ksm0js2nhsy ; nllkaxiwhzw dqykr4eggmg ;
static boolean_T e4uq03sdk2 ( bjqsgn0csy * obj ) ; static void llg2sedmqv (
uint8_T varargout_1 [ 19200 ] , uint8_T varargout_2 [ 19200 ] , uint8_T
varargout_3 [ 19200 ] ) ; static void bljpfp3pka ( bjqsgn0csy * obj , uint8_T
varargout_1 [ 19200 ] , uint8_T varargout_2 [ 19200 ] , uint8_T varargout_3 [
19200 ] ) ; static void jpdygqplqj ( const boolean_T x [ 14400 ] , int32_T
i_data [ ] , int32_T * i_size , int32_T j_data [ ] , int32_T * j_size ) ;
static void ioznlcft0y ( const real_T v_data [ ] , const int32_T * v_size ,
real_T A_data [ ] , int32_T A_size [ 2 ] ) ; static real_T lmccdshidz (
int32_T n , const real_T x_data [ ] , int32_T ix0 ) ; static void oawazochv3
( int32_T n , real_T x_data [ ] , int32_T ix0 , int32_T iy0 ) ; static real_T
eovsjjemuw ( int32_T n , real_T * alpha1 , real_T x_data [ ] , int32_T ix0 )
; static void nysjuzssuk ( int32_T m , int32_T n , const real_T A_data [ ] ,
int32_T ia0 , int32_T lda , const real_T x_data [ ] , int32_T ix0 , real_T y
[ 2 ] ) ; static int32_T p2mqlyjwiy ( int32_T m , int32_T n , const real_T
A_data [ ] , int32_T ia0 ) ; static void hjfwfcabhz ( int32_T m , int32_T n ,
real_T alpha1 , int32_T ix0 , const real_T y [ 2 ] , real_T A_data [ ] ,
int32_T ia0 , int32_T lda ) ; static void b0ek5tf22p ( int32_T m , int32_T n
, int32_T iv0 , real_T tau , real_T C_data [ ] , int32_T ic0 , int32_T ldc ,
real_T work [ 2 ] ) ; static void p31g0fe2wh ( real_T A_data [ ] , const
int32_T A_size [ 2 ] , int32_T m , real_T tau_data [ ] , int32_T jpvt [ 2 ] )
; static void oqf0u1okww ( real_T A_data [ ] , int32_T A_size [ 2 ] , real_T
tau_data [ ] , int32_T * tau_size , int32_T jpvt [ 2 ] ) ; static int32_T
cawjjk5eqj ( const real_T A_data [ ] , const int32_T A_size [ 2 ] ) ; static
void ovuir0epqd ( const real_T A_data [ ] , const int32_T A_size [ 2 ] ,
const real_T tau_data [ ] , const int32_T jpvt [ 2 ] , real_T B_data [ ] ,
real_T Y [ 2 ] ) ; static void kmwvchfaeb ( const real_T A_data [ ] , const
int32_T A_size [ 2 ] , const real_T B_data [ ] , const int32_T * B_size ,
real_T Y [ 2 ] , int32_T * rankR ) ; static void nspv3ss1iw ( const real_T
x_data [ ] , const int32_T * x_size , const real_T y_data [ ] , const int32_T
* y_size , real_T p [ 2 ] ) ; static real_T l50nv5erdp ( const real_T x_data
[ ] , const int32_T * x_size ) ; void ghadbep3bb ( uint8_T * hfpztkhwej ,
bpvdgm2xq5 * localP ) { * hfpztkhwej = localP -> P_0 ; } void ic5jb3movn (
eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) { int32_T
i ; localDW -> jxg1zvdttz [ 0 ] = localP -> P_92 ; localDW -> jxg1zvdttz [ 1
] = localP -> P_92 ; localDW -> ii2o5s5qnf = 2 ; localDW -> mck2owxrk2 =
localP -> P_36 ; localDW -> ozjz0fr0k4 = 1U ; localDW -> kgows215bs [ 0 ] =
localP -> P_97 ; localDW -> c4t5e3w5ek [ 0 ] = localP -> P_40 ; localDW ->
lfi3mnae2m [ 0 ] = localP -> P_98 [ 0 ] ; localDW -> kgows215bs [ 1 ] =
localP -> P_97 ; localDW -> c4t5e3w5ek [ 1 ] = localP -> P_40 ; localDW ->
lfi3mnae2m [ 1 ] = localP -> P_98 [ 1 ] ; localDW -> kgows215bs [ 2 ] =
localP -> P_97 ; localDW -> c4t5e3w5ek [ 2 ] = localP -> P_40 ; localDW ->
lfi3mnae2m [ 2 ] = localP -> P_98 [ 2 ] ; for ( i = 0 ; i < 5 ; i ++ ) {
localDW -> liybiw1jbg [ i ] = localP -> P_104 ; } localDW -> cfcgwprtdx = 0 ;
for ( i = 0 ; i < 15 ; i ++ ) { localDW -> nbbc5odoq4 [ i ] = localP -> P_106
; } localDW -> npsllq52wf = localP -> P_155 ; localDW -> pvn1aiza5a = 1U ;
for ( i = 0 ; i < 10 ; i ++ ) { localDW -> heeedoxzle [ i ] = localP -> P_111
; } localDW -> la41hpfp0y = localP -> P_43 ; localDW -> k1csdkbypq = localP
-> P_46 ; localDW -> gqxdiwstsm [ 0 ] = localP -> P_6 ; localDW -> a3uar2xrsb
[ 0 ] = localP -> P_113 ; localDW -> lw3rw5s0ye [ 0 ] = localP -> P_114 ;
localDW -> cosb2ibhn3 [ 0 ] = localP -> P_115 ; localDW -> fuo05buemm [ 0 ] =
localP -> P_119 ; localDW -> gqxdiwstsm [ 1 ] = localP -> P_6 ; localDW ->
a3uar2xrsb [ 1 ] = localP -> P_113 ; localDW -> lw3rw5s0ye [ 1 ] = localP ->
P_114 ; localDW -> cosb2ibhn3 [ 1 ] = localP -> P_115 ; localDW -> fuo05buemm
[ 1 ] = localP -> P_119 ; localDW -> i13qoukcsn = localP -> P_156 ; localDW
-> ppp4ajc3p1 = localP -> P_126 ; localDW -> gafzug4yea = 2 ; localDW ->
dxm3w2i52x = localP -> P_157 ; localDW -> bw2ribqmwm = localP -> P_47 ;
localB -> j1mq3vnmtv = localP -> P_165 ; localB -> hrzithqxqj [ 0 ] = localP
-> P_108 ; localB -> jnn5lz0per [ 0 ] = localP -> P_34 ; localB -> c12ls2wszl
[ 0 ] = localP -> P_35 ; localB -> bjbzr2pzjd [ 0 ] = localP -> P_89 ; localB
-> gnjojvq4cm [ 0 ] = localP -> P_90 ; localB -> hrzithqxqj [ 1 ] = localP ->
P_108 ; localB -> jnn5lz0per [ 1 ] = localP -> P_34 ; localB -> c12ls2wszl [
1 ] = localP -> P_35 ; localB -> bjbzr2pzjd [ 1 ] = localP -> P_89 ; localB
-> gnjojvq4cm [ 1 ] = localP -> P_90 ; } void bxsrqc204k ( dmp1xsadgu *
localDW , nu4qaxumex * localP ) { int32_T i ; localDW -> jxg1zvdttz [ 0 ] =
localP -> P_92 ; localDW -> jxg1zvdttz [ 1 ] = localP -> P_92 ; localDW ->
ii2o5s5qnf = 2 ; localDW -> mck2owxrk2 = localP -> P_36 ; localDW ->
ozjz0fr0k4 = 1U ; localDW -> kgows215bs [ 0 ] = localP -> P_97 ; localDW ->
c4t5e3w5ek [ 0 ] = localP -> P_40 ; localDW -> lfi3mnae2m [ 0 ] = localP ->
P_98 [ 0 ] ; localDW -> kgows215bs [ 1 ] = localP -> P_97 ; localDW ->
c4t5e3w5ek [ 1 ] = localP -> P_40 ; localDW -> lfi3mnae2m [ 1 ] = localP ->
P_98 [ 1 ] ; localDW -> kgows215bs [ 2 ] = localP -> P_97 ; localDW ->
c4t5e3w5ek [ 2 ] = localP -> P_40 ; localDW -> lfi3mnae2m [ 2 ] = localP ->
P_98 [ 2 ] ; for ( i = 0 ; i < 5 ; i ++ ) { localDW -> liybiw1jbg [ i ] =
localP -> P_104 ; } localDW -> cfcgwprtdx = 0 ; for ( i = 0 ; i < 15 ; i ++ )
{ localDW -> nbbc5odoq4 [ i ] = localP -> P_106 ; } localDW -> npsllq52wf =
localP -> P_155 ; localDW -> pvn1aiza5a = 1U ; for ( i = 0 ; i < 10 ; i ++ )
{ localDW -> heeedoxzle [ i ] = localP -> P_111 ; } localDW -> la41hpfp0y =
localP -> P_43 ; localDW -> k1csdkbypq = localP -> P_46 ; localDW ->
gqxdiwstsm [ 0 ] = localP -> P_6 ; localDW -> a3uar2xrsb [ 0 ] = localP ->
P_113 ; localDW -> lw3rw5s0ye [ 0 ] = localP -> P_114 ; localDW -> cosb2ibhn3
[ 0 ] = localP -> P_115 ; localDW -> fuo05buemm [ 0 ] = localP -> P_119 ;
localDW -> gqxdiwstsm [ 1 ] = localP -> P_6 ; localDW -> a3uar2xrsb [ 1 ] =
localP -> P_113 ; localDW -> lw3rw5s0ye [ 1 ] = localP -> P_114 ; localDW ->
cosb2ibhn3 [ 1 ] = localP -> P_115 ; localDW -> fuo05buemm [ 1 ] = localP ->
P_119 ; localDW -> i13qoukcsn = localP -> P_156 ; localDW -> ppp4ajc3p1 =
localP -> P_126 ; localDW -> gafzug4yea = 2 ; localDW -> dxm3w2i52x = localP
-> P_157 ; localDW -> bw2ribqmwm = localP -> P_47 ; } void kegjp2lgms (
eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) { if (
localDW -> jtnjtissuf ) { localB -> jnn5lz0per [ 0 ] = localP -> P_34 ;
localB -> jnn5lz0per [ 1 ] = localP -> P_34 ; localDW -> jtnjtissuf = false ;
} if ( localDW -> cmab1dak24 ) { localB -> c12ls2wszl [ 0 ] = localP -> P_35
; localB -> c12ls2wszl [ 1 ] = localP -> P_35 ; localDW -> cmab1dak24 = false
; } if ( localDW -> bgpppixzwr ) { localB -> bjbzr2pzjd [ 0 ] = localP ->
P_89 ; localB -> bjbzr2pzjd [ 1 ] = localP -> P_89 ; localDW -> bgpppixzwr =
false ; } if ( localDW -> j20mj4ai3a ) { localB -> gnjojvq4cm [ 0 ] = localP
-> P_90 ; localB -> gnjojvq4cm [ 1 ] = localP -> P_90 ; localDW -> j20mj4ai3a
= false ; } } void otjykwnhb3 ( ipf5ube4r0 * const accn4cnket , const
CommandBus * ipxpc4eli1 , const SensorsBus * fp0u5nlpgw , const real_T
jmrok3dizz [ 4 ] , eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex *
localP ) { uint32_T frxdsihp2w ; uint32_T hi2zvejmut ; uint32_T ma3picxxno ;
uint32_T jcguzokcfz ; uint32_T jbwgem2rys ; uint32_T ouc20dcf2l ; boolean_T
ah2ytz5ufd ; boolean_T lnf5iqeq3a ; boolean_T ojnva05qa3 ; boolean_T
baswp2tp1r ; boolean_T lq42vmb0rf ; boolean_T hjdzwdsemb ; boolean_T
dk05t4kqcv ; real32_T laxzpyp0o0_idx_2 ; real32_T laxzpyp0o0_idx_1 ; real32_T
gf2ur4ozs0_idx_2 ; real32_T msbposu0ee_idx_1 ; real32_T msbposu0ee_idx_0 ;
real32_T owcalsb2dq_idx_2 ; real32_T owcalsb2dq_idx_1 ; real32_T
msbposu0ee_idx_2 ; if ( localP -> P_164 && ( localDW -> ii2o5s5qnf <= 0 ) ) {
localDW -> jxg1zvdttz [ 0 ] = localP -> P_92 ; localDW -> jxg1zvdttz [ 1 ] =
localP -> P_92 ; } localB -> oifirjcnm5_idx_0 = localDW -> jxg1zvdttz [ 0 ] ;
localB -> oifirjcnm5_idx_1 = localDW -> jxg1zvdttz [ 1 ] ; localB ->
kkzeiiel2k = ( real_T ) localP -> P_93 * fp0u5nlpgw -> HALSensors .
HAL_ultrasound_SI . altitude ; localB -> a4lsm2epnd_g1smspu5ke = localB ->
kkzeiiel2k ; localB -> gvq0kd5401 = ( localDW -> mck2owxrk2 > localP -> P_5 )
; if ( localB -> gvq0kd5401 ) { localDW -> ozjz0fr0k4 = 1U ; } if ( localDW
-> ozjz0fr0k4 != 0 ) { localDW -> etwz51o21c [ 0 ] = localB -> ar3nqf0tz4 [ 0
] ; localDW -> etwz51o21c [ 1 ] = localB -> ar3nqf0tz4 [ 1 ] ; } localB ->
a0kz531hkt_idx_0 = localDW -> etwz51o21c [ 0 ] ; localB -> a0kz531hkt_idx_1 =
localDW -> etwz51o21c [ 1 ] ; localDW -> ik5zcuhoy3 = ( ( ( ( fp0u5nlpgw ->
HALSensors . HAL_pressure_SI . pressure - fp0u5nlpgw -> SensorCalibration [ 6
] ) * localP -> P_94 - localP -> P_96 [ 1 ] * localDW -> kgows215bs [ 0 ] ) -
localP -> P_96 [ 2 ] * localDW -> kgows215bs [ 1 ] ) - localP -> P_96 [ 3 ] *
localDW -> kgows215bs [ 2 ] ) / localP -> P_96 [ 0 ] ; localB ->
mxx5usl0fl_dypejvacrn = ( ( localP -> P_95 [ 0 ] * localDW -> ik5zcuhoy3 +
localP -> P_95 [ 1 ] * localDW -> kgows215bs [ 0 ] ) + localP -> P_95 [ 2 ] *
localDW -> kgows215bs [ 1 ] ) + localP -> P_95 [ 3 ] * localDW -> kgows215bs
[ 2 ] ; localDW -> fl2edockfe = ( ( ( localB -> kkzeiiel2k - localP -> P_39 [
1 ] * localDW -> c4t5e3w5ek [ 0 ] ) - localP -> P_39 [ 2 ] * localDW ->
c4t5e3w5ek [ 1 ] ) - localP -> P_39 [ 3 ] * localDW -> c4t5e3w5ek [ 2 ] ) /
localP -> P_39 [ 0 ] ; if ( localB -> kkzeiiel2k > - rtP_Sensors .
altSensorMin ) { localB -> pgtkkan1bw_ppxrqq0gsf = - rtP_Sensors .
altSensorMin ; } else if ( localB -> kkzeiiel2k < localP -> P_37 ) { localB
-> pgtkkan1bw_ppxrqq0gsf = localP -> P_37 ; } else { localB ->
pgtkkan1bw_ppxrqq0gsf = localB -> kkzeiiel2k ; } localB -> htqh4psaeq = ( (
muDoubleScalarAbs ( localDW -> mck2owxrk2 - localB -> pgtkkan1bw_ppxrqq0gsf )
<= localP -> P_4 ) && ( localB -> kkzeiiel2k < - rtP_Sensors . altSensorMin )
&& ( ( ! ( muDoubleScalarAbs ( localB -> mxx5usl0fl_dypejvacrn - localDW ->
mck2owxrk2 ) >= localP -> P_2 ) ) || ( ! ( muDoubleScalarAbs ( ( ( ( localP
-> P_38 [ 0 ] * localDW -> fl2edockfe + localP -> P_38 [ 1 ] * localDW ->
c4t5e3w5ek [ 0 ] ) + localP -> P_38 [ 2 ] * localDW -> c4t5e3w5ek [ 1 ] ) +
localP -> P_38 [ 3 ] * localDW -> c4t5e3w5ek [ 2 ] ) - localDW -> mck2owxrk2
) >= localP -> P_3 ) ) ) ) ; hjdzwdsemb = localB -> htqh4psaeq ; ah2ytz5ufd =
localB -> htqh4psaeq ; if ( ah2ytz5ufd ) { if ( ! localDW -> cmab1dak24 ) {
if ( rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> cmab1dak24 = true ; } localB -> pgtkkan1bw_ppxrqq0gsf = localB ->
a4lsm2epnd_g1smspu5ke - ( localP -> P_57 [ 0 ] * localB -> a0kz531hkt_idx_0 +
localP -> P_57 [ 1 ] * localB -> a0kz531hkt_idx_1 ) ; localB -> c12ls2wszl [
0 ] = localB -> as22idn2n0 [ 0 ] * localB -> pgtkkan1bw_ppxrqq0gsf ; localB
-> c12ls2wszl [ 1 ] = localB -> as22idn2n0 [ 1 ] * localB ->
pgtkkan1bw_ppxrqq0gsf ; srUpdateBC ( localDW -> pxamy50saq ) ; } else { if (
localDW -> cmab1dak24 ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; localB -> c12ls2wszl [ 0 ] = localP -> P_35 ;
localB -> c12ls2wszl [ 1 ] = localP -> P_35 ; localDW -> cmab1dak24 = false ;
} } localB -> kchcocokra [ 0 ] = localB -> c12ls2wszl [ 0 ] + localB ->
a0kz531hkt_idx_0 ; localB -> kchcocokra [ 1 ] = localB -> c12ls2wszl [ 1 ] +
localB -> a0kz531hkt_idx_1 ; localB -> e10024skqk_ldqodwenvz = ( real32_T )
localB -> kchcocokra [ 0 ] ; localB -> g155hum4of_cl54gopm0x [ 0 ] = localP
-> P_143 ; localB -> g155hum4of_cl54gopm0x [ 1 ] = localP -> P_143 ;
muSingleScalarSinCos ( localDW -> lfi3mnae2m [ 2 ] , & localB ->
gemz4nxt34_idx_0 , & localB -> cfkgwlp0pd_idx_0 ) ; muSingleScalarSinCos (
localDW -> lfi3mnae2m [ 1 ] , & localB -> gemz4nxt34_idx_1 , & localB ->
cfkgwlp0pd_idx_1 ) ; muSingleScalarSinCos ( localDW -> lfi3mnae2m [ 0 ] , &
localB -> gemz4nxt34_idx_2 , & localB -> cfkgwlp0pd_idx_2 ) ; localB ->
g155hum4of_cl54gopm0x [ 2 ] = localB -> cfkgwlp0pd_idx_1 ; localB ->
g155hum4of_cl54gopm0x [ 3 ] = localB -> gemz4nxt34_idx_0 ; localB ->
g155hum4of_cl54gopm0x [ 4 ] = localB -> cfkgwlp0pd_idx_0 * localB ->
cfkgwlp0pd_idx_1 ; localB -> g155hum4of_cl54gopm0x [ 5 ] = localB ->
gemz4nxt34_idx_0 * localB -> gemz4nxt34_idx_1 ; localB ->
g155hum4of_cl54gopm0x [ 6 ] = localB -> cfkgwlp0pd_idx_0 ; localB ->
g155hum4of_cl54gopm0x [ 7 ] = localP -> P_99 * localB -> gemz4nxt34_idx_0 *
localB -> cfkgwlp0pd_idx_1 ; localB -> g155hum4of_cl54gopm0x [ 8 ] = localB
-> cfkgwlp0pd_idx_0 * localB -> gemz4nxt34_idx_1 ; for ( localB -> i = 0 ;
localB -> i < 6 ; localB -> i ++ ) { localB -> a0mzdmrcod [ localB -> i ] =
fp0u5nlpgw -> SensorCalibration [ localB -> i ] + localP -> P_100 [ localB ->
i ] ; } localB -> fp0u5nlpgw [ 0 ] = fp0u5nlpgw -> HALSensors . HAL_acc_SI .
x - localB -> a0mzdmrcod [ 0 ] ; localB -> fp0u5nlpgw [ 1 ] = fp0u5nlpgw ->
HALSensors . HAL_acc_SI . y - localB -> a0mzdmrcod [ 1 ] ; localB ->
fp0u5nlpgw [ 2 ] = fp0u5nlpgw -> HALSensors . HAL_acc_SI . z - localB ->
a0mzdmrcod [ 2 ] ; localB -> fp0u5nlpgw [ 3 ] = fp0u5nlpgw -> HALSensors .
HAL_gyro_SI . x - localB -> a0mzdmrcod [ 3 ] ; localB -> fp0u5nlpgw [ 4 ] =
fp0u5nlpgw -> HALSensors . HAL_gyro_SI . y - localB -> a0mzdmrcod [ 4 ] ;
localB -> fp0u5nlpgw [ 5 ] = fp0u5nlpgw -> HALSensors . HAL_gyro_SI . z -
localB -> a0mzdmrcod [ 5 ] ; for ( localB -> j = 0 ; localB -> j < 6 ; localB
-> j ++ ) { localB -> a0mzdmrcod [ localB -> j ] = localB -> fp0u5nlpgw [
localB -> j ] ; localB -> a0mzdmrcod [ localB -> j ] *= localP -> P_101 [
localB -> j ] ; } localDW -> lpva1qajzk = 0.0F ; localB -> gemz4nxt34_idx_2 =
localB -> a0mzdmrcod [ 5 ] ; localB -> denIdx = 1 ; for ( localB -> j = 0 ;
localB -> j < 5 ; localB -> j ++ ) { localB -> gemz4nxt34_idx_2 -= localP ->
P_103 [ localB -> denIdx ] * localDW -> liybiw1jbg [ localB -> j ] ; localB
-> denIdx ++ ; } localDW -> lpva1qajzk = localB -> gemz4nxt34_idx_2 / localP
-> P_103 [ 0 ] ; localB -> cfkgwlp0pd_idx_0 = localP -> P_102 [ 0 ] * localDW
-> lpva1qajzk ; localB -> denIdx = 1 ; for ( localB -> j = 0 ; localB -> j <
5 ; localB -> j ++ ) { localB -> cfkgwlp0pd_idx_0 += localP -> P_102 [ localB
-> denIdx ] * localDW -> liybiw1jbg [ localB -> j ] ; localB -> denIdx ++ ; }
localB -> gemz4nxt34_idx_0 = localB -> a0mzdmrcod [ 3 ] ; localB ->
gemz4nxt34_idx_1 = localB -> a0mzdmrcod [ 4 ] ; for ( localB -> j = 0 ;
localB -> j < 9 ; localB -> j ++ ) { localB -> g155hum4of_kkiq3xxxve [ localB
-> j ] = localB -> g155hum4of_cl54gopm0x [ localB -> j ] / localB ->
cfkgwlp0pd_idx_1 ; } for ( localB -> j = 0 ; localB -> j < 3 ; localB -> j ++
) { localB -> ar3nqf0tz4_fqdqrf4qbc [ localB -> j ] = localB ->
g155hum4of_kkiq3xxxve [ localB -> j + 6 ] * localB -> cfkgwlp0pd_idx_0 + (
localB -> g155hum4of_kkiq3xxxve [ localB -> j + 3 ] * localB ->
gemz4nxt34_idx_1 + localB -> g155hum4of_kkiq3xxxve [ localB -> j ] * localB
-> gemz4nxt34_idx_0 ) ; } localB -> acc1 = localB -> a0mzdmrcod [ 0 ] *
localP -> P_107 [ 0 ] ; localB -> i = 1 ; localB -> j = localDW -> cfcgwprtdx
; while ( localB -> j < 5 ) { localB -> acc1 += localDW -> nbbc5odoq4 [
localB -> j ] * localP -> P_107 [ localB -> i ] ; localB -> i ++ ; localB ->
j ++ ; } localB -> j = 0 ; while ( localB -> j < localDW -> cfcgwprtdx ) {
localB -> acc1 += localDW -> nbbc5odoq4 [ localB -> j ] * localP -> P_107 [
localB -> i ] ; localB -> i ++ ; localB -> j ++ ; } localB ->
gim1zqbiif_g2mlkqadfk [ 0 ] = localB -> acc1 ; localB -> gemz4nxt34_idx_2 =
muSingleScalarFloor ( localP -> P_142 ) ; if ( ( localB -> acc1 < 0.0F ) && (
localP -> P_142 > localB -> gemz4nxt34_idx_2 ) ) { localB -> cfkgwlp0pd_idx_1
= - muSingleScalarPower ( - localB -> acc1 , localP -> P_142 ) ; } else {
localB -> cfkgwlp0pd_idx_1 = muSingleScalarPower ( localB -> acc1 , localP ->
P_142 ) ; } localB -> acc1 = localB -> a0mzdmrcod [ 1 ] * localP -> P_107 [ 0
] ; localB -> i = 1 ; localB -> j = localDW -> cfcgwprtdx ; while ( localB ->
j < 5 ) { localB -> acc1 += localDW -> nbbc5odoq4 [ localB -> j + 5 ] *
localP -> P_107 [ localB -> i ] ; localB -> i ++ ; localB -> j ++ ; } localB
-> j = 0 ; while ( localB -> j < localDW -> cfcgwprtdx ) { localB -> acc1 +=
localDW -> nbbc5odoq4 [ localB -> j + 5 ] * localP -> P_107 [ localB -> i ] ;
localB -> i ++ ; localB -> j ++ ; } localB -> gim1zqbiif_g2mlkqadfk [ 1 ] =
localB -> acc1 ; if ( ( localB -> acc1 < 0.0F ) && ( localP -> P_142 > localB
-> gemz4nxt34_idx_2 ) ) { localB -> kfl24lczp1_idx_1 = - muSingleScalarPower
( - localB -> acc1 , localP -> P_142 ) ; } else { localB -> kfl24lczp1_idx_1
= muSingleScalarPower ( localB -> acc1 , localP -> P_142 ) ; } localB -> acc1
= localB -> a0mzdmrcod [ 2 ] * localP -> P_107 [ 0 ] ; localB -> i = 1 ;
localB -> j = localDW -> cfcgwprtdx ; while ( localB -> j < 5 ) { localB ->
acc1 += localDW -> nbbc5odoq4 [ localB -> j + 10 ] * localP -> P_107 [ localB
-> i ] ; localB -> i ++ ; localB -> j ++ ; } localB -> j = 0 ; while ( localB
-> j < localDW -> cfcgwprtdx ) { localB -> acc1 += localDW -> nbbc5odoq4 [
localB -> j + 10 ] * localP -> P_107 [ localB -> i ] ; localB -> i ++ ;
localB -> j ++ ; } localB -> gim1zqbiif_g2mlkqadfk [ 2 ] = localB -> acc1 ;
if ( ( localB -> acc1 < 0.0F ) && ( localP -> P_142 > localB ->
gemz4nxt34_idx_2 ) ) { localB -> gemz4nxt34_idx_2 = - muSingleScalarPower ( -
localB -> acc1 , localP -> P_142 ) ; } else { localB -> gemz4nxt34_idx_2 =
muSingleScalarPower ( localB -> acc1 , localP -> P_142 ) ; } localB ->
cfkgwlp0pd_idx_1 = muSingleScalarSqrt ( ( localB -> cfkgwlp0pd_idx_1 + localB
-> kfl24lczp1_idx_1 ) + localB -> gemz4nxt34_idx_2 ) ; if ( ( localB ->
cfkgwlp0pd_idx_1 > localP -> P_13 ) && ( localB -> cfkgwlp0pd_idx_1 < localP
-> P_14 ) ) { localB -> hrzithqxqj [ 1 ] = ( localP -> P_105 * localB ->
ar3nqf0tz4_fqdqrf4qbc [ 2 ] + localDW -> lfi3mnae2m [ 2 ] ) * localP -> P_82
+ muSingleScalarAtan ( localB -> gim1zqbiif_g2mlkqadfk [ 1 ] / localB -> acc1
) * localP -> P_83 ; localB -> gemz4nxt34_idx_2 = localP -> P_84 * localB ->
gim1zqbiif_g2mlkqadfk [ 0 ] ; if ( localB -> gemz4nxt34_idx_2 > 1.0F ) {
localB -> gemz4nxt34_idx_2 = 1.0F ; } else { if ( localB -> gemz4nxt34_idx_2
< - 1.0F ) { localB -> gemz4nxt34_idx_2 = - 1.0F ; } } localB -> hrzithqxqj [
0 ] = ( localP -> P_105 * localB -> ar3nqf0tz4_fqdqrf4qbc [ 1 ] + localDW ->
lfi3mnae2m [ 1 ] ) * localP -> P_86 + localP -> P_85 * muSingleScalarAsin (
localB -> gemz4nxt34_idx_2 ) ; srUpdateBC ( localDW -> h0cudiu0ft ) ; } else
{ localB -> hrzithqxqj [ 0 ] = localP -> P_105 * localB ->
ar3nqf0tz4_fqdqrf4qbc [ 1 ] + localDW -> lfi3mnae2m [ 1 ] ; localB ->
hrzithqxqj [ 1 ] = localP -> P_105 * localB -> ar3nqf0tz4_fqdqrf4qbc [ 2 ] +
localDW -> lfi3mnae2m [ 2 ] ; srUpdateBC ( localDW -> oa1muqt4on ) ; } localB
-> arfzeh3qs4 [ 0 ] = localP -> P_105 * localB -> ar3nqf0tz4_fqdqrf4qbc [ 0 ]
+ localDW -> lfi3mnae2m [ 0 ] ; localB -> arfzeh3qs4 [ 1 ] = localB ->
hrzithqxqj [ 0 ] ; localB -> arfzeh3qs4 [ 2 ] = localB -> hrzithqxqj [ 1 ] ;
frxdsihp2w = localDW -> npsllq52wf ; if ( frxdsihp2w < localP -> P_33 ) {
localB -> axhgnxrhij [ 0 ] = fp0u5nlpgw -> VisionSensors . opticalFlow_data [
0 ] ; localB -> axhgnxrhij [ 1 ] = fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 1 ] ; localB -> axhgnxrhij [ 2 ] = fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 2 ] ; } else { localB -> cfkgwlp0pd_idx_1
= localP -> P_87 * ( real32_T ) localB -> kchcocokra [ 0 ] ; localB ->
axhgnxrhij [ 0 ] = fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 0 ] *
localB -> cfkgwlp0pd_idx_1 * localP -> P_88 ; localB -> axhgnxrhij [ 1 ] =
fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 1 ] * localB ->
cfkgwlp0pd_idx_1 * localP -> P_88 ; localB -> axhgnxrhij [ 2 ] = fp0u5nlpgw
-> VisionSensors . opticalFlow_data [ 2 ] * localB -> cfkgwlp0pd_idx_1 *
localP -> P_88 ; } localB -> cfkgwlp0pd_idx_1 = localB -> axhgnxrhij [ 0 ] ;
localB -> kfl24lczp1_idx_1 = localB -> axhgnxrhij [ 1 ] ; if ( localDW ->
pvn1aiza5a != 0 ) { localDW -> kzeijhdtif [ 0 ] = localB -> faltdm0cip [ 0 ]
; localDW -> kzeijhdtif [ 1 ] = localB -> faltdm0cip [ 1 ] ; } for ( localB
-> i = 0 ; localB -> i < 2 ; localB -> i ++ ) { localB ->
ogtayargxh_bsqwvugooi [ localB -> i ] = localDW -> kzeijhdtif [ localB -> i ]
; localB -> memOffset = localB -> i * 5 ; localB -> gemz4nxt34_idx_2 = localB
-> a0mzdmrcod [ localB -> i + 3 ] ; localB -> denIdx = 1 ; for ( localB -> j
= 0 ; localB -> j < 5 ; localB -> j ++ ) { localB -> gemz4nxt34_idx_2 -=
localDW -> heeedoxzle [ localB -> memOffset + localB -> j ] * localP -> P_110
[ localB -> denIdx ] ; localB -> denIdx ++ ; } localDW -> dhhdwwczx2 [ localB
-> i ] = localB -> gemz4nxt34_idx_2 / localP -> P_110 [ 0 ] ; localB ->
gemz4nxt34_idx_2 = localP -> P_109 [ 0 ] * localDW -> dhhdwwczx2 [ localB ->
i ] ; localB -> denIdx = 1 ; for ( localB -> j = 0 ; localB -> j < 5 ; localB
-> j ++ ) { localB -> gemz4nxt34_idx_2 += localDW -> heeedoxzle [ localB ->
memOffset + localB -> j ] * localP -> P_109 [ localB -> denIdx ] ; localB ->
denIdx ++ ; } localB -> lg0fd5e53i [ localB -> i ] = localB ->
gemz4nxt34_idx_2 * localP -> P_112 ; } localB -> l4a4q4stof_dhmrxtyqop [ 0 ]
= localDW -> gqxdiwstsm [ 0 ] ; localB -> l4a4q4stof_dhmrxtyqop [ 1 ] =
localDW -> gqxdiwstsm [ 1 ] ; localB -> e4bratxxxb_jwzvbuczlb [ 0 ] = localB
-> lg0fd5e53i [ 0 ] - localB -> l4a4q4stof_dhmrxtyqop [ 0 ] ; localB ->
e4bratxxxb_jwzvbuczlb [ 1 ] = localB -> lg0fd5e53i [ 1 ] - localB ->
l4a4q4stof_dhmrxtyqop [ 1 ] ; localB -> gemz4nxt34_idx_2 = muSingleScalarAbs
( localB -> a0mzdmrcod [ 3 ] ) ; localB -> cfkgwlp0pd_idx_2 =
muSingleScalarAbs ( localB -> a0mzdmrcod [ 4 ] ) ; localB -> ethynrlyyv = ( (
( ( muSingleScalarAbs ( localB -> arfzeh3qs4 [ 1 ] ) <= localP -> P_20 ) && (
muSingleScalarAbs ( localB -> arfzeh3qs4 [ 2 ] ) <= localP -> P_22 ) && (
localB -> gemz4nxt34_idx_2 <= localP -> P_24 ) && ( localB ->
cfkgwlp0pd_idx_2 <= localP -> P_25 ) && ( muSingleScalarAbs ( localB ->
e4bratxxxb_jwzvbuczlb [ 0 ] ) <= localP -> P_18 ) && ( muSingleScalarAbs (
localB -> e4bratxxxb_jwzvbuczlb [ 1 ] ) <= localP -> P_19 ) ) || ( ( localB
-> gemz4nxt34_idx_2 <= localP -> P_21 ) && ( localB -> cfkgwlp0pd_idx_2 <=
localP -> P_23 ) ) ) && ( muSingleScalarAbs ( localB -> axhgnxrhij [ 0 ] -
localDW -> a3uar2xrsb [ 0 ] ) <= localP -> P_26 ) && ( muSingleScalarAbs (
localB -> axhgnxrhij [ 1 ] - localDW -> a3uar2xrsb [ 1 ] ) <= localP -> P_27
) && ( ( real32_T ) localB -> kchcocokra [ 0 ] <= localP -> P_28 ) ) ;
dk05t4kqcv = localB -> ethynrlyyv ; lnf5iqeq3a = localB -> ethynrlyyv ; if (
lnf5iqeq3a ) { if ( ! localDW -> j20mj4ai3a ) { if ( rtmGetTaskTime (
accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> j20mj4ai3a = true ; } localB -> gemz4nxt34_idx_2 = localB ->
cfkgwlp0pd_idx_1 - ( localP -> P_146 [ 0 ] * localB -> ogtayargxh_bsqwvugooi
[ 0 ] + localP -> P_146 [ 2 ] * localB -> ogtayargxh_bsqwvugooi [ 1 ] ) ;
localB -> cfkgwlp0pd_idx_2 = localB -> kfl24lczp1_idx_1 - ( localP -> P_146 [
1 ] * localB -> ogtayargxh_bsqwvugooi [ 0 ] + localP -> P_146 [ 3 ] * localB
-> ogtayargxh_bsqwvugooi [ 1 ] ) ; localB -> gnjojvq4cm [ 0 ] = 0.0F ; localB
-> gnjojvq4cm [ 0 ] += localB -> nluqpntbot [ 0 ] * localB ->
gemz4nxt34_idx_2 ; localB -> gnjojvq4cm [ 0 ] += localB -> nluqpntbot [ 2 ] *
localB -> cfkgwlp0pd_idx_2 ; localB -> gnjojvq4cm [ 1 ] = 0.0F ; localB ->
gnjojvq4cm [ 1 ] += localB -> nluqpntbot [ 1 ] * localB -> gemz4nxt34_idx_2 ;
localB -> gnjojvq4cm [ 1 ] += localB -> nluqpntbot [ 3 ] * localB ->
cfkgwlp0pd_idx_2 ; srUpdateBC ( localDW -> nuogwfijir ) ; } else { if (
localDW -> j20mj4ai3a ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; localB -> gnjojvq4cm [ 0 ] = localP -> P_90 ;
localB -> gnjojvq4cm [ 1 ] = localP -> P_90 ; localDW -> j20mj4ai3a = false ;
} } localB -> ercmqqmldg [ 0 ] = localB -> gnjojvq4cm [ 0 ] + localB ->
ogtayargxh_bsqwvugooi [ 0 ] ; localB -> ercmqqmldg [ 1 ] = localB ->
gnjojvq4cm [ 1 ] + localB -> ogtayargxh_bsqwvugooi [ 1 ] ;
muSingleScalarSinCos ( localB -> arfzeh3qs4 [ 0 ] , & localB ->
gemz4nxt34_idx_2 , & localB -> cfkgwlp0pd_idx_2 ) ; muSingleScalarSinCos (
localB -> arfzeh3qs4 [ 1 ] , & localB -> f040btpsio_idx_1 , & localB ->
ebzpum1j2m_idx_1 ) ; muSingleScalarSinCos ( localB -> arfzeh3qs4 [ 2 ] , &
localB -> f040btpsio_idx_2 , & localB -> ebzpum1j2m_idx_2 ) ; localB ->
g155hum4of_cl54gopm0x [ 0 ] = localB -> ebzpum1j2m_idx_1 * localB ->
cfkgwlp0pd_idx_2 ; localB -> bbe5mjwk1f_lxo5edjg3c = localB ->
f040btpsio_idx_2 * localB -> f040btpsio_idx_1 ; localB ->
g155hum4of_cl54gopm0x [ 1 ] = localB -> bbe5mjwk1f_lxo5edjg3c * localB ->
cfkgwlp0pd_idx_2 - localB -> ebzpum1j2m_idx_2 * localB -> gemz4nxt34_idx_2 ;
localB -> cgkzo2biyi_owjr1h1vqy = localB -> ebzpum1j2m_idx_2 * localB ->
f040btpsio_idx_1 ; localB -> g155hum4of_cl54gopm0x [ 2 ] = localB ->
cgkzo2biyi_owjr1h1vqy * localB -> cfkgwlp0pd_idx_2 + localB ->
f040btpsio_idx_2 * localB -> gemz4nxt34_idx_2 ; localB ->
g155hum4of_cl54gopm0x [ 3 ] = localB -> ebzpum1j2m_idx_1 * localB ->
gemz4nxt34_idx_2 ; localB -> g155hum4of_cl54gopm0x [ 4 ] = localB ->
bbe5mjwk1f_lxo5edjg3c * localB -> gemz4nxt34_idx_2 + localB ->
ebzpum1j2m_idx_2 * localB -> cfkgwlp0pd_idx_2 ; localB ->
g155hum4of_cl54gopm0x [ 5 ] = localB -> cgkzo2biyi_owjr1h1vqy * localB ->
gemz4nxt34_idx_2 - localB -> f040btpsio_idx_2 * localB -> cfkgwlp0pd_idx_2 ;
localB -> g155hum4of_cl54gopm0x [ 6 ] = - localB -> f040btpsio_idx_1 ; localB
-> g155hum4of_cl54gopm0x [ 7 ] = localB -> f040btpsio_idx_2 * localB ->
ebzpum1j2m_idx_1 ; localB -> g155hum4of_cl54gopm0x [ 8 ] = localB ->
ebzpum1j2m_idx_2 * localB -> ebzpum1j2m_idx_1 ; for ( localB -> j = 0 ;
localB -> j < 3 ; localB -> j ++ ) { localB -> pgtkkan1bw_ppxrqq0gsf = (
real_T ) localB -> g155hum4of_cl54gopm0x [ localB -> j ] * localDW ->
lw3rw5s0ye [ 0 ] ; localB -> itj43s3ndh_merlcviukg = ( real_T ) localB ->
g155hum4of_cl54gopm0x [ localB -> j + 3 ] * localDW -> lw3rw5s0ye [ 1 ] ;
localB -> fv2bmglt0t_nz4o0shxby = localB -> g155hum4of_cl54gopm0x [ localB ->
j + 6 ] * localB -> kchcocokra [ 1 ] ; localB -> kqm3jkrmki_bhxxfovxdy [
localB -> j ] = localB -> fv2bmglt0t_nz4o0shxby + ( localB ->
itj43s3ndh_merlcviukg + localB -> pgtkkan1bw_ppxrqq0gsf ) ; localB ->
g155hum4of_pbm3vprmfu [ localB -> j ] = localB -> fv2bmglt0t_nz4o0shxby + (
localB -> itj43s3ndh_merlcviukg + localB -> pgtkkan1bw_ppxrqq0gsf ) ; }
localB -> jeigph1w3t_mbvzarwird [ 0 ] = localB -> oifirjcnm5_idx_0 ; localB
-> jeigph1w3t_mbvzarwird [ 1 ] = localB -> oifirjcnm5_idx_1 ; localB ->
jeigph1w3t_mbvzarwird [ 2 ] = localB -> e10024skqk_ldqodwenvz ; localB ->
jeigph1w3t_mbvzarwird [ 3 ] = localB -> arfzeh3qs4 [ 0 ] ; localB ->
jeigph1w3t_mbvzarwird [ 4 ] = localB -> arfzeh3qs4 [ 1 ] ; localB ->
jeigph1w3t_mbvzarwird [ 5 ] = localB -> arfzeh3qs4 [ 2 ] ; localB ->
jeigph1w3t_mbvzarwird [ 6 ] = localB -> ercmqqmldg [ 0 ] ; localB ->
jeigph1w3t_mbvzarwird [ 7 ] = localB -> ercmqqmldg [ 1 ] ; localB ->
jeigph1w3t_mbvzarwird [ 8 ] = ( real32_T ) localB -> kqm3jkrmki_bhxxfovxdy [
2 ] ; localB -> jeigph1w3t_mbvzarwird [ 9 ] = localB -> gemz4nxt34_idx_0 ;
localB -> jeigph1w3t_mbvzarwird [ 10 ] = localB -> gemz4nxt34_idx_1 ; localB
-> jeigph1w3t_mbvzarwird [ 11 ] = localB -> cfkgwlp0pd_idx_0 ; localB ->
pgtkkan1bw_ppxrqq0gsf = muDoubleScalarSin ( jmrok3dizz [ 1 ] ) ; localB ->
itj43s3ndh_merlcviukg = localP -> P_42 * jmrok3dizz [ 2 ] ; localB ->
b31kr2s5or = ( localP -> P_41 * localB -> pgtkkan1bw_ppxrqq0gsf + localB ->
itj43s3ndh_merlcviukg ) + localDW -> la41hpfp0y ; localB ->
pgtkkan1bw_ppxrqq0gsf = muDoubleScalarCos ( jmrok3dizz [ 1 ] ) ; localB ->
itj43s3ndh_merlcviukg = localP -> P_45 * jmrok3dizz [ 3 ] ; localB ->
khyoimdert = ( localP -> P_44 * localB -> pgtkkan1bw_ppxrqq0gsf + localB ->
itj43s3ndh_merlcviukg ) + localDW -> k1csdkbypq ; if ( localP -> P_164 ) {
muSingleScalarSinCos ( localB -> arfzeh3qs4 [ 0 ] , & localB ->
bbe5mjwk1f_lxo5edjg3c , & localB -> cgkzo2biyi_owjr1h1vqy ) ; localB ->
gemz4nxt34_idx_2 = ( real32_T ) localB -> b31kr2s5or - localB ->
oifirjcnm5_idx_0 ; localB -> f040btpsio_idx_1 = ( real32_T ) localB ->
khyoimdert - localB -> oifirjcnm5_idx_1 ; localB -> ptnwsicd12_bjbgfqrolh =
localB -> cgkzo2biyi_owjr1h1vqy * localB -> gemz4nxt34_idx_2 + localB ->
bbe5mjwk1f_lxo5edjg3c * localB -> f040btpsio_idx_1 ; if ( localB ->
ptnwsicd12_bjbgfqrolh > localP -> P_76 ) { localB -> ptnwsicd12_bjbgfqrolh =
localP -> P_76 ; } else { if ( localB -> ptnwsicd12_bjbgfqrolh < localP ->
P_77 ) { localB -> ptnwsicd12_bjbgfqrolh = localP -> P_77 ; } } localB ->
ddif4goqom_nuebgmauvi [ 0 ] = localP -> P_78 [ 0 ] * localB ->
ptnwsicd12_bjbgfqrolh + localP -> P_74 [ 0 ] * localB -> ercmqqmldg [ 0 ] ;
localB -> ptnwsicd12_bjbgfqrolh = localP -> P_75 * localB ->
bbe5mjwk1f_lxo5edjg3c * localB -> gemz4nxt34_idx_2 + localB ->
cgkzo2biyi_owjr1h1vqy * localB -> f040btpsio_idx_1 ; if ( localB ->
ptnwsicd12_bjbgfqrolh > localP -> P_76 ) { localB -> ptnwsicd12_bjbgfqrolh =
localP -> P_76 ; } else { if ( localB -> ptnwsicd12_bjbgfqrolh < localP ->
P_77 ) { localB -> ptnwsicd12_bjbgfqrolh = localP -> P_77 ; } } localB ->
ddif4goqom_nuebgmauvi [ 1 ] = localP -> P_78 [ 1 ] * localB ->
ptnwsicd12_bjbgfqrolh + localP -> P_74 [ 1 ] * localB -> ercmqqmldg [ 1 ] ; }
else { localB -> ddif4goqom_nuebgmauvi [ 0 ] = ipxpc4eli1 -> orient_ref [ 1 ]
; localB -> ddif4goqom_nuebgmauvi [ 1 ] = ipxpc4eli1 -> orient_ref [ 2 ] ; }
localB -> ptnwsicd12_bjbgfqrolh = localB -> ddif4goqom_nuebgmauvi [ 0 ] -
localB -> arfzeh3qs4 [ 1 ] ; localB -> gwfdiculxk [ 0 ] = localB ->
ptnwsicd12_bjbgfqrolh - localP -> P_116 * localDW -> cosb2ibhn3 [ 0 ] ;
localB -> b4pavfef0y [ 0 ] = localDW -> fuo05buemm [ 0 ] ; localB ->
ddif4goqom_nuebgmauvi [ 0 ] = localB -> ptnwsicd12_bjbgfqrolh ; localB ->
ptnwsicd12_bjbgfqrolh = localB -> ddif4goqom_nuebgmauvi [ 1 ] - localB ->
arfzeh3qs4 [ 2 ] ; localB -> gwfdiculxk [ 1 ] = localB ->
ptnwsicd12_bjbgfqrolh - localP -> P_116 * localDW -> cosb2ibhn3 [ 1 ] ;
localB -> b4pavfef0y [ 1 ] = localDW -> fuo05buemm [ 1 ] ; hi2zvejmut =
localDW -> i13qoukcsn ; localB -> lpcb3n1tac = ( hi2zvejmut < localP -> P_32
) ; if ( ( ! localB -> lpcb3n1tac ) && ( localDW -> gafzug4yea == 1 ) ) {
localDW -> ppp4ajc3p1 = localP -> P_126 ; } if ( localDW -> ppp4ajc3p1 >=
localP -> P_127 ) { localDW -> ppp4ajc3p1 = localP -> P_127 ; } else { if (
localDW -> ppp4ajc3p1 <= localP -> P_128 ) { localDW -> ppp4ajc3p1 = localP
-> P_128 ; } } localB -> bbe5mjwk1f_lxo5edjg3c = ( real32_T ) localB ->
dzxv5pp3or - localB -> e10024skqk_ldqodwenvz ; if ( localB -> lpcb3n1tac ) {
localB -> gemz4nxt34_idx_2 = localP -> P_81 * localP -> P_124 ; } else {
localB -> gemz4nxt34_idx_2 = ( localP -> P_80 * localB ->
bbe5mjwk1f_lxo5edjg3c + localDW -> ppp4ajc3p1 ) - localP -> P_79 * ( real32_T
) localB -> kqm3jkrmki_bhxxfovxdy [ 2 ] ; } localB -> cjr3pr5fdi_dhamdvybc1 =
localP -> P_124 + localB -> gemz4nxt34_idx_2 ; if ( localB ->
cjr3pr5fdi_dhamdvybc1 > localP -> P_129 ) { localB -> cjr3pr5fdi_dhamdvybc1 =
localP -> P_129 ; } else { if ( localB -> cjr3pr5fdi_dhamdvybc1 < localP ->
P_130 ) { localB -> cjr3pr5fdi_dhamdvybc1 = localP -> P_130 ; } } localB ->
cfkgwlp0pd_idx_0 = ( ipxpc4eli1 -> orient_ref [ 0 ] - localB -> arfzeh3qs4 [
0 ] ) * localP -> P_131 - localP -> P_132 * localB -> cfkgwlp0pd_idx_0 ;
ma3picxxno = hi2zvejmut + localP -> P_158 ; if ( ma3picxxno > localP -> P_29
) { localB -> cxewroht2j = localP -> P_159 ; } else { localB -> cxewroht2j =
ma3picxxno ; } localB -> ltavsvi5xw = localP -> P_133 * localB ->
bbe5mjwk1f_lxo5edjg3c ; localB -> gemz4nxt34_idx_1 = ( localP -> P_123 [ 0 ]
* localB -> ddif4goqom_nuebgmauvi [ 0 ] + localP -> P_122 * localB ->
b4pavfef0y [ 0 ] ) - localP -> P_117 [ 0 ] * localB -> gemz4nxt34_idx_1 ;
localB -> gemz4nxt34_idx_0 = ( localP -> P_123 [ 1 ] * localB ->
ptnwsicd12_bjbgfqrolh + localP -> P_122 * localB -> b4pavfef0y [ 1 ] ) -
localP -> P_117 [ 1 ] * localB -> gemz4nxt34_idx_0 ; for ( localB -> j = 0 ;
localB -> j < 4 ; localB -> j ++ ) { localB -> gemz4nxt34_idx_2 = localB ->
oifirjcnm5 [ localB -> j + 12 ] * localB -> gemz4nxt34_idx_0 + ( localB ->
oifirjcnm5 [ localB -> j + 8 ] * localB -> gemz4nxt34_idx_1 + ( localB ->
oifirjcnm5 [ localB -> j + 4 ] * localB -> cfkgwlp0pd_idx_0 + localB ->
oifirjcnm5 [ localB -> j ] * localB -> cjr3pr5fdi_dhamdvybc1 ) ) ; localB ->
fv [ localB -> j ] = localB -> gemz4nxt34_idx_2 ; } localB ->
gemz4nxt34_idx_2 = localP -> P_134 * localB -> fv [ 0 ] ; if ( localB ->
gemz4nxt34_idx_2 > localP -> P_135 ) { localB -> gemz4nxt34_idx_2 = localP ->
P_135 ; } else { if ( localB -> gemz4nxt34_idx_2 < localP -> P_136 ) { localB
-> gemz4nxt34_idx_2 = localP -> P_136 ; } } localB -> fpldlpy5uu [ 0 ] =
localP -> P_137 [ 0 ] * localB -> gemz4nxt34_idx_2 ; localB ->
gemz4nxt34_idx_2 = localP -> P_134 * localB -> fv [ 1 ] ; if ( localB ->
gemz4nxt34_idx_2 > localP -> P_135 ) { localB -> gemz4nxt34_idx_2 = localP ->
P_135 ; } else { if ( localB -> gemz4nxt34_idx_2 < localP -> P_136 ) { localB
-> gemz4nxt34_idx_2 = localP -> P_136 ; } } localB -> fpldlpy5uu [ 1 ] =
localP -> P_137 [ 1 ] * localB -> gemz4nxt34_idx_2 ; localB ->
gemz4nxt34_idx_2 = localP -> P_134 * localB -> fv [ 2 ] ; if ( localB ->
gemz4nxt34_idx_2 > localP -> P_135 ) { localB -> gemz4nxt34_idx_2 = localP ->
P_135 ; } else { if ( localB -> gemz4nxt34_idx_2 < localP -> P_136 ) { localB
-> gemz4nxt34_idx_2 = localP -> P_136 ; } } localB -> fpldlpy5uu [ 2 ] =
localP -> P_137 [ 2 ] * localB -> gemz4nxt34_idx_2 ; localB ->
gemz4nxt34_idx_2 = localP -> P_134 * localB -> fv [ 3 ] ; if ( localB ->
gemz4nxt34_idx_2 > localP -> P_135 ) { localB -> gemz4nxt34_idx_2 = localP ->
P_135 ; } else { if ( localB -> gemz4nxt34_idx_2 < localP -> P_136 ) { localB
-> gemz4nxt34_idx_2 = localP -> P_136 ; } } localB -> fpldlpy5uu [ 3 ] =
localP -> P_137 [ 3 ] * localB -> gemz4nxt34_idx_2 ; jcguzokcfz = localDW ->
dxm3w2i52x ; if ( jcguzokcfz > localP -> P_51 ) { localB ->
mxx5usl0fl_dypejvacrn = localB -> e10024skqk_ldqodwenvz - localB ->
mxx5usl0fl_dypejvacrn ; localB -> pgtkkan1bw_ppxrqq0gsf = fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 2 ] ; localB -> itj43s3ndh_merlcviukg =
fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 2 ] ; } else { localB ->
mxx5usl0fl_dypejvacrn = localP -> P_141 ; localB -> pgtkkan1bw_ppxrqq0gsf =
localP -> P_49 ; localB -> itj43s3ndh_merlcviukg = localP -> P_49 ; } localB
-> fmncic4o4f = ( real_T ) ( localB -> itj43s3ndh_merlcviukg == localP -> P_1
) * localDW -> bw2ribqmwm + ( real_T ) ( localB -> pgtkkan1bw_ppxrqq0gsf ==
localP -> P_1 ) ; jbwgem2rys = jcguzokcfz + localP -> P_160 ; if ( jbwgem2rys
> localP -> P_30 ) { localB -> hncby4q12z = localP -> P_161 ; } else { localB
-> hncby4q12z = jbwgem2rys ; } if ( ( muSingleScalarAbs ( localB ->
oifirjcnm5_idx_0 ) > localP -> P_7 ) || ( muSingleScalarAbs ( localB ->
oifirjcnm5_idx_1 ) > localP -> P_8 ) ) { ghadbep3bb ( & localB -> j1mq3vnmtv
, & localP -> ghadbep3bbv ) ; } else if ( ( ( muSingleScalarAbs ( fp0u5nlpgw
-> VisionSensors . opticalFlow_data [ 0 ] ) > localP -> P_11 ) && (
muSingleScalarAbs ( localP -> P_138 * fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 0 ] - localB -> ercmqqmldg [ 0 ] ) > localP -> P_9 ) ) ||
( ( muSingleScalarAbs ( localP -> P_139 * fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 1 ] - localB -> ercmqqmldg [ 1 ] ) > localP -> P_10 ) && (
muSingleScalarAbs ( fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 1 ] ) >
localP -> P_12 ) ) ) { ghadbep3bb ( & localB -> j1mq3vnmtv , & localP ->
acfz1zxm4t ) ; } else if ( localB -> fmncic4o4f > localP -> P_0 ) {
ghadbep3bb ( & localB -> j1mq3vnmtv , & localP -> clwiujjdqo ) ; } else if (
muSingleScalarAbs ( localB -> mxx5usl0fl_dypejvacrn ) > localP -> P_50 ) {
ghadbep3bb ( & localB -> j1mq3vnmtv , & localP -> jvbbqhrajh ) ; } else {
ghadbep3bb ( & localB -> j1mq3vnmtv , & localP -> ciy1c2o0rv ) ; } localB ->
ph54jd1dkw_llw0u2ae0v = muDoubleScalarAtan2 ( localB -> b31kr2s5or - localDW
-> la41hpfp0y , localB -> khyoimdert - localDW -> k1csdkbypq ) ; localB ->
kjojdfkfgk_cv5hdgrwft [ 0 ] = localB -> a0kz531hkt_idx_0 ; localB ->
kjojdfkfgk_cv5hdgrwft [ 1 ] = localB -> a0kz531hkt_idx_1 ; localB ->
a0kz531hkt_idx_0 = localP -> P_55 [ 0 ] * localB -> kjojdfkfgk_cv5hdgrwft [ 0
] + localP -> P_55 [ 2 ] * localB -> kjojdfkfgk_cv5hdgrwft [ 1 ] ; localB ->
a0kz531hkt_idx_1 = localP -> P_55 [ 1 ] * localB -> kjojdfkfgk_cv5hdgrwft [ 0
] + localP -> P_55 [ 3 ] * localB -> kjojdfkfgk_cv5hdgrwft [ 1 ] ; for (
localB -> j = 0 ; localB -> j < 3 ; localB -> j ++ ) { localB -> c4puh0aj2v [
localB -> j ] = ( ( localB -> g155hum4of_cl54gopm0x [ 3 * localB -> j + 1 ] *
localB -> gim1zqbiif_g2mlkqadfk [ 1 ] + localB -> g155hum4of_cl54gopm0x [ 3 *
localB -> j ] * localB -> gim1zqbiif_g2mlkqadfk [ 0 ] ) + localB ->
g155hum4of_cl54gopm0x [ 3 * localB -> j + 2 ] * localB -> acc1 ) + localP ->
P_69 [ localB -> j ] ; } localB -> fv2bmglt0t_nz4o0shxby = localB ->
c4puh0aj2v [ 2 ] ; localB -> pgtkkan1bw_ppxrqq0gsf = localP -> P_56 [ 0 ] *
localB -> c4puh0aj2v [ 2 ] ; localB -> itj43s3ndh_merlcviukg = localP -> P_56
[ 1 ] * localB -> c4puh0aj2v [ 2 ] ; ojnva05qa3 = hjdzwdsemb ; if (
ojnva05qa3 ) { if ( ! localDW -> jtnjtissuf ) { if ( rtmGetTaskTime (
accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> jtnjtissuf = true ; } localB -> a4lsm2epnd_g1smspu5ke -= ( localP
-> P_57 [ 0 ] * localB -> kjojdfkfgk_cv5hdgrwft [ 0 ] + localP -> P_57 [ 1 ]
* localB -> kjojdfkfgk_cv5hdgrwft [ 1 ] ) + localP -> P_61 * localB ->
fv2bmglt0t_nz4o0shxby ; localB -> jnn5lz0per [ 0 ] = localB -> bowrb0xa2c [ 0
] * localB -> a4lsm2epnd_g1smspu5ke ; localB -> jnn5lz0per [ 1 ] = localB ->
bowrb0xa2c [ 1 ] * localB -> a4lsm2epnd_g1smspu5ke ; srUpdateBC ( localDW ->
btfjf5acqg ) ; } else { if ( localDW -> jtnjtissuf ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> jnn5lz0per [ 0 ] = localP -> P_34 ; localB -> jnn5lz0per [ 1 ] =
localP -> P_34 ; localDW -> jtnjtissuf = false ; } } localB -> jtobujruvv [ 0
] = ( localB -> pgtkkan1bw_ppxrqq0gsf + localB -> a0kz531hkt_idx_0 ) + localB
-> jnn5lz0per [ 0 ] ; localB -> jtobujruvv [ 1 ] = ( localB ->
itj43s3ndh_merlcviukg + localB -> a0kz531hkt_idx_1 ) + localB -> jnn5lz0per [
1 ] ; muSingleScalarSinCos ( localB -> arfzeh3qs4 [ 0 ] , & localB ->
oifirjcnm5_idx_0 , & localB -> oifirjcnm5_idx_1 ) ; muSingleScalarSinCos (
localB -> arfzeh3qs4 [ 1 ] , & laxzpyp0o0_idx_1 , & localB ->
gf2ur4ozs0_idx_1 ) ; muSingleScalarSinCos ( localB -> arfzeh3qs4 [ 2 ] , &
laxzpyp0o0_idx_2 , & gf2ur4ozs0_idx_2 ) ; localB -> g155hum4of_cl54gopm0x [ 0
] = localB -> gf2ur4ozs0_idx_1 * localB -> oifirjcnm5_idx_1 ; localB ->
bbe5mjwk1f_lxo5edjg3c = laxzpyp0o0_idx_2 * laxzpyp0o0_idx_1 ; localB ->
g155hum4of_cl54gopm0x [ 1 ] = localB -> bbe5mjwk1f_lxo5edjg3c * localB ->
oifirjcnm5_idx_1 - gf2ur4ozs0_idx_2 * localB -> oifirjcnm5_idx_0 ; localB ->
cgkzo2biyi_owjr1h1vqy = gf2ur4ozs0_idx_2 * laxzpyp0o0_idx_1 ; localB ->
g155hum4of_cl54gopm0x [ 2 ] = localB -> cgkzo2biyi_owjr1h1vqy * localB ->
oifirjcnm5_idx_1 + laxzpyp0o0_idx_2 * localB -> oifirjcnm5_idx_0 ; localB ->
g155hum4of_cl54gopm0x [ 3 ] = localB -> gf2ur4ozs0_idx_1 * localB ->
oifirjcnm5_idx_0 ; localB -> g155hum4of_cl54gopm0x [ 4 ] = localB ->
bbe5mjwk1f_lxo5edjg3c * localB -> oifirjcnm5_idx_0 + gf2ur4ozs0_idx_2 *
localB -> oifirjcnm5_idx_1 ; localB -> g155hum4of_cl54gopm0x [ 5 ] = localB
-> cgkzo2biyi_owjr1h1vqy * localB -> oifirjcnm5_idx_0 - laxzpyp0o0_idx_2 *
localB -> oifirjcnm5_idx_1 ; localB -> g155hum4of_cl54gopm0x [ 6 ] = -
laxzpyp0o0_idx_1 ; localB -> g155hum4of_cl54gopm0x [ 7 ] = laxzpyp0o0_idx_2 *
localB -> gf2ur4ozs0_idx_1 ; localB -> g155hum4of_cl54gopm0x [ 8 ] =
gf2ur4ozs0_idx_2 * localB -> gf2ur4ozs0_idx_1 ; hjdzwdsemb = ( localB ->
e10024skqk_ldqodwenvz <= localP -> P_15 ) ; lq42vmb0rf = ( ( localB ->
axhgnxrhij [ 0 ] != localP -> P_16 ) || ( localB -> axhgnxrhij [ 1 ] !=
localP -> P_17 ) ) ; for ( localB -> j = 0 ; localB -> j < 3 ; localB -> j ++
) { localB -> kqm3jkrmki_bhxxfovxdy [ localB -> j ] = localB ->
gim1zqbiif_g2mlkqadfk [ localB -> j ] - ( ( localB -> g155hum4of_cl54gopm0x [
localB -> j + 3 ] * localP -> P_70 [ 1 ] + localB -> g155hum4of_cl54gopm0x [
localB -> j ] * localP -> P_70 [ 0 ] ) + localB -> g155hum4of_cl54gopm0x [
localB -> j + 6 ] * localP -> P_70 [ 2 ] ) ; } localB -> hospkear0q [ 0 ] = (
real32_T ) ( localP -> P_48 * localB -> kqm3jkrmki_bhxxfovxdy [ 0 ] ) * (
real32_T ) lq42vmb0rf * ( real32_T ) hjdzwdsemb ; localB -> hospkear0q [ 1 ]
= ( real32_T ) ( localP -> P_48 * localB -> kqm3jkrmki_bhxxfovxdy [ 1 ] ) * (
real32_T ) lq42vmb0rf * ( real32_T ) hjdzwdsemb ; ouc20dcf2l = frxdsihp2w +
localP -> P_162 ; if ( ouc20dcf2l > localP -> P_31 ) { localB -> e54ajko4cc =
localP -> P_163 ; } else { localB -> e54ajko4cc = ouc20dcf2l ; } localB ->
hweri54hre_guugdwf2m3 [ 0 ] = localB -> ogtayargxh_bsqwvugooi [ 0 ] ; localB
-> hweri54hre_guugdwf2m3 [ 1 ] = localB -> ogtayargxh_bsqwvugooi [ 1 ] ;
localB -> oifirjcnm5_idx_0 = localP -> P_144 [ 0 ] * localB ->
hweri54hre_guugdwf2m3 [ 0 ] + localP -> P_144 [ 2 ] * localB ->
hweri54hre_guugdwf2m3 [ 1 ] ; localB -> e10024skqk_ldqodwenvz = localP ->
P_144 [ 1 ] * localB -> hweri54hre_guugdwf2m3 [ 0 ] + localP -> P_144 [ 3 ] *
localB -> hweri54hre_guugdwf2m3 [ 1 ] ; localB -> ogtayargxh_bsqwvugooi [ 0 ]
= localB -> hospkear0q [ 0 ] ; localB -> ogtayargxh_bsqwvugooi [ 1 ] = localB
-> hospkear0q [ 1 ] ; localB -> ddif4goqom_nuebgmauvi [ 0 ] = localP -> P_145
[ 0 ] * localB -> hospkear0q [ 0 ] + localP -> P_145 [ 2 ] * localB ->
hospkear0q [ 1 ] ; localB -> ptnwsicd12_bjbgfqrolh = localP -> P_145 [ 1 ] *
localB -> hospkear0q [ 0 ] + localP -> P_145 [ 3 ] * localB -> hospkear0q [ 1
] ; baswp2tp1r = dk05t4kqcv ; if ( baswp2tp1r ) { if ( ! localDW ->
bgpppixzwr ) { if ( rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart (
accn4cnket ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket ->
_mdlRefSfcnS ) ; } localDW -> bgpppixzwr = true ; } localB ->
cfkgwlp0pd_idx_1 -= ( localP -> P_146 [ 0 ] * localB -> hweri54hre_guugdwf2m3
[ 0 ] + localP -> P_146 [ 2 ] * localB -> hweri54hre_guugdwf2m3 [ 1 ] ) + (
localP -> P_147 [ 0 ] * localB -> ogtayargxh_bsqwvugooi [ 0 ] + localP ->
P_147 [ 2 ] * localB -> ogtayargxh_bsqwvugooi [ 1 ] ) ; localB ->
kfl24lczp1_idx_1 -= ( localP -> P_146 [ 1 ] * localB -> hweri54hre_guugdwf2m3
[ 0 ] + localP -> P_146 [ 3 ] * localB -> hweri54hre_guugdwf2m3 [ 1 ] ) + (
localP -> P_147 [ 1 ] * localB -> ogtayargxh_bsqwvugooi [ 0 ] + localP ->
P_147 [ 3 ] * localB -> ogtayargxh_bsqwvugooi [ 1 ] ) ; localB -> bjbzr2pzjd
[ 0 ] = 0.0F ; localB -> bjbzr2pzjd [ 0 ] += localB -> l4a4q4stof [ 0 ] *
localB -> cfkgwlp0pd_idx_1 ; localB -> bjbzr2pzjd [ 0 ] += localB ->
l4a4q4stof [ 2 ] * localB -> kfl24lczp1_idx_1 ; localB -> bjbzr2pzjd [ 1 ] =
0.0F ; localB -> bjbzr2pzjd [ 1 ] += localB -> l4a4q4stof [ 1 ] * localB ->
cfkgwlp0pd_idx_1 ; localB -> bjbzr2pzjd [ 1 ] += localB -> l4a4q4stof [ 3 ] *
localB -> kfl24lczp1_idx_1 ; srUpdateBC ( localDW -> hihnlferdi ) ; } else {
if ( localDW -> bgpppixzwr ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; localB -> bjbzr2pzjd [ 0 ] = localP -> P_89 ;
localB -> bjbzr2pzjd [ 1 ] = localP -> P_89 ; localDW -> bgpppixzwr = false ;
} } localB -> gfns3kgfjw [ 0 ] = ( localB -> ddif4goqom_nuebgmauvi [ 0 ] +
localB -> oifirjcnm5_idx_0 ) + localB -> bjbzr2pzjd [ 0 ] ; localB ->
gfns3kgfjw [ 1 ] = ( localB -> ptnwsicd12_bjbgfqrolh + localB ->
e10024skqk_ldqodwenvz ) + localB -> bjbzr2pzjd [ 1 ] ; muSingleScalarSinCos (
localB -> arfzeh3qs4 [ 0 ] , & localB -> e10024skqk_ldqodwenvz , &
msbposu0ee_idx_0 ) ; muSingleScalarSinCos ( localB -> arfzeh3qs4 [ 1 ] , &
owcalsb2dq_idx_1 , & msbposu0ee_idx_1 ) ; muSingleScalarSinCos ( localB ->
arfzeh3qs4 [ 2 ] , & owcalsb2dq_idx_2 , & msbposu0ee_idx_2 ) ; localB ->
g155hum4of_cl54gopm0x [ 0 ] = msbposu0ee_idx_1 * msbposu0ee_idx_0 ; localB ->
bbe5mjwk1f_lxo5edjg3c = owcalsb2dq_idx_2 * owcalsb2dq_idx_1 ; localB ->
g155hum4of_cl54gopm0x [ 1 ] = localB -> bbe5mjwk1f_lxo5edjg3c *
msbposu0ee_idx_0 - msbposu0ee_idx_2 * localB -> e10024skqk_ldqodwenvz ;
localB -> cgkzo2biyi_owjr1h1vqy = msbposu0ee_idx_2 * owcalsb2dq_idx_1 ;
localB -> g155hum4of_cl54gopm0x [ 2 ] = localB -> cgkzo2biyi_owjr1h1vqy *
msbposu0ee_idx_0 + owcalsb2dq_idx_2 * localB -> e10024skqk_ldqodwenvz ;
localB -> g155hum4of_cl54gopm0x [ 3 ] = msbposu0ee_idx_1 * localB ->
e10024skqk_ldqodwenvz ; localB -> g155hum4of_cl54gopm0x [ 4 ] = localB ->
bbe5mjwk1f_lxo5edjg3c * localB -> e10024skqk_ldqodwenvz + msbposu0ee_idx_2 *
msbposu0ee_idx_0 ; localB -> g155hum4of_cl54gopm0x [ 5 ] = localB ->
cgkzo2biyi_owjr1h1vqy * localB -> e10024skqk_ldqodwenvz - owcalsb2dq_idx_2 *
msbposu0ee_idx_0 ; localB -> g155hum4of_cl54gopm0x [ 6 ] = - owcalsb2dq_idx_1
; localB -> g155hum4of_cl54gopm0x [ 7 ] = owcalsb2dq_idx_2 * msbposu0ee_idx_1
; localB -> g155hum4of_cl54gopm0x [ 8 ] = msbposu0ee_idx_2 * msbposu0ee_idx_1
; for ( localB -> j = 0 ; localB -> j < 3 ; localB -> j ++ ) { localB ->
k0goapas04 [ localB -> j ] = 0.0F ; localB -> k0goapas04 [ localB -> j ] +=
localB -> g155hum4of_cl54gopm0x [ 3 * localB -> j ] * localB -> ercmqqmldg [
0 ] ; localB -> k0goapas04 [ localB -> j ] += localB -> g155hum4of_cl54gopm0x
[ 3 * localB -> j + 1 ] * localB -> ercmqqmldg [ 1 ] ; localB -> k0goapas04 [
localB -> j ] += localB -> g155hum4of_cl54gopm0x [ 3 * localB -> j + 2 ] * (
real32_T ) localB -> g155hum4of_pbm3vprmfu [ 2 ] ; } } void otjykwnhb3TID2 (
eo4bbte2ey * localB , nu4qaxumex * localP ) { real_T hccvwyva1r ; real32_T
g155hum4of [ 4 ] ; real32_T jj0l53qs21 ; real32_T pg0r1cpcpj [ 4 ] ; real32_T
mweb1mpqa3 [ 4 ] ; memcpy ( & localB -> oifirjcnm5 [ 0 ] , & localP -> P_140
[ 0 ] , sizeof ( real32_T ) << 4U ) ; if ( localP -> P_52 > localP -> P_53 )
{ localB -> dzxv5pp3or = localP -> P_53 ; } else if ( localP -> P_52 < localP
-> P_54 ) { localB -> dzxv5pp3or = localP -> P_54 ; } else { localB ->
dzxv5pp3or = localP -> P_52 ; } localB -> bowrb0xa2c [ 0 ] = localP -> P_59 [
0 ] ; localB -> bowrb0xa2c [ 1 ] = localP -> P_59 [ 1 ] ; localB ->
as22idn2n0 [ 0 ] = localP -> P_60 [ 0 ] ; localB -> as22idn2n0 [ 1 ] = localP
-> P_60 [ 1 ] ; hccvwyva1r = 0.0 ; localB -> oxyk4znhp5_cxarnvbvui [ 0 ] =
localP -> P_58 [ 0 ] ; localB -> oxyk4znhp5_cxarnvbvui [ 1 ] = localP -> P_58
[ 1 ] ; localB -> oxyk4znhp5_cxarnvbvui [ 2 ] = localP -> P_58 [ 2 ] ; localB
-> oxyk4znhp5_cxarnvbvui [ 3 ] = localP -> P_58 [ 3 ] ; g155hum4of [ 0 ] = (
real32_T ) localP -> P_62 [ 0 ] ; g155hum4of [ 1 ] = ( real32_T ) localP ->
P_62 [ 1 ] ; g155hum4of [ 2 ] = ( real32_T ) localP -> P_62 [ 2 ] ;
g155hum4of [ 3 ] = ( real32_T ) localP -> P_62 [ 3 ] ; localB -> ar3nqf0tz4 [
0 ] = localP -> P_68 [ 0 ] ; localB -> ar3nqf0tz4 [ 1 ] = localP -> P_68 [ 1
] ; localB -> l4a4q4stof [ 0 ] = ( real32_T ) localP -> P_72 [ 0 ] ; localB
-> l4a4q4stof [ 1 ] = ( real32_T ) localP -> P_72 [ 1 ] ; localB ->
l4a4q4stof [ 2 ] = ( real32_T ) localP -> P_72 [ 2 ] ; localB -> l4a4q4stof [
3 ] = ( real32_T ) localP -> P_72 [ 3 ] ; localB -> nluqpntbot [ 0 ] = (
real32_T ) localP -> P_73 [ 0 ] ; localB -> nluqpntbot [ 1 ] = ( real32_T )
localP -> P_73 [ 1 ] ; localB -> nluqpntbot [ 2 ] = ( real32_T ) localP ->
P_73 [ 2 ] ; localB -> nluqpntbot [ 3 ] = ( real32_T ) localP -> P_73 [ 3 ] ;
jj0l53qs21 = 0.0F ; pg0r1cpcpj [ 0 ] = ( real32_T ) localP -> P_71 [ 0 ] ;
pg0r1cpcpj [ 1 ] = ( real32_T ) localP -> P_71 [ 1 ] ; pg0r1cpcpj [ 2 ] = (
real32_T ) localP -> P_71 [ 2 ] ; pg0r1cpcpj [ 3 ] = ( real32_T ) localP ->
P_71 [ 3 ] ; mweb1mpqa3 [ 0 ] = localP -> P_148 [ 0 ] ; mweb1mpqa3 [ 1 ] =
localP -> P_148 [ 1 ] ; mweb1mpqa3 [ 2 ] = localP -> P_148 [ 2 ] ; mweb1mpqa3
[ 3 ] = localP -> P_148 [ 3 ] ; localB -> faltdm0cip [ 0 ] = localP -> P_154
[ 0 ] ; localB -> faltdm0cip [ 1 ] = localP -> P_154 [ 1 ] ; } void
lsjhvu4egy ( eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP
) { int32_T memOffset ; int32_T i ; localDW -> ii2o5s5qnf = ( int8_T ) localP
-> P_164 ; localDW -> mck2owxrk2 = localB -> kchcocokra [ 0 ] ; localDW ->
ozjz0fr0k4 = 0U ; localDW -> jxg1zvdttz [ 0 ] += localP -> P_91 * localB ->
k0goapas04 [ 0 ] ; localDW -> etwz51o21c [ 0 ] = localB -> jtobujruvv [ 0 ] ;
localDW -> kgows215bs [ 2 ] = localDW -> kgows215bs [ 1 ] ; localDW ->
jxg1zvdttz [ 1 ] += localP -> P_91 * localB -> k0goapas04 [ 1 ] ; localDW ->
etwz51o21c [ 1 ] = localB -> jtobujruvv [ 1 ] ; localDW -> kgows215bs [ 1 ] =
localDW -> kgows215bs [ 0 ] ; localDW -> kgows215bs [ 0 ] = localDW ->
ik5zcuhoy3 ; localDW -> c4t5e3w5ek [ 2 ] = localDW -> c4t5e3w5ek [ 1 ] ;
localDW -> c4t5e3w5ek [ 1 ] = localDW -> c4t5e3w5ek [ 0 ] ; localDW ->
c4t5e3w5ek [ 0 ] = localDW -> fl2edockfe ; localDW -> lfi3mnae2m [ 0 ] =
localB -> arfzeh3qs4 [ 0 ] ; localDW -> lfi3mnae2m [ 1 ] = localB ->
arfzeh3qs4 [ 1 ] ; localDW -> lfi3mnae2m [ 2 ] = localB -> arfzeh3qs4 [ 2 ] ;
localDW -> liybiw1jbg [ 4 ] = localDW -> liybiw1jbg [ 3 ] ; localDW ->
liybiw1jbg [ 3 ] = localDW -> liybiw1jbg [ 2 ] ; localDW -> liybiw1jbg [ 2 ]
= localDW -> liybiw1jbg [ 1 ] ; localDW -> liybiw1jbg [ 1 ] = localDW ->
liybiw1jbg [ 0 ] ; localDW -> liybiw1jbg [ 0 ] = localDW -> lpva1qajzk ;
localDW -> cfcgwprtdx -- ; if ( localDW -> cfcgwprtdx < 0 ) { localDW ->
cfcgwprtdx = 4 ; } localDW -> nbbc5odoq4 [ localDW -> cfcgwprtdx ] = localB
-> a0mzdmrcod [ 0 ] ; localDW -> nbbc5odoq4 [ localDW -> cfcgwprtdx + 5 ] =
localB -> a0mzdmrcod [ 1 ] ; localDW -> nbbc5odoq4 [ localDW -> cfcgwprtdx +
10 ] = localB -> a0mzdmrcod [ 2 ] ; localDW -> npsllq52wf = localB ->
e54ajko4cc ; localDW -> pvn1aiza5a = 0U ; localDW -> la41hpfp0y = localB ->
b31kr2s5or ; localDW -> k1csdkbypq = localB -> khyoimdert ; for ( i = 0 ; i <
2 ; i ++ ) { localDW -> kzeijhdtif [ i ] = localB -> gfns3kgfjw [ i ] ;
memOffset = i * 5 ; localDW -> heeedoxzle [ memOffset + 4 ] = localDW ->
heeedoxzle [ memOffset + 3 ] ; localDW -> heeedoxzle [ memOffset + 3 ] =
localDW -> heeedoxzle [ memOffset + 2 ] ; localDW -> heeedoxzle [ memOffset +
2 ] = localDW -> heeedoxzle [ memOffset + 1 ] ; localDW -> heeedoxzle [
memOffset + 1 ] = localDW -> heeedoxzle [ memOffset ] ; localDW -> heeedoxzle
[ memOffset ] = localDW -> dhhdwwczx2 [ i ] ; localDW -> gqxdiwstsm [ i ] =
localB -> lg0fd5e53i [ i ] ; localDW -> a3uar2xrsb [ i ] = localB ->
ercmqqmldg [ i ] ; localDW -> lw3rw5s0ye [ i ] = localB -> ercmqqmldg [ i ] ;
localDW -> cosb2ibhn3 [ i ] = localB -> b4pavfef0y [ i ] ; localDW ->
fuo05buemm [ i ] += localP -> P_118 * localB -> gwfdiculxk [ i ] ; if (
localDW -> fuo05buemm [ i ] >= localP -> P_120 ) { localDW -> fuo05buemm [ i
] = localP -> P_120 ; } else { if ( localDW -> fuo05buemm [ i ] <= localP ->
P_121 ) { localDW -> fuo05buemm [ i ] = localP -> P_121 ; } } } localDW ->
i13qoukcsn = localB -> cxewroht2j ; localDW -> ppp4ajc3p1 += localP -> P_125
* localB -> ltavsvi5xw ; if ( localDW -> ppp4ajc3p1 >= localP -> P_127 ) {
localDW -> ppp4ajc3p1 = localP -> P_127 ; } else { if ( localDW -> ppp4ajc3p1
<= localP -> P_128 ) { localDW -> ppp4ajc3p1 = localP -> P_128 ; } } localDW
-> gafzug4yea = ( int8_T ) localB -> lpcb3n1tac ; localDW -> dxm3w2i52x =
localB -> hncby4q12z ; localDW -> bw2ribqmwm = localB -> fmncic4o4f ; }
static boolean_T e4uq03sdk2 ( bjqsgn0csy * obj ) { boolean_T
anyInputSizeChanged ; int16_T inSize [ 8 ] ; int32_T b_k ; boolean_T exitg1 ;
anyInputSizeChanged = false ; inSize [ 0 ] = 4 ; inSize [ 1 ] = 9600 ; for (
b_k = 0 ; b_k < 6 ; b_k ++ ) { inSize [ b_k + 2 ] = 1 ; } b_k = 0 ; exitg1 =
false ; while ( ( ! exitg1 ) && ( b_k < 8 ) ) { if ( obj -> inputVarSize . f1
[ b_k ] != ( uint32_T ) inSize [ b_k ] ) { anyInputSizeChanged = true ; for (
b_k = 0 ; b_k < 8 ; b_k ++ ) { obj -> inputVarSize . f1 [ b_k ] = ( uint32_T
) inSize [ b_k ] ; } exitg1 = true ; } else { b_k ++ ; } } return
anyInputSizeChanged ; } static void llg2sedmqv ( uint8_T varargout_1 [ 19200
] , uint8_T varargout_2 [ 19200 ] , uint8_T varargout_3 [ 19200 ] ) { memset
( & varargout_1 [ 0 ] , 0 , 19200U * sizeof ( uint8_T ) ) ; memset ( &
varargout_2 [ 0 ] , 0 , 19200U * sizeof ( uint8_T ) ) ; memset ( &
varargout_3 [ 0 ] , 0 , 19200U * sizeof ( uint8_T ) ) ; } static void
bljpfp3pka ( bjqsgn0csy * obj , uint8_T varargout_1 [ 19200 ] , uint8_T
varargout_2 [ 19200 ] , uint8_T varargout_3 [ 19200 ] ) { e4uq03sdk2 ( obj )
; llg2sedmqv ( varargout_1 , varargout_2 , varargout_3 ) ; } static void
jpdygqplqj ( const boolean_T x [ 14400 ] , int32_T i_data [ ] , int32_T *
i_size , int32_T j_data [ ] , int32_T * j_size ) { int32_T idx ; int32_T ii ;
int32_T jj ; boolean_T exitg1 ; boolean_T guard1 = false ; idx = 0 ; ii = 1 ;
jj = 1 ; exitg1 = false ; while ( ( ! exitg1 ) && ( jj <= 120 ) ) { guard1 =
false ; if ( x [ ( ( jj - 1 ) * 120 + ii ) - 1 ] ) { idx ++ ; i_data [ idx -
1 ] = ii ; j_data [ idx - 1 ] = jj ; if ( idx >= 14400 ) { exitg1 = true ; }
else { guard1 = true ; } } else { guard1 = true ; } if ( guard1 ) { ii ++ ;
if ( ii > 120 ) { ii = 1 ; jj ++ ; } } } if ( 1 > idx ) { * i_size = 0 ; *
j_size = 0 ; } else { * i_size = idx ; * j_size = idx ; } } static void
ioznlcft0y ( const real_T v_data [ ] , const int32_T * v_size , real_T A_data
[ ] , int32_T A_size [ 2 ] ) { int32_T n ; int32_T k ; n = * v_size - 1 ;
A_size [ 0 ] = * v_size ; A_size [ 1 ] = 2 ; for ( k = 0 ; k <= n ; k ++ ) {
A_data [ k + A_size [ 0 ] ] = 1.0 ; } for ( k = 0 ; k <= n ; k ++ ) { A_data
[ k ] = v_data [ k ] ; } } static real_T lmccdshidz ( int32_T n , const
real_T x_data [ ] , int32_T ix0 ) { real_T y ; int32_T kend ; int32_T k ; y =
0.0 ; if ( n == 1 ) { y = muDoubleScalarAbs ( x_data [ ix0 - 1 ] ) ; } else {
ksm0js2nhsy . scale = 3.3121686421112381E-170 ; kend = ( ix0 + n ) - 1 ; for
( k = ix0 ; k <= kend ; k ++ ) { ksm0js2nhsy . absxk = muDoubleScalarAbs (
x_data [ k - 1 ] ) ; if ( ksm0js2nhsy . absxk > ksm0js2nhsy . scale ) {
ksm0js2nhsy . t = ksm0js2nhsy . scale / ksm0js2nhsy . absxk ; y = y *
ksm0js2nhsy . t * ksm0js2nhsy . t + 1.0 ; ksm0js2nhsy . scale = ksm0js2nhsy .
absxk ; } else { ksm0js2nhsy . t = ksm0js2nhsy . absxk / ksm0js2nhsy . scale
; y += ksm0js2nhsy . t * ksm0js2nhsy . t ; } } y = ksm0js2nhsy . scale *
muDoubleScalarSqrt ( y ) ; } return y ; } static void oawazochv3 ( int32_T n
, real_T x_data [ ] , int32_T ix0 , int32_T iy0 ) { int32_T ix ; int32_T iy ;
real_T temp ; int32_T k ; ix = ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0 ; k < n ;
k ++ ) { temp = x_data [ ix ] ; x_data [ ix ] = x_data [ iy ] ; x_data [ iy ]
= temp ; ix ++ ; iy ++ ; } } static real_T eovsjjemuw ( int32_T n , real_T *
alpha1 , real_T x_data [ ] , int32_T ix0 ) { real_T tau ; int32_T knt ;
int32_T b_k ; int32_T c_k ; tau = 0.0 ; ksm0js2nhsy . xnorm = lmccdshidz ( n
- 1 , x_data , ix0 ) ; if ( ksm0js2nhsy . xnorm != 0.0 ) { ksm0js2nhsy .
xnorm = muDoubleScalarHypot ( * alpha1 , ksm0js2nhsy . xnorm ) ; if ( *
alpha1 >= 0.0 ) { ksm0js2nhsy . xnorm = - ksm0js2nhsy . xnorm ; } if (
muDoubleScalarAbs ( ksm0js2nhsy . xnorm ) < 1.0020841800044864E-292 ) { knt =
- 1 ; b_k = ( ix0 + n ) - 2 ; do { knt ++ ; for ( c_k = ix0 ; c_k <= b_k ;
c_k ++ ) { x_data [ c_k - 1 ] *= 9.9792015476736E+291 ; } ksm0js2nhsy . xnorm
*= 9.9792015476736E+291 ; * alpha1 *= 9.9792015476736E+291 ; } while ( ! (
muDoubleScalarAbs ( ksm0js2nhsy . xnorm ) >= 1.0020841800044864E-292 ) ) ;
ksm0js2nhsy . xnorm = muDoubleScalarHypot ( * alpha1 , lmccdshidz ( n - 1 ,
x_data , ix0 ) ) ; if ( * alpha1 >= 0.0 ) { ksm0js2nhsy . xnorm = -
ksm0js2nhsy . xnorm ; } tau = ( ksm0js2nhsy . xnorm - * alpha1 ) /
ksm0js2nhsy . xnorm ; * alpha1 = 1.0 / ( * alpha1 - ksm0js2nhsy . xnorm ) ;
for ( c_k = ix0 ; c_k <= b_k ; c_k ++ ) { x_data [ c_k - 1 ] *= * alpha1 ; }
for ( b_k = 0 ; b_k <= knt ; b_k ++ ) { ksm0js2nhsy . xnorm *=
1.0020841800044864E-292 ; } * alpha1 = ksm0js2nhsy . xnorm ; } else { tau = (
ksm0js2nhsy . xnorm - * alpha1 ) / ksm0js2nhsy . xnorm ; * alpha1 = 1.0 / ( *
alpha1 - ksm0js2nhsy . xnorm ) ; knt = ( ix0 + n ) - 2 ; for ( b_k = ix0 ;
b_k <= knt ; b_k ++ ) { x_data [ b_k - 1 ] *= * alpha1 ; } * alpha1 =
ksm0js2nhsy . xnorm ; } } return tau ; } static void nysjuzssuk ( int32_T m ,
int32_T n , const real_T A_data [ ] , int32_T ia0 , int32_T lda , const
real_T x_data [ ] , int32_T ix0 , real_T y [ 2 ] ) { int32_T ix ; int32_T iy
; int32_T iac ; int32_T b ; int32_T ia ; if ( n != 0 ) { y [ 0 ] = 0.0 ; iy =
0 ; iac = ia0 ; while ( ( ( lda > 0 ) && ( iac <= ia0 ) ) || ( ( lda < 0 ) &&
( iac >= ia0 ) ) ) { ix = ix0 ; ksm0js2nhsy . c = 0.0 ; b = ( iac + m ) - 1 ;
for ( ia = iac ; ia <= b ; ia ++ ) { ksm0js2nhsy . c += A_data [ ia - 1 ] *
x_data [ ix - 1 ] ; ix ++ ; } y [ iy ] += ksm0js2nhsy . c ; iy ++ ; iac +=
lda ; } } } static int32_T p2mqlyjwiy ( int32_T m , int32_T n , const real_T
A_data [ ] , int32_T ia0 ) { int32_T j ; int32_T ia ; int32_T exitg1 ;
boolean_T exitg2 ; j = n ; exitg2 = false ; while ( ( ! exitg2 ) && ( j > 0 )
) { ia = ia0 ; do { exitg1 = 0 ; if ( ia <= ( ia0 + m ) - 1 ) { if ( A_data [
ia - 1 ] != 0.0 ) { exitg1 = 1 ; } else { ia ++ ; } } else { j = 0 ; exitg1 =
2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ; } }
return j ; } static void hjfwfcabhz ( int32_T m , int32_T n , real_T alpha1 ,
int32_T ix0 , const real_T y [ 2 ] , real_T A_data [ ] , int32_T ia0 ,
int32_T lda ) { int32_T jA ; int32_T jy ; int32_T ix ; int32_T j ; int32_T b
; int32_T ijA ; if ( ! ( alpha1 == 0.0 ) ) { jA = ia0 - 1 ; jy = 0 ; for ( j
= 0 ; j < n ; j ++ ) { if ( y [ jy ] != 0.0 ) { ksm0js2nhsy . temp = y [ jy ]
* alpha1 ; ix = ix0 ; b = m + jA ; for ( ijA = jA ; ijA < b ; ijA ++ ) {
A_data [ ijA ] += A_data [ ix - 1 ] * ksm0js2nhsy . temp ; ix ++ ; } } jy ++
; jA += lda ; } } } static void b0ek5tf22p ( int32_T m , int32_T n , int32_T
iv0 , real_T tau , real_T C_data [ ] , int32_T ic0 , int32_T ldc , real_T
work [ 2 ] ) { int32_T lastv ; int32_T lastc ; if ( tau != 0.0 ) { lastv = m
; lastc = iv0 + m ; while ( ( lastv > 0 ) && ( C_data [ lastc - 2 ] == 0.0 )
) { lastv -- ; lastc -- ; } lastc = p2mqlyjwiy ( lastv , n , C_data , ic0 ) ;
} else { lastv = 0 ; lastc = 0 ; } if ( lastv > 0 ) { nysjuzssuk ( lastv ,
lastc , C_data , ic0 , ldc , C_data , iv0 , work ) ; hjfwfcabhz ( lastv ,
lastc , - tau , iv0 , work , C_data , ic0 , ldc ) ; } } static void
p31g0fe2wh ( real_T A_data [ ] , const int32_T A_size [ 2 ] , int32_T m ,
real_T tau_data [ ] , int32_T jpvt [ 2 ] ) { int32_T ii ; int32_T pvt ;
int32_T itemp ; ksm0js2nhsy . work [ 0 ] = 0.0 ; ksm0js2nhsy . b_atmp =
lmccdshidz ( m , A_data , 1 ) ; ksm0js2nhsy . vn2 [ 0 ] = ksm0js2nhsy .
b_atmp ; ksm0js2nhsy . vn1 [ 0 ] = ksm0js2nhsy . b_atmp ; ksm0js2nhsy . work
[ 1 ] = 0.0 ; ksm0js2nhsy . b_atmp = lmccdshidz ( m , A_data , A_size [ 0 ] +
1 ) ; ksm0js2nhsy . vn2 [ 1 ] = ksm0js2nhsy . b_atmp ; ksm0js2nhsy . vn1 [ 1
] = ksm0js2nhsy . b_atmp ; pvt = ixamax_7mCbsXvX ( 2 , ksm0js2nhsy . vn1 , 1
) - 1 ; if ( pvt + 1 != 1 ) { oawazochv3 ( m , A_data , pvt * A_size [ 0 ] +
1 , 1 ) ; itemp = jpvt [ pvt ] ; jpvt [ pvt ] = jpvt [ 0 ] ; jpvt [ 0 ] =
itemp ; ksm0js2nhsy . vn1 [ pvt ] = ksm0js2nhsy . vn1 [ 0 ] ; ksm0js2nhsy .
vn2 [ pvt ] = ksm0js2nhsy . vn2 [ 0 ] ; } ksm0js2nhsy . b_atmp = A_data [ 0 ]
; tau_data [ 0 ] = eovsjjemuw ( m , & ksm0js2nhsy . b_atmp , A_data , 2 ) ;
A_data [ 0 ] = ksm0js2nhsy . b_atmp ; ksm0js2nhsy . b_atmp = A_data [ 0 ] ;
A_data [ 0 ] = 1.0 ; b0ek5tf22p ( m , 1 , 1 , tau_data [ 0 ] , A_data ,
A_size [ 0 ] + 1 , A_size [ 0 ] , ksm0js2nhsy . work ) ; A_data [ 0 ] =
ksm0js2nhsy . b_atmp ; if ( ksm0js2nhsy . vn1 [ 1 ] != 0.0 ) { ksm0js2nhsy .
b_atmp = muDoubleScalarAbs ( A_data [ A_size [ 0 ] ] ) / ksm0js2nhsy . vn1 [
1 ] ; ksm0js2nhsy . b_atmp = 1.0 - ksm0js2nhsy . b_atmp * ksm0js2nhsy .
b_atmp ; if ( ksm0js2nhsy . b_atmp < 0.0 ) { ksm0js2nhsy . b_atmp = 0.0 ; }
ksm0js2nhsy . temp2 = ksm0js2nhsy . vn1 [ 1 ] / ksm0js2nhsy . vn2 [ 1 ] ;
ksm0js2nhsy . temp2 = ksm0js2nhsy . temp2 * ksm0js2nhsy . temp2 * ksm0js2nhsy
. b_atmp ; if ( ksm0js2nhsy . temp2 <= 1.4901161193847656E-8 ) { ksm0js2nhsy
. vn1 [ 1 ] = lmccdshidz ( m - 1 , A_data , A_size [ 0 ] + 2 ) ; } else {
ksm0js2nhsy . vn1 [ 1 ] *= muDoubleScalarSqrt ( ksm0js2nhsy . b_atmp ) ; } }
ii = A_size [ 0 ] + 1 ; pvt = ixamax_7mCbsXvX ( 1 , ksm0js2nhsy . vn1 , 2 ) ;
if ( pvt + 1 != 2 ) { oawazochv3 ( m , A_data , pvt * A_size [ 0 ] + 1 ,
A_size [ 0 ] + 1 ) ; itemp = jpvt [ pvt ] ; jpvt [ pvt ] = jpvt [ 1 ] ; jpvt
[ 1 ] = itemp ; } ksm0js2nhsy . b_atmp = A_data [ ii ] ; tau_data [ 1 ] =
eovsjjemuw ( m - 1 , & ksm0js2nhsy . b_atmp , A_data , ii + 2 ) ; A_data [ ii
] = ksm0js2nhsy . b_atmp ; } static void oqf0u1okww ( real_T A_data [ ] ,
int32_T A_size [ 2 ] , real_T tau_data [ ] , int32_T * tau_size , int32_T
jpvt [ 2 ] ) { int32_T loop_ub ; int32_T i ; jpvt [ 0 ] = 1 ; jpvt [ 1 ] = 2
; ksm0js2nhsy . b_A_size_cv5hdgrwft [ 0 ] = A_size [ 0 ] ; ksm0js2nhsy .
b_A_size_cv5hdgrwft [ 1 ] = 2 ; loop_ub = A_size [ 0 ] * A_size [ 1 ] - 1 ;
if ( 0 <= loop_ub ) { memcpy ( & ksm0js2nhsy . b_A_data_mbvzarwird [ 0 ] , &
A_data [ 0 ] , ( loop_ub + 1 ) * sizeof ( real_T ) ) ; } * tau_size = 2 ;
tau_data [ 0 ] = 0.0 ; tau_data [ 1 ] = 0.0 ; p31g0fe2wh ( ksm0js2nhsy .
b_A_data_mbvzarwird , ksm0js2nhsy . b_A_size_cv5hdgrwft , A_size [ 0 ] ,
tau_data , jpvt ) ; A_size [ 0 ] = ksm0js2nhsy . b_A_size_cv5hdgrwft [ 0 ] ;
A_size [ 1 ] = 2 ; loop_ub = ksm0js2nhsy . b_A_size_cv5hdgrwft [ 0 ] ; if ( 0
<= loop_ub - 1 ) { memcpy ( & A_data [ 0 ] , & ksm0js2nhsy .
b_A_data_mbvzarwird [ 0 ] , loop_ub * sizeof ( real_T ) ) ; } loop_ub =
ksm0js2nhsy . b_A_size_cv5hdgrwft [ 0 ] ; for ( i = 0 ; i < loop_ub ; i ++ )
{ A_data [ i + A_size [ 0 ] ] = ksm0js2nhsy . b_A_data_mbvzarwird [ i +
ksm0js2nhsy . b_A_size_cv5hdgrwft [ 0 ] ] ; } } static int32_T cawjjk5eqj (
const real_T A_data [ ] , const int32_T A_size [ 2 ] ) { int32_T r ; real_T
tol ; r = 0 ; tol = 2.2204460492503131E-15 * ( real_T ) A_size [ 0 ] *
muDoubleScalarAbs ( A_data [ 0 ] ) ; while ( ( r < 2 ) && ( ! (
muDoubleScalarAbs ( A_data [ A_size [ 0 ] * r + r ] ) <= tol ) ) ) { r ++ ; }
return r ; } static void ovuir0epqd ( const real_T A_data [ ] , const int32_T
A_size [ 2 ] , const real_T tau_data [ ] , const int32_T jpvt [ 2 ] , real_T
B_data [ ] , real_T Y [ 2 ] ) { int32_T m ; real_T wj ; int32_T c_i ; m =
A_size [ 0 ] ; Y [ 0 ] = 0.0 ; if ( tau_data [ 0 ] != 0.0 ) { wj = B_data [ 0
] ; for ( c_i = 1 ; c_i < m ; c_i ++ ) { wj += A_data [ c_i ] * B_data [ c_i
] ; } wj *= tau_data [ 0 ] ; if ( wj != 0.0 ) { B_data [ 0 ] -= wj ; for (
c_i = 1 ; c_i < m ; c_i ++ ) { B_data [ c_i ] -= A_data [ c_i ] * wj ; } } }
Y [ 1 ] = 0.0 ; if ( tau_data [ 1 ] != 0.0 ) { wj = B_data [ 1 ] ; for ( c_i
= 2 ; c_i < m ; c_i ++ ) { wj += A_data [ c_i + A_size [ 0 ] ] * B_data [ c_i
] ; } wj *= tau_data [ 1 ] ; if ( wj != 0.0 ) { B_data [ 1 ] -= wj ; for (
c_i = 2 ; c_i < m ; c_i ++ ) { B_data [ c_i ] -= A_data [ c_i + A_size [ 0 ]
] * wj ; } } } Y [ jpvt [ 0 ] - 1 ] = B_data [ 0 ] ; Y [ jpvt [ 1 ] - 1 ] =
B_data [ 1 ] ; Y [ jpvt [ 1 ] - 1 ] /= A_data [ A_size [ 0 ] + 1 ] ; Y [ jpvt
[ 0 ] - 1 ] -= Y [ jpvt [ 1 ] - 1 ] * A_data [ A_size [ 0 ] ] ; Y [ jpvt [ 0
] - 1 ] /= A_data [ 0 ] ; } static void kmwvchfaeb ( const real_T A_data [ ]
, const int32_T A_size [ 2 ] , const real_T B_data [ ] , const int32_T *
B_size , real_T Y [ 2 ] , int32_T * rankR ) { int32_T loop_ub ; ksm0js2nhsy .
b_A_size [ 0 ] = A_size [ 0 ] ; ksm0js2nhsy . b_A_size [ 1 ] = 2 ; loop_ub =
A_size [ 0 ] * A_size [ 1 ] - 1 ; if ( 0 <= loop_ub ) { memcpy ( &
ksm0js2nhsy . b_A_data [ 0 ] , & A_data [ 0 ] , ( loop_ub + 1 ) * sizeof (
real_T ) ) ; } oqf0u1okww ( ksm0js2nhsy . b_A_data , ksm0js2nhsy . b_A_size ,
ksm0js2nhsy . tau_data , & loop_ub , ksm0js2nhsy . jpvt ) ; * rankR =
cawjjk5eqj ( ksm0js2nhsy . b_A_data , ksm0js2nhsy . b_A_size ) ; if ( 0 <= *
B_size - 1 ) { memcpy ( & ksm0js2nhsy . B_data [ 0 ] , & B_data [ 0 ] , *
B_size * sizeof ( real_T ) ) ; } ovuir0epqd ( ksm0js2nhsy . b_A_data ,
ksm0js2nhsy . b_A_size , ksm0js2nhsy . tau_data , ksm0js2nhsy . jpvt ,
ksm0js2nhsy . B_data , Y ) ; } static void nspv3ss1iw ( const real_T x_data [
] , const int32_T * x_size , const real_T y_data [ ] , const int32_T * y_size
, real_T p [ 2 ] ) { ioznlcft0y ( x_data , x_size , ksm0js2nhsy . tmp_data ,
ksm0js2nhsy . tmp_size ) ; kmwvchfaeb ( ksm0js2nhsy . tmp_data , ksm0js2nhsy
. tmp_size , y_data , y_size , p , & ksm0js2nhsy . rr ) ; } static real_T
l50nv5erdp ( const real_T x_data [ ] , const int32_T * x_size ) { real_T b_y
; int32_T k ; b_y = x_data [ 0 ] ; for ( k = 2 ; k <= * x_size ; k ++ ) { b_y
+= x_data [ k - 1 ] ; } return b_y / ( real_T ) * x_size ; } void ha1ipjbq54
( uint8_T * o3vpgniqky ) { dqykr4eggmg . oq44mkeutp [ 0 ] = b1hr2q0zjh . P_2
[ 0 ] ; dqykr4eggmg . oq44mkeutp [ 1 ] = b1hr2q0zjh . P_2 [ 1 ] ; dqykr4eggmg
. oq44mkeutp [ 2 ] = b1hr2q0zjh . P_2 [ 2 ] ; dqykr4eggmg . oq44mkeutp [ 3 ]
= b1hr2q0zjh . P_2 [ 3 ] ; dqykr4eggmg . fb0f52aifb = 0 ; ic5jb3movn ( &
ksm0js2nhsy . otjykwnhb3s , & dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh .
otjykwnhb3s ) ; dqykr4eggmg . pbsmqozsw0 = b1hr2q0zjh . P_1 ; * o3vpgniqky =
ksm0js2nhsy . otjykwnhb3s . j1mq3vnmtv ; } void gwlyno50ln ( void ) {
dqykr4eggmg . oq44mkeutp [ 0 ] = b1hr2q0zjh . P_2 [ 0 ] ; dqykr4eggmg .
oq44mkeutp [ 1 ] = b1hr2q0zjh . P_2 [ 1 ] ; dqykr4eggmg . oq44mkeutp [ 2 ] =
b1hr2q0zjh . P_2 [ 2 ] ; dqykr4eggmg . oq44mkeutp [ 3 ] = b1hr2q0zjh . P_2 [
3 ] ; dqykr4eggmg . fb0f52aifb = 0 ; bxsrqc204k ( & dqykr4eggmg . otjykwnhb3s
, & b1hr2q0zjh . otjykwnhb3s ) ; dqykr4eggmg . pbsmqozsw0 = b1hr2q0zjh . P_1
; } void bog0frvixl ( void ) { kegjp2lgms ( & ksm0js2nhsy . otjykwnhb3s , &
dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; } void k3yxem35zg
( void ) { int32_T i ; dqykr4eggmg . jjrfotind4 = true ; dqykr4eggmg .
l152eirbdu . isInitialized = 1 ; dqykr4eggmg . l152eirbdu . inputVarSize . f1
[ 0 ] = 4U ; dqykr4eggmg . l152eirbdu . inputVarSize . f1 [ 1 ] = 9600U ; for
( i = 0 ; i < 6 ; i ++ ) { dqykr4eggmg . l152eirbdu . inputVarSize . f1 [ i +
2 ] = 1U ; } } void flightControlSystemTID0 ( const CommandBus * iarztl0jur ,
const SensorsBus * pxdb2gu5va , real32_T pikqq4svts [ 4 ] , uint8_T *
o3vpgniqky ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm ) ;
ksm0js2nhsy . i1 = dqykr4eggmg . fb0f52aifb << 2 ; ksm0js2nhsy .
ewpbovq5gh_pbm3vprmfu [ 0 ] = dqykr4eggmg . oq44mkeutp [ ksm0js2nhsy . i1 ] ;
ksm0js2nhsy . ewpbovq5gh_pbm3vprmfu [ 1 ] = dqykr4eggmg . oq44mkeutp [
ksm0js2nhsy . i1 + 1 ] ; ksm0js2nhsy . ewpbovq5gh_pbm3vprmfu [ 2 ] =
dqykr4eggmg . oq44mkeutp [ ksm0js2nhsy . i1 + 2 ] ; ksm0js2nhsy .
ewpbovq5gh_pbm3vprmfu [ 3 ] = dqykr4eggmg . oq44mkeutp [ ksm0js2nhsy . i1 + 3
] ; otjykwnhb3 ( accn4cnket , iarztl0jur , pxdb2gu5va , ksm0js2nhsy .
ewpbovq5gh_pbm3vprmfu , & ksm0js2nhsy . otjykwnhb3s , & dqykr4eggmg .
otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; pikqq4svts [ 0 ] = ksm0js2nhsy .
otjykwnhb3s . fpldlpy5uu [ 0 ] ; pikqq4svts [ 1 ] = ksm0js2nhsy . otjykwnhb3s
. fpldlpy5uu [ 1 ] ; pikqq4svts [ 2 ] = ksm0js2nhsy . otjykwnhb3s .
fpldlpy5uu [ 2 ] ; pikqq4svts [ 3 ] = ksm0js2nhsy . otjykwnhb3s . fpldlpy5uu
[ 3 ] ; * o3vpgniqky = ksm0js2nhsy . otjykwnhb3s . j1mq3vnmtv ; } void
flightControlSystemTID1 ( void ) { uint8_T threshold ; bljpfp3pka ( &
dqykr4eggmg . l152eirbdu , ksm0js2nhsy . ozkwgqqkwi_cl54gopm0x , ksm0js2nhsy
. b_varargout_2 , ksm0js2nhsy . b_varargout_3 ) ; for ( ksm0js2nhsy .
idxMaxVal = 0 ; ksm0js2nhsy . idxMaxVal < 19200 ; ksm0js2nhsy . idxMaxVal ++
) { threshold = ( uint8_T ) ( ( ( ( ( ( uint32_T ) b1hr2q0zjh . P_5 *
ksm0js2nhsy . ozkwgqqkwi_cl54gopm0x [ ksm0js2nhsy . idxMaxVal ] ) << 2 ) + (
( ( uint32_T ) b1hr2q0zjh . P_4 * ksm0js2nhsy . b_varargout_2 [ ksm0js2nhsy .
idxMaxVal ] ) << 3 ) ) + ( uint32_T ) b1hr2q0zjh . P_3 * ksm0js2nhsy .
b_varargout_3 [ ksm0js2nhsy . idxMaxVal ] ) >> 11 ) ; if ( threshold >
b1hr2q0zjh . P_6 ) { threshold = b1hr2q0zjh . P_6 ; } else { if ( threshold <
b1hr2q0zjh . P_7 ) { threshold = b1hr2q0zjh . P_7 ; } } ksm0js2nhsy .
ozkwgqqkwi_cl54gopm0x [ ksm0js2nhsy . idxMaxVal ] = threshold ; } memset ( &
dqykr4eggmg . drhqrzyuri [ 0 ] , 0 , sizeof ( int32_T ) << 8U ) ; for (
ksm0js2nhsy . i_g1smspu5ke = 0 ; ksm0js2nhsy . i_g1smspu5ke < 19200 ;
ksm0js2nhsy . i_g1smspu5ke ++ ) { dqykr4eggmg . drhqrzyuri [ ksm0js2nhsy .
ozkwgqqkwi_cl54gopm0x [ ksm0js2nhsy . i_g1smspu5ke ] ] ++ ; } for (
ksm0js2nhsy . i_g1smspu5ke = 0 ; ksm0js2nhsy . i_g1smspu5ke < 256 ;
ksm0js2nhsy . i_g1smspu5ke ++ ) { ksm0js2nhsy . i = 458129845L * dqykr4eggmg
. drhqrzyuri [ ksm0js2nhsy . i_g1smspu5ke ] ; dqykr4eggmg . lihbmdiebu [
ksm0js2nhsy . i_g1smspu5ke ] = ( int32_T ) ( ( ( ( ksm0js2nhsy . i & 4096UL )
!= 0UL ) && ( ( ( ksm0js2nhsy . i & 4095UL ) != 0UL ) || ( ksm0js2nhsy . i >
0L ) ) ) + ( ksm0js2nhsy . i >> 13 ) ) ; } dqykr4eggmg . c5rl2ioahw [ 0 ] = (
( ( dqykr4eggmg . lihbmdiebu [ 0 ] & 128U ) != 0U ) && ( ( ( dqykr4eggmg .
lihbmdiebu [ 0 ] & 127U ) != 0U ) || ( dqykr4eggmg . lihbmdiebu [ 0 ] > 0 ) )
) + ( dqykr4eggmg . lihbmdiebu [ 0 ] >> 8 ) ; for ( ksm0js2nhsy .
i_g1smspu5ke = 0 ; ksm0js2nhsy . i_g1smspu5ke < 255 ; ksm0js2nhsy .
i_g1smspu5ke ++ ) { dqykr4eggmg . c5rl2ioahw [ ksm0js2nhsy . i_g1smspu5ke + 1
] = ( ksm0js2nhsy . i_g1smspu5ke + 2 ) << 22 ; ksm0js2nhsy . i = ( int64_T )
dqykr4eggmg . c5rl2ioahw [ ksm0js2nhsy . i_g1smspu5ke + 1 ] * dqykr4eggmg .
lihbmdiebu [ ksm0js2nhsy . i_g1smspu5ke + 1 ] ; dqykr4eggmg . c5rl2ioahw [
ksm0js2nhsy . i_g1smspu5ke + 1 ] = ( int32_T ) ( ( ( ( ksm0js2nhsy . i &
536870912UL ) != 0UL ) && ( ( ( ksm0js2nhsy . i & 536870911UL ) != 0UL ) || (
ksm0js2nhsy . i > 0L ) ) ) + ( ksm0js2nhsy . i >> 30 ) ) ; dqykr4eggmg .
c5rl2ioahw [ ksm0js2nhsy . i_g1smspu5ke + 1 ] += dqykr4eggmg . c5rl2ioahw [
ksm0js2nhsy . i_g1smspu5ke ] ; } for ( ksm0js2nhsy . i_g1smspu5ke = 0 ;
ksm0js2nhsy . i_g1smspu5ke < 254 ; ksm0js2nhsy . i_g1smspu5ke ++ ) {
dqykr4eggmg . lihbmdiebu [ ksm0js2nhsy . i_g1smspu5ke + 1 ] += dqykr4eggmg .
lihbmdiebu [ ksm0js2nhsy . i_g1smspu5ke ] ; } ksm0js2nhsy . idxMaxVal = 0 ;
ksm0js2nhsy . maxVal = 0 ; for ( ksm0js2nhsy . i_g1smspu5ke = 0 ; ksm0js2nhsy
. i_g1smspu5ke < 255 ; ksm0js2nhsy . i_g1smspu5ke ++ ) { ksm0js2nhsy . i = (
int64_T ) dqykr4eggmg . lihbmdiebu [ ksm0js2nhsy . i_g1smspu5ke ] *
dqykr4eggmg . c5rl2ioahw [ 255 ] ; ksm0js2nhsy . muA2P3 = ( int32_T ) ( ( ( (
ksm0js2nhsy . i & 536870912UL ) != 0UL ) && ( ( ( ksm0js2nhsy . i &
536870911UL ) != 0UL ) || ( ksm0js2nhsy . i > 0L ) ) ) + ( ksm0js2nhsy . i >>
30 ) ) - dqykr4eggmg . c5rl2ioahw [ ksm0js2nhsy . i_g1smspu5ke ] ;
ksm0js2nhsy . i = ( int64_T ) ( 1073741824 - dqykr4eggmg . lihbmdiebu [
ksm0js2nhsy . i_g1smspu5ke ] ) * dqykr4eggmg . lihbmdiebu [ ksm0js2nhsy .
i_g1smspu5ke ] ; ksm0js2nhsy . omegaTemp = ( int32_T ) ( ( ( ( ksm0js2nhsy .
i & 536870912UL ) != 0UL ) && ( ( ( ksm0js2nhsy . i & 536870911UL ) != 0UL )
|| ( ksm0js2nhsy . i > 0L ) ) ) + ( ksm0js2nhsy . i >> 30 ) ) ; if (
ksm0js2nhsy . omegaTemp == 0 ) { ksm0js2nhsy . muA2P3 = 0 ; } else {
ksm0js2nhsy . i = ( int64_T ) ksm0js2nhsy . muA2P3 * ksm0js2nhsy . muA2P3 ;
ksm0js2nhsy . muA2P3 = div_s32s64_round ( ( int64_T ) ( ( int32_T ) ( ( ( (
ksm0js2nhsy . i & 536870912UL ) != 0UL ) && ( ( ( ksm0js2nhsy . i &
536870911UL ) != 0UL ) || ( ksm0js2nhsy . i > 0L ) ) ) + ( ksm0js2nhsy . i >>
30 ) ) << 2 ) << 30 , ksm0js2nhsy . omegaTemp ) ; } if ( ksm0js2nhsy . muA2P3
> ksm0js2nhsy . maxVal ) { ksm0js2nhsy . maxVal = ksm0js2nhsy . muA2P3 ;
ksm0js2nhsy . idxMaxVal = ksm0js2nhsy . i_g1smspu5ke ; } } ksm0js2nhsy . u =
( uint64_T ) ( ( uint32_T ) ( ( uint8_T ) 255U ) << 15 ) * ( uint32_T ) (
4210752 * ksm0js2nhsy . idxMaxVal ) ; ksm0js2nhsy . idxMaxVal = ( int32_T ) (
( ( ksm0js2nhsy . u & 536870912UL ) != 0UL ) + ( ksm0js2nhsy . u >> 30 ) ) ;
threshold = ( uint8_T ) ( ( ( ksm0js2nhsy . idxMaxVal & 16384U ) != 0U ) + (
ksm0js2nhsy . idxMaxVal >> 15 ) ) ; for ( ksm0js2nhsy . i_g1smspu5ke = 0 ;
ksm0js2nhsy . i_g1smspu5ke < 19200 ; ksm0js2nhsy . i_g1smspu5ke ++ ) {
ksm0js2nhsy . owgqjqpndy_kkiq3xxxve [ ksm0js2nhsy . i_g1smspu5ke ] = (
ksm0js2nhsy . ozkwgqqkwi_cl54gopm0x [ ksm0js2nhsy . i_g1smspu5ke ] >
threshold ) ; } for ( ksm0js2nhsy . idxMaxVal = 0 ; ksm0js2nhsy . idxMaxVal <
120 ; ksm0js2nhsy . idxMaxVal ++ ) { memcpy ( & ksm0js2nhsy .
pkmbyvenx5_cxarnvbvui [ ksm0js2nhsy . idxMaxVal * 120 ] , & ksm0js2nhsy .
owgqjqpndy_kkiq3xxxve [ ksm0js2nhsy . idxMaxVal * 120 + 2400 ] , 120U *
sizeof ( boolean_T ) ) ; } for ( ksm0js2nhsy . i_g1smspu5ke = 0 ; ksm0js2nhsy
. i_g1smspu5ke < 120 ; ksm0js2nhsy . i_g1smspu5ke ++ ) { ksm0js2nhsy . nc =
0.0 ; ksm0js2nhsy . maxVal = 1 ; for ( ksm0js2nhsy . idxMaxVal = 0 ;
ksm0js2nhsy . idxMaxVal < 120 ; ksm0js2nhsy . idxMaxVal ++ ) { if ( !
ksm0js2nhsy . pkmbyvenx5_cxarnvbvui [ 120 * ksm0js2nhsy . idxMaxVal +
ksm0js2nhsy . i_g1smspu5ke ] ) { if ( ksm0js2nhsy . maxVal == 1 ) {
ksm0js2nhsy . maxVal = ksm0js2nhsy . idxMaxVal + 1 ; } ksm0js2nhsy . nc ++ ;
} } if ( ( ksm0js2nhsy . maxVal > 1 ) && ( ksm0js2nhsy . nc <= 60.0 ) ) { for
( ksm0js2nhsy . idxMaxVal = 0 ; ksm0js2nhsy . idxMaxVal < 120 ; ksm0js2nhsy .
idxMaxVal ++ ) { ksm0js2nhsy . pkmbyvenx5_cxarnvbvui [ ksm0js2nhsy .
i_g1smspu5ke + 120 * ksm0js2nhsy . idxMaxVal ] = true ; } if ( ksm0js2nhsy .
maxVal >= 120 ) { ksm0js2nhsy . pkmbyvenx5_cxarnvbvui [ ksm0js2nhsy .
i_g1smspu5ke + 14280 ] = false ; } else { ksm0js2nhsy . idxMaxVal = ( int32_T
) muDoubleScalarRound ( ksm0js2nhsy . nc / 2.0 ) + ksm0js2nhsy . maxVal ; if
( ksm0js2nhsy . idxMaxVal >= 120 ) { ksm0js2nhsy . pkmbyvenx5_cxarnvbvui [
ksm0js2nhsy . i_g1smspu5ke + 14280 ] = false ; } else { ksm0js2nhsy .
pkmbyvenx5_cxarnvbvui [ ksm0js2nhsy . i_g1smspu5ke + 120 * ( ksm0js2nhsy .
idxMaxVal - 1 ) ] = false ; } } } } for ( ksm0js2nhsy . maxVal = 0 ;
ksm0js2nhsy . maxVal < 120 ; ksm0js2nhsy . maxVal ++ ) { ksm0js2nhsy . nc =
0.0 ; ksm0js2nhsy . i_g1smspu5ke = 1 ; for ( ksm0js2nhsy . idxMaxVal = 0 ;
ksm0js2nhsy . idxMaxVal < 120 ; ksm0js2nhsy . idxMaxVal ++ ) { if ( !
ksm0js2nhsy . pkmbyvenx5_cxarnvbvui [ 120 * ksm0js2nhsy . maxVal +
ksm0js2nhsy . idxMaxVal ] ) { if ( ksm0js2nhsy . i_g1smspu5ke == 1 ) {
ksm0js2nhsy . i_g1smspu5ke = ksm0js2nhsy . idxMaxVal + 1 ; } ksm0js2nhsy . nc
++ ; } } if ( ( ksm0js2nhsy . i_g1smspu5ke > 1 ) && ( ksm0js2nhsy . nc <=
60.0 ) ) { for ( ksm0js2nhsy . idxMaxVal = 0 ; ksm0js2nhsy . idxMaxVal < 120
; ksm0js2nhsy . idxMaxVal ++ ) { ksm0js2nhsy . pkmbyvenx5_cxarnvbvui [
ksm0js2nhsy . idxMaxVal + 120 * ksm0js2nhsy . maxVal ] = true ; } ksm0js2nhsy
. idxMaxVal = ( int32_T ) muDoubleScalarRound ( ksm0js2nhsy . nc / 2.0 ) +
ksm0js2nhsy . i_g1smspu5ke ; if ( ( ksm0js2nhsy . idxMaxVal >= 120 ) || (
ksm0js2nhsy . i_g1smspu5ke >= 120 ) ) { ksm0js2nhsy . pkmbyvenx5_cxarnvbvui [
120 * ksm0js2nhsy . maxVal + 119 ] = false ; } else { ksm0js2nhsy .
pkmbyvenx5_cxarnvbvui [ ( ksm0js2nhsy . idxMaxVal + 120 * ksm0js2nhsy .
maxVal ) - 1 ] = false ; } } } for ( ksm0js2nhsy . idxMaxVal = 0 ;
ksm0js2nhsy . idxMaxVal < 14400 ; ksm0js2nhsy . idxMaxVal ++ ) { ksm0js2nhsy
. pkmbyvenx5_bhxxfovxdy [ ksm0js2nhsy . idxMaxVal ] = ! ksm0js2nhsy .
pkmbyvenx5_cxarnvbvui [ ksm0js2nhsy . idxMaxVal ] ; } jpdygqplqj (
ksm0js2nhsy . pkmbyvenx5_bhxxfovxdy , ksm0js2nhsy . ii_data , & ksm0js2nhsy .
ii_size , ksm0js2nhsy . jj_data , & ksm0js2nhsy . jj_size ) ; ksm0js2nhsy .
x_size = ksm0js2nhsy . jj_size ; ksm0js2nhsy . i_g1smspu5ke = ksm0js2nhsy .
jj_size ; for ( ksm0js2nhsy . idxMaxVal = 0 ; ksm0js2nhsy . idxMaxVal <
ksm0js2nhsy . i_g1smspu5ke ; ksm0js2nhsy . idxMaxVal ++ ) { ksm0js2nhsy .
x_data [ ksm0js2nhsy . idxMaxVal ] = ksm0js2nhsy . jj_data [ ksm0js2nhsy .
idxMaxVal ] ; } ksm0js2nhsy . y_size = ksm0js2nhsy . ii_size ; ksm0js2nhsy .
i_g1smspu5ke = ksm0js2nhsy . ii_size ; for ( ksm0js2nhsy . idxMaxVal = 0 ;
ksm0js2nhsy . idxMaxVal < ksm0js2nhsy . i_g1smspu5ke ; ksm0js2nhsy .
idxMaxVal ++ ) { ksm0js2nhsy . y_data [ ksm0js2nhsy . idxMaxVal ] = 120.0 - (
real_T ) ksm0js2nhsy . ii_data [ ksm0js2nhsy . idxMaxVal ] ; } ksm0js2nhsy .
a3vzwjj3qo_fqdqrf4qbc = 0.0 ; ksm0js2nhsy . k32zllvxsq_g2mlkqadfk = 0.0 ;
ksm0js2nhsy . nc = 1.5707963267948966 ; if ( ( ksm0js2nhsy . jj_size > 2 ) &&
( ksm0js2nhsy . ii_size > 2 ) ) { nspv3ss1iw ( ksm0js2nhsy . x_data , &
ksm0js2nhsy . x_size , ksm0js2nhsy . y_data , & ksm0js2nhsy . y_size ,
ksm0js2nhsy . b ) ; ksm0js2nhsy . nc = ( 2.0 * muDoubleScalarAbs ( l50nv5erdp
( ksm0js2nhsy . x_data , & ksm0js2nhsy . x_size ) ) - 120.0 ) / 120.0 ;
ksm0js2nhsy . xbias = ( 2.0 * muDoubleScalarAbs ( l50nv5erdp ( ksm0js2nhsy .
y_data , & ksm0js2nhsy . y_size ) ) - 120.0 ) / 120.0 ; ksm0js2nhsy . d =
muDoubleScalarAbs ( dqykr4eggmg . pbsmqozsw0 ) ; if ( ( ksm0js2nhsy . d >
0.034906585039886591 ) && ( ksm0js2nhsy . d < 3.1066860685499065 ) ) {
ksm0js2nhsy . a3vzwjj3qo_fqdqrf4qbc = muDoubleScalarCos ( dqykr4eggmg .
pbsmqozsw0 - 1.5707963267948966 ) * ksm0js2nhsy . xbias + muDoubleScalarSin (
dqykr4eggmg . pbsmqozsw0 - 1.5707963267948966 ) * ksm0js2nhsy . nc ; } if ( (
ksm0js2nhsy . d > 1.6057029118347832 ) || ( ksm0js2nhsy . d <
1.53588974175501 ) ) { ksm0js2nhsy . k32zllvxsq_g2mlkqadfk =
muDoubleScalarSin ( dqykr4eggmg . pbsmqozsw0 - 1.5707963267948966 ) * -
ksm0js2nhsy . xbias + muDoubleScalarCos ( dqykr4eggmg . pbsmqozsw0 -
1.5707963267948966 ) * ksm0js2nhsy . nc ; } if ( ksm0js2nhsy . b [ 0 ] > 0.0
) { ksm0js2nhsy . nc = muDoubleScalarAtan ( ksm0js2nhsy . b [ 0 ] ) ; } else
if ( ksm0js2nhsy . b [ 0 ] < 0.0 ) { ksm0js2nhsy . nc = muDoubleScalarAtan (
ksm0js2nhsy . b [ 0 ] ) + 3.1415926535897931 ; } else { ksm0js2nhsy . nc =
dqykr4eggmg . pbsmqozsw0 ; } } if ( ksm0js2nhsy . nc < 0.0 ) { ksm0js2nhsy .
nc += 3.1415926535897931 ; } if ( muDoubleScalarAbs ( dqykr4eggmg .
pbsmqozsw0 - ksm0js2nhsy . nc ) > 2.9845130209103035 ) { ksm0js2nhsy .
kmvh3atckm = dqykr4eggmg . pbsmqozsw0 ; } else { ksm0js2nhsy . kmvh3atckm =
ksm0js2nhsy . nc ; } dqykr4eggmg . oq44mkeutp [ ( dqykr4eggmg . fb0f52aifb ==
0 ) << 2 ] = ksm0js2nhsy . nc ; dqykr4eggmg . oq44mkeutp [ 1 + ( (
dqykr4eggmg . fb0f52aifb == 0 ) << 2 ) ] = ksm0js2nhsy . kmvh3atckm ;
dqykr4eggmg . oq44mkeutp [ 2 + ( ( dqykr4eggmg . fb0f52aifb == 0 ) << 2 ) ] =
ksm0js2nhsy . a3vzwjj3qo_fqdqrf4qbc ; dqykr4eggmg . oq44mkeutp [ 3 + ( (
dqykr4eggmg . fb0f52aifb == 0 ) << 2 ) ] = ksm0js2nhsy .
k32zllvxsq_g2mlkqadfk ; dqykr4eggmg . fb0f52aifb = ( int8_T ) ( dqykr4eggmg .
fb0f52aifb == 0 ) ; } void flightControlSystemTID2 ( void ) { otjykwnhb3TID2
( & ksm0js2nhsy . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; } void
pyvd4pdf3iTID0 ( void ) { lsjhvu4egy ( & ksm0js2nhsy . otjykwnhb3s , &
dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; } void
pyvd4pdf3iTID1 ( void ) { dqykr4eggmg . pbsmqozsw0 = ksm0js2nhsy . kmvh3atckm
; } void pyvd4pdf3iTID2 ( void ) { } void o2f5l50guo ( void ) { ipf5ube4r0 *
const accn4cnket = & ( lhjbdsj2rj . rtm ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( accn4cnket ->
_mdlRefSfcnS , "flightControlSystem" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void f4qzdbbxmw (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; b1hr2q0zjh . otjykwnhb3s . P_37 =
rtMinusInf ; ( void ) memset ( ( void * ) accn4cnket , 0 , sizeof (
ipf5ube4r0 ) ) ; nmtwkzsqud [ 0 ] = mdlref_TID0 ; nmtwkzsqud [ 1 ] =
mdlref_TID1 ; nmtwkzsqud [ 2 ] = mdlref_TID2 ; accn4cnket -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( accn4cnket -> _mdlRefSfcnS , "flightControlSystem" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) & ksm0js2nhsy ) , 0 , sizeof ( ircitwx3zdm ) ) ; { int32_T i ; for ( i = 0
; i < 6 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s . a0mzdmrcod [ i ] = 0.0F ; }
for ( i = 0 ; i < 16 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s . oifirjcnm5 [ i ]
= 0.0F ; } ksm0js2nhsy . kmvh3atckm = 0.0 ; ksm0js2nhsy . otjykwnhb3s .
kkzeiiel2k = 0.0 ; ksm0js2nhsy . otjykwnhb3s . kchcocokra [ 0 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . kchcocokra [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . b31kr2s5or = 0.0 ; ksm0js2nhsy . otjykwnhb3s . khyoimdert = 0.0
; ksm0js2nhsy . otjykwnhb3s . fmncic4o4f = 0.0 ; ksm0js2nhsy . otjykwnhb3s .
c4puh0aj2v [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . c4puh0aj2v [ 1 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . c4puh0aj2v [ 2 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . jtobujruvv [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . jtobujruvv
[ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . dzxv5pp3or = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . bowrb0xa2c [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . bowrb0xa2c
[ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . as22idn2n0 [ 0 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . as22idn2n0 [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . ar3nqf0tz4 [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . ar3nqf0tz4
[ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . c12ls2wszl [ 0 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . c12ls2wszl [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . jnn5lz0per [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . jnn5lz0per
[ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . hrzithqxqj [ 0 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . hrzithqxqj [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . arfzeh3qs4 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
arfzeh3qs4 [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . arfzeh3qs4 [ 2 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . axhgnxrhij [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . axhgnxrhij [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
axhgnxrhij [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . lg0fd5e53i [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . lg0fd5e53i [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . ercmqqmldg [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
ercmqqmldg [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . gwfdiculxk [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . gwfdiculxk [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . b4pavfef0y [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
b4pavfef0y [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ltavsvi5xw = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . fpldlpy5uu [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . fpldlpy5uu [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
fpldlpy5uu [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . fpldlpy5uu [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . hospkear0q [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . hospkear0q [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
gfns3kgfjw [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . gfns3kgfjw [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . k0goapas04 [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . k0goapas04 [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
k0goapas04 [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . l4a4q4stof [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . l4a4q4stof [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . l4a4q4stof [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
l4a4q4stof [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . nluqpntbot [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . nluqpntbot [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . nluqpntbot [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
nluqpntbot [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . faltdm0cip [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . faltdm0cip [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . gnjojvq4cm [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
gnjojvq4cm [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bjbzr2pzjd [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . bjbzr2pzjd [ 1 ] = 0.0F ; } ( void ) memset ( (
void * ) & dqykr4eggmg , 0 , sizeof ( nllkaxiwhzw ) ) ; dqykr4eggmg .
pbsmqozsw0 = 0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { dqykr4eggmg .
oq44mkeutp [ i ] = 0.0 ; } } dqykr4eggmg . otjykwnhb3s . mck2owxrk2 = 0.0 ;
dqykr4eggmg . otjykwnhb3s . etwz51o21c [ 0 ] = 0.0 ; dqykr4eggmg .
otjykwnhb3s . etwz51o21c [ 1 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . c4t5e3w5ek
[ 0 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . c4t5e3w5ek [ 1 ] = 0.0 ;
dqykr4eggmg . otjykwnhb3s . c4t5e3w5ek [ 2 ] = 0.0 ; dqykr4eggmg .
otjykwnhb3s . la41hpfp0y = 0.0 ; dqykr4eggmg . otjykwnhb3s . k1csdkbypq = 0.0
; dqykr4eggmg . otjykwnhb3s . bw2ribqmwm = 0.0 ; dqykr4eggmg . otjykwnhb3s .
fl2edockfe = 0.0 ; dqykr4eggmg . otjykwnhb3s . jxg1zvdttz [ 0 ] = 0.0F ;
dqykr4eggmg . otjykwnhb3s . jxg1zvdttz [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . kgows215bs [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
kgows215bs [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . kgows215bs [ 2 ] = 0.0F
; { int32_T i ; for ( i = 0 ; i < 5 ; i ++ ) { dqykr4eggmg . otjykwnhb3s .
liybiw1jbg [ i ] = 0.0F ; } } { int32_T i ; for ( i = 0 ; i < 15 ; i ++ ) {
dqykr4eggmg . otjykwnhb3s . nbbc5odoq4 [ i ] = 0.0F ; } } dqykr4eggmg .
otjykwnhb3s . kzeijhdtif [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
kzeijhdtif [ 1 ] = 0.0F ; { int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) {
dqykr4eggmg . otjykwnhb3s . heeedoxzle [ i ] = 0.0F ; } } dqykr4eggmg .
otjykwnhb3s . gqxdiwstsm [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
gqxdiwstsm [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . a3uar2xrsb [ 0 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . a3uar2xrsb [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . lw3rw5s0ye [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
lw3rw5s0ye [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . cosb2ibhn3 [ 0 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . cosb2ibhn3 [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . fuo05buemm [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
fuo05buemm [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . ppp4ajc3p1 = 0.0F ;
dqykr4eggmg . otjykwnhb3s . ik5zcuhoy3 = 0.0F ; dqykr4eggmg . otjykwnhb3s .
lfi3mnae2m [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . lfi3mnae2m [ 1 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . lfi3mnae2m [ 2 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . lpva1qajzk = 0.0F ; dqykr4eggmg . otjykwnhb3s . dhhdwwczx2 [ 0
] = 0.0F ; dqykr4eggmg . otjykwnhb3s . dhhdwwczx2 [ 1 ] = 0.0F ;
flightControlSystem_InitializeDataMapInfo ( accn4cnket , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
accn4cnket -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( accn4cnket ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
accn4cnket -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_flightControlSystem_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_flightControlSystem , 151 ) ; * retVal =
1 ; } static void mr_flightControlSystem_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_flightControlSystem_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_flightControlSystem_restoreDataFromMxArray
( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_flightControlSystem_restoreDataFromMxArray ( void
* destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes )
{ memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) ; static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_flightControlSystem_GetDWork ( ) {
static const char * ssDWFieldNames [ 3 ] = { "ksm0js2nhsy" , "dqykr4eggmg" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_flightControlSystem_cacheDataAsMxArray ( ssDW , 0 , 0 ,
& ( ksm0js2nhsy ) , sizeof ( ksm0js2nhsy ) ) ; { static const char *
rtdwDataFieldNames [ 54 ] = { "dqykr4eggmg.lihbmdiebu" ,
"dqykr4eggmg.c5rl2ioahw" , "dqykr4eggmg.drhqrzyuri" ,
"dqykr4eggmg.l152eirbdu" , "dqykr4eggmg.pbsmqozsw0" ,
"dqykr4eggmg.oq44mkeutp" , "dqykr4eggmg.fb0f52aifb" ,
"dqykr4eggmg.jjrfotind4" , "dqykr4eggmg.otjykwnhb3s.mck2owxrk2" ,
"dqykr4eggmg.otjykwnhb3s.etwz51o21c" , "dqykr4eggmg.otjykwnhb3s.c4t5e3w5ek" ,
"dqykr4eggmg.otjykwnhb3s.la41hpfp0y" , "dqykr4eggmg.otjykwnhb3s.k1csdkbypq" ,
"dqykr4eggmg.otjykwnhb3s.bw2ribqmwm" , "dqykr4eggmg.otjykwnhb3s.fl2edockfe" ,
"dqykr4eggmg.otjykwnhb3s.jxg1zvdttz" , "dqykr4eggmg.otjykwnhb3s.kgows215bs" ,
"dqykr4eggmg.otjykwnhb3s.liybiw1jbg" , "dqykr4eggmg.otjykwnhb3s.nbbc5odoq4" ,
"dqykr4eggmg.otjykwnhb3s.kzeijhdtif" , "dqykr4eggmg.otjykwnhb3s.heeedoxzle" ,
"dqykr4eggmg.otjykwnhb3s.gqxdiwstsm" , "dqykr4eggmg.otjykwnhb3s.a3uar2xrsb" ,
"dqykr4eggmg.otjykwnhb3s.lw3rw5s0ye" , "dqykr4eggmg.otjykwnhb3s.cosb2ibhn3" ,
"dqykr4eggmg.otjykwnhb3s.fuo05buemm" , "dqykr4eggmg.otjykwnhb3s.ppp4ajc3p1" ,
"dqykr4eggmg.otjykwnhb3s.cfcgwprtdx" , "dqykr4eggmg.otjykwnhb3s.npsllq52wf" ,
"dqykr4eggmg.otjykwnhb3s.i13qoukcsn" , "dqykr4eggmg.otjykwnhb3s.dxm3w2i52x" ,
"dqykr4eggmg.otjykwnhb3s.ik5zcuhoy3" , "dqykr4eggmg.otjykwnhb3s.lfi3mnae2m" ,
"dqykr4eggmg.otjykwnhb3s.lpva1qajzk" , "dqykr4eggmg.otjykwnhb3s.dhhdwwczx2" ,
"dqykr4eggmg.otjykwnhb3s.ii2o5s5qnf" , "dqykr4eggmg.otjykwnhb3s.gafzug4yea" ,
"dqykr4eggmg.otjykwnhb3s.nuogwfijir" , "dqykr4eggmg.otjykwnhb3s.hihnlferdi" ,
"dqykr4eggmg.otjykwnhb3s.pxamy50saq" , "dqykr4eggmg.otjykwnhb3s.btfjf5acqg" ,
"dqykr4eggmg.otjykwnhb3s.oa1muqt4on" , "dqykr4eggmg.otjykwnhb3s.h0cudiu0ft" ,
"dqykr4eggmg.otjykwnhb3s.ozjz0fr0k4" , "dqykr4eggmg.otjykwnhb3s.pvn1aiza5a" ,
"dqykr4eggmg.otjykwnhb3s.j20mj4ai3a" , "dqykr4eggmg.otjykwnhb3s.bgpppixzwr" ,
"dqykr4eggmg.otjykwnhb3s.cmab1dak24" , "dqykr4eggmg.otjykwnhb3s.jtnjtissuf" ,
"dqykr4eggmg.otjykwnhb3s.ciy1c2o0rv.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.jvbbqhrajh.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.clwiujjdqo.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.acfz1zxm4t.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.ghadbep3bbv.fau3qf03xm" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 54 , rtdwDataFieldNames ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 0 , & (
dqykr4eggmg . lihbmdiebu ) , sizeof ( dqykr4eggmg . lihbmdiebu ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 1 , & (
dqykr4eggmg . c5rl2ioahw ) , sizeof ( dqykr4eggmg . c5rl2ioahw ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 2 , & (
dqykr4eggmg . drhqrzyuri ) , sizeof ( dqykr4eggmg . drhqrzyuri ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 3 , & (
dqykr4eggmg . l152eirbdu ) , sizeof ( dqykr4eggmg . l152eirbdu ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 4 , & (
dqykr4eggmg . pbsmqozsw0 ) , sizeof ( dqykr4eggmg . pbsmqozsw0 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 5 , & (
dqykr4eggmg . oq44mkeutp ) , sizeof ( dqykr4eggmg . oq44mkeutp ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 6 , & (
dqykr4eggmg . fb0f52aifb ) , sizeof ( dqykr4eggmg . fb0f52aifb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 7 , & (
dqykr4eggmg . jjrfotind4 ) , sizeof ( dqykr4eggmg . jjrfotind4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 8 , & (
dqykr4eggmg . otjykwnhb3s . mck2owxrk2 ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. mck2owxrk2 ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
9 , & ( dqykr4eggmg . otjykwnhb3s . etwz51o21c ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . etwz51o21c ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 10 , & ( dqykr4eggmg . otjykwnhb3s . c4t5e3w5ek ) , sizeof (
dqykr4eggmg . otjykwnhb3s . c4t5e3w5ek ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 11 , & (
dqykr4eggmg . otjykwnhb3s . la41hpfp0y ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. la41hpfp0y ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
12 , & ( dqykr4eggmg . otjykwnhb3s . k1csdkbypq ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . k1csdkbypq ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 13 , & ( dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 14 , & (
dqykr4eggmg . otjykwnhb3s . fl2edockfe ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. fl2edockfe ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
15 , & ( dqykr4eggmg . otjykwnhb3s . jxg1zvdttz ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . jxg1zvdttz ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 16 , & ( dqykr4eggmg . otjykwnhb3s . kgows215bs ) , sizeof (
dqykr4eggmg . otjykwnhb3s . kgows215bs ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 17 , & (
dqykr4eggmg . otjykwnhb3s . liybiw1jbg ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. liybiw1jbg ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
18 , & ( dqykr4eggmg . otjykwnhb3s . nbbc5odoq4 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . nbbc5odoq4 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 19 , & ( dqykr4eggmg . otjykwnhb3s . kzeijhdtif ) , sizeof (
dqykr4eggmg . otjykwnhb3s . kzeijhdtif ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 20 , & (
dqykr4eggmg . otjykwnhb3s . heeedoxzle ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. heeedoxzle ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
21 , & ( dqykr4eggmg . otjykwnhb3s . gqxdiwstsm ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . gqxdiwstsm ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 22 , & ( dqykr4eggmg . otjykwnhb3s . a3uar2xrsb ) , sizeof (
dqykr4eggmg . otjykwnhb3s . a3uar2xrsb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 23 , & (
dqykr4eggmg . otjykwnhb3s . lw3rw5s0ye ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. lw3rw5s0ye ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
24 , & ( dqykr4eggmg . otjykwnhb3s . cosb2ibhn3 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . cosb2ibhn3 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 25 , & ( dqykr4eggmg . otjykwnhb3s . fuo05buemm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . fuo05buemm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 26 , & (
dqykr4eggmg . otjykwnhb3s . ppp4ajc3p1 ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. ppp4ajc3p1 ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
27 , & ( dqykr4eggmg . otjykwnhb3s . cfcgwprtdx ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . cfcgwprtdx ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 28 , & ( dqykr4eggmg . otjykwnhb3s . npsllq52wf ) , sizeof (
dqykr4eggmg . otjykwnhb3s . npsllq52wf ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 29 , & (
dqykr4eggmg . otjykwnhb3s . i13qoukcsn ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. i13qoukcsn ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
30 , & ( dqykr4eggmg . otjykwnhb3s . dxm3w2i52x ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . dxm3w2i52x ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 31 , & ( dqykr4eggmg . otjykwnhb3s . ik5zcuhoy3 ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ik5zcuhoy3 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 32 , & (
dqykr4eggmg . otjykwnhb3s . lfi3mnae2m ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. lfi3mnae2m ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
33 , & ( dqykr4eggmg . otjykwnhb3s . lpva1qajzk ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . lpva1qajzk ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 34 , & ( dqykr4eggmg . otjykwnhb3s . dhhdwwczx2 ) , sizeof (
dqykr4eggmg . otjykwnhb3s . dhhdwwczx2 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 35 , & (
dqykr4eggmg . otjykwnhb3s . ii2o5s5qnf ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. ii2o5s5qnf ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
36 , & ( dqykr4eggmg . otjykwnhb3s . gafzug4yea ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . gafzug4yea ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 37 , & ( dqykr4eggmg . otjykwnhb3s . nuogwfijir ) , sizeof (
dqykr4eggmg . otjykwnhb3s . nuogwfijir ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 38 , & (
dqykr4eggmg . otjykwnhb3s . hihnlferdi ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. hihnlferdi ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
39 , & ( dqykr4eggmg . otjykwnhb3s . pxamy50saq ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . pxamy50saq ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 40 , & ( dqykr4eggmg . otjykwnhb3s . btfjf5acqg ) , sizeof (
dqykr4eggmg . otjykwnhb3s . btfjf5acqg ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 41 , & (
dqykr4eggmg . otjykwnhb3s . oa1muqt4on ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. oa1muqt4on ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
42 , & ( dqykr4eggmg . otjykwnhb3s . h0cudiu0ft ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . h0cudiu0ft ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 43 , & ( dqykr4eggmg . otjykwnhb3s . ozjz0fr0k4 ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ozjz0fr0k4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 44 , & (
dqykr4eggmg . otjykwnhb3s . pvn1aiza5a ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. pvn1aiza5a ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
45 , & ( dqykr4eggmg . otjykwnhb3s . j20mj4ai3a ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . j20mj4ai3a ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 46 , & ( dqykr4eggmg . otjykwnhb3s . bgpppixzwr ) , sizeof (
dqykr4eggmg . otjykwnhb3s . bgpppixzwr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 47 , & (
dqykr4eggmg . otjykwnhb3s . cmab1dak24 ) , sizeof ( dqykr4eggmg . otjykwnhb3s
. cmab1dak24 ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
48 , & ( dqykr4eggmg . otjykwnhb3s . jtnjtissuf ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . jtnjtissuf ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 49 , & ( dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm )
, sizeof ( dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 50 , & (
dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) , sizeof ( dqykr4eggmg
. otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 51 , & (
dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) , sizeof ( dqykr4eggmg
. otjykwnhb3s . clwiujjdqo . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 52 , & (
dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) , sizeof ( dqykr4eggmg
. otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 53 , & (
dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) , sizeof ( dqykr4eggmg
. otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) ) ; mxSetFieldByNumber ( ssDW , 0
, 1 , rtdwData ) ; } return ssDW ; } void mr_flightControlSystem_SetDWork (
const mxArray * ssDW ) { ( void ) ssDW ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( ksm0js2nhsy ) , ssDW , 0
, 0 , sizeof ( ksm0js2nhsy ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . lihbmdiebu
) , rtdwData , 0 , 0 , sizeof ( dqykr4eggmg . lihbmdiebu ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . c5rl2ioahw
) , rtdwData , 0 , 1 , sizeof ( dqykr4eggmg . c5rl2ioahw ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . drhqrzyuri
) , rtdwData , 0 , 2 , sizeof ( dqykr4eggmg . drhqrzyuri ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . l152eirbdu
) , rtdwData , 0 , 3 , sizeof ( dqykr4eggmg . l152eirbdu ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . pbsmqozsw0
) , rtdwData , 0 , 4 , sizeof ( dqykr4eggmg . pbsmqozsw0 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . oq44mkeutp
) , rtdwData , 0 , 5 , sizeof ( dqykr4eggmg . oq44mkeutp ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . fb0f52aifb
) , rtdwData , 0 , 6 , sizeof ( dqykr4eggmg . fb0f52aifb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . jjrfotind4
) , rtdwData , 0 , 7 , sizeof ( dqykr4eggmg . jjrfotind4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. mck2owxrk2 ) , rtdwData , 0 , 8 , sizeof ( dqykr4eggmg . otjykwnhb3s .
mck2owxrk2 ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . etwz51o21c ) , rtdwData , 0 , 9 , sizeof (
dqykr4eggmg . otjykwnhb3s . etwz51o21c ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. c4t5e3w5ek ) , rtdwData , 0 , 10 , sizeof ( dqykr4eggmg . otjykwnhb3s .
c4t5e3w5ek ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . la41hpfp0y ) , rtdwData , 0 , 11 , sizeof (
dqykr4eggmg . otjykwnhb3s . la41hpfp0y ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. k1csdkbypq ) , rtdwData , 0 , 12 , sizeof ( dqykr4eggmg . otjykwnhb3s .
k1csdkbypq ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) , rtdwData , 0 , 13 , sizeof (
dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. fl2edockfe ) , rtdwData , 0 , 14 , sizeof ( dqykr4eggmg . otjykwnhb3s .
fl2edockfe ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . jxg1zvdttz ) , rtdwData , 0 , 15 , sizeof (
dqykr4eggmg . otjykwnhb3s . jxg1zvdttz ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. kgows215bs ) , rtdwData , 0 , 16 , sizeof ( dqykr4eggmg . otjykwnhb3s .
kgows215bs ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . liybiw1jbg ) , rtdwData , 0 , 17 , sizeof (
dqykr4eggmg . otjykwnhb3s . liybiw1jbg ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. nbbc5odoq4 ) , rtdwData , 0 , 18 , sizeof ( dqykr4eggmg . otjykwnhb3s .
nbbc5odoq4 ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . kzeijhdtif ) , rtdwData , 0 , 19 , sizeof (
dqykr4eggmg . otjykwnhb3s . kzeijhdtif ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. heeedoxzle ) , rtdwData , 0 , 20 , sizeof ( dqykr4eggmg . otjykwnhb3s .
heeedoxzle ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . gqxdiwstsm ) , rtdwData , 0 , 21 , sizeof (
dqykr4eggmg . otjykwnhb3s . gqxdiwstsm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. a3uar2xrsb ) , rtdwData , 0 , 22 , sizeof ( dqykr4eggmg . otjykwnhb3s .
a3uar2xrsb ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . lw3rw5s0ye ) , rtdwData , 0 , 23 , sizeof (
dqykr4eggmg . otjykwnhb3s . lw3rw5s0ye ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. cosb2ibhn3 ) , rtdwData , 0 , 24 , sizeof ( dqykr4eggmg . otjykwnhb3s .
cosb2ibhn3 ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . fuo05buemm ) , rtdwData , 0 , 25 , sizeof (
dqykr4eggmg . otjykwnhb3s . fuo05buemm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. ppp4ajc3p1 ) , rtdwData , 0 , 26 , sizeof ( dqykr4eggmg . otjykwnhb3s .
ppp4ajc3p1 ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . cfcgwprtdx ) , rtdwData , 0 , 27 , sizeof (
dqykr4eggmg . otjykwnhb3s . cfcgwprtdx ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. npsllq52wf ) , rtdwData , 0 , 28 , sizeof ( dqykr4eggmg . otjykwnhb3s .
npsllq52wf ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . i13qoukcsn ) , rtdwData , 0 , 29 , sizeof (
dqykr4eggmg . otjykwnhb3s . i13qoukcsn ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. dxm3w2i52x ) , rtdwData , 0 , 30 , sizeof ( dqykr4eggmg . otjykwnhb3s .
dxm3w2i52x ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . ik5zcuhoy3 ) , rtdwData , 0 , 31 , sizeof (
dqykr4eggmg . otjykwnhb3s . ik5zcuhoy3 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. lfi3mnae2m ) , rtdwData , 0 , 32 , sizeof ( dqykr4eggmg . otjykwnhb3s .
lfi3mnae2m ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . lpva1qajzk ) , rtdwData , 0 , 33 , sizeof (
dqykr4eggmg . otjykwnhb3s . lpva1qajzk ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. dhhdwwczx2 ) , rtdwData , 0 , 34 , sizeof ( dqykr4eggmg . otjykwnhb3s .
dhhdwwczx2 ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . ii2o5s5qnf ) , rtdwData , 0 , 35 , sizeof (
dqykr4eggmg . otjykwnhb3s . ii2o5s5qnf ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. gafzug4yea ) , rtdwData , 0 , 36 , sizeof ( dqykr4eggmg . otjykwnhb3s .
gafzug4yea ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . nuogwfijir ) , rtdwData , 0 , 37 , sizeof (
dqykr4eggmg . otjykwnhb3s . nuogwfijir ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. hihnlferdi ) , rtdwData , 0 , 38 , sizeof ( dqykr4eggmg . otjykwnhb3s .
hihnlferdi ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . pxamy50saq ) , rtdwData , 0 , 39 , sizeof (
dqykr4eggmg . otjykwnhb3s . pxamy50saq ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. btfjf5acqg ) , rtdwData , 0 , 40 , sizeof ( dqykr4eggmg . otjykwnhb3s .
btfjf5acqg ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . oa1muqt4on ) , rtdwData , 0 , 41 , sizeof (
dqykr4eggmg . otjykwnhb3s . oa1muqt4on ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. h0cudiu0ft ) , rtdwData , 0 , 42 , sizeof ( dqykr4eggmg . otjykwnhb3s .
h0cudiu0ft ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . ozjz0fr0k4 ) , rtdwData , 0 , 43 , sizeof (
dqykr4eggmg . otjykwnhb3s . ozjz0fr0k4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. pvn1aiza5a ) , rtdwData , 0 , 44 , sizeof ( dqykr4eggmg . otjykwnhb3s .
pvn1aiza5a ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . j20mj4ai3a ) , rtdwData , 0 , 45 , sizeof (
dqykr4eggmg . otjykwnhb3s . j20mj4ai3a ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. bgpppixzwr ) , rtdwData , 0 , 46 , sizeof ( dqykr4eggmg . otjykwnhb3s .
bgpppixzwr ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . cmab1dak24 ) , rtdwData , 0 , 47 , sizeof (
dqykr4eggmg . otjykwnhb3s . cmab1dak24 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. jtnjtissuf ) , rtdwData , 0 , 48 , sizeof ( dqykr4eggmg . otjykwnhb3s .
jtnjtissuf ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( & (
dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) , rtdwData , 0 , 49 ,
sizeof ( dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. jvbbqhrajh . fau3qf03xm ) , rtdwData , 0 , 50 , sizeof ( dqykr4eggmg .
otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. clwiujjdqo . fau3qf03xm ) , rtdwData , 0 , 51 , sizeof ( dqykr4eggmg .
otjykwnhb3s . clwiujjdqo . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. acfz1zxm4t . fau3qf03xm ) , rtdwData , 0 , 52 , sizeof ( dqykr4eggmg .
otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( & ( dqykr4eggmg . otjykwnhb3s
. ghadbep3bbv . fau3qf03xm ) , rtdwData , 0 , 53 , sizeof ( dqykr4eggmg .
otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) ) ; } } void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 1919538651U , 585866693U , 2423271857U ,
2152755321U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"flightControlSystem" , & chksum [ 0 ] ) ; } mxArray *
mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 1 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 1 ] = { "MATLABSystem" , } ; static const char * blockPath
[ 1 ] = {
"flightControlSystem/Image Processing System/PARROT Image Conversion" , } ;
static const int reason [ 1 ] = { 3 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] <
1 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript (
data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [
subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2
, subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0
] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs
[ 0 ] ] ) ) ; } } return data ; } static void *
flightControlSystem_InitRestoreDataPtr = NULL ; void
mr_flightControlSystem_CreateInitRestoreData ( ) {
flightControlSystem_InitRestoreDataPtr = utMalloc ( sizeof ( dqykr4eggmg ) )
; memcpy ( flightControlSystem_InitRestoreDataPtr , ( void * ) & (
dqykr4eggmg ) , sizeof ( dqykr4eggmg ) ) ; } void
mr_flightControlSystem_CopyFromInitRestoreData ( ) { memcpy ( ( void * ) & (
dqykr4eggmg ) , flightControlSystem_InitRestoreDataPtr , sizeof ( dqykr4eggmg
) ) ; } void mr_flightControlSystem_DestroyInitRestoreData ( ) { utFree (
flightControlSystem_InitRestoreDataPtr ) ; }
