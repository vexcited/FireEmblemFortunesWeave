#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_1a2c40();
_QWORD* CudaDriverRoutine_d39b0(_QWORD* result, _QWORD*);
_QWORD* cuda_driver_checks_1024a0(__int64, unsigned __int64, unsigned __int64,
                                  __int64);
_QWORD* cuda_driver_checks_102b80(__int64, unsigned __int64);
__int64* CudaDriverRoutine_203100(__int64* result);
__int64 CudaDriverRoutine_103e40(__int64, __int64, __int64*, __int64, char,
                                 __int64*);
__int64 CudaDriverRoutine_107f40(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_107f60(_QWORD*);
__int64 CudaDriverRoutine_108490(_QWORD*);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_108900(__int64 result, unsigned __int64,
                                 unsigned __int64);
__int64 CudaDriverRoutine_10c880();
__int64 CudaDriverRoutine_10c940(int);
__int64 CudaDriverRoutine_10cda0();
__int64 CudaDriverRoutine_114270(unsigned int);
__int64 CudaDriverRoutine_116e20(__int64);
__int64 CudaDriverRoutine_116fa0(__int64);
__int64 CudaDriverRoutine_117620(__int64, __int64);
__int64 CudaDriverRoutine_117740(__int64, unsigned __int8*);
__int64 CudaDriverRoutine_1177d0(unsigned int);
__int64 CudaDriverRoutine_120770(__int64, __int64, __int64, __int64, __int64,
                                 __int64);
__int64 CudaDriverRoutine_1212d0();
__int64 CudaDriverRoutine_121b30(__int64 result, char);
__int64 CudaDriverRoutine_121c60(__int64*);
__int64 CudaDriverRoutine_1243c0();
__int64 CudaDriverRoutine_125470(__int64 result);
__int64 CudaDriverRoutine_1297a0(__int64, _QWORD*);
__int64 CudaDriverRoutine_129da0(unsigned __int64*);
__int64 CudaDriverRoutine_12b0c0();
__int64 CudaDriverRoutine_12cff0(_QWORD*, __int64);
__int64 CudaDriverRoutine_12de40(unsigned int*);
__int64 CudaDriverRoutine_12df40(_DWORD*, void (*)(void));
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_12f4c0();
__int64 CudaDriverRoutine_12f540();
__int64 CudaDriverRoutine_1a2300(__int64);
__int64 CudaDriverRoutine_1a2560(int*, unsigned __int64, __int64);
__int64 CudaDriverRoutine_1a2800(__int64 result,
                                 __int64 (*)(_QWORD, _QWORD, __int64), __int64);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64);
__int64 CudaDriverRoutine_1a2c70(__int64);
__int64 CudaDriverRoutine_1a3f00(__int64*, __int64, __int64, __int64, char);
__int64 CudaDriverRoutine_1ba480(_QWORD*, __int64);
__int64 CudaDriverRoutine_1ba4f0(__int64 result, __int64);
__int64 CudaDriverRoutine_1ba520(__int64 result);
__int64 CudaDriverRoutine_1ba580(__int64);
__int64 CudaDriverRoutine_1ba5d0(__int64, __int64, unsigned int,
                                 unsigned __int64);
__int64 CudaDriverRoutine_1ba7d0(__int64, __int64);
__int64 CudaDriverRoutine_1baa40(_QWORD*, __int64);
__int64 CudaDriverRoutine_1bbd70(__int64);
__int64 CudaDriverRoutine_1d9f90(_QWORD);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverRoutine_1dbac0(__int64);
__int64 CudaDriverRoutine_1dbb80(__int64 result, __int64);
__int64 CudaDriverRoutine_1dbf60(__int64, unsigned __int64, char);
__int64 CudaDriverRoutine_1dbfd0(__int64);
__int64 CudaDriverRoutine_1dc000(__int64);
__int64 CudaDriverRoutine_1dc020(__int64);
__int64 CudaDriverRoutine_1dc050(_QWORD*);
__int64 CudaDriverRoutine_1dc160(__int64, __int64);
__int64 CudaDriverRoutine_1dc200(__int64);
__int64 CudaDriverRoutine_1dc340(_QWORD*, _QWORD*);
__int64 CudaDriverRoutine_1dd1f0(__int64);
__int64 CudaDriverRoutine_1ff9c0(__int64, int, __int64*);
__int64 CudaDriverRoutine_1fff00(__int64, __int64, __int64);
__int64 CudaDriverRoutine_1fff70(__int64 result, __int64, __int64, __int64);
__int64 CudaDriverRoutine_202e80(__int64);
__int64 CudaDriverRoutine_205510(__int64*, __int64);
__int64 CudaDriverRoutine_2056d0(__int64 result);
__int64 CudaDriverRoutine_205ee0(int, __int64, __int64, _QWORD*, int);
__int64 CudaDriverRoutine_2060c0(__int64, __int64, __int16);
__int64 CudaDriverRoutine_2075f0(__int64);
__int64 CudaDriverRoutine_207630(__int64, int, __int64, __int64);
__int64 CudaDriverRoutine_207710(__int64, int, __int64);
__int64 CudaDriverRoutine_5ab70(__int64 result, char);
__int64 CudaDriverRoutine_5ae20(__int64 result, __int64*, __int64, char);
__int64 CudaDriverRoutine_5b640(_DWORD*, __int64, unsigned int, char, char,
                                char, char, __int64*);
__int64 CudaDriverRoutine_5b9f0(__int64 result, __int64);
__int64 CudaDriverRoutine_5bad0(__int64, __int64, __int64*, __int64, __int64);
__int64 CudaDriverRoutine_5d530(__int64);
__int64 CudaDriverRoutine_5e700(__int64 result, __int64);
__int64 CudaDriverRoutine_5e740(__int64 result, __int64);
__int64 CudaDriverRoutine_7f8f0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_8b180(__int64 result, int, int, unsigned __int64);
__int64 CudaDriverRoutine_8bab0(__int64, __int64, int);
__int64 CudaDriverRoutine_8dcd0(__int64, _QWORD*);
__int64 CudaDriverRoutine_968c0(__int64 result, __int64*, unsigned int,
                                __int64*);
__int64 CudaDriverRoutine_98190(__int64, unsigned int);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_985c0(__int64 result);
__int64 CudaDriverRoutine_98850(__int64);
__int64 CudaDriverRoutine_98870(__int64 result);
__int64 CudaDriverRoutine_99830(__int64, unsigned int);
__int64 CudaDriverRoutine_99f40(__int64, _DWORD*, int);
__int64 CudaDriverRoutine_9b5e0(__int64, signed int);
__int64 CudaDriverRoutine_9bfe0(__int64);
__int64 CudaDriverRoutine_9e520(__int64, __int64, __int64, _DWORD*);
__int64 CudaDriverRoutine_ba240(__int64, __int64, unsigned int, __int64);
__int64 CudaDriverRoutine_ba7e0(__int64, __int64);
__int64 CudaDriverRoutine_baa00(__int64, _QWORD*, __int64);
__int64 CudaDriverRoutine_baf20(int);
__int64 CudaDriverRoutine_baff0(int);
__int64 CudaDriverRoutine_bb030(unsigned int);
__int64 CudaDriverRoutine_bb080(unsigned int, bool*);
__int64 CudaDriverRoutine_bc970(__int64, __int64, __int64, char*);
__int64 CudaDriverRoutine_bcc40(__int64 result, __int64, __int64, __int64,
                                _QWORD*);
__int64 CudaDriverRoutine_c3ca0(__int64);
__int64 CudaDriverRoutine_c3f20(__int64);
__int64 CudaDriverRoutine_cc6f0(__int64, __int64);
__int64 CudaDriverRoutine_d3940(__int64, __int64);
__int64 CudaDriverRoutine_d4440(__int64, _BYTE*, __int64, unsigned __int64,
                                __int64, __int64, _QWORD*, unsigned int);
__int64 CudaDriverRoutine_d6ca0(_QWORD*, __int64, int, __int64);
__int64 CudaDriverRoutine_d84d0(__int64, __int64);
__int64 CudaDriverRoutine_d8640(_QWORD*, __int128*);
__int64 CudaDriverRoutine_d9140(__int64 result, __int64);
__int64 CudaDriverRoutine_d9700(__int64, __int64*);
__int64 CudaDriverRoutine_d9900(__int64, __int64, __int64);
__int64 CudaDriverRoutine_d9c50(__int64, int*, __int64, __int64);
__int64 CudaDriverRoutine_da4e0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_dabc0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_dcb60(__int64, __int64);
__int64 CudaDriverRoutine_df5c0(__int64);
__int64 CudaDriverRoutine_e1b60();
__int64 CudaDriverRoutine_e26e0(_QWORD*, __int128*, __int64*);
__int64 CudaDriverRoutine_e4980(__int64, _DWORD**);
__int64 CudaDriverRoutine_e4c90(_BYTE*, __int64, __int64, __int64);
__int64 CudaDriverRoutine_e4ea0(__int64, int*, __int64, _DWORD**, char, char,
                                __int64, __int64, _BYTE*);
__int64 CudaDriverRoutine_e6320(__int64, __int64, __int64, __int64, __int64,
                                __int64, __int64);
__int64 CudaDriverRoutine_e7540(__int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_e96c0(__int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_e9900(__int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_ea960();
__int64 CudaDriverRoutine_ea9a0();
__int64 CudaDriverRoutine_eb440(__int64 result, unsigned __int64, __int64,
                                bool*);
__int64 CudaDriverRoutine_eb550(__int64, __int64);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_eeec0(__int64 result, unsigned int*, int, __int64);
__int64 CudaDriverRoutine_f0ba0(__int64);
__int64 CudaDriverRoutine_f0f80(__int64, __int64*);
__int64 CudaDriverRoutine_f22e0(unsigned int);
__int64 CudaDriverRoutine_f9020(int*, __int64*);
__int64 CudaDriverRoutine_fe850(__int64*, int);
__int64 CudaDriverRoutine_fe8c0();
__int64 CudaDriverStub_102040(_QWORD);
__int64 CudaDriverStub_102050(_QWORD);
__int64 CudaDriverStub_102060(_QWORD);
__int64 CudaDriverStub_102350(__int64);
__int64 CudaDriverStub_102360(_QWORD);
__int64 CudaDriverStub_102370(_QWORD);
__int64 CudaDriverStub_102390(_QWORD);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_102f00(__int64);
__int64 CudaDriverStub_107f90(__int64*);
__int64 CudaDriverStub_107f90_alt1(__int64) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_107f90_alt2(char*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_108070(__int64*);
__int64 CudaDriverStub_108070_alt1(__int64) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_108070_alt2(char*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_112e30(_QWORD);
__int64 CudaDriverStub_116790(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_12d100(_QWORD);
__int64 CudaDriverStub_12db60(_QWORD);
__int64 CudaDriverStub_12db70(_QWORD);
__int64 CudaDriverStub_12db80(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1a2cc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_1d8c10(_QWORD);
__int64 CudaDriverStub_1db190(_QWORD);
__int64 CudaDriverStub_1db1a0(_QWORD);
__int64 CudaDriverStub_1db750(_QWORD);
__int64 CudaDriverStub_1db760(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1db9f0(__int64, __int64, __int64, __int64);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf50(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1dbfc0(_QWORD);
__int64 CudaDriverStub_1dd000(__int64, __int64, __int64);
__int64 CudaDriverStub_204610(_QWORD);
__int64 CudaDriverStub_4f840(_QWORD);
__int64 CudaDriverStub_57450(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_8b280(_QWORD);
__int64 CudaDriverStub_8e230(_QWORD);
__int64 CudaDriverStub_921e0(_QWORD);
__int64 CudaDriverStub_98590(_QWORD);
__int64 CudaDriverStub_9b050(_QWORD);
__int64 CudaDriverStub_b7fa0(_QWORD);
__int64 CudaDriverStub_f0f70(_QWORD);
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_108520(__int64);
__int64 cuda_driver_108620(__int64 result, unsigned __int64, unsigned __int64);
__int64 cuda_driver_1150a0(__int64, __int64, unsigned int);
__int64 cuda_driver_1167a0(__int64);
__int64 cuda_driver_116ef0(__int64, _QWORD*);
__int64 cuda_driver_118980(__int64);
__int64 cuda_driver_127770(__int64 result);
__int64 cuda_driver_1da1b0(__int64, __int64*, __int64, _QWORD*);
__int64 cuda_driver_1dbe40(__int64, __int64, __int64);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_246c80(__int64 result);
__int64 cuda_driver_5d860(unsigned __int64, __int64);
__int64 cuda_driver_96040(__int64*, __int64, unsigned int);
__int64 cuda_driver_9a090(__int64, int, _DWORD*);
__int64 cuda_driver_a2fc0(__int64);
__int64 cuda_driver_b4bf0(__int64*, __int64, __int64*);
__int64 cuda_driver_b4d40(__int64, __int64, unsigned int, __int64);
__int64 cuda_driver_b64f0(__int64 result, __int64);
__int64 cuda_driver_b7280(__int64);
__int64 cuda_driver_ba410(__int64, unsigned int, unsigned int, unsigned int,
                          unsigned int, unsigned int, unsigned int);
__int64 cuda_driver_ba620(unsigned int, unsigned int, unsigned int,
                          unsigned int, unsigned int, int, unsigned int,
                          unsigned int, unsigned int);
__int64 cuda_driver_bb120(__int64, __int64, unsigned int, int);
__int64 cuda_driver_checks_102b50(__int64*);
__int64 cuda_driver_checks_102e10(__int64);
__int64 cuda_driver_checks_102f50(unsigned int, unsigned int);
__int64 cuda_driver_checks_bace0(__int64, __int64, int, int);
__int64 cuda_driver_checks_bae90(__int64, __int64, __int64*);
__int64 cuda_driver_checks_baf70(__int64, int, int);
__int64 cuda_driver_checks_da280(__int64, __int64);
__int64 cuda_driver_d2f00(__int64 result);
__int64 cuda_driver_d6980(__int64 result, _OWORD*);
__int64 cuda_driver_db0e0_alt1(int*, _QWORD*,
                               __int64) __asm__("cuda_driver_db0e0");
__int64 cuda_driver_ef110_alt1(__int64,
                               unsigned int) __asm__("cuda_driver_ef110");
__int64 cuda_driver_helpers_1b7b30(__int64, __int64, __int64);
__int64 cuda_driver_helpers_1db770(__int64 result, _QWORD*);
__int64 cuda_driver_helpers_1db780(__int64 result, _QWORD*);
__int64 cuda_driver_helpers_1db7c0(__int64);
__int64 cuda_driver_helpers_1dca50(_QWORD*, __int64);
__int64 cuda_driver_helpers_1dcb20(__int64, __int64, _QWORD*);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
unsigned __int8 CudaDriverRoutine_116ff0(__int64);
unsigned __int8 CudaDriverRoutine_127160(__int64, __int64);
unsigned __int8 CudaDriverRoutine_12b530();
unsigned __int8 CudaDriverRoutine_1bb290(__int64);
unsigned __int8 CudaDriverRoutine_1d8a80(__int64);
unsigned __int8 CudaDriverRoutine_1db9c0(__int64);
unsigned __int8 CudaDriverRoutine_1dc6f0(__int64);
unsigned __int8 CudaDriverRoutine_1dc820(__int64);
unsigned __int8 CudaDriverRoutine_1dc900(__int64);
unsigned __int8 CudaDriverRoutine_1dc9c0(__int64);
unsigned __int8 CudaDriverRoutine_1dd060(__int64);
unsigned __int8 CudaDriverRoutine_1ec4a0(__int64, _QWORD*);
unsigned __int8 CudaDriverRoutine_92190(__int64);
unsigned __int8 CudaDriverRoutine_99720(__int64);
unsigned __int8 CudaDriverRoutine_9aa40(__int64);
unsigned __int8 CudaDriverRoutine_9acf0(__int64);
unsigned __int8 CudaDriverRoutine_eedd0(__int64, __int64);
unsigned __int8 CudaDriverRoutine_efe40(__int64);
unsigned __int8 CudaDriverStub_1dbf40(__int64);
unsigned __int8 CudaDriverStub_1dbff0(__int64);
unsigned __int8 CudaDriverStub_b9300(__int64);
unsigned __int8 cuda_debugger_api_7cff0();
unsigned __int8 cuda_driver_7e7d0(__int64);
unsigned __int8 cuda_driver_predicates_10e830(__int64);
unsigned __int8 cuda_driver_predicates_10ebb0(__int64);
unsigned __int8 cuda_driver_predicates_1dc880(__int64);
unsigned __int8 cuda_driver_predicates_1dc8c0(__int64);
unsigned __int8 cuda_driver_predicates_9ac80(__int64);
unsigned __int8 cuda_driver_predicates_9ae50(__int64);
double CudaDriverRoutine_8dc70(__int64, __int64, __int64, int, int);
extern _BYTE CudaDriverData_4c38[8];
extern _DWORD CudaDriverData_1432ddc;
extern _QWORD CudaDriverData_1432130[1];
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_1423268;
extern _UNKNOWN* CudaDriverData_1432140;
extern _UNKNOWN* CudaDriverData_1432148;
extern _UNKNOWN* CudaDriverData_1432198;
extern _UNKNOWN* CudaDriverData_14321c8;
extern _UNKNOWN* CudaDriverData_14321d8;
extern _UNKNOWN CudaDriverData_14347a8;
extern __int128 CudaDriverData_1115780;
extern __int128 CudaDriverData_1115ce0;
extern __int64 (*CudaDriverData_1423270[3])();
extern __int64 CudaDriverData_14347a0;
extern __int64 CudaDriverData_143bd38;
extern char CudaDriverData_143590e;
extern int CudaDriverData_1432de0;
extern int CudaDriverData_14348ac;
extern int CudaDriverData_1434ac0;
extern int CudaDriverData_1435850;
extern int CudaDriverData_14358d0;
long double CudaDriverRoutine_b5030(__int64, __int64, long double*);
unsigned __int64* CudaDriverStub_102380(__int64, unsigned int);
unsigned __int64* cuda_driver_checks_102c20(__int64, unsigned int,
                                            unsigned __int8);
unsigned __int64 CudaDriverRoutine_1ffe10(__int64);
unsigned __int64 CudaDriverRoutine_5b820(__int64);
unsigned __int64 CudaDriverRoutine_5b8d0(__int64);
unsigned __int64 CudaDriverRoutine_8b200(__int64, int, int);
unsigned __int64 CudaDriverRoutine_ef640(unsigned __int64 result, __int64,
                                         __int64);
void CudaDriverRoutine_1021a0();
void CudaDriverRoutine_112b40(__int64*, __int64, unsigned int);
void CudaDriverRoutine_124d80();
void CudaDriverRoutine_12b160();
void CudaDriverRoutine_41b0();
void CudaDriverRoutine_4350();
void CudaDriverRoutine_4484();
void CudaDriverRoutine_4728();
void CudaDriverRoutine_474c();
void CudaDriverRoutine_4768();
void CudaDriverRoutine_4780();
void CudaDriverRoutine_47b0();
void CudaDriverRoutine_47c8();
void CudaDriverRoutine_4e50();
void CudaDriverRoutine_64460();
void CudaDriverRoutine_71c8();
void CudaDriverRoutine_71d8();
void CudaDriverRoutine_71f0();
void CudaDriverRoutine_71f8();
void CudaDriverRoutine_7418();
void CudaDriverRoutine_74e0();
void CudaDriverRoutine_74e8();
void CudaDriverRoutine_74f0();
void CudaDriverRoutine_74f8();
__int64 cuda_driver_d8920(__int64 a1, float64x2_t* a2, float64x2_t* a3,
                          unsigned __int64 a4, unsigned __int64* a5, char a6);
__int64 cuda_driver_d9290(__int64* a1, __int64 a2);
__int64 cuda_driver_d93c0(__int64 a1, __int64* a2);
__int64 cuda_driver_d9500(__int64 a1);
__int64 cuda_driver_d9ac0(__int64 a1, __int64* a2, __int64 a3);
__int64 cuda_driver_da010(__int64 a1, __int128* a2, __int64 a3);
__int64 cuda_driver_da850(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 cuda_driver_db0e0(int* a1, __int64* a2, __int64 a3);
__int64 cuda_driver_db7c0(__int64 a1, unsigned int a2);
__int64 cuda_driver_dba40(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                          int a5);
__int64 cuda_driver_dcf00(__int64 result, unsigned int a2);
__int64 cuda_driver_dd220(__int64* a1, __int64 a2, unsigned int a3);
__int64 cuda_driver_ddc90(__int64* a1, __int64 a2, __int64 a3, int a4);
__int64 cuda_driver_ddfc0(__int64 a1);
__int64 cuda_driver_df460(unsigned int a1);
__int64 cuda_driver_e2030();
__int64 cuda_driver_e20c0(__int64 a1, unsigned int a2);
__int64 cuda_driver_e2200(__int64 result, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_e2b00(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_e2c70(__int64 a1, _QWORD* a2, __int64 a3);
__int64 cuda_driver_e2ca0(_QWORD* a1, __int128* a2, __int64* a3);
__int64 cuda_driver_e2da0(__int64 a1, __int64 a2, __int64* a3);
__int64 cuda_driver_e2ee0(__int64 a1, __int64 a2);
__int64 cuda_driver_e2fa0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4);
__int64 cuda_driver_e4000(__int64 a1, _QWORD* a2);
__int64 cuda_driver_e45e0(int* a1, __int64* a2, unsigned int a3, __int64 a4);
__int64 cuda_driver_e4b80(__int64 a1, __int64 a2);
long double cuda_driver_e4e00(__int64 a1, char a2);
__int64 cuda_driver_e5650(int* a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6);
__int64 cuda_driver_e6730(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          char a5);
__int64 cuda_driver_e75e0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6);
__int64 cuda_driver_e7650(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6);
__int64 cuda_driver_e76d0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6);
__int64 cuda_driver_e7750(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6);
__int64 cuda_driver_e77c0(__int64 result, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_e7e60(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 cuda_driver_e83e0(unsigned int* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_e86e0(__int64 a1, unsigned int a2, signed int a3,
                          unsigned int* a4);
__int64 cuda_driver_e8c60(__int64* a1);
__int64 cuda_driver_e8e30(__int64 a1, unsigned int a2, unsigned int* a3,
                          int* a4);
__int64 cuda_driver_e9060(__int64 a1, int a2, unsigned int* a3);
__int64 cuda_driver_e9340(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_ea5c0(__int64 result);
__int64 cuda_driver_ea620(__int64 a1, char a2);
__int64 cuda_driver_ea9e0(_QWORD* a1, __int64 a2, __int64 a3);
__int64 cuda_driver_eb200(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          unsigned __int64 a5);
__int64 cuda_driver_eb6d0(__int64 a1, unsigned int a2);
__int64 cuda_driver_ec420(__int64 a1, _DWORD* a2,
                          __int64 (*a3)(_DWORD*, __int64), __int64 a4);
void cuda_driver_ecfc0();
__int64 cuda_driver_ed8e0(__int64 a1, __int64 a2, _QWORD* a3);
__int64 cuda_driver_edaa0(_DWORD* a1);
__int64 cuda_driver_ee590(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4);
__int64 cuda_driver_ef110(__int64 a1, int a2);
__int64 cuda_driver_ef3a0(__int64 a1);
__int64 cuda_driver_ef460(__int64 a1);
__int64 cuda_driver_ef850(__int64 a1);
__int64 cuda_driver_ef950(__int64 result);
__int64 cuda_driver_efea0(__int64 a1);
unsigned __int64 cuda_driver_f0360(int a1);
__int64 cuda_driver_f1180(__int64* a1, unsigned __int64 a2);
__int64 cuda_driver_f12e0(unsigned __int64 a1);
__int64 cuda_driver_f2040(__int64 a1, int a2);
unsigned __int64 cuda_driver_f2bb0(int* a1);
__int64 cuda_driver_f2ff0(__int64 result);
__int64 cuda_driver_f35d0(__int64 result);
__int64 cuda_driver_f3640(__int64 a1, __int64* a2, unsigned __int64 a3,
                          __int64 a4, _QWORD* a5);
unsigned __int64* cuda_driver_f3920(__int64 a1, __int64* a2, __int64 a3,
                                    _BYTE* a4);
__int64 cuda_driver_f3c60(__int64 a1, __int64 a2);
__int64 cuda_driver_f5320(__int64 a1);
__int64 cuda_driver_f5d20(__int64 a1, __int64 a2);
bool cuda_driver_f7b60(int* a1, __int64 a2);
__int64 cuda_driver_f7ce0(_DWORD* a1, __int64 a2);
__int64 cuda_driver_f8620(__int64 a1, __int64 a2, int a3, unsigned __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                          __int64 a9, __int64 a10, unsigned __int64 a11,
                          unsigned __int64 a12, unsigned __int64* a13,
                          __int64 a14, unsigned __int8 a15);
__int64 cuda_driver_f91e0(int* a1, __int64* a2, __int64 a3);
bool cuda_driver_faa80(__int64 a1, int* a2);
__int64 CudaDriverRoutine_d56a0(__int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_ebb40(__int64, __int64,
                                __int64 (*)(__int64*, __int64), __int64);
__int64 CudaDriverRoutine_ed090();
__int64 CudaDriverRoutine_ed0e0();
__int64 CudaDriverRoutine_f19e0(__int64, unsigned int);
__int64 CudaDriverRoutine_f5420(__int64 result);
__int64 CudaDriverStub_102050_alt1(void) __asm__("CudaDriverStub_102050");
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt_alt1(__int64, int, unsigned __int64) __asm__("memset_plt");
int snprintf_plt_alt1(__int64, unsigned __int64, const char*,
                      ...) __asm__("snprintf_plt");
unsigned __int64* CudaDriverRoutine_4d790(unsigned __int64* result,
                                          unsigned __int64);
unsigned __int64 strlen_plt(const char*);
void qsort_plt(__int64, unsigned __int64, unsigned __int64, __int64);
__int64 cuda_driver_unplaced_6_e4750(__int64 a1, unsigned __int64* a2, int a3,
                                     const char* a4, const char* a5);
__int64 cuda_driver_unplaced_6_ec840();
__int64 cuda_driver_f1d70(__int64 a1, __int64 a2, _QWORD* a3);
__int64 cuda_driver_f43c0(__int64 a1, __int64 a2, int a3, unsigned int a4);

__int64 cuda_driver_d8920(__int64 a1, float64x2_t* a2, float64x2_t* a3,
                          unsigned __int64 a4, unsigned __int64* a5, char a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  unsigned __int64* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64* v23;
  float64x2_t* v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  float64x2_t* v28;
  float64x2_t* v29;
  bool v31;
  bool v33;
  const double* v35;
  float64x2_t* v36;
  float64x2_t* v37;
  __int64 v38;
  const double* v39;
  float64x2x2_t v41;
  float64x2x2_t v42;

  v6 = 1000;
  if ((a6 & 1) == 0) {
    v6 = 1056;
  }
  v8 = (unsigned __int64*)(a1 + v6);
  v9 = *(unsigned int*)(a1 + v6 + 36);
  if (a4 >= v9) {
    v10 = v9;
  }
  else {
    v10 = a4;
  }
  if (v10 == 0) {
    goto LABEL_43;
  }
  v11 = *v8;
  if (a3 != nullptr) {
    if (v10 >= 0xE) {
      v27 = v11 + 16 * v10;
      v28 = (float64x2_t*)((char*)a2 + 8 * v10);
      v29 = (float64x2_t*)((char*)a3 + 8 * v10);
      v12 = 0;
      v31 = (unsigned __int64)a2 < v27 && v11 < (unsigned __int64)v28;
      v33 = (unsigned __int64)a3 < v27 && v11 < (unsigned __int64)v29;
      if ((a3 >= v28 || a2 >= v29) && !v31 && !v33) {
        v12 = (unsigned int)v10 & 0xFFFFFFFC;
        v35 = (const double*)(v11 + 32);
        v36 = a3 + 1;
        v37 = a2 + 1;
        v38 = v12;
        do {
          v39 = v35 - 4;
          v42 = vld2q_f64(v35);
          v35 += 8;
          v38 -= 4;
          v41 = vld2q_f64(v39);
          v37[-1] = v41.val[0];
          *v37 = v42.val[0];
          v36[-1] = v41.val[1];
          *v36 = v42.val[1];
          v36 += 2;
          v37 += 2;
        } while (v38 != 0);
        if (v10 == v12) {
        LABEL_43:
          if (a4 > v9) {
            memset_plt(&LANES128(*(a2)).n128_u64[v10], 0, 8 * (a4 - v10));
          }
          *a5 = v10;
          return 0;
        }
      }
    }
    else {
      v12 = 0;
    }
    v13 = ((_BYTE)v10 - (_BYTE)v12) & 7;
    v14 = v12;
    if ((((_BYTE)v10 - (_BYTE)v12) & 7) != 0) {
      v15 = (unsigned __int64*)(v11 + 16 * v12 + 8);
      v14 = v12;
      do {
        --v13;
        LANES128(*(a2)).n128_u64[v14] = *(v15 - 1);
        v16 = *v15;
        v15 += 2;
        LANES128(*(a3)).n128_u64[v14++] = v16;
      } while (v13 != 0);
    }
    if (v12 - v10 <= 0xFFFFFFFFFFFFFFF8LL) {
      v17 = v10 - v14;
      v18 = 8 * v14 + 32;
      v19 = (_QWORD*)(v11 + 16 * v14 + 64);
      v20 = (unsigned __int64*)((char*)LANES128(*(a2)).n128_u64 + v18);
      v21 = (unsigned __int64*)((char*)LANES128(*(a3)).n128_u64 + v18);
      do {
        v17 -= 8;
        *(v20 - 4) = *(v19 - 8);
        *(v21 - 4) = *(v19 - 7);
        *(v20 - 3) = *(v19 - 6);
        *(v21 - 3) = *(v19 - 5);
        *(v20 - 2) = *(v19 - 4);
        *(v21 - 2) = *(v19 - 3);
        *(v20 - 1) = *(v19 - 2);
        *(v21 - 1) = *(v19 - 1);
        *v20 = *v19;
        *v21 = v19[1];
        v20[1] = v19[2];
        v21[1] = v19[3];
        v20[2] = v19[4];
        v21[2] = v19[5];
        v20[3] = v19[6];
        v20 += 8;
        v22 = v19[7];
        v19 += 16;
        v21[3] = v22;
        v21 += 8;
      } while (v17 != 0);
    }
    goto LABEL_43;
  }
  v23 = (__int64*)(v11 + 8);
  v24 = a2;
  v25 = v10;
  while (1) {
    LANES128(*(v24)).n128_u64[0] = *(v23 - 1);
    v24 = (float64x2_t*)((char*)v24 + 8);
    v26 = *v23;
    v23 += 2;
    if (v26 != CudaDriverData_14347a0) {
      break;
    }
    if (--v25 == 0) {
      goto LABEL_43;
    }
  }
  CudaDriverRoutine_ed630(
      (__int64)"CUDA", 0,
      (__int64)"Edge data is present and cannot be discarded");
  return 402;
}

__int64 cuda_driver_d9290(__int64* a1, __int64 a2)
{
  __int64 result;
  struct {
    int v5;
    char gap12_[4];
    __int64 v6;
    __int64 v7;
  } v5_;

  result = CudaDriverRoutine_d6ca0(a1, a2, 1, 0);
  if ((_DWORD)result == 0 &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x8CLL) +
                 *(__int64*)((char*)((__int64*)0x10LL) +
                             (_QWORD)CudaDriverData_14225e0)) != 0) {
    v5_.v6 = *a1;
    v5_.v7 = a2;
    v5_.v5 = 24;
    cuda_driver_20b420(2u, 0x23u, (__int64)&v5_.v5);
    return 0;
  }
  return result;
}

__int64 cuda_driver_d93c0(__int64 a1, __int64* a2)
{
  __int64 v4;
  unsigned int v5;
  __int64 result;
  bool v7;

  if (*(_QWORD*)(a1 + 32) != *a2) {
    v4 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 1200));
    cuda_driver_1084c0(v4 + 24);
    v5 = CudaDriverRoutine_9e520(v4, *a2, a1 + 480, (_DWORD*)(a1 + 528));
    CudaDriverRoutine_1085b0(v4 + 24);
    if (v5 != 0) {
      return v5;
    }
  }
  result = cuda_driver_db0e0_alt1((int*)a1, a2, *(_QWORD*)(a1 + 1200));
  if ((_DWORD)result == 0) {
    if (*((_BYTE*)((_UNKNOWN*)0x1164LL) + (_QWORD)CudaDriverData_1422118 + 2) !=
        0) {
      return 0;
    }
    if (*(_BYTE*)(a1 + 90) != 0 || *(_BYTE*)(a1 + 88) != 0) {
      v7 = true;
      if (*(_BYTE*)(a1 + 1412) != 0) {
      LABEL_10:
        *(_BYTE*)(a1 + 1413) |= v7;
        return 0;
      }
    }
    else {
      v7 = *(_BYTE*)(a1 + 89) != 0;
      if (*(_BYTE*)(a1 + 1412) != 0) {
        goto LABEL_10;
      }
    }
    *(_BYTE*)(*(_QWORD*)(a1 + 1240) + 4LL) |= v7;
    return 0;
  }
  return result;
}

__int64 cuda_driver_d9500(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  void (*v9)(__int64, _QWORD, __int64, __int64);
  __int64 v10;
  __int64 v11;
  void (*v12)(__int64, _QWORD, __int64, _QWORD);
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;

  if ((unsigned __int8)CudaDriverStub_4f840(a1) != 0) {
    return 0;
  }
  if ((*(unsigned __int8*)(a1 + 89) | *(unsigned __int8*)(a1 + 88) |
       *(unsigned __int8*)(a1 + 94) | *(unsigned __int8*)(a1 + 95)) != 0) {
    if (*(_DWORD*)(a1 + 528) == 3) {
      *(_BYTE*)(a1 + 385) = 1;
      result = CudaDriverRoutine_c3ca0(a1);
      *(_BYTE*)(a1 + 385) = 0;
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    else {
      v3 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 1200));
      cuda_driver_108520(v3 + 24);
      *(_DWORD*)(a1 + 528) = 0;
      *(_BYTE*)(a1 + 385) = 1;
      v4 = CudaDriverRoutine_c3ca0(a1);
      v5 = *(_QWORD*)(a1 + 1200);
      *(_BYTE*)(a1 + 385) = 0;
      v6 = CudaDriverRoutine_98340(v5);
      CudaDriverRoutine_1085d0(v6 + 24);
      result = v4;
      if (v4 != 0) {
        return result;
      }
    }
    v7 = *(_QWORD*)(a1 + 1200);
    v8 = *(_QWORD*)(v7 + 64);
    if (*(_BYTE*)(v8 + 17013) != 0 && *(_BYTE*)(a1 + 95) != 0 &&
        (*(_BYTE*)(a1 + 1412) == 0 || *(_BYTE*)(a1 + 941) != 0)) {
      if (*(_BYTE*)(a1 + 1392) != 0 &&
          *(_BYTE*)(*(_QWORD*)(a1 + 1272) + 12LL) != 0) {
        v9 = *(void (**)(__int64, _QWORD, __int64, __int64))(v8 + 18616);
        v10 = **(_QWORD**)(a1 + 1000);
        v11 = CudaDriverRoutine_98340(v7);
        v9(v11, *(_QWORD*)(a1 + 32), v10 + 184, 1);
        *(_BYTE*)(v10 + 91) = 1;
        CudaDriverRoutine_c3f20(v10);
      }
      else {
        v12 = *(void (**)(__int64, _QWORD, __int64, _QWORD))(v8 + 18616);
        v13 = CudaDriverRoutine_98340(v7);
        v12(v13, *(_QWORD*)(a1 + 32), a1 + 184, 0);
      }
    }
    if (*(_DWORD*)(a1 + 4) == 0) {
      v14 = *(_QWORD*)(a1 + 704);
      if (v14 != 0) {
        v15 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 1056LL);
        if (v15 != 0 && (*(unsigned __int8 (**)(void*))(v15 + 16))(
                            (void*)*(_QWORD*)(a1 + 32)) != 0) {
          v16 = *(_BYTE*)(a1 + 1412) == 0 || *(_BYTE*)(a1 + 941) != 0;
        }
        else {
          v16 = 0;
        }
        cuda_driver_db7c0(v14, v16);
      }
    }
  }
  CudaDriverRoutine_c3f20(a1);
  result = 0;
  if (*(_BYTE*)(a1 + 941) != 0) {
    *(_BYTE*)(a1 + 95) = 1;
  }
  return result;
}

__int64 cuda_driver_d9ac0(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v9;

  v3 = *a2;
  if (*a2 == 0) {
    goto LABEL_26;
  }
  v4 = *(_QWORD*)(a1 + 24);
  if (*(_QWORD*)(a1 + 1200) == a3 &&
      ((*(_BYTE*)(v3 + 855) & 0x10) == 0 || *(_BYTE*)(v4 + 415) != 0 ||
       *(_BYTE*)(v4 + 416) != 0 &&
           *(_QWORD*)(*(_QWORD*)(v4 + 448) + 1200LL) == a3) &&
      (*(_BYTE*)(a1 + 676) != 0 || (*(_BYTE*)(v3 + 860) & 0x78) == 0)) {
    v6 = a3;
    v7 = a1;
    if (!CudaDriverStub_b9300(*a2) || *(_BYTE*)(v7 + 675) != 0) {
      return 0;
    }
    v3 = *a2;
    if (*a2 != 0) {
      v4 = *(_QWORD*)(v7 + 24);
      a1 = v7;
      a3 = v6;
      goto LABEL_3;
    }
  LABEL_26:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"The update must specify the function "
                                     "that the kernel node will run");
    return 7;
  }
LABEL_3:
  if (*(_QWORD*)(a1 + 1200) == a3) {
    if ((*(_BYTE*)(v3 + 855) & 0x10) == 0 || *(_BYTE*)(v4 + 415) != 0) {
      goto LABEL_19;
    }
    if (*(_BYTE*)(v4 + 416) == 0) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"A call to cudaGraphLaunch cannot be added to a graph that "
                   "was not instantiated as device-launchable and"
                   " did not contain any such calls at instantiation");
      return 7;
    }
    if (*(_QWORD*)(*(_QWORD*)(v4 + 448) + 1200LL) == a3) {
    LABEL_19:
      if (*(_BYTE*)(a1 + 676) != 0 || (*(_BYTE*)(v3 + 860) & 0x78) == 0) {
        v9 = a1;
        if (CudaDriverStub_b9300(v3) && *(_BYTE*)(v9 + 675) == 0) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"The original node did not use CUDA dynamic parallelism "
                       "and cannot be updated to a function which does");
        }
      }
      else {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"The original node did not make device-side update calls "
                     "and cannot be updated to a function which does");
      }
      return 7;
    }
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"A graph may use cudaGraphLaunch from at most one context and "
                 "this context cannot change from initial instantiation");
  }
  else {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"The owning context of the function is not allowed to change");
  }
  return 7;
}

__int64 cuda_driver_da010(__int64 a1, __int128* a2, __int64 a3)
{
  int v3;
  __int128 v4;
  __int64 v5;
  __int64 v6;
  int v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int128 v13;
    __int128 v14;
    __int128 v15;
  } v13_;
  struct {
    __int64 v16[8];
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
  } v16_;

  v3 = *(_DWORD*)(a1 + 4);
  memset(v16_.v16, 0, sizeof(v16_.v16));
  v16_.v17 = (__typeof__(v16_.v17)){0};
  v16_.v18 = (__typeof__(v16_.v18)){0};
  v16_.v19 = (__typeof__(v16_.v19)){0};
  v16_.v20 = (__typeof__(v16_.v20)){0};
  v16_.v21 = (__typeof__(v16_.v21)){0};
  v16_.v22 = (__typeof__(v16_.v22)){0};
  v16_.v23 = (__typeof__(v16_.v23)){0};
  v16_.v24 = (__typeof__(v16_.v24)){0};
  v16_.v25 = (__typeof__(v16_.v25)){0};
  v16_.v26 = (__typeof__(v16_.v26)){0};
  v4 = a2[1];
  v13_.v13 = *a2;
  v13_.v14 = v4;
  v13_.v15 = a2[2];
  if (v3 != 0) {
    v5 = a1 + 40;
    if (*(_DWORD*)(a1 + 80) != DWORD2(v13_.v15)) {
      return 5;
    }
  }
  else {
    v5 = *(_QWORD*)(a1 + 800) + 24LL;
    if (*(_DWORD*)(*(_QWORD*)(a1 + 800) + 64LL) != DWORD2(v13_.v15)) {
      return 5;
    }
  }
  v6 = *(_QWORD*)(v5 + 32);
  if (v6 != (_QWORD)v13_.v15) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Memset height cannot be changed. Original: %lu, New: %lu", v6,
        (_QWORD)v13_.v15);
    return 5;
  }
  if (*(_DWORD*)(v5 + 12) == HIDWORD(v13_.v13) &&
      *(_OWORD*)(v5 + 16) == v13_.v14) {
    if (*(_QWORD*)v5 == (_QWORD)v13_.v13 &&
        *(_DWORD*)(v5 + 8) == DWORD2(v13_.v13)) {
      return 0;
    }
  }
  else if (v6 != 1) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"2d memsets only support updates to the "
                                     "address or assigned value");
    return 5;
  }
  if (*(_QWORD*)(a1 + 1200) != a3) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Context of the memset node cannot be changed");
    return 5;
  }
  if (v3 != 0) {
    v10 = 0;
  }
  else {
    v10 = 2;
  }
  DWORD2(v13_.v15) = v10;
  v11 = CudaDriverRoutine_98340(a3);
  if ((unsigned int)CudaDriverRoutine_103e40(
          v11, *(_QWORD*)(a1 + 24), (__int64*)&v13_.v13, 0, 5, v16_.v16) != 0) {
    return 1;
  }
  if (*(_DWORD*)(a1 + 4) == 0) {
    *(_WORD*)((char*)&v16_.v17 + 5) = 257;
    v12 = CudaDriverRoutine_98340(a3);
    if ((unsigned int)cuda_driver_helpers_1b7b30(v12, (__int64)v16_.v16, 0) !=
        0) {
      return 1;
    }
    if (*((_QWORD*)&v16_.v17 + 1) != *(_QWORD*)(*(_QWORD*)(a1 + 800) + 16LL)) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Resources required for memset node changed");
      return 5;
    }
  }
  return 0;
}

