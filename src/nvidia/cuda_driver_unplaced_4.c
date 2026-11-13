#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_4e860(_DWORD* result, __int64, __int64, __int64, int,
                                __int64, unsigned int, unsigned int);
_QWORD* CudaDriverRoutine_11c2a0(_QWORD* result);
_QWORD* CudaDriverRoutine_12cdf0(_QWORD* result, __int64);
_QWORD* CudaDriverRoutine_8cf20(__int64);
_QWORD* CudaDriverRoutine_91a90(_QWORD* result);
_QWORD* cuda_driver_misc_helpers_60f30(_QWORD* result);
__int64* CudaDriverRoutine_122550(__int64* result);
__int64* CudaDriverRoutine_125330(__int64* result);
__int64* CudaDriverRoutine_1d4be0(__int64* result);
__int64* CudaDriverRoutine_203100(__int64* result);
__int64 CudaDriverRoutine_104d90(__int64, __int64, int, __int64, __int64);
__int64 CudaDriverRoutine_1074e0(_QWORD*, unsigned __int64, _QWORD*, __int64*);
__int64 CudaDriverRoutine_107f60(_QWORD*);
__int64 CudaDriverRoutine_108450(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_108490(_QWORD*);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_109060(__int64);
__int64 CudaDriverRoutine_10ce40(__int64 result);
__int64 CudaDriverRoutine_111e80(__int64);
__int64 CudaDriverRoutine_114270(unsigned int);
__int64 CudaDriverRoutine_116fa0(__int64);
__int64 CudaDriverRoutine_11a680(__int64 result, __int64);
__int64 CudaDriverRoutine_11abf0(__int64, unsigned int);
__int64 CudaDriverRoutine_11af80(__int64, __int64, __int64);
__int64 CudaDriverRoutine_11c3c0(__int64);
__int64 CudaDriverRoutine_11ca80(__int64 result, unsigned int);
__int64 CudaDriverRoutine_11d4d0(__int64, __int64, __int64*, _DWORD*);
__int64 CudaDriverRoutine_11d560(__int64, unsigned int);
__int64 CudaDriverRoutine_11d580(__int64, unsigned __int8*, _DWORD*);
__int64 CudaDriverRoutine_11eb60(__int64, __int64, unsigned __int64);
__int64 CudaDriverRoutine_11ec30(__int64, _DWORD*, int);
__int64 CudaDriverRoutine_11ecb0(__int64 result, _DWORD*, char);
__int64 CudaDriverRoutine_11edf0(__int64 result, __int64);
__int64 CudaDriverRoutine_11eee0(__int64 result, int, int);
__int64 CudaDriverRoutine_11f010(__int64 result, int);
__int64 CudaDriverRoutine_11f030(__int64 result, int);
__int64 CudaDriverRoutine_11f050(__int64 result, float);
__int64 CudaDriverRoutine_11f070(__int64 result, float, float);
__int64 CudaDriverRoutine_11f0a0(__int64 result, int);
__int64 CudaDriverRoutine_11f0c0(__int64 result, __int128*);
__int64 CudaDriverRoutine_1204e0(__int64 result);
__int64 CudaDriverRoutine_1216a0(__int64);
__int64 CudaDriverRoutine_121c60(__int64*);
__int64 CudaDriverRoutine_125350(__int64 result);
__int64 CudaDriverRoutine_1253a0(__int64 result);
__int64 CudaDriverRoutine_1275c0(__int64 result);
__int64 CudaDriverRoutine_12a190();
__int64 CudaDriverRoutine_12a410(__int64, __int64);
__int64 CudaDriverRoutine_12bb60(unsigned __int64);
__int64 CudaDriverRoutine_12cea0(__int64*);
__int64 CudaDriverRoutine_12ced0(__int64*);
__int64 CudaDriverRoutine_12cff0(_QWORD*, __int64);
__int64 CudaDriverRoutine_12dbb0(_QWORD*);
__int64 CudaDriverRoutine_12de40(unsigned int*);
__int64 CudaDriverRoutine_12dec0(unsigned int*);
__int64 CudaDriverRoutine_12e210(__int64);
__int64 CudaDriverRoutine_12e2e0();
__int64 CudaDriverRoutine_12e300();
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_12f850(__int64 result, int);
__int64 CudaDriverRoutine_12f950(__int64);
__int64 CudaDriverRoutine_1a0ff0(__int64, int*);
__int64 CudaDriverRoutine_1a2910(__int64);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64);
__int64 CudaDriverRoutine_1b43f0(__int64 result);
__int64 CudaDriverRoutine_1ba480(_QWORD*, __int64);
__int64 CudaDriverRoutine_1ba520(__int64 result);
__int64 CudaDriverRoutine_1d9c40(__int64 result);
__int64 CudaDriverRoutine_1dba10(__int64, unsigned __int64);
__int64 CudaDriverRoutine_1dbb80(__int64 result, __int64);
__int64 CudaDriverRoutine_1dbfd0(__int64);
__int64 CudaDriverRoutine_1ffcc0(__int64 result);
__int64 CudaDriverRoutine_200aa0(__int64, __int64, unsigned int);
__int64 CudaDriverRoutine_202800(__int64, __int64, __int64, _DWORD*);
__int64 CudaDriverRoutine_2028e0(__int64, __int64, unsigned int, __int64,
                                 __int64, unsigned __int8);
__int64 CudaDriverRoutine_202960(__int64, __int64, __int64, __int64, __int64,
                                 char);
__int64 CudaDriverRoutine_203f30(__int64);
__int64 CudaDriverRoutine_2056d0(__int64 result);
__int64 CudaDriverRoutine_205fa0(int, __int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_206060(__int64, __int64);
__int64 CudaDriverRoutine_207e60(__int64 result);
__int64 CudaDriverRoutine_208be0(__int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_208fb0(__int64 result, __int64, __int64);
__int64 CudaDriverRoutine_246fa0(__int64, unsigned int);
__int64 CudaDriverRoutine_246fe0(__int64);
__int64 CudaDriverRoutine_2471e0(__int64, unsigned int*);
__int64 CudaDriverRoutine_2472f0(__int64, __int64);
__int64 CudaDriverRoutine_247310(__int64, __int64);
__int64 CudaDriverRoutine_247330(__int64, _DWORD*, unsigned int);
__int64 CudaDriverRoutine_2475f0(__int64, unsigned int);
__int64 CudaDriverRoutine_247640(__int64);
__int64 CudaDriverRoutine_2477e0(__int64, unsigned int*);
__int64 CudaDriverRoutine_247910(__int64, __int64);
__int64 CudaDriverRoutine_247930(__int64, __int64);
__int64 CudaDriverRoutine_247950(__int64, __int64, unsigned int);
__int64 CudaDriverRoutine_4edb0(unsigned int*, unsigned int, unsigned int,
                                unsigned int, unsigned int, unsigned int, int,
                                unsigned int, unsigned int, int, unsigned int);
__int64 CudaDriverRoutine_5dcf0(_QWORD*);
__int64 CudaDriverRoutine_5ef60(_QWORD*, int);
__int64 CudaDriverRoutine_83fc0(__int64);
__int64 CudaDriverRoutine_84450(__int64, unsigned int, char, char,
                                unsigned int*, _BYTE*);
__int64 CudaDriverRoutine_868d0();
__int64 CudaDriverRoutine_87a10(unsigned __int8, int);
__int64 CudaDriverRoutine_87a90(int*, __int64);
__int64 CudaDriverRoutine_8a8a0(__int64, __int64);
__int64 CudaDriverRoutine_8a9e0(__int64);
__int64 CudaDriverRoutine_8ba50(__int64);
__int64 CudaDriverRoutine_8baf0();
__int64 CudaDriverRoutine_8e680();
__int64 CudaDriverRoutine_8e6e0();
__int64 CudaDriverRoutine_8e740();
__int64 CudaDriverRoutine_912d0(__int64*);
__int64 CudaDriverRoutine_91b90(__int64 result);
__int64 CudaDriverRoutine_91f30(__int64, __int64, unsigned int, unsigned int,
                                int, char, char);
__int64 CudaDriverRoutine_92910(__int64);
__int64 CudaDriverRoutine_92980(_QWORD*);
__int64 CudaDriverRoutine_93910(__int64, _QWORD*);
__int64 CudaDriverRoutine_93b60(__int64, __int64*);
__int64 CudaDriverRoutine_93d70(__int64);
__int64 CudaDriverRoutine_93fe0(__int64, __int64);
__int64 CudaDriverRoutine_94090(_QWORD*, __int64);
__int64 CudaDriverRoutine_95d70(__int64 result);
__int64 CudaDriverRoutine_96b40(__int64 result);
__int64 CudaDriverRoutine_97200(_QWORD*);
__int64 CudaDriverRoutine_97e00();
__int64 CudaDriverRoutine_97e80(__int64 result);
__int64 CudaDriverRoutine_98190(__int64, unsigned int);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_98850(__int64);
__int64 CudaDriverRoutine_98870(__int64 result);
__int64 CudaDriverRoutine_98a30(_QWORD*);
__int64 CudaDriverRoutine_98d00(_QWORD*, int);
__int64 CudaDriverRoutine_992b0(__int64);
__int64 CudaDriverRoutine_9ab30(__int64, _BYTE*);
__int64 CudaDriverRoutine_9c190(__int64, __int64);
__int64 CudaDriverRoutine_a27d0();
__int64 CudaDriverRoutine_a3b60(_QWORD*, unsigned int, __int64, char*);
__int64 CudaDriverRoutine_a42e0(__int64, unsigned int,
                                __int64 (*)(__int64*, __int64), __int64);
__int64 CudaDriverRoutine_a6060(__int64 result);
__int64 CudaDriverRoutine_a6100(__int64 result);
__int64 CudaDriverRoutine_a7280(__int64, unsigned __int64, _QWORD*, int,
                                __int64);
__int64 CudaDriverRoutine_a7330(__int64, unsigned __int64, _QWORD*, int,
                                __int64);
__int64 CudaDriverRoutine_a7e90(__int64, unsigned int, unsigned __int64*);
__int64 CudaDriverRoutine_a81a0(_QWORD*, unsigned int, __int64, char*);
__int64 CudaDriverRoutine_a86e0(__int64, unsigned int,
                                __int64 (*)(__int64*, __int64), __int64);
__int64 CudaDriverRoutine_ad8a0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_ada30(__int64, __int64, __int64);
__int64 CudaDriverRoutine_adbc0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_adc90(__int64, __int64, __int64);
__int64 CudaDriverRoutine_add60(__int64);
__int64 CudaDriverRoutine_af8c0();
__int64 CudaDriverRoutine_b02c0();
__int64 CudaDriverRoutine_b0cc0();
__int64 CudaDriverRoutine_b0cd0();
__int64 CudaDriverRoutine_b5f70(__int64);
__int64 CudaDriverRoutine_bb7e0(__int64 result, int, unsigned int, __int64);
__int64 CudaDriverRoutine_bb8d0(__int64 result, int, int, __int64);
__int64 CudaDriverRoutine_bbd00(__int64, __int64);
__int64 CudaDriverRoutine_bc490(__int64);
__int64 CudaDriverRoutine_dd160(__int64 result);
__int64 CudaDriverRoutine_df060(__int64*);
__int64 CudaDriverRoutine_e30b0(__int64);
__int64 CudaDriverRoutine_e9900(__int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_ec740(__int64, __int64, __int64);
__int64 CudaDriverRoutine_ecda0(__int64, __int64, _BYTE*);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_ee030(__int64, __int64, _QWORD*, __int128*);
__int64 CudaDriverRoutine_ee160(__int64, __int64, _QWORD*, char, unsigned int);
__int64 CudaDriverRoutine_ee2a0(__int64, __int64);
__int64 CudaDriverRoutine_eeec0(__int64 result, unsigned int*, int, __int64);
__int64 CudaDriverRoutine_f60f0(__int64, __int64, __int64, __int64, __int64,
                                __int64, unsigned int, __int64, unsigned int);
__int64 CudaDriverRoutine_fe8c0();
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_105c00(_QWORD);
__int64 CudaDriverStub_107f90(char*);
__int64 CudaDriverStub_107f90_alt1(__int64*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_107f90_alt2(_QWORD*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_107f90_alt3(__int64) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_108070(char*);
__int64 CudaDriverStub_108070_alt1(__int64*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_108070_alt2(_QWORD*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_108070_alt3(__int64) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_10e9d0();
__int64 CudaDriverStub_10e9f0();
__int64 CudaDriverStub_1223f0(void);
__int64 CudaDriverStub_12d100(_QWORD);
__int64 CudaDriverStub_12dc90(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_12e550(_QWORD, _QWORD);
__int64 CudaDriverStub_1a2350(__int64, __int64, __int64);
__int64 CudaDriverStub_1a2d50(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_1db190(_QWORD);
__int64 CudaDriverStub_1db7a0(__int64);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1dbfc0(_QWORD);
__int64 CudaDriverStub_4f840(_QWORD);
__int64 CudaDriverStub_57450(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_8b280(_QWORD);
__int64 CudaDriverStub_8e230(_QWORD);
__int64 bsearch_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 cuda_debugger_api_7d210();
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_108520(__int64);
__int64 cuda_driver_11a410(__int64, __int64, __int64, int, char, __int64*);
__int64 cuda_driver_11a580(_QWORD*);
__int64 cuda_driver_11d110(__int64, unsigned int, _QWORD*);
__int64 cuda_driver_11d250(__int64, unsigned int, _QWORD*);
__int64 cuda_driver_11d3a0(__int64, unsigned int, _QWORD*);
__int64 cuda_driver_11e8e0(__int64, __int64, __int64, int, char, __int64*, int);
__int64 cuda_driver_11ea60(_QWORD*);
__int64 cuda_driver_1da1b0(__int64, __int64*, __int64, _QWORD*);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_7410(__int64 result, __int64, __int64, unsigned __int8,
                         char);
__int64 cuda_driver_adf50_alt1(__int64) __asm__("cuda_driver_adf50");
__int64 cuda_driver_b2180();
__int64 cuda_driver_b2290();
__int64 cuda_driver_b4580(__int64, __int64*, __int64*);
__int64 cuda_driver_ddc90(__int64*, __int64, __int64, int);
__int64 cuda_driver_ddfc0(__int64);
__int64 cuda_driver_e2200(__int64 result);
__int64 cuda_driver_ef110(__int64, unsigned int);
__int64 cuda_driver_helpers_1b6c20(__int64);
__int64 cuda_driver_helpers_1b70a0(__int64, __int64);
__int64 cuda_driver_helpers_1b75f0(__int64);
__int64 cuda_driver_helpers_1b7690(__int64);
__int64 cuda_driver_helpers_1b7b20(__int64);
__int64 cuda_driver_helpers_b8490(__int64*, __int64, __int64);
__int64 cuda_driver_helpers_b8720(__int64);
__int64 cuda_driver_helpers_b8e80(__int64, __int64, int);
__int64 cuda_driver_helpers_b8f70(__int64, __int64, unsigned int);
__int64 cuda_driver_helpers_b92e0(__int64);
__int64 cuda_driver_misc_helpers_4c20();
__int64 cuda_driver_misc_helpers_78880();
__int64 cuda_driver_misc_helpers_de3a0();
__int64 cuda_driver_misc_helpers_de3c0(__int64 result);
__int64 cuda_driver_misc_helpers_de900(__int64);
__int64 cuda_driver_predicates_10f450(__int64);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 qsort_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 strcmp_plt(_QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 strncmp_plt(_QWORD, _QWORD, _QWORD);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
unsigned __int8 CudaDriverRoutine_11ee80(__int64, unsigned int, unsigned int);
unsigned __int8 CudaDriverRoutine_11ef90(__int64, int);
unsigned __int8 CudaDriverRoutine_1bbf10(__int64, __int64);
unsigned __int8 CudaDriverRoutine_8f480(_QWORD*);
unsigned __int8 CudaDriverRoutine_98110(_BOOL8 result);
unsigned __int8 CudaDriverRoutine_985b0(int);
unsigned __int8 CudaDriverRoutine_9aa20(__int64);
unsigned __int8 CudaDriverRoutine_9aa40(__int64);
unsigned __int8 CudaDriverRoutine_9aaa0(__int64);
unsigned __int8 CudaDriverRoutine_9acc0(__int64);
unsigned __int8 CudaDriverRoutine_9ad90(__int64);
unsigned __int8 CudaDriverRoutine_b9310(__int64);
unsigned __int8 CudaDriverRoutine_e5960(__int64);
unsigned __int8 CudaDriverRoutine_efe40(__int64);
unsigned __int8 CudaDriverStub_985a0(__int64);
unsigned __int8 CudaDriverStub_b9300(__int64);
unsigned __int8 cuda_driver_12ea30(int*);
unsigned __int8 cuda_driver_predicates_10ebb0(__int64);
unsigned __int8 cuda_driver_predicates_9ae50(__int64);
double atof_plt(_QWORD);
extern _BYTE CudaDriverData_4c38[8];
extern _BYTE CudaDriverData_7404[12];
extern _UNKNOWN* CudaDriverData_14220b0;
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_1422bc0;
extern _UNKNOWN* CudaDriverData_1432140;
extern _UNKNOWN* CudaDriverData_1432198;
extern _UNKNOWN CudaDriverData_1131918;
extern __int128 CudaDriverData_1115780;
extern __int128 CudaDriverData_1115be0;
extern __int128 CudaDriverData_1434638;
extern __int128 CudaDriverData_1434648;
extern __int128 CudaDriverData_1434658;
extern __int128 CudaDriverData_1434668;
extern __int128 CudaDriverData_1434678;
extern __int128 CudaDriverData_1434688;
extern __int128 CudaDriverData_1434698;
extern __int128 CudaDriverData_14346a8;
extern __int64 (*CudaDriverData_14230d8)();
extern __int64 (*CudaDriverData_14230e8[27])();
extern __int64 (*CudaDriverData_14230f0[26])();
extern __int64 (*CudaDriverData_14230f8[25])();
extern __int64 (*CudaDriverData_1423100[24])();
extern __int64 (*CudaDriverData_1423108[23])();
extern __int64 (*CudaDriverData_1423110[22])();
extern __int64 (*CudaDriverData_1423118[21])();
extern __int64 (*CudaDriverData_1423190[6])();
extern __int64 (*CudaDriverData_1423198[5])();
extern __int64 (*CudaDriverData_14231a0[4])();
extern __int64 (*CudaDriverData_14231a8[3])();
extern __int64 (*CudaDriverData_14231b0[2])();
extern __int64 (*CudaDriverData_14231b8)();
extern __int64 CudaDriverData_1432c88;
extern __int64 CudaDriverData_1432c90;
extern __int64 CudaDriverData_1432c98;
extern __int64 CudaDriverData_1432ca0;
extern __int64 CudaDriverData_1432ca8;
extern __int64 CudaDriverData_1432cb0;
extern __int64 CudaDriverData_1435ed0;
extern __int64 CudaDriverData_1435f68;
extern char CudaDriverData_1436502;
extern int* CudaDriverData_1423050;
extern int CudaDriverData_14358d0;
extern int CudaDriverData_144d344;
extern void (*CudaDriverData_1422008[21])();
extern void (*CudaDriverData_1422010[20])();
extern void (*CudaDriverData_1422028[17])();
long double CudaDriverRoutine_11efe0(__int64, __int64);
unsigned __int64 CudaDriverRoutine_12dea0(atomic_ullong*);
unsigned __int64 CudaDriverRoutine_4e560(__int64*, unsigned int, unsigned int,
                                         unsigned int, unsigned int,
                                         unsigned int, int, unsigned int,
                                         unsigned int, int, unsigned int);
unsigned __int64 CudaDriverRoutine_87d10(_DWORD*);
unsigned __int64 CudaDriverRoutine_a3190(__int64, __int64, __int64);
unsigned __int64 CudaDriverRoutine_a3280(__int64);
unsigned __int64 CudaDriverRoutine_a3350(__int64);
unsigned __int64 CudaDriverRoutine_a3420(__int64);
unsigned __int64 CudaDriverRoutine_a3640(__int64);
unsigned __int64 CudaDriverRoutine_a36a0(__int64, __int64, __int64, __int64);
unsigned __int64 CudaDriverRoutine_a79c0(__int64, __int64, __int64);
unsigned __int64
CudaDriverRoutine_a79c0_alt1(__int64, __int64, __int64,
                             __int64) __asm__("CudaDriverRoutine_a79c0");
unsigned __int64 CudaDriverRoutine_a7c00(__int64);
unsigned __int64 CudaDriverRoutine_a7c60(__int64);
unsigned __int64 CudaDriverRoutine_a7cc0(__int64);
unsigned __int64 CudaDriverRoutine_a7d20(__int64);
unsigned __int64 CudaDriverRoutine_a7d80(__int64, __int64, __int64, __int64);
unsigned int* CudaDriverRoutine_4eef0(unsigned int*, unsigned int, unsigned int,
                                      unsigned int, unsigned int, unsigned int,
                                      unsigned int, unsigned int, unsigned int,
                                      int, unsigned int, __int64*);
unsigned int* CudaDriverRoutine_4f2c0(unsigned int* result, __int64*,
                                      unsigned int, unsigned int, unsigned int,
                                      unsigned int, unsigned int, unsigned int,
                                      unsigned int, unsigned int, int,
                                      unsigned int);
void CudaDriverRoutine_4190();
void CudaDriverRoutine_4198();
void CudaDriverRoutine_41a8();
void CudaDriverRoutine_41b0();
void CudaDriverRoutine_4340();
void CudaDriverRoutine_4348();
void CudaDriverRoutine_4350();
void CudaDriverRoutine_4484();
void CudaDriverRoutine_4700();
void CudaDriverRoutine_4704();
void CudaDriverRoutine_4718();
void CudaDriverRoutine_4728();
void CudaDriverRoutine_474c();
void CudaDriverRoutine_4764();
void CudaDriverRoutine_4e48();
void CudaDriverRoutine_4e50();
void CudaDriverRoutine_51a8();
void CudaDriverRoutine_71d8();
void CudaDriverRoutine_71f8();
void CudaDriverRoutine_72b4();
void CudaDriverRoutine_72b8();
void CudaDriverRoutine_72c0();
void CudaDriverRoutine_72d0();
void CudaDriverRoutine_72d8();
void CudaDriverRoutine_7328();
void CudaDriverRoutine_732c();
void CudaDriverRoutine_7330();
void CudaDriverRoutine_7348();
void CudaDriverRoutine_73d8();
void CudaDriverRoutine_7438();
void CudaDriverRoutine_7488();
void CudaDriverRoutine_7530();
__int64 cuda_driver_86100(__int64 a1, unsigned int a2, unsigned __int64* a3,
                          unsigned int a4, char a5, _BYTE* a6, _BYTE* a7,
                          __int64* a8, _OWORD* a9);
long double cuda_driver_86880(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int128* cuda_driver_86900();
__int64 cuda_driver_86a70(_QWORD* a1, _QWORD* a2);
bool cuda_driver_87f00(unsigned int* a1);
__int64 cuda_driver_88120(__int64 a1, __int64 a2, __int64* a3);
unsigned __int64 cuda_driver_88ba0(__int64 a1, __int64* a2, unsigned int a3,
                                   unsigned int a4, int a5, int a6,
                                   unsigned int* a7, unsigned __int64* a8,
                                   unsigned __int64* a9);
__int64 cuda_driver_89100(_QWORD* a1, __int64 a2, __int64 a3, __int128* a4,
                          int a5, __int64 a6, __int64 a7, __int64 a8, char a9);
__int64 cuda_driver_89e50(unsigned int* a1);
__int64 cuda_driver_8a4c0(unsigned int* a1);
__int64 cuda_driver_8ade0(__int64 a1, unsigned int a2, unsigned int a3);
__int64 cuda_driver_8c000(__int64 a1, int a2, int a3);
__int64 cuda_driver_8c330(__int64 a1, __int64 a2, __int64 a3, __int128* a4,
                          _QWORD* a5);
__int64 cuda_driver_8c570(__int64 a1, __int64 a2);
__int64 cuda_driver_8c890(__int64 a1, __int64 a2, __int64* a3);
__int64 cuda_driver_8c9f0(__int64 a1, __int64 a2);
__int64 cuda_driver_8d0e0(__int64* a1, unsigned int a2);
__int64 cuda_driver_8d620(__int64 a1, __int64 a2);
double cuda_driver_8d730(__int64 a1);
__int64 cuda_driver_8e2f0(__int64 a1);
__int64 cuda_driver_8e4d0(__int64 a1);
__int64 cuda_driver_8e5a0(__int64 a1);
__int64 cuda_driver_8e7e0();
__int64 cuda_driver_8ec60(__int64 a1);
__int64 cuda_driver_8f0c0(_QWORD* a1);
__int64 cuda_driver_8f4b0(__int64* a1);
__int64 cuda_driver_8fae0(__int64 result, __int64 a2);
__int64 cuda_driver_8fb40(__int64 result, __int64 a2);
__int64 cuda_driver_90880(__int64 a1, __int64 a2, int a3);
__int64** cuda_driver_911e0(__int64** result);
__int64 cuda_driver_92850(__int64 a1);
__int64 cuda_driver_936c0(__int64* a1, _QWORD* a2);
__int64 cuda_driver_96040(__int64* a1, __int64 a2, unsigned int a3);
__int64 cuda_driver_97330(int a1, char* a2, __int64 a3, unsigned __int64* a4);
__int64 cuda_driver_97bc0(__int64 a1, __int64 a2, unsigned int a3, int a4);
__int64 cuda_driver_97ff0(__int64 result, __int64 a2, _QWORD* a3);
__int64 cuda_driver_98130(__int64 a1);
__int64 cuda_driver_98420(__int64 a1, __int64 a2);
__int64 cuda_driver_985d0(__int64 a1);
__int64 cuda_driver_98c30(__int64 a1);
__int64 cuda_driver_98c70(__int64 a1, unsigned int a2);
__int64 cuda_driver_995c0(__int64 a1, __int64 a2);
bool cuda_driver_99790(__int64 a1);
void cuda_driver_99c70();
__int64 cuda_driver_9a090(__int64 a1, int a2, _DWORD* a3);
__int64 cuda_driver_9b080(_QWORD* a1);
__int64 cuda_driver_9b180(__int64 a1);
__int64 cuda_driver_9b2b0(__int64 a1);
__int64 cuda_driver_9b360(__int64 result, int a2);
__int64 cuda_driver_9b410(__int64 result, unsigned int* a2, _DWORD* a3);
bool cuda_driver_9b4d0(__int64 a1, int a2);
__int64 cuda_driver_9b560(__int64 a1, int a2, char a3);
__int64 cuda_driver_9bad0(__int64* a1, __int64 a2);
__int64 cuda_driver_9bcc0(__int64 a1, __int64 a2);
__int64 cuda_driver_9bd90(__int64 a1);
__int64 cuda_driver_9be60(__int64 a1);
__int64 cuda_driver_9d4a0(__int64 a1);
bool cuda_driver_9e1e0(__int64 a1);
__int64 cuda_driver_9e4a0(__int64 result, int a2);
__int64 cuda_driver_9e5f0(__int64 a1, __int64 a2, __int128* a3);
void cuda_driver_9f260();
__int64 cuda_driver_a2140(__int64 a1, _QWORD* a2, __int64 a3, unsigned int a4);
__int64 cuda_driver_a2fc0(__int64 a1);
__int64 cuda_driver_a4120(_QWORD* a1, __int64 (*a2)(__int64*, __int64),
                          __int64 a3);
__int64 cuda_driver_a59e0(__int64 a1, __int64 (*a2)(_QWORD*, __int64),
                          __int64 a3);
__int64 cuda_driver_a70c0(__int64 result);
__int64 cuda_driver_a71a0(__int64 result);
__int64 cuda_driver_a7890(__int64 a1);
__int64 cuda_driver_a8520(_QWORD* a1, __int64 (*a2)(__int64*, __int64),
                          __int64 a3);
__int64 cuda_driver_a9c60(__int64 a1, __int64 (*a2)(_QWORD*, __int64),
                          __int64 a3);
__int64 cuda_driver_aaf70(__int64 a1, unsigned __int8** a2, __int64* a3,
                          unsigned __int8 a4);
__int64 cuda_driver_abf70(__int64 a1, __int64 a2);
__int64 cuda_driver_ac5e0(__int64 a1, __int64 a2);
__int64 cuda_driver_ad100(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_ad4d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_adf50(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_ae710(_QWORD* a1, unsigned __int64 a2, __int64 a3);
_BYTE* CudaDriverRoutine_a27f0(_BYTE* result);
__int64 CudaDriverRoutine_107f40(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_12e270(_QWORD*);
__int64 CudaDriverRoutine_1a2cd0(unsigned int*, __int64, __int64);
__int64 CudaDriverRoutine_247280(__int64, int);
__int64 CudaDriverRoutine_2478a0(__int64, int);
__int64 CudaDriverRoutine_87fc0(__int64);
__int64 CudaDriverRoutine_89360(__int64*, __int64, __int128*, __int64, __int64,
                                __int64, __int64, char);
__int64 CudaDriverRoutine_a39c0(_QWORD*, _DWORD*, _DWORD*);
__int64 CudaDriverRoutine_a61a0(_QWORD*);
__int64 CudaDriverRoutine_a6380(_QWORD*);
__int64 CudaDriverRoutine_a6560(_QWORD*);
__int64 CudaDriverRoutine_a6740(_QWORD*);
__int64 CudaDriverRoutine_a6900(__int64 result);
__int64 CudaDriverRoutine_a6a20(__int64 result);
__int64 CudaDriverRoutine_a6b40(__int64);
__int64 CudaDriverRoutine_a6cb0(__int64);
__int64 CudaDriverRoutine_a6e20(_QWORD*);
__int64 CudaDriverRoutine_a6f70(_QWORD*);
__int64 CudaDriverRoutine_a7f20(_QWORD*, _DWORD*, _DWORD*);
__int64 CudaDriverStub_108fc0(__int64, __int64, __int64);
__int64 CudaDriverStub_1a2cc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_57450_alt1(_QWORD) __asm__("CudaDriverStub_57450");
__int64 cuda_driver_1bace0(unsigned int*, __int64*, char);
__int64 cuda_driver_88ba0_alt1(__int64, __int64*, unsigned int, unsigned int,
                               unsigned int, int, __int64, unsigned __int64*,
                               unsigned __int64*) __asm__("cuda_driver_88ba0");
__int64 cuda_driver_89100_alt1(__int64, __int64, __int64*, __int128*, int,
                               __int64, __int64, __int64,
                               char) __asm__("cuda_driver_89100");
__int64 cuda_driver_8a4c0_alt1(__int64*) __asm__("cuda_driver_8a4c0");
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt_alt1(__int64, int, unsigned __int64) __asm__("memset_plt");
bool CudaDriverRoutine_246d00(_BOOL8 result);
extern __int128 CudaDriverData_11152f0;
extern __int128 CudaDriverData_1115a40;
extern __int128 CudaDriverData_1115e10;
extern __int128 CudaDriverData_11161f0;
extern __int128 CudaDriverData_1116200;
float CudaDriverRoutine_12e2a0(_QWORD*);
unsigned int* CudaDriverRoutine_247000(__int64, const char*);
unsigned int* CudaDriverRoutine_247660(__int64, const char*);
void CudaDriverRoutine_4364();
__int64 cuda_driver_unplaced_4_89f80(__int64* a1, __int64 a2, __int128* a3,
                                     unsigned int a4, __int64 a5);
__int64 cuda_driver_unplaced_4_98fe0(__int64 a1);
__int64 cuda_driver_unplaced_4_9f440(_DWORD* a1, __int64 a2, unsigned int* a3,
                                     __int64 a4, __int64 a5, char a6,
                                     unsigned int a7);
__int64 cuda_driver_unplaced_4_a2b10(__int64* a1, _BYTE* a2,
                                     unsigned __int64 a3);
__int64 cuda_driver_unplaced_4_a7400(__int64* a1, _BYTE* a2,
                                     unsigned __int64 a3);
__int64 cuda_driver_unplaced_4_acd90(_QWORD* a1, unsigned __int64 a2);
__int64 cuda_driver_unplaced_4_ace20(_QWORD* a1, unsigned __int64 a2);

__int64 cuda_driver_86100(__int64 a1, unsigned int a2, unsigned __int64* a3,
                          unsigned int a4, char a5, _BYTE* a6, _BYTE* a7,
                          __int64* a8, _OWORD* a9)
{
  __int64 result;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 (**v33)(__int64, _QWORD, _QWORD);
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  _BYTE v38[6];
  char v39;
  char v40;
  char v41[4];
  char v42[16];
  char v43[8];
  __int128 v44;
  int v45;

  v45 = 0;
  v41[0] = 0;
  if ((unsigned int)CudaDriverRoutine_1a0ff0(a1, &v45) != 0) {
    return 10;
  }
  if (a4 == 0) {
    return 4;
  }
  if (*(_BYTE*)(a1 + 5) != 1) {
    return 16;
  }
  v18 = *a3;
  v19 = a3[1];
  v20 = a1 + 91280LL * a2;
  v21 = *(_QWORD*)(v20 + 1144);
  v22 = *(_QWORD*)(v20 + 1152);
  v23 = *a3 & v21;
  v24 = v19 & v22;
  if ((v23 | v19 & v22) == 0) {
    *a6 = 0;
    *a7 = 0;
    return 0;
  }
  v25 = a1 + 23372884;
  v26 = *(unsigned int*)(a1 + 23372884);
  if ((_DWORD)v26 != 0) {
    v37 = a5;
    v27 = v20 + 1096;
    v35 = *(_QWORD*)(v20 + 1144);
    v36 = *(_QWORD*)(v20 + 1152);
    v28 = 0;
    v29 = 91280LL * a2 + 1256;
    while (1) {
      if (v28 > 0x3F) {
        v30 = 64 - v28;
        if ((unsigned int)v28 > 0x40) {
          v30 = 0;
        }
        if (((*(_QWORD*)(v27 + 56) >> v28 << v30) & 1) == 0 ||
            ((a3[1] >> ((unsigned __int8)v28 - 64) << v30) & 1) == 0) {
          goto LABEL_11;
        }
      }
      else if (((*(_QWORD*)(v27 + 48) >> v28) & 1) == 0 ||
               ((*a3 >> v28) & 1) == 0) {
        goto LABEL_11;
      }
      result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, char*, char*,
                               char*))(a1 + 23375536))(
          a1, a2, (unsigned int)v28, *(_QWORD*)(a1 + v29), v43, v42, v41);
      if ((_DWORD)result != 0) {
        return result;
      }
      if (v41[0] != 1) {
        *a6 = 1;
        *a7 = 0;
        return 0;
      }
      v25 = a1 + 23372884;
      v26 = *(unsigned int*)(a1 + 23372884);
    LABEL_11:
      ++v28;
      v29 += 1424;
      if (v28 >= v26) {
        v18 = *a3;
        v19 = a3[1];
        v21 = v35;
        v22 = v36;
        v23 = *a3 & v35;
        a5 = v37;
        v24 = v19 & v36;
        break;
      }
    }
  }
  *(_QWORD*)&v44 = v21 & ~v18;
  *((_QWORD*)&v44 + 1) = v22 & ~v19;
  v31 = *a8 | v23;
  v32 = a8[1] | v24;
  *a8 = v31;
  a8[1] = v32;
  *a6 = 0;
  *a7 = 1;
  v33 = (__int64 (**)(__int64, _QWORD, _QWORD))(v25 + 2460);
  result = (*(__int64 (**)(__int64, _QWORD, __int64))(v25 + 2460))(a1, a2, 1);
  if ((_DWORD)result == 0) {
    if (*(_BYTE*)(a1 + 5) == 1) {
      result = CudaDriverRoutine_83fc0(a1);
      if ((_DWORD)result != 0) {
        return result;
      }
      if (*(_BYTE*)(a1 + 5) == 1) {
        result = (*(__int64 (**)(__int64, _QWORD, __int128*))(a1 + 23375408))(
            a1, a2, &v44);
        if ((_DWORD)result == 0) {
          result = (*(__int64 (**)(__int64, _QWORD, __int64*, _QWORD, _BYTE*))(
              a1 + 23376576))(a1, a2, a8, a4, v38);
          if ((_DWORD)result == 0) {
            result = (*(__int64 (**)(__int64, _QWORD))(a1 + 23375360))(a1, a2);
            if ((_DWORD)result == 0) {
              result =
                  (*(__int64 (**)(__int64, _QWORD))(a1 + 23375608))(a1, a2);
              if ((_DWORD)result == 0) {
                if (a4 == 1 || *(_DWORD*)(a1 + 23375256) == 2) {
                  CudaDriverRoutine_84450(*(_QWORD*)(a1 + 24), a2, 1, 1,
                                          (unsigned int*)&v45, &v40);
                }
                else {
                  (*(void (**)(__int64, _QWORD))(a1 + 23375624))(a1, a2);
                }
                result =
                    (*(__int64 (**)(__int64, _QWORD))(a1 + 23375600))(a1, a2);
                if ((_DWORD)result == 0 &&
                    ((a5 & 1) == 0 || (v34 = *(_QWORD*)(a1 + 24)) == 0 ||
                     (_DWORD)(result =
                                  (*(__int64 (**)(__int64, __int64, char*))(
                                      a1 + 23375560))(v34, a1, &v39)) == 0)) {
                  result = (*v33)(a1, a2, 0);
                  if ((_DWORD)result == 0 &&
                      (*(_QWORD*)(a1 + 24) == 0 ||
                       (_DWORD)(result = (*(__int64 (**)(
                                    __int64, _QWORD, __int64*, _QWORD, _BYTE*))(
                                    a1 + 23376576))(a1, a2, a8, 0, v38)) ==
                           0)) {
                    *a9 = v44;
                    return 0;
                  }
                }
              }
            }
          }
        }
        return result;
      }
    }
    return 16;
  }
  return result;
}

long double cuda_driver_86880(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  long double result;

  CudaDriverStub_57450(CudaDriverRoutine_868d0, a2, a3, a4);
  *CudaDriverData_1423050 = 1;
  CudaDriverData_1434638 = (__typeof__(CudaDriverData_1434638)){0};
  CudaDriverData_1434648 = (__typeof__(CudaDriverData_1434648)){0};
  CudaDriverData_1434658 = (__typeof__(CudaDriverData_1434658)){0};
  CudaDriverData_1434668 = (__typeof__(CudaDriverData_1434668)){0};
  CudaDriverData_1434678 = (__typeof__(CudaDriverData_1434678)){0};
  CudaDriverData_1434688 = (__typeof__(CudaDriverData_1434688)){0};
  CudaDriverData_1434698 = (__typeof__(CudaDriverData_1434698)){0};
  CudaDriverData_14346a8 = (__typeof__(CudaDriverData_14346a8)){0};
  *(_OWORD*)&result = (__typeof__(*(_OWORD*)&result)){0};
  return result;
}

__int128* cuda_driver_86900()
{
  unsigned int v3;
  int v4;
  _QWORD v5[8];

  if ((_BYTE)CudaDriverData_1434638 != 0) {
    return &CudaDriverData_1434638;
  }
  memset(v5, 0, sizeof(v5));
  if ((unsigned int)cuda_debugger_api_7d210() != 0) {
    if ((unsigned int)CudaDriverRoutine_12e300() != 0) {
      strcpy((char*)v5, "/tmp");
    }
    v3 = *(_DWORD*)CudaDriverData_1422010[0];
    v4 = cuda_debugger_api_7d210();
    if (v3 > 0x3C) {
      snprintf_plt(&CudaDriverData_1434638, 128, "%s/cuda-dbg/%u/session%d/",
                   (const char*)v5, v4, *(_DWORD*)CudaDriverData_1422008[0]);
    }
    else {
      snprintf_plt(&CudaDriverData_1434638, 128, "%s/cuda-dbg/%u/",
                   (const char*)v5, v4);
    }
  }
  else {
    strcpy((char*)&CudaDriverData_1434638, "/tmp/cuda-gdb.");
  }
  return &CudaDriverData_1434638;
}

__int64 cuda_driver_86a70(_QWORD* a1, _QWORD* a2)
{
  if ((signed __int64)*a1 < (signed __int64)*a2) {
    return 0xFFFFFFFFLL;
  }
  else {
    return (signed __int64)*a1 > (signed __int64)*a2;
  }
}

bool cuda_driver_87f00(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  bool v11;
  bool v12;
  int v13;
  bool v14;
  bool v15;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = a1[5];
  if ((v1 & 0x40) == 0) {
    return false;
  }
  v4 = CudaDriverRoutine_87d10(a1),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = *a1;
  v6 = a1[1];
  v8 = a1[2];
  v9 = v1 & 5 | v8;
  v11 = *a1 != 0 && v6 == 0 && v9 == 0;
  if (v11 ||
      (v7 != 0 ? (v12 = v6 == 0) : (v12 = true), v12 ? (v13 = 0) : (v13 = 1),
       v13 == 1 ? (v14 = v9 == 0) : (v14 = false),
       !v14 ? (v15 = (v1 & 5) == 0) : (v15 = false),
       !v15 || ((v13 ^ 1) & 1) != 0 || v8 == 0)) {
    v8 = 1;
    if (v6 <= 1) {
      v6 = 1;
    }
  }
  return v7 >= (unsigned int)v4 && v6 >= HIDWORD(v4) && v8 >= v5;
}

__int64 cuda_driver_88120(__int64 a1, __int64 a2, __int64* a3)
{
  (*(void (**)(void*))(*(_QWORD*)(*(_QWORD*)(*a3 + 16) + 80LL) + 2368LL))(
      *(void**)(*(_QWORD*)(*a3 + 16) + 80LL));
  CudaDriverRoutine_12e340(a3[2]);
  return CudaDriverRoutine_12e340((__int64)a3);
}

unsigned __int64 cuda_driver_88ba0(__int64 a1, __int64* a2, unsigned int a3,
                                   unsigned int a4, int a5, int a6,
                                   unsigned int* a7, unsigned __int64* a8,
                                   unsigned __int64* a9)
{
  unsigned int v9;
  unsigned int v10;
  unsigned int v13;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int* v32;
  __int64 v33;
  unsigned __int64 result;
  unsigned int* v35;
  unsigned __int64 v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  bool v43;
  int v44;
  bool v45;
  bool v46;
  int v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned int v53;
  unsigned __int64 v54;
  unsigned int v55;
  unsigned int v56;
  int v57;
  bool v58;
  int v59;
  bool v60;
  bool v61;
  unsigned __int64 v62;
  unsigned int v63;
  unsigned int v64;
  char v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  int v71;
  unsigned int v72;
  __int64 v73;
  int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v80;
  unsigned int v81;

  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v63 = COERCE_AS(__typeof__(v63),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = *(_DWORD*)a1;
  v10 = *(_DWORD*)(a1 + 8);
  v13 = a5;
  v16 = *(_DWORD*)(a1 + 20);
  if (*(_DWORD*)(a1 + 4) <= 1u) {
    v17 = 1;
  }
  else {
    v17 = *(_DWORD*)(a1 + 4);
  }
  if (v10 <= 1) {
    v18 = 1;
  }
  else {
    v18 = *(_DWORD*)(a1 + 8);
  }
  if ((v16 & 5) != 0) {
    v19 = 1;
  }
  else {
    v19 = v18;
  }
  if ((v16 & 5) != 0) {
    v20 = v10;
  }
  else {
    v20 = 1;
  }
  v73 = v20;
  v21 = *(unsigned __int8*)(a1 + 12);
  v76 = *(_DWORD*)(a1 + 20) & 5;
  v22 = v21 - 145;
  if ((unsigned int)(v21 - 145) >= 0xE) {
    v23 = 1;
  }
  else {
    v23 = 4;
  }
  if (*(unsigned __int8*)(a1 + 12) > 0xA4u) {
    v24 = v21 - 165;
    v25 = *(_DWORD*)a1;
    v26 = v17;
    v27 = *(_DWORD*)a1;
    if (v24 > 0x10) {
      goto LABEL_34;
    }
    v25 = *(_DWORD*)a1;
    v28 = v17;
    if (((1 << v24) & 0x1F01E) == 0) {
      if (v24 != 0) {
        v25 = *(_DWORD*)a1;
        v26 = v17;
        v27 = *(_DWORD*)a1;
        if (v24 != 11) {
          goto LABEL_34;
        }
        goto LABEL_28;
      }
      v25 = (v9 + 1) >> 1;
    LABEL_32:
      v28 = v17;
    }
  LABEL_33:
    v26 = (v28 + 31) & 0xFFFFFFE0;
    v27 = ((v25 * a4 + 63) & 0xFFFFFFC0) / a4;
    goto LABEL_34;
  }
  if ((unsigned int)(v21 - 162) < 3) {
    if (a6 == 1) {
      v25 = (v9 + 1) >> 1;
    }
    else {
      v25 = *(_DWORD*)a1;
    }
    goto LABEL_32;
  }
  if (v21 == 159 ||
      (v25 = *(_DWORD*)a1, v26 = v17, v27 = *(_DWORD*)a1, v21 == 161)) {
  LABEL_28:
    v28 = (unsigned int)(v17 + 1) >> 1;
    if (a6 == 1) {
      v25 = (v9 + 1) >> 1;
    }
    else {
      v28 = v17;
      v25 = *(_DWORD*)a1;
    }
    goto LABEL_33;
  }
LABEL_34:
  v72 = v25;
  v77 = a4;
  v78 = v19;
  if (a2 != nullptr) {
    v29 = *a2;
    a7[2] = *((_DWORD*)a2 + 2);
    *(_QWORD*)a7 = v29;
  LABEL_38:
    v30 = 1;
    goto LABEL_39;
  }
  v80 = v22;
  if ((v16 & 0x40) != 0) {
    v71 = v17;
    v53 = *(_DWORD*)(a1 + 4);
    v54 = CudaDriverRoutine_87d10((_DWORD*)a1),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v56 = v53;
    v57 = v10 | v76;
    if (v9 != 0 && v53 == 0 && v57 == 0 ||
        (v9 != 0 ? (v58 = v53 == 0) : (v58 = true), v58 ? (v59 = 0) : (v59 = 1),
         v59 == 1 ? (v60 = v57 == 0) : (v60 = false),
         !v60 ? (v61 = v76 == 0) : (v61 = false),
         !v61 || ((v59 ^ 1) & 1) != 0 || v10 == 0)) {
      v56 = v71;
      v10 = 1;
    }
    v13 = a5;
    if (v9 >= (unsigned int)v54 && v56 >= HIDWORD(v54) && v10 >= v55) {
      v62 = CudaDriverRoutine_87d10((_DWORD*)a1) >> 32,
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v64 = v63;
      if (v80 >= 0xE) {
        v65 = 0;
      }
      else {
        v65 = 2;
      }
      v66 = (unsigned int)v62 >> v65;
      v30 = cuda_driver_89e50((unsigned int*)a1),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v67 = 0;
      if (v66 >= 9) {
        v68 = 0;
        do {
          v67 = v68 + 1;
          v69 = 1 << (v68++ + 4);
        } while (v69 < v66);
      }
      if (v64 < 2) {
        a4 = v77;
        v19 = v78;
        v70 = 0;
      }
      else {
        a4 = v77;
        v19 = v78;
        v70 = 0;
        do {
          ++v70;
        } while (1 << v70 < v64);
      }
      *a7 = 0;
      a7[1] = v67;
      a7[2] = v70;
    LABEL_39:
      v81 = v30;
      v31 = v19;
      CudaDriverRoutine_4eef0(a7, v27, v26, v19, a3, a4, v23, v23, 0, 0, v30,
                              (__int64*)a7),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v13 >= 2) {
        v32 = a7 + 10;
        v33 = 1;
        do {
          CudaDriverRoutine_4f2c0(v32, (__int64*)a7, v27, v26, v31, a3, a4, v23,
                                  v23, v33++, 0, v81),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v32 += 10;
        } while (a5 != v33);
      }
      if (v76 != 0) {
        result = CudaDriverRoutine_4e560((__int64*)a7, v27, v26, v78, a3, v77,
                                         0, v23, v23, a5, v81),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v35 = (unsigned int*)a1;
        v36 = result;
        v37 = *(_DWORD*)(a1 + 20);
        if ((v37 & 0x40) == 0) {
          goto LABEL_73;
        }
      }
      else {
        result = CudaDriverRoutine_4edb0(a7, v27, v26, v78, a3, v77, 0, v23,
                                         v23, a5, v81),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v35 = (unsigned int*)a1;
        v36 = result;
        v37 = *(_DWORD*)(a1 + 20);
        if ((v37 & 0x40) == 0) {
          goto LABEL_73;
        }
      }
      result = CudaDriverRoutine_87d10(v35),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v39 = *v35;
      v40 = v35[1];
      v41 = v35[2];
      v42 = v41 | v37 & 5;
      if (*v35 != 0 && v40 == 0 && v42 == 0 ||
          (v39 != 0 ? (v43 = v40 == 0) : (v43 = true),
           v43 ? (v44 = 0) : (v44 = 1),
           v44 == 1 ? (v45 = v42 == 0) : (v45 = false),
           !v45 ? (v46 = (v37 & 5) == 0) : (v46 = false),
           !v46 || ((v44 ^ 1) & 1) != 0 || v41 == 0)) {
        v41 = 1;
        if (v40 <= 1) {
          v40 = 1;
        }
      }
      if (v41 >= v38 && v40 >= HIDWORD(result) && v39 >= (unsigned int)result) {
        v36 = (v36 + 0xFFFF) & 0xFFFFFFFFFFFF0000LL;
      }
    LABEL_73:
      if (v37 < 0) {
        v49 = 1 << (a7[1] + 3);
        v50 = (((((v72 + 63) & 0xFFFFFFC0) - v72) * v77 +
                (unsigned __int64)((v72 * v77 + 63) & 0xFFFFFFC0)) *
                   ((((v26 + v49 - 1) & -v49) + 31) & 0xFFFFFFE0) +
               4095) &
              0xFFFFFFFFFFFFF000LL;
        if (v36 <= v50) {
          v36 = v50;
        }
      }
      if (a8 != nullptr) {
        if (v76 != 0) {
          v51 = v36;
        }
        else {
          v51 = 0;
        }
        *a8 = v51;
      }
      if (a9 != nullptr) {
        if ((v35[5] & 0xC0) != 0) {
          v52 = (v36 * v73 + 0xFFFF) & 0xFFFFFFFFFFFF0000LL;
        }
        else {
          v52 = v36 * v73;
        }
        *a9 = v52;
      }
      return result;
    }
  }
  CudaDriverRoutine_4e860(a7, a4, v23, v23, a3, v27, v26, v78),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = v78;
  goto LABEL_38;
}

__int64 cuda_driver_89100(_QWORD* a1, __int64 a2, __int64 a3, __int128* a4,
                          int a5, __int64 a6, __int64 a7, __int64 a8, char a9)
{
  __int64 result;
  __int128 v16;
  __int128 v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  int v23;
  bool v24;
  __int64 v25;
  struct {
    unsigned __int64 v26;
    unsigned __int64 v27;
  } v26_;
  struct {
    _QWORD v28[6];
    __int128 v29;
    __int128 v30;
    __int128 v31;
    __int128 v32;
    __int128 v33;
    __int128 v34;
    __int128 v35;
    __int128 v36;
    __int128 v37;
    __int128 v38;
    __int128 v39;
    __int128 v40;
    __int128 v41;
    __int128 v42;
    __int128 v43;
    __int128 v44;
    __int128 v45;
    __int128 v46;
    __int128 v47;
    __int128 v48;
  } v28_;

  memset(v28_.v28, 0, sizeof(v28_.v28));
  v28_.v29 = (__typeof__(v28_.v29)){0};
  v28_.v46 = (__typeof__(v28_.v46)){0};
  v26_.v26 = 0xC0000204000E02LL;
  v26_.v27 = (unsigned __int64)(a9 & 1) << 21;
  v28_.v30 = (__typeof__(v28_.v30)){0};
  v28_.v31 = (__typeof__(v28_.v31)){0};
  v28_.v32 = (__typeof__(v28_.v32)){0};
  v28_.v33 = (__typeof__(v28_.v33)){0};
  v28_.v34 = (__typeof__(v28_.v34)){0};
  v28_.v35 = (__typeof__(v28_.v35)){0};
  v28_.v36 = (__typeof__(v28_.v36)){0};
  v28_.v37 = (__typeof__(v28_.v37)){0};
  v28_.v38 = (__typeof__(v28_.v38)){0};
  v28_.v39 = (__typeof__(v28_.v39)){0};
  v28_.v40 = (__typeof__(v28_.v40)){0};
  v28_.v41 = (__typeof__(v28_.v41)){0};
  v28_.v42 = (__typeof__(v28_.v42)){0};
  v28_.v43 = (__typeof__(v28_.v43)){0};
  v28_.v44 = (__typeof__(v28_.v44)){0};
  v28_.v45 = (__typeof__(v28_.v45)){0};
  v28_.v47 = (__typeof__(v28_.v47)){0};
  v28_.v48 = (__typeof__(v28_.v48)){0};
  if (a7 != 0 || a8 != -1) {
    *(_QWORD*)&v28_.v42 = a7;
    *((_QWORD*)&v28_.v42 + 1) = a8;
    v26_.v27 = ((unsigned __int64)(a9 & 1) << 21) | 0x400000;
    result = CudaDriverRoutine_87a90((int*)v28_.v28, a3);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  else {
    result = CudaDriverRoutine_87a90((int*)v28_.v28, a3);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  v16 = *a4;
  v17 = a4[1];
  result = 999;
  v28_.v28[5] = *((_QWORD*)a4 + 4);
  *(_OWORD*)&v28_.v28[1] = v16;
  *(_OWORD*)&v28_.v28[3] = v17;
  if (a5 > 3) {
    switch (a5) {
    case 4:
      v18 = v26_.v26 & 0xFFFFFFFFFFC27FFFLL | 0xC8000;
      v19 = 131076;
      break;
    case 8:
      v18 = v26_.v26 & 0xFFFFFFFFFFC27FFFLL | 0x108000;
      v19 = 131077;
      break;
    case 16:
      v18 = v26_.v26 & 0xFFFFFFFFFFC27FFFLL | 0x148000;
      v19 = 131078;
      break;
    default:
      return result;
    }
  }
  else {
    switch (a5) {
    case 1:
      v19 = 131073;
      v18 = v26_.v26 & 0xFFFFFFFFFFC27FFFLL | 0x8000;
      break;
    case 2:
      v18 = v26_.v26 & 0xFFFFFFFFFFC27FFFLL | 0x48000;
      v19 = 131074;
      break;
    case 3:
      v18 = v26_.v26 & 0xFFFFFFFFFFC27FFFLL | 0x88000;
      v19 = 131075;
      break;
    default:
      return result;
    }
  }
  LODWORD(v28_.v29) = v28_.v29 | v19;
  v20 = *(_QWORD*)a3;
  v21 = v18 & 0xFFFF7FFFFFFFFFFFLL;
  v22 = *(_QWORD*)(a2 + 80);
  DWORD3(v28_.v29) = *(_DWORD*)(a3 + 8);
  v23 = *(_DWORD*)(a3 + 20);
  *(_QWORD*)((char*)&v28_.v29 + 4) = v20;
  v24 = (v23 & 0x40) != 0;
  BYTE5(v28_.v30) = (v23 & 0x80) != 0;
  v25 = 0x800000000000LL;
  BYTE4(v28_.v30) = v24;
  if (__PAIR16__(BYTE5(v28_.v30), v24) == 0) {
    v25 = 0;
  }
  v26_.v26 = v25 | v21;
  return cuda_driver_1da1b0(v22, (__int64*)&v26_.v26, a6, a1);
}

__int64 cuda_driver_89e50(unsigned int* a1)
{
  unsigned int v1;
  __int64 result;
  unsigned __int64 v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  bool v10;
  int v11;
  bool v12;
  bool v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  char v17;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a1 == nullptr) {
    return 1;
  }
  v1 = a1[5];
  if ((v1 & 0x40) == 0) {
    return 1;
  }
  v4 = CudaDriverRoutine_87d10(a1),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = *a1;
  v6 = a1[1];
  v8 = a1[2];
  v9 = v8 | v1 & 5;
  if (*a1 != 0 && v6 == 0 && v9 == 0 ||
      (v7 != 0 ? (v10 = v6 == 0) : (v10 = true), v10 ? (v11 = 0) : (v11 = 1),
       v11 == 1 ? (v12 = v9 == 0) : (v12 = false),
       !v12 ? (v13 = (v1 & 5) == 0) : (v13 = false),
       !v13 || ((v11 ^ 1) & 1) != 0 || v8 == 0)) {
    v8 = 1;
    if (v6 <= 1) {
      v6 = 1;
    }
  }
  if (v7 < (unsigned int)v4 || v6 < HIDWORD(v4)) {
    return 1;
  }
  result = 1;
  if (v8 >= v5) {
    v14 = a1[3];
    v15 = CudaDriverRoutine_87a10(v14, a1[4]),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16 = CudaDriverRoutine_87d10(a1),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((unsigned int)(unsigned __int8)v14 - 145 >= 0xE) {
      v17 = 0;
    }
    else {
      v17 = 2;
    }
    return ((v16 >> v17) * v15) >> 6;
  }
  return result;
}

__int64 cuda_driver_unplaced_4_89f80(__int64* a1, __int64 a2, __int128* a3,
                                     unsigned int a4, __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int128 v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  bool v20;
  int v21;
  bool v22;
  _BOOL4 v23;
  _BOOL4 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  int32x2_t v28;
  unsigned int v29;
  int v30;
  __int64 v31;
  unsigned int v32;
  unsigned __int32 v33;
  unsigned __int32 v34;
  int32x2_t v35;
  uint32x2_t v36;
  _BOOL4 v38;
  _BOOL4 v39;
  uint32x2_t v40;
  __int64 v41;
  int v42;
  _DWORD* v44;
  int8x8_t v45;
  __int64 v46;
  bool v47;
  int v48;
  bool v50;
  __int128 v51;
  __int128 v52;
  __int64 v53;
  bool v54;
  bool v55;
  unsigned int v56;
  unsigned int v57;
  __int64 v58;
  unsigned int v59;
  unsigned __int64 v60;
  unsigned int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned int v66;
  __int64 v67;
  unsigned int v68;
  __int128* v69;
  int v70;
  unsigned __int64 v71;
  _QWORD v72[10];
  unsigned __int64 v73;
  unsigned int v74;
  __int64 v75;
  int v76;
  __int64* v77;

  v10 = CudaDriverRoutine_12e510(1, 152);
  if (v10 == 0) {
    v61 = 2;
    goto LABEL_93;
  }
  v11 = a4;
  v12 = CudaDriverRoutine_12e510(a4, 40);
  *(_QWORD*)(v10 + 32) = v12;
  if (v12 == 0 || (v13 = CudaDriverRoutine_12e510(a4, 8),
                   *(_QWORD*)(v10 + 64) = v13, v13 == 0)) {
    v61 = 2;
    goto LABEL_80;
  }
  *(_QWORD*)v10 = a2;
  v14 = *a3;
  v15 = *((_QWORD*)a3 + 2);
  *(_DWORD*)(v10 + 40) = a4;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 24) = v15;
  *(_OWORD*)(v10 + 8) = v14;
  *(_BYTE*)(v10 + 96) = 1;
  if (a5 != 0) {
    memcpy_plt(*(_QWORD*)(v10 + 32), *(_QWORD*)(a5 + 24), 40LL * a4);
    *(_QWORD*)(v10 + 48) = *(_QWORD*)(a5 + 32);
    *(_QWORD*)(v10 + 56) = *(_QWORD*)(a5 + 16);
    *(_QWORD*)(v10 + 88) = *(_QWORD*)a5;
    *(_BYTE*)(v10 + 96) = *(_BYTE*)(a5 + 40);
    *(_QWORD*)(v10 + 104) = *(_QWORD*)(a5 + 8);
  }
  else {
    if (*(_DWORD*)(v10 + 12) != 0) {
      if (*(_DWORD*)(v10 + 16) != 0 && (*(_BYTE*)(v10 + 28) & 5) == 0) {
        v66 = 3;
      }
      else {
        v66 = 2;
      }
    }
    else {
      v66 = 1;
    }
    v68 = CudaDriverRoutine_87a10(*(_DWORD*)(v10 + 20), *(_DWORD*)(v10 + 24));
    cuda_driver_88ba0_alt1(v10 + 8, nullptr, v66, v68, a4, 0,
                           *(_QWORD*)(v10 + 32), (unsigned __int64*)(v10 + 48),
                           (unsigned __int64*)(v10 + 56));
    v69 = *(__int128**)(v10 + 32);
    v70 = CudaDriverRoutine_87a10(*(_DWORD*)(v10 + 20), *(_DWORD*)(v10 + 24));
    v61 = cuda_driver_89100_alt1(v10 + 88, a2, (__int64*)(v10 + 8), v69, v70,
                                 *(_QWORD*)(v10 + 56), 0, -1, 0);
    if (v61 != 0) {
      goto LABEL_80;
    }
  }
  v16 = *(_DWORD*)a3;
  v17 = *((_DWORD*)a3 + 1);
  v18 = *((_DWORD*)a3 + 5);
  v19 = *((_DWORD*)a3 + 2);
  v20 = *(_DWORD*)a3 != 0 && v17 == 0;
  v21 = !v20;
  if (!v20 || v19 != 0 || (v18 & 1) != 0 || (v18 & 4) != 0) {
    v22 = v16 == 0 || v17 == 0;
    v23 = !v22;
    if (v22 || v19 != 0 || (v18 & 1) != 0 || (v18 & 4) != 0) {
      v24 = v19 != 0 && v23;
      if (!v24 || (v18 & 1) != 0 || (v18 & 4) != 0) {
        if (v21 == 0 && v19 != 0 && (v18 & 1) != 0 && (v18 & 4) == 0 ||
            (v24 & v18) == 1 && (v18 & 4) == 0) {
          goto LABEL_34;
        }
        if (v16 != 0) {
          if (v16 == v17 && v19 == 6 && (v18 & 1) == 0 && (v18 & 4) != 0) {
            v19 = 6;
            goto LABEL_34;
          }
          if (v16 == v17 && v19 != 0) {
            HIDWORD(v71) = -1431655765 * v19;
            LODWORD(v71) = -1431655765 * v19;
            if ((unsigned int)(v71 >> 1) <= 0x2AAAAAAA && (v18 & 1) != 0 &&
                (v18 & 4) != 0) {
              goto LABEL_34;
            }
          }
        }
      }
    }
  }
  v19 = 1;
LABEL_34:
  if (a4 == 0) {
  LABEL_75:
    if ((v18 & 0x40) != 0) {
      v59 = CudaDriverRoutine_87fc0(v10);
      *(_DWORD*)(v10 + 72) = v59;
      if (v59 != 0) {
        if (v59 >= a4) {
          v60 = 0;
        }
        else {
          v60 = *(_QWORD*)(v10 + 56) / (unsigned __int64)v19 -
                *(_QWORD*)(*(_QWORD*)(v10 + 32) + 40LL * v59 + 24);
        }
      }
      else {
        v60 = *(_QWORD*)(v10 + 56);
      }
      *(_QWORD*)(v10 + 80) = v60;
    }
    *(_QWORD*)(v10 + 120) = *(_QWORD*)(a2 + 2016);
    *(_QWORD*)(a2 + 2016) = v10;
    v67 = *(_QWORD*)(v10 + 120);
    v61 = 0;
    if (v67 != 0) {
      *(_QWORD*)(v67 + 112) = v10;
    }
    goto LABEL_93;
  }
  v77 = a1;
  v25 = 32;
  v26 = 0;
  v27 = 0;
  while (1) {
    LANES64(v28).n64_u64[0] = *(unsigned __int64*)a3;
    v29 = *((_DWORD*)a3 + 2);
    v30 = *((_DWORD*)a3 + 5);
    v31 = *(_QWORD*)(v10 + 32);
    v32 = v29 >> v26;
    v76 = v30;
    v33 = LANES64(v28).n64_u32[0];
    v34 = LANES64(v28).n64_u32[1];
    LANES64(v35).n64_u64[0] = LANES64_OF(vceqz_s32(v28)).n64_u64[0];
    LANES64(v36).n64_u64[0] =
        LANES64_OF(vshl_u32(v28, vneg_s32(vdup_n_s32(v26)))).n64_u64[0];
    v38 = LANES64(v28).n64_u32[0] != 0 && LANES64(v28).n64_u32[1] != 0;
    v39 = v29 != 0 && v38;
    if (v32 <= 1) {
      v32 = 1;
    }
    v20 = v39;
    LANES64(v40).n64_u64[0] =
        LANES64_OF(vmax_u32(v36, COERCE_AS(uint32x2_t, 0x100000001LL)))
            .n64_u64[0];
    memset(&v72[1], 0, 64);
    v41 = *(_QWORD*)((char*)a3 + 12);
    LODWORD(v72[8]) = v26;
    v42 = v30 & 5;
    if (!v20 || v42 != 0) {
      v32 = v29;
    }
    v20 = v38;
    v44 = (_DWORD*)(v31 + v25);
    LANES64(v45).n64_u64[0] = LANES64_OF(vbic_s8(v40, v35)).n64_u64[0];
    v46 = *(_QWORD*)(v10 + 88);
    v47 = v20 && v29 == 0;
    v48 = *v44;
    v75 = v41;
    if (v47 && v42 == 0) {
      v32 = 0;
    }
    v50 = v33 != 0 && v34 == 0;
    v73 = LANES64(v45).n64_u64[0];
    v51 = *((_OWORD*)v44 - 2);
    v52 = *((_OWORD*)v44 - 1);
    v72[0] = v46;
    v53 = *((_QWORD*)v44 - 1);
    v54 = v50 && v29 == 0;
    v55 = v54 && v42 == 0;
    v56 = v55 ? 0 : v32;
    v74 = v56;
    HIDWORD(v72[1]) = v53;
    *(_OWORD*)&v72[3] = v51;
    *(_OWORD*)&v72[5] = v52;
    v72[2] = v19 * v48;
    v72[7] = *(_QWORD*)v44;
    v72[9] = *(_QWORD*)(v10 + 48);
    v57 = CudaDriverRoutine_89360((__int64*)(*(_QWORD*)(v10 + 64) + v27), a2,
                                  (__int128*)&v73, (__int64)v72, 0, 0, -1, 0);
    if (v57 != 0) {
      break;
    }
    v25 += 40;
    ++v26;
    v58 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + v27);
    v27 += 8;
    *(_QWORD*)(v58 + 200) = v10;
    if (8LL * a4 == v27) {
      v18 = *((_DWORD*)a3 + 5);
      a1 = v77;
      goto LABEL_75;
    }
  }
  a1 = v77;
  v11 = a4;
  v61 = v57;
LABEL_80:
  v62 = *(_QWORD*)(v10 + 64);
  if (v62 != 0) {
    if (a4 != 0) {
      v63 = 0;
      do {
        v64 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + v63);
        if (v64 != 0) {
          *(_QWORD*)(v64 + 200) = 0;
          cuda_driver_8a4c0_alt1(*(__int64**)(*(_QWORD*)(v10 + 64) + v63));
        }
        v63 += 8;
      } while (8 * v11 != v63);
      v62 = *(_QWORD*)(v10 + 64);
    }
    CudaDriverRoutine_12e340(v62);
  }
  if (*(_QWORD*)(v10 + 88) != 0 && *(_BYTE*)(v10 + 96) != 0) {
    CudaDriverStub_1db190(v10 + 88);
  }
  CudaDriverRoutine_12e340(*(_QWORD*)(v10 + 32));
  CudaDriverRoutine_12e340(v10);
  v10 = 0;
LABEL_93:
  *a1 = v10;
  return v61;
}

__int64 cuda_driver_8a4c0(unsigned int* a1)
{
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 i;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    int v15;
    char gap12_[4];
    __int64 v16;
    unsigned int* v17;
    _BYTE* v18;
    char gap40_[8];
    _BOOL4 v19;
  } v15_;
  _BYTE v20[88];

  if (*((_QWORD*)a1 + 25) != 0) {
    return 0;
  }
  if (*((_QWORD*)a1 + 26) != 0) {
    return 0;
  }
  v5 = *((_QWORD*)a1 + 20);
  if (v5 != 0) {
    v6 = a1[39];
    if ((_DWORD)v6 != 0) {
      for (i = 0; i < v6; ++i) {
        v8 = *(_QWORD*)(*((_QWORD*)a1 + 20) + 8 * i);
        if (v8 != 0) {
          *(_QWORD*)(v8 + 208) = 0;
          cuda_driver_8a4c0(*(unsigned int**)(*((_QWORD*)a1 + 20) + 8 * i));
          v6 = a1[39];
        }
      }
      v5 = *((_QWORD*)a1 + 20);
    }
    CudaDriverRoutine_12e340(v5);
  }
  if (*(_DWORD*)((char*)((__int64*)0x30LL) + (_QWORD)CudaDriverData_1432140) !=
      0) {
    v9 = *((_QWORD*)a1 + 10);
    v15_.v15 = 48;
    v15_.v16 = *(_QWORD*)a1;
    v15_.v17 = a1;
    v15_.v18 = v20;
    v10 = cuda_driver_predicates_10ebb0(v9);
    v11 = *((_QWORD*)a1 + 10);
    v15_.v19 = v10;
    CudaDriverRoutine_eeec0(v11, a1, 3, (__int64)v20);
    cuda_driver_20b420(2u, 0xCu, (__int64)&v15_.v15);
  }
  CudaDriverRoutine_8a8a0((__int64)a1, *(_QWORD*)a1);
  CudaDriverRoutine_107f60((_QWORD*)a1 + 21);
  v12 = *(_QWORD*)a1;
  if (*(_QWORD*)a1 != 0) {
    if (*(unsigned int**)(v12 + 2008) == a1) {
      v13 = *((_QWORD*)a1 + 28);
      *(_QWORD*)(v12 + 2008) = v13;
      if (v13 != 0) {
        v14 = 0;
        goto LABEL_21;
      }
    }
    else {
      v13 = *((_QWORD*)a1 + 28);
      *(_QWORD*)(*((_QWORD*)a1 + 27) + 224LL) = v13;
      if (v13 != 0) {
        v14 = *((_QWORD*)a1 + 27);
      LABEL_21:
        *(_QWORD*)(v13 + 216) = v14;
      }
    }
    *((_QWORD*)a1 + 27) = 0;
    *((_QWORD*)a1 + 28) = 0;
  }
  if (*((_QWORD*)a1 + 10) != 0 && *((_BYTE*)a1 + 88) == 0) {
    CudaDriverStub_1db190(a1 + 20);
  }
  CudaDriverRoutine_12e340((__int64)a1);
  return 0;
}

__int64 cuda_driver_8ade0(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3;
  __int64 v4;
  int v7;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;

  v3 = *(_DWORD*)a1;
  v4 = *(unsigned int*)(a1 + 4);
  if (a2 <= *(_DWORD*)a1 && a3 <= (unsigned int)v4) {
    return 0;
  }
  v7 = a3 * a2;
  v10 = CudaDriverStub_12e550(*(_QWORD*)(a1 + 16), 8LL * a3 * a2);
  if (v10 == 0) {
    return 2;
  }
  v11 = v10;
  v22 = a1;
  memset_plt(v10 + 8LL * (unsigned int)v4 * v3, 0,
             8LL * (v7 - (unsigned int)v4 * v3));
  v12 = a3;
  if (v3 != 0 && a3 > (unsigned int)v4) {
    v13 = v3 & 7;
    v14 = v3;
    v15 = 8LL * (a3 - (unsigned int)v4);
    if ((v3 & 7) != 0) {
      v16 = v4 * (v3 - 1);
      v17 = a3 * (v3 - 1);
      v14 = v3 - v13;
      do {
        memmove_plt(v11 + 8LL * v17, v11 + 8LL * v16, 8 * v4);
        memset_plt(v11 + 8LL * v17 + 8 * v4, 0, v15);
        v16 -= v4;
        v17 -= a3;
        --v13;
      } while (v13 != 0);
      v12 = a3;
    }
    if (v3 >= 8) {
      v18 = 0;
      v19 = 0;
      v37 = v12 * (v14 - 7);
      v36 = v4 * (v14 - 7);
      v34 = v4 * (v14 - 6);
      v35 = v12 * (v14 - 6);
      v32 = v4 * (v14 - 5);
      v33 = v12 * (v14 - 5);
      v30 = v4 * (v14 - 4);
      v31 = v12 * (v14 - 4);
      v28 = v4 * (v14 - 3);
      v29 = v12 * (v14 - 3);
      v26 = v4 * (v14 - 2);
      v27 = v12 * (v14 - 2);
      v24 = v12 * (v14 - 1);
      v25 = v4 * (v14 - 1);
      v20 = v12 * (v14 - 8);
      v23 = v4 * (v14 - 8);
      do {
        memmove_plt(v11 + 8LL * (unsigned int)(v24 + v19),
                    v11 + 8LL * (unsigned int)(v25 + v18), 8 * v4);
        memset_plt(v11 + 8LL * (unsigned int)(v24 + v19) + 8 * v4, 0, v15);
        memmove_plt(v11 + 8LL * (unsigned int)(v27 + v19),
                    v11 + 8LL * (unsigned int)(v26 + v18), 8 * v4);
        memset_plt(v11 + 8LL * (unsigned int)(v27 + v19) + 8 * v4, 0, v15);
        memmove_plt(v11 + 8LL * (unsigned int)(v29 + v19),
                    v11 + 8LL * (unsigned int)(v28 + v18), 8 * v4);
        memset_plt(v11 + 8LL * (unsigned int)(v29 + v19) + 8 * v4, 0, v15);
        memmove_plt(v11 + 8LL * (unsigned int)(v31 + v19),
                    v11 + 8LL * (unsigned int)(v30 + v18), 8 * v4);
        memset_plt(v11 + 8LL * (unsigned int)(v31 + v19) + 8 * v4, 0, v15);
        memmove_plt(v11 + 8LL * (unsigned int)(v33 + v19),
                    v11 + 8LL * (unsigned int)(v32 + v18), 8 * v4);
        memset_plt(v11 + 8LL * (unsigned int)(v33 + v19) + 8 * v4, 0, v15);
        memmove_plt(v11 + 8LL * (unsigned int)(v35 + v19),
                    v11 + 8LL * (unsigned int)(v34 + v18), 8 * v4);
        memset_plt(v11 + 8LL * (unsigned int)(v35 + v19) + 8 * v4, 0, v15);
        memmove_plt(v11 + 8LL * (unsigned int)(v37 + v19),
                    v11 + 8LL * (unsigned int)(v36 + v18), 8 * v4);
        memset_plt(v11 + 8LL * (unsigned int)(v37 + v19) + 8 * v4, 0, v15);
        memmove_plt(v11 + 8LL * (unsigned int)(v20 + v19),
                    v11 + 8LL * (unsigned int)(v23 + v18), 8 * v4);
        memset_plt(v11 + 8LL * (unsigned int)(v20 + v19) + 8 * v4, 0, v15);
        v14 -= 8;
        v19 -= 8 * v12;
        v18 -= 8 * v4;
      } while (v14 != 0);
    }
  }
  *(_QWORD*)(v22 + 16) = v11;
  *(_DWORD*)v22 = a2;
  *(_DWORD*)(v22 + 4) = v12;
  return 0;
}

__int64 cuda_driver_8c000(__int64 a1, int a2, int a3)
{
  _DWORD* v4;
  void* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _DWORD v16[2];

  if (a2 == 6) {
    if (a3 != 1) {
      goto LABEL_5;
    }
  }
  else if (a2 != 5 || a3 != 2) {
    goto LABEL_5;
  }
  a3 = 0;
LABEL_5:
  v16[0] = a2;
  v16[1] = a3;
  v4 = v16;
  v5 = CudaDriverData_1422118;
  v6 = (__int64*)CudaDriverData_14220b0;
  while (1) {
    if (*((_BYTE*)&CudaDriverRoutine_73d8 + (_QWORD)v5) != 0) {
      v8 = *(unsigned int*)&CudaDriverData_7404[(_QWORD)v5 + 4];
      if ((_DWORD)v8 != 0) {
        v9 = *(_QWORD*)((char*)cuda_driver_7410 + (_QWORD)v5);
        v10 = v9 + 8 * a1;
        while (*(_DWORD*)v9 != *v4 || *(_DWORD*)(v9 + 4) != v4[1]) {
          --v8;
          v10 += 640;
          v9 += 640;
          if (v8 == 0) {
            goto LABEL_6;
          }
        }
        if (*(_QWORD*)(v10 + 424) != 0) {
          v11 = *(_QWORD*)(v9 + 632);
          if (v11 != 0) {
            return v11 + *(_QWORD*)(v10 + 8);
          }
        }
      }
      goto LABEL_6;
    }
    v12 = *v6;
    v13 = *(__int64*)((char*)((__int64*)0x18LL) + *v6);
    if (v13 != 0) {
      break;
    }
  LABEL_6:
    v7 = bsearch_plt(v4, &CudaDriverData_1131918, 4, 16,
                     CudaDriverRoutine_8baf0);
    v4 = (_DWORD*)(v7 + 8);
    if (v7 == 0) {
      return 0;
    }
  }
  v14 = (_QWORD*)(v12 + 48);
  while (*((_DWORD*)v14 - 2) != *v4 || *((_DWORD*)v14 - 1) != v4[1] ||
         *(v14 - 2) != a1) {
    --v13;
    v14 += 4;
    if (v13 == 0) {
      goto LABEL_6;
    }
  }
  return v12 + *v14;
}

__int64 cuda_driver_8c330(__int64 a1, __int64 a2, __int64 a3, __int128* a4,
                          _QWORD* a5)
{

#pragma clang fp contract(off)
  __int64 result;
  int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  unsigned int v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD v22[3];
  struct {
    int v23;
    char gap36_[4];
    __int64 v24;
    _QWORD* v25;
    __int64 v26;
  } v23_;
  _QWORD* v27;

  *a5 = 0;
  v27 = nullptr;
  memset(v22, 0, sizeof(v22));
  result = cuda_driver_11e8e0(a1, 0, 0, 0, 1, (__int64*)&v27, 1);
  if ((_DWORD)result != 0) {
    goto LABEL_17;
  }
  v11 = *(_DWORD*)a2;
  if (*(int*)a2 > 1) {
    if (v11 == 2) {
      CudaDriverRoutine_11eb60((__int64)v27, *(_QWORD*)(a2 + 8),
                               *(_QWORD*)(a2 + 24));
      CudaDriverRoutine_11eee0((__int64)v27, *(_DWORD*)(a2 + 16),
                               *(_DWORD*)(a2 + 20));
    }
    else if (v11 == 3) {
      v12 = *(_DWORD*)(a2 + 32);
      v13 = *(_QWORD*)(a2 + 40);
      v14 = *(_QWORD*)(a2 + 16);
      v15 = *(_QWORD*)(a2 + 8);
      LODWORD(v22[0]) = *(_QWORD*)(a2 + 24);
      HIDWORD(v22[0]) = v12;
      if (v12 <= 1) {
        v16 = 1;
      }
      else {
        v16 = v12;
      }
      *(_QWORD*)((char*)&v22[1] + 4) = v14;
      CudaDriverRoutine_11eb60((__int64)v27, v15, v13 * v16);
      CudaDriverRoutine_11ec30((__int64)v27, v22, v13);
    }
  }
  else {
    if (v11 == 0) {
      CudaDriverRoutine_11ecb0((__int64)v27, *(_DWORD**)(a2 + 8), 1);
      goto LABEL_13;
    }
    if (v11 == 1) {
      CudaDriverRoutine_11edf0((__int64)v27, *(_QWORD*)(a2 + 8));
    LABEL_13:
      CudaDriverRoutine_11f0c0((__int64)v27, a4);
    }
  }
  CudaDriverRoutine_11ee80((__int64)v27, 0, *(_DWORD*)a3);
  CudaDriverRoutine_11ee80((__int64)v27, 1u, *(_DWORD*)(a3 + 4));
  CudaDriverRoutine_11ee80((__int64)v27, 2u, *(_DWORD*)(a3 + 8));
  CudaDriverRoutine_11ef90((__int64)v27, *(_DWORD*)(a3 + 12));
  CudaDriverRoutine_11f010((__int64)v27, *(_DWORD*)(a3 + 16));
  CudaDriverRoutine_11f0a0((__int64)v27, *(_DWORD*)(a3 + 20));
  CudaDriverRoutine_11f030((__int64)v27, *(_DWORD*)(a3 + 24));
  CudaDriverRoutine_11f050((__int64)v27, *(float*)(a3 + 28));
  CudaDriverRoutine_11f070((__int64)v27, *(float*)(a3 + 32),
                           *(float*)(a3 + 36));
  v17 = CudaDriverRoutine_11efe0((__int64)v27, a3 + 40);
  result = (*(__int64 (**)(_QWORD*, long double))(*(_QWORD*)(a1 + 64) +
                                                  18784LL))(v27, v17);
  if ((_DWORD)result != 0 ||
      (_DWORD)(result = CudaDriverRoutine_208be0(*(_QWORD*)(a1 + 2112),
                                                 (__int64)v27, &v21)) != 0) {
  LABEL_17:
    if (v27 != nullptr) {
      v18 = result;
      cuda_driver_11ea60(v27);
      return v18;
    }
    return result;
  }
  v19 = v21;
  v20 = v27;
  *a5 = v21;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x64LL) +
                 *(__int64*)((char*)((__int64*)0x10LL) +
                             (_QWORD)CudaDriverData_14225e0)) != 0) {
    v23_.v24 = a1;
    v23_.v25 = v20;
    v23_.v26 = v19;
    v23_.v23 = 32;
    cuda_driver_20b420(2u, 0x19u, (__int64)&v23_.v23);
  }
  return 0;
}

__int64 cuda_driver_8c570(__int64 a1, __int64 a2)
{
  __int64 v3;
  _QWORD* v5;
  struct {
    int v6;
    char gap20_[4];
    __int64 v7;
    char gap32_[8];
    __int64 v8;
  } v6_;

  v5 = nullptr;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x68LL) +
                 *(__int64*)((char*)((__int64*)0x10LL) +
                             (_QWORD)CudaDriverData_14225e0)) != 0) {
    v6_.v8 = a2;
    v3 = a2;
    v6_.v7 = a1;
    v6_.v6 = 32;
    cuda_driver_20b420(2u, 0x1Au, (__int64)&v6_.v6);
    a2 = v3;
  }
  CudaDriverRoutine_208fb0(*(_QWORD*)(a1 + 2112), a2, (__int64)&v5);
  if (v5 != nullptr) {
    cuda_driver_11ea60(v5);
  }
  return 0;
}

__int64 cuda_driver_8c890(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 result;
  unsigned int v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  struct {
    int v17;
    char gap36_[4];
    __int64 v18;
    _QWORD* v19;
    __int64 v20;
    __int64 v21;
    int v22;
    int v23;
  } v17_;
  __int64 v24;

  v15 = nullptr;
  *a3 = 0;
  result = cuda_driver_11a410(a1, 0, 0, 0, 1, (__int64*)&v15);
  if ((_DWORD)result != 0) {
    goto LABEL_5;
  }
  if (*(_DWORD*)a2 == 0) {
    CudaDriverRoutine_11a680((__int64)v15, *(_QWORD*)(a2 + 8));
  }
  (*(void (**)(_QWORD*))(*(_QWORD*)(a1 + 64) + 18776LL))(v15);
  result = (*(__int64 (**)(__int64, _QWORD*, __int64*))(
      *(_QWORD*)(a1 + 64) + 18800LL))(a1, v15, &v14);
  if ((_DWORD)result != 0) {
  LABEL_5:
    if (v15 != nullptr) {
      v7 = result;
      cuda_driver_11a580(v15);
      return v7;
    }
  }
  else {
    v8 = v14;
    v9 = v15;
    *a3 = v14;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x74LL) +
                   *(__int64*)((char*)((__int64*)0x10LL) +
                               (_QWORD)CudaDriverData_14225e0)) != 0) {
      v10 = *(_QWORD*)(a1 + 64);
      v24 = 0;
      v16 = 0;
      if ((*(unsigned int (**)(__int64, __int64, __int64*, char*, __int64*))(
              v10 + 18816))(a1, v8, &v24, (char*)&v16 + 4, &v16) != 0) {
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v24 = 0;
        v16 = 0;
      }
      else {
        v13 = v24;
        v11 = v16;
        v12 = HIDWORD(v16);
      }
      v17_.v18 = a1;
      v17_.v19 = v9;
      v17_.v22 = v12;
      v17_.v23 = v11;
      v17_.v17 = 48;
      v17_.v20 = *a3;
      v17_.v21 = v13;
      cuda_driver_20b420(2u, 0x1Du, (__int64)&v17_.v17);
    }
    return 0;
  }
  return result;
}

__int64 cuda_driver_8c9f0(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  struct {
    int v12;
    char gap36_[4];
    __int64 v13;
    char gap48_[8];
    __int64 v14;
    __int64 v15;
    int v16;
    int v17;
  } v12_;

  v9 = nullptr;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x78LL) +
                 *(__int64*)((char*)((__int64*)0x10LL) +
                             (_QWORD)CudaDriverData_14225e0)) != 0) {
    v4 = *(_QWORD*)(a1 + 64);
    v10 = 0;
    v11 = 0;
    if ((*(unsigned int (**)(__int64, __int64, __int64*, char*, __int64*))(
            v4 + 18816))(a1, a2, &v11, (char*)&v10 + 4, &v10) != 0) {
      v5 = 0;
      v6 = 0;
      v7 = 0;
      v10 = 0;
      v11 = 0;
    }
    else {
      v7 = v11;
      v5 = v10;
      v6 = HIDWORD(v10);
    }
    v12_.v13 = a1;
    v12_.v14 = a2;
    v12_.v15 = v7;
    v12_.v16 = v6;
    v12_.v17 = v5;
    v12_.v12 = 48;
    cuda_driver_20b420(2u, 0x1Eu, (__int64)&v12_.v12);
  }
  (*(void (**)(__int64, __int64, _QWORD**))(*(_QWORD*)(a1 + 64) + 18824LL))(
      a1, a2, &v9);
  if (v9 != nullptr) {
    cuda_driver_11a580(v9);
  }
  return 0;
}

__int64 cuda_driver_8d0e0(__int64* a1, unsigned int a2)
{
  __int64* v2;
  char v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  void* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int* v18;
  int v19;
  __int64 result;
  int v21;
  int v22;
  struct {
    _QWORD v23[2];
    int v24;
    int v25;
  } v23_;

  v2 = a1;
  CudaDriverStub_4f840(*(_QWORD*)(*a1 + 64));
  v4 = CudaDriverStub_4f840(*(_QWORD*)(*v2 + 64));
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if (a2 >= 2 && v4 != 0) {
    v8 = CudaDriverData_1422118;
    v6 = CudaDriverRoutine_12dea0(
        (atomic_ullong*)((char*)((_UNKNOWN*)0x10E0LL) +
                         (_QWORD)CudaDriverData_1422118));
    v9 = *(_QWORD*)(*v2 + 1224);
    if ((*(_WORD*)((_BYTE*)&CudaDriverRoutine_4484 + (_QWORD)v8) & 0x20) == 0) {
      v10 = *(_QWORD*)(v9 + 24);
      if (v10 != 0) {
        v11 = 1;
        while (1) {
          CudaDriverStub_4f840(*(_QWORD*)(v2[v11] + 64));
          v12 = (unsigned int)CudaDriverRoutine_ecda0(*(_QWORD*)(*v2 + 64),
                                                      *(_QWORD*)(v2[v11] + 64),
                                                      v23_.v23) != 0 ||
                LOBYTE(v23_.v23[0]) == 0;
          if (v12 ||
              CudaDriverRoutine_1dbb80(v10, *(_QWORD*)(v2[v11] + 80)) == 0) {
            break;
          }
          if (a2 == ++v11) {
            v5 = 1;
            v7 = *(_QWORD*)(*(_QWORD*)(*v2 + 1224) + 24LL);
            goto LABEL_15;
          }
        }
        v9 = *(_QWORD*)(*v2 + 1224);
      }
    }
    v7 = *(_QWORD*)(v9 + 16);
    v5 = 0;
  }
LABEL_15:
  if (a2 == 0) {
    return 0;
  }
  if (a2 >= 2) {
    v13 = a2;
    v14 = 0;
    while (1) {
      v15 = (__int64*)*v2;
      if (v7 != 0) {
        v16 = CudaDriverRoutine_1dbb80(v7, v15[10]);
        CudaDriverStub_4f840(*(_QWORD*)(*v2 + 64));
        v17 = CudaDriverStub_102e00(v16);
        v15 = (__int64*)*v2;
        v14 = v17;
      }
      v18 = (int*)v15[153];
      v23_.v23[1] = v14;
      v23_.v25 = 0;
      v23_.v23[0] = v6;
      v23_.v24 = v5;
      v19 = *v18;
      if (*v18 == 0) {
        if (v18[1] != 0) {
          v19 = 0;
        }
        else {
          result = CudaDriverRoutine_202800(
              v15[295], (__int64)"cgs_multi_gpu_launch_params", 192, v18);
          if ((_DWORD)result != 0) {
            return result;
          }
          result = CudaDriverRoutine_202800(
              *(_QWORD*)(*v2 + 2360),
              (__int64)"cgs_multi_gpu_params_current_index", 4,
              (_DWORD*)(*(_QWORD*)(*v2 + 1224) + 4LL));
          if ((_DWORD)result != 0) {
            return result;
          }
          v18 = *(int**)(*v2 + 1224);
          v19 = *v18;
        }
      }
      v21 = v18[2];
      v22 = ((_BYTE)v21 + 1) & 7;
      *v18 = v19 + 24 * (v22 - v21);
      *(_DWORD*)(*(_QWORD*)(*v2 + 1224) + 8LL) = v22;
      CudaDriverRoutine_2028e0(*(_QWORD*)(*v2 + 2360), *v2 + 13800,
                               **(_DWORD**)(*v2 + 1224), (__int64)v23_.v23, 24,
                               0);
      *(_BYTE*)(*v2 + 15928) = 0;
      if (*(_QWORD*)(*v2 + 2408) != 0) {
        result = CudaDriverRoutine_11c3c0(*v2);
        if ((_DWORD)result != 0) {
          return result;
        }
      }
      ++v2;
      if (--v13 == 0) {
        return 0;
      }
    }
  }
  if (*(_QWORD*)(*v2 + 2408) == 0) {
    return 0;
  }
  result = CudaDriverRoutine_11c3c0(*v2);
  if ((_DWORD)result == 0) {
    return 0;
  }
  return result;
}

__int64 cuda_driver_8d620(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;

  v2 = bswap64(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 16LL) + 64LL) + 3078LL));
  v3 = bswap64(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 16LL) + 64LL) + 3078LL));
  if (v2 == v3) {
    v2 = bswap64(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 16LL) + 64LL) +
                            3086LL));
    v3 = bswap64(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 16LL) + 64LL) +
                            3086LL));
    if (v2 == v3) {
      return 0;
    }
  }
  if (v2 < v3) {
    return 0xFFFFFFFFLL;
  }
  return 1;
}

double cuda_driver_8d730(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  double result;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int64 v31;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  v2 = CudaDriverRoutine_12e510(1, 32),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  if (v2 != 0) {
    v4 = (_QWORD*)v2;
    v5 = (_QWORD*)(v2 + 16);
    *(_DWORD*)(v2 + 8) = 255;
    v31 = 0;
    v6 = *(_QWORD*)(a1 + 80);
    v23 = (__typeof__(v23)){0};
    v22 = (__typeof__(v22)){0};
    v21 = (__typeof__(v21)){0};
    v20 = (__typeof__(v20)){0};
    v19 = (__typeof__(v19)){0};
    v18 = (__typeof__(v18)){0};
    v17 = (__typeof__(v17)){0};
    v16 = (__typeof__(v16)){0};
    v25 = (__typeof__(v25)){0};
    v26 = (__typeof__(v26)){0};
    v24 = (__typeof__(v24)){0};
    v15 = (__typeof__(v15)){0};
    v14 = (__typeof__(v14)){0};
    v13 = (__typeof__(v13)){0};
    v12 = (__typeof__(v12)){0};
    v11 = (__typeof__(v11)){0};
    v10 = (__typeof__(v10)){0};
    v9 = (__typeof__(v9)){0};
    v8 = (__typeof__(v8)){0};
    v7 = 0x10C000202LL;
    v27 = (__typeof__(v27)){0};
    v28 = (__typeof__(v28)){0};
    v29 = (__typeof__(v29)){0};
    v30 = (__typeof__(v30)){0};
    if ((unsigned int)cuda_driver_1da1b0(v6, &v7, 512, v5) != 0) {
      CudaDriverRoutine_12e340((__int64)v4),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(double, "d0", "=w"));
    }
    else {
      cuda_driver_ef110(v4[2], 7u),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(double, "d0", "=w"));
      *v4 = 0x4000000008LL;
      v4[3] = *(_QWORD*)(*(_QWORD*)(a1 + 1224) + 56LL);
      *(_QWORD*)(*(_QWORD*)(a1 + 1224) + 56LL) = v4;
      *(_DWORD*)(*(_QWORD*)(a1 + 1224) + 64LL) += 8;
      ++*(_DWORD*)(*(_QWORD*)(a1 + 1224) + 68LL);
      *(_QWORD*)&result = 0x4000000008LL;
    }
  }
  return result;
}

__int64 cuda_driver_8e2f0(__int64 a1)
{
  __int64 (*v2)();
  __int64 v3;
  __int64 (*v4)();
  __int64 (*v5)();
  __int64 v6;
  void* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;

  v2 = CudaDriverData_14230e8[0];
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  v3 = a1 + 32;
  *(_QWORD*)(a1 + 48) = 56;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = v2;
  v4 = CudaDriverData_14230f0[0];
  *(_QWORD*)(a1 + 72) = CudaDriverData_14230d8;
  *(_QWORD*)(a1 + 80) = v4;
  v5 = CudaDriverData_1423100[0];
  *(__int64 (**)(void))(a1 + 88) = CudaDriverData_14230f8[0];
  *(_QWORD*)(a1 + 96) = v5;
  v6 = CudaDriverStub_4f840(a1);
  v7 = CudaDriverData_1422118;
  if ((_BYTE)v6 != 0 && *((_BYTE*)&CudaDriverRoutine_7328 +
                          (_QWORD)CudaDriverData_1422118) == 0) {
    *(_QWORD*)((char*)&CudaDriverRoutine_7330 +
               (_QWORD)CudaDriverData_1422118) = 2000000000;
    *((_BYTE*)&CudaDriverRoutine_7328 + (_QWORD)v7) = 1;
    v8 = CudaDriverRoutine_8ba50(v6);
    if (v8 != 0) {
      v9 = CudaDriverStub_4f840(v8);
    }
    else {
      v9 = 304;
    }
    *(_DWORD*)((char*)&CudaDriverRoutine_732c + (_QWORD)v7) = v9;
  }
  v10 = *(_QWORD*)((char*)&CudaDriverRoutine_72d8 + (_QWORD)v7);
  if (v10 != 0) {
    *(_QWORD*)(a1 + 32) = v10;
    v11 = *(_QWORD**)(*(_QWORD*)((char*)&CudaDriverRoutine_72d8 + (_QWORD)v7) +
                      8LL);
    *(_QWORD*)(a1 + 40) = v11;
    if (v11 != nullptr) {
      *v11 = v3;
    }
    *(_QWORD*)(*(_QWORD*)((char*)&CudaDriverRoutine_72d8 + (_QWORD)v7) + 8LL) =
        v3;
  }
  else {
    *(_QWORD*)(a1 + 40) =
        *(_QWORD*)((char*)&CudaDriverRoutine_72d0 + (_QWORD)v7);
    *(_QWORD*)((char*)&CudaDriverRoutine_72d0 + (_QWORD)v7) = v3;
    v12 = *(_QWORD**)(a1 + 40);
    if (v12 != nullptr) {
      *v12 = v3;
    }
  }
  *(_QWORD*)((char*)&CudaDriverRoutine_72d8 + (_QWORD)v7) = v3;
  return *(unsigned int*)(a1 + 108);
}

__int64 cuda_driver_8e4d0(__int64 a1)
{
  cuda_driver_misc_helpers_de900(a1);
  return CudaDriverStub_107f90((char*)&CudaDriverRoutine_72c0 +
                               (_QWORD)CudaDriverData_1422118);
}

__int64 cuda_driver_8e5a0(__int64 a1)
{
  void* v1;
  _QWORD* v2;
  __int64 (*v3)(_QWORD*);
  unsigned int v4;
  __int64 v6;
  unsigned int i;
  _QWORD v8[2];

  v8[1] = a1;
  v1 = CudaDriverData_1422118;
  *((_BYTE*)&CudaDriverRoutine_7348 + (_QWORD)CudaDriverData_1422118) = 1;
  CudaDriverStub_107f90((char*)&CudaDriverRoutine_72c0 + (_QWORD)v1);
  v2 = *(_QWORD**)((char*)&CudaDriverRoutine_72d0 + (_QWORD)v1);
  if (v2 == nullptr) {
    return 0;
  }
  while (1) {
    v3 = (__int64 (*)(_QWORD*))v2[4];
    v8[0] = v2[3];
    v4 = v3(v8);
    if (v4 != 0) {
      break;
    }
    v2 = (_QWORD*)v2[1];
    if (v2 == nullptr) {
      return 0;
    }
  }
  v6 = *(_QWORD*)((char*)&CudaDriverRoutine_72d0 + (_QWORD)v1);
  for (i = v4; (_QWORD*)v6 != v2; v6 = *(_QWORD*)(v6 + 8)) {
    (*(void (**)(_QWORD))(v6 + 40))(*(_QWORD*)(v6 + 24));
  }
  CudaDriverStub_108070((char*)&CudaDriverRoutine_72c0 + (_QWORD)v1);
  return i;
}

__int64 cuda_driver_8e7e0()
{
  void* v0;
  __int64 v1;
  __int64 i;
  __int64 (*v4)(__int64);

  v0 = CudaDriverData_1422118;
  v1 = CudaDriverStub_107f90((char*)&CudaDriverRoutine_72c0 +
                             (_QWORD)CudaDriverData_1422118);
  for (i = *(_QWORD*)((char*)&CudaDriverRoutine_72d0 + (_QWORD)v0); i != 0;
       i = *(_QWORD*)(i + 8)) {
    v4 = *(__int64 (**)(__int64))(i + 64);
    if (v4 != nullptr) {
      v1 = v4(v1);
    }
  }
  return CudaDriverStub_108070((char*)&CudaDriverRoutine_72c0 + (_QWORD)v0);
}

__int64 cuda_driver_8ec60(__int64 a1)
{
  void* v2;
  char v3;
  int v4;
  __int64 result;
  int v6;
  __int64 v7;
  __int64 v8;
  char v9;

  v2 = CudaDriverData_1422118;
  v3 = *((_BYTE*)&CudaDriverRoutine_72b8 + (_QWORD)CudaDriverData_1422118);
  v4 = *(_DWORD*)(a1 + 12);
  result = 1;
  if (v4 > 1) {
    switch (v4) {
    case 2:
      if (*(_DWORD*)((char*)&CudaDriverRoutine_72b4 +
                     (_QWORD)CudaDriverData_1422118) == 2) {
        result = CudaDriverRoutine_8e740();
        v3 = 1;
        v6 = 1;
        if ((_DWORD)result != 0) {
          return result;
        }
        goto LABEL_16;
      }
      break;
    case 3:
      if (*(_DWORD*)((char*)&CudaDriverRoutine_72b4 +
                     (_QWORD)CudaDriverData_1422118) == 1) {
        CudaDriverRoutine_8e680();
        v6 = 0;
      LABEL_16:
        *(_DWORD*)((char*)&CudaDriverRoutine_72b4 + (_QWORD)v2) = v6;
        *((_BYTE*)&CudaDriverRoutine_72b8 + (_QWORD)v2) = v3;
        return 0;
      }
      break;
    case 4:
      cuda_driver_8e7e0();
      v6 = *(_DWORD*)((char*)&CudaDriverRoutine_72b4 + (_QWORD)v2);
      goto LABEL_16;
    default:
      return result;
    }
    return 401;
  }
  if (v4 != 0) {
    if (v4 != 1) {
      return result;
    }
    if (*(_DWORD*)((char*)&CudaDriverRoutine_72b4 +
                   (_QWORD)CudaDriverData_1422118) == 1) {
      v6 = 2;
      result = CudaDriverRoutine_8e6e0();
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_16;
    }
    return 401;
  }
  if (*(_DWORD*)((char*)&CudaDriverRoutine_72b4 +
                 (_QWORD)CudaDriverData_1422118) != 0) {
    return 401;
  }
  v7 = *(_QWORD*)(a1 + 16);
  if (*(_QWORD*)a1 != 0 && v7 == -1) {
    while (1) {
      v8 = CudaDriverRoutine_12e2e0();
      result = cuda_driver_8e5a0(
          *(_QWORD*)((char*)&CudaDriverRoutine_7330 + (_QWORD)v2) + v8);
      if ((_DWORD)result != 600) {
        break;
      }
      v9 = CudaDriverStub_8e230(*(_QWORD*)a1);
      result = 600;
      if (v9 == 0) {
        return result;
      }
    }
  }
  else {
    result = cuda_driver_8e5a0(v7);
  }
  v3 = 0;
  v6 = 1;
  if ((_DWORD)result == 0) {
    goto LABEL_16;
  }
  return result;
}

__int64 cuda_driver_8f0c0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  struct {
    char gap0_[8];
    __int64 v17;
    __int128 v18;
    __int128 v19;
    __int128 v20;
    __int128 v21;
    __int128 v22;
    __int128 v23;
    __int128 v24;
    __int128 v25;
    __int128 v26;
    __int128 v27;
    __int128 v28;
    __int128 v29;
    __int128 v30;
    __int128 v31;
    __int128 v32;
    __int128 v33;
    __int128 v34;
    __int128 v35;
    __int128 v36;
    __int128 v37;
    __int128 v38;
    __int128 v39;
    __int128 v40;
    __int64 v41;
  } v17_;
  __int64 v42;

  v1 = (_QWORD*)a1[152];
  if (v1 != nullptr) {
    goto LABEL_2;
  }
  v4 = (_QWORD*)CudaDriverStub_12e330(32);
  if (v4 == nullptr) {
    result = 2;
    v11 = a1[152];
    v13 = *(_DWORD*)(v11 + 24) - 1;
    *(_DWORD*)(v11 + 24) = v13;
    if (v13 != 0) {
      return result;
    }
    goto LABEL_11;
  }
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v1 = v4;
  CudaDriverData_1432c88 = (__int64)"ping";
  CudaDriverData_1432c90 = (__int64)CudaDriverData_1423108[0];
  CudaDriverData_1432c98 = (__int64)"launch queue save tail";
  CudaDriverData_1432ca0 = (__int64)CudaDriverData_1423110[0];
  CudaDriverData_1432ca8 = (__int64)"launch queue restore head";
  CudaDriverData_1432cb0 = (__int64)CudaDriverData_1423118[0];
  *v4 = a1;
  v42 = 0;
  v17_.v18 = (__typeof__(v17_.v18)){0};
  v17_.v19 = (__typeof__(v17_.v19)){0};
  v17_.v20 = (__typeof__(v17_.v20)){0};
  v17_.v21 = (__typeof__(v17_.v21)){0};
  v17_.v22 = (__typeof__(v17_.v22)){0};
  v17_.v23 = (__typeof__(v17_.v23)){0};
  v17_.v25 = (__typeof__(v17_.v25)){0};
  v17_.v26 = (__typeof__(v17_.v26)){0};
  v17_.v27 = (__typeof__(v17_.v27)){0};
  v17_.v28 = (__typeof__(v17_.v28)){0};
  v17_.v29 = (__typeof__(v17_.v29)){0};
  v17_.v30 = (__typeof__(v17_.v30)){0};
  v17_.v31 = (__typeof__(v17_.v31)){0};
  v17_.v32 = (__typeof__(v17_.v32)){0};
  v17_.v33 = (__typeof__(v17_.v33)){0};
  v5 = a1[133];
  v17_.v40 = (__typeof__(v17_.v40)){0};
  v17_.v34 = (__typeof__(v17_.v34)){0};
  v17_.v35 = (__typeof__(v17_.v35)){0};
  v17_.v36 = (__typeof__(v17_.v36)){0};
  v17_.v37 = (__typeof__(v17_.v37)){0};
  v17_.v38 = (__typeof__(v17_.v38)){0};
  v17_.v39 = (__typeof__(v17_.v39)){0};
  v6 = a1[10];
  v7 = (*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) &
        1) == 0;
  v8 = 0x10D000219LL;
  v17_.v24 = (__typeof__(v17_.v24)){0};
  if (!v7) {
    v8 = 0x10D000211LL;
  }
  v17_.v41 = 0;
  DWORD1(v17_.v39) = -1;
  v17_.v17 = v8;
  result = cuda_driver_1da1b0(v6, &v17_.v17, 1032, &v42);
  if ((_DWORD)result == 0) {
    v9 = CudaDriverStub_1dbab0(v42);
    v10 = CudaDriverStub_1dbf90(v42);
    memset_plt(v9, 0, v10);
    v16 = CudaDriverStub_102e00(v42);
    result = CudaDriverRoutine_202960(*(_QWORD*)(v5 + 8), (__int64)(a1 + 1725),
                                      (__int64)"cmdQueueBuffer", (__int64)&v16,
                                      8, 0);
    if ((_DWORD)result == 0) {
      v15 = v42;
      v1[1] = v42;
      v1[2] = CudaDriverStub_1dbab0(v15);
      a1[152] = v1;
    LABEL_2:
      ++*((_DWORD*)v1 + 6);
      return 0;
    }
  }
  ++*((_DWORD*)v1 + 6);
  v11 = a1[152];
  v12 = *(_DWORD*)(v11 + 24) - 1;
  *(_DWORD*)(v11 + 24) = v12;
  if (v12 == 0) {
  LABEL_11:
    a1[152] = 0;
    v14 = result;
    if (*(_QWORD*)(v11 + 8) != 0) {
      CudaDriverStub_1db190(v11 + 8);
    }
    CudaDriverRoutine_12e340(v11);
    return v14;
  }
  return result;
}

__int64 cuda_driver_8f4b0(__int64* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  void* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  char v14;
  _QWORD* i;
  __int64 j;
  __int64 v17;
  __int64 v18;
  int v19;
  _BOOL4 v20;

  v2 = *a1;
  result = CudaDriverRoutine_202960(a1[1], *a1 + 13800,
                                    (__int64)"cnpConstIndirectionTable",
                                    (__int64)(a1 + 45), 8, 0);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_202960(
        a1[1], v2 + 13800,
        (__int64)"cnpConstExitedWarpsIfBarsNotAvailableCounterTable",
        (__int64)(a1 + 46), 8, 0);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_202960(a1[1], v2 + 13800,
                                        (__int64)"cnpConstEventBitPool",
                                        (__int64)(a1 + 22), 48, 0);
      if ((_DWORD)result == 0 &&
          (!CudaDriverStub_985a0(*a1) ||
           (_DWORD)(result = CudaDriverRoutine_202960(
                        a1[1], v2 + 13800, (__int64)"dseConstListBitPool",
                        (__int64)(a1 + 34), 48, 0)) == 0)) {
        v4 = a1[3];
        if (v4 != 0) {
          v4 = CudaDriverStub_1db7a0(v4);
        }
        v18 = v4;
        result = CudaDriverRoutine_202960(a1[1], v2 + 13800,
                                          (__int64)"cnpConstSkedReflectedAddr",
                                          (__int64)&v18, 8, 0);
        if ((_DWORD)result == 0) {
          v5 = a1[1];
          v18 = a1[50];
          result = CudaDriverRoutine_202960(
              v5, v2 + 13800, (__int64)"cnpConstUserSaveRoutinePC",
              (__int64)&v18, 8, 0);
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_202960(a1[1], v2 + 13800,
                                              (__int64)"cnpConstQmdSched",
                                              (__int64)(a1 + 48), 8, 0);
            if ((_DWORD)result == 0) {
              result = CudaDriverRoutine_202960(a1[1], v2 + 13800,
                                                (__int64)"cnpGridId64",
                                                (__int64)(a1 + 47), 8, 0);
              if ((_DWORD)result == 0) {
                if (*(_QWORD*)(v2 + 232) == 0 ||
                    (~*(_DWORD*)(*(_QWORD*)(*a1 + 64) + 16976LL) & 0x60) != 0) {
                  v8 = 0;
                }
                else {
                  v6 = CudaDriverStub_1223f0();
                  v7 = *(_QWORD*)(v2 + 64);
                  v18 = v6;
                  v8 = v6 + (*(__int64 (**)(__int64))(v7 + 18424))(13);
                }
                v9 = a1[1];
                v18 = v8;
                result = CudaDriverRoutine_202960(v9, v2 + 13800,
                                                  (__int64)"cnpConstTrtBasePtr",
                                                  (__int64)&v18, 8, 0);
                if ((_DWORD)result == 0) {
                  result = CudaDriverRoutine_202960(a1[1], v2 + 13800,
                                                    (__int64)"cnpStats",
                                                    (__int64)(a1 + 70), 8, 0);
                  if ((_DWORD)result == 0) {
                    v10 = CudaDriverData_1422118;
                    result = CudaDriverRoutine_202960(
                        a1[1], v2 + 13800, (__int64)"cnpConstDeviceCount",
                        (__int64)CudaDriverData_1422118 + 792, 4, 0);
                    if ((_DWORD)result == 0) {
                      result = CudaDriverRoutine_202960(
                          a1[1], v2 + 13800, (__int64)"cnpConstCurrentDevice",
                          *(_QWORD*)(v2 + 16), 4, 0);
                      if ((_DWORD)result == 0) {
                        result = CudaDriverRoutine_202960(
                            a1[1], v2 + 13800, (__int64)"cnpConstDevState",
                            (__int64)(a1 + 71), 8, 0);
                        if ((_DWORD)result == 0) {
                          v18 = (*(__int64 (**)(__int64))(*(_QWORD*)(v2 + 64) +
                                                          18448LL))(v2);
                          result = CudaDriverRoutine_202960(
                              a1[1], v2 + 13800,
                              (__int64)"cnpConstLastErrorAddr", (__int64)&v18,
                              8, 0);
                          if ((_DWORD)result == 0) {
                            result = CudaDriverRoutine_202960(
                                a1[1], v2 + 13800, (__int64)"cnpDeviceLimit",
                                (__int64)(a1 + 72), 80, 0);
                            if ((_DWORD)result == 0) {
                              result = CudaDriverRoutine_202960(
                                  a1[1], v2 + 13800,
                                  (__int64)"cnpConstGpuQmdBitPool",
                                  (__int64)(a1 + 4), 48, 0);
                              if ((_DWORD)result == 0) {
                                result = CudaDriverRoutine_202960(
                                    a1[1], v2 + 13800,
                                    (__int64)"cnpConstCpuQmdBitPool",
                                    (__int64)(a1 + 10), 48, 0);
                                if ((_DWORD)result == 0) {
                                  result = CudaDriverRoutine_202960(
                                      a1[1], v2 + 13800,
                                      (__int64)"cnpConstCtaCtxBitPool",
                                      (__int64)(a1 + 16), 48, 0);
                                  if ((_DWORD)result == 0) {
                                    result = CudaDriverRoutine_202960(
                                        a1[1], v2 + 13800,
                                        (__int64)"cnpConstGpuQmdCompletionBits",
                                        (__int64)(a1 + 40), 8, 0);
                                    if ((_DWORD)result == 0) {
                                      result = CudaDriverRoutine_202960(
                                          a1[1], v2 + 13800,
                                          (__int64)"cnpConstQmdCacheBitPool",
                                          (__int64)(a1 + 44), 8, 0);
                                      if ((_DWORD)result == 0) {
                                        result = CudaDriverRoutine_202960(
                                            a1[1], v2 + 13800,
                                            (__int64)"cnpConstParamBankPoolBas"
                                                     "e",
                                            (__int64)(a1 + 41), 8, 0);
                                        if ((_DWORD)result == 0) {
                                          v11 = a1[1];
                                          v18 = a1[42] + a1[41];
                                          result = CudaDriverRoutine_202960(
                                              v11, v2 + 13800,
                                              (__int64)"cnpConstParamBankPoolEn"
                                                       "d",
                                              (__int64)&v18, 8, 0);
                                          if ((_DWORD)result == 0) {
                                            result = CudaDriverRoutine_202960(
                                                a1[1], v2 + 13800,
                                                (__int64)"cnpConstParamBankSiz"
                                                         "e",
                                                (__int64)(a1 + 43), 4, 0);
                                            if ((_DWORD)result == 0) {
                                              result = CudaDriverRoutine_202960(
                                                  a1[1], v2 + 13800,
                                                  (__int64)"cnpConstWarpDataBit"
                                                           "Pool",
                                                  (__int64)(a1 + 63), 48, 0);
                                              if ((_DWORD)result == 0) {
                                                result =
                                                    CudaDriverRoutine_202960(
                                                        a1[1], v2 + 13800,
                                                        (__int64)"cnpConstCtaDa"
                                                                 "taBitPool",
                                                        (__int64)(a1 + 57), 48,
                                                        0);
                                                if ((_DWORD)result == 0) {
                                                  result =
                                                      CudaDriverRoutine_202960(
                                                          a1[1], v2 + 13800,
                                                          (__int64)"cnpSyncDept"
                                                                   "hLevels",
                                                          (__int64)(a1 + 56), 4,
                                                          0);
                                                  if ((_DWORD)result == 0) {
                                                    result =
                                                        CudaDriverRoutine_202960(
                                                            a1[1], v2 + 13800,
                                                            (__int64)"cnpSmCoun"
                                                                     "t",
                                                            v2 + 164, 4, 0);
                                                    if ((_DWORD)result == 0) {
                                                      v12 = *(
                                                          unsigned __int8*)(v2 +
                                                                            1080);
                                                      v19 = 0;
                                                      v20 = v12 != 0;
                                                      if (*((_BYTE*)((
                                                                _UNKNOWN*)0x1D58LL) +
                                                            (_QWORD)v10) != 0) {
                                                        v20 = true;
                                                        v19 = 1;
                                                      }
                                                      result =
                                                          CudaDriverRoutine_202960(
                                                              a1[1], v2 + 13800,
                                                              (__int64)"cnpCont"
                                                                       "rolEnab"
                                                                       "led",
                                                              (__int64)&v20, 4,
                                                              0);
                                                      if ((_DWORD)result == 0) {
                                                        result =
                                                            CudaDriverRoutine_202960(
                                                                a1[1],
                                                                v2 + 13800,
                                                                (__int64)"cnpUn"
                                                                         "ittes"
                                                                         "tPerT"
                                                                         "hread"
                                                                         "Strea"
                                                                         "mCoun"
                                                                         "terEn"
                                                                         "able"
                                                                         "d",
                                                                (__int64)&v19,
                                                                4, 0);
                                                        if ((_DWORD)result ==
                                                            0) {
                                                          v13 = a1[1];
                                                          v18 = *(
                                                              _QWORD*)(*(_QWORD*)(v2 +
                                                                                  1064) +
                                                                       416LL);
                                                          result =
                                                              CudaDriverRoutine_202960(
                                                                  v13,
                                                                  v2 + 13800,
                                                                  (__int64)"cnp"
                                                                           "Con"
                                                                           "stE"
                                                                           "ntr"
                                                                           "yEx"
                                                                           "itF"
                                                                           "unc"
                                                                           "PC",
                                                                  (__int64)&v18,
                                                                  8, 0);
                                                          if ((_DWORD)result ==
                                                              0) {
                                                            result = CudaDriverRoutine_202960(
                                                                a1[1],
                                                                v2 + 13800,
                                                                (__int64)"cnpCP"
                                                                         "UInte"
                                                                         "rrupt"
                                                                         "Disab"
                                                                         "led",
                                                                (__int64)((
                                                                    _UNKNOWN*)0x1480LL) +
                                                                    (_QWORD)v10,
                                                                4, 0);
                                                            if ((_DWORD)
                                                                    result ==
                                                                0) {
                                                              v14 = *(
                                                                  (_BYTE*)((
                                                                      _UNKNOWN*)0x147CLL) +
                                                                  (_QWORD)v10);
                                                              for (
                                                                  i = *(
                                                                      _QWORD**)(*a1 +
                                                                                1976);
                                                                  i != nullptr;
                                                                  i = (_QWORD*)
                                                                      i[69]) {
                                                                if ((i[36] &
                                                                     0x3FFEF01FF6FFD0LL) !=
                                                                    0) {
                                                                  for (
                                                                      j = i[28];
                                                                      j != 0;
                                                                      j = *(
                                                                          _QWORD*)(j +
                                                                                   1144)) {
                                                                    if (*(_QWORD*)(j +
                                                                                   944) !=
                                                                            0 &&
                                                                        *(_BYTE*)(j +
                                                                                  1088) !=
                                                                            0) {
                                                                      v14 = 1;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                              if (v14 == 0 ||
                                                                  (v17 = a1[1],
                                                                   v18 = 0,
                                                                   (_DWORD)(result = CudaDriverRoutine_202960(
                                                                                v17,
                                                                                v2 +
                                                                                    13800,
                                                                                (__int64)"cnpLaunchQueueArray",
                                                                                (__int64)&v18,
                                                                                8,
                                                                                0)) ==
                                                                       0)) {
                                                                cuda_driver_8fae0(
                                                                    v2,
                                                                    (__int64)
                                                                        a1);
                                                                CudaDriverRoutine_97e80(
                                                                    v2);
                                                                return 0;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_8fae0(__int64 result, __int64 a2)
{
  struct {
    char gap0_[8];
    int v2;
    char gap12_[4];
    __int64 v3;
    char gap24_[8];
    __int128 v4;
  } v2_;

  if (*(_DWORD*)((char*)((_UNKNOWN*)0x7CLL) + (_QWORD)CudaDriverData_1432140 +
                 4) != 0) {
    v2_.v3 = result;
    v2_.v2 = 40;
    v2_.v4 = *(_OWORD*)(a2 + 328);
    return cuda_driver_20b420(2u, 0x20u, (__int64)&v2_.v2);
  }
  return result;
}

__int64 cuda_driver_8fb40(__int64 result, __int64 a2)
{
  struct {
    char gap0_[8];
    int v2;
    char gap12_[4];
    __int64 v3;
    char gap24_[8];
    __int128 v4;
  } v2_;

  if (*(_DWORD*)((char*)((_UNKNOWN*)0x7CLL) + (_QWORD)CudaDriverData_1432140 +
                 4) != 0) {
    v2_.v3 = result;
    v2_.v2 = 40;
    v2_.v4 = *(_OWORD*)(a2 + 328);
    return cuda_driver_20b420(2u, 0x20u, (__int64)&v2_.v2);
  }
  return result;
}

__int64 cuda_driver_90880(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  bool v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  struct {
    __int128 v39;
    __int64 v40;
    __int64 v41;
    char gap48_[8];
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
  } v39_;

  if (*(_DWORD*)(a1 + 444) == 0) {
    return 0;
  }
  v3 = *(_QWORD*)a1;
  v7 = (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 64LL) + 3756LL) *
                      a3 * *(_DWORD*)(*(_QWORD*)a1 + 164LL));
  if (*(_QWORD*)(a1 + 544) != __PAIR64__(v7, *(_DWORD*)(a2 + 20))) {
    v8 = *(_QWORD*)(a1 + 504);
    *(_QWORD*)(a1 + 552) = 0;
    if (v8 != 0) {
      CudaDriverRoutine_ee2a0(v3, v8);
      *(_QWORD*)(a1 + 504) = 0;
    }
    v9 = *(_QWORD*)(a1 + 512);
    if (v9 != 0) {
      CudaDriverRoutine_ee2a0(v3, v9);
      *(_QWORD*)(a1 + 512) = 0;
    }
    v10 = *(_QWORD*)(a1 + 520);
    if (v10 != 0) {
      CudaDriverRoutine_ee2a0(v3, v10);
      *(_QWORD*)(a1 + 520) = 0;
    }
    *(_OWORD*)(a1 + 536) = (__typeof__(*(_OWORD*)(a1 + 536))){0};
    if ((_DWORD)v7 != 0) {
      LODWORD(result) = CudaDriverRoutine_91f30(*(_QWORD*)a1, a1 + 504, v7,
                                                *(_DWORD*)(a2 + 20), 3, 0, 0);
      if ((_DWORD)result == 0) {
        v12 = CudaDriverRoutine_e5960(*(_QWORD*)a1);
        v13 = *(_QWORD*)a1;
        if (!v12 && *(_BYTE*)(v13 + 15901) == 0) {
        LABEL_18:
          v16 = CudaDriverRoutine_1dba10(*(_QWORD*)(v13 + 80),
                                         *(_QWORD*)(a1 + 520));
          *(_QWORD*)(a1 + 552) = v16;
          if (*(_DWORD*)((char*)((__int64*)0x18LL) +
                         (_QWORD)CudaDriverData_1432198) != 0) {
            if (v16 != 0) {
              v17 = CudaDriverStub_1dbfc0(v16);
              v18 = CudaDriverStub_1db800(*(_QWORD*)(a1 + 552));
              v19 = v18 - CudaDriverStub_1db7a0(*(_QWORD*)(a1 + 552));
              v16 = CudaDriverStub_1dbf90(*(_QWORD*)(a1 + 552));
              v20 = *(_QWORD*)(a1 + 552);
            }
            else {
              v20 = 0;
              v17 = 0;
              v19 = 0;
            }
            v39_.v40 = v17;
            v39_.v41 = v20;
            v21 = *(unsigned int*)(a2 + 20);
            v39_.v44 = v7;
            v39_.v45 = v16;
            LODWORD(v39_.v39) = 72;
            v39_.v42 = v19;
            v39_.v43 = v21;
            *((_QWORD*)&v39_.v39 + 1) = *(_QWORD*)a1;
            cuda_driver_20b420(0xDu, 6u, (__int64)&v39_.v39);
          }
          goto LABEL_24;
        }
        if (CudaDriverRoutine_e5960(*(_QWORD*)a1) &&
            (unsigned int)CudaDriverRoutine_11d560(v13, 6u) != 0) {
        LABEL_17:
          v13 = *(_QWORD*)a1;
          goto LABEL_18;
        }
        v14 = *(_QWORD*)(v13 + 1064);
        v15 = *(_DWORD*)(v14 + 548);
        LODWORD(v14) = *(_DWORD*)(v14 + 544);
        v39_.v39 = CudaDriverData_1115be0;
        LODWORD(result) = CudaDriverRoutine_ee030(
            v13, (unsigned int)(v14 * v15), &v38, &v39_.v39);
        if ((_DWORD)result == 0) {
          CudaDriverRoutine_ee2a0(v13,
                                  *(_QWORD*)(*(_QWORD*)(v13 + 1064) + 520LL));
          *(_QWORD*)(*(_QWORD*)(v13 + 1064) + 520LL) = v38;
          goto LABEL_17;
        }
      }
    LABEL_34:
      v29 = *(_QWORD*)a1;
      v30 = *(_QWORD*)(a1 + 456);
      v31 = result;
      *(_DWORD*)(a1 + 448) = 0;
      if (v30 != 0) {
        CudaDriverRoutine_ee2a0(v29, v30);
        *(_QWORD*)(a1 + 456) = 0;
      }
      v32 = *(_QWORD*)(a1 + 464);
      if (v32 != 0) {
        CudaDriverRoutine_ee2a0(v29, v32);
        *(_QWORD*)(a1 + 464) = 0;
      }
      v33 = *(_QWORD*)(a1 + 472);
      if (v33 != 0) {
        CudaDriverRoutine_ee2a0(v29, v33);
        *(_QWORD*)(a1 + 472) = 0;
      }
      v34 = *(_QWORD*)a1;
      v35 = *(_QWORD*)(a1 + 504);
      *(_QWORD*)(a1 + 488) = 0;
      *(_QWORD*)(a1 + 496) = 0;
      *(_QWORD*)(a1 + 552) = 0;
      if (v35 != 0) {
        CudaDriverRoutine_ee2a0(v34, v35);
        *(_QWORD*)(a1 + 504) = 0;
      }
      v36 = *(_QWORD*)(a1 + 512);
      if (v36 != 0) {
        CudaDriverRoutine_ee2a0(v34, v36);
        *(_QWORD*)(a1 + 512) = 0;
      }
      v37 = *(_QWORD*)(a1 + 520);
      if (v37 != 0) {
        CudaDriverRoutine_ee2a0(v34, v37);
        *(_QWORD*)(a1 + 520) = 0;
      }
      *(_OWORD*)(a1 + 536) = (__typeof__(*(_OWORD*)(a1 + 536))){0};
      cuda_driver_8f4b0((__int64*)a1);
      return v31;
    }
  }
LABEL_24:
  v22 = *(_QWORD*)a1;
  v23 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 64LL) + 3768LL) * a3 *
        *(_DWORD*)(*(_QWORD*)a1 + 164LL);
  if (*(_DWORD*)(a1 + 500) != v23) {
    v24 = *(_QWORD*)(a1 + 456);
    if (v24 != 0) {
      CudaDriverRoutine_ee2a0(*(_QWORD*)a1, v24);
      *(_QWORD*)(a1 + 456) = 0;
    }
    v25 = *(_QWORD*)(a1 + 464);
    if (v25 != 0) {
      CudaDriverRoutine_ee2a0(v22, v25);
      *(_QWORD*)(a1 + 464) = 0;
    }
    v26 = *(_QWORD*)(a1 + 472);
    if (v26 != 0) {
      CudaDriverRoutine_ee2a0(v22, v26);
      *(_QWORD*)(a1 + 472) = 0;
    }
    *(_QWORD*)(a1 + 488) = 0;
    *(_QWORD*)(a1 + 496) = 0;
    if (v23 != 0) {
      v27 = *(_QWORD*)a1;
      v28 = (*(__int64 (**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 + 64LL) +
                                      18424LL))(22);
      LODWORD(result) =
          CudaDriverRoutine_91f30(v27, a1 + 456, v23, v28, 3, 0, 0);
      if ((_DWORD)result != 0) {
        goto LABEL_34;
      }
    }
  }
  *(_DWORD*)(a1 + 448) = a3;
  result = cuda_driver_8f4b0((__int64*)a1);
  if ((_DWORD)result != 0) {
    goto LABEL_34;
  }
  return result;
}

__int64** cuda_driver_911e0(__int64** result)
{
  __int64* v1;
  __int64** v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *result;
  if (*result != nullptr) {
    v2 = result;
    if (*((_BYTE*)((_UNKNOWN*)0x147CLL) + (_QWORD)CudaDriverData_1422118) ==
        0) {
      v3 = (_QWORD*)v1[82];
      if (v3 != nullptr) {
        CudaDriverRoutine_94090(v3, *v1);
        v1[82] = 0;
      }
    }
    if (v1[2] != 0) {
      v1[2] = 0;
    }
    v4 = v1[71];
    if (v4 != 0) {
      CudaDriverRoutine_ee2a0(*v1, v4);
    }
    v5 = v1[48];
    if (v5 != 0) {
      CudaDriverRoutine_ee2a0(*v1, v5);
      v1[48] = 0;
    }
    v6 = v1[47];
    if (v6 != 0) {
      CudaDriverRoutine_ee2a0(*v1, v6);
      v1[47] = 0;
    }
    v7 = v1[45];
    if (v7 != 0) {
      CudaDriverRoutine_ee2a0(*v1, v7);
      v1[45] = 0;
    }
    v8 = v1[46];
    if (v8 != 0) {
      CudaDriverRoutine_ee2a0(*v1, v8);
      v1[46] = 0;
    }
    v9 = v1[70];
    if (v9 != 0) {
      CudaDriverRoutine_ee2a0(*v1, v9);
      v1[70] = 0;
    }
    CudaDriverRoutine_912d0(v1);
    v1[3] = 0;
    cuda_driver_8f4b0(v1);
    result = (__int64**)CudaDriverRoutine_12e340((__int64)v1);
    *v2 = nullptr;
  }
  return result;
}

__int64 cuda_driver_92850(__int64 a1)
{
  __int64 result;

  if (CudaDriverRoutine_8f480((_QWORD*)(*(_QWORD*)(a1 + 32) + 288LL))) {
    CudaDriverRoutine_91a90((_QWORD*)(a1 + 848));
  }
  result = cuda_driver_helpers_b92e0(a1);
  if ((_BYTE)result != 0) {
    *(_QWORD*)(a1 + 848) |= 0x60000000uLL;
  }
  return result;
}

__int64 cuda_driver_936c0(__int64* a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  struct {
    char gap0_[8];
    __int64 v13;
    __int128 v14;
    __int128 v15;
    __int128 v16;
    __int128 v17;
    __int128 v18;
    __int128 v19;
    __int128 v20;
    __int128 v21;
    __int128 v22;
    __int128 v23;
    __int128 v24;
    __int128 v25;
    __int128 v26;
    __int128 v27;
    __int128 v28;
    __int128 v29;
    __int128 v30;
    __int128 v31;
    __int128 v32;
    __int128 v33;
    __int128 v34;
    __int128 v35;
    __int128 v36;
    __int64 v37;
  } v13_;
  __int64 v38;

  result = cuda_driver_8f0c0(a2);
  if ((_DWORD)result != 0) {
    return result;
  }
  v5 = CudaDriverStub_12e330(64);
  if (v5 == 0) {
    return 2;
  }
  v6 = v5;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)v5 = a2;
  *(_OWORD*)(v5 + 40) = (__typeof__(*(_OWORD*)(v5 + 40))){0};
  *(_OWORD*)(v5 + 24) = (__typeof__(*(_OWORD*)(v5 + 24))){0};
  *(_OWORD*)(v5 + 8) = (__typeof__(*(_OWORD*)(v5 + 8))){0};
  *a1 = v5;
  v7 = CudaDriverStub_12e330(800);
  if (v7 == 0 || (*(_QWORD*)(v6 + 16) = v7, memset_plt(v7, 0, 800),
                  (v8 = CudaDriverStub_12e330(800)) == 0)) {
    LODWORD(result) = 2;
  LABEL_17:
    v12 = result;
    CudaDriverRoutine_94090((_QWORD*)v6, (__int64)a2);
    return v12;
  }
  *(_QWORD*)(v6 + 24) = v8;
  memset_plt(v8, 0, 800);
  LODWORD(result) = CudaDriverRoutine_ee160((__int64)a2, 800, &v13_.v13, 0, 3u);
  if ((_DWORD)result != 0) {
    goto LABEL_17;
  }
  v38 = 0;
  *(_QWORD*)(v6 + 32) = v13_.v13;
  v13_.v31 = (__typeof__(v13_.v31)){0};
  v13_.v32 = (__typeof__(v13_.v32)){0};
  v13_.v33 = (__typeof__(v13_.v33)){0};
  v13_.v34 = (__typeof__(v13_.v34)){0};
  v9 = a2[10];
  v13_.v30 = (__typeof__(v13_.v30)){0};
  v13_.v37 = 0;
  v13_.v29 = (__typeof__(v13_.v29)){0};
  v13_.v28 = (__typeof__(v13_.v28)){0};
  v13_.v27 = (__typeof__(v13_.v27)){0};
  v13_.v26 = (__typeof__(v13_.v26)){0};
  v13_.v25 = (__typeof__(v13_.v25)){0};
  v13_.v24 = (__typeof__(v13_.v24)){0};
  v13_.v23 = (__typeof__(v13_.v23)){0};
  v13_.v22 = (__typeof__(v13_.v22)){0};
  v13_.v35 = (__typeof__(v13_.v35)){0};
  v13_.v36 = (__typeof__(v13_.v36)){0};
  v13_.v16 = (__typeof__(v13_.v16)){0};
  v13_.v17 = (__typeof__(v13_.v17)){0};
  v13_.v18 = (__typeof__(v13_.v18)){0};
  v13_.v19 = (__typeof__(v13_.v19)){0};
  v13_.v20 = (__typeof__(v13_.v20)){0};
  v13_.v21 = (__typeof__(v13_.v21)){0};
  v10 = (*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) &
         1) != 0
            ? 0x11D000211LL
            : 0x11D000219LL;
  v13_.v13 = v10;
  v13_.v14 = (__typeof__(v13_.v14)){0};
  v13_.v15 = (__typeof__(v13_.v15)){0};
  LODWORD(result) = cuda_driver_1da1b0(v9, &v13_.v13, 16947200, &v38);
  if ((_DWORD)result != 0) {
    goto LABEL_17;
  }
  cuda_driver_ef110(v38, 5u);
  v11 = CudaDriverStub_1dbab0(v38);
  memset_plt(v11, 0, 16947200);
  *(_QWORD*)(v6 + 8) = v38;
  LODWORD(result) = CudaDriverRoutine_ee160((__int64)a2, 128, &v13_.v13, 0, 7u);
  if ((_DWORD)result != 0) {
    goto LABEL_17;
  }
  LODWORD(result) =
      CudaDriverRoutine_104d90((__int64)a2, v13_.v13, 0, 32, a2[12]);
  if ((_DWORD)result != 0) {
    goto LABEL_17;
  }
  *(_QWORD*)(v6 + 40) = v13_.v13;
  LODWORD(result) = CudaDriverRoutine_93910((__int64)a2, (_QWORD*)v6);
  if ((_DWORD)result != 0) {
    goto LABEL_17;
  }
  CudaDriverRoutine_93b60(*(_QWORD*)(v6 + 8), *(__int64**)(v6 + 16));
  LODWORD(result) = CudaDriverRoutine_93d70(v6);
  if ((_DWORD)result != 0) {
    goto LABEL_17;
  }
  result = CudaDriverRoutine_93fe0((__int64)a2, v6);
  if ((_DWORD)result != 0) {
    goto LABEL_17;
  }
  return result;
}

__int64 cuda_driver_96040(__int64* a1, __int64 a2, unsigned int a3)
{
  __int64 v6;
  __int64* v7;
  unsigned __int64 i;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int* v43;
  int* v44;
  unsigned int v45;
  _QWORD* v46;
  __int64 v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned int v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64* v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64* v81;
  __int64* v82;
  __int64 v83;
  int64x2_t v84;
  __int64 v85;
  int64x2_t v86;
  int64x2_t v87;
  int64x2_t v88;
  unsigned int v89;
  int64x2_t v90;
  int64x2_t* v91;
  int64x2_t v92;
  unsigned __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned int v97;
  int v98;
  char v99[4];
  struct {
    char gap48_[8];
    __int64 v100;
    __int128 v101;
    __int128 v102;
    __int128 v103;
    __int128 v104;
    __int128 v105;
    __int128 v106;
    __int128 v107;
    __int128 v108;
    __int128 v109;
    __int128 v110;
    __int128 v111;
    __int128 v112;
    __int128 v113;
    __int128 v114;
    __int128 v115;
    __int128 v116;
    __int128 v117;
    __int128 v118;
    __int128 v119;
    __int128 v120;
    __int128 v121;
    __int128 v122;
    __int128 v123;
    __int64 v124;
  } v100_;

  v99[0] = 0;
  CudaDriverStub_107f90_alt1(a1 + 1);
  v7 = a1 + 4;
  v6 = a1[4];
  LODWORD(i) = 0;
  if (v6 != 0 && a3 != 0) {
    for (i = 0; v6 != 0 && i < a3; ++i) {
      while (*(_BYTE*)(v6 + 32) != 0) {
        v6 = *(_QWORD*)(v6 + 40);
        if (v6 == 0) {
          goto LABEL_6;
        }
      }
      *(_QWORD*)(a2 + 8 * i) = v6;
      --*(_DWORD*)(*(_QWORD*)(v6 + 56) + 20LL);
      v6 = *(_QWORD*)(v6 + 40);
      v12 = *(_QWORD*)(a2 + 8 * i);
      if (a1[5] == v12) {
        a1[5] = *(_QWORD*)(v12 + 48);
        v12 = *(_QWORD*)(a2 + 8 * i);
        if (*v7 != v12) {
        LABEL_18:
          *(_QWORD*)(*(_QWORD*)(v12 + 48) + 40LL) = *(_QWORD*)(v12 + 40);
          v13 = *(_QWORD*)(a2 + 8 * i);
          v14 = *(_QWORD*)(v13 + 40);
          if (v14 == 0) {
            goto LABEL_24;
          }
          v15 = *(_QWORD*)(v13 + 48);
          goto LABEL_23;
        }
      }
      else if (*v7 != v12) {
        goto LABEL_18;
      }
      v14 = *(_QWORD*)(v12 + 40);
      *v7 = v14;
      if (v14 != 0) {
        v15 = 0;
      LABEL_23:
        *(_QWORD*)(v14 + 48) = v15;
      }
    LABEL_24:
      *(_QWORD*)(*(_QWORD*)(a2 + 8 * i) + 48LL) = 0;
      v16 = *(_QWORD*)(a2 + 8 * i);
      *(_QWORD*)(v16 + 40) = 0;
    }
  }
LABEL_6:
  v10 = *v7;
  if (*v7 == 0 || (unsigned int)i >= a3) {
    if ((unsigned int)i < a3) {
      goto LABEL_38;
    }
  LABEL_98:
    v24 = 0;
    goto LABEL_99;
  }
  v17 = (__int64*)(a2 + 8LL * (unsigned int)i);
  v18 = (unsigned int)i + 1LL;
  do {
    *v17 = v10;
    v19 = v18;
    --*(_DWORD*)(*(_QWORD*)(v10 + 56) + 20LL);
    v10 = *(_QWORD*)(v10 + 40);
    v20 = *v17;
    if (a1[5] == *v17) {
      a1[5] = *(_QWORD*)(v20 + 48);
      v20 = *v17;
      if (*v7 != *v17) {
      LABEL_29:
        *(_QWORD*)(*(_QWORD*)(v20 + 48) + 40LL) = *(_QWORD*)(v20 + 40);
        v21 = *(_QWORD*)(*v17 + 40);
        if (v21 != 0) {
          v22 = *(_QWORD*)(*v17 + 48);
        LABEL_34:
          *(_QWORD*)(v21 + 48) = v22;
          goto LABEL_35;
        }
        goto LABEL_35;
      }
    }
    else if (*v7 != v20) {
      goto LABEL_29;
    }
    v21 = *(_QWORD*)(v20 + 40);
    *v7 = v21;
    if (v21 != 0) {
      v22 = 0;
      goto LABEL_34;
    }
  LABEL_35:
    LODWORD(i) = i + 1;
    *(_QWORD*)(*v17 + 48) = 0;
    v23 = *v17++;
    *(_QWORD*)(v23 + 40) = 0;
    if (v10 == 0) {
      break;
    }
    v18 = v19 + 1;
  } while (v19 < a3);
  if (v19 >= a3) {
    goto LABEL_98;
  }
LABEL_38:
  v24 = CudaDriverRoutine_9ab30(*(_QWORD*)(*a1 + 64), v99);
  if (v24 != 0) {
    if ((_DWORD)i == 0) {
      goto LABEL_99;
    }
    goto LABEL_40;
  }
  if (v99[0] != 0) {
    v38 = (a3 - (_DWORD)i + 15) & 0xFFFFFFF0;
  }
  else {
    v38 = (a3 - (_DWORD)i + 31) & 0xFFFFFFE0;
  }
  if ((unsigned int)v38 < a3 - (unsigned int)i) {
    v24 = 999;
    if ((_DWORD)i == 0) {
      goto LABEL_99;
    }
    goto LABEL_40;
  }
  CudaDriverStub_108070_alt1(a1 + 1);
  v39 = (_QWORD*)*a1;
  v40 = *((unsigned __int8*)a1 + 24);
  v41 = *((unsigned int*)a1 + 7);
  v42 = *(_QWORD*)(CudaDriverRoutine_98340(*a1) + 64);
  v43 = (int*)(v42 + 3808);
  v44 = (int*)(v42 + 4 * v41 + 14844);
  if (v40 != 0) {
    v44 = v43;
  }
  v98 = *v44;
  v45 = *(_DWORD*)(v39[8] + 3780LL);
  v46 = (_QWORD*)CudaDriverRoutine_12e510(1, 40);
  if (v46 == nullptr) {
    v24 = 2;
    CudaDriverStub_107f90_alt1(a1 + 1);
    if ((_DWORD)i == 0) {
      goto LABEL_99;
    }
    goto LABEL_40;
  }
  v47 = (__int64)v46;
  v100_.v118 = (__typeof__(v100_.v118)){0};
  v100_.v119 = (__typeof__(v100_.v119)){0};
  v100_.v120 = (__typeof__(v100_.v120)){0};
  v100_.v121 = (__typeof__(v100_.v121)){0};
  v100_.v117 = (__typeof__(v100_.v117)){0};
  v100_.v102 = (__typeof__(v100_.v102)){0};
  v100_.v122 = (__typeof__(v100_.v122)){0};
  v100_.v123 = (__typeof__(v100_.v123)){0};
  // Keeps clang from merging the zeroing into a memset call.
  __asm__ volatile("" ::: "memory");
  v48 = (v98 + v45 - 1) / v45 * v45;
  v100_.v103 = (__typeof__(v100_.v103)){0};
  v100_.v104 = (__typeof__(v100_.v104)){0};
  v100_.v105 = (__typeof__(v100_.v105)){0};
  v100_.v106 = (__typeof__(v100_.v106)){0};
  v100_.v124 = 0;
  __asm__ volatile("" ::: "memory");
  v100_.v116 = (__typeof__(v100_.v116)){0};
  v100_.v115 = (__typeof__(v100_.v115)){0};
  v100_.v114 = (__typeof__(v100_.v114)){0};
  v100_.v113 = (__typeof__(v100_.v113)){0};
  v100_.v112 = (__typeof__(v100_.v112)){0};
  v100_.v111 = (__typeof__(v100_.v111)){0};
  __asm__ volatile("" ::: "memory");
  v100_.v110 = (__typeof__(v100_.v110)){0};
  v100_.v109 = (__typeof__(v100_.v109)){0};
  v100_.v107 = (__typeof__(v100_.v107)){0};
  v100_.v108 = (__typeof__(v100_.v108)){0};
  v49 =
      *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)CudaDriverData_1422118);
  v100_.v101 = (__typeof__(v100_.v101)){0};
  v100_.v100 = 0x10C002402LL;
  if (v49 == 2) {
    *(_QWORD*)&v100_.v101 = 0x400000000LL;
  }
  v50 = cuda_driver_1da1b0(v39[10], &v100_.v100,
                           v48 * (unsigned __int64)(unsigned int)v38, v46);
  if (v50 != 0) {
    v24 = v50;
    if (*(_QWORD*)v47 != 0) {
      goto LABEL_71;
    }
  LABEL_72:
    if (*(_QWORD*)(v47 + 8) != 0) {
      v51 = 24;
      do {
        CudaDriverRoutine_1ba520(*(_QWORD*)(*(_QWORD*)(v47 + 8) + v51));
        --v38;
        v51 += 64;
      } while (v38 != 0);
      CudaDriverRoutine_12e340(*(_QWORD*)(v47 + 8));
    }
    CudaDriverRoutine_12e340(v47);
    CudaDriverStub_107f90_alt1(a1 + 1);
    if ((_DWORD)i == 0) {
      goto LABEL_99;
    }
  LABEL_40:
    v25 = (unsigned int)(i - 1);
    if ((int)i - 1 < 0) {
      goto LABEL_99;
    }
    v26 = v25 + 1;
    v27 = (__int64*)(a2 + 8LL * (unsigned int)v25);
    while (2) {
      v30 = *v27;
      if (*v27 != 0) {
        if (*(_BYTE*)(v30 + 32) != 0) {
          v31 = a1[5];
          if (v31 != 0) {
            *(_QWORD*)(v30 + 48) = v31;
            *(_QWORD*)(*v27 + 40) = *(_QWORD*)(a1[5] + 40);
            v32 = *v27;
            v33 = *(_QWORD*)(*v27 + 40);
            if (v33 != 0) {
              *(_QWORD*)(v33 + 48) = v32;
              v32 = *v27;
            }
            *(_QWORD*)(a1[5] + 40) = v32;
          LABEL_43:
            v28 = v27;
          }
          else {
            *(_QWORD*)(v30 + 40) = *v7;
            v28 = v27;
            v36 = *v27;
            *v7 = *v27;
            v37 = *(_QWORD*)(v36 + 40);
            if (v37 != 0) {
              *(_QWORD*)(v37 + 48) = v36;
              goto LABEL_43;
            }
          }
        LABEL_44:
          a1[5] = *v28;
        }
        else {
          *(_QWORD*)(v30 + 40) = *v7;
          v34 = *v27;
          *v7 = *v27;
          v35 = *(_QWORD*)(v34 + 40);
          if (v35 != 0) {
            *(_QWORD*)(v35 + 48) = v34;
          }
          v28 = a1 + 4;
          if (a1[5] == 0) {
            goto LABEL_44;
          }
        }
        ++*(_DWORD*)(*(_QWORD*)(*v27 + 56) + 20LL);
        *v27 = 0;
      }
      v29 = v26-- <= 1;
      --v27;
      if (v29) {
        goto LABEL_99;
      }
      continue;
    }
  }
  v52 = CudaDriverRoutine_12e510(v38, 64);
  *(_QWORD*)(v47 + 8) = v52;
  if (v52 == 0) {
    v24 = 2;
    if (*(_QWORD*)v47 == 0) {
      goto LABEL_72;
    }
    goto LABEL_71;
  }
  v53 = *(_QWORD*)v47;
  v97 = v48;
  v93 = (unsigned __int64*)(v47 + 8);
  v94 = a3 - (unsigned int)i;
  v95 = a2;
  *(_DWORD*)(v47 + 16) = v38;
  v96 = CudaDriverStub_1db800(v53);
  v54 = 0;
  v55 = 0;
  v56 = v38;
  do {
    *(_QWORD*)(*(_QWORD*)(v47 + 8) + v54 + 56) = v47;
    *(_QWORD*)(*(_QWORD*)(v47 + 8) + v54 + 16) = *(_QWORD*)v47;
    *(_QWORD*)(*(_QWORD*)(v47 + 8) + v54) = v96 + v97 * v55;
    *(_DWORD*)(*(_QWORD*)(v47 + 8) + v54 + 8) = v98;
    *(_BYTE*)(*(_QWORD*)(v47 + 8) + v54 + 32) = 0;
    v57 = CudaDriverRoutine_1ba480((_QWORD*)(*(_QWORD*)(v47 + 8) + v54 + 24),
                                   v39[9]);
    if (v57 != 0) {
      a2 = v95;
      v24 = v57;
      if (*(_QWORD*)v47 == 0) {
        goto LABEL_72;
      }
    LABEL_71:
      CudaDriverStub_1db190(v47);
      goto LABEL_72;
    }
    ++v55;
    --v56;
    v54 += 64;
  } while (v56 != 0);
  CudaDriverStub_107f90_alt1(a1 + 1);
  *(_QWORD*)(v47 + 24) = a1[6];
  a1[6] = v47;
  v58 = *(_QWORD*)(v47 + 24);
  if (v58 != 0) {
    *(_QWORD*)(v58 + 32) = v47;
  }
  v59 = a3 - (unsigned int)i;
  if (a3 != (_DWORD)i) {
    if ((unsigned int)v94 < 0x10) {
      goto LABEL_88;
    }
    v60 = 0;
    if (!__CFADD__((_DWORD)i, v94 - 1) &&
        (unsigned __int64)(v94 - 1) >> 32 == 0) {
      if ((unsigned __int64)v93 <
              v95 + 8 * (v94 + (unsigned __int64)(unsigned int)i) &&
          v95 + 8 * (unsigned __int64)(unsigned int)i < v47 + 16) {
      LABEL_88:
        v60 = 0;
      }
      else {
        v60 = (unsigned int)v94 & 0xFFFFFFFC;
        v84 = COERCE_AS(int64x2_t, CudaDriverData_1115780);
        v85 = v60;
        v86 = vdupq_n_s64(*v93);
        v87 = vdupq_n_s64(0x80u);
        v88 = vdupq_n_s64(4u);
        v89 = i;
        do {
          v90 = vshlq_n_s64(v84, 6u);
          v84 = vaddq_s64(v84, v88);
          v91 = (int64x2_t*)(v95 + 8LL * v89);
          v85 -= 4;
          v89 += 4;
          v92 = vaddq_s64(v86, v90);
          *v91 = v92;
          v91[1] = vaddq_s64(v92, v87);
        } while (v85 != 0);
        if (v60 == v94) {
          goto LABEL_96;
        }
      }
    }
    v61 = ((_BYTE)a3 - (_BYTE)i - (_BYTE)v60) & 7;
    v62 = v60;
    if ((((_BYTE)a3 - (_BYTE)i - (_BYTE)v60) & 7) != 0) {
      v63 = -v60;
      v64 = i + v60;
      v65 = v60 << 6;
      do {
        --v63;
        --v61;
        v66 = *v93 + v65;
        v65 += 64;
        *(_QWORD*)(v95 + 8LL * v64++) = v66;
      } while (v61 != 0);
      v62 = -v63;
    }
    if ((unsigned __int64)(v60 - v94) <= 0xFFFFFFFFFFFFFFF8LL) {
      v67 = (v62 << 6) + 448;
      do {
        v68 = i + v62;
        v62 += 8;
        *(_QWORD*)(v95 + 8LL * v68) = *v93 + v67 - 448;
        *(_QWORD*)(v95 + 8LL * (v68 + 1)) = *v93 + v67 - 384;
        *(_QWORD*)(v95 + 8LL * (v68 + 2)) = *v93 + v67 - 320;
        *(_QWORD*)(v95 + 8LL * (v68 + 3)) = *v93 + v67 - 256;
        *(_QWORD*)(v95 + 8LL * (v68 + 4)) = *v93 + v67 - 192;
        *(_QWORD*)(v95 + 8LL * (v68 + 5)) = *v93 + v67 - 128;
        *(_QWORD*)(v95 + 8LL * (v68 + 6)) = *v93 + v67 - 64;
        v69 = *v93 + v67;
        v67 += 512;
        *(_QWORD*)(v95 + 8LL * (v68 + 7)) = v69;
      } while (v94 != v62);
    }
  }
LABEL_96:
  *(_DWORD*)(v47 + 20) = v38 - v94;
  if ((unsigned int)v38 <= (unsigned int)v94) {
    goto LABEL_98;
  }
  v70 = a1[5];
  v71 = v38 - v94;
  v24 = 0;
  v72 = (v94 << 6) | 0x28;
  do {
    v75 = *v93;
    if (v70 != 0) {
      *(_QWORD*)(v75 + v72 + 8) = v70;
      *(_QWORD*)(*v93 + v72) = *(_QWORD*)(a1[5] + 40);
      v76 = *v93;
      v77 = (__int64*)(*v93 + v72);
      v80 = *v77;
      v78 = v77 - 5;
      v79 = v80;
      if (v80 != 0) {
        *(_QWORD*)(v79 + 48) = v78;
        v76 = *v93;
      }
      *(_QWORD*)(a1[5] + 40) = v76 + v72 - 40;
    }
    else {
      *(_QWORD*)(v75 + v72) = *v7;
      v81 = (__int64*)(*v93 + v72);
      v82 = v81 - 5;
      *v7 = (__int64)(v81 - 5);
      v83 = *v81;
      if (v83 != 0) {
        *(_QWORD*)(v83 + 48) = v82;
      }
    }
    --v71;
    v70 = *v93 + (v59 << 6);
    v74 = *v93 + v72;
    ++v59;
    v72 += 64;
    a1[5] = v74 - 40;
  } while (v71 != 0);
LABEL_99:
  CudaDriverStub_108070_alt1(a1 + 1);
  return v24;
}

__int64 cuda_driver_97330(int a1, char* a2, __int64 a3, unsigned __int64* a4)
{
  unsigned int v7;
  bool v8;
  char v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v13;

  if (a3 != 0) {
    v13 = a3;
  }
  else {
    v7 = CudaDriverRoutine_df060(&v13);
    if (v7 != 0) {
      return v7;
    }
  }
  if (a1 <= 2) {
    if (a1 == 1) {
      if (a2 != nullptr) {
        if (*a4 == 1) {
          v7 = 0;
          *a2 = *(_BYTE*)(v13 + 16480);
          return v7;
        }
        return 1;
      }
    }
    else {
      if (a1 != 2) {
        goto LABEL_33;
      }
      if (a2 != nullptr) {
        if (*a4 != 1) {
          v7 = 1;
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"Invalid value provided for parameter '*size' on "
                       "coredump attribute %d. Expected value: %lu Given "
                       "Value: %lu\n",
              2, 1, *a4);
          return v7;
        }
        v7 = 0;
        v8 = (*(_DWORD*)(v13 + 16484) & 0x10) == 0;
      LABEL_20:
        v9 = v8;
        *a2 = v9;
        return v7;
      }
    }
  LABEL_32:
    v7 = 0;
    *a4 = 1;
    return v7;
  }
  if (a1 == 3) {
    if (a2 != nullptr) {
      if (*a4 != 1) {
        v7 = 1;
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Invalid value provided for parameter '*size' on "
                     "attribute %d. Expected value: %lu Given Value: %lu\n",
            3, 1, *a4);
        return v7;
      }
      v7 = 0;
      v8 = (~*(_DWORD*)(v13 + 16484) & 0x2F) == 0;
      goto LABEL_20;
    }
    goto LABEL_32;
  }
  if (a1 != 5) {
    if (a1 == 7) {
      if (a2 == nullptr) {
        v7 = 0;
        *a4 = 4;
        return v7;
      }
      if (*a4 == 4) {
        v7 = 0;
        *(_DWORD*)a2 = *(_DWORD*)(v13 + 16484);
        return v7;
      }
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Invalid value provided for parameter '*size' on attribute "
                   "%d. Expected value: %lu Given Value: %lu\n",
          7, 4, *a4);
      return 1;
    }
  LABEL_33:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Unknown Coredump attribute %d\n", a1);
    return 1;
  }
  if (a2 == nullptr) {
    v7 = 0;
    *a4 = 64;
    return v7;
  }
  v10 = v13;
  v11 = *a4;
  if (v11 < strlen_plt(v13 + 16488)) {
    return 1;
  }
  if (v11 >= 0x3F) {
    v11 = 63;
  }
  strncpy_plt(a2, v10 + 16488, v11);
  v7 = 0;
  a2[v11] = 0;
  return v7;
}

__int64 cuda_driver_97bc0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  void* v7;
  unsigned int v8;
  int v9;
  __int64 v11;
  __int64 v12;
  double v13;
  bool v14;
  char v15;
  char v16;
  __int64 (*v17)();
  __int64 (*v18)();
  __int64 (*v19)();
  __int64 (*v20)();
  __int64 (*v21)();
  _QWORD v22[10];

  *(_QWORD*)(a1 + 256) = 0;
  *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
  *(_OWORD*)(a1 + 16) = (__typeof__(*(_OWORD*)(a1 + 16))){0};
  *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
  *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
  *(_OWORD*)(a1 + 64) = (__typeof__(*(_OWORD*)(a1 + 64))){0};
  *(_OWORD*)(a1 + 80) = (__typeof__(*(_OWORD*)(a1 + 80))){0};
  *(_OWORD*)(a1 + 96) = (__typeof__(*(_OWORD*)(a1 + 96))){0};
  *(_OWORD*)(a1 + 112) = (__typeof__(*(_OWORD*)(a1 + 112))){0};
  *(_OWORD*)(a1 + 128) = (__typeof__(*(_OWORD*)(a1 + 128))){0};
  *(_OWORD*)(a1 + 144) = (__typeof__(*(_OWORD*)(a1 + 144))){0};
  *(_OWORD*)(a1 + 160) = (__typeof__(*(_OWORD*)(a1 + 160))){0};
  *(_OWORD*)(a1 + 176) = (__typeof__(*(_OWORD*)(a1 + 176))){0};
  *(_OWORD*)(a1 + 192) = (__typeof__(*(_OWORD*)(a1 + 192))){0};
  *(_OWORD*)(a1 + 208) = (__typeof__(*(_OWORD*)(a1 + 208))){0};
  *(_OWORD*)(a1 + 224) = (__typeof__(*(_OWORD*)(a1 + 224))){0};
  *(_OWORD*)(a1 + 240) = (__typeof__(*(_OWORD*)(a1 + 240))){0};
  if (a3 > 0xFF) {
    return 1;
  }
  v6 = 1;
  if ((a3 & 7) <= 4 && (a3 & 7) != 3) {
    v22[8] = v4;
    v22[9] = v5;
    *(_QWORD*)a1 = a2;
    *(_DWORD*)(a1 + 16) = a4;
    v7 = CudaDriverData_1422118;
    v8 = ((a3 >> 1) & 0x20 | a3) & ~*(_DWORD*)((char*)((_UNKNOWN*)0x10F4LL) +
                                               (_QWORD)CudaDriverData_1422118);
    v9 = *(_DWORD*)((char*)((_UNKNOWN*)0x10F0LL) +
                    (_QWORD)CudaDriverData_1422118);
    *(_BYTE*)(a1 + 24) = 0;
    *(_DWORD*)(a1 + 8) = v8 | v9;
    if ((*((_BYTE*)&CudaDriverRoutine_4764 + (_QWORD)v7 + 2) & 1) != 0) {
      v11 = a2;
      v12 = a1;
      if ((unsigned int)CudaDriverRoutine_12e300() == 0) {
        v13 = atof_plt(v22);
        if (v13 <= 0x0.0p+0 || v13 >= 0x1.9000000000000p+6) {
          CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                  (__int64)"Value (%f) for %s is not within "
                                           "the valid range (0, 100)\n",
                                  v13, "CUDA_MPS_ACTIVE_THREAD_PERCENTAGE");
        }
        else {
          *(_DWORD*)(v12 + 208) = 3;
          if (v13 >= *(double*)((char*)((_UNKNOWN*)0x1210LL) + (_QWORD)v7)) {
            v13 = *(double*)((char*)((_UNKNOWN*)0x1210LL) + (_QWORD)v7);
          }
          *(double*)(v12 + 216) = v13;
        }
      }
      a1 = v12;
      a2 = v11;
    }
    else if (*(double*)((char*)((_UNKNOWN*)0x1210LL) + (_QWORD)v7) <
             0x1.9000000000000p+6) {
      *(_DWORD*)(a1 + 208) = 2;
      *(_QWORD*)(a1 + 216) =
          *(_QWORD*)((char*)((_UNKNOWN*)0x1210LL) + (_QWORD)v7);
    }
    *(_WORD*)(a1 + 113) = 0;
    v14 = false;
    if ((*((_BYTE*)&CudaDriverRoutine_474c + (_QWORD)v7 + 3) & 1) == 0) {
      v14 = *(_DWORD*)(a2 + 21864) == 1;
    }
    *(_BYTE*)(a1 + 115) = v14;
    *(_DWORD*)(a1 + 116) = 0;
    v6 = 0;
    v15 = *((_BYTE*)&CudaDriverRoutine_4700 + (_QWORD)v7 + 2);
    *(_DWORD*)(a1 + 84) = 32;
    *(_DWORD*)(a1 + 92) = 64;
    *(_BYTE*)(a1 + 120) = v15;
    *(_DWORD*)(a1 + 96) =
        *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v7) > 1u;
    *(_DWORD*)(a1 + 104) =
        *(_DWORD*)((char*)&CudaDriverRoutine_4704 + (_QWORD)v7);
    v16 = *((_BYTE*)&CudaDriverRoutine_4700 + (_QWORD)v7 + 3);
    v17 = CudaDriverData_1423190[0];
    *(_DWORD*)(a1 + 108) = -1;
    v18 = CudaDriverData_1423198[0];
    *(_QWORD*)(a1 + 128) = v17;
    *(_QWORD*)(a1 + 136) = v18;
    v19 = CudaDriverData_14231a0[0];
    *(_BYTE*)(a1 + 112) = v16;
    v20 = CudaDriverData_14231a8[0];
    *(_QWORD*)(a1 + 144) = v19;
    *(_QWORD*)(a1 + 152) = v20;
    *(__int64 (**)(void))(a1 + 160) = CudaDriverData_14231b0[0];
    *(_QWORD*)(a1 + 168) = CudaDriverRoutine_97e00;
    v21 = CudaDriverData_14231b8;
    *(_QWORD*)(a1 + 256) = 0;
    *(_QWORD*)(a1 + 176) = v21;
  }
  return v6;
}

__int64 cuda_driver_97ff0(__int64 result, __int64 a2, _QWORD* a3)
{
  __int64 v4;

  if (a2 == 0 || (*(_WORD*)((_BYTE*)&CudaDriverRoutine_4484 +
                            (_QWORD)CudaDriverData_1422118) &
                  0x80) == 0) {
    v4 = result;
  }
  else {
    v4 = a2;
  }
  *a3 = *(_QWORD*)(result + 8LL * **(unsigned int**)(v4 + 64) + 248);
  return result;
}

__int64 cuda_driver_98130(__int64 a1)
{
  __int64 v1;

  if (*(_DWORD*)a1 == 1) {
    *(_OWORD*)(a1 + 16) = (__typeof__(*(_OWORD*)(a1 + 16))){0};
    *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
    *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
    *(_OWORD*)(a1 + 64) = (__typeof__(*(_OWORD*)(a1 + 64))){0};
    *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
    *(_OWORD*)(a1 + 80) = (__typeof__(*(_OWORD*)(a1 + 80))){0};
    *(_OWORD*)(a1 + 96) = (__typeof__(*(_OWORD*)(a1 + 96))){0};
    *(_OWORD*)(a1 + 112) = (__typeof__(*(_OWORD*)(a1 + 112))){0};
    *(_OWORD*)(a1 + 128) = (__typeof__(*(_OWORD*)(a1 + 128))){0};
    *(_OWORD*)(a1 + 144) = (__typeof__(*(_OWORD*)(a1 + 144))){0};
    *(_OWORD*)(a1 + 160) = (__typeof__(*(_OWORD*)(a1 + 160))){0};
    *(_OWORD*)(a1 + 176) = (__typeof__(*(_OWORD*)(a1 + 176))){0};
    *(_OWORD*)(a1 + 192) = (__typeof__(*(_OWORD*)(a1 + 192))){0};
    *(_OWORD*)(a1 + 208) = (__typeof__(*(_OWORD*)(a1 + 208))){0};
    *(_OWORD*)(a1 + 224) = (__typeof__(*(_OWORD*)(a1 + 224))){0};
    *(_OWORD*)(a1 + 240) = (__typeof__(*(_OWORD*)(a1 + 240))){0};
    *(_OWORD*)(a1 + 256) = (__typeof__(*(_OWORD*)(a1 + 256))){0};
  }
  else {
    v1 = a1;
    CudaDriverRoutine_108490((_QWORD*)(a1 + 24));
    memset_plt(v1, 0, 17864);
    a1 = v1;
  }
  return CudaDriverRoutine_12e340(a1);
}

__int64 cuda_driver_98420(__int64 a1, __int64 a2)
{
  __int64 result;

  result = (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 21152LL))((void*)a1);
  if ((_DWORD)result == 0 && *((_BYTE*)((_UNKNOWN*)0x1860LL) +
                               (_QWORD)CudaDriverData_1422118 + 2) != 0) {
    return CudaDriverRoutine_12a410(a1, a2);
  }
  return result;
}

__int64 cuda_driver_985d0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 19472LL))((void*)a1);
}

__int64 cuda_driver_98c30(__int64 a1)
{
  __int64 result;

  result = cuda_driver_misc_helpers_de3a0();
  if ((_DWORD)result == 0) {
    __builtin_arm_dmb(0xFu);
    result = *(unsigned int*)(a1 + 15952);
    __builtin_arm_dmb(0xFu);
  }
  return result;
}

__int64 cuda_driver_98c70(__int64 a1, unsigned int a2)
{
  __int64 result;
  bool v5;

  __builtin_arm_dmb(0xFu);
  *(_DWORD*)(a1 + 15952) = a2;
  __builtin_arm_dmb(0xFu);
  if (*((_BYTE*)&CudaDriverRoutine_7488 + (_QWORD)CudaDriverData_1422118) !=
      0) {
    CudaDriverRoutine_98d00((_QWORD*)a1, a2);
  }
  result = cuda_driver_misc_helpers_de3a0();
  if ((_DWORD)result == 0) {
    v5 = a2 == 810 || a2 == 710;
    if (!v5 || *(_QWORD*)(a1 + 16136) == 0) {
      return cuda_driver_misc_helpers_de3c0(a2);
    }
  }
  return result;
}

__int64 cuda_driver_unplaced_4_98fe0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned int v3;
  char v4;
  char v5;
  int v6;
  char v7;
  char v8;
  bool v9;
  bool v10;
  __int64 v12;
  unsigned int v13;

  v1 = *(_QWORD*)(a1 + 64);
  v3 = 0;
  do {
    v13 = 2;
    CudaDriverStub_107f90_alt3(v1 + 17200);
    v4 = *(_BYTE*)(a1 + 16208);
    for (*(_BYTE*)(a1 + 16208) = v4 & 0xFE; (v4 & 3) == 0;
         *(_BYTE*)(a1 + 16208) = v4 & 0xFE) {
      if ((unsigned int)CudaDriverStub_108fc0(a1 + 16192, v1 + 17200,
                                              0xFFFFFFFFLL) != 0) {
        v3 = 304;
      LABEL_30:
        CudaDriverStub_108070_alt3(v1 + 17200);
        goto LABEL_31;
      }
      v4 = *(_BYTE*)(a1 + 16208);
    }
    CudaDriverStub_108070_alt3(v1 + 17200);
    if ((v4 & 2) != 0) {
      break;
    }
    CudaDriverRoutine_12e270(&v12);
    while (1) {
      while (1) {
        CudaDriverStub_107f90_alt3(v1 + 17200);
        v5 = *(_BYTE*)(a1 + 16208);
        *(_BYTE*)(a1 + 16208) = v5 & 0xFE;
        if ((v5 & 2) != 0) {
          goto LABEL_21;
        }
        v6 = CudaDriverStub_108fc0(a1 + 16200, v1 + 17200, 500);
        if (v6 != -2) {
          break;
        }
        v8 = *(_BYTE*)(a1 + 16208);
        *(_BYTE*)(a1 + 16208) = v8 & 0xFE;
        CudaDriverStub_108070_alt3(v1 + 17200);
        v9 = (v8 & 2) == 0;
        if ((v8 & 2) != 0) {
          goto LABEL_22;
        }
      LABEL_14:
        if ((v5 & 4) != 0 && (v8 & 1) == 0) {
          CudaDriverStub_107f90_alt3(*(_QWORD*)(a1 + 88) + 72LL);
          v3 = cuda_driver_1bace0(&v13,
                                  *(__int64**)(*(_QWORD*)(a1 + 88) + 56LL), 3);
          CudaDriverStub_108070_alt3(*(_QWORD*)(a1 + 88) + 72LL);
          if (v3 != 0) {
            goto LABEL_31;
          }
          if (v13 == 5) {
            goto LABEL_7;
          }
        }
        CudaDriverRoutine_12e270(&v12);
        if (v13 == 5) {
        LABEL_7:
          if (CudaDriverRoutine_12e2a0(&v12) >=
              (float)(unsigned int)(1000 * *(_DWORD*)(*(_QWORD*)(a1 + 64) +
                                                      17052LL))) {
            goto LABEL_22;
          }
        }
      }
      if (v6 != 0) {
        v3 = 304;
      LABEL_21:
        CudaDriverStub_108070_alt3(v1 + 17200);
        v9 = false;
        goto LABEL_22;
      }
      v7 = *(_BYTE*)(a1 + 16208);
      v8 = v5;
      CudaDriverStub_108070_alt3(v1 + 17200);
      v9 = (v7 & 2) == 0;
      if ((v7 & 2) == 0) {
        goto LABEL_14;
      }
    LABEL_22:
      CudaDriverStub_107f90_alt3(v1 + 17200);
      if ((*(_BYTE*)(a1 + 16208) & 1) != 0) {
        goto LABEL_27;
      }
      v3 = CudaDriverRoutine_12f950(*(_QWORD*)(a1 + 64));
      if (v3 != 600) {
        break;
      }
      CudaDriverStub_108070_alt3(v1 + 17200);
    }
    if (v3 != 0) {
      goto LABEL_30;
    }
    *(_BYTE*)(a1 + 16208) &= ~8u;
  LABEL_27:
    CudaDriverStub_108070_alt3(v1 + 17200);
  } while (v9);
LABEL_31:
  if (v3 != 0) {
    __builtin_arm_dmb(0xFu);
    *(_DWORD*)(a1 + 15952) = v3;
    __builtin_arm_dmb(0xFu);
    if (*((_BYTE*)&CudaDriverRoutine_7488 + (_QWORD)CudaDriverData_1422118) !=
        0) {
      CudaDriverRoutine_98d00((_QWORD*)a1, v3);
    }
    if ((unsigned int)cuda_driver_misc_helpers_de3a0() == 0) {
      v10 = v3 == 810 || v3 == 710;
      if (!v10 || *(_QWORD*)(a1 + 16136) == 0) {
        cuda_driver_misc_helpers_de3c0(v3);
      }
    }
  }
  return 0;
}

__int64 cuda_driver_995c0(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (CudaDriverData_144d344 != 0 ||
      (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118 + 2) &
       2) != 0) {
    *(_WORD*)(a1 + 240) = 256;
    return 0;
  }
  else {
    *(_BYTE*)(a1 + 240) = 1;
    v2 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a1 + 244) = 0;
    *(_QWORD*)(a1 + 248) = v2;
    return 0;
  }
}

bool cuda_driver_99790(__int64 a1)
{
  return *((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) !=
             0 ||
         (unsigned __int8)CudaDriverStub_8e230(*(_QWORD*)(a1 + 64)) == 0;
}

void cuda_driver_99c70()
{
  *(_DWORD*)((char*)&CudaDriverRoutine_7530 + (_QWORD)CudaDriverData_1422118) =
      0;
}

__int64 cuda_driver_9a090(__int64 a1, int a2, _DWORD* a3)
{
  _DWORD* v4;
  unsigned __int8* v5;
  __int64 result;
  unsigned int v7;
  int v8;
  int* v9;
  int v10;
  char v11;
  int v12;
  int v13;
  unsigned int v14;
  __int16 v15;
  char* v16;
  __int64 v17;
  _BOOL4* v18;
  bool v19;
  _DWORD* v20;
  int v21;
  _DWORD* v22;
  int v23;
  int v24;
  _DWORD* v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  int* v30;
  int v31;
  _BOOL4 v32;
  unsigned int v33;
  int v34;
  char v35;
  __int64 v36;
  int v37;
  _DWORD* v38;
  char v39;
  __int64 v40;
  struct {
    _DWORD v41[4];
    char gap32_[2];
    unsigned __int8 v42;
  } v41_;

  v40 = 0;
  v4 = (_DWORD*)(a1 + 21864);
  v5 = (unsigned __int8*)(a1 + 14824);
  switch (a2) {
  case 1:
    v8 = *(_DWORD*)(a1 + 3812);
    goto LABEL_199;
  case 2:
    v8 = *(_DWORD*)(a1 + 3816);
    goto LABEL_199;
  case 3:
    v8 = *(_DWORD*)(a1 + 3820);
    goto LABEL_199;
  case 4:
    v8 = *(_DWORD*)(a1 + 3824);
    goto LABEL_199;
  case 5:
    v8 = *(_DWORD*)(a1 + 3828);
    *a3 = v8;
    if ((*((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)CudaDriverData_1422118) &
         8) == 0) {
      return 0;
    }
    goto LABEL_101;
  case 6:
    v8 = *(_DWORD*)(a1 + 3832);
    *a3 = v8;
    if ((*((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)CudaDriverData_1422118) &
         8) != 0) {
      goto LABEL_101;
    }
    return 0;
  case 7:
    v8 = *(_DWORD*)(a1 + 3836);
    *a3 = v8;
    if ((*((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)CudaDriverData_1422118) &
         8) == 0) {
      return 0;
    }
  LABEL_101:
    result = 0;
    if (v8 >= 0xFFFF) {
      v8 = 0xFFFF;
    }
    goto LABEL_200;
  case 8:
    v8 = *(_DWORD*)(a1 + 3880);
    goto LABEL_199;
  case 9:
    v8 = *(_DWORD*)(a1 + 3808);
    goto LABEL_199;
  case 10:
    v8 = *(_DWORD*)(a1 + 3924);
    goto LABEL_199;
  case 11:
    v8 = *(_DWORD*)(a1 + 4108);
    goto LABEL_199;
  case 12:
    v8 = *(_DWORD*)(a1 + 3760);
    goto LABEL_199;
  case 13:
    if (*(_DWORD*)(a1 + 16860) != 0) {
      goto LABEL_181;
    }
    v20 = a3;
    result = (*(__int64 (**)(__int64, _DWORD*, _QWORD))(a1 + 20488))(
        a1, v41_.v41, 0);
    if ((_DWORD)result != 0) {
      return result;
    }
    v8 = v41_.v41[0];
    goto LABEL_109;
  case 14:
    v8 = *(_DWORD*)(a1 + 3936);
    goto LABEL_199;
  case 15:
    v23 = *(_DWORD*)(a1 + 3432);
    goto LABEL_123;
  case 16:
    v34 = *(_DWORD*)(a1 + 3732);
    *a3 = v34;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x1500LL) +
                   (_QWORD)CudaDriverData_1422118) != 0) {
      v34 = *(_DWORD*)((char*)((_UNKNOWN*)0x1500LL) +
                       (_QWORD)CudaDriverData_1422118);
    }
    *a3 = v34;
    if ((unsigned int)CudaDriverRoutine_121c60(&v40) == 0) {
      CudaDriverRoutine_1216a0(v40);
    }
    return 0;
  case 17:
    v25 = a3;
    result = (*(__int64 (**)(__int64, _DWORD*))(a1 + 20648))(a1, v41_.v41);
    if ((_DWORD)result != 0) {
      return result;
    }
    v26 = LOBYTE(v41_.v41[0]);
    goto LABEL_180;
  case 18:
    v11 = *(_BYTE*)(a1 + 3360);
    goto LABEL_135;
  case 19:
  case 31:
  case 44:
    goto LABEL_181;
  case 20:
    v8 = *(_DWORD*)(a1 + 16844);
    goto LABEL_199;
  case 21:
    v8 = *(_DWORD*)(a1 + 3944);
    goto LABEL_199;
  case 22:
    v8 = *(_DWORD*)(a1 + 3948);
    goto LABEL_199;
  case 23:
    v8 = *(_DWORD*)(a1 + 3952);
    goto LABEL_199;
  case 24:
    v8 = *(_DWORD*)(a1 + 3976);
    goto LABEL_199;
  case 25:
    v8 = *(_DWORD*)(a1 + 3980);
    goto LABEL_199;
  case 26:
    v8 = *(_DWORD*)(a1 + 3984);
    goto LABEL_199;
  case 27:
    v8 = *(_DWORD*)(a1 + 4080);
    goto LABEL_199;
  case 28:
    v8 = *(_DWORD*)(a1 + 4084);
    goto LABEL_199;
  case 29:
    v8 = *(_DWORD*)(a1 + 4088);
    goto LABEL_199;
  case 30:
    v8 = *(_DWORD*)(a1 + 4004);
    goto LABEL_199;
  case 32:
    v23 = *v5;
  LABEL_123:
    result = 0;
    v8 = v23 != 0;
    goto LABEL_200;
  case 33:
    v8 = *(_DWORD*)(a1 + 3176);
    goto LABEL_199;
  case 34:
    v8 = *(_DWORD*)(a1 + 3180);
    goto LABEL_199;
  case 35:
  case 95:
  case 96:
  case 102:
  case 103:
  case 104:
  case 105:
  case 110:
  case 112:
  case 114:
  case 121:
  case 128:
  case 132:
  case 133:
  case 141:
    goto LABEL_2;
  case 36:
    if (*(_DWORD*)(a1 + 16860) != 0) {
      goto LABEL_181;
    }
    v20 = a3;
    result = (*(__int64 (**)(__int64, _DWORD*, _QWORD))(a1 + 20488))(
        a1, v41_.v41, 0);
    if ((_DWORD)result != 0) {
      return result;
    }
    v8 = v41_.v41[1];
  LABEL_109:
    a3 = v20;
    goto LABEL_199;
  case 37:
    v8 = *(_DWORD*)(a1 + 4112);
    goto LABEL_199;
  case 38:
    v8 = *(_DWORD*)(a1 + 4116);
    goto LABEL_199;
  case 39:
    v21 = *(_DWORD*)(a1 + 3924);
    result = 0;
    v8 = v21 * *(_DWORD*)(a1 + 3756);
    goto LABEL_200;
  case 40:
    v8 = *(_DWORD*)(a1 + 14472);
    goto LABEL_199;
  case 41:
    v15 = *(_WORD*)(a1 + 16848);
    goto LABEL_121;
  case 42:
    v8 = *(_DWORD*)(a1 + 4072);
    goto LABEL_199;
  case 43:
    v8 = *(_DWORD*)(a1 + 4076);
    goto LABEL_199;
  case 45:
    v8 = *(_DWORD*)(a1 + 3968);
    goto LABEL_199;
  case 46:
    v8 = *(_DWORD*)(a1 + 3972);
    goto LABEL_199;
  case 47:
    v8 = *(_DWORD*)(a1 + 3988);
    goto LABEL_199;
  case 48:
    v8 = *(_DWORD*)(a1 + 3992);
    goto LABEL_199;
  case 49:
    v8 = *(_DWORD*)(a1 + 3996);
    goto LABEL_199;
  case 50:
    v8 = *(_DWORD*)(a1 + 3184);
    goto LABEL_199;
  case 51:
    v8 = *(_DWORD*)(a1 + 3940);
    goto LABEL_199;
  case 52:
    v8 = *(_DWORD*)(a1 + 4000);
    goto LABEL_199;
  case 53:
    v8 = *(_DWORD*)(a1 + 4092);
    goto LABEL_199;
  case 54:
    v8 = *(_DWORD*)(a1 + 4096);
    goto LABEL_199;
  case 55:
    v8 = *(_DWORD*)(a1 + 4008);
    goto LABEL_199;
  case 56:
    v8 = *(_DWORD*)(a1 + 4012);
    goto LABEL_199;
  case 57:
    v8 = *(_DWORD*)(a1 + 4016);
    goto LABEL_199;
  case 58:
    v8 = *(_DWORD*)(a1 + 4020);
    goto LABEL_199;
  case 59:
    v8 = *(_DWORD*)(a1 + 4024);
    goto LABEL_199;
  case 60:
    v8 = *(_DWORD*)(a1 + 4028);
    goto LABEL_199;
  case 61:
    v8 = *(_DWORD*)(a1 + 4032);
    goto LABEL_199;
  case 62:
    v8 = *(_DWORD*)(a1 + 4036);
    goto LABEL_199;
  case 63:
    v8 = *(_DWORD*)(a1 + 4040);
    goto LABEL_199;
  case 64:
    v8 = *(_DWORD*)(a1 + 4044);
    goto LABEL_199;
  case 65:
    v8 = *(_DWORD*)(a1 + 4048);
    goto LABEL_199;
  case 66:
    v8 = *(_DWORD*)(a1 + 4052);
    goto LABEL_199;
  case 67:
    v8 = *(_DWORD*)(a1 + 4056);
    goto LABEL_199;
  case 68:
    v8 = *(_DWORD*)(a1 + 4060);
    goto LABEL_199;
  case 69:
    v30 = a3;
    if ((unsigned __int64)(*(__int64 (**)(__int64))(a1 + 19768))(16) >
        0x7FFFFFFE) {
      v31 = 0x7FFFFFFF;
    }
    else {
      v31 = (*(__int64 (**)(__int64))(a1 + 19768))(16);
    }
    *v30 = v31;
    return 0;
  case 70:
    v8 = *(_DWORD*)(a1 + 3956);
    goto LABEL_199;
  case 71:
    v8 = *(_DWORD*)(a1 + 3960);
    goto LABEL_199;
  case 72:
    v8 = *(_DWORD*)(a1 + 3964);
    goto LABEL_199;
  case 73:
    v8 = *(_DWORD*)(a1 + 4140);
    goto LABEL_199;
  case 74:
    v8 = *(_DWORD*)(a1 + 4144);
    goto LABEL_199;
  case 75:
    v16 = (char*)CudaDriverData_1422118;
    if (*((_BYTE*)&CudaDriverRoutine_4340 + (_QWORD)CudaDriverData_1422118) !=
        0) {
      v17 = 17220;
      result = 0;
      goto LABEL_119;
    }
    v8 = *(_DWORD*)(a1 + 3152);
    goto LABEL_199;
  case 76:
    result = 0;
    v16 = (char*)CudaDriverData_1422118;
    if ((*((unsigned __int8*)&CudaDriverRoutine_4348 +
           (_QWORD)CudaDriverData_1422118) |
         *((unsigned __int8*)&CudaDriverRoutine_4340 +
           (_QWORD)CudaDriverData_1422118)) != 0) {
      v17 = 17228;
    LABEL_119:
      v8 = *(_DWORD*)&v16[v17];
    }
    else {
      v8 = *(_DWORD*)(a1 + 3156);
    }
    goto LABEL_200;
  case 77:
    v8 = *(_DWORD*)(a1 + 4136);
    goto LABEL_199;
  case 78:
    result = 0;
    v8 = (*((_DWORD*)v5 + 538) & 0x800) != 0;
    goto LABEL_200;
  case 79:
    result = 0;
    v8 = (*((_DWORD*)v5 + 538) & 0x1000) != 0;
    goto LABEL_200;
  case 80:
    result = 0;
    v8 = (*((_DWORD*)v5 + 538) & 0x2000) != 0;
    goto LABEL_200;
  case 81:
    v8 = *(_DWORD*)(a1 + 4152);
    goto LABEL_199;
  case 82:
    v8 = *(_DWORD*)(a1 + 4164);
    goto LABEL_199;
  case 83:
    result = 0;
    v8 = (*((_WORD*)v5 + 1012) & 0x20) != 0;
    goto LABEL_200;
  case 84:
    result = 0;
    v8 = (*((_DWORD*)v5 + 538) & 0x20000) != 0;
    goto LABEL_200;
  case 85:
    v8 = *(_DWORD*)(a1 + 16984);
    goto LABEL_199;
  case 86:
    if ((*(_WORD*)(a1 + 16848) & 0x2000) != 0 && *(_DWORD*)(a1 + 3152) >= 7u) {
      goto LABEL_181;
    }
    v25 = a3;
    result = CudaDriverRoutine_ec740(a1, 0, (__int64)v41_.v41);
    if ((_DWORD)result == 0) {
      v26 = v41_.v42;
    LABEL_180:
      *v25 = v26;
    }
    return result;
  case 87:
    v14 = *(_DWORD*)(a1 + 17040);
    if (*(_BYTE*)(a1 + 17044) != 0) {
      v14 /= *(_DWORD*)(a1 + 17048);
    }
    result = 0;
    goto LABEL_167;
  case 88:
    v11 = *(_BYTE*)(a1 + 17068);
    goto LABEL_135;
  case 89:
    v35 = *(_BYTE*)(a1 + 17068);
    goto LABEL_161;
  case 90:
    v18 = a3;
    v19 = (unsigned int)cuda_driver_predicates_10f450(a1) == 2;
    result = 0;
    goto LABEL_170;
  case 91:
    v8 = *(unsigned __int8*)(a1 + 17069);
    goto LABEL_199;
  case 92:
    LOBYTE(v15) = *(_BYTE*)(a1 + 16988);
  LABEL_121:
    result = 0;
    v8 = (v15 & 4) != 0;
    goto LABEL_200;
  case 93:
    v33 = *(unsigned __int8*)(a1 + 16988);
    result = 0;
    v28 = v33 << 29;
    v29 = v33 >> 3;
    goto LABEL_125;
  case 94:
    v27 = *(unsigned __int8*)(a1 + 16988);
    result = 0;
    v28 = v27 << 29;
    v29 = v27 >> 4;
  LABEL_125:
    v8 = v29 & (v28 >> 31);
    goto LABEL_200;
  case 97:
    v8 = *(_DWORD*)(a1 + 3884);
    goto LABEL_199;
  case 98:
    result = 0;
    v8 = v5[2164] >> 7;
    goto LABEL_200;
  case 99:
    if (CudaDriverData_14358d0 != 0) {
      goto LABEL_2;
    }
    result = 0;
    v11 = CudaDriverData_1436502;
    goto LABEL_136;
  case 100:
    if (*(_BYTE*)(a1 + 17096) == 0) {
      goto LABEL_198;
    }
    v8 = *(_BYTE*)(a1 + 17068) & 1;
    goto LABEL_199;
  case 101:
    v11 = *(_BYTE*)(a1 + 17097);
    goto LABEL_135;
  case 106:
    v8 = *(_DWORD*)(a1 + 3768);
    goto LABEL_199;
  case 107:
    if ((*(_BYTE*)(a1 + 16996) & 1) == 0) {
      goto LABEL_198;
    }
    if (*(_DWORD*)(a1 + 17088) == 0) {
      goto LABEL_181;
    }
    v24 = *(unsigned __int8*)(a1 + 17093);
    goto LABEL_57;
  case 108:
    v8 = *(_DWORD*)(a1 + 4120);
    goto LABEL_199;
  case 109:
    v8 = *(_DWORD*)(a1 + 4228);
    goto LABEL_199;
  case 111:
    v8 = *(_DWORD*)(a1 + 4148);
    goto LABEL_199;
  case 113:
    if ((*((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)CudaDriverData_1422118) &
         1) != 0) {
      goto LABEL_198;
    }
    v38 = a3;
    v39 = (*(__int64 (**)(__int64))(a1 + 21560))(a1);
    a3 = v38;
    v8 = v39 != 0;
    goto LABEL_199;
  case 115:
    v18 = a3;
    v32 = CudaDriverRoutine_efe40(a1);
    goto LABEL_186;
  case 116:
    v7 = *(unsigned __int8*)(a1 + 16988);
    result = 0;
    v8 = (*((_BYTE*)&CudaDriverRoutine_51a8 + (_QWORD)CudaDriverData_1422118) !=
          0) &
         (v7 >> 5);
    goto LABEL_200;
  case 117:
    v12 = *(char*)(a1 + 16988);
    result = 0;
    if (v12 <= -1) {
      v13 = 2;
    }
    else {
      v13 = 0;
    }
    v14 = v13 & 0xFFFFFFFE | ((v12 & 0x40) != 0);
  LABEL_167:
    *a3 = v14;
    return result;
  case 118:
    v8 = *(_DWORD*)(a1 + 16992);
    goto LABEL_199;
  case 119:
    v9 = a3;
    *a3 = 0;
    if (!CudaDriverRoutine_efe40(a1) || *v4 != 0 ||
        *(_DWORD*)(CudaDriverData_1435ed0 + 48) < 0x1CCu) {
      return 0;
    }
    result = 0;
    v10 = *v9 | 1;
  LABEL_191:
    *v9 = v10;
    return result;
  case 120:
    v18 = a3;
    v32 = CudaDriverRoutine_9aaa0(a1);
  LABEL_186:
    result = 0;
    goto LABEL_187;
  case 122:
    result = 0;
    v8 = (v5[2164] & 8) != 0;
    goto LABEL_200;
  case 123:
    result = 0;
    v8 = (v5[2164] & 0x10) != 0;
    goto LABEL_200;
  case 124:
    if ((*(_WORD*)(a1 + 16848) & 0x2000) == 0 || *v4 != 0) {
      if ((*(_BYTE*)(a1 + 16856) & 8) != 0 &&
          (*(_BYTE*)(a1 + 16988) & 0x20) != 0) {
        goto LABEL_80;
      }
    LABEL_198:
      v8 = 0;
      goto LABEL_199;
    }
    if ((*(_BYTE*)(a1 + 16856) & 8) == 0 || (*(_BYTE*)(a1 + 3360) & 2) == 0) {
      goto LABEL_198;
    }
  LABEL_80:
    v24 = *((unsigned __int8*)&CudaDriverRoutine_51a8 +
            (_QWORD)CudaDriverData_1422118);
  LABEL_57:
    v8 = v24 != 0;
  LABEL_199:
    result = 0;
  LABEL_200:
    *a3 = v8;
    return result;
  case 125:
    v18 = a3;
    v37 = CudaDriverRoutine_e30b0(a1);
    result = 0;
    v19 = v37 == 0;
  LABEL_170:
    v32 = v19;
  LABEL_187:
    *v18 = v32;
    return result;
  case 126:
    *a3 = (*(__int64 (**)(__int64))(a1 + 18424))(44);
    return 0;
  case 127:
    v35 = *(_BYTE*)(a1 + 17012);
  LABEL_161:
    result = 0;
    v8 = (v35 & 2) != 0;
    goto LABEL_200;
  case 129:
    v11 = *(_BYTE*)(a1 + 17280);
  LABEL_135:
    result = 0;
  LABEL_136:
    v8 = v11 & 1;
    goto LABEL_200;
  case 130:
    if (*v4 != 0 || (*(_BYTE*)(**(_QWORD**)(a1 + 19824) + 108LL) & 8) == 0) {
    LABEL_2:
      result = 0;
      *a3 = 0;
      return result;
    }
  LABEL_181:
    v8 = 1;
    goto LABEL_199;
  case 131:
    if (*v4 == 0 &&
        (*(_BYTE*)((v36 = **(_QWORD**)(a1 + 19824)) + 108) & 8) != 0) {
      v8 = *(_DWORD*)(v36 + 112);
    }
    else {
      v8 = -1;
    }
    goto LABEL_199;
  case 134:
    v8 = *(_DWORD*)(a1 + 17276);
    goto LABEL_199;
  case 135:
    if (*(_BYTE*)(a1 + 21992) != 0) {
      goto LABEL_56;
    }
    goto LABEL_198;
  case 138:
    if (*(_BYTE*)(a1 + 21993) == 0) {
      goto LABEL_198;
    }
  LABEL_56:
    v24 = *(unsigned __int8*)(a1 + 17328);
    goto LABEL_57;
  case 139:
    v8 = *(_DWORD*)(a1 + 3188);
    goto LABEL_199;
  case 140:
    v8 = *(_DWORD*)(a1 + 3192);
    goto LABEL_199;
  case 142:
    v9 = a3;
    v10 = CudaDriverRoutine_efe40(a1) &&
          (unsigned __int8)CudaDriverRoutine_fe8c0() != 0 && *v4 != 4;
    result = 0;
    goto LABEL_191;
  case 143:
    v22 = a3;
    CudaDriverRoutine_fe8c0();
    *v22 = 0;
    return 0;
  default:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Invalid device attribute enum value");
    return 1;
  }
}

__int64 cuda_driver_9b080(_QWORD* a1)
{
  __int64 v1;
  unsigned int v3;
  unsigned int v4;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;

  v1 = a1[2108];
  if (*(_DWORD*)(v1 + 8) != 1) {
    goto LABEL_10;
  }
  CudaDriverRoutine_98850(a1[2108]);
  v3 = cuda_driver_9bcc0(v1, a1[2113]);
  if (v3 != 0) {
    v4 = v3;
    CudaDriverRoutine_98870(v1);
    return v4;
  }
  if ((*(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 +
                 (_QWORD)CudaDriverData_1422118) &
       1) == 0) {
    goto LABEL_10;
  }
  v6 = cuda_driver_ddc90(a1 + 2115, v1, 0, 1);
  v7 = a1[2115];
  if (v6 == 0) {
    *(_BYTE*)(v7 + 4) = 1;
  LABEL_10:
    ++*(_DWORD*)(v1 + 52);
    return 0;
  }
  v8 = v6;
  if (v7 != 0) {
    cuda_driver_ddfc0(v7);
  }
  cuda_driver_9be60(v1);
  CudaDriverRoutine_98870(v1);
  a1[2115] = 0;
  return v8;
}

__int64 cuda_driver_9b180(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 16864);
  v2 = *(_DWORD*)(v1 + 52);
  if (v2 == 0) {
    return 201;
  }
  v3 = v2 - 1;
  *(_DWORD*)(v1 + 52) = v3;
  if (v3 != 0) {
    return 0;
  }
  if (*(_BYTE*)(a1 + 16912) != 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a1 + 16864);
  if (*(_DWORD*)(v5 + 8) == 3) {
    if ((*(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 +
                   (_QWORD)CudaDriverData_1422118) &
         1) != 0) {
      v6 = a1;
      cuda_driver_ddfc0(*(_QWORD*)(a1 + 16920));
      a1 = v6;
      *(_QWORD*)(v6 + 16920) = 0;
    }
    if (*(_QWORD*)(v5 + 16560) != 0) {
      return 800;
    }
    v7 = a1;
    cuda_driver_9be60(*(_QWORD*)(a1 + 16864));
    CudaDriverRoutine_98870(v5);
    a1 = v7;
  }
  v8 = a1;
  cuda_driver_97bc0(*(_QWORD*)(a1 + 16904), a1, 8u, 1);
  *(_DWORD*)(*(_QWORD*)(v8 + 16904) + 20LL) = 3020;
  *(_BYTE*)(v8 + 16912) = 0;
  return 0;
}

__int64 cuda_driver_9b2b0(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 16864);
  if (*(_DWORD*)(v1 + 8) == 3) {
    if ((*(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 +
                   (_QWORD)CudaDriverData_1422118) &
         1) != 0) {
      cuda_driver_ddfc0(*(_QWORD*)(a1 + 16920));
      *(_QWORD*)(a1 + 16920) = 0;
    }
    if (*(_QWORD*)(v1 + 16560) != 0) {
      return 800;
    }
    cuda_driver_9be60(*(_QWORD*)(a1 + 16864));
    CudaDriverRoutine_98870(v1);
  }
  cuda_driver_97bc0(*(_QWORD*)(a1 + 16904), a1, 8u, 1);
  *(_DWORD*)(*(_QWORD*)(a1 + 16904) + 20LL) = 3020;
  *(_BYTE*)(a1 + 16912) = 0;
  return 0;
}

__int64 cuda_driver_9b360(__int64 result, int a2)
{
  *(_DWORD*)(*(_QWORD*)(result + 16904) + 8LL) =
      (a2 | 8) & ~*(_DWORD*)((char*)((_UNKNOWN*)0x10F4LL) +
                             (_QWORD)CudaDriverData_1422118) |
      *(_DWORD*)((char*)((_UNKNOWN*)0x10F0LL) + (_QWORD)CudaDriverData_1422118);
  *(_BYTE*)(*(_QWORD*)(result + 16904) + 12LL) = 1;
  return result;
}

__int64 cuda_driver_9b410(__int64 result, unsigned int* a2, _DWORD* a3)
{
  __int64 v3;
  unsigned int v4;

  v3 = *(_QWORD*)(result + 16864);
  v4 =
      *(_DWORD*)(*(_QWORD*)(result + 16904) + 8LL) &
          ~*(_DWORD*)((char*)((_UNKNOWN*)0x10F4LL) +
                      (_QWORD)CudaDriverData_1422118) &
          0xFFFFFFF7 |
      *(_DWORD*)((char*)((_UNKNOWN*)0x10F0LL) + (_QWORD)CudaDriverData_1422118);
  if (*(_BYTE*)(v3 + 1008) != 0) {
    v4 |= 0x80u;
  }
  *a2 = v4;
  *a3 = *(_DWORD*)(v3 + 8) == 3;
  return result;
}

bool cuda_driver_9b4d0(__int64 a1, int a2)
{
  _BOOL8 result;
  unsigned int v4;

  if ((*((_BYTE*)&CudaDriverRoutine_4728 + (_QWORD)CudaDriverData_1422118) &
       1) == 0 ||
      *(_DWORD*)(a1 + 3152) != 8) {
    return false;
  }
  result = false;
  if (a2 == 1) {
    v4 = *(_DWORD*)(a1 + 3156);
    if (v4 <= 8) {
      return v4 != 7;
    }
  }
  return result;
}

__int64 cuda_driver_9b560(__int64 a1, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;

  v3 = *(_DWORD*)((char*)&CudaDriverRoutine_7438 +
                  (_QWORD)CudaDriverData_1422118);
  v4 = *(_DWORD*)(a1 + 4368);
  v5 = *(_DWORD*)(a1 + 4376);
  if (a3 != 0) {
    v6 = v3 == 255 ? 255 : 0;
    if ((*(_BYTE*)(a1 + 16977) & 8) != 0) {
      a2 = *(_DWORD*)(a1 + 4372);
      v3 = v6;
    }
  }
  v7 = v5 - v4;
  if (v3 != 0) {
    v8 = a2;
  }
  else {
    v8 = a2 - 6;
  }
  v9 = v5 - 26 * (v4 - v8);
  v10 = v7 + v8 - 50;
  if (v4 - 1 <= v8) {
    return v9;
  }
  else {
    return v10;
  }
}

__int64 cuda_driver_9bad0(__int64* a1, __int64 a2)
{
  _QWORD* v2;
  void* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 result;
  unsigned int v10;

  v2 = *(_QWORD**)a2;
  v5 = CudaDriverData_1422118;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) != 0 &&
      *(_DWORD*)(a2 + 20) != 3020) {
    return 801;
  }
  v6 = CudaDriverStub_12e330(17864);
  v7 = v6;
  if (v6 != 0) {
    memset_plt(v6, 0, 17864);
    *(_QWORD*)(v7 + 16) = v2;
    *(_DWORD*)(v7 + 8) = 1;
    *(_DWORD*)(v7 + 48) = 0;
    CudaDriverRoutine_108450((_QWORD*)(v7 + 24), 13, 1);
    *(_DWORD*)v7 = 0;
    *(_BYTE*)(v7 + 4) = 1;
    *(_DWORD*)(v7 + 52) = 1;
    CudaDriverRoutine_98850(v7);
    if ((*((_BYTE*)&CudaDriverRoutine_41a8 + (_QWORD)v5) & 2) != 0) {
      CudaDriverStub_107f90_alt2(v2 + 2109);
      v8 = cuda_driver_9b080(v2);
      CudaDriverStub_108070_alt2(v2 + 2109);
      if (v8 != 0) {
        LODWORD(result) = 999;
      LABEL_11:
        v10 = result;
        cuda_driver_9bd90(v7);
        result = v10;
        v7 = 0;
        goto LABEL_12;
      }
      *(_BYTE*)(v7 + 1952) |= 4u;
    }
    result = cuda_driver_9bcc0(v7, a2);
    if ((_DWORD)result != 0) {
      goto LABEL_11;
    }
  }
  else {
    result = 2;
  }
LABEL_12:
  *a1 = v7;
  return result;
}

__int64 cuda_driver_9bcc0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned int v5;
  bool v6;
  unsigned int v7;

  v4 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_71f8 +
                     (_QWORD)CudaDriverData_1422118);
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_71d8 + (_QWORD)v4);
  v5 = CudaDriverRoutine_9c190(a1, a2);
  v6 = *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v4) >= 2u &&
       *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)v4) == 0;
  if (v6 && *(_BYTE*)(*(_QWORD*)a2 + 17329LL) != 0) {
    while (v5 == 916) {
      v5 = CudaDriverRoutine_9c190(a1, a2);
    }
  }
  v7 = v5;
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_71d8 + (_QWORD)v4);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_71f8 + (_QWORD)v4);
  return v7;
}

__int64 cuda_driver_9bd90(__int64 a1)
{
  __int64 v1;
  char v2;
  void* v4;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 64);
  v2 = *(_BYTE*)(a1 + 1952);
  v4 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_71f8 +
                     (_QWORD)CudaDriverData_1422118);
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_71d8 + (_QWORD)v4);
  cuda_driver_9d4a0(a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_71d8 + (_QWORD)v4);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_71f8 + (_QWORD)v4);
  result = CudaDriverRoutine_98870(a1);
  if ((v2 & 4) != 0) {
    CudaDriverStub_107f90_alt3(v1 + 16872);
    cuda_driver_9b180(v1);
    return CudaDriverStub_108070_alt3(v1 + 16872);
  }
  return result;
}

__int64 cuda_driver_9be60(__int64 a1)
{
  void* v2;

  v2 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_71f8 +
                     (_QWORD)CudaDriverData_1422118);
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_71d8 + (_QWORD)v2);
  cuda_driver_9d4a0(a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_71d8 + (_QWORD)v2);
  return CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_71f8 +
                                  (_QWORD)v2);
}

__int64 cuda_driver_9d4a0(__int64 a1)
{
  __int64 v1;
  _BYTE* v3;
  int v4;
  __int64 result;
  unsigned int* v6;
  char* v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 i;
  __int64 v21;
  unsigned int v22;
  __int64 j;
  __int64 v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 k;
  void (*v32)(__int64, __int64*);
  int v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 m;
  unsigned int* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 n;
  __int64 v56;
  __int64 v57;
  __int16 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  _QWORD* v65;
  _QWORD* v66;
  _QWORD* v67;
  __int64 v68;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 ii;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v92;
  unsigned int v93;
  struct {
    __int64 v94;
    __int64 v95;
  } v94_;

  v1 = *(_QWORD*)(a1 + 64);
  v3 = (_BYTE*)(a1 + 16208);
  cuda_driver_108520(a1 + 24);
  v4 = *(_DWORD*)(a1 + 8);
  result = CudaDriverRoutine_1085d0(a1 + 24);
  v6 = (unsigned int*)CudaDriverData_1422118;
  v7 = (char*)CudaDriverData_14225e0;
  if (v4 == 2) {
    goto LABEL_46;
  }
  if (v4 != 3) {
    return result;
  }
  v8 = CudaDriverRoutine_12a190();
  CudaDriverRoutine_98190(a1, 6u);
  cuda_driver_98420(a1, v8);
  if (cuda_driver_12ea30((int*)((char*)&CudaDriverRoutine_4e48 + (_QWORD)v6))) {
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v6);
    v9 =
        CudaDriverStub_8b280((char*)cuda_driver_misc_helpers_4c20 + (_QWORD)v6);
    if (v9 != 0) {
      v10 = 0;
      v11 = v9;
      while (1) {
        cuda_driver_108520(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v6] +
                           616 * v10);
        v12 = CudaDriverRoutine_114270(v10);
        if (v12 != 0) {
          v13 = *(_QWORD*)(v12 + 560);
          v14 = v12;
          if (v13 != 0) {
            break;
          }
        }
      LABEL_6:
        CudaDriverRoutine_1085d0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v6] +
                                 616 * v10++);
        if (v10 == v11) {
          goto LABEL_21;
        }
      }
      while (1) {
        v15 = *(_QWORD*)(v13 + 560);
        if (CudaDriverRoutine_1dbfd0(v13) != a1) {
          goto LABEL_12;
        }
        if (*(_QWORD*)(v14 + 568) == v13) {
          *(_QWORD*)(v14 + 568) = *(_QWORD*)(v13 + 552);
          if (*(_QWORD*)(v14 + 560) == v13) {
          LABEL_19:
            v16 = *(_QWORD*)(v13 + 560);
            *(_QWORD*)(v14 + 560) = v16;
            if (v16 == 0) {
              goto LABEL_11;
            }
            v17 = 0;
            goto LABEL_10;
          }
        }
        else if (*(_QWORD*)(v14 + 560) == v13) {
          goto LABEL_19;
        }
        v16 = *(_QWORD*)(v13 + 560);
        *(_QWORD*)(*(_QWORD*)(v13 + 552) + 560LL) = v16;
        if (v16 != 0) {
          v17 = *(_QWORD*)(v13 + 552);
        LABEL_10:
          *(_QWORD*)(v16 + 552) = v17;
        }
      LABEL_11:
        *(_OWORD*)(v13 + 552) = (__typeof__(*(_OWORD*)(v13 + 552))){0};
      LABEL_12:
        v13 = v15;
        if (v15 == 0) {
          goto LABEL_6;
        }
      }
    }
  LABEL_21:
    v18 =
        CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v6);
    v19 = atomic_fetch_or((atomic_ullong* volatile)(a1 + 0x4000), 0);
    v7 = (char*)CudaDriverData_14225e0;
    if (v19 != 0) {
      do {
        v18 = CudaDriverStub_12dc90(v18);
      } while (atomic_fetch_or((atomic_ullong* volatile)(a1 + 0x4000), 0) != 0);
    }
  }
  if (v3[1464] != 0 && CudaDriverRoutine_9acc0(*(_QWORD*)(a1 + 64))) {
    for (i = *(_QWORD*)(a1 + 128); i != 0; i = *(_QWORD*)(i + 72)) {
      v21 = CudaDriverStub_1db800(*(_QWORD*)(i + 8));
      v22 = CudaDriverStub_1dbf90(*(_QWORD*)(i + 8));
      CudaDriverRoutine_200aa0(a1, v21, v22);
    }
    for (j = *(_QWORD*)(a1 + 136); j != 0; j = *(_QWORD*)(j + 72)) {
      v24 = CudaDriverStub_1db800(*(_QWORD*)(j + 8));
      v25 = CudaDriverStub_1dbf90(*(_QWORD*)(j + 8));
      CudaDriverRoutine_200aa0(a1, v24, v25);
    }
  }
  cuda_driver_108520(a1 + 24);
  CudaDriverStub_107f90((char*)((_UNKNOWN*)0x1818LL) + (_QWORD)v6);
  *(_BYTE*)(a1 + 184) = 1;
  CudaDriverStub_108070((char*)((_UNKNOWN*)0x1818LL) + (_QWORD)v6);
  CudaDriverRoutine_1085d0(a1 + 24);
  v26 = *(_DWORD*)(a1 + 188);
  v27 = 16;
  if (v26 == 3) {
    v27 = 168;
  }
  if (*(_DWORD*)(*(_QWORD*)&v7[v27] + 8LL) != 0) {
    v94_.v95 = a1;
    LODWORD(v94_.v94) = 24;
    if (v26 == 3) {
      v28 = 21;
    }
    else {
      v28 = 2;
    }
    cuda_driver_20b420(v28, 2u, (__int64)&v94_.v94);
  }
  CudaDriverStub_10e9d0();
  cuda_driver_108520(a1 + 24);
  CudaDriverStub_107f90((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v6);
  CudaDriverStub_107f90((char*)((_UNKNOWN*)0x1818LL) + (_QWORD)v6);
  *(_DWORD*)(a1 + 8) = 4;
  if (a1 == *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v6)) {
    v29 = *(_QWORD*)(a1 + 16328);
    *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v6) = v29;
    if (v29 != 0) {
      v30 = 0;
      goto LABEL_42;
    }
  LABEL_43:
    *(_OWORD*)(a1 + 16320) = (__typeof__(*(_OWORD*)(a1 + 16320))){0};
    goto LABEL_44;
  }
  if (*(_OWORD*)(a1 + 16320) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 16320) + 16328LL) = *(_QWORD*)(a1 + 16328);
    v29 = *(_QWORD*)(a1 + 16328);
    if (v29 != 0) {
      v30 = *(_QWORD*)(a1 + 16320);
    LABEL_42:
      *(_QWORD*)(v29 + 16320) = v30;
      goto LABEL_43;
    }
    goto LABEL_43;
  }
LABEL_44:
  CudaDriverRoutine_12dec0(v6 + 68);
  for (k = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v6); k != 0;
       k = *(_QWORD*)(k + 16328)) {
    if (!CudaDriverRoutine_9aa20(*(_QWORD*)(k + 64)) &&
        *(_DWORD*)(k + 15956) == 0) {
      *(_DWORD*)(k + 15960) = CudaDriverRoutine_1bbf10(k, 0);
    }
  }
  CudaDriverStub_108070((char*)((_UNKNOWN*)0x1818LL) + (_QWORD)v6);
  CudaDriverStub_108070((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v6);
  CudaDriverRoutine_1085d0(a1 + 24);
  CudaDriverStub_10e9f0();
  cuda_driver_108520(a1 + 24);
  *(_DWORD*)(a1 + 8) = 5;
  CudaDriverRoutine_1085d0(a1 + 24);
LABEL_46:
  cuda_driver_108520(a1 + 24);
  *(_DWORD*)(a1 + 8) = 6;
  CudaDriverRoutine_1085d0(a1 + 24);
  v32 = *(void (**)(__int64, __int64*))CudaDriverData_1422bc0;
  if (*(_QWORD*)CudaDriverData_1422bc0 != 0) {
    v94_.v94 = a1;
    v94_.v95 = 0;
    v32(1, &v94_.v94);
  }
  v33 = *(_DWORD*)(a1 + 188);
  CudaDriverRoutine_1204e0(a1 + 17696);
  (*(void (**)(__int64))(v1 + 21144))(a1);
  CudaDriverRoutine_11ca80(a1, 0);
  CudaDriverRoutine_1b43f0(a1);
  CudaDriverRoutine_109060(a1);
  CudaDriverRoutine_207e60(a1);
  CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 2160));
  cuda_driver_helpers_1b7b20(a1);
  cuda_driver_helpers_1b7690(a1);
  cuda_driver_helpers_1b75f0(a1);
  v34 = *(_QWORD*)(a1 + 72);
  if (v34 != 0) {
    v35 = *(_QWORD*)(v34 + 34360);
    if (v35 != 0) {
      cuda_driver_helpers_1b70a0(*(_QWORD*)(a1 + 216), v35);
      *(_QWORD*)(*(_QWORD*)(a1 + 72) + 34360LL) = 0;
    }
  }
  if (v3[272] != 0) {
    cuda_driver_misc_helpers_78880();
  }
  CudaDriverRoutine_122550(*(__int64**)(a1 + 232));
  v36 = *(_QWORD**)(a1 + 72);
  *(_QWORD*)(a1 + 232) = 0;
  if (v36 != nullptr) {
    v37 = v36[4145];
    if (v37 != 0 && *(_DWORD*)(v37 + 24) != 0) {
      v38 = CudaDriverRoutine_5ef60(v36, 0);
      if (v38 != 0) {
        (*(void (**)(void))(v38 + 34008))();
      }
    }
  }
  while (1) {
    v39 = *(_QWORD**)(a1 + 200);
    if (v39 == nullptr) {
      break;
    }
    cuda_driver_misc_helpers_60f30(v39);
  }
  v40 = *(_QWORD*)(a1 + 1976);
  while (v40 != 0) {
    v57 = v40;
    v40 = *(_QWORD*)(v40 + 552);
    v58 = *(_WORD*)(v57 + 36);
    if ((v58 & 1) == 0) {
      if (*(_QWORD*)(v57 + 472) != 0) {
        CudaDriverRoutine_e9900(*(_QWORD*)(v57 + 472), a1, nullptr);
      }
      else if ((v58 & 0x40) != 0) {
        v59 = *(_QWORD*)(v57 + 368);
        CudaDriverStub_105c00(v57);
        if (v59 != 0) {
          CudaDriverRoutine_1275c0(v59);
        }
      }
      else {
        CudaDriverStub_105c00(v57);
      }
    }
  }
  CudaDriverRoutine_11c2a0((_QWORD*)a1);
  v42 = *(_QWORD*)(a1 + 1976);
  if (v42 != 0) {
    do {
      while (1) {
        v43 = *(_QWORD*)(v42 + 552);
        if (*(_QWORD*)(v42 + 472) != 0) {
          break;
        }
        CudaDriverStub_105c00(v42);
        v42 = v43;
        if (v43 == 0) {
          goto LABEL_70;
        }
      }
      CudaDriverRoutine_e9900(*(_QWORD*)(v42 + 472), a1, nullptr);
      v42 = v43;
    } while (v43 != 0);
  }
LABEL_70:
  if (*(_QWORD*)(a1 + 16184) != 0) {
    CudaDriverRoutine_992b0(a1);
  }
  if ((*(_BYTE*)(a1 + 1952) & 2) != 0) {
    (*(void (**)(__int64, __int64, _QWORD))(v1 + 20552))(v1, a1, 0);
    *(_BYTE*)(a1 + 1952) &= ~2u;
  }
  CudaDriverRoutine_10ce40(*(_QWORD*)(a1 + 80));
  if (*(_QWORD*)(a1 + 16168) != 0) {
    CudaDriverStub_107f90((char*)((_UNKNOWN*)0x1818LL) + (_QWORD)v6);
    --*(_DWORD*)CudaDriverData_1422028[0];
    CudaDriverStub_108070((char*)((_UNKNOWN*)0x1818LL) + (_QWORD)v6);
    cuda_driver_helpers_1b70a0(*(_QWORD*)(a1 + 216), *(_QWORD*)(a1 + 16168));
    CudaDriverStub_107f90((char*)((_UNKNOWN*)0x1818LL) + (_QWORD)v6);
    v44 = *(_DWORD*)((char*)((_UNKNOWN*)0x1828LL) + (_QWORD)v6) - 1;
    *(_DWORD*)((char*)((_UNKNOWN*)0x1828LL) + (_QWORD)v6) = v44;
    if (v44 == 0) {
      CudaDriverRoutine_12e210((__int64)((_UNKNOWN*)0x17E8LL) + (_QWORD)v6);
    }
    CudaDriverStub_108070((char*)((_UNKNOWN*)0x1818LL) + (_QWORD)v6);
    *(_QWORD*)(a1 + 16168) = 0;
  }
  v45 = *(_QWORD*)(a1 + 16176);
  if (v45 != 0) {
    cuda_driver_helpers_1b70a0(*(_QWORD*)(a1 + 216), v45);
    *(_QWORD*)(a1 + 16176) = 0;
  }
  if ((*((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)v6) & 2) != 0) {
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)(a1 + 64) + 21288LL))(a1, 0);
    if (CudaDriverRoutine_9ad90(*(_QWORD*)(a1 + 64))) {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)(a1 + 64) + 21336LL))(a1, 0);
    }
  }
  v46 = *(_QWORD*)(a1 + 64);
  if (*(_DWORD*)(v46 + 21864) != 2) {
    (*(void (**)(__int64))(v46 + 18400))(a1);
  }
  if (*(_QWORD*)(a1 + 2208) != 0) {
    CudaDriverStub_1db190(a1 + 2208);
  }
  if (*(_QWORD*)(a1 + 2232) != 0) {
    CudaDriverStub_1db190(a1 + 2232);
  }
  CudaDriverRoutine_1d4be0((__int64*)(a1 + 1336));
  for (m = *(_QWORD*)(a1 + 2016); m != 0; m = *(_QWORD*)(a1 + 2016)) {
    CudaDriverRoutine_8a9e0(m);
  }
  while (1) {
    v48 = *(unsigned int**)(a1 + 2008);
    if (v48 == nullptr) {
      break;
    }
    cuda_driver_8a4c0(v48);
  }
  while (1) {
    v49 = *(_QWORD*)(a1 + 1960);
    if (v49 == 0) {
      break;
    }
    CudaDriverRoutine_b5f70(v49);
  }
  v50 = *(_QWORD*)(a1 + 952);
  if (v50 != 0) {
    CudaDriverRoutine_1a2910(v50);
    *(_QWORD*)(a1 + 952) = 0;
  }
  CudaDriverRoutine_107f60((_QWORD*)(a1 + 936));
  v51 = *(_QWORD*)(a1 + 768);
  if (v51 != 0) {
    CudaDriverRoutine_116fa0(v51);
    *(_QWORD*)(a1 + 768) = 0;
  }
  v52 = *(_QWORD*)(a1 + 760);
  if (v52 != 0) {
    CudaDriverRoutine_116fa0(v52);
    *(_QWORD*)(a1 + 760) = 0;
  }
  v53 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v6);
  if ((_DWORD)v53 != 0) {
    v54 = a1 + 248;
    for (n = 0; n < v53; ++n) {
      v56 = *(_QWORD*)(v54 + 8 * n);
      if (v56 != 0) {
        CudaDriverRoutine_116fa0(v56);
        *(_QWORD*)(v54 + 8 * n) = 0;
        v53 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v6);
      }
    }
  }
  v60 = *(_QWORD*)(a1 + 120);
  if (v60 != 0) {
    CudaDriverRoutine_116fa0(v60);
    *(_QWORD*)(a1 + 120) = 0;
  }
  v61 = *(_QWORD*)(a1 + 112);
  if (v61 != 0) {
    CudaDriverRoutine_116fa0(v61);
    *(_QWORD*)(a1 + 112) = 0;
  }
  v62 = *(_QWORD*)(a1 + 104);
  if (v62 != 0) {
    CudaDriverRoutine_116fa0(v62);
    *(_QWORD*)(a1 + 104) = 0;
  }
  v63 = *(_QWORD*)(a1 + 96);
  if (v63 != 0) {
    CudaDriverRoutine_116fa0(v63);
    *(_QWORD*)(a1 + 96) = 0;
  }
  CudaDriverRoutine_2056d0(*(_QWORD*)(a1 + 88));
  v64 = (unsigned __int8)v3[167];
  *(_QWORD*)(a1 + 88) = 0;
  if (v64 == 0 && (*(_BYTE*)(a1 + 1952) & 1) != 0) {
    if (*(_DWORD*)(v1 + 17052) == 0 ||
        (CudaDriverRoutine_12dbb0((_QWORD*)(a1 + 16192)),
         CudaDriverRoutine_12dbb0((_QWORD*)(a1 + 16200)), (*v3 & 8) != 0)) {
      CudaDriverStub_107f90(v1 + 17200);
      CudaDriverRoutine_12f950(v1);
      CudaDriverStub_108070(v1 + 17200);
    }
  }
  if (*(_QWORD*)(a1 + 15912) != 0) {
    CudaDriverStub_1db190(a1 + 15912);
  }
  if (*(_QWORD*)(a1 + 15920) != 0) {
    CudaDriverStub_1db190(a1 + 15920);
  }
  while (1) {
    v65 = *(_QWORD**)(a1 + 2024);
    if (v65 == nullptr) {
      break;
    }
    cuda_driver_11ea60(v65);
  }
  while (1) {
    v66 = *(_QWORD**)(a1 + 2032);
    if (v66 == nullptr) {
      break;
    }
    cuda_driver_11a580(v66);
  }
  while (1) {
    v67 = *(_QWORD**)(a1 + 2040);
    if (v67 == nullptr) {
      break;
    }
    CudaDriverRoutine_97200(v67);
  }
  while (1) {
    v68 = *(_QWORD*)(a1 + 2048);
    if (v68 == 0) {
      break;
    }
    CudaDriverRoutine_111e80(v68);
  }
  CudaDriverRoutine_98a30((_QWORD*)a1);
  if (*(_QWORD*)(a1 + 2216) != 0) {
    CudaDriverStub_1db190(a1 + 2216);
    *(_QWORD*)(a1 + 2224) = 0;
  }
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v6) < 2u ||
      *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v6) != 0) {
    if ((*(_BYTE*)(a1 + 12) & 2) == 0) {
      goto LABEL_151;
    }
  LABEL_159:
    CudaDriverRoutine_107f60((_QWORD*)(a1 + 16568));
    CudaDriverRoutine_107f60((_QWORD*)(a1 + 17648));
    v73 = *(_QWORD**)(a1 + 72);
    if (v73 == nullptr) {
      goto LABEL_153;
    }
    goto LABEL_152;
  }
  cuda_driver_e2200(a1);
  if ((*(_BYTE*)(a1 + 12) & 2) != 0) {
    goto LABEL_159;
  }
LABEL_151:
  v73 = *(_QWORD**)(a1 + 72);
  if (v73 != nullptr) {
  LABEL_152:
    CudaDriverRoutine_5dcf0(v73);
    *(_QWORD*)(a1 + 72) = 0;
  }
LABEL_153:
  cuda_driver_helpers_1b6c20(*(_QWORD*)(a1 + 216));
  v74 = *(_QWORD*)(a1 + 1232);
  *(_QWORD*)(a1 + 216) = 0;
  if (v74 != 0) {
    CudaDriverStub_1db190(a1 + 1232);
  }
  if (*(_QWORD*)(a1 + 776) != 0) {
    if (CudaDriverRoutine_98110(a1)) {
      CudaDriverRoutine_12f850(*(_QWORD*)(a1 + 64), 0);
    }
    else {
      CudaDriverRoutine_12bb60(*(_QWORD*)(a1 + 776));
    }
    *(_QWORD*)(a1 + 776) = 0;
  }
  if (*(_QWORD*)(a1 + 856) != 0) {
    if (CudaDriverRoutine_98110(a1)) {
      CudaDriverRoutine_12f850(*(_QWORD*)(a1 + 64), 11);
    }
    else {
      CudaDriverRoutine_12bb60(*(_QWORD*)(a1 + 856));
    }
    *(_QWORD*)(a1 + 856) = 0;
  }
  (*(void (**)(__int64))(*(_QWORD*)(a1 + 64) + 18384LL))(a1);
  v75 = *(_QWORD*)(a1 + 17800);
  if (v75 != 0) {
    CudaDriverRoutine_203f30(v75);
    *(_QWORD*)(a1 + 17800) = 0;
  }
  v76 = *(_QWORD*)(a1 + 1344);
  if (v76 != 0) {
    CudaDriverRoutine_203f30(v76);
    *(_QWORD*)(a1 + 1344) = 0;
  }
  if (*(_QWORD*)((char*)&CudaDriverRoutine_4190 + (_QWORD)v6) != 0) {
    v77 = (_QWORD*)(a1 + 1360);
    for (ii = 64; ii != 0; --ii) {
      if (*v77 != 0) {
        CudaDriverStub_1db190(v77);
      }
      *v77++ = 0;
    }
  }
  CudaDriverRoutine_203100((__int64*)(a1 + 1352));
  while (1) {
    v79 = *(_QWORD*)(a1 + 128);
    if (v79 == 0) {
      break;
    }
    v80 = *(_QWORD*)(v79 + 72);
    *(_QWORD*)(a1 + 128) = v80;
    if (v80 != 0) {
      *(_QWORD*)(v80 + 80) = 0;
    }
    *(_QWORD*)(v79 + 72) = 0;
    *(_QWORD*)(v79 + 80) = 0;
    CudaDriverRoutine_1ffcc0(v79);
  }
  while (1) {
    v81 = *(_QWORD*)(a1 + 136);
    if (v81 == 0) {
      break;
    }
    v82 = *(_QWORD*)(v81 + 72);
    *(_QWORD*)(a1 + 136) = v82;
    if (v82 != 0) {
      *(_QWORD*)(v82 + 80) = 0;
    }
    *(_QWORD*)(v81 + 72) = 0;
    *(_QWORD*)(v81 + 80) = 0;
    CudaDriverRoutine_1ffcc0(v81);
  }
  while (1) {
    v83 = *(_QWORD*)(a1 + 17664);
    if (v83 == 0) {
      break;
    }
    v84 = *(_QWORD*)(v83 + 72);
    *(_QWORD*)(a1 + 17664) = v84;
    if (v84 != 0) {
      *(_QWORD*)(v84 + 80) = 0;
    }
    *(_QWORD*)(v83 + 72) = 0;
    *(_QWORD*)(v83 + 80) = 0;
    CudaDriverRoutine_1ffcc0(v83);
  }
  v85 = *(_QWORD*)(a1 + 1024);
  if (v85 != 0) {
    CudaDriverRoutine_96b40(v85);
    *(_QWORD*)(a1 + 1024) = 0;
  }
  v86 = *(_QWORD*)(a1 + 1032);
  if (v86 != 0) {
    CudaDriverRoutine_96b40(v86);
    *(_QWORD*)(a1 + 1032) = 0;
  }
  v87 = *(_QWORD*)(a1 + 1040);
  if (v87 != 0) {
    CudaDriverRoutine_96b40(v87);
    *(_QWORD*)(a1 + 1040) = 0;
  }
  v88 = *(_QWORD*)(a1 + 1048);
  if (v88 != 0) {
    CudaDriverRoutine_96b40(v88);
    *(_QWORD*)(a1 + 1048) = 0;
  }
  CudaDriverRoutine_dd160(*(_QWORD*)(a1 + 1056));
  CudaDriverRoutine_107f60((_QWORD*)(a1 + 144));
  CudaDriverRoutine_203100((__int64*)(a1 + 1880));
  CudaDriverRoutine_203100((__int64*)(a1 + 1872));
  CudaDriverRoutine_203100((__int64*)(a1 + 1912));
  CudaDriverRoutine_203100((__int64*)(a1 + 1920));
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v6) >= 2u &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v6) == 0) {
    CudaDriverRoutine_203100((__int64*)(a1 + 1928));
  }
  CudaDriverRoutine_8cf20(a1);
  cuda_driver_e2200(a1);
  CudaDriverRoutine_125330((__int64*)a1);
  CudaDriverRoutine_125350(a1);
  CudaDriverRoutine_1d9c40(*(_QWORD*)(a1 + 80));
  CudaDriverRoutine_1253a0(a1);
  if (*(_BYTE*)(a1 + 208) != 0) {
    (*(void (**)(__int64))(v1 + 20896))(a1);
  }
  (*(void (**)(__int64))(*(_QWORD*)(a1 + 64) + 21128LL))(a1);
  CudaDriverRoutine_107f60((_QWORD*)(a1 + 15936));
  CudaDriverRoutine_107f60((_QWORD*)(a1 + 1992));
  CudaDriverRoutine_107f60((_QWORD*)(a1 + 1888));
  CudaDriverRoutine_107f60((_QWORD*)(a1 + 17816));
  CudaDriverRoutine_12dbb0((_QWORD*)(a1 + 1904));
  CudaDriverRoutine_12dec0((unsigned int*)(v1 + 21632));
  result = memset_plt(a1 + 56, 0, 17808);
  v92 = 16;
  if (v33 == 3) {
    v92 = 168;
  }
  if (*(_DWORD*)(*(_QWORD*)&v7[v92] + 12LL) != 0) {
    v94_.v95 = a1;
    LODWORD(v94_.v94) = 24;
    if (v33 == 3) {
      v93 = 21;
    }
    else {
      v93 = 2;
    }
    result = cuda_driver_20b420(v93, 3u, (__int64)&v94_.v94);
  }
  *(_DWORD*)(a1 + 8) = 1;
  return result;
}

bool cuda_driver_9e1e0(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;

  v2 = *(_DWORD*)((char*)((_UNKNOWN*)0x10CLL) + (_QWORD)CudaDriverData_1422118 +
                  4);
  v3 = *(_DWORD*)((char*)((_UNKNOWN*)0x10CLL) + (_QWORD)CudaDriverData_1422118);
  return ((*(_DWORD*)(a1 + 15956) & 2 |
           CudaDriverRoutine_9aa40(*(_QWORD*)(a1 + 64))) != 0 ||
          v2 > v3) &&
         (*(_DWORD*)(a1 + 15956) & 1) == 0;
}

__int64 cuda_driver_9e4a0(__int64 result, int a2)
{
  __int64 v4;
  int v5;
  struct {
    int v6;
    char gap4_[4];
    __int64 v7;
    char gap16_[8];
    __int64 v8;
  } v6_;

  v4 = (unsigned int)(a2 + *(_DWORD*)(*(_QWORD*)(result + 64) + 3932LL) - 1) /
       *(_DWORD*)(*(_QWORD*)(result + 64) + 3932LL) *
       *(_DWORD*)(*(_QWORD*)(result + 64) + 3932LL);
  v5 = *(_DWORD*)(result + 188);
  *(_DWORD*)(result + 1312) = v4;
  if (v5 != 3 && *(_DWORD*)((char*)((char*)0x20LL) +
                            (_QWORD)CudaDriverData_1432198) != 0) {
    v6_.v7 = result;
    v6_.v8 = v4;
    v6_.v6 = 32;
    return cuda_driver_20b420(0xDu, 8u, (__int64)&v6_.v6);
  }
  return result;
}

__int64 cuda_driver_9e5f0(__int64 a1, __int64 a2, __int128* a3)
{
  int v3;
  __int128* v4;
  __int64 result;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  __int64 (*v20)(__int64, __int64, _QWORD, __int64, __int64, __int128*,
                 __int128*);
  __int64 v21;
  struct {
    int v22;
    char gap4_[4];
    __int64 v23;
    char gap16_[8];
    __int64 v24;
  } v22_;

  v4 = a3 + 3;
  v3 = *((_DWORD*)a3 + 12);
  if (v3 != 0) {
    if (v3 != 3) {
    LABEL_3:
      result = (*(__int64 (**)(__int64, __int128*))(a1 + 16440))(a1, a3);
      if ((_DWORD)result != 0) {
        return result;
      }
      v8 = *a3;
      v9 = a3[1];
      v10 = a3[2];
      v11 = *(_DWORD*)(a1 + 1312);
      *(_WORD*)(a1 + 1300) = 1;
      *(_OWORD*)(a1 + 1280) = v10;
      *(_OWORD*)(a1 + 1264) = v9;
      *(_OWORD*)(a1 + 1248) = v8;
      *(_QWORD*)(a1 + 16008) = *((unsigned int*)a3 + 4);
      v12 = *((_DWORD*)a3 + 6);
      if (v11 != v12) {
        v13 =
            (unsigned int)(v12 + *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3932LL) - 1) /
            *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3932LL) *
            *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3932LL);
        v14 = *(_DWORD*)(a1 + 188);
        *(_DWORD*)(a1 + 1312) = v13;
        if (v14 != 3 && *(_DWORD*)((char*)((char*)0x20LL) +
                                   (_QWORD)CudaDriverData_1432198) != 0) {
          v22_.v23 = a1;
          v22_.v24 = v13;
          v22_.v22 = 32;
          cuda_driver_20b420(0xDu, 8u, (__int64)&v22_.v22);
        }
      }
      CudaDriverRoutine_97e80(a1);
    }
    return 0;
  }
  *(_DWORD*)v4 = 3;
  if (a2 != 0) {
    v15 = *(_DWORD*)(a2 + 388);
    v16 = a2;
    if (CudaDriverStub_b9300(a2)) {
      a2 = v16;
      if (v15 <= *(_DWORD*)(*(_QWORD*)(v16 + 32) + 340LL)) {
        v15 = *(_DWORD*)(*(_QWORD*)(v16 + 32) + 340LL);
      }
    }
    else {
      a2 = v16;
    }
    v17 = *(_QWORD*)(a1 + 64);
    v18 = (v15 + *(_DWORD*)(v17 + 3932) - 1) / *(_DWORD*)(v17 + 3932) *
          *(_DWORD*)(v17 + 3932);
  }
  else {
    v17 = *(_QWORD*)(a1 + 64);
    v18 = 0;
  }
  v19 = *(_DWORD*)(a1 + 1312);
  v20 = *(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64, __int128*,
                       __int128*))(v17 + 18728);
  if (v18 <= v19) {
    v21 = v19;
  }
  else {
    v21 = v18;
  }
  result = v20(a1, a2, *(unsigned int*)(a1 + 16008), v21, a1 + 1248, a3, v4);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)v4 != 3) {
      goto LABEL_3;
    }
    return 0;
  }
  return result;
}

void cuda_driver_9f260()
{
  __int64 i;

  for (i = CudaDriverData_1435f68; i != 0; i = *(_QWORD*)(i + 16328)) {
    if ((*(_BYTE*)(i + 1952) & 2) != 0 &&
        (*(unsigned int (**)(void*))(*(_QWORD*)(i + 64) + 20552LL))(
            *(void**)(i + 64)) == 0) {
      *(_BYTE*)(i + 1952) &= ~2u;
    }
  }
}

__int64 cuda_driver_unplaced_4_9f440(_DWORD* a1, __int64 a2, unsigned int* a3,
                                     __int64 a4, __int64 a5, char a6,
                                     unsigned int a7)
{
  int8x16_t v7;
  int8x16_t v8;
  int8x16_t v9;
  unsigned int v10;
  bool v16;
  _DWORD* v17;
  int v18;
  bool v19;
  unsigned __int8 v20;
  bool v21;
  __int64 v22;
  unsigned int* v23;
  unsigned int* v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  __int128 v29;
  unsigned int v30;
  unsigned int v31;
  _BOOL4 v32;
  int v33;
  bool v34;
  int8x16_t v35;
  int8x16_t v36;
  int8x16_t v37;
  int8x16_t v38;
  int8x16_t v39;
  int8x16_t v40;
  int8x16_t v41;
  int8x16_t v42;
  int8x16_t v43;
  int8x16_t v44;
  int8x16_t v45;
  int8x16_t v46;
  int8x16_t v47;
  int8x16_t v48;
  int8x16_t v49;
  int8x16_t v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char v56;
  unsigned int v57;
  bool v58;
  unsigned int v59;
  int32x4_t v60;
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  char v64;
  unsigned int v65;
  char v66;
  __int64 v67;
  unsigned int v68;
  char v69;
  __int64 v70;
  unsigned int v71;
  char v72;
  __int64 v73;
  unsigned int v74;
  __int64 v75;
  int8x16_t* v76;
  __int64 v77;
  __int64 v78;
  int8x16_t v79;
  int16x8_t v80;
  int8x16_t v81;
  unsigned __int32 v82;
  int16x8_t v83;
  unsigned __int32 v84;
  int8x16_t v85;
  int8x16_t v86;
  int16x8_t v87;
  int16x8_t v88;
  int8x16_t v89;
  int8x16_t v90;
  unsigned __int32 v91;
  int16x8_t v92;
  int16x8_t v93;
  unsigned __int32 v94;
  uint32x4_t v95;
  int8x16_t v96;
  int8x16_t* v97;
  int8x16_t v98;
  int8x16_t v99;
  int v100;
  int v101;
  unsigned __int8* v102;
  __int64 v103;
  unsigned int v104;
  unsigned int v105;
  __int64 v106;
  __int64 v107;
  unsigned int v108;
  __int64 v109;
  unsigned __int8* v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  unsigned __int64 v114;
  bool v115;
  __int64 v116;
  __int64 v117;
  bool v118;
  char v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  unsigned int v130;
  int v131;
  __int64 v132;
  int8x16_t v133;
  int8x16_t v134;
  int8x16_t v135;
  int8x16_t v136;
  int8x16_t v137;
  __int64 v138;
  int32x4_t v139;
  __int64 v140;
  unsigned int v141;
  __int64 v142;
  __int64 v143;
  int8x16_t v144;
  unsigned __int8* v145;
  int16x8_t v146;
  int16x8_t v147;
  int16x8_t v148;
  int8x16_t v149;
  int8x16_t v150;
  int16x8_t v151;
  int16x8_t v152;
  int16x8_t v153;
  int16x8_t v154;
  int8x16_t v155;
  int16x8_t v156;
  int16x8_t v157;
  int8x16_t v158;
  int16x8_t v159;
  int8x16_t v160;
  int8x16_t v161;
  int16x8_t v162;
  int8x16_t v163;
  int16x8_t v164;
  int8x16_t v165;
  int16x8_t v166;
  int8x16_t v167;
  int16x8_t v168;
  int8x16_t v169;
  int16x8_t v170;
  int8x16_t v171;
  int8x16_t v172;
  int16x8_t v173;
  int16x8_t v174;
  int8x16_t v175;
  int16x8_t v176;
  int16x8_t v177;
  int8x16_t v178;
  int16x8_t v179;
  int16x8_t v180;
  int8x16_t v181;
  int8x16_t v182;
  int16x8_t v183;
  int8x16_t v184;
  int16x8_t v185;
  int8x16_t v186;
  int8x16_t v187;
  int8x16_t v188;
  int8x16_t v189;
  int16x8_t v190;
  int8x16_t v191;
  int8x16_t v192;
  int8x16_t v193;
  int16x8_t v194;
  int8x16_t v195;
  int8x16_t v196;
  int8x16_t v197;
  int8x16_t v198;
  int8x16_t v199;
  int8x16_t v200;
  int8x16_t v201;
  int16x8_t v202;
  int8x16_t v203;
  int8x16_t v204;
  int16x8_t v205;
  int16x8_t v206;
  int8x16_t v207;
  int8x16_t v208;
  int16x8_t v209;
  int8x16_t v210;
  int16x8_t v211;
  int8x16_t v212;
  int8x16_t v213;
  int8x16_t v214;
  int8x16_t v215;
  int8x16_t v216;
  int8x16_t v217;
  int16x8_t v218;
  int8x16_t v219;
  int8x16_t v220;
  int8x16_t v221;
  unsigned __int8* v222;
  int v223;
  int v224;
  __int64 v225;
  unsigned int v226;
  unsigned int v227;
  __int64 v228;
  __int64 v229;
  unsigned int v230;
  int8x16_t v231;
  __int64 v232;
  unsigned __int8* v233;
  int16x8_t v234;
  int16x8_t v235;
  int16x8_t v236;
  int16x8_t v237;
  int8x16_t v238;
  int16x8_t v239;
  int16x8_t v240;
  int16x8_t v241;
  int16x8_t v242;
  int8x16_t v243;
  int16x8_t v244;
  int16x8_t v245;
  int8x16_t v246;
  int8x16_t v247;
  int16x8_t v248;
  int16x8_t v249;
  int16x8_t v250;
  int8x16_t v251;
  int16x8_t v252;
  int16x8_t v253;
  int16x8_t v254;
  int8x16_t v255;
  int8x16_t v256;
  int16x8_t v257;
  int16x8_t v258;
  int8x16_t v259;
  int8x16_t v260;
  int16x8_t v261;
  int16x8_t v262;
  int16x8_t v263;
  int8x16_t v264;
  int8x16_t v265;
  int8x16_t v266;
  int16x8_t v267;
  int16x8_t v268;
  int16x8_t v269;
  int8x16_t v270;
  int8x16_t v271;
  int16x8_t v272;
  int8x16_t v273;
  int8x16_t v274;
  int8x16_t v275;
  int8x16_t v276;
  int16x8_t v277;
  int16x8_t v278;
  int16x8_t v279;
  int8x16_t v280;
  int8x16_t v281;
  int16x8_t v282;
  int16x8_t v283;
  int8x16_t v284;
  int16x8_t v285;
  int8x16_t v286;
  int16x8_t v287;
  int16x8_t v288;
  int16x8_t v289;
  int16x8_t v290;
  int16x8_t v291;
  int8x16_t v292;
  int8x16_t v293;
  int8x16_t v294;
  int8x16_t v295;
  int16x8_t v296;
  int16x8_t v297;
  int8x16_t v298;
  int8x16_t v299;
  int16x8_t v300;
  int16x8_t v301;
  int8x16_t v302;
  int8x16_t v303;
  int8x16_t v304;
  int8x16_t v305;
  int8x16_t v306;
  int8x16_t v307;
  int8x16_t v308;
  int16x8_t v309;
  int16x8_t v310;
  int16x8_t v311;
  int8x16_t v312;
  int16x8_t v313;
  int8x16_t v314;
  int8x16_t v315;
  int16x8_t v316;
  int8x16_t v317;
  int16x8_t v318;
  int8x16_t v319;
  int8x16_t v320;
  int16x8_t v321;
  int8x16_t v322;
  int16x8_t v323;
  int16x8_t v324;
  int8x16_t v325;
  int8x16_t v326;
  int8x16_t v327;
  int16x8_t v328;
  int8x16_t v329;
  int8x16_t v330;
  int8x16_t v331;
  int16x8_t v332;
  int8x16_t v333;
  int16x8_t v334;
  int8x16_t v335;
  int8x16_t v336;
  int8x16_t v337;
  int8x16_t v338;
  int8x16_t v339;
  int8x16_t v340;
  int8x16_t v341;
  int16x8_t v342;
  int8x16_t v343;
  int8x16_t v344;
  int8x16_t v345;
  int16x8_t v346;
  int8x16_t v347;
  int16x8_t v348;
  int8x16_t v349;
  int16x8_t v350;
  int16x8_t v351;
  int8x16_t v352;
  int16x8_t v353;
  int8x16_t v354;
  int8x16_t v355;
  int8x16_t v356;
  int8x16_t v357;
  int16x8_t v358;
  int16x8_t v359;
  int8x16_t v360;
  int8x16_t v361;
  int8x16_t v362;
  int16x8_t v363;
  int8x16_t v364;
  int16x8_t v365;
  int16x8_t v366;
  int8x16_t v367;
  int8x16_t v368;
  int8x16_t v369;
  int8x16_t v370;
  int8x16_t v371;
  int8x16_t v372;
  int8x16_t v373;
  int16x8_t v374;
  int16x8_t v375;
  int8x16_t v376;
  int8x16_t v377;
  int8x16_t v378;
  int16x8_t v379;
  int16x8_t v380;
  int16x8_t v381;
  int8x16_t v382;
  int8x16_t v383;
  int8x16_t v384;
  int8x16_t v385;
  int8x16_t v386;
  int8x16_t v387;
  int8x16_t v388;
  int8x16_t v389;
  int8x16_t v390;
  int16x8_t v391;
  int16x8_t v392;
  int8x16_t v393;
  int8x16_t v394;
  int8x16_t v395;
  int16x8_t v396;
  int8x16_t v397;
  int8x16_t v398;
  int8x16_t v399;
  int8x16_t v400;
  int8x16_t v401;
  int8x16_t v402;
  int8x16_t v403;
  __int64 v404;
  unsigned __int8* v405;
  unsigned int v406;
  unsigned int v407;
  unsigned int v408;
  int8x16_t* v409;
  __int64 v410;
  int8x16_t v411;
  int8x16_t v412;
  int16x8_t v413;
  unsigned int v414;
  __int64 v415;
  signed int v416;
  int v417;
  unsigned __int8* v418;
  __int64 v419;
  __int64 v420;
  int v421;
  __int64 v422;
  bool v423;
  __int64 v424;
  int v425;
  int v426;
  unsigned int v427;
  int v428;
  int v429;
  int v430;
  int v431;
  int v432;
  __int16 v433;
  bool v434;
  unsigned int v435;
  int v436;
  _OWORD* v437;
  __int64 v438;
  __int64 v439;
  __int64 v440;
  __int64 v441;
  int v442;
  unsigned __int64 v443;
  bool v444;
  int v445;
  int v446;
  int v447;
  int v448;
  int v449;
  int v450;
  unsigned int v451;
  int v452;
  int v453;
  int v454;
  __int16 v455;
  bool v456;
  unsigned int v457;
  int v458;
  unsigned int v459;
  unsigned int v461;
  int8x16_t v462;
  unsigned int v463;
  int v464;
  int8x16_t v465;
  int v466;
  __int64 v467;
  bool v468;
  __int64 v469;
  __int64 v470;
  _QWORD v473[3];
  struct {
    _QWORD v474[48];
    _QWORD v475[8];
  } v474_;

  v10 = *a3;
  memset(v473, 0, sizeof(v473));
  v459 = v10;
  if (a7 > *(_DWORD*)(a4 + 96)) {
    return 915;
  }
  v16 = cuda_driver_predicates_9ae50((__int64)a1);
  v17 = a1;
  v18 = 15;
  v19 = v16;
  v467 = a2;
  v20 = a6 | (*(_DWORD*)(a4 + 96) == a1[4965]);
  if ((a6 & 2) == 0) {
    v21 = cuda_driver_predicates_9ae50((__int64)a1);
    if (v21) {
      v18 = 1;
    }
    else {
      v18 = 15;
    }
    if ((a6 & 1) != 0) {
      v17 = a1;
    }
    else {
      v17 = a1;
      if (v21) {
        v18 = a1[1059] / a1[934];
        goto LABEL_13;
      }
    }
  }
  if ((a6 & 1) != 0) {
    v22 = *(_QWORD*)(a4 + 8);
    v23 = v17 + 934;
    v24 = v17 + 934;
    goto LABEL_14;
  }
LABEL_13:
  v22 = *(_QWORD*)(a4 + 8);
  v23 = (unsigned int*)(v22 + 16);
  v24 = (unsigned int*)(v22 + 20);
LABEL_14:
  v25 = *v23;
  v26 = *v24;
  v469 = a4;
  v27 = *(_DWORD*)(a4 + 96);
  v28 = v17[4965];
  v29 = *(_OWORD*)(v22 + 48);
  if (a7 > v26) {
    v26 = a7;
  }
  *(_OWORD*)v474_.v475 = *(_OWORD*)(v22 + 32);
  *(_OWORD*)&v474_.v475[2] = v29;
  *(_OWORD*)&v474_.v475[4] = *(_OWORD*)(v22 + 64);
  v30 = (v25 + v26 - 1) / v25 * v25;
  if (v30 >= v27) {
    v31 = v27;
  }
  else {
    v31 = v30;
  }
  v32 = v28 == v27 && v27 <= v30;
  if (v32) {
    v33 = 15;
  }
  else {
    v33 = v18;
  }
  v34 = ((v32 | v20) & 1) == 0 && v19;
  v468 = v34;
  memcpy_plt((__int64)v474_.v474, v22 + 80, 0x180u);
  v51 = *(unsigned int*)(v22 + 24);
  if ((_DWORD)v51 == 0) {
    v53 = (__int64)a1;
    v63 = 0;
    goto LABEL_80;
  }
  v52 = v22 + 32;
  if ((unsigned int)v51 >= 4) {
    v53 = (__int64)a1;
    v54 = 0;
    while (1) {
      v65 = *(unsigned __int16*)(v52 + 2 * v54);
      if (*(_WORD*)(v52 + 2 * v54) != 0) {
        v66 = 0;
        do {
          v66 += v65 & 1;
          v58 = v65 > 1;
          v65 >>= 1;
        } while (v58);
        *((_BYTE*)v473 + v54) = v66;
        v67 = v54 | 1;
        v68 = *(unsigned __int16*)(v52 + 2 * (v54 | 1));
        if (*(_WORD*)(v52 + 2 * (v54 | 1)) == 0) {
        LABEL_56:
          *((_BYTE*)v473 + v67) = 0;
          v70 = v54 | 2;
          v71 = *(unsigned __int16*)(v52 + 2 * (v54 | 2));
          if (*(_WORD*)(v52 + 2 * (v54 | 2)) == 0) {
            goto LABEL_57;
          }
          goto LABEL_51;
        }
      }
      else {
        *((_BYTE*)v473 + v54) = 0;
        v67 = v54 | 1;
        v68 = *(unsigned __int16*)(v52 + 2 * (v54 | 1));
        if (*(_WORD*)(v52 + 2 * (v54 | 1)) == 0) {
          goto LABEL_56;
        }
      }
      v69 = 0;
      do {
        v69 += v68 & 1;
        v58 = v68 > 1;
        v68 >>= 1;
      } while (v58);
      *((_BYTE*)v473 + v67) = v69;
      v70 = v54 | 2;
      v71 = *(unsigned __int16*)(v52 + 2 * (v54 | 2));
      if (*(_WORD*)(v52 + 2 * (v54 | 2)) == 0) {
      LABEL_57:
        *((_BYTE*)v473 + v70) = 0;
        v73 = v54 | 3;
        v74 = *(unsigned __int16*)(v52 + 2 * (v54 | 3));
        if (*(_WORD*)(v52 + 2 * (v54 | 3)) != 0) {
          goto LABEL_58;
        }
        goto LABEL_42;
      }
    LABEL_51:
      v72 = 0;
      do {
        v72 += v71 & 1;
        v58 = v71 > 1;
        v71 >>= 1;
      } while (v58);
      *((_BYTE*)v473 + v70) = v72;
      v73 = v54 | 3;
      v74 = *(unsigned __int16*)(v52 + 2 * (v54 | 3));
      if (*(_WORD*)(v52 + 2 * (v54 | 3)) != 0) {
      LABEL_58:
        v64 = 0;
        do {
          v64 += v74 & 1;
          v58 = v74 > 1;
          v74 >>= 1;
        } while (v58);
        goto LABEL_43;
      }
    LABEL_42:
      v64 = 0;
    LABEL_43:
      v54 += 4;
      *((_BYTE*)v473 + v73) = v64;
      if (v54 == (v51 & 0xFFFFFFFC)) {
        goto LABEL_28;
      }
    }
  }
  v53 = (__int64)a1;
  v54 = 0;
LABEL_28:
  if ((v51 & 3) != 0) {
    v55 = 0;
    do {
      v57 = *(unsigned __int16*)(v52 + 2 * v54);
      if (*(_WORD*)(v52 + 2 * v54) != 0) {
        v56 = 0;
        do {
          v56 += v57 & 1;
          v58 = v57 > 1;
          v57 >>= 1;
        } while (v58);
      }
      else {
        v56 = 0;
      }
      *((_BYTE*)v473 + v54++) = v56;
      ++v55;
    } while (v55 != (v51 & 3));
  }
  v59 = v25 / *(_DWORD*)(v53 + 3736);
  if (!v468) {
    if ((_DWORD)v51 == 1) {
      v75 = 0;
      v63 = 0;
    }
    else {
      v75 = (unsigned int)v51 & 0xFFFFFFFE;
      v100 = 0;
      v101 = 0;
      v102 = (unsigned __int8*)v473 + 1;
      v103 = v75;
      do {
        v104 = *(v102 - 1);
        v105 = *v102;
        v102 += 2;
        v103 -= 2;
        v100 += v104 / v59;
        v101 += v105 / v59;
      } while (v103 != 0);
      v63 = v101 + v100;
      if (v75 == v51) {
        goto LABEL_80;
      }
    }
    v106 = ((int)v51 - (int)v75) & 7LL;
    if (v106 != 0) {
      v107 = v75;
      do {
        v108 = *((unsigned __int8*)v473 + v107++);
        --v106;
        v63 += v108 / v59;
      } while (v106 != 0);
      if ((unsigned __int64)(v75 - v51) > 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_80;
      }
    }
    else {
      v107 = v75;
      if ((unsigned __int64)(v75 - v51) > 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_80;
      }
    }
    v109 = v51 - v107;
    v110 = (unsigned __int8*)v473 + v107 + 3;
    do {
      v109 -= 8;
      v111 = v110[4];
      v112 = v110[2] / v59 + v110[1] / v59 + *v110 / v59 + *(v110 - 1) / v59 +
             *(v110 - 2) / v59 + *(v110 - 3) / v59 + v63;
      v113 = v110[3];
      v110 += 8;
      v63 = v111 / v59 + v113 / v59 + v112;
    } while (v109 != 0);
    goto LABEL_80;
  }
  v60 = vdupq_n_s32(v59);
  v61 = v51 & 3;
  if ((unsigned int)v51 >= 4) {
    v35 = COERCE_AS(int8x16_t, CudaDriverData_1115e10);
    v36 = COERCE_AS(int8x16_t, CudaDriverData_1115a40);
    v76 = (int8x16_t*)(v22 + 128);
    v77 = 0;
    v63 = 0;
    v78 = -(__int64)((unsigned int)v51 & 0xFFFFFFFC);
    v37 = COERCE_AS(int8x16_t, CudaDriverData_11161f0);
    v38 = COERCE_AS(int8x16_t, CudaDriverData_1116200);
    do {
      v77 -= 4;
      v79 = vandq_s8(
          vuzp1q_s8(vuzp1q_s16(
                        vcgeq_u32(vqtbl1q_s8(v76[-3],
                                             COERCE_AS(int8x16_t,
                                                       CudaDriverData_1115a40)),
                                  v60),
                        vcgeq_u32(vqtbl1q_s8(v76[-3],
                                             COERCE_AS(int8x16_t,
                                                       CudaDriverData_11161f0)),
                                  v60)),
                    vuzp1q_s16(
                        vcgeq_u32(vqtbl1q_s8(v76[-3],
                                             COERCE_AS(int8x16_t,
                                                       CudaDriverData_1115e10)),
                                  v60),
                        vcgeq_u32(vqtbl1q_s8(v76[-3],
                                             COERCE_AS(int8x16_t,
                                                       CudaDriverData_11152f0)),
                                  v60))),
          COERCE_AS(int8x16_t, CudaDriverData_1116200));
      v80 = vzip1q_s8(v79, vextq_s8(v79, v79, 8u));
      PSEUDO_LOW_LANE128(v80, n128_u16, vaddvq_s16(v80));
      LANES128(v80).n128_u64[0] =
          LANES64_OF(vcnt_s8(COERCE_AS(int8x8_t, LANES128(v80).n128_u64[0])))
              .n64_u64[0];
      v81 = vandq_s8(
          vuzp1q_s8(vuzp1q_s16(
                        vcgeq_u32(vqtbl1q_s8(v76[-2],
                                             COERCE_AS(int8x16_t,
                                                       CudaDriverData_1115a40)),
                                  v60),
                        vcgeq_u32(vqtbl1q_s8(v76[-2],
                                             COERCE_AS(int8x16_t,
                                                       CudaDriverData_11161f0)),
                                  v60)),
                    vuzp1q_s16(
                        vcgeq_u32(vqtbl1q_s8(v76[-2],
                                             COERCE_AS(int8x16_t,
                                                       CudaDriverData_1115e10)),
                                  v60),
                        vcgeq_u32(vqtbl1q_s8(v76[-2],
                                             COERCE_AS(int8x16_t,
                                                       CudaDriverData_11152f0)),
                                  v60))),
          COERCE_AS(int8x16_t, CudaDriverData_1116200));
      PSEUDO_LOW_LANE128(
          v80, n128_u8,
          vaddv_s8(COERCE_AS(int8x8_t, LANES128(v80).n128_u64[0])));
      v82 = v63 + LANES128(v80).n128_u32[0];
      v83 = vzip1q_s8(v81, vextq_s8(v81, v81, 8u));
      PSEUDO_LOW_LANE128(v83, n128_u16, vaddvq_s16(v83));
      v84 = LANES128(v83).n128_u32[0];
      v85 = v76[-1];
      v86 = *v76;
      v76 += 4;
      v87 = vcgeq_u32(
          vqtbl1q_s8(v85, COERCE_AS(int8x16_t, CudaDriverData_1115a40)), v60);
      v43 = vcgeq_u32(
          vqtbl1q_s8(v85, COERCE_AS(int8x16_t, CudaDriverData_11161f0)), v60);
      v88 = vcgeq_u32(
          vqtbl1q_s8(v85, COERCE_AS(int8x16_t, CudaDriverData_11152f0)), v60);
      v89 = vuzp1q_s16(
          vcgeq_u32(
              vqtbl1q_s8(v85, COERCE_AS(int8x16_t, CudaDriverData_1115e10)),
              v60),
          v88);
      PSEUDO_LOW_LANE128(v88, n128_u32, v84);
      LANES128(v88).n128_u64[0] =
          LANES64_OF(vcnt_s8(COERCE_AS(int8x8_t, LANES128(v88).n128_u64[0])))
              .n64_u64[0];
      PSEUDO_LOW_LANE128(
          v88, n128_u8,
          vaddv_s8(COERCE_AS(int8x8_t, LANES128(v88).n128_u64[0])));
      v90 = vandq_s8(vuzp1q_s8(vuzp1q_s16(v87, v43), v89),
                     COERCE_AS(int8x16_t, CudaDriverData_1116200));
      v91 = LANES128(v88).n128_u32[0];
      v42 = vcgeq_u32(
          vqtbl1q_s8(v86, COERCE_AS(int8x16_t, CudaDriverData_1115a40)), v60);
      v92 = vzip1q_s8(v90, vextq_s8(v90, v90, 8u));
      PSEUDO_LOW_LANE128(v92, n128_u16, vaddvq_s16(v92));
      v93 = vcgeq_u32(
          vqtbl1q_s8(v86, COERCE_AS(int8x16_t, CudaDriverData_1115e10)), v60);
      LANES128(v92).n128_u64[0] =
          LANES64_OF(vcnt_s8(COERCE_AS(int8x8_t, LANES128(v92).n128_u64[0])))
              .n64_u64[0];
      PSEUDO_LOW_LANE128(
          v92, n128_u8,
          vaddv_s8(COERCE_AS(int8x8_t, LANES128(v92).n128_u64[0])));
      v94 = LANES128(v92).n128_u32[0];
      v95 = vqtbl1q_s8(v86, COERCE_AS(int8x16_t, CudaDriverData_11152f0));
      v41 = vuzp1q_s16(
          v42, vcgeq_u32(vqtbl1q_s8(
                             v86, COERCE_AS(int8x16_t, CudaDriverData_11161f0)),
                         v60));
      v96 = vandq_s8(vuzp1q_s8(v41, vuzp1q_s16(v93, vcgeq_u32(v95, v60))),
                     COERCE_AS(int8x16_t, CudaDriverData_1116200));
      v40 = vextq_s8(v96, v96, 8u);
      v39 = vzip1q_s8(v96, v40);
      LANES128(v39).n128_u16[0] = vaddvq_s16(v39);
      LANES128(v39).n128_u64[0] =
          LANES64_OF(vcnt_s8(COERCE_AS(int8x8_t, LANES128(v39).n128_u64[0])))
              .n64_u64[0];
      LANES128(v39).n128_u8[0] =
          vaddv_s8(COERCE_AS(int8x8_t, LANES128(v39).n128_u64[0]));
      v63 = v82 + v91 + v94 + LANES128(v39).n128_u32[0];
    } while (v78 != v77);
    v62 = -v77;
    if (v61 == 0) {
      goto LABEL_80;
    }
    goto LABEL_66;
  }
  v62 = 0;
  v63 = 0;
  if (v61 != 0) {
  LABEL_66:
    v35 = COERCE_AS(int8x16_t, CudaDriverData_1115e10);
    v36 = COERCE_AS(int8x16_t, CudaDriverData_1115a40);
    v97 = (int8x16_t*)(v22 + 16 * v62 + 80);
    v37 = COERCE_AS(int8x16_t, CudaDriverData_11161f0);
    v38 = COERCE_AS(int8x16_t, CudaDriverData_1116200);
    do {
      v98 = *v97++;
      --v61;
      v42 = vcgeq_u32(
          vqtbl1q_s8(v98, COERCE_AS(int8x16_t, CudaDriverData_1115a40)), v60);
      v41 = vcgeq_u32(
          vqtbl1q_s8(v98, COERCE_AS(int8x16_t, CudaDriverData_1115e10)), v60);
      v99 = vandq_s8(
          vuzp1q_s8(
              vuzp1q_s16(
                  v42,
                  vcgeq_u32(vqtbl1q_s8(v98, COERCE_AS(int8x16_t,
                                                      CudaDriverData_11161f0)),
                            v60)),
              vuzp1q_s16(
                  v41,
                  vcgeq_u32(vqtbl1q_s8(v98, COERCE_AS(int8x16_t,
                                                      CudaDriverData_11152f0)),
                            v60))),
          COERCE_AS(int8x16_t, CudaDriverData_1116200));
      v40 = vextq_s8(v99, v99, 8u);
      v39 = vzip1q_s8(v99, v40);
      LANES128(v39).n128_u16[0] = vaddvq_s16(v39);
      LANES128(v39).n128_u64[0] =
          LANES64_OF(vcnt_s8(COERCE_AS(int8x8_t, LANES128(v39).n128_u64[0])))
              .n64_u64[0];
      LANES128(v39).n128_u8[0] =
          vaddv_s8(COERCE_AS(int8x8_t, LANES128(v39).n128_u64[0]));
      v63 += LANES128(v39).n128_u32[0];
    } while (v61 != 0);
  }
LABEL_80:
  LODWORD(v114) = v27 / v31;
  if ((unsigned int)v114 > v63) {
    v115 = cuda_driver_predicates_9ae50(v53);
    v53 = (__int64)a1;
    if (v115) {
      LODWORD(v114) = v63;
    }
  }
  v116 = v467;
  if (v467 == 0) {
    *a3 = v114;
    return 0;
  }
  if ((_DWORD)v114 == 0) {
    return 915;
  }
  v117 = v469;
  v118 = v468;
  if ((unsigned int)v114 >= v459) {
    v114 = v459;
  }
  else {
    v114 = (unsigned int)v114;
  }
  *a3 = v114;
  if (v459 != 0) {
    v119 = a6 & 1;
    v120 = v114 & 3;
    if ((unsigned int)v114 >= 4) {
      v122 = 0;
      v121 = 0;
      do {
        v123 = v467 + v122;
        v121 += 4;
        v122 += 576;
        *(_OWORD*)(v123 + 16) = (__typeof__(*(_OWORD*)(v123 + 16))){0};
        *(_OWORD*)(v123 + 32) = (__typeof__(*(_OWORD*)(v123 + 32))){0};
        *(_OWORD*)v123 = (__typeof__(*(_OWORD*)v123)){0};
        *(_DWORD*)v123 = 1;
        *(_OWORD*)(v123 + 48) = (__typeof__(*(_OWORD*)(v123 + 48))){0};
        *(_OWORD*)(v123 + 64) = (__typeof__(*(_OWORD*)(v123 + 64))){0};
        *(_OWORD*)(v123 + 80) = (__typeof__(*(_OWORD*)(v123 + 80))){0};
        *(_OWORD*)(v123 + 96) = (__typeof__(*(_OWORD*)(v123 + 96))){0};
        *(_OWORD*)(v123 + 112) = (__typeof__(*(_OWORD*)(v123 + 112))){0};
        *(_OWORD*)(v123 + 128) = (__typeof__(*(_OWORD*)(v123 + 128))){0};
        *(_DWORD*)(v123 + 16) = *(_DWORD*)(v469 + 16);
        v124 = *(_QWORD*)(v469 + 8);
        *(_BYTE*)(v123 + 91) = 0;
        *(_BYTE*)(v123 + 90) = v119;
        *(_OWORD*)(v123 + 272) = (__typeof__(*(_OWORD*)(v123 + 272))){0};
        *(_QWORD*)(v123 + 8) = v124;
        *(_OWORD*)(v123 + 144) = (__typeof__(*(_OWORD*)(v123 + 144))){0};
        *(_OWORD*)(v123 + 160) = (__typeof__(*(_OWORD*)(v123 + 160))){0};
        *(_DWORD*)(v123 + 144) = 1;
        *(_OWORD*)(v123 + 176) = (__typeof__(*(_OWORD*)(v123 + 176))){0};
        *(_OWORD*)(v123 + 192) = (__typeof__(*(_OWORD*)(v123 + 192))){0};
        *(_OWORD*)(v123 + 208) = (__typeof__(*(_OWORD*)(v123 + 208))){0};
        *(_OWORD*)(v123 + 224) = (__typeof__(*(_OWORD*)(v123 + 224))){0};
        *(_OWORD*)(v123 + 240) = (__typeof__(*(_OWORD*)(v123 + 240))){0};
        *(_OWORD*)(v123 + 256) = (__typeof__(*(_OWORD*)(v123 + 256))){0};
        *(_DWORD*)(v123 + 160) = *(_DWORD*)(v469 + 16);
        v125 = *(_QWORD*)(v469 + 8);
        *(_BYTE*)(v123 + 235) = 0;
        *(_BYTE*)(v123 + 234) = v119;
        *(_OWORD*)(v123 + 416) = (__typeof__(*(_OWORD*)(v123 + 416))){0};
        *(_QWORD*)(v123 + 152) = v125;
        *(_OWORD*)(v123 + 288) = (__typeof__(*(_OWORD*)(v123 + 288))){0};
        *(_OWORD*)(v123 + 304) = (__typeof__(*(_OWORD*)(v123 + 304))){0};
        *(_DWORD*)(v123 + 288) = 1;
        *(_OWORD*)(v123 + 320) = (__typeof__(*(_OWORD*)(v123 + 320))){0};
        *(_OWORD*)(v123 + 336) = (__typeof__(*(_OWORD*)(v123 + 336))){0};
        *(_OWORD*)(v123 + 352) = (__typeof__(*(_OWORD*)(v123 + 352))){0};
        *(_OWORD*)(v123 + 368) = (__typeof__(*(_OWORD*)(v123 + 368))){0};
        *(_OWORD*)(v123 + 384) = (__typeof__(*(_OWORD*)(v123 + 384))){0};
        *(_OWORD*)(v123 + 400) = (__typeof__(*(_OWORD*)(v123 + 400))){0};
        *(_DWORD*)(v123 + 304) = *(_DWORD*)(v469 + 16);
        v126 = *(_QWORD*)(v469 + 8);
        *(_BYTE*)(v123 + 379) = 0;
        *(_BYTE*)(v123 + 378) = v119;
        *(_OWORD*)(v123 + 560) = (__typeof__(*(_OWORD*)(v123 + 560))){0};
        *(_QWORD*)(v123 + 296) = v126;
        *(_OWORD*)(v123 + 432) = (__typeof__(*(_OWORD*)(v123 + 432))){0};
        *(_OWORD*)(v123 + 448) = (__typeof__(*(_OWORD*)(v123 + 448))){0};
        *(_DWORD*)(v123 + 432) = 1;
        *(_OWORD*)(v123 + 464) = (__typeof__(*(_OWORD*)(v123 + 464))){0};
        *(_OWORD*)(v123 + 480) = (__typeof__(*(_OWORD*)(v123 + 480))){0};
        *(_OWORD*)(v123 + 496) = (__typeof__(*(_OWORD*)(v123 + 496))){0};
        *(_OWORD*)(v123 + 512) = (__typeof__(*(_OWORD*)(v123 + 512))){0};
        *(_OWORD*)(v123 + 528) = (__typeof__(*(_OWORD*)(v123 + 528))){0};
        *(_OWORD*)(v123 + 544) = (__typeof__(*(_OWORD*)(v123 + 544))){0};
        *(_DWORD*)(v123 + 448) = *(_DWORD*)(v469 + 16);
        v127 = *(_QWORD*)(v469 + 8);
        *(_BYTE*)(v123 + 523) = 0;
        *(_BYTE*)(v123 + 522) = v119;
        *(_QWORD*)(v123 + 440) = v127;
      } while (576 * (v114 >> 2) != v122);
    }
    else {
      v121 = 0;
    }
    if ((v114 & 3) != 0) {
      v128 = v467 + 144 * v121;
      do {
        *(_OWORD*)(v128 + 16) = (__typeof__(*(_OWORD*)(v128 + 16))){0};
        *(_OWORD*)(v128 + 32) = (__typeof__(*(_OWORD*)(v128 + 32))){0};
        --v120;
        *(_OWORD*)v128 = (__typeof__(*(_OWORD*)v128)){0};
        *(_DWORD*)v128 = 1;
        *(_OWORD*)(v128 + 48) = (__typeof__(*(_OWORD*)(v128 + 48))){0};
        *(_OWORD*)(v128 + 64) = (__typeof__(*(_OWORD*)(v128 + 64))){0};
        *(_OWORD*)(v128 + 80) = (__typeof__(*(_OWORD*)(v128 + 80))){0};
        *(_OWORD*)(v128 + 96) = (__typeof__(*(_OWORD*)(v128 + 96))){0};
        *(_OWORD*)(v128 + 112) = (__typeof__(*(_OWORD*)(v128 + 112))){0};
        *(_OWORD*)(v128 + 128) = (__typeof__(*(_OWORD*)(v128 + 128))){0};
        *(_DWORD*)(v128 + 16) = *(_DWORD*)(v469 + 16);
        v129 = *(_QWORD*)(v469 + 8);
        *(_BYTE*)(v128 + 91) = 0;
        *(_BYTE*)(v128 + 90) = v119;
        *(_QWORD*)(v128 + 8) = v129;
        v128 += 144;
      } while (v120 != 0);
    }
  }
  v130 = *(_DWORD*)(v53 + 3736);
  if (v130 > v31 || v33 < 1) {
    goto LABEL_213;
  }
  v131 = v31 / v130;
  v461 = v114;
  if ((unsigned int)v114 <= 1) {
    v132 = 1;
  }
  else {
    v132 = (unsigned int)v114;
  }
  v470 = v132;
  v133 = COERCE_AS(int8x16_t, CudaDriverData_11152f0);
  v134 = COERCE_AS(int8x16_t, CudaDriverData_1115e10);
  v135 = COERCE_AS(int8x16_t, CudaDriverData_1115a40);
  v136 = COERCE_AS(int8x16_t, CudaDriverData_11161f0);
  v137 = COERCE_AS(int8x16_t, CudaDriverData_1116200);
  while (1) {
    v138 = *(unsigned int*)(*(_QWORD*)(v117 + 8) + 24LL);
    if ((_DWORD)v138 == 0) {
      v141 = 0;
      goto LABEL_135;
    }
    if (v118) {
      v139 = vdupq_n_s32((unsigned __int8)v33);
      if ((unsigned int)v138 <= 0xF) {
        v140 = 0;
        v141 = 0;
      LABEL_133:
        v409 = (int8x16_t*)&v474_.v474[2 * v140];
        v410 = v138 - v140;
        do {
          v411 = *v409++;
          --v410;
          v37 = vcgeq_u32(vqtbl1q_s8(v411, v135), v139);
          v36 = vcgeq_u32(vqtbl1q_s8(v411, v134), v139);
          v412 = vandq_s8(
              vuzp1q_s8(
                  vuzp1q_s16(v37, vcgeq_u32(vqtbl1q_s8(v411, v136), v139)),
                  vuzp1q_s16(v36, vcgeq_u32(vqtbl1q_s8(v411, v133), v139))),
              v137);
          v35 = vextq_s8(v412, v412, 8u);
          v413 = vzip1q_s8(v412, v35);
          PSEUDO_LOW_LANE128(v413, n128_u16, vaddvq_s16(v413));
          LANES128(v413).n128_u64[0] =
              LANES64_OF(
                  vcnt_s8(COERCE_AS(int8x8_t, LANES128(v413).n128_u64[0])))
                  .n64_u64[0];
          PSEUDO_LOW_LANE128(
              v413, n128_u8,
              vaddv_s8(COERCE_AS(int8x8_t, LANES128(v413).n128_u64[0])));
          v141 += LANES128(v413).n128_u32[0];
        } while (v410 != 0);
        goto LABEL_135;
      }
      if ((unsigned int)v138 >= 0x20) {
        v35 = (__typeof__(v35)){0};
        v231 = (__typeof__(v231)){0};
        v140 = (unsigned int)v138 & 0xFFFFFFE0;
        v232 = 0;
        do {
          v233 = (unsigned __int8*)&v474_.v474[2 * v232];
          v462 = v35;
          v465 = v231;
          v232 += 32;
          LANES128(v35).n128_u8[0] = *v233;
          LANES128(v37).n128_u8[0] = v233[192];
          LANES128(v231).n128_u8[0] = v233[64];
          LANES128(v40).n128_u8[0] = v233[256];
          LANES128(v36).n128_u8[0] = v233[128];
          LANES128(v42).n128_u8[0] = v233[448];
          LANES128(v41).n128_u8[0] = v233[320];
          LANES128(v44).n128_u8[0] = v233[129];
          LANES128(v38).n128_u8[0] = v233[384];
          LANES128(v47).n128_u8[0] = v233[257];
          LANES128(v50).n128_u8[0] = v233[449];
          LANES128(v43).n128_u8[0] = v233[65];
          LANES128(v45).n128_u8[0] = v233[193];
          LANES128(v49).n128_u8[0] = v233[321];
          LANES128(v7).n128_u8[0] = v233[322];
          LANES128(v133).n128_u8[0] = v233[130];
          LANES128(v134).n128_u8[0] = v233[194];
          LANES128(v136).n128_u8[0] = v233[258];
          LANES128(v8).n128_u8[0] = v233[451];
          LANES128(v9).n128_u8[0] = v233[326];
          LANES128(v35).n128_u8[4] = v233[16];
          LANES128(v37).n128_u8[4] = v233[208];
          LANES128(v40).n128_u8[4] = v233[272];
          LANES128(v36).n128_u8[4] = v233[144];
          LANES128(v44).n128_u8[4] = v233[145];
          LANES128(v38).n128_u8[4] = v233[400];
          LANES128(v47).n128_u8[4] = v233[273];
          LANES128(v45).n128_u8[4] = v233[209];
          LANES128(v49).n128_u8[4] = v233[337];
          LANES128(v43).n128_u8[4] = v233[81];
          LANES128(v35).n128_u8[8] = v233[32];
          LANES128(v37).n128_u8[8] = v233[224];
          LANES128(v40).n128_u8[8] = v233[288];
          LANES128(v36).n128_u8[8] = v233[160];
          LANES128(v44).n128_u8[8] = v233[161];
          LANES128(v47).n128_u8[8] = v233[289];
          LANES128(v45).n128_u8[8] = v233[225];
          LANES128(v49).n128_u8[8] = v233[353];
          LANES128(v231).n128_u8[4] = v233[80];
          LANES128(v38).n128_u8[8] = v233[416];
          LANES128(v37).n128_u8[12] = v233[240];
          LANES128(v36).n128_u8[12] = v233[176];
          LANES128(v44).n128_u8[12] = v233[177];
          LANES128(v47).n128_u8[12] = v233[305];
          LANES128(v45).n128_u8[12] = v233[241];
          LANES128(v49).n128_u8[12] = v233[369];
          LANES128(v231).n128_u8[8] = v233[96];
          LANES128(v42).n128_u8[4] = v233[464];
          LANES128(v41).n128_u8[4] = v233[336];
          LANES128(v38).n128_u8[12] = v233[432];
          LANES128(v7).n128_u8[4] = v233[338];
          LANES128(v134).n128_u8[4] = v233[210];
          LANES128(v136).n128_u8[4] = v233[274];
          LANES128(v35).n128_u8[12] = v233[48];
          LANES128(v50).n128_u8[4] = v233[465];
          LANES128(v43).n128_u8[8] = v233[97];
          v234 = vcgeq_u32(v36, v139);
          v235 = vcgeq_u32(v44, v139);
          v236 = vcgeq_u32(v45, v139);
          LANES128(v231).n128_u8[12] = v233[112];
          LANES128(v42).n128_u8[8] = v233[480];
          LANES128(v41).n128_u8[8] = v233[352];
          LANES128(v7).n128_u8[8] = v233[354];
          LANES128(v134).n128_u8[8] = v233[226];
          LANES128(v136).n128_u8[8] = v233[290];
          LANES128(v40).n128_u8[12] = v233[304];
          v237 = vcgeq_u32(v35, v139);
          LANES128(v43).n128_u8[12] = v233[113];
          LANES128(v50).n128_u8[8] = v233[481];
          LANES128(v133).n128_u8[4] = v233[146];
          v238 = vuzp1q_s16(v234, vcgeq_u32(v37, v139));
          LANES128(v234).n128_u8[0] = v233[386];
          LANES128(v42).n128_u8[12] = v233[496];
          LANES128(v41).n128_u8[12] = v233[368];
          v239 = vcgeq_u32(v231, v139);
          LANES128(v7).n128_u8[12] = v233[370];
          LANES128(v134).n128_u8[12] = v233[242];
          LANES128(v136).n128_u8[12] = v233[306];
          v240 = vcgeq_u32(v40, v139);
          LANES128(v40).n128_u8[0] = v233[385];
          LANES128(v234).n128_u8[4] = v233[402];
          v241 = vcgeq_u32(v43, v139);
          v242 = vcgeq_u32(v49, v139);
          LANES128(v49).n128_u8[0] = v233[66];
          LANES128(v133).n128_u8[8] = v233[162];
          v243 = vuzp1q_s16(vcgeq_u32(v47, v139), v242);
          LANES128(v40).n128_u8[4] = v233[401];
          v244 = vcgeq_u32(v42, v139);
          LANES128(v42).n128_u8[0] = v233[1];
          v245 = vcgeq_u32(v134, v139);
          LANES128(v133).n128_u8[12] = v233[178];
          v246 = vuzp1q_s16(vcgeq_u32(v38, v139), v244);
          v247 = vuzp1q_s16(v240, vcgeq_u32(v41, v139));
          v248 = vcgeq_u32(v136, v139);
          LANES128(v136).n128_u8[0] = v233[387];
          LANES128(v42).n128_u8[4] = v233[17];
          LANES128(v40).n128_u8[8] = v233[417];
          LANES128(v50).n128_u8[12] = v233[497];
          LANES128(v234).n128_u8[8] = v233[418];
          v249 = vcgeq_u32(v133, v139);
          LANES128(v133).n128_u8[0] = v233[259];
          LANES128(v42).n128_u8[8] = v233[33];
          LANES128(v40).n128_u8[12] = v233[433];
          LANES128(v234).n128_u8[12] = v233[434];
          LANES128(v133).n128_u8[4] = v233[275];
          LANES128(v42).n128_u8[12] = v233[49];
          v250 = vcgeq_u32(v40, v139);
          v251 = vuzp1q_s16(v237, v239);
          LANES128(v239).n128_u8[0] = v233[450];
          LANES128(v49).n128_u8[4] = v233[82];
          v252 = vcgeq_u32(v234, v139);
          LANES128(v133).n128_u8[8] = v233[291];
          LANES128(v239).n128_u8[4] = v233[466];
          v253 = vcgeq_u32(v42, v139);
          v254 = vcgeq_u32(v50, v139);
          LANES128(v50).n128_u8[0] = v233[2];
          LANES128(v8).n128_u8[4] = v233[467];
          LANES128(v49).n128_u8[8] = v233[98];
          LANES128(v133).n128_u8[12] = v233[307];
          v255 = vuzp1q_s16(v253, v241);
          LANES128(v241).n128_u8[0] = v233[131];
          LANES128(v253).n128_u8[0] = v233[195];
          v256 = vuzp1q_s16(v250, v254);
          LANES128(v250).n128_u8[0] = v233[323];
          LANES128(v50).n128_u8[4] = v233[18];
          LANES128(v239).n128_u8[8] = v233[482];
          LANES128(v8).n128_u8[8] = v233[483];
          LANES128(v49).n128_u8[12] = v233[114];
          LANES128(v241).n128_u8[4] = v233[147];
          LANES128(v253).n128_u8[4] = v233[211];
          LANES128(v250).n128_u8[4] = v233[339];
          LANES128(v50).n128_u8[8] = v233[34];
          LANES128(v239).n128_u8[12] = v233[498];
          LANES128(v136).n128_u8[4] = v233[403];
          LANES128(v241).n128_u8[8] = v233[163];
          LANES128(v253).n128_u8[8] = v233[227];
          LANES128(v250).n128_u8[8] = v233[355];
          LANES128(v50).n128_u8[12] = v233[50];
          v257 = vcgeq_u32(v239, v139);
          v258 = vcgeq_u32(v7, v139);
          v259 = vuzp1q_s16(v235, v236);
          LANES128(v236).n128_u8[0] = v233[3];
          LANES128(v235).n128_u8[0] = v233[67];
          LANES128(v136).n128_u8[8] = v233[419];
          LANES128(v241).n128_u8[12] = v233[179];
          LANES128(v253).n128_u8[12] = v233[243];
          LANES128(v250).n128_u8[12] = v233[371];
          v260 = vuzp1q_s16(v248, v258);
          LANES128(v258).n128_u8[0] = v233[196];
          LANES128(v248).n128_u8[0] = v233[260];
          LANES128(v236).n128_u8[4] = v233[19];
          LANES128(v235).n128_u8[4] = v233[83];
          v261 = vcgeq_u32(v50, v139);
          LANES128(v8).n128_u8[12] = v233[499];
          LANES128(v136).n128_u8[12] = v233[435];
          LANES128(v258).n128_u8[4] = v233[212];
          LANES128(v248).n128_u8[4] = v233[276];
          v262 = vcgeq_u32(v253, v139);
          v263 = vcgeq_u32(v241, v139);
          v264 = vuzp1q_s16(v261, vcgeq_u32(v49, v139));
          v265 = vuzp1q_s16(v252, v257);
          LANES128(v257).n128_u8[0] = v233[4];
          LANES128(v252).n128_u8[0] = v233[68];
          LANES128(v261).n128_u8[0] = v233[132];
          LANES128(v236).n128_u8[8] = v233[35];
          LANES128(v235).n128_u8[8] = v233[99];
          v266 = vuzp1q_s16(v263, v262);
          LANES128(v263).n128_u8[0] = v233[452];
          v267 = vcgeq_u32(v136, v139);
          LANES128(v257).n128_u8[4] = v233[20];
          LANES128(v252).n128_u8[4] = v233[84];
          LANES128(v261).n128_u8[4] = v233[148];
          LANES128(v258).n128_u8[8] = v233[228];
          LANES128(v248).n128_u8[8] = v233[292];
          LANES128(v236).n128_u8[12] = v233[51];
          LANES128(v263).n128_u8[4] = v233[468];
          LANES128(v235).n128_u8[12] = v233[115];
          LANES128(v257).n128_u8[8] = v233[36];
          LANES128(v252).n128_u8[8] = v233[100];
          LANES128(v261).n128_u8[8] = v233[164];
          LANES128(v258).n128_u8[12] = v233[244];
          LANES128(v248).n128_u8[12] = v233[308];
          v268 = vcgeq_u32(v236, v139);
          v269 = vcgeq_u32(v250, v139);
          v270 = vuzp1q_s16(v249, v245);
          LANES128(v249).n128_u8[0] = v233[388];
          LANES128(v245).n128_u8[0] = v233[324];
          LANES128(v263).n128_u8[8] = v233[484];
          LANES128(v257).n128_u8[12] = v233[52];
          LANES128(v252).n128_u8[12] = v233[116];
          LANES128(v261).n128_u8[12] = v233[180];
          v271 = vuzp1q_s16(v268, vcgeq_u32(v235, v139));
          v272 = vcgeq_u32(v258, v139);
          v273 = vuzp1q_s16(v267, vcgeq_u32(v8, v139));
          v274 = vuzp1q_s16(vcgeq_u32(v133, v139), v269);
          LANES128(v267).n128_u8[0] = v233[5];
          v275 = vuzp1q_s8(v264, v270);
          v276 = vuzp1q_s8(v260, v265);
          LANES128(v265).n128_u8[0] = v233[72];
          LANES128(v260).n128_u8[0] = v233[136];
          LANES128(v249).n128_u8[4] = v233[404];
          LANES128(v245).n128_u8[4] = v233[340];
          LANES128(v263).n128_u8[12] = v233[500];
          v277 = vcgeq_u32(v252, v139);
          v278 = vcgeq_u32(v257, v139);
          LANES128(v249).n128_u8[8] = v233[420];
          LANES128(v245).n128_u8[8] = v233[356];
          LANES128(v267).n128_u8[4] = v233[21];
          v279 = vcgeq_u32(v263, v139);
          v280 = vuzp1q_s16(vcgeq_u32(v261, v139), v272);
          LANES128(v272).n128_u8[0] = v233[69];
          LANES128(v263).n128_u8[0] = v233[133];
          v281 = vuzp1q_s16(v278, v277);
          LANES128(v277).n128_u8[0] = v233[261];
          LANES128(v278).n128_u8[0] = v233[325];
          v50 = vuzp1q_s8(v281, v280);
          LANES128(v249).n128_u8[12] = v233[436];
          LANES128(v245).n128_u8[12] = v233[372];
          LANES128(v272).n128_u8[4] = v233[85];
          LANES128(v263).n128_u8[4] = v233[149];
          LANES128(v277).n128_u8[4] = v233[277];
          LANES128(v278).n128_u8[4] = v233[341];
          LANES128(v267).n128_u8[8] = v233[37];
          LANES128(v9).n128_u8[4] = v233[342];
          v282 = vcgeq_u32(v249, v139);
          v283 = vcgeq_u32(v245, v139);
          LANES128(v249).n128_u8[0] = v233[197];
          LANES128(v272).n128_u8[8] = v233[101];
          LANES128(v263).n128_u8[8] = v233[165];
          LANES128(v277).n128_u8[8] = v233[293];
          LANES128(v278).n128_u8[8] = v233[357];
          LANES128(v267).n128_u8[12] = v233[53];
          LANES128(v9).n128_u8[8] = v233[358];
          v284 = vuzp1q_s16(v282, v279);
          LANES128(v279).n128_u8[0] = v233[389];
          LANES128(v282).n128_u8[0] = v233[453];
          LANES128(v249).n128_u8[4] = v233[213];
          LANES128(v272).n128_u8[12] = v233[117];
          LANES128(v263).n128_u8[12] = v233[181];
          LANES128(v277).n128_u8[12] = v233[309];
          LANES128(v278).n128_u8[12] = v233[373];
          LANES128(v9).n128_u8[12] = v233[374];
          LANES128(v279).n128_u8[4] = v233[405];
          LANES128(v282).n128_u8[4] = v233[469];
          LANES128(v249).n128_u8[8] = v233[229];
          LANES128(v279).n128_u8[8] = v233[421];
          LANES128(v282).n128_u8[8] = v233[485];
          LANES128(v249).n128_u8[12] = v233[245];
          LANES128(v279).n128_u8[12] = v233[437];
          LANES128(v282).n128_u8[12] = v233[501];
          v285 = vcgeq_u32(v249, v139);
          v286 = vuzp1q_s16(vcgeq_u32(v248, v139), v283);
          v287 = vcgeq_u32(v263, v139);
          v288 = vcgeq_u32(v272, v139);
          v289 = vcgeq_u32(v267, v139);
          v290 = vcgeq_u32(v282, v139);
          v291 = vcgeq_u32(v279, v139);
          v292 = vuzp1q_s16(v287, v285);
          v293 = vuzp1q_s16(v289, v288);
          LANES128(v287).n128_u8[0] = v233[6];
          LANES128(v288).n128_u8[0] = v233[70];
          v294 = vuzp1q_s16(vcgeq_u32(v277, v139), vcgeq_u32(v278, v139));
          LANES128(v285).n128_u8[0] = v233[262];
          v295 = vuzp1q_s16(v291, v290);
          LANES128(v291).n128_u8[0] = v233[134];
          LANES128(v290).n128_u8[0] = v233[198];
          v136 = vuzp1q_s8(v293, v292);
          LANES128(v287).n128_u8[4] = v233[22];
          LANES128(v288).n128_u8[4] = v233[86];
          LANES128(v285).n128_u8[4] = v233[278];
          LANES128(v291).n128_u8[4] = v233[150];
          LANES128(v290).n128_u8[4] = v233[214];
          LANES128(v287).n128_u8[8] = v233[38];
          LANES128(v288).n128_u8[8] = v233[102];
          LANES128(v285).n128_u8[8] = v233[294];
          LANES128(v291).n128_u8[8] = v233[166];
          LANES128(v290).n128_u8[8] = v233[230];
          LANES128(v287).n128_u8[12] = v233[54];
          LANES128(v288).n128_u8[12] = v233[118];
          LANES128(v285).n128_u8[12] = v233[310];
          LANES128(v291).n128_u8[12] = v233[182];
          LANES128(v290).n128_u8[12] = v233[246];
          v296 = vcgeq_u32(v288, v139);
          v297 = vcgeq_u32(v291, v139);
          v298 = vuzp1q_s16(vcgeq_u32(v287, v139), v296);
          LANES128(v296).n128_u8[0] = v233[454];
          v299 = vuzp1q_s16(v297, vcgeq_u32(v290, v139));
          LANES128(v297).n128_u8[0] = v233[390];
          v300 = vcgeq_u32(v9, v139);
          LANES128(v296).n128_u8[4] = v233[470];
          LANES128(v297).n128_u8[4] = v233[406];
          LANES128(v296).n128_u8[8] = v233[486];
          LANES128(v297).n128_u8[8] = v233[422];
          LANES128(v296).n128_u8[12] = v233[502];
          LANES128(v297).n128_u8[12] = v233[438];
          v301 = vcgeq_u32(v297, v139);
          v9 = vuzp1q_s16(v301, vcgeq_u32(v296, v139));
          v302 = vuzp1q_s16(vcgeq_u32(v285, v139), v300);
          LANES128(v301).n128_u8[0] = v233[135];
          v303 = vuzp1q_s8(v251, v238);
          LANES128(v238).n128_u8[0] = v233[199];
          v304 = vuzp1q_s8(v247, v246);
          LANES128(v247).n128_u8[0] = v233[71];
          LANES128(v251).n128_u8[0] = v233[455];
          v305 = vuzp1q_s8(v255, v259);
          LANES128(v255).n128_u8[0] = v233[327];
          v306 = vuzp1q_s8(v243, v256);
          LANES128(v243).n128_u8[0] = v233[8];
          v307 = vuzp1q_s8(v274, v273);
          v133 = vuzp1q_s8(v286, v284);
          v308 = vuzp1q_s8(v298, v299);
          LANES128(v298).n128_u8[0] = v233[73];
          v134 = vuzp1q_s8(v294, v295);
          LANES128(v295).n128_u8[0] = v233[393];
          LANES128(v301).n128_u8[4] = v233[151];
          LANES128(v238).n128_u8[4] = v233[215];
          LANES128(v247).n128_u8[4] = v233[87];
          LANES128(v251).n128_u8[4] = v233[471];
          LANES128(v255).n128_u8[4] = v233[343];
          LANES128(v243).n128_u8[4] = v233[24];
          LANES128(v301).n128_u8[8] = v233[167];
          LANES128(v238).n128_u8[8] = v233[231];
          LANES128(v247).n128_u8[8] = v233[103];
          LANES128(v251).n128_u8[8] = v233[487];
          LANES128(v255).n128_u8[8] = v233[359];
          LANES128(v301).n128_u8[12] = v233[183];
          LANES128(v238).n128_u8[12] = v233[247];
          LANES128(v247).n128_u8[12] = v233[119];
          LANES128(v251).n128_u8[12] = v233[503];
          LANES128(v255).n128_u8[12] = v233[375];
          v309 = vcgeq_u32(v238, v139);
          v310 = vcgeq_u32(v247, v139);
          v311 = vcgeq_u32(v251, v139);
          v312 = vuzp1q_s16(vcgeq_u32(v301, v139), v309);
          LANES128(v309).n128_u8[0] = v233[7];
          LANES128(v309).n128_u8[4] = v233[23];
          LANES128(v243).n128_u8[8] = v233[40];
          LANES128(v309).n128_u8[8] = v233[39];
          LANES128(v243).n128_u8[12] = v233[56];
          LANES128(v309).n128_u8[12] = v233[55];
          LANES128(v265).n128_u8[4] = v233[88];
          v313 = vcgeq_u32(v243, v139);
          LANES128(v265).n128_u8[8] = v233[104];
          v314 = vuzp1q_s16(vcgeq_u32(v309, v139), v310);
          LANES128(v310).n128_u8[0] = v233[391];
          LANES128(v265).n128_u8[12] = v233[120];
          LANES128(v310).n128_u8[4] = v233[407];
          LANES128(v260).n128_u8[4] = v233[152];
          LANES128(v298).n128_u8[4] = v233[89];
          LANES128(v310).n128_u8[8] = v233[423];
          LANES128(v260).n128_u8[8] = v233[168];
          LANES128(v298).n128_u8[8] = v233[105];
          v315 = vuzp1q_s16(v313, vcgeq_u32(v265, v139));
          LANES128(v313).n128_u8[0] = v233[456];
          LANES128(v310).n128_u8[12] = v233[439];
          LANES128(v260).n128_u8[12] = v233[184];
          LANES128(v298).n128_u8[12] = v233[121];
          v316 = vcgeq_u32(v298, v139);
          v317 = vuzp1q_s16(vcgeq_u32(v310, v139), v311);
          LANES128(v311).n128_u8[0] = v233[263];
          LANES128(v311).n128_u8[4] = v233[279];
          LANES128(v313).n128_u8[4] = v233[472];
          LANES128(v311).n128_u8[8] = v233[295];
          LANES128(v313).n128_u8[8] = v233[488];
          LANES128(v311).n128_u8[12] = v233[311];
          LANES128(v313).n128_u8[12] = v233[504];
          v318 = vcgeq_u32(v313, v139);
          v319 = vuzp1q_s16(vcgeq_u32(v311, v139), vcgeq_u32(v255, v139));
          v320 = vuzp1q_s8(v271, v266);
          LANES128(v266).n128_u8[0] = v233[200];
          LANES128(v271).n128_u8[0] = v233[264];
          LANES128(v266).n128_u8[4] = v233[216];
          LANES128(v271).n128_u8[4] = v233[280];
          LANES128(v266).n128_u8[8] = v233[232];
          LANES128(v271).n128_u8[8] = v233[296];
          LANES128(v266).n128_u8[12] = v233[248];
          LANES128(v271).n128_u8[12] = v233[312];
          v321 = vcgeq_u32(v266, v139);
          v322 = vuzp1q_s16(vcgeq_u32(v260, v139), v321);
          LANES128(v321).n128_u8[0] = v233[392];
          LANES128(v321).n128_u8[4] = v233[408];
          LANES128(v295).n128_u8[4] = v233[409];
          LANES128(v321).n128_u8[8] = v233[424];
          LANES128(v295).n128_u8[8] = v233[425];
          LANES128(v321).n128_u8[12] = v233[440];
          LANES128(v295).n128_u8[12] = v233[441];
          v323 = vcgeq_u32(v321, v139);
          v324 = vcgeq_u32(v271, v139);
          LANES128(v271).n128_u8[0] = v233[137];
          v325 = vuzp1q_s16(v323, v318);
          LANES128(v318).n128_u8[0] = v233[328];
          LANES128(v271).n128_u8[4] = v233[153];
          LANES128(v318).n128_u8[4] = v233[344];
          LANES128(v271).n128_u8[8] = v233[169];
          LANES128(v318).n128_u8[8] = v233[360];
          LANES128(v271).n128_u8[12] = v233[185];
          LANES128(v318).n128_u8[12] = v233[376];
          v326 = vuzp1q_s16(v324, vcgeq_u32(v318, v139));
          LANES128(v324).n128_u8[0] = v233[9];
          v327 = vuzp1q_s8(v302, v9);
          LANES128(v302).n128_u8[0] = v233[201];
          v46 = vuzp1q_s8(v326, v325);
          LANES128(v324).n128_u8[4] = v233[25];
          LANES128(v302).n128_u8[4] = v233[217];
          LANES128(v324).n128_u8[8] = v233[41];
          LANES128(v302).n128_u8[8] = v233[233];
          LANES128(v324).n128_u8[12] = v233[57];
          LANES128(v302).n128_u8[12] = v233[249];
          v328 = vcgeq_u32(v302, v139);
          v329 = vuzp1q_s16(vcgeq_u32(v324, v139), v316);
          LANES128(v316).n128_u8[0] = v233[457];
          v330 = vuzp1q_s16(vcgeq_u32(v271, v139), v328);
          LANES128(v328).n128_u8[0] = v233[265];
          LANES128(v316).n128_u8[4] = v233[473];
          v8 = vsubq_s8(v465, v304);
          LANES128(v328).n128_u8[4] = v233[281];
          v331 = vuzp1q_s8(v314, v312);
          LANES128(v312).n128_u8[0] = v233[202];
          LANES128(v314).n128_u8[0] = v233[10];
          LANES128(v312).n128_u8[4] = v233[218];
          LANES128(v314).n128_u8[4] = v233[26];
          LANES128(v316).n128_u8[8] = v233[489];
          LANES128(v328).n128_u8[8] = v233[297];
          LANES128(v312).n128_u8[8] = v233[234];
          LANES128(v314).n128_u8[8] = v233[42];
          LANES128(v316).n128_u8[12] = v233[505];
          LANES128(v328).n128_u8[12] = v233[313];
          LANES128(v312).n128_u8[12] = v233[250];
          LANES128(v314).n128_u8[12] = v233[58];
          v332 = vcgeq_u32(v316, v139);
          v333 = vuzp1q_s16(vcgeq_u32(v295, v139), v332);
          LANES128(v332).n128_u8[0] = v233[329];
          v334 = vcgeq_u32(v312, v139);
          LANES128(v332).n128_u8[4] = v233[345];
          v335 = vsubq_s8(vsubq_s8(vsubq_s8(v462, v303), v305), v275);
          LANES128(v332).n128_u8[8] = v233[361];
          LANES128(v332).n128_u8[12] = v233[377];
          v336 = vuzp1q_s16(vcgeq_u32(v328, v139), vcgeq_u32(v332, v139));
          v337 = vuzp1q_s8(v319, v317);
          LANES128(v319).n128_u8[0] = v233[138];
          v338 = vuzp1q_s8(v315, v322);
          LANES128(v315).n128_u8[0] = v233[458];
          LANES128(v317).n128_u8[0] = v233[74];
          LANES128(v322).n128_u8[0] = v233[266];
          LANES128(v319).n128_u8[4] = v233[154];
          LANES128(v315).n128_u8[4] = v233[474];
          LANES128(v317).n128_u8[4] = v233[90];
          LANES128(v322).n128_u8[4] = v233[282];
          LANES128(v319).n128_u8[8] = v233[170];
          LANES128(v315).n128_u8[8] = v233[490];
          LANES128(v317).n128_u8[8] = v233[106];
          LANES128(v322).n128_u8[8] = v233[298];
          LANES128(v319).n128_u8[12] = v233[186];
          LANES128(v315).n128_u8[12] = v233[506];
          LANES128(v317).n128_u8[12] = v233[122];
          LANES128(v322).n128_u8[12] = v233[314];
          v339 = vuzp1q_s16(vcgeq_u32(v319, v139), v334);
          LANES128(v334).n128_u8[0] = v233[394];
          v340 = vuzp1q_s16(vcgeq_u32(v314, v139), vcgeq_u32(v317, v139));
          v341 = vsubq_s8(v8, v306);
          v7 = vsubq_s8(v341, v276);
          LANES128(v341).n128_u8[0] = v233[459];
          LANES128(v334).n128_u8[4] = v233[410];
          LANES128(v341).n128_u8[4] = v233[475];
          LANES128(v334).n128_u8[8] = v233[426];
          LANES128(v341).n128_u8[8] = v233[491];
          LANES128(v334).n128_u8[12] = v233[442];
          LANES128(v341).n128_u8[12] = v233[507];
          v342 = vcgeq_u32(v334, v139);
          v343 = vuzp1q_s16(v342, vcgeq_u32(v315, v139));
          LANES128(v342).n128_u8[0] = v233[330];
          v344 = vuzp1q_s8(v329, v330);
          v49 = vuzp1q_s8(v336, v333);
          LANES128(v333).n128_u8[0] = v233[139];
          LANES128(v342).n128_u8[4] = v233[346];
          LANES128(v333).n128_u8[4] = v233[155];
          LANES128(v342).n128_u8[8] = v233[362];
          LANES128(v333).n128_u8[8] = v233[171];
          LANES128(v342).n128_u8[12] = v233[378];
          LANES128(v333).n128_u8[12] = v233[187];
          v345 = vuzp1q_s16(vcgeq_u32(v322, v139), vcgeq_u32(v342, v139));
          v48 = vuzp1q_s8(v340, v339);
          LANES128(v339).n128_u8[0] = v233[203];
          LANES128(v340).n128_u8[0] = v233[11];
          v47 = vuzp1q_s8(v345, v343);
          LANES128(v343).n128_u8[0] = v233[267];
          LANES128(v339).n128_u8[4] = v233[219];
          LANES128(v340).n128_u8[4] = v233[27];
          LANES128(v343).n128_u8[4] = v233[283];
          LANES128(v339).n128_u8[8] = v233[235];
          LANES128(v340).n128_u8[8] = v233[43];
          LANES128(v343).n128_u8[8] = v233[299];
          LANES128(v339).n128_u8[12] = v233[251];
          LANES128(v340).n128_u8[12] = v233[59];
          LANES128(v343).n128_u8[12] = v233[315];
          v346 = vcgeq_u32(v339, v139);
          v347 = vuzp1q_s16(vcgeq_u32(v333, v139), v346);
          LANES128(v346).n128_u8[0] = v233[75];
          LANES128(v346).n128_u8[4] = v233[91];
          LANES128(v346).n128_u8[8] = v233[107];
          LANES128(v346).n128_u8[12] = v233[123];
          v348 = vcgeq_u32(v346, v139);
          v349 = vuzp1q_s16(vcgeq_u32(v340, v139), v348);
          LANES128(v348).n128_u8[0] = v233[395];
          v44 = vuzp1q_s8(v349, v347);
          v350 = vcgeq_u32(v343, v139);
          LANES128(v348).n128_u8[4] = v233[411];
          LANES128(v348).n128_u8[8] = v233[427];
          LANES128(v348).n128_u8[12] = v233[443];
          v351 = vcgeq_u32(v348, v139);
          v352 = vuzp1q_s16(v351, vcgeq_u32(v341, v139));
          LANES128(v351).n128_u8[0] = v233[331];
          LANES128(v351).n128_u8[4] = v233[347];
          LANES128(v351).n128_u8[8] = v233[363];
          LANES128(v351).n128_u8[12] = v233[379];
          v353 = vcgeq_u32(v351, v139);
          LANES128(v351).n128_u8[0] = v233[140];
          v354 = vuzp1q_s16(v350, v353);
          LANES128(v350).n128_u8[0] = v233[76];
          LANES128(v351).n128_u8[4] = v233[156];
          v45 = vuzp1q_s8(v354, v352);
          v355 = vsubq_s8(v335, v320);
          LANES128(v335).n128_u8[0] = v233[12];
          LANES128(v320).n128_u8[0] = v233[204];
          LANES128(v350).n128_u8[4] = v233[92];
          LANES128(v351).n128_u8[8] = v233[172];
          v356 = vsubq_s8(vsubq_s8(v7, v307), v133);
          LANES128(v335).n128_u8[4] = v233[28];
          LANES128(v320).n128_u8[4] = v233[220];
          LANES128(v350).n128_u8[8] = v233[108];
          v357 = vsubq_s8(vsubq_s8(v355, v50), v136);
          LANES128(v351).n128_u8[12] = v233[188];
          LANES128(v335).n128_u8[8] = v233[44];
          LANES128(v320).n128_u8[8] = v233[236];
          LANES128(v350).n128_u8[12] = v233[124];
          LANES128(v335).n128_u8[12] = v233[60];
          LANES128(v320).n128_u8[12] = v233[252];
          v358 = vcgeq_u32(v350, v139);
          v359 = vcgeq_u32(v320, v139);
          v360 = vuzp1q_s16(vcgeq_u32(v351, v139), v359);
          v361 = vuzp1q_s16(vcgeq_u32(v335, v139), v358);
          LANES128(v358).n128_u8[0] = v233[396];
          LANES128(v359).n128_u8[0] = v233[268];
          v362 = vuzp1q_s8(v361, v360);
          LANES128(v360).n128_u8[0] = v233[460];
          LANES128(v358).n128_u8[4] = v233[412];
          LANES128(v359).n128_u8[4] = v233[284];
          LANES128(v360).n128_u8[4] = v233[476];
          LANES128(v358).n128_u8[8] = v233[428];
          LANES128(v359).n128_u8[8] = v233[300];
          LANES128(v360).n128_u8[8] = v233[492];
          LANES128(v358).n128_u8[12] = v233[444];
          LANES128(v359).n128_u8[12] = v233[316];
          LANES128(v360).n128_u8[12] = v233[508];
          v363 = vcgeq_u32(v360, v139);
          v364 = vuzp1q_s16(vcgeq_u32(v358, v139), v363);
          LANES128(v363).n128_u8[0] = v233[332];
          LANES128(v363).n128_u8[4] = v233[348];
          LANES128(v363).n128_u8[8] = v233[364];
          LANES128(v363).n128_u8[12] = v233[380];
          v365 = vcgeq_u32(v363, v139);
          v366 = vcgeq_u32(v359, v139);
          LANES128(v359).n128_u8[0] = v233[77];
          v367 = vuzp1q_s16(v366, v365);
          v368 = vsubq_s8(v357, v308);
          LANES128(v357).n128_u8[0] = v233[141];
          LANES128(v359).n128_u8[4] = v233[93];
          v369 = vuzp1q_s8(v367, v364);
          v370 = vsubq_s8(v356, v134);
          LANES128(v356).n128_u8[0] = v233[13];
          LANES128(v357).n128_u8[4] = v233[157];
          v371 = vsubq_s8(v370, v327);
          LANES128(v327).n128_u8[0] = v233[205];
          LANES128(v359).n128_u8[8] = v233[109];
          v372 = vsubq_s8(vsubq_s8(v368, v331), v338);
          LANES128(v356).n128_u8[4] = v233[29];
          LANES128(v357).n128_u8[8] = v233[173];
          LANES128(v327).n128_u8[4] = v233[221];
          LANES128(v359).n128_u8[12] = v233[125];
          LANES128(v356).n128_u8[8] = v233[45];
          v373 = vsubq_s8(vsubq_s8(v371, v337), v46);
          LANES128(v357).n128_u8[12] = v233[189];
          LANES128(v327).n128_u8[8] = v233[237];
          v374 = vcgeq_u32(v359, v139);
          LANES128(v356).n128_u8[12] = v233[61];
          LANES128(v327).n128_u8[12] = v233[253];
          v375 = vcgeq_u32(v327, v139);
          v376 = vuzp1q_s16(vcgeq_u32(v356, v139), v374);
          LANES128(v374).n128_u8[0] = v233[397];
          v377 = vuzp1q_s16(vcgeq_u32(v357, v139), v375);
          LANES128(v375).n128_u8[0] = v233[269];
          LANES128(v374).n128_u8[4] = v233[413];
          v378 = vuzp1q_s8(v376, v377);
          LANES128(v376).n128_u8[0] = v233[461];
          LANES128(v377).n128_u8[0] = v233[206];
          LANES128(v375).n128_u8[4] = v233[285];
          LANES128(v374).n128_u8[8] = v233[429];
          LANES128(v376).n128_u8[4] = v233[477];
          LANES128(v377).n128_u8[4] = v233[222];
          LANES128(v375).n128_u8[8] = v233[301];
          LANES128(v374).n128_u8[12] = v233[445];
          LANES128(v376).n128_u8[8] = v233[493];
          LANES128(v377).n128_u8[8] = v233[238];
          LANES128(v375).n128_u8[12] = v233[317];
          v379 = vcgeq_u32(v374, v139);
          LANES128(v376).n128_u8[12] = v233[509];
          LANES128(v377).n128_u8[12] = v233[254];
          v380 = vcgeq_u32(v375, v139);
          v381 = vcgeq_u32(v377, v139);
          v382 = vuzp1q_s16(v379, vcgeq_u32(v376, v139));
          LANES128(v379).n128_u8[0] = v233[333];
          LANES128(v379).n128_u8[4] = v233[349];
          LANES128(v379).n128_u8[8] = v233[365];
          LANES128(v379).n128_u8[12] = v233[381];
          v383 = vuzp1q_s16(v380, vcgeq_u32(v379, v139));
          LANES128(v380).n128_u8[0] = v233[142];
          v384 = vuzp1q_s8(v383, v382);
          v385 = vsubq_s8(v372, v344);
          v386 = vsubq_s8(v373, v49);
          LANES128(v373).n128_u8[0] = v233[14];
          LANES128(v380).n128_u8[4] = v233[158];
          LANES128(v373).n128_u8[4] = v233[30];
          LANES128(v380).n128_u8[8] = v233[174];
          v387 = vsubq_s8(vsubq_s8(v385, v48), v44);
          v43 = vsubq_s8(vsubq_s8(v386, v47), v45);
          LANES128(v44).n128_u8[0] = v233[399];
          LANES128(v373).n128_u8[8] = v233[46];
          v388 = vsubq_s8(v387, v362);
          LANES128(v362).n128_u8[0] = v233[15];
          LANES128(v44).n128_u8[4] = v233[415];
          LANES128(v380).n128_u8[12] = v233[190];
          v389 = vsubq_s8(v388, v378);
          LANES128(v388).n128_u8[0] = v233[143];
          LANES128(v373).n128_u8[12] = v233[62];
          LANES128(v44).n128_u8[8] = v233[431];
          v390 = vuzp1q_s16(vcgeq_u32(v380, v139), v381);
          LANES128(v381).n128_u8[0] = v233[78];
          v391 = vcgeq_u32(v373, v139);
          LANES128(v373).n128_u8[0] = v233[270];
          LANES128(v381).n128_u8[4] = v233[94];
          LANES128(v373).n128_u8[4] = v233[286];
          LANES128(v44).n128_u8[12] = v233[447];
          LANES128(v381).n128_u8[8] = v233[110];
          LANES128(v373).n128_u8[8] = v233[302];
          LANES128(v362).n128_u8[4] = v233[31];
          LANES128(v381).n128_u8[12] = v233[126];
          LANES128(v373).n128_u8[12] = v233[318];
          LANES128(v362).n128_u8[8] = v233[47];
          v392 = vcgeq_u32(v381, v139);
          v393 = vuzp1q_s16(v391, v392);
          LANES128(v392).n128_u8[0] = v233[462];
          v394 = vuzp1q_s8(v393, v390);
          LANES128(v390).n128_u8[0] = v233[398];
          LANES128(v392).n128_u8[4] = v233[478];
          LANES128(v362).n128_u8[12] = v233[63];
          v395 = vsubq_s8(v389, v394);
          LANES128(v390).n128_u8[4] = v233[414];
          LANES128(v392).n128_u8[8] = v233[494];
          LANES128(v388).n128_u8[4] = v233[159];
          LANES128(v390).n128_u8[8] = v233[430];
          LANES128(v392).n128_u8[12] = v233[510];
          LANES128(v388).n128_u8[8] = v233[175];
          LANES128(v390).n128_u8[12] = v233[446];
          v396 = vcgeq_u32(v392, v139);
          LANES128(v388).n128_u8[12] = v233[191];
          v397 = vuzp1q_s16(vcgeq_u32(v390, v139), v396);
          LANES128(v396).n128_u8[0] = v233[334];
          v40 = vcgeq_u32(v388, v139);
          LANES128(v396).n128_u8[4] = v233[350];
          LANES128(v396).n128_u8[8] = v233[366];
          LANES128(v396).n128_u8[12] = v233[382];
          v42 = vcgeq_u32(v396, v139);
          v398 = vuzp1q_s16(vcgeq_u32(v373, v139), v42);
          LANES128(v42).n128_u8[0] = v233[207];
          v399 = vuzp1q_s8(v398, v397);
          v41 = vsubq_s8(v43, v369);
          LANES128(v369).n128_u8[0] = v233[79];
          LANES128(v43).n128_u8[0] = v233[335];
          LANES128(v42).n128_u8[4] = v233[223];
          v400 = vsubq_s8(v41, v384);
          LANES128(v41).n128_u8[0] = v233[271];
          LANES128(v369).n128_u8[4] = v233[95];
          LANES128(v43).n128_u8[4] = v233[351];
          LANES128(v42).n128_u8[8] = v233[239];
          v401 = vsubq_s8(v400, v399);
          LANES128(v41).n128_u8[4] = v233[287];
          LANES128(v369).n128_u8[8] = v233[111];
          LANES128(v43).n128_u8[8] = v233[367];
          LANES128(v42).n128_u8[12] = v233[255];
          LANES128(v41).n128_u8[8] = v233[303];
          LANES128(v369).n128_u8[12] = v233[127];
          LANES128(v43).n128_u8[12] = v233[383];
          LANES128(v41).n128_u8[12] = v233[319];
          v402 = vuzp1q_s16(v40, vcgeq_u32(v42, v139));
          LANES128(v40).n128_u8[0] = v233[463];
          v39 = vcgeq_u32(v41, v139);
          LANES128(v40).n128_u8[4] = v233[479];
          v36 = vuzp1q_s8(
              vuzp1q_s16(vcgeq_u32(v362, v139), vcgeq_u32(v369, v139)), v402);
          LANES128(v40).n128_u8[8] = v233[495];
          v35 = vsubq_s8(v395, v36);
          LANES128(v40).n128_u8[12] = v233[511];
          v38 = vuzp1q_s16(v39, vcgeq_u32(v43, v139));
          v37 = vuzp1q_s8(
              v38, vuzp1q_s16(vcgeq_u32(v44, v139), vcgeq_u32(v40, v139)));
          v231 = vsubq_s8(v401, v37);
        } while (v232 != v140);
        v403 = vaddq_s8(v231, v35);
        PSEUDO_LOW_LANE128(v403, n128_u8, vaddvq_s8(v403));
        v141 = LANES128(v403).n128_u32[0];
        if (v140 == v138) {
          v134 = COERCE_AS(int8x16_t, CudaDriverData_1115e10);
          v133 = COERCE_AS(int8x16_t, CudaDriverData_11152f0);
          v136 = COERCE_AS(int8x16_t, CudaDriverData_11161f0);
          v135 = COERCE_AS(int8x16_t, CudaDriverData_1115a40);
          v137 = COERCE_AS(int8x16_t, CudaDriverData_1116200);
          v117 = v469;
          v53 = (__int64)a1;
          v116 = v467;
          v118 = v468;
          LODWORD(v114) = v461;
          goto LABEL_135;
        }
        v134 = COERCE_AS(int8x16_t, CudaDriverData_1115e10);
        v133 = COERCE_AS(int8x16_t, CudaDriverData_11152f0);
        v136 = COERCE_AS(int8x16_t, CudaDriverData_11161f0);
        v135 = COERCE_AS(int8x16_t, CudaDriverData_1115a40);
        v137 = COERCE_AS(int8x16_t, CudaDriverData_1116200);
        v117 = v469;
        v53 = (__int64)a1;
        v116 = v467;
        v118 = v468;
        LODWORD(v114) = v461;
        if ((v138 & 0x10) == 0) {
          goto LABEL_133;
        }
      }
      else {
        v140 = 0;
        LOBYTE(v141) = 0;
      }
      v143 = v140;
      v140 = (unsigned int)v138 & 0xFFFFFFF0;
      v144 = COERCE_AS(int8x16_t, (unsigned __int8)v141);
      do {
        v145 = (unsigned __int8*)&v474_.v474[2 * v143];
        v143 += 16;
        LANES128(v38).n128_u8[0] = *v145;
        LANES128(v36).n128_u8[0] = v145[128];
        LANES128(v37).n128_u8[0] = v145[64];
        LANES128(v35).n128_u8[0] = v145[192];
        LANES128(v40).n128_u8[0] = v145[1];
        LANES128(v42).n128_u8[0] = v145[65];
        LANES128(v39).n128_u8[0] = v145[193];
        LANES128(v47).n128_u8[0] = v145[66];
        LANES128(v46).n128_u8[0] = v145[130];
        LANES128(v48).n128_u8[0] = v145[131];
        LANES128(v49).n128_u8[0] = v145[197];
        LANES128(v38).n128_u8[4] = v145[16];
        LANES128(v36).n128_u8[4] = v145[144];
        LANES128(v39).n128_u8[4] = v145[209];
        LANES128(v42).n128_u8[4] = v145[81];
        LANES128(v47).n128_u8[4] = v145[82];
        LANES128(v38).n128_u8[8] = v145[32];
        LANES128(v36).n128_u8[8] = v145[160];
        LANES128(v39).n128_u8[8] = v145[225];
        LANES128(v37).n128_u8[4] = v145[80];
        LANES128(v42).n128_u8[8] = v145[97];
        LANES128(v47).n128_u8[8] = v145[98];
        LANES128(v38).n128_u8[12] = v145[48];
        LANES128(v39).n128_u8[12] = v145[241];
        LANES128(v37).n128_u8[8] = v145[96];
        LANES128(v36).n128_u8[12] = v145[176];
        LANES128(v35).n128_u8[4] = v145[208];
        LANES128(v40).n128_u8[4] = v145[17];
        v146 = vcgeq_u32(v38, v139);
        LANES128(v38).n128_u8[0] = v145[129];
        v147 = vcgeq_u32(v39, v139);
        LANES128(v37).n128_u8[12] = v145[112];
        LANES128(v35).n128_u8[8] = v145[224];
        LANES128(v40).n128_u8[8] = v145[33];
        LANES128(v38).n128_u8[4] = v145[145];
        LANES128(v46).n128_u8[4] = v145[146];
        LANES128(v48).n128_u8[4] = v145[147];
        LANES128(v35).n128_u8[12] = v145[240];
        LANES128(v40).n128_u8[12] = v145[49];
        LANES128(v42).n128_u8[12] = v145[113];
        LANES128(v47).n128_u8[12] = v145[114];
        LANES128(v38).n128_u8[8] = v145[161];
        LANES128(v46).n128_u8[8] = v145[162];
        LANES128(v48).n128_u8[8] = v145[163];
        v148 = vcgeq_u32(v40, v139);
        LANES128(v40).n128_u8[0] = v145[194];
        LANES128(v38).n128_u8[12] = v145[177];
        v149 = vuzp1q_s16(vcgeq_u32(v36, v139), vcgeq_u32(v35, v139));
        v150 = vuzp1q_s16(v146, vcgeq_u32(v37, v139));
        LANES128(v46).n128_u8[12] = v145[178];
        LANES128(v146).n128_u8[0] = v145[67];
        LANES128(v40).n128_u8[4] = v145[210];
        LANES128(v48).n128_u8[12] = v145[179];
        v50 = vuzp1q_s8(v150, v149);
        LANES128(v149).n128_u8[0] = v145[71];
        LANES128(v146).n128_u8[4] = v145[83];
        v151 = vcgeq_u32(v38, v139);
        v152 = vcgeq_u32(v42, v139);
        LANES128(v42).n128_u8[0] = v145[2];
        v153 = vcgeq_u32(v46, v139);
        LANES128(v40).n128_u8[8] = v145[226];
        v154 = vcgeq_u32(v48, v139);
        v155 = vuzp1q_s16(v151, v147);
        LANES128(v147).n128_u8[0] = v145[195];
        LANES128(v42).n128_u8[4] = v145[18];
        LANES128(v146).n128_u8[8] = v145[99];
        LANES128(v40).n128_u8[12] = v145[242];
        LANES128(v147).n128_u8[4] = v145[211];
        LANES128(v42).n128_u8[8] = v145[34];
        LANES128(v146).n128_u8[12] = v145[115];
        v156 = vcgeq_u32(v40, v139);
        v157 = vcgeq_u32(v47, v139);
        LANES128(v147).n128_u8[8] = v145[227];
        LANES128(v47).n128_u8[0] = v145[3];
        LANES128(v42).n128_u8[12] = v145[50];
        LANES128(v47).n128_u8[4] = v145[19];
        LANES128(v147).n128_u8[12] = v145[243];
        LANES128(v47).n128_u8[8] = v145[35];
        v158 = vuzp1q_s16(vcgeq_u32(v42, v139), v157);
        LANES128(v157).n128_u8[0] = v145[196];
        v159 = vcgeq_u32(v147, v139);
        v160 = vuzp1q_s16(v148, v152);
        v161 = vuzp1q_s16(v153, v156);
        LANES128(v153).n128_u8[0] = v145[132];
        LANES128(v148).n128_u8[0] = v145[4];
        LANES128(v156).n128_u8[0] = v145[68];
        LANES128(v157).n128_u8[4] = v145[212];
        LANES128(v153).n128_u8[4] = v145[148];
        LANES128(v148).n128_u8[4] = v145[20];
        LANES128(v156).n128_u8[4] = v145[84];
        LANES128(v47).n128_u8[12] = v145[51];
        LANES128(v49).n128_u8[4] = v145[213];
        LANES128(v157).n128_u8[8] = v145[228];
        LANES128(v153).n128_u8[8] = v145[164];
        LANES128(v148).n128_u8[8] = v145[36];
        LANES128(v156).n128_u8[8] = v145[100];
        v162 = vcgeq_u32(v47, v139);
        LANES128(v49).n128_u8[8] = v145[229];
        v163 = vuzp1q_s16(v162, vcgeq_u32(v146, v139));
        LANES128(v162).n128_u8[0] = v145[69];
        LANES128(v157).n128_u8[12] = v145[244];
        LANES128(v153).n128_u8[12] = v145[180];
        LANES128(v148).n128_u8[12] = v145[52];
        LANES128(v156).n128_u8[12] = v145[116];
        LANES128(v49).n128_u8[12] = v145[245];
        LANES128(v162).n128_u8[4] = v145[85];
        v164 = vcgeq_u32(v157, v139);
        v165 = vuzp1q_s16(v154, v159);
        LANES128(v154).n128_u8[0] = v145[133];
        v166 = vcgeq_u32(v148, v139);
        LANES128(v159).n128_u8[0] = v145[5];
        LANES128(v162).n128_u8[8] = v145[101];
        v167 = vuzp1q_s16(vcgeq_u32(v153, v139), v164);
        v168 = vcgeq_u32(v49, v139);
        v169 = vuzp1q_s16(v166, vcgeq_u32(v156, v139));
        LANES128(v166).n128_u8[0] = v145[6];
        LANES128(v164).n128_u8[0] = v145[134];
        LANES128(v49).n128_u8[0] = v145[198];
        LANES128(v154).n128_u8[4] = v145[149];
        LANES128(v159).n128_u8[4] = v145[21];
        LANES128(v166).n128_u8[4] = v145[22];
        LANES128(v164).n128_u8[4] = v145[150];
        LANES128(v49).n128_u8[4] = v145[214];
        LANES128(v162).n128_u8[12] = v145[117];
        LANES128(v154).n128_u8[8] = v145[165];
        LANES128(v159).n128_u8[8] = v145[37];
        LANES128(v166).n128_u8[8] = v145[38];
        LANES128(v164).n128_u8[8] = v145[166];
        LANES128(v49).n128_u8[8] = v145[230];
        LANES128(v154).n128_u8[12] = v145[181];
        LANES128(v159).n128_u8[12] = v145[53];
        LANES128(v166).n128_u8[12] = v145[54];
        LANES128(v164).n128_u8[12] = v145[182];
        LANES128(v49).n128_u8[12] = v145[246];
        v170 = vcgeq_u32(v154, v139);
        v171 = vuzp1q_s16(v170, v168);
        LANES128(v170).n128_u8[0] = v145[70];
        v172 = vuzp1q_s16(vcgeq_u32(v159, v139), vcgeq_u32(v162, v139));
        v173 = vcgeq_u32(v49, v139);
        v174 = vcgeq_u32(v166, v139);
        v175 = vuzp1q_s16(vcgeq_u32(v164, v139), v173);
        LANES128(v173).n128_u8[0] = v145[135];
        LANES128(v170).n128_u8[4] = v145[86];
        LANES128(v149).n128_u8[4] = v145[87];
        LANES128(v173).n128_u8[4] = v145[151];
        LANES128(v170).n128_u8[8] = v145[102];
        LANES128(v149).n128_u8[8] = v145[103];
        LANES128(v173).n128_u8[8] = v145[167];
        LANES128(v170).n128_u8[12] = v145[118];
        LANES128(v149).n128_u8[12] = v145[119];
        LANES128(v173).n128_u8[12] = v145[183];
        v176 = vcgeq_u32(v170, v139);
        v177 = vcgeq_u32(v149, v139);
        v178 = vuzp1q_s16(v174, v176);
        LANES128(v176).n128_u8[0] = v145[199];
        v179 = vcgeq_u32(v173, v139);
        LANES128(v176).n128_u8[4] = v145[215];
        LANES128(v176).n128_u8[8] = v145[231];
        LANES128(v176).n128_u8[12] = v145[247];
        v48 = vuzp1q_s16(v179, vcgeq_u32(v176, v139));
        LANES128(v179).n128_u8[0] = v145[7];
        LANES128(v179).n128_u8[4] = v145[23];
        LANES128(v179).n128_u8[8] = v145[39];
        LANES128(v179).n128_u8[12] = v145[55];
        v180 = vcgeq_u32(v179, v139);
        v181 = vuzp1q_s8(v160, v155);
        v182 = vuzp1q_s8(v158, v161);
        LANES128(v161).n128_u8[0] = v145[200];
        v49 = vuzp1q_s16(v180, v177);
        LANES128(v180).n128_u8[0] = v145[136];
        LANES128(v177).n128_u8[0] = v145[8];
        LANES128(v161).n128_u8[4] = v145[216];
        LANES128(v180).n128_u8[4] = v145[152];
        LANES128(v177).n128_u8[4] = v145[24];
        LANES128(v161).n128_u8[8] = v145[232];
        LANES128(v180).n128_u8[8] = v145[168];
        LANES128(v177).n128_u8[8] = v145[40];
        LANES128(v161).n128_u8[12] = v145[248];
        LANES128(v180).n128_u8[12] = v145[184];
        LANES128(v177).n128_u8[12] = v145[56];
        v183 = vcgeq_u32(v161, v139);
        v184 = vuzp1q_s8(v163, v165);
        LANES128(v163).n128_u8[0] = v145[137];
        v185 = vcgeq_u32(v180, v139);
        LANES128(v163).n128_u8[4] = v145[153];
        v186 = vuzp1q_s16(v185, v183);
        LANES128(v185).n128_u8[0] = v145[72];
        LANES128(v183).n128_u8[0] = v145[9];
        LANES128(v163).n128_u8[8] = v145[169];
        LANES128(v185).n128_u8[4] = v145[88];
        LANES128(v183).n128_u8[4] = v145[25];
        LANES128(v163).n128_u8[12] = v145[185];
        LANES128(v185).n128_u8[8] = v145[104];
        LANES128(v183).n128_u8[8] = v145[41];
        LANES128(v185).n128_u8[12] = v145[120];
        LANES128(v183).n128_u8[12] = v145[57];
        v187 = vuzp1q_s16(vcgeq_u32(v177, v139), vcgeq_u32(v185, v139));
        v188 = vuzp1q_s8(v169, v167);
        LANES128(v167).n128_u8[0] = v145[201];
        v189 = vsubq_s8(v144, v50);
        v190 = vcgeq_u32(v163, v139);
        v191 = vuzp1q_s8(v172, v171);
        LANES128(v172).n128_u8[0] = v145[202];
        LANES128(v171).n128_u8[0] = v145[10];
        v192 = vuzp1q_s8(v187, v186);
        LANES128(v167).n128_u8[4] = v145[217];
        LANES128(v171).n128_u8[4] = v145[26];
        LANES128(v172).n128_u8[4] = v145[218];
        v45 = vsubq_s8(vsubq_s8(v189, v181), v182);
        LANES128(v167).n128_u8[8] = v145[233];
        LANES128(v171).n128_u8[8] = v145[42];
        v193 = vsubq_s8(v45, v184);
        LANES128(v45).n128_u8[0] = v145[204];
        LANES128(v172).n128_u8[8] = v145[234];
        LANES128(v167).n128_u8[12] = v145[249];
        LANES128(v171).n128_u8[12] = v145[58];
        LANES128(v172).n128_u8[12] = v145[250];
        v194 = vcgeq_u32(v172, v139);
        v195 = vuzp1q_s16(v190, vcgeq_u32(v167, v139));
        LANES128(v190).n128_u8[0] = v145[73];
        LANES128(v190).n128_u8[4] = v145[89];
        LANES128(v190).n128_u8[8] = v145[105];
        LANES128(v190).n128_u8[12] = v145[121];
        v196 = vuzp1q_s16(vcgeq_u32(v183, v139), vcgeq_u32(v190, v139));
        v197 = vuzp1q_s8(v178, v175);
        LANES128(v175).n128_u8[0] = v145[138];
        v198 = vuzp1q_s8(v196, v195);
        LANES128(v196).n128_u8[0] = v145[139];
        LANES128(v195).n128_u8[0] = v145[11];
        v199 = vsubq_s8(vsubq_s8(vsubq_s8(v193, v188), v191), v197);
        LANES128(v197).n128_u8[0] = v145[141];
        LANES128(v175).n128_u8[4] = v145[154];
        v200 = vsubq_s8(v199, vuzp1q_s8(v49, v48));
        LANES128(v199).n128_u8[0] = v145[205];
        LANES128(v196).n128_u8[4] = v145[155];
        LANES128(v195).n128_u8[4] = v145[27];
        LANES128(v175).n128_u8[8] = v145[170];
        v41 = vsubq_s8(v200, v192);
        LANES128(v196).n128_u8[8] = v145[171];
        LANES128(v195).n128_u8[8] = v145[43];
        LANES128(v175).n128_u8[12] = v145[186];
        LANES128(v196).n128_u8[12] = v145[187];
        LANES128(v195).n128_u8[12] = v145[59];
        v201 = vuzp1q_s16(vcgeq_u32(v175, v139), v194);
        LANES128(v194).n128_u8[0] = v145[74];
        v202 = vcgeq_u32(v196, v139);
        LANES128(v194).n128_u8[4] = v145[90];
        LANES128(v194).n128_u8[8] = v145[106];
        LANES128(v194).n128_u8[12] = v145[122];
        v47 = vcgeq_u32(v194, v139);
        v46 = vuzp1q_s16(vcgeq_u32(v171, v139), v47);
        LANES128(v47).n128_u8[0] = v145[203];
        LANES128(v47).n128_u8[4] = v145[219];
        LANES128(v45).n128_u8[4] = v145[220];
        LANES128(v199).n128_u8[4] = v145[221];
        LANES128(v47).n128_u8[8] = v145[235];
        LANES128(v45).n128_u8[8] = v145[236];
        LANES128(v199).n128_u8[8] = v145[237];
        LANES128(v47).n128_u8[12] = v145[251];
        LANES128(v45).n128_u8[12] = v145[252];
        LANES128(v199).n128_u8[12] = v145[253];
        v203 = vuzp1q_s16(v202, vcgeq_u32(v47, v139));
        LANES128(v202).n128_u8[0] = v145[75];
        LANES128(v202).n128_u8[4] = v145[91];
        LANES128(v202).n128_u8[8] = v145[107];
        LANES128(v202).n128_u8[12] = v145[123];
        v43 = vuzp1q_s16(vcgeq_u32(v195, v139), vcgeq_u32(v202, v139));
        v42 = vuzp1q_s8(v46, v201);
        LANES128(v201).n128_u8[0] = v145[140];
        v204 = vuzp1q_s8(v43, v203);
        LANES128(v43).n128_u8[0] = v145[12];
        LANES128(v201).n128_u8[4] = v145[156];
        LANES128(v197).n128_u8[4] = v145[157];
        LANES128(v43).n128_u8[4] = v145[28];
        LANES128(v201).n128_u8[8] = v145[172];
        LANES128(v197).n128_u8[8] = v145[173];
        LANES128(v43).n128_u8[8] = v145[44];
        LANES128(v201).n128_u8[12] = v145[188];
        LANES128(v197).n128_u8[12] = v145[189];
        LANES128(v43).n128_u8[12] = v145[60];
        v205 = vcgeq_u32(v201, v139);
        v206 = vcgeq_u32(v197, v139);
        v207 = vuzp1q_s16(v205, vcgeq_u32(v45, v139));
        LANES128(v205).n128_u8[0] = v145[76];
        v208 = vuzp1q_s16(v206, vcgeq_u32(v199, v139));
        LANES128(v206).n128_u8[0] = v145[77];
        LANES128(v205).n128_u8[4] = v145[92];
        LANES128(v206).n128_u8[4] = v145[93];
        LANES128(v205).n128_u8[8] = v145[108];
        LANES128(v206).n128_u8[8] = v145[109];
        LANES128(v205).n128_u8[12] = v145[124];
        LANES128(v206).n128_u8[12] = v145[125];
        v44 = vcgeq_u32(v205, v139);
        v209 = vcgeq_u32(v206, v139);
        LANES128(v206).n128_u8[0] = v145[142];
        LANES128(v206).n128_u8[4] = v145[158];
        v210 = vuzp1q_s8(vuzp1q_s16(vcgeq_u32(v43, v139), v44), v207);
        LANES128(v207).n128_u8[0] = v145[13];
        LANES128(v207).n128_u8[4] = v145[29];
        LANES128(v206).n128_u8[8] = v145[174];
        LANES128(v207).n128_u8[8] = v145[45];
        LANES128(v206).n128_u8[12] = v145[190];
        LANES128(v207).n128_u8[12] = v145[61];
        v211 = vcgeq_u32(v207, v139);
        v212 = vuzp1q_s16(v211, v209);
        LANES128(v211).n128_u8[0] = v145[14];
        v213 = vuzp1q_s8(v212, v208);
        v214 = vsubq_s8(v41, v198);
        LANES128(v198).n128_u8[0] = v145[206];
        LANES128(v211).n128_u8[4] = v145[30];
        LANES128(v198).n128_u8[4] = v145[222];
        LANES128(v211).n128_u8[8] = v145[46];
        v215 = vsubq_s8(vsubq_s8(v214, v42), v204);
        LANES128(v198).n128_u8[8] = v145[238];
        v216 = vsubq_s8(v215, v210);
        LANES128(v215).n128_u8[0] = v145[15];
        LANES128(v211).n128_u8[12] = v145[62];
        v217 = vsubq_s8(v216, v213);
        LANES128(v216).n128_u8[0] = v145[79];
        LANES128(v215).n128_u8[4] = v145[31];
        LANES128(v198).n128_u8[12] = v145[254];
        v218 = vcgeq_u32(v211, v139);
        LANES128(v215).n128_u8[8] = v145[47];
        v40 = vcgeq_u32(v198, v139);
        v39 = vuzp1q_s16(vcgeq_u32(v206, v139), v40);
        LANES128(v40).n128_u8[0] = v145[78];
        LANES128(v215).n128_u8[12] = v145[63];
        LANES128(v40).n128_u8[4] = v145[94];
        LANES128(v216).n128_u8[4] = v145[95];
        v36 = vcgeq_u32(v215, v139);
        LANES128(v40).n128_u8[8] = v145[110];
        LANES128(v216).n128_u8[8] = v145[111];
        LANES128(v40).n128_u8[12] = v145[126];
        LANES128(v216).n128_u8[12] = v145[127];
        v219 = vuzp1q_s16(v218, vcgeq_u32(v40, v139));
        LANES128(v218).n128_u8[0] = v145[143];
        v220 = vuzp1q_s8(v219, v39);
        LANES128(v39).n128_u8[0] = v145[207];
        LANES128(v218).n128_u8[4] = v145[159];
        v221 = vsubq_s8(v217, v220);
        LANES128(v39).n128_u8[4] = v145[223];
        LANES128(v218).n128_u8[8] = v145[175];
        LANES128(v39).n128_u8[8] = v145[239];
        LANES128(v218).n128_u8[12] = v145[191];
        LANES128(v39).n128_u8[12] = v145[255];
        v38 = vcgeq_u32(v218, v139);
        v37 = vuzp1q_s16(v38, vcgeq_u32(v39, v139));
        v35 = vuzp1q_s8(vuzp1q_s16(v36, vcgeq_u32(v216, v139)), v37);
        v144 = vsubq_s8(v221, v35);
      } while (v143 != v140);
      PSEUDO_LOW_LANE128(v144, n128_u8, vaddvq_s8(v144));
      v141 = LANES128(v144).n128_u32[0];
      if (v140 != v138) {
        goto LABEL_133;
      }
    }
    else {
      if ((_DWORD)v138 == 1) {
        v142 = 0;
        v141 = 0;
      }
      else {
        v222 = (unsigned __int8*)v473 + 1;
        v142 = (unsigned int)v138 & 0xFFFFFFFE;
        v223 = 0;
        v224 = 0;
        v225 = v142;
        do {
          v226 = *(v222 - 1);
          v227 = *v222;
          v222 += 2;
          v225 -= 2;
          v223 += v226 / (unsigned __int8)v33;
          v224 += v227 / (unsigned __int8)v33;
        } while (v225 != 0);
        v141 = v224 + v223;
        if (v142 == v138) {
          goto LABEL_135;
        }
      }
      v228 = ((int)v138 - (int)v142) & 7LL;
      if (v228 == 0) {
        v229 = v142;
        if ((unsigned __int64)(v142 - v138) > 0xFFFFFFFFFFFFFFF8LL) {
          goto LABEL_135;
        }
      LABEL_129:
        v404 = v138 - v229;
        v405 = (unsigned __int8*)v473 + v229 + 3;
        do {
          v404 -= 8;
          v406 = v405[4];
          v407 = v405[2] / (unsigned int)(unsigned __int8)v33 +
                 v405[1] / (unsigned int)(unsigned __int8)v33 +
                 *v405 / (unsigned int)(unsigned __int8)v33 +
                 *(v405 - 1) / (unsigned int)(unsigned __int8)v33 +
                 *(v405 - 2) / (unsigned int)(unsigned __int8)v33 +
                 *(v405 - 3) / (unsigned int)(unsigned __int8)v33 + v141;
          v408 = v405[3];
          v405 += 8;
          v141 =
              v406 / (unsigned __int8)v33 + v408 / (unsigned __int8)v33 + v407;
        } while (v404 != 0);
        goto LABEL_135;
      }
      v229 = v142;
      do {
        v230 = *((unsigned __int8*)v473 + v229++);
        --v228;
        v141 += v230 / (unsigned __int8)v33;
      } while (v228 != 0);
      if ((unsigned __int64)(v142 - v138) <= 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_129;
      }
    }
  LABEL_135:
    if (v33 > v131 || (unsigned int)v114 > (unsigned __int8)v141) {
      v466 = v33 - 1;
      goto LABEL_208;
    }
    v466 = v33 - 1;
    if (v459 != 0) {
      break;
    }
    do {
      v131 -= v33;
    } while (v33 <= v131);
  LABEL_208:
    if (v131 == 0) {
      goto LABEL_213;
    }
  LABEL_209:
    v58 = v33 <= 1;
    v33 = v466;
    if (v58) {
      goto LABEL_213;
    }
  }
  v414 = -1;
  while (2) {
    v463 = v141;
    v464 = v131;
    v415 = 0;
    while (2) {
      v416 = v414;
      v417 = *(_DWORD*)(*(_QWORD*)(v117 + 8) + 24LL);
      if (v118) {
        while (1) {
          if (v414 + 1 == v417) {
            v414 = 0;
          }
          else {
            ++v414;
          }
          v418 = (unsigned __int8*)&v474_.v474[2 * (int)v414];
          if (*v418 >= (unsigned int)(unsigned __int8)v33) {
            v419 = 0;
            goto LABEL_183;
          }
          if (v418[1] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 1;
            goto LABEL_183;
          }
          if (v418[2] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 2;
            goto LABEL_183;
          }
          if (v418[3] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 3;
            goto LABEL_183;
          }
          if (v418[4] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 4;
            goto LABEL_183;
          }
          if (v418[5] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 5;
            goto LABEL_183;
          }
          if (v418[6] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 6;
            goto LABEL_183;
          }
          if (v418[7] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 7;
            goto LABEL_183;
          }
          if (v418[8] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 8;
            goto LABEL_183;
          }
          if (v418[9] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 9;
            goto LABEL_183;
          }
          if (v418[10] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 10;
            goto LABEL_183;
          }
          if (v418[11] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 11;
            goto LABEL_183;
          }
          if (v418[12] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 12;
            goto LABEL_183;
          }
          if (v418[13] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 13;
            goto LABEL_183;
          }
          if (v418[14] >= (unsigned int)(unsigned __int8)v33) {
            break;
          }
          if (v418[15] >= (unsigned int)(unsigned __int8)v33) {
            v419 = 15;
            goto LABEL_183;
          }
        }
        v419 = 14;
      LABEL_183:
        v420 = (int)v414;
        LOBYTE(v421) = *((_BYTE*)v473 + (int)v414);
        v422 = v116 + 144 * v415;
        if (v414 >= *(_DWORD*)(v53 + 3716)) {
        LABEL_184:
          v423 = cuda_driver_predicates_9ae50(v53);
          v137 = COERCE_AS(int8x16_t, CudaDriverData_1116200);
          v136 = COERCE_AS(int8x16_t, CudaDriverData_11161f0);
          v135 = COERCE_AS(int8x16_t, CudaDriverData_1115a40);
          v134 = COERCE_AS(int8x16_t, CudaDriverData_1115e10);
          v133 = COERCE_AS(int8x16_t, CudaDriverData_11152f0);
          v53 = (__int64)a1;
          if (v423) {
            *(_WORD*)(v422 + 88) |= 1 << (v414 - a1[929]);
            goto LABEL_200;
          }
        }
      }
      else {
        do {
          if (v416 + 1 == v417) {
            v416 = 0;
          }
          else {
            ++v416;
          }
          v420 = v416;
          v421 = *((unsigned __int8*)v473 + v416);
        } while (v33 > v421);
        v419 = 0;
        v414 = v416;
        v422 = v116 + 144 * v415;
        if ((unsigned int)v416 >= *(_DWORD*)(v53 + 3716)) {
          goto LABEL_184;
        }
      }
      v424 = v422 + 24;
      v425 = 1;
      v426 = 1;
      v427 = 0;
      v428 = v33;
      v429 = *((unsigned __int16*)v474_.v475 + v414);
      v430 = 1;
      do {
        if ((v430 & v429) != 0) {
          v431 = *(unsigned __int16*)(v424 + 2LL * v414);
          if ((v430 & v431) == 0) {
            v432 = (unsigned __int16)v430;
            v433 = v431 | v430;
            --v428;
            v429 ^= v432;
            if (v427 == 0) {
              v427 = v426;
            }
            *(_WORD*)(v424 + 2LL * v414) = v433;
            *((_WORD*)v474_.v475 + v414) = v429;
          }
        }
        if (v428 == 0) {
          break;
        }
        v430 = 2 * v425;
        ++v426;
        v425 = (2 * v425) & 0xFFFE;
      } while (v425 != 0);
      v434 = cuda_driver_predicates_9ae50(v53);
      v134 = COERCE_AS(int8x16_t, CudaDriverData_1115e10);
      v133 = COERCE_AS(int8x16_t, CudaDriverData_11152f0);
      v136 = COERCE_AS(int8x16_t, CudaDriverData_11161f0);
      v135 = COERCE_AS(int8x16_t, CudaDriverData_1115a40);
      v137 = COERCE_AS(int8x16_t, CudaDriverData_1116200);
      if (v434) {
        v435 = *(unsigned __int16*)(v422 + 56 + 2LL * v414);
        if (v427 >= 2 && ((v435 >> (v427 - 2)) & 1) != 0) {
          v436 = -1 << (v466 + v427);
          v435 &= ~((-1 << (v427 - 1)) ^ v436);
        }
        else {
          v436 = (-1 << (v427 - 1)) ^ (-1 << (v466 + v427));
        }
        *(_WORD*)(v422 + 56 + 2LL * v414) = v435 | v436;
      }
    LABEL_200:
      v118 = v468;
      *((_BYTE*)v473 + v420) = v421 - v33;
      if (v468) {
        *((_BYTE*)&v474_.v474[2 * v420] + v419) -= v33;
      }
      v53 = (__int64)a1;
      v116 = v467;
      ++v415;
      *(_DWORD*)(v422 + 96) += a1[934] * v33;
      v117 = v469;
      if (v415 != v470) {
        continue;
      }
      break;
    }
    v131 = v464 - v33;
    if (v33 <= v464 - v33) {
      LODWORD(v114) = v461;
      v141 = v463 - v470;
      if (v461 > (unsigned __int8)(v463 - v470)) {
        goto LABEL_208;
      }
      continue;
    }
    break;
  }
  LODWORD(v114) = v461;
  if (v131 != 0) {
    goto LABEL_209;
  }
LABEL_213:
  v437 = (_OWORD*)a5;
  if (a5 == 0) {
    return 0;
  }
  *(_OWORD*)(a5 + 16) = (__typeof__(*(_OWORD*)(a5 + 16))){0};
  *(_OWORD*)(a5 + 32) = (__typeof__(*(_OWORD*)(a5 + 32))){0};
  *(_OWORD*)(a5 + 48) = (__typeof__(*(_OWORD*)(a5 + 48))){0};
  *(_OWORD*)(a5 + 64) = (__typeof__(*(_OWORD*)(a5 + 64))){0};
  *(_OWORD*)a5 = (__typeof__(*(_OWORD*)a5)){0};
  *(_DWORD*)a5 = 1;
  *(_OWORD*)(a5 + 80) = (__typeof__(*(_OWORD*)(a5 + 80))){0};
  *(_OWORD*)(a5 + 96) = (__typeof__(*(_OWORD*)(a5 + 96))){0};
  *(_OWORD*)(a5 + 112) = (__typeof__(*(_OWORD*)(a5 + 112))){0};
  *(_OWORD*)(a5 + 128) = (__typeof__(*(_OWORD*)(a5 + 128))){0};
  *(_DWORD*)(a5 + 16) = *(_DWORD*)(v117 + 16);
  v438 = *(_QWORD*)(v117 + 8);
  *(_BYTE*)(a5 + 90) = 1;
  *(_QWORD*)(a5 + 8) = v438;
  v439 = *(_QWORD*)(v117 + 8);
  if (*(_DWORD*)(v439 + 24) != 0) {
    v440 = a5 + 24;
    v441 = a5 + 56;
    v442 = 0;
    v443 = 0;
    do {
      v446 = *((unsigned __int8*)v473 + v443);
      if (*((_BYTE*)v473 + v443) != 0) {
        v447 = *((unsigned __int16*)v474_.v475 + v443);
        if (v443 >= *(unsigned int*)(v53 + 3716) &&
            (v444 = cuda_driver_predicates_9ae50(v53), v53 = (__int64)a1,
             v444)) {
          *(_WORD*)(a5 + 88) |= 1 << (v443 - a1[929]);
        }
        else {
          v448 = 1;
          v449 = 1;
          v450 = 1;
          v451 = 0;
          v452 = v446;
          do {
            if ((v450 & v447) != 0) {
              v453 = *(unsigned __int16*)(v440 + 2 * v443);
              if ((v450 & v453) == 0) {
                v454 = (unsigned __int16)v450;
                v455 = v453 | v450;
                --v452;
                v447 ^= v454;
                if (v451 == 0) {
                  v451 = v449;
                }
                *(_WORD*)(v440 + 2 * v443) = v455;
                *((_WORD*)v474_.v475 + v443) = v447;
              }
            }
            if (v452 == 0) {
              break;
            }
            v450 = 2 * v448;
            ++v449;
            v448 = (2 * v448) & 0xFFFE;
          } while (v448 != 0);
          v456 = cuda_driver_predicates_9ae50(v53);
          v53 = (__int64)a1;
          if (v456) {
            v457 = *(unsigned __int16*)(v441 + 2 * v443);
            if (v451 >= 2 && ((v457 >> (v451 - 2)) & 1) != 0) {
              v458 = v457 & ~((-1 << (v451 - 1)) ^ (-1 << (v451 - 1 + v446))) |
                     (-1 << (v451 - 1 + v446));
            }
            else {
              v458 = v457 | (-1 << (v451 - 1)) ^ (-1 << (v451 - 1 + v446));
            }
            *(_WORD*)(v441 + 2 * v443) = v458;
          }
        }
        v445 = *(_DWORD*)(v53 + 3736);
        *((_BYTE*)v473 + v443) = 0;
        v442 = *(_DWORD*)(a5 + 96) + v445 * v446;
        *(_DWORD*)(a5 + 96) = v442;
        v439 = *(_QWORD*)(v469 + 8);
      }
      ++v443;
    } while (v443 < *(unsigned int*)(v439 + 24));
    v437 = (_OWORD*)a5;
    if (v442 != 0) {
      return 0;
    }
  }
  v437[1] = (__typeof__(v437[1])){0};
  v437[2] = (__typeof__(v437[2])){0};
  v437[3] = (__typeof__(v437[3])){0};
  v437[4] = (__typeof__(v437[4])){0};
  *v437 = (__typeof__(*v437)){0};
  v437[5] = (__typeof__(v437[5])){0};
  v437[6] = (__typeof__(v437[6])){0};
  v437[7] = (__typeof__(v437[7])){0};
  v437[8] = (__typeof__(v437[8])){0};
  return 0;
}

__int64 cuda_driver_a2140(__int64 a1, _QWORD* a2, __int64 a3, unsigned int a4)
{
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 i;
  unsigned __int16* v17;
  unsigned int v18;
  unsigned __int8 v19;
  int v20;
  __int64 v21;
  uint8x16_t* v22;
  unsigned __int16 v23;
  uint8x16_t* v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  bool v33;
  _OWORD* v34;
  __int64 v35;
  int v36;
  int v37;
  _QWORD* v38;
  int v39;
  int v40;
  _QWORD* v41;
  int v42;
  int v43;
  _QWORD* v44;
  int v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  _QWORD* v55;
  uint8x16_t v56;
  _QWORD v57[4];

  v8 = (_QWORD*)CudaDriverRoutine_12e510(1, 488);
  if (v8 == nullptr) {
    return 2;
  }
  v9 = v8;
  *v8 = (unsigned int)CudaDriverRoutine_12de40((unsigned int*)(a1 + 20320));
  v9[1] = a1;
  *((_DWORD*)v9 + 6) = *(_DWORD*)(a1 + 19856);
  *((_DWORD*)v9 + 4) = *(_DWORD*)(a1 + 19848);
  *((_DWORD*)v9 + 5) = *(_DWORD*)(a1 + 19852);
  if (a4 != 0) {
    v10 = v9 + 10;
    v11 = v9 + 4;
    v12 = 0;
    v13 = a4;
    v55 = v9;
    v51 = a4;
    v52 = a3;
    v54 = v9 + 4;
    do {
      v14 = a3 + 144 * v12;
      if (*(_DWORD*)v14 == 1) {
        v53 = v12;
        v15 = *((_DWORD*)v9 + 7);
        *((_DWORD*)v9 + 116) += *(_DWORD*)(v14 + 96) / *(_DWORD*)(a1 + 3736);
        *((_DWORD*)v9 + 7) = v15 + *(_DWORD*)(v14 + 96);
        if (*(_DWORD*)(*(_QWORD*)(v14 + 8) + 24LL) != 0) {
          for (i = 0; i < *(unsigned int*)(*(_QWORD*)(v14 + 8) + 24LL); ++i) {
            if (i >= *(unsigned int*)(a1 + 3716) &&
                cuda_driver_predicates_9ae50(a1)) {
              v17 = (unsigned __int16*)(v14 + 88);
              if (*(_BYTE*)(v14 + 91) != 0) {
                v17 = (unsigned __int16*)(*(_QWORD*)(v14 + 8) + 468LL);
              }
              v18 = *v17;
              *((_WORD*)v9 + 234) |= v18;
              if (((v18 >> ((i - *(_DWORD*)(a1 + 3716)) & 0x1F)) & 1) != 0) {
                v19 = 1;
                *((_WORD*)v11 + i) = 1;
                LOBYTE(v10[2 * i]) = 1;
                goto LABEL_69;
              }
              continue;
            }
            v20 = *(unsigned __int8*)(v14 + 91);
            v56 = (__typeof__(v56)){0};
            if (v20 != 0) {
              v21 = *(_QWORD*)(v14 + 8);
              v22 = (uint8x16_t*)(v21 + 16 * i);
              v19 = *(_BYTE*)(v21 + 470);
              v23 = *(_WORD*)(v21 + 2 * i + 32);
              v24 = v22 + 5;
              goto LABEL_41;
            }
            v25 = 1;
            v26 = 0;
            v27 = 0;
            v28 = *(unsigned __int16*)(v14 + 56 + 2 * i);
            v23 = *(_WORD*)(v14 + 24 + 2 * i);
            v29 = v23;
            do {
              if ((v29 & 1) != 0) {
                if ((v25 & ~v28) != 0) {
                  ++v27;
                  v25 ^= 1u;
                  ++LANES128(v56).n128_u8[(unsigned __int8)v27];
                  if ((v29 & 2) == 0) {
                  LABEL_29:
                    ++v27;
                    if ((v29 & 4) == 0) {
                      goto LABEL_30;
                    }
                    goto LABEL_33;
                  }
                }
                else {
                  ++LANES128(v56).n128_u8[(unsigned __int8)v27];
                  if ((v29 & 2) == 0) {
                    goto LABEL_29;
                  }
                }
              }
              else {
                ++v27;
                if ((v29 & 2) == 0) {
                  goto LABEL_29;
                }
              }
              if ((v25 & ~(v28 >> 1)) != 0) {
                ++v27;
                v25 ^= 1u;
                ++LANES128(v56).n128_u8[(unsigned __int8)v27];
                if ((v29 & 4) == 0) {
                LABEL_30:
                  ++v27;
                  if ((v29 & 8) == 0) {
                    goto LABEL_18;
                  }
                  goto LABEL_37;
                }
              }
              else {
                ++LANES128(v56).n128_u8[(unsigned __int8)v27];
                if ((v29 & 4) == 0) {
                  goto LABEL_30;
                }
              }
            LABEL_33:
              if ((v25 & ~(v28 >> 2)) != 0) {
                ++v27;
                v25 ^= 1u;
                ++LANES128(v56).n128_u8[(unsigned __int8)v27];
                if ((v29 & 8) == 0) {
                LABEL_18:
                  ++v27;
                  goto LABEL_19;
                }
              }
              else {
                ++LANES128(v56).n128_u8[(unsigned __int8)v27];
                if ((v29 & 8) == 0) {
                  goto LABEL_18;
                }
              }
            LABEL_37:
              if ((v25 & ~(v28 >> 3)) != 0) {
                ++v27;
                v25 ^= 1u;
              }
              ++LANES128(v56).n128_u8[(unsigned __int8)v27];
            LABEL_19:
              v29 >>= 4;
              v30 = v26 | 3;
              v28 >>= 4;
              v26 += 4;
            } while (v30 < 0xF);
            v24 = &v56;
            v19 = vmaxvq_u8(v56);
          LABEL_41:
            *((_WORD*)v11 + i) |= v23;
            if (!cuda_driver_predicates_9ae50(a1)) {
              goto LABEL_69;
            }
            v31 = *((unsigned __int16*)v11 + i);
            if (*((_WORD*)v11 + i) != 0) {
              v32 = 0;
              do {
                v32 += v31 & 1;
                v33 = v31 > 1;
                v31 >>= 1;
              } while (v33);
            }
            else {
              v32 = 0;
            }
            v34 = &v10[2 * i];
            *(_OWORD*)v57 = *v34;
            *(uint8x16_t*)&v57[2] = *v24;
            qsort_plt(v57, 32, 1, CudaDriverRoutine_a27d0);
            v35 = 0;
            v36 = 0;
            while (2) {
              v37 = LOBYTE(v57[v35]);
              if ((unsigned __int8)(v37 - 1) <
                  (unsigned int)(unsigned __int8)v32) {
                v32 -= v37;
                *((_BYTE*)&v10[2 * i] + v36++) = v37;
                v38 = &v57[v35];
                v39 = BYTE1(v57[v35]);
                if ((unsigned __int8)(v39 - 1) <
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_59;
                }
              LABEL_51:
                v40 = *((unsigned __int8*)v38 + 2);
                if ((unsigned __int8)(v40 - 1) >=
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_52;
                }
              LABEL_60:
                v32 -= v40;
                *((_BYTE*)&v10[2 * i] + v36++) = v40;
                v41 = &v57[v35];
                v42 = BYTE3(v57[v35]);
                if ((unsigned __int8)(v42 - 1) <
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_61;
                }
              LABEL_53:
                v43 = *((unsigned __int8*)v41 + 4);
                if ((unsigned __int8)(v43 - 1) >=
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_54;
                }
              LABEL_62:
                v32 -= v43;
                *((_BYTE*)&v10[2 * i] + v36++) = v43;
                v44 = &v57[v35];
                v45 = BYTE5(v57[v35]);
                if ((unsigned __int8)(v45 - 1) <
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_63;
                }
              LABEL_55:
                v46 = *((unsigned __int8*)v44 + 6);
                if ((unsigned __int8)(v46 - 1) >=
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_56;
                }
              LABEL_64:
                v32 -= v46;
                *((_BYTE*)&v10[2 * i] + v36++) = v46;
                v47 = HIBYTE(v57[v35]);
                if ((unsigned __int8)(v47 - 1) <
                    (unsigned int)(unsigned __int8)v32) {
                LABEL_65:
                  v32 -= v47;
                  *((_BYTE*)&v10[2 * i] + v36++) = v47;
                }
              }
              else {
                v38 = &v57[v35];
                v39 = BYTE1(v57[v35]);
                if ((unsigned __int8)(v39 - 1) >=
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_51;
                }
              LABEL_59:
                v32 -= v39;
                *((_BYTE*)&v10[2 * i] + v36++) = v39;
                v40 = *((unsigned __int8*)v38 + 2);
                if ((unsigned __int8)(v40 - 1) <
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_60;
                }
              LABEL_52:
                v41 = &v57[v35];
                v42 = BYTE3(v57[v35]);
                if ((unsigned __int8)(v42 - 1) >=
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_53;
                }
              LABEL_61:
                v32 -= v42;
                *((_BYTE*)&v10[2 * i] + v36++) = v42;
                v43 = *((unsigned __int8*)v41 + 4);
                if ((unsigned __int8)(v43 - 1) <
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_62;
                }
              LABEL_54:
                v44 = &v57[v35];
                v45 = BYTE5(v57[v35]);
                if ((unsigned __int8)(v45 - 1) >=
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_55;
                }
              LABEL_63:
                v32 -= v45;
                *((_BYTE*)&v10[2 * i] + v36++) = v45;
                v46 = *((unsigned __int8*)v44 + 6);
                if ((unsigned __int8)(v46 - 1) <
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_64;
                }
              LABEL_56:
                v47 = HIBYTE(v57[v35]);
                if ((unsigned __int8)(v47 - 1) <
                    (unsigned int)(unsigned __int8)v32) {
                  goto LABEL_65;
                }
              }
              if (++v35 != 4) {
                continue;
              }
              break;
            }
            if ((_BYTE)v32 != 0) {
              memset_plt((char*)v34 + v36, 1, (unsigned __int8)v32);
            }
            v9 = v55;
            v11 = v54;
          LABEL_69:
            if (*((unsigned __int8*)v9 + 470) < (unsigned int)v19) {
              *((_BYTE*)v9 + 470) = v19;
            }
          }
        }
        a3 = v52;
        v12 = v53;
        v13 = v51;
        if (*(_BYTE*)(v14 + 90) != 0) {
          v48 = *(_DWORD*)(a1 + 3736);
          *((_DWORD*)v9 + 4) = v48;
          *((_DWORD*)v9 + 5) = v48;
        }
      }
      ++v12;
    } while (v12 != v13);
  }
  CudaDriverStub_107f90_alt3(a1 + 20328);
  v9[60] = *(_QWORD*)(a1 + 20344);
  *(_QWORD*)(a1 + 20344) = v9;
  v49 = v9[60];
  if (v49 != 0) {
    *(_QWORD*)(v49 + 472) = v9;
  }
  CudaDriverStub_108070_alt3(a1 + 20328);
  *a2 = v9;
  return 0;
}

__int64 cuda_driver_unplaced_4_a2b10(__int64* a1, _BYTE* a2,
                                     unsigned __int64 a3)
{
  char* v6;
  __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned int* v11;
  unsigned __int64 v12;
  unsigned int v14;
  _OWORD* v15;
  _OWORD* v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v23;
  unsigned int v24;
  const char* v25;
  int v26;
  bool v27;
  char v28;
  __int64 v29;
  unsigned int v30;
  int v31;
  char v32;
  char v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;

  v6 = (char*)CudaDriverData_1422118;
  CudaDriverStub_107f90((char*)CudaDriverData_1422118 + 88);
  v7 = CudaDriverRoutine_1a2cd0(
      *(unsigned int**)((char*)&CudaDriverRoutine_4718 + (_QWORD)v6),
      (__int64)a2, a3);
  if (v7 != 0) {
    *a1 = v7;
    v8 = 0;
    atomic_fetch_add((atomic_ullong* volatile)(v7 + 8), 1u);
    goto LABEL_17;
  }
  v37 = 0;
  if (a2 == nullptr || *a2 != 127 || a2[1] != 69 || a2[2] != 76 ||
      a2[3] != 70) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"CUDA binary (cubin) file is not in the expected ELF format. "
                 "Use Nvidia provided tools to generate the binary.\n");
  LABEL_16:
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"You can inspect the binary with cuobjdump or readelf to "
                 "check for corrupted/missing entries.\n");
    v8 = 200;
    goto LABEL_17;
  }
  if ((unsigned int)CudaDriverRoutine_246fe0((__int64)a2) != 0) {
    v9 = 16;
    v10 = 0;
    while (1) {
      v11 = (unsigned int*)CudaDriverRoutine_246fa0((__int64)a2, v10);
      v12 = v11[8];
      if (((unsigned int)v12 & ((_DWORD)v12 - 1)) != 0) {
        break;
      }
      ++v10;
      if (v9 <= v12) {
        v9 = v11[8];
      }
      if (v10 >= (unsigned int)CudaDriverRoutine_246fe0((__int64)a2)) {
        goto LABEL_19;
      }
    }
    v25 = (const char*)CudaDriverRoutine_2471e0((__int64)a2, v11);
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"CUDA binary (cubin) ELF section '%s' does not have the "
                 "expected alignment requirements. Use Nvidia provid"
                 "ed tools to generate the binary.\n",
        v25);
    goto LABEL_16;
  }
  v9 = 16;
LABEL_19:
  v14 = CudaDriverRoutine_246fe0((__int64)a2);
  v15 = (_OWORD*)CudaDriverStub_12e330(a3 + v9 + 112LL * v14 + 239);
  if (v15 == nullptr) {
    v8 = 2;
    goto LABEL_17;
  }
  v16 = v15;
  v15[1] = (__typeof__(v15[1])){0};
  v15[2] = (__typeof__(v15[2])){0};
  v15[3] = (__typeof__(v15[3])){0};
  v15[4] = (__typeof__(v15[4])){0};
  *v15 = (__typeof__(*v15)){0};
  v15[5] = (__typeof__(v15[5])){0};
  v15[6] = (__typeof__(v15[6])){0};
  v15[7] = (__typeof__(v15[7])){0};
  v15[8] = (__typeof__(v15[8])){0};
  v15[9] = (__typeof__(v15[9])){0};
  v15[10] = (__typeof__(v15[10])){0};
  v15[11] = (__typeof__(v15[11])){0};
  v15[12] = (__typeof__(v15[12])){0};
  v15[13] = (__typeof__(v15[13])){0};
  v15[14] = (__typeof__(v15[14])){0};
  v17 = CudaDriverRoutine_246fe0((__int64)a2);
  *((_QWORD*)v16 + 21) = v16 + 15;
  *((_QWORD*)v16 + 2) =
      (((unsigned __int64)&v16[7 * v17 + 14] + v9 + 15) & -(__int64)v9) -
      (_QWORD)v16;
  v18 = CudaDriverRoutine_246fe0((__int64)a2);
  memset_plt_alt1((__int64)(v16 + 15), 0, 112LL * v18);
  v19 = *((_QWORD*)v16 + 2);
  memcpy_plt((__int64)v16 + v19, (__int64)a2, a3);
  *((_QWORD*)v16 + 3) = a3;
  *(_BYTE*)v16 = CudaDriverRoutine_246d00((_BOOL8)v16 + v19);
  v23 = CudaDriverStub_57450_alt1((char*)v16 + v19);
  *((_QWORD*)v16 + 4) = v23;
  CudaDriverRoutine_107f40((_QWORD*)v16 + 23, 75, 0);
  if (*(_DWORD*)v23 != 1179403647 || *(_BYTE*)(v23 + 4) != 1 ||
      *(_BYTE*)(v23 + 5) != 1 || *(_WORD*)(v23 + 18) != 190) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"CUDA binary (cubin) ELF header does not have the expected "
                 "values. Use Nvidia provided tools to generate the binary.\n");
  LABEL_30:
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"You can inspect the binary with cuobjdump or readelf to "
                 "check for corrupted/missing entries.\n");
    goto LABEL_31;
  }
  if (*(_BYTE*)(v23 + 7) == 65) {
    v24 = (unsigned __int16)(*(_DWORD*)(v23 + 36) >> 8);
  }
  else {
    v24 = (unsigned __int8)*(_DWORD*)(v23 + 36);
  }
  *((_DWORD*)v16 + 36) = v24;
  if (v24 <= 0x13) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Device code for architecture sm_%u is not supported\n", v24);
  LABEL_31:
    v8 = 200;
  LABEL_32:
    CudaDriverRoutine_a6060((__int64)v16);
    goto LABEL_17;
  }
  if (*(_BYTE*)(v23 + 7) == 65) {
    v26 = (unsigned __int16)(*(_DWORD*)(v23 + 36) >> 8);
  }
  else {
    v26 = (unsigned __int8)*(_DWORD*)(v23 + 36);
  }
  *((_DWORD*)v16 + 34) = v26;
  v27 = *(_BYTE*)(v23 + 7) != 65 && (*(_DWORD*)(v23 + 36) & 0x400) == 0;
  v28 = *((_BYTE*)v16 + 232) & 0xFE | v27;
  *((_BYTE*)v16 + 232) = v28;
  *((_BYTE*)v16 + 232) = (*(_DWORD*)(v23 + 36) >> 10) & 2 | v28 & 0xFD;
  v29 = CudaDriverRoutine_247280((__int64)v16 + v19, 2);
  *((_QWORD*)v16 + 5) = v29;
  if (v29 == 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"CUDA binary (cubin) does not contain symbol table. Use "
                 "Nvidia provided tools to generate the binary.\n");
    goto LABEL_30;
  }
  *((_QWORD*)v16 + 6) = CudaDriverRoutine_247000((__int64)v16 + v19, ".strtab");
  v30 = CudaDriverRoutine_a61a0(v16);
  if (v30 == 0) {
    CudaDriverRoutine_a6560(v16);
    CudaDriverRoutine_a6900((__int64)v16);
    CudaDriverRoutine_a6b40((__int64)v16);
    v30 = CudaDriverRoutine_a6e20(v16);
    if (v30 == 0) {
      v30 = CudaDriverRoutine_a39c0(v16, &v37, (_DWORD*)v16 + 35);
      if (v30 == 0) {
        v31 = *(unsigned __int16*)(v23 + 16);
        if (v31 == 1) {
          v32 = 16;
        }
        else {
          v32 = 0;
        }
        v33 = *((_BYTE*)v16 + 232) & 0xEF | v32;
        v34 = v37;
        *((_BYTE*)v16 + 232) = v33;
        if (v34 <= 0x64 && v31 == 1 &&
            *((_BYTE*)&CudaDriverRoutine_4364 + (_QWORD)v6) != 0) {
          v33 |= 4u;
          *((_BYTE*)v16 + 232) = v33;
        }
        if (v34 > 0x6D || (v33 & 0x10) == 0) {
          *((_BYTE*)v16 + 232) = v33 | 8;
        }
        cuda_driver_a70c0((__int64)v16);
        v30 = CudaDriverStub_1a2cc0(
            *(_QWORD*)((char*)&CudaDriverRoutine_4718 + (_QWORD)v6),
            (char*)v16 + *((_QWORD*)v16 + 2), a3, v16);
        if (v30 == 0) {
          *a1 = (__int64)v16;
          do {
            v35 = *((_QWORD*)v16 + 1);
            v8 = 0;
            v36 = v35;
            atomic_compare_exchange_strong(
                (atomic_ullong* volatile)((char*)v16 + 8),
                (unsigned __int64*)&v36, 1u);
          } while (v36 != v35);
        LABEL_17:
          CudaDriverStub_108070(v6 + 88);
          return v8;
        }
      }
    }
  }
  v8 = v30;
  goto LABEL_32;
}

__int64 cuda_driver_a2fc0(__int64 a1)
{
  char* v3;

  if (*(_BYTE*)a1 != 0) {
    return cuda_driver_a7890(a1);
  }
  v3 = (char*)CudaDriverData_1422118;
  CudaDriverStub_107f90((char*)CudaDriverData_1422118 + 88);
  if (atomic_fetch_add((atomic_ullong* volatile)(a1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 1) {
    CudaDriverStub_1a2d50(
        *(_QWORD*)((char*)&CudaDriverRoutine_4718 + (_QWORD)v3),
        a1 + *(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 24));
    CudaDriverRoutine_a6060(a1);
  }
  return CudaDriverStub_108070(v3 + 88);
}

__int64 cuda_driver_a4120(_QWORD* a1, __int64 (*a2)(__int64*, __int64),
                          __int64 a3)
{
  __int64 v3;
  __int64 result;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  char* v20;
  unsigned int v21;
  char v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v27;
    int v28;
    int v29;
    int v30;
    int v31;
    int v32;
    int v33;
    __int64 v34;
    int v35;
    int v36;
    int v37;
    __int16 v38;
    char v39;
    char v40;
  } v27_;

  v3 = a1[2];
  result = CudaDriverRoutine_246fe0((__int64)a1 + v3);
  if ((_DWORD)result != 0) {
    v6 = 0;
    v7 = 0;
    while (1) {
      v8 = CudaDriverRoutine_246fa0((__int64)a1 + v3, v7);
      if (*(_DWORD*)(v8 + 4) == 1) {
        v9 = v8;
        if ((*(_BYTE*)(v8 + 8) & 2) != 0) {
          v10 =
              CudaDriverRoutine_2471e0((__int64)a1 + a1[2], (unsigned int*)v8);
          if (v10 != 0 && (unsigned int)strncmp_plt(v10, ".text.", 6) == 0) {
            v11 = CudaDriverRoutine_2471e0((__int64)a1 + v3, (unsigned int*)v9);
            v12 = *(unsigned __int8*)(v9 + 31);
            v13 = *(_DWORD*)(v9 + 8);
            v14 = *(_DWORD*)(v9 + 20);
            v15 = v11;
            v16 = *(_DWORD*)(v9 + 32);
            v17 = CudaDriverRoutine_2472f0((__int64)a1 + v3, v9);
            v18 = a1[21] + v6;
            v19 = *(_DWORD*)(v18 + 104);
            v20 = (char*)a1 + a1[2] + *(unsigned int*)(a1[5] + 16LL) +
                  (unsigned int)(*(_DWORD*)(a1[5] + 36LL) * v19);
            v21 = (unsigned __int8)v20[13];
            if ((unsigned __int8)v20[12] >= 0x10u) {
              v22 = ((unsigned __int8)v20[13] >> 3) & 2;
            }
            else {
              v22 = (((unsigned __int8)v20[13] >> 3) & 2) + 1;
            }
            v23 = *(_QWORD*)(v18 + 88);
            if (v23 != 0) {
              LODWORD(v23) = *(_DWORD*)(v23 + 20);
            }
            v24 = *(_QWORD*)(v18 + 96);
            if (v24 != 0) {
              LODWORD(v24) = *(_DWORD*)(v24 + 20);
            }
            v27_.v37 = v19;
            v27_.v34 = v17;
            v27_.v28 = v7;
            v27_.v29 = v12;
            v27_.v39 = 0;
            v27_.v40 = 0;
            v27_.v27 = v15 + 6;
            v27_.v30 = (v13 >> 20) & 0x7F;
            v27_.v31 = v14;
            v27_.v32 = v16;
            v27_.v33 = 0;
            v27_.v35 = v23;
            v27_.v36 = v24;
            v27_.v38 = (unsigned __int8)(v22 | (v21 >> 1) & 4);
            result = a2(&v27_.v27, a3);
            if ((_DWORD)result != 0) {
              break;
            }
          }
        }
      }
      ++v7;
      v6 += 112;
      if (v7 >= (unsigned int)CudaDriverRoutine_246fe0((__int64)a1 + v3)) {
        return 0;
      }
    }
  }
  return result;
}

__int64 cuda_driver_a59e0(__int64 a1, __int64 (*a2)(_QWORD*, __int64),
                          __int64 a3)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 result;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  unsigned int v43;
  int v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 (*v51)(_QWORD*, __int64);
  __int64 v52;
  _QWORD v53[8];
  __int64 v54;
  __int64 v55;

  v4 = *(_QWORD*)(a1 + 112);
  if (v4 == 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a1 + 16);
  v8 = CudaDriverRoutine_247310(a1 + v5, v4);
  v9 = CudaDriverRoutine_2472f0(a1 + v5, *(_QWORD*)(a1 + 112));
  if (v8 == 0) {
    return 0;
  }
  v10 = v9;
  v11 = 0;
  v51 = a2;
  v52 = a3;
  v49 = v9;
  v50 = v8;
  while (1) {
    v19 = v11 + 12;
    if (v11 + 12 > v8) {
      return 200;
    }
    v20 = v10 + v11;
    v21 = *(unsigned int*)(v10 + v11 + 8);
    v22 = CudaDriverRoutine_247330(a1 + v5, *(_DWORD**)(a1 + 48),
                                   *(_DWORD*)(v10 + v11 + 4));
    if (v22 == 0) {
      return 200;
    }
    v23 = v22;
    if ((unsigned int)strcmp_plt(v22, "cl_kernel_attributes") == 0) {
      if ((_DWORD)v21 != 2 || *(_DWORD*)(v20 + 12) != 3) {
        return 200;
      }
      v44 = *(_DWORD*)(v20 + 20);
      v43 = *(_DWORD*)(v20 + 24);
      v29 = CudaDriverRoutine_247330(a1 + v5, *(_DWORD**)(a1 + 48),
                                     *(_DWORD*)(v20 + 16));
      result = 200;
      if (v29 == 0 || v44 != 3) {
        return result;
      }
      v45 = CudaDriverRoutine_247330(a1 + v5, *(_DWORD**)(a1 + 48), v43);
      if (v45 == 0) {
        return 200;
      }
      v17 = 1;
      v25 = v45;
      v15 = 0;
      v16 = 0;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      goto LABEL_5;
    }
    if ((unsigned int)strcmp_plt(v23, "cl_kernel_arg_info") == 0) {
      if ((_DWORD)v21 != 7 || *(_DWORD*)(v20 + 12) != 3) {
        return 200;
      }
      v47 = *(_QWORD*)(v20 + 52);
      v48 = *(_QWORD*)(v20 + 44);
      v24 = *(_DWORD*)(v20 + 20);
      v25 = *(unsigned int*)(v20 + 24);
      v26 = *(_QWORD*)(v20 + 28);
      v27 = *(_QWORD*)(v20 + 36);
      v46 = *(_QWORD*)(v20 + 60);
      v29 = CudaDriverRoutine_247330(
          a1 + *(_QWORD*)(a1 + 16), *(_DWORD**)(a1 + 48), *(_DWORD*)(v20 + 16));
      result = 200;
      if (v29 == 0 || v24 != 1 || (_DWORD)v26 != 2) {
        return result;
      }
      v30 = *(_QWORD*)(a1 + 16);
      v31 = CudaDriverRoutine_1a2980(*(int**)(a1 + 160), HIDWORD(v26));
      if (v31 == 0) {
        return 200;
      }
      v32 = *(_DWORD*)(v31 + 8);
      v33 = v31;
      v34 = CudaDriverRoutine_247330(a1 + v30, *(_DWORD**)(a1 + 48),
                                     *(_DWORD*)(v31 + 4));
      if (v34 == 0) {
        return 200;
      }
      v36 = strcmp_plt(v34, "cl_kernel_arg_addr_space");
      result = 200;
      if (v36 != 0 || v32 != (_DWORD)v25 || (_DWORD)v27 != 2) {
        return result;
      }
      v37 = *(_QWORD*)(a1 + 16);
      v38 = CudaDriverRoutine_1a2980(*(int**)(a1 + 160), HIDWORD(v27));
      if (v38 == 0) {
        return 200;
      }
      v39 = *(_DWORD*)(v38 + 8);
      v40 = v38;
      v41 = CudaDriverRoutine_247330(a1 + v37, *(_DWORD**)(a1 + 48),
                                     *(_DWORD*)(v38 + 4));
      if (v41 == 0) {
        return 200;
      }
      v42 = strcmp_plt(v41, "cl_kernel_arg_access_qual");
      result = 200;
      if (v42 != 0) {
        return result;
      }
      if (v39 != (_DWORD)v25) {
        return result;
      }
      result = CudaDriverRoutine_a7280(a1, v48, v53, v25,
                                       (__int64)"cl_kernel_arg_type");
      if ((_DWORD)result != 0) {
        return result;
      }
      result = CudaDriverRoutine_a7280(a1, v47, &v55, v25,
                                       (__int64)"cl_kernel_arg_type_qual");
      if ((_DWORD)result != 0) {
        return result;
      }
      result = CudaDriverRoutine_a7280(a1, v46, &v54, v25,
                                       (__int64)"cl_kernel_arg_name");
      if ((_DWORD)result != 0) {
        return result;
      }
      v12 = v53[0];
      v14 = v54;
      v13 = v55;
      v15 = v33 + 12;
      v16 = v40 + 12;
      v17 = 2;
    LABEL_5:
      v53[3] = v15;
      v53[4] = v16;
      v53[0] = v17;
      v53[1] = v29;
      v53[2] = v25;
      v53[5] = v12;
      v53[6] = v13;
      v53[7] = v14;
      result = v51(v53, v52);
      v10 = v49;
      v8 = v50;
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    v11 = v19 + 8 * v21;
    if (v11 >= v8) {
      return 0;
    }
  }
}

__int64 cuda_driver_a70c0(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  char v3;
  bool v4;
  char v5;
  char v6;
  char v7[4];
  struct {
    char gap0_[8];
    _BYTE v8[40];
    __int128 v9;
  } v8_;

  if (*(_DWORD*)(*(_QWORD*)(result + 40) + 36LL) <=
      *(_DWORD*)(*(_QWORD*)(result + 40) + 20LL)) {
    v1 = result;
    v2 = 0;
    do {
      v8_.v9 = (__typeof__(v8_.v9)){0};
      memset(&v8_.v8[8], 0, 32);
      result = CudaDriverRoutine_a3b60((_QWORD*)v1, v2, (__int64)v8_.v8, v7);
      if ((_DWORD)result != 0) {
        break;
      }
      if (v7[0] == 0) {
        v3 = *(_BYTE*)(v1 + 232);
        v4 = (v3 & 0x40) == 0;
        v5 = v3 & 0xBF;
        v6 = (16 * v8_.v9) & 0x40;
        if (!v4) {
          v6 = 64;
        }
        *(_BYTE*)(v1 + 232) = v6 | v5;
      }
      ++v2;
    } while (v2 < (unsigned int)(*(_DWORD*)(*(_QWORD*)(v1 + 40) + 20LL) /
                                 *(_DWORD*)(*(_QWORD*)(v1 + 40) + 36LL)));
  }
  return result;
}

__int64 cuda_driver_a71a0(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  char v3;
  bool v4;
  char v5;
  char v6;
  char v7[4];
  struct {
    char gap0_[8];
    _BYTE v8[40];
    __int128 v9;
  } v8_;

  if (*(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) <=
      *(_QWORD*)(*(_QWORD*)(result + 40) + 32LL)) {
    v1 = result;
    v2 = 0;
    do {
      v8_.v9 = (__typeof__(v8_.v9)){0};
      memset(&v8_.v8[8], 0, 32);
      result = CudaDriverRoutine_a81a0((_QWORD*)v1, v2, (__int64)v8_.v8, v7);
      if ((_DWORD)result != 0) {
        break;
      }
      if (v7[0] == 0) {
        v3 = *(_BYTE*)(v1 + 232);
        v4 = (v3 & 0x40) == 0;
        v5 = v3 & 0xBF;
        v6 = (16 * v8_.v9) & 0x40;
        if (!v4) {
          v6 = 64;
        }
        *(_BYTE*)(v1 + 232) = v6 | v5;
      }
      ++v2;
    } while (v2 < *(_QWORD*)(*(_QWORD*)(v1 + 40) + 32LL) /
                      *(_QWORD*)(*(_QWORD*)(v1 + 40) + 56LL));
  }
  return result;
}

__int64 cuda_driver_unplaced_4_a7400(__int64* a1, _BYTE* a2,
                                     unsigned __int64 a3)
{
  char* v6;
  __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned int v13;
  _OWORD* v14;
  _OWORD* v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v22;
  unsigned int v23;
  const char* v24;
  int v26;
  bool v27;
  char v28;
  __int64 v29;
  unsigned int v30;
  int v31;
  char v32;
  char v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;

  v6 = (char*)CudaDriverData_1422118;
  CudaDriverStub_107f90((char*)CudaDriverData_1422118 + 88);
  v7 = CudaDriverRoutine_1a2cd0(
      *(unsigned int**)((char*)&CudaDriverRoutine_4718 + (_QWORD)v6),
      (__int64)a2, a3);
  if (v7 != 0) {
    *a1 = v7;
    v8 = 0;
    atomic_fetch_add((atomic_ullong* volatile)(v7 + 8), 1u);
    goto LABEL_30;
  }
  v37 = 0;
  if ((unsigned int)CudaDriverRoutine_a27f0(a2) == 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"CUDA binary (cubin) file is not in the expected ELF format. "
                 "Use Nvidia provided tools to generate the binary.\n");
  LABEL_28:
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"You can inspect the binary with cuobjdump or readelf to "
                 "check for corrupted/missing entries.\n");
    v8 = 200;
    goto LABEL_30;
  }
  if ((unsigned int)CudaDriverRoutine_247640((__int64)a2) != 0) {
    v9 = 16;
    v10 = 0;
    while (1) {
      v11 = CudaDriverRoutine_2475f0((__int64)a2, v10);
      v12 = *(_QWORD*)(v11 + 48);
      if ((v12 & (v12 - 1)) != 0) {
        break;
      }
      ++v10;
      if (v9 <= v12) {
        v9 = *(_QWORD*)(v11 + 48);
      }
      if (v10 >= (unsigned int)CudaDriverRoutine_247640((__int64)a2)) {
        goto LABEL_13;
      }
    }
    v24 =
        (const char*)CudaDriverRoutine_2477e0((__int64)a2, (unsigned int*)v11);
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"CUDA binary (cubin) ELF section '%s' does not have the "
                 "expected alignment requirements. Use Nvidia provid"
                 "ed tools to generate the binary.\n",
        v24);
    goto LABEL_28;
  }
  v9 = 16;
LABEL_13:
  v13 = CudaDriverRoutine_247640((__int64)a2);
  v14 = (_OWORD*)CudaDriverStub_12e330(a3 + v9 + 112LL * v13 + 239);
  if (v14 == nullptr) {
    v8 = 2;
    goto LABEL_30;
  }
  v15 = v14;
  v14[1] = (__typeof__(v14[1])){0};
  v14[2] = (__typeof__(v14[2])){0};
  v14[3] = (__typeof__(v14[3])){0};
  v14[4] = (__typeof__(v14[4])){0};
  *v14 = (__typeof__(*v14)){0};
  v14[5] = (__typeof__(v14[5])){0};
  v14[6] = (__typeof__(v14[6])){0};
  v14[7] = (__typeof__(v14[7])){0};
  v14[8] = (__typeof__(v14[8])){0};
  v14[9] = (__typeof__(v14[9])){0};
  v14[10] = (__typeof__(v14[10])){0};
  v14[11] = (__typeof__(v14[11])){0};
  v14[12] = (__typeof__(v14[12])){0};
  v14[13] = (__typeof__(v14[13])){0};
  v14[14] = (__typeof__(v14[14])){0};
  v16 = CudaDriverRoutine_247640((__int64)a2);
  *((_QWORD*)v15 + 21) = v15 + 15;
  *((_QWORD*)v15 + 2) =
      (((unsigned __int64)&v15[7 * v16 + 14] + v9 + 15) & -(__int64)v9) -
      (_QWORD)v15;
  v17 = CudaDriverRoutine_247640((__int64)a2);
  memset_plt_alt1((__int64)(v15 + 15), 0, 112LL * v17);
  v18 = *((_QWORD*)v15 + 2);
  memcpy_plt((__int64)v15 + v18, (__int64)a2, a3);
  *((_QWORD*)v15 + 3) = a3;
  *(_BYTE*)v15 = CudaDriverRoutine_246d00((_BOOL8)v15 + v18);
  v22 = CudaDriverStub_57450_alt1((char*)v15 + v18);
  *((_QWORD*)v15 + 4) = v22;
  CudaDriverRoutine_107f40((_QWORD*)v15 + 23, 75, 0);
  if (*(_DWORD*)v22 != 1179403647 || *(_BYTE*)(v22 + 4) != 2 ||
      *(_BYTE*)(v22 + 5) != 1 || *(_WORD*)(v22 + 18) != 190) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"CUDA binary (cubin) ELF header does not have the expected "
                 "values. Use Nvidia provided tools to generate the binary.\n");
  LABEL_24:
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"You can inspect the binary with cuobjdump or readelf to "
                 "check for corrupted/missing entries.\n");
    goto LABEL_25;
  }
  if (*(_BYTE*)(v22 + 7) == 65) {
    v23 = (unsigned __int16)(*(_DWORD*)(v22 + 48) >> 8);
  }
  else {
    v23 = (unsigned __int8)*(_DWORD*)(v22 + 48);
  }
  *((_DWORD*)v15 + 36) = v23;
  if (v23 <= 0x13) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Device code for architecture sm_%u is not supported\n", v23);
  LABEL_25:
    v8 = 200;
  LABEL_26:
    CudaDriverRoutine_a6100((__int64)v15);
    goto LABEL_30;
  }
  if (*(_BYTE*)(v22 + 7) == 65) {
    v26 = (unsigned __int16)(*(_DWORD*)(v22 + 48) >> 8);
  }
  else {
    v26 = (unsigned __int8)*(_DWORD*)(v22 + 48);
  }
  *((_DWORD*)v15 + 34) = v26;
  v27 = *(_BYTE*)(v22 + 7) != 65 && (*(_DWORD*)(v22 + 48) & 0x400) == 0;
  v28 = *((_BYTE*)v15 + 232) & 0xFE | v27;
  *((_BYTE*)v15 + 232) = v28;
  *((_BYTE*)v15 + 232) = (*(_DWORD*)(v22 + 48) >> 10) & 2 | v28 & 0xFD;
  v29 = CudaDriverRoutine_2478a0((__int64)v15 + v18, 2);
  *((_QWORD*)v15 + 5) = v29;
  if (v29 == 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"CUDA binary (cubin) does not contain symbol table. Use "
                 "Nvidia provided tools to generate the binary.\n");
    goto LABEL_24;
  }
  *((_QWORD*)v15 + 6) = CudaDriverRoutine_247660((__int64)v15 + v18, ".strtab");
  v30 = CudaDriverRoutine_a6380(v15);
  if (v30 == 0) {
    CudaDriverRoutine_a6740(v15);
    CudaDriverRoutine_a6a20((__int64)v15);
    CudaDriverRoutine_a6cb0((__int64)v15);
    v30 = CudaDriverRoutine_a6f70(v15);
    if (v30 == 0) {
      v30 = CudaDriverRoutine_a7f20(v15, &v37, (_DWORD*)v15 + 35);
      if (v30 == 0) {
        v31 = *(unsigned __int16*)(v22 + 16);
        if (v31 == 1) {
          v32 = 16;
        }
        else {
          v32 = 0;
        }
        v33 = *((_BYTE*)v15 + 232) & 0xEF | v32;
        v34 = v37;
        *((_BYTE*)v15 + 232) = v33;
        if (v34 <= 0x64 && v31 == 1 &&
            *((_BYTE*)&CudaDriverRoutine_4364 + (_QWORD)v6) != 0) {
          v33 |= 4u;
          *((_BYTE*)v15 + 232) = v33;
        }
        if (v34 > 0x6D || (v33 & 0x10) == 0) {
          *((_BYTE*)v15 + 232) = v33 | 8;
        }
        cuda_driver_a71a0((__int64)v15);
        v30 = CudaDriverStub_1a2cc0(
            *(_QWORD*)((char*)&CudaDriverRoutine_4718 + (_QWORD)v6),
            (char*)v15 + *((_QWORD*)v15 + 2), a3, v15);
        if (v30 == 0) {
          *a1 = (__int64)v15;
          do {
            v35 = *((_QWORD*)v15 + 1);
            v8 = 0;
            v36 = v35;
            atomic_compare_exchange_strong(
                (atomic_ullong* volatile)((char*)v15 + 8),
                (unsigned __int64*)&v36, 1u);
          } while (v36 != v35);
        LABEL_30:
          CudaDriverStub_108070(v6 + 88);
          return v8;
        }
      }
    }
  }
  v8 = v30;
  goto LABEL_26;
}

__int64 cuda_driver_a7890(__int64 a1)
{
  char* v2;

  v2 = (char*)CudaDriverData_1422118;
  CudaDriverStub_107f90((char*)CudaDriverData_1422118 + 88);
  if (atomic_fetch_add((atomic_ullong* volatile)(a1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 1) {
    CudaDriverStub_1a2d50(
        *(_QWORD*)((char*)&CudaDriverRoutine_4718 + (_QWORD)v2),
        a1 + *(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 24));
    CudaDriverRoutine_a6100(a1);
  }
  return CudaDriverStub_108070(v2 + 88);
}

__int64 cuda_driver_a8520(_QWORD* a1, __int64 (*a2)(__int64*, __int64),
                          __int64 a3)
{
  __int64 v3;
  __int64 result;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  unsigned int v21;
  char v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v27;
    int v28;
    int v29;
    int v30;
    int v31;
    int v32;
    int v33;
    __int64 v34;
    int v35;
    int v36;
    int v37;
    __int16 v38;
    char v39;
    char v40;
  } v27_;

  v3 = a1[2];
  result = CudaDriverRoutine_247640((__int64)a1 + v3);
  if ((_DWORD)result != 0) {
    v6 = 0;
    v7 = 0;
    while (1) {
      v8 = CudaDriverRoutine_2475f0((__int64)a1 + v3, v7);
      if (*(_DWORD*)(v8 + 4) == 1) {
        v9 = v8;
        if ((*(_BYTE*)(v8 + 8) & 2) != 0) {
          v10 =
              CudaDriverRoutine_2477e0((__int64)a1 + a1[2], (unsigned int*)v8);
          if (v10 != 0 && (unsigned int)strncmp_plt(v10, ".text.", 6) == 0) {
            v11 = CudaDriverRoutine_2477e0((__int64)a1 + v3, (unsigned int*)v9);
            v12 = *(unsigned __int8*)(v9 + 47);
            v13 = *(_DWORD*)(v9 + 8);
            v14 = *(_DWORD*)(v9 + 32);
            v15 = v11;
            v16 = *(_DWORD*)(v9 + 48);
            v17 = CudaDriverRoutine_247910((__int64)a1 + v3, v9);
            v18 = a1[21] + v6;
            v19 = *(unsigned int*)(v18 + 104);
            v20 = (char*)a1 + a1[2] + *(_QWORD*)(a1[5] + 24LL) +
                  *(_QWORD*)(a1[5] + 56LL) * v19;
            v21 = (unsigned __int8)v20[5];
            if ((unsigned __int8)v20[4] >= 0x10u) {
              v22 = ((unsigned __int8)v20[5] >> 3) & 2;
            }
            else {
              v22 = (((unsigned __int8)v20[5] >> 3) & 2) + 1;
            }
            v23 = *(_QWORD*)(v18 + 88);
            if (v23 != 0) {
              LODWORD(v23) = *(_DWORD*)(v23 + 32);
            }
            v24 = *(_QWORD*)(v18 + 96);
            if (v24 != 0) {
              LODWORD(v24) = *(_DWORD*)(v24 + 32);
            }
            v27_.v37 = v19;
            v27_.v34 = v17;
            v27_.v28 = v7;
            v27_.v29 = v12;
            v27_.v39 = 0;
            v27_.v40 = 0;
            v27_.v27 = v15 + 6;
            v27_.v30 = (v13 >> 20) & 0x7F;
            v27_.v31 = v14;
            v27_.v32 = v16;
            v27_.v33 = 0;
            v27_.v35 = v23;
            v27_.v36 = v24;
            v27_.v38 = (unsigned __int8)(v22 | (v21 >> 1) & 4);
            result = a2(&v27_.v27, a3);
            if ((_DWORD)result != 0) {
              break;
            }
          }
        }
      }
      ++v7;
      v6 += 112;
      if (v7 >= (unsigned int)CudaDriverRoutine_247640((__int64)a1 + v3)) {
        return 0;
      }
    }
  }
  return result;
}

__int64 cuda_driver_a9c60(__int64 a1, __int64 (*a2)(_QWORD*, __int64),
                          __int64 a3)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 result;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  unsigned int v43;
  int v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 (*v51)(_QWORD*, __int64);
  __int64 v52;
  _QWORD v53[8];
  __int64 v54;
  __int64 v55;

  v4 = *(_QWORD*)(a1 + 112);
  if (v4 == 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a1 + 16);
  v8 = CudaDriverRoutine_247930(a1 + v5, v4);
  v9 = CudaDriverRoutine_247910(a1 + v5, *(_QWORD*)(a1 + 112));
  if (v8 == 0) {
    return 0;
  }
  v10 = v9;
  v11 = 0;
  v51 = a2;
  v52 = a3;
  v49 = v9;
  v50 = v8;
  while (1) {
    v19 = v11 + 12;
    if (v11 + 12 > v8) {
      return 200;
    }
    v20 = v10 + v11;
    v21 = *(unsigned int*)(v10 + v11 + 8);
    v22 = CudaDriverRoutine_247950(a1 + v5, *(_QWORD*)(a1 + 48),
                                   *(_DWORD*)(v10 + v11 + 4));
    if (v22 == 0) {
      return 200;
    }
    v23 = v22;
    if ((unsigned int)strcmp_plt(v22, "cl_kernel_attributes") == 0) {
      if ((_DWORD)v21 != 2 || *(_DWORD*)(v20 + 12) != 3) {
        return 200;
      }
      v44 = *(_DWORD*)(v20 + 20);
      v43 = *(_DWORD*)(v20 + 24);
      v29 = CudaDriverRoutine_247950(a1 + v5, *(_QWORD*)(a1 + 48),
                                     *(_DWORD*)(v20 + 16));
      result = 200;
      if (v29 == 0 || v44 != 3) {
        return result;
      }
      v45 = CudaDriverRoutine_247950(a1 + v5, *(_QWORD*)(a1 + 48), v43);
      if (v45 == 0) {
        return 200;
      }
      v17 = 1;
      v25 = v45;
      v15 = 0;
      v16 = 0;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      goto LABEL_5;
    }
    if ((unsigned int)strcmp_plt(v23, "cl_kernel_arg_info") == 0) {
      if ((_DWORD)v21 != 7 || *(_DWORD*)(v20 + 12) != 3) {
        return 200;
      }
      v47 = *(_QWORD*)(v20 + 52);
      v48 = *(_QWORD*)(v20 + 44);
      v24 = *(_DWORD*)(v20 + 20);
      v25 = *(unsigned int*)(v20 + 24);
      v26 = *(_QWORD*)(v20 + 28);
      v27 = *(_QWORD*)(v20 + 36);
      v46 = *(_QWORD*)(v20 + 60);
      v29 = CudaDriverRoutine_247950(a1 + *(_QWORD*)(a1 + 16),
                                     *(_QWORD*)(a1 + 48), *(_DWORD*)(v20 + 16));
      result = 200;
      if (v29 == 0 || v24 != 1 || (_DWORD)v26 != 2) {
        return result;
      }
      v30 = *(_QWORD*)(a1 + 16);
      v31 = CudaDriverRoutine_1a2980(*(int**)(a1 + 160), HIDWORD(v26));
      if (v31 == 0) {
        return 200;
      }
      v32 = *(_DWORD*)(v31 + 8);
      v33 = v31;
      v34 = CudaDriverRoutine_247950(a1 + v30, *(_QWORD*)(a1 + 48),
                                     *(_DWORD*)(v31 + 4));
      if (v34 == 0) {
        return 200;
      }
      v36 = strcmp_plt(v34, "cl_kernel_arg_addr_space");
      result = 200;
      if (v36 != 0 || v32 != (_DWORD)v25 || (_DWORD)v27 != 2) {
        return result;
      }
      v37 = *(_QWORD*)(a1 + 16);
      v38 = CudaDriverRoutine_1a2980(*(int**)(a1 + 160), HIDWORD(v27));
      if (v38 == 0) {
        return 200;
      }
      v39 = *(_DWORD*)(v38 + 8);
      v40 = v38;
      v41 = CudaDriverRoutine_247950(a1 + v37, *(_QWORD*)(a1 + 48),
                                     *(_DWORD*)(v38 + 4));
      if (v41 == 0) {
        return 200;
      }
      v42 = strcmp_plt(v41, "cl_kernel_arg_access_qual");
      result = 200;
      if (v42 != 0) {
        return result;
      }
      if (v39 != (_DWORD)v25) {
        return result;
      }
      result = CudaDriverRoutine_a7330(a1, v48, v53, v25,
                                       (__int64)"cl_kernel_arg_type");
      if ((_DWORD)result != 0) {
        return result;
      }
      result = CudaDriverRoutine_a7330(a1, v47, &v55, v25,
                                       (__int64)"cl_kernel_arg_type_qual");
      if ((_DWORD)result != 0) {
        return result;
      }
      result = CudaDriverRoutine_a7330(a1, v46, &v54, v25,
                                       (__int64)"cl_kernel_arg_name");
      if ((_DWORD)result != 0) {
        return result;
      }
      v12 = v53[0];
      v14 = v54;
      v13 = v55;
      v15 = v33 + 12;
      v16 = v40 + 12;
      v17 = 2;
    LABEL_5:
      v53[3] = v15;
      v53[4] = v16;
      v53[0] = v17;
      v53[1] = v29;
      v53[2] = v25;
      v53[5] = v12;
      v53[6] = v13;
      v53[7] = v14;
      result = v51(v53, v52);
      v10 = v49;
      v8 = v50;
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    v11 = v19 + 8 * v21;
    if (v11 >= v8) {
      return 0;
    }
  }
}

__int64 cuda_driver_aaf70(__int64 a1, unsigned __int8** a2, __int64* a3,
                          unsigned __int8 a4)
{
  unsigned __int8* v4;
  __int64 v5;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;

  if (a2 == nullptr) {
    return 999;
  }
  v4 = *a2;
  if (*a2 == nullptr) {
    return 999;
  }
  v5 = *(_QWORD*)(a1 + 24);
  if ((unsigned int)CudaDriverRoutine_11d580(v5, *a2, &v13) == 500) {
    return CudaDriverRoutine_11d4d0(v5, (__int64)v4, a3, &v12);
  }
  v10 = CudaDriverRoutine_92910(v5);
  if (v10 == 2) {
    v11 = CudaDriverRoutine_95d70(v13);
  }
  else {
    if (v10 != 1) {
      goto LABEL_12;
    }
    v11 = CudaDriverRoutine_91b90(v13);
  }
  v13 = v11;
LABEL_12:
  if ((*((_BYTE*)&CudaDriverRoutine_4350 + (_QWORD)CudaDriverData_1422118) & 8 |
       a4) != 0) {
    return cuda_driver_11d3a0(v5, v13, a3);
  }
  if ((*(_BYTE*)(a1 + 480) & 1) != 0) {
    return cuda_driver_11d250(v5, v13, a3);
  }
  return cuda_driver_11d110(v5, v13, a3);
}

__int64 cuda_driver_abf70(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  int v4;
  int v6;
  int v7;
  char v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  bool v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  char v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v52;
  unsigned int v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  int v60;
  unsigned __int64 v61;
  unsigned int* v62;
  unsigned int v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  struct {
    _QWORD v70[3];
    int v71;
    int v72;
    __int64 v73;
    int v74;
    int v75;
    __int64 v76;
  } v70_;
  __int64 v77;
  struct {
    char gap64_[8];
    __int64 v78;
    __int128 v79;
    __int128 v80;
  } v78_;
  __int64 v81[4];
  __int64 v82[4];
  __int64 v83[4];
  struct {
    __int64 v84[4];
    __int128 v85;
  } v84_;
  _BYTE v86[80];

  v2 = *(_QWORD*)a2;
  v3 = *(_DWORD*)(a1 + 20);
  v4 = *(_DWORD*)(a1 + 24);
  v6 = *(_DWORD*)(a1 + 40);
  v7 = *(_DWORD*)(a1 + 44);
  v70_.v70[1] = *(_QWORD*)a1;
  v8 = *(_BYTE*)(a1 + 52);
  v9 = *(_QWORD*)(a1 + 12);
  v10 = *(_QWORD*)(v2 + 24);
  v11 = *(_DWORD*)(a1 + 8);
  v12 = *(_QWORD*)(a1 + 32);
  v13 = *(_DWORD*)(a1 + 48);
  v70_.v71 = v6;
  v70_.v72 = v4;
  v70_.v76 = 0;
  v77 = 0;
  v70_.v70[0] = __PAIR64__(v11, v13);
  v70_.v70[2] = v9;
  v70_.v73 = v12;
  if ((v8 & 2) != 0) {
    v14 = 2;
  }
  else {
    v14 = 1;
  }
  v70_.v74 = v3;
  v70_.v75 = v14;
  LOBYTE(v70_.v76) = v8 & 1 | (2 * ((v8 & 4) != 0));
  v15 = cuda_driver_helpers_b8490(&v77, v2, (__int64)v70_.v70);
  if (v15 != 0) {
    goto LABEL_5;
  }
  v19 = v77;
  *(_QWORD*)(v77 + 1144) = *(_QWORD*)(v2 + 224);
  *(_QWORD*)(v2 + 224) = v19;
  v20 = *(_QWORD*)(v19 + 1144);
  if (v20 != 0) {
    *(_QWORD*)(v20 + 1136) = v19;
  }
  CudaDriverStub_1a2350(*(_QWORD*)(v2 + 232), *(_QWORD*)(v19 + 8), v19);
  v21 = CudaDriverRoutine_11abf0(v2 + 40, *(_DWORD*)(v77 + 16));
  if (v21 == 0) {
    return 999;
  }
  if (*(_DWORD*)(v21 + 16) != 10) {
    return 200;
  }
  v22 = v77;
  *(_QWORD*)(v21 + 80) = v77;
  v23 = *(_QWORD*)(v22 + 1144);
  if (v23 != 0) {
    v24 = *(_DWORD*)(v23 + 24) + 1;
  }
  else {
    v24 = 1;
  }
  *(_DWORD*)(v22 + 24) = v24;
  v25 = CudaDriverRoutine_e5960(v10);
  v26 = v77;
  if (v25 && *(_DWORD*)(*(_QWORD*)(v77 + 32) + 364LL) == 0) {
    v27 = *(_QWORD*)(v77 + 848) | 0x20000000LL;
    *(_QWORD*)(v77 + 848) = v27;
    v28 = *(_QWORD*)(v2 + 296);
    *(_QWORD*)(v2 + 288) |= v27;
    *(_QWORD*)(v2 + 296) = *(_QWORD*)(v26 + 856) | v28;
  }
  v78_.v78 = v26;
  memset(v86, 0, 64);
  v29 = *(_QWORD*)(v26 + 32);
  v30 = *(_QWORD*)(v29 + 24);
  v84_.v85 = (__typeof__(v84_.v85)){0};
  memset(v84_.v84, 0, sizeof(v84_.v84));
  memset(v83, 0, sizeof(v83));
  memset(v82, 0, sizeof(v82));
  v78_.v79 = (__typeof__(v78_.v79)){0};
  v78_.v80 = (__typeof__(v78_.v80)){0};
  memset(v81, 0, sizeof(v81));
  v31 = *(_QWORD*)(v29 + 80);
  LODWORD(v78_.v79) = v11;
  *((_QWORD*)&v78_.v79 + 1) = v29 + 40;
  *(_QWORD*)&v78_.v80 = v31;
  BYTE8(v78_.v80) = *(_DWORD*)(*(_QWORD*)(v30 + 64) + 11712LL);
  CudaDriverRoutine_12cdf0(v81, 8);
  CudaDriverRoutine_12cdf0(v82, 104);
  CudaDriverRoutine_12cdf0(v83, 4);
  CudaDriverRoutine_12cdf0(v84_.v84, 4);
  *(_DWORD*)(v26 + 616) = 0;
  v32 = *(_QWORD*)(v30 + 64);
  v33 = *(_DWORD*)(v32 + 11712);
  LODWORD(v32) = *(_DWORD*)(v32 + 3776);
  BYTE8(v78_.v80) = v33;
  if ((unsigned int)v32 >= 9) {
    v15 = 999;
  LABEL_5:
    v16 = v15;
    v17 = v77;
  LABEL_6:
    cuda_driver_helpers_b8720(v17);
    return v16;
  }
  *(_QWORD*)&v84_.v85 = v86;
  v34 = CudaDriverRoutine_a42e0(
      v78_.v80, v11, (__int64 (*)(__int64*, __int64))CudaDriverRoutine_af8c0,
      (__int64)&v78_.v78);
  if (v34 != 0) {
    v35 = v34;
    goto LABEL_24;
  }
  if ((*(_BYTE*)(v26 + 979) & 1) != 0) {
    if (*(_DWORD*)(v26 + 444) != 0 && *(_DWORD*)(v26 + 448) != 0 &&
        *(_DWORD*)(v26 + 452) != 0) {
      v42 = 0;
      v43 = 0;
    }
    else {
      v43 = 200;
      v42 = 1;
    }
    if (*(_DWORD*)(v26 + 428) == 0 || *(_DWORD*)(v26 + 432) == 0) {
      v35 = 200;
      goto LABEL_24;
    }
    if (*(_DWORD*)(v26 + 436) != 0) {
      v44 = v43;
    }
    else {
      v42 = 1;
      v44 = 200;
    }
    if ((v42 & 1) != 0) {
      v35 = v44;
      goto LABEL_24;
    }
  }
  if (*((_QWORD*)&v84_.v85 + 1) != 0) {
    v39 = CudaDriverRoutine_12e510(*((__int64*)&v84_.v85 + 1), 40);
    if (v39 == 0) {
      v35 = 2;
      goto LABEL_24;
    }
    v40 = DWORD2(v84_.v85);
    v41 = v39;
  }
  else {
    v40 = 0;
    v41 = 0;
  }
  v69 = v41;
  CudaDriverRoutine_bb8d0(v26, 4, v40, v41);
  v52 = *((_QWORD*)&v84_.v85 + 1);
  if (*((_QWORD*)&v84_.v85 + 1) != 0) {
    v53 = 1;
    v54 = 0;
    do {
      v55 = *(_QWORD*)(v84_.v85 + 8 * v54);
      if (v55 != 0) {
        v56 = *(_QWORD*)(v84_.v85 + 8 * v54);
        v57 = v69 + 40 * v54;
        *(_DWORD*)v57 = 4;
        CudaDriverRoutine_bb7e0(v26, 4, v53 - 1, v56);
        *(_BYTE*)(v57 + 16) = 1;
        v58 = CudaDriverRoutine_bbd00(v26, v55);
        if (v58 != 0) {
          v35 = v58;
          goto LABEL_24;
        }
        v52 = *((_QWORD*)&v84_.v85 + 1);
      }
      v54 = v53++;
    } while (v52 > v54);
  }
  *(_DWORD*)(v26 + 616) = CudaDriverStub_12d100(v82);
  v59 = CudaDriverRoutine_12ced0(v82);
  v60 = *(_DWORD*)(v26 + 616);
  *(_QWORD*)(v26 + 624) = v59;
  if (v60 == 0) {
    goto LABEL_74;
  }
  if (CudaDriverRoutine_985b0(*(_DWORD*)(v29 + 32)) &&
      CudaDriverStub_12d100(v81) != 0) {
    v61 = 0;
    do {
      v62 = (unsigned int*)CudaDriverRoutine_12cff0(v81, v61++);
      *(_QWORD*)(*(_QWORD*)(v26 + 624) + 104LL * *v62 + 16) =
          v69 + 40LL * v62[1];
    } while (v61 < CudaDriverStub_12d100(v81));
  }
  v63 = (*(_DWORD*)(v26 + 632) + 3) & 0xFFFFFFFC;
  v64 = *(_DWORD*)(*(_QWORD*)(v30 + 64) + 3792LL);
  if (CudaDriverRoutine_985b0(*(_DWORD*)(v30 + 188))) {
    v64 += *(_DWORD*)(*(_QWORD*)(v30 + 64) + 3796LL);
  }
  if (v63 > 4 * v64) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Parameters for function %s are larger than what is supported "
                 "by the context (%u > %u)\n",
        *(const char**)(v26 + 8), v63, 4 * v64);
    v35 = 200;
  }
  else {
  LABEL_74:
    if (CudaDriverStub_12d100(v83) != 0) {
      *(_DWORD*)(v26 + 680) = CudaDriverStub_12d100(v83);
      v65 = CudaDriverRoutine_12ced0(v83);
      v66 = *(unsigned int*)(v26 + 680);
      *(_QWORD*)(v26 + 664) = v65;
      qsort_plt(v65, v66, 4, CudaDriverRoutine_b0cc0);
    }
    if (CudaDriverStub_12d100(v84_.v84) != 0) {
      *(_DWORD*)(v26 + 684) = CudaDriverStub_12d100(v84_.v84);
      v67 = CudaDriverRoutine_12ced0(v84_.v84);
      v68 = *(unsigned int*)(v26 + 684);
      *(_QWORD*)(v26 + 672) = v67;
      qsort_plt(v67, v68, 4, CudaDriverRoutine_b0cc0);
    }
    v35 = 0;
  }
LABEL_24:
  CudaDriverRoutine_12cea0(v81);
  CudaDriverRoutine_12cea0(v82);
  CudaDriverRoutine_12cea0(v83);
  CudaDriverRoutine_12cea0(v84_.v84);
  v15 = v35;
  if (v35 != 0) {
    goto LABEL_5;
  }
  cuda_driver_helpers_b8e80(v77, v2, v7);
  v36 = v77;
  v37 = *(_QWORD*)(v77 + 848);
  if (v37 != 0) {
    if ((v37 & 0x80000000000000CLL) != 0) {
      v38 = (v37 >> 1) & 2;
      if ((v37 & 0x800000000000000LL) != 0) {
        v38 = 2;
      }
      *(_QWORD*)(v77 + 848) |=
          v38 & 0xFFFFFFFFFFFFFFFELL | ((*(_QWORD*)(v77 + 848) & 8LL) != 0);
    }
  }
  else if (*(_QWORD*)(v77 + 856) == 0) {
  LABEL_48:
    if (*(_DWORD*)(v36 + 880) == 2) {
      v45 = *(_QWORD*)(v2 + 296);
      *(_QWORD*)(v2 + 288) |= *(_QWORD*)(v36 + 848);
      *(_QWORD*)(v2 + 296) = *(_QWORD*)(v36 + 856) | v45;
    }
    result =
        cuda_driver_b4580(v36, (__int64*)(v36 + 1096), (__int64*)(v36 + 1104));
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_bc490(v77);
      if ((_DWORD)result == 0) {
        v46 = v77;
        if ((*(_BYTE*)(v2 + 380) & 1) != 0 ||
            (_DWORD)(result = CudaDriverRoutine_ad8a0(v10, v2, v77)) == 0 &&
                (CudaDriverRoutine_b9310(v10) ||
                 (_DWORD)(result = CudaDriverRoutine_adbc0(v10, v2, v46)) ==
                     0) &&
                (_DWORD)(result = CudaDriverRoutine_add60(v46)) == 0) {
          *(_BYTE*)(a2 + 8) |= (*(_WORD*)(v46 + 977) & 0x800) != 0;
          *(_BYTE*)(a2 + 9) &= *(_BYTE*)(v46 + 384) == 0;
          return 0;
        }
        if (v46 != 0) {
          v16 = result;
          v17 = v46;
          goto LABEL_6;
        }
      }
    }
    return result;
  }
  CudaDriverRoutine_92980((_QWORD*)v36);
  v36 = v77;
  goto LABEL_48;
}

__int64 cuda_driver_ac5e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  int v4;
  int v6;
  int v7;
  char v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  bool v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  char v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v50;
  unsigned int v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  int v58;
  unsigned __int64 v59;
  unsigned int* v60;
  unsigned int v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  struct {
    _QWORD v68[3];
    int v69;
    int v70;
    __int64 v71;
    int v72;
    int v73;
    __int64 v74;
  } v68_;
  __int64 v75;
  struct {
    char gap64_[8];
    __int64 v76;
    __int128 v77;
    __int128 v78;
  } v76_;
  __int64 v79[4];
  __int64 v80[4];
  __int64 v81[4];
  struct {
    __int64 v82[4];
    __int128 v83;
  } v82_;
  _BYTE v84[80];

  v2 = *(_QWORD*)a2;
  v3 = *(_DWORD*)(a1 + 20);
  v4 = *(_DWORD*)(a1 + 24);
  v6 = *(_DWORD*)(a1 + 40);
  v7 = *(_DWORD*)(a1 + 44);
  v68_.v68[1] = *(_QWORD*)a1;
  v8 = *(_BYTE*)(a1 + 52);
  v9 = *(_QWORD*)(a1 + 12);
  v10 = *(_QWORD*)(v2 + 24);
  v11 = *(_DWORD*)(a1 + 8);
  v12 = *(_QWORD*)(a1 + 32);
  v13 = *(_DWORD*)(a1 + 48);
  v68_.v69 = v6;
  v68_.v70 = v4;
  v68_.v74 = 0;
  v75 = 0;
  v68_.v68[0] = __PAIR64__(v11, v13);
  v68_.v68[2] = v9;
  v68_.v71 = v12;
  if ((v8 & 2) != 0) {
    v14 = 2;
  }
  else {
    v14 = 1;
  }
  v68_.v72 = v3;
  v68_.v73 = v14;
  LOBYTE(v68_.v74) = v8 & 1 | (2 * ((v8 & 4) != 0));
  v15 = cuda_driver_helpers_b8490(&v75, v2, (__int64)v68_.v68);
  if (v15 != 0) {
    goto LABEL_5;
  }
  v19 = v75;
  *(_QWORD*)(v75 + 1144) = *(_QWORD*)(v2 + 224);
  *(_QWORD*)(v2 + 224) = v19;
  v20 = *(_QWORD*)(v19 + 1144);
  if (v20 != 0) {
    *(_QWORD*)(v20 + 1136) = v19;
  }
  CudaDriverStub_1a2350(*(_QWORD*)(v2 + 232), *(_QWORD*)(v19 + 8), v19);
  v21 = CudaDriverRoutine_11abf0(v2 + 40, *(_DWORD*)(v75 + 16));
  if (v21 == 0) {
    return 999;
  }
  if (*(_DWORD*)(v21 + 16) != 10) {
    return 200;
  }
  v22 = v75;
  *(_QWORD*)(v21 + 80) = v75;
  v23 = *(_QWORD*)(v22 + 1144);
  if (v23 != 0) {
    v24 = *(_DWORD*)(v23 + 24) + 1;
  }
  else {
    v24 = 1;
  }
  *(_DWORD*)(v22 + 24) = v24;
  v25 = CudaDriverRoutine_e5960(v10);
  v26 = v75;
  if (v25 && *(_DWORD*)(*(_QWORD*)(v75 + 32) + 364LL) == 0) {
    v27 = *(_QWORD*)(v75 + 848) | 0x20000000LL;
    *(_QWORD*)(v75 + 848) = v27;
    v28 = *(_QWORD*)(v2 + 296);
    *(_QWORD*)(v2 + 288) |= v27;
    *(_QWORD*)(v2 + 296) = *(_QWORD*)(v26 + 856) | v28;
  }
  v76_.v76 = v26;
  memset(v84, 0, 64);
  v29 = *(_QWORD*)(v26 + 32);
  v30 = *(_QWORD*)(v29 + 24);
  v82_.v83 = (__typeof__(v82_.v83)){0};
  memset(v82_.v82, 0, sizeof(v82_.v82));
  memset(v81, 0, sizeof(v81));
  memset(v80, 0, sizeof(v80));
  v76_.v77 = (__typeof__(v76_.v77)){0};
  v76_.v78 = (__typeof__(v76_.v78)){0};
  memset(v79, 0, sizeof(v79));
  v31 = *(_QWORD*)(v29 + 80);
  LODWORD(v76_.v77) = v11;
  *((_QWORD*)&v76_.v77 + 1) = v29 + 40;
  *(_QWORD*)&v76_.v78 = v31;
  BYTE8(v76_.v78) = *(_DWORD*)(*(_QWORD*)(v30 + 64) + 11712LL);
  CudaDriverRoutine_12cdf0(v79, 8);
  CudaDriverRoutine_12cdf0(v80, 104);
  CudaDriverRoutine_12cdf0(v81, 4);
  CudaDriverRoutine_12cdf0(v82_.v82, 4);
  *(_DWORD*)(v26 + 616) = 0;
  v32 = *(_QWORD*)(v30 + 64);
  v33 = *(_DWORD*)(v32 + 11712);
  LODWORD(v32) = *(_DWORD*)(v32 + 3776);
  BYTE8(v76_.v78) = v33;
  if ((unsigned int)v32 >= 9) {
    v15 = 999;
  LABEL_5:
    v16 = v15;
    v17 = v75;
  LABEL_6:
    cuda_driver_helpers_b8720(v17);
    return v16;
  }
  *(_QWORD*)&v82_.v83 = v84;
  v34 = CudaDriverRoutine_a86e0(
      v76_.v78, v11, (__int64 (*)(__int64*, __int64))CudaDriverRoutine_b02c0,
      (__int64)&v76_.v76);
  if (v34 != 0) {
    v35 = v34;
    goto LABEL_24;
  }
  if ((*(_BYTE*)(v26 + 979) & 1) != 0) {
    if (*(_DWORD*)(v26 + 444) != 0 && *(_DWORD*)(v26 + 448) != 0 &&
        *(_DWORD*)(v26 + 452) != 0) {
      v42 = 0;
      v43 = 0;
    }
    else {
      v43 = 200;
      v42 = 1;
    }
    if (*(_DWORD*)(v26 + 428) == 0 || *(_DWORD*)(v26 + 432) == 0) {
      v35 = 200;
      goto LABEL_24;
    }
    if (*(_DWORD*)(v26 + 436) != 0) {
      v44 = v43;
    }
    else {
      v42 = 1;
      v44 = 200;
    }
    if ((v42 & 1) != 0) {
      v35 = v44;
      goto LABEL_24;
    }
  }
  if (*((_QWORD*)&v82_.v83 + 1) != 0) {
    v39 = CudaDriverRoutine_12e510(*((__int64*)&v82_.v83 + 1), 40);
    if (v39 == 0) {
      v35 = 2;
      goto LABEL_24;
    }
    v40 = DWORD2(v82_.v83);
    v41 = v39;
  }
  else {
    v40 = 0;
    v41 = 0;
  }
  v67 = v41;
  CudaDriverRoutine_bb8d0(v26, 4, v40, v41);
  v50 = *((_QWORD*)&v82_.v83 + 1);
  if (*((_QWORD*)&v82_.v83 + 1) != 0) {
    v51 = 1;
    v52 = 0;
    do {
      v53 = *(_QWORD*)(v82_.v83 + 8 * v52);
      if (v53 != 0) {
        v54 = *(_QWORD*)(v82_.v83 + 8 * v52);
        v55 = v67 + 40 * v52;
        *(_DWORD*)v55 = 4;
        CudaDriverRoutine_bb7e0(v26, 4, v51 - 1, v54);
        *(_BYTE*)(v55 + 16) = 1;
        v56 = CudaDriverRoutine_bbd00(v26, v53);
        if (v56 != 0) {
          v35 = v56;
          goto LABEL_24;
        }
        v50 = *((_QWORD*)&v82_.v83 + 1);
      }
      v52 = v51++;
    } while (v50 > v52);
  }
  *(_DWORD*)(v26 + 616) = CudaDriverStub_12d100(v80);
  v57 = CudaDriverRoutine_12ced0(v80);
  v58 = *(_DWORD*)(v26 + 616);
  *(_QWORD*)(v26 + 624) = v57;
  if (v58 == 0) {
    goto LABEL_74;
  }
  if (CudaDriverRoutine_985b0(*(_DWORD*)(v29 + 32)) &&
      CudaDriverStub_12d100(v79) != 0) {
    v59 = 0;
    do {
      v60 = (unsigned int*)CudaDriverRoutine_12cff0(v79, v59++);
      *(_QWORD*)(*(_QWORD*)(v26 + 624) + 104LL * *v60 + 16) =
          v67 + 40LL * v60[1];
    } while (v59 < CudaDriverStub_12d100(v79));
  }
  v61 = (*(_DWORD*)(v26 + 632) + 3) & 0xFFFFFFFC;
  v62 = *(_DWORD*)(*(_QWORD*)(v30 + 64) + 3792LL);
  if (CudaDriverRoutine_985b0(*(_DWORD*)(v30 + 188))) {
    v62 += *(_DWORD*)(*(_QWORD*)(v30 + 64) + 3796LL);
  }
  if (v61 > 4 * v62) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Parameters for function %s are larger than what is supported "
                 "by the context (%u > %u)\n",
        *(const char**)(v26 + 8), v61, 4 * v62);
    v35 = 200;
  }
  else {
  LABEL_74:
    if (CudaDriverStub_12d100(v81) != 0) {
      *(_DWORD*)(v26 + 680) = CudaDriverStub_12d100(v81);
      v63 = CudaDriverRoutine_12ced0(v81);
      v64 = *(unsigned int*)(v26 + 680);
      *(_QWORD*)(v26 + 664) = v63;
      qsort_plt(v63, v64, 4, CudaDriverRoutine_b0cd0);
    }
    if (CudaDriverStub_12d100(v82_.v82) != 0) {
      *(_DWORD*)(v26 + 684) = CudaDriverStub_12d100(v82_.v82);
      v65 = CudaDriverRoutine_12ced0(v82_.v82);
      v66 = *(unsigned int*)(v26 + 684);
      *(_QWORD*)(v26 + 672) = v65;
      qsort_plt(v65, v66, 4, CudaDriverRoutine_b0cd0);
    }
    v35 = 0;
  }
LABEL_24:
  CudaDriverRoutine_12cea0(v79);
  CudaDriverRoutine_12cea0(v80);
  CudaDriverRoutine_12cea0(v81);
  CudaDriverRoutine_12cea0(v82_.v82);
  v15 = v35;
  if (v35 != 0) {
    goto LABEL_5;
  }
  cuda_driver_helpers_b8e80(v75, v2, v7);
  v36 = v75;
  v37 = *(_QWORD*)(v75 + 848);
  if (v37 != 0) {
    if ((v37 & 0x80000000000000CLL) != 0) {
      v38 = (v37 >> 1) & 2;
      if ((v37 & 0x800000000000000LL) != 0) {
        v38 = 2;
      }
      *(_QWORD*)(v75 + 848) |=
          v38 & 0xFFFFFFFFFFFFFFFELL | ((*(_QWORD*)(v75 + 848) & 8LL) != 0);
    }
  }
  else if (*(_QWORD*)(v75 + 856) == 0) {
  LABEL_48:
    if (*(_DWORD*)(v36 + 880) == 2) {
      v45 = *(_QWORD*)(v2 + 296);
      *(_QWORD*)(v2 + 288) |= *(_QWORD*)(v36 + 848);
      *(_QWORD*)(v2 + 296) = *(_QWORD*)(v36 + 856) | v45;
    }
    result =
        cuda_driver_b4580(v36, (__int64*)(v36 + 1096), (__int64*)(v36 + 1104));
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_bc490(v75);
      if ((_DWORD)result == 0) {
        v46 = v75;
        if ((*(_BYTE*)(v2 + 380) & 1) != 0 ||
            (_DWORD)(result = CudaDriverRoutine_ada30(v10, v2, v75)) == 0 &&
                (CudaDriverRoutine_b9310(v10) ||
                 (_DWORD)(result = CudaDriverRoutine_adc90(v10, v2, v46)) ==
                     0) &&
                (_DWORD)(result = cuda_driver_adf50_alt1(v46)) == 0) {
          *(_BYTE*)(a2 + 8) |= (*(_WORD*)(v46 + 977) & 0x800) != 0;
          *(_BYTE*)(a2 + 9) &= *(_BYTE*)(v46 + 384) == 0;
          return 0;
        }
        if (v46 != 0) {
          v16 = result;
          v17 = v46;
          goto LABEL_6;
        }
      }
    }
    return result;
  }
  CudaDriverRoutine_92980((_QWORD*)v36);
  v36 = v75;
  goto LABEL_48;
}

__int64 cuda_driver_unplaced_4_acd90(_QWORD* a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;

  if (a2 == 0) {
    return 0;
  }
  v2 = a1[3];
  v8 = 0;
  v3 = CudaDriverRoutine_1074e0(a1, a2, nullptr, (__int64*)&v8);
  v4 = v3;
  v5 = *(unsigned int*)(*(_QWORD*)(v2 + 64) + 11740LL);
  v6 = v8 - v5;
  if (v8 >= v5) {
    v8 -= v5;
    if (v6 > 0x800) {
      return 999;
    }
    v4 = v3 + v5;
  }
  else {
    v6 = 0;
    v8 = 0;
  }
  memcpy_plt(v2 + 13800, v4, v6);
  return 0;
}

__int64 cuda_driver_unplaced_4_ace20(_QWORD* a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;

  if (a2 == 0) {
    return 0;
  }
  v2 = a1[3];
  v8 = 0;
  v3 = CudaDriverRoutine_1074e0(a1, a2, nullptr, (__int64*)&v8);
  v4 = v3;
  v5 = *(unsigned int*)(*(_QWORD*)(v2 + 64) + 11740LL);
  v6 = v8 - v5;
  if (v8 >= v5) {
    v8 -= v5;
    if (v6 > 0x800) {
      return 999;
    }
    v4 = v3 + v5;
  }
  else {
    v6 = 0;
    v8 = 0;
  }
  memcpy_plt(v2 + 13800, v4, v6);
  return 0;
}

__int64 cuda_driver_ad100(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v7;
  __int64 result;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  void* v44;
  __int64 v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52[4];
  __int64 v53;

  v4 = *(_QWORD*)(a1 + 80);
  v5 = *(_QWORD*)(a1 + 24);
  v53 = 0;
  v7 = CudaDriverRoutine_a36a0(v4, a2, a3, a4);
  LODWORD(v52[0]) = 0;
  v52[1] = v5;
  v52[2] = a1;
  if (v7 != 0) {
    v52[3] = CudaDriverRoutine_1074e0((_QWORD*)a1, v7, nullptr, nullptr);
  }
  CudaDriverRoutine_11af80(a1 + 40, (__int64)cuda_driver_b2180, (__int64)v52);
  result = LODWORD(v52[0]);
  if (LODWORD(v52[0]) != 0) {
    return result;
  }
  if ((*(_BYTE*)(v4 + 232) & 0x20) == 0) {
    v12 = CudaDriverRoutine_a3640(v4);
    if (v12 != 0) {
      v13 = *(_QWORD*)(a1 + 104);
      if (v13 == 0) {
        return 200;
      }
      v14 = *(_QWORD*)(a1 + 24);
      v52[0] = 0;
      v15 = CudaDriverRoutine_1074e0((_QWORD*)a1, v12, nullptr, v52);
      if (v15 == 0) {
        return 999;
      }
      v16 = v15;
      CudaDriverStub_1dbf90(v13);
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                     (_QWORD)CudaDriverData_1422118) == 2) {
        v17 = 8;
      }
      else {
        v17 = 0;
      }
      result = CudaDriverRoutine_f60f0(v14, v13, 0, v16, v52[0],
                                       *(_QWORD*)(v14 + 96), 2u, 0, v17);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
  }
  v18 = CudaDriverRoutine_a3280(v4);
  if (v18 != 0) {
    v22 = *(_QWORD*)(a1 + 112);
    if (v22 == 0) {
      return 200;
    }
    v23 = *(_QWORD*)(a1 + 24);
    v52[0] = 0;
    v24 = CudaDriverRoutine_1074e0((_QWORD*)a1, v18, nullptr, v52);
    if (v24 == 0) {
      return 999;
    }
    v25 = v24;
    CudaDriverStub_1dbf90(v22);
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                   (_QWORD)CudaDriverData_1422118) == 2) {
      v26 = 8;
    }
    else {
      v26 = 0;
    }
    result = CudaDriverRoutine_f60f0(v23, v22, 0, v25, v52[0],
                                     *(_QWORD*)(v23 + 96), 2u, 0, v26);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  v27 = CudaDriverRoutine_a3350(v4);
  if (v27 != 0) {
    v31 = *(_QWORD*)(a1 + 144);
    if (v31 == 0) {
      return 200;
    }
    v32 = *(_QWORD*)(a1 + 24);
    v52[0] = 0;
    v33 = CudaDriverRoutine_1074e0((_QWORD*)a1, v27, nullptr, v52);
    if (v33 == 0) {
      return 999;
    }
    v34 = v33;
    CudaDriverStub_1dbf90(v31);
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                   (_QWORD)CudaDriverData_1422118) == 2) {
      v35 = 8;
    }
    else {
      v35 = 0;
    }
    result = CudaDriverRoutine_f60f0(v32, v31, 0, v34, v52[0],
                                     *(_QWORD*)(v32 + 96), 2u, 0, v35);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  v36 = CudaDriverRoutine_a3420(v4);
  if (v36 != 0) {
    v38 = *(_QWORD*)(a1 + 160);
    if (v38 != 0) {
      v39 = *(_QWORD*)(a1 + 24);
      v52[0] = 0;
      v40 = CudaDriverRoutine_1074e0((_QWORD*)a1, v36, nullptr, v52);
      if (v40 != 0) {
        v41 = v40;
        CudaDriverStub_1dbf90(v38);
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                       (_QWORD)CudaDriverData_1422118) == 2) {
          v42 = 8;
        }
        else {
          v42 = 0;
        }
        result = CudaDriverRoutine_f60f0(v39, v38, 0, v41, v52[0],
                                         *(_QWORD*)(v39 + 96), 2u, 0, v42);
        if ((_DWORD)result != 0) {
          return result;
        }
        goto LABEL_34;
      }
      return 999;
    }
    return 200;
  }
LABEL_34:
  if ((*(_BYTE*)(a1 + 380) & 1) == 0) {
    v43 = *(_QWORD*)(a1 + 224);
    if (v43 != 0) {
      v44 = CudaDriverData_1422118;
      do {
        v45 = *(unsigned int*)(*(_QWORD*)(v5 + 64) + 11704LL);
        v46 = CudaDriverRoutine_a3190(v4, (unsigned int)v45,
                                      *(unsigned int*)(v43 + 1004));
        if (v46 != 0) {
          v47 = *(_QWORD*)(v43 + 8 * v45 + 168);
          if (v47 == 0) {
            return 200;
          }
          v48 = *(_QWORD*)(a1 + 24);
          v52[0] = 0;
          v49 = CudaDriverRoutine_1074e0((_QWORD*)a1, v46, nullptr, v52);
          if (v49 == 0) {
            return 999;
          }
          v50 = v49;
          CudaDriverStub_1dbf90(v47);
          if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v44) == 2) {
            v51 = 8;
          }
          else {
            v51 = 0;
          }
          result = CudaDriverRoutine_f60f0(v48, v47, 0, v50, v52[0],
                                           *(_QWORD*)(v48 + 96), 2u, 0, v51);
          if ((_DWORD)result != 0) {
            return result;
          }
        }
        v43 = *(_QWORD*)(v43 + 1144);
      } while (v43 != 0);
    }
  }
  if (*(_BYTE*)(v5 + 16376) == 0) {
    CudaDriverRoutine_205fa0(0, *(_QWORD*)(v5 + 96), (__int64)&v53, nullptr);
    v53 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(v5 + 64) + 18992LL))(
        v53, 2);
    CudaDriverRoutine_206060(*(_QWORD*)(v5 + 96), v53);
  }
  return 0;
}

__int64 cuda_driver_ad4d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v7;
  __int64 result;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  void* v44;
  __int64 v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52[4];
  __int64 v53;

  v4 = *(_QWORD*)(a1 + 80);
  v5 = *(_QWORD*)(a1 + 24);
  v53 = 0;
  v7 = CudaDriverRoutine_a7d80(v4, a2, a3, a4);
  LODWORD(v52[0]) = 0;
  v52[1] = v5;
  v52[2] = a1;
  if (v7 != 0) {
    v52[3] = CudaDriverRoutine_1074e0((_QWORD*)a1, v7, nullptr, nullptr);
  }
  CudaDriverRoutine_11af80(a1 + 40, (__int64)cuda_driver_b2290, (__int64)v52);
  result = LODWORD(v52[0]);
  if (LODWORD(v52[0]) != 0) {
    return result;
  }
  if ((*(_BYTE*)(v4 + 232) & 0x20) == 0) {
    v12 = CudaDriverRoutine_a7c00(v4);
    if (v12 != 0) {
      v13 = *(_QWORD*)(a1 + 104);
      if (v13 == 0) {
        return 200;
      }
      v14 = *(_QWORD*)(a1 + 24);
      v52[0] = 0;
      v15 = CudaDriverRoutine_1074e0((_QWORD*)a1, v12, nullptr, v52);
      if (v15 == 0) {
        return 999;
      }
      v16 = v15;
      CudaDriverStub_1dbf90(v13);
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                     (_QWORD)CudaDriverData_1422118) == 2) {
        v17 = 8;
      }
      else {
        v17 = 0;
      }
      result = CudaDriverRoutine_f60f0(v14, v13, 0, v16, v52[0],
                                       *(_QWORD*)(v14 + 96), 2u, 0, v17);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
  }
  v18 = CudaDriverRoutine_a7c60(v4);
  if (v18 != 0) {
    v22 = *(_QWORD*)(a1 + 112);
    if (v22 == 0) {
      return 200;
    }
    v23 = *(_QWORD*)(a1 + 24);
    v52[0] = 0;
    v24 = CudaDriverRoutine_1074e0((_QWORD*)a1, v18, nullptr, v52);
    if (v24 == 0) {
      return 999;
    }
    v25 = v24;
    CudaDriverStub_1dbf90(v22);
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                   (_QWORD)CudaDriverData_1422118) == 2) {
      v26 = 8;
    }
    else {
      v26 = 0;
    }
    result = CudaDriverRoutine_f60f0(v23, v22, 0, v25, v52[0],
                                     *(_QWORD*)(v23 + 96), 2u, 0, v26);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  v27 = CudaDriverRoutine_a7cc0(v4);
  if (v27 != 0) {
    v31 = *(_QWORD*)(a1 + 144);
    if (v31 == 0) {
      return 200;
    }
    v32 = *(_QWORD*)(a1 + 24);
    v52[0] = 0;
    v33 = CudaDriverRoutine_1074e0((_QWORD*)a1, v27, nullptr, v52);
    if (v33 == 0) {
      return 999;
    }
    v34 = v33;
    CudaDriverStub_1dbf90(v31);
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                   (_QWORD)CudaDriverData_1422118) == 2) {
      v35 = 8;
    }
    else {
      v35 = 0;
    }
    result = CudaDriverRoutine_f60f0(v32, v31, 0, v34, v52[0],
                                     *(_QWORD*)(v32 + 96), 2u, 0, v35);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  v36 = CudaDriverRoutine_a7d20(v4);
  if (v36 != 0) {
    v38 = *(_QWORD*)(a1 + 160);
    if (v38 != 0) {
      v39 = *(_QWORD*)(a1 + 24);
      v52[0] = 0;
      v40 = CudaDriverRoutine_1074e0((_QWORD*)a1, v36, nullptr, v52);
      if (v40 != 0) {
        v41 = v40;
        CudaDriverStub_1dbf90(v38);
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                       (_QWORD)CudaDriverData_1422118) == 2) {
          v42 = 8;
        }
        else {
          v42 = 0;
        }
        result = CudaDriverRoutine_f60f0(v39, v38, 0, v41, v52[0],
                                         *(_QWORD*)(v39 + 96), 2u, 0, v42);
        if ((_DWORD)result != 0) {
          return result;
        }
        goto LABEL_34;
      }
      return 999;
    }
    return 200;
  }
LABEL_34:
  if ((*(_BYTE*)(a1 + 380) & 1) == 0) {
    v43 = *(_QWORD*)(a1 + 224);
    if (v43 != 0) {
      v44 = CudaDriverData_1422118;
      do {
        v45 = *(unsigned int*)(*(_QWORD*)(v5 + 64) + 11704LL);
        v46 = CudaDriverRoutine_a79c0(v4, (unsigned int)v45,
                                      *(unsigned int*)(v43 + 1004));
        if (v46 != 0) {
          v47 = *(_QWORD*)(v43 + 8 * v45 + 168);
          if (v47 == 0) {
            return 200;
          }
          v48 = *(_QWORD*)(a1 + 24);
          v52[0] = 0;
          v49 = CudaDriverRoutine_1074e0((_QWORD*)a1, v46, nullptr, v52);
          if (v49 == 0) {
            return 999;
          }
          v50 = v49;
          CudaDriverStub_1dbf90(v47);
          if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v44) == 2) {
            v51 = 8;
          }
          else {
            v51 = 0;
          }
          result = CudaDriverRoutine_f60f0(v48, v47, 0, v50, v52[0],
                                           *(_QWORD*)(v48 + 96), 2u, 0, v51);
          if ((_DWORD)result != 0) {
            return result;
          }
        }
        v43 = *(_QWORD*)(v43 + 1144);
      } while (v43 != 0);
    }
  }
  if (*(_BYTE*)(v5 + 16376) == 0) {
    CudaDriverRoutine_205fa0(0, *(_QWORD*)(v5 + 96), (__int64)&v53, nullptr);
    v53 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(v5 + 64) + 18992LL))(
        v53, 2);
    CudaDriverRoutine_206060(*(_QWORD*)(v5 + 96), v53);
  }
  return 0;
}

__int64 cuda_driver_adf50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v4 = *(_QWORD*)(a1 + 32);
  v6 = *(_QWORD*)(v4 + 24);
  v7 = *(_QWORD*)(v4 + 80);
  v8 = CudaDriverRoutine_a79c0_alt1(
      v7, *(unsigned int*)(*(_QWORD*)(v6 + 64) + 11708LL),
      *(unsigned int*)(a1 + 1004), a4),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v8 != 0) {
    v10 = CudaDriverRoutine_a7e90(v7, v8, nullptr),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v12 = CudaDriverRoutine_a79c0_alt1(
        v7, *(unsigned int*)(*(_QWORD*)(v6 + 64) + 11704LL),
        *(unsigned int*)(a1 + 1004), v11),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v12 == 0) {
      goto LABEL_7;
    }
  LABEL_5:
    v13 = CudaDriverRoutine_a7e90(v7, v12, nullptr),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v13 != 0) {
      result = cuda_driver_helpers_b8f70(
          a1, v13, *(_DWORD*)(*(_QWORD*)(v6 + 64) + 11704LL)),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    goto LABEL_7;
  }
  v10 = 0;
  v12 = CudaDriverRoutine_a79c0_alt1(
      v7, *(unsigned int*)(*(_QWORD*)(v6 + 64) + 11704LL),
      *(unsigned int*)(a1 + 1004), v9),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v12 != 0) {
    goto LABEL_5;
  }
LABEL_7:
  if (v10 != 0) {
    v15 = *(_QWORD*)(v6 + 64);
    v16 = *(_DWORD*)(v15 + 3792);
    v17 = *(_DWORD*)(v15 + 3796);
    v18 = (*(__int64 (**)(__int64, __int64))(v15 + 19392))(v6, a1),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v19 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(v6 + 64) + 19392LL))(
        v6, a1),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v20 = *(_DWORD*)(a1 + 236);
    v21 = *(_DWORD*)(a1 + 240);
    if (v20 != 0 && v21 != 0 && v19 != v20) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Function %s needs large kernel parameters which is "
                   "supported on CUDA 12.1+ drivers. Please use an updated "
                   "driver.\n",
          *(const char**)(a1 + 8)),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      return 801;
    }
    v22 = v18 + 4 * (v17 + v16);
    if (v21 + v20 > v22) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Function %s exceeds maximum allowed "
                                       "parameters size: %d > %d\n",
                              *(const char**)(a1 + 8), v21 + v20, v22),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      return 801;
    }
    *(_DWORD*)(a1 + 232) = v10;
    *(_DWORD*)(a1 +
               244) = (*(__int64 (**)(void*))(*(_QWORD*)(v6 + 64) +
                                              19400LL))(*(void**)(v6 + 64)),
               v11 = COERCE_AS(__typeof__(v11),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
               v9 = COERCE_AS(__typeof__(v9),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  if (*(_DWORD*)(a1 + 232) != 0 || (*(_WORD*)(a1 + 977) & 1) == 0) {
    return 0;
  }
  *(_DWORD*)(a1 + 232) = 16;
  return 0;
}

__int64 cuda_driver_ae710(_QWORD* a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v9;

  if (a2 == 0) {
    return 0;
  }
  if (a3 == 0) {
    return 200;
  }
  v4 = a1[3];
  v9 = 0;
  v5 = CudaDriverRoutine_1074e0(a1, a2, nullptr, &v9);
  if (v5 == 0) {
    return 999;
  }
  v6 = v5;
  CudaDriverStub_1dbf90(a3);
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) == 2) {
    v7 = 8;
  }
  else {
    v7 = 0;
  }
  return CudaDriverRoutine_f60f0(v4, a3, 0, v6, v9, *(_QWORD*)(v4 + 96), 2u, 0,
                                 v7);
}

#pragma GCC visibility pop
