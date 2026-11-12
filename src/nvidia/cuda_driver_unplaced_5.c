#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_1a28d0();
_QWORD* CudaDriverRoutine_4d080(_QWORD* result);
_QWORD* CudaDriverRoutine_86ae0(__int64, unsigned __int64);
_QWORD* CudaDriverRoutine_d3ec0(__int64, int);
_QWORD* CudaDriverRoutine_e23b0(_QWORD*, __int64*);
_QWORD* cuda_driver_checks_1023a0(__int64, unsigned __int64, unsigned __int64);
__int64 CudaDriverRoutine_103e40(__int64, __int64, __int64*, __int64, char,
                                 __int64*);
__int64 CudaDriverRoutine_105220(__int64 result);
__int64 CudaDriverRoutine_1074e0(_QWORD*, unsigned __int64, _QWORD*, __int64*);
__int64 CudaDriverRoutine_107880(__int64);
__int64 CudaDriverRoutine_107f40(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_107f60(_QWORD*);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_1089c0(__int64 result, __int64);
__int64 CudaDriverRoutine_1092a0(__int64*, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_109e90(__int64, _QWORD*, __int64);
__int64 CudaDriverRoutine_114a80(__int64, __int64, int);
__int64 CudaDriverRoutine_116fa0(__int64);
__int64 CudaDriverRoutine_1174d0(__int64);
__int64 CudaDriverRoutine_120530(__int64);
__int64 CudaDriverRoutine_1251c0(unsigned int*);
__int64 CudaDriverRoutine_125720();
__int64 CudaDriverRoutine_12a1d0(unsigned __int64);
__int64 CudaDriverRoutine_12ce00(__int64*, unsigned __int64, unsigned __int64);
__int64 CudaDriverRoutine_12cef0(__int64*, _QWORD*);
__int64 CudaDriverRoutine_12cff0(_QWORD*, __int64);
__int64 CudaDriverRoutine_12de40(unsigned int*);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_1a2910(__int64);
__int64 CudaDriverRoutine_1a2b00(__int64 result,
                                 __int64 (*)(_QWORD, _QWORD, __int64), __int64);
__int64 CudaDriverRoutine_1a2d70(__int64 result, __int64, int, __int64,
                                 unsigned __int64);
__int64 CudaDriverRoutine_1a2dd0(__int64 result, __int64, int, int, __int64,
                                 unsigned __int64);
__int64 CudaDriverRoutine_1a32c0(__int64, unsigned __int8*);
__int64 CudaDriverRoutine_1a33a0(__int64, unsigned __int8*);
__int64 CudaDriverRoutine_1a3840(__int64, unsigned __int8*);
__int64 CudaDriverRoutine_1a39e0(__int64);
__int64 CudaDriverRoutine_1a4580(__int64);
__int64 CudaDriverRoutine_1ba480(_QWORD*, __int64);
__int64 CudaDriverRoutine_1ba4f0(__int64 result, __int64);
__int64 CudaDriverRoutine_1ba520(__int64 result);
__int64 CudaDriverRoutine_1ba580(__int64);
__int64 CudaDriverRoutine_1baa40(_QWORD*, __int64);
__int64 CudaDriverRoutine_1bb6a0(unsigned __int64, unsigned __int64);
__int64 CudaDriverRoutine_1dce60(__int64);
__int64 CudaDriverRoutine_203600(__int64, _QWORD*);
__int64 CudaDriverRoutine_203f30(__int64);
__int64 CudaDriverRoutine_205dd0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_205fa0(int, __int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_206060(__int64, __int64);
__int64 CudaDriverRoutine_4d0d0(__int64 result);
__int64 CudaDriverRoutine_4d0e0(_QWORD*, unsigned __int64*);
__int64 CudaDriverRoutine_4d720(unsigned __int64*, unsigned __int64);
__int64 CudaDriverRoutine_4e0c0(unsigned __int64*, unsigned __int64,
                                unsigned __int64, _QWORD*);
__int64 CudaDriverRoutine_5aa50(__int64, __int64*, unsigned int);
__int64 CudaDriverRoutine_5aeb0(__int64 result, __int64*, __int64, char);
__int64 CudaDriverRoutine_86a10(__int64, __int64, __int64);
__int64 CudaDriverRoutine_86e30(__int64);
__int64 CudaDriverRoutine_8ad40(__int64, int, int, __int64);
__int64 CudaDriverRoutine_8b220(__int64 result, int);
__int64 CudaDriverRoutine_8b5e0(__int64, int, __int64);
__int64 CudaDriverRoutine_935f0(__int64, __int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_997f0(__int64);
__int64 CudaDriverRoutine_9bed0(__int64 result, __int64);
__int64 CudaDriverRoutine_b7020(__int64 result, char);
__int64 CudaDriverRoutine_c02b0(__int64, __int64*, int, int, int, int, int,
                                int*);
__int64 CudaDriverRoutine_c2a40(__int64, unsigned int, __int64*, __int64, char);
__int64 CudaDriverRoutine_c3a60();
__int64 CudaDriverRoutine_c7c60(__int64);
__int64 CudaDriverRoutine_c7d50(__int64 result);
__int64 CudaDriverRoutine_cad90(__int64, __int64, __int16, const char*);
__int64 CudaDriverRoutine_caed0(__int64, __int64, __int16);
__int64 CudaDriverRoutine_cb720(int*, __int64);
__int64 CudaDriverRoutine_cb870(_DWORD*, __int16, __int64);
__int64 CudaDriverRoutine_cbab0(int, __int64);
__int64 CudaDriverRoutine_cc3e0(__int64, __int64, _QWORD*, __int64);
__int64 CudaDriverRoutine_cc780(_QWORD*);
__int64 CudaDriverRoutine_d0560(__int64, __int64, _QWORD*, __int64);
__int64 CudaDriverRoutine_d06f0(__int64, __int64);
__int64 CudaDriverRoutine_d09d0();
__int64 CudaDriverRoutine_d0f60(__int64);
__int64 CudaDriverRoutine_d15e0(__int64, __int64);
__int64 CudaDriverRoutine_d2400(__int64, __int64, __int64*, __int64, char);
__int64 CudaDriverRoutine_d27a0(__int64 result, __int64, __int64, __int64,
                                unsigned int);
__int64 CudaDriverRoutine_d2fe0(__int64, unsigned int*);
__int64 CudaDriverRoutine_d38d0(__int64 result);
__int64 CudaDriverRoutine_d3910(__int64);
__int64 CudaDriverRoutine_d3d60(__int64, __int64, int, __int64);
__int64 CudaDriverRoutine_d4000(__int64);
__int64 CudaDriverRoutine_d48a0(__int64, __int64);
__int64 CudaDriverRoutine_d4f00(__int64 result);
__int64 CudaDriverRoutine_d5d50(__int64, __int64);
__int64 CudaDriverRoutine_d6af0(__int64 result, __int64*, __int64);
__int64 CudaDriverRoutine_d6ca0(_QWORD*, __int64, unsigned int, __int64);
__int64
CudaDriverRoutine_d6ca0_alt1(_QWORD*, __int64, int,
                             __int64) __asm__("CudaDriverRoutine_d6ca0");
__int64 CudaDriverRoutine_d77c0(__int64 result, __int64);
__int64 CudaDriverRoutine_d8160(__int64);
__int64 CudaDriverRoutine_d8640(_QWORD*, __int128*);
__int64 CudaDriverRoutine_dc390(__int64, __int64);
__int64 CudaDriverRoutine_dc5c0(__int64 result);
__int64 CudaDriverRoutine_dda00(__int64 result, __int64*, unsigned int,
                                __int64*);
__int64 CudaDriverRoutine_ddbe0(__int64, __int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_e2180(__int64, int, __int64*);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_eec70(__int64, __int64);
__int64 CudaDriverRoutine_f3b20(__int64 result);
__int64 CudaDriverRoutine_f3b70(__int64);
__int64 CudaDriverRoutine_f41e0(__int64, __int64);
__int64 CudaDriverRoutine_f4360(__int64 result, __int64);
__int64 CudaDriverRoutine_f43c0(__int64, __int64, int, unsigned int);
__int64 CudaDriverRoutine_f4700(__int64, __int64, __int64);
__int64 CudaDriverRoutine_f5700(__int64 result, __int64, __int64);
__int64 CudaDriverRoutine_f5760(__int64, unsigned int, __int64, __int64, char);
__int64 CudaDriverRoutine_f5a80(__int64 result, unsigned __int64);
__int64 CudaDriverRoutine_f5ae0(__int64 result, unsigned __int64, __int64);
__int64 CudaDriverRoutine_f60f0(__int64, __int64, __int64, __int64, __int64,
                                __int64, unsigned int, __int64, unsigned int);
__int64 CudaDriverRoutine_fdbf0(unsigned __int64, __int64);
__int64 CudaDriverStub_102040(_QWORD);
__int64 CudaDriverStub_102050(_QWORD);
__int64 CudaDriverStub_102350(__int64);
__int64 CudaDriverStub_102360(_QWORD);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_107f90(char*);
__int64 CudaDriverStub_107f90_alt1(__int64) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_107f90_alt2(_QWORD) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_108070(char*);
__int64 CudaDriverStub_108070_alt1(__int64) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_108070_alt2(_QWORD) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_112f50(_QWORD, _QWORD);
__int64 CudaDriverStub_12d100(_QWORD);
__int64 CudaDriverStub_12dca0(_QWORD);
__int64 CudaDriverStub_12e260(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1a26c0(_QWORD);
__int64 CudaDriverStub_1a2960(__int64, __int64, __int64);
__int64 CudaDriverStub_1a2ae0(_QWORD, _QWORD);
__int64 CudaDriverStub_1db190(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_204610(_QWORD);
__int64 CudaDriverStub_4f840(_QWORD);
__int64 CudaDriverStub_5a690(__int64, int);
__int64 CudaDriverStub_5ab60(_QWORD, _QWORD);
__int64 CudaDriverStub_8b280(_QWORD);
__int64 CudaDriverStub_9b050(_QWORD);
__int64 CudaDriverStub_f0f50(_QWORD);
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_108520(__int64);
__int64 cuda_driver_108740(__int64 result, unsigned __int64*);
__int64 cuda_driver_118130(__int64, unsigned __int64*);
__int64 cuda_driver_1968d0(__int64, int, int, char);
__int64 cuda_driver_1bc0e0(_QWORD*, __int64, _BYTE*);
__int64 cuda_driver_204330(__int64);
__int64 cuda_driver_2043d0(__int64 result, int);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_4db20(unsigned __int64*, unsigned __int64, unsigned __int64,
                          _QWORD*);
__int64 cuda_driver_5a060(__int64);
__int64 cuda_driver_5aba0(__int64, __int64*, char);
__int64 cuda_driver_checks_102080(__int64, unsigned __int64);
__int64 cuda_driver_checks_bae90(__int64, __int64, __int64*);
__int64 cuda_driver_d54e0_alt1(__int64, __int64,
                               unsigned int) __asm__("cuda_driver_d54e0");
__int64 cuda_driver_d6360_alt1(__int64*, __int64, __int64, __int64, __int64,
                               __int64, __int64, __int64,
                               unsigned int) __asm__("cuda_driver_d6360");
__int64 cuda_driver_d8220_alt1(_QWORD*, __int64, __int64, __int64, __int64,
                               __int64) __asm__("cuda_driver_d8220");
__int64 cuda_driver_db0e0(int*, _QWORD*, __int64);
__int64 cuda_driver_e20c0(__int64, unsigned int);
__int64 cuda_driver_efea0(__int64);
__int64 cuda_driver_f3c60(__int64, __int64);
__int64 cuda_driver_fdb30(_QWORD*, __int64, unsigned __int64, __int64);
__int64 cuda_driver_ff320(_DWORD*, __int64, _DWORD*);
__int64 cuda_driver_helpers_1b7b30(__int64, __int64, __int64);
__int64 cuda_driver_helpers_b8100(_QWORD*);
__int64 cuda_driver_helpers_b81c0(__int64 result);
__int64 cuda_driver_misc_helpers_4c10();
__int64 cuda_driver_misc_helpers_ded50(__int64, __int64*, unsigned int);
__int64 cuda_driver_misc_helpers_deeb0(__int64, char);
__int64 cuda_driver_predicates_99750(__int64);
__int64 fprintf_plt(_QWORD, const char*, ...);
__int64 fputc_plt(_QWORD, _QWORD);
__int64 fputs_plt(_QWORD, _QWORD);
__int64 fwrite_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
bool CudaDriverRoutine_9aa30(__int64);
bool CudaDriverRoutine_c3f90(_QWORD*);
bool CudaDriverRoutine_d47e0(__int64);
bool CudaDriverRoutine_f41c0(_BOOL8 result);
double cuda_driver_65430(__int64);
extern _BYTE CudaDriverData_4c38[8];
extern _QWORD CudaDriverData_1133810[3];
extern _UNKNOWN* CudaDriverData_1411af0;
extern _UNKNOWN* CudaDriverData_1411b08;
extern _UNKNOWN* CudaDriverData_1411b20;
extern _UNKNOWN* CudaDriverData_1411b40;
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_1432140;
extern _UNKNOWN* CudaDriverData_14321c8;
extern _UNKNOWN* CudaDriverData_14321e0;
extern _UNKNOWN* CudaDriverData_14324a0;
extern _UNKNOWN** CudaDriverData_14231f8;
extern _UNKNOWN CudaDriverData_1411010;
extern _UNKNOWN CudaDriverData_1411028;
extern _UNKNOWN CudaDriverData_1411040;
extern _UNKNOWN CudaDriverData_1411058;
extern _UNKNOWN CudaDriverData_14110a0;
extern _UNKNOWN CudaDriverData_14110b8;
extern _UNKNOWN CudaDriverData_1434760;
extern __int128 CudaDriverData_1115430;
extern __int128 CudaDriverData_1115bf0;
extern __int128 CudaDriverData_1115f90;
extern __int64 (*CudaDriverData_1411088)();
extern __int64 (*CudaDriverData_14324a0_alt1)(__int64*) __asm__(
    "CudaDriverData_14324a0");
extern __int64 (*CudaDriverData_14324a0_alt2)(_QWORD*) __asm__(
    "CudaDriverData_14324a0");
extern __int64* CudaDriverData_1423200;
extern __int64 CudaDriverData_1411070;
extern char* CudaDriverData_1411018;
extern char* CudaDriverData_1411030[2];
extern char* CudaDriverData_1411048[2];
extern char* CudaDriverData_1411060[2];
extern char* CudaDriverData_1411078[2];
extern char* CudaDriverData_1411090[2];
extern char* CudaDriverData_14110a8[2];
extern char* CudaDriverData_14110c0[2];
extern char* CudaDriverData_1411b60[9];
extern char* CudaDriverData_1411b90[3];
extern char CudaDriverData_1434758;
extern char CudaDriverData_1438ae1;
extern int CudaDriverData_1133848[];
int* CudaDriverRoutine_c7db0(__int64, unsigned int*);
long double CudaDriverRoutine_1a3eb0(__int64);
long double CudaDriverRoutine_d7ae0(__int64);
unsigned __int64* CudaDriverRoutine_4d790(unsigned __int64* result,
                                          unsigned __int64);
unsigned __int64* CudaDriverRoutine_f5b30(__int64, int, unsigned __int64);
unsigned __int64 CudaDriverRoutine_12dea0(atomic_ullong*);
unsigned __int64 CudaDriverRoutine_5b8d0(__int64);
unsigned __int64 CudaDriverRoutine_8b200(__int64, int, int);
void CudaDriverRoutine_1021a0();
void CudaDriverRoutine_474c();
void CudaDriverRoutine_4780();
void CudaDriverRoutine_4798();
void CudaDriverRoutine_4c08();
void CudaDriverRoutine_4e50();
void CudaDriverRoutine_5090();
void CudaDriverRoutine_5094();
void CudaDriverRoutine_5098();
void CudaDriverRoutine_509c();
void CudaDriverRoutine_50a0();
void CudaDriverRoutine_50a4();
void CudaDriverRoutine_50a8();
void CudaDriverRoutine_50ac();
void CudaDriverRoutine_50b0();
void CudaDriverRoutine_50b4();
void CudaDriverRoutine_50b8();
void CudaDriverRoutine_50bc();
void CudaDriverRoutine_50c0();
void CudaDriverRoutine_50c4();
void CudaDriverRoutine_50c8();
void CudaDriverRoutine_50cc();
void CudaDriverRoutine_50d0();
void CudaDriverRoutine_50d4();
void CudaDriverRoutine_50d8();
void CudaDriverRoutine_50dc();
void CudaDriverRoutine_50e0();
void CudaDriverRoutine_50e4();
void CudaDriverRoutine_50e8();
void CudaDriverRoutine_50ec();
void CudaDriverRoutine_50f0();
void CudaDriverRoutine_50f4();
void CudaDriverRoutine_50f8();
void CudaDriverRoutine_50fc();
void CudaDriverRoutine_5100();
void CudaDriverRoutine_5104();
void CudaDriverRoutine_5108();
void CudaDriverRoutine_510c();
void CudaDriverRoutine_5110();
void CudaDriverRoutine_5114();
void CudaDriverRoutine_5118();
void CudaDriverRoutine_511c();
void CudaDriverRoutine_5120();
void CudaDriverRoutine_5124();
void CudaDriverRoutine_5128();
void CudaDriverRoutine_512c();
void CudaDriverRoutine_5130();
void CudaDriverRoutine_5134();
void CudaDriverRoutine_5138();
void CudaDriverRoutine_513c();
void CudaDriverRoutine_5140();
void CudaDriverRoutine_5144();
void CudaDriverRoutine_5148();
void CudaDriverRoutine_514c();
void CudaDriverRoutine_5150();
void CudaDriverRoutine_5154();
void CudaDriverRoutine_5158();
void CudaDriverRoutine_515c();
void CudaDriverRoutine_5160();
void CudaDriverRoutine_5164();
void CudaDriverRoutine_5168();
void CudaDriverRoutine_516c();
void CudaDriverRoutine_5170();
void CudaDriverRoutine_5174();
void CudaDriverRoutine_5178();
void CudaDriverRoutine_517c();
void CudaDriverRoutine_5180();
void CudaDriverRoutine_5184();
void CudaDriverRoutine_5188();
void CudaDriverRoutine_518c();
void CudaDriverRoutine_7370();
void CudaDriverRoutine_7378();
void CudaDriverRoutine_7390();
void CudaDriverRoutine_7398();
void CudaDriverRoutine_73a0();
void CudaDriverRoutine_c6620(__int64, __int64, __int64);
__int64 cuda_driver_ae7f0(_QWORD* a1, unsigned __int64 a2, __int64 a3);
__int64 cuda_driver_b2180(__int64 result, __int64 a2);
__int64 cuda_driver_b2290(__int64 result, __int64 a2);
__int64 cuda_driver_b4580(__int64 a1, __int64* a2, __int64* a3);
__int64 cuda_driver_b4990(_QWORD* a1, __int64* a2, char a3);
__int64 cuda_driver_b4bf0(__int64* a1, __int64 a2, __int64* a3);
__int64 cuda_driver_b4d40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4);
__int64 cuda_driver_b58e0(__int64 a1, __int64 a2);
__int64 cuda_driver_b5f20(__int64 a1, unsigned __int64 a2);
__int64 cuda_driver_b61f0(__int64 result);
__int64 cuda_driver_b62b0(__int64 a1, __int64* a2, __int64 a3, char a4);
__int64 cuda_driver_b64f0(__int64 result, __int64 a2);
__int64 cuda_driver_b6c00(unsigned int** a1, _QWORD* a2, unsigned int a3,
                          __int64 a4);
__int64 cuda_driver_b7280(__int64 a1);
__int64 cuda_driver_b7500(__int64 a1);
__int64 cuda_driver_ba0b0(__int64 a1, unsigned int a2, unsigned int a3,
                          unsigned int a4);
__int64 cuda_driver_ba410(__int64 a1, unsigned int a2, unsigned int a3,
                          unsigned int a4, unsigned int a5, unsigned int a6,
                          unsigned int a7);
__int64 cuda_driver_ba620(unsigned int a1, unsigned int a2, unsigned int a3,
                          unsigned int a4, unsigned int a5, int a6,
                          unsigned int a7, unsigned int a8, unsigned int a9);
__int64 cuda_driver_bb120(__int64 a1, __int64 a2, unsigned int a3, int a4);
__int64 cuda_driver_bb530(__int64 a1, int a2, unsigned int* a3);
__int64 cuda_driver_bbeb0(__int64 a1, _QWORD* a2, __int64 a3, char a4);
__int64 cuda_driver_bcdd0();
__int64 cuda_driver_bcfd0();
__int64 cuda_driver_bdf60(__int64 a1, unsigned int a2, __int64* a3, __int64 a4,
                          char a5);
__int64 cuda_driver_be620(__int64 a1, unsigned int a2, __int64* a3, __int64 a4,
                          char a5);
__int64 cuda_driver_bf0d0(__int64* a1, __int64 a2);
__int64 cuda_driver_c0780(__int64 a1, __int64* a2, long double a3);
__int64 cuda_driver_c2ce0(_DWORD* a1, __int64 a2, unsigned int a3, int a4);
__int64 cuda_driver_c30d0(_QWORD* a1, int a2, __int64 a3);
__int64 cuda_driver_c3200(__int64 a1, char a2);
__int64 cuda_driver_c36c0(__int64 a1);
__int64 cuda_driver_c3c20(__int64 a1);
__int64 cuda_driver_c4540(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4);
void cuda_driver_c61e0(__int64 a1, _QWORD* a2, __int64 a3);
__int64 cuda_driver_c64e0(__int64 result, __int64 a2);
__int64 cuda_driver_c7900(__int64 result, _BYTE* a2, __int64* a3);
__int64 cuda_driver_c8660(_DWORD* a1, __int64 a2, int a3);
__int64 cuda_driver_cb060(__int64 a1, __int64 a2, char a3, __int16 a4);
__int64 cuda_driver_cc140(__int64 a1, __int64 a2);
__int64 cuda_driver_cfc10(_QWORD* a1, __int64 a2, __int64 a3, char* a4,
                          char a5);
__int64 cuda_driver_d0a00(__int64 a1);
__int64 cuda_driver_d1b70(__int64 result, __int64 a2, __int64 a3);
__int64 cuda_driver_d1c40(__int64 result, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_d22e0(__int64 a1, __int64 a2, __int64* a3, __int64 a4);
__int64 cuda_driver_d29f0();
__int64 cuda_driver_d2c20(_QWORD* a1, __int64 a2);
__int64 cuda_driver_d2f00(__int64 result);
__int64 cuda_driver_d3530(_QWORD* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, unsigned __int64 a7,
                          __int64 a8);
__int64 cuda_driver_d3a00(__int64 a1, __int64 a2);
__int64 cuda_driver_d3ae0(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_d4980(__int64 a1, __int64 a2);
__int64 cuda_driver_d4a40(__int64* a1, __int64 a2);
__int64 cuda_driver_d4cc0(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_d4de0(__int64 result);
__int64 cuda_driver_d4fa0(__int64 result);
__int64 cuda_driver_d5170(__int64 a1, __int64 a2);
__int64 cuda_driver_d5280(__int64 a1, __int64 a2, unsigned int a3);
__int64 cuda_driver_d54e0(__int64 a1, __int64 a2, char a3);
_QWORD* cuda_driver_d5920(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 cuda_driver_d5a80();
__int64 cuda_driver_d5c60(__int64 a1);
__int64 cuda_driver_d5f10(__int64 a1, __int64 a2, _QWORD* a3, char a4);
__int64 cuda_driver_d6100(__int64* a1, __int64 a2, int a3, __int64* a4,
                          _QWORD* a5, __int64 a6, __int64 a7, int a8);
__int64 cuda_driver_d6360(int** a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, _QWORD* a7, __int64 a8,
                          int a9);
__int64 cuda_driver_d6880(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, _OWORD* a7, int a8);
__int64 cuda_driver_d6980(__int64 result, _OWORD* a2);
__int64 cuda_driver_d69f0(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, __int64* a7, __int64 a8,
                          int a9);
__int64 cuda_driver_d7810(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, char a7, __int64 a8,
                          __int64 a9, __int64 a10, int a11);
__int64 cuda_driver_d7b40(__int64* a1, __int64 a2, __int64 a3, int a4, int a5);
__int64 cuda_driver_d7cf0(__int64 result, __int64* a2, __int64 a3);
__int64 cuda_driver_d7d60(_QWORD* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, unsigned __int64* a7, char a8,
                          __int64 a9);
__int64 cuda_driver_d8220(_QWORD* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6);
__int64 cuda_driver_d82e0(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, __int64 a7, char a8, int a9);
__int64 cuda_driver_d8550(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, __int128* a7, __int64 a8);
__int64 cuda_driver_d8770(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, __int128* a7, __int64 a8);

__int64 cuda_driver_ae7f0(_QWORD* a1, unsigned __int64 a2, __int64 a3)
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

__int64 cuda_driver_b2180(__int64 result, __int64 a2)
{
  __int64 v3;
  int v4;
  unsigned int v5;

  if (*(_DWORD*)a2 == 0) {
    if ((unsigned int)(*(_DWORD*)(result + 16) - 5) < 0xFFFFFFFE) {
      *(_DWORD*)a2 = 0;
      return result;
    }
    v3 = result;
    result = CudaDriverStub_102e00(*(_QWORD*)(result + 72));
    if ((*(_BYTE*)(v3 + 8) & 2) != 0) {
      result = 0;
    LABEL_12:
      *(_DWORD*)a2 = result;
      return result;
    }
    v4 = *(_DWORD*)(v3 + 16);
    if (v4 == 3) {
      *(_DWORD*)a2 = 0;
    }
    else {
      if (v4 == 4) {
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                       (_QWORD)CudaDriverData_1422118) == 2) {
          v5 = 8;
        }
        else {
          v5 = 0;
        }
        result = CudaDriverRoutine_f60f0(
            *(_QWORD*)(a2 + 8), *(_QWORD*)(v3 + 72), 0,
            *(_QWORD*)(a2 + 24) + *(_QWORD*)(v3 + 32), *(_QWORD*)(v3 + 48),
            *(_QWORD*)(*(_QWORD*)(a2 + 8) + 96LL), 2u, 0, v5);
        goto LABEL_12;
      }
      *(_DWORD*)a2 = 999;
      return 999;
    }
  }
  return result;
}

__int64 cuda_driver_b2290(__int64 result, __int64 a2)
{
  __int64 v3;
  int v4;
  unsigned int v5;

  if (*(_DWORD*)a2 == 0) {
    if ((unsigned int)(*(_DWORD*)(result + 16) - 5) < 0xFFFFFFFE) {
      *(_DWORD*)a2 = 0;
      return result;
    }
    v3 = result;
    result = CudaDriverStub_102e00(*(_QWORD*)(result + 72));
    if ((*(_BYTE*)(v3 + 8) & 2) != 0) {
      result = 0;
    LABEL_12:
      *(_DWORD*)a2 = result;
      return result;
    }
    v4 = *(_DWORD*)(v3 + 16);
    if (v4 == 3) {
      *(_DWORD*)a2 = 0;
    }
    else {
      if (v4 == 4) {
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                       (_QWORD)CudaDriverData_1422118) == 2) {
          v5 = 8;
        }
        else {
          v5 = 0;
        }
        result = CudaDriverRoutine_f60f0(
            *(_QWORD*)(a2 + 8), *(_QWORD*)(v3 + 72), 0,
            *(_QWORD*)(a2 + 24) + *(_QWORD*)(v3 + 32), *(_QWORD*)(v3 + 48),
            *(_QWORD*)(*(_QWORD*)(a2 + 8) + 96LL), 2u, 0, v5);
        goto LABEL_12;
      }
      *(_DWORD*)a2 = 999;
      return 999;
    }
  }
  return result;
}

__int64 cuda_driver_b4580(__int64 a1, __int64* a2, __int64* a3)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64* v7;
  char* v8;
  __int64 v9;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL);
  result = *(_QWORD*)(v4 + 2456);
  if (result == 0) {
    return result;
  }
  v6 = *(_QWORD*)(a1 + 872);
  if (v6 <= 31) {
    if (v6 <= 7) {
      if (v6 == 0) {
        return 0;
      }
      if (v6 != 2) {
        return 200;
      }
      v7 = (__int64*)&CudaDriverData_1411010;
      v8 = CudaDriverData_1411018;
      if (CudaDriverData_1411018 == nullptr) {
        return 200;
      }
      goto LABEL_29;
    }
    if (v6 == 8) {
      v7 = (__int64*)&CudaDriverData_1411028;
      v8 = CudaDriverData_1411030[0];
      if (CudaDriverData_1411030[0] == nullptr) {
        return 200;
      }
    }
    else {
      if (v6 != 16) {
        return 200;
      }
      v7 = (__int64*)&CudaDriverData_1411040;
      v8 = CudaDriverData_1411048[0];
      if (CudaDriverData_1411048[0] == nullptr) {
        return 200;
      }
    }
  }
  else if (v6 <= 63) {
    if (v6 == 32) {
      v7 = (__int64*)&CudaDriverData_1411058;
      v8 = CudaDriverData_1411060[0];
      if (CudaDriverData_1411060[0] == nullptr) {
        return 200;
      }
    }
    else {
      if (v6 != 48) {
        return 200;
      }
      v7 = &CudaDriverData_1411070;
      v8 = CudaDriverData_1411078[0];
      if (CudaDriverData_1411078[0] == nullptr) {
        return 200;
      }
    }
  }
  else {
    switch (v6) {
    case 64LL:
      v7 = (__int64*)&CudaDriverData_1411088;
      v8 = CudaDriverData_1411090[0];
      if (CudaDriverData_1411090[0] == nullptr) {
        return 200;
      }
      break;
    case 128LL:
      v7 = (__int64*)&CudaDriverData_14110a0;
      v8 = CudaDriverData_14110a8[0];
      if (CudaDriverData_14110a8[0] == nullptr) {
        return 200;
      }
      break;
    case 192LL:
      v7 = (__int64*)&CudaDriverData_14110b8;
      v8 = CudaDriverData_14110c0[0];
      if (CudaDriverData_14110c0[0] == nullptr) {
        return 200;
      }
      break;
    default:
      return 200;
    }
  }
LABEL_29:
  v9 = v7[2];
  result = cuda_driver_checks_bae90(result, (__int64)v8, a2);
  if ((_DWORD)result == 0) {
    if (v9 == 0) {
      return 0;
    }
    result = cuda_driver_checks_bae90(*(_QWORD*)(v4 + 2456), v9, a3);
    if ((_DWORD)result == 0) {
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_b4990(_QWORD* a1, __int64* a2, char a3)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  char v9;
  unsigned int v10;
  char v11;
  __int64 v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[3];

  CudaDriverRoutine_98340((__int64)a1);
  v6 = CudaDriverStub_12e330(224);
  if (v6 == 0) {
    return 2;
  }
  v7 = v6;
  *(_QWORD*)(v6 + 216) = 0;
  *(_OWORD*)(v6 + 200) = (__typeof__(*(_OWORD*)(v6 + 200))){0};
  *(_OWORD*)(v6 + 184) = (__typeof__(*(_OWORD*)(v6 + 184))){0};
  *(_OWORD*)(v6 + 168) = (__typeof__(*(_OWORD*)(v6 + 168))){0};
  *(_OWORD*)(v6 + 152) = (__typeof__(*(_OWORD*)(v6 + 152))){0};
  *(_OWORD*)(v6 + 136) = (__typeof__(*(_OWORD*)(v6 + 136))){0};
  *(_OWORD*)(v6 + 120) = (__typeof__(*(_OWORD*)(v6 + 120))){0};
  *(_OWORD*)(v6 + 104) = (__typeof__(*(_OWORD*)(v6 + 104))){0};
  *(_OWORD*)(v6 + 88) = (__typeof__(*(_OWORD*)(v6 + 88))){0};
  *(_OWORD*)(v6 + 72) = (__typeof__(*(_OWORD*)(v6 + 72))){0};
  *(_OWORD*)(v6 + 40) = (__typeof__(*(_OWORD*)(v6 + 40))){0};
  *(_OWORD*)(v6 + 24) = (__typeof__(*(_OWORD*)(v6 + 24))){0};
  *(_OWORD*)(v6 + 8) = (__typeof__(*(_OWORD*)(v6 + 8))){0};
  *(_QWORD*)v6 = a1;
  *(_OWORD*)(v6 + 56) = (__typeof__(*(_OWORD*)(v6 + 56))){0};
  v8 = (_QWORD*)(v6 + 56);
  CudaDriverRoutine_107f40((_QWORD*)(v6 + 32), 21, 0);
  v9 = a3 & 1;
  if ((a3 & 4) != 0) {
    v11 = 1;
    *(_BYTE*)(v7 + 80) = v9;
    *(_DWORD*)(v7 + 48) = 1;
    v10 = (unsigned int)CudaDriverRoutine_e23b0(a1, (__int64*)(v7 + 64));
    if (v10 != 0) {
      goto LABEL_12;
    }
    v10 = CudaDriverRoutine_203600(*(_QWORD*)(*(_QWORD*)(v7 + 64) + 16LL), v8);
    if (v10 != 0) {
      goto LABEL_12;
    }
    v13 = *(_QWORD*)(v7 + 64);
    v14 = CudaDriverStub_204610(*(_QWORD*)(v7 + 56));
    *(_QWORD*)(v7 + 72) = cuda_driver_e20c0(v13, v14);
    cuda_driver_204330(*(_QWORD*)(v7 + 56));
  }
  else {
    *(_BYTE*)(v7 + 57) = v9;
    *(_DWORD*)(v7 + 48) = 0;
    *(_BYTE*)(v7 + 56) = (a3 & 2) == 0;
    v10 = CudaDriverRoutine_1ba480((_QWORD*)(v7 + 96), a1[9]);
    if (v10 != 0) {
      v11 = 1;
    LABEL_12:
      v15 = *(_DWORD*)(v7 + 48);
      v16 = v10;
      if (v15 == 1) {
        v19 = *(_QWORD*)(v7 + 56);
        if (v19 != 0) {
          CudaDriverRoutine_203f30(v19);
          *(_QWORD*)(v7 + 56) = 0;
        }
      }
      else if (v15 == 0) {
        if ((v11 & 1) == 0) {
          CudaDriverRoutine_107f60((_QWORD*)(v7 + 80));
        }
        v17 = *(_QWORD*)(v7 + 96);
        if (v17 != 0) {
          CudaDriverRoutine_1ba520(v17);
          *(_QWORD*)(v7 + 96) = 0;
        }
        v18 = *(_QWORD*)(v7 + 64);
        if (v18 != 0) {
          CudaDriverRoutine_203f30(v18);
          *(_QWORD*)(v7 + 64) = 0;
        }
      }
      CudaDriverRoutine_12e340(v7);
      return v16;
    }
    CudaDriverRoutine_107f40((_QWORD*)(v7 + 80), 22, 0);
    if (*(_BYTE*)(v7 + 56) != 0) {
      v10 = CudaDriverRoutine_203600(a1[234], (_QWORD*)(v7 + 64));
      if (v10 != 0) {
        v11 = 0;
        goto LABEL_12;
      }
      cuda_driver_2043d0(*(_QWORD*)(v7 + 64), 5);
    }
    CudaDriverRoutine_1a2dd0(v7 + 152, 16, 8, 0, 0, 0);
    *(_DWORD*)(v7 + 112) = -1;
  }
  *(_QWORD*)(v7 + 24) = CudaDriverRoutine_12dea0(
      (atomic_ullong*)((char*)((_UNKNOWN*)0x10B8LL) +
                       (_QWORD)CudaDriverData_1422118));
  *(_QWORD*)(v7 + 16) = a1[245];
  a1[245] = v7;
  v20 = *(_QWORD*)(v7 + 16);
  if (v20 != 0) {
    *(_QWORD*)(v20 + 8) = v7;
  }
  if (*(_DWORD*)((char*)((__int64*)0x38LL) + (_QWORD)CudaDriverData_1432140 +
                 4) != 0) {
    v21[2] = v7;
    v21[0] = 24;
    v21[1] = a1;
    cuda_driver_20b420(2u, 0xFu, (__int64)v21);
  }
  *a2 = v7;
  return 0;
}

__int64 cuda_driver_b4bf0(__int64* a1, __int64 a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 result;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  _QWORD v12[3];

  v6 = CudaDriverRoutine_98340(*a1);
  v7 = CudaDriverStub_12e330(224);
  result = 2;
  if (v7 != 0) {
    *(_QWORD*)(v7 + 216) = 0;
    *(_QWORD*)v7 = v6;
    *(_OWORD*)(v7 + 40) = (__typeof__(*(_OWORD*)(v7 + 40))){0};
    *(_OWORD*)(v7 + 56) = (__typeof__(*(_OWORD*)(v7 + 56))){0};
    *(_DWORD*)(v7 + 48) = 2;
    *(_OWORD*)(v7 + 200) = (__typeof__(*(_OWORD*)(v7 + 200))){0};
    *(_OWORD*)(v7 + 184) = (__typeof__(*(_OWORD*)(v7 + 184))){0};
    *(_OWORD*)(v7 + 168) = (__typeof__(*(_OWORD*)(v7 + 168))){0};
    *(_OWORD*)(v7 + 152) = (__typeof__(*(_OWORD*)(v7 + 152))){0};
    *(_OWORD*)(v7 + 136) = (__typeof__(*(_OWORD*)(v7 + 136))){0};
    *(_OWORD*)(v7 + 120) = (__typeof__(*(_OWORD*)(v7 + 120))){0};
    *(_OWORD*)(v7 + 104) = (__typeof__(*(_OWORD*)(v7 + 104))){0};
    *(_OWORD*)(v7 + 88) = (__typeof__(*(_OWORD*)(v7 + 88))){0};
    *(_OWORD*)(v7 + 72) = (__typeof__(*(_OWORD*)(v7 + 72))){0};
    *(_OWORD*)(v7 + 24) = (__typeof__(*(_OWORD*)(v7 + 24))){0};
    *(_OWORD*)(v7 + 8) = (__typeof__(*(_OWORD*)(v7 + 8))){0};
    *(_QWORD*)(v7 + 64) = a1;
    CudaDriverRoutine_107f40((_QWORD*)(v7 + 32), 21, 0);
    v9 = CudaDriverRoutine_e2180((__int64)a1, *(_DWORD*)(a2 + 16),
                                 (__int64*)(v7 + 56));
    if (v9 != 0) {
      v10 = v9;
      CudaDriverRoutine_107f60((_QWORD*)(v7 + 32));
      CudaDriverRoutine_12e340(v7);
      return v10;
    }
    else {
      *(_QWORD*)(v7 + 72) = cuda_driver_e20c0((__int64)a1, *(_DWORD*)(a2 + 16));
      *(_QWORD*)(v7 + 16) = *(_QWORD*)(v6 + 1960);
      *(_QWORD*)(v6 + 1960) = v7;
      v11 = *(_QWORD*)(v7 + 16);
      if (v11 != 0) {
        *(_QWORD*)(v11 + 8) = v7;
      }
      if (*(_DWORD*)((char*)((__int64*)0x38LL) +
                     (_QWORD)CudaDriverData_1432140 + 4) != 0) {
        v12[2] = v7;
        v12[0] = 24;
        v12[1] = v6;
        cuda_driver_20b420(2u, 0xFu, (__int64)v12);
      }
      *a3 = v7;
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_b4d40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v7;
  __int64 result;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (a1 == 0) {
    v10 = 400;
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Event handle is NULL\n", a4),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    return v10;
  }
  v7 = a4;
  result = cuda_driver_misc_helpers_deeb0(*(_QWORD*)a1, 0),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if ((_DWORD)result == 0) {
    v11 = *(_DWORD*)(a1 + 48);
    if (v11 <= 3) {
      if (a3 > 1) {
        v10 = 1;
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Invalid event recording flags\n", v9),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        return v10;
      }
      if ((a3 & 1) != 0) {
        if ((v7 & 1) == 0) {
          v10 = 401;
          CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                  (__int64)"CU_EVENT_RECORD_EXTERNAL flag is "
                                           "set but stream is not capturing\n",
                                  v9),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          return v10;
        }
      }
      else {
        if (a2 != *(_QWORD*)a1) {
          v10 = 400;
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"CU_EVENT_RECORD_EXTERNAL flag is not set and event did "
                       "not come from expected device context\n",
              v9),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          return v10;
        }
        if ((v7 & 1) != 0 && v11 != 0) {
          v10 = 900;
          CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                  (__int64)"Cannot record IPC or interop CUDA "
                                           "events in captured streams\n",
                                  v9),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          return v10;
        }
      }
      if ((v7 & 4 | ((v7 & 2) != 0)) == 0) {
        return 0;
      }
      if (v11 != 0 || *(_BYTE*)(a1 + 56) != 0 && *(_QWORD*)(a1 + 64) != 0) {
        v10 = 801;
        if ((v7 & 2) != 0) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"Programmatic Dependent Launch event recording must be "
                       "simple local events without timing.\n",
              v9),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        else {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"Launch Completion event recording must be simple local "
                       "events without timing.\n",
              v9),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        return v10;
      }
      if ((v7 & 4) == 0 || *(_BYTE*)(a1 + 57) == 0) {
        return 0;
      }
      v10 = 801;
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Launch completion events must be simple local events "
                   "without timing or blocking sync.\n",
          v9),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
    else {
      v10 = 801;
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Event record not supported on this event type\n", v9),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
    return v10;
  }
  return result;
}

__int64 cuda_driver_b58e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  void* v5;

  v2 = 72;
  if (*(_DWORD*)(a1 + 48) == 0) {
    v2 = 80;
  }
  v3 = a1 + v2;
  if (*(_DWORD*)(a1 + v2 + 32) == -1) {
    return 0;
  }
  v5 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  LODWORD(a2) = CudaDriverRoutine_8b5e0(
      (__int64)&CudaDriverRoutine_4798 + (_QWORD)v5, *(_DWORD*)(v3 + 32), a2);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v5);
  return (unsigned int)a2;
}

__int64 cuda_driver_b5f20(__int64 a1, unsigned __int64 a2)
{
  __int64 result;

  result = (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)a1 + 64LL) + 21152LL))(
      (void*)*(_QWORD*)a1);
  if ((_DWORD)result == 0) {
    return CudaDriverRoutine_12a1d0(a2);
  }
  return result;
}

__int64 cuda_driver_b61f0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  void* v4;

  v1 = 72;
  if (*(_DWORD*)(result + 48) == 0) {
    v1 = 80;
  }
  v2 = result + v1;
  v3 = *(unsigned int*)(result + v1 + 32);
  if ((_DWORD)v3 != -1) {
    v4 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                       (_QWORD)CudaDriverData_1422118);
    CudaDriverRoutine_8b220((__int64)&CudaDriverRoutine_4798 + (_QWORD)v4, v3);
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v4);
    CudaDriverStub_107f90((char*)cuda_driver_misc_helpers_4c10 + (_QWORD)v4);
    CudaDriverRoutine_4d790(
        *(unsigned __int64**)((char*)&CudaDriverRoutine_4c08 + (_QWORD)v4), v3);
    CudaDriverRoutine_4d720(
        *(unsigned __int64**)((char*)&CudaDriverRoutine_4c08 + (_QWORD)v4), v3);
    result = CudaDriverStub_108070((char*)cuda_driver_misc_helpers_4c10 +
                                   (_QWORD)v4);
    *(_DWORD*)(v2 + 32) = -1;
  }
  return result;
}

__int64 cuda_driver_b62b0(__int64 a1, __int64* a2, __int64 a3, char a4)
{
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v22 = 0;
  v21 = 0;
  v8 = CudaDriverStub_12e330(224);
  if (v8 == 0) {
    return 2;
  }
  v9 = v8;
  *(_QWORD*)(v8 + 216) = 0;
  *(_QWORD*)v8 = a1;
  *(_OWORD*)(v8 + 40) = (__typeof__(*(_OWORD*)(v8 + 40))){0};
  *(_DWORD*)(v8 + 48) = 3;
  *(_OWORD*)(v8 + 56) = (__typeof__(*(_OWORD*)(v8 + 56))){0};
  *(_OWORD*)(v8 + 200) = (__typeof__(*(_OWORD*)(v8 + 200))){0};
  *(_OWORD*)(v8 + 184) = (__typeof__(*(_OWORD*)(v8 + 184))){0};
  *(_OWORD*)(v8 + 168) = (__typeof__(*(_OWORD*)(v8 + 168))){0};
  *(_OWORD*)(v8 + 152) = (__typeof__(*(_OWORD*)(v8 + 152))){0};
  *(_OWORD*)(v8 + 136) = (__typeof__(*(_OWORD*)(v8 + 136))){0};
  *(_OWORD*)(v8 + 120) = (__typeof__(*(_OWORD*)(v8 + 120))){0};
  *(_OWORD*)(v8 + 104) = (__typeof__(*(_OWORD*)(v8 + 104))){0};
  *(_OWORD*)(v8 + 88) = (__typeof__(*(_OWORD*)(v8 + 88))){0};
  *(_OWORD*)(v8 + 72) = (__typeof__(*(_OWORD*)(v8 + 72))){0};
  *(_OWORD*)(v8 + 24) = (__typeof__(*(_OWORD*)(v8 + 24))){0};
  *(_OWORD*)(v8 + 8) = (__typeof__(*(_OWORD*)(v8 + 8))){0};
  *(_BYTE*)(v8 + 56) = a4 & 1;
  CudaDriverRoutine_107f40((_QWORD*)(v8 + 32), 21, 0);
  v10 = CudaDriverRoutine_1092a0(&v22, a1, a3, 3u);
  if (v10 != 0) {
    goto LABEL_7;
  }
  v20 = 0;
  v10 = CudaDriverRoutine_109e90(v22, &v20, a3);
  if (v10 != 0) {
    goto LABEL_7;
  }
  *(_QWORD*)(v9 + 64) = v20;
  v10 = CudaDriverRoutine_1ba480((_QWORD*)(v9 + 88), *(_QWORD*)(a1 + 72));
  if (v10 != 0) {
    goto LABEL_7;
  }
  CudaDriverRoutine_107f40((_QWORD*)(v9 + 72), 22, 0);
  v11 = *(_QWORD*)(v9 + 88);
  *(_DWORD*)(v9 + 104) = -1;
  v12 = CudaDriverRoutine_1baa40(&v21, v11);
  if (v12 != 0) {
    v13 = v12;
    CudaDriverRoutine_107f60((_QWORD*)(v9 + 72));
    v10 = v13;
  LABEL_7:
    v14 = v10;
    v15 = *(_QWORD*)(v9 + 88);
    if (v15 != 0) {
      CudaDriverRoutine_1ba520(v15);
      *(_QWORD*)(v9 + 88) = 0;
    }
    CudaDriverRoutine_12e340(v9);
    return v14;
  }
  *(_DWORD*)v21 = 5;
  v17 = v20;
  v18 = v21;
  *(_QWORD*)(v21 + 8) = v20;
  *(_QWORD*)(v18 + 24) = *(_QWORD*)(v17 + 40);
  *(_QWORD*)(v9 + 24) = CudaDriverRoutine_12dea0(
      (atomic_ullong*)((char*)((_UNKNOWN*)0x10B8LL) +
                       (_QWORD)CudaDriverData_1422118));
  *(_QWORD*)(v9 + 16) = *(_QWORD*)(a1 + 1960);
  *(_QWORD*)(a1 + 1960) = v9;
  v19 = *(_QWORD*)(v9 + 16);
  if (v19 != 0) {
    *(_QWORD*)(v19 + 8) = v9;
  }
  *a2 = v9;
  return 0;
}

__int64 cuda_driver_b64f0(__int64 result, __int64 a2)
{
  _QWORD v2[3];

  if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_14321e0) != 0) {
    v2[1] = a2;
    v2[2] = result;
    v2[0] = 24;
    return cuda_driver_20b420(0x16u, 1u, (__int64)v2);
  }
  return result;
}

__int64 cuda_driver_b6c00(unsigned int** a1, _QWORD* a2, unsigned int a3,
                          __int64 a4)
{
  unsigned int** v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned int** v11;
  int v12;
  __int64 v13;
  unsigned int* v14;
  unsigned int v15;
  void (*v16)(_QWORD, _QWORD, _QWORD*, _DWORD*);
  __int64 v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int** v28;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  unsigned int* v34;
  _DWORD* v35;
  _DWORD* v36;
  int v37;
  int v38;
  unsigned int v39;
  bool v40;
  unsigned int v41;
  __int64 v42;
  _QWORD* v44;
  unsigned int** v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;

  if (a3 == 0) {
    goto LABEL_47;
  }
  v6 = a1;
  v7 = 0;
  v8 = 0;
  v9 = a3;
  v10 = a3;
  v11 = a1;
  do {
    if (**v11 == 6) {
      v8 = 1;
      if (v7 == 0) {
        goto LABEL_3;
      }
    }
    else {
      v7 = 1;
    }
    if (v8 != 0) {
      goto LABEL_11;
    }
  LABEL_3:
    ++v11;
    --v10;
  } while (v10 != 0);
  if (v7 == 0) {
  LABEL_47:
    v40 = false;
    v41 = 0;
    goto LABEL_52;
  }
LABEL_11:
  CudaDriverRoutine_205fa0(0, a4, (__int64)&v48, nullptr);
  v12 = 0;
  v13 = v9;
  v44 = a2;
  v45 = v6;
  while (2) {
    v14 = *v6;
    v15 = **v6;
    if (v15 > 0xA) {
      goto LABEL_20;
    }
    if (((1 << v15) & 0x5BC) != 0) {
      v12 = 1;
      goto LABEL_13;
    }
    if (v15 == 1) {
      v22 = CudaDriverStub_1db800(*((_QWORD*)v14 + 2));
      v23 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, __int64, __int64,
                            _QWORD))(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 64LL) +
                                     19112LL))(v48, 0, 0, *((_QWORD*)*v6 + 1),
                                               v22, 1, 0);
      v24 = *(_QWORD*)(a4 + 16);
      v48 = v23;
      v48 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD))(
          *(_QWORD*)(v24 + 64) + 19064LL))(v23, v22, 0, 0);
      goto LABEL_13;
    }
    if (v15 == 9) {
      v16 = (void (*)(_QWORD, _QWORD, _QWORD*, _DWORD*))*a2;
      v17 = CudaDriverStub_1db800(*((_QWORD*)v14 + 2));
      v18 = CudaDriverRoutine_9aa30(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 64LL));
      v19 = *(_QWORD*)(*(_QWORD*)(a4 + 16) + 64LL);
      v20 = *((_QWORD*)*v6 + 1);
      if (v18) {
        v21 = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64,
                              void (*)(_QWORD, _QWORD, _QWORD*, _DWORD*),
                              __int64))(v19 + 19120))(v48, 0, 0, v20, v17, v16,
                                                      4);
      }
      else {
        v21 = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD,
                              _QWORD))(v19 + 19112))(v48, 0, 0, v20, v17,
                                                     (unsigned int)v16, 0);
      }
      v48 = v21;
    }
    else {
    LABEL_20:
      if (v15 == 100) {
        ((void (*)(_QWORD, _QWORD, __int64*, unsigned int*))*a2)(a2[1], 0, &v47,
                                                                 &v46);
        v48 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD,
                              _QWORD))(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 64LL) +
                                       19112LL))(v48, 0, 0, *((_QWORD*)*v6 + 1),
                                                 v47, v46, 0);
      }
    }
  LABEL_13:
    ++v6;
    a2 += 18;
    if (--v13 != 0) {
      continue;
    }
    break;
  }
  CudaDriverRoutine_206060(a4, v48);
  if (v12 == 0) {
    goto LABEL_47;
  }
  v25 = CudaDriverRoutine_1174d0(a4);
  cuda_driver_5a060(v25);
  v26 = v25;
  if (*(_BYTE*)(v25 + 37) == 0) {
    v26 = *(_QWORD*)(*(_QWORD*)v25 + 48LL);
  }
  v27 = a4;
  CudaDriverStub_107f90_alt1(v26 + 8);
  v28 = v45;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &&
      *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)CudaDriverData_1422118) == 0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(**(_QWORD**)(v25 + 33816) + 8LL) + 64LL) +
                17329LL) != 0) {
    v30 = *(_DWORD*)(v25 + 34248);
    __builtin_arm_dmb(0xDu);
    if (v30 != 0) {
      do {
        CudaDriverStub_12dca0(100);
        v31 = *(_DWORD*)(v25 + 34248);
        __builtin_arm_dmb(0xDu);
      } while (v31 != 0);
    }
  }
  v32 = 0;
  v33 = 0;
  v34 = (unsigned int*)(v44 + 3);
  while (1) {
    v36 = *v28++;
    v35 = v36;
    v37 = *v36;
    if (*v36 <= 0xAu) {
      v38 = 1 << v37;
      if ((v38 & 0x43C) != 0) {
        break;
      }
      if ((v38 & 0x180) != 0) {
        v32 = (*(__int64 (**)(__int64, _DWORD*, _QWORD, _QWORD))(v25 + 34080))(
            v25, v35, *((_QWORD*)v34 - 1), *v34);
        if (v32 != 0) {
          if (v32 != 909) {
            goto LABEL_49;
          }
          v33 = 1;
        }
      }
    }
  LABEL_38:
    v34 += 36;
    if (--v9 == 0) {
      goto LABEL_49;
    }
  }
  v39 = (*(__int64 (**)(__int64, _DWORD*, _QWORD, _QWORD))(v25 + 34080))(
      v25, v35, *((_QWORD*)v34 - 3), 0);
  if (v39 == 0) {
    v32 = 0;
    goto LABEL_38;
  }
  v32 = v39;
LABEL_49:
  v41 = v32;
  v42 = v25;
  v40 = v33 != 0;
  if (*(_BYTE*)(v25 + 37) == 0) {
    v42 = *(_QWORD*)(*(_QWORD*)v25 + 48LL);
  }
  CudaDriverStub_108070_alt1(v42 + 8);
  CudaDriverRoutine_205dd0(v25, v27, (__int64)&v48);
  CudaDriverRoutine_206060(v27, v48);
LABEL_52:
  if (v40 && v41 == 0) {
    return 909;
  }
  else {
    return v41;
  }
}

__int64 cuda_driver_b7280(__int64 a1)
{
  void* v2;
  int v3;
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned int v9;

  v2 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  v3 = CudaDriverStub_8b280(a1 + 216);
  CudaDriverStub_107f90_alt1(a1 + 32);
  if (v3 != 0) {
    v4 = 0;
    while (1) {
      v5 = CudaDriverRoutine_8b200(
          (__int64)&CudaDriverRoutine_4780 + (_QWORD)v2, v4, v4);
      v6 = CudaDriverRoutine_8b200(a1 + 216, 0, v4);
      if (v6 != 0 && v6 >= v5) {
        break;
      }
      if (v3 == ++v4) {
        goto LABEL_11;
      }
    }
    v9 = 0;
    CudaDriverStub_108070_alt1(a1 + 32);
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
  }
  else {
  LABEL_11:
    v9 = 1;
    CudaDriverStub_108070_alt1(a1 + 32);
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
    CudaDriverRoutine_b7020(a1, 1);
  }
  return v9;
}

__int64 cuda_driver_b7500(__int64 a1)
{
  unsigned int* v2;
  __int64 result;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  void* v15;
  int v16;
  int v17;
  __int64 v18;

  *(_QWORD*)(a1 + 112) = CudaDriverStub_9b050(*(_QWORD*)(a1 + 104));
  CudaDriverRoutine_107f40((_QWORD*)(a1 + 32), 48, 0);
  v2 = *(unsigned int**)(a1 + 104);
  *(_QWORD*)(a1 + 192) = a1 + 32;
  result = CudaDriverRoutine_1251c0(v2);
  if ((_DWORD)result != 0) {
    return result;
  }
  v4 = *(unsigned int*)(a1 + 144);
  v5 = *(unsigned __int8*)(a1 + 168);
  v6 = (unsigned int)v4 * (unsigned __int64)*(unsigned int*)(a1 + 148);
  *(_QWORD*)(a1 + 136) = v6;
  if (v5 != 0) {
    v7 = *(unsigned int*)(a1 + 172);
    *(_QWORD*)(a1 + 136) = (v6 + 0x1FFFFFFF) & 0xFFFFFFFFE0000000LL;
    v8 = CudaDriverRoutine_12e510(v7, 8);
    *(_QWORD*)(a1 + 184) = v8;
    if (v8 == 0) {
    LABEL_10:
      v13 = 2;
    LABEL_16:
      cuda_driver_helpers_b8100((_QWORD*)a1);
      return v13;
    }
    v4 = *(unsigned int*)(a1 + 144);
  }
  v9 = CudaDriverRoutine_12e510(v4, 8);
  *(_QWORD*)(a1 + 16) = v9;
  if (v9 == 0) {
    goto LABEL_10;
  }
  v10 = CudaDriverRoutine_12e510(*(unsigned int*)(a1 + 144), 8);
  *(_QWORD*)(a1 + 24) = v10;
  if (v10 == 0) {
    goto LABEL_10;
  }
  v11 = *(_QWORD*)(a1 + 136);
  if (*(_BYTE*)(a1 + 168) != 0) {
    v12 = cuda_driver_fdb30((_QWORD*)(a1 + 128), v11, 0x20000000u, 0);
    if (v12 != 0) {
      goto LABEL_15;
    }
  }
  else {
    v12 =
        cuda_driver_fdb30((_QWORD*)(a1 + 128), v11,
                          *(unsigned int*)(*(_QWORD*)(a1 + 104) + 14752LL), 0);
    if (v12 != 0) {
      goto LABEL_15;
    }
  }
  v14 = CudaDriverRoutine_125720();
  if (v14 != 0) {
    v13 = v14;
    CudaDriverRoutine_fdbf0(*(_QWORD*)(a1 + 128), *(_QWORD*)(a1 + 136));
    *(_QWORD*)(a1 + 128) = 0;
    goto LABEL_16;
  }
  v15 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  v16 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_4780 + (_QWORD)v15);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v15);
  v12 = CudaDriverRoutine_8ad40(a1 + 216, 1, v16, 0);
  if (v12 != 0) {
  LABEL_15:
    v13 = v12;
    goto LABEL_16;
  }
  v17 = *(_DWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 208) = a1;
  if (v17 == 8 && *(_BYTE*)(a1 + 100) == 0 || *(_DWORD*)(a1 + 120) == 3) {
    v18 = 0;
  }
  else {
    v18 = 1LL << **(_DWORD**)(a1 + 104);
  }
  *(_QWORD*)(a1 + 152) = v18;
  cuda_driver_helpers_b81c0(a1);
  return 0;
}

__int64 cuda_driver_ba0b0(__int64 a1, unsigned int a2, unsigned int a3,
                          unsigned int a4)
{
  unsigned int v4;
  unsigned int* v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned __int64 v11;
  unsigned int v12;
  unsigned int v13;

  if (*(_QWORD*)(a1 + 840) != 0) {
    v4 = a3 | a2 | a4;
    if (v4 == 0) {
      return v4;
    }
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Both indirect and direct block dimensions are provided\n");
    return 1;
  }
  if ((*(_QWORD*)(a1 + 428) != 0 || *(_DWORD*)(a1 + 436) != 0) &&
      (a2 != *(_DWORD*)(a1 + 428) || a3 != *(_DWORD*)(a1 + 432) ||
       a4 != *(_DWORD*)(a1 + 436))) {
    return 1;
  }
  if (a2 == 0 || a3 == 0 || a4 == 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Block dimensions (%u,%u,%u) include one or more zero values. "
                 "All dimensions must be nonzero\n",
        a2, a3, a4);
    return 1;
  }
  v5 = *(unsigned int**)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 64LL);
  v6 = v5[954];
  v7 = v5[955];
  v8 = v5[956];
  if (a2 > v6 || a3 > v7 || a4 > v8) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"One or more of block dimensions of (%u,%u,%u) exceeds "
                 "correspsonding maximum value of (%u,%u,%u)\n",
        a2, a3, a4, v6, v7, v8);
    return 1;
  }
  v11 = a3 * (unsigned __int64)a2 * a4;
  if (v11 > v5[953]) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Requested block size of %llu threads "
                                     "exceeds device maximum %llu\n");
    return 1;
  }
  v12 = *(_DWORD*)(a1 + 344);
  v13 = *(_DWORD*)(a1 + 348);
  v4 = v12 | v13;
  if (*(_QWORD*)(a1 + 344) == 0) {
    v13 = 0;
    if (*(_DWORD*)(a1 + 352) == 0) {
      return v4;
    }
  }
  if (v11 > v12 * (unsigned __int64)v13 * *(unsigned int*)(a1 + 352)) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Requested block size of %llu threads exceeds maximum set at "
                 "compilation of %llu\n");
    return 1;
  }
  return 0;
}

__int64 cuda_driver_ba410(__int64 a1, unsigned int a2, unsigned int a3,
                          unsigned int a4, unsigned int a5, unsigned int a6,
                          unsigned int a7)
{
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 result;
  unsigned int v17;

  v10 = a3 * a2 * a4;
  v11 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 64LL) +
                   4236LL);
  if ((CudaDriverData_1438ae1 & 1) != 0 || (CudaDriverData_1438ae1 & 2) != 0) {
    v12 = 0;
  }
  else {
    v12 = *(unsigned __int8*)(a1 + 464);
  }
  if (v11 == 0) {
    if (v10 != 0) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Clusters are not supported on this device\n");
      return 912;
    }
    return 0;
  }
  if (v10 == 0) {
    if ((a3 | a2 | a4) != 0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Ill-formed cluster dimensons "
                                       "(%u,%u,%u). All or none should be 0\n",
                              a2, a3, a4);
      return 912;
    }
    if (*(_BYTE*)(a1 + 441) != 0) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Kernel has specified that cluster size must be set, but no "
                   "cluster size has been provided.\n");
      return 912;
    }
    return 0;
  }
  v13 = *(_DWORD*)(a1 + 444);
  v14 = *(_DWORD*)(a1 + 448);
  if (v13 != a2 && v13 != 0 || v14 != a3 && v14 != 0 ||
      (v15 = *(_DWORD*)(a1 + 452)) != a4 && v15 != 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Requested cluster dimensions of (%u,%u,%u) blocks does not "
                 "match the required value of (%u,%u,%u) for function %s\n",
        a2, a3, a4, v13, v14, *(_DWORD*)(a1 + 452), *(const char**)(a1 + 8));
    return 912;
  }
  v17 = *(_DWORD*)(a1 + 456);
  if (v17 != 0 && v10 > v17) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Requested cluster size of %u blocks is "
                                     "greater than function's maximum of %u\n");
    return 912;
  }
  if (a5 % a2 != 0 || a6 % a3 != 0 || a7 % a4 != 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Cluster dimensions of (%u,%u,%u) blocks does not evenly "
                 "divide Grid dimensions of (%u,%u,%u)\n",
        a2, a3, a4, a5, a6, a7);
    return 912;
  }
  result = 0;
  if (v12 == 0 && v10 > v11) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Requested cluster size of %u blocks exceeds portable size %u "
                 "and non-portable sizes are not enabled on the function\n");
    return 912;
  }
  return result;
}

__int64 cuda_driver_ba620(unsigned int a1, unsigned int a2, unsigned int a3,
                          unsigned int a4, unsigned int a5, int a6,
                          unsigned int a7, unsigned int a8, unsigned int a9)
{
  unsigned int v9;
  unsigned int v10;

  v9 = a2 * a1 * a3;
  if (v9 != 0) {
    v10 = a5 * a4 * a6;
    if (v10 == 0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Preferred cluster size was specified "
                                       "without a regular cluster size.\n");
      return 912;
    }
    if (v10 > v9) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Cluster size is greater than preferred cluster size. "
                   "Regular cluster: %u, preferred cluster: %u\n",
          v10, v9);
      return 912;
    }
    if (a6 != a3) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Cluster dimension Z must match preferred cluster dimension "
                   "Z. Cluster Z: %u, Preferred cluster Z: %u\n",
          a6, a3);
      return 912;
    }
    if (a1 % a4 != 0 || a2 % a5 != 0) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Cluster size does not divide preferred cluster size. "
                   "Cluster size: (%u,%u,%u), preferred cluster size: %u x %u "
                   "x %u\n");
      return 912;
    }
    if (a7 % a1 != 0 || a8 % a2 != 0 || a9 % a3 != 0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Preferred cluster size does not divide "
                                       "grid size. Preferred cluster size: "
                                       "(%u,%u,%u), grid size: %u x %u x %u\n");
      return 912;
    }
  }
  else if ((a2 | a1 | a3) != 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Ill-formed preferred cluster dimensons "
                                     "(%u,%u,%u). All or none should be 0\n",
                            a1, a2, a3);
    return 912;
  }
  return 0;
}

__int64 cuda_driver_bb120(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  signed int v11;
  signed int v12;
  signed int v13;
  unsigned int v14;
  int v16;
  __int64 v17;
  bool v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  _QWORD v25[3];

  v4 = a1 + 1032;
  if (a4 == 0 && *(_BYTE*)(v4 + (unsigned int)a2) != 0) {
    return 0;
  }
  if ((int)a2 > 11) {
    if ((int)a2 <= 13) {
      if ((_DWORD)a2 != 12) {
        if (*(_BYTE*)(a1 + 440) != 0) {
          if (*(_DWORD*)(a1 + 452) != a3) {
            CudaDriverRoutine_ed630(
                (__int64)"CUDA", 0,
                (__int64)"%s specified but cluster size is read-only\n",
                "CU_FUNC_ATTRIBUTE_REQUIRED_CLUSTER_DEPTH");
            return 1;
          }
          goto LABEL_26;
        }
        if ((a3 & 0x80000000) == 0) {
          v12 = *(_DWORD*)(a1 + 456);
          if (v12 == 0 || (int)a3 <= v12) {
            v5 = 0;
            *(_DWORD*)(a1 + 452) = a3;
            goto LABEL_64;
          }
          goto LABEL_47;
        }
      LABEL_48:
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Cluster dimension cannot be negative %d.\n", a3);
        return 1;
      }
      if (*(_BYTE*)(a1 + 440) != 0) {
        if (*(_DWORD*)(a1 + 448) != a3) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"%s specified but cluster size is read-only\n",
              "CU_FUNC_ATTRIBUTE_REQUIRED_CLUSTER_HEIGHT");
          return 1;
        }
      LABEL_26:
        v5 = 0;
        goto LABEL_64;
      }
      if ((a3 & 0x80000000) != 0) {
        goto LABEL_48;
      }
      v11 = *(_DWORD*)(a1 + 456);
      if (v11 == 0 || (int)a3 <= v11) {
        v5 = 0;
        *(_DWORD*)(a1 + 448) = a3;
        goto LABEL_64;
      }
      goto LABEL_47;
    }
    if ((_DWORD)a2 == 14) {
      v5 = 0;
      *(_BYTE*)(a1 + 464) = a3 != 0;
      goto LABEL_64;
    }
    if ((_DWORD)a2 == 15) {
      if (a3 < 3) {
        v5 = 0;
        *(_DWORD*)(a1 + 460) = a3;
        goto LABEL_64;
      }
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Invalid cluster scheduling policy (%d)\n", a3);
      return 1;
    }
    goto LABEL_23;
  }
  switch ((_DWORD)a2) {
  case 8:
    if ((a3 & 0x80000000) != 0) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Requested dynamic shared mem size cannot be negative %d\n",
          a3);
      return 1;
    }
    v6 = *(_DWORD*)(a1 + 128) + a3;
    v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 64LL);
    v8 = *(_DWORD*)(v7 + 3884);
    if (v6 > v8) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Requested dynamic shared memory size "
                                       "is larger than limit\n");
      return 1;
    }
    v14 = *(_DWORD*)(v7 + 3880);
    v16 = a4;
    v17 = a1;
    v18 = (unsigned __int8)cuda_driver_predicates_99750(
              *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL)) != 0 &&
          v6 > v14;
    if (v18) {
      return 1;
    }
    a2 = 8;
    a1 = v17;
    v18 = v6 > v14;
    v5 = 0;
    *(_DWORD*)(v17 + 144) = a3;
    if (v18) {
      *(_DWORD*)(v17 + 148) = v8;
      *(_BYTE*)(v17 + 152) = 1;
    }
    else {
      *(_DWORD*)(v17 + 148) = v14;
      *(_BYTE*)(v17 + 152) = 0;
    }
    a4 = v16;
    break;
  case 9:
    if (a3 - 101 > 0xFFFFFF99) {
      v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 64LL);
      *(_DWORD*)(a1 + 124) = a3;
      *(_BYTE*)(a1 + 120) = 1;
      v10 = *(_DWORD*)(v9 + 4152);
      if (a3 == 100) {
        v5 = 0;
        *(_DWORD*)(a1 + 156) = v10;
      }
      else if (a3 != 0) {
        v5 = 0;
        if (a3 == -1) {
          *(_DWORD*)(a1 + 124) = 0;
          *(_BYTE*)(a1 + 120) = 0;
        }
        else {
          *(_DWORD*)(a1 + 156) = v10 * a3 / 0x64;
        }
      }
      else {
        *(_DWORD*)(a1 + 156) = 0;
        v19 = a1;
        v20 = a4;
        v21 = (*(__int64 (**)(__int64, __int64))(v9 + 19488))(v9, a1 + 156);
        a4 = v20;
        a2 = 9;
        v5 = v21;
        a1 = v19;
      }
      break;
    }
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Requested preferred shared mem carveout invalid %d\n", a3);
    return 1;
  case 0xB:
    if (*(_BYTE*)(a1 + 440) != 0) {
      if (*(_DWORD*)(a1 + 444) != a3) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"%s specified but cluster size is read-only\n",
            "CU_FUNC_ATTRIBUTE_REQUIRED_CLUSTER_WIDTH");
        return 1;
      }
      goto LABEL_26;
    }
    if ((a3 & 0x80000000) != 0) {
      goto LABEL_48;
    }
    v13 = *(_DWORD*)(a1 + 456);
    if (v13 != 0 && (int)a3 > v13) {
    LABEL_47:
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"cluster size %d greater than maximum cluster size\n", a3);
      return 1;
    }
    v5 = 0;
    *(_DWORD*)(a1 + 444) = a3;
    break;
  default:
  LABEL_23:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Invalid CUfunction_attribute value %d\n",
                            (unsigned int)a2);
    return 1;
  }
LABEL_64:
  if (a4 != 1 || v5 != 0) {
    if (v5 != 0) {
      return v5;
    }
  }
  else {
    *(_BYTE*)(v4 + (unsigned int)a2) = 1;
  }
  v22 = a2;
  v23 = a1;
  v5 = CudaDriverRoutine_935f0(a1, a2);
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x118LL) +
                 *(__int64*)((char*)((__int64*)0x10LL) +
                             (_QWORD)CudaDriverData_14225e0)) != 0) {
    v25[1] = v23;
    LODWORD(v25[0]) = 24;
    HIDWORD(v25[0]) = v22;
    cuda_driver_20b420(2u, 0x46u, (__int64)v25);
  }
  return v5;
}

__int64 cuda_driver_bb530(__int64 a1, int a2, unsigned int* a3)
{
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;

  switch (a2) {
  case 0:
    v5 = (*(__int64 (**)(void*))(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 64LL) + 19368LL))(
        *(void**)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 64LL));
    *a3 = v5;
    v6 = *(_DWORD*)(a1 + 344);
    if (v6 != 0 && (v7 = *(_DWORD*)(a1 + 348)) != 0 &&
        (_DWORD)(v8 = *(unsigned int*)(a1 + 352)) != 0 &&
        (v9 = v7 * (unsigned __int64)v6 * v8) < v5) {
      *a3 = v9;
      result = 0;
    }
    else {
      result = 0;
    }
    break;
  case 1:
    *a3 = *(_DWORD*)(a1 + 128);
    result = 0;
    break;
  case 2:
    v11 = *(_QWORD*)(a1 +
                     8LL * *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) +
                                                         24LL) +
                                              64LL) +
                                   11700LL) +
                     168);
    if (v11 != 0) {
      *a3 = CudaDriverStub_1dbf90(v11);
    }
    else {
      *a3 = 0;
    }
    result = 0;
    break;
  case 3:
    *a3 = *(_DWORD*)(a1 + 72) + *(_DWORD*)(a1 + 376);
    result = 0;
    break;
  case 4:
    *a3 = *(_DWORD*)(a1 + 68);
    result = 0;
    break;
  case 5:
    *a3 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 280LL);
    result = 0;
    break;
  case 6:
    *a3 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 284LL);
    result = 0;
    break;
  case 7:
    *a3 = (*(_WORD*)(a1 + 977) & 0x40) != 0;
    result = 0;
    break;
  case 8:
    *a3 = *(_DWORD*)(a1 + 144);
    result = 0;
    break;
  case 9:
    if (*(_BYTE*)(a1 + 120) != 0) {
      *a3 = *(_DWORD*)(a1 + 124);
    }
    else {
      *a3 = -1;
    }
    result = 0;
    break;
  case 10:
    *a3 = *(unsigned __int8*)(a1 + 441);
    result = 0;
    break;
  case 11:
    *a3 = *(_DWORD*)(a1 + 444);
    result = 0;
    break;
  case 12:
    *a3 = *(_DWORD*)(a1 + 448);
    result = 0;
    break;
  case 13:
    *a3 = *(_DWORD*)(a1 + 452);
    result = 0;
    break;
  case 14:
    *a3 = *(unsigned __int8*)(a1 + 464);
    result = 0;
    break;
  case 15:
    *a3 = *(_DWORD*)(a1 + 460);
    result = 0;
    break;
  default:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Invalid CUfunction_attribute value %d\n",
                            a2);
    result = 1;
    break;
  }
  return result;
}

__int64 cuda_driver_bbeb0(__int64 a1, _QWORD* a2, __int64 a3, char a4)
{
  __int64 result;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;

  result = cuda_driver_misc_helpers_ded50(a1, nullptr, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (a3 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)"CUfunction is NULL");
    return 400;
  }
  if (*(_DWORD*)a3 != 1) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Cannot pass CUkernel handle to this API\n");
    return 400;
  }
  v8 = *(_QWORD*)(a3 + 32);
  if (v8 == 0 || (v9 = *(_QWORD*)(v8 + 24)) == 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Handle for CUfunction %s is not in a valid state\n",
        *(const char**)(a3 + 8));
    return 400;
  }
  result = cuda_driver_misc_helpers_deeb0(*(_QWORD*)(v8 + 24), a4);
  if ((_DWORD)result == 0) {
    v10 = CudaDriverRoutine_107880(a3);
    if (v10 != 0) {
      v11 = v10;
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Internal error when attempting to load function %s\n",
          *(const char**)(a3 + 8));
      if (v11 == 1) {
        return 999;
      }
      else {
        return v11;
      }
    }
    else {
      result = 0;
      if (a2 != nullptr) {
        *a2 = v9;
      }
    }
  }
  return result;
}

__int64 cuda_driver_bcdd0()
{
  char* v0;
  unsigned int v1;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  void* v15;
  __int64 v16;
  _QWORD* v17;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = (char*)CudaDriverData_1422118;
  CudaDriverStub_107f90((char*)CudaDriverData_1422118 + 152),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_QWORD*)((char*)((_UNKNOWN*)0x10E8LL) + (_QWORD)v0) != 0) {
    goto LABEL_2;
  }
  v3 = CudaDriverStub_12e330(72),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *(_QWORD*)((char*)((_UNKNOWN*)0x10E8LL) + (_QWORD)v0) = v3;
  if (v3 == 0) {
    v1 = 2;
    goto LABEL_3;
  }
  *(_QWORD*)(v3 + 64) = 0;
  *(_OWORD*)(v3 + 32) = (__typeof__(*(_OWORD*)(v3 + 32))){0};
  *(_OWORD*)(v3 + 48) = (__typeof__(*(_OWORD*)(v3 + 48))){0};
  v4 = (__int64*)CudaDriverData_14231f8;
  *(_OWORD*)v3 = (__typeof__(*(_OWORD*)v3)){0};
  *(_OWORD*)(v3 + 16) = (__typeof__(*(_OWORD*)(v3 + 16))){0};
  v5 = *v4;
  v6 = CudaDriverData_1423200;
  v7 = *(__int64**)((char*)((_UNKNOWN*)0x10E8LL) + (_QWORD)v0);
  *(_OWORD*)(v7 + 5) = (__typeof__(*(_OWORD*)(v7 + 5))){0};
  *v6 = v5;
  *(_OWORD*)(v7 + 7) = (__typeof__(*(_OWORD*)(v7 + 7))){0};
  *((_DWORD*)v7 + 10) = 32;
  cuda_driver_65430((__int64)(v7 + 5)),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v8 != 0) {
    v1 = 500;
    v9 = *v7;
    if (*v7 == 0) {
      goto LABEL_19;
    }
    goto LABEL_7;
  }
  v10 = CudaDriverStub_12e260("x-this-is-never-used-libGL.dylib"),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *v7 = v10;
  if (v10 != 0) {
    v11 = CudaDriverStub_12e260(v10),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v7[2] = v11;
    if (v11 != 0) {
      v12 = CudaDriverStub_12e260(*v7),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v7[3] = v12;
      if (v12 != 0 && (CudaDriverStub_12e260(*v7) != 0 ||
                       ((__int64 (*)(__int64))v7[2])(v5) != 0)) {
        (*(void (**)(void))(
            *(_QWORD*)((char*)((_UNKNOWN*)0x10E8LL) + (_QWORD)v0) + 56LL))(),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v13 = *(_QWORD*)((char*)((_UNKNOWN*)0x10E8LL) + (_QWORD)v0);
        v14 = *(_QWORD*)(v13 + 8);
        if (v14 != 0) {
          v15 = (void*)CudaDriverStub_12e260(v14),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        else {
          v15 = (void*)(*(__int64 (**)(__int64))(v13 + 16))(*v6),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if (v15 == nullptr) {
            CudaDriverData_14324a0 = (_UNKNOWN*)CudaDriverStub_12e260(
                **(_QWORD**)((char*)((_UNKNOWN*)0x10E8LL) + (_QWORD)v0)),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            if (CudaDriverData_14324a0 != nullptr) {
            LABEL_2:
              v1 = 0;
              goto LABEL_3;
            }
            v1 = 219;
            v17 = *(_QWORD**)((char*)((_UNKNOWN*)0x10E8LL) + (_QWORD)v0);
            if (v17 == nullptr) {
              goto LABEL_3;
            }
            goto LABEL_22;
          }
        }
        v1 = 0;
        CudaDriverData_14324a0 = v15;
        goto LABEL_3;
      }
    }
    v1 = 304;
    v9 = *v7;
    if (*v7 != 0) {
    LABEL_7:
      CudaDriverStub_4f840(v9),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      *v7 = 0;
    }
  }
  else {
    v1 = 304;
  }
LABEL_19:
  v16 = v7[1];
  if (v16 != 0) {
    CudaDriverStub_4f840(v16),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v7[1] = 0;
  }
  v17 = *(_QWORD**)((char*)((_UNKNOWN*)0x10E8LL) + (_QWORD)v0);
  if (v17 != nullptr) {
  LABEL_22:
    if (v17[1] != 0) {
      CudaDriverStub_4f840(v17[1]),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v17 = *(_QWORD**)((char*)((_UNKNOWN*)0x10E8LL) + (_QWORD)v0);
    }
    if (*v17 != 0) {
      CudaDriverStub_4f840(*v17),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v17 = *(_QWORD**)((char*)((_UNKNOWN*)0x10E8LL) + (_QWORD)v0);
    }
    CudaDriverRoutine_12e340((__int64)v17),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    *(_QWORD*)((char*)((_UNKNOWN*)0x10E8LL) + (_QWORD)v0) = 0;
  }
LABEL_3:
  CudaDriverStub_108070(v0 + 152),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  return v1;
}

__int64 cuda_driver_bcfd0()
{
  void* v0;
  __int64 result;

  v0 = CudaDriverData_1422118;
  result = (*(__int64 (**)(void))(*(_QWORD*)((char*)((_UNKNOWN*)0x10E8LL) +
                                             (_QWORD)CudaDriverData_1422118) +
                                  16LL))();
  if (result == 0) {
    return CudaDriverStub_12e260(
        **(_QWORD**)((char*)((_UNKNOWN*)0x10E8LL) + (_QWORD)v0));
  }
  return result;
}

__int64 cuda_driver_bdf60(__int64 a1, unsigned int a2, __int64* a3, __int64 a4,
                          char a5)
{
  __int64* v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  bool v18;
  int v19;
  _BYTE* v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  _BYTE* v31;
  __int64 v32;
  _DWORD* v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  __int64 v38;
  _BYTE* v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  _BYTE* v45;
  __int64 v46;
  __int64 v47;
  _BYTE* v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _BYTE* v60;
  __int64* v61;
  _DWORD* v62;
  __int64 v63;
  __int64 v64;
  unsigned int v65;
  __int64 v66;
  __int64* v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  __int64 v71;
  __int64 v72;
  _BYTE v74[80];
  struct {
    int v75;
    char gap84_[4];
    _BYTE* v76;
    __int64 v77;
  } v75_;
  _BYTE v78[560];
  _QWORD v79[3];
  struct {
    int v80;
    char gap692_[4];
    _BYTE* v81;
    _DWORD* v82;
  } v80_;
  struct {
    __int64 v83;
    __int64 v84;
    int v85;
    char gap732_[4];
    int* v86;
    char gap744_[16];
    __int64 v87;
  } v83_;

  if (a2 < 0xB) {
    if (a2 == 0) {
      return 0;
    }
    v10 = (__int64*)v74;
  }
  else {
    v10 = (__int64*)CudaDriverStub_12e330(8LL * a2);
    if (v10 == nullptr) {
      return 2;
    }
  }
  LODWORD(v12) = 0;
  LODWORD(v13) = 0;
  v14 = a2;
  do {
    v15 = *a3++;
    v16 = *(_QWORD*)(v15 + 40);
    v17 = *(_BYTE*)(v16 + 32);
    if ((v17 & 2) != 0) {
      result = 208;
      if (v10 == (__int64*)v74) {
        return result;
      }
      goto LABEL_90;
    }
    v18 = (v17 & 1) == 0;
    v19 = a2 - (v12 + 1);
    if (v18) {
      v12 = (unsigned int)v12;
    }
    else {
      v12 = (unsigned int)(v12 + 1);
    }
    if (v18) {
      v19 = v13;
    }
    v13 = (unsigned int)v13 + v18;
    --v14;
    v10[v19] = v16;
  } while (v14 != 0);
  if ((_DWORD)v13 == 0) {
    v21 = 0;
    goto LABEL_84;
  }
  memset(v79, 0, sizeof(v79));
  if ((unsigned int)v13 < 0xB) {
    v20 = v78;
  }
  else {
    v20 = (_BYTE*)CudaDriverStub_12e330(56LL * (unsigned int)v13);
    if (v20 == nullptr) {
      result = 2;
      if (v10 == (__int64*)v74) {
        return result;
      }
      goto LABEL_90;
    }
  }
  v80_.v80 = v13;
  v80_.v81 = v20;
  if (a5 != 0) {
    LODWORD(v79[0]) = 1;
    v80_.v82 = v79;
    v22 = v13 & 3;
    if ((unsigned int)v13 < 4) {
      goto LABEL_27;
    }
  LABEL_30:
    v24 = v10 + 2;
    v25 = 216;
    v26 = 0;
    do {
      v26 -= 4;
      *(_QWORD*)&v80_.v81[v25 - 216] = *(_QWORD*)(*(v24 - 2) + 40LL);
      *(_DWORD*)&v80_.v81[v25 - 168] = *(_DWORD*)(*(v24 - 2) + 24LL);
      *(_QWORD*)&v80_.v81[v25 - 160] = *(_QWORD*)(*(v24 - 1) + 40LL);
      *(_DWORD*)&v80_.v81[v25 - 112] = *(_DWORD*)(*(v24 - 1) + 24LL);
      *(_QWORD*)&v80_.v81[v25 - 104] = *(_QWORD*)(*v24 + 40LL);
      *(_DWORD*)&v80_.v81[v25 - 56] = *(_DWORD*)(*v24 + 24LL);
      *(_QWORD*)&v80_.v81[v25 - 48] = *(_QWORD*)(v24[1] + 40LL);
      v27 = v24[1];
      v24 += 4;
      *(_DWORD*)&v80_.v81[v25] = *(_DWORD*)(v27 + 24);
      v25 += 224;
    } while (-(__int64)((unsigned int)v13 & 0xFFFFFFFC) != v26);
    v23 = -v26;
    if (v22 == 0) {
      goto LABEL_35;
    }
    goto LABEL_33;
  }
  v80_.v82 = nullptr;
  v22 = v13 & 3;
  if ((unsigned int)v13 >= 4) {
    goto LABEL_30;
  }
LABEL_27:
  v23 = 0;
  if (v22 != 0) {
  LABEL_33:
    v28 = 56 * v23;
    v29 = &v10[v23];
    do {
      --v22;
      *(_QWORD*)&v80_.v81[v28] = *(_QWORD*)(*v29 + 40);
      v30 = *v29++;
      v31 = &v80_.v81[v28];
      v28 += 56;
      *((_DWORD*)v31 + 12) = *(_DWORD*)(v30 + 24);
    } while (v22 != 0);
  }
LABEL_35:
  v83_.v85 = 4;
  v83_.v83 = 0x800000011LL;
  if (a1 != 0) {
    v32 = **(_QWORD**)(a1 + 64);
  }
  else {
    v32 = 0;
  }
  v83_.v84 = v32;
  v83_.v86 = &v80_.v80;
  CudaDriverData_14324a0_alt1(&v83_.v83);
  result = HIDWORD(v83_.v83);
  if (SHIDWORD(v83_.v83) > 2) {
    if (SHIDWORD(v83_.v83) <= 4) {
      if (HIDWORD(v83_.v83) == 3) {
        result = 219;
      }
      else {
        result = 208;
      }
      goto LABEL_81;
    }
    if (HIDWORD(v83_.v83) == 5) {
      result = 211;
      goto LABEL_81;
    }
    if (HIDWORD(v83_.v83) == 6) {
      result = 2;
      goto LABEL_81;
    }
  LABEL_59:
    result = 999;
    goto LABEL_81;
  }
  if (HIDWORD(v83_.v83) != 0) {
    if (HIDWORD(v83_.v83) == 1) {
      goto LABEL_81;
    }
    if (HIDWORD(v83_.v83) == 2) {
      result = 400;
      goto LABEL_81;
    }
    goto LABEL_59;
  }
  v33 = v80_.v82;
  if (v80_.v82 != nullptr && *v80_.v82 != 0) {
    v34 = *(_QWORD*)(a1 + 64);
    v83_.v87 = *(_QWORD*)a1;
    v35 = *(_DWORD*)(v34 + 48);
    v36 = *(_DWORD*)(v34 + 52) + 16;
    *(_DWORD*)(v34 + 52) = v36;
    if (v36 >= v35) {
      v37 = *(_DWORD*)(v34 + 56) + 1;
      *(_DWORD*)(v34 + 52) = 0;
      *(_DWORD*)(v34 + 56) = v37;
    }
    CudaDriverRoutine_205fa0(0, a4, (__int64)&v83_.v83, nullptr);
    v38 = CudaDriverStub_1db800(*(_QWORD*)(v34 + 64));
    v83_.v83 =
        (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD,
                        _QWORD))(*(_QWORD*)(v83_.v87 + 64) + 19112LL))(
            v83_.v83, 0, 0, v83_.v87, v38 + (unsigned int)v33[1],
            (unsigned int)v33[2], 0);
    CudaDriverRoutine_206060(a4, v83_.v83);
  }
  v39 = v80_.v81;
  if (v80_.v81 != nullptr) {
    v40 = 0;
    while (1) {
      LODWORD(result) = (*(__int64 (**)(__int64, __int64, _BYTE*, __int64))(
          *(_QWORD*)v10[v40] + 40LL))(v10[v40], a1, v39, a4);
      if ((_DWORD)result != 0) {
        break;
      }
      ++v40;
      v39 += 56;
      if (v13 == v40) {
        result = 0;
        goto LABEL_81;
      }
    }
  }
  else {
    v40 = 0;
    while (1) {
      result = (*(__int64 (**)(__int64, __int64, _QWORD, __int64))(
          *(_QWORD*)v10[v40] + 40LL))(v10[v40], a1, 0, a4);
      if ((_DWORD)result != 0) {
        break;
      }
      if (v13 == ++v40) {
        goto LABEL_81;
      }
    }
  }
  LODWORD(v83_.v87) = result;
  if ((_DWORD)v40 != 0) {
    v41 = v40 - 1;
    v42 = v10;
    do {
      v43 = *v42++;
    } while ((*(unsigned int (**)(__int64, __int64, __int64))(
                 *(_QWORD*)v43 + 48LL))(v43, a1, a4) == 0 &&
             v41-- != 0);
  }
  v45 = v80_.v81;
  v46 = v13 & 7;
  v47 = 0;
  v75_.v75 = v13;
  v75_.v76 = v80_.v81;
  v75_.v77 = 0;
  if ((unsigned int)v13 >= 8) {
    v48 = v80_.v81 + 64;
    v49 = v10 + 4;
    v50 = 0;
    do {
      v50 -= 8;
      v51 = *(_QWORD*)(*(v49 - 4) + 40LL);
      *((_DWORD*)v48 - 14) = 1;
      *((_QWORD*)v48 - 8) = v51;
      v52 = *(_QWORD*)(*(v49 - 3) + 40LL);
      *((_DWORD*)v48 - 10) = 1;
      *((_QWORD*)v48 - 6) = v52;
      v53 = *(_QWORD*)(*(v49 - 2) + 40LL);
      *((_DWORD*)v48 - 6) = 1;
      *((_QWORD*)v48 - 4) = v53;
      v54 = *(_QWORD*)(*(v49 - 1) + 40LL);
      *((_DWORD*)v48 - 2) = 1;
      *((_QWORD*)v48 - 2) = v54;
      v55 = *(_QWORD*)(*v49 + 40LL);
      *((_DWORD*)v48 + 2) = 1;
      *(_QWORD*)v48 = v55;
      v56 = *(_QWORD*)(v49[1] + 40LL);
      *((_DWORD*)v48 + 6) = 1;
      *((_QWORD*)v48 + 2) = v56;
      v57 = *(_QWORD*)(v49[2] + 40LL);
      *((_DWORD*)v48 + 10) = 1;
      *((_QWORD*)v48 + 4) = v57;
      v58 = v49[3];
      v49 += 8;
      v59 = *(_QWORD*)(v58 + 40);
      *((_DWORD*)v48 + 14) = 1;
      *((_QWORD*)v48 + 6) = v59;
      v48 += 128;
    } while (-(__int64)((unsigned int)v13 & 0xFFFFFFF8) != v50);
    v47 = -v50;
  }
  if ((v13 & 7) != 0) {
    v60 = &v45[16 * v47];
    v61 = &v10[v47];
    v62 = v60 + 8;
    do {
      v63 = *v61++;
      --v46;
      *((_QWORD*)v62 - 1) = *(_QWORD*)(v63 + 40);
      *v62 = 1;
      v62 += 4;
    } while (v46 != 0);
  }
  v83_.v83 = 0x800000011LL;
  v83_.v85 = 5;
  v64 = **(_QWORD**)(a1 + 64);
  v83_.v86 = &v75_.v75;
  v83_.v84 = v64;
  CudaDriverData_14324a0_alt1(&v83_.v83);
  result = (unsigned int)v83_.v87;
LABEL_81:
  if (v20 != v78) {
    v65 = result;
    CudaDriverRoutine_12e340((__int64)v20);
    result = v65;
  }
  v21 = v13;
  if ((_DWORD)result != 0) {
  LABEL_89:
    if (v10 == (__int64*)v74) {
      return result;
    }
    goto LABEL_90;
  }
LABEL_84:
  if ((_DWORD)v12 == 0) {
  LABEL_88:
    result = 0;
    goto LABEL_89;
  }
  v66 = 0;
  v67 = &v10[a2 - (unsigned int)v12];
  while (1) {
    v68 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64))(
        *(_QWORD*)v67[v66] + 40LL))(v67[v66], a1, 0, a4);
    if (v68 != 0) {
      break;
    }
    if (v12 == ++v66) {
      goto LABEL_88;
    }
  }
  v70 = v68;
  if (v66 != 0) {
    v71 = v66 - 1;
    do {
      v72 = *v67++;
    } while ((*(unsigned int (**)(__int64, __int64, __int64))(
                 *(_QWORD*)v72 + 48LL))(v72, a1, a4) == 0 &&
             v71-- != 0);
  }
  if ((_DWORD)v13 != 0) {
    CudaDriverRoutine_c2a40(a1, v21, v10, a4, a5);
  }
  result = v70;
  if (v10 != (__int64*)v74) {
  LABEL_90:
    v69 = result;
    CudaDriverRoutine_12e340((__int64)v10);
    return v69;
  }
  return result;
}

__int64 cuda_driver_be620(__int64 a1, unsigned int a2, __int64* a3, __int64 a4,
                          char a5)
{
  __int64* v10;
  __int64 result;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  bool v18;
  unsigned int v19;
  __int64* v20;
  __int64 v21;
  unsigned int v23;
  _BYTE v24[80];

  if (a2 < 0xB) {
    if (a2 == 0) {
      return 0;
    }
    v10 = (__int64*)v24;
  }
  else {
    v10 = (__int64*)CudaDriverStub_12e330(8LL * a2);
    if (v10 == nullptr) {
      return 2;
    }
  }
  v12 = 0;
  v13 = 0;
  v14 = a2;
  do {
    v15 = *a3++;
    v16 = *(_QWORD*)(v15 + 40);
    v17 = *(_BYTE*)(v16 + 32);
    if ((v17 & 2) == 0) {
      result = 211;
      goto LABEL_22;
    }
    v18 = (v17 & 1) == 0;
    v19 = a2 - (v12 + 1);
    if (v18) {
      v19 = v13;
    }
    else {
      ++v12;
    }
    v13 += v18;
    --v14;
    v10[v19] = v16;
  } while (v14 != 0);
  if (v13 == 0 ||
      (_DWORD)(result = CudaDriverRoutine_c2a40(a1, v13, v10, a4, a5)) == 0) {
    if (v12 == 0) {
    LABEL_19:
      result = 0;
      if (v10 == (__int64*)v24) {
        return result;
      }
      goto LABEL_23;
    }
    v20 = &v10[a2];
    v21 = -(__int64)v12;
    while (1) {
      result = (*(__int64 (**)(__int64, __int64, __int64))(
          *(_QWORD*)v20[v21] + 48LL))(v20[v21], a1, a4);
      if ((_DWORD)result != 0) {
        break;
      }
      if (__CFADD__(v21++, 1)) {
        goto LABEL_19;
      }
    }
  }
LABEL_22:
  if (v10 == (__int64*)v24) {
    return result;
  }
LABEL_23:
  v23 = result;
  CudaDriverRoutine_12e340((__int64)v10);
  return v23;
}

__int64 cuda_driver_bf0d0(__int64* a1, __int64 a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int128 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int128 v16;
  __int128 v17;
  __int64 v18;
  struct {
    _QWORD v19[2];
    int v20;
    char gap772_[4];
    __int64* v21;
  } v19_;

  memset_plt(&v12, 0, 744);
  v11 = *(__int64*)((char*)a1 + 12);
  v19_.v20 = 2;
  v19_.v19[0] = 0x800000011LL;
  if (a2 != 0) {
    v4 = **(_QWORD**)(a2 + 64);
  }
  else {
    v4 = 0;
  }
  v19_.v19[1] = v4;
  v19_.v21 = &v11;
  CudaDriverData_14324a0_alt2(v19_.v19);
  result = HIDWORD(v19_.v19[0]);
  if (SHIDWORD(v19_.v19[0]) > 2) {
    if (SHIDWORD(v19_.v19[0]) <= 4) {
      if (HIDWORD(v19_.v19[0]) == 3) {
        return 219;
      }
      else {
        return 208;
      }
    }
    if (HIDWORD(v19_.v19[0]) == 5) {
      return 211;
    }
    if (HIDWORD(v19_.v19[0]) == 6) {
      return 2;
    }
    return 999;
  }
  if (HIDWORD(v19_.v19[0]) != 0) {
    if (HIDWORD(v19_.v19[0]) == 1) {
      return result;
    }
    if (HIDWORD(v19_.v19[0]) == 2) {
      return 400;
    }
    return 999;
  }
  if (v13 == 0) {
    return 205;
  }
  a1[5] = v13;
  v6 = v15;
  v7 = v18;
  *((_DWORD*)a1 + 7) = v14;
  a1[10] = v7;
  a1[13] = v6;
  v8 = v17;
  v9 = *a1;
  *((_OWORD*)a1 + 3) = v16;
  *((_OWORD*)a1 + 4) = v8;
  result = (*(__int64 (**)(__int64*, __int64))(v9 + 80))(a1, a2);
  if ((_DWORD)result != 0) {
    v10 = result;
    (*(void (**)(__int64*, __int64))(*a1 + 32))(a1, a2);
    return v10;
  }
  return result;
}

__int64 cuda_driver_c0780(__int64 a1, __int64* a2, long double a3)
{

#pragma clang fp contract(off)
  int v3;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  __int64 result;
  int v11;
  int32x2_t v12;
  long double v13;
  int v14;

  v3 = *(_DWORD*)(a1 + 16);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while (1) {
    if (v3 == 32879 ||
        (v3 & 0xFFFFFFFD) == 0x8C18 && (*(_BYTE*)(a1 + 32) & 8) != 0) {
      v8 = *(_DWORD*)(a1 + 112);
    }
    *(_QWORD*)&a3 = *(_QWORD*)(a1 + 104);
    v14 = *(_DWORD*)(a1 + 136) * v7;
    if (*(_DWORD*)(a1 + 128) != 0) {
      break;
    }
  LABEL_2:
    if ((unsigned int)++v7 > *(_DWORD*)(a1 + 132)) {
      return 0;
    }
  }
  v9 = 0;
  while (1) {
    v13 = a3;
    result = CudaDriverRoutine_c02b0(a1, a2, v6, v9, SLODWORD(a3), SDWORD1(a3),
                                     v8, &v14);
    if ((_DWORD)result != 0) {
      return result;
    }
    *((_QWORD*)&a3 + 1) = *((_QWORD*)&v13 + 1);
    v3 = *(_DWORD*)(a1 + 16);
    v11 = v8 >> 1;
    ++v6;
    ++v9;
    if (v8 >> 1 <= 1) {
      v11 = 1;
    }
    LANES64(v12).n64_u64[0] =
        LANES64_OF(vshr_n_s32(*(int32x2_t*)&v13, 1u)).n64_u64[0];
    if (v3 == 32879) {
      v8 = v11;
    }
    *(int32x2_t*)&a3 = vmax_s32(v12, COERCE_AS(int32x2_t, 0x100000001LL));
    if (v9 >= *(_DWORD*)(a1 + 128)) {
      goto LABEL_2;
    }
  }
}

__int64 cuda_driver_c2ce0(_DWORD* a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result;
  _QWORD* v6;
  __int64 v7;
  unsigned int v8;
  _QWORD* v9;
  __int128* v10;
  _DWORD* v11;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[128];
  __int128 v23;
  __int128 v24;
  __int128 v25;
  _QWORD v26[32];
  _QWORD v27[32];

  result = 1;
  if (a1 != nullptr && a2 != 0) {
    *a1 = 0;
    memset(v27, 0, sizeof(v27));
    memset(v26, 0, sizeof(v26));
    v6 = CudaDriverData_1422118;
    v7 = *(_QWORD*)((char*)((_UNKNOWN*)0x10E8LL) +
                    (_QWORD)CudaDriverData_1422118);
    v25 = (__typeof__(v25)){0};
    v23 = (__typeof__(v23)){0};
    LODWORD(v23) = 48;
    v8 = *(_DWORD*)(v7 + 44);
    v24 = (__typeof__(v24)){0};
    if (v8 <= 4) {
      v10 = (__int128*)((char*)&v25 + 8);
      *(_QWORD*)&v25 = v27;
      v9 = v26;
    }
    else {
      v9 = v22;
      v10 = &v24;
    }
    v11 = a1;
    *(_QWORD*)v10 = v9;
    DWORD2(v23) = 64;
    if ((unsigned int)(a4 - 1) <= 2) {
      DWORD1(v23) = a4;
    }
    result = (*(__int64 (**)(_QWORD, __int128*, _QWORD))(v7 + 64))(0, &v23, 0);
    if ((int)result > 2) {
      if ((int)result <= 4) {
        if ((_DWORD)result == 3) {
          return 219;
        }
        else {
          return 208;
        }
      }
      if ((_DWORD)result == 5) {
        return 211;
      }
      if ((_DWORD)result == 6) {
        return 2;
      }
      return 999;
    }
    if ((_DWORD)result != 0) {
      if ((_DWORD)result == 1) {
        return result;
      }
      if ((_DWORD)result == 2) {
        return 400;
      }
      return 999;
    }
    if (HIDWORD(v23) >= a3) {
      v14 = a3;
    }
    else {
      v14 = HIDWORD(v23);
    }
    if ((_DWORD)v14 != 0) {
      v15 = 0;
      while (1) {
        v16 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v6);
        if ((_DWORD)v16 == 0) {
          break;
        }
        v17 = &v22[2 * v15];
        v18 = 0;
        v19 = *v17;
        v20 = v17[1];
        while (*(_QWORD*)(v6[v18 + 35] + 3078LL) != v19 ||
               *(_QWORD*)(v6[v18 + 35] + 3086LL) != v20) {
          if (v16 == ++v18) {
            goto LABEL_37;
          }
        }
        ++v15;
        result = 0;
        *(_DWORD*)(a2 + 4LL * (unsigned int)(*v11)++) = v18;
        if (v15 == v14) {
          return result;
        }
      }
    LABEL_37:
      *v11 = 0;
      return 100;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_c30d0(_QWORD* a1, int a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  _QWORD v14[3];

  if ((unsigned int)(a2 - 1) > 2) {
    v6 = 0;
    v7 = CudaDriverStub_12e330(0);
    if (v7 != 0) {
      goto LABEL_3;
    }
    return 2;
  }
  v6 = CudaDriverData_1133810[a2 - 1];
  v7 = CudaDriverStub_12e330(v6);
  if (v7 == 0) {
    return 2;
  }
LABEL_3:
  v8 = (_DWORD*)v7;
  memset_plt(v7, 0, v6);
  *v8 =
      CudaDriverRoutine_12de40((unsigned int*)((char*)((_UNKNOWN*)0x10C0LL) +
                                               (_QWORD)CudaDriverData_1422118));
  v8[1] = a2;
  if (a3 == 0 && a2 == 2) {
    v10 = (__int64)v8;
  }
  else {
    v10 = a3;
  }
  v11 = CudaDriverRoutine_dc390((__int64)v8, v10);
  if (v11 != 0) {
    v12 = v11;
    CudaDriverRoutine_12e340((__int64)v8);
    return v12;
  }
  else {
    CudaDriverRoutine_1a2d70((__int64)(v8 + 6), 8, 4, 0, 0);
    *a1 = v8;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x88LL) +
                   (_QWORD)CudaDriverData_1432140) != 0) {
      v14[1] = v8;
      v14[0] = 24;
      cuda_driver_20b420(2u, 0x22u, (__int64)v14);
    }
    return 0;
  }
}

__int64 cuda_driver_c3200(__int64 a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
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
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  struct {
    int v40;
    char gap12_[4];
    __int64 v41;
    __int64 v42;
  } v40_;

  if (*(_DWORD*)((char*)((_UNKNOWN*)0x98LL) +
                 *(__int64*)((char*)((__int64*)0x10LL) +
                             (_QWORD)CudaDriverData_14225e0)) != 0) {
    v40_.v40 = 24;
    if (a1 != 0) {
      v4 = *(_QWORD*)(a1 + 24);
    }
    else {
      v4 = 0;
    }
    v40_.v41 = v4;
    v40_.v42 = a1;
    cuda_driver_20b420(2u, 0x26u, (__int64)&v40_.v40);
  }
  v5 = *(_QWORD*)(a1 + 1120);
  if (v5 != 0) {
    *(_QWORD*)(v5 + 1112) = 0;
  }
  v6 = *(_QWORD*)(a1 + 1112);
  if (v6 != 0 && *(_QWORD*)(v6 + 1120) != 0) {
    *(_QWORD*)(v6 + 1120) = 0;
  }
  CudaDriverRoutine_c7d50(a1);
  v8 = *(_QWORD*)(a1 + 24);
  if (*(_DWORD*)(v8 + 4) == 1) {
    v9 = *(_QWORD*)(v8 + 336);
    if (v9 != 0) {
      v10 = *(unsigned int*)(v9 + 60);
      if ((_DWORD)v10 != 0) {
        v11 = *(__int64**)(v9 + 24);
        do {
          v12 = *v11++;
          CudaDriverRoutine_c7db0(v12, (unsigned int*)a1);
          --v10;
        } while (v10 != 0);
        v8 = *(_QWORD*)(a1 + 24);
      }
    }
  }
  v13 = *(unsigned int*)(v8 + 60);
  if ((_DWORD)v13 != 0) {
    v14 = *(__int64**)(v8 + 24);
    do {
      v15 = *v14++;
      CudaDriverRoutine_c7db0(v15, (unsigned int*)a1);
      --v13;
    } while (v13 != 0);
  }
  if ((a2 & 1) == 0 && *(_DWORD*)(a1 + 1092) != 0) {
    do {
      CudaDriverRoutine_d5d50(a1, **(_QWORD**)(a1 + 1056));
    } while (*(_DWORD*)(a1 + 1092) != 0);
  }
  v16 = *(_QWORD*)(a1 + 1168);
  v17 = *(_QWORD*)(a1 + 1160);
  if (v16 != 0) {
    *(_QWORD*)(v16 + 1160) = v17;
  }
  if (v17 != 0) {
    *(_QWORD*)(v17 + 1168) = *(_QWORD*)(a1 + 1168);
  }
  v18 = *(_QWORD*)(a1 + 24);
  v19 = (_QWORD*)(a1 + 1160);
  if (*(_QWORD*)(v18 + 184) == a1) {
    *(_QWORD*)(v18 + 184) = *(_QWORD*)(a1 + 1168);
    *v19 = 0;
    *(_QWORD*)(a1 + 1168) = 0;
    CudaDriverRoutine_1a3eb0(a1 + 1056);
    if ((a2 & 1) != 0) {
      goto LABEL_33;
    }
  }
  else {
    *v19 = 0;
    *(_QWORD*)(a1 + 1168) = 0;
    CudaDriverRoutine_1a3eb0(a1 + 1056);
    if ((a2 & 1) != 0) {
      goto LABEL_33;
    }
  }
  while (*(_DWORD*)(a1 + 1036) != 0) {
    CudaDriverRoutine_d5d50(**(_QWORD**)(a1 + 1000), a1);
  }
LABEL_33:
  v20 = *(_QWORD*)(a1 + 1152);
  v21 = *(_QWORD*)(a1 + 1144);
  if (v20 != 0) {
    *(_QWORD*)(v20 + 1144) = v21;
  }
  if (v21 != 0) {
    *(_QWORD*)(v21 + 1152) = *(_QWORD*)(a1 + 1152);
  }
  v22 = *(_QWORD*)(a1 + 24);
  if (*(_QWORD*)(v22 + 192) == a1) {
    *(_QWORD*)(v22 + 192) = *(_QWORD*)(a1 + 1152);
  }
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1152) = 0;
  CudaDriverRoutine_1a3eb0(a1 + 1000);
  v23 = *(_QWORD*)(a1 + 24);
  if (*(_QWORD*)(v23 + 112) == a1) {
    *(_QWORD*)(v23 + 112) = *(_QWORD*)(a1 + 1128);
    v23 = *(_QWORD*)(a1 + 24);
    if (*(_QWORD*)(v23 + 104) != a1) {
      goto LABEL_41;
    }
  }
  else if (*(_QWORD*)(v23 + 104) != a1) {
  LABEL_41:
    v24 = *(_QWORD*)(a1 + 1136);
    *(_QWORD*)(*(_QWORD*)(a1 + 1128) + 1136LL) = v24;
    if (v24 == 0) {
      goto LABEL_47;
    }
    v25 = *(_QWORD*)(a1 + 1128);
    goto LABEL_46;
  }
  *(_QWORD*)(v23 + 104) = *(_QWORD*)(a1 + 1136);
  v24 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 104LL);
  if (v24 != 0) {
    v25 = 0;
  LABEL_46:
    *(_QWORD*)(v24 + 1128) = v25;
  }
LABEL_47:
  *(_OWORD*)(a1 + 1128) = (__typeof__(*(_OWORD*)(a1 + 1128))){0};
  --*(_DWORD*)(*(_QWORD*)(a1 + 24) + 200LL);
  v26 = *(_QWORD*)(a1 + 992);
  if (v26 != 0) {
    CudaDriverRoutine_1ba520(v26);
  }
  switch (*(_DWORD*)(a1 + 4)) {
  case 0:
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 800));
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 128));
    if (*(_BYTE*)(a1 + 941) != 0) {
      v30 = *(_QWORD*)(a1 + 944);
      if (v30 != 0) {
        CudaDriverRoutine_1dce60(v30);
      }
    }
    v31 = *(_QWORD*)(a1 + 696);
    if (v31 != 0) {
      CudaDriverRoutine_1a4580(v31);
    }
    if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 4LL) == 2) {
      CudaDriverRoutine_120530(a1);
    }
    return cuda_driver_d5c60(a1);
  case 1:
    v32 = *(_QWORD*)(a1 + 24);
    if (*(_QWORD*)(v32 + 144) == a1 + 32) {
      *(_QWORD*)(v32 + 144) = *(_QWORD*)(a1 + 760);
      v32 = *(_QWORD*)(a1 + 24);
    }
    if (*(_QWORD*)(v32 + 136) == a1 + 32) {
      *(_QWORD*)(v32 + 136) = *(_QWORD*)(a1 + 768);
      v33 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 136LL);
      if (v33 == 0) {
        goto LABEL_84;
      }
      v34 = 0;
    }
    else {
      v33 = *(_QWORD*)(a1 + 768);
      *(_QWORD*)(*(_QWORD*)(a1 + 760) + 736LL) = v33;
      if (v33 == 0) {
        goto LABEL_84;
      }
      v34 = *(_QWORD*)(a1 + 760);
    }
    *(_QWORD*)(v33 + 728) = v34;
  LABEL_84:
    *(_OWORD*)(a1 + 760) = (__typeof__(*(_OWORD*)(a1 + 760))){0};
    return cuda_driver_d5c60(a1);
  case 2:
    CudaDriverRoutine_105220(a1 + 88);
    v27 = *(_QWORD*)(a1 + 24);
    if (*(_QWORD*)(v27 + 128) == a1 + 32) {
      *(_QWORD*)(v27 + 128) = *(_QWORD*)(a1 + 312);
      v27 = *(_QWORD*)(a1 + 24);
    }
    if (*(_QWORD*)(v27 + 120) == a1 + 32) {
      *(_QWORD*)(v27 + 120) = *(_QWORD*)(a1 + 320);
      v28 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 120LL);
      if (v28 == 0) {
        goto LABEL_80;
      }
      v29 = 0;
    }
    else {
      v28 = *(_QWORD*)(a1 + 320);
      *(_QWORD*)(*(_QWORD*)(a1 + 312) + 288LL) = v28;
      if (v28 == 0) {
        goto LABEL_80;
      }
      v29 = *(_QWORD*)(a1 + 312);
    }
    *(_QWORD*)(v28 + 280) = v29;
  LABEL_80:
    *(_QWORD*)(a1 + 312) = 0;
    *(_QWORD*)(a1 + 320) = 0;
    return cuda_driver_d5c60(a1);
  case 4:
    v35 = *(_QWORD*)(a1 + 24);
    if (*(_QWORD*)(v35 + 160) == a1) {
      *(_QWORD*)(v35 + 160) = *(_QWORD*)(a1 + 1184);
      v35 = *(_QWORD*)(a1 + 24);
    }
    if (*(_QWORD*)(v35 + 152) == a1) {
      *(_QWORD*)(v35 + 152) = *(_QWORD*)(a1 + 1192);
      v36 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 152LL);
      if (v36 == 0) {
        goto LABEL_88;
      }
      v37 = 0;
    }
    else {
      v36 = *(_QWORD*)(a1 + 1192);
      *(_QWORD*)(*(_QWORD*)(a1 + 1184) + 1192LL) = v36;
      if (v36 == 0) {
        goto LABEL_88;
      }
      v37 = *(_QWORD*)(a1 + 1184);
    }
    *(_QWORD*)(v36 + 1184) = v37;
  LABEL_88:
    v38 = *(_QWORD*)(a1 + 24);
    *(_OWORD*)(a1 + 1184) = (__typeof__(*(_OWORD*)(a1 + 1184))){0};
    --*(_QWORD*)(v38 + 168);
    cuda_driver_c36c0(*(_QWORD*)(a1 + 48));
    return cuda_driver_d5c60(a1);
  case 8:
  case 9:
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 32));
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 40));
    return cuda_driver_d5c60(a1);
  case 0xA:
    CudaDriverRoutine_d38d0(a1);
    return cuda_driver_d5c60(a1);
  case 0xB:
    CudaDriverRoutine_d3910(a1);
    return cuda_driver_d5c60(a1);
  case 0xC:
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 48));
    return cuda_driver_d5c60(a1);
  case 0xD:
    CudaDriverRoutine_d8160(a1);
    return cuda_driver_d5c60(a1);
  default:
    return cuda_driver_d5c60(a1);
  }
}

__int64 cuda_driver_c36c0(__int64 a1)
{
  __int64 i;
  unsigned __int64* v3;
  __int64 v4;
  void* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 k;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v28;
  __int64 v29;
  __int128 v30;
  __int128 v31;
  __int64 j;
  __int64 v33;
  __int64 v34;
  int v35;
  _QWORD v36[3];

  if (*(_DWORD*)(a1 + 4) != 2) {
    goto LABEL_6;
  }
  if (*(_BYTE*)(a1 + 410) != 0) {
    for (i = *(_QWORD*)(a1 + 112); i != 0; i = *(_QWORD*)(i + 1128)) {
      if (*(_DWORD*)(i + 4) != 0 || *(_BYTE*)(i + 387) == 0 ||
          i == *(_QWORD*)(a1 + 448)) {
        continue;
      }
      if (*(_QWORD*)(i + 1216) != 0) {
        for (j = i; j != 0; j = *(_QWORD*)(j + 1216)) {
          v33 = j;
        }
        v34 = *(_QWORD*)(i + 752);
        v35 = *(_DWORD*)(v33 + 4);
        if (v35 == 0) {
        LABEL_48:
          v28 = 752;
          goto LABEL_49;
        }
      }
      else {
        v33 = **(_QWORD**)(i + 1056);
        v34 = *(_QWORD*)(i + 752);
        v35 = *(_DWORD*)(v33 + 4);
        if (v35 == 0) {
          goto LABEL_48;
        }
      }
      if (v35 == 13) {
        v28 = 80;
      LABEL_49:
        v29 = *(_QWORD*)(v33 + v28);
        v30 = *(_OWORD*)(v29 + 144);
        v31 = *(_OWORD*)(v29 + 160);
        *(_QWORD*)(v34 + 176) = *(_QWORD*)(v29 + 176);
        *(_OWORD*)(v34 + 144) = v30;
        *(_OWORD*)(v34 + 160) = v31;
      }
    }
  }
  v3 = *(unsigned __int64**)(a1 + 296);
  if (v3 != nullptr) {
    cuda_driver_108740(*(unsigned int*)(a1 + 292), v3);
  }
LABEL_6:
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)CudaDriverData_1432140) !=
      0) {
    v36[1] = a1;
    LODWORD(v36[0]) = 24;
    cuda_driver_20b420(2u, 0x24u, (__int64)v36);
  }
  if (*(_DWORD*)(a1 + 4) == 2) {
    v4 = *(_QWORD*)(a1 + 280);
    if (v4 != 0) {
      cuda_driver_c36c0(v4);
      *(_QWORD*)(a1 + 280) = 0;
    }
    if (*(_BYTE*)(a1 + 415) != 0 &&
            (v5 = CudaDriverData_1422118,
             cuda_driver_108520((__int64)&CudaDriverRoutine_7378 +
                                (_QWORD)CudaDriverData_1422118),
             CudaDriverStub_1a2ae0(
                 *(_QWORD*)((char*)&CudaDriverRoutine_7370 + (_QWORD)v5),
                 *(_QWORD*)(*(_QWORD*)(a1 + 424) + 96LL)),
             CudaDriverRoutine_1085d0((__int64)&CudaDriverRoutine_7378 +
                                      (_QWORD)v5),
             *(_BYTE*)(a1 + 415) != 0) ||
        *(_BYTE*)(a1 + 416) != 0) {
      if (*(_QWORD*)(a1 + 424) != 0) {
        v6 = CudaDriverRoutine_997f0(*(_QWORD*)(*(_QWORD*)(a1 + 448) + 1200LL));
        CudaDriverRoutine_dda00(v6, (__int64*)(a1 + 424), 2u,
                                *(__int64**)(*(_QWORD*)(a1 + 448) + 992LL));
      }
    }
    if (*(_QWORD*)(a1 + 456) != 0) {
      CudaDriverStub_1db190(a1 + 456);
    }
    while (1) {
      v7 = *(_QWORD*)(a1 + 384);
      if (v7 == 0) {
        break;
      }
      v8 = *(_QWORD*)(v7 + 960);
      *(_QWORD*)(a1 + 384) = v8;
      if (v8 != 0) {
        *(_QWORD*)(v8 + 968) = 0;
      }
      *(_OWORD*)(v7 + 960) = (__typeof__(*(_OWORD*)(v7 + 960))){0};
      *(_OWORD*)(v7 + 976) = (__typeof__(*(_OWORD*)(v7 + 976))){0};
      CudaDriverRoutine_116fa0(v7);
    }
    v9 = *(_QWORD*)(a1 + 376);
    if (v9 != 0) {
      CudaDriverRoutine_1a2b00(
          v9, (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_c3a60, 0);
      CudaDriverRoutine_1a2910(*(_QWORD*)(a1 + 376));
    }
    if (*(_QWORD*)(a1 + 296) != 0) {
      CudaDriverRoutine_107f60((_QWORD*)(a1 + 392));
      CudaDriverRoutine_1089c0(*(unsigned int*)(a1 + 292),
                               *(_QWORD*)(a1 + 296));
      CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 296));
    }
    v10 = *(_QWORD*)(a1 + 8);
    if (v10 != 0) {
      *(_BYTE*)(v10 + 333) = 0;
    }
    cuda_driver_d4de0(a1);
  }
  CudaDriverRoutine_dc5c0(a1);
  for (k = *(_QWORD*)(a1 + 104); k != 0; k = *(_QWORD*)(a1 + 104)) {
    cuda_driver_c3200(k, 3);
  }
  v12 = *(_DWORD*)(a1 + 4);
  if (v12 == 3) {
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 272));
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 280));
    v13 = *(_QWORD*)(a1 + 8);
    v36[0] = a1;
    v14 = a1;
    if (v13 != 0) {
    LABEL_35:
      CudaDriverRoutine_1a33a0(v13 + 24, (unsigned __int8*)v36);
      v14 = v36[0];
      *(_QWORD*)(v36[0] + 8LL) = 0;
    }
  }
  else {
    if (v12 == 1) {
      CudaDriverRoutine_d4f00(a1);
    }
    v13 = *(_QWORD*)(a1 + 8);
    v36[0] = a1;
    v14 = a1;
    if (v13 != 0) {
      goto LABEL_35;
    }
  }
  v17 = *(_QWORD*)(v14 + 24);
  v15 = v14 + 24;
  v16 = v17;
  v18 = *(_DWORD*)(v15 + 36);
  if (v18 == 0) {
    goto LABEL_47;
  }
  v19 = v18 & 7;
  if (v18 < 8) {
    v20 = 0;
    if ((v18 & 7) == 0) {
      goto LABEL_47;
    }
    goto LABEL_45;
  }
  v21 = (_QWORD*)(v16 + 32);
  v22 = 0;
  v23 = -(__int64)(v18 & 0xFFFFFFF8);
  do {
    v22 -= 8;
    *(_QWORD*)(*(v21 - 4) + 8LL) = 0;
    *(_QWORD*)(*(v21 - 3) + 8LL) = 0;
    *(_QWORD*)(*(v21 - 2) + 8LL) = 0;
    *(_QWORD*)(*(v21 - 1) + 8LL) = 0;
    *(_QWORD*)(*v21 + 8LL) = 0;
    *(_QWORD*)(v21[1] + 8LL) = 0;
    *(_QWORD*)(v21[2] + 8LL) = 0;
    v24 = v21[3];
    v21 += 8;
    *(_QWORD*)(v24 + 8) = 0;
  } while (v23 != v22);
  v20 = -v22;
  if (v19 != 0) {
  LABEL_45:
    v25 = (__int64*)(v16 + 8 * v20);
    do {
      v26 = *v25++;
      --v19;
      *(_QWORD*)(v26 + 8) = 0;
    } while (v19 != 0);
  }
LABEL_47:
  CudaDriverRoutine_1a39e0(v15);
  CudaDriverRoutine_c7c60(a1);
  CudaDriverRoutine_1a3eb0(a1 + 24);
  CudaDriverRoutine_d7ae0(a1);
  return CudaDriverRoutine_12e340(a1);
}

__int64 cuda_driver_c3c20(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  struct {
    int v4;
    char gap12_[4];
    __int64 v5;
  } v4_;

  if (*(_DWORD*)((char*)((_UNKNOWN*)0xA4LL) + (_QWORD)CudaDriverData_1432140) !=
      0) {
    v4_.v4 = 24;
    if (a1 != 0) {
      v1 = a1;
      if (*(_BYTE*)(a1 + 415) != 0) {
        v1 = *(_QWORD*)(*(_QWORD*)(a1 + 424) + 96LL);
      }
    }
    else {
      v1 = 0;
    }
    v2 = a1;
    v4_.v5 = v1;
    cuda_driver_20b420(2u, 0x29u, (__int64)&v4_.v4);
    a1 = v2;
  }
  return cuda_driver_c36c0(a1);
}

__int64 cuda_driver_c4540(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  __int64 v4;
  _BYTE* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v14;
  struct {
    _QWORD v16[2];
    int v17;
    char gap28_[4];
    __int64 v18;
  } v16_;

  v4 = *(unsigned int*)(a1 + 1036);
  if ((_DWORD)v4 != 0) {
    v8 = *(_BYTE**)(a1 + 1000);
    while (1) {
      CudaDriverRoutine_1ba4f0(
          (__int64)v16_.v16,
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v8 + 1200LL) + 72LL));
      v12 = *(_QWORD*)v8;
      if (v8[8] != 0 && *(_DWORD*)(v12 + 4) == 0) {
        v16_.v17 = 1;
        v9 = v16_.v16;
        *(_DWORD*)v16_.v18 = 1;
        *(_OWORD*)(v16_.v18 + 8) = *(_OWORD*)(v12 + 760);
        v10 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 1200));
        if (v10 != v16_.v16[1]) {
          goto LABEL_4;
        }
      LABEL_9:
        CudaDriverRoutine_1ba580((__int64)v16_.v16);
        v8 += 16;
        if (--v4 == 0) {
          goto LABEL_13;
        }
      }
      else {
        v9 = *(_QWORD**)(v12 + 992);
        if (CudaDriverRoutine_98340(*(_QWORD*)(a1 + 1200)) == v9[1]) {
          goto LABEL_9;
        }
      LABEL_4:
        v11 = cuda_driver_1bc0e0(a4, (__int64)v9, nullptr);
        CudaDriverRoutine_1ba580((__int64)v16_.v16);
        if (v11 != 0) {
          return v11;
        }
        v8 += 16;
        if (--v4 == 0) {
          goto LABEL_13;
        }
      }
    }
  }
  if (CudaDriverRoutine_98340(*(_QWORD*)(a1 + 1200)) == *(_QWORD*)(a2 + 8) ||
      (v14 = cuda_driver_1bc0e0(a4, a2, nullptr)) == 0) {
  LABEL_13:
    if (a3 == 0 ||
        CudaDriverRoutine_98340(*(_QWORD*)(a1 + 1200)) == *(_QWORD*)(a3 + 8)) {
      return 0;
    }
    return (unsigned int)cuda_driver_1bc0e0(a4, a3, nullptr);
  }
  return v14;
}

void cuda_driver_c61e0(__int64 a1, _QWORD* a2, __int64 a3)
{
  _QWORD* v5;
  unsigned __int64 v6;
  int v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 (*v24)(void);
  int v25[50];
  __int64 v26;
  __int64 v27;

  v5 = (_QWORD*)a1;
  if (*(_DWORD*)a3 == 0) {
    v6 = a2[19];
    CudaDriverRoutine_1ba4f0((__int64)v25, *(_QWORD*)(a1 + 72));
    v7 = CudaDriverStub_112f50(v25, v5[95]);
    *(_DWORD*)a3 = v7;
    if (v7 == 0) {
      *(_DWORD*)a3 = CudaDriverRoutine_1bb6a0(v6, (unsigned __int64)v25);
    }
    a1 = CudaDriverRoutine_1ba580((__int64)v25);
    v8 = a2[19];
    v9 = *(_DWORD*)a3;
    v10 = *(unsigned __int8*)(a3 + 24);
    v11 = *(_QWORD*)(a3 + 16);
    v26 = 0;
    v27 = 0;
    if (v9 == 0 && (*(_BYTE*)(v11 + 415) != 0 || *(_BYTE*)(v11 + 416) != 0)) {
      a1 = CudaDriverRoutine_98340(*(_QWORD*)(*(_QWORD*)(v11 + 448) + 1200LL));
      if ((_QWORD*)a1 == v5 && *(_BYTE*)(v11 + 410) != 0 && v10 != 0) {
        v12 = a2[20];
        if (*(_BYTE*)(v11 + 415) != 0) {
          *(_DWORD*)a3 =
              CudaDriverRoutine_114a80(a2[20], *(_QWORD*)(a3 + 8), 0);
        }
        CudaDriverStub_107f90_alt1(v12 + 592);
        CudaDriverRoutine_1bb6a0(*(_QWORD*)(v12 + 584), v8);
        CudaDriverStub_108070_alt1(v12 + 592);
        CudaDriverRoutine_205fa0(0, v12, (__int64)&v27, &v26);
        v13 = CudaDriverRoutine_ddbe0(v27, (__int64)v5, *(_QWORD*)(v11 + 424),
                                      *(_QWORD*)(v11 + 432), 0);
        v27 =
            CudaDriverRoutine_ddbe0(v13, (__int64)v5, *(_QWORD*)(v11 + 432), 0,
                                    *(_QWORD*)(*(_QWORD*)(v11 + 448) + 752LL));
        CudaDriverRoutine_206060(v12, v27);
        CudaDriverRoutine_1ba4f0((__int64)v25, v5[9]);
        v14 = CudaDriverStub_112f50(v25, v12);
        *(_DWORD*)a3 = v14;
        if (v14 == 0) {
          *(_DWORD*)a3 = CudaDriverRoutine_1bb6a0(v8, (unsigned __int64)v25);
        }
        a1 = CudaDriverRoutine_1ba580((__int64)v25);
      }
    }
  }
  CudaDriverRoutine_c6620(a1, (__int64)a2, a3);
  if (*(_DWORD*)a3 == 0) {
    v15 = CudaDriverRoutine_98340((__int64)v5);
    v16 = CudaDriverRoutine_98340((__int64)v5);
    CudaDriverRoutine_9bed0(v15, *(_QWORD*)(v16 + 96));
    if (*(_DWORD*)a3 == 0) {
      v17 = (_QWORD*)a2[54];
      if (v17 != nullptr) {
        v18 = *(_QWORD*)(a3 + 8);
        v26 = 0;
        v27 = 0;
        if (CudaDriverStub_12d100(v17) != 0) {
          v19 = 0;
          v20 = 0;
          do {
            if ((*(_BYTE*)(CudaDriverRoutine_12cff0(v17, v20) + 4) & 1) != 0) {
              v21 = v27;
              if (v27 == 0) {
                v22 = CudaDriverRoutine_114a80(a2[20], v18, 0);
                *(_DWORD*)a3 = v22;
                if (v22 != 0) {
                  return;
                }
                CudaDriverRoutine_205fa0(0, a2[20], (__int64)&v27, &v26);
                v21 = v27;
              }
              v23 = v26;
              v24 = *(__int64 (**)(void))(v5[8] + 19248LL);
              *(_QWORD*)v25 = v21;
              *(_QWORD*)v25 = v24();
              if ((unsigned __int8)CudaDriverStub_5a690(v23, v25[0]) == 0) {
                CudaDriverStub_5ab60(v23, v25);
              }
              v27 = *(_QWORD*)v25;
            }
            ++v20;
            v19 += 4;
          } while (v20 < CudaDriverStub_12d100(a2[54]));
          if (v27 != 0) {
            CudaDriverRoutine_206060(a2[20], v27);
            *(_DWORD*)a3 = CudaDriverRoutine_114a80(v18, a2[20], 1);
          }
        }
      }
    }
  }
}

__int64 cuda_driver_c64e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  bool v7;
  int v8;
  struct {
    _QWORD v10[4];
    __int64 v11;
  } v10_;

  if (*(_DWORD*)((char*)((_UNKNOWN*)0x64LL) + (_QWORD)CudaDriverData_14321c8) !=
      0) {
    memset(v10_.v10, 0, sizeof(v10_.v10));
    LODWORD(v10_.v10[0]) = 40;
    if (result != 0) {
      v2 = result;
      if (*(_BYTE*)(result + 415) != 0) {
        v2 = *(_QWORD*)(*(_QWORD*)(result + 424) + 96LL);
      }
    }
    else {
      v2 = 0;
    }
    v10_.v10[1] = v2;
    v3 = *(_QWORD*)(result + 352);
    v10_.v11 = a2;
    v4 = *(_QWORD*)(v3 + 8);
    v10_.v10[2] = v4;
    v5 = *(_DWORD*)(v4 + 4);
    BYTE5(v10_.v10[3]) = *(_BYTE*)(v4 + 1392);
    LODWORD(v10_.v10[3]) = v5;
    if (v5 > 0xD || ((1 << v5) & 0x2060) == 0) {
      v8 = *(unsigned __int8*)(v4 + 1412);
      v7 = v5 == 0 || v8 == 0;
    }
    else {
      v7 = false;
    }
    BYTE6(v10_.v10[3]) = v7;
    return cuda_driver_20b420(0x13u, 0x19u, (__int64)v10_.v10);
  }
  return result;
}

__int64 cuda_driver_c7900(__int64 result, _BYTE* a2, __int64* a3)
{
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v8;
  void* v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 i;
  __int64 j;
  __int64 v15;
  __int128 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 k;
  __int64 m;
  __int64 v24;
  __int128 v25;
  __int64 v26;
  __int64 v27;

  v3 = *(_QWORD*)(result + 488);
  if (v3 != 0) {
    v4 = *(_BYTE*)(v3 + 678);
    v5 = result + 488;
    v8 = result;
    v9 = CudaDriverData_1422118;
    v10 = *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                     (_QWORD)CudaDriverData_1422118) >= 2u &&
          *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) +
                     (_QWORD)CudaDriverData_1422118) == 0;
    if (v10 || (_BYTE)(result = cuda_driver_1968d0(
                           (__int64)a2, *a3,
                           (*(_DWORD*)(result + 504) << 8) + 1160, 0)) != 0) {
      v12 = v8 + 488;
      v11 = *(_QWORD*)(v8 + 488);
      for (i = *(_QWORD*)(*(_QWORD*)(v12 + 8) + 736LL); v11 != i;
           v11 = *(_QWORD*)(v11 + 736)) {
        for (j = *(_QWORD*)(v11 + 728); j != 0; j = *(_QWORD*)(j + 48)) {
          v19 = *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v9) >= 2u &&
                *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v9) == 0;
          if (v19 && (unsigned __int8)cuda_driver_1968d0((__int64)a2, *a3, 1280,
                                                         0) == 0) {
            CudaDriverRoutine_5aa50((__int64)a2, a3, 0x18000u);
          }
          if (v4 != 0) {
            cuda_driver_5aba0((__int64)a2, a3, 128);
          }
          CudaDriverRoutine_5aeb0((__int64)a2, a3, j + 144, 0);
          v20 = *(_QWORD*)(j + 56);
          v4 = *(_DWORD*)(v20 + 4) != 0 || *(_BYTE*)(v20 + 672) == 0;
          result = CudaDriverRoutine_5b8d0((__int64)(a2 + 33736));
          v15 = *(_QWORD*)(j + 56);
          *(_DWORD*)(j + 144) = 1;
          *(_QWORD*)(j + 152) = a2;
          *(_QWORD*)(j + 160) = result;
          *(_DWORD*)(*(_QWORD*)(v15 + 992) + 16LL) = 1;
          v16 = *(_OWORD*)(j + 160);
          v17 = *(_QWORD*)(j + 176);
          v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(j + 56) + 992LL) + 24LL);
          *(_OWORD*)v18 = *(_OWORD*)(j + 144);
          *(_OWORD*)(v18 + 16) = v16;
          *(_QWORD*)(v18 + 32) = v17;
        }
      }
    }
    else {
      a2[34153] = 1;
      cuda_driver_5aba0((__int64)a2, a3, 128);
      result = (*(__int64 (**)(_QWORD))(
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 8LL) + 64LL) + 18896LL))(*a3);
      *a3 = result;
      v21 = *(_QWORD*)(v8 + 488);
      for (k = *(_QWORD*)(*(_QWORD*)(v8 + 496) + 736LL); v21 != k;
           v21 = *(_QWORD*)(v21 + 736)) {
        for (m = *(_QWORD*)(v21 + 728); m != 0; m = *(_QWORD*)(m + 48)) {
          result = CudaDriverRoutine_5b8d0((__int64)(a2 + 33736));
          v24 = *(_QWORD*)(m + 56);
          *(_DWORD*)(m + 144) = 1;
          *(_QWORD*)(m + 152) = a2;
          *(_QWORD*)(m + 160) = result;
          *(_DWORD*)(*(_QWORD*)(v24 + 992) + 16LL) = 1;
          v25 = *(_OWORD*)(m + 160);
          v26 = *(_QWORD*)(m + 176);
          v27 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(m + 56) + 992LL) + 24LL);
          *(_OWORD*)v27 = *(_OWORD*)(m + 144);
          *(_OWORD*)(v27 + 16) = v25;
          *(_QWORD*)(v27 + 32) = v26;
        }
      }
    }
    *(_QWORD*)v5 = 0;
    *(_QWORD*)(v5 + 8) = 0;
    *(_DWORD*)(v5 + 16) = 0;
  }
  return result;
}

__int64 cuda_driver_c8660(_DWORD* a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  const char* v10;
  int v11;
  int v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  bool v16;
  int v17;
  __int64 v18;
  const char* v19;
  _DWORD* v20;
  __int64 v21;
  const char* v22;
  const char* v23;
  int v24;
  char* v25;
  const char* v26;
  const char* v27;
  _DWORD* v28;
  int v29;
  __int64 v30;
  const char* v31;
  int v32;
  _DWORD* v33;
  __int64 v34;
  bool v35;
  _DWORD* v36;
  __int64 v37;
  const char* v38;
  int v39;
  unsigned __int64 v40;
  __int64 v41;
  bool v42;
  const char* v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  __int64 v47;
  bool v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  bool v52;
  _DWORD* v53;
  __int64 v54;
  __int64 v55;
  const char* v56;
  char* v57;
  __int64 v58;
  __int64 v59;
  bool v60;
  _DWORD* v61;
  unsigned int* v62;
  __int64 v63;
  const char* v64;
  __int64 v65;
  bool v66;
  _DWORD* v67;
  unsigned int v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  const char* v72;
  unsigned int v73;
  __int64 v74;
  int v75;
  int v76;
  const char* v77;
  char* v78;
  const char* v79;
  __int64 v80;
  const char* v81;
  _DWORD* v82;
  __int64 v83;
  const char* v84;
  _DWORD* v85;
  unsigned int v86;
  const char* v87;
  unsigned int v88;
  const char* v89;
  int v90;
  char* v91;
  __int64 v92;
  int v93;
  char* v94;
  char* v95;
  int v96;
  const char* v97;
  int v98;
  __int64 v99;
  const char* v100;
  __int64 v101;
  bool v102;
  char* v103;
  __int64 v104;
  bool v105;
  int v106;
  int v107;
  unsigned int v108;
  __int64 v109;
  char* v110;
  unsigned int v111;
  const char* v112;
  unsigned int v113;
  const char* v114;
  unsigned int v115;
  const char* v116;
  int v117;
  int v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  unsigned int v122;
  const char* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  int* v130;
  int v131;
  const char* v132;
  unsigned int v133;
  const char* v134;
  void* v135;
  int v136;
  int v137;
  unsigned int v138;
  __int64 v139;
  _DWORD* v140;
  __int64 v141;
  __int64 v142;
  const char* v143;
  __int64 v144;
  const char* v145;
  int v146;
  int v147;
  unsigned int v148;
  int v149;
  int v150;
  unsigned int v151;
  _DWORD* v152;
  unsigned int v153;
  const char* v154;
  int v155;
  __int64 v156;
  unsigned __int64 v157;
  int v158;
  _DWORD* v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  int v168;
  int v169;
  const char* v170;
  __int64 v171;
  unsigned __int64 v172;
  const char* v173;
  __int64 v174;
  int v175;
  const char* v176;
  __int64 v177;
  int v178;
  int v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v193;
  __int64 v194;
  const char* v195;
  char* v196;
  unsigned __int64 v197;
  unsigned __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  int v203;
  const char* v204;
  __int64 v205;
  char* v206;
  const char* v207;
  int v208;
  __int64 v209;
  __int64 v210;
  const char* v211;
  __int64 v212;
  __int64 v213;
  char* v214;

  fprintf_plt(a2, "\"graph_%u_node_%u\"", **((_DWORD**)a1 + 3), *a1);
  fputc_plt(91, a2);
  switch (a1[1]) {
  case 0:
    if (*((_BYTE*)a1 + 673) == 0) {
      if (*((_BYTE*)a1 + 1412) != 0) {
        v43 = "style=\"bold,filled\" fillcolor=\"#afafaf\" ";
        v44 = 40;
      }
      else {
        v43 = "style=\"bold\" ";
        v44 = 13;
      }
      fwrite_plt(v43, v44, 1, a2);
      v98 = a3 & 0x401;
      if ((a3 & 0x201) != 0) {
        fwrite_plt("shape=\"record\" label=\"{", 23, 1, a2);
        v99 = (unsigned int)a1[1];
        if ((unsigned int)v99 > 0xD) {
          v100 = "GRAPH_NODE_TYPE invalid";
        }
        else {
          v100 = CudaDriverData_1411b90[v99];
        }
        if (*((_BYTE*)a1 + 1412) != 0) {
          v103 = "(Disabled)";
        }
        else {
          v103 = "";
        }
        fprintf_plt(a2, "%s%s\n", v100, v103);
        fwrite_plt("| {ID | ", 8, 1, a2);
        fprintf_plt(a2, "%u", *a1);
        if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
          v104 = *((_QWORD*)a1 + 139);
          if (v104 == 0) {
          LABEL_280:
            fwrite_plt(" | ", 3, 1, a2);
            fputs_plt(*(_QWORD*)(*((_QWORD*)a1 + 4) + 8LL), a2);
            if ((a3 & 5) != 0) {
              fwrite_plt("\\<\\<\\<", 6, 1, a2);
              v106 = a1[10];
              v107 = a1[11];
              v108 = a1[12];
              if ((v108 | v107) > 1) {
                fprintf_plt(a2, "\\{%u,%u", v106, v107);
                if (v108 >= 2) {
                  fprintf_plt(a2, ",%u", v108);
                }
                fwrite_plt("\\}", 2, 1, a2);
              }
              else {
                fprintf_plt(a2, "%u", v106);
              }
              fputc_plt(44, a2);
              v136 = a1[13];
              v137 = a1[14];
              v138 = a1[15];
              if ((v138 | v137) > 1) {
                fprintf_plt(a2, "\\{%u,%u", v136, v137);
                if (v138 >= 2) {
                  fprintf_plt(a2, ",%u", v138);
                }
                fwrite_plt("\\}", 2, 1, a2);
              }
              else {
                fprintf_plt(a2, "%u", v136);
              }
              fprintf_plt(a2, ",%u", a1[16]);
              fwrite_plt("\\>\\>\\>", 6, 1, a2);
            }
            fwrite_plt("}\n", 2, 1, a2);
            if (v98 != 0) {
              v139 = 0;
              if (CudaDriverData_1434758 != 0) {
                v140 = nullptr;
              }
              else {
                v140 = a1;
              }
              if (CudaDriverData_1434758 == 0) {
                v139 = *((_QWORD*)a1 + 4);
              }
              fprintf_plt(
                  a2,
                  "| {{node handle | func handle} | {0x%016lX | 0x%016lX}}\n",
                  v140, v139);
            }
            fwrite_plt("| ", 2, 1, a2);
            fwrite_plt("{accessPolicyWindow | ", 22, 1, a2);
            fwrite_plt(
                "{base_ptr | num_bytes | hitRatio | hitProp | missProp} | ", 57,
                1, a2);
            if (CudaDriverData_1434758 != 0) {
              v141 = 0;
            }
            else {
              v141 = *((_QWORD*)a1 + 107);
            }
            v142 = (unsigned int)a1[219];
            if ((unsigned int)v142 > 2) {
              v143 = "ACCESS_PROPERTY invalid";
            }
            else {
              v143 = (const char*)*(&CudaDriverData_1411af0 + v142);
            }
            v144 = (unsigned int)a1[220];
            if ((unsigned int)v144 > 2) {
              v145 = "ACCESS_PROPERTY invalid";
            }
            else {
              v145 = (const char*)*(&CudaDriverData_1411af0 + v144);
            }
            fprintf_plt(a2, "{0x%016lX | %zu | %f | %s | %s}}\n", v141,
                        *((_QWORD*)a1 + 108), *((float*)a1 + 218), v143, v145);
            fprintf_plt(a2, "| {cooperative | %d}\n", a1[222]);
            fprintf_plt(a2, "| {priority | %d}\n", a1[239]);
            goto LABEL_513;
          }
          fprintf_plt(a2, " -\\> graph_%u:%u", **(_DWORD**)(v104 + 24),
                      *(_DWORD*)v104);
          v105 = *(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2;
        }
        else {
          v105 = false;
        }
        if ((a3 & 0x4001) != 0 && !v105) {
          fprintf_plt(a2, " (topoId: %u)", a1[352]);
        }
        goto LABEL_280;
      }
      fwrite_plt("shape=\"octagon\" label=\"", 23, 1, a2);
      fprintf_plt(a2, "%u", *a1);
      if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
        v101 = *((_QWORD*)a1 + 139);
        if (v101 == 0) {
          goto LABEL_382;
        }
        fprintf_plt(a2, " -\\> graph_%u:%u", **(_DWORD**)(v101 + 24),
                    *(_DWORD*)v101);
        v102 = *(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2;
      }
      else {
        v102 = false;
      }
      if ((a3 & 0x4000) != 0 && !v102) {
        fprintf_plt(a2, " (topoId: %u)", a1[352]);
      }
    LABEL_382:
      fputc_plt(10, a2);
      fprintf_plt(a2, "%s\n", *(const char**)(*((_QWORD*)a1 + 4) + 8LL));
      if ((a3 & 5) != 0) {
        fwrite_plt("\\<\\<\\<", 6, 1, a2);
        v146 = a1[10];
        v147 = a1[11];
        v148 = a1[12];
        if ((v148 | v147) > 1) {
          fprintf_plt(a2, "\\{%u,%u", v146, v147);
          if (v148 >= 2) {
            fprintf_plt(a2, ",%u", v148);
          }
          fwrite_plt("\\}", 2, 1, a2);
        }
        else {
          fprintf_plt(a2, "%u", v146);
        }
        fputc_plt(44, a2);
        v149 = a1[13];
        v150 = a1[14];
        v151 = a1[15];
        if ((v151 | v150) > 1) {
          fprintf_plt(a2, "\\{%u,%u", v149, v150);
          if (v151 >= 2) {
            fprintf_plt(a2, ",%u", v151);
          }
          fwrite_plt("\\}", 2, 1, a2);
        }
        else {
          fprintf_plt(a2, "%u", v149);
        }
        fprintf_plt(a2, ",%u", a1[16]);
        fwrite_plt("\\>\\>\\>", 6, 1, a2);
      }
      if (v98 != 0) {
        if (CudaDriverData_1434758 != 0) {
          v152 = nullptr;
        }
        else {
          v152 = a1;
        }
        fprintf_plt(a2, "node handle: 0x%016lX\n", v152);
        v28 = nullptr;
        if (CudaDriverData_1434758 == 0) {
          v28 = *((_DWORD**)a1 + 4);
        }
        v27 = "func handle: 0x%016lX\n";
      LABEL_401:
        fprintf_plt(a2, v27, v28);
      }
      goto LABEL_402;
    }
    CudaDriverRoutine_cad90((__int64)a1, a2, 0, "NULL");
    return fwrite_plt("];\n\n", 4, 1, a2);
  case 1:
    if (*((_BYTE*)a1 + 1412) != 0) {
      fwrite_plt("style=\"solid,filled\" fillcolor=\"#afafaf\" ", 41, 1, a2);
      v17 = a3 & 0x401;
      if ((a3 & 9) != 0) {
        goto LABEL_26;
      }
    }
    else {
      fwrite_plt("style=\"solid\" ", 14, 1, a2);
      v17 = a3 & 0x401;
      if ((a3 & 9) != 0) {
      LABEL_26:
        fwrite_plt("shape=\"record\" ", 15, 1, a2);
        fwrite_plt("label=\"{\n", 9, 1, a2);
        v18 = (unsigned int)a1[1];
        if ((unsigned int)v18 > 0xD) {
          v19 = "GRAPH_NODE_TYPE invalid";
        }
        else {
          v19 = CudaDriverData_1411b90[v18];
        }
        if (*((_BYTE*)a1 + 1412) != 0) {
          v57 = "(Disabled)";
        }
        else {
          v57 = "";
        }
        fprintf_plt(a2, "%s%s\n", v19, v57);
        fwrite_plt("| {{ID", 6, 1, a2);
        if (v17 != 0) {
          fwrite_plt(" | node handle", 14, 1, a2);
        }
        if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
          v58 = *((_QWORD*)a1 + 139);
          if (v58 != 0) {
            fprintf_plt(a2, " | graph_%u:%u", **(_DWORD**)(v58 + 24),
                        *(_DWORD*)v58);
          }
        }
        fwrite_plt("} | {", 5, 1, a2);
        fprintf_plt(a2, "%u", *a1);
        if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
          v59 = *((_QWORD*)a1 + 139);
          if (v59 == 0) {
            goto LABEL_151;
          }
          fprintf_plt(a2, " -\\> graph_%u:%u", **(_DWORD**)(v59 + 24),
                      *(_DWORD*)v59);
          v60 = *(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2;
        }
        else {
          v60 = false;
        }
        if ((a3 & 0x4001) != 0 && !v60) {
          fprintf_plt(a2, " (topoId: %u)", a1[352]);
        }
      LABEL_151:
        if (v17 != 0) {
          if (CudaDriverData_1434758 != 0) {
            v61 = nullptr;
          }
          else {
            v61 = a1;
          }
          fprintf_plt(a2, " | 0x%016lX", v61);
        }
        if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
          v62 = *((unsigned int**)a1 + 139);
          if (v62 != nullptr) {
            v63 = v62[1];
            if ((unsigned int)v63 > 0xD) {
              v64 = "GRAPH_NODE_TYPE invalid";
            }
            else {
              v64 = CudaDriverData_1411b90[v63];
            }
            v111 = v62[142] - 1;
            if (v111 > 3) {
              v112 = "MEMORYTYPE invalid";
            }
            else {
              v112 = (const char*)*(&CudaDriverData_1411b40 + v111);
            }
            v113 = v62[164] - 1;
            if (v113 > 3) {
              v114 = "MEMORYTYPE invalid";
            }
            else {
              v114 = (const char*)*(&CudaDriverData_1411b40 + v113);
            }
            fprintf_plt(a2, " | %s (%sto%s)", v64, v112, v114);
          }
        }
        fwrite_plt("}}\n", 3, 1, a2);
        if ((a3 & 2) == 0) {
          fwrite_plt("| {{src | dst} | ", 17, 1, a2);
          fwrite_plt("{ MemoryType | Array | Host | Device | XInBytes | Y | Z "
                     "| Pitch | Height | LOD | MemoryType | Array | Host"
                     " | Device | XInBytes | Y | Z | Pitch | Height | LOD} | ",
                     161, 1, a2);
          fputc_plt(123, a2);
          v115 = a1[142] - 1;
          if (v115 > 3) {
            v116 = "MEMORYTYPE invalid";
          }
          else {
            v116 = (const char*)*(&CudaDriverData_1411b20 + v115);
          }
          fprintf_plt(a2, "%s (", v116);
          CudaDriverRoutine_cb720(a1 + 10, a2);
          fputc_plt(41, a2);
          if (CudaDriverData_1434758 != 0) {
            v119 = 0;
            v120 = 0;
            v121 = 0;
          }
          else {
            v120 = *((_QWORD*)a1 + 74);
            v119 = *((_QWORD*)a1 + 72);
            v121 = *((_QWORD*)a1 + 73);
          }
          fprintf_plt(a2,
                      " | 0x%016lX | 0x%016lX | 0x%016lX | %zu | %zu | %zu | "
                      "%zu | %zu | %zu | ",
                      v120, v119, v121, *((_QWORD*)a1 + 67),
                      *((_QWORD*)a1 + 68), *((_QWORD*)a1 + 69),
                      *((_QWORD*)a1 + 76), *((_QWORD*)a1 + 77),
                      *((_QWORD*)a1 + 70));
          v122 = a1[164] - 1;
          if (v122 > 3) {
            v123 = "MEMORYTYPE invalid";
          }
          else {
            v123 = (const char*)*(&CudaDriverData_1411b20 + v122);
          }
          fprintf_plt(a2, "%s (", v123);
          CudaDriverRoutine_cb720(a1 + 60, a2);
          fputc_plt(41, a2);
          if (CudaDriverData_1434758 != 0) {
            v124 = 0;
            v125 = 0;
            v126 = 0;
          }
          else {
            v125 = *((_QWORD*)a1 + 85);
            v124 = *((_QWORD*)a1 + 83);
            v126 = *((_QWORD*)a1 + 84);
          }
          fprintf_plt(a2,
                      " | 0x%016lX | 0x%016lX | 0x%016lX | %zu | %zu | %zu | "
                      "%zu | %zu | %zu}",
                      v125, v124, v126, *((_QWORD*)a1 + 78),
                      *((_QWORD*)a1 + 79), *((_QWORD*)a1 + 80),
                      *((_QWORD*)a1 + 87), *((_QWORD*)a1 + 88),
                      *((_QWORD*)a1 + 81));
          fwrite_plt("}\n", 2, 1, a2);
          fwrite_plt("| {Extent | ", 12, 1, a2);
          fwrite_plt("{WidthInBytes | Height | Depth} | ", 34, 1, a2);
          fprintf_plt(a2, "{%zu | %zu | %zu}", *((_QWORD*)a1 + 89),
                      *((_QWORD*)a1 + 90), *((_QWORD*)a1 + 91));
          v110 = "}\n";
        LABEL_314:
          v127 = 2;
        LABEL_315:
          fwrite_plt(v110, v127, 1, a2);
        LABEL_513:
          fwrite_plt("}\"", 2, 1, a2);
          return fwrite_plt("];\n\n", 4, 1, a2);
        }
        fwrite_plt("| {kind | ", 10, 1, a2);
        v117 = a1[142];
        if (v117 == 4 || (v118 = a1[164]) == 4) {
          fwrite_plt("default ", 8, 1, a2);
        }
        else {
          v133 = v117 - 1;
          if (v133 > 2) {
            v134 = "MEMORYTYPE invalid";
          }
          else {
            v134 = (const char*)*(&CudaDriverData_1411b08 + v133);
          }
          v153 = v118 - 1;
          if (v153 > 2) {
            v154 = "MEMORYTYPE invalid";
          }
          else {
            v154 = (const char*)*(&CudaDriverData_1411b08 + v153);
          }
          fprintf_plt(a2, "%sto%s ", v134, v154);
        }
        fputc_plt(40, a2);
        CudaDriverRoutine_cb720(a1 + 10, a2);
        fwrite_plt(" to ", 4, 1, a2);
        CudaDriverRoutine_cb720(a1 + 60, a2);
        fwrite_plt(")}\n", 3, 1, a2);
        v155 = a1[142];
        if (v155 == 3) {
          v156 = *((_QWORD*)a1 + 74);
          if (v156 != 0) {
            v157 = *(unsigned int*)(v156 + 108);
          }
          else {
            v157 = 1;
          }
          v159 = a1 + 164;
          if (a1[164] != 3) {
            if (CudaDriverData_1434758 != 0) {
              v166 = 0;
            }
            else {
              v166 = *((_QWORD*)a1 + 74);
            }
            fprintf_plt(a2, "| {srcArray | 0x%016lX}\n", v166);
            goto LABEL_499;
          }
        }
        else {
          v158 = a1[164];
          if (v158 != 3) {
            if (CudaDriverData_1434758 != 0) {
              v160 = *((_QWORD*)a1 + 77);
              v161 = *((_QWORD*)a1 + 87);
              v162 = 0;
              v163 = 0;
            }
            else {
              if (v155 == 1) {
                v162 = *((_QWORD*)a1 + 72);
              }
              else {
                v162 = *((_QWORD*)a1 + 73);
              }
              v160 = *((_QWORD*)a1 + 77);
              v161 = *((_QWORD*)a1 + 87);
              if (v158 == 1) {
                v163 = *((_QWORD*)a1 + 83);
              }
              else {
                v163 = *((_QWORD*)a1 + 84);
              }
            }
            fprintf_plt(a2,
                        "| {{srcPtr | dstPtr} | {pitch | ptr | xsize | ysize | "
                        "pitch | ptr | xsize | ysize} | {%zu | 0x%016lX | 0"
                        " | %zu | %zu | 0x%016lX | 0 | %zu}}\n",
                        *((_QWORD*)a1 + 76), v162, v160, v161, v163,
                        *((_QWORD*)a1 + 88));
            v157 = 1;
            goto LABEL_512;
          }
          v159 = a1 + 164;
          v157 = 1;
        }
        v164 = *((_QWORD*)a1 + 85);
        if (v164 != 0) {
          v157 = *(unsigned int*)(v164 + 108);
        }
        if (v155 == 3) {
          if (CudaDriverData_1434758 != 0) {
            v165 = 0;
            v164 = 0;
          }
          else {
            v165 = *((_QWORD*)a1 + 74);
          }
          fprintf_plt(a2, "| {{srcArray | dstArray} | {0x%016lX | 0x%016lX}}\n",
                      v165, v164);
        LABEL_512:
          fprintf_plt(
              a2,
              "| {{srcPos | {{x | %zu} | {y | %zu} | {z | %zu}}} | {dstPos | "
              "{{x | %zu} | {y | %zu} | {z | %zu}}} | {Exte"
              "nt | {{Width | %zu} | {Height | %zu} | {Depth | %zu}}}}\n",
              *((_QWORD*)a1 + 67) / v157, *((_QWORD*)a1 + 68),
              *((_QWORD*)a1 + 69), *((_QWORD*)a1 + 78) / v157,
              *((_QWORD*)a1 + 79), *((_QWORD*)a1 + 80),
              *((_QWORD*)a1 + 89) / v157, *((_QWORD*)a1 + 90),
              *((_QWORD*)a1 + 91));
          goto LABEL_513;
        }
        if (CudaDriverData_1434758 != 0) {
          v167 = 0;
        }
        else if (v155 == 1) {
          v167 = *((_QWORD*)a1 + 72);
        }
        else {
          v167 = *((_QWORD*)a1 + 73);
        }
        fprintf_plt(a2,
                    "| {srcPtr | {pitch | ptr | xsize | ysize} | {%zu | "
                    "0x%016lX | 0 | %zu}}\n",
                    *((_QWORD*)a1 + 76), v167, *((_QWORD*)a1 + 77));
      LABEL_499:
        if (*v159 == 3) {
          if (CudaDriverData_1434758 != 0) {
            v190 = 0;
          }
          else {
            v190 = *((_QWORD*)a1 + 85);
          }
          fprintf_plt(a2, "| {dstArray | 0x%016lX}\n", v190);
        }
        else {
          if (CudaDriverData_1434758 != 0) {
            v191 = 0;
          }
          else if (*v159 == 1) {
            v191 = *((_QWORD*)a1 + 83);
          }
          else {
            v191 = *((_QWORD*)a1 + 84);
          }
          fprintf_plt(a2,
                      "| {dstPtr | {pitch | ptr | xsize | ysize} | {%zu | "
                      "0x%016lX | 0 | %zu}}\n",
                      *((_QWORD*)a1 + 87), v191, *((_QWORD*)a1 + 88));
        }
        goto LABEL_512;
      }
    }
    fprintf_plt(a2, "shape=\"%s\"", "trapezium");
    fwrite_plt("label=\"", 7, 1, a2);
    fprintf_plt(a2, "%u", *a1);
    if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
      v45 = *((_QWORD*)a1 + 139);
      if (v45 == 0) {
      LABEL_213:
        fputc_plt(10, a2);
        v83 = (unsigned int)a1[1];
        if ((unsigned int)v83 > 0xD) {
          v84 = "GRAPH_NODE_TYPE invalid";
        }
        else {
          v84 = CudaDriverData_1411b90[v83];
        }
        fprintf_plt(a2, "%s\n", v84);
        if (v17 != 0) {
          if (CudaDriverData_1434758 != 0) {
            v85 = nullptr;
          }
          else {
            v85 = a1;
          }
          fprintf_plt(a2, "node handle: 0x%016lX\n", v85);
        }
        v86 = a1[142] - 1;
        if (v86 > 3) {
          v87 = "MEMORYTYPE invalid";
        }
        else {
          v87 = (const char*)*(&CudaDriverData_1411b40 + v86);
        }
        v88 = a1[164] - 1;
        if (v88 > 3) {
          v89 = "MEMORYTYPE invalid";
        }
        else {
          v89 = (const char*)*(&CudaDriverData_1411b40 + v88);
        }
        fprintf_plt(a2, "(%sto%s,%zu)\n", v87, v89,
                    *((_QWORD*)a1 + 90) * *((_QWORD*)a1 + 89) *
                        *((_QWORD*)a1 + 91));
        goto LABEL_402;
      }
      fprintf_plt(a2, " -\\> graph_%u:%u", **(_DWORD**)(v45 + 24),
                  *(_DWORD*)v45);
      v46 = *(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2;
    }
    else {
      v46 = false;
    }
    if ((a3 & 0x4000) != 0 && !v46) {
      fprintf_plt(a2, " (topoId: %u)", a1[352]);
    }
    goto LABEL_213;
  case 2:
    if (*((_BYTE*)a1 + 1412) != 0) {
      fwrite_plt("style=\"solid,filled\" fillcolor=\"#afafaf\" ", 41, 1, a2);
      v12 = a3 & 0x401;
      if ((a3 & 0x11) != 0) {
        goto LABEL_15;
      }
    }
    else {
      fwrite_plt("style=\"solid\" ", 14, 1, a2);
      v12 = a3 & 0x401;
      if ((a3 & 0x11) != 0) {
      LABEL_15:
        if (*((_BYTE*)a1 + 1412) == 0) {
          fwrite_plt("style=\"solid\" ", 14, 1, a2);
        }
        fwrite_plt("shape=\"record\" label=\"{", 23, 1, a2);
        v13 = (unsigned int)a1[1];
        if ((unsigned int)v13 > 0xD) {
          v14 = "GRAPH_NODE_TYPE invalid";
        }
        else {
          v14 = CudaDriverData_1411b90[v13];
        }
        if (*((_BYTE*)a1 + 1412) != 0) {
          v49 = "(Disabled)";
        }
        else {
          v49 = "";
        }
        fprintf_plt(a2, "%s%s\n", v14, v49);
        fwrite_plt("| {{ID", 6, 1, a2);
        if (v12 != 0) {
          fwrite_plt(" | node handle", 14, 1, a2);
        }
        if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
          v50 = *((_QWORD*)a1 + 139);
          if (v50 != 0) {
            fprintf_plt(a2, " | graph_%u:%u", **(_DWORD**)(v50 + 24),
                        *(_DWORD*)v50);
          }
        }
        fwrite_plt(" | dptr | pitch | value | elementSize | width | height", 54,
                   1, a2);
        fputc_plt(125, a2);
        fwrite_plt(" | {", 4, 1, a2);
        fprintf_plt(a2, "%u", *a1);
        if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
          v51 = *((_QWORD*)a1 + 139);
          if (v51 == 0) {
          LABEL_126:
            if (v12 != 0) {
              if (CudaDriverData_1434758 != 0) {
                v53 = nullptr;
              }
              else {
                v53 = a1;
              }
              fprintf_plt(a2, " | 0x%016lX", v53);
            }
            if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
              v54 = *((_QWORD*)a1 + 139);
              if (v54 != 0) {
                v55 = *(unsigned int*)(v54 + 4);
                if ((unsigned int)v55 > 0xD) {
                  v56 = "GRAPH_NODE_TYPE invalid";
                }
                else {
                  v56 = CudaDriverData_1411b90[v55];
                }
                fprintf_plt(a2, " | %s", v56);
              }
            }
            if (CudaDriverData_1434758 != 0) {
              v109 = 0;
            }
            else {
              v109 = *((_QWORD*)a1 + 5);
            }
            fprintf_plt(a2, " | 0x%016lX | %llu | %u | %u | %llu | %llu", v109,
                        *((_QWORD*)a1 + 8), a1[12], a1[13], *((_QWORD*)a1 + 7),
                        *((_QWORD*)a1 + 9));
            v110 = "}}";
            goto LABEL_314;
          }
          fprintf_plt(a2, " -\\> graph_%u:%u", **(_DWORD**)(v51 + 24),
                      *(_DWORD*)v51);
          v52 = *(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2;
        }
        else {
          v52 = false;
        }
        if ((a3 & 0x4001) != 0 && !v52) {
          fprintf_plt(a2, " (topoId: %u)", a1[352]);
        }
        goto LABEL_126;
      }
    }
    fwrite_plt("shape=\"invtrapezium\"", 20, 1, a2);
    fwrite_plt("label=\"", 7, 1, a2);
    fprintf_plt(a2, "%u", *a1);
    if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
      v41 = *((_QWORD*)a1 + 139);
      if (v41 == 0) {
      LABEL_200:
        fputc_plt(10, a2);
        v80 = (unsigned int)a1[1];
        if ((unsigned int)v80 > 0xD) {
          v81 = "GRAPH_NODE_TYPE invalid";
        }
        else {
          v81 = CudaDriverData_1411b90[v80];
        }
        fprintf_plt(a2, "%s\n", v81);
        if (v12 != 0) {
          if (CudaDriverData_1434758 != 0) {
            v82 = nullptr;
          }
          else {
            v82 = a1;
          }
          fprintf_plt(a2, "node handle: 0x%016lX\n", v82);
        }
        fprintf_plt(a2, "(%u,%llu)\n", a1[12],
                    *((_QWORD*)a1 + 9) * *((_QWORD*)a1 + 7) *
                        (unsigned int)a1[13]);
        goto LABEL_402;
      }
      fprintf_plt(a2, " -\\> graph_%u:%u", **(_DWORD**)(v41 + 24),
                  *(_DWORD*)v41);
      v42 = *(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2;
    }
    else {
      v42 = false;
    }
    if ((a3 & 0x4000) != 0 && !v42) {
      fprintf_plt(a2, " (topoId: %u)", a1[352]);
    }
    goto LABEL_200;
  case 3:
    fwrite_plt("style=\"solid\" shape=\"rectangle\" label=\"", 39, 1, a2);
    fprintf_plt(a2, "%u", *a1);
    if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
      v15 = *((_QWORD*)a1 + 139);
      if (v15 == 0) {
        goto LABEL_54;
      }
      fprintf_plt(a2, " -\\> graph_%u:%u", **(_DWORD**)(v15 + 24),
                  *(_DWORD*)v15);
      v16 = *(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2;
    }
    else {
      v16 = false;
    }
    if ((a3 & 0x4001) != 0 && !v16) {
      fprintf_plt(a2, " (topoId: %u)", a1[352]);
    }
  LABEL_54:
    v29 = a3 & 0x401;
    fputc_plt(10, a2);
    v30 = (unsigned int)a1[1];
    if ((unsigned int)v30 > 0xD) {
      v31 = "GRAPH_NODE_TYPE invalid";
    }
    else {
      v31 = CudaDriverData_1411b90[v30];
    }
    v32 = a3 & 0x21;
    fprintf_plt(a2, "%s\n", v31);
    if (v29 != 0) {
      if (CudaDriverData_1434758 != 0) {
        v33 = nullptr;
      }
      else {
        v33 = a1;
      }
      fprintf_plt(a2, "node handle: 0x%016lX\n", v33);
    }
    if (v32 != 0) {
      if (CudaDriverData_1434758 != 0) {
        fprintf_plt(a2, "fn: 0x%016lX\n", 0);
        if (CudaDriverData_1434758 != 0) {
        LABEL_65:
          fprintf_plt(a2, "userData: 0x%016lX\n", 0);
          goto LABEL_402;
        }
      }
      else {
        fprintf_plt(a2, "fn: 0x%016lX\n", *((_QWORD*)a1 + 4));
        if (CudaDriverData_1434758 != 0) {
          goto LABEL_65;
        }
      }
      fprintf_plt(a2, "userData: 0x%016lX\n", *((_QWORD*)a1 + 5));
    }
  LABEL_402:
    fputc_plt(34, a2);
    return fwrite_plt("];\n\n", 4, 1, a2);
  case 4:
    fwrite_plt("style=\"solid\" shape=\"rectangle\" label=\"", 39, 1, a2);
    fprintf_plt(a2, "%u", *a1);
    if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
      v7 = *((_QWORD*)a1 + 139);
      if (v7 == 0) {
        goto LABEL_46;
      }
      fprintf_plt(a2, " -\\> graph_%u:%u", **(_DWORD**)(v7 + 24), *(_DWORD*)v7);
      v8 = *(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2;
    }
    else {
      v8 = false;
    }
    if ((a3 & 0x4001) != 0 && !v8) {
      fprintf_plt(a2, " (topoId: %u)", a1[352]);
    }
  LABEL_46:
    fputc_plt(10, a2);
    fprintf_plt(a2, "graph_%u", **((_DWORD**)a1 + 6));
    fputc_plt(10, a2);
    if ((a3 & 0x401) == 0) {
      goto LABEL_402;
    }
    v27 = "node handle: 0x%016lX\n";
    if (CudaDriverData_1434758 != 0) {
      v28 = nullptr;
    }
    else {
      v28 = a1;
    }
    goto LABEL_401;
  case 5:
    v23 = "EMPTY";
    goto LABEL_104;
  case 6:
  case 7:
    CudaDriverRoutine_caed0((__int64)a1, a2, a3);
    return fwrite_plt("];\n\n", 4, 1, a2);
  case 8:
    v11 = 129;
    goto LABEL_41;
  case 9:
    v11 = 257;
  LABEL_41:
    cuda_driver_cb060((__int64)a1, a2, (a3 & v11) != 0, a3);
    return fwrite_plt("];\n\n", 4, 1, a2);
  case 0xA:
    if ((a3 & 0x801) == 0) {
      v23 = "MEM_ALLOC";
      goto LABEL_104;
    }
    CudaDriverRoutine_cb870(a1, a3, a2);
    fwrite_plt(
        "| {{{poolProps | {allocType | handleTypes | {location | {type | id}}}",
        69, 1, a2);
    v24 = a1[8];
    if (v24 != 0) {
      v25 = "Allocation type invalid";
      if (v24 == 1) {
        v25 = "PINNED";
      }
      if (v24 == 0x7FFFFFFF) {
        v26 = "MAX";
      }
      else {
        v26 = v25;
      }
    }
    else {
      v26 = "INVALID";
    }
    fprintf_plt(a2, " | {%s | ", v26);
    v90 = a1[9];
    if (v90 == 0x7FFFFFFF) {
      v91 = "MAX";
      v92 = 3;
    LABEL_233:
      fwrite_plt(v91, v92, 1, a2);
      goto LABEL_249;
    }
    if ((v90 & 1) != 0) {
      v93 = 1;
      fwrite_plt("POSIX", 5, 1, a2);
    }
    else {
      v93 = 0;
    }
    if ((v90 & 2) != 0) {
      if ((v90 & 1) != 0) {
        v94 = ", ";
      }
      else {
        v94 = "";
      }
      fprintf_plt(a2, "%sWIN32", v94);
      v93 = 1;
    }
    if ((v90 & 4) != 0) {
      if (v93 != 0) {
        v95 = ", ";
      }
      else {
        v95 = "";
      }
      fprintf_plt(a2, "%sWIN32KMT", v95);
    }
    else if (v90 == 0) {
      v91 = "NONE";
      v92 = 4;
      goto LABEL_233;
    }
  LABEL_249:
    v96 = a1[10];
    if (v96 > 2) {
      if (v96 == 3) {
        v97 = "HOST_NUMA";
        goto LABEL_321;
      }
      if (v96 != 4) {
        if (v96 == 0x7FFFFFFF) {
          v97 = "MAX";
          goto LABEL_321;
        }
        goto LABEL_318;
      }
      v97 = "HOST_NUMA_CURRENT";
    }
    else {
      if (v96 == 0) {
        v97 = "INVALID";
        goto LABEL_321;
      }
      if (v96 != 1) {
        if (v96 == 2) {
          v97 = "HOST";
          goto LABEL_321;
        }
      LABEL_318:
        v97 = "Location type invalid";
        goto LABEL_321;
      }
      v97 = "DEVICE";
    }
  LABEL_321:
    fprintf_plt(a2, " | %s | %u}}}}\n", v97, a1[11]);
    if (*((_QWORD*)a1 + 16) == 0) {
    LABEL_475:
      if (CudaDriverData_1434758 != 0) {
        v186 = 0;
      }
      else {
        v186 = *((_QWORD*)a1 + 18);
      }
      fprintf_plt(a2, "| {{bytesize | dptr} | {%zu | 0x%016lX}}\n",
                  *((_QWORD*)a1 + 17), v186);
      goto LABEL_513;
    }
    fwrite_plt("| {{", 4, 1, a2);
    if (*((_QWORD*)a1 + 16) != 0) {
      fprintf_plt(a2, "%saccessDescs[%zu]", "", 0);
      if (*((_QWORD*)a1 + 16) >= 2u) {
        v128 = 1;
        do {
          fprintf_plt(a2, "%saccessDescs[%zu]", " | ", v128++);
        } while (v128 < *((_QWORD*)a1 + 16));
      }
    }
    fwrite_plt("} | {", 5, 1, a2);
    if (*((_QWORD*)a1 + 16) != 0) {
      fprintf_plt(a2, "%s{location | {type | id}} | flags", "");
      if (*((_QWORD*)a1 + 16) >= 2u) {
        v129 = 1;
        do {
          fprintf_plt(a2, "%s{location | {type | id}} | flags", " | ");
          ++v129;
        } while (v129 < *((_QWORD*)a1 + 16));
      }
    }
    fwrite_plt("} | {", 5, 1, a2);
    if (*((_QWORD*)a1 + 16) == 0) {
    LABEL_474:
      fwrite_plt("}}\n", 3, 1, a2);
      goto LABEL_475;
    }
    v130 = *((int**)a1 + 15);
    v131 = *v130;
    if (*v130 > 2) {
      if (v131 == 3) {
        v132 = "HOST_NUMA";
        goto LABEL_433;
      }
      if (v131 != 4) {
        if (v131 == 0x7FFFFFFF) {
          v132 = "MAX";
          goto LABEL_433;
        }
        goto LABEL_430;
      }
      v132 = "HOST_NUMA_CURRENT";
    }
    else {
      if (v131 == 0) {
        v132 = "INVALID";
        goto LABEL_433;
      }
      if (v131 != 1) {
        if (v131 == 2) {
          v132 = "HOST";
          goto LABEL_433;
        }
      LABEL_430:
        v132 = "Location type invalid";
        goto LABEL_433;
      }
      v132 = "DEVICE";
    }
  LABEL_433:
    v168 = v130[1];
    v169 = v130[2];
    if (v169 > 2) {
      if (v169 != 3) {
        if (v169 == 0x7FFFFFFF) {
          v170 = "MAX";
          goto LABEL_443;
        }
        goto LABEL_440;
      }
      v170 = "READWRITE";
    }
    else {
      if (v169 != 0) {
        if (v169 == 1) {
          v170 = "READ";
          goto LABEL_443;
        }
      LABEL_440:
        v170 = "Access flags invalid";
        goto LABEL_443;
      }
      v170 = "NONE";
    }
  LABEL_443:
    fprintf_plt(a2, "%s%s | %u | %s", "", v132, v168, v170);
    if (*((_QWORD*)a1 + 16) >= 2u) {
      v171 = 0;
      v172 = 1;
      while (1) {
        v174 = *((_QWORD*)a1 + 15);
        v175 = *(_DWORD*)(v174 + v171 + 12);
        if (v175 > 2) {
          if (v175 == 3) {
            v176 = "HOST_NUMA";
            v182 = v174 + v171;
            v178 = *(_DWORD*)(v182 + 16);
            v179 = *(_DWORD*)(v182 + 20);
            if (v179 <= 2) {
              goto LABEL_464;
            }
            goto LABEL_459;
          }
          if (v175 != 4) {
            if (v175 == 0x7FFFFFFF) {
              v176 = "MAX";
              v180 = v174 + v171;
              v178 = *(_DWORD*)(v180 + 16);
              v179 = *(_DWORD*)(v180 + 20);
              if (v179 <= 2) {
                goto LABEL_464;
              }
              goto LABEL_459;
            }
            goto LABEL_468;
          }
          v176 = "HOST_NUMA_CURRENT";
          v185 = v174 + v171;
          v178 = *(_DWORD*)(v185 + 16);
          v179 = *(_DWORD*)(v185 + 20);
          if (v179 <= 2) {
          LABEL_464:
            if (v179 == 0) {
              v173 = "NONE";
              goto LABEL_446;
            }
            if (v179 == 1) {
              v173 = "READ";
              goto LABEL_446;
            }
            goto LABEL_445;
          }
        }
        else {
          if (v175 == 0) {
            v176 = "INVALID";
            v181 = v174 + v171;
            v178 = *(_DWORD*)(v181 + 16);
            v179 = *(_DWORD*)(v181 + 20);
            if (v179 <= 2) {
              goto LABEL_464;
            }
            goto LABEL_459;
          }
          if (v175 != 1) {
            if (v175 == 2) {
              v176 = "HOST";
              v177 = v174 + v171;
              v178 = *(_DWORD*)(v177 + 16);
              v179 = *(_DWORD*)(v177 + 20);
              if (v179 <= 2) {
                goto LABEL_464;
              }
              goto LABEL_459;
            }
          LABEL_468:
            v176 = "Location type invalid";
            v183 = v174 + v171;
            v178 = *(_DWORD*)(v183 + 16);
            v179 = *(_DWORD*)(v183 + 20);
            if (v179 <= 2) {
              goto LABEL_464;
            }
            goto LABEL_459;
          }
          v176 = "DEVICE";
          v184 = v174 + v171;
          v178 = *(_DWORD*)(v184 + 16);
          v179 = *(_DWORD*)(v184 + 20);
          if (v179 <= 2) {
            goto LABEL_464;
          }
        }
      LABEL_459:
        if (v179 == 3) {
          v173 = "READWRITE";
          goto LABEL_446;
        }
        if (v179 == 0x7FFFFFFF) {
          v173 = "MAX";
          goto LABEL_446;
        }
      LABEL_445:
        v173 = "Access flags invalid";
      LABEL_446:
        fprintf_plt(a2, "%s%s | %u | %s", " | ", v176, v178, v173);
        ++v172;
        v171 += 12;
        if (v172 >= *((_QWORD*)a1 + 16)) {
          goto LABEL_474;
        }
      }
    }
    goto LABEL_474;
  case 0xB:
    if ((a3 & 0x1001) == 0) {
      v23 = "MEM_FREE";
      goto LABEL_104;
    }
    CudaDriverRoutine_cb870(a1, a3, a2);
    if (CudaDriverData_1434758 != 0) {
      v6 = 0;
    }
    else {
      v6 = *((_QWORD*)a1 + 4);
    }
    fprintf_plt(a2, "| {{dptr} | {0x%016lX}}\n", v6);
    goto LABEL_513;
  case 0xC:
    if ((a3 & 0x2001) == 0) {
      v23 = "BATCH_MEM_OP";
    LABEL_104:
      CudaDriverRoutine_cad90((__int64)a1, a2, a3, v23);
      return fwrite_plt("];\n\n", 4, 1, a2);
    }
    fwrite_plt("style=\"solid\" shape=\"record\" label=\"{\n", 38, 1, a2);
    v9 = (unsigned int)a1[1];
    if ((unsigned int)v9 > 0xD) {
      v10 = "GRAPH_NODE_TYPE invalid";
    }
    else {
      v10 = CudaDriverData_1411b90[v9];
    }
    fprintf_plt(a2, "%s\n", v10);
    fwrite_plt("| {{ID", 6, 1, a2);
    if ((a3 & 0x401) != 0) {
      fwrite_plt(" | node handle", 14, 1, a2);
      fwrite_plt(" | count | flags } | {", 22, 1, a2);
      fprintf_plt(a2, "%u", *a1);
      if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
        v47 = *((_QWORD*)a1 + 139);
        if (v47 == 0) {
        LABEL_171:
          if (CudaDriverData_1434758 != 0) {
            v67 = nullptr;
          }
          else {
            v67 = a1;
          }
          fprintf_plt(a2, " | 0x%016lX", v67);
          goto LABEL_175;
        }
        fprintf_plt(a2, " -\\> graph_%u:%u", **(_DWORD**)(v47 + 24),
                    *(_DWORD*)v47);
        v48 = *(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2;
      }
      else {
        v48 = false;
      }
      if ((a3 & 0x4001) != 0 && !v48) {
        fprintf_plt(a2, " (topoId: %u)", a1[352]);
      }
      goto LABEL_171;
    }
    fwrite_plt(" | count | flags } | {", 22, 1, a2);
    fprintf_plt(a2, "%u", *a1);
    if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
      v65 = *((_QWORD*)a1 + 139);
      if (v65 == 0) {
        goto LABEL_175;
      }
      fprintf_plt(a2, " -\\> graph_%u:%u", **(_DWORD**)(v65 + 24),
                  *(_DWORD*)v65);
      v66 = *(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2;
    }
    else {
      v66 = false;
    }
    if ((a3 & 0x4000) != 0 && !v66) {
      fprintf_plt(a2, " (topoId: %u)", a1[352]);
    }
  LABEL_175:
    fprintf_plt(a2, " | %d | 0x%08x }}\n", a1[10], a1[14]);
    if (a1[10] == 0) {
      goto LABEL_513;
    }
    fwrite_plt("| {{", 4, 1, a2);
    v68 = **((_DWORD**)a1 + 6) - 1;
    if (v68 > 5) {
      fprintf_plt(a2, "{paramArray[%d]}", 0);
    }
    else {
      fprintf_plt(a2, CudaDriverData_1411b60[v68], 0);
    }
    if (a1[10] == 1) {
      fwrite_plt("}\n", 2, 1, a2);
    }
    else {
      fputc_plt(10, a2);
    }
    LODWORD(v69) = a1[10];
    if ((unsigned int)v69 >= 2) {
      v70 = 1;
      v71 = 48;
      do {
        while (1) {
          fwrite_plt("| ", 2, 1, a2);
          v72 = "{paramArray[%d]}";
          v73 = *(_DWORD*)(*((_QWORD*)a1 + 6) + v71) - 1;
          if (v73 <= 5) {
            v72 = CudaDriverData_1411b60[v73];
          }
          fprintf_plt(a2, v72, (unsigned int)v70);
          if (v70 == a1[10] - 1) {
            break;
          }
          fputc_plt(10, a2);
          v69 = (unsigned int)a1[10];
          ++v70;
          v71 += 48;
          if (v70 >= v69) {
            goto LABEL_189;
          }
        }
        fwrite_plt("}\n", 2, 1, a2);
        v69 = (unsigned int)a1[10];
        ++v70;
        v71 += 48;
      } while (v70 < v69);
    }
  LABEL_189:
    if ((_DWORD)v69 == 0) {
      goto LABEL_513;
    }
    fwrite_plt("| {", 3, 1, a2);
    if (a1[10] == 0) {
      goto LABEL_513;
    }
    v74 = *((_QWORD*)a1 + 6);
    v75 = *(_DWORD*)v74;
    if (*(int*)v74 > 3) {
      if (v75 != 4) {
        if (v75 != 5) {
          if (v75 == 6) {
            v76 = *(_DWORD*)(v74 + 4);
            v77 = "INVALID FLAGS";
            v79 = "BARRIER | %s";
            if (v76 == 1) {
              v77 = "GPU ";
            }
            v78 = "SYS";
            goto LABEL_348;
          }
          goto LABEL_489;
        }
        if (CudaDriverData_1434758 != 0) {
          v189 = 0;
        }
        else {
          v189 = *(_QWORD*)(v74 + 8);
        }
        v193 = *(_QWORD*)(v74 + 16);
        v194 = a2;
        v195 = "WRITE_VALUE_64 | 0x%016lX | 0x%016lu | %s";
        if (*(_DWORD*)(v74 + 24) != 0) {
          v196 = "INVALID_FLAGS";
        }
        else {
          v196 = "DEFAULT";
        }
      LABEL_528:
        fprintf_plt(v194, v195, v189, v193, v196);
        goto LABEL_529;
      }
      if (CudaDriverData_1434758 != 0) {
        v188 = 0;
      }
      else {
        v188 = *(_QWORD*)(v74 + 8);
      }
      fprintf_plt(a2, "WAIT_VALUE_64 | 0x%016lX | 0x%016lu | ", v188,
                  *(_QWORD*)(v74 + 16));
    }
    else {
      if (v75 != 1) {
        if (v75 != 2) {
          if (v75 == 3) {
            v76 = *(_DWORD*)(v74 + 4);
            v77 = "INVALID FLAGS";
            v78 = "DEFAULT";
            v79 = "FLUSH_REMOTE_WRITES | %s";
          LABEL_348:
            if (v76 != 0) {
              v135 = (void*)v77;
            }
            else {
              v135 = v78;
            }
            fprintf_plt(a2, v79, v135);
            goto LABEL_529;
          }
        LABEL_489:
          fwrite_plt("{INVALID OPERATION}", 19, 1, a2);
        LABEL_529:
          LODWORD(v197) = a1[10];
          if ((unsigned int)v197 < 2) {
          LABEL_571:
            if ((_DWORD)v197 == 0) {
              goto LABEL_513;
            }
            v110 = "}}\n";
            v127 = 3;
            goto LABEL_315;
          }
          v198 = 1;
          v199 = 0;
          while (1) {
            v202 = *((_QWORD*)a1 + 6);
            fwrite_plt("\n| ", 3, 1, a2);
            v203 = *(_DWORD*)(v202 + v199 + 48);
            if (v203 > 3) {
              if (v203 != 4) {
                if (v203 == 5) {
                  if (CudaDriverData_1434758 != 0) {
                    v210 = 0;
                  }
                  else {
                    v210 = *(_QWORD*)(v202 + v199 + 56);
                  }
                  v211 = "WRITE_VALUE_64 | 0x%016lX | 0x%016lu | %s";
                  v212 = a2;
                  v213 = *(_QWORD*)(v202 + v199 + 64);
                  if (*(_DWORD*)(v202 + v199 + 72) != 0) {
                    v214 = "INVALID_FLAGS";
                  }
                  else {
                    v214 = "DEFAULT";
                  }
                  goto LABEL_566;
                }
                if (v203 != 6) {
                LABEL_554:
                  fwrite_plt("{INVALID OPERATION}", 19, 1, a2);
                  goto LABEL_535;
                }
                v207 = "GPU ";
                v204 = "BARRIER | %s";
                v205 = a2;
                v208 = *(_DWORD*)(v202 + v199 + 52);
                if (v208 != 1) {
                  v207 = "INVALID FLAGS";
                }
                if (v208 != 0) {
                  v206 = (char*)v207;
                }
                else {
                  v206 = "SYS";
                }
                goto LABEL_543;
              }
              if (CudaDriverData_1434758 != 0) {
                v209 = 0;
              }
              else {
                v209 = *(_QWORD*)(v202 + v199 + 56);
              }
              v201 = v202 + v199;
              fprintf_plt(a2, "WAIT_VALUE_64 | 0x%016lX | 0x%016lu | ", v209,
                          *(_QWORD*)(v202 + v199 + 64));
            }
            else {
              if (v203 != 1) {
                if (v203 == 2) {
                  if (CudaDriverData_1434758 != 0) {
                    v210 = 0;
                  }
                  else {
                    v210 = *(_QWORD*)(v202 + v199 + 56);
                  }
                  v211 = "WRITE_VALUE_32 | 0x%016lX | 0x%08x | %s";
                  v212 = a2;
                  v213 = *(unsigned int*)(v202 + v199 + 64);
                  if (*(_DWORD*)(v202 + v199 + 72) != 0) {
                    v214 = "INVALID_FLAGS";
                  }
                  else {
                    v214 = "DEFAULT";
                  }
                LABEL_566:
                  fprintf_plt(v212, v211, v210, v213, v214);
                  goto LABEL_535;
                }
                if (v203 != 3) {
                  goto LABEL_554;
                }
                v204 = "FLUSH_REMOTE_WRITES | %s";
                v205 = a2;
                if (*(_DWORD*)(v202 + v199 + 52) != 0) {
                  v206 = "INVALID FLAGS";
                }
                else {
                  v206 = "DEFAULT";
                }
              LABEL_543:
                fprintf_plt(v205, v204, v206);
                goto LABEL_535;
              }
              if (CudaDriverData_1434758 != 0) {
                v200 = 0;
              }
              else {
                v200 = *(_QWORD*)(v202 + v199 + 56);
              }
              v201 = v202 + v199;
              fprintf_plt(a2, "WAIT_VALUE_32 | 0x%016lX | 0x%08x | ", v200,
                          *(_DWORD*)(v202 + v199 + 64));
            }
            CudaDriverRoutine_cbab0(*(_DWORD*)(v201 + 72), a2);
          LABEL_535:
            v197 = (unsigned int)a1[10];
            ++v198;
            v199 += 48;
            if (v198 >= v197) {
              goto LABEL_571;
            }
          }
        }
        if (CudaDriverData_1434758 != 0) {
          v189 = 0;
        }
        else {
          v189 = *(_QWORD*)(v74 + 8);
        }
        v193 = *(unsigned int*)(v74 + 16);
        v194 = a2;
        v195 = "WRITE_VALUE_32 | 0x%016lX | 0x%08x | %s";
        if (*(_DWORD*)(v74 + 24) != 0) {
          v196 = "INVALID_FLAGS";
        }
        else {
          v196 = "DEFAULT";
        }
        goto LABEL_528;
      }
      if (CudaDriverData_1434758 != 0) {
        v187 = 0;
      }
      else {
        v187 = *(_QWORD*)(v74 + 8);
      }
      fprintf_plt(a2, "WAIT_VALUE_32 | 0x%016lX | 0x%08x | ", v187,
                  *(_DWORD*)(v74 + 16));
    }
    CudaDriverRoutine_cbab0(*(_DWORD*)(v74 + 24), a2);
    goto LABEL_529;
  case 0xD:
    v20 = a1;
    if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
      v20 = *((_DWORD**)a1 + 140);
    }
    fwrite_plt("style=\"bold\" shape=\"record\" label=\"{\n", 37, 1, a2);
    v21 = (unsigned int)a1[1];
    if ((unsigned int)v21 > 0xD) {
      v22 = "GRAPH_NODE_TYPE invalid";
    }
    else {
      v22 = CudaDriverData_1411b90[v21];
    }
    fprintf_plt(a2, "%s\n", v22);
    fwrite_plt("| {ID | ", 8, 1, a2);
    fprintf_plt(a2, "%u", *a1);
    if (*(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2) {
      v34 = *((_QWORD*)a1 + 139);
      if (v34 == 0) {
        goto LABEL_74;
      }
      fprintf_plt(a2, " -\\> graph_%u:%u", **(_DWORD**)(v34 + 24),
                  *(_DWORD*)v34);
      v35 = *(_DWORD*)(*((_QWORD*)a1 + 3) + 4LL) == 2;
    }
    else {
      v35 = false;
    }
    if ((a3 & 0x4001) != 0 && !v35) {
      fprintf_plt(a2, " (topoId: %u)", a1[352]);
    }
  LABEL_74:
    fwrite_plt("}\n", 2, 1, a2);
    if ((a3 & 0x401) != 0) {
      if (CudaDriverData_1434758 != 0) {
        v36 = nullptr;
      }
      else {
        v36 = a1;
      }
      fprintf_plt(a2, "| {node handle| 0x%016lX}\n", v36);
    }
    if ((a3 & 1) != 0) {
      fprintf_plt(a2, "| {Conditional Handle|%u}\n", v20[8]);
    }
    v37 = (unsigned int)v20[10];
    if ((unsigned int)v37 > 2) {
      v38 = "INVALID";
    }
    else {
      v38 = (char*)CudaDriverData_1133848 + CudaDriverData_1133848[v37];
    }
    fprintf_plt(a2, "| {Conditional Type| %s}\n", v38);
    v39 = v20[11];
    if (v39 == 1) {
      fprintf_plt(a2, "| {True|graph_%u}\n", ***((unsigned int***)v20 + 6));
    }
    else if (v20[10] != 0) {
      if (v39 != 0) {
        v40 = 0;
        do {
          fprintf_plt(a2, "| {%d|  graph_%u}\n", v40,
                      **(_DWORD**)(*((_QWORD*)v20 + 6) + 8 * v40));
          ++v40;
        } while (v40 < (unsigned int)v20[11]);
      }
    }
    else {
      fprintf_plt(a2, "| {True | graph_%u}\n", ***((_DWORD***)v20 + 6));
      fprintf_plt(a2, "| {False| graph_%u}\n",
                  **(unsigned int**)(*((_QWORD*)v20 + 6) + 8LL));
    }
    fwrite_plt("}\n", 2, 1, a2);
    goto LABEL_402;
  default:
    return fwrite_plt("];\n\n", 4, 1, a2);
  }
}

__int64 cuda_driver_cb060(__int64 a1, __int64 a2, char a3, __int16 a4)
{
  _QWORD* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  const char* v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  int v19;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64* v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;

  if (a3 != 0) {
    v7 = *(_QWORD**)(a1 + 32);
    v8 = *(unsigned int*)(a1 + 48);
    v9 = a4 & 0x401;
    fwrite_plt("style=\"solid\" shape=\"record\" label=\"{\n", 38, 1, a2);
    v10 = *(unsigned int*)(a1 + 4);
    if ((unsigned int)v10 > 0xD) {
      v11 = "GRAPH_NODE_TYPE invalid";
    }
    else {
      v11 = CudaDriverData_1411b90[v10];
    }
    fprintf_plt(a2, "%s\n", v11);
    fwrite_plt("| {{ID", 6, 1, a2);
    if (v9 == 0) {
      fwrite_plt(" | numExtSems}", 14, 1, a2);
      fwrite_plt(" | {", 4, 1, a2);
      fprintf_plt(a2, "%u", *(_DWORD*)a1);
      if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 4LL) == 2) {
        v16 = *(_QWORD*)(a1 + 1112);
        if (v16 == 0) {
          goto LABEL_22;
        }
        fprintf_plt(a2, " -\\> graph_%u:%u", **(_DWORD**)(v16 + 24),
                    *(_DWORD*)v16);
        v17 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 4LL) == 2;
      }
      else {
        v17 = false;
      }
      if ((a4 & 0x4000) != 0 && !v17) {
        fprintf_plt(a2, " (topoId: %u)", *(_DWORD*)(a1 + 1408));
      }
    LABEL_22:
      fprintf_plt(a2, " | %u}}\n", v8);
      if ((_DWORD)v8 == 0) {
        return fwrite_plt("}\"", 2, 1, a2);
      }
      fwrite_plt("| {{extSemArray[0]", 18, 1, a2);
      if ((_DWORD)v8 != 1) {
        v19 = 1;
        do {
          fprintf_plt(a2, " | extSemArray[%u]", v19++);
        } while ((_DWORD)v8 != v19);
      }
      fputc_plt(125, a2);
      if (CudaDriverData_1434758 != 0) {
        fprintf_plt(a2, " | {0x%016lX", 0);
        if ((_DWORD)v8 == 1) {
        LABEL_28:
          fwrite_plt("}}\n", 3, 1, a2);
          fwrite_plt("| {{paramsArray[0]", 18, 1, a2);
        LABEL_40:
          fputc_plt(125, a2);
          v26 = *(__int64**)(a1 + 40);
          if (*(_DWORD*)(a1 + 4) == 9) {
            fwrite_plt(" | {value | fence | key | timeoutMs | flags", 43, 1,
                       a2);
            if ((_DWORD)v8 != 1) {
              if ((unsigned int)v8 <= 2) {
                v27 = 2;
              }
              else {
                v27 = v8;
              }
              v28 = v27 - 1;
              do {
                fwrite_plt(" | value | fence | key | timeoutMs | flags", 42, 1,
                           a2);
                --v28;
              } while (v28 != 0);
            }
            fputc_plt(125, a2);
            if (CudaDriverData_1434758 != 0) {
              v29 = 0;
              v30 = 0;
              v31 = 0;
              v32 = 0;
            }
            else {
              v30 = *v26;
              v31 = v26[1];
              v29 = v26[2];
              v32 = *((_DWORD*)v26 + 6);
            }
            fprintf_plt(a2, " | {%llu | 0x%016lX | %llu | %u | %u", v30, v31,
                        v29, v32, *((_DWORD*)v26 + 18));
            if ((_DWORD)v8 != 1) {
              v38 = v26 + 18;
              if ((unsigned int)v8 <= 2) {
                v39 = 2;
              }
              else {
                v39 = (unsigned int)v8;
              }
              v40 = v39 - 1;
              do {
                if (CudaDriverData_1434758 != 0) {
                  v43 = 0;
                  v41 = 0;
                  v42 = 0;
                  v44 = 0;
                }
                else {
                  v41 = *v38;
                  v42 = v38[1];
                  v43 = v38[2];
                  v44 = *((_DWORD*)v38 + 6);
                }
                fprintf_plt(a2, " | %llu | 0x%016lX | %llu | %u | %u", v41, v42,
                            v43, v44, *((_DWORD*)v38 + 18));
                v38 += 18;
                --v40;
              } while (v40 != 0);
            }
          }
          else {
            fwrite_plt(" | {value | fence | key | flags", 31, 1, a2);
            if ((_DWORD)v8 != 1) {
              if ((unsigned int)v8 <= 2) {
                v33 = 2;
              }
              else {
                v33 = v8;
              }
              v34 = v33 - 1;
              do {
                fwrite_plt(" | value | fence | key | flags", 30, 1, a2);
                --v34;
              } while (v34 != 0);
            }
            fputc_plt(125, a2);
            if (CudaDriverData_1434758 != 0) {
              v35 = 0;
              v36 = 0;
              v37 = 0;
            }
            else {
              v36 = *v26;
              v35 = v26[1];
              v37 = v26[2];
            }
            fprintf_plt(a2, " | {%llu | 0x%016lX | %llu | %u", v36, v35, v37,
                        *((_DWORD*)v26 + 18));
            if ((_DWORD)v8 != 1) {
              v45 = v26 + 18;
              if ((unsigned int)v8 <= 2) {
                v46 = 2;
              }
              else {
                v46 = (unsigned int)v8;
              }
              v47 = v46 - 1;
              do {
                if (CudaDriverData_1434758 != 0) {
                  v49 = 0;
                  v48 = 0;
                  v50 = 0;
                }
                else {
                  v48 = *v45;
                  v49 = v45[1];
                  v50 = v45[2];
                }
                fprintf_plt(a2, " | %llu | 0x%016lX | %llu | %u", v48, v49, v50,
                            *((_DWORD*)v45 + 18));
                v45 += 18;
                --v47;
              } while (v47 != 0);
            }
          }
          fwrite_plt("}}\n", 3, 1, a2);
          return fwrite_plt("}\"", 2, 1, a2);
        }
      }
      else {
        fprintf_plt(a2, " | {0x%016lX", *v7);
        if ((_DWORD)v8 == 1) {
          goto LABEL_28;
        }
      }
      v21 = v7 + 1;
      v22 = v8 - 1;
      do {
        while (CudaDriverData_1434758 == 0) {
          v23 = *v21++;
          fprintf_plt(a2, " | 0x%016lX", v23);
          if (--v22 == 0) {
            goto LABEL_36;
          }
        }
        fprintf_plt(a2, " | 0x%016lX", 0);
        ++v21;
        --v22;
      } while (v22 != 0);
    LABEL_36:
      v24 = 1;
      fwrite_plt("}}\n", 3, 1, a2);
      fwrite_plt("| {{paramsArray[0]", 18, 1, a2);
      if ((unsigned int)v8 <= 2) {
        v25 = 2;
      }
      else {
        v25 = v8;
      }
      do {
        fprintf_plt(a2, " | paramsArray[%u]", v24++);
      } while (v25 != v24);
      goto LABEL_40;
    }
    fwrite_plt(" | node handle", 14, 1, a2);
    fwrite_plt(" | numExtSems}", 14, 1, a2);
    fwrite_plt(" | {", 4, 1, a2);
    fprintf_plt(a2, "%u", *(_DWORD*)a1);
    if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 4LL) == 2) {
      v14 = *(_QWORD*)(a1 + 1112);
      if (v14 == 0 || (fprintf_plt(a2, " -\\> graph_%u:%u",
                                   **(_DWORD**)(v14 + 24), *(_DWORD*)v14),
                       v15 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 4LL) == 2,
                       (a4 & 0x4001) == 0)) {
      LABEL_18:
        if (CudaDriverData_1434758 != 0) {
          v18 = 0;
        }
        else {
          v18 = a1;
        }
        fprintf_plt(a2, " | 0x%016lX", v18);
        goto LABEL_22;
      }
    }
    else {
      v15 = false;
      if ((a4 & 0x4001) == 0) {
        goto LABEL_18;
      }
    }
    if (!v15) {
      fprintf_plt(a2, " (topoId: %u)", *(_DWORD*)(a1 + 1408));
    }
    goto LABEL_18;
  }
  v12 = *(unsigned int*)(a1 + 4);
  if ((unsigned int)v12 > 0xD) {
    v13 = "GRAPH_NODE_TYPE invalid";
  }
  else {
    v13 = CudaDriverData_1411b90[v12];
  }
  return CudaDriverRoutine_cad90(a1, a2, a4, v13);
}

__int64 cuda_driver_cc140(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  unsigned int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v4 = *(_QWORD*)(a1 + 1240);
  v5 = *(_QWORD*)(a1 + 24);
  v6 = *(_QWORD*)(a1 + 1200);
  v26 = 0;
  result = CudaDriverRoutine_cc3e0(v5, v6, &v26, a2);
  if ((_DWORD)result != 0) {
    return result;
  }
  v8 = *(_DWORD*)(a1 + 1092);
  v9 = v26;
  v10 = 0;
  if (v8 == 0) {
  LABEL_9:
    v25 = 0x200000000000000LL;
    result = cuda_driver_d5f10(a1, v9, &v25, 1);
    if ((_DWORD)result != 0) {
      return result;
    }
    v13 = *(_QWORD*)(a1 + 24);
    if (*(_QWORD*)(v13 + 112) == v9) {
      *(_QWORD*)(v13 + 112) = *(_QWORD*)((char*)((_UNKNOWN*)0x468LL) + v9);
      v13 = *(_QWORD*)(a1 + 24);
      if (*(_QWORD*)(v13 + 104) != v9) {
        goto LABEL_13;
      }
    }
    else if (*(_QWORD*)(v13 + 104) != v9) {
    LABEL_13:
      v14 = *(_QWORD*)((char*)((_UNKNOWN*)0x470LL) + v9);
      *(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x468LL) + v9) + 1136LL) = v14;
      if (v14 == 0) {
        goto LABEL_19;
      }
      v15 = *(_QWORD*)((char*)((_UNKNOWN*)0x468LL) + v9);
      goto LABEL_18;
    }
    *(_QWORD*)(v13 + 104) = *(_QWORD*)((char*)((_UNKNOWN*)0x470LL) + v9);
    v14 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 104LL);
    if (v14 != 0) {
      v15 = 0;
    LABEL_18:
      *(_QWORD*)(v14 + 1128) = v15;
    }
  LABEL_19:
    *(_OWORD*)(v9 + 1128) = (__typeof__(*(_OWORD*)(v9 + 1128))){0};
    v16 = *(_QWORD*)(a1 + 24);
    if (*(_BYTE*)(v16 + 415) != 0 && *(_DWORD*)(a1 + 1036) == 0) {
      v18 = a1;
      do {
        v18 = *(_QWORD*)(v18 + 1136);
      } while (*(_DWORD*)(v18 + 1036) == 0);
      if (v18 == *(_QWORD*)(v16 + 104)) {
        *(_QWORD*)(v16 + 104) = v9;
      }
      *(_QWORD*)((char*)((_UNKNOWN*)0x470LL) + v9) = v18;
      v19 = *(_QWORD*)(v18 + 1128);
      *(_QWORD*)((char*)((_UNKNOWN*)0x468LL) + v9) = v19;
      if (v19 != 0) {
        *(_QWORD*)(v19 + 1136) = v9;
      }
      *(_QWORD*)(v18 + 1128) = v9;
    }
    else {
      if (a1 == *(_QWORD*)(v16 + 112)) {
        *(_QWORD*)(v16 + 112) = v9;
      }
      *(_QWORD*)((char*)((_UNKNOWN*)0x468LL) + v9) = a1;
      v17 = *(_QWORD*)(a1 + 1136);
      *(_QWORD*)((char*)((_UNKNOWN*)0x470LL) + v9) = v17;
      if (v17 != 0) {
        *(_QWORD*)(v17 + 1128) = v9;
      }
      *(_QWORD*)(a1 + 1136) = v9;
    }
    ++*(_DWORD*)(v4 + 36);
    *(_QWORD*)((char*)((_UNKNOWN*)0x4D8LL) + v9) = v4;
    if (a1 == *(_QWORD*)(v4 + 16)) {
      *(_QWORD*)(v4 + 16) = v9;
    }
    *(_QWORD*)((char*)((_UNKNOWN*)0x4F0LL) + v9) = a1;
    v20 = *(_QWORD*)(a1 + 1256);
    *(_QWORD*)((char*)((_UNKNOWN*)0x4E8LL) + v9) = v20;
    if (v20 != 0) {
      *(_QWORD*)(v20 + 1264) = v9;
    }
    v21 = *(_QWORD*)(a1 + 1216);
    *(_QWORD*)(a1 + 1256) = v9;
    if (v21 != 0) {
      *(_QWORD*)((char*)((_UNKNOWN*)0x4C0LL) + v9) = v21;
      v22 = *(unsigned int*)(a1 + 1232);
      *(_DWORD*)((char*)((_UNKNOWN*)0x4D0LL) + v9) = v22;
      *(_QWORD*)((char*)((_UNKNOWN*)0x4C8LL) + v9) =
          *(_QWORD*)(*(_QWORD*)(v21 + 64) + 8 * v22);
      *(_QWORD*)(*(_QWORD*)(v21 + 64) + 8LL * *(unsigned int*)(a1 + 1232)) = v9;
      *((_BYTE*)((_UNKNOWN*)0x180LL) + v9 + 3) = 1;
    }
    *(_DWORD*)(a1 + 1324) = *(_DWORD*)(a1 + 1324) - v10 + 1;
    *(_DWORD*)((char*)((_UNKNOWN*)0x52CLL) + v9) = v10;
    if (*(_BYTE*)(a1 + 1392) != 0) {
      v23 = *(_DWORD*)(a1 + 1092) == 1;
      (*(char (*)[16])0x570LL)[v9] = v23;
      if (v23) {
        v24 = *(_QWORD*)(a1 + 1272);
        *(_QWORD*)((char*)((_UNKNOWN*)0x4F8LL) + v9) = v24;
        ++*(_DWORD*)(v24 + 8);
      }
    }
    else {
      (*(char (*)[16])0x570LL)[v9] = 0;
    }
    return result;
  }
  while (1) {
    --v8;
    while (1) {
      v11 = *(_QWORD*)(a1 + 1056) + 16LL * v8;
      if (*(_BYTE*)(v11 + 15) == 3) {
        break;
      }
      if (--v8 == -1) {
        goto LABEL_9;
      }
    }
    v12 = *(_QWORD*)v11;
    v25 = 0x300000000000000LL;
    result = cuda_driver_d5f10(v9, v12, &v25, 1);
    if ((_DWORD)result != 0) {
      return result;
    }
    CudaDriverRoutine_d5d50(a1, v12);
    ++v10;
    if (v8 == 0) {
      goto LABEL_9;
    }
  }
}

__int64 cuda_driver_cfc10(_QWORD* a1, __int64 a2, __int64 a3, char* a4, char a5)
{
  char v5;
  __int64 v11;
  _QWORD* v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  _QWORD* v16;
  unsigned int v18;
  _DWORD* v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  char v23;
  __int64 i;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned int v33;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned int v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  _QWORD* v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _QWORD* v71;
  __int64 v72;
  __int64* v73;
  __int64 v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v78;
  unsigned __int8* v79;
  int v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  _QWORD* v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  _QWORD* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  _QWORD* v107;
  _QWORD* v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  struct {
    _QWORD* v114;
    __int64 v115;
    __int64 v116;
    _QWORD* v117;
    char gap152_[8];
    char v118;
    char gap161_[7];
    _QWORD* v119;
    char gap176_[8];
    _QWORD* v120;
  } v114_;

  v5 = *a4;
  v112 = 0;
  v11 = CudaDriverRoutine_98340(a3);
  if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_14321c8) != 0) {
    v114_.v115 = v11;
    v114_.v116 = a2;
    LODWORD(v114_.v114) = 24;
    cuda_driver_20b420(0x13u, 1u, (__int64)&v114_.v114);
  }
  if (*(_DWORD*)(a2 + 344) != *(_DWORD*)(a2 + 208)) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"The graph contains unused conditional handles");
    v13 = 5;
    v12 = nullptr;
    *((_QWORD*)a4 + 2) = 0;
  LABEL_10:
    *((_DWORD*)a4 + 6) = v13;
    goto LABEL_11;
  }
  if ((unsigned int)CudaDriverRoutine_d0560(a2, a3, &v112, (__int64)a4) != 0) {
  LABEL_8:
    v12 = nullptr;
    goto LABEL_11;
  }
  if ((v5 & 4) != 0 && v112 == 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Device graphs must contain at least one non-empty node");
    goto LABEL_8;
  }
  v18 = CudaDriverRoutine_d6ca0(&v114_.v114, a2, 2u, 0);
  if (v18 != 0 ||
      (v18 = CudaDriverRoutine_d6ca0(&v113, (__int64)v114_.v114, 3u, 0)) != 0) {
    v14 = v18;
    v12 = nullptr;
    goto LABEL_12;
  }
  v12 = v114_.v114;
  v114_.v114[35] = v113;
  *((_BYTE*)v12 + 415) = (v5 & 4) != 0;
  *((_BYTE*)v12 + 336) = v5 & 1;
  *((_BYTE*)v12 + 409) = (v5 & 8) != 0;
  v19 = CudaDriverRoutine_1a28d0();
  v12[47] = v19;
  if (v19 == nullptr) {
  LABEL_45:
    v14 = 2;
    goto LABEL_12;
  }
  v20 = CudaDriverRoutine_98340(a3);
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x9CLL) + (_QWORD)CudaDriverData_1432140) !=
      0) {
    v114_.v115 = v20;
    v114_.v116 = a2;
    LODWORD(v114_.v114) = 80;
    v114_.v118 = *((_BYTE*)v12 + 415);
    if (v114_.v118 != 0) {
      v21 = nullptr;
    }
    else {
      v21 = v12;
    }
    if (v114_.v118 != 0) {
      v22 = v12;
    }
    else {
      v22 = nullptr;
    }
    v114_.v117 = v21;
    v114_.v119 = v22;
    v114_.v120 = v12 + 59;
    cuda_driver_20b420(2u, 0x27u, (__int64)&v114_.v114);
  }
  v23 = *((_BYTE*)&CudaDriverRoutine_474c + (_QWORD)CudaDriverData_1422118 + 2);
  if (*((_BYTE*)&CudaDriverRoutine_474c + (_QWORD)CudaDriverData_1422118) ==
      0) {
    v23 = a5;
  }
  *((_BYTE*)v12 + 412) = v23;
  for (i = v12[23]; i != 0; i = v12[23]) {
    v25 = *(_QWORD*)(i + 1168);
    v12[23] = v25;
    if (v25 != 0) {
      *(_QWORD*)(v25 + 1160) = 0;
    }
    *(_OWORD*)(i + 1160) = (__typeof__(*(_OWORD*)(i + 1160))){0};
  }
  v26 = v12[13];
  if (v26 == 0) {
  LABEL_41:
    v27 = CudaDriverStub_1a26c0(v12[47]);
    v28 = v27;
    v29 = (_QWORD*)CudaDriverStub_12e330((8 * v27 + 8) & 0x7FFFFFFF8LL);
    if (v29 != nullptr) {
      v30 = v12[47];
      v31 = a1;
      v114_.v114 = v29;
      LODWORD(v114_.v115) = 0;
      v32 = v29;
      CudaDriverRoutine_1a2b00(
          v30, (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_d09d0,
          (__int64)&v114_.v114);
      *((_DWORD*)v12 + 73) = v28;
      v12[37] = v32;
      CudaDriverRoutine_107f40(v12 + 49, 11, 0);
      v33 = cuda_driver_d0a00((__int64)v12);
      if (v33 != 0) {
        goto LABEL_44;
      }
      v33 = CudaDriverRoutine_d0f60((__int64)v12);
      if (v33 != 0) {
        goto LABEL_44;
      }
      if ((unsigned int)CudaDriverRoutine_d15e0((__int64)v12, (__int64)a4) ==
          0) {
        v14 = CudaDriverRoutine_cc780(v12);
        if (v14 != 0) {
          goto LABEL_12;
        }
        *v31 = v12;
        v35 = CudaDriverRoutine_98340(a3);
        cuda_driver_d1b70((__int64)v12, a2, v35);
        v36 = CudaDriverRoutine_98340(a3);
        cuda_driver_d1c40(0, (__int64)v12, a2, v36);
        return v14;
      }
    LABEL_11:
      v14 = 1;
      goto LABEL_12;
    }
    goto LABEL_45;
  }
  while (1) {
    v37 = *(_QWORD*)(v26 + 1136);
    v38 = *(_DWORD*)(v26 + 4);
    v111 = v26;
    v39 = v37;
    if (v38 > 9) {
      if ((unsigned int)(v38 - 10) >= 2) {
        if (v38 == 13 && *(_DWORD*)(v26 + 44) != 0) {
          v52 = 0;
          do {
            CudaDriverRoutine_d27a0((__int64)v12,
                                    *(_QWORD*)(*(_QWORD*)(v26 + 48) + 8 * v52),
                                    v26, v26, v52);
            cuda_driver_c36c0(*(_QWORD*)(*(_QWORD*)(v26 + 48) + 8 * v52));
            *(_QWORD*)(*(_QWORD*)(v26 + 48) + 8 * v52++) = 0;
          } while (v52 < *(unsigned int*)(v26 + 44));
          v39 = *(_QWORD*)(v26 + 1136);
        }
        goto LABEL_51;
      }
      if (*(_DWORD*)((char*)((__int64*)0x18LL) +
                     (_QWORD)CudaDriverData_14321c8 + 4) != 0) {
        goto LABEL_51;
      }
      goto LABEL_58;
    }
    if (v38 == 4) {
      break;
    }
    if (v38 != 5) {
      goto LABEL_51;
    }
  LABEL_58:
    v40 = *(_QWORD*)(v26 + 1216);
    v41 = *(unsigned int*)(v26 + 1036);
    v42 = *(unsigned int*)(v26 + 1092);
    if (v40 != 0 || (unsigned int)v41 < 2) {
      if ((_DWORD)v41 != 0) {
      LABEL_84:
        v57 = *(__int64**)(v26 + 1000);
        v109 = *(_QWORD*)(v26 + 1136);
        if ((_DWORD)v42 == 0) {
          while (1) {
            v62 = *v57;
            v57 += 2;
            if (v62 == v26) {
              break;
            }
            if (--v41 == 0) {
              goto LABEL_94;
            }
          }
        LABEL_145:
          CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                  (__int64)"Graph cycle detected");
          *((_QWORD*)a4 + 2) = *(_QWORD*)(v26 + 1112);
          v13 = 2;
          goto LABEL_10;
        }
        v58 = 0;
        v107 = a1;
        v99 = *(unsigned int*)(v26 + 1092);
        v102 = *(unsigned int*)(v26 + 1036);
        v59 = (_QWORD*)(*(_QWORD*)(v26 + 1056) + 8LL);
        v97 = v59;
        do {
          v60 = &v57[2 * v58];
          v105 = v58;
          if (*v60 == v26) {
            goto LABEL_145;
          }
          v61 = v42;
          do {
            CudaDriverRoutine_c3f90(v59);
            v33 = cuda_driver_d5f10(*v60, *(v59 - 1), v60 + 1, 1);
            if (v33 != 0) {
              goto LABEL_44;
            }
            v59 += 2;
            --v61;
          } while (v61 != 0);
          a1 = v107;
          v58 = v105 + 1;
          v26 = v111;
          v59 = v97;
          v42 = v99;
        } while (v105 + 1 != v102);
        v40 = *(_QWORD*)(v111 + 1216);
      LABEL_94:
        v39 = v109;
      }
      if (v40 != 0) {
        v63 = (__int64*)(*(_QWORD*)(v40 + 64) +
                         8LL * *(unsigned int*)(v26 + 1232));
        v64 = *v63;
        if (*v63 != 0) {
          if (v64 == v26) {
          LABEL_101:
            *v63 = *(_QWORD*)(v26 + 1224);
          }
          else {
            while (1) {
              v65 = v64;
              v64 = *(_QWORD*)(v64 + 1224);
              if (v64 == 0) {
                break;
              }
              if (v64 == v26) {
                v63 = (__int64*)(v65 + 1224);
                goto LABEL_101;
              }
            }
          }
        }
      }
      v50 = v26;
      goto LABEL_103;
    }
    if ((unsigned int)v42 < 2) {
      goto LABEL_84;
    }
    if (v38 != 5) {
      v33 =
          cuda_driver_d8220_alt1(&v114_.v114, *(_QWORD*)(v26 + 24), 0, 0, 0, 0);
      if (v33 != 0) {
        goto LABEL_44;
      }
      v43 = *(unsigned int*)(v26 + 1036);
      if ((_DWORD)v43 != 0) {
        v44 = (_QWORD*)(*(_QWORD*)(v26 + 1000) + 8LL);
        do {
          v33 = cuda_driver_d5f10(*(v44 - 1), (__int64)v114_.v114, v44, 1);
          if (v33 != 0) {
            goto LABEL_44;
          }
          --v43;
          v44 += 2;
        } while (v43 != 0);
      }
      v45 = *(unsigned int*)(v26 + 1092);
      if ((_DWORD)v45 != 0) {
        v46 = (_QWORD*)(*(_QWORD*)(v26 + 1056) + 8LL);
        do {
          v33 = cuda_driver_d5f10((__int64)v114_.v114, *(v46 - 1), v46, 1);
          if (v33 != 0) {
            goto LABEL_44;
          }
          --v45;
          v46 += 2;
        } while (v45 != 0);
      }
      v47 = v114_.v114;
      v48 = v114_.v114[3];
      if (*(_QWORD**)(v48 + 112) == v114_.v114) {
        *(_QWORD*)(v48 + 112) = v114_.v114[141];
      }
      if (*(_QWORD**)(v48 + 104) == v47) {
        v49 = v47[142];
        v50 = v26;
        *(_QWORD*)(v48 + 104) = v49;
        if (v49 != 0) {
          v51 = 0;
        LABEL_139:
          *(_QWORD*)(v49 + 1128) = v51;
        }
      }
      else {
        v49 = v47[142];
        v50 = v26;
        *(_QWORD*)(v47[141] + 1136LL) = v49;
        if (v49 != 0) {
          v51 = v47[141];
          goto LABEL_139;
        }
      }
      *(_OWORD*)(v47 + 141) = (__typeof__(*(_OWORD*)(v47 + 141))){0};
      if (v50 == *(_QWORD*)(v48 + 112)) {
        *(_QWORD*)(v48 + 112) = v47;
      }
      v47[141] = v50;
      v87 = *(_QWORD*)(v50 + 1136);
      v47[142] = v87;
      if (v87 != 0) {
        *(_QWORD*)(v87 + 1128) = v47;
      }
      *(_QWORD*)(v50 + 1136) = v47;
    LABEL_103:
      cuda_driver_c3200(v50, 2);
    }
  LABEL_51:
    v26 = v39;
    if (v39 == 0) {
      v88 = v12[13];
      if (v88 == 0) {
        goto LABEL_41;
      }
      v89 = 0;
      while (1) {
        v33 = CudaDriverRoutine_d06f0(v88, a3);
        if (v33 != 0) {
          goto LABEL_44;
        }
        if (*((_BYTE*)v12 + 415) != 0) {
          if (v12[55] == 0) {
            v90 = *(_QWORD*)(v88 + 1200);
          LABEL_154:
            v12[55] = v90;
          }
        }
        else {
          if (*(_DWORD*)(v88 + 4) != 0 ||
              (*(_BYTE*)(*(_QWORD*)(v88 + 32) + 855LL) & 0x10) == 0) {
            goto LABEL_149;
          }
          *((_BYTE*)v12 + 416) = 1;
          v90 = *(_QWORD*)(v88 + 1200);
          if (v89 == 0) {
            v89 = *(_QWORD*)(v88 + 1200);
            goto LABEL_154;
          }
          if (v89 != v90) {
            CudaDriverRoutine_ed630(
                (__int64)"CUDA", 0,
                (__int64)"Calling device-side cudaGraphLaunch from multiple "
                         "green or device contexts is not supported");
            *((_QWORD*)a4 + 2) = *(_QWORD*)(v88 + 1112);
            v13 = 4;
            goto LABEL_10;
          }
        }
      LABEL_149:
        v88 = *(_QWORD*)(v88 + 1136);
        if (v88 == 0) {
          goto LABEL_41;
        }
      }
    }
  }
  v53 = *(_QWORD*)(v26 + 1216);
  if (v53 != 0) {
    v54 = *(_DWORD*)(v53 + 1232);
    v55 = (__int64)v12;
    v56 = v26;
  }
  else {
    v55 = (__int64)v12;
    v56 = v26;
    v54 = 0;
  }
  CudaDriverRoutine_d27a0(v55, *(_QWORD*)(v26 + 48), v56, v53, v54);
  v66 = *(_QWORD*)(v26 + 1136);
  v67 = *(unsigned int*)(v26 + 1092);
  v68 = *(_QWORD*)(v26 + 1056);
  v96 = *(_QWORD*)(v26 + 1120);
  v98 = *(_QWORD*)(v26 + 1112);
  v69 = *(unsigned int*)(v26 + 1036);
  v70 = *(_QWORD*)(v26 + 1000);
  v110 = v66;
  v106 = v67;
  if (v66 == v37 && (_DWORD)v69 != 0 && (_DWORD)v67 != 0) {
    v71 = (_QWORD*)(v68 + 8);
    v72 = 0;
    v93 = *(_QWORD*)(v26 + 1000);
    v95 = v37;
    v103 = *(unsigned int*)(v26 + 1036);
    v91 = (_QWORD*)(v68 + 8);
    v92 = *(_QWORD*)(v26 + 1056);
    do {
      v100 = v72;
      v73 = (__int64*)(v70 + 16 * v72);
      do {
        CudaDriverRoutine_c3f90(v71);
        v33 = cuda_driver_d5f10(*v73, *(v71 - 1), v73 + 1, 1);
        if (v33 != 0) {
          goto LABEL_44;
        }
        v71 += 2;
        --v67;
      } while (v67 != 0);
      v69 = v103;
      v66 = v110;
      v26 = v111;
      v72 = v100 + 1;
      v70 = v93;
      v37 = v95;
      v67 = v106;
      v71 = v91;
      v68 = v92;
    } while (v100 + 1 != v103);
  }
  v108 = a1;
  if (v66 == v37) {
  LABEL_131:
    v83 = *(_QWORD*)(v26 + 1216);
    a1 = v108;
    v39 = v110;
    if (v83 != 0) {
      v84 =
          (__int64*)(*(_QWORD*)(v83 + 64) + 8LL * *(unsigned int*)(v26 + 1232));
      v85 = *v84;
      if (*v84 != 0) {
        if (v85 == v26) {
        LABEL_49:
          *v84 = *(_QWORD*)(v26 + 1224);
        }
        else {
          while (1) {
            v86 = v85;
            v85 = *(_QWORD*)(v85 + 1224);
            if (v85 == 0) {
              break;
            }
            if (v85 == v26) {
              v84 = (__int64*)(v86 + 1224);
              goto LABEL_49;
            }
          }
        }
      }
    }
    cuda_driver_c3200(v26, 2);
    v33 = CudaDriverStub_1a2960(v12[10], v98, v96);
    if (v33 != 0) {
      goto LABEL_44;
    }
    goto LABEL_51;
  }
  v74 = v110;
  v75 = (_QWORD*)(v70 + 8);
  v94 = (_QWORD*)(v68 + 8);
  v101 = (_QWORD*)(v70 + 8);
  v104 = v69;
  while (1) {
    v76 = v69;
    if (*(_DWORD*)(v74 + 1036) == 0 && (_DWORD)v69 != 0) {
      break;
    }
  LABEL_122:
    v78 = *(unsigned int*)(v74 + 1092);
    v26 = v111;
    if ((_DWORD)v78 != 0) {
      v79 = (unsigned __int8*)(*(_QWORD*)(v74 + 1056) + 10LL);
      while (*(v79 - 2) != 0) {
        v80 = *v79;
        v79 += 16;
        if (v80 == 1) {
          break;
        }
        if (--v78 == 0) {
          goto LABEL_127;
        }
      }
    }
    else {
    LABEL_127:
      v81 = v94;
      v82 = v106;
      if ((_DWORD)v106 != 0) {
        do {
          v33 = cuda_driver_d5f10(v74, *(v81 - 1), v81, 1);
          if (v33 != 0) {
            goto LABEL_44;
          }
          v26 = v111;
          --v82;
          v81 += 2;
        } while (v82 != 0);
      }
    }
    v74 = *(_QWORD*)(v74 + 1136);
    v75 = v101;
    v69 = v104;
    if (v74 == v37) {
      goto LABEL_131;
    }
  }
  while (1) {
    v33 = cuda_driver_d5f10(*(v75 - 1), v74, v75, 1);
    if (v33 != 0) {
      break;
    }
    --v76;
    v75 += 2;
    if (v76 == 0) {
      goto LABEL_122;
    }
  }
LABEL_44:
  v14 = v33;
LABEL_12:
  v15 = CudaDriverRoutine_98340(a3);
  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_14321c8) !=
      0) {
    v114_.v115 = v15;
    v114_.v116 = a2;
    LODWORD(v114_.v114) = 40;
    HIDWORD(v114_.v114) = v14;
    if (v12 != nullptr) {
      v16 = v12;
      if (*((_BYTE*)v12 + 415) != 0) {
        v16 = *(_QWORD**)(v12[53] + 96LL);
      }
    }
    else {
      v16 = nullptr;
    }
    v114_.v117 = v16;
    cuda_driver_20b420(0x13u, 2u, (__int64)&v114_.v114);
  }
  if (v12 != nullptr) {
    cuda_driver_c36c0((__int64)v12);
  }
  return v14;
}

__int64 cuda_driver_d0a00(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  void* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int128 v31;
  __int128 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  unsigned __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  struct {
    _DWORD v51[4];
    __int64 v52;
    __int64 v53;
    unsigned __int64 v54;
  } v51_;

  v1 = *(_QWORD*)(a1 + 120);
  if (v1 != 0) {
    do {
      while (1) {
        if (*(_BYTE*)(a1 + 415) != 0 || *(_QWORD*)(v1 + 1184) != 0) {
          *(_DWORD*)(v1 + 48) = 2;
        }
        v3 = *(_QWORD*)(v1 + 288);
        v4 = CudaDriverRoutine_98340(*(_QWORD*)(v1 + 1168));
        result = CudaDriverRoutine_103e40(v4, a1, (__int64*)(v1 + 8), 0,
                                          *(_DWORD*)v1, (__int64*)(v1 + 56));
        if ((_DWORD)result != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 415) != 0 || *(_QWORD*)(v1 + 1184) != 0) {
          *(_DWORD*)(v1 + 48) = 0;
        }
        if (*(_BYTE*)(v1 + 123) == 0 && *(_BYTE*)(v1 + 124) == 0 &&
            *(_BYTE*)(a1 + 411) == 0) {
          break;
        }
        if (*(_BYTE*)(a1 + 415) != 0 || *(_QWORD*)(v1 + 1184) != 0) {
          return 999;
        }
        v1 = v3;
        if (v3 == 0) {
          return 0;
        }
      }
      v6 = *(_QWORD*)(v1 + 1080);
      *(_BYTE*)(v1 + 125) = 1;
      CudaDriverRoutine_105220(v1 + 56);
      v7 = CudaDriverRoutine_98340(*(_QWORD*)(v1 + 1168));
      v8 = cuda_driver_helpers_1b7b30(v7, v1 + 56, 0);
      if (v8 != 0) {
        v46 = v8;
        v10 = 0;
        goto LABEL_71;
      }
      v9 = CudaDriverRoutine_12e510(*(_QWORD*)(v1 + 128), 8);
      v10 = v9;
      if (v9 == 0) {
        v46 = 2;
        goto LABEL_71;
      }
      v11 = *(_QWORD*)(v1 + 264);
      if (v11 != 0) {
        v12 = 0;
        while (1) {
          CudaDriverRoutine_98340(*(_QWORD*)(v1 + 1168));
          v13 = (__int64*)(v10 + 8LL * v12);
          v14 = cuda_driver_d6360_alt1(v13, *(_QWORD*)(v1 - 8),
                                       v10 + 8LL * (v12 - 1), 0, 0, v12 != 0,
                                       v11, *(_QWORD*)(v1 + 1168), 2u);
          if (v14 != 0) {
            break;
          }
          ++v12;
          *(_BYTE*)(*v13 + 674) = 1;
          v11 = *(_QWORD*)(v11 + 120);
          if (v11 == 0) {
            v50 = v6;
            v15 = *(unsigned int*)(v1 + 1004);
            v16 = *(_QWORD*)(v10 + 8LL * (v12 - 1));
            v49 = v12 - 1;
            if ((_DWORD)v15 != 0) {
              goto LABEL_25;
            }
            goto LABEL_28;
          }
        }
      LABEL_68:
        v46 = v14;
        if (v12 != 0) {
          v47 = 8LL * v12;
          v48 = 0;
          do {
            cuda_driver_c3200(*(_QWORD*)(v10 + v48), 0);
            v48 += 8;
          } while (v47 != v48);
        }
      LABEL_71:
        CudaDriverRoutine_105220(v1 + 56);
        CudaDriverRoutine_12e340(v10);
        return v46;
      }
      v12 = 0;
      v50 = v6;
      v15 = *(unsigned int*)(v1 + 1004);
      v16 = *(_QWORD*)(v9 + 0x7FFFFFFF8LL);
      v49 = -1;
      if ((_DWORD)v15 != 0) {
      LABEL_25:
        v17 = *(_QWORD*)v10;
        v18 = (_QWORD*)(*(_QWORD*)(v1 + 968) + 8LL);
        do {
          v14 = cuda_driver_d5f10(*(v18 - 1), v17, v18, 2);
          if (v14 != 0) {
            goto LABEL_68;
          }
          --v15;
          v18 += 2;
        } while (v15 != 0);
      }
    LABEL_28:
      v19 = *(unsigned int*)(v1 + 1060);
      v20 = CudaDriverData_14225e0;
      if ((_DWORD)v19 != 0) {
        v21 = (_QWORD*)(*(_QWORD*)(v1 + 1024) + 8LL);
        do {
          v14 = cuda_driver_d5f10(v16, *(v21 - 1), v21, 2);
          if (v14 != 0) {
            goto LABEL_68;
          }
          --v19;
          v21 += 2;
        } while (v19 != 0);
      }
      v22 = *(_QWORD*)(v1 - 8);
      v23 = *(_QWORD*)v10;
      v24 = *(_QWORD*)(v10 + 8LL * v49);
      if (*(_QWORD*)(v22 + 112) == v24) {
        *(_QWORD*)(v22 + 112) = *(_QWORD*)(v23 + 1128);
        v22 = *(_QWORD*)(v1 - 8);
        v23 = *(_QWORD*)v10;
        v24 = *(_QWORD*)(v10 + 8LL * v49);
        if (*(_QWORD*)(v22 + 104) != *(_QWORD*)v10) {
        LABEL_34:
          v25 = *(_QWORD*)(v23 + 1128);
          if (v25 == 0) {
            goto LABEL_36;
          }
        LABEL_35:
          *(_QWORD*)(v25 + 1136) = *(_QWORD*)(v24 + 1136);
          v24 = *(_QWORD*)(v10 + 8LL * v49);
          v23 = *(_QWORD*)v10;
          goto LABEL_36;
        }
      }
      else if (*(_QWORD*)(v22 + 104) != v23) {
        goto LABEL_34;
      }
      *(_QWORD*)(v22 + 104) = *(_QWORD*)(v24 + 1136);
      v23 = *(_QWORD*)v10;
      v24 = *(_QWORD*)(v10 + 8LL * v49);
      v25 = *(_QWORD*)(*(_QWORD*)v10 + 1128LL);
      if (v25 != 0) {
        goto LABEL_35;
      }
    LABEL_36:
      v26 = *(_QWORD*)(v24 + 1136);
      if (v26 != 0) {
        *(_QWORD*)(v26 + 1128) = *(_QWORD*)(v23 + 1128);
        v23 = *(_QWORD*)v10;
      }
      *(_QWORD*)(v23 + 1128) = 0;
      v27 = v1 - 32;
      *(_QWORD*)(*(_QWORD*)(v10 + 8LL * v49) + 1136LL) = 0;
      v28 = *(_QWORD*)(v1 - 8);
      if (*(_QWORD*)(v28 + 112) == v1 - 32) {
        *(_QWORD*)(v28 + 112) = *(_QWORD*)(v10 + 8LL * v49);
      }
      *(_QWORD*)(*(_QWORD*)v10 + 1128LL) = v27;
      *(_QWORD*)(*(_QWORD*)(v10 + 8LL * v49) + 1136LL) = *(_QWORD*)(v1 + 1104);
      v29 = *(_QWORD*)(v10 + 8LL * v49);
      v30 = *(_QWORD*)(v29 + 1136);
      if (v30 != 0) {
        *(_QWORD*)(v30 + 1128) = v29;
      }
      *(_QWORD*)(v1 + 1104) = *(_QWORD*)v10;
      *(_QWORD*)(*(_QWORD*)v10 + 800LL) = CudaDriverRoutine_12e510(1, 720);
      **(_DWORD**)v10 = *(_DWORD*)(v1 - 32);
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v10 + 800LL) + 8LL) = 2;
      **(_QWORD**)(*(_QWORD*)v10 + 800LL) = *(_QWORD*)(v10 + 8LL * v49);
      v31 = *(_OWORD*)(v1 + 24);
      v32 = *(_OWORD*)(v1 + 40);
      v33 = *(_QWORD*)(*(_QWORD*)v10 + 800LL);
      *(_OWORD*)(v33 + 24) = *(_OWORD*)(v1 + 8);
      *(_OWORD*)(v33 + 56) = v32;
      *(_OWORD*)(v33 + 40) = v31;
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v10 + 800LL) + 16LL) =
          *(_QWORD*)(v1 + 128);
      *(_QWORD*)(*(_QWORD*)v10 + 1120LL) = *(_QWORD*)(v1 + 1088);
      *(_QWORD*)(*(_QWORD*)v10 + 1112LL) = *(_QWORD*)(v1 + 1080);
      v34 = *(_QWORD*)(v1 + 128);
      if (*(_DWORD*)((char*)((char*)0x40LL) +
                     *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) + (_QWORD)v20)) !=
          0) {
        v35 = v50;
        v51_.v51[0] = 40;
        v51_.v52 = v50;
        if (v50 != 0) {
          v51_.v51[3] = *(_DWORD*)(v50 + 4);
        }
        v51_.v53 = v10;
        v51_.v54 = v34;
        v51_.v51[2] = 0;
        cuda_driver_20b420(0x13u, 0x10u, (__int64)v51_.v51);
        v34 = *(_QWORD*)(v1 + 128);
        v36 = *(_QWORD*)(v1 + 1184);
        if (v36 == 0) {
          goto LABEL_64;
        }
      }
      else {
        v35 = v50;
        v36 = *(_QWORD*)(v1 + 1184);
        if (v36 == 0) {
          goto LABEL_64;
        }
      }
      if (v34 != 0) {
        v37 = 0;
        v38 = 0;
        do {
          v39 = (_QWORD*)(v10 + 8LL * v37);
          v37 += 2;
          if (v34 - 1 <= v38) {
            v39 = (_QWORD*)(v1 + 1192);
          }
          *(_QWORD*)(*(_QWORD*)(v10 + 8 * v38) + 1224LL) = *v39;
          *(_QWORD*)(*(_QWORD*)(v10 + 8 * v38) + 1216LL) =
              *(_QWORD*)(v1 + 1184);
          v40 = *(unsigned int*)(v1 + 1200);
          v41 = *(_QWORD*)(v10 + 8 * v38++);
          *(_DWORD*)(v41 + 1232) = v40;
        } while (v34 > (unsigned int)v38);
        v36 = *(_QWORD*)(v1 + 1184);
      }
      else {
        v40 = *(unsigned int*)(v1 + 1200);
      }
      v42 = (__int64*)(*(_QWORD*)(v36 + 64) + 8 * v40);
      v43 = *v42;
      if (*v42 != 0) {
        if (v43 == v27) {
        LABEL_63:
          *v42 = *(_QWORD*)v10;
        }
        else {
          while (1) {
            v44 = v43;
            v43 = *(_QWORD*)(v43 + 1224);
            if (v43 == 0) {
              break;
            }
            if (v43 == v27) {
              v42 = (__int64*)(v44 + 1224);
              goto LABEL_63;
            }
          }
        }
      }
    LABEL_64:
      cuda_driver_c3200(v1 - 32, 0);
      v45 = *(_QWORD*)v10;
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v10 + 1120LL) + 1112LL) = *(_QWORD*)v10;
      v14 = CudaDriverStub_1a2960(*(_QWORD*)(*(_QWORD*)(v45 + 24) + 80LL), v35,
                                  v45);
      if (v14 != 0) {
        goto LABEL_68;
      }
      CudaDriverRoutine_12e340(v10);
      v1 = v3;
    } while (v3 != 0);
  }
  return 0;
}

__int64 cuda_driver_d1b70(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  struct {
    int v8;
    char gap12_[4];
    __int64 v9;
    __int64 v10;
    __int64 v11;
    char gap40_[8];
    char v12;
    char gap49_[7];
    __int64 v13;
    char gap64_[8];
    char v14;
    char gap73_[7];
    __int64 v15;
  } v8_;

  if (*(_DWORD*)((char*)((_UNKNOWN*)0xA0LL) + (_QWORD)CudaDriverData_1432140) !=
      0) {
    v8_.v9 = a3;
    v8_.v10 = a2;
    v8_.v8 = 88;
    if (result != 0) {
      if (*(_BYTE*)(result + 415) != 0) {
        v3 = *(_QWORD*)(result + 424);
        v8_.v12 = *(_BYTE*)(result + 415);
        v4 = *(_QWORD*)(v3 + 96);
        v8_.v14 = *(_BYTE*)(result + 416);
        v8_.v11 = v4;
      LABEL_6:
        v8_.v13 = result;
      LABEL_9:
        v6 = *(_QWORD*)(result + 448);
        if (v6 != 0) {
          v7 = CudaDriverRoutine_98340(*(_QWORD*)(v6 + 1200));
        LABEL_12:
          v8_.v15 = v7;
          return cuda_driver_20b420(2u, 0x28u, (__int64)&v8_.v8);
        }
      LABEL_11:
        v7 = 0;
        goto LABEL_12;
      }
      v5 = *(unsigned __int8*)(result + 416);
      v8_.v11 = result;
      v8_.v12 = 0;
      v8_.v14 = v5;
    }
    else {
      v5 = (*(_UNKNOWN*)0x1A0LL);
      v8_.v11 = 0;
      v8_.v12 = *(((_BYTE*)0x19CLL) + 3);
      v8_.v14 = (*(_UNKNOWN*)0x1A0LL);
      if (*(((_BYTE*)0x19CLL) + 3) != 0) {
        goto LABEL_6;
      }
    }
    v8_.v13 = 0;
    if (v5 == 0) {
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  return result;
}

__int64 cuda_driver_d1c40(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v4[5];

  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_14321c8) !=
      0) {
    v4[1] = a4;
    v4[2] = a3;
    LODWORD(v4[0]) = 40;
    HIDWORD(v4[0]) = result;
    if (a2 != 0 && *(_BYTE*)(a2 + 415) != 0) {
      a2 = *(_QWORD*)(*(_QWORD*)(a2 + 424) + 96LL);
    }
    v4[3] = a2;
    return cuda_driver_20b420(0x13u, 2u, (__int64)v4);
  }
  return result;
}

__int64 cuda_driver_d22e0(__int64 a1, __int64 a2, __int64* a3, __int64 a4)
{
  __int64 v4;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v4 = *(_QWORD*)(a1 + 104);
  if (v4 == 0) {
    return 1;
  }
  while (1) {
    v8 = *(_DWORD*)(v4 + 4);
    if (v8 != 13) {
      if (v8 == 4) {
        if ((unsigned __int8)cuda_driver_d22e0(*(_QWORD*)(v4 + 48), a2, a3,
                                               a4) == 0) {
          return 0;
        }
      }
      else if ((unsigned __int8)CudaDriverRoutine_d2400(v4, a2, a3, a4, 0) ==
               0) {
        return 0;
      }
      goto LABEL_4;
    }
    if (*a3 != *(_QWORD*)(v4 + 1200)) {
      return 0;
    }
    v9 = *(unsigned int*)(v4 + 44);
    if ((_DWORD)v9 != 0) {
      break;
    }
  LABEL_4:
    v4 = *(_QWORD*)(v4 + 1136);
    if (v4 == 0) {
      return 1;
    }
  }
  v10 = 0;
  v11 = 8 * v9;
  while ((unsigned __int8)cuda_driver_d22e0(
             *(_QWORD*)(*(_QWORD*)(v4 + 48) + v10), a2, a3, a4) != 0) {
    v10 += 8;
    if (v11 == v10) {
      goto LABEL_4;
    }
  }
  return 0;
}

__int64 cuda_driver_d29f0()
{
  void* v0;

  v0 = CudaDriverData_1422118;
  *(_DWORD*)((char*)&CudaDriverRoutine_5090 + (_QWORD)CudaDriverData_1422118) =
      0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5094 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5098 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_509c + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50a0 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50a4 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50a8 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50ac + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50b0 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50b4 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50b8 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50bc + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50c0 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50c4 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50c8 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50cc + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50d0 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50d4 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50d8 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50dc + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50e0 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50e4 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50e8 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50ec + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50f0 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50f4 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50f8 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_50fc + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5100 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5104 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5108 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_510c + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5110 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5114 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5118 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_511c + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5120 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5124 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5128 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_512c + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5130 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5134 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5138 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_513c + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5140 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5144 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5148 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_514c + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5150 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5154 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5158 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_515c + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5160 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5164 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5168 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_516c + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5170 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5174 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5178 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_517c + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5180 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5184 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_5188 + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)&CudaDriverRoutine_518c + (_QWORD)v0) = 0;
  return CudaDriverRoutine_86a10((__int64)&CudaDriverData_1434760, 0,
                                 0x200000000000000LL);
}

__int64 cuda_driver_d2c20(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  __int64 result;
  __int64 v8;
  _DWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  unsigned __int64 i;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if (a2 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"nodeParams cannot be NULL");
    return 1;
  }
  v2 = *(_QWORD*)(a2 + 96);
  v3 = CudaDriverData_1422118;
  v4 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                        (_QWORD)CudaDriverData_1422118);
  if (v2 > v4) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"accessDescCount (%zu) cannot exceed the "
                                     "number of devices (%u)",
                            v2, v4);
    return 1;
  }
  result = cuda_driver_efea0(a2);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)(a2 + 8) != 1) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Location 'type' must be CU_MEM_LOCATION_TYPE_DEVICE");
      return 801;
    }
    v8 = a2;
    v9 = (_DWORD*)v3[*(int*)(a2 + 12) + 35];
    v10 = a1;
    a1[2] |= 1LL << *v9;
    v11 = *(_QWORD*)(a2 + 96);
    if (v11 != 0 && *(_QWORD*)(a2 + 88) != 0) {
      v12 = *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v3);
      v13 = 0;
      for (i = 0; i < v11; ++i) {
        v15 = *(_QWORD*)(v8 + 88);
        v16 = *(unsigned int*)(v15 + v13 + 4);
        if ((v16 & 0x80000000) != 0 || (int)v16 >= v12) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"accessDescs index %zu: Invalid location ID (%d)", i,
              v16);
          return 101;
        }
        v17 = (_DWORD*)v3[v16 + 35];
        if (v17 != v9 && *(_DWORD*)(v15 + v13 + 8) == 3) {
          if ((unsigned __int8)CudaDriverRoutine_eec70((__int64)v9,
                                                       v3[v16 + 35]) == 0) {
            CudaDriverRoutine_ed630(
                (__int64)"CUDA", 0,
                (__int64)"accessDescs index %zu: Peer access not supported "
                         "(Src Device: %u, Dst Device: %u)",
                i, *v9, *v17);
            return 217;
          }
          v12 = *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v3);
          v11 = *(_QWORD*)(a2 + 96);
          v8 = a2;
        }
        v13 += 12;
      }
      result = cuda_driver_ff320(*(_DWORD**)(v8 + 88), v11, &v22);
      if ((_DWORD)result != 0) {
        return result;
      }
      if (*(_DWORD*)(v3[*(int*)(a2 + 12) + 35] + 21864LL) != v22) {
        return 101;
      }
      v8 = a2;
      v10 = a1;
      if (*(_QWORD*)(a2 + 96) == 0) {
        goto LABEL_26;
      }
      v18 = 0;
      v19 = 0;
      while (1) {
        v20 = *(_QWORD*)(a2 + 88) + v18;
        if (*(_DWORD*)(v20 + 8) <= 1u) {
          break;
        }
        ++v19;
        v18 += 12;
        a1[2] |= 1LL << *(_DWORD*)(v20 + 4);
        if (v19 >= *(_QWORD*)(a2 + 96)) {
          goto LABEL_26;
        }
      }
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"accessDescs index %lu: Flags cannot be "
                                       "PROT_NONE or PROT_READ",
                              v19);
      return 801;
    }
  LABEL_26:
    if (*(_DWORD*)(v8 + 4) != 0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"handleTypes must be type NONE");
      return 801;
    }
    v21 = *(_QWORD*)(v8 + 104);
    if (v21 != 0) {
      *v10 = v9;
      v10[1] = v21;
      return 0;
    }
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"bytesize must be non-zero");
    return 1;
  }
  return result;
}

__int64 cuda_driver_d2f00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  if (result != 0 &&
      atomic_fetch_add((atomic_uint* volatile)result, 0xFFFFFFFF) == 1) {
    v1 = *(_QWORD*)(result + 16);
    v2 = result;
    v3 = (_QWORD*)CudaDriverStub_102050(v1);
    v4 = **(_QWORD**)(*(_QWORD*)(v2 + 24) +
                      8LL * **(unsigned int**)(*(_QWORD*)(CudaDriverStub_102040(
                                                              *v3) +
                                                          24) +
                                               176LL) +
                      16);
    CudaDriverStub_102350(v4);
    ((void (*)(__int64, __int64, _QWORD))CudaDriverRoutine_1021a0)(v4, v1, 0);
    CudaDriverStub_102360(v4);
    v5 = *(_QWORD*)(v2 + 24);
    CudaDriverRoutine_86e30(v2 + 40);
    CudaDriverRoutine_12e340(v2);
    return cuda_driver_d4fa0(v5);
  }
  return result;
}

__int64 cuda_driver_d3530(_QWORD* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, unsigned __int64 a7,
                          __int64 a8)
{
  int v8;
  char* v9;
  const char* v10;
  __int64 result;
  __int64 v18;
  int v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  struct {
    _DWORD v45[2];
    __int64 v46;
    __int64 v47;
  } v45_;

  v8 = *(_DWORD*)(a2 + 328);
  v44 = nullptr;
  if (v8 != 0) {
    v9 = "";
    if (v8 == 2) {
      v9 = "Graph ownership was moved to a parent graph";
    }
    if (v8 == 1) {
      v10 = "Graph is a clone of another graph";
    }
    else {
      v10 = v9;
    }
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Free nodes are restricted from the graph: %s", v10, a5, a6,
        a7, a8, v44);
    return 801;
  }
  if (*(_QWORD*)(a2 + 312) == 0) {
    v18 = a2;
    v19 = a8;
    v20 = CudaDriverRoutine_12e510(1, 1080);
    if (v20 == 0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Host out of memory");
      return 2;
    }
    a2 = v18;
    LODWORD(a8) = v19;
    *(_QWORD*)(v20 + 544) = 1;
    *(_QWORD*)(v18 + 312) = v20;
  }
  result = cuda_driver_d6100((__int64*)&v44, a2, 11, a3, a4, a5, a6, a8);
  if ((_DWORD)result != 0) {
    goto LABEL_22;
  }
  v21 = v44;
  v22 = (__int64)v44;
  v44[4] = a7;
  v23 = v22 + 32;
  v24 = CudaDriverRoutine_86ae0((__int64)&CudaDriverData_1434760, a7);
  if (v24 == nullptr || (v25 = v24[9]) == 0 || a7 != *(_QWORD*)(v25 + 96)) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Virtual address 0x%016llx does not refer "
                                     "to an active allocation",
                            a7);
    goto LABEL_21;
  }
  v26 = *(_QWORD*)(v25 + 16);
  v27 = *(_QWORD*)(v25 + 32);
  v28 = (_QWORD*)CudaDriverStub_102050(v26);
  v29 = CudaDriverStub_102040(*v28);
  v30 = *(_QWORD*)(v21[3] + 312LL);
  if (v30 == *(_QWORD*)(v25 + 24)) {
    if (v27 != 0) {
      v34 = *(_QWORD*)(v29 + 24);
      v35 = CudaDriverRoutine_d3ec0((__int64)v21, *(_DWORD*)(v27 + 44));
      if (v35 == nullptr) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Host out of memory");
        result = 2;
        v32 = (__int64)v44;
        if (v44 == nullptr) {
          return result;
        }
        goto LABEL_23;
      }
      v36 = *(_QWORD*)(v25 + 24);
      v37 = v35;
      CudaDriverRoutine_86e30(v25 + 40);
      CudaDriverRoutine_12e340(v25);
      cuda_driver_d4fa0(v36);
      *(_QWORD*)(v27 + 152) = 0;
      v38 = CudaDriverStub_102050(v26);
      CudaDriverRoutine_f5a80(v34, *(_QWORD*)(v38 + 8));
      v39 = *v37;
      v40 = v37[1] + 1LL;
      v37[1] = v40;
      *(_QWORD*)(v39 + 16) = v40;
      v41 = *(_QWORD*)(*v37 + 8LL);
      CudaDriverStub_102350(v41);
      ((void (*)(__int64, __int64, _QWORD))CudaDriverRoutine_1021a0)(v41, v26,
                                                                     v37[1]);
      CudaDriverStub_102360(v41);
      --*(_QWORD*)(v30 + 552);
      goto LABEL_28;
    }
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Address 0x%016llx is either already freed in a separate "
                 "graph or the allocation node was previously insta"
                 "ntiated without being freed in the same graph. It is no "
                 "longer eligible to be freed in this graph",
        a7);
  LABEL_21:
    result = 1;
  LABEL_22:
    v32 = (__int64)v44;
    if (v44 == nullptr) {
      return result;
    }
  LABEL_23:
    v33 = result;
    cuda_driver_c3200(v32, 0);
    return v33;
  }
  v31 = *(_QWORD**)(v30 + 1072);
  if (v31 != nullptr) {
    while (*v31 != a7) {
      v31 = (_QWORD*)v31[2];
      if (v31 == nullptr) {
        goto LABEL_19;
      }
    }
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Address 0x%016llx is already freed in this graph", a7);
    goto LABEL_21;
  }
LABEL_19:
  *(_QWORD*)(v25 + 32) = 0;
  atomic_fetch_add((atomic_uint* volatile)v25, 1u);
  v21[5] = v25;
  v21[6] = *(_QWORD*)(v30 + 1072);
  *(_QWORD*)(v30 + 1072) = v23;
LABEL_28:
  v42 = (__int64)v44;
  *a1 = v44;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) +
                 *(__int64*)((char*)((__int64*)0x10LL) +
                             (_QWORD)CudaDriverData_14225e0) +
                 4) != 0) {
    v45_.v45[0] = 24;
    if (v42 != 0) {
      v43 = *(_QWORD*)(v42 + 24);
      v45_.v45[1] = *(_DWORD*)(v42 + 4);
    }
    else {
      v43 = 0;
    }
    v45_.v46 = v43;
    v45_.v47 = v42;
    cuda_driver_20b420(2u, 0x25u, (__int64)v45_.v45);
  }
  return 0;
}

__int64 cuda_driver_d3a00(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;
  unsigned int** v4;
  unsigned __int64 v5;
  __int64 v7;
  unsigned __int64 v9;

  if (a2 == 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a2 + 312);
  if (v2 == 0) {
    return 0;
  }
  if (*(_QWORD*)(v2 + 552) != 0) {
    return 0;
  }
  v4 = (unsigned int**)CudaDriverData_1422118;
  v5 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                        (_QWORD)CudaDriverData_1422118);
  if (*(_QWORD*)(v2 + 1072) != 0 || v5 == 0) {
    return 0;
  }
  v7 = v2 + 16;
  v9 = 0;
  do {
    if (*(_QWORD*)(v7 + 8 * v9) != 0) {
      result = CudaDriverRoutine_d2fe0(a1, v4[v9 + 35]);
      v5 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v4);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    else {
      result = 0;
    }
    ++v9;
  } while (v9 < v5);
  return result;
}

__int64 cuda_driver_d3ae0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  int v20;
  unsigned __int8 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _DWORD* v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  _QWORD v36[3];

  if (a3 == 0 || *(_QWORD*)(a3 + 552) != 0) {
    return 0;
  }
  v36[1] = v3;
  v36[2] = v4;
  v6 = CudaDriverData_1422118;
  v7 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                        (_QWORD)CudaDriverData_1422118);
  if (*(_QWORD*)(a3 + 1072) != 0 || v7 == 0) {
    return 0;
  }
  v9 = a3 + 16;
  v10 = a3 + 560;
  v13 = 0;
  while (1) {
    v14 = *(_QWORD*)(v9 + 8 * v13);
    if (v14 != 0) {
      break;
    }
  LABEL_10:
    if (++v13 >= v7) {
      return 0;
    }
  }
  v15 = CudaDriverStub_f0f50(v6[v13 + 2514]);
  v16 = *(_DWORD*)(CudaDriverStub_102040(v15) + 8);
  v17 = *(_QWORD*)(v14 + 8);
  v35 = 0;
  v36[0] = 0;
  v18 = CudaDriverRoutine_4d0d0(v17) - 1;
  if ((unsigned __int8)cuda_driver_4db20(*(unsigned __int64**)(v14 + 8), 0, v18,
                                         v36) != 0) {
    CudaDriverRoutine_4e0c0(*(unsigned __int64**)(v14 + 8), 0, v18, &v35);
    v19 = v36[0];
    if (v36[0] > v35) {
    LABEL_14:
      v20 = 0;
      goto LABEL_20;
    }
  }
  else {
    v19 = v36[0];
    if (v36[0] != 0) {
      goto LABEL_14;
    }
  }
  v20 = 0;
  do {
    v21 = (unsigned __int8)CudaDriverRoutine_4d790(
        *(unsigned __int64**)(v14 + 8), v19++);
    if (v21 != 0) {
      ++v20;
    }
  } while (v19 <= v35);
LABEL_20:
  v22 = v6[v13 + 2514];
  v23 = CudaDriverStub_f0f50(v22);
  v24 = CudaDriverStub_102040(v23);
  v25 = CudaDriverRoutine_d3d60(
      a2, a1, v13,
      *(unsigned int*)(v24 + 8) + (unsigned __int64)(unsigned int)(v20 * v16));
  if (v25 == 0) {
    return 2;
  }
  v26 = v25;
  v27 = CudaDriverStub_102050(v25);
  CudaDriverRoutine_f5ae0(v22, *(_QWORD*)(v27 + 8), 1LL << v13);
  v28 = (_DWORD*)(v10 + 8 * v13);
  *v28 = *(_DWORD*)(v26 + 176) + 1;
  v28[1] = *(_DWORD*)(v26 + 180);
  v29 = CudaDriverRoutine_d3ec0(a1, v13);
  if (v29 != nullptr) {
    v30 = *v29;
    v31 = v29;
    v32 = v29[1] + 1LL;
    v29[1] = v32;
    *(_QWORD*)(v30 + 16) = v32;
    v33 = *(_QWORD*)(*v29 + 8LL);
    CudaDriverStub_102350(v33);
    ((void (*)(__int64, __int64, _QWORD))CudaDriverRoutine_1021a0)(v33, v26,
                                                                   v31[1]);
    CudaDriverStub_102360(v33);
    v7 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v6);
    goto LABEL_10;
  }
  v34 = **(_QWORD**)(a2 + 8LL * **(unsigned int**)(v22 + 176) + 16);
  CudaDriverStub_102350(v34);
  ((void (*)(__int64, __int64, _QWORD))CudaDriverRoutine_1021a0)(v34, v26, 0);
  CudaDriverStub_102360(v34);
  return 2;
}

__int64 cuda_driver_d4980(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v3 = *(_QWORD*)(a2 + 312);
  v10 = 0;
  result = cuda_driver_d4a40(&v10, v3);
  if ((_DWORD)result == 0) {
    v6 = v10;
    if (v10 != 0) {
      *(_QWORD*)((char*)((_UNKNOWN*)0x240LL) + v10) = a1;
      v7 = *(_QWORD*)(a1 + 328);
      if (v7 != 0) {
        *(_QWORD*)((char*)((_UNKNOWN*)0x250LL) + v6) = v7;
        v8 = *(_QWORD*)(*(_QWORD*)(a1 + 328) + 600LL);
        *(_QWORD*)((char*)((_UNKNOWN*)0x258LL) + v6) = v8;
        if (v8 != 0) {
          *(_QWORD*)(v8 + 592) = v6;
        }
        *(_QWORD*)(*(_QWORD*)(a1 + 328) + 600LL) = v6;
      }
      else {
        *(_QWORD*)((char*)((_UNKNOWN*)0x258LL) + v6) = *(_QWORD*)(a1 + 320);
        *(_QWORD*)(a1 + 320) = v6;
        v9 = *(_QWORD*)((char*)((_UNKNOWN*)0x258LL) + v6);
        if (v9 != 0) {
          *(_QWORD*)(v9 + 592) = v6;
        }
      }
      *(_QWORD*)(a1 + 328) = v6;
    }
    return cuda_driver_d4cc0(a1, *(_QWORD*)(a1 + 320), a2);
  }
  return result;
}

__int64 cuda_driver_d4a40(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64* v17;
  unsigned int v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned __int64 v26;
  unsigned __int64 i;
  __int64 v28;
  unsigned __int64 v29;
  _QWORD v30[3];

  if (a2 == 0) {
    return 0;
  }
  if (*(_BYTE*)(a2 + 528) != 0) {
    return 801;
  }
  v30[1] = v2;
  v30[2] = v3;
  v7 = CudaDriverRoutine_12e510(1, 608);
  if (v7 == 0) {
    return 2;
  }
  v8 = v7;
  v9 = a2;
  *(_DWORD*)(v7 + 520) = -1;
  *(_BYTE*)(a2 + 528) = 1;
  atomic_fetch_add((atomic_ullong* volatile)(a2 + 544), 1u);
  *(_QWORD*)(v7 + 544) = a2;
  v10 = CudaDriverData_1422118;
  v11 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                         (_QWORD)CudaDriverData_1422118);
  if ((_DWORD)v11 == 0) {
  LABEL_29:
    *(_QWORD*)(v9 + 536) = v8;
    *a1 = v8;
    return 0;
  }
  v12 = a2 + 16;
  v13 = 0;
  while (1) {
    v14 = *(_QWORD**)(v12 + 8 * v13);
    if (v14 == nullptr) {
      goto LABEL_9;
    }
    v15 = *(_QWORD**)(v8 + 8 * v13);
    if (v15 == nullptr) {
      break;
    }
  LABEL_14:
    *v15 = *v14;
    v17 = v15 + 1;
    v18 = CudaDriverRoutine_4d0e0(
        v17, *(unsigned __int64**)(*(_QWORD*)(v12 + 8 * v13) + 8LL));
    if (v18 != 0) {
      goto LABEL_22;
    }
    v19 = *v17;
    v29 = 0;
    v30[0] = 0;
    v20 = CudaDriverRoutine_4d0d0(v19) - 1;
    if ((unsigned __int8)cuda_driver_4db20((unsigned __int64*)*v17, 0, v20,
                                           v30) != 0) {
      CudaDriverRoutine_4e0c0((unsigned __int64*)*v17, 0, v20, &v29);
    }
    v21 = v30[0];
    if (v30[0] <= v29) {
      v22 = 80LL * v30[0];
      while (1) {
        if ((unsigned __int8)CudaDriverRoutine_4d790((unsigned __int64*)*v17,
                                                     v21) != 0) {
          v23 = *(_QWORD*)(v10[v13 + 2514] + 80LL) + v22;
          *(_DWORD*)(v23 + 76) = *(_DWORD*)(v23 + 32);
          v18 = CudaDriverRoutine_f3b70(v23);
          if (v18 != 0) {
            break;
          }
        }
        ++v21;
        v22 += 80;
        if (v21 > v29) {
          goto LABEL_8;
        }
      }
    LABEL_22:
      v24 = *(_QWORD*)(v8 + 544);
      v25 = v18;
      *(_BYTE*)(v24 + 528) = 0;
      *(_QWORD*)(v24 + 536) = 0;
      v26 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v10);
      if ((_DWORD)v26 == 0) {
        goto LABEL_31;
      }
      goto LABEL_23;
    }
  LABEL_8:
    v11 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v10);
  LABEL_9:
    if (++v13 >= v11) {
      v9 = *(_QWORD*)(v8 + 544);
      goto LABEL_29;
    }
  }
  v16 = CudaDriverRoutine_12e510(1, 24);
  if (v16 != 0) {
    *(_QWORD*)(v8 + 8 * v13) = v16;
    v15 = (_QWORD*)v16;
    v14 = *(_QWORD**)(v12 + 8 * v13);
    goto LABEL_14;
  }
  v24 = *(_QWORD*)(v8 + 544);
  v25 = 2;
  *(_BYTE*)(v24 + 528) = 0;
  *(_QWORD*)(v24 + 536) = 0;
  v26 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v10);
  if ((_DWORD)v26 != 0) {
  LABEL_23:
    for (i = 0; i < v26; ++i) {
      v28 = *(_QWORD*)(v8 + 8 * i);
      if (v28 != 0) {
        CudaDriverRoutine_4d080(*(_QWORD**)(v28 + 8));
        CudaDriverRoutine_12e340(v28);
        v26 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v10);
      }
    }
  }
LABEL_31:
  CudaDriverRoutine_12e340(*(_QWORD*)(v8 + 536));
  memset_plt(v8, 0, 608);
  CudaDriverRoutine_12e340(v8);
  cuda_driver_d4fa0(v24);
  return v25;
}

__int64 cuda_driver_d4cc0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (*(_QWORD*)(a3 + 168) == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a3 + 152);
  if (v3 == 0) {
    return 0;
  }
  do {
    v6 = *(_QWORD*)(v3 + 48);
    v12 = 0;
    result = cuda_driver_d4a40(&v12, *(_QWORD*)(v6 + 312));
    if ((_DWORD)result != 0) {
      break;
    }
    v8 = v12;
    if (v12 != 0) {
      *(_QWORD*)((char*)((_UNKNOWN*)0x240LL) + v12) = a1;
      *(_QWORD*)((char*)((_UNKNOWN*)0x248LL) + v8) = a2;
      v9 = *(_QWORD*)(a1 + 328);
      if (v9 != 0) {
        *(_QWORD*)((char*)((_UNKNOWN*)0x250LL) + v8) = v9;
        v10 = *(_QWORD*)(*(_QWORD*)(a1 + 328) + 600LL);
        *(_QWORD*)((char*)((_UNKNOWN*)0x258LL) + v8) = v10;
        if (v10 != 0) {
          *(_QWORD*)(v10 + 592) = v8;
        }
        *(_QWORD*)(*(_QWORD*)(a1 + 328) + 600LL) = v8;
      }
      else {
        *(_QWORD*)((char*)((_UNKNOWN*)0x258LL) + v8) = *(_QWORD*)(a1 + 320);
        *(_QWORD*)(a1 + 320) = v8;
        v11 = *(_QWORD*)((char*)((_UNKNOWN*)0x258LL) + v8);
        if (v11 != 0) {
          *(_QWORD*)(v11 + 592) = v8;
        }
      }
      *(_QWORD*)(a1 + 328) = v8;
    }
    result = cuda_driver_d4cc0(a1, v8, v6);
    v3 = *(_QWORD*)(v3 + 1192);
    if (v3 == 0) {
      break;
    }
  } while ((_DWORD)result == 0);
  return result;
}

__int64 cuda_driver_d4de0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  void* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 i;
  __int64 v8;

  v1 = *(_QWORD*)(result + 320);
  if (v1 != 0) {
    v2 = result;
    v3 = CudaDriverData_1422118;
    while (*(_QWORD*)(v2 + 328) != v1) {
      v4 = *(_QWORD*)(v1 + 600);
      *(_QWORD*)(v2 + 320) = v4;
      if (v4 != 0) {
        goto LABEL_6;
      }
    LABEL_7:
      v5 = *(_QWORD*)(v1 + 544);
      *(_OWORD*)(v1 + 592) = (__typeof__(*(_OWORD*)(v1 + 592))){0};
      *(_BYTE*)(v5 + 528) = 0;
      *(_QWORD*)(v5 + 536) = 0;
      v6 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v3);
      if ((_DWORD)v6 != 0) {
        for (i = 0; i < v6; ++i) {
          v8 = *(_QWORD*)(v1 + 8 * i);
          if (v8 != 0) {
            CudaDriverRoutine_4d080(*(_QWORD**)(v8 + 8));
            CudaDriverRoutine_12e340(v8);
            v6 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v3);
          }
        }
      }
      CudaDriverRoutine_12e340(*(_QWORD*)(v1 + 536));
      memset_plt(v1, 0, 608);
      CudaDriverRoutine_12e340(v1);
      result = cuda_driver_d4fa0(v5);
      v1 = *(_QWORD*)(v2 + 320);
      if (v1 == 0) {
        return result;
      }
    }
    *(_QWORD*)(v2 + 328) = *(_QWORD*)(v1 + 592);
    v4 = *(_QWORD*)(v1 + 600);
    *(_QWORD*)(v2 + 320) = v4;
    if (v4 == 0) {
      goto LABEL_7;
    }
  LABEL_6:
    *(_QWORD*)(v4 + 592) = 0;
    goto LABEL_7;
  }
  return result;
}

__int64 cuda_driver_d4fa0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 i;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  _QWORD v15[3];
  unsigned __int64 v16;

  if (atomic_fetch_add((atomic_ullong* volatile)(result + 544),
                       0xFFFFFFFFFFFFFFFFLL) <= 1) {
    v15[1] = v1;
    v15[2] = v2;
    v3 = result;
    v4 = (char*)CudaDriverData_1422118;
    v5 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                          (_QWORD)CudaDriverData_1422118);
    if ((_DWORD)v5 != 0) {
      for (i = 0; i < v5; ++i) {
        v9 = *(_QWORD*)(v3 + 16 + 8 * i);
        if (v9 != 0) {
          v10 = *(_QWORD*)(v9 + 8);
          v16 = 0;
          v15[0] = 0;
          v11 = CudaDriverRoutine_4d0d0(v10) - 1;
          if ((unsigned __int8)cuda_driver_4db20(*(unsigned __int64**)(v9 + 8),
                                                 0, v11, &v16) != 0) {
            CudaDriverRoutine_4e0c0(*(unsigned __int64**)(v9 + 8), 0, v11, v15);
          }
          v12 = v16;
          if (v16 <= v15[0]) {
            v13 = 80 * v16;
            do {
              if ((unsigned __int8)CudaDriverRoutine_4d790(
                      *(unsigned __int64**)(v9 + 8), v12) != 0) {
                v14 = &v4[8 * i];
                *(_QWORD*)(*(_QWORD*)(*((_QWORD*)v14 + 2514) + 80LL) + v13 +
                           40) = 0;
                *(_DWORD*)(*(_QWORD*)(*((_QWORD*)v14 + 2514) + 80LL) + v13 +
                           32) = 0;
              }
              ++v12;
              v13 += 80;
            } while (v12 <= v15[0]);
          }
          v7 = &v4[8 * i];
          CudaDriverStub_107f90_alt1(*((_QWORD*)v7 + 35) + 21952LL);
          *(_QWORD*)(v9 + 16) = *(_QWORD*)(*((_QWORD*)v7 + 35) + 21936LL);
          *(_QWORD*)(*((_QWORD*)v7 + 35) + 21936LL) = v9;
          v8 = *((_QWORD*)v7 + 35);
          if (v8 + 21936 == *(_QWORD*)(v8 + 21944)) {
            *(_QWORD*)(v8 + 21944) = v9 + 16;
            v8 = *((_QWORD*)v7 + 35);
          }
          CudaDriverStub_108070_alt1(v8 + 21952);
          v5 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v4);
        }
      }
    }
    memset_plt(v3, 0, 1080);
    return CudaDriverRoutine_12e340(v3);
  }
  return result;
}

__int64 cuda_driver_d5170(__int64 a1, __int64 a2)
{
  unsigned int v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11[7];

  if (*(_BYTE*)(a2 + 320) == 0 ||
      (CudaDriverRoutine_1a2d70((__int64)v11, 8, 8, 0, 0),
       v4 = CudaDriverRoutine_d48a0(a2, (__int64)v11),
       CudaDriverRoutine_1a3eb0((__int64)v11), result = v4, v4 == 0)) {
    cuda_driver_d4de0(a1);
    v6 = *(_QWORD*)(a2 + 312);
    v11[0] = 0;
    result = cuda_driver_d4a40(v11, v6);
    if ((_DWORD)result == 0) {
      v7 = v11[0];
      if (v11[0] != 0) {
        *(_QWORD*)((char*)((_UNKNOWN*)0x240LL) + v11[0]) = a1;
        v8 = *(_QWORD*)(a1 + 328);
        if (v8 != 0) {
          *(_QWORD*)((char*)((_UNKNOWN*)0x250LL) + v7) = v8;
          v9 = *(_QWORD*)(*(_QWORD*)(a1 + 328) + 600LL);
          *(_QWORD*)((char*)((_UNKNOWN*)0x258LL) + v7) = v9;
          if (v9 != 0) {
            *(_QWORD*)(v9 + 592) = v7;
          }
          *(_QWORD*)(*(_QWORD*)(a1 + 328) + 600LL) = v7;
        }
        else {
          *(_QWORD*)((char*)((_UNKNOWN*)0x258LL) + v7) = *(_QWORD*)(a1 + 320);
          *(_QWORD*)(a1 + 320) = v7;
          v10 = *(_QWORD*)((char*)((_UNKNOWN*)0x258LL) + v7);
          if (v10 != 0) {
            *(_QWORD*)(v10 + 592) = v7;
          }
        }
        *(_QWORD*)(a1 + 328) = v7;
      }
      return cuda_driver_d4cc0(a1, *(_QWORD*)(a1 + 320), a2);
    }
  }
  return result;
}

__int64 cuda_driver_d5280(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _BOOL8* v11;
  void* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 i;
  unsigned int v17;
  unsigned __int64 v18;
  unsigned __int64 j;
  unsigned int v20;
  __int64 v22;

  v3 = *(_QWORD*)(a1 + 320);
  if ((_BYTE)a3 != 0 && v3 != 0) {
    v7 = *(_QWORD**)(a1 + 320);
    while (1) {
      if (*(_BYTE*)(v7[72] + 336LL) == 0) {
        v11 = (_BOOL8*)v7[69];
        if (v11 != nullptr) {
          break;
        }
      }
    LABEL_5:
      v8 = (_QWORD*)v7[70];
      if (v8 != nullptr) {
        while (1) {
          v9 = v8[1];
          v10 = *(_QWORD*)(*(_QWORD*)(v9 + 24) + 536LL);
          if ((v10 == 0 || *(_QWORD*)(v10 + 576) != v7[72]) &&
              !CudaDriverRoutine_f41c0(*(_QWORD*)(v9 + 8))) {
            break;
          }
          v8 = (_QWORD*)v8[2];
          if (v8 == nullptr) {
            goto LABEL_6;
          }
        }
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Attempting to launch a graph which frees unallocated "
                     "memory at address 0x%016llx",
            *v8);
        return 1;
      }
    LABEL_6:
      v7 = (_QWORD*)v7[75];
      if (v7 == nullptr) {
        goto LABEL_17;
      }
    }
    while (!CudaDriverRoutine_f41c0(v11[1])) {
      v11 = (_BOOL8*)v11[18];
      if (v11 == nullptr) {
        goto LABEL_5;
      }
    }
    v22 = *(_QWORD*)(CudaDriverStub_102050(v11[2]) + 16);
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Attempting to launch a graph with "
                                     "unfreed allocation at address 0x%016llx",
                            v22);
    return 1;
  }
  else {
  LABEL_17:
    if (v3 != 0) {
      v12 = CudaDriverData_1422118;
      do {
        v13 = *(_QWORD*)(v3 + 584);
        if (v13 == 0 || *(_QWORD*)((v14 = *(_QWORD*)(v3 + 544)) + 552) != 0 ||
            *(_QWORD*)(v14 + 1072) != 0) {
          CudaDriverRoutine_f3b20(v3 + 528);
          v15 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v12);
          if ((_DWORD)v15 != 0) {
            for (i = 0; i < v15; ++i) {
              if (*(_QWORD*)(v3 + 8 * i) != 0) {
                v17 = CudaDriverRoutine_f4700(v3, (unsigned int)i, a2);
                if (v17 != 0) {
                  goto LABEL_41;
                }
                v15 =
                    *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v12);
              }
            }
          }
          v17 = cuda_driver_f3c60(a2, v3 + 528);
          if (v17 != 0 ||
              (_BYTE)a3 != 0 && (v17 = CudaDriverRoutine_f41e0(v3, a2)) != 0) {
          LABEL_41:
            v20 = v17;
            cuda_driver_d54e0_alt1(a1, a2, a3);
            return v20;
          }
          *(_BYTE*)(v3 + 569) = 1;
        }
        else {
          v18 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v12);
          if ((_DWORD)v18 != 0) {
            for (j = 0; j < v18; ++j) {
              if (*(_QWORD*)(v3 + 8 * j) != 0) {
                v17 = CudaDriverRoutine_f43c0(
                    v13, v3, *(_QWORD*)(*(_QWORD*)(v3 + 544) + 8 * j + 560), j);
                if (v17 != 0) {
                  goto LABEL_41;
                }
                v18 =
                    *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v12);
              }
            }
          }
        }
        v3 = *(_QWORD*)(v3 + 600);
      } while (v3 != 0);
    }
    return 0;
  }
}

__int64 cuda_driver_d54e0(__int64 a1, __int64 a2, char a3)
{
  void* v6;
  unsigned int v7;
  __int64 i;
  __int64 k;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 j;
  __int64 v14;

  if (*(_QWORD*)(a1 + 320) != 0) {
    v14 = 0;
    CudaDriverStub_107f90_alt1(a2 + 592);
    v6 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                       (_QWORD)CudaDriverData_1422118);
    cuda_driver_108520(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v6] +
                       616LL * *(unsigned int*)(a2 + 348));
    v7 = cuda_driver_118130(a2, (unsigned __int64*)&v14);
    CudaDriverRoutine_1085d0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v6] +
                             616LL * *(unsigned int*)(a2 + 348));
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v6);
    CudaDriverStub_108070_alt1(a2 + 592);
    if (v7 == 0) {
      for (i = *(_QWORD*)(a1 + 320); i != 0; i = *(_QWORD*)(i + 600)) {
        if (*(_BYTE*)(i + 569) != 0) {
          v10 = v14;
          *(_DWORD*)(i + 520) = *(_DWORD*)(a2 + 348);
          *(_QWORD*)(i + 512) = v10;
          v11 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v6);
          if ((_DWORD)v11 != 0) {
            for (j = 0; j < v11; ++j) {
              if (*(_QWORD*)(i + 8 * j) != 0) {
                CudaDriverRoutine_f5760(i, j, a2, v10, a3);
                v11 =
                    *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v6);
              }
            }
          }
        }
      }
      if (a3 != 0) {
        for (k = *(_QWORD*)(a1 + 320); k != 0; k = *(_QWORD*)(k + 600)) {
          if (*(_BYTE*)(k + 569) != 0) {
            CudaDriverRoutine_f4360(k, a2);
            CudaDriverRoutine_f5700(k, a2, v14);
            *(_BYTE*)(k + 569) = 0;
          }
        }
      }
    }
  }
  else {
    return 0;
  }
  return v7;
}

_QWORD* cuda_driver_d5920(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v6 = CudaDriverStub_f0f50(a2);
  v7 = CudaDriverStub_102040(v6);
  v8 = **(int**)(a2 + 176);
  v9 = **(_QWORD**)(a1 + 8 * v8 + 16);
  v10 = (a3 + *(unsigned int*)(v7 + 8) - 1) / *(unsigned int*)(v7 + 8) *
        *(unsigned int*)(v7 + 8);
  CudaDriverStub_107f90_alt2(*(_QWORD*)(a2 + 88));
  v11 = CudaDriverStub_f0f50(a2);
  v12 = cuda_driver_checks_102080(v11, v10);
  CudaDriverStub_108070_alt2(*(_QWORD*)(a2 + 88));
  if (v12 == 0) {
    return nullptr;
  }
  v13 = CudaDriverStub_102050(v12);
  CudaDriverRoutine_f5b30(a1, v8, *(_QWORD*)(v13 + 8));
  ((void (*)(__int64, __int64, _QWORD))CudaDriverRoutine_1021a0)(v9, v12, 0);
  return cuda_driver_checks_1023a0(v9, 0, a3);
}

__int64 cuda_driver_d5a80()
{
  void* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v0 = CudaDriverData_1422118;
  CudaDriverStub_107f90((char*)&CudaDriverRoutine_73a0 +
                        (_QWORD)CudaDriverData_1422118);
  v1 = *(_QWORD*)((char*)&CudaDriverRoutine_7390 + (_QWORD)v0);
  if (v1 != 0) {
    v2 = *(unsigned __int8*)(v1 + 24);
    v3 = *(_QWORD*)v1;
    v4 = v1 + v2;
    LOBYTE(v2) = v2 + 1;
    LODWORD(v4) = *(unsigned __int8*)(v4 + 25);
    *(_BYTE*)(v1 + 24) = v2;
    v5 = v3 + 1872LL * (unsigned int)v4;
    if ((unsigned __int8)v2 == 128) {
      if (*(_QWORD*)((char*)&CudaDriverRoutine_7390 + (_QWORD)v0) == v1) {
        v6 = *(_QWORD*)(v1 + 8);
        *(_QWORD*)((char*)&CudaDriverRoutine_7390 + (_QWORD)v0) = v6;
        if (v6 == 0) {
          goto LABEL_15;
        }
        v7 = 0;
      }
      else {
        v6 = *(_QWORD*)(v1 + 8);
        *(_QWORD*)(*(_QWORD*)(v1 + 16) + 8LL) = v6;
        if (v6 == 0) {
          goto LABEL_15;
        }
        v7 = *(_QWORD*)(v1 + 16);
      }
      *(_QWORD*)(v6 + 16) = v7;
    LABEL_15:
      *(_QWORD*)(v1 + 8) = 0;
      *(_QWORD*)(v1 + 16) = 0;
      *(_QWORD*)(v1 + 8) =
          *(_QWORD*)((char*)&CudaDriverRoutine_7398 + (_QWORD)v0);
      *(_QWORD*)((char*)&CudaDriverRoutine_7398 + (_QWORD)v0) = v1;
      v12 = *(_QWORD*)(v1 + 8);
      if (v12 != 0) {
        *(_QWORD*)(v12 + 16) = v1;
      }
    }
  }
  else {
    v8 = CudaDriverRoutine_12e510(1, 160);
    if (v8 == 0) {
      v5 = 0;
      goto LABEL_19;
    }
    v1 = v8;
    v9 = CudaDriverRoutine_12e510(128, 1872);
    *(_QWORD*)v1 = v9;
    if (v9 == 0) {
      *(_OWORD*)v1 = (__typeof__(*(_OWORD*)v1)){0};
      *(_OWORD*)(v1 + 16) = (__typeof__(*(_OWORD*)(v1 + 16))){0};
      *(_OWORD*)(v1 + 32) = (__typeof__(*(_OWORD*)(v1 + 32))){0};
      *(_OWORD*)(v1 + 48) = (__typeof__(*(_OWORD*)(v1 + 48))){0};
      *(_OWORD*)(v1 + 64) = (__typeof__(*(_OWORD*)(v1 + 64))){0};
      *(_OWORD*)(v1 + 80) = (__typeof__(*(_OWORD*)(v1 + 80))){0};
      *(_OWORD*)(v1 + 96) = (__typeof__(*(_OWORD*)(v1 + 96))){0};
      *(_OWORD*)(v1 + 112) = (__typeof__(*(_OWORD*)(v1 + 112))){0};
      *(_OWORD*)(v1 + 128) = (__typeof__(*(_OWORD*)(v1 + 128))){0};
      *(_OWORD*)(v1 + 144) = (__typeof__(*(_OWORD*)(v1 + 144))){0};
      CudaDriverRoutine_12e340(v1);
      v5 = 0;
      goto LABEL_19;
    }
    *(_OWORD*)(v1 + 40) = CudaDriverData_1115bf0;
    *(_OWORD*)(v1 + 56) = CudaDriverData_1115430;
    qmemcpy((void*)(v1 + 72),
            "/0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`"
            "abcdefghijklmnopqrstuvwxyz{|}~",
            80);
    *(_BYTE*)(v1 + 152) = 127;
    *(_OWORD*)(v1 + 24) = CudaDriverData_1115f90;
    *(_QWORD*)(v1 + 8) =
        *(_QWORD*)((char*)&CudaDriverRoutine_7390 + (_QWORD)v0);
    *(_QWORD*)((char*)&CudaDriverRoutine_7390 + (_QWORD)v0) = v1;
    v10 = *(_QWORD*)(v1 + 8);
    if (v10 != 0) {
      *(_QWORD*)(v10 + 16) = v1;
    }
    v11 = *(unsigned __int8*)(v1 + 24);
    v5 = *(_QWORD*)v1 + 1872LL * *(unsigned __int8*)(v1 + 25 + v11);
    *(_BYTE*)(v1 + 24) = v11 + 1;
  }
  if (v5 != 0) {
    *(_QWORD*)(v5 + 16) = v1;
  }
LABEL_19:
  CudaDriverStub_108070((char*)&CudaDriverRoutine_73a0 + (_QWORD)v0);
  return v5;
}

__int64 cuda_driver_d5c60(__int64 a1)
{
  __int64 v1;
  void* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  unsigned __int8 v8;

  v1 = *(_QWORD*)(a1 + 16);
  v3 = CudaDriverData_1422118;
  CudaDriverStub_107f90((char*)&CudaDriverRoutine_73a0 +
                        (_QWORD)CudaDriverData_1422118);
  if (*(unsigned __int8*)(v1 + 24) != 128) {
    goto LABEL_10;
  }
  if (*(_QWORD*)((char*)&CudaDriverRoutine_7398 + (_QWORD)v3) == v1) {
    v4 = *(_QWORD*)(v1 + 8);
    *(_QWORD*)((char*)&CudaDriverRoutine_7398 + (_QWORD)v3) = v4;
    if (v4 == 0) {
      goto LABEL_8;
    }
    v5 = 0;
  }
  else {
    v4 = *(_QWORD*)(v1 + 8);
    *(_QWORD*)(*(_QWORD*)(v1 + 16) + 8LL) = v4;
    if (v4 == 0) {
      goto LABEL_8;
    }
    v5 = *(_QWORD*)(v1 + 16);
  }
  *(_QWORD*)(v4 + 16) = v5;
LABEL_8:
  *(_QWORD*)(v1 + 8) = 0;
  *(_QWORD*)(v1 + 16) = 0;
  *(_QWORD*)(v1 + 8) = *(_QWORD*)((char*)&CudaDriverRoutine_7390 + (_QWORD)v3);
  *(_QWORD*)((char*)&CudaDriverRoutine_7390 + (_QWORD)v3) = v1;
  v6 = *(_QWORD*)(v1 + 8);
  if (v6 != 0) {
    *(_QWORD*)(v6 + 16) = v1;
  }
LABEL_10:
  memset_plt(a1, 0, 1872);
  v7 = -35 * ((unsigned int)(a1 - *(_DWORD*)v1) >> 4);
  v8 = *(_BYTE*)(v1 + 24) - 1;
  *(_BYTE*)(v1 + 24) = v8;
  *(_BYTE*)(v1 + v8 + 25) = v7;
  return CudaDriverStub_108070((char*)&CudaDriverRoutine_73a0 + (_QWORD)v3);
}

__int64 cuda_driver_d5f10(__int64 a1, __int64 a2, _QWORD* a3, char a4)
{
  __int64 result;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;
  __int64 v18;
  struct {
    int v19;
    char gap28_[4];
    __int64 v20;
    __int64 v21;
    __int64 v22;
    char gap56_[8];
    _QWORD* v23;
  } v19_;

  v16_.v17 = 0;
  v18 = a1;
  if (a3 != nullptr) {
    v16_.v17 = *a3;
  }
  if ((a4 & 2) != 0) {
    if (CudaDriverRoutine_1a3840(a2 + 1000, (unsigned __int8*)&v18) != 0) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Attempted to add a graph edge that already exists");
      return 1;
    }
    a1 = v18;
  }
  v16_.v16 = a1;
  result = CudaDriverRoutine_1a32c0(a2 + 1000, (unsigned __int8*)&v16_.v16);
  if ((_DWORD)result == 0) {
    v16_.v16 = a2;
    v7 = CudaDriverRoutine_1a32c0(v18 + 1056, (unsigned __int8*)&v16_.v16);
    if (v7 != 0) {
      v8 = v7;
      CudaDriverRoutine_1a33a0(a2 + 1000, (unsigned __int8*)&v18);
      return v8;
    }
    v9 = v18;
    v10 = *(_QWORD*)(v18 + 24);
    if (*(_DWORD*)(v10 + 4) != 1) {
      goto LABEL_28;
    }
    if (*(_DWORD*)(a2 + 1036) != 1) {
    LABEL_20:
      if (*(_DWORD*)(v9 + 1092) == 1) {
        if (*(_QWORD*)(v10 + 184) == v9) {
          v13 = *(_QWORD*)(v9 + 1168);
          *(_QWORD*)(v10 + 184) = v13;
          if (v13 != 0) {
            v14 = 0;
            goto LABEL_26;
          }
        }
        else {
          v13 = *(_QWORD*)(v9 + 1168);
          *(_QWORD*)(*(_QWORD*)(v9 + 1160) + 1168LL) = v13;
          if (v13 != 0) {
            v14 = *(_QWORD*)(v9 + 1160);
          LABEL_26:
            *(_QWORD*)(v13 + 1160) = v14;
          }
        }
        *(_OWORD*)(v9 + 1160) = (__typeof__(*(_OWORD*)(v9 + 1160))){0};
      }
    LABEL_28:
      if (*(_DWORD*)((char*)((_UNKNOWN*)0xACLL) +
                     (_QWORD)CudaDriverData_1432140) != 0) {
        v19_.v19 = 56;
        v15 = *(_QWORD*)(v9 + 24);
        v19_.v22 = v9;
        v19_.v23 = a3;
        v19_.v20 = v15;
        v19_.v21 = a2;
        cuda_driver_20b420(2u, 0x2Bu, (__int64)&v19_.v19);
      }
      return 0;
    }
    if (*(_QWORD*)(v10 + 192) == a2) {
      v11 = *(_QWORD*)(a2 + 1152);
      *(_QWORD*)(v10 + 192) = v11;
      if (v11 == 0) {
        goto LABEL_19;
      }
      v12 = 0;
    }
    else {
      v11 = *(_QWORD*)(a2 + 1152);
      *(_QWORD*)(*(_QWORD*)(a2 + 1144) + 1152LL) = v11;
      if (v11 == 0) {
        goto LABEL_19;
      }
      v12 = *(_QWORD*)(a2 + 1144);
    }
    *(_QWORD*)(v11 + 1144) = v12;
  LABEL_19:
    *(_OWORD*)(a2 + 1144) = (__typeof__(*(_OWORD*)(a2 + 1144))){0};
    v10 = *(_QWORD*)(v9 + 24);
    if (*(_DWORD*)(v10 + 4) != 1) {
      goto LABEL_28;
    }
    goto LABEL_20;
  }
  return result;
}

__int64 cuda_driver_d6100(__int64* a1, __int64 a2, int a3, __int64* a4,
                          _QWORD* a5, __int64 a6, __int64 a7, int a8)
{
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  unsigned int v30;
  _QWORD v31[3];

  v16 = cuda_driver_d5a80();
  if (v16 == 0) {
    return 2;
  }
  v17 = v16;
  CudaDriverRoutine_1a2dd0(v16 + 1000, 16, 8, 8, v16 + 1424, 0xE0u);
  CudaDriverRoutine_1a2dd0(v17 + 1056, 16, 8, 8, v17 + 1648, 0xE0u);
  v18 = *(_DWORD*)(a2 + 204);
  *(_DWORD*)(a2 + 204) = v18 + 1;
  *(_QWORD*)(v17 + 24) = a2;
  *(_DWORD*)v17 = v18;
  *(_DWORD*)(v17 + 4) = a3;
  v19 = *(_QWORD*)(a2 + 112);
  if (v19 != 0) {
    *(_QWORD*)(v17 + 1128) = v19;
    v20 = *(_QWORD*)(*(_QWORD*)(a2 + 112) + 1136LL);
    *(_QWORD*)(v17 + 1136) = v20;
    if (v20 != 0) {
      *(_QWORD*)(v20 + 1128) = v17;
    }
    *(_QWORD*)(*(_QWORD*)(a2 + 112) + 1136LL) = v17;
  }
  else {
    *(_QWORD*)(v17 + 1136) = *(_QWORD*)(a2 + 104);
    *(_QWORD*)(a2 + 104) = v17;
    v22 = *(_QWORD*)(v17 + 1136);
    if (v22 != 0) {
      *(_QWORD*)(v22 + 1128) = v17;
    }
  }
  v23 = *(_DWORD*)(a2 + 200);
  *(_QWORD*)(a2 + 112) = v17;
  *(_DWORD*)(a2 + 200) = v23 + 1;
  *(_DWORD*)(v17 + 1288) = a8;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0xA8LL) + (_QWORD)CudaDriverData_1432140) !=
      0) {
    v31[1] = *(_QWORD*)(v17 + 24);
    v31[2] = v17;
    v24 = *(_DWORD*)(v17 + 4);
    LODWORD(v31[0]) = 24;
    HIDWORD(v31[0]) = v24;
    cuda_driver_20b420(2u, 0x2Au, (__int64)v31);
  }
  if (*(_DWORD*)(a2 + 4) == 1) {
    *(_QWORD*)(v17 + 1152) = *(_QWORD*)(a2 + 192);
    *(_QWORD*)(a2 + 192) = v17;
    v25 = *(_QWORD*)(v17 + 1152);
    if (v25 != 0) {
      *(_QWORD*)(v25 + 1144) = v17;
    }
    *(_QWORD*)(v17 + 1168) = *(_QWORD*)(a2 + 184);
    *(_QWORD*)(a2 + 184) = v17;
    v26 = *(_QWORD*)(v17 + 1168);
    if (v26 != 0) {
      *(_QWORD*)(v26 + 1160) = v17;
    }
  }
  if (a7 != 0) {
    if (a4 != nullptr) {
      if (a5 != nullptr) {
        while (1) {
          v27 = *a4++;
          LODWORD(result) = cuda_driver_d5f10(v27, v17, a5, 2);
          if ((_DWORD)result != 0) {
            break;
          }
          --a7;
          ++a5;
          if (a7 == 0) {
            goto LABEL_28;
          }
        }
      }
      else {
        while (1) {
          v28 = *a4++;
          LODWORD(result) = cuda_driver_d5f10(v28, v17, nullptr, 2);
          if ((_DWORD)result != 0) {
            break;
          }
          if (--a7 == 0) {
            goto LABEL_28;
          }
        }
      }
    }
    else {
      v29 = (_QWORD*)(a6 + 8);
      while (1) {
        LODWORD(result) = cuda_driver_d5f10(*(v29 - 1), v17, v29, 2);
        if ((_DWORD)result != 0) {
          break;
        }
        --a7;
        v29 += 2;
        if (a7 == 0) {
          goto LABEL_28;
        }
      }
    }
    goto LABEL_29;
  }
LABEL_28:
  result = CudaDriverRoutine_d4000(v17);
  if ((_DWORD)result != 0) {
  LABEL_29:
    v30 = result;
    *(_DWORD*)(v17 + 4) = 5;
    cuda_driver_c3200(v17, 0);
    return v30;
  }
  *a1 = v17;
  return result;
}

__int64 cuda_driver_d6360(int** a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, _QWORD* a7, __int64 a8,
                          int a9)
{
  __int64 result;
  int* v13;
  unsigned int v14;
  unsigned int v15;
  unsigned __int64 v16;
  __int16 v17;
  char* v18;
  int v19;
  int* v20;
  _QWORD v21[3];

  v20 = nullptr;
  result = cuda_driver_d6100((__int64*)&v20, a2, 0, a3, a4, a5, a6, a9);
  if ((_DWORD)result == 0) {
    v13 = v20;
    v14 = cuda_driver_db0e0(v20, a7, a8);
    if (v14 != 0) {
      v15 = v14;
      cuda_driver_c3200((__int64)v13, 0);
      return v15;
    }
    else {
      v16 = (*(__int64 (**)(__int64))(
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*a7 + 32LL) + 24LL) + 64LL) +
          18424LL))(44);
      *(_DWORD*)((char*)((_UNKNOWN*)0x378LL) + (_QWORD)v13) = 0;
      if (v16 <= 1) {
        v17 = 0;
      }
      else {
        v17 = 256;
      }
      *(__int16*)((char*)((__int16*)0x37CLL) + (_QWORD)v13) = v17;
      v18 = (char*)v13 + 894;
      *(_OWORD*)(v13 + 214) = (__typeof__(*(_OWORD*)(v13 + 214))){0};
      *(_OWORD*)(v13 + 218) = (__typeof__(*(_OWORD*)(v13 + 218))){0};
      *(_OWORD*)((char*)v13 + 894) =
          (__typeof__(*(_OWORD*)((char*)v13 + 894))){0};
      *(_OWORD*)((char*)v13 + 910) =
          (__typeof__(*(_OWORD*)((char*)v13 + 910))){0};
      *(_OWORD*)((char*)((char*)0x20LL) + (_QWORD)v18) =
          (__typeof__(*(_OWORD*)((char*)((char*)0x20LL) + (_QWORD)v18))){0};
      *(_OWORD*)((char*)((char*)0x20LL) + (_QWORD)v18 + 16) =
          (__typeof__(*(_OWORD*)((char*)((char*)0x20LL) + (_QWORD)v18 + 16))){
              0};
      *(_OWORD*)((char*)((__int64*)0x38LL) + (_QWORD)v18 + 2) =
          (__typeof__(*(_OWORD*)((char*)((__int64*)0x38LL) + (_QWORD)v18 + 2))){
              0};
      *a1 = v13;
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) +
                     *(__int64*)((char*)((__int64*)0x10LL) +
                                 (_QWORD)CudaDriverData_14225e0) +
                     4) != 0) {
        v19 = *(int*)((char*)((int*)0x4LL) + (_QWORD)v13);
        LODWORD(v21[0]) = 24;
        HIDWORD(v21[0]) = v19;
        v21[1] = *(__int64*)((char*)((__int64*)0x18LL) + (_QWORD)v13);
        v21[2] = v13;
        cuda_driver_20b420(2u, 0x25u, (__int64)v21);
      }
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_d6880(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, _OWORD* a7, int a8)
{
  __int64 result;
  __int64 v11;
  void* v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  struct {
    _DWORD v17[2];
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v17_;

  v16 = 0;
  result = cuda_driver_d6100(&v16, a2, 3, a3, a4, a5, a6, a8);
  if ((_DWORD)result == 0) {
    v11 = v16;
    *(_OWORD*)((char*)((char*)0x20LL) + v16) = *a7;
    v12 = CudaDriverData_14225e0;
    if (*(_DWORD*)((char*)((__int64*)0x30LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) +
                              (_QWORD)CudaDriverData_14225e0)) != 0) {
      v17_.v17[0] = 40;
      v13 = *(__int64*)((char*)((__int64*)0x18LL) + v11);
      v17_.v20 = v11 + 32;
      v17_.v18 = v13;
      v17_.v19 = v11;
      cuda_driver_20b420(0x13u, 0xCu, (__int64)v17_.v17);
      result = 0;
    }
    *a1 = v11;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) +
                   *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v12) + 4) !=
        0) {
      v14 = *(int*)((char*)((int*)0x4LL) + v11);
      v15 = result;
      v17_.v17[0] = 24;
      v17_.v17[1] = v14;
      v17_.v18 = *(__int64*)((char*)((__int64*)0x18LL) + v11);
      v17_.v19 = v11;
      cuda_driver_20b420(2u, 0x25u, (__int64)v17_.v17);
      return v15;
    }
  }
  return result;
}

__int64 cuda_driver_d6980(__int64 result, _OWORD* a2)
{
  __int64 v2;
  struct {
    int v3;
    char gap12_[4];
    __int64 v4;
    __int64 v5;
    __int64 v6;
  } v3_;

  *(_OWORD*)(result + 32) = *a2;
  if (*(_DWORD*)((char*)((__int64*)0x30LL) +
                 *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) +
                            (_QWORD)CudaDriverData_14225e0)) != 0) {
    v3_.v3 = 40;
    v2 = *(_QWORD*)(result + 24);
    v3_.v6 = result + 32;
    v3_.v4 = v2;
    v3_.v5 = result;
    return cuda_driver_20b420(0x13u, 0xCu, (__int64)&v3_.v3);
  }
  return result;
}

__int64 cuda_driver_d69f0(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, __int64* a7, __int64 a8,
                          int a9)
{
  __int64 result;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  _QWORD v18[3];

  v17 = 0;
  result = cuda_driver_d6100(&v17, a2, 2, a3, a4, a5, a6, a9);
  if ((_DWORD)result == 0) {
    v14 = v17;
    *(_QWORD*)((char*)((_UNKNOWN*)0x140LL) + v17) = *(_QWORD*)(a2 + 120);
    *(_QWORD*)(a2 + 120) = v14 + 32;
    v15 = *(_QWORD*)((char*)((_UNKNOWN*)0x140LL) + v14);
    if (v15 != 0) {
      *(_QWORD*)(v15 + 280) = v14 + 32;
    }
    if (*(_QWORD*)(a2 + 128) == 0) {
      *(_QWORD*)(a2 + 128) = *(_QWORD*)(a2 + 120);
    }
    CudaDriverRoutine_d6af0(v14, a7, a8);
    result = 0;
    *(_DWORD*)((char*)((char*)0x20LL) + v14) = 5;
    *a1 = v14;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)CudaDriverData_1432140 +
                   4) != 0) {
      v16 = *(int*)((char*)((int*)0x4LL) + v14);
      LODWORD(v18[0]) = 24;
      HIDWORD(v18[0]) = v16;
      v18[1] = *(__int64*)((char*)((__int64*)0x18LL) + v14);
      v18[2] = v14;
      cuda_driver_20b420(2u, 0x25u, (__int64)v18);
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_d7810(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, char a7, __int64 a8,
                          __int64 a9, __int64 a10, int a11)
{
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  _QWORD v38[3];

  v37 = 0;
  if (a7 != 0 || *(_DWORD*)(a8 + 8) != 1) {
    goto LABEL_9;
  }
  v19 = *(_QWORD*)a8;
  if (*(_QWORD*)a8 != 0) {
    if (*(_DWORD*)(v19 + 4) == 1) {
      goto LABEL_8;
    }
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"The source graph pointer is invalid");
  }
  else {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"The source graph pointer is NULL");
  }
  v19 = 0;
LABEL_8:
  result = cuda_driver_d3a00(a2, v19);
  if ((_DWORD)result != 0) {
    return result;
  }
LABEL_9:
  result = cuda_driver_d6100(&v37, a2, 4, a3, a4, a5, a6, a11);
  if ((_DWORD)result != 0) {
    return result;
  }
  v21 = v37;
  *(_OWORD*)(v37 + 32) = *(_OWORD*)a8;
  if (a7 != 0 || *(_DWORD*)(a8 + 8) != 1) {
    v24 = *(_QWORD*)(v21 + 24);
    v25 = a10;
    v26 = *(_DWORD*)(v24 + 4);
    if (a10 == 0 && v26 == 1) {
      if (*(_QWORD*)(v24 + 336) != 0) {
        v25 = *(_QWORD*)(v24 + 336);
      }
      else {
        v25 = *(_QWORD*)(v21 + 24);
      }
    }
    v27 = CudaDriverRoutine_d6ca0_alt1(v38, a9, v26, v25);
    if (v27 != 0) {
      v28 = v27;
    LABEL_22:
      cuda_driver_c3200(v21, 0);
      return v28;
    }
    if (*(_DWORD*)(*(_QWORD*)(v21 + 24) + 4LL) == 1) {
      *(_DWORD*)(v38[0] + 328LL) = 1;
    }
    v29 = *(_QWORD*)(v21 + 48);
    if (v29 != 0) {
      cuda_driver_c36c0(v29);
    }
    *(_QWORD*)(v21 + 48) = v38[0];
    goto LABEL_28;
  }
  v22 = *(_QWORD*)a8;
  if (*(_QWORD*)a8 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"The source graph pointer is NULL");
    goto LABEL_39;
  }
  v23 = *(_QWORD*)a8;
  if (*(_DWORD*)(v22 + 4) != 1) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"The source graph pointer is invalid");
  LABEL_39:
    v22 = *(_QWORD*)a8;
    v23 = 0;
  }
  *(_QWORD*)(v21 + 32) = v22;
  *(_QWORD*)(v21 + 48) = v23;
  v35 = cuda_driver_d3ae0(v21, *(_QWORD*)(a2 + 312), *(_QWORD*)(v23 + 312));
  if (v35 != 0) {
    v28 = v35;
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Failed to setup memory allocation/free "
                                     "nodes for child graph");
    goto LABEL_22;
  }
  if (*(_QWORD*)(a2 + 336) != 0) {
    v36 = *(_QWORD*)(a2 + 336);
  }
  else {
    v36 = a2;
  }
  CudaDriverRoutine_d77c0(v23, v36);
  if (CudaDriverRoutine_d47e0(v23)) {
    *(_BYTE*)(a2 + 320) = 1;
  }
LABEL_28:
  v30 = *(_QWORD*)(a2 + 160);
  if (v30 != 0) {
    *(_QWORD*)(v21 + 1184) = v30;
    v31 = *(_QWORD*)(*(_QWORD*)(a2 + 160) + 1192LL);
    *(_QWORD*)(v21 + 1192) = v31;
    if (v31 != 0) {
      *(_QWORD*)(v31 + 1184) = v21;
    }
    *(_QWORD*)(*(_QWORD*)(a2 + 160) + 1192LL) = v21;
  }
  else {
    *(_QWORD*)(v21 + 1192) = *(_QWORD*)(a2 + 152);
    *(_QWORD*)(a2 + 152) = v21;
    v32 = *(_QWORD*)(v21 + 1192);
    if (v32 != 0) {
      *(_QWORD*)(v32 + 1184) = v21;
    }
  }
  v33 = *(_QWORD*)(a2 + 168) + 1LL;
  *(_QWORD*)(a2 + 160) = v21;
  *(_QWORD*)(a2 + 168) = v33;
  *a1 = v21;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)CudaDriverData_1432140 +
                 4) != 0) {
    v34 = *(_DWORD*)(v21 + 4);
    LODWORD(v38[0]) = 24;
    HIDWORD(v38[0]) = v34;
    v38[1] = *(_QWORD*)(v21 + 24);
    v38[2] = v21;
    cuda_driver_20b420(2u, 0x25u, (__int64)v38);
  }
  return 0;
}

__int64 cuda_driver_d7b40(__int64* a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v5;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18[4];

  v5 = *(_DWORD*)a3;
  v16 = a3;
  if (v5 == 1) {
    v9 = a3;
    v16 = *(_QWORD*)(a3 + 168);
    if (*(_QWORD*)(a2 + 336) != 0) {
      v10 = *(_QWORD*)(a2 + 336);
    }
    else {
      v10 = a2;
    }
    if (*(_DWORD*)(v10 + 252) == 0) {
      goto LABEL_16;
    }
  }
  else {
    v9 = 0;
    if (*(_QWORD*)(a2 + 336) != 0) {
      v10 = *(_QWORD*)(a2 + 336);
    }
    else {
      v10 = a2;
    }
    if (*(_DWORD*)(v10 + 252) == 0) {
    LABEL_16:
      CudaDriverRoutine_1a2dd0(v10 + 216, 40, 8, 0, 0, 0);
      v11 = CudaDriverRoutine_1a3840(v10 + 216, (unsigned __int8*)&v16);
      if (v11 == 0) {
        goto LABEL_17;
      }
      goto LABEL_12;
    }
  }
  v11 = CudaDriverRoutine_1a3840(v10 + 216, (unsigned __int8*)&v16);
  if (v11 == 0) {
  LABEL_17:
    memset(v18, 0, sizeof(v18));
    v17 = v16;
    CudaDriverRoutine_12ce00(v18, 0x18u, 0xF0u);
    result = CudaDriverRoutine_1a32c0(v10 + 216, (unsigned __int8*)&v17);
    if ((_DWORD)result != 0) {
      return result;
    }
    v11 = CudaDriverRoutine_1a3840(v10 + 216, (unsigned __int8*)&v16);
    result = CudaDriverRoutine_12cef0((__int64*)(v11 + 8), &v15);
    if ((_DWORD)result != 0) {
      return result;
    }
    goto LABEL_13;
  }
LABEL_12:
  result = CudaDriverRoutine_12cef0((__int64*)(v11 + 8), &v15);
  if ((_DWORD)result != 0) {
    return result;
  }
LABEL_13:
  *(_DWORD*)v15 = a4;
  *(_DWORD*)(v15 + 4) = a5;
  v13 = v15;
  *(_BYTE*)(v15 + 8) = 0;
  *(_QWORD*)(v13 + 16) = v9;
  ++*(_DWORD*)(v10 + 208);
  v14 = CudaDriverStub_12d100(v11 + 8);
  *a1 = v14;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x154LL) +
                 *(__int64*)((char*)((__int64*)0x10LL) +
                             (_QWORD)CudaDriverData_14225e0)) != 0) {
    v18[0] = v14;
    v18[1] = v10;
    v18[2] = v16;
    LODWORD(v17) = 40;
    cuda_driver_20b420(2u, 0x55u, (__int64)&v17);
  }
  return 0;
}

__int64 cuda_driver_d7cf0(__int64 result, __int64* a2, __int64 a3)
{
  __int64 v3;
  struct {
    int v4;
    char gap12_[4];
    __int64 v5;
    __int64 v6;
    __int64 v7;
  } v4_;

  if (*(_DWORD*)((char*)((_UNKNOWN*)0x154LL) +
                 (_QWORD)CudaDriverData_1432140) != 0) {
    v4_.v4 = 40;
    if (a2 != nullptr) {
      v3 = *a2;
    }
    else {
      v3 = 0;
    }
    v4_.v5 = v3;
    v4_.v6 = result;
    v4_.v7 = a3;
    return cuda_driver_20b420(2u, 0x55u, (__int64)&v4_.v4);
  }
  return result;
}

__int64 cuda_driver_d7d60(_QWORD* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, unsigned __int64* a7, char a8,
                          __int64 a9)
{
  unsigned __int64 v9;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 result;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  int v28;
  unsigned __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 i;
  __int64 v45;
  _QWORD* v46;
  char v47;
  unsigned __int64 v48;
  __int64 v49;
  struct {
    _DWORD v50[2];
    __int64 v51;
    __int64 v52;
  } v50_;

  v9 = a7[3];
  v17 = 0;
  v48 = v9;
  v49 = 0;
  if (*(_DWORD*)v9 == 1) {
    v17 = v9;
    v48 = *(_QWORD*)(v9 + 168);
  }
  v18 = a9;
  if (*(_DWORD*)(a2 + 4) != 1) {
    v47 = a8;
    v22 = 0;
    v21 = 0;
    goto LABEL_10;
  }
  if (*a7 == 0) {
  LABEL_8:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Invalid conditional handle value");
    return 1;
  }
  v47 = a8;
  if (a9 == 0) {
    if (*(_QWORD*)(a2 + 336) != 0) {
      v18 = *(_QWORD*)(a2 + 336);
    }
    else {
      v18 = a2;
    }
    v19 = CudaDriverRoutine_1a3840(v18 + 216, (unsigned __int8*)&v48);
    if (v19 != 0) {
      goto LABEL_7;
    }
  LABEL_22:
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"No conditional handles exist for the provided context");
    return 1;
  }
  v19 = CudaDriverRoutine_1a3840(a9 + 216, (unsigned __int8*)&v48);
  if (v19 == 0) {
    goto LABEL_22;
  }
LABEL_7:
  v46 = a1;
  v20 = *a7;
  v21 = v19;
  if (v20 > CudaDriverStub_12d100(v19 + 8)) {
    goto LABEL_8;
  }
  v30 = CudaDriverRoutine_12cff0((_QWORD*)(v21 + 8), *a7 - 1);
  a1 = v46;
  if (*(_BYTE*)(v30 + 8) != 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Handle %ld already in use", *a7);
    return 1;
  }
  if (*(_QWORD*)(v30 + 16) != v17) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Handle and conditional node need to "
                                     "belong to the same green context");
    return 1;
  }
  v22 = v30;
LABEL_10:
  result = cuda_driver_d6100(&v49, a2, 13, a3, a4, a5, a6, 2);
  if ((_DWORD)result != 0) {
    return result;
  }
  v24 = CudaDriverRoutine_12e510(16LL * *((unsigned int*)a7 + 3), 1);
  if (v24 == 0) {
    goto LABEL_44;
  }
  v25 = v49;
  v26 = (_QWORD*)v24;
  v27 = v22;
  *(_QWORD*)(v49 + 64) = v24 + 8LL * *((unsigned int*)a7 + 3);
  *(_QWORD*)(v25 + 32) = *a7;
  *(_DWORD*)(v25 + 40) = *((_DWORD*)a7 + 2);
  v28 = *((_DWORD*)a7 + 3);
  *(_QWORD*)(v25 + 48) = v24;
  *(_DWORD*)(v25 + 44) = v28;
  *(_QWORD*)(v25 + 56) = a7[3];
  *(_QWORD*)(v25 + 88) = v21 + 8;
  *(_QWORD*)(v25 + 1200) = a7[3];
  if (v47 == 0) {
    v31 = a1;
    if (v18 != 0) {
      if (*(_DWORD*)(v18 + 4) == 2) {
        v32 = v18;
      }
      else {
        v32 = 0;
      }
      if (*((_DWORD*)a7 + 3) == 0) {
        goto LABEL_38;
      }
    }
    else {
      v32 = 0;
      if (*((_DWORD*)a7 + 3) == 0) {
      LABEL_38:
        a7[2] = (unsigned __int64)v26;
        a1 = v31;
        goto LABEL_39;
      }
    }
    v33 = 0;
    v34 = (__int64*)v24;
    while (1) {
      LODWORD(v24) = cuda_driver_c30d0(v34, *(_DWORD*)(a2 + 4), v32);
      if ((_DWORD)v24 != 0) {
        goto LABEL_44;
      }
      v35 = *v34++;
      ++v33;
      *(_QWORD*)(v35 + 336) = v18;
      if (v33 >= *((unsigned int*)a7 + 3)) {
        goto LABEL_38;
      }
    }
  }
  if (*((_DWORD*)a7 + 3) == 0) {
  LABEL_39:
    if (*(_DWORD*)(a2 + 4) == 1) {
      *(_BYTE*)(v27 + 8) = 1;
      ++*(_DWORD*)(v18 + 344);
    }
    v36 = v49;
    *a1 = v49;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) +
                   *(__int64*)((char*)((__int64*)0x10LL) +
                               (_QWORD)CudaDriverData_14225e0) +
                   4) != 0) {
      v50_.v50[0] = 24;
      if (v36 != 0) {
        v37 = *(_QWORD*)(v36 + 24);
        v50_.v50[1] = *(_DWORD*)(v36 + 4);
      }
      else {
        v37 = 0;
      }
      v50_.v51 = v37;
      v50_.v52 = v36;
      cuda_driver_20b420(2u, 0x25u, (__int64)v50_.v50);
    }
    return 0;
  }
  v29 = 0;
  while (1) {
    LODWORD(v24) = CudaDriverRoutine_d6ca0_alt1(
        v26, *(_QWORD*)(a7[2] + 8 * v29), *(_DWORD*)(a2 + 4), v18);
    if ((_DWORD)v24 != 0) {
      break;
    }
    ++v29;
    ++v26;
    if (v29 >= *((unsigned int*)a7 + 3)) {
      goto LABEL_39;
    }
  }
LABEL_44:
  v38 = v49;
  v39 = v24;
  v40 = *(_QWORD*)(v49 + 24);
  if (*(_DWORD*)(v40 + 4) == 1) {
    if (*(_QWORD*)(v40 + 336) != 0) {
      v40 = *(_QWORD*)(v40 + 336);
    }
    --*(_DWORD*)(v40 + 344);
    v41 = *(_QWORD**)(v38 + 88);
    if (v41 != nullptr) {
      *(_BYTE*)(CudaDriverRoutine_12cff0(v41, *(_QWORD*)(v38 + 32) - 1LL) + 8) =
          0;
      *(_QWORD*)(v38 + 88) = 0;
    }
  }
  v42 = *(_QWORD*)(v38 + 48);
  if (v42 != 0) {
    v43 = *(unsigned int*)(v38 + 44);
    if ((_DWORD)v43 != 0) {
      for (i = 0; i < v43; ++i) {
        v45 = *(_QWORD*)(*(_QWORD*)(v38 + 48) + 8 * i);
        if (v45 != 0) {
          cuda_driver_c36c0(v45);
          v43 = *(unsigned int*)(v38 + 44);
        }
      }
      v42 = *(_QWORD*)(v38 + 48);
    }
  }
  CudaDriverRoutine_12e340(v42);
  return v39;
}

__int64 cuda_driver_d8220(_QWORD* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6)
{
  __int64 result;
  __int64 v8;
  __int64 v9;
  struct {
    _DWORD v10[2];
    __int64 v11;
    __int64 v12;
  } v10_;
  __int64 v13;

  v13 = 0;
  result = cuda_driver_d6100(&v13, a2, 5, a3, a4, a5, a6, 2);
  if ((_DWORD)result == 0) {
    v8 = v13;
    *a1 = v13;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) +
                   *(__int64*)((char*)((__int64*)0x10LL) +
                               (_QWORD)CudaDriverData_14225e0) +
                   4) != 0) {
      v10_.v10[0] = 24;
      if (v8 != 0) {
        v9 = *(__int64*)((char*)((__int64*)0x18LL) + v8);
        v10_.v10[1] = *(int*)((char*)((int*)0x4LL) + v8);
      }
      else {
        v9 = 0;
      }
      v10_.v11 = v9;
      v10_.v12 = v8;
      cuda_driver_20b420(2u, 0x25u, (__int64)v10_.v10);
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_d82e0(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, __int64 a7, char a8, int a9)
{
  int v15;
  __int64 result;
  __int64 v17;
  int v18;
  __int64 v19;
  _QWORD v20[3];

  v19 = 0;
  if (a8 != 0) {
    v15 = 7;
  }
  else {
    v15 = 6;
  }
  result = cuda_driver_d6100(&v19, a2, v15, a3, a4, a5, a6, a9);
  if ((_DWORD)result == 0) {
    v17 = v19;
    *(_QWORD*)((char*)((char*)0x20LL) + v19) = a7;
    *a1 = v17;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) +
                   *(__int64*)((char*)((__int64*)0x10LL) +
                               (_QWORD)CudaDriverData_14225e0) +
                   4) != 0) {
      v18 = *(int*)((char*)((int*)0x4LL) + v17);
      LODWORD(v20[0]) = 24;
      HIDWORD(v20[0]) = v18;
      v20[1] = *(__int64*)((char*)((__int64*)0x18LL) + v17);
      v20[2] = v17;
      cuda_driver_20b420(2u, 0x25u, (__int64)v20);
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_d8550(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, __int128* a7, __int64 a8)
{
  unsigned int v10;
  _QWORD* v11;
  unsigned int v12;
  __int64 v14;
  struct {
    _DWORD v15[2];
    __int64 v16;
    _QWORD* v17;
  } v15_;
  _QWORD* v18;

  v18 = nullptr;
  v10 = cuda_driver_d6100((__int64*)&v18, a2, 8, a3, a4, a5, a6, a8);
  v11 = v18;
  if (v10 != 0 || (v10 = CudaDriverRoutine_d8640(v18, a7)) != 0) {
    v12 = v10;
    cuda_driver_c3200((__int64)v11, 0);
    return v12;
  }
  else {
    *a1 = (__int64)v11;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)CudaDriverData_1432140 +
                   4) != 0) {
      v15_.v15[0] = 24;
      if (v11 != nullptr) {
        v14 = *(__int64*)((char*)((__int64*)0x18LL) + (_QWORD)v11);
        v15_.v15[1] = *(int*)((char*)((int*)0x4LL) + (_QWORD)v11);
      }
      else {
        v14 = 0;
      }
      v15_.v16 = v14;
      v15_.v17 = v11;
      cuda_driver_20b420(2u, 0x25u, (__int64)v15_.v15);
    }
    return 0;
  }
}

__int64 cuda_driver_d8770(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                          __int64 a5, __int64 a6, __int128* a7, __int64 a8)
{
  unsigned int v10;
  _QWORD* v11;
  unsigned int v12;
  __int64 v14;
  struct {
    _DWORD v15[2];
    __int64 v16;
    _QWORD* v17;
  } v15_;
  _QWORD* v18;

  v18 = nullptr;
  v10 = cuda_driver_d6100((__int64*)&v18, a2, 9, a3, a4, a5, a6, a8);
  v11 = v18;
  if (v10 != 0 || (v10 = CudaDriverRoutine_d8640(v18, a7)) != 0) {
    v12 = v10;
    cuda_driver_c3200((__int64)v11, 0);
    return v12;
  }
  else {
    *a1 = (__int64)v11;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)CudaDriverData_1432140 +
                   4) != 0) {
      v15_.v15[0] = 24;
      if (v11 != nullptr) {
        v14 = *(__int64*)((char*)((__int64*)0x18LL) + (_QWORD)v11);
        v15_.v15[1] = *(int*)((char*)((int*)0x4LL) + (_QWORD)v11);
      }
      else {
        v14 = 0;
      }
      v15_.v16 = v14;
      v15_.v17 = v11;
      cuda_driver_20b420(2u, 0x25u, (__int64)v15_.v15);
    }
    return 0;
  }
}

#pragma GCC visibility pop