__int64 cuda_driver_da850(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6;
  unsigned int v7;
  __int64 result;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  char* v25;
  char* v26;
  char* v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;

  if (*(_DWORD*)(a2 + 4) == *(_DWORD*)(a1 + 4)) {
    v6 = *(_QWORD*)(a1 + 1112);
    switch (*(_DWORD*)(a2 + 4)) {
    case 0:
      v13 = cuda_driver_d9ac0(*(_QWORD*)(a1 + 1112), (__int64*)(a2 + 32),
                              *(_QWORD*)(a2 + 1200));
      if (v13 != 0) {
        goto LABEL_61;
      }
      if (*(_DWORD*)(v6 + 888) != *(_DWORD*)(a2 + 888)) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"The cooperative attribute cannot change as part of a "
                     "kernel node update");
        goto LABEL_65;
      }
      if (*(_BYTE*)(*(_QWORD*)(v6 + 24) + 409LL) != 0 &&
          *(_DWORD*)(v6 + 952) != *(_DWORD*)(a2 + 952)) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Graph was instantiated to use priority attributes from "
                     "each node. Therefore, the node priority attr"
                     "ibute cannot change as part of a kernel node update");
      LABEL_65:
        *(_DWORD*)a3 = 8;
        goto LABEL_62;
      }
    LABEL_18:
      *(_DWORD*)a3 = 0;
    LABEL_66:
      result = 0;
      break;
    case 1:
      v14 = CudaDriverRoutine_d9c50(*(_QWORD*)(a1 + 1112), (int*)(a2 + 40),
                                    a2 + 536, *(_QWORD*)(a2 + 752));
      *(_DWORD*)a3 = v14;
      if (v14 == 0) {
        goto LABEL_66;
      }
      goto LABEL_62;
    case 2:
      v12 = cuda_driver_da010(*(_QWORD*)(a1 + 1112), (__int128*)(a2 + 40),
                              *(_QWORD*)(a2 + 1200));
      *(_DWORD*)a3 = v12;
      if (v12 == 0) {
        goto LABEL_66;
      }
      goto LABEL_62;
    case 3:
      if (*(_QWORD*)(a2 + 32) != 0) {
        goto LABEL_18;
      }
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Callback function cannot be NULL");
      goto LABEL_60;
    case 4:
      v10 = *(_QWORD*)(a1 + 48);
      v11 = *(_QWORD*)(a2 + 48);
      if (a4 == 1) {
        return CudaDriverRoutine_da4e0(v10, v11, a3);
      }
      else {
        return CudaDriverRoutine_dabc0(v10, v11, a3);
      }
    case 5:
    case 0xA:
    case 0xB:
      v7 = 0;
      *(_DWORD*)a3 = 0;
      return v7;
    case 6:
    case 7:
      if (**(_QWORD**)(v6 + 32) == **(_QWORD**)(a2 + 32)) {
        goto LABEL_18;
      }
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Event context cannot change during update");
      goto LABEL_60;
    case 8:
    case 9:
      if (*(_DWORD*)(v6 + 48) == *(_DWORD*)(a2 + 48)) {
        goto LABEL_18;
      }
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Changing the number of semaphores is not supported");
    LABEL_60:
      v13 = 5;
    LABEL_61:
      *(_DWORD*)a3 = v13;
      goto LABEL_62;
    case 0xC:
      v9 = cuda_driver_checks_da280(*(_QWORD*)(a1 + 1112), a2 + 32);
      *(_DWORD*)a3 = v9;
      if (v9 == 0) {
        goto LABEL_66;
      }
      goto LABEL_62;
    case 0xD:
      v15 = *(_QWORD*)(a1 + 56);
      v16 = *(_QWORD*)(a2 + 56);
      v17 = *(_QWORD*)(a1 + 32);
      v18 = *(_QWORD*)(a2 + 32);
      v19 = *(_DWORD*)(a1 + 40);
      v7 = *(_DWORD*)(a1 + 44);
      v21 = *(_DWORD*)(a2 + 40);
      v20 = *(_DWORD*)(a2 + 44);
      if (v15 == v16 && v17 == v18 && v19 == v21 && v7 == v20) {
        if (v7 != 0) {
          v29 = a1;
          v30 = 0;
          if (a4 == 1) {
            do {
              v7 = CudaDriverRoutine_da4e0(
                  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8 * v30),
                  *(_QWORD*)(*(_QWORD*)(a2 + 48) + 8 * v30), a3);
              if (v7 != 0) {
                break;
              }
              ++v30;
              a1 = v29;
            } while (v30 < *(unsigned int*)(v29 + 44));
          }
          else {
            do {
              v7 = CudaDriverRoutine_dabc0(
                  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8 * v30),
                  *(_QWORD*)(*(_QWORD*)(a2 + 48) + 8 * v30), a3);
              if (v7 != 0) {
                break;
              }
              ++v30;
              a1 = v29;
            } while (v30 < *(unsigned int*)(v29 + 44));
          }
        }
        return v7;
      }
      if (v15 == v16) {
        v25 = "";
      }
      else {
        v25 = "ctx ";
      }
      if (v17 == v18) {
        v26 = "";
      }
      else {
        v26 = "handle ";
      }
      if (v19 == v21) {
        v27 = "";
      }
      else {
        v27 = "type ";
      }
      if (v7 == v20) {
        v28 = "";
      }
      else {
        v28 = "size ";
      }
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"The conditional node parameters cannot be updated. "
                   "Parameters changed: %s%s%s%s",
          v25, v26, v27, v28);
    LABEL_49:
      *(_DWORD*)a3 = 6;
    LABEL_62:
      if (*(_QWORD*)(a3 + 8) != 0) {
        return 910;
      }
      goto LABEL_6;
    default:
      goto LABEL_49;
    }
  }
  else {
    *(_DWORD*)a3 = 3;
  LABEL_6:
    *(_QWORD*)(a3 + 8) = a2;
    return 910;
  }
  return result;
}

__int64 cuda_driver_db0e0(int* a1, __int64* a2, __int64 a3)
{
  int* v4;
  __int64 v5;
  __int64 v8;
  __int64 result;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned int v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  int v27;
  _BOOL4 v28;
  int v29;
  int* v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  unsigned int v38;
  int* v39;
  unsigned __int64 v40;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int128* v48;
  __int128 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int v54;
  unsigned int v55;
  char v56;
  __int128 v57;
  __int128 v58;
  __int64 v59;
  _QWORD* v60;
  __int128 v61;
  __int128 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  unsigned __int8 v67;
  int v68;
  unsigned __int64 i;
  __int64 v70;
  void (*v71)(__int64, __int64, int*, _QWORD, _QWORD, __int64);
  __int64 v72;
  int v73;
  __int64 v74;
  int* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  _QWORD* v80;
  __int64 v81;
  struct {
    _QWORD v82[5];
    bool v83;
    char v84;
    char gap98_[6];
    __int64 v85;
  } v82_;

  v4 = a1 + 8;
  v5 = *a2;
  v80 = nullptr;
  v81 = 0;
  v8 = *(unsigned int*)(v5 + 632);
  if ((_DWORD)v8 != 0) {
    result = CudaDriverRoutine_bc970(v5, a2[5], a2[6], (char*)v82_.v82);
    if ((_DWORD)result != 0) {
      return result;
    }
    v78 = v8;
    v10 = *(unsigned int*)(*a2 + 632) + 7LL;
    v11 = v10 >> 3;
    if (*(_QWORD*)(*a2 + 624) != 0) {
      v12 = *(_DWORD*)(*a2 + 616);
      if (v12 != 0) {
        if (a2[5] != 0) {
          v13 = &v81;
          v14 = 8LL * (v12 + 2 * (_DWORD)v11);
          if (v14 <= *((_QWORD*)a1 + 18)) {
            goto LABEL_7;
          }
        LABEL_12:
          v17 = CudaDriverStub_12e330(v14);
          if (v17 == 0) {
            return 2;
          }
          v18 = v17;
          CudaDriverRoutine_12e340(*((_QWORD*)a1 + 16));
          *((_QWORD*)a1 + 16) = v18;
          *((_QWORD*)a1 + 18) = v14;
          goto LABEL_14;
        }
        if (a2[6] != 0) {
          v13 = (__int64*)&v80;
        }
        else {
          v13 = nullptr;
        }
        if (a2[6] != 0) {
          v12 = 6;
        }
        else {
          v12 = 0;
        }
        v14 = 8LL * (v12 + 2 * (_DWORD)v11);
        if (v14 > *((_QWORD*)a1 + 18)) {
          goto LABEL_12;
        }
      }
      else {
        v13 = nullptr;
        v14 = 8LL * (unsigned int)(2 * v11);
        if (v14 > *((_QWORD*)a1 + 18)) {
          goto LABEL_12;
        }
      }
    }
    else {
      v13 = nullptr;
      v12 = 0;
      v14 = 8LL * (unsigned int)(2 * v11);
      if (v14 > *((_QWORD*)a1 + 18)) {
        goto LABEL_12;
      }
    }
  LABEL_7:
    if (*((_QWORD*)a1 + 17) ==
        __PAIR64__(((unsigned __int64)*(unsigned int*)(*a2 + 632) + 7) >> 3,
                   v12)) {
    LABEL_15:
      v19 = *((_BYTE*)a1 + 456);
      v20 = *((_QWORD*)a1 + 16);
      a1[34] = v12;
      a1[35] = v11;
      v21 = (v19 & 2) == 0;
      v22 = 32;
      v23 = v20 + 8LL * v12;
      if (v21) {
        v22 = 108;
      }
      if (*(_QWORD*)&v4[v22] == v23) {
        v24 = v10 >> 3;
      }
      else {
        v24 = 0;
      }
      v15 = v23 + 8 * v24;
      memset_plt(v15, 0, v10 & 0x1FFFFFFF8LL);
      if (v13 != nullptr) {
        *v13 = *((_QWORD*)a1 + 16);
        v26 = v80;
        v25 = v81;
      }
      else {
        v26 = nullptr;
        v25 = 0;
      }
      v8 = v78;
      CudaDriverRoutine_bcc40(*a2, (__int64)v82_.v82, v15, v25, v26);
      v27 = *((unsigned __int8*)a1 + 88);
      *((_QWORD*)a1 + 150) = a3;
      if (v27 != 0) {
        goto LABEL_30;
      }
      goto LABEL_24;
    }
  LABEL_14:
    a1[115] = 0;
    goto LABEL_15;
  }
  v15 = 0;
  v16 = *((unsigned __int8*)a1 + 88);
  *((_QWORD*)a1 + 150) = a3;
  if (v16 != 0) {
  LABEL_30:
    v28 = true;
    goto LABEL_31;
  }
LABEL_24:
  if (a1[10] != *((_DWORD*)a2 + 2) || a1[11] != *((_DWORD*)a2 + 3) ||
      a1[12] != *((_DWORD*)a2 + 4) || a1[13] != *((_DWORD*)a2 + 5) ||
      a1[14] != *((_DWORD*)a2 + 6)) {
    goto LABEL_30;
  }
  v28 = a1[15] != *((_DWORD*)a2 + 7);
LABEL_31:
  v29 = *((unsigned __int8*)a1 + 90);
  *((_BYTE*)a1 + 88) = v28;
  if (v29 != 0) {
    goto LABEL_44;
  }
  v30 = a1 + 114;
  if ((a1[114] & 2) != 0) {
    v30 = a1 + 38;
  }
  if ((_DWORD)v8 != v30[1]) {
  LABEL_44:
    v31 = 1;
    v35 = *((unsigned __int8*)a1 + 89);
    *((_BYTE*)a1 + 90) = 1;
    if (v35 != 0) {
      goto LABEL_39;
    }
  }
  else {
    v31 = 0;
    if (v15 != 0) {
      v32 = *((_QWORD*)v30 + 1);
      if (v32 != 0) {
        v31 = memcmp_plt(v32, v15, v8) != 0;
      }
    }
    v33 = *((unsigned __int8*)a1 + 89);
    *((_BYTE*)a1 + 90) = v31;
    if (v33 != 0) {
    LABEL_39:
      *((_BYTE*)a1 + 89) = 1;
      if (*((_BYTE*)a1 + 95) != 0) {
        goto LABEL_40;
      }
      goto LABEL_46;
    }
  }
  *((_BYTE*)a1 + 89) = a1[16] != *((_DWORD*)a2 + 8);
  if (*((_BYTE*)a1 + 95) != 0) {
  LABEL_40:
    *((_BYTE*)a1 + 95) = 1;
    v34 = *((_QWORD*)a1 + 98);
    if (v34 == 0) {
      goto LABEL_41;
    }
  LABEL_47:
    if (*(_DWORD*)(*a2 + 244) <=
        *(_DWORD*)(*(_QWORD*)(a3 + 64) + 4LL * (unsigned int)a1[198] + 14844)) {
      LODWORD(v34) = 0;
      if (!v28) {
        goto LABEL_56;
      }
    }
    else {
      v75 = v4;
      v36 = CudaDriverRoutine_cc6f0((__int64)a1, (__int64)a2);
      v37 = *((_QWORD*)a1 + 3);
      v38 = v36;
      v39 = *(int**)(v37 + 376);
      v40 = CudaDriverRoutine_98340(*((_QWORD*)a1 + 150));
      v42 = CudaDriverRoutine_1a2980(v39, v40);
      v43 = (__int64*)CudaDriverRoutine_99830(*((_QWORD*)a1 + 150), v38);
      result = cuda_driver_96040(v43, (__int64)v82_.v82, 1u);
      if ((_DWORD)result != 0) {
        return result;
      }
      if (*(_BYTE*)(v37 + 415) == 0 && *((_BYTE*)a1 + 941) == 0) {
        v44 = CudaDriverRoutine_99830(*((_QWORD*)a1 + 150), a1[198]);
        CudaDriverRoutine_968c0(v44, *((__int64**)a1 + 98), 1u,
                                *(__int64**)(v42 + 152));
        **((_QWORD**)a1 + 98) = 0;
      }
      v45 = v42 + 8LL * v38;
      v4 = v75;
      v46 = 8LL * atomic_fetch_add(
                      (atomic_uint* volatile)(v42 + 4LL * v38 + 136), 1u);
      *(_QWORD*)(*(_QWORD*)(v45 + 56) + v46) = v82_.v82[0];
      v47 = *((_QWORD*)a1 + 150);
      *((_QWORD*)a1 + 98) = *(_QWORD*)(v45 + 56) + v46;
      v48 = *(__int128**)(*(_QWORD*)(v45 + 56) + v46);
      v49 = *v48;
      v50 = *((_QWORD*)a1 + 97) +
            24LL * *(unsigned int*)(*(_QWORD*)(v47 + 64) + 11708LL);
      *(_QWORD*)(v50 + 16) = *((_QWORD*)v48 + 2);
      *(_OWORD*)v50 = v49;
      *((_WORD*)a1 + 44) = 257;
      a1[198] = v38;
      *((_BYTE*)a1 + 90) = 1;
      *((_BYTE*)a1 + 95) = 1;
      if ((*(_BYTE*)(*(_QWORD*)(*((_QWORD*)a1 + 150) + 64LL) + 16996LL) & 4) ==
              0 ||
          *((_BYTE*)a1 + 673) != 0) {
        LODWORD(v34) = 1;
        goto LABEL_57;
      }
      v31 = 1;
      v77 = (unsigned int)a1[259];
      if ((int)v77 < 1) {
        v73 = 1;
      }
      else {
        v74 = v15;
        v79 = v8;
        v64 = 0;
        v76 = *((_QWORD*)a1 + 125);
        do {
          v65 = (__int64*)(v76 + 16 * v64);
          if (*((_BYTE*)v65 + 15) == 2) {
            v66 = *v65;
            v67 = *(_BYTE*)(*v65 + 680);
            if (v67 != 0) {
              v68 = *a1;
              for (i = 0; i < v67; ++i) {
                if (*(_DWORD*)(v66 + 684 + 4 * i) == v68) {
                  v70 = *((_QWORD*)a1 + 150);
                  v71 = *(void (**)(__int64, __int64, int*, _QWORD, _QWORD,
                                    __int64))(*(_QWORD*)(v70 + 64) + 18608LL);
                  v72 = CudaDriverRoutine_98340(v70);
                  v71(v72, v66 + 184, a1 + 46, (unsigned int)i, 0, 1);
                  *(_BYTE*)(v66 + 92) = 1;
                  CudaDriverRoutine_c3f20(*v65);
                  v67 = *(_BYTE*)(v66 + 680);
                }
              }
            }
          }
          ++v64;
        } while (v64 != v77);
        v73 = *((unsigned __int8*)a1 + 88);
        v31 = *((unsigned __int8*)a1 + 90);
        v15 = v74;
        v4 = v75;
        LODWORD(v8) = v79;
      }
      LODWORD(v34) = 1;
      if (v73 == 0) {
        goto LABEL_56;
      }
    }
  LABEL_42:
    if (v31 == 0) {
      goto LABEL_78;
    }
  LABEL_57:
    if ((_DWORD)v8 != 0 && ((a1[115] == (_DWORD)v8) & ~(_DWORD)v34) != 0) {
      v51 = *((_QWORD*)a1 + 58);
      v52 = (unsigned int)a1[30];
      if ((_DWORD)v52 != 0) {
        v53 = 0;
        while (*(unsigned __int8*)(v51 + v53) ==
               *(unsigned __int8*)(v15 + v53)) {
          if (v52 == ++v53) {
            LODWORD(v53) = a1[30];
            break;
          }
        }
      }
      else {
        LODWORD(v53) = 0;
      }
      v54 = v8 + 1;
      while (1) {
        v55 = v54 - 2;
        if (v54 - 2 < (unsigned int)a1[31]) {
          break;
        }
        --v54;
        if (*(unsigned __int8*)(v51 + v55) != *(unsigned __int8*)(v15 + v55)) {
          goto LABEL_77;
        }
      }
      v54 = a1[31];
    LABEL_77:
      a1[30] = v53;
      a1[31] = v54;
    }
    else {
      a1[30] = 0;
      a1[31] = v8;
    }
    goto LABEL_78;
  }
LABEL_46:
  *((_BYTE*)a1 + 95) = *(_QWORD*)v4 != *a2;
  v34 = *((_QWORD*)a1 + 98);
  if (v34 != 0) {
    goto LABEL_47;
  }
LABEL_41:
  if (v28) {
    goto LABEL_42;
  }
LABEL_56:
  if (v31 != 0) {
    goto LABEL_57;
  }
  if (*((_BYTE*)a1 + 89) != 0 || *((_BYTE*)a1 + 95) != 0) {
  LABEL_78:
    v56 = *((_BYTE*)a1 + 456);
    *((_QWORD*)a1 + 58) = v15;
    a1[115] = v8;
    *((_BYTE*)a1 + 456) = v56 & 0xFC | 1;
    *(_OWORD*)(a1 + 38) = *(_OWORD*)(a1 + 114);
    v58 = *(_OWORD*)a2;
    v57 = *((_OWORD*)a2 + 1);
    *((_QWORD*)v4 + 4) = a2[4];
    v60 = v80;
    v59 = v81;
    *(_OWORD*)v4 = v58;
    *((_OWORD*)v4 + 1) = v57;
    *((_QWORD*)a1 + 9) = v59;
    *((_QWORD*)a1 + 10) = v60;
    v62 = *(_OWORD*)(*a2 + 128);
    v61 = *(_OWORD*)(*a2 + 144);
    *(_OWORD*)(a1 + 202) = *(_OWORD*)(*a2 + 112);
    *(_OWORD*)(a1 + 206) = v62;
    *(_OWORD*)(a1 + 210) = v61;
    if (*(int*)((char*)((int*)0x24LL) + (_QWORD)CudaDriverData_14321c8) != 0) {
      v82_.v82[3] = v4;
      LODWORD(v82_.v82[0]) = 56;
      v63 = *((_QWORD*)a1 + 3);
      v82_.v82[1] = v63;
      v82_.v82[2] = a1;
      v82_.v85 = v63;
      if (v63 != 0) {
        v82_.v83 = *(_DWORD*)(v63 + 4) == 2;
        LOBYTE(v63) = v82_.v83 && *(_BYTE*)(v63 + 415) != 0;
      }
      else {
        v82_.v83 = false;
      }
      v82_.v84 = v63;
      cuda_driver_20b420(0x13u, 9u, (__int64)v82_.v82);
    }
  }
  return 0;
}

__int64 cuda_driver_db7c0(__int64 a1, unsigned int a2)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 result;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  unsigned __int64 v11;
  __int64 v12;
  struct {
    _DWORD v13[4];
    __int64 v14;
    __int64 v15;
    bool v16;
  } v13_;

  v3 = a2 == 0;
  if (*(unsigned __int8*)(a1 + 1412) == v3) {
    if (*(_DWORD*)(a1 + 4) == 0 && *(_BYTE*)(a1 + 941) != 0) {
      *(_BYTE*)(a1 + 95) = 1;
      CudaDriverRoutine_c3f20(a1);
    }
    return 0;
  }
  *(_BYTE*)(a1 + 1412) = v3;
  if (*(_DWORD*)(a1 + 4) == 0) {
    *(_BYTE*)(a1 + 95) = 1;
    if (CudaDriverData_143590e == 0) {
      if (a2 != 0) {
        if (*(_BYTE*)(a1 + 1413) != 0) {
          *(_BYTE*)(*(_QWORD*)(a1 + 1240) + 4LL) = 1;
          *(_BYTE*)(a1 + 1413) = 0;
        }
      }
      else if (*(_BYTE*)(*(_QWORD*)(a1 + 24) + 410LL) == 0) {
        *(_BYTE*)(a1 + 1413) = 1;
      }
    }
    v8 = cuda_driver_d9500(a1);
    v9 = *(_QWORD*)(a1 + 800);
    v10 = v8;
    if (v9 != 0 && *(_QWORD*)(v9 + 16) >= 2u) {
      v11 = 1;
      v12 = a1;
      do {
        v12 = **(_QWORD**)(v12 + 1056);
        cuda_driver_db7c0(v12, a2);
        ++v11;
      } while (v11 < *(_QWORD*)(*(_QWORD*)(a1 + 800) + 16LL));
    }
    result = v10;
    if (v10 != 0) {
      return result;
    }
  }
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x54LL) + (_QWORD)CudaDriverData_14321c8) !=
      0) {
    v4 = *(_DWORD*)(a1 + 4);
    v13_.v13[0] = 40;
    v5 = *(_QWORD*)(a1 + 24);
    v13_.v13[2] = v4;
    if (v5 != 0 && *(_BYTE*)(v5 + 415) != 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(v5 + 424) + 96LL);
    }
    v13_.v14 = v5;
    v13_.v15 = a1;
    v13_.v16 = *(_BYTE*)(a1 + 1412) == 0;
    cuda_driver_20b420(0x13u, 0x15u, (__int64)v13_.v13);
  }
  return 0;
}

__int64 cuda_driver_dba40(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                          int a5)
{
  __int64 v5;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 i;
  __int64* v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  int* v23;
  unsigned __int64 v24;
  _QWORD* v26;
  _DWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  _OWORD* v38;
  __int64 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  __int128 v43;
  __int128 v44;
  __int128 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  bool v49;
  _DWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 j;
  __int64* v57;
  __int64 v58;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int128 v71;
  __int128 v72;
  __int128 v73;
  __int128 v74;
  __int128 v75;
  _BYTE v76[40];
  struct {
    int v77;
    char gap44_[4];
    __int64 v78;
    __int64 v79;
    _BYTE* v80;
    __int64 v81;
  } v77_;

  v5 = *(_QWORD*)(a2 + 1112);
  switch (*(_DWORD*)(a3 + 4)) {
  case 0:
    if (*(_QWORD*)(v5 + 32) == *(_QWORD*)(a3 + 32) &&
        *(_DWORD*)(v5 + 40) == *(_DWORD*)(a3 + 40) &&
        *(_DWORD*)(v5 + 44) == *(_DWORD*)(a3 + 44) &&
        *(_DWORD*)(v5 + 48) == *(_DWORD*)(a3 + 48) &&
        *(_DWORD*)(v5 + 52) == *(_DWORD*)(a3 + 52) &&
        *(_DWORD*)(v5 + 56) == *(_DWORD*)(a3 + 56) &&
        *(_DWORD*)(v5 + 60) == *(_DWORD*)(a3 + 60)) {
      v30 = v5 + 456;
      v31 = *(unsigned int*)(a3 + 460);
      if ((*(_BYTE*)(v5 + 456) & 2) != 0) {
        v30 = v5 + 152;
      }
      if ((_DWORD)v31 == *(_DWORD*)(v30 + 4)) {
        v32 = *(_QWORD*)(a3 + 464);
        if ((v32 == 0 || (v33 = *(_QWORD*)(v30 + 8)) == 0 ||
             (unsigned int)memcmp_plt(v33, v32, v31) == 0) &&
            *(_DWORD*)(v5 + 64) == *(_DWORD*)(a3 + 64) &&
            (unsigned int)memcmp_plt(v5 + 856, a3 + 856, 112) == 0) {
          return 0;
        }
      }
    }
    if ((*(_BYTE*)(v5 + 456) & 2) != 0) {
      v34 = *(_QWORD*)(v5 + 464);
    }
    else {
      v34 = 0;
    }
    v48 = *(_QWORD*)(v5 + 24);
    if (*(_DWORD*)((char*)((__int64*)0x38LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) +
                              (_QWORD)CudaDriverData_14225e0) +
                   4) != 0) {
      v77_.v77 = 40;
      if (v48 != 0 && *(_BYTE*)(v48 + 415) != 0) {
        v48 = *(_QWORD*)(*(_QWORD*)(v48 + 424) + 96LL);
      }
      v77_.v78 = v48;
      v77_.v79 = a3;
      v77_.v80 = (_BYTE*)(v5 + 32);
      v77_.v81 = v5;
      cuda_driver_20b420(0x13u, 0xFu, (__int64)&v77_.v77);
    }
    result = cuda_driver_d93c0(v5, (__int64*)(a3 + 32));
    if ((_DWORD)result != 0) {
      goto LABEL_166;
    }
    v49 = *(_BYTE*)(v5 + 94) != 0 ||
          (unsigned int)memcmp_plt(v5 + 856, a3 + 856, 112) != 0;
    *(_BYTE*)(v5 + 94) = v49;
    v71 = *(_OWORD*)(a3 + 856);
    v72 = *(_OWORD*)(a3 + 888);
    *(_OWORD*)(v5 + 872) = *(_OWORD*)(a3 + 872);
    *(_OWORD*)(v5 + 888) = v72;
    *(_OWORD*)(v5 + 856) = v71;
    v73 = *(_OWORD*)(a3 + 920);
    v74 = *(_OWORD*)(a3 + 936);
    v75 = *(_OWORD*)(a3 + 952);
    *(_OWORD*)(v5 + 904) = *(_OWORD*)(a3 + 904);
    *(_OWORD*)(v5 + 920) = v73;
    *(_OWORD*)(v5 + 936) = v74;
    *(_OWORD*)(v5 + 952) = v75;
    result = cuda_driver_d9500(v5);
    if ((_DWORD)result != 0) {
      goto LABEL_166;
    }
    result = CudaDriverRoutine_120770(
        *(_QWORD*)(v5 + 1200), *(_QWORD*)(v5 + 24), v5, *(_QWORD*)(v5 + 32),
        v34, *(_QWORD*)(v5 + 1208));
    if ((_DWORD)result != 0) {
      goto LABEL_166;
    }
    return result;
  case 1:
    if (*(_DWORD*)(v5 + 4) != 0) {
      if ((unsigned int)memcmp_plt(v5 + 536, a3 + 536, 200) == 0) {
        return 0;
      }
    }
    else if ((unsigned int)memcmp_plt(*(_QWORD*)(v5 + 800) + 496LL, a3 + 536,
                                      200) == 0) {
      return 0;
    }
    v65 = *(_QWORD*)(v5 + 24);
    if (*(_DWORD*)((char*)((__int64*)0x38LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) +
                              (_QWORD)CudaDriverData_14225e0) +
                   4) != 0) {
      v77_.v77 = 40;
      if (v65 != 0 && *(_BYTE*)(v65 + 415) != 0) {
        v65 = *(_QWORD*)(*(_QWORD*)(v65 + 424) + 96LL);
      }
      v77_.v78 = v65;
      v77_.v79 = a3;
      v77_.v80 = (_BYTE*)(v5 + 536);
      v77_.v81 = v5;
      cuda_driver_20b420(0x13u, 0xFu, (__int64)&v77_.v77);
    }
    result = CudaDriverRoutine_d9900(v5, a3 + 40, a3 + 536);
    if ((_DWORD)result != 0) {
      goto LABEL_166;
    }
    return result;
  case 2:
    if (*(_DWORD*)(v5 + 4) != 0) {
      v35 = (_QWORD*)(v5 + 40);
    }
    else {
      v35 = (_QWORD*)(*(_QWORD*)(v5 + 800) + 24LL);
    }
    if (*v35 == *(_QWORD*)(a3 + 40) && v35[1] == *(_QWORD*)(a3 + 48) &&
        v35[2] == *(_QWORD*)(a3 + 56) && v35[3] == *(_QWORD*)(a3 + 64) &&
        v35[4] == *(_QWORD*)(a3 + 72) && v35[5] == *(_QWORD*)(a3 + 80)) {
      return 0;
    }
    CudaDriverRoutine_d9140((__int64)v76, (__int64)v35);
    v64 = *(_QWORD*)(v5 + 24);
    if (*(_DWORD*)((char*)((__int64*)0x38LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) +
                              (_QWORD)CudaDriverData_14225e0) +
                   4) != 0) {
      v77_.v77 = 40;
      if (v64 != 0 && *(_BYTE*)(v64 + 415) != 0) {
        v64 = *(_QWORD*)(*(_QWORD*)(v64 + 424) + 96LL);
      }
      v77_.v78 = v64;
      v77_.v79 = a3;
      v77_.v80 = v76;
      v77_.v81 = v5;
      cuda_driver_20b420(0x13u, 0xFu, (__int64)&v77_.v77);
    }
    result = CudaDriverRoutine_d9700(v5, (__int64*)(a3 + 40));
    if ((_DWORD)result != 0) {
      goto LABEL_166;
    }
    return result;
  case 3:
    v29 = *(_QWORD*)(v5 + 24);
    if (*(_DWORD*)((char*)((__int64*)0x38LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) +
                              (_QWORD)CudaDriverData_14225e0) +
                   4) != 0) {
      v77_.v77 = 40;
      if (v29 != 0 && *(_BYTE*)(v29 + 415) != 0) {
        v29 = *(_QWORD*)(*(_QWORD*)(v29 + 424) + 96LL);
      }
      v77_.v78 = v29;
      v77_.v79 = a3;
      v77_.v80 = (_BYTE*)(v5 + 32);
      v77_.v81 = v5;
      cuda_driver_20b420(0x13u, 0xFu, (__int64)&v77_.v77);
    }
    cuda_driver_d6980(v5, (_OWORD*)(a3 + 32));
    return 0;
  case 4:
    v13 = *(_QWORD*)(a2 + 48);
    v14 = *(_QWORD*)(a3 + 48);
    if (a5 == 1) {
      v15 = *(unsigned int*)(v13 + 204);
      if ((_DWORD)v15 != 0) {
        v16 = 0;
        for (i = 0; i < v15; ++i) {
          v18 = (__int64*)(*(_QWORD*)(v13 + 272) + v16);
          v19 = v18[1];
          if (v19 != 0) {
            result = cuda_driver_dba40(a1, *v18, v19, a4, 1);
            if ((_DWORD)result != 0) {
              return result;
            }
            v15 = *(unsigned int*)(v13 + 204);
          }
          v16 += 32;
        }
      }
    }
    else if (*(_DWORD*)(v13 + 200) != 0) {
      v46 = 0;
      v47 = 0;
      do {
        result = cuda_driver_dba40(a1, *(_QWORD*)(*(_QWORD*)(v13 + 280) + v46),
                                   *(_QWORD*)(*(_QWORD*)(v13 + 280) + v46 + 8),
                                   a4, 2);
        if ((_DWORD)result != 0) {
          return result;
        }
        ++v47;
        v46 += 16;
      } while (v47 < *(unsigned int*)(v13 + 200));
    }
    result = CudaDriverRoutine_dcb60(v13, v14);
    if ((_DWORD)result == 0) {
      return 0;
    }
    return result;
  case 6:
  case 7:
    v10 = *(_QWORD*)(v5 + 24);
    v11 = (_QWORD*)(v5 + 32);
    if (*(_DWORD*)((char*)((__int64*)0x38LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) +
                              (_QWORD)CudaDriverData_14225e0) +
                   4) == 0) {
      goto LABEL_84;
    }
    v77_.v77 = 40;
    if (v10 != 0 && *(_BYTE*)(v10 + 415) != 0) {
      v10 = *(_QWORD*)(*(_QWORD*)(v10 + 424) + 96LL);
    }
    v77_.v78 = v10;
    goto LABEL_83;
  case 8:
    v36 = *(_QWORD*)(v5 + 24);
    if (*(_DWORD*)((char*)((__int64*)0x38LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) +
                              (_QWORD)CudaDriverData_14225e0) +
                   4) != 0) {
      v77_.v77 = 40;
      if (v36 != 0 && *(_BYTE*)(v36 + 415) != 0) {
        v36 = *(_QWORD*)(*(_QWORD*)(v36 + 424) + 96LL);
      }
      v77_.v78 = v36;
      v77_.v79 = a3;
      v77_.v80 = (_BYTE*)(v5 + 32);
      v77_.v81 = v5;
      cuda_driver_20b420(0x13u, 0xFu, (__int64)&v77_.v77);
    }
    result = CudaDriverRoutine_d8640((_QWORD*)v5, (__int128*)(a3 + 32));
    if ((_DWORD)result == 0) {
      return result;
    }
    goto LABEL_166;
  case 9:
    v39 = *(_QWORD*)(v5 + 24);
    if (*(_DWORD*)((char*)((__int64*)0x38LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) +
                              (_QWORD)CudaDriverData_14225e0) +
                   4) != 0) {
      v77_.v77 = 40;
      if (v39 != 0 && *(_BYTE*)(v39 + 415) != 0) {
        v39 = *(_QWORD*)(*(_QWORD*)(v39 + 424) + 96LL);
      }
      v77_.v78 = v39;
      v77_.v79 = a3;
      v77_.v80 = (_BYTE*)(v5 + 32);
      v77_.v81 = v5;
      cuda_driver_20b420(0x13u, 0xFu, (__int64)&v77_.v77);
    }
    result = CudaDriverRoutine_d8640((_QWORD*)v5, (__int128*)(a3 + 32));
    if ((_DWORD)result == 0) {
      return result;
    }
    goto LABEL_166;
  case 0xA:
    v37 = *(_QWORD*)(a2 + 152);
    v38 = (_OWORD*)(a2 + 32);
    if (v37 == 0 ||
        *(_QWORD*)(v37 + 24) == *(_QWORD*)(*(_QWORD*)(a3 + 24) + 312LL)) {
      if (*(_DWORD*)((char*)((__int64*)0x38LL) +
                     (_QWORD)CudaDriverData_14321c8 + 4) != 0) {
        v77_.v77 = 40;
        if (a1 != 0 && *(_BYTE*)(a1 + 415) != 0) {
          a1 = *(_QWORD*)(*(_QWORD*)(a1 + 424) + 96LL);
        }
        v77_.v78 = a1;
        v77_.v79 = a3;
        v77_.v80 = (_BYTE*)(a2 + 32);
        v77_.v81 = v5;
        cuda_driver_20b420(0x13u, 0xFu, (__int64)&v77_.v77);
      }
      v40 = *(_OWORD*)(a3 + 48);
      v41 = *(_OWORD*)(a3 + 64);
      v42 = *(_OWORD*)(a3 + 80);
      *v38 = *(_OWORD*)(a3 + 32);
      *(_OWORD*)(a2 + 48) = v40;
      *(_OWORD*)(a2 + 64) = v41;
      *(_OWORD*)(a2 + 80) = v42;
      v43 = *(_OWORD*)(a3 + 96);
      v44 = *(_OWORD*)(a3 + 112);
      v45 = *(_OWORD*)(a3 + 128);
      *(_QWORD*)(a2 + 144) = *(_QWORD*)(a3 + 144);
      *(_OWORD*)(a2 + 112) = v44;
      *(_OWORD*)(a2 + 128) = v45;
      *(_OWORD*)(a2 + 96) = v43;
      return 0;
    }
    else {
      if (*(_DWORD*)((char*)((__int64*)0x38LL) +
                     (_QWORD)CudaDriverData_14321c8 + 4) != 0) {
        v77_.v77 = 40;
        if (a1 != 0 && *(_BYTE*)(a1 + 415) != 0) {
          a1 = *(_QWORD*)(*(_QWORD*)(a1 + 424) + 96LL);
        }
        v77_.v78 = a1;
        v77_.v79 = a3;
        v77_.v80 = (_BYTE*)(a2 + 32);
        v77_.v81 = v5;
        cuda_driver_20b420(0x13u, 0xFu, (__int64)&v77_.v77);
        v37 = *(_QWORD*)(a2 + 152);
      }
      cuda_driver_d2f00(v37);
      result = CudaDriverRoutine_d3940(a2, a3);
      if ((_DWORD)result != 0) {
      LABEL_166:
        *a4 = a3;
      }
    }
    return result;
  case 0xB:
    v12 = *(_QWORD*)(a2 + 40);
    v11 = (_QWORD*)(a2 + 32);
    if (v12 != 0 &&
        *(_QWORD*)(v12 + 24) != *(_QWORD*)(*(_QWORD*)(a3 + 24) + 312LL)) {
      if (*(_DWORD*)((char*)((__int64*)0x38LL) +
                     (_QWORD)CudaDriverData_14321c8 + 4) != 0) {
        v77_.v77 = 40;
        if (a1 != 0 && *(_BYTE*)(a1 + 415) != 0) {
          a1 = *(_QWORD*)(*(_QWORD*)(a1 + 424) + 96LL);
        }
        v77_.v78 = a1;
        v77_.v79 = a3;
        v77_.v80 = (_BYTE*)(a2 + 32);
        v77_.v81 = v5;
        cuda_driver_20b420(0x13u, 0xFu, (__int64)&v77_.v77);
        v12 = *(_QWORD*)(a2 + 40);
      }
      cuda_driver_d2f00(v12);
      CudaDriverRoutine_d39b0((_QWORD*)a2, (_QWORD*)a3);
      return 0;
    }
    if (*(_DWORD*)((char*)((__int64*)0x38LL) + (_QWORD)CudaDriverData_14321c8 +
                   4) != 0) {
      v77_.v77 = 40;
      if (a1 != 0 && *(_BYTE*)(a1 + 415) != 0) {
        a1 = *(_QWORD*)(*(_QWORD*)(a1 + 424) + 96LL);
      }
      v77_.v78 = a1;
    LABEL_83:
      v77_.v79 = a3;
      v77_.v80 = v11;
      v77_.v81 = v5;
      cuda_driver_20b420(0x13u, 0xFu, (__int64)&v77_.v77);
    }
  LABEL_84:
    *v11 = *(_QWORD*)(a3 + 32);
    return 0;
  case 0xC:
    result = CudaDriverRoutine_d84d0(v5, a3 + 32);
    if ((_DWORD)result == 0) {
      return result;
    }
    goto LABEL_166;
  case 0xD:
    v21 = *(_QWORD*)(v5 + 24);
    v23 = *(int**)(v21 + 376);
    v24 = CudaDriverRoutine_98340(*(_QWORD*)(v5 + 1200));
    v26 = *(_QWORD**)(CudaDriverRoutine_1a2980(v23, v24) + 432);
    if (v26 != nullptr) {
      v27 = (_DWORD*)CudaDriverRoutine_12cff0(v26, *(_QWORD*)(a3 + 32) - 1LL);
      v28 = *(_QWORD**)(a3 + 88);
      if (v28 == nullptr) {
        goto LABEL_110;
      }
    }
    else {
      v27 = nullptr;
      v28 = *(_QWORD**)(a3 + 88);
      if (v28 == nullptr) {
        goto LABEL_110;
      }
    }
    v50 = (_DWORD*)CudaDriverRoutine_12cff0(v28, *(_QWORD*)(a3 + 32) - 1LL);
    if (v50 != nullptr && v27 != nullptr) {
      *v27 = *v50;
      v27[1] = v50[1];
    }
  LABEL_110:
    if (*(_DWORD*)(a2 + 44) == 0) {
      return 0;
    }
    if (a5 == 1) {
      v51 = 0;
      while (1) {
        v52 = *(_QWORD*)(*(_QWORD*)(a2 + 48) + 8 * v51);
        v53 = *(_QWORD*)(*(_QWORD*)(a3 + 48) + 8 * v51);
        v54 = *(unsigned int*)(v52 + 204);
        if ((_DWORD)v54 != 0) {
          v55 = 0;
          for (j = 0; j < v54; ++j) {
            v57 = (__int64*)(*(_QWORD*)(v52 + 272) + v55);
            v58 = v57[1];
            if (v58 != 0) {
              result = cuda_driver_dba40(v21, *v57, v58, a4, 1);
              if ((_DWORD)result != 0) {
                return result;
              }
              v54 = *(unsigned int*)(v52 + 204);
            }
            v55 += 32;
          }
        }
        result = CudaDriverRoutine_dcb60(v52, v53);
        if ((_DWORD)result != 0) {
          break;
        }
        if (++v51 >= (unsigned __int64)*(unsigned int*)(a2 + 44)) {
          return 0;
        }
      }
    }
    else {
      v66 = 0;
      while (1) {
        v67 = *(_QWORD*)(*(_QWORD*)(a2 + 48) + 8 * v66);
        v68 = *(_QWORD*)(*(_QWORD*)(a3 + 48) + 8 * v66);
        if (*(_DWORD*)(v67 + 200) != 0) {
          v69 = 0;
          v70 = 0;
          do {
            result = cuda_driver_dba40(
                v21, *(_QWORD*)(*(_QWORD*)(v67 + 280) + v69),
                *(_QWORD*)(*(_QWORD*)(v67 + 280) + v69 + 8), a4, 2);
            if ((_DWORD)result != 0) {
              return result;
            }
            ++v70;
            v69 += 16;
          } while (v70 < *(unsigned int*)(v67 + 200));
        }
        result = CudaDriverRoutine_dcb60(v67, v68);
        if ((_DWORD)result != 0) {
          break;
        }
        if (++v66 >= (unsigned __int64)*(unsigned int*)(a2 + 44)) {
          return 0;
        }
      }
    }
    return result;
  default:
    return 0;
  }
}

__int64 cuda_driver_dcf00(__int64 result, unsigned int a2)
{
  __int64 v2;
  unsigned int v3;
  struct {
    int v4;
    char gap4_[4];
    __int64 v5;
    char gap16_[8];
    unsigned int v6;
    unsigned int v7;
  } v4_;
  __int64 v8;

  v2 = result;
  v3 = atomic_fetch_add((atomic_uint* volatile)(result + 16), a2) + a2;
  if (v3 != 0) {
    if (*(_DWORD*)((char*)((_UNKNOWN*)0xE0LL) +
                   (_QWORD)CudaDriverData_1432140) != 0) {
      v4_.v6 = a2;
      v4_.v7 = v3;
      v4_.v5 = result;
      v4_.v4 = 32;
      return cuda_driver_20b420(2u, 0x38u, (__int64)&v4_.v4);
    }
  }
  else {
    v8 = 0;
    CudaDriverRoutine_121c60(&v8);
    if (*(_DWORD*)((char*)((_UNKNOWN*)0xDCLL) +
                   (_QWORD)CudaDriverData_1432140) != 0) {
      v4_.v5 = v2;
      v4_.v4 = 24;
      cuda_driver_20b420(2u, 0x37u, (__int64)&v4_.v4);
    }
    if (v8 != 0) {
      CudaDriverRoutine_121b30(v8, 0);
    }
    (*(void (**)(_QWORD))(v2 + 8))(*(_QWORD*)v2);
    if (v8 != 0) {
      CudaDriverRoutine_121b30(v8, 1);
    }
    return CudaDriverRoutine_12e340(v2);
  }
  return result;
}

__int64 cuda_driver_dd220(__int64* a1, __int64 a2, unsigned int a3)
{
  __int64 v6;
  __int64* v7;
  unsigned __int64 i;
  __int64 v10;
  bool v11;
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
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  bool v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned int v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64* v75;
  __int64* v76;
  __int64 v77;
  int64x2_t v78;
  __int64 v79;
  int64x2_t v80;
  int64x2_t v81;
  int64x2_t v82;
  unsigned int v83;
  int64x2_t v84;
  unsigned __int64 v85;
  int64x2_t* v86;
  int64x2_t v87;
  unsigned int v88;
  __int64 v89;
  __int64 v90;
  struct {
    char gap32_[8];
    __int64 v91;
    __int128 v92;
    __int128 v93;
    __int128 v94;
    __int128 v95;
    __int128 v96;
    __int128 v97;
    __int128 v98;
    __int128 v99;
    __int128 v100;
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
    __int64 v115;
  } v91_;

  CudaDriverStub_107f90(a1 + 1);
  v7 = a1 + 3;
  v6 = a1[3];
  LODWORD(i) = 0;
  if (v6 != 0 && a3 != 0) {
    for (i = 0; v6 != 0 && i < a3; ++i) {
      while (*(_BYTE*)(v6 + 112) != 0) {
        v6 = *(_QWORD*)(v6 + 120);
        if (v6 == 0) {
          goto LABEL_6;
        }
      }
      *(_QWORD*)(a2 + 8 * i) = v6;
      --*(_DWORD*)(*(_QWORD*)(v6 + 136) + 20LL);
      v6 = *(_QWORD*)(v6 + 120);
      v12 = *(_QWORD*)(a2 + 8 * i);
      if (a1[4] == v12) {
        a1[4] = *(_QWORD*)(v12 + 128);
        v12 = *(_QWORD*)(a2 + 8 * i);
        if (*v7 != v12) {
        LABEL_18:
          *(_QWORD*)(*(_QWORD*)(v12 + 128) + 120LL) = *(_QWORD*)(v12 + 120);
          v13 = *(_QWORD*)(a2 + 8 * i);
          v14 = *(_QWORD*)(v13 + 120);
          if (v14 == 0) {
            goto LABEL_24;
          }
          v15 = *(_QWORD*)(v13 + 128);
          goto LABEL_23;
        }
      }
      else if (*v7 != v12) {
        goto LABEL_18;
      }
      v14 = *(_QWORD*)(v12 + 120);
      *v7 = v14;
      if (v14 != 0) {
        v15 = 0;
      LABEL_23:
        *(_QWORD*)(v14 + 128) = v15;
      }
    LABEL_24:
      *(_QWORD*)(*(_QWORD*)(a2 + 8 * i) + 128LL) = 0;
      v16 = *(_QWORD*)(a2 + 8 * i);
      *(_QWORD*)(v16 + 120) = 0;
    }
  }
LABEL_6:
  v10 = *v7;
  v11 = *v7 == 0 || (unsigned int)i >= a3;
  if (v11) {
    if ((unsigned int)i < a3) {
      goto LABEL_38;
    }
    goto LABEL_88;
  }
  v17 = (__int64*)(a2 + 8LL * (unsigned int)i);
  v18 = (unsigned int)i + 1LL;
  do {
    *v17 = v10;
    v19 = v18;
    --*(_DWORD*)(*(_QWORD*)(v10 + 136) + 20LL);
    v10 = *(_QWORD*)(v10 + 120);
    v20 = *v17;
    if (a1[4] == *v17) {
      a1[4] = *(_QWORD*)(v20 + 128);
      v20 = *v17;
      if (*v7 != *v17) {
      LABEL_29:
        *(_QWORD*)(*(_QWORD*)(v20 + 128) + 120LL) = *(_QWORD*)(v20 + 120);
        v21 = *(_QWORD*)(*v17 + 120);
        if (v21 != 0) {
          v22 = *(_QWORD*)(*v17 + 128);
        LABEL_34:
          *(_QWORD*)(v21 + 128) = v22;
          goto LABEL_35;
        }
        goto LABEL_35;
      }
    }
    else if (*v7 != v20) {
      goto LABEL_29;
    }
    v21 = *(_QWORD*)(v20 + 120);
    *v7 = v21;
    if (v21 != 0) {
      v22 = 0;
      goto LABEL_34;
    }
  LABEL_35:
    LODWORD(i) = i + 1;
    *(_QWORD*)(*v17 + 128) = 0;
    v23 = *v17++;
    *(_QWORD*)(v23 + 120) = 0;
    if (v10 == 0) {
      break;
    }
    v18 = v19 + 1;
  } while (v19 < a3);
  if (v19 >= a3) {
    goto LABEL_88;
  }
LABEL_38:
  CudaDriverStub_108070(a1 + 1);
  v24 = *a1;
  v25 = CudaDriverRoutine_12e510(1, 40);
  if (v25 == 0) {
    v31 = 2;
    CudaDriverStub_107f90(a1 + 1);
    if ((_DWORD)i == 0) {
      goto LABEL_89;
    }
    goto LABEL_51;
  }
  v26 = a3 - (unsigned int)i;
  v89 = a2;
  v27 = v25;
  v28 = *(_QWORD*)(v24 + 80);
  v91_.v115 = 0;
  v91_.v107 = (__typeof__(v91_.v107)){0};
  v29 = ((_DWORD)v26 + 255) & 0xFFFFFF00;
  v91_.v109 = (__typeof__(v91_.v109)){0};
  v91_.v110 = (__typeof__(v91_.v110)){0};
  v91_.v111 = (__typeof__(v91_.v111)){0};
  v91_.v112 = (__typeof__(v91_.v112)){0};
  v91_.v108 = (__typeof__(v91_.v108)){0};
  v91_.v106 = (__typeof__(v91_.v106)){0};
  v91_.v105 = (__typeof__(v91_.v105)){0};
  v91_.v104 = (__typeof__(v91_.v104)){0};
  v91_.v103 = (__typeof__(v91_.v103)){0};
  v91_.v102 = (__typeof__(v91_.v102)){0};
  v91_.v101 = (__typeof__(v91_.v101)){0};
  v91_.v100 = (__typeof__(v91_.v100)){0};
  v91_.v113 = (__typeof__(v91_.v113)){0};
  v91_.v114 = (__typeof__(v91_.v114)){0};
  v91_.v91 = 0x10C000202LL;
  v91_.v92 = (__typeof__(v91_.v92)){0};
  v91_.v93 = (__typeof__(v91_.v93)){0};
  v91_.v94 = (__typeof__(v91_.v94)){0};
  v91_.v95 = (__typeof__(v91_.v95)){0};
  v91_.v96 = (__typeof__(v91_.v96)){0};
  v91_.v97 = (__typeof__(v91_.v97)){0};
  v91_.v98 = (__typeof__(v91_.v98)){0};
  v91_.v99 = (__typeof__(v91_.v99)){0};
  v30 = cuda_driver_1da1b0(v28, &v91_.v91, 96 * v29, (_QWORD*)v27);
  if (v30 != 0) {
    goto LABEL_40;
  }
  v90 = v24;
  v47 = CudaDriverRoutine_12e510(((_DWORD)v26 + 255) & 0xFFFFFF00, 144);
  *(_QWORD*)(v27 + 8) = v47;
  v48 = (unsigned __int64*)(v27 + 8);
  if (v47 == 0) {
    v31 = 2;
    if (*(_QWORD*)v27 != 0) {
      goto LABEL_41;
    }
    goto LABEL_42;
  }
  v49 = *(_QWORD*)v27;
  v88 = a3;
  *(_DWORD*)(v27 + 16) = v29;
  v50 = CudaDriverStub_1db800(v49);
  if ((_DWORD)v29 == 0) {
  LABEL_74:
    CudaDriverStub_107f90(a1 + 1);
    *(_QWORD*)(v27 + 24) = a1[5];
    a1[5] = v27;
    v53 = *(_QWORD*)(v27 + 24);
    if (v53 != 0) {
      *(_QWORD*)(v53 + 32) = v27;
    }
    if (v88 == (_DWORD)i) {
    LABEL_86:
      *(_DWORD*)(v27 + 20) = v29 - v26;
      if ((unsigned int)v29 > (unsigned int)v26) {
        v64 = a1[4];
        v65 = v26 - v29;
        v31 = 0;
        v66 = 144LL * (unsigned int)v26 + 120;
        do {
          v69 = *v48;
          if (v64 != 0) {
            *(_QWORD*)(v69 + v66 + 8) = v64;
            *(_QWORD*)(*v48 + v66) = *(_QWORD*)(a1[4] + 120);
            v70 = *v48;
            v71 = (__int64*)(*v48 + v66);
            v74 = *v71;
            v72 = v71 - 15;
            v73 = v74;
            if (v74 != 0) {
              *(_QWORD*)(v73 + 128) = v72;
              v70 = *v48;
            }
            *(_QWORD*)(a1[4] + 120) = v70 + v66 - 120;
          }
          else {
            *(_QWORD*)(v69 + v66) = *v7;
            v75 = (__int64*)(*v48 + v66);
            v76 = v75 - 15;
            *v7 = (__int64)(v75 - 15);
            v77 = *v75;
            if (v77 != 0) {
              *(_QWORD*)(v77 + 128) = v76;
            }
          }
          v11 = __CFADD__(v65++, 1);
          v64 = *v48 + 144 * v26;
          v68 = *v48 + v66;
          ++v26;
          v66 += 144;
          a1[4] = v68 - 120;
        } while (!v11);
        goto LABEL_89;
      }
    LABEL_88:
      v31 = 0;
      goto LABEL_89;
    }
    if ((unsigned int)v26 >= 0x10) {
      v54 = 0;
      if (__CFADD__((_DWORD)i, v26 - 1) ||
          (unsigned __int64)(v26 - 1) >> 32 != 0) {
        goto LABEL_79;
      }
      if ((unsigned __int64)v48 >=
              v89 + 8 * (v26 + (unsigned __int64)(unsigned int)i) ||
          v89 + 8 * (unsigned __int64)(unsigned int)i >= v27 + 16) {
        v54 = (unsigned int)v26 & 0xFFFFFFFC;
        v78 = COERCE_AS(int64x2_t, CudaDriverData_1115780);
        v79 = v54;
        v80 = vdupq_n_s64(*v48);
        v81 = vdupq_n_s64(0x120u);
        v82 = vdupq_n_s64(4u);
        v83 = i;
        do {
          v79 -= 4;
          LANES128(v84).n128_u64[0] = 144 * LANES128(v78).n128_u64[0];
          v85 = LANES128(v78).n128_u64[1];
          v78 = vaddq_s64(v78, v82);
          LANES128(v84).n128_u64[1] = 144 * v85;
          v86 = (int64x2_t*)(v89 + 8LL * v83);
          v83 += 4;
          v87 = vaddq_s64(v80, v84);
          *v86 = v87;
          v86[1] = vaddq_s64(v87, v81);
        } while (v79 != 0);
        if (v54 == v26) {
          goto LABEL_86;
        }
        goto LABEL_79;
      }
    }
    v54 = 0;
  LABEL_79:
    v55 = ((_BYTE)v26 - (_BYTE)v54) & 7;
    v56 = v54;
    if ((((_BYTE)v26 - (_BYTE)v54) & 7) != 0) {
      v57 = -v54;
      v58 = i + v54;
      v59 = 144 * v54;
      do {
        --v57;
        --v55;
        v60 = *v48 + v59;
        v59 += 144;
        *(_QWORD*)(v89 + 8LL * v58++) = v60;
      } while (v55 != 0);
      v56 = -v57;
    }
    if ((unsigned __int64)(v54 - v26) <= 0xFFFFFFFFFFFFFFF8LL) {
      v61 = 144 * v56 + 1008;
      do {
        v62 = i + v56;
        v56 += 8;
        *(_QWORD*)(v89 + 8LL * v62) = *v48 + v61 - 1008;
        *(_QWORD*)(v89 + 8LL * (v62 + 1)) = *v48 + v61 - 864;
        *(_QWORD*)(v89 + 8LL * (v62 + 2)) = *v48 + v61 - 720;
        *(_QWORD*)(v89 + 8LL * (v62 + 3)) = *v48 + v61 - 576;
        *(_QWORD*)(v89 + 8LL * (v62 + 4)) = *v48 + v61 - 432;
        *(_QWORD*)(v89 + 8LL * (v62 + 5)) = *v48 + v61 - 288;
        *(_QWORD*)(v89 + 8LL * (v62 + 6)) = *v48 + v61 - 144;
        v63 = *v48 + v61;
        v61 += 1152;
        *(_QWORD*)(v89 + 8LL * (v62 + 7)) = v63;
      } while (v26 != v56);
    }
    goto LABEL_86;
  }
  v51 = v50;
  v52 = 0;
  while (1) {
    *(_QWORD*)(*(_QWORD*)(v27 + 8) + v52 + 136) = v27;
    *(_QWORD*)(*(_QWORD*)(v27 + 8) + v52 + 96) = v51;
    *(_BYTE*)(*(_QWORD*)(v27 + 8) + v52 + 112) = 0;
    v30 = CudaDriverRoutine_1ba480((_QWORD*)(*(_QWORD*)(v27 + 8) + v52 + 104),
                                   *(_QWORD*)(v90 + 72));
    if (v30 != 0) {
      break;
    }
    v52 += 144;
    v51 += 96;
    if (36864 * ((unsigned __int64)(unsigned int)(v26 + 255) >> 8) == v52) {
      goto LABEL_74;
    }
  }
LABEL_40:
  v31 = v30;
  a2 = v89;
  if (*(_QWORD*)v27 != 0) {
  LABEL_41:
    CudaDriverStub_1db190(v27);
  }
LABEL_42:
  v32 = *(_QWORD*)(v27 + 8);
  if (v32 != 0) {
    if ((_DWORD)v29 != 0) {
      v33 = 104;
      do {
        CudaDriverRoutine_1ba520(*(_QWORD*)(*(_QWORD*)(v27 + 8) + v33));
        --v29;
        v33 += 144;
      } while (v29 != 0);
      v32 = *(_QWORD*)(v27 + 8);
    }
    CudaDriverRoutine_12e340(v32);
  }
  CudaDriverRoutine_12e340(v27);
  CudaDriverStub_107f90(a1 + 1);
  if ((_DWORD)i != 0) {
  LABEL_51:
    v34 = (unsigned int)(i - 1);
    if ((int)i - 1 < 0) {
      goto LABEL_89;
    }
    v35 = v34 + 1;
    v36 = (__int64*)(a2 + 8LL * (unsigned int)v34);
    do {
      v39 = *v36;
      if (*v36 == 0) {
        goto LABEL_57;
      }
      if (*(_BYTE*)(v39 + 112) == 0) {
        *(_QWORD*)(v39 + 120) = *v7;
        v43 = *v36;
        *v7 = *v36;
        v44 = *(_QWORD*)(v43 + 120);
        if (v44 != 0) {
          *(_QWORD*)(v44 + 128) = v43;
        }
        v37 = a1 + 3;
        if (a1[4] != 0) {
          goto LABEL_56;
        }
        goto LABEL_55;
      }
      v40 = a1[4];
      if (v40 != 0) {
        *(_QWORD*)(v39 + 128) = v40;
        *(_QWORD*)(*v36 + 120) = *(_QWORD*)(a1[4] + 120);
        v41 = *v36;
        v42 = *(_QWORD*)(*v36 + 120);
        if (v42 != 0) {
          *(_QWORD*)(v42 + 128) = v41;
          v41 = *v36;
        }
        *(_QWORD*)(a1[4] + 120) = v41;
      }
      else {
        *(_QWORD*)(v39 + 120) = *v7;
        v37 = v36;
        v45 = *v36;
        *v7 = *v36;
        v46 = *(_QWORD*)(v45 + 120);
        if (v46 == 0) {
          goto LABEL_55;
        }
        *(_QWORD*)(v46 + 128) = v45;
      }
      v37 = v36;
    LABEL_55:
      a1[4] = *v37;
    LABEL_56:
      ++*(_DWORD*)(*(_QWORD*)(*v36 + 136) + 20LL);
      *v36 = 0;
    LABEL_57:
      v38 = v35-- <= 1;
      --v36;
    } while (!v38);
  }
LABEL_89:
  CudaDriverStub_108070(a1 + 1);
  return v31;
}

__int64 cuda_driver_ddc90(__int64* a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 i;
  __int64 j;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned int v28;
  int* v29;
  unsigned int v30;
  struct {
    _QWORD v31[3];
    int v32;
    int v33;
  } v31_;

  v8 = (unsigned int*)CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_71d8 +
                     (_QWORD)CudaDriverData_1422118);
  v9 = CudaDriverRoutine_12e510(1, 272);
  if (v9 != 0) {
    *(_DWORD*)(v9 + 56) = CudaDriverRoutine_12de40(v8 + 69);
    v10 = *(_QWORD*)(a2 + 64);
    *(_QWORD*)(v9 + 64) = v10;
    *(_QWORD*)(v9 + 72) = *(_QWORD*)(a2 + 72);
    v11 = *(_QWORD*)(a2 + 80);
    *(_QWORD*)(v9 + 168) = a2;
    *(_DWORD*)v9 = 1;
    *(_BYTE*)(v9 + 4) = 0;
    *(_QWORD*)(v9 + 16) = v10;
    *(_QWORD*)(v9 + 80) = v11;
    *(_BYTE*)(v9 + 12) &= ~2u;
    CudaDriverRoutine_98850(v9);
    if (a3 == 0) {
      a3 = *(_QWORD*)(a2 + 64) + 19832LL;
    }
    *(_QWORD*)(v9 + 184) = a3;
    v12 = *(_DWORD*)(a3 + 28);
    *(_DWORD*)(v9 + 164) = v12;
    v13 = *(_DWORD*)(a3 + 464);
    *(_DWORD*)(v9 + 160) = v13;
    v14 = *(_DWORD*)(a2 + 164);
    if (v14 < v12) {
      *(_DWORD*)(v9 + 164) = v14;
    }
    v15 = *(_DWORD*)(a2 + 160);
    if (v15 < v13) {
      *(_DWORD*)(v9 + 160) = v15;
    }
    v31_.v31[0] = 0;
    CudaDriverRoutine_107f40((_QWORD*)(v9 + 144), 27, 0);
    v16 = CudaDriverRoutine_205510((__int64*)(v9 + 88), v9);
    if (v16 != 0) {
      goto LABEL_18;
    }
    HIDWORD(v31_.v31[0]) = 22;
    v16 = CudaDriverStub_116790(v9 + 96, v9, v31_.v31);
    if (v16 != 0) {
      goto LABEL_18;
    }
    *(_QWORD*)(*(_QWORD*)(v9 + 96) + 16LL) = v9;
    v17 = (*(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 + (_QWORD)v8) & 2) != 0
              ? 21
              : 28;
    HIDWORD(v31_.v31[0]) = v17;
    v16 = CudaDriverStub_116790(v9 + 104, v9, v31_.v31);
    if (v16 != 0 ||
        (*(_QWORD*)(*(_QWORD*)(v9 + 104) + 16LL) = v9,
         (v16 = CudaDriverRoutine_1ff9c0(v9, 0, (__int64*)(v9 + 128))) != 0) ||
        (v16 = CudaDriverRoutine_1ff9c0(v9, 1, (__int64*)(v9 + 136))) != 0 ||
        (v16 = cuda_driver_1167a0(*(_QWORD*)(v9 + 96))) != 0 ||
        (v16 = cuda_driver_1167a0(*(_QWORD*)(v9 + 104))) != 0) {
    LABEL_18:
      v18 = v16;
      v19 = *(_QWORD*)(v9 + 104);
      if (v19 != 0) {
        CudaDriverRoutine_116fa0(v19);
        *(_QWORD*)(v9 + 104) = 0;
      }
      v20 = *(_QWORD*)(v9 + 96);
      if (v20 != 0) {
        CudaDriverRoutine_116fa0(v20);
        *(_QWORD*)(v9 + 96) = 0;
      }
      CudaDriverRoutine_2056d0(*(_QWORD*)(v9 + 88));
      CudaDriverRoutine_107f60((_QWORD*)(v9 + 144));
      *(_QWORD*)(v9 + 88) = 0;
      cuda_driver_ddfc0(v9);
      v9 = 0;
    }
    else {
      for (i = *(_QWORD*)(v9 + 128); i != 0; i = *(_QWORD*)(i + 72)) {
        if (*(_BYTE*)(i + 32) != 0) {
          v16 = CudaDriverRoutine_202e80(*(_QWORD*)(i + 24));
          if (v16 != 0) {
            goto LABEL_18;
          }
          *(_BYTE*)(i + 32) = 0;
        }
      }
      for (j = *(_QWORD*)(v9 + 136); j != 0; j = *(_QWORD*)(j + 72)) {
        if (*(_BYTE*)(j + 32) != 0) {
          v16 = CudaDriverRoutine_202e80(*(_QWORD*)(j + 24));
          if (v16 != 0) {
            goto LABEL_18;
          }
          *(_BYTE*)(j + 32) = 0;
        }
      }
      CudaDriverStub_107f90_alt1(a2 + 16568);
      *(_QWORD*)(v9 + 264) = *(_QWORD*)(a2 + 16560);
      *(_QWORD*)(a2 + 16560) = v9;
      v24 = *(_QWORD*)(v9 + 264);
      if (v24 != 0) {
        *(_QWORD*)(v24 + 256) = v9;
      }
      CudaDriverStub_108070_alt1(a2 + 16568);
      v25 = *(_QWORD*)(v9 + 168);
      v26 = 2;
      *(_DWORD*)(v9 + 8) = 3;
      v27 = *(_DWORD*)(v25 + 188);
      if (v27 == 3) {
        v26 = 21;
        v28 = 0;
      }
      else {
        v28 = 87;
      }
      if (*(_DWORD*)(CudaDriverData_1432130[v26] + 4LL * v28) != 0) {
        v31_.v31[1] = v25;
        v31_.v31[2] = v9;
        v29 = *(int**)(v9 + 64);
        LODWORD(v31_.v31[0]) = 32;
        v31_.v32 = *v29;
        v31_.v33 = a4;
        if (v27 == 3) {
          v30 = 21;
        }
        else {
          v30 = 2;
        }
        cuda_driver_20b420(v30, v28, (__int64)v31_.v31);
      }
      v18 = 0;
    }
  }
  else {
    v18 = 2;
  }
  *a1 = v9;
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_71d8 + (_QWORD)v8);
  return v18;
}

__int64 cuda_driver_ddfc0(__int64 a1)
{
  void* v2;
  __int64 v3;
  __int64 v4;
  int v5;
  char* v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  struct {
    int v26;
    char gap12_[4];
    __int64 v27;
  } v26_;

  v2 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_71d8 +
                     (_QWORD)CudaDriverData_1422118);
  v3 = *(_QWORD*)(a1 + 168);
  v4 = 16;
  v5 = *(_DWORD*)(v3 + 188);
  v6 = (char*)CudaDriverData_14225e0;
  if (v5 == 3) {
    v4 = 168;
  }
  v7 = *(_QWORD*)((char*)CudaDriverData_14225e0 + v4);
  if (v5 == 3) {
    v8 = 0;
  }
  else {
    v8 = 88;
  }
  if (*(_DWORD*)(v7 + 4LL * v8) != 0) {
    v26_.v27 = a1;
    v26_.v26 = 24;
    if (v5 == 3) {
      v9 = 21;
    }
    else {
      v9 = 2;
    }
    cuda_driver_20b420(v9, v8, (__int64)&v26_.v26);
  }
  CudaDriverRoutine_98190(a1, 0);
  *(_DWORD*)(a1 + 8) = 1;
  CudaDriverStub_107f90_alt1(v3 + 16568);
  if (a1 == *(_QWORD*)(v3 + 16560)) {
    v10 = *(_QWORD*)(a1 + 264);
    *(_QWORD*)(v3 + 16560) = v10;
    if (v10 != 0) {
      v11 = 0;
      goto LABEL_17;
    }
  LABEL_18:
    *(_QWORD*)(a1 + 256) = 0;
    *(_QWORD*)(a1 + 264) = 0;
    goto LABEL_19;
  }
  if (*(_OWORD*)(a1 + 256) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 256) + 264LL) = *(_QWORD*)(a1 + 264);
    v10 = *(_QWORD*)(a1 + 264);
    if (v10 != 0) {
      v11 = *(_QWORD*)(a1 + 256);
    LABEL_17:
      *(_QWORD*)(v10 + 256) = v11;
      goto LABEL_18;
    }
    goto LABEL_18;
  }
LABEL_19:
  v12 = *(_QWORD**)(a1 + 128);
  if (v12 != nullptr) {
    *v12 = v3;
    **(_QWORD**)(*(_QWORD*)(a1 + 128) + 24LL) = v3;
    *(_QWORD*)(*(_QWORD*)(a1 + 128) + 72LL) = *(_QWORD*)(v3 + 17664);
    v13 = *(_QWORD*)(a1 + 128);
    *(_QWORD*)(v3 + 17664) = v13;
    v14 = *(_QWORD*)(v13 + 72);
    if (v14 != 0) {
      *(_QWORD*)(v14 + 80) = v13;
    }
  }
  v15 = *(_QWORD**)(a1 + 136);
  if (v15 != nullptr) {
    *v15 = v3;
    **(_QWORD**)(*(_QWORD*)(a1 + 136) + 24LL) = v3;
    *(_QWORD*)(*(_QWORD*)(a1 + 136) + 72LL) = *(_QWORD*)(v3 + 17664);
    v16 = *(_QWORD*)(a1 + 136);
    *(_QWORD*)(v3 + 17664) = v16;
    v17 = *(_QWORD*)(v16 + 72);
    if (v17 != 0) {
      *(_QWORD*)(v17 + 80) = v16;
    }
  }
  CudaDriverStub_108070_alt1(v3 + 16568);
  v18 = *(_QWORD*)(a1 + 104);
  if (v18 != 0) {
    CudaDriverRoutine_116fa0(v18);
    *(_QWORD*)(a1 + 104) = 0;
  }
  v19 = *(_QWORD*)(a1 + 96);
  if (v19 != 0) {
    CudaDriverRoutine_116fa0(v19);
    *(_QWORD*)(a1 + 96) = 0;
  }
  CudaDriverRoutine_2056d0(*(_QWORD*)(a1 + 88));
  CudaDriverRoutine_107f60((_QWORD*)(a1 + 144));
  *(_QWORD*)(a1 + 88) = 0;
  v20 = 16;
  v21 = *(_DWORD*)(v3 + 188);
  if (v21 == 3) {
    v20 = 168;
  }
  v22 = *(_QWORD*)&v6[v20];
  if (v21 == 3) {
    v23 = 0;
  }
  else {
    v23 = 89;
  }
  if (*(_DWORD*)(v22 + 4LL * v23) != 0) {
    v26_.v27 = a1;
    v26_.v26 = 24;
    if (v21 == 3) {
      v24 = 21;
    }
    else {
      v24 = 2;
    }
    cuda_driver_20b420(v24, v23, (__int64)&v26_.v26);
  }
  CudaDriverRoutine_98870(a1);
  return CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_71d8 +
                                  (_QWORD)v2);
}

__int64 cuda_driver_df460(unsigned int a1)
{
  __int64 v2;
  unsigned int v3;
  int v5;
  void* v6;
  char v7;

  LODWORD(v2) = CudaDriverRoutine_1212d0();
  if ((_DWORD)v2 == 0) {
    LODWORD(v2) = CudaDriverRoutine_df5c0(a1);
    if ((_DWORD)v2 == 0) {
      v2 = CudaDriverRoutine_10c880();
      if ((_DWORD)v2 == 0) {
        v5 = CudaDriverStub_4f840(v2);
        if (v5 == -1) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"Failed to get kernel bits from the OS\n");
          v3 = 304;
          goto LABEL_5;
        }
        v6 = CudaDriverData_1422118;
        v7 = v5 != 0 ? 2 : 0;
        *((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) =
            *((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 +
              2) &
                0xFD |
            v7;
        CudaDriverRoutine_64460();
        LODWORD(v2) = CudaDriverRoutine_1243c0();
        if ((_DWORD)v2 == 0) {
          LODWORD(v2) = CudaDriverRoutine_12b0c0();
          if ((_DWORD)v2 == 0) {
            LODWORD(v2) = CudaDriverRoutine_12f4c0();
            if ((_DWORD)v2 == 0) {
              if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v6) != 0 ||
                  (LODWORD(v2) = CudaDriverRoutine_12f540(), (_DWORD)v2 == 0)) {
                LODWORD(v2) = CudaDriverRoutine_1a3f00(
                    (__int64*)((char*)((_UNKNOWN*)0x1510LL) + (_QWORD)v6), 0,
                    0x8000000000000000LL, 1, 1);
                if ((_DWORD)v2 == 0) {
                  *(_QWORD*)((char*)((_UNKNOWN*)0x10B0LL) + (_QWORD)v6) = 5;
                  *(_DWORD*)((char*)((_UNKNOWN*)0x10C0LL) + (_QWORD)v6) = 0;
                  *(_QWORD*)((char*)((_UNKNOWN*)0x1578LL) + (_QWORD)v6) = -1;
                  v2 = CudaDriverRoutine_10c940(a1);
                  if ((_DWORD)v2 == 0) {
                    if ((*(_WORD*)((_BYTE*)((_UNKNOWN*)0x1870LL) + (_QWORD)v6) &
                         1) != 0 &&
                        (*((_BYTE*)&CudaDriverRoutine_4350 + (_QWORD)v6) &
                         0x10) == 0) {
                      v3 = CudaDriverStub_4f840(v2);
                      if (v3 == 0) {
                        return v3;
                      }
                      goto LABEL_5;
                    }
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
  v3 = v2;
LABEL_5:
  CudaDriverRoutine_10cda0();
  CudaDriverRoutine_12b160();
  CudaDriverRoutine_124d80();
  CudaDriverRoutine_e1b60();
  return v3;
}

__int64 cuda_driver_e2030()
{
  void* v0;
  __int64 result;

  v0 = CudaDriverData_1423268;
  result = CudaDriverRoutine_107f40(CudaDriverData_1423268, 2, 0);
  *((_BYTE*)((__int64*)0x10LL) + (_QWORD)v0) = 0;
  return result;
}

__int64 cuda_driver_e20c0(__int64 a1, unsigned int a2)
{
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) < 2u) {
    return CudaDriverStub_1dbab0(*(_QWORD*)(a1 + 8)) + 4LL * a2 + 0x10000;
  }
  else {
    return *(_QWORD*)(*(_QWORD*)(a1 + 40) + 24LL) + 4LL * a2 + 0x10000;
  }
}

__int64 cuda_driver_e2200(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v4 = result;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) +
                 (_QWORD)CudaDriverData_1422118) == 0) {
    result = *(_QWORD*)(result + 72);
    if (result != 0) {
      result = CudaDriverRoutine_5d530(result);
    }
  }
  while (1) {
    v6 = *(_QWORD*)(v4 + 1944);
    if (v6 == 0) {
      break;
    }
    v7 = *(_QWORD*)(v6 + 48);
    *(_QWORD*)(v4 + 1944) = v7;
    if (v7 != 0) {
      *(_QWORD*)(v7 + 56) = 0;
    }
    v8 = *(_QWORD*)(v6 + 16);
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    if (v8 != 0) {
      CudaDriverRoutine_203100((__int64*)(v6 + 16));
    }
    v9 = *(_QWORD*)(v6 + 40);
    if (v9 != 0) {
      CudaDriverStub_57450(v9, 2, 0, a4);
    }
    *(_OWORD*)v6 = (__typeof__(*(_OWORD*)v6)){0};
    *(_OWORD*)(v6 + 16) = (__typeof__(*(_OWORD*)(v6 + 16))){0};
    *(_OWORD*)(v6 + 32) = (__typeof__(*(_OWORD*)(v6 + 32))){0};
    *(_OWORD*)(v6 + 48) = (__typeof__(*(_OWORD*)(v6 + 48))){0};
    result = CudaDriverRoutine_12e340(v6);
  }
  v10 = *(_QWORD*)(v4 + 1936);
  if (v10 != 0) {
    if (*(_QWORD*)(v10 + 16) != 0) {
      CudaDriverRoutine_203100((__int64*)(v10 + 16));
    }
    v11 = *(_QWORD*)(v10 + 40);
    if (v11 != 0) {
      CudaDriverStub_57450(v11, 2, 1, a4);
    }
    *(_OWORD*)v10 = (__typeof__(*(_OWORD*)v10)){0};
    *(_OWORD*)(v10 + 16) = (__typeof__(*(_OWORD*)(v10 + 16))){0};
    *(_OWORD*)(v10 + 32) = (__typeof__(*(_OWORD*)(v10 + 32))){0};
    *(_OWORD*)(v10 + 48) = (__typeof__(*(_OWORD*)(v10 + 48))){0};
    result = CudaDriverRoutine_12e340(v10);
    *(_QWORD*)(v4 + 1936) = 0;
  }
  return result;
}

__int64 cuda_driver_e2b00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 result;
  _QWORD* v7;
  __int128 v8;
  __int128 v9;
  int v10;
  _BYTE v11[28];
  __int128 v12;
  _DWORD v13[5];

  v3 = *(_QWORD*)(a1 + 1936);
  *(_OWORD*)a3 = (__typeof__(*(_OWORD*)a3)){0};
  *(_OWORD*)(a3 + 16) = (__typeof__(*(_OWORD*)(a3 + 16))){0};
  *(_OWORD*)(a3 + 32) = (__typeof__(*(_OWORD*)(a3 + 32))){0};
  *(_OWORD*)(a3 + 48) = (__typeof__(*(_OWORD*)(a3 + 48))){0};
  if (*(_DWORD*)(a2 + 48) != 1) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Only local (non-imported) events created "
                                     "as interprocess may be exported.");
    return 400;
  }
  *(_DWORD*)(a3 + 16) = CudaDriverStub_204610(*(_QWORD*)(a2 + 56));
  if ((unsigned int)CudaDriverData_14358d0 < 2) {
    *(_OWORD*)a3 = *(
        _OWORD*)(CudaDriverStub_1d8c10(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 72LL)) +
                 8);
    if ((unsigned int)CudaDriverData_14358d0 < 2) {
      return 0;
    }
  }
  else {
    *(_OWORD*)a3 = *(_OWORD*)(*(_QWORD*)(v3 + 40) + 8LL);
    if ((unsigned int)CudaDriverData_14358d0 < 2) {
      return 0;
    }
  }
  v7 = *(_QWORD**)(v3 + 8);
  *(_QWORD*)v11 = a1;
  memset(v13, 0, sizeof(v13));
  v12 = (__typeof__(v12)){0};
  *(_OWORD*)&v11[12] = (__typeof__(*(_OWORD*)&v11[12])){0};
  *(_DWORD*)&v11[8] = CudaDriverData_1435850;
  result = cuda_driver_helpers_1dca50(v7, (__int64)v11);
  if ((_DWORD)result == 0) {
    if ((_DWORD)v12 != 0 || BYTE8(v12) != 0) {
      return 801;
    }
    else {
      v8 = *(_OWORD*)v11;
      v9 = *(_OWORD*)&v13[1];
      v10 = DWORD1(v12);
      *(_DWORD*)(a3 + 24) = *(_DWORD*)&v11[24];
      *(_DWORD*)(a3 + 28) = v10;
      *(_OWORD*)(a3 + 32) = v8;
      *(_OWORD*)(a3 + 48) = v9;
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_e2c70(__int64 a1, _QWORD* a2, __int64 a3)
{
  int v3;

  *(_OWORD*)a3 = (__typeof__(*(_OWORD*)a3)){0};
  *(_OWORD*)(a3 + 16) = (__typeof__(*(_OWORD*)(a3 + 16))){0};
  *(_OWORD*)(a3 + 32) = (__typeof__(*(_OWORD*)(a3 + 32))){0};
  *(_OWORD*)(a3 + 48) = (__typeof__(*(_OWORD*)(a3 + 48))){0};
  v3 =
      *(_DWORD*)((char*)((_UNKNOWN*)0x10A8LL) + (_QWORD)CudaDriverData_1422118);
  *(_QWORD*)a3 = a1;
  *(_DWORD*)(a3 + 8) = v3;
  return cuda_driver_helpers_1dca50(a2, a3);
}

__int64 cuda_driver_e2ca0(_QWORD* a1, __int128* a2, __int64* a3)
{
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;

  if (*(_QWORD*)a2 == *(_DWORD*)((char*)((_UNKNOWN*)0x10A8LL) +
                                 (_QWORD)CudaDriverData_1422118)) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Error opening locally created eventHandle.");
    return 201;
  }
  else {
    v7 = CudaDriverRoutine_e26e0(a1, a2, (__int64*)&v11);
    if (v7 != 0) {
      v8 = v7;
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Failed to open/find remote IPC semaphore pool.\n");
    }
    else {
      v9 = CudaDriverRoutine_98340((__int64)a1);
      cuda_driver_108520(v9 + 24);
      v8 = cuda_driver_b4bf0(v11, (__int64)a2, a3);
      v10 = CudaDriverRoutine_98340((__int64)a1);
      CudaDriverRoutine_1085d0(v10 + 24);
    }
    return v8;
  }
}

__int64 cuda_driver_e2da0(__int64 a1, __int64 a2, __int64* a3)
{
  int v6;
  void* v7;
  __int64 i;
  unsigned int v9;
  __int64 v10;
  int v11;
  __int64 v12;

  v6 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 21868LL);
  v7 = CudaDriverData_1422118;
  CudaDriverStub_107f90_alt2((char*)((_UNKNOWN*)0x1560LL) +
                             (_QWORD)CudaDriverData_1422118);
  for (i = *(_QWORD*)((char*)((char*)0x1570LL) + (_QWORD)v7); i != 0;
       i = *(_QWORD*)(i + 32)) {
    if (*(_DWORD*)(a2 + 8) == *(_DWORD*)i &&
        *(_DWORD*)(a2 + 32) == *(_DWORD*)(i + 4)) {
      if (a1 == *(_QWORD*)(i + 16)) {
        v9 = 0;
        ++*(_QWORD*)(i + 8);
        goto LABEL_15;
      }
      if (v6 == *(_DWORD*)(i + 24)) {
        v9 = 400;
        goto LABEL_15;
      }
    }
  }
  v10 = CudaDriverRoutine_12e510(1, 48);
  i = v10;
  if (v10 != 0) {
    *(_DWORD*)v10 = *(_DWORD*)(a2 + 8);
    v11 = *(_DWORD*)(a2 + 32);
    *(_DWORD*)(v10 + 24) = v6;
    *(_DWORD*)(v10 + 4) = v11;
    *(_QWORD*)(v10 + 8) = 1;
    *(_QWORD*)(v10 + 16) = a1;
    *(_QWORD*)(v10 + 32) = *(_QWORD*)((char*)((char*)0x1570LL) + (_QWORD)v7);
    *(_QWORD*)((char*)((char*)0x1570LL) + (_QWORD)v7) = v10;
    v12 = *(_QWORD*)(v10 + 32);
    v9 = 0;
    if (v12 != 0) {
      *(_QWORD*)(v12 + 40) = v10;
    }
  }
  else {
    v9 = 2;
  }
LABEL_15:
  CudaDriverStub_108070_alt2((char*)((_UNKNOWN*)0x1560LL) + (_QWORD)v7);
  *a3 = i;
  return v9;
}

__int64 cuda_driver_e2ee0(__int64 a1, __int64 a2)
{
  void* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v3 = CudaDriverData_1422118;
  CudaDriverStub_107f90_alt2((char*)((_UNKNOWN*)0x1560LL) +
                             (_QWORD)CudaDriverData_1422118);
  v4 = *(_QWORD*)(a2 + 8) - 1LL;
  *(_QWORD*)(a2 + 8) = v4;
  if (v4 == 0) {
    if (*(_QWORD*)((char*)((char*)0x1570LL) + (_QWORD)v3) == a2) {
      v5 = *(_QWORD*)(a2 + 32);
      *(_QWORD*)((char*)((char*)0x1570LL) + (_QWORD)v3) = v5;
      if (v5 != 0) {
        v6 = 0;
        goto LABEL_9;
      }
    }
    else {
      v5 = *(_QWORD*)(a2 + 32);
      *(_QWORD*)(*(_QWORD*)(a2 + 40) + 32LL) = v5;
      if (v5 != 0) {
        v6 = *(_QWORD*)(a2 + 40);
      LABEL_9:
        *(_QWORD*)(v5 + 40) = v6;
      }
    }
    *(_OWORD*)(a2 + 16) = (__typeof__(*(_OWORD*)(a2 + 16))){0};
    *(_OWORD*)(a2 + 32) = (__typeof__(*(_OWORD*)(a2 + 32))){0};
    *(_OWORD*)a2 = (__typeof__(*(_OWORD*)a2)){0};
    CudaDriverRoutine_12e340(a2);
    return CudaDriverStub_108070_alt2((char*)((_UNKNOWN*)0x1560LL) +
                                      (_QWORD)v3);
  }
  return CudaDriverStub_108070_alt2((char*)((_UNKNOWN*)0x1560LL) + (_QWORD)v3);
}

__int64 cuda_driver_e2fa0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;

  v10 = 0;
  if (*(_DWORD*)(a2 + 8) == *(_DWORD*)((char*)((_UNKNOWN*)0x10A8LL) +
                                       (_QWORD)CudaDriverData_1422118)) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Error opening locally created memHandle.\n", a4);
    return 201;
  }
  else if ((_BYTE)a4 != 0 && (v6 = a1, v7 = a2,
                              v8 = CudaDriverStub_1dd000(a1, a2, (__int64)&v10),
                              a2 = v7, v9 = v8, a1 = v6, v9 == 0) ||
           (_DWORD)(result = cuda_driver_helpers_1dcb20(a1, a2, &v10)) == 0) {
    *a3 = v10;
    return 0;
  }
  return result;
}

__int64 cuda_driver_e4000(__int64 a1, _QWORD* a2)
{
  char v2;
  int v4;
  _WORD* v5;
  _BYTE* v6;
  void* v7;
  int v8;
  _BYTE* v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char* v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  const char* v29;
  int v30;
  int v31;
  const char* v32;
  int v33;
  int v34;
  __int16 v35;
  char* v36;
  int v37;
  int v38;
  char* v39;
  int v40;
  int v41;
  char* v42;
  int v43;
  int v44;
  char* v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  unsigned int v53;
  _WORD* v54;

  v2 = 1;
  v4 = 0;
  v5 = nullptr;
  v6 = nullptr;
  v7 = CudaDriverData_1422118;
  while (1) {
    if ((v2 & 1) != 0) {
      v8 = 0;
      goto LABEL_6;
    }
    v8 = v4 + 1;
    v9 = (_BYTE*)CudaDriverStub_12e330(v4 + 2);
    if (v9 == nullptr) {
      return 2;
    }
    v6 = v9;
    *v9 = 0;
    v5 = v9;
  LABEL_6:
    if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)v7) != 0) {
      v10 = snprintf_plt(v6, v8, " --use-tex-surf-syscall=%s", "true");
      v11 = v10;
      if ((v2 & 1) != 0) {
        v10 = 0;
      }
      else {
        v11 = 0;
      }
      v6 += v10;
      v4 += v11;
      v8 -= v10;
    }
    if (*(_BYTE*)(a1 + 33) != 0) {
      v12 = snprintf_plt(v6, v8, " -c");
      v13 = v12;
      if ((v2 & 1) != 0) {
        v12 = 0;
      }
      else {
        v13 = 0;
      }
      v6 += v12;
      v4 += v13;
      v8 -= v12;
    }
    v14 = *(_DWORD*)(a1 + 48);
    if ((v14 & 4) != 0) {
      v16 = snprintf_plt(v6, v8, " -O%u", *(_DWORD*)(a1 + 12));
      v17 = v16;
      if ((v2 & 1) != 0) {
        v16 = 0;
      }
      else {
        v17 = 0;
      }
      v4 += v17;
      v6 += v16;
      v8 -= v16;
      if ((*(_DWORD*)(a1 + 48) & 8) == 0) {
      LABEL_18:
        if (*(_BYTE*)(a1 + 20) == 0) {
          goto LABEL_19;
        }
        goto LABEL_30;
      }
    }
    else if ((v14 & 8) == 0) {
      goto LABEL_18;
    }
    v18 = snprintf_plt(v6, v8, " --maxrregcount %u", *(_DWORD*)(a1 + 16));
    v19 = v18;
    if ((v2 & 1) != 0) {
      v18 = 0;
    }
    else {
      v19 = 0;
    }
    v6 += v18;
    v4 += v19;
    v8 -= v18;
    if (*(_BYTE*)(a1 + 20) == 0) {
    LABEL_19:
      v15 = *(_DWORD*)(a1 + 48);
      if ((v15 & 0x20) != 0) {
        goto LABEL_34;
      }
      goto LABEL_20;
    }
  LABEL_30:
    v20 = snprintf_plt(v6, v8, " -g");
    v21 = v20;
    if ((v2 & 1) != 0) {
      v20 = 0;
    }
    else {
      v21 = 0;
    }
    v6 += v20;
    v4 += v21;
    v8 -= v20;
    v15 = *(_DWORD*)(a1 + 48);
    if ((v15 & 0x20) != 0) {
    LABEL_34:
      if (*(_BYTE*)(a1 + 21) != 0) {
        v22 = "true";
      }
      else {
        v22 = "false";
      }
      v23 = snprintf_plt(v6, v8, " --new-sm3x-opt=%s", v22);
      v24 = v23;
      if ((v2 & 1) != 0) {
        v23 = 0;
      }
      else {
        v24 = 0;
      }
      v4 += v24;
      v6 += v23;
      v8 -= v23;
      if ((*(_DWORD*)(a1 + 48) & 0x40) == 0) {
        goto LABEL_46;
      }
      goto LABEL_41;
    }
  LABEL_20:
    if ((v15 & 0x40) != 0) {
    LABEL_41:
      if (*(_BYTE*)(a1 + 22) != 0) {
        v25 = snprintf_plt(v6, v8, " --fast-compile");
        v26 = v25;
        if ((v2 & 1) != 0) {
          v25 = 0;
        }
        else {
          v26 = 0;
        }
        v6 += v25;
        v4 += v26;
        v8 -= v25;
      }
    }
  LABEL_46:
    if (*(_BYTE*)(a1 + 23) != 0) {
      v27 = snprintf_plt(v6, v8, " -lineinfo");
      v28 = v27;
      if ((v2 & 1) != 0) {
        v27 = 0;
      }
      else {
        v28 = 0;
      }
      v6 += v27;
      v4 += v28;
      v8 -= v27;
    }
    v29 = *(const char**)(a1 + 24);
    if (v29 != nullptr) {
      v30 = snprintf_plt(v6, v8, " -dlcm=%s", v29);
      v31 = v30;
      if ((v2 & 1) != 0) {
        v30 = 0;
      }
      else {
        v31 = 0;
      }
      v6 += v30;
      v4 += v31;
      v8 -= v30;
    }
    v32 = *(const char**)(a1 + 40);
    if (v32 != nullptr) {
      v33 = snprintf_plt(v6, v8, " --knob %s", v32);
      v34 = v33;
      if ((v2 & 1) != 0) {
        v33 = 0;
      }
      else {
        v34 = 0;
      }
      v6 += v33;
      v4 += v34;
      v8 -= v33;
    }
    v35 = *(_WORD*)(a1 + 80);
    if ((v35 & 4) != 0) {
      if ((v35 & 8) != 0) {
        v36 = "true";
      }
      else {
        v36 = "false";
      }
      v37 = snprintf_plt(v6, v8, " --disable-smem-reservation=%s", v36);
      v38 = v37;
      if ((v2 & 1) != 0) {
        v37 = 0;
      }
      else {
        v38 = 0;
      }
      v4 += v38;
      v35 = *(_WORD*)(a1 + 80);
      v6 += v37;
      v8 -= v37;
      if ((v35 & 0x10) == 0) {
      LABEL_63:
        if ((v35 & 0x40) == 0) {
          goto LABEL_64;
        }
        goto LABEL_84;
      }
    }
    else if ((v35 & 0x10) == 0) {
      goto LABEL_63;
    }
    if ((v35 & 0x20) != 0) {
      v39 = "true";
    }
    else {
      v39 = "false";
    }
    v40 = snprintf_plt(v6, v8, " --sw4575628=%s", v39);
    v41 = v40;
    if ((v2 & 1) != 0) {
      v40 = 0;
    }
    else {
      v41 = 0;
    }
    v4 += v41;
    v35 = *(_WORD*)(a1 + 80);
    v6 += v40;
    v8 -= v40;
    if ((v35 & 0x40) == 0) {
    LABEL_64:
      if ((v35 & 1) == 0) {
        goto LABEL_65;
      }
      goto LABEL_91;
    }
  LABEL_84:
    if ((v35 & 0x80) != 0) {
      v42 = "true";
    }
    else {
      v42 = "false";
    }
    v43 = snprintf_plt(v6, v8, " --set-texmode-raw=%s", v42);
    v44 = v43;
    if ((v2 & 1) != 0) {
      v43 = 0;
    }
    else {
      v44 = 0;
    }
    v4 += v44;
    v35 = *(_WORD*)(a1 + 80);
    v6 += v43;
    v8 -= v43;
    if ((v35 & 1) == 0) {
    LABEL_65:
      if ((v35 & 0x100) == 0) {
        goto LABEL_66;
      }
      goto LABEL_98;
    }
  LABEL_91:
    if ((v35 & 2) != 0) {
      v45 = "true";
    }
    else {
      v45 = "false";
    }
    v46 = snprintf_plt(v6, v8, " --position-independent-code=%s", v45);
    v47 = v46;
    if ((v2 & 1) != 0) {
      v46 = 0;
    }
    else {
      v47 = 0;
    }
    v4 += v47;
    v6 += v46;
    v8 -= v46;
    if ((*(_WORD*)(a1 + 80) & 0x100) == 0) {
    LABEL_66:
      if ((*(_BYTE*)(a1 + 88) & 1) == 0) {
        goto LABEL_67;
      }
      goto LABEL_102;
    }
  LABEL_98:
    v48 = snprintf_plt(v6, v8, " --minnctapersm=%u", *(_DWORD*)(a1 + 84));
    v49 = v48;
    if ((v2 & 1) != 0) {
      v48 = 0;
    }
    else {
      v49 = 0;
    }
    v6 += v48;
    v4 += v49;
    v8 -= v48;
    if ((*(_BYTE*)(a1 + 88) & 1) == 0) {
    LABEL_67:
      if ((*(_BYTE*)(a1 + 96) & 2) == 0) {
        goto LABEL_68;
      }
      goto LABEL_106;
    }
  LABEL_102:
    v50 = snprintf_plt(v6, v8, " --maxntid=%u", *(_DWORD*)(a1 + 92));
    v51 = v50;
    if ((v2 & 1) != 0) {
      v50 = 0;
    }
    else {
      v51 = 0;
    }
    v6 += v50;
    v4 += v51;
    v8 -= v50;
    if ((*(_BYTE*)(a1 + 96) & 2) == 0) {
    LABEL_68:
      if ((v2 & 1) == 0) {
        goto LABEL_111;
      }
      goto LABEL_109;
    }
  LABEL_106:
    v52 = snprintf_plt(v6, v8, " --override-directive-values");
    if ((v2 & 1) == 0) {
      v6 += v52;
    LABEL_111:
      *v6 = 0;
      if (v4 == 0) {
      LABEL_112:
        v53 = 2;
        v54 = (_WORD*)CudaDriverStub_12e330(2);
        if (v54 == nullptr) {
          return v53;
        }
        v5 = v54;
        *v54 = 32;
      }
      v53 = 0;
      *a2 = v5;
      return v53;
    }
    v4 += v52;
  LABEL_109:
    v2 = 0;
    if (v4 == 0) {
      goto LABEL_112;
    }
  }
}

__int64 cuda_driver_e45e0(int* a1, __int64* a2, unsigned int a3, __int64 a4)
{
  int v4;
  __int64 v5;
  int v7;
  int v8;
  __int64 v9;

  *(_QWORD*)(a4 + 48) = 0;
  *(_OWORD*)(a4 + 16) = (__typeof__(*(_OWORD*)(a4 + 16))){0};
  *(_OWORD*)(a4 + 32) = (__typeof__(*(_OWORD*)(a4 + 32))){0};
  *(_OWORD*)a4 = (__typeof__(*(_OWORD*)a4)){0};
  if (a3 == 0) {
    return 0;
  }
  v4 = 0;
  v5 = a3;
  while (1) {
    v8 = *a1++;
    v7 = v8;
    if (v8 > 19) {
      if ((unsigned int)(v7 - 20) >= 0xE && (unsigned int)(v7 - 10000) >= 7) {
        if (v7 != 10007) {
        LABEL_24:
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"Unrecognized option %u, must be one of CUjit_option\n",
              v7);
          return 1;
        }
        v9 = *a2;
        v4 |= 0x200u;
        *(_WORD*)a4 = v4;
        *(_DWORD*)(a4 + 4) = v9;
      }
      goto LABEL_7;
    }
    if (v7 <= 16) {
      if ((unsigned int)v7 >= 0x11) {
        goto LABEL_24;
      }
      goto LABEL_7;
    }
    if (v7 == 17) {
      break;
    }
    if (v7 == 18) {
      if (*a2 == 0) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Cannot pass NULL option value for "
                                         "CU_JIT_GLOBAL_SYMBOL_ADDRESSES\n");
        return 1;
      }
      *(_QWORD*)(a4 + 32) = *a2;
    }
    else {
      if (v7 != 19) {
        goto LABEL_24;
      }
      *(_DWORD*)(a4 + 40) = *a2;
    }
  LABEL_7:
    ++a2;
    if (--v5 == 0) {
      return 0;
    }
  }
  if (*a2 != 0) {
    *(_QWORD*)(a4 + 24) = *a2;
    goto LABEL_7;
  }
  CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                          (__int64)"Cannot pass NULL option value for "
                                   "CU_JIT_GLOBAL_SYMBOL_NAMES\n");
  return 1;
}

__int64 cuda_driver_unplaced_6_e4750(__int64 a1, unsigned __int64* a2, int a3,
                                     const char* a4, const char* a5)
{
  unsigned __int64 v8;
  const char* v9;
  __int64 v10;
  int v11;
  int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  void* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  const char* v27;
  __int64 v28;
  unsigned __int64 v30;
  char v31[10];

  if (a3 != 0) {
    v30 = 0;
    v8 = 0;
    v27 = nullptr;
    v28 = 0;
  }
  else {
    v9 = *(const char**)(a1 + 56);
    v27 = *(const char**)(a1 + 40);
    v8 = strlen_plt(v27);
    if (v9 != nullptr) {
      v28 = (__int64)v9;
      v30 = strlen_plt(v9);
    }
    else {
      v30 = 0;
      v28 = 0;
    }
  }
  v10 = *(_QWORD*)(a1 + 32);
  v11 = *(_DWORD*)(a1 + 8);
  v12 = *(unsigned __int8*)(a1 + 12);
  v26 = (__int64)a5;
  v13 = strlen_plt(a5);
  v14 = strlen_plt(a4);
  v15 = snprintf_plt_alt1((__int64)v31, 0xAu, "sm_%d", v11);
  v16 = v15;
  v17 = (__int64)a4;
  if (v12 != 0 && (unsigned int)v15 <= 9) {
    v16 = v15 + 1LL;
    *(_WORD*)&v31[strlen_plt(v31)] = 97;
  }
  v18 = CudaDriverData_1422118;
  v19 = v16 + v14 + v13;
  if (*((_BYTE*)((_UNKNOWN*)0x1484LL) + (_QWORD)CudaDriverData_1422118 + 2) !=
      0) {
    v20 = 0;
  }
  else {
    v20 = v16 + v14 + v13;
  }
  v21 = CudaDriverStub_12e330(v8 + v30 + v10 + v20);
  if (v21 == 0) {
    return 2;
  }
  v22 = v21;
  if (*((_BYTE*)((_UNKNOWN*)0x1484LL) + (_QWORD)v18 + 2) != 0) {
    v19 = 0;
  }
  else {
    memcpy_plt(v21, v26, v13);
    memcpy_plt(v22 + v13, v17, v14);
    memcpy_plt(v22 + v14 + v13, (__int64)v31, v16);
  }
  v24 = *(_QWORD*)(a1 + 32);
  memcpy_plt(v22 + v19, *(_QWORD*)(a1 + 24), v24);
  v25 = v24 + v19;
  if (v27 != nullptr) {
    memcpy_plt(v22 + v25, (__int64)v27, v8);
    v25 += v8;
  }
  if (v28 != 0) {
    memcpy_plt(v22 + v25, v28, v30);
    v25 += v30;
  }
  *a2 = v25;
  a2[1] = v22;
  return 0;
}

__int64 cuda_driver_e4b80(__int64 a1, __int64 a2)
{
  int v5;
  _DWORD* v6;
  unsigned int v7;
  _DWORD v8[2];
  __int128 v9;

  if ((*((_BYTE*)&CudaDriverRoutine_4728 + (_QWORD)CudaDriverData_1422118) &
       8) == 0) {
    return CudaDriverRoutine_e4980(a1, (_DWORD**)a2);
  }
  v5 = *(_DWORD*)(a2 + 8);
  v6 = v8;
  v9 = CudaDriverData_1115ce0;
  v8[0] = v5 / 10;
  v8[1] = v5 % 10;
  do {
    *(_DWORD*)(a2 + 8) = v6[1] + 10 * *v6;
    v7 = CudaDriverRoutine_e4980(a1, (_DWORD**)a2);
    if (v7 == 0 && *(_DWORD*)(a2 + 80) == 2) {
      break;
    }
    v6 = (_DWORD*)CudaDriverRoutine_8bab0((__int64)v6, (__int64)&v9, 1);
  } while (v6 != nullptr);
  *(_DWORD*)(a2 + 8) = v5;
  return v7;
}

long double cuda_driver_e4e00(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  long double result;

  CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 40));
  if (*(_BYTE*)(a1 + 48) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 24));
  }
  if (*(_BYTE*)(a1 + 96) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 72));
  }
  if (*(_BYTE*)(a1 + 120) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 112));
  }
  if (a2 != 0 && *(_QWORD*)a1 != 0) {
    cuda_driver_246c80(*(_QWORD*)a1);
  }
  *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
  *(_OWORD*)(a1 + 16) = (__typeof__(*(_OWORD*)(a1 + 16))){0};
  *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
  *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
  *(_OWORD*)(a1 + 64) = (__typeof__(*(_OWORD*)(a1 + 64))){0};
  *(_OWORD*)(a1 + 80) = (__typeof__(*(_OWORD*)(a1 + 80))){0};
  *(_OWORD*)(a1 + 96) = (__typeof__(*(_OWORD*)(a1 + 96))){0};
  *(_OWORD*)(a1 + 112) = (__typeof__(*(_OWORD*)(a1 + 112))){0};
  *(_OWORD*)&result = (__typeof__(*(_OWORD*)&result)){0};
  return result;
}

__int64 cuda_driver_e5650(int* a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6)
{
  bool v11;
  char v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  int v16;
  _BYTE* v17;
  int* v18;
  int v19;
  _BYTE* v20;
  _DWORD* v21;
  __int64 v22;
  char* v23;
  unsigned int v24;
  _DWORD* v25;
  _DWORD* v26;
  _DWORD* v27;
  _DWORD* v28;
  struct {
    _BYTE* v29;
    int v30;
    int v31;
    _BYTE* v32;
    int v33;
    int v34;
    __int64 v35;
    int v36;
    int v37;
    __int128 v38;
    __int128 v39;
  } v29_;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (a6 == 0) {
    result = CudaDriverRoutine_e4c90(a1, a4, a5 + 56, a3),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((_DWORD)result != 0) {
      return result;
    }
    v11 = true;
    v12 = 1;
    goto LABEL_17;
  }
  if (*(_DWORD*)(a6 + 40) != 0 && (a1[4267] & 1) == 0 &&
      *((_BYTE*)a1 + 17069) == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Host relocations require either "
                                     "CU_DEVICE_ATTRIBUTE_PAGEABLE_MEMORY_"
                                     "ACCESS or CU_DEVICE_ATTRIBUTE_CAN_USE"
                                     "_HOST_POINTER_FOR_REGISTERED_MEM\n"),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    return 801;
  }
  if ((*(_WORD*)a6 & 4) == 0) {
    v11 = *(_DWORD*)(a6 + 8) == 0;
    v12 = v11;
    if ((*(_WORD*)a6 & 0x200) == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v11 = false;
  v12 = 0;
  if ((*(_WORD*)a6 & 0x200) != 0) {
  LABEL_11:
    v12 = *(_DWORD*)(a6 + 4) != 0;
  }
LABEL_12:
  result = CudaDriverRoutine_e4c90(a1, a4, a5 + 56, a3),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((_DWORD)result != 0) {
    return result;
  }
  if (*(_DWORD*)(a6 + 8) == 5) {
    v16 = *(_DWORD*)(a5 + 64);
    if (v16 != 2 && *(_DWORD*)(a3 + 16) == 2) {
      *(_DWORD*)(a3 + 16) = v16;
    }
  }
LABEL_17:
  v17 = *(_BYTE**)a5;
  v18 = *(int**)(a5 + 8);
  v29_.v34 = 0;
  v29_.v32 = v17;
  v29_.v38 = (__typeof__(v29_.v38)){0};
  v29_.v39 = (__typeof__(v29_.v39)){0};
  if (v17 == nullptr) {
    v20 = *(_BYTE**)(a5 + 16);
    v21 = *(_DWORD**)(a5 + 24);
    v29_.v33 = 0;
    v29_.v31 = 0;
    v29_.v29 = v20;
    if (v20 == nullptr) {
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  *v17 = 0;
  v19 = *v18;
  v20 = *(_BYTE**)(a5 + 16);
  v21 = *(_DWORD**)(a5 + 24);
  v29_.v33 = v19;
  v29_.v31 = 0;
  v29_.v29 = v20;
  if (v20 != nullptr) {
  LABEL_19:
    *v20 = 0;
    LODWORD(v20) = *v21;
  }
LABEL_20:
  v29_.v30 = (int)v20;
  v22 = *(_QWORD*)(a5 + 40);
  v29_.v37 = 0;
  v29_.v35 = v22;
  if (v22 != 0) {
    LODWORD(v22) = **(_DWORD**)(a5 + 48);
  }
  v29_.v36 = v22;
  LODWORD(v29_.v39) = 0;
  v23 = (char*)CudaDriverData_1422118;
  if ((*((_BYTE*)&CudaDriverRoutine_474c + (_QWORD)CudaDriverData_1422118) &
       1) != 0) {
    CudaDriverStub_107f90_alt2((char*)CudaDriverData_1422118 + 24),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    CudaDriverData_143bd38 = (__int64)&v29_.v29;
  }
  result = CudaDriverRoutine_e4ea0((__int64)&v29_.v29, a1, a2, (_DWORD**)a3,
                                   v12, !v11, v14, v15, nullptr),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((*((_BYTE*)&CudaDriverRoutine_474c + (_QWORD)v23) & 1) != 0) {
    v24 = result;
    CudaDriverData_143bd38 = 0;
    CudaDriverStub_108070_alt2(v23 + 24),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    result = v24;
  }
  v25 = *(_DWORD**)(a5 + 24);
  if (v25 != nullptr) {
    *v25 = v29_.v31;
  }
  v26 = *(_DWORD**)(a5 + 8);
  if (v26 != nullptr) {
    *v26 = v29_.v34;
  }
  v27 = *(_DWORD**)(a5 + 48);
  if (v27 != nullptr) {
    *v27 = v29_.v37;
  }
  v28 = *(_DWORD**)(a5 + 32);
  if (v28 != nullptr) {
    *v28 = v29_.v39;
  }
  return result;
}

__int64 cuda_driver_e6730(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          char a5)
{

#pragma clang fp contract(off)
  int v5;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  __int128 v21;
  __int128 v22;
  __int64 v23;
  int v24;
  int v25;
  char v26;
  __int64 v27;
  int v28;
  __int64 v29;
  _DWORD* v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int128* v36;
  __int128 v37;
  int v38;
  __int128 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _BOOL4 v43;
  __int64 v44;
  __int64 v46;
  unsigned int v47;
  _BOOL8 v48;
  __int64 v49;
  char v50;
  __int128* v51;
  int v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  _QWORD* v59;
  bool v60;
  __int64 v61;
  int v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int128* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64* v76;
  unsigned __int64 v77;
  __int64 v78;
  __int128 v79;
  __int128 v80;
  _OWORD* v81;
  unsigned __int8 v82;
  __int64 v83;
  char v84;
  __int64 v85;
  int v86;
  unsigned int v87;
  __int64 v88;
  __int64 v89;
  __int64* v90;
  __int64 v91;
  bool v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned int v96;
  __int16 v97;
  __int64 v98;
  int v99;
  __int64 v100;
  int v101;
  int v102;
  int v103;
  int v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int128 v110;
  struct {
    __int128 v111;
    __int128 v112;
  } v111_;
  unsigned __int64 v113[3];
  __int64* v114;
  __int64 v115;
  struct {
    long double v116;
    __int128 v117;
  } v116_;
  struct {
    _QWORD v118[4];
    __int128 v119;
    __int64 v120;
    __int64 v121;
    __int128 v122;
    __int128 v123;
    __int128 v124;
    __int128 v125;
    __int128 v126;
    __int128 v127;
    __int128 v128;
  } v118_;

  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = *(_DWORD*)(a3 + 916);
  v114 = nullptr;
  v115 = 0;
  memset(v113, 0, sizeof(v113));
  if (v5 == 1) {
    v11 = 0;
  }
  else {
    v11 = 128;
  }
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 32) + 380LL) & 1) != 0 &&
      *(_DWORD*)(a1 + 1000) != 2) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Function %s is not loaded, cannot launch\n",
        *(const char**)(a1 + 8)),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return 999;
  }
  v12 = *(_QWORD*)(a3 + 16);
  v13 = CudaDriverRoutine_98340(v12),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v14 = *(_DWORD*)(a2 + 152);
  v15 = v13;
  *(_QWORD*)a2 = *(_QWORD*)(a3 + 888);
  *(_QWORD*)(a2 + 16) = *(_QWORD*)(a3 + 896);
  v16 = *(_QWORD*)(a2 + 144);
  *(_DWORD*)(a1 + 824) = v14;
  *(_QWORD*)(a1 + 992) = a2;
  *(_QWORD*)(a1 + 816) = v16;
  ++*(_QWORD*)(a1 + 160);
  v17 = *(_QWORD*)(a2 + 32);
  if (v17 == 0) {
    v17 = atomic_fetch_add(
              (atomic_ullong* volatile)(*(_QWORD*)(v12 + 64) + 21640LL), 1u) +
          1;
    *(_QWORD*)(a2 + 32) = v17;
  }
  *(_QWORD*)(a1 + 88) = v17;
  v109 = 0;
  *(_BYTE*)(a2 + 224) = (a5 & 2) == 0;
  if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_1432148) != 0) {
    v18 = *(_QWORD*)(a1 + 32);
    v19 = *(_DWORD*)(a2 + 164);
    *(_QWORD*)&v21 = *(_QWORD*)(a2 + 156);
    memset(v118_.v118, 0, sizeof(v118_.v118));
    *(_OWORD*)&v116_.v116 = (__typeof__(*(_OWORD*)&v116_.v116)){0};
    v116_.v117 = (__typeof__(v116_.v117)){0};
    LODWORD(v116_.v116) = 208;
    v20 = *(_DWORD*)(a2 + 176);
    v118_.v119 = (__typeof__(v118_.v119)){0};
    v118_.v118[0] = a1;
    v118_.v120 = 0;
    v118_.v122 = (__typeof__(v118_.v122)){0};
    v118_.v121 = a2;
    v118_.v123 = (__typeof__(v118_.v123)){0};
    v118_.v124 = (__typeof__(v118_.v124)){0};
    v118_.v125 = (__typeof__(v118_.v125)){0};
    v118_.v126 = (__typeof__(v118_.v126)){0};
    v118_.v127 = (__typeof__(v118_.v127)){0};
    v118_.v128 = (__typeof__(v118_.v128)){0};
    *((_QWORD*)&v21 + 1) = *(_QWORD*)(a2 + 168);
    v22 = *(_OWORD*)(a2 + 180);
    *(_QWORD*)&v116_.v117 = a3;
    *((_QWORD*)&v116_.v117 + 1) = v18;
    v23 = *(_QWORD*)(a2 + 32);
    v118_.v118[3] = __PAIR64__(v19, v20);
    *(_QWORD*)&v118_.v119 = v23;
    *((_QWORD*)&v118_.v119 + 1) = &v109;
    v24 = a5 & 1 | 2;
    if ((a5 & 2) == 0) {
      v24 = 1;
    }
    if ((a5 & 3) == 0) {
      v24 = 0;
    }
    LOBYTE(v118_.v123) = *(_BYTE*)(a2 + 206);
    v25 = *(unsigned __int8*)(a2 + 227);
    *((_QWORD*)&v116_.v116 + 1) = v13;
    DWORD2(v118_.v122) = v24;
    v26 = *(_BYTE*)(a2 + 204);
    *(_OWORD*)&v118_.v118[1] = v21;
    v27 = *(_QWORD*)(a2 + 212);
    v118_.v124 = v22;
    DWORD1(v118_.v125) = v25;
    BYTE8(v118_.v123) = v26;
    v28 = *(_DWORD*)(a2 + 220);
    *(_QWORD*)&v118_.v128 = v27;
    DWORD2(v118_.v128) = v28;
    LODWORD(v118_.v125) = *(unsigned __int8*)(a2 + 226);
    if (v25 != 0) {
      v29 = *(_QWORD*)(a2 + 248);
      *((_QWORD*)&v118_.v125 + 1) = *(_QWORD*)(a2 + 240);
      *((_QWORD*)&v118_.v126 + 1) = v29;
    }
    v30 = *(_DWORD**)(a3 + 16);
    if (*v30 != 1) {
      v30 = nullptr;
    }
    *(_QWORD*)&v118_.v127 = v30;
    cuda_driver_20b420(3u, 1u, (__int64)&v116_.v116),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v109 != 0) {
      goto LABEL_18;
    }
  }
  v107 = a4;
  v108 = v15;
  v32 = CudaDriverStub_112e30(a3),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v33 = CudaDriverRoutine_116e20(a3),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *(_BYTE*)(a2 + 196) = 1;
  v106 = *(_QWORD*)(v33 + 48);
  if (*(_BYTE*)(a2 + 204) == 0 ||
      (v34 = v33, v35 = cuda_driver_116ef0(a3, (_QWORD*)(a2 + 416)), v33 = v34,
       v35 == 0)) {
    if ((a5 & 2) != 0) {
      *(_BYTE*)(a2 + 202) = 1;
    }
    v36 = (__int128*)(a1 + 112);
    if (*(_BYTE*)(a2 + 472) != 0) {
      v37 = *(_OWORD*)(a1 + 128);
      v38 = *(_DWORD*)(a2 + 476);
      v110 = *v36;
      v111_.v111 = v37;
      v39 = *(_OWORD*)(a1 + 144);
      BYTE8(v110) = 1;
      v40 = *(_QWORD*)(a1 + 32);
      DWORD3(v110) = v38;
      v36 = &v110;
      v111_.v112 = v39;
      DWORD3(v111_.v112) =
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v40 + 24) + 64LL) + 4152LL) * v38 /
          0x64u;
    }
    v41 = v32;
    v42 = v33;
    v35 = CudaDriverRoutine_e6320(v12, a1, a3, v33, v41, a2, (__int64)v36),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v35 == 0) {
      v46 = *(_QWORD*)(v12 + 64);
      v105 = v42;
      v15 = v108;
      if (*(_BYTE*)(v46 + 17013) != 0) {
        (*(void (**)(__int64, __int64, __int64, _QWORD))(v46 + 18616))(v108, a1,
                                                                       a2, 0),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v46 = *(_QWORD*)(v12 + 64);
      }
      if (*(_BYTE*)(v46 + 17014) != 0) {
        (*(void (**)(__int64, __int64, __int64))(v46 + 18624))(v12, a1, a2),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v35 = CudaDriverRoutine_baa00(v108, (_QWORD*)a1, a3),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v35 != 0) {
        goto LABEL_27;
      }
      v35 = CudaDriverRoutine_ba7e0(v108, a1),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v35 != 0) {
        goto LABEL_27;
      }
      if ((a5 & 1) != 0) {
        v47 = CudaDriverRoutine_1297a0(a3, v113),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (v47 != 0) {
          goto LABEL_45;
        }
      }
      CudaDriverRoutine_e7540(v108, a1, a2, a3),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v48 = CudaDriverRoutine_116ff0(a3),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v49 = v107;
      if (v48) {
        v50 = CudaDriverStub_4f840(v48),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (v107 != 0 || v50 != 0) {
          CudaDriverRoutine_1ba4f0((__int64)&v116_.v116, *(_QWORD*)(v12 + 72)),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          cuda_driver_5d860((unsigned __int64)&v116_.v116,
                            *(_QWORD*)(v12 + 72)),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          cuda_driver_1150a0(a3, (__int64)&v116_.v116, 0),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          CudaDriverRoutine_1ba580((__int64)&v116_.v116),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
      }
      if (*(_BYTE*)(v108 + 16382) == 0 ||
          (*(_BYTE*)(a2 + 472) != 0 ? (v51 = &v111_.v111)
                                    : (v51 = (__int128*)(a1 + 128)),
           *(_QWORD*)(v108 + 16064) >=
               (unsigned __int64)(unsigned int)CudaDriverRoutine_99f40(
                   *(_QWORD*)(v12 + 64), v51, *(_DWORD*)(a2 + 288)))) {
        v52 = 0;
        if (*(_BYTE*)(a2 + 228) == 0) {
          goto LABEL_65;
        }
        goto LABEL_59;
      }
      if (*(_QWORD*)(v108 + 1240) != 0) {
        v52 = 14;
        if (*(_BYTE*)(a2 + 228) == 0) {
          goto LABEL_65;
        }
        goto LABEL_59;
      }
      v47 = CudaDriverRoutine_9bfe0(v108),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v47 != 0) {
      LABEL_45:
        v31 = v47;
      LABEL_129:
        v43 = v31 != 0;
        if ((a5 & 1) != 0 && v31 != 0) {
          CudaDriverRoutine_129da0(v113),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v43 = true;
        }
        goto LABEL_29;
      }
      v49 = v107;
      v52 = 14;
      if (*(_BYTE*)(a2 + 228) != 0) {
      LABEL_59:
        v53 = *(_QWORD*)(a2 + 256);
        v54 = *(_DWORD*)(v53 + 48);
        if (v54 == 3) {
          v56 = v53 + 72;
        }
        else {
          v55 = v53 + 80;
          if (v54 != 0) {
            v56 = 0;
          }
          else {
            v56 = v55;
          }
        }
        CudaDriverStub_107f90_alt1(v56),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
    LABEL_65:
      CudaDriverRoutine_9aa40(*(_QWORD*)(v12 + 64)),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      CudaDriverRoutine_205ee0(v52, a3, (__int64)&v115, &v114, v11),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v57 = v105;
      atomic_fetch_add((atomic_ullong* volatile)(v105 + 96), 1u);
      if (*(_BYTE*)(a3 + 225) != 0) {
        *(_BYTE*)(a2 + 229) = 1;
        *(_DWORD*)(a2 + 232) = *(_DWORD*)(v105 + 64);
      }
      v58 = *(unsigned __int8*)(a3 + 224);
      v59 = (_QWORD*)v108;
      *(_BYTE*)(a2 + 209) = v58;
      if (v58 == 0) {
        goto LABEL_73;
      }
      if (*(_BYTE*)(v106 + 80) == 0 ||
          (v60 = CudaDriverRoutine_1bb290(a3), v57 = v105, !v60) ||
          *(_BYTE*)(v106 + 112) != 0 || *(_BYTE*)(a2 + 204) != 0) {
        *(_BYTE*)(a2 + 210) = 0;
        v61 = v49;
        v62 = v58;
        v63 = v57;
        v64 = CudaDriverRoutine_1ffe10(v57),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v65 = v63;
        v58 = v62;
        v49 = v61;
        v59 = (_QWORD*)v108;
        CudaDriverRoutine_5bad0((__int64)v114, (__int64)v114, &v115, v65,
                                (unsigned int)(v64 - 1)),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      LABEL_73:
        v104 = 0;
        goto LABEL_74;
      }
      if (*(_BYTE*)(a3 + 225) != 0) {
        v101 = *(unsigned __int8*)(a2 + 226);
        *(_BYTE*)(a2 + 210) = *(_BYTE*)(a2 + 226) != 0;
        v102 = CudaDriverRoutine_1ffe10(v105),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        CudaDriverRoutine_5bad0((__int64)v114, (__int64)v114, &v115, v105,
                                (unsigned int)(v102 - 1)),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (v101 == 0) {
          v59 = (_QWORD*)v108;
          goto LABEL_73;
        }
      }
      else {
        *(_BYTE*)(a2 + 210) = 1;
        v103 = CudaDriverRoutine_1ffe10(v105),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        CudaDriverRoutine_5bad0((__int64)v114, (__int64)v114, &v115, v105,
                                (unsigned int)(v103 - 1)),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v59 = (_QWORD*)v108;
      *(_BYTE*)(a2 + 198) = 1;
      v104 = 1;
      if (*(_BYTE*)(a3 + 225) != 0) {
        v104 = 1;
        if (*(_BYTE*)(a2 + 226) != 0) {
          *(_BYTE*)(a2 + 230) = 1;
          *(_DWORD*)(a2 + 236) = *(_DWORD*)(v106 + 64);
        }
      }
    LABEL_74:
      cuda_driver_e75e0((__int64)v59, a3, a1, a2, (__int64)v114,
                        (__int64)&v115),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (*(_QWORD*)(a1 + 832) != 0 || *(_QWORD*)(a1 + 840) != 0) {
        CudaDriverRoutine_5ab70((__int64)v114, 0),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v66 = *(_QWORD*)(a3 + 768);
      if (*(_BYTE*)(v66 + 32) != 0) {
        CudaDriverRoutine_5ae20((__int64)v114, &v115, *(_QWORD*)(v66 + 24), 0),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        *(_BYTE*)(*(_QWORD*)(a3 + 768) + 32LL) = 0;
      }
      if (*(_BYTE*)(a2 + 472) != 0) {
        v67 = &v110;
      }
      else {
        v67 = (__int128*)(a1 + 112);
      }
      (*(void (**)(__int64*, __int64*, __int64, __int64, _QWORD, __int64,
                   __int128*, _QWORD))(*(_QWORD*)(v12 + 64) + 18536LL))(
          &v115, v114, v12, a1, *(_QWORD*)(a2 + 32), a2, v67, 0),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v58 != 0 && *(_BYTE*)(v105 + 80) == 0) {
        (*(void (**)(_QWORD*, __int64*, __int64))(*(_QWORD*)(v12 + 64) +
                                                  18560LL))(v59, &v115, a2),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        *(_BYTE*)(v105 + 80) = 1;
      }
      v68 = *(_QWORD*)(a1 + 1056);
      if (v68 != 0 && (*(unsigned __int8 (**)(__int64))(v68 + 16))(a1) != 0) {
        v69 = v105;
        if (*(_BYTE*)(v105 + 184) != 0) {
          v70 = *(_QWORD*)(v105 + 192);
          v71 = CudaDriverRoutine_1ffe10(v70),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v72 = v70;
          v59 = (_QWORD*)v108;
          CudaDriverRoutine_5bad0((__int64)v114, (__int64)v114, &v115, v72,
                                  v71),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v69 = v105;
        }
        v73 = *(_QWORD*)(v69 + 192);
        *(_BYTE*)(v69 + 184) = 1;
        atomic_fetch_add((atomic_ullong* volatile)(v73 + 96), 1u);
        v74 = CudaDriverRoutine_1fff00(v115, (__int64)v59, v73),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v75 = *(_QWORD*)(v12 + 64);
        v115 = v74;
        (*(void (**)(__int64, __int64*, __int64))(v75 + 19720))(v12, &v115, a2),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)(v12 + 64) + 18576LL))(a2, *(_QWORD*)(v73 + 8), 0, 0),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        (*(void (**)(__int64, _QWORD, __int64))(*(_QWORD*)(v12 + 64) +
                                                18600LL))(a2, 0, 3),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v76 = v114;
        v77 = CudaDriverRoutine_5b8d0((__int64)(v114 + 4217)),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v78 = (__int64)v76;
        v59 = (_QWORD*)v108;
        CudaDriverRoutine_1fff70(v73, v78, v77, v73 + 144),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        CudaDriverRoutine_1baa40(&v116_.v116,
                                 *(_QWORD*)(*(_QWORD*)(a3 + 768) + 24LL)),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v79 = *(_OWORD*)(v73 + 144);
        v80 = *(_OWORD*)(v73 + 160);
        v81 = *(_OWORD**)&v116_.v116;
        *(_QWORD*)(*(_QWORD*)&v116_.v116 + 32LL) = *(_QWORD*)(v73 + 176);
        *v81 = v79;
        v81[1] = v80;
        CudaDriverRoutine_1bbd70(*(_QWORD*)(*(_QWORD*)(a3 + 768) + 24LL)),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v49 = v107;
        *(_BYTE*)(*(_QWORD*)(a3 + 768) + 32LL) = 1;
      }
      (*(void (**)(__int64*, __int64*, _QWORD*, __int64, __int64, __int64,
                   _QWORD, __int64, _DWORD))(*(_QWORD*)(v12 + 64) + 18552LL))(
          &v115, v114, v59, a1, a3, v49, *(_QWORD*)(a2 + 32), a2, 0),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v82 = CudaDriverStub_b9300(a1),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v83 = v105;
      if (v5 == 1) {
        v84 = 1;
      }
      else {
        v84 = v104;
      }
      *(_BYTE*)(v105 + 112) = v82;
      if ((v84 & 1) == 0) {
        CudaDriverRoutine_112b40(&v115, a3, 0),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v83 = v105;
      }
      v85 = CudaDriverRoutine_1fff00(v115, v12, v83),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v86 = *(unsigned __int8*)(a2 + 204);
      v115 = v85;
      if (v86 != 0 &&
          (CudaDriverRoutine_8dc70(v85, (__int64)v59, *(_QWORD*)(a2 + 416),
                                   *(_DWORD*)(a2 + 424), *(_DWORD*)(a2 + 428)),
           v87 = *(_DWORD*)(a2 + 424), v115 = v85, v87 >= 2)) {
        v88 = CudaDriverRoutine_8dcd0(v85, v59),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v115 = v88;
      }
      else {
        v88 = v85;
      }
      v115 = CudaDriverRoutine_207630(v49, 0, v88, (__int64)v114),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      cuda_driver_e7650((__int64)v59, a3, a1, a2, (__int64)v114,
                        (__int64)&v115),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      (*(void (**)(__int64*, __int64*, __int64, __int64, __int64))(
          *(_QWORD*)(v12 + 64) + 18640LL))(&v115, v114, a1, v49, a2),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v104 != 0) {
        (*(void (**)(__int64*, __int64))(*(_QWORD*)(v12 + 64) + 18568LL))(&v115,
                                                                          v106),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v89 = v105;
      }
      else {
        v89 = v105;
        if (v58 != 0 && *(_BYTE*)(v106 + 80) != 0) {
          *(_BYTE*)(v106 + 80) = 0;
        }
      }
      CudaDriverRoutine_5b9f0((__int64)v114, v89),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v90 = v114;
      v91 = *(_QWORD*)(*v114 + 8);
      if (*(_BYTE*)(*(_QWORD*)(v91 + 64) + 14824LL) != 0) {
        v92 = cuda_driver_predicates_10e830(v91),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v90 = v114;
        if (!v92) {
          CudaDriverStub_107f90_alt1(*v114 + 32),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          CudaDriverRoutine_5e700(*v114, v105),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          CudaDriverRoutine_5e740(
              *v114,
              *(_QWORD*)(a3 +
                         8LL *
                             (((unsigned __int8)*(_DWORD*)(a3 + 152) + 6) & 7) +
                         88)),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          CudaDriverStub_108070_alt1(*v114 + 32),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v90 = v114;
        }
      }
      cuda_driver_e76d0((__int64)v59, a3, a1, a2, (__int64)v90, (__int64)&v115),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v115 = CudaDriverRoutine_207710(v49, 0, v115),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      cuda_driver_e7750((__int64)v59, a3, a1, a2, (__int64)v114,
                        (__int64)&v115),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v93 = CudaDriverRoutine_5b8d0((__int64)(v114 + 4217)),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (*(_BYTE*)(a2 + 228) == 0) {
      LABEL_116:
        v94 = v105;
        goto LABEL_117;
      }
      v94 = v105;
      if (*(_BYTE*)(a2 + 210) == 0) {
        v95 = *(_QWORD*)(a2 + 256);
        v118_.v118[0] = 0;
        *(_QWORD*)&v116_.v116 = 1;
        *((_QWORD*)&v116_.v116 + 1) = v114;
        v116_.v117 = v93;
        CudaDriverRoutine_b5030(v95, a3, &v116_.v116),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (v96 != 0) {
          v31 = v96;
          goto LABEL_118;
        }
        if (*((_BYTE*)v114 + 34226) != 0) {
          CudaDriverRoutine_5b640(v114, v114[4221], v93, 0, 0,
                                  *((_BYTE*)v114 + 33784), 0, &v115),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          CudaDriverRoutine_5b820((__int64)(v114 + 4217)),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          ++v93;
        }
        goto LABEL_116;
      }
    LABEL_117:
      CudaDriverRoutine_1fff70(v94, (__int64)v114, v93, v94 + 144),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v31 = 0;
    LABEL_118:
      if (CudaDriverRoutine_9acf0(*(_QWORD*)(v12 + 64))) {
        v97 = 128;
      }
      else {
        v97 = 0;
      }
      CudaDriverRoutine_2060c0(a3, v115, v97),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (*(_BYTE*)(a2 + 228) != 0) {
        v98 = *(_QWORD*)(a2 + 256);
        v99 = *(_DWORD*)(v98 + 48);
        if (v99 == 3) {
          v100 = v98 + 72;
        }
        else if (v99 != 0) {
          v100 = 0;
        }
        else {
          v100 = v98 + 80;
        }
        CudaDriverStub_108070_alt1(v100),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        cuda_driver_b64f0(v98, a3),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v15 = v108;
      if (v31 != 0) {
        goto LABEL_129;
      }
      if (v107 != 0) {
        CudaDriverRoutine_2075f0(v107),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      cuda_driver_e77c0(v108, a3, a1, a2),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (cuda_debugger_api_7cff0()) {
        if (cuda_driver_7e7d0(v108)) {
          v31 = CudaDriverRoutine_98190(v12, 0),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          CudaDriverRoutine_7f8f0(v108, a1, *(_QWORD*)(a2 + 32)),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          goto LABEL_129;
        }
      }
      else if (*(_DWORD*)(v108 + 15896) != 0) {
        v31 = CudaDriverStub_98590(v12),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        goto LABEL_129;
      }
    LABEL_18:
      v31 = 0;
    LABEL_28:
      v43 = v31 != 0;
    LABEL_29:
      if (*(_BYTE*)(a3 + 224) != 0 && v43) {
        *(_QWORD*)(a3 + 152) = ((unsigned __int8)*(_DWORD*)(a3 + 152) - 1) & 7;
      }
      if (*(int*)((char*)((int*)0x24LL) + (_QWORD)CudaDriverData_1432148) !=
          0) {
        *((_QWORD*)&v116_.v116 + 1) = v15;
        *(_QWORD*)&v116_.v117 = a3;
        v118_.v118[2] = a2;
        LODWORD(v116_.v116) = 64;
        DWORD1(v116_.v116) = v31;
        *((_QWORD*)&v116_.v117 + 1) = *(_QWORD*)(a1 + 32);
        v44 = *(_QWORD*)(a2 + 32);
        v118_.v118[0] = a1;
        v118_.v118[1] = v44;
        cuda_driver_20b420(3u, 9u, (__int64)&v116_.v116),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      *(_QWORD*)(a1 + 992) = 0;
      return v31;
    }
  }
  v15 = v108;
LABEL_27:
  v31 = v35;
  goto LABEL_28;
}

__int64 cuda_driver_e75e0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6)
{
  struct {
    int v6;
    char gap4_[4];
    __int64 v7;
    __int64 v8;
    __int64 v9;
    __int64 v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
  } v6_;

  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_1432148 +
                 4) != 0) {
    v6_.v7 = result;
    v6_.v8 = a2;
    v6_.v11 = a5;
    v6_.v12 = a6;
    v6_.v6 = 80;
    v6_.v9 = *(_QWORD*)(a3 + 32);
    v6_.v10 = a3;
    v6_.v13 = *(_QWORD*)(a4 + 32);
    v6_.v14 = a4;
    return cuda_driver_20b420(3u, 3u, (__int64)&v6_.v6);
  }
  return result;
}

__int64 cuda_driver_e7650(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6)
{
  unsigned int v6;
  struct {
    int v7;
    char gap12_[4];
    __int64 v8;
    __int64 v9;
    __int64 v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    char gap80_[8];
    int v16;
    unsigned int v17;
  } v7_;

  if (*(_DWORD*)((char*)((__int64*)0x10LL) + (_QWORD)CudaDriverData_1432148) !=
      0) {
    v6 = *(_DWORD*)(a5 + 32);
    v7_.v8 = result;
    v7_.v9 = a2;
    v7_.v12 = a5;
    v7_.v13 = a6;
    v7_.v7 = 88;
    v7_.v10 = *(_QWORD*)(a3 + 32);
    v7_.v11 = a3;
    if (v6 >= 0xC) {
      v6 = 12;
    }
    v7_.v14 = *(_QWORD*)(a4 + 32);
    v7_.v15 = a4;
    v7_.v16 = *(_DWORD*)(a5 + 24);
    v7_.v17 = v6;
    return cuda_driver_20b420(3u, 4u, (__int64)&v7_.v7);
  }
  return result;
}

__int64 cuda_driver_e76d0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6)
{
  unsigned int v6;
  struct {
    int v7;
    char gap12_[4];
    __int64 v8;
    __int64 v9;
    __int64 v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    char gap80_[8];
    int v16;
    unsigned int v17;
  } v7_;

  if (*(_DWORD*)((char*)((__int64*)0x10LL) + (_QWORD)CudaDriverData_1432148 +
                 4) != 0) {
    v6 = *(_DWORD*)(a5 + 32);
    v7_.v8 = result;
    v7_.v9 = a2;
    v7_.v12 = a5;
    v7_.v13 = a6;
    v7_.v7 = 88;
    v7_.v10 = *(_QWORD*)(a3 + 32);
    v7_.v11 = a3;
    if (v6 >= 0xC) {
      v6 = 12;
    }
    v7_.v14 = *(_QWORD*)(a4 + 32);
    v7_.v15 = a4;
    v7_.v16 = *(_DWORD*)(a5 + 24);
    v7_.v17 = v6;
    return cuda_driver_20b420(3u, 5u, (__int64)&v7_.v7);
  }
  return result;
}

__int64 cuda_driver_e7750(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6)
{
  struct {
    int v6;
    char gap4_[4];
    __int64 v7;
    __int64 v8;
    __int64 v9;
    __int64 v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
  } v6_;

  if (*(_DWORD*)((char*)((__int64*)0x18LL) + (_QWORD)CudaDriverData_1432148) !=
      0) {
    v6_.v7 = result;
    v6_.v8 = a2;
    v6_.v11 = a5;
    v6_.v12 = a6;
    v6_.v6 = 80;
    v6_.v9 = *(_QWORD*)(a3 + 32);
    v6_.v10 = a3;
    v6_.v13 = *(_QWORD*)(a4 + 32);
    v6_.v14 = a4;
    return cuda_driver_20b420(3u, 6u, (__int64)&v6_.v6);
  }
  return result;
}

__int64 cuda_driver_e77c0(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  struct {
    int v4;
    char gap4_[4];
    __int64 v5;
    __int64 v6;
    __int64 v7;
    __int64 v8;
    __int64 v9;
    __int64 v10;
  } v4_;

  if (*(_DWORD*)((char*)((__int64*)0x18LL) + (_QWORD)CudaDriverData_1432148 +
                 4) != 0) {
    v4_.v5 = result;
    v4_.v6 = a2;
    v4_.v4 = 64;
    v4_.v7 = *(_QWORD*)(a3 + 32);
    v4_.v8 = a3;
    v4_.v9 = *(_QWORD*)(a4 + 32);
    v4_.v10 = a4;
    return cuda_driver_20b420(3u, 7u, (__int64)&v4_.v4);
  }
  return result;
}

__int64 cuda_driver_e7e60(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  int v10;
  int v11;
  __int64 result;
  unsigned int* v13;
  __int64 v14;
  int* v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;

  if (*(_DWORD*)(a1 + 48) == 0) {
    return 0;
  }
  if (*(_QWORD*)(a1 + 40) == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Kernel Launch Configuration numAttrs is "
                                     "nonzero but attrs is NULL\n");
    return 1;
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if (a4 != 0) {
    v10 = 5;
  }
  else {
    v10 = 4;
  }
  if (a4 != 0) {
    v11 = 3;
  }
  else {
    v11 = 2;
  }
  v33 = v11;
  v34 = v10;
  while (1) {
    v14 = *(_QWORD*)(a1 + 40);
    v15 = (int*)(v14 + v7 + 8);
    switch (*(_DWORD*)(v14 + v7)) {
    case 0:
    case 2:
    case 6:
    case 8:
      break;
    case 1:
      result = CudaDriverRoutine_117620(a2, v14 + v7 + 8);
      goto LABEL_11;
    case 4:
      v28 = CudaDriverRoutine_baff0(*v15);
      if (v28 != 0) {
        v29 = v28;
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Cluster X dimension %d invalid\n",
                                *v15);
        v9 = v29;
      }
      v30 = v14 + v7;
      v31 = CudaDriverRoutine_baff0(*(_DWORD*)(v30 + 12));
      if (v31 != 0) {
        v32 = v31;
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Cluster Y dimension %d invalid\n",
                                *(_DWORD*)(v30 + 12));
        v9 = v32;
      }
      v21 = CudaDriverRoutine_baff0(*(_DWORD*)(v30 + 16));
      if (v21 == 0) {
        goto LABEL_39;
      }
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Cluster Z dimension %d invalid\n",
                              *(unsigned int*)(v30 + 16));
      goto LABEL_38;
    case 5:
      result = CudaDriverRoutine_bb030(*v15);
      goto LABEL_11;
    case 7:
      v22 = *(_QWORD*)v15;
      v23 = *(_DWORD*)(v14 + v7 + 16);
      v24 = CudaDriverRoutine_98340(a2);
      result = cuda_driver_b4d40(v22, v24, v23, v33);
      if ((_DWORD)result != 0) {
        return result;
      }
      if (*(_DWORD*)(v22 + 48) != 0) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"CU_LAUNCH_ATTRIBUTE_PROGRAMMATIC_"
                                         "EVENT only supports local events\n");
        return 801;
      }
      if ((v23 & 1) != 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"CU_LAUNCH_ATTRIBUTE_PROGRAMMATIC_EVENT does not support "
                     "external capture\n");
        return 801;
      }
      break;
    case 9:
      result = CudaDriverRoutine_117740(a2, (unsigned __int8*)(v14 + v7 + 8));
      goto LABEL_11;
    case 0xA:
      result = CudaDriverRoutine_1177d0(*v15);
      goto LABEL_11;
    case 0xB:
      v16 = CudaDriverRoutine_baff0(*v15);
      if (v16 != 0) {
        v17 = v16;
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Preferred cluster X dimension %d invalid\n", *v15);
        v9 = v17;
      }
      v18 = v14 + v7;
      v19 = CudaDriverRoutine_baff0(*(_DWORD*)(v18 + 12));
      if (v19 != 0) {
        v20 = v19;
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Preferred cluster Y dimension %d invalid\n",
            *(_DWORD*)(v18 + 12));
        v9 = v20;
      }
      v21 = CudaDriverRoutine_baff0(*(_DWORD*)(v18 + 16));
      if (v21 != 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Preferred cluster Z dimension %d invalid\n",
            *(unsigned int*)(v18 + 16));
      LABEL_38:
        v9 = v21;
      }
    LABEL_39:
      if (v9 != 0) {
        result = v9;
      }
      else {
        result = v21;
      }
    LABEL_11:
      if ((_DWORD)result == 0) {
        break;
      }
      return result;
    case 0xC:
      v25 = *(_QWORD*)v15;
      v26 = *(_DWORD*)(v14 + v7 + 16);
      v27 = CudaDriverRoutine_98340(a2);
      result = cuda_driver_b4d40(v25, v27, v26, v34);
      if ((_DWORD)result != 0) {
        return result;
      }
      if (*(_DWORD*)(v25 + 48) != 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"CU_LAUNCH_ATTRIBUTE_LAUNCH_COMPLETION_EVENT only "
                     "supports local events\n");
        return 801;
      }
      if ((v26 & 1) != 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"CU_LAUNCH_ATTRIBUTE_LAUNCH_COMPLETION_EVENT does not "
                     "support CU_EVENT_RECORD_EXTERNAL\n");
        return 801;
      }
      break;
    case 0xD:
      if (a4 == 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"CU_LAUNCH_ATTRIBUTE_DEVICE_UPDATABLE_KERNEL_NODE is only "
                     "supported on capturing streams\n");
        return 801;
      }
      if ((unsigned int)*v15 < 2) {
        if (*(_QWORD*)(v14 + v7 + 16) != 0) {
          CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                  (__int64)"deviceUpdatableKernelNode.devNode "
                                           "must be initialized to NULL\n");
          return 1;
        }
        break;
      }
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Invalid value for "
                   "deviceUpdatableKernelNode.deviceUpdatable, only valid "
                   "values are 0 and 1.\n");
      return 1;
    case 0xE:
      if ((unsigned int)*v15 < 0x65) {
        break;
      }
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Invalid preferred shared memory "
                                       "carveout value, must be <= 100\n");
      return 1;
    default:
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Kernel launch configuration attribute "
                                       "%d at index %u is invalid\n",
                              *(_DWORD*)(v14 + v7), v8);
      return 1;
    }
    ++v8;
    v13 = (unsigned int*)(*(_QWORD*)(a1 + 40) + v7);
    v7 += 72;
    *(_QWORD*)(a3 + 8LL * *v13) = v13;
    if (v8 >= *(unsigned int*)(a1 + 48)) {
      return 0;
    }
  }
}

__int64 cuda_driver_e83e0(unsigned int* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  __int64 result;
  int v10;
  int v11;
  int* v12;
  int v13;
  unsigned int* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int* v32;
  int v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  int v38;
  struct {
    __int128 v39;
    __int128 v40;
    __int128 v41;
    __int128 v42;
    __int128 v43;
    __int128 v44;
    __int128 v45;
    __int64 v46;
  } v39_;

  v5 = *(_QWORD*)(a3 + 16);
  v39_.v46 = 0;
  v39_.v40 = (__typeof__(v39_.v40)){0};
  v39_.v41 = (__typeof__(v39_.v41)){0};
  v39_.v42 = (__typeof__(v39_.v42)){0};
  v39_.v43 = (__typeof__(v39_.v43)){0};
  v39_.v39 = (__typeof__(v39_.v39)){0};
  v39_.v44 = (__typeof__(v39_.v44)){0};
  v39_.v45 = (__typeof__(v39_.v45)){0};
  result = cuda_driver_e7e60((__int64)a1, v5, (__int64)&v39_.v39, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  if ((_QWORD)v39_.v41 != 0) {
    v10 = *(_DWORD*)(v39_.v41 + 8);
    v11 = *(_DWORD*)(v39_.v41 + 12);
    v12 = (int*)(v39_.v41 + 16);
  }
  else {
    v10 = *(_DWORD*)(a2 + 444);
    v11 = *(_DWORD*)(a2 + 448);
    v12 = (int*)(a2 + 452);
  }
  v13 = *v12;
  if (*((_QWORD*)&v39_.v41 + 1) != 0) {
    v14 = (unsigned int*)(*((_QWORD*)&v39_.v41 + 1) + 8LL);
  }
  else {
    v14 = (unsigned int*)(a2 + 460);
  }
  v15 = *v14;
  if ((_DWORD)v15 != 0) {
    *(_DWORD*)(a4 + 180) = v10;
    *(_DWORD*)(a4 + 184) = v11;
    *(_DWORD*)(a4 + 188) = v13;
    *(_DWORD*)(a4 + 192) = v15;
    v16 = *((_QWORD*)&v39_.v44 + 1);
    if (*((_QWORD*)&v39_.v44 + 1) == 0) {
      goto LABEL_11;
    }
  LABEL_15:
    v21 = *(_DWORD*)(v16 + 16);
    *(_QWORD*)(a4 + 212) = *(_QWORD*)(v16 + 8);
    *(_DWORD*)(a4 + 220) = v21;
    v17 = *a1;
    v18 = a1[1];
    v19 = a1[2];
    if ((*(_BYTE*)(a2 + 979) & 1) == 0) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v20 = CudaDriverStub_8e230(v15);
  *(_DWORD*)(a4 + 180) = v10;
  *(_DWORD*)(a4 + 184) = v11;
  *(_DWORD*)(a4 + 188) = v13;
  if ((_DWORD)v20 != 0) {
    v16 = *((_QWORD*)&v39_.v44 + 1);
    *(_DWORD*)(a4 + 192) = v20;
    if (v16 != 0) {
      goto LABEL_15;
    }
  }
  else {
    v38 = CudaDriverStub_8e230(v20);
    v16 = *((_QWORD*)&v39_.v44 + 1);
    *(_DWORD*)(a4 + 192) = v38;
    if (v16 != 0) {
      goto LABEL_15;
    }
  }
LABEL_11:
  *(_QWORD*)(a4 + 212) = 0;
  *(_DWORD*)(a4 + 220) = 0;
  v17 = *a1;
  v18 = a1[1];
  v19 = a1[2];
  if ((*(_BYTE*)(a2 + 979) & 1) != 0) {
  LABEL_16:
    v17 = (unsigned int)(*(_DWORD*)(a2 + 444) * v17);
    v18 *= *(_DWORD*)(a2 + 448);
    v19 = (unsigned int)(*(_DWORD*)(a2 + 452) * v19);
  }
LABEL_17:
  *(_DWORD*)(a4 + 144) = v17;
  *(_DWORD*)(a4 + 148) = v18;
  *(_DWORD*)(a4 + 152) = v19;
  v22 = *(_QWORD*)(a4 + 144);
  *(_DWORD*)(a4 + 164) = v19;
  *(_QWORD*)(a4 + 156) = v22;
  v23 = v39_.v46;
  if (v39_.v46 != 0) {
    *(_BYTE*)(a4 + 472) = 1;
    *(_DWORD*)(a4 + 476) = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + v23);
  }
  if ((_QWORD)v39_.v40 != 0) {
    v24 = *(unsigned __int8*)(v39_.v40 + 8);
    *(_BYTE*)(a4 + 204) = v24;
    if (v24 == 0) {
      goto LABEL_25;
    }
  LABEL_23:
    if (*(_DWORD*)(a4 + 424) == 0) {
      *(_QWORD*)(a4 + 424) = 1;
    }
    goto LABEL_25;
  }
  v25 = *(unsigned __int8*)(a4 + 204);
  *(_BYTE*)(a4 + 204) = v25;
  if (v25 != 0) {
    goto LABEL_23;
  }
LABEL_25:
  v26 = v39_.v42;
  if (*((_QWORD*)&v39_.v39 + 1) != 0) {
    v27 = *((_QWORD*)&v39_.v39 + 1) + 8LL;
  }
  else {
    v27 = a3 + 1232;
  }
  *(_QWORD*)(a4 + 368) = v27;
  if (v26 != 0) {
    *(_BYTE*)(a4 + 226) = *(_DWORD*)(v26 + 8);
  }
  v28 = *((_QWORD*)&v39_.v42 + 1);
  if (*((_QWORD*)&v39_.v42 + 1) != 0) {
    *(_BYTE*)(a4 + 227) = 1;
    *(_OWORD*)(a4 + 240) = *(_OWORD*)(v28 + 8);
  }
  v29 = v39_.v45;
  if ((_QWORD)v39_.v45 != 0) {
    *(_BYTE*)(a4 + 228) = 1;
    *(_OWORD*)(a4 + 256) = *(_OWORD*)(v29 + 8);
  }
  v30 = v39_.v43;
  if (*((_QWORD*)&v39_.v43 + 1) != 0) {
    v31 = *((_QWORD*)&v39_.v43 + 1) + 8LL;
  }
  else {
    v31 = a3 + 1268;
  }
  if ((_QWORD)v39_.v44 != 0) {
    v32 = (unsigned int*)(v39_.v44 + 8);
  }
  else {
    v32 = (unsigned int*)(a3 + 1272);
  }
  *(_DWORD*)(a4 + 432) = *(unsigned __int8*)(v31 + *v32);
  if (v30 != 0) {
    v33 = CudaDriverRoutine_9b5e0(*(_QWORD*)(*(_QWORD*)(a3 + 16) + 64LL),
                                  *(_DWORD*)(v30 + 8));
    v34 = *(unsigned int*)(a4 + 144);
    v35 = *(_DWORD*)(a4 + 148);
    v36 = *(unsigned int*)(a4 + 152);
    *(_DWORD*)(a4 + 436) = v33;
    result = CudaDriverRoutine_ba240(a2, v34, v35, v36);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  else {
    *(_DWORD*)(a4 + 436) = *(_DWORD*)(a3 + 60);
    result = CudaDriverRoutine_ba240(a2, v17, v18, v19);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  v37 = CudaDriverRoutine_98340(*(_QWORD*)(a3 + 16));
  if (v10 != 0 &&
      (*(_DWORD*)(v37 + 188) == 3 || CudaDriverRoutine_99720(v37))) {
    return 801;
  }
  result = cuda_driver_ba410(a2, *(_DWORD*)(a4 + 180), *(_DWORD*)(a4 + 184),
                             *(_DWORD*)(a4 + 188), *(_DWORD*)(a4 + 156),
                             *(_DWORD*)(a4 + 160), *(_DWORD*)(a4 + 164));
  if ((_DWORD)result == 0) {
    if (v16 == 0) {
      return 0;
    }
    result = cuda_driver_ba620(
        *(_DWORD*)(a4 + 212), *(_DWORD*)(a4 + 216), *(_DWORD*)(a4 + 220),
        *(_DWORD*)(a4 + 180), *(_DWORD*)(a4 + 184), *(_DWORD*)(a4 + 188),
        *(_DWORD*)(a4 + 144), *(_DWORD*)(a4 + 148), *(_DWORD*)(a4 + 152));
    if ((_DWORD)result == 0) {
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_e86e0(__int64 a1, unsigned int a2, signed int a3,
                          unsigned int* a4)
{
  __int64 v8;
  __int64 result;
  signed int v10;
  __int64 v12;
  signed int v13;
  __int64 v15;
  signed int v16;
  void* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  int v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  unsigned int v35;
  __int64 v36;
  unsigned int v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  struct {
    __int64 v43[3];
    unsigned int v44;
  } v43_;

  if ((int)a2 > 11) {
    if ((int)a2 <= 13) {
      if (a2 == 12) {
        v15 = a1 + 24 + 72LL * *a4;
        if ((*(_BYTE*)(v15 + 48) & 2) != 0) {
          if (*(_DWORD*)(v15 + 56) != a3) {
            CudaDriverRoutine_ed630(
                (__int64)"CUDA", 0,
                (__int64)"%s specified but cluster size is read-only\n",
                "CU_FUNC_ATTRIBUTE_REQUIRED_CLUSTER_HEIGHT");
            return 1;
          }
        }
        else {
          result = CudaDriverRoutine_baff0(a3);
          if ((_DWORD)result != 0) {
            return result;
          }
          v16 = *(_DWORD*)(a1 + 24 + 72LL * *a4 + 64);
          if (v16 != 0 && a3 > v16) {
            CudaDriverRoutine_ed630(
                (__int64)"CUDA", 0,
                (__int64)"%s specified above maximum cluster size %d\n",
                "CU_FUNC_ATTRIBUTE_REQUIRED_CLUSTER_HEIGHT");
            return 1;
          }
        }
      }
      else {
        v8 = a1 + 24 + 72LL * *a4;
        if ((*(_BYTE*)(v8 + 48) & 2) != 0) {
          if (*(_DWORD*)(v8 + 60) != a3) {
            CudaDriverRoutine_ed630(
                (__int64)"CUDA", 0,
                (__int64)"%s specified but cluster size is read-only\n",
                "CU_FUNC_ATTRIBUTE_REQUIRED_CLUSTER_DEPTH");
            return 1;
          }
        }
        else {
          result = CudaDriverRoutine_baff0(a3);
          if ((_DWORD)result != 0) {
            return result;
          }
          v10 = *(_DWORD*)(a1 + 24 + 72LL * *a4 + 64);
          if (v10 != 0 && a3 > v10) {
            CudaDriverRoutine_ed630(
                (__int64)"CUDA", 0,
                (__int64)"%s specified above maximum cluster size %d\n",
                "CU_FUNC_ATTRIBUTE_REQUIRED_CLUSTER_DEPTH");
            return 1;
          }
        }
      }
      goto LABEL_44;
    }
    if (a2 == 14) {
      result = CudaDriverStub_4f840((unsigned int)a3);
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_44;
    }
    if (a2 == 15) {
      result = CudaDriverRoutine_bb030(a3);
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_44;
    }
  LABEL_27:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Invalid kernel attrib %d, must be one of "
                                     "CUfunction_attribute\n",
                            a2);
    return 1;
  }
  if (a2 == 8) {
    result = cuda_driver_checks_baf70((__int64)a4,
                                      *(_DWORD*)(a1 + 72LL * *a4 + 44), a3);
    if ((_DWORD)result != 0) {
      return result;
    }
    goto LABEL_44;
  }
  if (a2 == 9) {
    result = CudaDriverRoutine_baf20(a3);
    if ((_DWORD)result != 0) {
      return result;
    }
    goto LABEL_44;
  }
  if (a2 != 11) {
    goto LABEL_27;
  }
  v12 = a1 + 24 + 72LL * *a4;
  if ((*(_BYTE*)(v12 + 48) & 2) != 0) {
    if (*(_DWORD*)(v12 + 52) != a3) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"%s specified but cluster size is read-only\n",
          "CU_FUNC_ATTRIBUTE_REQUIRED_CLUSTER_WIDTH");
      return 1;
    }
  }
  else {
    result = CudaDriverRoutine_baff0(a3);
    if ((_DWORD)result != 0) {
      return result;
    }
    v13 = *(_DWORD*)(a1 + 24 + 72LL * *a4 + 64);
    if (v13 != 0 && a3 > v13) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"%s specified above maximum cluster size %d\n",
          "CU_FUNC_ATTRIBUTE_REQUIRED_CLUSTER_WIDTH");
      return 1;
    }
  }
LABEL_44:
  v18 = CudaDriverData_1422118;
  CudaDriverStub_107f90_alt2((char*)((_UNKNOWN*)0x17C8LL) +
                             (_QWORD)CudaDriverData_1422118);
  v19 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v18);
  if (v19 != 0) {
    v20 = 0;
    do {
      v19 = *(_QWORD*)(v19 + 16328);
      ++v20;
    } while (v19 != 0);
    if (v20 == 0) {
      v22 = 0;
      CudaDriverStub_108070_alt2((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v18);
    LABEL_55:
      if (v20 != 0) {
        return 2;
      }
      goto LABEL_58;
    }
    v21 = CudaDriverRoutine_12e510(v20, 8);
    v22 = v21;
    if (v21 != 0) {
      v23 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v18);
      if (v23 != 0) {
        v24 = (_QWORD*)v21;
        do {
          *v24++ = v23;
          v23 = *(_QWORD*)(v23 + 16328);
        } while (v23 != 0);
      }
    }
  }
  else {
    v20 = 0;
    v22 = 0;
  }
  CudaDriverStub_108070_alt2((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v18);
  if (v22 == 0) {
    goto LABEL_55;
  }
LABEL_58:
  v25 = 8LL * a2;
  v26 = *(_DWORD*)(a1 + 4632 + ((unsigned __int64)*a4 << 7) + v25 + 4);
  __builtin_arm_dmb(0xDu);
  v39 = v26;
  v27 = a1 + 4632 + ((unsigned __int64)*a4 << 7);
  if (v26 == 1) {
    v38 = *(_DWORD*)(v27 + 8LL * a2);
  }
  else {
    v38 = 0;
  }
  *(_DWORD*)(v27 + 8LL * a2) = a3;
  v40 = 8LL * a2;
  v41 = a1 + 4632;
  v28 = *a4;
  __builtin_arm_dmb(0xEu);
  *(_DWORD*)(a1 + 4632 + (v28 << 7) + v25 + 4) = 1;
  if (v20 == 0) {
  LABEL_77:
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x120LL) +
                   (_QWORD)CudaDriverData_1432140) != 0) {
      v43_.v43[1] = a1;
      LODWORD(v43_.v43[0]) = 32;
      HIDWORD(v43_.v43[0]) = a2;
      v43_.v44 = *a4;
      cuda_driver_20b420(2u, 0x48u, (__int64)v43_.v43);
    }
    result = 0;
    if (v22 == 0) {
      return result;
    }
  LABEL_80:
    v37 = result;
    CudaDriverRoutine_12e340(v22);
    return v37;
  }
  v29 = 0;
  while (1) {
    v30 = *(_QWORD*)(v22 + 8 * v29);
    if (*(unsigned int**)(v30 + 16) == a4) {
      v42 = 0;
      cuda_driver_108520(v30 + 24);
      v31 = *(_QWORD*)(a1 + 16);
      cuda_driver_1084c0(v31 + 4120);
      v32 = *(_QWORD*)(v31 + 4112);
      if (v32 != 0) {
        break;
      }
    LABEL_63:
      CudaDriverRoutine_1085b0(v31 + 4120);
    LABEL_64:
      CudaDriverRoutine_1085d0(v30 + 24);
    }
    if (++v29 == v20) {
      goto LABEL_77;
    }
  }
  while (*(_QWORD*)(v32 + 8) != v30) {
    v32 = *(_QWORD*)(v32 + 24);
    if (v32 == 0) {
      goto LABEL_63;
    }
  }
  CudaDriverRoutine_1085b0(v31 + 4120);
  v33 = *(_QWORD*)(a1 + 16);
  v43_.v43[0] = 0;
  if ((unsigned int)cuda_driver_ea9e0(v43_.v43, v33, v30) != 0) {
    goto LABEL_64;
  }
  if ((unsigned int)cuda_driver_checks_bae90(v43_.v43[0], *(_QWORD*)(a1 + 8),
                                             &v42) != 0) {
    goto LABEL_64;
  }
  if (v42 == 0) {
    goto LABEL_64;
  }
  v34 = cuda_driver_bb120(v42, a2, a3, 0);
  if (v34 == 0) {
    goto LABEL_64;
  }
  v35 = v34;
  CudaDriverRoutine_1085d0(v30 + 24);
  v36 = *a4;
  if (v39 == 1) {
    *(_DWORD*)(v41 + (v36 << 7) + v40) = v38;
  }
  else {
    __builtin_arm_dmb(0xEu);
    *(_DWORD*)(v41 + (v36 << 7) + v40 + 4) = 0;
    *(_DWORD*)(v41 + ((unsigned __int64)*a4 << 7) + v40) = 0;
  }
  result = v35;
  if (v22 != 0) {
    goto LABEL_80;
  }
  return result;
}

__int64 cuda_driver_e8c60(__int64* a1)
{
  void* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;

  v2 = CudaDriverData_1422118;
  CudaDriverStub_107f90_alt2((char*)((_UNKNOWN*)0x17C8LL) +
                             (_QWORD)CudaDriverData_1422118);
  v3 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v2);
  if (v3 == 0) {
    v4 = 0;
  LABEL_11:
    v6 = 0;
    goto LABEL_12;
  }
  v4 = 0;
  do {
    v3 = *(_QWORD*)(v3 + 16328);
    ++v4;
  } while (v3 != 0);
  if (v4 == 0) {
    goto LABEL_11;
  }
  v5 = CudaDriverRoutine_12e510(v4, 8);
  v6 = v5;
  if (v5 != 0) {
    v7 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v2);
    if (v7 != 0) {
      v8 = (_QWORD*)v5;
      do {
        *v8++ = v7;
        v7 = *(_QWORD*)(v7 + 16328);
      } while (v7 != 0);
    }
  }
LABEL_12:
  CudaDriverStub_108070_alt2((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v2);
  *a1 = v4;
  return v6;
}

__int64 cuda_driver_e8e30(__int64 a1, unsigned int a2, unsigned int* a3,
                          int* a4)
{
  __int64 result;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  unsigned __int64 v17;
  bool v18;

  result = CudaDriverRoutine_bb080(a2, &v18);
  if ((_DWORD)result == 0) {
    if (!v18 || (v9 = *(_DWORD*)(a1 + 4632 + ((unsigned __int64)*a3 << 7) +
                                 8LL * a2 + 4),
                 __builtin_arm_dmb(0xDu), v9 != 1)) {
      v11 = a1 + 72LL * *a3;
      switch (a2) {
      case 0u:
        v12 = (*((__int64 (**)(unsigned int*, _QWORD))a3 + 2421))(
            a3, *(unsigned int*)(v11 + 28));
        v13 = *(_DWORD*)(v11 + 32);
        v14 = v12;
        if (v13 != 0) {
          v15 = *(_DWORD*)(v11 + 36);
          if (v15 != 0) {
            v16 = *(unsigned int*)(v11 + 40);
            if ((_DWORD)v16 != 0) {
              v17 = v15 * (unsigned __int64)v13 * v16;
              if (v17 < v12) {
                v14 = v17;
              }
            }
          }
        }
        *a4 = v14;
        return 0;
      case 1u:
        v10 = *(_DWORD*)(v11 + 44);
        goto LABEL_25;
      case 2u:
        v10 = *(_DWORD*)(v11 + 48);
        goto LABEL_25;
      case 3u:
        result = 0;
        v10 = *(_DWORD*)(v11 + 52) + *(_DWORD*)(v11 + 56);
        goto LABEL_26;
      case 4u:
        v10 = *(_DWORD*)(v11 + 24);
        goto LABEL_25;
      case 5u:
        v10 = *(_DWORD*)(v11 + 64);
        goto LABEL_25;
      case 6u:
        v10 = *(_DWORD*)(v11 + 68);
        goto LABEL_25;
      case 7u:
        result = 0;
        v10 = *(_BYTE*)(v11 + 72) & 1;
        goto LABEL_26;
      case 8u:
        result = 0;
        v10 = a3[970] - *(_DWORD*)(v11 + 44);
        goto LABEL_26;
      case 9u:
        v10 = -1;
        goto LABEL_25;
      case 0xAu:
        result = 0;
        v10 = (*(_BYTE*)(v11 + 72) & 4) != 0;
        goto LABEL_26;
      case 0xBu:
        v10 = *(_DWORD*)(v11 + 76);
        goto LABEL_25;
      case 0xCu:
        v10 = *(_DWORD*)(v11 + 80);
        goto LABEL_25;
      case 0xDu:
        v10 = *(_DWORD*)(v11 + 84);
      LABEL_25:
        result = 0;
        goto LABEL_26;
      case 0xEu:
      case 0xFu:
        *a4 = 0;
        return 0;
      default:
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Invalid kernel attrib %d, must be "
                                         "one of CUfunction_attribute\n",
                                a2);
        return 1;
      }
    }
    result = 0;
    v10 = *(_DWORD*)(a1 + 4632 + ((unsigned __int64)*a3 << 7) + 8LL * a2);
  LABEL_26:
    *a4 = v10;
  }
  return result;
}

__int64 cuda_driver_e9060(__int64 a1, int a2, unsigned int* a3)
{
  void* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 result;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  int v27;
  __int64 v28;
  struct {
    __int64 v29[3];
    unsigned int v30;
  } v29_;

  v6 = CudaDriverData_1422118;
  CudaDriverStub_107f90_alt2((char*)((_UNKNOWN*)0x17C8LL) +
                             (_QWORD)CudaDriverData_1422118);
  v7 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v6);
  if (v7 != 0) {
    v8 = 0;
    do {
      v7 = *(_QWORD*)(v7 + 16328);
      ++v8;
    } while (v7 != 0);
    if (v8 == 0) {
      v10 = 0;
      CudaDriverStub_108070_alt2((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v6);
    LABEL_12:
      if (v8 != 0) {
        return 2;
      }
      goto LABEL_15;
    }
    v9 = CudaDriverRoutine_12e510(v8, 8);
    v10 = v9;
    if (v9 != 0) {
      v11 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v6);
      if (v11 != 0) {
        v12 = (_QWORD*)v9;
        do {
          *v12++ = v11;
          v11 = *(_QWORD*)(v11 + 16328);
        } while (v11 != 0);
      }
    }
  }
  else {
    v8 = 0;
    v10 = 0;
  }
  CudaDriverStub_108070_alt2((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v6);
  if (v10 == 0) {
    goto LABEL_12;
  }
LABEL_15:
  v14 = a1 + 12824;
  v15 = *(_DWORD*)(a1 + 12824 + 16LL * *a3 + 4);
  __builtin_arm_dmb(0xDu);
  v27 = v15;
  if (v15 == 1) {
    v26 = *(_DWORD*)(v14 + 16LL * *a3);
  }
  else {
    v26 = 0;
  }
  *(_DWORD*)(v14 + 16LL * *a3) = a2;
  v16 = *a3;
  __builtin_arm_dmb(0xEu);
  *(_DWORD*)(v14 + 16 * v16 + 4) = 1;
  if (v8 == 0) {
  LABEL_34:
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x124LL) +
                   (_QWORD)CudaDriverData_1432140) != 0) {
      v29_.v29[1] = a1;
      LODWORD(v29_.v29[0]) = 32;
      HIDWORD(v29_.v29[0]) = a2;
      v29_.v30 = *a3;
      cuda_driver_20b420(2u, 0x49u, (__int64)v29_.v29);
    }
    result = 0;
    if (v10 == 0) {
      return result;
    }
  LABEL_37:
    v25 = result;
    CudaDriverRoutine_12e340(v10);
    return v25;
  }
  v17 = 0;
  while (1) {
    v18 = *(_QWORD*)(v10 + 8 * v17);
    if (*(unsigned int**)(v18 + 16) == a3) {
      v28 = 0;
      cuda_driver_108520(v18 + 24);
      v19 = *(_QWORD*)(a1 + 16);
      cuda_driver_1084c0(v19 + 4120);
      v20 = *(_QWORD*)(v19 + 4112);
      if (v20 != 0) {
        break;
      }
    LABEL_20:
      CudaDriverRoutine_1085b0(v19 + 4120);
    LABEL_21:
      CudaDriverRoutine_1085d0(v18 + 24);
    }
    if (++v17 == v8) {
      goto LABEL_34;
    }
  }
  while (*(_QWORD*)(v20 + 8) != v18) {
    v20 = *(_QWORD*)(v20 + 24);
    if (v20 == 0) {
      goto LABEL_20;
    }
  }
  CudaDriverRoutine_1085b0(v19 + 4120);
  v21 = *(_QWORD*)(a1 + 16);
  v29_.v29[0] = 0;
  if ((unsigned int)cuda_driver_ea9e0(v29_.v29, v21, v18) != 0) {
    goto LABEL_21;
  }
  if ((unsigned int)cuda_driver_checks_bae90(v29_.v29[0], *(_QWORD*)(a1 + 8),
                                             &v28) != 0) {
    goto LABEL_21;
  }
  if (v28 == 0) {
    goto LABEL_21;
  }
  v22 = cuda_driver_checks_bace0(v28, 0, a2, 0);
  if (v22 == 0) {
    goto LABEL_21;
  }
  v23 = v22;
  CudaDriverRoutine_1085d0(v18 + 24);
  v24 = *a3;
  if (v27 == 1) {
    *(_DWORD*)(v14 + 16 * v24) = v26;
  }
  else {
    __builtin_arm_dmb(0xEu);
    *(_DWORD*)(v14 + 16 * v24 + 4) = 0;
    *(_DWORD*)(v14 + 16LL * *a3) = 0;
  }
  result = v23;
  if (v10 != 0) {
    goto LABEL_37;
  }
  return result;
}

__int64 cuda_driver_e9340(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int* v8;
  unsigned int v9;
  __int64 result;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  int* v26;
  int v27;
  int v28;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 472LL);
  if (v3 == 0) {
    return 0;
  }
  v5 = CudaDriverRoutine_1a2560(*(int**)(v3 + 4144), *(_QWORD*)(a1 + 8), a3);
  if (v5 == 0) {
    return 999;
  }
  v6 = v5;
  v7 = **(unsigned int**)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 64LL);
  v8 = (unsigned int*)(v5 + 4632 + (v7 << 7));
  v9 = v8[1];
  __builtin_arm_dmb(0xDu);
  if (v9 != 1 || (_DWORD)(result = cuda_driver_bb120(a1, 0, *v8, 0)) == 0) {
    v11 = v8[3];
    __builtin_arm_dmb(0xDu);
    if (v11 != 1 ||
        (_DWORD)(result = cuda_driver_bb120(a1, 1, v8[2], 0)) == 0) {
      v12 = v8[5];
      __builtin_arm_dmb(0xDu);
      if (v12 != 1 ||
          (_DWORD)(result = cuda_driver_bb120(a1, 2, v8[4], 0)) == 0) {
        v13 = v8[7];
        __builtin_arm_dmb(0xDu);
        if (v13 != 1 ||
            (_DWORD)(result = cuda_driver_bb120(a1, 3, v8[6], 0)) == 0) {
          v14 = v8[9];
          __builtin_arm_dmb(0xDu);
          if (v14 != 1 ||
              (_DWORD)(result = cuda_driver_bb120(a1, 4, v8[8], 0)) == 0) {
            v15 = v8[11];
            __builtin_arm_dmb(0xDu);
            if (v15 != 1 ||
                (_DWORD)(result = cuda_driver_bb120(a1, 5, v8[10], 0)) == 0) {
              v16 = v8[13];
              __builtin_arm_dmb(0xDu);
              if (v16 != 1 ||
                  (_DWORD)(result = cuda_driver_bb120(a1, 6, v8[12], 0)) == 0) {
                v17 = v8[15];
                __builtin_arm_dmb(0xDu);
                if (v17 != 1 || (_DWORD)(result = cuda_driver_bb120(
                                             a1, 7, v8[14], 0)) == 0) {
                  v18 = v8[17];
                  __builtin_arm_dmb(0xDu);
                  if (v18 != 1 || (_DWORD)(result = cuda_driver_bb120(
                                               a1, 8, v8[16], 0)) == 0) {
                    v19 = v8[19];
                    __builtin_arm_dmb(0xDu);
                    if (v19 != 1 || (_DWORD)(result = cuda_driver_bb120(
                                                 a1, 9, v8[18], 0)) == 0) {
                      v20 = v8[21];
                      __builtin_arm_dmb(0xDu);
                      if (v20 != 1 || (_DWORD)(result = cuda_driver_bb120(
                                                   a1, 10, v8[20], 0)) == 0) {
                        v21 = v8[23];
                        __builtin_arm_dmb(0xDu);
                        if (v21 != 1 || (_DWORD)(result = cuda_driver_bb120(
                                                     a1, 11, v8[22], 0)) == 0) {
                          v22 = v8[25];
                          __builtin_arm_dmb(0xDu);
                          if (v22 != 1 ||
                              (_DWORD)(result = cuda_driver_bb120(
                                           a1, 12, v8[24], 0)) == 0) {
                            v23 = v8[27];
                            __builtin_arm_dmb(0xDu);
                            if (v23 != 1 ||
                                (_DWORD)(result = cuda_driver_bb120(
                                             a1, 13, v8[26], 0)) == 0) {
                              v24 = v8[29];
                              __builtin_arm_dmb(0xDu);
                              if (v24 != 1 ||
                                  (_DWORD)(result = cuda_driver_bb120(
                                               a1, 14, v8[28], 0)) == 0) {
                                v25 = v8[31];
                                __builtin_arm_dmb(0xDu);
                                if (v25 != 1 ||
                                    (_DWORD)(result = cuda_driver_bb120(
                                                 a1, 15, v8[30], 0)) == 0) {
                                  v26 = (int*)(v6 + 12824 + 16 * v7);
                                  v27 = v26[1];
                                  __builtin_arm_dmb(0xDu);
                                  if (v27 != 1 ||
                                      (_DWORD)(result =
                                                   cuda_driver_checks_bace0(
                                                       a1, 0, *v26, 0)) == 0) {
                                    v28 = v26[3];
                                    __builtin_arm_dmb(0xDu);
                                    if (v28 != 1) {
                                      return 0;
                                    }
                                    result = cuda_driver_checks_bace0(
                                        a1, 0, v26[2], 0);
                                    if ((_DWORD)result == 0) {
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
  return result;
}

__int64 cuda_driver_ea5c0(__int64 result)
{
  __int128 v1;
  int v2;
  __int64 v3;
  __int128 v4;

  if (*(_DWORD*)((char*)((_UNKNOWN*)0x108LL) +
                 (_QWORD)CudaDriverData_1432140) != 0) {
    v1 = *(_OWORD*)(result + 4464);
    v3 = result;
    v2 = 40;
    v4 = v1;
    return cuda_driver_20b420(2u, 0x42u, (__int64)&v2);
  }
  return result;
}

__int64 cuda_driver_ea620(__int64 a1, char a2)
{
  void* v4;
  void* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  struct {
    int v22;
    char gap12_[4];
    __int64 v23;
  } v22_;

  v4 = CudaDriverData_14225e0;
  if (a2 != 0 && *(_DWORD*)((char*)((_UNKNOWN*)0x10CLL) +
                            *(__int64*)((char*)((__int64*)0x10LL) +
                                        (_QWORD)CudaDriverData_14225e0)) != 0) {
    v22_.v23 = a1;
    v22_.v22 = 24;
    cuda_driver_20b420(2u, 0x43u, (__int64)&v22_.v22);
  }
  v5 = CudaDriverData_1422118;
  cuda_driver_108520((__int64)&CudaDriverRoutine_71f8 +
                     (_QWORD)CudaDriverData_1422118);
  if (a1 == *(_QWORD*)((char*)&CudaDriverRoutine_71f0 + (_QWORD)v5)) {
    v6 = *(_QWORD*)(a1 + 4544);
    *(_QWORD*)((char*)&CudaDriverRoutine_71f0 + (_QWORD)v5) = v6;
    if (v6 != 0) {
      v7 = 0;
      goto LABEL_10;
    }
  }
  else {
    if (*(_OWORD*)(a1 + 4536) == 0) {
      goto LABEL_12;
    }
    *(_QWORD*)(*(_QWORD*)(a1 + 4536) + 4544LL) = *(_QWORD*)(a1 + 4544);
    v6 = *(_QWORD*)(a1 + 4544);
    if (v6 != 0) {
      v7 = *(_QWORD*)(a1 + 4536);
    LABEL_10:
      *(_QWORD*)(v6 + 4536) = v7;
    }
  }
  *(_OWORD*)(a1 + 4536) = (__typeof__(*(_OWORD*)(a1 + 4536))){0};
LABEL_12:
  v8 = *(_QWORD**)(a1 + 4112);
  if (v8 != nullptr) {
    do {
      v9 = (_QWORD*)v8[3];
      CudaDriverRoutine_e9900(a1, *(_QWORD*)(*v8 + 24LL), v8);
      v8 = v9;
    } while (v9 != nullptr);
  }
  CudaDriverRoutine_1085d0((__int64)&CudaDriverRoutine_71f8 + (_QWORD)v5);
  CudaDriverRoutine_1a2800(
      *(_QWORD*)(a1 + 4144),
      (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_ea960, 0);
  CudaDriverRoutine_1a2300(*(_QWORD*)(a1 + 4144));
  CudaDriverRoutine_1a2800(
      *(_QWORD*)(a1 + 4152),
      (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_ea9a0, 0);
  CudaDriverRoutine_1a2300(*(_QWORD*)(a1 + 4152));
  cuda_driver_127770(a1);
  if (*(_DWORD*)(a1 + 4104) != 0) {
    v10 = a1 + 32;
    v11 = 0;
    do {
      v12 = *(_QWORD*)(v10 + 24);
      if (v12 != 0) {
        cuda_driver_246c80(v12);
      }
      if (*(_BYTE*)v10 != 0) {
        CudaDriverRoutine_12e340(*(_QWORD*)(v10 - 16));
      }
      if (*(_BYTE*)(v10 + 16) != 0) {
        CudaDriverRoutine_12e340(*(_QWORD*)(v10 + 8));
      }
      v13 = *(_QWORD*)(v10 - 24);
      if (v13 != 0) {
        cuda_driver_a2fc0(v13);
      }
      v10 += 64;
      ++v11;
    } while (v11 < *(unsigned int*)(a1 + 4104));
  }
  v14 = *(_QWORD*)(a1 + 4440);
  if (v14 != 0) {
    CudaDriverRoutine_12e340(v14);
  }
  v15 = *(_QWORD*)(a1 + 4448);
  if (v15 != 0) {
    CudaDriverRoutine_12e340(v15);
  }
  CudaDriverRoutine_108490((_QWORD*)(a1 + 4120));
  if ((~*(unsigned __int8*)(a1 + 4480) & 3) == 0) {
    v16 = *(_QWORD*)(a1 + 4464);
    if (v16 != 0) {
      CudaDriverRoutine_12e340(v16);
    }
    v17 = *(_QWORD*)(a1 + 4472);
    if (v17 != 0) {
      CudaDriverRoutine_12e340(v17);
    }
  }
  v18 = *(_QWORD*)(a1 + 4520);
  if (v18 != 0) {
    CudaDriverRoutine_1a2c70(v18);
  }
  v19 = *(_QWORD*)(a1 + 4528);
  if (v19 != 0) {
    CudaDriverRoutine_1a2300(v19);
  }
  if (*(_BYTE*)(a1 + 4176) != 0) {
    v20 = *(__int64**)(a1 + 4168);
    if (v20 != nullptr) {
      CudaDriverRoutine_125470(*v20);
    }
  }
  if (a2 != 0 &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x10CLL) +
                 *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v4) + 4) !=
          0) {
    v22_.v23 = a1;
    v22_.v22 = 24;
    cuda_driver_20b420(2u, 0x44u, (__int64)&v22_.v22);
  }
  return CudaDriverRoutine_12e340(a1);
}

__int64 cuda_driver_ea9e0(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  __int64 result;
  __int64 v8;
  __int64 v9;

  v9 = 0;
  cuda_driver_1084c0(a2 + 4120);
  v6 = *(__int64**)(a2 + 4112);
  if (v6 != nullptr) {
    while (v6[1] != a3) {
      v6 = (__int64*)v6[3];
      if (v6 == nullptr) {
        goto LABEL_4;
      }
    }
    v8 = *v6;
    CudaDriverRoutine_1085b0(a2 + 4120);
    *a1 = v8;
    return 0;
  }
  else {
  LABEL_4:
    CudaDriverRoutine_1085b0(a2 + 4120);
    if (*(_DWORD*)(a2 + 4180 + 4LL * **(unsigned int**)(a3 + 64)) != 0) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Failed to find device code due to compilation error, to "
                   "get more information when using CUDA Driver API"
                   "s use the CU_JIT_ERROR_LOG_BUFFER and "
                   "CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES parameters\n");
      return *(unsigned int*)(a2 + 4180 + 4LL * **(unsigned int**)(a3 + 64));
    }
    else if (*((_BYTE*)&CudaDriverRoutine_71c8 +
               (_QWORD)CudaDriverData_1422118) != 0) {
      result = CudaDriverRoutine_e96c0(a2, a3, &v9);
      if ((_DWORD)result == 0) {
        *a1 = v9;
      }
    }
    else {
      return 500;
    }
  }
  return result;
}

__int64 cuda_driver_eb200(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          unsigned __int64 a5)
{
  __int64 result;
  unsigned __int64 v10;
  __int64 v11;
  _DWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int128* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  int v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  struct {
    _BYTE v24[8];
    unsigned int v25;
    char gap68_[4];
    unsigned __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v24_;
  bool v30;

  result = CudaDriverRoutine_eb440(a4, a5, (__int64)v24_.v24, &v30);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (!v30) {
    v10 = v24_.v26;
    if (v24_.v26 != *(_QWORD*)(a1 + 4488) ||
        v24_.v28 != *(_QWORD*)(a1 + 4496)) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Library uses universal function/data table but indexes "
                   "don't have the correct values. Use the latest Nv"
                   "idia toolkit and tools to generate the binary.\n");
      goto LABEL_17;
    }
    v11 = v24_.v27;
    v12 = CudaDriverRoutine_1a2c40();
    *(_QWORD*)(a1 + 4520) = v12;
    if (v12 == nullptr) {
      return 2;
    }
    if (v11 != 0) {
      v13 = *(_QWORD*)(a4 + 64);
      v21 = *(_OWORD*)(a4 + 48);
      if (v13 < v10) {
        result = CudaDriverStub_1a2cc0(v12, a4 + 48, 16, v13);
        if ((_DWORD)result != 0) {
          return result;
        }
        v14 = v11 - 1;
        v23 = v21;
        if (v11 == 1) {
          goto LABEL_12;
        }
        v16 = (__int128*)(a4 + 72);
        while (1) {
          v17 = *((_QWORD*)v16 + 2);
          v22 = *v16;
          if (v17 >= v10) {
            break;
          }
          v18 = bswap64(v23);
          v19 = bswap64(v22);
          if (v18 == v19 &&
              (v18 = bswap64(*((unsigned __int64*)&v23 + 1)),
               v19 = bswap64(*((unsigned __int64*)&v22 + 1)), v18 == v19)) {
            v20 = 0;
          }
          else {
            v20 = v18 < v19 ? -1 : 1;
          }
          if ((v20 & 0x80000000) == 0) {
            break;
          }
          result = CudaDriverStub_1a2cc0(*(_QWORD*)(a1 + 4520), v16, 16, v17);
          if ((_DWORD)result != 0) {
            return result;
          }
          --v14;
          v16 = (__int128*)((char*)v16 + 24);
          v23 = v22;
          if (v14 == 0) {
            goto LABEL_12;
          }
        }
      }
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Library uses universal function/data table entry but "
                   "symbols don't have correct value. Use the latest N"
                   "vidia toolkit and tools to generate the binary.\n");
      goto LABEL_17;
    }
  LABEL_12:
    *(_QWORD*)(a1 + 4504) = a4;
    *(_BYTE*)(a1 + 4480) |= 4u;
    if (v24_.v25 <= 1) {
      v15 = 0;
    }
    else {
      v15 = 16 * v11;
    }
    *(_QWORD*)(a1 + 4512) = v15 + 24 * (v24_.v29 + v11) + 48;
    return CudaDriverRoutine_eb550(a1, a3);
  }
  if (cuda_driver_predicates_9ae50(a2)) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Library uses universal function/data table but fatbin "
                 "missing entries. Use the latest Nvidia toolkit and "
                 "tools to generate the binary.\n");
  LABEL_17:
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"You can inspect the binary with cuobjdump or readelf to "
                 "check for corrupted/missing entries.\n");
    return 200;
  }
  return 0;
}

__int64 cuda_driver_eb6d0(__int64 a1, unsigned int a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  result = 1;
  if ((int)a2 <= 4) {
    if (a2 < 3) {
      return result;
    }
    if (a2 == 3) {
      v8 = CudaDriverRoutine_98340(a1);
      return CudaDriverStub_921e0(v8);
    }
    if (a2 == 4) {
      v5 = CudaDriverRoutine_98340(a1);
      return CudaDriverRoutine_92190(v5);
    }
    return 0;
  }
  if ((int)a2 <= 6) {
    if (a2 != 5) {
      v6 = *(_QWORD*)(a1 + 64);
      v7 = *(_DWORD*)(v6 + 3160);
      if (v7 >= 8) {
        if ((*(_WORD*)(v6 + 16848) & 0x80) != 0) {
          if (v7 < 0xA || *(_DWORD*)((char*)((_UNKNOWN*)0x104LL) +
                                     (_QWORD)CudaDriverData_1422118) == 0) {
            return 0;
          }
        }
        else if (CudaDriverData_14348ac == 0) {
          return 0;
        }
        return *(_DWORD*)(v6 + 4120) != 0;
      }
      return 0;
    }
  }
  else if (a2 - 7 >= 2) {
    if (a2 != 9) {
      return 0;
    }
    v4 = a1 + 0x4000;
    if (*(_BYTE*)(v4 + 1288) == 0) {
      return *(unsigned __int8*)(v4 + 1289) != 0;
    }
  }
  return result;
}

__int64 cuda_driver_ec420(__int64 a1, _DWORD* a2,
                          __int64 (*a3)(_DWORD*, __int64), __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  void* v11;
  _BOOL4 v12;
  char v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  struct {
    _DWORD v24[2];
    unsigned int v25;
    char gap20_[5];
    bool v26;
    char v27;
    bool v28;
    char v29;
    char gap29_[523];
    int* v30;
    int* v31;
    __int64 v32;
    int v33;
    char gap580_[4];
    _DWORD* v34;
    int v35;
  } v24_;
  int v36;
  _QWORD v37[4];

  if ((_DWORD*)a1 == a2) {
    return 0;
  }
  v37[2] = v4;
  v37[3] = v5;
  v37[0] = 0;
  v37[1] = 0;
  if (a2 == nullptr) {
    LOBYTE(v12) = 1;
    v14 = 32;
    v13 = *(_BYTE*)(a1 + 17272) & 1;
    goto LABEL_10;
  }
  result =
      (*(__int64 (**)(_DWORD*, __int64, _QWORD*))(a1 + 21080))(a2, a1, v37);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (CudaDriverRoutine_eedd0(a1, (__int64)a2) &&
      ((v11 = CudaDriverData_1422118, *(_DWORD*)(a1 + 3184) == a2[796]) ||
       *((_BYTE*)((_UNKNOWN*)0x10ACLL) + (_QWORD)CudaDriverData_1422118 + 2) !=
           0)) {
    v12 = ((*(unsigned __int8 (**)(__int64, _DWORD*))(a1 + 21064))(a1, a2) |
           *((_BYTE*)((_UNKNOWN*)0x10ACLL) + (_QWORD)v11 + 2)) != 0;
    v13 = BYTE5(v37[0]);
    v14 = 16;
    if (v12) {
      goto LABEL_10;
    }
  }
  else {
    LOBYTE(v12) = 0;
    v13 = BYTE5(v37[0]);
    v14 = 16;
  }
  if (LOWORD(v37[0]) == 0) {
    return 0;
  }
LABEL_10:
  v36 = 0;
  memset_plt(v24_.v24, 0, 592);
  v15 = 0;
  v24_.v32 = a1;
  v24_.v34 = a2;
  v24_.v35 = v14;
  v24_.v33 = 16;
  v16 = *(_DWORD*)(a1 + 3204);
  if (v16 <= 2) {
    if (v16 == 1) {
      v23 = *(_DWORD*)(a1 + 3212);
      v24_.v24[0] = 17;
      v15 = 8 * *(_DWORD*)(a1 + 3216) * v23 / 0x50u;
      v24_.v25 = v15;
      if (a2 != nullptr) {
        goto LABEL_22;
      }
      goto LABEL_39;
    }
    if (v16 == 2) {
      v18 = *(_DWORD*)(a1 + 3212);
      v24_.v24[0] = 18;
      v15 = 8 * *(_DWORD*)(a1 + 3216) * v18 / 0x50u;
    }
  }
  else {
    switch (v16) {
    case 3:
      v17 = 19;
      break;
    case 4:
      v17 = 20;
      break;
    case 5:
      v17 = 21;
      break;
    default:
      goto LABEL_21;
    }
    v24_.v24[0] = v17;
    v15 = ((*(_DWORD*)(a1 + 3216) * *(_DWORD*)(a1 + 3212)) << 7) / 0x410u;
  }
LABEL_21:
  v24_.v25 = v15;
  if (a2 != nullptr) {
  LABEL_22:
    v19 = a2[801];
    v20 = a2[804];
    v21 = a2[803];
    v22 = 0;
    if (v19 <= 2) {
      if (v19 == 1) {
        v22 = 8 * v20 * v21 / 0x50u;
      }
      else if (v19 == 2) {
        v22 = 8 * v20 * v21 / 0x50u;
      }
    }
    else if (v19 == 3 || v19 == 4 || v19 == 5) {
      v22 = ((v20 * v21) << 7) / 0x410u;
    }
    if (v15 >= v22) {
      v15 = v22;
    }
    v24_.v25 = v15;
  }
LABEL_39:
  v24_.v26 = v12;
  v24_.v27 = v13;
  v24_.v24[1] = 1;
  v24_.v29 = 1;
  v24_.v30 = &v36;
  v24_.v31 = &v36;
  v24_.v28 = (*(_WORD*)((_BYTE*)&CudaDriverRoutine_4484 +
                        (_QWORD)CudaDriverData_1422118) &
              0x200) == 0;
  return a3(v24_.v24, a4);
}

__int64 cuda_driver_unplaced_6_ec840()
{
  _QWORD* v0;
  unsigned int v1;
  __int64 v2;
  int v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _DWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;
  unsigned __int8* v37;
  int v38;
  int v39;
  unsigned __int64 v41;
  _DWORD* v42;
  unsigned __int64 v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  bool v47;
  __int64 v48;
  struct {
    int v49;
    int v50;
    char gap64_[552];
    __int64 v51;
    char gap624_[8];
    __int64 v52;
    char gap640_[24];
    __int64 v53;
  } v49_;

  v0 = CudaDriverData_1422118;
  CudaDriverStub_107f90_alt2((char*)((_UNKNOWN*)0x1D60LL) +
                             (_QWORD)CudaDriverData_1422118);
  v1 = 0;
  if (*((_BYTE*)((_UNKNOWN*)0x1D80LL) + (_QWORD)v0) == 0) {
    v2 = CudaDriverStub_12e330(2462720);
    *(_QWORD*)((char*)((_UNKNOWN*)0x1D78LL) + (_QWORD)v0) = v2;
    if (v2 != 0) {
      v3 = *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v0);
      *(_DWORD*)((char*)((_UNKNOWN*)0x1D70LL) + (_QWORD)v0) = 0;
      if (v3 != 0) {
        LODWORD(v4) = 1;
        v5 = 0;
        v6 = 0;
        v49_.v53 = v2;
        do {
          if ((_DWORD)v4 != 0) {
            v9 = 0;
            do {
              v10 = v0[v5 + 35];
              v11 = v0[v9 + 35];
              memset_plt_alt1((__int64)&v49_.v49, 0, 0x250u);
              v49_.v51 = v10;
              v49_.v52 = v11;
              if ((unsigned int)CudaDriverRoutine_ebb40(
                      v10, v11,
                      (__int64 (*)(__int64*, __int64))CudaDriverRoutine_ed0e0,
                      (__int64)&v49_.v49) == 0 &&
                  v49_.v49 != 0 && v49_.v50 != 0) {
                memcpy_plt(v49_.v53 + 592LL * v6++, (__int64)&v49_.v49, 0x250u);
              }
              ++v9;
              v0 = CudaDriverData_1422118;
            } while (v9 < *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                                           (_QWORD)CudaDriverData_1422118));
          }
          v7 = v0[v5 + 35];
          memset_plt_alt1((__int64)&v49_.v49, 0, 0x250u);
          v49_.v51 = v7;
          if ((unsigned int)CudaDriverRoutine_ebb40(
                  v7, 0,
                  (__int64 (*)(__int64*, __int64))CudaDriverRoutine_ed0e0,
                  (__int64)&v49_.v49) != 0 ||
              v49_.v49 == 0) {
            v8 = v49_.v53;
          }
          else {
            v8 = v49_.v53;
            if (v49_.v50 != 0) {
              memcpy_plt(v49_.v53 + 592LL * v6, (__int64)&v49_.v49, 0x250u);
              v8 = v49_.v53;
              ++v6;
            }
          }
          v4 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v0);
          ++v5;
        } while (v5 < v4);
        if ((_DWORD)v4 != 0) {
          if (v6 == 0) {
            v2 = *(_QWORD*)((char*)((_UNKNOWN*)0x1D78LL) + (_QWORD)v0);
            *(_DWORD*)((char*)((_UNKNOWN*)0x1D70LL) + (_QWORD)v0) = 0;
            goto LABEL_72;
          }
          v13 = 0;
          v14 = v6;
          v48 = v6;
          v42 = (_DWORD*)(v8 + 584);
          v15 = 1;
          do {
            if (v15 != 0) {
              v16 = 0;
              v41 = v13;
              do {
                if (v13 != v16) {
                  v17 = v14;
                  v18 = v0[v13 + 35];
                  v19 = v42;
                  while (*((_QWORD*)v19 - 3) != v18 || *v19 != 16 ||
                         *((_QWORD*)v19 - 1) != v0[v16 + 35]) {
                    --v17;
                    v19 += 148;
                    if (v17 == 0) {
                      v44 = v6;
                      v20 = 0;
                      v43 = v16;
                      v21 = v0[v16 + 35];
                      while (1) {
                        v22 = v8 + 592 * v20;
                        if (*(_QWORD*)(v22 + 560) == v18) {
                          break;
                        }
                      LABEL_37:
                        if (++v20 == v14) {
                          v6 = v44;
                          goto LABEL_27;
                        }
                      }
                      v23 = v8;
                      v24 = v14;
                      while (1) {
                        if (*(_QWORD*)(v23 + 560) == v21 &&
                            (*(_WORD*)((_BYTE*)&CudaDriverRoutine_4484 +
                                       (_QWORD)v0) &
                             0x400) == 0 &&
                            *(_DWORD*)(v22 + 584) == 64 &&
                            *(_DWORD*)(v23 + 584) == 64 &&
                            *(_DWORD*)v22 == 33 && *(_DWORD*)v23 == 33) {
                          v47 = *(_BYTE*)(v22 + 18) != 0 &&
                                *(_BYTE*)(v23 + 18) != 0;
                          v25 = *(unsigned int*)(v22 + 4);
                          v45 = *(_DWORD*)(v23 + 8);
                          v46 = *(_DWORD*)(v22 + 8);
                          v26 = CudaDriverStub_12e330(4 * v25);
                          v27 = CudaDriverStub_12e330(4 * v25);
                          memcpy_plt(v26, *(_QWORD*)(v22 + 544), 4 * v25);
                          memcpy_plt(v27, *(_QWORD*)(v22 + 552), 4 * v25);
                          v0 = CudaDriverData_1422118;
                          v8 = v49_.v53;
                          v14 = v48;
                          if ((_DWORD)v25 != 0) {
                            break;
                          }
                        }
                        --v24;
                        v23 += 592;
                        if (v24 == 0) {
                          goto LABEL_37;
                        }
                      }
                      v28 = v46;
                      v29 = v49_.v53 + 592LL * v44;
                      if (v46 >= v45) {
                        v28 = v45;
                      }
                      *(_DWORD*)v29 = 33;
                      *(_DWORD*)(v29 + 4) = v25;
                      if (v28 >= 0xA410) {
                        v28 = 42000;
                      }
                      *(_DWORD*)(v29 + 8) = v28;
                      *(_DWORD*)(v29 + 12) = 0;
                      *(_WORD*)(v29 + 16) = 256;
                      *(_BYTE*)(v29 + 18) = v47;
                      memset_plt_alt1(v29 + 19, 0, 0x20Du);
                      v14 = v48;
                      v8 = v49_.v53;
                      v6 = v44 + 1;
                      *(_QWORD*)(v29 + 544) = v26;
                      *(_QWORD*)(v29 + 552) = v27;
                      *(_QWORD*)(v29 + 560) = v18;
                      *(_QWORD*)(v29 + 568) = 16;
                      *(_QWORD*)(v29 + 576) = v21;
                      *(_QWORD*)(v29 + 584) = 16;
                    LABEL_27:
                      v13 = v41;
                      v16 = v43;
                      break;
                    }
                  }
                }
                v15 =
                    *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v0);
                ++v16;
              } while (v16 < v15);
            }
            ++v13;
          } while (v13 < v15);
        }
        v2 = *(_QWORD*)((char*)((_UNKNOWN*)0x1D78LL) + (_QWORD)v0);
        *(_DWORD*)((char*)((_UNKNOWN*)0x1D70LL) + (_QWORD)v0) = v6;
        if (v6 != 0) {
          qsort_plt(v2, v6, 0x250u, (__int64)CudaDriverRoutine_ed090);
          if (*(_DWORD*)((char*)((_UNKNOWN*)0x1D70LL) + (_QWORD)v0) >= 2u) {
            v30 = 1;
            v31 = 612;
            do {
              v33 = *(_QWORD*)((char*)((_UNKNOWN*)0x1D78LL) + (_QWORD)v0);
              v34 = v33 + v31;
              v35 = *(_DWORD*)(v33 + v31 - 12);
              v36 = *(_DWORD*)(v33 + v31 - 604);
              if (v35 <= v36) {
                if (v35 < v36) {
                  goto LABEL_64;
                }
                v37 = (unsigned __int8*)(v33 + v31);
                v38 = *v37;
                v39 = *(v37 - 592);
                if (v38 == 0) {
                  if (v39 == 0) {
                  LABEL_69:
                    v32 = 0;
                    goto LABEL_61;
                  }
                LABEL_64:
                  v32 = 1;
                  goto LABEL_61;
                }
                if (v39 != 0) {
                  goto LABEL_69;
                }
              }
              v32 = -1;
            LABEL_61:
              ++v30;
              v31 += 592;
              *(_DWORD*)(v34 - 8) = *(_DWORD*)(v34 - 600) + v32;
            } while (v30 < *(unsigned int*)((char*)((_UNKNOWN*)0x1D70LL) +
                                            (_QWORD)v0));
          }
          v1 = 0;
          goto LABEL_73;
        }
      }
    LABEL_72:
      CudaDriverRoutine_12e340(v2);
      v1 = 0;
      *(_QWORD*)((char*)((_UNKNOWN*)0x1D78LL) + (_QWORD)v0) = 0;
    LABEL_73:
      *((_BYTE*)((_UNKNOWN*)0x1D80LL) + (_QWORD)v0) = 1;
      goto LABEL_74;
    }
    CudaDriverRoutine_12e340(0);
    v1 = 2;
  }
LABEL_74:
  CudaDriverStub_108070_alt2((char*)((_UNKNOWN*)0x1D60LL) + (_QWORD)v0);
  return v1;
}

void cuda_driver_ecfc0()
{
  void* v0;
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64* v4;

  v0 = CudaDriverData_1422118;
  if (*((_BYTE*)((_UNKNOWN*)0x1D80LL) + (_QWORD)CudaDriverData_1422118) != 0) {
    CudaDriverStub_107f90_alt2((char*)((_UNKNOWN*)0x1D60LL) +
                               (_QWORD)CudaDriverData_1422118);
    v1 = *(_QWORD*)((char*)((_UNKNOWN*)0x1D78LL) + (_QWORD)v0);
    if (v1 != 0) {
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x1D70LL) + (_QWORD)v0) != 0) {
        v2 = 552;
        v3 = 0;
        do {
          v4 =
              (__int64*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1D78LL) + (_QWORD)v0) +
                         v2);
          CudaDriverRoutine_12e340(*(v4 - 1));
          CudaDriverRoutine_12e340(*v4);
          *(v4 - 1) = 0;
          *v4 = 0;
          ++v3;
          v2 += 592;
        } while (v3 <
                 *(unsigned int*)((char*)((_UNKNOWN*)0x1D70LL) + (_QWORD)v0));
        v1 = *(_QWORD*)((char*)((_UNKNOWN*)0x1D78LL) + (_QWORD)v0);
      }
      CudaDriverRoutine_12e340(v1);
      *(_QWORD*)((char*)((_UNKNOWN*)0x1D78LL) + (_QWORD)v0) = 0;
    }
    *((_BYTE*)((_UNKNOWN*)0x1D80LL) + (_QWORD)v0) = 0;
    CudaDriverStub_108070_alt2((char*)((_UNKNOWN*)0x1D60LL) + (_QWORD)v0);
  }
}

__int64 cuda_driver_ed8e0(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v6;
  _QWORD* v7;
  void* v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;

  CudaDriverRoutine_12df40(&CudaDriverData_1432ddc,
                           (void (*)(void))CudaDriverData_1423270[0]);
  v6 = (_QWORD*)CudaDriverStub_12e330(32);
  if (v6 == nullptr) {
    return 2;
  }
  *v6 = a1;
  v6[1] = a2;
  v7 = v6;
  v8 = CudaDriverData_1422118;
  v6[2] = 0;
  v6[3] = 0;
  CudaDriverStub_12db60((char*)&CudaDriverRoutine_74e8 + (_QWORD)v8);
  v9 = *(_QWORD*)((char*)&CudaDriverRoutine_74f8 + (_QWORD)v8);
  if (v9 != 0) {
    v7[2] = v9;
    v10 = *(_QWORD*)(*(_QWORD*)((char*)&CudaDriverRoutine_74f8 + (_QWORD)v8) +
                     24LL);
    v7[3] = v10;
    if (v10 != 0) {
      *(_QWORD*)(v10 + 16) = v7;
    }
    *(_QWORD*)(*(_QWORD*)((char*)&CudaDriverRoutine_74f8 + (_QWORD)v8) + 24LL) =
        v7;
  }
  else {
    v7[3] = *(_QWORD*)((char*)&CudaDriverRoutine_74f0 + (_QWORD)v8);
    *(_QWORD*)((char*)&CudaDriverRoutine_74f0 + (_QWORD)v8) = v7;
    v12 = v7[3];
    if (v12 != 0) {
      *(_QWORD*)(v12 + 16) = v7;
    }
  }
  *(_QWORD*)((char*)&CudaDriverRoutine_74f8 + (_QWORD)v8) = v7;
  CudaDriverStub_12db80((char*)&CudaDriverRoutine_74e8 + (_QWORD)v8);
  result = 0;
  if (a3 != nullptr) {
    *a3 = v7;
  }
  return result;
}

__int64 cuda_driver_edaa0(_DWORD* a1)
{
  void* v2;

  v2 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)&CudaDriverRoutine_74e0 +
                        (_QWORD)CudaDriverData_1422118);
  *a1 = CudaDriverData_1432de0;
  CudaDriverStub_12db80((char*)&CudaDriverRoutine_74e0 + (_QWORD)v2);
  return 0;
}

__int64 cuda_driver_ee590(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  __int64 v4;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 result;
  __int64 v11;
  unsigned int v12;
  __int64 v13;

  v4 = *(_QWORD*)a4;
  v13 = 0;
  *(_DWORD*)(a4 + 348) = -1;
  v6 = v4 & 0xFFFFFFFFFCFFFFF8LL | 0x1000001;
  *(_QWORD*)a4 = v6;
  if ((v4 & 0x30) != 0x10) {
    v7 = 16;
    if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) &
         1) == 0) {
      v7 = 24;
    }
    v6 = v7 | v6 & 0xFFFFFFFFFDFFFFC1LL;
    *(_QWORD*)a4 = v6;
  }
  v8 = v6 & 0x7E00;
  if ((v6 & 0x7E00) == 0) {
    v6 |= 0x200u;
  }
  if (v8 == 0 || (v6 & 0x7C000000) == 0) {
    if ((v6 & 0x7C000000) == 0) {
      v6 |= 0x4000000u;
    }
    *(_QWORD*)a4 = v6;
  }
  result = cuda_driver_1da1b0(*(_QWORD*)(a1 + 80), (__int64*)a4, a2, &v13);
  if ((_DWORD)result != 0) {
    *a3 = 0;
  }
  else {
    *a3 = CudaDriverStub_1dbab0(v13);
    v11 = v13;
    if ((CudaDriverRoutine_1db1b0(v13) & 0x7C0000000000000LL) != 0) {
      v12 = 1;
    }
    else {
      v12 = 2;
    }
    cuda_driver_ef110_alt1(v11, v12);
    return 0;
  }
  return result;
}

__int64 cuda_driver_ef110(__int64 a1, int a2)
{
  unsigned __int64 v4;
  int* v5;
  __int64 result;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  _BOOL4 v12;
  int v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  struct {
    int v21;
    char gap12_[4];
    __int64 v22;
    __int64 v23;
    __int64 v24;
    _BYTE* v25;
    int v26;
    char gap52_[4];
    _BOOL4 v27;
    char gap60_[4];
    int v28;
    char gap68_[4];
    int v29;
  } v21_;
  _BYTE v30[88];
  __int64 v31;

  v4 = CudaDriverRoutine_1db1b0(a1);
  v5 = (int*)CudaDriverRoutine_1dc020(a1);
  result = CudaDriverRoutine_1dbfd0(a1);
  v7 = result;
  if (result != 0) {
    v8 = *(_DWORD*)(result + 188);
    if ((v4 & 7) == 1 && (v4 & 0x3000000) != 0) {
      v9 = 9;
      v10 = 2;
      v11 = v8 == 3;
      v12 = v8 == 3;
      if (v11) {
        v10 = 21;
      }
      if (v11) {
        v9 = 6;
      }
      if (*(_DWORD*)(CudaDriverData_1432130[v10] + 4 * v9) == 0) {
        return result;
      }
      goto LABEL_15;
    }
  }
  else {
    v8 = 1;
    if ((v4 & 7) == 1 && (v4 & 0x3000000) != 0) {
      v12 = false;
      if (*((_DWORD*)CudaDriverData_1432140 + 9) == 0) {
        return result;
      }
    LABEL_15:
      v31 = 0;
      if (((v4 >> 41) & 7) != 0) {
        v13 = ((v4 >> 41) & 7) == 1;
      }
      else {
        v13 = 3;
      }
      cuda_driver_helpers_1db770(a1, &v31);
      v21_.v21 = 72;
      v21_.v22 = CudaDriverStub_1dbab0(a1);
      v21_.v23 = CudaDriverStub_1dbf90(a1);
      v21_.v24 = v7;
      v21_.v25 = v30;
      v21_.v26 = *v5;
      v21_.v28 = v13;
      v21_.v27 = cuda_driver_predicates_10ebb0(a1);
      if (v31 != 0) {
        v14 = *(_DWORD*)((char*)((_UNKNOWN*)0x15CLL) + v31);
      }
      else {
        v14 = -1;
      }
      v21_.v29 = v14;
      CudaDriverRoutine_eeec0(a1, nullptr, a2, (__int64)v30);
      if (v12) {
        v19 = 21;
      }
      else {
        v19 = 2;
      }
      if (v12) {
        v20 = 6;
      }
      else {
        v20 = 9;
      }
      return cuda_driver_20b420(v19, v20, (__int64)&v21_.v21);
    }
  }
  v15 = ((unsigned int)v4 >> 26) & 0x1F;
  if (v15 <= 8 && ((1 << v15) & 0x18C) != 0) {
    v16 = 16;
    v17 = 21;
    if (v8 != 3) {
      v17 = 2;
      v16 = 28;
    }
    if (*(_DWORD*)(CudaDriverData_1432130[v17] + v16) != 0) {
      v21_.v21 = 64;
      if (((v4 >> 41) & 7) != 0) {
        v18 = ((v4 >> 41) & 7) == 1;
      }
      else {
        v18 = 3;
      }
      v21_.v22 = CudaDriverStub_102e00(a1);
      v21_.v23 = CudaDriverStub_1dbf90(a1);
      v21_.v24 = v7;
      v21_.v25 = v30;
      v21_.v26 = *v5;
      v21_.v28 = v18;
      v21_.v27 = cuda_driver_predicates_10ebb0(a1);
      CudaDriverRoutine_eeec0(a1, nullptr, a2, (__int64)v30);
      if (v8 == 3) {
        v19 = 21;
      }
      else {
        v19 = 2;
      }
      if (v8 == 3) {
        v20 = 4;
      }
      else {
        v20 = 7;
      }
      return cuda_driver_20b420(v19, v20, (__int64)&v21_.v21);
    }
  }
  return result;
}

__int64 cuda_driver_ef3a0(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  bool v4;
  int v5;
  bool v6;
  struct {
    int v7;
    char gap4_[4];
    __int64 v8;
    __int64 v9;
    __int64 v10;
    _BYTE* v11;
  } v7_;
  _BYTE v12[88];

  result = CudaDriverRoutine_1db1b0(a1);
  v3 = ((unsigned int)result >> 26) & 0x1F;
  v4 = v3 > 8;
  v5 = (1 << v3) & 0x18C;
  v6 = v4 || v5 == 0;
  if (!v6 && *(_DWORD*)((char*)((_UNKNOWN*)0x5CLL) +
                        (_QWORD)CudaDriverData_1432140) != 0) {
    v7_.v7 = 40;
    v7_.v8 = CudaDriverStub_102e00(a1);
    v7_.v9 = CudaDriverStub_1dbf90(a1);
    v7_.v10 = CudaDriverRoutine_1dbfd0(a1);
    v7_.v11 = v12;
    CudaDriverRoutine_eeec0(a1, nullptr, 3, (__int64)v12);
    return cuda_driver_20b420(2u, 0x17u, (__int64)&v7_.v7);
  }
  return result;
}

__int64 cuda_driver_ef460(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _BOOL4 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  _QWORD v15[5];
  struct {
    int v16;
    char gap52_[4];
    __int64 v17;
    __int64 v18;
    __int64 v19;
    _QWORD* v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    int v27;
  } v16_;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = CudaDriverRoutine_1dbfd0(a1),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = result;
  if (result == 0) {
    v5 = false;
    if (*((_DWORD*)CudaDriverData_1432198 + 3) == 0) {
      return result;
    }
  LABEL_10:
    v7 = CudaDriverRoutine_1db1b0(a1),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 = v8;
    if (CudaDriverRoutine_1db9c0(a1)) {
      v10 = CudaDriverStub_102e00(a1),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((v7 & 0x7C000000) == 0x10000000) {
      LABEL_12:
        v11 = cuda_driver_helpers_1db7c0(a1),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_15;
      }
    }
    else {
      v10 = 0;
      if ((v7 & 0x7C000000) == 0x10000000) {
        goto LABEL_12;
      }
    }
    v11 = 0;
  LABEL_15:
    v16_.v18 = a1;
    v16_.v16 = 96;
    v16_.v19 = CudaDriverStub_1dbfc0(a1),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16_.v17 = v3;
    v16_.v21 = CudaDriverStub_1dbf90(a1),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16_.v22 = CudaDriverStub_1db800(a1),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16_.v23 = v10;
    v16_.v24 = CudaDriverStub_1dbab0(a1),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16_.v25 = CudaDriverStub_1db1a0(a1),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16_.v26 = v11;
    if ((v7 & 7) == 1 && (v7 & 0x3000000) != 0 &&
        (v15[0] = 0, cuda_driver_helpers_1db770(a1, v15), v15[0] != 0)) {
      v12 = *(_DWORD*)((char*)((_UNKNOWN*)0x15CLL) + v15[0]);
    }
    else {
      v12 = -1;
    }
    v16_.v27 = v12;
    v16_.v20 = v15;
    CudaDriverRoutine_ef640(v7, v9, (__int64)v15),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v5) {
      v13 = 21;
    }
    else {
      v13 = 13;
    }
    if (v5) {
      v14 = 20;
    }
    else {
      v14 = 3;
    }
    return cuda_driver_20b420(v13, v14, (__int64)&v16_.v16);
  }
  v4 = 3;
  v5 = *(_DWORD*)(result + 188) == 3;
  if (*(_DWORD*)(result + 188) == 3) {
    v6 = 21;
  }
  else {
    v6 = 13;
  }
  if (*(_DWORD*)(result + 188) == 3) {
    v4 = 20;
  }
  if (*(_DWORD*)(CudaDriverData_1432130[v6] + 4 * v4) != 0) {
    goto LABEL_10;
  }
  return result;
}

__int64 cuda_driver_ef850(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _BOOL4 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  _BYTE v12[40];
  struct {
    int v13;
    char gap44_[4];
    __int64 v14;
    __int64 v15;
    __int64 v16;
    _BYTE* v17;
  } v13_;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = CudaDriverRoutine_1dbfd0(a1),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = result;
  if (result == 0) {
    v5 = false;
    if (*((_DWORD*)CudaDriverData_1432198 + 4) == 0) {
      return result;
    }
    goto LABEL_6;
  }
  v4 = 13;
  v5 = *(_DWORD*)(result + 188) == 3;
  if (*(_DWORD*)(result + 188) == 3) {
    v4 = 21;
    v6 = 21;
  }
  else {
    v6 = 4;
  }
  if (*(_DWORD*)(CudaDriverData_1432130[v4] + 4 * v6) != 0) {
  LABEL_6:
    v7 = CudaDriverRoutine_1db1b0(a1),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 = v8;
    v13_.v15 = a1;
    v13_.v13 = 40;
    v13_.v14 = v3;
    v13_.v16 = CudaDriverStub_1dbfc0(a1),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v13_.v17 = v12;
    CudaDriverRoutine_ef640(v7, v9, (__int64)v12),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v5) {
      v10 = 21;
    }
    else {
      v10 = 13;
    }
    if (v5) {
      v11 = 21;
    }
    else {
      v11 = 4;
    }
    return cuda_driver_20b420(v10, v11, (__int64)&v13_.v13);
  }
  return result;
}

__int64 cuda_driver_ef950(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  int v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int* v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  unsigned int v25;
  unsigned int v26;
  _DWORD** v27;
  int v28;
  bool v29;
  unsigned __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  _BYTE v34[40];
  struct {
    int v35;
    char gap60_[4];
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    _BYTE* v43;
    char gap128_[8];
    int v44;
    char gap140_[4];
    __int64 v45;
    char gap152_[8];
    int v46;
    int v47;
    int v48;
  } v35_;

  v1 = *(_QWORD*)(result + 632);
  v2 = result;
  v3 = *(_QWORD*)(v1 + 8);
  if (v3 != 0 && *(_DWORD*)(v3 + 188) == 3) {
    v4 = 1;
    if (*((_DWORD*)CudaDriverData_14321d8 + 18) == 0) {
      return result;
    }
  }
  else {
    v4 = 0;
    if (*((_DWORD*)CudaDriverData_1432198 + 1) == 0) {
      return result;
    }
  }
  v5 = *(_DWORD*)(result + 240);
  v33 = 0;
  v6 = (v5 >> 26) & 0x1F;
  v7 = v6 > 8;
  v8 = (1 << v6) & 0x18C;
  v9 = v7 || v8 == 0;
  if (v9) {
    v10 = 0;
  }
  else {
    v10 = *(_QWORD*)(result + 112);
  }
  v11 = *(_QWORD*)(result + 168);
  v9 = *(_BYTE*)(v1 + 161) == 0;
  v35_.v45 = v11;
  if (!v9) {
    v3 = 0;
  }
  v35_.v35 = 120;
  v13 = *(_QWORD*)(result + 104);
  v12 = *(_QWORD*)(result + 112);
  v35_.v36 = v3;
  v35_.v37 = result;
  v14 = *(int**)v1;
  v15 = *v14;
  v35_.v40 = v10;
  v35_.v41 = v13;
  v35_.v44 = v15;
  v35_.v38 = *(_QWORD*)(result + 128);
  v35_.v39 = v12;
  v35_.v43 = v34;
  v16 = v14[5466];
  if (v16 == 1) {
    v17 = *(_DWORD*)(result + 604);
    v18 = 612;
    v19 = 608;
    goto LABEL_17;
  }
  if (v16 == 0) {
    v17 = *(_DWORD*)(result + 600);
    v18 = 608;
    v19 = 604;
  LABEL_17:
    v20 = *(_DWORD*)(result + v19);
    v21 = *(_DWORD*)(result + v18);
    v35_.v46 = v17;
    v35_.v47 = v20;
    v35_.v48 = v21;
  }
  if (v11 != 0) {
    v22 = v11;
  }
  else {
    v22 = result;
  }
  if ((v4 & 1) != 0) {
    v23 = 0;
    v24 = false;
    v25 = 21;
    v26 = 18;
  }
  else {
    v27 = *(_DWORD***)(v22 + 632);
    v28 = (*v27)[5466];
    if (v28 == 4) {
      ((void (*)(__int64, __int64*))v27[290])(v22, &v33);
      v29 =
          CudaDriverRoutine_1ec4a0(*(_QWORD*)(v22 + 632), (_QWORD*)(v22 + 240));
      v23 = v33;
      v25 = 13;
      v26 = 1;
      v24 = !v29;
    }
    else {
      if (v28 != 0 || (unsigned __int8)CudaDriverRoutine_1d9f90(v27) != 0 &&
                          CudaDriverRoutine_1d8a80(v2)) {
        v23 = 0;
        v24 = false;
      }
      else {
        v24 = false;
        v23 = **(unsigned int**)(**(_QWORD**)(v22 + 200) + 176LL);
        v33 = v23;
      }
      v25 = 13;
      v26 = 1;
    }
  }
  v30 = *(_QWORD*)(v2 + 240);
  v31 = *(_QWORD*)(v2 + 248);
  v35_.v42 = v23;
  CudaDriverRoutine_ef640(v30, v31, (__int64)v34);
  v32 = *(_BYTE*)(v2 + 96);
  v34[16] = v24;
  v34[14] = (v32 & 4) != 0;
  return cuda_driver_20b420(v25, v26, (__int64)&v35_.v35);
}

__int64 cuda_driver_efea0(__int64 a1)
{
  int v1;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 result;
  int v14;
  int v15;

  if (*(_DWORD*)a1 != 1) {
    v9 = "poolProps: Invalid allocation type (0x%x)\n";
  LABEL_38:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)v9);
    return 1;
  }
  v1 = *(_DWORD*)(a1 + 8);
  if (v1 == 1) {
    v10 = *(unsigned int*)(a1 + 12);
    if ((v10 & 0x80000000) != 0 || (int)v10 >= CudaDriverData_1434ac0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"poolProps: Invalid location id (%d)");
      return 1;
    }
    v8 = *((_QWORD*)&CudaDriverData_14347a8 + v10 + 35);
  LABEL_19:
    v11 = CudaDriverStub_9b050(v8);
    if (*(_DWORD*)(a1 + 4) != 0) {
      v12 = (__int64*)v11;
      v15 = 0;
      result = cuda_driver_9a090(v8, 119, &v15);
      if ((_DWORD)result != 0) {
        return result;
      }
      v14 = *(_DWORD*)(a1 + 4);
      if ((v14 & ~v15) != 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"poolProps: Invalid handle type specified for the mempool "
                     "(specified: 0x%x, supported: 0x%x)",
            v14, v15);
        return 1;
      }
      if ((v14 & 1) != 0) {
        if ((unsigned __int8)CudaDriverRoutine_fe850(v12, 1) == 0) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"poolProps: CU_MEM_HANDLE_TYPE_POSIX is not supported");
          return 1;
        }
        v14 = *(_DWORD*)(a1 + 4);
      }
      if ((v14 & 8) != 0 &&
          (unsigned __int8)CudaDriverRoutine_fe850(v12, 8) == 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"poolProps: CU_MEM_HANDLE_TYPE_FABRIC is not supported");
        return 1;
      }
    }
    if (*(_WORD*)(a1 + 32) != 0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"poolProps: 'usage' field is non-zero");
    }
    else {
      if (*(_BYTE*)(a1 + 34) == 0 && *(_BYTE*)(a1 + 35) == 0 &&
          *(_BYTE*)(a1 + 36) == 0 && *(_BYTE*)(a1 + 37) == 0 &&
          *(_BYTE*)(a1 + 38) == 0 && *(_BYTE*)(a1 + 39) == 0 &&
          *(_BYTE*)(a1 + 40) == 0 && *(_BYTE*)(a1 + 41) == 0 &&
          *(_BYTE*)(a1 + 42) == 0 && *(_BYTE*)(a1 + 43) == 0 &&
          *(_BYTE*)(a1 + 44) == 0 && *(_BYTE*)(a1 + 45) == 0 &&
          *(_BYTE*)(a1 + 46) == 0 && *(_BYTE*)(a1 + 47) == 0 &&
          *(_BYTE*)(a1 + 48) == 0 && *(_BYTE*)(a1 + 49) == 0 &&
          *(_BYTE*)(a1 + 50) == 0 && *(_BYTE*)(a1 + 51) == 0 &&
          *(_BYTE*)(a1 + 52) == 0 && *(_BYTE*)(a1 + 53) == 0 &&
          *(_BYTE*)(a1 + 54) == 0 && *(_BYTE*)(a1 + 55) == 0 &&
          *(_BYTE*)(a1 + 56) == 0 && *(_BYTE*)(a1 + 57) == 0 &&
          *(_BYTE*)(a1 + 58) == 0 && *(_BYTE*)(a1 + 59) == 0 &&
          *(_BYTE*)(a1 + 60) == 0 && *(_BYTE*)(a1 + 61) == 0 &&
          *(_BYTE*)(a1 + 62) == 0 && *(_BYTE*)(a1 + 63) == 0 &&
          *(_BYTE*)(a1 + 64) == 0 && *(_BYTE*)(a1 + 65) == 0 &&
          *(_BYTE*)(a1 + 66) == 0 && *(_BYTE*)(a1 + 67) == 0 &&
          *(_BYTE*)(a1 + 68) == 0 && *(_BYTE*)(a1 + 69) == 0 &&
          *(_BYTE*)(a1 + 70) == 0 && *(_BYTE*)(a1 + 71) == 0 &&
          *(_BYTE*)(a1 + 72) == 0 && *(_BYTE*)(a1 + 73) == 0 &&
          *(_BYTE*)(a1 + 74) == 0 && *(_BYTE*)(a1 + 75) == 0 &&
          *(_BYTE*)(a1 + 76) == 0 && *(_BYTE*)(a1 + 77) == 0 &&
          *(_BYTE*)(a1 + 78) == 0 && *(_BYTE*)(a1 + 79) == 0 &&
          *(_BYTE*)(a1 + 80) == 0 && *(_BYTE*)(a1 + 81) == 0 &&
          *(_BYTE*)(a1 + 82) == 0 && *(_BYTE*)(a1 + 83) == 0 &&
          *(_BYTE*)(a1 + 84) == 0 && *(_BYTE*)(a1 + 85) == 0 &&
          *(_BYTE*)(a1 + 86) == 0 && *(_BYTE*)(a1 + 87) == 0) {
        if (CudaDriverRoutine_efe40(v8)) {
          if ((*(_DWORD*)(a1 + 8) & 0xFFFFFFFE) != 2 ||
              !CudaDriverRoutine_9aa40(v8)) {
            return 0;
          }
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"poolProps: HOST and HOST_NUMA pools are not supported "
                       "on this platform");
        }
        return 801;
      }
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"poolProps: 'reserved' field is non-zero");
    }
    return 1;
  }
  if (v1 != 3) {
    v9 = "poolProps: Invalid location type (0x%x)\n";
    goto LABEL_38;
  }
  v4 = CudaDriverStub_4f840(a1);
  v5 = *(int*)(a1 + 12);
  if (v4 != 0) {
    if ((unsigned int)CudaDriverStub_12db70(v5) != 0) {
      goto LABEL_6;
    }
    goto LABEL_37;
  }
  if ((_DWORD)v5 != 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"poolProps: Location id must be 0 when NUMA is not supported");
    return 1;
  }
  if ((unsigned int)CudaDriverStub_12db70(0) == 0) {
  LABEL_37:
    v9 = "poolProps: Requested HOST_NUMA allocation id (%d) is invalid";
    goto LABEL_38;
  }
LABEL_6:
  if ((unsigned __int8)CudaDriverRoutine_fe8c0() == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"poolProps: HOST_NUMA allocation is not "
                                     "supported on this platform");
    return 801;
  }
  if (CudaDriverData_1434ac0 != 0) {
    v6 = 0;
    while (1) {
      v8 = *((_QWORD*)&CudaDriverData_14347a8 + v6 + 35);
      if ((unsigned __int8)CudaDriverStub_4f840(v8) != 0 &&
          cuda_driver_predicates_9ac80(v8)) {
        break;
      }
      v7 = CudaDriverData_1434ac0;
      if (++v6 >= (unsigned __int64)(unsigned int)CudaDriverData_1434ac0) {
        goto LABEL_13;
      }
    }
    v7 = CudaDriverData_1434ac0;
  LABEL_13:
    if (v7 != (_DWORD)v6) {
      goto LABEL_19;
    }
  }
  CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                          (__int64)"poolProps: No devices found that support "
                                   "HOST_NUMA allocations");
  return 801;
}

unsigned __int64 cuda_driver_f0360(int a1)
{
  return CudaDriverRoutine_8b200(
      (__int64)&CudaDriverRoutine_47b0 + (_QWORD)CudaDriverData_1422118, 0, a1);
}

__int64 cuda_driver_f1180(__int64* a1, unsigned __int64 a2)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned int v7;
  __int64* v8;
  __int64* v9;
  _BOOL4 v10;
  struct {
    int v12;
    char gap4_[4];
    _QWORD* v13;
    char gap16_[8];
    int v14;
    _BOOL4 v15;
  } v12_;

  v3 = a1[10];
  v4 = a1[29];
  v5 = a2;
  if (a2 <= (unsigned int)CudaDriverStub_102390(*a1)) {
    v5 = (unsigned int)CudaDriverStub_102390(*a1);
  }
  v6 = a1[5];
  if (v6 <= v5) {
    v7 = 0;
  }
  else {
    v7 = 0;
    v8 = (__int64*)(v3 + 80 * v4);
    v9 = v8;
    do {
      if (*v8 != 0) {
        if ((unsigned __int8)CudaDriverStub_102380(
                *a1,
                -858993459 * (unsigned int)(((unsigned __int64)v9 - a1[10]) >>
                                            4)) != 0) {
          v6 = a1[5];
        }
        else {
          CudaDriverRoutine_f0f80((__int64)a1, v8);
          cuda_driver_checks_102c20(
              *a1, -858993459 * (((unsigned __int64)v9 - a1[10]) >> 4), 0);
          v7 = 1;
          v6 = a1[5] - 1;
          a1[5] = v6;
        }
      }
      v8 -= 10;
      v9 -= 10;
    } while (v6 > v5);
  }
  if (*(_DWORD*)((char*)((_UNKNOWN*)0xC0LL) + (_QWORD)CudaDriverData_1432140) !=
      0) {
    v12_.v12 = 32;
    v12_.v13 = a1 + 22;
    v10 = *((_DWORD*)a1 + 30) == 2;
    v12_.v14 = (unsigned __int8)v7;
    v12_.v15 = v10;
    cuda_driver_20b420(2u, 0x30u, (__int64)&v12_.v12);
  }
  return v7;
}

__int64 cuda_driver_f12e0(unsigned __int64 a1)
{
  void* v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  unsigned __int64 v8;
  __int64 v9;

  v2 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  v3 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_47b0 + (_QWORD)v2);
  if (v3 != 0) {
    v4 = 16LL * v3;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do {
      if (CudaDriverRoutine_8b200((__int64)&CudaDriverRoutine_47b0 + (_QWORD)v2,
                                  0, v5) != 0) {
        CudaDriverStub_107f90_alt1(
            *(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v2) + v6);
        v8 = CudaDriverRoutine_8b200(
            (__int64)&CudaDriverRoutine_47b0 + (_QWORD)v2, 0, v5);
        if (v8 != 0 && (v9 = v8, ((a1 >> **(_DWORD**)(v8 + 176)) & 1) != 0) &&
            (v7 |= (unsigned __int8)cuda_driver_f1180((__int64*)v8,
                                                      *(_QWORD*)(v8 + 32)),
             *(_DWORD*)(v9 + 120) == 2) &&
            *(_QWORD*)(v9 + 40) == 0) {
          CudaDriverRoutine_8b180((__int64)&CudaDriverRoutine_47b0 + (_QWORD)v2,
                                  0, *(_DWORD*)(v9 + 112), 0);
          CudaDriverStub_108070_alt1(
              *(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v2) + v6);
          CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 +
                                   (_QWORD)v2);
          CudaDriverRoutine_f0ba0(v9);
          cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
        }
        else {
          CudaDriverStub_108070_alt1(
              *(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v2) + v6);
        }
      }
      v6 += 16;
      ++v5;
    } while (v4 != v6);
  }
  else {
    v7 = 0;
  }
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
  return v7;
}

__int64 cuda_driver_f1d70(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  struct {
    __int64 v12;
    __int64 v13;
    char gap24_[296];
    __int64 v14;
    __int64 v15;
  } v12_;
  __int64 v16;

  v16 = 0;
  v6 = CudaDriverStub_102050_alt1();
  v7 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(CudaDriverStub_102040(*(_QWORD*)v6) + 24) +
                          80LL) +
               80LL * *(unsigned int*)(v6 + 8) + 8);
  *a3 = 0;
  memcpy_plt((__int64)&v12_.v12, v7 + 240, 0x180u);
  v12_.v14 = v7;
  v8 = *(_QWORD*)(v7 + 632);
  v9 = *(_QWORD*)(v7 + 88);
  v12_.v13 |= 0x100000uLL;
  v12_.v15 = *(_QWORD*)(v6 + 16) - v9;
  result = cuda_driver_1da1b0(v8, &v12_.v12, a2, &v16);
  if ((_DWORD)result == 0) {
    v11 = v16;
    *(_QWORD*)(v16 + 512) = a1;
    *a3 = v11;
  }
  return result;
}

__int64 cuda_driver_f2040(__int64 a1, int a2)
{
  char* v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;

  v4 = (char*)CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  v5 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_47b0 + (_QWORD)v4);
  if (v5 != 0) {
    v6 = 16LL * v5;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while (1) {
      if (CudaDriverRoutine_8b200((__int64)&CudaDriverRoutine_47b0 + (_QWORD)v4,
                                  0, v7) == 0) {
        goto LABEL_4;
      }
      CudaDriverStub_107f90_alt1(
          *(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v4) + v8);
      v10 = CudaDriverRoutine_8b200(
          (__int64)&CudaDriverRoutine_47b0 + (_QWORD)v4, 0, v7);
      if (v10 != 0) {
        v11 = *(_DWORD*)(v10 + 192);
        if (a2 == 2) {
          if (v11 == 1 && a1 == *(_DWORD*)(v10 + 196)) {
          LABEL_12:
            v12 = v10;
            v9 |= (unsigned __int8)cuda_driver_f1180((__int64*)v10, 0);
            if (*(_DWORD*)(v12 + 120) == 2 && *(_QWORD*)(v12 + 40) == 0) {
              CudaDriverRoutine_8b180((__int64)&CudaDriverRoutine_47b0 +
                                          (_QWORD)v4,
                                      0, *(_DWORD*)(v12 + 112), 0);
              CudaDriverStub_108070_alt1(
                  *(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v4) + v8);
              CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 +
                                       (_QWORD)v4);
              CudaDriverRoutine_f0ba0(v12);
              cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v4);
              goto LABEL_4;
            }
          }
        }
        else if (v11 == 3) {
          goto LABEL_12;
        }
      }
      CudaDriverStub_108070_alt1(
          *(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v4) + v8);
    LABEL_4:
      v8 += 16;
      ++v7;
      if (v6 == v8) {
        goto LABEL_16;
      }
    }
  }
  v9 = 0;
LABEL_16:
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v4);
  if (a2 == 2) {
    CudaDriverRoutine_f22e0(a1);
  }
  v13 = &v4[8 * a1];
  CudaDriverStub_107f90_alt1(*((_QWORD*)v13 + 35) + 21920LL);
  v14 = *((_QWORD*)v13 + 35);
  v15 = *(_QWORD*)(v14 + 21912);
  if (v15 == 0) {
    goto LABEL_30;
  }
  *(_QWORD*)(v14 + 21912) = 0;
  CudaDriverStub_108070_alt1(*((_QWORD*)v13 + 35) + 21920LL);
  v16 = 0;
  do {
    while (1) {
      v17 = v15;
      v15 = *(_QWORD*)(v15 + 248);
      if (v15 != 0) {
        *(_QWORD*)(v15 + 240) = 0;
      }
      *(_QWORD*)(v17 + 240) = 0;
      *(_QWORD*)(v17 + 248) = 0;
      if ((unsigned __int8)cuda_driver_b7280(v17) == 0) {
        break;
      }
      v9 = 1;
      if (v15 == 0) {
        goto LABEL_27;
      }
    }
    *(_QWORD*)(v17 + 248) = v16;
    if (v16 != 0) {
      *(_QWORD*)(v16 + 240) = v17;
    }
    v16 = v17;
  } while (v15 != 0);
LABEL_27:
  if (v16 != 0) {
    v18 = &v4[8 * a1];
    CudaDriverStub_107f90_alt1(*((_QWORD*)v18 + 35) + 21920LL);
    *(_QWORD*)(v16 + 248) = *(_QWORD*)(*((_QWORD*)v18 + 35) + 21912LL);
    *(_QWORD*)(*((_QWORD*)v18 + 35) + 21912LL) = v16;
    v14 = *((_QWORD*)v18 + 35);
    v19 = *(_QWORD*)(v14 + 21912);
    v20 = *(_QWORD*)(v19 + 248);
    if (v20 != 0) {
      *(_QWORD*)(v20 + 240) = v19;
      v14 = *((_QWORD*)v18 + 35);
    }
  LABEL_30:
    CudaDriverStub_108070_alt1(v14 + 21920);
  }
  return v9;
}

unsigned __int64 cuda_driver_f2bb0(int* a1)
{
  void* v2;
  unsigned __int64 v3;

  v2 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  v3 = CudaDriverRoutine_8b200((__int64)&CudaDriverRoutine_47b0 + (_QWORD)v2, 0,
                               *a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
  return v3;
}

__int64 cuda_driver_f2ff0(__int64 result)
{
  int v1;
  __int64 v2;
  char* v3;
  unsigned __int64 v4;

  if (result != 0) {
    v1 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)(result + 120),
                                   (unsigned int*)&v1, 1u);
    if (v1 != 0) {
      return 0;
    }
    else {
      v2 = result;
      v3 = (char*)CudaDriverData_1422118;
      cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                         (_QWORD)CudaDriverData_1422118);
      v4 =
          CudaDriverRoutine_8b200((__int64)&CudaDriverRoutine_47b0 + (_QWORD)v3,
                                  0, **(_DWORD**)(v2 + 176));
      CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v3);
      result = 1;
      atomic_compare_exchange_strong(
          (atomic_ullong* volatile)&v3[8 * **(unsigned int**)(v2 + 176) +
                                       18392],
          (unsigned __int64*)&v2, v4);
    }
  }
  return result;
}

__int64 cuda_driver_f35d0(__int64 result)
{
  __int64 v1;
  struct {
    int v2;
    char gap12_[4];
    __int64 v3;
  } v2_;

  if (*(_DWORD*)((char*)((_UNKNOWN*)0xBCLL) + (_QWORD)CudaDriverData_1432140) !=
      0) {
    v2_.v2 = 24;
    v1 = result + 176;
    if (result == 0) {
      v1 = 0;
    }
    v2_.v3 = v1;
    return cuda_driver_20b420(2u, 0x2Fu, (__int64)&v2_.v2);
  }
  return result;
}

__int64 cuda_driver_f3640(__int64 a1, __int64* a2, unsigned __int64 a3,
                          __int64 a4, _QWORD* a5)
{
  void* v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 result;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v36;
  struct {
    _QWORD v37[24];
    __int64 v38;
  } v37_;

  v37_.v38 = 0;
  v7 = CudaDriverData_1422118;
  memset(v37_.v37, 0, sizeof(v37_.v37));
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  v8 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_4780 + (_QWORD)v7);
  if (v8 != 0) {
    v9 = 0;
    v10 = 0;
    v11 = v8;
    while (1) {
      if (v9 != *(_DWORD*)(a4 + 348) &&
          CudaDriverRoutine_8b200((__int64)&CudaDriverRoutine_4768 + (_QWORD)v7,
                                  v9, *(_DWORD*)(a1 + 112)) != 0) {
        cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v7] +
                           616 * v9);
        v12 = CudaDriverRoutine_114270(v9);
        if (v12 != 0) {
          v13 = *(_DWORD*)(a1 + 112);
          v14 = v12;
          v36 = 0;
          v15 = cuda_driver_checks_102f50(v9, v13);
          v10 = v15;
          if (v15 != 0) {
            v16 = cuda_driver_checks_1024a0(v15, 0xFFFFFFFFFFFFFFFFLL, a3,
                                            (__int64)&v36);
            CudaDriverStub_102360(v10);
            if (v16 != nullptr) {
              v17 = *(_QWORD*)(v14 + 16);
              if (v17 == *(_QWORD*)(a4 + 16)) {
                v18 = 0;
              }
              else {
                CudaDriverRoutine_98850(v17);
                v17 = *(_QWORD*)(v14 + 16);
                v18 = v17;
              }
              v19 = a5;
              CudaDriverRoutine_1ba4f0((__int64)v37_.v37, *(_QWORD*)(v17 + 72));
              v21 = CudaDriverRoutine_1ba7d0((__int64)v37_.v37, v14 + 360);
              CudaDriverRoutine_1085b0(
                  *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v7] + 616 * v9);
              CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 +
                                       (_QWORD)v7);
              v22 = v21;
              if (v21 == 0) {
                v23 = *(_QWORD*)(a4 + 16);
                v24 = *(_QWORD*)(v14 + 16);
                if (v23 == v24) {
                  v22 = cuda_driver_1150a0(a4, (__int64)v37_.v37, 0);
                }
                else {
                  if (v23 != 0) {
                    v25 = CudaDriverRoutine_98340(*(_QWORD*)(a4 + 16));
                    v24 = *(_QWORD*)(v14 + 16);
                  }
                  else {
                    v25 = 0;
                  }
                  if (v24 != 0) {
                    v24 = CudaDriverRoutine_98340(v24);
                  }
                  v26 = v25 + 24;
                  if (v25 == 0) {
                    v26 = 0;
                  }
                  if (v24 != 0) {
                    v27 = v24 + 24;
                  }
                  else {
                    v27 = 0;
                  }
                  cuda_driver_108620(v26, v27, 0);
                  v22 = cuda_driver_1150a0(a4, (__int64)v37_.v37, 0);
                  v28 = *(_QWORD*)(a4 + 16);
                  if (v28 != 0) {
                    v29 = CudaDriverRoutine_98340(v28);
                  }
                  else {
                    v29 = 0;
                  }
                  v30 = *(_QWORD*)(v14 + 16);
                  if (v30 != 0) {
                    v30 = CudaDriverRoutine_98340(v30);
                  }
                  v31 = v29 + 24;
                  if (v29 == 0) {
                    v31 = 0;
                  }
                  if (v30 != 0) {
                    v32 = v30 + 24;
                  }
                  else {
                    v32 = 0;
                  }
                  CudaDriverRoutine_108900(v31, v32, 0);
                }
              }
              CudaDriverRoutine_1ba580((__int64)v37_.v37);
              if (v18 != 0) {
                CudaDriverRoutine_98870(v18);
              }
              result = v22;
              goto LABEL_14;
            }
          }
        }
        CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v7] +
                                 616 * v9);
      }
      if (++v9 == v11) {
        goto LABEL_13;
      }
    }
  }
  v10 = 0;
LABEL_13:
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v7);
  v19 = a5;
  result = 2;
  v16 = nullptr;
LABEL_14:
  *a2 = v10;
  *v19 = v16;
  return result;
}

unsigned __int64* cuda_driver_f3920(__int64 a1, __int64* a2, __int64 a3,
                                    _BYTE* a4)
{
  __int64 v8;
  unsigned int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64* result;
  __int64* v15;

  v8 = CudaDriverStub_102050(a1);
  v10 = *(_DWORD*)(v8 + 8);
  v9 = *(_DWORD*)(v8 + 12);
  v11 = CudaDriverStub_102e00(*a2);
  if (a3 == v11) {
    if (*a4 == 0) {
      *a4 = 1;
      CudaDriverStub_107f90_alt1(a2[11]);
    }
  }
  else {
    CudaDriverStub_102350(a3);
  }
  CudaDriverStub_102e00(*a2);
  v12 = cuda_driver_checks_102e10(a3);
  ((void (*)(__int64, __int64, __int64))CudaDriverRoutine_1021a0)(a3, a1, v12);
  if (a3 != v11) {
    CudaDriverStub_102360(a3);
  }
  result = (unsigned __int64*)CudaDriverStub_102e00(*a2);
  if ((unsigned __int64*)a3 == result && v9 + 1 >= v10 + 1) {
    do {
      v15 = (__int64*)(a2[10] + 80LL * v9);
      if (*v15 != 0) {
        result = CudaDriverStub_102380(*a2, v9);
        if ((_BYTE)result == 0 && a2[5] > (unsigned __int64)a2[4]) {
          CudaDriverRoutine_f0f80((__int64)a2, v15);
          result = cuda_driver_checks_102c20(*a2, v9, 0);
          --a2[5];
        }
      }
    } while (v9-- >= v10 + 1);
  }
  return result;
}

__int64 cuda_driver_f3c60(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  void* v7;
  __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  struct {
    _BYTE v27[8];
    __int64 v28;
  } v27_;

  v2 = *(unsigned int*)(a2 + 4);
  if ((_DWORD)v2 != 0) {
    v5 = 0;
    v6 = 0;
    v7 = CudaDriverData_1422118;
    while (1) {
      v8 = *(_QWORD*)(a2 + 8) + v5;
      v9 = *(_DWORD*)(v8 + 8);
      if (v9 == *(_DWORD*)(a1 + 348)) {
        goto LABEL_3;
      }
      v10 = *(_QWORD*)v8;
      cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v7);
      cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v7] +
                         616LL * v9);
      v11 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 16));
      v12 = CudaDriverRoutine_1ba5d0((__int64)v27_.v27, v11, v9, v10);
      if (v12 != 0) {
        v19 = v12;
        CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v7] +
                                 616LL * v9);
        CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v7);
        return v19;
      }
      if (v27_.v28 != *(_QWORD*)(a1 + 16)) {
        v13 = CudaDriverStub_12d100(v27_.v27);
        CudaDriverRoutine_98850(v13);
      }
      CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v7] +
                               616LL * v9);
      CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v7);
      if (v27_.v28 != *(_QWORD*)(a1 + 16)) {
        break;
      }
    LABEL_18:
      v19 = cuda_driver_1150a0(a1, (__int64)v27_.v27, 0);
      if (CudaDriverStub_12d100(v27_.v27) != *(_QWORD*)(a1 + 16)) {
        if (CudaDriverStub_12d100(v27_.v27) != 0) {
          v20 = CudaDriverStub_12d100(v27_.v27);
          v21 = CudaDriverRoutine_98340(v20);
          v22 = *(_QWORD*)(a1 + 16);
          if (v22 != 0) {
            goto LABEL_21;
          }
        }
        else {
          v21 = 0;
          v22 = *(_QWORD*)(a1 + 16);
          if (v22 != 0) {
          LABEL_21:
            v22 = CudaDriverRoutine_98340(v22);
          }
        }
        v23 = v21 + 24;
        if (v21 == 0) {
          v23 = 0;
        }
        if (v22 != 0) {
          v24 = v22 + 24;
        }
        else {
          v24 = 0;
        }
        CudaDriverRoutine_108900(v23, v24, 0);
        v25 = CudaDriverStub_12d100(v27_.v27);
        CudaDriverRoutine_98870(v25);
      }
      CudaDriverRoutine_1ba580((__int64)v27_.v27);
      if (v19 != 0) {
        return v19;
      }
      v2 = *(unsigned int*)(a2 + 4);
    LABEL_3:
      ++v6;
      v5 += 16;
      if (v6 >= v2) {
        return 0;
      }
    }
    if (CudaDriverStub_12d100(v27_.v27) != 0) {
      v14 = CudaDriverStub_12d100(v27_.v27);
      v15 = CudaDriverRoutine_98340(v14);
      v16 = *(_QWORD*)(a1 + 16);
      if (v16 == 0) {
      LABEL_12:
        v17 = v15 + 24;
        if (v15 == 0) {
          v17 = 0;
        }
        if (v16 != 0) {
          v18 = v16 + 24;
        }
        else {
          v18 = 0;
        }
        cuda_driver_108620(v17, v18, 0);
        goto LABEL_18;
      }
    }
    else {
      v15 = 0;
      v16 = *(_QWORD*)(a1 + 16);
      if (v16 == 0) {
        goto LABEL_12;
      }
    }
    v16 = CudaDriverRoutine_98340(v16);
    goto LABEL_12;
  }
  return 0;
}

__int64 cuda_driver_f43c0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  __int64 result;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 i;
  unsigned __int64 j;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  _QWORD v36[5];
  _QWORD v37[62];

  v4 = *(_QWORD*)(a2 + 8LL * a4);
  v5 = *(_QWORD*)(a1 + 8LL * a4);
  LODWORD(v6) = a3;
  v36[0] = 0;
  v34 = v5;
  v35 = 0;
  CudaDriverRoutine_d56a0(v4, (__int64)v36, &v35);
  v8 = v36[0];
  if (v36[0] <= v35) {
    v6 = (unsigned int)v6;
    v10 = CudaDriverData_1422118;
    v33 = (char*)CudaDriverData_1422118 + 8 * a4;
    while ((unsigned __int8)CudaDriverRoutine_4d790(
               *(unsigned __int64**)(v4 + 8), v8) == 0) {
      result = 0;
    LABEL_34:
      if (++v8 > v35) {
        return result;
      }
    }
    CudaDriverRoutine_4d790(*(unsigned __int64**)(v34 + 8), v6);
    v11 = *((_QWORD*)v33 + 2514);
    memset(&v36[1], 0, 32);
    memset(v37, 0, 480);
    v12 = *(_QWORD*)(v11 + 80);
    v13 = (_QWORD*)(v12 + 80 * v8);
    v14 = v12 + 80 * v6;
    v15 = v13[3];
    v17 = *(_QWORD*)(v14 + 24);
    v16 = (__int64*)(v14 + 24);
    if (v15 != v17) {
      if (v15 != 0) {
        CudaDriverStub_107f90_alt1(v15);
        if (*(_QWORD*)(v15 + 16) != 0) {
          CudaDriverRoutine_f5420((__int64)v13);
        }
        v18 = v13[3];
        *v13 = 0;
        --*(_QWORD*)(v18 + 32);
        v13[3] = 0;
        v19 = *(_QWORD*)(v15 + 32);
        CudaDriverStub_108070_alt1(v15);
        if (v19 == 0) {
          CudaDriverRoutine_12e340(v15);
        }
      }
      v20 = *v16;
      CudaDriverStub_107f90_alt1(*v16);
      v13[3] = v20;
      *v13 = *(_QWORD*)(v20 + 16);
      v21 = *(_QWORD*)(v20 + 32);
      *(_QWORD*)(v20 + 32) = v21 + 1;
      CudaDriverStub_108070_alt1(v20);
      if (v21 == -1) {
        CudaDriverRoutine_12e340(v20);
      }
      v22 = v13[5] & ~v13[6];
      if (v22 != 0) {
        result = CudaDriverRoutine_f19e0(v11, v8);
        if ((_DWORD)result != 0) {
          goto LABEL_31;
        }
        v23 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v10);
        if ((_DWORD)v23 != 0) {
          if (v23 >= 8) {
            v31 = v37;
            v24 = 0;
            do {
              v32 = v22 >> v24;
              if (((v22 >> v24) & 1) != 0) {
                *(v31 - 4) = v13;
              }
              if ((v32 & 2) != 0) {
                *(v31 - 3) = v13;
              }
              if ((v32 & 4) != 0) {
                *(v31 - 2) = v13;
              }
              if ((v32 & 8) != 0) {
                *(v31 - 1) = v13;
              }
              if ((v32 & 0x10) != 0) {
                *v31 = v13;
              }
              if ((v32 & 0x20) != 0) {
                v31[1] = v13;
              }
              if ((v32 & 0x40) != 0) {
                v31[2] = v13;
              }
              if ((v32 & 0x80) != 0) {
                v31[3] = v13;
              }
              v24 += 8;
              v31 += 8;
            } while ((v23 & 0xFFFFFFF8) != v24);
          }
          else {
            v24 = 0;
          }
          for (i = v23 & 7; i != 0; --i) {
            if (((v22 >> v24) & 1) != 0) {
              v36[v24 + 1] = v13;
            }
            ++v24;
          }
          for (j = 0; j < v23; ++j) {
            v27 = v36[j + 1];
            if (v27 != 0) {
              v28 = *(_QWORD*)(v10[j + 35] + 16928LL);
              v29 = v27 + 16;
              do {
                v30 = *(_QWORD*)(*(_QWORD*)v29 + 632LL);
                v29 = *(_QWORD*)v29 + 680LL;
              } while (v30 != v28);
              result = (*(__int64 (**)(void))(v28 + 2224))();
              if ((_DWORD)result != 0) {
                goto LABEL_31;
              }
              v23 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v10);
            }
          }
        }
      }
    }
    result = 0;
  LABEL_31:
    ++v6;
    if ((_DWORD)result != 0) {
      return result;
    }
    goto LABEL_34;
  }
  return 0;
}

__int64 cuda_driver_f5320(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  void* v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  unsigned __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned __int64 v10;

  v1 = a1;
  if (a1 != 0) {
    v2 = *(unsigned int*)(a1 + 4);
    v3 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                       (_QWORD)CudaDriverData_1422118);
    if ((_DWORD)v2 != 0) {
      v4 = 16 * v2;
      for (i = 0; v4 != i; i += 16) {
        v6 = *(_QWORD*)(v1 + 8) + i;
        v7 = *(_QWORD*)v6;
        v8 = *(_DWORD*)(v6 + 8);
        cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v3] +
                           616LL * v8);
        v9 = CudaDriverRoutine_114270(v8);
        if (v9 != 0) {
          v10 = cuda_driver_118980(v9);
          CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v3] +
                                   616LL * v8);
          if (v10 < v7) {
            LODWORD(v1) = 1;
            goto LABEL_10;
          }
        }
        else {
          CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v3] +
                                   616LL * v8);
        }
      }
    }
    LODWORD(v1) = 0;
  LABEL_10:
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v3);
  }
  return (unsigned int)v1;
}

__int64 cuda_driver_f5d20(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 i;
  _QWORD* v10;

  CudaDriverStub_102350(a2);
  v4 = CudaDriverStub_102370(a2);
  v5 = *(_QWORD*)(CudaDriverStub_102040(v4) + 24);
  v10 = cuda_driver_checks_102b80(a2, 0xFFFFFFFFFFFFFFFFLL);
  CudaDriverStub_102360(a2);
  v6 = **(_QWORD**)(a1 + 8LL * **(unsigned int**)(v5 + 176) + 16);
  CudaDriverStub_102350(v6);
  v7 = cuda_driver_checks_102b50((__int64*)&v10);
  if (v7 != 0) {
    for (i = v7; i != 0; i = cuda_driver_checks_102b50((__int64*)&v10)) {
      ((void (*)(__int64, __int64, _QWORD))CudaDriverRoutine_1021a0)(v6, i, 0);
    }
  }
  return CudaDriverStub_102360(v6);
}

bool cuda_driver_f7b60(int* a1, __int64 a2)
{
  int v2;

  v2 = *a1;
  if (a1[42] == 2) {
    if (v2 == 1) {
      CudaDriverStub_1dbab0(*((_QWORD*)a1 + 4));
      return true;
    }
    return true;
  }
  if (v2 == 3) {
    if (*((_BYTE*)a1 + 88) != 0 ||
        (*((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
         2) == 0 ||
        *(_BYTE*)(*(_QWORD*)(a2 + 64) + 17096LL) == 0) {
      return true;
    }
    if ((unsigned __int8)CudaDriverRoutine_1d9f90(*(_QWORD*)(a2 + 80)) == 0) {
      return *a1 == 3;
    }
  }
  return false;
}

__int64 cuda_driver_f7ce0(_DWORD* a1, __int64 a2)
{
  int v2;
  __int64 result;
  _DWORD* v4;
  __int64 v5;

  v2 = *a1;
  if (*a1 == 3) {
    if (*((_BYTE*)a1 + 88) != 0 ||
        (*((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
         2) == 0 ||
        *(_BYTE*)(*(_QWORD*)(a2 + 64) + 17096LL) == 0) {
      return 0;
    }
    v4 = a1;
    v5 = a2;
    if ((unsigned __int8)CudaDriverRoutine_1d9f90(*(_QWORD*)(a2 + 80)) != 0) {
      return 1;
    }
    v2 = *v4;
    a1 = v4;
    a2 = v5;
  }
  else if (v2 == 2) {
    return (*((_QWORD*)a1 + 17) >> **(_DWORD**)(a2 + 64)) & 1LL;
  }
  if (v2 == 1) {
    result = *((_QWORD*)a1 + 4);
    if (result == 0) {
      return result;
    }
    return CudaDriverRoutine_1dbb80(result, *(_QWORD*)(a2 + 80)) != 0;
  }
  if (v2 != 0) {
    return 0;
  }
  result = *((_QWORD*)a1 + 3);
  if (result != 0) {
    return CudaDriverRoutine_1dbb80(result, *(_QWORD*)(a2 + 80)) != 0;
  }
  return result;
}

__int64 cuda_driver_f8620(__int64 a1, __int64 a2, int a3, unsigned __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                          __int64 a9, __int64 a10, unsigned __int64 a11,
                          unsigned __int64 a12, unsigned __int64* a13,
                          __int64 a14, unsigned __int8 a15)
{
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 result;
  int v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  char* v35;
  char v36;
  __int64 v37;
  __int64 v38;
  int v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  char* v53;
  _QWORD* v54;
  __int64 v55;
  char v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned int v60;
  __int64 v61;
  char v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;

  *(_QWORD*)(a1 + 176) = a7;
  *(_QWORD*)(a1 + 184) = a8;
  *(_QWORD*)(a1 + 192) = a9;
  if (a3 == 3) {
    if (a6 != 0) {
      if (a10 == 0) {
        *(_DWORD*)a1 = 0;
        *(_QWORD*)(a1 + 8) = a6;
        result = 0;
        *(_DWORD*)(a1 + 16) = 0;
        *(_QWORD*)(a1 + 24) = *(_QWORD*)(a6 + 80);
        goto LABEL_33;
      }
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Cannot copy non 0 level of detail (LOD)\n");
    }
    else {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Array operand is NULL\n");
    }
    result = 1;
  LABEL_33:
    *(_DWORD*)(a1 + 160) = a3;
    return result;
  }
  v64 = 0;
  if (a3 != 1) {
    a4 = a5;
  }
  if (a3 == 4) {
    if (a2 != 0 && (unsigned __int8)CudaDriverRoutine_985c0(a2) == 0) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Specified context is a non-UVA context & operand not "
                   "specified as host or device.\n");
      return 1;
    }
  }
  else if (a2 == 0) {
    CudaDriverRoutine_12b530();
    if (a4 != 0) {
      goto LABEL_14;
    }
  LABEL_35:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Null address specified\n");
    return 1;
  }
  if (a4 == 0) {
    goto LABEL_35;
  }
LABEL_14:
  v21 = a11;
  v20 = a12;
  if (a14 != 0) {
    LOBYTE(v65) = 0;
    result = CudaDriverRoutine_d4440(a1, &v65, a14, a4, a11, a12, a13, a15);
    if ((_DWORD)result != 0) {
      goto LABEL_33;
    }
    if ((_BYTE)v65 != 0) {
      if (a2 == 0) {
        goto LABEL_120;
      }
      v23 = *(_DWORD*)a1;
      if (*(_DWORD*)a1 == 3) {
        if (*(_BYTE*)(a1 + 88) != 0 ||
            (*((_BYTE*)&CudaDriverRoutine_7418 +
               (_QWORD)CudaDriverData_1422118) &
             2) == 0 ||
            *(_BYTE*)(*(_QWORD*)(a2 + 64) + 17096LL) == 0) {
          goto LABEL_121;
        }
        v56 = CudaDriverRoutine_1d9f90(*(_QWORD*)(a2 + 80));
        result = 0;
        if (v56 != 0) {
          goto LABEL_120;
        }
        v23 = *(_DWORD*)a1;
      }
      else if (v23 == 2) {
        if (((*(_QWORD*)(a1 + 136) >> **(_DWORD**)(a2 + 64)) & 1) == 0) {
          goto LABEL_121;
        }
        goto LABEL_120;
      }
      if (v23 == 1) {
        v57 = 32;
      }
      else {
        if (v23 != 0) {
        LABEL_121:
          CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                  (__int64)"Unable to access operand in the "
                                           "specified context (id %d)",
                                  *(_DWORD*)(a2 + 56));
          return 1;
        }
        v57 = 24;
      }
      v59 = *(_QWORD*)(a1 + v57);
      if (v59 == 0) {
        goto LABEL_121;
      }
      v60 = result;
      v61 = CudaDriverRoutine_1dbb80(v59, *(_QWORD*)(a2 + 80));
      result = v60;
      if (v61 == 0) {
        goto LABEL_121;
      }
    LABEL_120:
      *(_QWORD*)(a1 + 96) = a2;
      goto LABEL_33;
    }
  }
  v24 = cuda_driver_1dbe40(a2, a4, (__int64)&v64);
  v25 = (_QWORD*)v24;
  if (v24 == 0 || (unsigned int)CudaDriverRoutine_1dd1f0(v24) != 15) {
    if (a3 == 4) {
      goto LABEL_45;
    }
    if (a3 != 2) {
      if (a3 != 1) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Invalid memory type 0x%x\n", a3);
        return 1;
      }
      if (a2 != 0 && v25 == nullptr) {
        v25 = (_QWORD*)CudaDriverRoutine_1dbac0(*(_QWORD*)(a2 + 80));
      }
    LABEL_45:
      if (v25 == nullptr) {
        *(_QWORD*)(a1 + 64) = a4;
        *(_QWORD*)(a1 + 72) = a11;
        *(_QWORD*)(a1 + 80) = a12;
        result = 0;
        *(_DWORD*)a1 = 3;
        goto LABEL_33;
      }
      goto LABEL_46;
    }
    if (a2 != 0) {
      if (v25 != nullptr) {
        v26 = CudaDriverStub_102e00(v25);
        if (v64 + v26 == a5) {
          goto LABEL_42;
        }
      }
      v25 = (_QWORD*)CudaDriverStub_1db9f0(*(_QWORD*)(a2 + 80), a5, 1,
                                           (__int64)&v64);
    }
    if (v25 == nullptr) {
    LABEL_43:
      if ((*((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)CudaDriverData_1422118) &
           1) == 0) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Allocation not found\n");
        return 1;
      }
      goto LABEL_45;
    }
  LABEL_42:
    v27 = CudaDriverStub_102e00(v25);
    if (v64 + v27 == a5) {
      goto LABEL_46;
    }
    goto LABEL_43;
  }
LABEL_46:
  if ((unsigned int)CudaDriverRoutine_1dd1f0((__int64)v25) != 15 &&
      CudaDriverStub_1db750(v25) == 0 && CudaDriverStub_1db760(v25) == 0) {
    *(_QWORD*)(a1 + 48) = a11;
    *(_QWORD*)(a1 + 56) = a12;
    result = 0;
    *(_DWORD*)a1 = 1;
    v58 = v64;
    *(_QWORD*)(a1 + 32) = v25;
    *(_QWORD*)(a1 + 40) = v58;
    goto LABEL_33;
  }
  if (a2 != 0) {
    v28 = (_QWORD*)CudaDriverRoutine_1dc340(v25, *(_QWORD**)(a2 + 80));
    if ((unsigned int)CudaDriverRoutine_1dd1f0((__int64)v25) != 15 ||
        v28 == nullptr) {
    LABEL_55:
      if (v28 == nullptr) {
        if (!CudaDriverRoutine_1dc820((__int64)v25)) {
          CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                  (__int64)"Unable to access operand in the "
                                           "specified context (id %d)\n",
                                  a4);
          return 1;
        }
        result = 0;
        *(_QWORD*)(a1 + 64) = a4;
        *(_QWORD*)(a1 + 72) = a11;
        *(_QWORD*)(a1 + 80) = a12;
        *(_DWORD*)a1 = 3;
        *(_BYTE*)(a1 + 88) = 1;
        goto LABEL_33;
      }
      goto LABEL_59;
    }
    if (!CudaDriverStub_1dbff0((__int64)v28) &&
        (CudaDriverRoutine_1db1b0((__int64)v28) & 0x3000000) != 0) {
      v28 = (_QWORD*)CudaDriverRoutine_1dc160((__int64)v25, (__int64)v28);
      goto LABEL_55;
    }
  }
  else {
    v28 = v25;
  }
LABEL_59:
  v29 = v64;
  v63 = (_QWORD*)CudaDriverRoutine_1dc000((__int64)v28);
  v30 = CudaDriverStub_1db800(v28);
  if (a11 != 0) {
    v31 = *a13;
    if (a11 < *a13) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Pitch must be greater than copy width in bytes\n");
      return 1;
    }
  }
  else {
    v31 = *a13;
    v21 = *a13 + *(_QWORD*)(a1 + 176);
  }
  if (a12 != 0) {
    v32 = a13[1];
    if (a12 < v32) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Operand height must be greater than copy extent height\n");
      return 1;
    }
  }
  else {
    v32 = a13[1];
    v20 = v32 + *(_QWORD*)(a1 + 184);
  }
  v33 = a13[2];
  *(_QWORD*)(a1 + 104) = a4;
  *(_QWORD*)(a1 + 112) = v21;
  *(_QWORD*)(a1 + 120) = v20;
  *(_QWORD*)(a1 + 128) = 0;
  *(_BYTE*)(a1 + 158) = 0;
  *(_DWORD*)(a1 + 152) = 0;
  *(_BYTE*)(a1 + 156) = 0;
  v34 = v30 + v29 + v31 + (v32 + (v33 - 1) * v20 - 1) * v21;
  *(_DWORD*)a1 = 2;
  *(_QWORD*)(a1 + 136) = -1;
  *(_QWORD*)(a1 + 144) = -1;
  v35 = (char*)CudaDriverData_1422118;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u) {
    *(_BYTE*)(a1 + 159) = CudaDriverRoutine_1dd060((__int64)v28);
  }
  v36 = 1;
  while (1) {
    v62 = v36;
    v65 = 0;
    *(_QWORD*)(a1 + 128) |= 1LL << *(_DWORD*)CudaDriverRoutine_1dc050(v28);
    if (CudaDriverStub_1dbf40((__int64)v28)) {
      v37 = CudaDriverStub_1dbf50(v28);
      if (*(_QWORD*)(CudaDriverStub_1dbfc0(v37) + 168) != 0) {
        v38 = CudaDriverStub_1dbf50(v28);
        cuda_driver_helpers_1db780(v38, &v65);
      }
    }
    *(_BYTE*)(a1 + 152) |= CudaDriverRoutine_1dc9c0((__int64)v28);
    *(_BYTE*)(a1 + 153) |= cuda_driver_predicates_1dc880((__int64)v28);
    *(_BYTE*)(a1 + 154) |= CudaDriverRoutine_1dc200((__int64)v28);
    *(_BYTE*)(a1 + 155) |= CudaDriverRoutine_1dc900((__int64)v28);
    *(_BYTE*)(a1 + 156) |= cuda_driver_predicates_1dc8c0((__int64)v28);
    if (v65 != 0 && *(_BYTE*)(v65 + 152) != 0) {
      *(_BYTE*)(a1 + 158) |= 1u;
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v35) < 2u) {
        goto LABEL_81;
      }
    }
    else {
      *(_BYTE*)(a1 + 158) |= CudaDriverStub_1dbff0((__int64)v28) != 0;
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v35) < 2u) {
        goto LABEL_81;
      }
    }
    v39 = *(unsigned __int8*)(a1 + 159);
    if (v39 != CudaDriverRoutine_1dd060((__int64)v28)) {
      return 1;
    }
  LABEL_81:
    v40 = v34;
    v41 = CudaDriverStub_1db750(v28);
    if (v41 != 0) {
      v42 = v41;
      v43 = CudaDriverStub_102060(v41);
      v44 = CudaDriverStub_102f00(v42);
      if (v43 != 0) {
        v45 = *(_QWORD*)(v43 + 136);
        v46 = v45;
        goto LABEL_88;
      }
      v48 = CudaDriverStub_f0f70(v44);
      goto LABEL_87;
    }
    if (CudaDriverStub_1db760(v28) != 0) {
      v47 = CudaDriverStub_1db760(v28);
      v48 = CudaDriverStub_b7fa0(*(_QWORD*)(v47 + 16));
    LABEL_87:
      v45 = v48;
      v46 = v48;
      goto LABEL_88;
    }
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v35) != 0) {
      v52 = 0;
      v46 = 0;
      v45 = 0;
      do {
        v53 = &v35[8 * v52];
        v54 = (_QWORD*)CudaDriverStub_9b050(*((_QWORD*)v53 + 35));
        v55 = CudaDriverRoutine_1dc340(v28, v54);
        if (v55 != 0) {
          v46 |= 1LL << **((_DWORD**)v53 + 35);
          if ((CudaDriverRoutine_1db1b0(v55) & 0xE0000000000LL) == 0) {
            v45 |= 1LL << **(_DWORD**)&v35[8 * v52 + 280];
          }
        }
        ++v52;
      } while (v52 <
               *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v35));
    }
    else {
      v45 = 0;
      v46 = 0;
    }
  LABEL_88:
    v49 = *(_QWORD*)(a1 + 144) & v45;
    *(_QWORD*)(a1 + 136) &= v46;
    *(_QWORD*)(a1 + 144) = v49;
    *(_BYTE*)(a1 + 157) |= CudaDriverRoutine_1dc6f0((__int64)v28);
    v50 = CudaDriverStub_1db800(v28);
    if (CudaDriverStub_1dbf90(v28) + v50 >= v40) {
      if ((v62 & 1) != 0 || (CudaDriverRoutine_1db1b0((__int64)v28) &
                             0x7C0000000000000LL) == 0x3C0000000000000LL) {
        *(_QWORD*)(a1 + 96) = a2;
        result = 0;
        goto LABEL_33;
      }
      goto LABEL_122;
    }
    v34 = v40;
    if ((unsigned int)CudaDriverRoutine_1dd1f0((__int64)v28) != 15) {
      break;
    }
    v51 = (_QWORD*)CudaDriverRoutine_1dbf60((__int64)v28, v40, 1);
    if (v51 != nullptr) {
      v28 = (_QWORD*)CudaDriverRoutine_1dc340(v51, v63);
      v36 = 0;
      if (v28 != nullptr) {
        continue;
      }
    }
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Copy range not fully allocated\n");
    return 1;
  }
  if ((v62 & 1) != 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Copy exceeds allocation size\n");
    return 1;
  }
LABEL_122:
  CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                          (__int64)"Copy crosses out of VMM range\n");
  return 1;
}

__int64 cuda_driver_f91e0(int* a1, __int64* a2, __int64 a3)
{
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 result;
  __int64 v8;
  bool v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;

  v4 = *(_QWORD*)(*(_QWORD*)(a3 + 16) + 64LL);
  a1[41] = -2;
  v5 = *a1;
  if (*a1 != 0) {
    if (v5 != 1) {
      if (v5 != 2) {
        return 0;
      }
      v6 = a2;
      if (*((_BYTE*)a1 + 152) == 0) {
        return 0;
      }
    LABEL_8:
      v10 = v4 + 0x4000;
      if ((*(_WORD*)(v10 + 464) & 0x20) == 0) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Managed memory not supported on "
                                         "specified device at this time\n");
        return 801;
      }
      if ((*(_BYTE*)(v10 + 684) & 2) == 0) {
        if (!CudaDriverRoutine_127160(*((_QWORD*)a1 + 4), a3)) {
          v11 = a1[40];
          if (v11 != 4 && v11 != 1) {
            return 1;
          }
          goto LABEL_23;
        }
      LABEL_20:
        a1[42] = 1;
        return 0;
      }
      v12 = a1[40];
      if (v12 == 1) {
        goto LABEL_23;
      }
      if (v12 != 4) {
        goto LABEL_20;
      }
      v13 = CudaDriverRoutine_f9020(a1, v6);
      a1[41] = v13;
      if (v13 != -1) {
        goto LABEL_20;
      }
      if (*(_BYTE*)(v10 + 712) == 0) {
      LABEL_23:
        a1[42] = 2;
        return 0;
      }
      return 0;
    }
    result = *((_QWORD*)a1 + 4);
    if (result != 0) {
    LABEL_7:
      v6 = a2;
      v8 = a3;
      v9 = CudaDriverRoutine_1dc9c0(result);
      a3 = v8;
      if (!v9) {
        return 0;
      }
      goto LABEL_8;
    }
  }
  else {
    result = *((_QWORD*)a1 + 3);
    if (result != 0) {
      goto LABEL_7;
    }
  }
  return result;
}

bool cuda_driver_faa80(__int64 a1, int* a2)
{
  int v2;
  int* v3;
  int* v5;
  char v6;
  int v7;
  __int64 v8;
  int* v9;
  bool v10;
  int v11;
  char v12;
  __int64 v13;
  __int64 v14;
  int* v15;

  v3 = a2 + 50;
  v2 = a2[50];
  if (a2[92] == 2) {
    if (v2 == 1) {
      CudaDriverStub_1dbab0(*((_QWORD*)a2 + 29));
      return true;
    }
    return true;
  }
  if (v2 == 3) {
    if (*((_BYTE*)a2 + 288) != 0) {
      return true;
    }
    if ((*((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
         2) == 0) {
      return true;
    }
    if (*(_BYTE*)(*(_QWORD*)(a1 + 64) + 17096LL) == 0) {
      return true;
    }
    v5 = a2;
    v6 = CudaDriverRoutine_1d9f90(*(_QWORD*)(a1 + 80));
    a2 = v5;
    if (v6 == 0 && *v3 == 3) {
      return true;
    }
  }
  v7 = *a2;
  if (*a2 != 0) {
    if (v7 != 1) {
      if (v7 != 2 || *((_BYTE*)a2 + 152) == 0) {
        return false;
      }
      goto LABEL_19;
    }
    v8 = *((_QWORD*)a2 + 4);
    if (v8 == 0) {
      return false;
    }
  }
  else {
    v8 = *((_QWORD*)a2 + 3);
    if (v8 == 0) {
      return false;
    }
  }
  v9 = a2;
  v10 = CudaDriverRoutine_1dc9c0(v8);
  a2 = v9;
  if (!v10) {
    return false;
  }
LABEL_19:
  v11 = *v3;
  if (*v3 == 0) {
    v13 = 6;
  LABEL_25:
    v14 = *(_QWORD*)&v3[v13];
    if (v14 != 0) {
      v15 = a2;
      v12 = CudaDriverRoutine_1dc9c0(v14);
      a2 = v15;
      return v12 != 0 && a2[91] == -1;
    }
    return false;
  }
  if (v11 == 1) {
    v13 = 8;
    goto LABEL_25;
  }
  if (v11 != 2) {
    return false;
  }
  v12 = *((_BYTE*)a2 + 352);
  return v12 != 0 && a2[91] == -1;
}

#pragma GCC visibility pop
