#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CudaDriverRoutine_208000(_QWORD* result, __int64);
_QWORD* CudaDriverRoutine_2087f0(_QWORD* result, __int64);
_QWORD* CudaDriverRoutine_4d080(_QWORD* result);
_QWORD* CudaDriverRoutine_5c020(_QWORD* result, __int64, __int64);
__int64* CudaDriverRoutine_203100(__int64* result);
__int64* cuda_driver_4d860(__int64* result, _QWORD*);
__int64 CudaDriverRoutine_101ff0(__int64);
__int64 CudaDriverRoutine_1059a0(__int64, _QWORD*, __int64, int, __int64,
                                 __int64, char);
__int64 CudaDriverRoutine_107f40(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_107f60(_QWORD*);
__int64 CudaDriverRoutine_108450(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_108490(_QWORD*);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_10bbc0(__int64*, int*);
__int64 CudaDriverRoutine_10e060(__int64);
__int64 CudaDriverRoutine_10ef20(__int64 result, __int64);
__int64 CudaDriverRoutine_112f60(__int64);
__int64 CudaDriverRoutine_113110(__int64, __int64, __int64, __int64, __int64,
                                 __int16);
__int64 CudaDriverRoutine_113ee0(__int64, char);
__int64 CudaDriverRoutine_114200(__int64, __int64, unsigned __int8);
__int64 CudaDriverRoutine_115f80(__int64, char);
__int64 CudaDriverRoutine_116c40(__int64);
__int64 CudaDriverRoutine_117620(__int64, __int64);
__int64 CudaDriverRoutine_118780();
__int64 CudaDriverRoutine_119030(__int64, __int64, __int64, __int64, __int64,
                                 __int64, char);
__int64 CudaDriverRoutine_1199d0(__int64);
__int64 CudaDriverRoutine_119bc0(__int64, char);
__int64 CudaDriverRoutine_119c90();
__int64 CudaDriverRoutine_11c520(__int64, unsigned __int16, _QWORD*, char,
                                 _QWORD*);
__int64 CudaDriverRoutine_11ccb0(__int64, unsigned int);
__int64 CudaDriverRoutine_121b30(__int64 result, char);
__int64 CudaDriverRoutine_121b80(__int64 result, _QWORD*);
__int64 CudaDriverRoutine_121b90(__int64 result, atomic_uint**);
__int64 CudaDriverRoutine_121bb0(__int64 result);
__int64 CudaDriverRoutine_121bd0(__int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_121c60(__int64*);
__int64 CudaDriverRoutine_125ad0();
__int64 CudaDriverRoutine_125af0(__int64, __int64*, _DWORD*);
__int64 CudaDriverRoutine_126fa0(__int64);
__int64 CudaDriverRoutine_127070(_QWORD*);
__int64 CudaDriverRoutine_129da0(unsigned __int64*);
__int64 CudaDriverRoutine_12a1d0(unsigned __int64);
__int64 CudaDriverRoutine_12b580(_QWORD*, __int64, unsigned int);
__int64 CudaDriverRoutine_12c9c0();
__int64 CudaDriverRoutine_12d560(__int64, __int64);
__int64 CudaDriverRoutine_12df40(_DWORD*, void (*)(void));
__int64 CudaDriverRoutine_12e270(_QWORD*);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e4c0(_QWORD*);
__int64 CudaDriverRoutine_12e4f0(_QWORD*);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_12ec20(__int64 result);
__int64 CudaDriverRoutine_138810(unsigned int*, __int64);
__int64 CudaDriverRoutine_138910(__int64, unsigned int);
__int64 CudaDriverRoutine_1a2dd0(__int64 result, __int64, int, int, __int64,
                                 unsigned __int64);
__int64 CudaDriverRoutine_1a39e0(__int64);
__int64 CudaDriverRoutine_1a4200(__int64, __int64, unsigned __int64);
__int64 CudaDriverRoutine_1ba480(_QWORD*, __int64);
__int64 CudaDriverRoutine_1ba4f0(__int64 result, __int64);
__int64 CudaDriverRoutine_1ba580(__int64);
__int64 CudaDriverRoutine_1ba7d0(__int64, __int64);
__int64 CudaDriverRoutine_1bb6a0(unsigned __int64, unsigned __int64);
__int64 CudaDriverRoutine_1bc330(__int64, __int64, char);
__int64 CudaDriverRoutine_1d50e0(_QWORD*, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_1d5df0(_QWORD*, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_1d6380(__int64, __int64, int, __int64);
__int64 CudaDriverRoutine_1d6cc0(_QWORD*, __int64, int, __int64);
__int64 CudaDriverRoutine_1d9c30(__int64 result);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverRoutine_1dbfd0(__int64);
__int64 CudaDriverRoutine_1dc000(__int64);
__int64 CudaDriverRoutine_1fc4a0(__int64, __int64, unsigned int, bool*);
__int64 CudaDriverRoutine_1fc5a0(unsigned int*, __int64, int, bool*);
__int64 CudaDriverRoutine_1fc720(__int64, __int64, unsigned int);
__int64 CudaDriverRoutine_200200(__int64, unsigned int, int, __int64);
__int64 CudaDriverRoutine_202e80(__int64);
__int64 CudaDriverRoutine_202f80(__int64, __int64, unsigned int, char, __int64*,
                                 __int64);
__int64 CudaDriverRoutine_203600(__int64, _QWORD*);
__int64 CudaDriverRoutine_203f30(__int64);
__int64 CudaDriverRoutine_205fa0(int, __int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_206060(__int64, __int64);
__int64 CudaDriverRoutine_206120(__int64, __int64);
__int64 CudaDriverRoutine_2075f0(__int64);
__int64 CudaDriverRoutine_207630(__int64, int, __int64, __int64);
__int64 CudaDriverRoutine_207710(__int64, int, __int64);
__int64 CudaDriverRoutine_209520(__int64);
__int64 CudaDriverRoutine_2095d0(__int64 result);
__int64 CudaDriverRoutine_4cfb0(_QWORD*, unsigned __int64);
__int64 CudaDriverRoutine_4d0d0(__int64 result);
__int64 CudaDriverRoutine_4d200(unsigned __int64*, unsigned __int64);
__int64 CudaDriverRoutine_4d310(unsigned __int64*, unsigned __int64);
__int64 CudaDriverRoutine_4d720(unsigned __int64*, unsigned __int64);
__int64 CudaDriverRoutine_4d910(unsigned __int64*, unsigned __int64,
                                unsigned __int64, _QWORD*);
__int64 CudaDriverRoutine_56260(_QWORD);
__int64 CudaDriverRoutine_5b640(_DWORD*, __int64, unsigned int, char, char,
                                char, char, __int64*);
__int64 CudaDriverRoutine_5e970(__int64);
__int64 CudaDriverRoutine_86e90(__int64*, char);
__int64 CudaDriverRoutine_87010(int*);
__int64 CudaDriverRoutine_874b0(__int64);
__int64 CudaDriverRoutine_87a10(unsigned __int8, int);
__int64 CudaDriverRoutine_87fc0(__int64);
__int64 CudaDriverRoutine_8a6e0(__int64 result);
__int64 CudaDriverRoutine_8a7f0(__int64 result);
__int64 CudaDriverRoutine_8ad40(__int64, int, int, __int64);
__int64 CudaDriverRoutine_8adb0(_QWORD*);
__int64 CudaDriverRoutine_8b180(__int64 result, int, int, unsigned __int64);
__int64 CudaDriverRoutine_8b220(__int64 result, int);
__int64 CudaDriverRoutine_8b420(__int64 result, int, __int64, int);
__int64 CudaDriverRoutine_8d690(__int64);
__int64 CudaDriverRoutine_8da00(__int64, unsigned int, _QWORD*, _DWORD*);
__int64 CudaDriverRoutine_968c0(__int64 result, __int64*, unsigned int,
                                __int64*);
__int64 CudaDriverRoutine_96e50(__int64 result, __int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_997d0(__int64);
__int64 CudaDriverRoutine_9b5e0(__int64, signed int);
__int64 CudaDriverRoutine_9b620(int);
__int64 CudaDriverRoutine_a3820(__int64, unsigned int, __int64*, __int64*);
__int64 CudaDriverRoutine_c55e0(__int64, __int64*);
__int64 CudaDriverRoutine_c5a20(__int64);
__int64 CudaDriverRoutine_c5a60(__int64, int);
__int64 CudaDriverRoutine_df060(__int64*);
__int64 CudaDriverRoutine_df0b0(__int64, unsigned __int64, unsigned __int64,
                                char);
__int64 CudaDriverRoutine_ec740(__int64, __int64, __int64);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_eeec0(__int64 result, unsigned int*, int, __int64);
__int64 CudaDriverRoutine_f1060(__int64);
__int64 CudaDriverRoutine_f6490(int*, _QWORD*, char);
__int64 CudaDriverRoutine_f8160(__int64, __int64, int);
__int64 CudaDriverRoutine_f9bd0(int*, __int64, __int64, __int64, unsigned int,
                                __int64, unsigned int, __int64, char);
__int64 CudaDriverRoutine_fa210(__int64 result, __int64, __int64, int, __int64,
                                char);
__int64 CudaDriverRoutine_fa780(__int64*, int, __int64);
__int64 CudaDriverRoutine_fb250(__int64, __int64, __int64*);
__int64 CudaDriverRoutine_fe850(__int64*, int);
__int64 CudaDriverRoutine_fe8c0();
__int64 CudaDriverStub_102040(_QWORD);
__int64 CudaDriverStub_102360(_QWORD);
__int64 CudaDriverStub_102370(_QWORD);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_107f90_alt1(char*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_108070_alt1(char*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_112f50(_QWORD, _QWORD);
__int64 CudaDriverStub_12d100(_QWORD);
__int64 CudaDriverStub_12db60(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_12e470(_QWORD);
__int64 CudaDriverStub_12e550(_QWORD, _QWORD);
__int64 CudaDriverStub_1388f0(__int64, unsigned int*);
__int64 CudaDriverStub_1a2d50(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_1a2d60(__int64, __int64, __int64, __int64, unsigned int);
__int64 CudaDriverStub_1db190(_QWORD);
__int64 CudaDriverStub_1db380(_QWORD);
__int64 CudaDriverStub_1db750(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1dbfc0(_QWORD);
__int64 CudaDriverStub_203210(__int64, __int64, __int64, __int64, __int64);
__int64 CudaDriverStub_4f840(_QWORD);
__int64 CudaDriverStub_5bb90(_QWORD);
__int64 CudaDriverStub_8b270(_QWORD);
__int64 CudaDriverStub_8b280(_QWORD);
__int64 CudaDriverStub_f0f50(_QWORD);
__int64 cuda_driver_1128f0_alt1(__int64, __int64, __int64*, int,
                                _QWORD*) __asm__("cuda_driver_1128f0");
__int64 cuda_driver_117200_alt1(__int64, __int64, __int64*,
                                char) __asm__("cuda_driver_117200");
__int64 cuda_driver_119b20_alt1(__int64 result,
                                __int64) __asm__("cuda_driver_119b20");
__int64 cuda_driver_12ea60(atomic_uint*, __int64 (*)(__int64), __int64);
__int64 cuda_driver_1bace0(unsigned int*, __int64*, char);
__int64 cuda_driver_1dbe40(__int64, __int64, __int64);
__int64 cuda_driver_203fd0(unsigned int**, unsigned int);
__int64 cuda_driver_204330(__int64);
__int64 cuda_driver_2043d0(__int64 result, int);
__int64 cuda_driver_204700(__int64, _QWORD*, unsigned int);
__int64 cuda_driver_207250(__int64 result, int);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_8ade0(__int64, unsigned int, unsigned int);
__int64 cuda_driver_8c000(__int64, int, int);
__int64 cuda_driver_96040(__int64*, __int64, unsigned int);
__int64 cuda_driver_9a090(__int64, int, _DWORD*);
__int64 cuda_driver_9b560(__int64, int, char);
__int64 cuda_driver_c30d0(_QWORD*, int, __int64);
__int64 cuda_driver_c36c0(__int64);
__int64 cuda_driver_checks_bada0(__int64 result);
__int64 cuda_driver_checks_bae90(__int64, __int64, __int64*);
__int64 cuda_driver_f12e0(unsigned __int64);
__int64 cuda_driver_misc_helpers_4be0(__int64 result, int);
__int64 cuda_driver_misc_helpers_4c10();
__int64 cuda_driver_misc_helpers_4c20();
__int64 cuda_driver_misc_helpers_4c40();
__int64 cuda_driver_misc_helpers_deeb0(__int64, char);
__int64 cuda_driver_predicates_10ebf0(__int64*, __int64, _BYTE*);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 strcmp_plt(_QWORD, _QWORD);
bool CudaDriverRoutine_1dc850(__int64);
bool CudaDriverRoutine_1dc9c0(__int64);
bool CudaDriverRoutine_1dd060(__int64);
bool CudaDriverRoutine_5ada0(__int64);
bool CudaDriverRoutine_874c0(unsigned __int8);
bool CudaDriverRoutine_87cc0(__int64);
bool CudaDriverRoutine_92190(__int64);
bool CudaDriverRoutine_99f10(__int64);
bool CudaDriverRoutine_9aa60(__int64, int);
bool CudaDriverRoutine_f1f60(__int64, __int64, char);
bool CudaDriverRoutine_fa910(__int64, _DWORD*);
bool cuda_driver_12ea30(int*);
bool cuda_driver_87f00(unsigned int*);
bool cuda_driver_f7b60(int*, __int64);
bool cuda_driver_faa80(__int64, int*);
bool cuda_driver_misc_helpers_de860();
bool cuda_driver_predicates_9ae80();
bool cuda_driver_predicates_f7a00(int*);
double pow_plt(double, double, double);
extern _BYTE CudaDriverData_4398[8];
extern _BYTE CudaDriverData_4bd8[8];
extern _BYTE CudaDriverData_4c38[8];
extern _DWORD* CudaDriverData_14232b8;
extern _DWORD CudaDriverData_1134150[4];
extern _DWORD CudaDriverData_1432df4;
extern _QWORD CudaDriverData_14232c0;
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_1432140;
extern _UNKNOWN* CudaDriverData_1432170;
extern _UNKNOWN* CudaDriverData_1432178;
extern _UNKNOWN* CudaDriverData_14321b8;
extern _UNKNOWN* CudaDriverData_14321e0;
extern _UNKNOWN CudaDriverData_14347a8;
extern __int16 CudaDriverData_1436018;
extern __int64 (*CudaDriverData_1423298[2])();
extern __int64 (*CudaDriverData_14232a0)();
extern __int64 (*CudaDriverData_14232e0[16])();
extern __int64 (*CudaDriverData_1432df8)(_QWORD*);
extern __int64 (*CudaDriverData_1432df8_alt1)(__int64*) __asm__(
    "CudaDriverData_1432df8");
extern __int64 CudaDriverData_143bd80;
extern char CudaDriverData_1432df0;
extern int CudaDriverData_1434ac0;
extern int CudaDriverData_144d31c[];
float CudaDriverRoutine_12e2a0(_QWORD*);
long double CudaDriverRoutine_8b570(__int64);
long double CudaDriverRoutine_8b8a0(__int64, int, int*);
unsigned __int64* CudaDriverRoutine_4d420(unsigned __int64* result,
                                          unsigned __int64, unsigned __int64);
unsigned __int64* CudaDriverRoutine_4d790(unsigned __int64* result,
                                          unsigned __int64);
unsigned __int64 CudaDriverRoutine_12dea0(atomic_ullong*);
unsigned __int64 CudaDriverRoutine_1bb040(unsigned __int64 result);
unsigned __int64 CudaDriverRoutine_5ae00(__int64);
unsigned __int64 CudaDriverRoutine_5b820(__int64);
unsigned __int64 CudaDriverRoutine_5bd00(__int64, unsigned __int64);
unsigned __int64 CudaDriverRoutine_5bda0(__int64);
unsigned __int64 CudaDriverRoutine_5c030(__int64);
unsigned __int64 CudaDriverRoutine_87d10(_DWORD*);
unsigned __int64 CudaDriverRoutine_8b200(__int64, int, int);
unsigned __int64 cuda_driver_checks_102f50(int, int);
unsigned int* CudaDriverRoutine_b4720(unsigned int);
void CudaDriverRoutine_3fd0();
void CudaDriverRoutine_4368();
void CudaDriverRoutine_4378();
void CudaDriverRoutine_4380();
void CudaDriverRoutine_4388();
void CudaDriverRoutine_4390();
void CudaDriverRoutine_43a8();
void CudaDriverRoutine_43b0();
void CudaDriverRoutine_43b8();
void CudaDriverRoutine_470c();
void CudaDriverRoutine_4720();
void CudaDriverRoutine_4730();
void CudaDriverRoutine_4768();
void CudaDriverRoutine_4780();
void CudaDriverRoutine_4798();
void CudaDriverRoutine_47b0();
void CudaDriverRoutine_47c8();
void CudaDriverRoutine_47d0();
void CudaDriverRoutine_4bf0();
void CudaDriverRoutine_4bf8();
void CudaDriverRoutine_4c08();
void CudaDriverRoutine_4c48();
void CudaDriverRoutine_4e48();
void CudaDriverRoutine_4e50();
void CudaDriverRoutine_4e68();
void CudaDriverRoutine_4e80();
void CudaDriverRoutine_5c060(__int64);
void CudaDriverRoutine_7418();
void CudaDriverRoutine_7420();
void CudaDriverRoutine_7468();
void CudaDriverRoutine_7488();
void CudaDriverRoutine_c5500(__int64, unsigned int*);
__int64 cuda_driver_fabf0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                          unsigned int a5, __int64 a6, __int64 a7);
__int64 cuda_driver_fb050(__int64 a1, __int64 a2, char a3, bool* a4, bool* a5);
void cuda_driver_fbd40(__int64 a1, char a2);
__int64 cuda_driver_fc8b0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                          int a5, __int64* a6);
__int64 cuda_driver_fc9d0(__int64 a1, __int64* a2);
__int64 cuda_driver_fd380(__int64 result, _QWORD* a2, _QWORD* a3, _QWORD* a4);
__int64* cuda_driver_fd420(__int64* result, _QWORD* a2);
__int64* cuda_driver_fd500(__int64* result);
__int64 cuda_driver_fd960(__int64 result, __int64 a2);
__int64 cuda_driver_fdb30(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                          __int64 a4);
__int64 cuda_driver_fdcf0(__int64 a1, __int64 a2, __int64* a3);
__int64 cuda_driver_fdd40(__int64 a1, unsigned int a2, __int64 a3);
__int64 cuda_driver_fe9e0(_DWORD* a1);
__int64 cuda_driver_fea90(__int64** a1, __int64 a2, __int64 a3);
__int64 cuda_driver_ff320(_DWORD* a1, __int64 a2, _DWORD* a3);
__int64 cuda_driver_101570();
__int64 cuda_driver_1017c0();
__int64 cuda_driver_101900(__int64 a1, unsigned int a2);
__int64 cuda_driver_103bd0(__int64 result, __int64* a2, __int64 a3, __int64 a4,
                           int a5, __int64 a6, int a7, __int64 a8);
__int64 cuda_driver_103d10(__int64 result, __int64 a2, int a3, __int64 a4,
                           int a5, __int64 a6, __int64 a7);
__int64 cuda_driver_107380(__int64* a1, unsigned __int64 a2);
__int64 cuda_driver_107620(__int64* a1, unsigned __int64 a2, __int64 a3,
                           unsigned __int64 a4, __int64 a5, char a6);
__int64 cuda_driver_1084c0(__int64 result);
unsigned __int64 cuda_driver_108520(__int64 a1);
unsigned __int64 cuda_driver_108620(unsigned __int64 result,
                                    unsigned __int64 a2, unsigned __int64 a3);
__int64 cuda_driver_108740(__int64 result, unsigned __int64* a2);
__int64 cuda_driver_108b60(__int64 result, unsigned __int64 a2,
                           unsigned __int64 a3);
__int64 cuda_driver_108c40(__int64 result, unsigned __int64* a2);
__int64 cuda_driver_109c80(__int64 a1, __int64 a2);
__int64 cuda_driver_10a130(_DWORD* a1, _OWORD* a2, __int64 a3, __int64 a4,
                           _BYTE* a5);
__int64 cuda_driver_10a530(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4,
                           int a5, unsigned __int64 a6);
__int64 cuda_driver_10c1d0(int a1, unsigned int a2);
long double cuda_driver_10c800(int a1);
__int64 cuda_driver_10d580(__int64* a1, __int64 a2, unsigned int a3);
__int64 cuda_driver_112680(__int64 a1, __int64* a2, int a3, __int64* a4,
                           __int64* a5, __int64 a6, __int64 a7);
__int64 cuda_driver_1128f0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           __int64* a5);
void cuda_driver_112c00(__int64 a1, _DWORD* a2, __int64 a3);
__attribute__((swiftcall)) void cuda_driver_112e10(PSEUDO_X8 x8_, __int64 a1,
                                                   unsigned int a2);
void cuda_driver_1142a0(unsigned int* result, unsigned __int8 a2, char a3);
__int64 cuda_driver_1150a0(__int64 a1, unsigned __int64 a2, char a3);
__int64 cuda_driver_115a40(__int64 a1);
__int64 cuda_driver_115e00(__int64 a1);
__int64 cuda_driver_1162c0(__int64* a1, __int64 a2, signed int* a3);
__int64 cuda_driver_1167a0(__int64 a1);
bool cuda_driver_116e40(__int64 a1);
__int64 cuda_driver_116e60(__int64 a1);
__int64 cuda_driver_116ef0(__int64 a1, _QWORD* a2);
__int64 cuda_driver_117060(__int64 a1, __int64 a2, int a3, __int64 a4);
__int64 cuda_driver_117200(__int64 a1, _QWORD* a2, __int64* a3, __int64 a4);
__int64 cuda_driver_117500(__int64 a1, __int64 a2);
__int64 cuda_driver_117a70(__int64 a1, int a2, unsigned __int8* a3);
__int64 cuda_driver_117ee0(__int64 a1);
__int64 cuda_driver_118130(__int64 a1, unsigned __int64* a2);
__int64 cuda_driver_118460(unsigned __int64 a1);
__int64 cuda_driver_1187c0(__int64 result);
unsigned __int64 cuda_driver_118980(__int64 a1);
__int64 cuda_driver_118a60(__int64 a1, __int64 a2, unsigned int a3, char a4);
__int64 cuda_driver_118c20(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, unsigned int a7, char a8);
__int64 cuda_driver_119300(__int64 result, _OWORD* a2, _DWORD* a3, double a4,
                           double a5);
__int64 cuda_driver_119850(__int64 result, __int64 a2);
__int64 cuda_driver_1198a0(__int64 a1, int* a2);
int* cuda_driver_119b20(int* result, __int64 a2);
__int64 cuda_driver_119d60(__int64 a1);
__int64 cuda_driver_11a410(__int64 a1, __int64 a2, __int64 a3, int a4, char a5,
                           __int64* a6);
__int64 cuda_driver_11a580(_QWORD* a1);
__int64 cuda_driver_11bd80(_QWORD* a1);
__int64 cuda_driver_11c740(__int64 result, __int64 a2, char a3, int8x16_t* a4,
                           _BYTE* a5);
__int64 cuda_driver_11d110(__int64 a1, unsigned int a2, _QWORD* a3);
__int64 cuda_driver_11d180(__int64 a1, unsigned __int8* a2, _QWORD* a3);
__int64 cuda_driver_11d250(__int64 a1, unsigned int a2, _QWORD* a3);
__int64 cuda_driver_11d2c0(__int64 a1, unsigned __int8* a2, _QWORD* a3);
__int64 cuda_driver_11d3a0(__int64 a1, unsigned int a2, _QWORD* a3);
__int64 cuda_driver_11d400(__int64 a1, unsigned __int8* a2, _QWORD* a3);
__int64 cuda_driver_11e8e0(__int64 a1, __int64 a2, __int64 a3, int a4, char a5,
                           __int64* a6, int a7);
__int64 cuda_driver_11ea60(_QWORD* a1);
float cuda_driver_11f820(_BYTE* a1, float* a2, double a3, double a4, double a5);
__int64 CudaDriverRoutine_112e50(__int64, __int64, char);
__int64 CudaDriverRoutine_113e70(__int64, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_1209a0(__int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_125b50(unsigned __int64, __int64, __int64);
__int64 CudaDriverRoutine_125bf0(__int64);
__int64 CudaDriverRoutine_125ca0(__int64);
__int64 CudaDriverRoutine_125cf0(int, __int64, __int64, __int64*);
__int64 CudaDriverRoutine_1dba10(__int64, unsigned __int64);
__int64 CudaDriverRoutine_205ee0(int, __int64, __int64, _QWORD*, int);
__int64
CudaDriverRoutine_205fa0_alt1(int, __int64, __int64,
                              __int64*) __asm__("CudaDriverRoutine_205fa0");
__int64 CudaDriverRoutine_bc880(__int64 result, __int64, __int64);
__int64 CudaDriverRoutine_c43e0(__int64, int, __int64, __int64, __int64,
                                __int64*, __int64*, unsigned int);
__int64 CudaDriverRoutine_c46c0(__int64, __int64, __int64, __int64,
                                unsigned int);
__int64 CudaDriverRoutine_ed630_alt1(__int64, __int64, const char*,
                                     ...) __asm__("CudaDriverRoutine_ed630");
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_12e260(_QWORD);
__int64 CudaDriverStub_4f840_alt1(void) __asm__("CudaDriverStub_4f840");
__int64 CudaDriverStub_54930(__int64 result);
__int64 cuda_driver_125d80(__int64, __int64, __int64);
__int64 cuda_driver_helpers_1b7b30(__int64, __int64, __int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt_alt1(__int64, int, unsigned __int64) __asm__("memset_plt");
bool CudaDriverRoutine_12c960(__int64, __int64);
bool CudaDriverRoutine_5e980(__int64);
bool CudaDriverRoutine_9aa20(__int64);
bool CudaDriverRoutine_9ab50(__int64);
extern _QWORD CudaDriverData_1432130[1];
extern __int64 (*cuda_driver_125d80_ptr)();
extern __int64 CudaDriverData_1412140;
unsigned __int64 CudaDriverRoutine_125c60(__int64);
void CudaDriverRoutine_120560();
__int64 cuda_driver_1048e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64* a5, char a6, __int64 a7);
__int64 cuda_driver_107140(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           unsigned __int64 a5);
__int64 cuda_driver_unplaced_7_113960(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, int a5, __int64 a6,
                                      __int64 a7, __int64 a8);
__int64 cuda_driver_120770(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6);

__int64 cuda_driver_fabf0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                          unsigned int a5, __int64 a6, __int64 a7)
{
  __int64 v14;
  __int64 result;
  __int64 v16;
  unsigned int v17;
  char v18;
  unsigned int v19;
  int v20;
  bool v21;
  bool v22;
  struct {
    _BYTE v23[8];
    __int64 v24;
  } v23_;
  unsigned __int64 v25[3];
  __int64 v26[11];

  v14 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 16));
  if ((unsigned int)CudaDriverRoutine_f6490((int*)a1, (_QWORD*)(a1 + 400),
                                            a4 | 4) != 0 ||
      (unsigned int)CudaDriverRoutine_f6490((int*)(a1 + 200),
                                            (_QWORD*)(a1 + 400), a4) != 0) {
    return 1;
  }
  if (*(_DWORD*)a1 == 0 && *(_DWORD*)(a1 + 200) == 0) {
    v16 = *(_QWORD*)(a1 + 8);
    if (*(_DWORD*)(v16 + 108) != *(_DWORD*)(*(_QWORD*)(a1 + 208) + 108LL) &&
        (CudaDriverRoutine_874c0(*(_DWORD*)(v16 + 24)) ||
         *(_DWORD*)(a1 + 200) == 0 &&
             CudaDriverRoutine_874c0(
                 *(_DWORD*)(*(_QWORD*)(a1 + 208) + 24LL)))) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Incompatible formats, array copies involving compressed "
                   "formats must have matching BytesPerElem\n");
      return 1;
    }
  }
  result = cuda_driver_fb050(a1, v14, a4, &v22, &v21);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_f9bd0((int*)a1, a2, a2, a3, a4, a6, a5,
                                     (__int64)v23_.v23, 0);
    if ((_DWORD)result != 0) {
      goto LABEL_40;
    }
    v20 = 2;
    CudaDriverStub_107f90(a2 + 592);
    v17 = cuda_driver_1bace0((unsigned int*)&v20, *(__int64**)(a2 + 584), 3);
    CudaDriverStub_108070(a2 + 592);
    if (v17 != 0) {
      result = v17;
      goto LABEL_40;
    }
    if (*(_QWORD*)(a1 + 408) * *(_QWORD*)(a1 + 400) * *(_QWORD*)(a1 + 416) ==
        0) {
      result = 0;
      goto LABEL_38;
    }
    if (cuda_driver_predicates_f7a00((int*)a1) &&
        (cuda_driver_predicates_f7a00((int*)(a1 + 200)) ||
         cuda_driver_f7b60((int*)(a1 + 200), v14))) {
      if (*(_BYTE*)(a1 + 459) != 0) {
        result = 801;
        goto LABEL_40;
      }
      result = CudaDriverRoutine_fb250(a1, a2, v26);
      goto LABEL_38;
    }
    if (v22 && v21) {
      if ((unsigned __int8)CudaDriverRoutine_f8160(v14, a1, v20) != 0) {
      LABEL_37:
        result = (*(__int64 (**)(__int64, __int64, __int64, __int64*, _QWORD))(
            v14 + 16400))(v14, a1, a2, v26, a5);
        goto LABEL_38;
      }
    }
    else if (!v22) {
    LABEL_36:
      if ((unsigned __int8)CudaDriverRoutine_f8160(v14, a1, v20) != 0) {
        goto LABEL_37;
      }
      if (CudaDriverRoutine_fa910(v14, (_DWORD*)a1)) {
        result = CudaDriverRoutine_1d50e0((_QWORD*)a1, a2, (__int64)v26, a5);
      }
      else {
        if (!cuda_driver_faa80(v14, (int*)a1)) {
          if (!cuda_driver_f7b60((int*)a1, v14)) {
            cuda_driver_f7b60((int*)(a1 + 200), v14);
          }
          if (a5 == 2) {
            if ((*((_BYTE*)&CudaDriverRoutine_7418 +
                   (_QWORD)CudaDriverData_1422118) &
                 2) != 0 &&
                *(_BYTE*)(*(_QWORD*)(v14 + 64) + 17096LL) != 0 &&
                (*(_DWORD*)a1 == 3 && *(_DWORD*)(a1 + 160) != 2 ||
                 *(_DWORD*)(a1 + 200) == 3 && *(_DWORD*)(a1 + 360) != 2)) {
              a5 = 1;
            }
            else {
              a5 = 2;
            }
          }
          result = (*(__int64 (**)(__int64, __int64, __int64, __int64*))(
              v14 + 16392))(v14, a1, a2, v26);
          v18 = 0;
          goto LABEL_39;
        }
        result = CudaDriverRoutine_1d5df0((_QWORD*)a1, a2, (__int64)v26, a5);
      }
    LABEL_38:
      v18 = 1;
    LABEL_39:
      result =
          CudaDriverRoutine_fa210(result, a1, a2, a5, (__int64)v23_.v23, v18);
    LABEL_40:
      if (v23_.v23[0] != 0) {
        if (v23_.v23[2] != 0) {
          v19 = result;
          CudaDriverRoutine_114200(a3, v23_.v24, 1u);
        }
        else {
          v19 = result;
          if ((_DWORD)result != 0 && v23_.v23[1] != 0) {
            CudaDriverRoutine_129da0(v25);
          }
        }
        CudaDriverRoutine_fa780(v26, v19, a7);
        return v19;
      }
      return result;
    }
    if (CudaDriverRoutine_fa910(v14, (_DWORD*)a1)) {
      result = CudaDriverRoutine_1d6380(a1, a2, a5, (__int64)v26);
      if ((_DWORD)result != 0) {
        goto LABEL_40;
      }
      goto LABEL_38;
    }
    if (cuda_driver_faa80(v14, (int*)a1)) {
      result = CudaDriverRoutine_1d6cc0((_QWORD*)a1, a2, a5, (__int64)v26);
      if ((_DWORD)result != 0) {
        goto LABEL_40;
      }
      goto LABEL_38;
    }
    goto LABEL_36;
  }
  return result;
}

__int64 cuda_driver_fb050(__int64 a1, __int64 a2, char a3, bool* a4, bool* a5)
{
  bool v7;
  void* v8;
  unsigned int v9;
  bool v10;
  int v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  int v20;
  __int64 v21;

  *a4 = false;
  *a5 = false;
  v7 = false;
  v8 = CudaDriverData_1422118;
  v9 =
      *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)CudaDriverData_1422118);
  v10 = v9 > 2;
  if ((a3 & 8) != 0 || v9 < 2) {
    goto LABEL_32;
  }
  v11 = *(_DWORD*)a1;
  v12 = 1;
  if (*(int*)a1 <= 1) {
    if (v11 != 0) {
      if (v11 != 1) {
        goto LABEL_15;
      }
      v13 = *(_QWORD*)(a1 + 32);
      if (v13 == 0) {
        goto LABEL_14;
      }
    LABEL_11:
      v17 = a1;
      v18 = a2;
      v19 = CudaDriverRoutine_1dd060(v13);
      a2 = v18;
      v12 = v19;
      a1 = v17;
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v8) < 2u) {
        goto LABEL_16;
      }
      goto LABEL_19;
    }
    v13 = *(_QWORD*)(a1 + 24);
    if (v13 != 0) {
      goto LABEL_11;
    }
  LABEL_14:
    v12 = 1;
  LABEL_15:
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v8) < 2u) {
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  if (v11 != 2) {
    if (v11 != 3) {
      goto LABEL_15;
    }
    v14 = a1;
    v15 = a2;
    v16 = cuda_driver_1dbe40(a2, *(_QWORD*)(a1 + 64), 0);
    a2 = v15;
    v13 = v16;
    a1 = v14;
    if (v13 != 0) {
      goto LABEL_11;
    }
    goto LABEL_14;
  }
  v12 = *(_BYTE*)(a1 + 159);
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) < 2u) {
  LABEL_16:
    if (v12 != 0) {
      goto LABEL_34;
    }
    goto LABEL_31;
  }
LABEL_19:
  v20 = *(_DWORD*)(a1 + 200);
  if (v20 <= 1) {
    if (v20 != 0) {
      if (v20 != 1) {
        goto LABEL_30;
      }
      v21 = *(_QWORD*)(a1 + 232);
      if (v21 == 0) {
        goto LABEL_30;
      }
    }
    else {
      v21 = *(_QWORD*)(a1 + 224);
      if (v21 == 0) {
        goto LABEL_30;
      }
    }
  LABEL_27:
    if (v12 != CudaDriverRoutine_1dd060(v21)) {
      goto LABEL_34;
    }
    goto LABEL_31;
  }
  if (v20 == 2) {
    if (v12 == *(_BYTE*)(a1 + 359)) {
      goto LABEL_31;
    }
    goto LABEL_34;
  }
  if (v20 == 3) {
    v21 = cuda_driver_1dbe40(a2, *(_QWORD*)(a1 + 264), 0);
    if (v21 != 0) {
      goto LABEL_27;
    }
  }
LABEL_30:
  if (v12 == 1) {
  LABEL_31:
    v7 = v12 != 0;
  LABEL_32:
    *a4 = v7;
    *a5 = v10;
    return 0;
  }
LABEL_34:
  CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                          (__int64)"Mismatched operand protection\n");
  return 800;
}

void cuda_driver_fbd40(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  void* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD v16[3];

  if (a2 != 0) {
    v16[1] = v2;
    v16[2] = v3;
    v5 = CudaDriverData_1422118;
    if (*(_DWORD*)a1 == 3 && (*(unsigned __int8*)(a1 + 88) |
                              *((unsigned __int8*)&CudaDriverRoutine_7418 +
                                (_QWORD)CudaDriverData_1422118)) == 0) {
      CudaDriverRoutine_12e270(v16);
      if (*(_QWORD*)(a1 + 72) != 0) {
        atomic_fetch_or(
            (atomic_ullong* volatile)(*(_QWORD*)(a1 + 64) /
                                      *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) +
                                                 (_QWORD)v5) *
                                      *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) +
                                                 (_QWORD)v5)),
            0);
        v6 = *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) + (_QWORD)v5);
        if (v6 < *(_QWORD*)(a1 + 72)) {
          atomic_fetch_or(
              (atomic_ullong* volatile)((v6 + *(_QWORD*)(a1 + 64)) / v6 * v6),
              0);
          v7 = *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) + (_QWORD)v5);
          v8 = v7 + v6;
          if (v8 < *(_QWORD*)(a1 + 72)) {
            atomic_fetch_or(
                (atomic_ullong* volatile)((v8 + *(_QWORD*)(a1 + 64)) / v7 * v7),
                0);
            v9 = *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) + (_QWORD)v5);
            v10 = v9 + v8;
            if (v10 < *(_QWORD*)(a1 + 72)) {
              atomic_fetch_or(
                  (atomic_ullong* volatile)((v10 + *(_QWORD*)(a1 + 64)) / v9 *
                                            v9),
                  0);
            }
          }
        }
      }
      if (*(double*)((char*)&CudaDriverRoutine_7420 + (_QWORD)v5) <
          CudaDriverRoutine_12e2a0(v16)) {
        CudaDriverRoutine_125ad0();
      }
    }
    if (*(_DWORD*)(a1 + 200) == 3 &&
        (*(unsigned __int8*)(a1 + 288) |
         *((unsigned __int8*)&CudaDriverRoutine_7418 + (_QWORD)v5)) == 0) {
      CudaDriverRoutine_12e270(v16);
      if (*(_QWORD*)(a1 + 272) != 0) {
        atomic_fetch_or(
            (atomic_ullong* volatile)(*(_QWORD*)(a1 + 264) /
                                      *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) +
                                                 (_QWORD)v5) *
                                      *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) +
                                                 (_QWORD)v5)),
            0);
        v11 = *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) + (_QWORD)v5);
        if (v11 < *(_QWORD*)(a1 + 272)) {
          atomic_fetch_or(
              (atomic_ullong* volatile)((v11 + *(_QWORD*)(a1 + 264)) / v11 *
                                        v11),
              0);
          v12 = *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) + (_QWORD)v5);
          v13 = v12 + v11;
          if (v13 < *(_QWORD*)(a1 + 272)) {
            atomic_fetch_or(
                (atomic_ullong* volatile)((v13 + *(_QWORD*)(a1 + 264)) / v12 *
                                          v12),
                0);
            v14 = *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) + (_QWORD)v5);
            v15 = v14 + v13;
            if (v15 < *(_QWORD*)(a1 + 272)) {
              atomic_fetch_or(
                  (atomic_ullong* volatile)((v15 + *(_QWORD*)(a1 + 264)) / v14 *
                                            v14),
                  0);
            }
          }
        }
      }
      if (*(double*)((char*)&CudaDriverRoutine_7420 + (_QWORD)v5) <
          CudaDriverRoutine_12e2a0(v16)) {
        CudaDriverRoutine_125ad0();
      }
    }
  }
}

__int64 cuda_driver_fc8b0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                          int a5, __int64* a6)
{
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  struct {
    int v22;
    char gap4_[4];
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64* v27;
    int v28;
    int v29;
    int v30;
  } v22_;

  *(_DWORD*)(a1 + 48) = a5;
  *(_QWORD*)(a1 + 32) = a3;
  *(_QWORD*)(a1 + 40) = a4;
  *(_DWORD*)(a1 + 28) = 1;
  result = *(_QWORD*)(a1 + 8);
  if (result != 0 && *(_QWORD*)(result + 16) == *(_QWORD*)(a3 + 16)) {
    v21 = a3;
    result = CudaDriverRoutine_207630(result, a5, *a6, a4);
    a3 = v21;
    *a6 = result;
    if (*(_BYTE*)(a1 + 60) != 0) {
      return result;
    }
  }
  else if (*(_BYTE*)(a1 + 60) != 0) {
    return result;
  }
  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_1432170) !=
      0) {
    v12 = *(_QWORD*)(a3 + 16);
    v13 = a3;
    v22_.v22 = 64;
    v14 = CudaDriverRoutine_98340(v12);
    v15 = a2[50];
    v16 = a2[51];
    v22_.v23 = v14;
    v22_.v24 = v13;
    v17 = v16 * v15;
    v18 = a2[52];
    v22_.v27 = a6;
    v22_.v25 = v17 * v18;
    v22_.v26 = a4;
    v19 = CudaDriverStub_5bb90(a4);
    if (v19 >= 0xC) {
      v20 = 12;
    }
    else {
      v20 = v19;
    }
    v22_.v28 = v20;
    v22_.v29 = a5;
    v22_.v30 = *(unsigned __int8*)(a1 + 62);
    return cuda_driver_20b420(8u, 2u, (__int64)&v22_.v22);
  }
  return result;
}

__int64 cuda_driver_fc9d0(__int64 a1, __int64* a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  int v9;
  __int64 result;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  int v17;
  int v18;
  __int128 v19;
  int v20;

  if (*(_BYTE*)(a1 + 61) == 0 &&
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_1432170 +
                 4) != 0) {
    v3 = a2;
    v12 = 72;
    v5 = *(_QWORD*)(a1 + 32);
    v4 = *(_QWORD*)(a1 + 40);
    v6 = *(_QWORD*)(v5 + 16);
    v15 = *(_QWORD*)(a1 + 40);
    v16 = a2;
    v13 = v6;
    v14 = v5;
    v7 = CudaDriverStub_5bb90(v4);
    v8 = *(_DWORD*)(a1 + 48);
    v19 = *(_OWORD*)(a1 + 64);
    if (v7 >= 0xC) {
      v9 = 12;
    }
    else {
      v9 = v7;
    }
    v17 = v9;
    v18 = v8;
    v20 = *(unsigned __int8*)(a1 + 63);
    cuda_driver_20b420(8u, 3u, (__int64)&v12);
    a2 = v3;
  }
  result = *(_QWORD*)(a1 + 8);
  if (result != 0 &&
      *(_QWORD*)(result + 16) == *(_QWORD*)(*(_QWORD*)(a1 + 32) + 16LL)) {
    v11 = a2;
    result = CudaDriverRoutine_207710(result, *(_DWORD*)(a1 + 48), *a2);
    *v11 = result;
    *(_DWORD*)(a1 + 28) = 0;
  }
  else {
    *(_DWORD*)(a1 + 28) = 0;
  }
  return result;
}

__int64 cuda_driver_fd380(__int64 result, _QWORD* a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v4;
  bool v5;
  bool v6;

  if (*((_BYTE*)((_UNKNOWN*)0x1120LL) + (_QWORD)CudaDriverData_1422118 + 2) !=
      0) {
    v4 = a3[2];
    if (v4 != 0 || a3[1] != 0) {
      v5 = true;
      if ((unsigned __int64)(a4[2] + v4) < a2[52]) {
        goto LABEL_8;
      }
    }
    else {
      v5 = *a3 != 0;
      if (a4[2] < a2[52]) {
        goto LABEL_8;
      }
    }
    if (a4[1] + a3[1] >= a2[51]) {
      v6 = *a4 + *a3 < a2[50];
    LABEL_9:
      *(_BYTE*)(result + 60) = v5;
      *(_BYTE*)(result + 61) = v6;
      return result;
    }
  LABEL_8:
    v6 = true;
    goto LABEL_9;
  }
  return result;
}

__int64* cuda_driver_fd420(__int64* result, _QWORD* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 v7[4];
    int v8;
  } v7_;

  v2 = result;
  *((_DWORD*)result + 7) = 2;
  if (*(_DWORD*)((char*)((__int64*)0x10LL) + (_QWORD)CudaDriverData_1432170 +
                 4) != 0) {
    LODWORD(v7_.v7[0]) = 40;
    v3 = *result;
    v7_.v7[1] = *(_QWORD*)(*result + 16);
    v7_.v7[2] = v3;
    v7_.v7[3] = a2[51] * a2[50] * a2[52];
    v7_.v8 = *((_DWORD*)result + 14);
    result = (__int64*)cuda_driver_20b420(8u, 5u, (__int64)v7_.v7);
  }
  v4 = v2[1];
  if (v4 != 0) {
    v5 = *v2;
    v6 = 0;
    v7_.v7[0] = 0;
    cuda_driver_207250(v4, 1);
    CudaDriverRoutine_205fa0(0, v5, (__int64)&v6, v7_.v7);
    v6 = CudaDriverRoutine_207630(v4, 0, v6, v7_.v7[0]);
    return (__int64*)CudaDriverRoutine_206060(v5, v6);
  }
  return result;
}

__int64* cuda_driver_fd500(__int64* result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5[5];

  v1 = result[1];
  v2 = result;
  if (v1 != 0) {
    v3 = *result;
    v5[0] = 0;
    CudaDriverRoutine_205fa0(0, v3, (__int64)v5, nullptr);
    v5[0] = CudaDriverRoutine_207710(v1, 0, v5[0]);
    CudaDriverRoutine_206060(v3, v5[0]);
    result = (__int64*)CudaDriverRoutine_2075f0(v2[1]);
  }
  if (*(_DWORD*)((char*)((__int64*)0x18LL) + (_QWORD)CudaDriverData_1432170) !=
      0) {
    LODWORD(v5[0]) = 40;
    v4 = *v2;
    v5[1] = *(_QWORD*)(*v2 + 16);
    v5[2] = v4;
    result = (__int64*)cuda_driver_20b420(8u, 6u, (__int64)v5);
  }
  *((_DWORD*)v2 + 7) = 0;
  return result;
}

__int64 cuda_driver_fd960(__int64 result, __int64 a2)
{
  int8x16_t* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned __int32 v7;
  int8x16_t v8;
  int v9;
  struct {
    int v10;
    char gap4_[4];
    __int64 v11;
    __int64 v12;
    unsigned __int64 v13;
    __int64 v14;
    int v15;
    unsigned __int32 v16;
    int8x16_t v17;
  } v10_;

  v2 = (int8x16_t*)result;
  if (*(_DWORD*)((char*)((__int64*)0x30LL) +
                 *(_QWORD*)((char*)((char*)0x40LL) +
                            (_QWORD)CudaDriverData_14225e0)) != 0) {
    v10_.v10 = 64;
    v4 = *(_QWORD*)(result + 32);
    v3 = *(_QWORD*)(result + 40);
    v5 = *(_QWORD*)(v4 + 16);
    v10_.v13 = LANES128(v2[2]).n128_u64[1];
    v10_.v14 = a2;
    v10_.v11 = v5;
    v10_.v12 = v4;
    v6 = CudaDriverStub_5bb90(v3);
    v7 = LANES128(v2[3]).n128_u32[0];
    v8 = vextq_s8(v2[4], v2[4], 8u);
    if (v6 >= 0xC) {
      v9 = 12;
    }
    else {
      v9 = v6;
    }
    v10_.v15 = v9;
    v10_.v16 = v7;
    v10_.v17 = v8;
    result = cuda_driver_20b420(8u, 0xCu, (__int64)&v10_.v10);
  }
  LANES128(v2[1]).n128_u32[3] = 0;
  return result;
}

__int64 cuda_driver_fdb30(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                          __int64 a4)
{
  __int64 result;
  struct {
    char gap0_[8];
    __int64 v9;
    __int128 v10;
    __int128 v11;
    __int128 v12;
    unsigned __int64 v13;
  } v9_;
  __int64 v14;

  v14 = 0;
  cuda_driver_predicates_9ae80();
  v9_.v9 = a2;
  v9_.v11 = (__typeof__(v9_.v11)){0};
  v9_.v12 = (__typeof__(v9_.v12)){0};
  v9_.v10 = (__typeof__(v9_.v10)){0};
  BYTE8(v9_.v12) = 1;
  if (a3 <= CudaDriverRoutine_12c9c0()) {
    a3 = CudaDriverRoutine_12c9c0();
  }
  v9_.v13 = a3;
  LOBYTE(v9_.v11) = a4 != 0;
  *((_QWORD*)&v9_.v11 + 1) = a4;
  *(_QWORD*)&v9_.v12 = 0x10000000000LL;
  result = CudaDriverRoutine_12b580(&v14, (__int64)&v9_.v9, 0);
  if ((_DWORD)result == 0) {
    *a1 = v14;
  }
  return result;
}

__int64 cuda_driver_fdcf0(__int64 a1, __int64 a2, __int64* a3)
{
  (*(void (**)(void*))(*(_QWORD*)(*(_QWORD*)(*a3 + 16) + 80LL) + 2368LL))(
      *(void**)(*(_QWORD*)(*a3 + 16) + 80LL));
  CudaDriverRoutine_12e340(a3[2]);
  return CudaDriverRoutine_12e340((__int64)a3);
}

__int64 cuda_driver_fdd40(__int64 a1, unsigned int a2, __int64 a3)
{
  __int128 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  bool v10;
  __int64 v11;
  _DWORD* v12;
  unsigned int v13;
  int v14;
  unsigned __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned __int64* v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  bool v30;
  _BOOL4 v31;
  int v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  unsigned __int64 v40;
  __int64 v41;
  bool v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  int v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned int v54;
  _QWORD* v55;
  __int64 v56;
  int v57;
  int v58;
  unsigned __int64 v59;
  unsigned int v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  unsigned int v75;
  unsigned __int64 v76;
  unsigned int v77;
  int v78;
  unsigned __int64 v79;
  int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  __int64 v85;
  unsigned int v86;
  unsigned int v87;
  __int64 v88;
  __int64 v89;
  unsigned int v90;
  __int64 v91;
  unsigned int v92;
  __int64 v93;
  unsigned int v95;
  __int64* v96;
  bool v97;
  unsigned int v98;
  unsigned int v99;
  _BOOL4 v100;
  unsigned int v101;
  __int64 v102;
  __int64 v103;
  int v104;
  unsigned int v105;
  int v106;
  unsigned int v107;
  unsigned int v108;
  unsigned int v109;
  __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  unsigned int v113;
  __int64 v114;
  __int64 v115;
  _QWORD* v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  unsigned int v120;
  __int64 v121;
  unsigned int v122;
  unsigned int v123;
  unsigned int v124;
  int v125;
  char v126;
  unsigned __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  unsigned int v131;
  __int64 v132[26];

  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v118 = a3;
  v131 = 2;
  if (a2 != 0) {
    v3 = (__typeof__(v3)){0};
    v110 = a2;
    v4 = 0;
    v5 = 0;
    v123 = 0;
    v6 = 0;
    v117 = a1;
    while (1) {
      v7 = a1 + 96 * v5;
      v128 = v4;
      *(_OWORD*)v132 = v3;
      *(_OWORD*)&v132[2] = v3;
      if (*(_DWORD*)(v7 + 84) != 0 || *(_QWORD*)(v7 + 88) != v132[0] ||
          ((v8 = *(_DWORD*)(v7 + 80)) ^ (v8 - 1)) <= v8 - 1) {
      LABEL_117:
        v4 = v128;
        v90 = 1;
        goto LABEL_122;
      }
      if (v8 < 2) {
        v9 = 0;
        if (**(_DWORD**)(*(_QWORD*)(a3 + 16) + 64LL) != 0) {
          goto LABEL_117;
        }
      }
      else {
        v9 = 0;
        do {
          ++v9;
          v10 = v8 > 3;
          v8 >>= 1;
        } while (v10);
        if (v9 != **(_DWORD**)(*(_QWORD*)(a3 + 16) + 64LL)) {
          goto LABEL_117;
        }
      }
      v130 = a1 + 96 * v5;
      if (*(_DWORD*)v7 != 0) {
        if (*(_DWORD*)v7 != 1) {
          goto LABEL_117;
        }
        v11 = *(_QWORD*)(v7 + 8);
        if ((unsigned int)CudaDriverRoutine_86e90((__int64*)v11, 0) != 0) {
          goto LABEL_117;
        }
        v12 = (_DWORD*)(v11 + 8);
        v13 = CudaDriverRoutine_87fc0(v11),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v14 = *(_DWORD*)(v11 + 40);
        v15 = *(_QWORD*)(v11 + 80);
        v16 = v13;
        v17 = 0;
        if (!CudaDriverRoutine_87cc0(v11 + 8)) {
          goto LABEL_117;
        }
      }
      else {
        v17 = *(_QWORD*)(v7 + 8);
        if ((unsigned int)CudaDriverRoutine_86e90((__int64*)v17, 0) != 0 ||
            *(_QWORD*)(v17 + 200) != 0) {
          goto LABEL_117;
        }
        v12 = (_DWORD*)(v17 + 12);
        if (cuda_driver_87f00((unsigned int*)(v17 + 12))) {
          v15 = 0;
          v11 = 0;
          v16 = 1;
          v14 = 1;
          if (!CudaDriverRoutine_87cc0(v17 + 12)) {
            goto LABEL_117;
          }
        }
        else {
          v15 = *(_QWORD*)(v17 + 120);
          v16 = 0;
          v11 = 0;
          v14 = 1;
          if (!CudaDriverRoutine_87cc0(v17 + 12)) {
            goto LABEL_117;
          }
        }
      }
      v126 = CudaDriverRoutine_874b0((__int64)v12),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v126 != 0) {
        v18 = (unsigned __int64*)(v11 + 56);
        v19 = v130;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        LODWORD(v27) = 0;
        if (v11 == 0) {
          v18 = (unsigned __int64*)(v17 + 120);
        }
        v28 = 0;
        v29 = *v18;
        if (v11 != 0) {
          v17 = **(_QWORD**)(v11 + 64);
        }
        v30 = true;
        v31 = true;
        v32 = 1;
        v33 = *(_DWORD*)(v130 + 56);
        if (v33 == 2) {
          goto LABEL_62;
        }
      }
      else {
        v35 = *(_DWORD*)(v130 + 16);
        if (v35 == 1) {
          v40 = *(_QWORD*)(v130 + 32);
          if ((_WORD)v40 != 0) {
            goto LABEL_117;
          }
          v41 = *(_QWORD*)(v130 + 40);
          if (v41 + v40 > v15 || v41 + v40 <= v40) {
            goto LABEL_117;
          }
          v42 = (unsigned __int16)*(_QWORD*)(v130 + 40) == 0 || v41 == v15;
          if (!v42 || v16 == v14) {
            goto LABEL_117;
          }
          if (v11 != 0) {
            v17 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * v16);
          }
          v43 = *(_DWORD*)(v130 + 24);
          if (v16 == 0 && v43 != 0) {
            goto LABEL_117;
          }
          v44 = CudaDriverRoutine_87010((int*)(v17 + 12)),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v19 = v130;
          if (v43 >= v44) {
            goto LABEL_117;
          }
          v29 = *(_QWORD*)(v130 + 40);
          v28 = *(unsigned int*)(v130 + 24);
          v20 = 0;
          v21 = 0;
          v22 = 0;
          v23 = 0;
          v24 = 0;
          v25 = 0;
          v26 = 0;
          LODWORD(v27) = 0;
          v30 = true;
          v31 = true;
          v32 = 1;
          v33 = *(_DWORD*)(v130 + 56);
          if (v33 == 2) {
          LABEL_62:
            v34 = 0;
            goto LABEL_63;
          }
        }
        else {
          if (v35 != 0) {
            goto LABEL_117;
          }
          v36 = *(unsigned int*)(v130 + 24);
          if ((unsigned int)v36 >= v16) {
            goto LABEL_117;
          }
          if (v11 != 0) {
            v17 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8 * v36);
          }
          v37 = *(_DWORD*)(v130 + 28);
          v114 = v17;
          if (v37 >= (unsigned int)CudaDriverRoutine_87010((int*)(v17 + 12))) {
            goto LABEL_117;
          }
          v38 = *(_DWORD*)(v17 + 16) <= 1u ? 1 : *(_DWORD*)(v17 + 16);
          v124 = v38;
          v39 = *(_DWORD*)(v17 + 8) == 3 ? *(_DWORD*)(v17 + 20) : 1;
          v122 = v39;
          v72 = *(_DWORD*)(v130 + 44);
          v73 = *(_DWORD*)(v130 + 48);
          v74 = *(_DWORD*)(v130 + 52);
          v113 = *(_DWORD*)(v17 + 12);
          v28 = *(unsigned int*)(v130 + 28);
          v75 = *(_DWORD*)(v130 + 32);
          v107 = *(_DWORD*)(v130 + 40);
          v109 = *(_DWORD*)(v130 + 36);
          v76 = CudaDriverRoutine_87d10(v12),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v19 = v130;
          if (v72 == 0) {
            goto LABEL_117;
          }
          if (v73 == 0) {
            goto LABEL_117;
          }
          if (v74 == 0) {
            goto LABEL_117;
          }
          if (v72 + v75 > v113) {
            goto LABEL_117;
          }
          if (v73 + v109 > v124) {
            goto LABEL_117;
          }
          if (v74 + v107 > v122) {
            goto LABEL_117;
          }
          v78 = v76 - 1;
          if ((((_DWORD)v76 - 1) & v75) != 0) {
            goto LABEL_117;
          }
          v79 = HIDWORD(v76);
          v80 = HIDWORD(v76) - 1;
          if (((HIDWORD(v76) - 1) & v109) != 0) {
            goto LABEL_117;
          }
          v81 = v77 - 1;
          if (((v77 - 1) & v107) != 0 ||
              (v78 & v72) != 0 && v72 + v75 != v113) {
            goto LABEL_117;
          }
          if ((v80 & v73) != 0 && v73 + v109 != v124 ||
              (v81 & v74) != 0 && v74 + v107 != v122) {
            goto LABEL_117;
          }
          v82 = v80 + v73;
          v23 = v109 / HIDWORD(v76);
          v83 = v78 + v72;
          v30 = v72 != v113;
          v31 = v73 != v124 || v72 != v113;
          v27 = (v81 + v74) / v77;
          if (v73 == v124) {
            v84 = 1;
          }
          else {
            v84 = (v81 + v74) / v77;
          }
          v26 = v82 / HIDWORD(v76);
          v32 = v27 * (v82 / HIDWORD(v76));
          if (v72 == v113) {
            v32 = v84;
          }
          v22 = v75 / (unsigned int)v76;
          v17 = v114;
          v24 = v107 / v77;
          v20 = (v113 + (unsigned int)v76 - 1) / (unsigned int)v76;
          v25 = v83 / (unsigned int)v76;
          v29 = (v83 / (unsigned int)v76 * (unsigned __int64)v26 * v27) << 16;
          v21 = (v124 + (unsigned int)v79 - 1) / (unsigned int)v79;
          v33 = *(_DWORD*)(v130 + 56);
          if (v33 == 2) {
            goto LABEL_62;
          }
        }
      }
      if (v33 != 1) {
        goto LABEL_117;
      }
      if (*(_DWORD*)(v19 + 60) != 0) {
        goto LABEL_117;
      }
      v34 = *(_QWORD*)(v19 + 64);
      if (v9 != ***(_DWORD***)(v34 + 632) || (*(_BYTE*)(v34 + 251) & 2) == 0 ||
          (unsigned __int16)*(_QWORD*)(v19 + 72) != 0 ||
          *(_QWORD*)(v19 + 72) + v29 > *(_QWORD*)(v34 + 128)) {
        goto LABEL_117;
      }
    LABEL_63:
      v45 = v123;
      v100 = v31;
      v101 = v24;
      v111 = v29;
      v115 = v11;
      v46 = v26;
      v97 = v30;
      v98 = v25;
      v105 = v21;
      v108 = v20;
      v120 = v6;
      v103 = v22;
      v99 = v27;
      if (v6 == v123) {
        v4 = v128;
        v45 = (v32 + v123 + 31) & 0xFFFFFFE0;
        v47 = CudaDriverStub_12e550(v128, 48LL * v45),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v47 == 0) {
          v93 = 0;
          v90 = 2;
          goto LABEL_123;
        }
        v48 = v28;
        v4 = v47;
      }
      else {
        v4 = v128;
        v48 = v28;
      }
      v49 = CudaDriverRoutine_87a10(*(_DWORD*)(v17 + 24), *(_DWORD*)(v17 + 28)),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v51 = *(_QWORD*)(v17 + 80);
      v50 = (_QWORD*)(v17 + 80);
      v119 = v5;
      v123 = v45;
      v52 = CudaDriverStub_1db800(v51) + v50[7] * v48 + *(v50 - 2),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v126 != 0) {
        v53 = v4 + 48LL * v120;
        *(_QWORD*)v53 = v52;
        *(_DWORD*)(v53 + 16) = v49;
        v54 = v120;
        *(_QWORD*)(v53 + 8) = v111;
        v55 = (_QWORD*)(v115 + 88);
        if (v115 == 0) {
          v55 = v50;
        }
        *(_QWORD*)(v53 + 24) = CudaDriverStub_1dbfc0(*v55),
                         v77 = COERCE_AS(
                             __typeof__(v77),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(v53 + 32) = v34;
      }
      else {
        v56 = v34;
        v57 = *(_DWORD*)(v130 + 16);
        if (v57 == 1) {
          v53 = v4 + 48LL * v120;
          *(_QWORD*)v53 = *(_QWORD*)(v130 + 32) + v52;
          v71 = *(_QWORD*)(v117 + 40);
          *(_DWORD*)(v53 + 16) = v49;
          v54 = v120;
          *(_QWORD*)(v53 + 8) = (v71 + 0xFFFF) & 0xFFFFFFFFFFFF0000LL;
          *(_QWORD*)(v53 + 24) = CudaDriverStub_1dbfc0(*v50),
                           v77 = COERCE_AS(
                               __typeof__(v77),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(_QWORD*)(v53 + 32) = v34;
        }
        else {
          if (v57 != 0) {
            goto LABEL_85;
          }
          v58 = v49;
          v59 = v52 +
                ((v103 + (v23 + v101 * (unsigned __int64)v105) * v108) << 16);
          if (v100) {
            if (v99 != 0) {
              v60 = v46;
              v112 =
                  v52 +
                  ((v103 + (v23 + v101 * (unsigned __int64)v105) * v108) << 16);
              v116 = v50;
              v61 = (v105 * v108) << 16;
              v106 = v61;
              v62 = (v46 * v98) << 16;
              v104 = (v46 * v98) << 16;
              if (!v97) {
                v85 = v99;
                v6 = v120;
                v86 = 0;
                v87 = 0;
                do {
                  v88 = v4 + 48LL * v6;
                  *(_QWORD*)v88 = v59 + v86;
                  *(_QWORD*)(v88 + 8) = v62;
                  *(_DWORD*)(v88 + 16) = v58;
                  *(_QWORD*)(v88 + 32) = v56;
                  *(_QWORD*)(v88 +
                             24) = CudaDriverStub_1dbfc0(*v116),
                             v77 = COERCE_AS(__typeof__(v77),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                  v62 = (v46 * v98) << 16;
                  ++v6;
                  --v85;
                  v59 = v112;
                  v89 = *(_QWORD*)(v130 + 72) + v87;
                  v87 += v104;
                  *(_QWORD*)(v88 + 40) = v89;
                  v86 += v106;
                } while (v85 != 0);
                goto LABEL_72;
              }
              if (v46 != 0) {
                v6 = v120;
                v63 = v98 << 16;
                v64 = 0;
                v102 = v60;
                v125 = v58;
                do {
                  v65 = v102;
                  v66 = 0;
                  v67 = 0;
                  v121 = v64;
                  v127 = v59 + (unsigned int)(v61 * v64);
                  v129 = (unsigned int)(v62 * v64);
                  do {
                    v68 = v4;
                    v69 = v4 + 48LL * v6;
                    *(_QWORD*)(v69 + 32) = v56;
                    *(_QWORD*)v69 = v127 + v66;
                    *(_QWORD*)(v69 + 8) = v63;
                    *(_DWORD*)(v69 + 16) = v125;
                    *(_QWORD*)(v69 + 24) = CudaDriverStub_1dbfc0(*v50),
                                     v77 = COERCE_AS(
                                         __typeof__(v77),
                                         PSEUDO_REGISTER(unsigned long long,
                                                         "x1", "=r"));
                    ++v6;
                    v66 += v108 << 16;
                    --v65;
                    v70 = v129 + v67;
                    v67 += v63;
                    *(_QWORD*)(v69 + 40) = v70 + *(_QWORD*)(v130 + 72);
                    v4 = v68;
                  } while (v65 != 0);
                  v59 = v112;
                  v64 = v121 + 1;
                  v61 = v106;
                  LODWORD(v62) = v104;
                } while (v121 + 1 != v99);
                goto LABEL_72;
              }
            }
          LABEL_85:
            v6 = v120;
            goto LABEL_72;
          }
          v54 = v120;
          v53 = v4 + 48LL * v120;
          *(_DWORD*)(v53 + 16) = v58;
          *(_QWORD*)(v53 + 32) = v56;
          *(_QWORD*)v53 = v59;
          *(_QWORD*)(v53 + 8) = (v46 * v98 * v99) << 16;
          *(_QWORD*)(v53 + 24) = CudaDriverStub_1dbfc0(*v50),
                           v77 = COERCE_AS(
                               __typeof__(v77),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v6 = v54 + 1;
      *(_QWORD*)(v53 + 40) = *(_QWORD*)(v130 + 72);
    LABEL_72:
      a3 = v118;
      v3 = (__typeof__(v3)){0};
      v5 = v119 + 1;
      a1 = v117;
      if (v119 + 1 == v110) {
        goto LABEL_119;
      }
    }
  }
  v6 = 0;
  v4 = 0;
LABEL_119:
  v91 = a3;
  CudaDriverRoutine_1ba4f0((__int64)v132,
                           *(_QWORD*)(*(_QWORD*)(a3 + 16) + 72LL)),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v92 = CudaDriverStub_112f50(v132, v91),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v92 != 0 || (v92 = cuda_driver_1bace0(&v131, v132, 4)) != 0) {
    v90 = v92;
    CudaDriverRoutine_1ba580((__int64)v132),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_122:
    v93 = 0;
  LABEL_123:
    CudaDriverRoutine_12e340(v4),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    CudaDriverRoutine_12e340(v93),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return v90;
  }
  v95 = v131;
  CudaDriverRoutine_1ba580((__int64)v132),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v96 = (__int64*)CudaDriverStub_12e330(24),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v93 = (__int64)v96;
  if (v96 == nullptr) {
    v90 = 2;
    goto LABEL_123;
  }
  v96[2] = v4;
  *v96 = v118;
  v96[1] = 0;
  *((_DWORD*)v96 + 2) = v6;
  if (v95 == 5) {
    (*(void (**)(void*))(*(_QWORD*)(*(_QWORD*)(v118 + 16) + 80LL) + 2368LL))(
        *(void**)(*(_QWORD*)(v118 + 16) + 80LL)),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = *(_QWORD*)(v93 + 16);
    v90 = 0;
    goto LABEL_123;
  }
  v90 = CudaDriverRoutine_113110(v118, *(_QWORD*)(v118 + 48), 0,
                                 (__int64)CudaDriverData_1423298[0],
                                 (__int64)v96, 512),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v90 != 0) {
    goto LABEL_123;
  }
  return v90;
}

__int64 cuda_driver_fe9e0(_DWORD* a1)
{
  __int64 v2;
  __int64 result;
  _DWORD* v4;
  __int64 v5;
  __int64 v6;

  if (*a1 == 3) {
    v6 = CudaDriverRoutine_9b620(a1[1]);
    v5 = *(_QWORD*)((char*)((_UNKNOWN*)0x118LL) +
                    (_QWORD)CudaDriverData_1422118);
    if (v6 != 0) {
      v5 = v6;
    }
    return *(_QWORD*)(v5 + 16928);
  }
  if (*a1 != 1) {
    return 0;
  }
  v2 = (unsigned int)a1[1];
  result = 0;
  if ((v2 & 0x80000000) == 0 && (int)v2 < CudaDriverData_1434ac0) {
    v4 = a1;
    if ((unsigned __int8)CudaDriverStub_4f840(
            *((_QWORD*)&CudaDriverData_14347a8 + v2 + 35)) != 0) {
      v5 = *((_QWORD*)&CudaDriverData_14347a8 + v4[1] + 35);
      return *(_QWORD*)(v5 + 16928);
    }
    return 0;
  }
  return result;
}

__int64 cuda_driver_fea90(__int64** a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  void* v16;
  __int64 v17;
  int v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  int v28;

  *(_OWORD*)a2 = (__typeof__(*(_OWORD*)a2)){0};
  *(_OWORD*)(a2 + 16) = (__typeof__(*(_OWORD*)(a2 + 16))){0};
  *(_OWORD*)(a2 + 32) = (__typeof__(*(_OWORD*)(a2 + 32))){0};
  *(_OWORD*)(a2 + 48) = (__typeof__(*(_OWORD*)(a2 + 48))){0};
  *(_OWORD*)(a2 + 64) = (__typeof__(*(_OWORD*)(a2 + 64))){0};
  *(_OWORD*)(a2 + 80) = (__typeof__(*(_OWORD*)(a2 + 80))){0};
  *(_OWORD*)(a2 + 96) = (__typeof__(*(_OWORD*)(a2 + 96))){0};
  *(_OWORD*)(a2 + 112) = (__typeof__(*(_OWORD*)(a2 + 112))){0};
  *(_OWORD*)(a2 + 128) = (__typeof__(*(_OWORD*)(a2 + 128))){0};
  *(_OWORD*)(a2 + 144) = (__typeof__(*(_OWORD*)(a2 + 144))){0};
  *(_OWORD*)(a2 + 160) = (__typeof__(*(_OWORD*)(a2 + 160))){0};
  *(_OWORD*)(a2 + 176) = (__typeof__(*(_OWORD*)(a2 + 176))){0};
  *(_OWORD*)(a2 + 192) = (__typeof__(*(_OWORD*)(a2 + 192))){0};
  *(_OWORD*)(a2 + 208) = (__typeof__(*(_OWORD*)(a2 + 208))){0};
  *(_OWORD*)(a2 + 224) = (__typeof__(*(_OWORD*)(a2 + 224))){0};
  *(_OWORD*)(a2 + 240) = (__typeof__(*(_OWORD*)(a2 + 240))){0};
  *(_OWORD*)(a2 + 256) = (__typeof__(*(_OWORD*)(a2 + 256))){0};
  *(_OWORD*)(a2 + 272) = (__typeof__(*(_OWORD*)(a2 + 272))){0};
  *(_OWORD*)(a2 + 288) = (__typeof__(*(_OWORD*)(a2 + 288))){0};
  *(_OWORD*)(a2 + 304) = (__typeof__(*(_OWORD*)(a2 + 304))){0};
  *(_OWORD*)(a2 + 320) = (__typeof__(*(_OWORD*)(a2 + 320))){0};
  *(_OWORD*)(a2 + 336) = (__typeof__(*(_OWORD*)(a2 + 336))){0};
  *(_OWORD*)(a2 + 352) = (__typeof__(*(_OWORD*)(a2 + 352))){0};
  *(_OWORD*)(a2 + 368) = (__typeof__(*(_OWORD*)(a2 + 368))){0};
  *a1 = nullptr;
  v6 = *(_QWORD*)(a2 + 8) | 0x80000LL;
  *(_QWORD*)a2 = *(_QWORD*)a2 & 0xF83F0FF8FFBFFFFFLL | 0x3C0800200400000LL;
  *(_QWORD*)(a2 + 8) = v6;
  v7 = *(_DWORD*)(a3 + 8);
  if (v7 == 3) {
    v10 = CudaDriverRoutine_9b620(*(_DWORD*)(a3 + 12));
    v12 = *(_QWORD*)((char*)((_UNKNOWN*)0x118LL) +
                     (_QWORD)CudaDriverData_1422118);
    if (v10 != 0) {
      v12 = v10;
    }
    v11 = *(__int64**)(v12 + 16928);
    if (v11 == nullptr) {
      return 101;
    }
  }
  else {
    if (v7 != 1) {
      return 101;
    }
    v8 = *(unsigned int*)(a3 + 12);
    result = 101;
    if ((v8 & 0x80000000) != 0 || (int)v8 >= CudaDriverData_1434ac0) {
      return result;
    }
    v10 = CudaDriverStub_4f840(*((_QWORD*)&CudaDriverData_14347a8 + v8 + 35));
    if ((_BYTE)v10 == 0) {
      return 101;
    }
    v11 = *(
        __int64**)(*((_QWORD*)&CudaDriverData_14347a8 + *(int*)(a3 + 12) + 35) +
                   16928LL);
    if (v11 == nullptr) {
      return 101;
    }
  }
  v13 = *(unsigned __int8*)(a3 + 24);
  if (*(_BYTE*)(a3 + 24) == 0) {
    goto LABEL_19;
  }
  if ((_DWORD)v13 != 1 || *(_DWORD*)(a3 + 8) != 1) {
    return 1;
  }
  v14 = *(unsigned int*)(a3 + 12);
  result = 1;
  if ((v14 & 0x80000000) == 0 && (int)v14 < CudaDriverData_1434ac0) {
    v10 = CudaDriverRoutine_9aa60(
        *((_QWORD*)&CudaDriverData_14347a8 + v14 + 35), 1);
    if ((_BYTE)v10 == 0) {
      return 1;
    }
    v13 = 512;
  LABEL_19:
    v15 = *(_QWORD*)(a2 + 8) & 0xFFFFFFFFFFFFF9FFLL | v13;
    *(_QWORD*)(a2 + 8) = v15;
    v16 = CudaDriverData_1422118;
    if ((*((_BYTE*)&CudaDriverRoutine_4730 + (_QWORD)CudaDriverData_1422118 +
           2) &
         1) != 0 &&
        (*(_BYTE*)(a3 + 31) & 1) != 0) {
      v15 |= 0x2000000u;
      *(_QWORD*)(a2 + 8) = v15;
    }
    if ((*(_WORD*)(a3 + 26) & 1) != 0) {
      if (*(_BYTE*)(a3 + 24) != 0 || *(_BYTE*)(a3 + 25) != 0 ||
          *(_DWORD*)(a3 + 4) != 0) {
        return 1;
      }
      *(_QWORD*)(a2 + 8) = v15 | 0x2000000;
      if (*(_BYTE*)(a3 + 25) == 0) {
        goto LABEL_35;
      }
    }
    else if (*(_BYTE*)(a3 + 25) == 0) {
      goto LABEL_35;
    }
    if (*(_DWORD*)(a3 + 8) != 1) {
      return 1;
    }
    v17 = *v11;
    v28 = 0;
    v10 = cuda_driver_9a090(v17, 110, &v28);
    if ((_DWORD)v10 != 0 || v28 == 0) {
      return 101;
    }
    *(_QWORD*)(a2 + 8) = *(_QWORD*)(a2 + 8) & 0xFFFFFFFFFEFFF9FFLL | 0x1000000;
  LABEL_35:
    if (*(_BYTE*)(a3 + 28) != 0 || *(_BYTE*)(a3 + 29) != 0 ||
        *(_BYTE*)(a3 + 30) != 0) {
      return 1;
    }
    v19 = *(_DWORD*)(a3 + 8);
    if (v19 == 3) {
      v22 = *(_QWORD*)a2 & 0xFFFFFFFFFFFF81F8LL | 0x201;
      *(_QWORD*)a2 = v22;
      v23 = v22 & 0xFFFFFFFFFFFFFFC7LL;
      v24 = 16;
      if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)v16 + 2) & 1) == 0) {
        v24 = 24;
      }
      v21 = v24 | v23;
    }
    else {
      if (v19 != 1) {
        return 1;
      }
      *(_QWORD*)a2 = *(_QWORD*)a2 & 0xFFFFFFFF80FF8038LL | 0x202;
      v10 = CudaDriverRoutine_99f10(*v11);
      if ((_BYTE)v10 != 0) {
        goto LABEL_49;
      }
      v20 = 16;
      if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)v16 + 2) & 1) == 0) {
        v20 = 24;
      }
      v21 = v20 | *(_QWORD*)a2 & 0xFFFFFFFFFFFFFFC7LL;
    }
    *(_QWORD*)a2 = v21;
  LABEL_49:
    v25 = *(_DWORD*)(a3 + 4);
    if ((v25 & 2) != 0) {
      v10 = CudaDriverRoutine_fe850(v11, 2);
      if ((_BYTE)v10 == 0 || *(_QWORD*)(a3 + 16) == 0) {
        return 1;
      }
      *(_QWORD*)(a2 + 8) |= 0x1000uLL;
      v25 = *(_DWORD*)(a3 + 4);
    }
    else if (*(_QWORD*)(a3 + 16) != 0) {
      return 1;
    }
    if ((v25 & 4) != 0) {
      v10 = CudaDriverRoutine_fe850(v11, 4);
      if ((_BYTE)v10 == 0) {
        return 1;
      }
      *(_QWORD*)(a2 + 8) |= 0x2000uLL;
      v25 = *(_DWORD*)(a3 + 4);
    }
    if ((v25 & 1) != 0) {
      v10 = CudaDriverRoutine_fe850(v11, 1);
      if ((_BYTE)v10 == 0) {
        return 1;
      }
      *(_QWORD*)(a2 + 8) |= 0x800uLL;
      v25 = *(_DWORD*)(a3 + 4);
    }
    if ((v25 & 8) != 0) {
      return 1;
    }
    v26 = *(_DWORD*)(a3 + 8);
    if (v26 == 3) {
      if ((unsigned int)CudaDriverStub_4f840(v10) == 0 &&
          *(_DWORD*)(a3 + 12) != 0) {
        return 1;
      }
      v27 = CudaDriverRoutine_fe8c0();
      if ((v27 & 1) == 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"HOST_NUMA allocation is not supported on this platform");
        return 801;
      }
      if ((unsigned int)CudaDriverStub_4f840(v27) != 0) {
        *(_DWORD*)(a2 + 348) = *(_DWORD*)(a3 + 12);
        *(_BYTE*)(a2 + 352) = 1;
      }
      else {
        *(_DWORD*)(a2 + 348) = -1;
      }
    }
    else if (v26 == 1 && (*(_WORD*)(*v11 + 16848) & 4) == 0) {
      return 101;
    }
    if (*(_DWORD*)a3 == 1 &&
        ((*(_QWORD*)a2 & 7LL) != 2 || (*(_QWORD*)a2 & 0x3000000LL) == 0)) {
      *a1 = v11;
      return 0;
    }
    return 1;
  }
  return result;
}

__int64 cuda_driver_ff320(_DWORD* a1, __int64 a2, _DWORD* a3)
{
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  _DWORD** v8;
  int v9;
  __int64 result;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  _DWORD* v14;
  unsigned int* v15;
  _QWORD* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;

  if (a2 == 0) {
    v9 = 0;
    goto LABEL_9;
  }
  if (*a1 != 1) {
    if (*a1 != 3) {
      v13 = 0;
    LABEL_36:
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Index %zu: Invalid location type (0x%x), only DEVICE and "
                   "HOST_NUMA are valid types\n",
          v13);
      return 1;
    }
    v5 = a1;
    v6 = CudaDriverRoutine_9b620(a1[1]);
    v7 = *(_QWORD*)((char*)((_UNKNOWN*)0x118LL) +
                    (_QWORD)CudaDriverData_1422118);
    if (v6 != 0) {
      v7 = v6;
    }
    v8 = *(_DWORD***)(v7 + 16928);
    if (v8 == nullptr) {
      return 1;
    }
    goto LABEL_14;
  }
  v11 = (unsigned int)a1[1];
  v5 = a1;
  result = 1;
  if ((v11 & 0x80000000) == 0 && (int)v11 < CudaDriverData_1434ac0) {
    if ((unsigned __int8)CudaDriverStub_4f840(
            *((_QWORD*)&CudaDriverData_14347a8 + v11 + 35)) == 0) {
      return 1;
    }
    v8 = *(_DWORD***)(*((_QWORD*)&CudaDriverData_14347a8 + v5[1] + 35) +
                      16928LL);
    if (v8 == nullptr) {
      return 1;
    }
  LABEL_14:
    if ((unsigned __int8)CudaDriverStub_4f840(*v8) == 0) {
    LABEL_39:
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Device index %u does not support memmap\n", **v8);
      return 101;
    }
    v12 = v5[2];
    v13 = 0;
    if (v12 > 3 || v12 == 2) {
    LABEL_40:
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Index %zu: Invalid flag specified (0x%x)\n", v13);
      return 1;
    }
    v14 = v5;
    v9 = (*v8)[5466];
    if (a2 != 1) {
      v15 = v14 + 5;
      v13 = 1;
      v16 = CudaDriverData_1422118;
      do {
        v17 = *(v15 - 2);
        if (v17 == 1) {
          v20 = *(v15 - 1);
          result = 1;
          if ((v20 & 0x80000000) != 0 ||
              (int)v20 >=
                  (signed __int32)*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                                             (_QWORD)v16)) {
            return result;
          }
          if ((unsigned __int8)CudaDriverStub_4f840(v16[v20 + 35]) == 0) {
            return 1;
          }
          v19 = v16[(int)*(v15 - 1) + 35];
        }
        else {
          if (v17 != 3) {
            goto LABEL_36;
          }
          v18 = CudaDriverRoutine_9b620(*(v15 - 1));
          v19 = *(_QWORD*)((char*)((_UNKNOWN*)0x118LL) + (_QWORD)v16);
          if (v18 != 0) {
            v19 = v18;
          }
        }
        v8 = *(_DWORD***)(v19 + 16928);
        if (v8 == nullptr) {
          return 1;
        }
        if ((unsigned __int8)CudaDriverStub_4f840(*v8) == 0) {
          goto LABEL_39;
        }
        if (v9 != (*v8)[5466]) {
          return 101;
        }
        v22 = *v15;
        v15 += 3;
        v21 = v22;
        if (v22 > 3 || v21 == 2) {
          goto LABEL_40;
        }
      } while (a2 != ++v13);
    }
  LABEL_9:
    *a3 = v9;
    return 0;
  }
  return result;
}

__int64 cuda_driver_101570()
{
  void* v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned int v3;
  unsigned int v4;
  __int64 v6;
  __int64 v7;
  __int64 i;

  v0 = CudaDriverData_1422118;
  v1 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                        (_QWORD)CudaDriverData_1422118);
  v2 = *(unsigned int*)(*(_QWORD*)((char*)((_UNKNOWN*)0x118LL) +
                                   (_QWORD)CudaDriverData_1422118) +
                        3440LL);
  CudaDriverRoutine_108450(
      (char*)&CudaDriverRoutine_4e50 + (_QWORD)CudaDriverData_1422118, 45, 0);
  v3 = CudaDriverRoutine_8ad40((__int64)&CudaDriverRoutine_4768 + (_QWORD)v0,
                               v2, v1,
                               (__int64)&CudaDriverRoutine_4e50 + (_QWORD)v0);
  if (v3 != 0) {
    goto LABEL_6;
  }
  v3 = CudaDriverRoutine_8ad40((__int64)&CudaDriverRoutine_4780 + (_QWORD)v0,
                               v2, v2,
                               (__int64)&CudaDriverRoutine_4e50 + (_QWORD)v0);
  if (v3 != 0) {
    goto LABEL_6;
  }
  v3 = CudaDriverRoutine_8ad40((__int64)&CudaDriverRoutine_4798 + (_QWORD)v0,
                               v2, v2,
                               (__int64)&CudaDriverRoutine_4e50 + (_QWORD)v0);
  if (v3 != 0) {
    goto LABEL_6;
  }
  v3 = CudaDriverRoutine_8ad40(
      (__int64)cuda_driver_misc_helpers_4c20 + (_QWORD)v0, 1, v2,
      (__int64)&CudaDriverRoutine_4e50 + (_QWORD)v0);
  if (v3 != 0) {
    goto LABEL_6;
  }
  v3 = CudaDriverRoutine_8ad40((__int64)&CudaDriverRoutine_47b0 + (_QWORD)v0, 1,
                               v1,
                               (__int64)&CudaDriverRoutine_4e50 + (_QWORD)v0);
  if (v3 != 0) {
    goto LABEL_6;
  }
  v6 = CudaDriverRoutine_12e510(0x4000, 16);
  if (v6 == 0 || (*(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v0) = v6,
                  (v7 = CudaDriverRoutine_12e510(0x4000, 1)) == 0)) {
    v4 = 2;
    goto LABEL_7;
  }
  *(_QWORD*)((char*)&CudaDriverRoutine_47d0 + (_QWORD)v0) = v7;
  CudaDriverRoutine_107f40(
      (__int64 (*)(__int64, int))((char*)cuda_driver_misc_helpers_4be0 +
                                  (_QWORD)v0),
      44, 0);
  v3 = CudaDriverRoutine_4cfb0(&CudaDriverData_4bd8[(_QWORD)v0], v1);
  if (v3 != 0) {
    goto LABEL_6;
  }
  CudaDriverRoutine_4d420(*(unsigned __int64**)&CudaDriverData_4bd8[(_QWORD)v0],
                          0, (unsigned int)(v1 - 1));
  if ((_DWORD)v1 != 0) {
    for (i = 0; i != v1; ++i) {
      CudaDriverRoutine_107f40(
          (_QWORD*)(*(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v0) +
                    16 * i),
          48, 0);
      *(_BYTE*)(*(_QWORD*)((char*)&CudaDriverRoutine_47d0 + (_QWORD)v0) + i) =
          1;
    }
  }
  CudaDriverRoutine_107f40((char*)&CudaDriverRoutine_4bf8 + (_QWORD)v0, 44, 0);
  v3 = CudaDriverRoutine_4cfb0((char*)&CudaDriverRoutine_4bf0 + (_QWORD)v0, v2);
  if (v3 != 0) {
  LABEL_6:
    v4 = v3;
  }
  else {
    CudaDriverRoutine_107f40(
        (__int64 (*)())((char*)cuda_driver_misc_helpers_4c10 + (_QWORD)v0), 44,
        0);
    v4 = CudaDriverRoutine_4cfb0((char*)&CudaDriverRoutine_4c08 + (_QWORD)v0,
                                 v2);
    if (v4 == 0) {
      *((_BYTE*)&CudaDriverRoutine_4e68 + (_QWORD)v0) =
          cuda_driver_misc_helpers_de860();
      *((_BYTE*)&CudaDriverRoutine_4e68 + (_QWORD)v0) =
          cuda_driver_misc_helpers_de860();
      *((_BYTE*)&CudaDriverRoutine_4e68 + (_QWORD)v0 + 2) =
          cuda_driver_misc_helpers_de860();
      *(_DWORD*)((char*)&CudaDriverRoutine_4e48 + (_QWORD)v0) = 0;
      *(_QWORD*)((char*)&CudaDriverRoutine_4e80 + (_QWORD)v0) = 0;
      return v4;
    }
  }
LABEL_7:
  cuda_driver_1017c0();
  return v4;
}

__int64 cuda_driver_1017c0()
{
  void* v0;
  __int64 v1;
  __int64 v2;
  __int64 i;
  __int64 v4;

  v0 = CudaDriverData_1422118;
  CudaDriverRoutine_8adb0((char*)&CudaDriverRoutine_4768 +
                          (_QWORD)CudaDriverData_1422118);
  CudaDriverRoutine_8adb0((char*)&CudaDriverRoutine_4780 + (_QWORD)v0);
  CudaDriverRoutine_8adb0((char*)&CudaDriverRoutine_4798 + (_QWORD)v0);
  CudaDriverRoutine_8adb0((char*)&CudaDriverRoutine_47b0 + (_QWORD)v0);
  CudaDriverRoutine_8adb0(
      (__int64 (*)())((char*)cuda_driver_misc_helpers_4c20 + (_QWORD)v0));
  if (*(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v0) != 0) {
    v1 = *(_QWORD*)((char*)&CudaDriverRoutine_47d0 + (_QWORD)v0);
    v2 = 0;
    for (i = 0; i != 0x4000; ++i) {
      if (*(_BYTE*)(v1 + i) != 0) {
        CudaDriverRoutine_107f60(
            (_QWORD*)(*(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v0) +
                      v2));
        v1 = *(_QWORD*)((char*)&CudaDriverRoutine_47d0 + (_QWORD)v0);
      }
      v2 += 16;
    }
    v4 = *(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v0);
  }
  else {
    v4 = 0;
  }
  CudaDriverRoutine_12e340(v4);
  CudaDriverRoutine_12e340(
      *(_QWORD*)((char*)&CudaDriverRoutine_47d0 + (_QWORD)v0));
  CudaDriverRoutine_4d080(*(_QWORD**)&CudaDriverData_4bd8[(_QWORD)v0]);
  CudaDriverRoutine_4d080(
      *(_QWORD**)((char*)&CudaDriverRoutine_4bf0 + (_QWORD)v0));
  CudaDriverRoutine_4d080(
      *(_QWORD**)((char*)&CudaDriverRoutine_4c08 + (_QWORD)v0));
  CudaDriverRoutine_107f60((__int64 (*)(__int64, int))(
      (char*)cuda_driver_misc_helpers_4be0 + (_QWORD)v0));
  CudaDriverRoutine_107f60((char*)&CudaDriverRoutine_4bf8 + (_QWORD)v0);
  CudaDriverRoutine_107f60(
      (__int64 (*)())((char*)cuda_driver_misc_helpers_4c10 + (_QWORD)v0));
  CudaDriverRoutine_108490((char*)&CudaDriverRoutine_4e50 + (_QWORD)v0);
  return memset_plt((char*)&CudaDriverRoutine_4768 + (_QWORD)v0, 0, 1832);
}

__int64 cuda_driver_101900(__int64 a1, unsigned int a2)
{
  __int64 v3;
  __int64 v5;
  void* v6;
  int v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64* v11;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  _QWORD* v23;
  unsigned int v24;
  unsigned __int64 v25;
  __int64* v26;

  v3 = a2;
  v5 = CudaDriverRoutine_12e510(a2, 616);
  v6 = CudaDriverData_1422118;
  if (v5 != 0) {
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                   (_QWORD)CudaDriverData_1422118) >= 2u &&
        *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) +
                   (_QWORD)CudaDriverData_1422118) == 0) {
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) +
                     (_QWORD)CudaDriverData_1422118) == 1) {
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                       (_QWORD)CudaDriverData_1422118) != 0) {
          v10 = 0;
          v11 = (__int64*)((char*)&CudaDriverRoutine_4c48 +
                           (_QWORD)CudaDriverData_1422118);
          while (1) {
            v8 = CudaDriverRoutine_202f80(0, 0, 0, 0, v11,
                                          *((_QWORD*)v6 + v10 + 35));
            if (v8 != 0) {
              break;
            }
            ++v10;
            ++v11;
            if (v10 >=
                *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v6)) {
              goto LABEL_17;
            }
          }
          v9 = (__int64*)((char*)cuda_driver_misc_helpers_4c40 + (_QWORD)v6);
          goto LABEL_60;
        }
      LABEL_17:
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v6) >= 2u &&
            *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v6) == 0) {
          if (*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v6) != 1) {
            **(_QWORD**)((char*)cuda_driver_misc_helpers_4c40 + (_QWORD)v6) =
                a1;
            if (a2 != 0) {
            LABEL_27:
              v15 = 0;
              v16 = (_QWORD*)v5;
              v9 =
                  (__int64*)((char*)cuda_driver_misc_helpers_4c40 + (_QWORD)v6);
              while (1) {
                if (*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v6) ==
                    1) {
                  v9 = (__int64*)((char*)v6 +
                                  8 * ((unsigned int)v15 %
                                       *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                                                  (_QWORD)v6)) +
                                  19528);
                }
                v8 = CudaDriverRoutine_203600(*v9, v16 + 3);
                if (v8 != 0) {
                  goto LABEL_56;
                }
                if (*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v6) ==
                    1) {
                  v8 = CudaDriverRoutine_202e80(*v9);
                  if (v8 != 0) {
                    goto LABEL_56;
                  }
                }
                cuda_driver_2043d0(v16[3], 0);
                CudaDriverRoutine_108450(v16, 46, 0);
                CudaDriverRoutine_107f40(v16 + 4, 38, 0);
                ++v15;
                v16[74] = v16[3];
                v16 += 77;
                if (v3 == v15) {
                  goto LABEL_37;
                }
              }
            }
          LABEL_36:
            v9 = (__int64*)((char*)cuda_driver_misc_helpers_4c40 + (_QWORD)v6);
          LABEL_37:
            if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v6) >= 2u &&
                *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v6) == 0) {
              if (*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v6) != 1) {
                *(_QWORD*)*v9 = 0;
                if (*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v6) ==
                    1) {
                LABEL_47:
                  if (*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v6) !=
                      0) {
                    v20 = 0;
                    while (1) {
                      v8 =
                          CudaDriverRoutine_202e80(*((_QWORD*)v6 + v20 + 2441));
                      if (v8 != 0) {
                        goto LABEL_55;
                      }
                      if (++v20 >=
                          (unsigned __int64)*(
                              unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                                             (_QWORD)v6)) {
                        goto LABEL_67;
                      }
                    }
                  }
                  goto LABEL_67;
                }
              LABEL_54:
                v8 = CudaDriverRoutine_202e80(*v9);
                if (v8 != 0) {
                LABEL_55:
                  LODWORD(v15) = a2;
                LABEL_56:
                  if ((_DWORD)v15 != 0) {
                    v21 = v8;
                    v22 = (unsigned int)v15;
                    v23 = (_QWORD*)v5;
                    do {
                      CudaDriverRoutine_108490(v23);
                      CudaDriverRoutine_203f30(v23[3]);
                      v23 += 77;
                      --v22;
                    } while (v22 != 0);
                    v8 = v21;
                  }
                  goto LABEL_60;
                }
              LABEL_67:
                *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v6] = v5;
                return 0;
              }
              if (*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v6) == 0) {
                goto LABEL_67;
              }
              v18 = 0;
              do {
                v19 = (char*)v6 + 8 * v18++;
                **((_QWORD**)v19 + 2441) = 0;
              } while (v18 < *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                                              (_QWORD)v6));
            }
            if (*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v6) == 1) {
              goto LABEL_47;
            }
            goto LABEL_54;
          }
          if (*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v6) != 0) {
            v13 = 0;
            do {
              v14 = (char*)v6 + 8 * v13++;
              **((_QWORD**)v14 + 2441) = a1;
            } while (v13 < *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                                            (_QWORD)v6));
          }
        }
        if (a2 != 0) {
          goto LABEL_27;
        }
        goto LABEL_36;
      }
      v8 = CudaDriverRoutine_202f80(
          0, 0, 0, 0,
          (__int64*)((char*)cuda_driver_misc_helpers_4c40 +
                     (_QWORD)CudaDriverData_1422118),
          *(_QWORD*)(a1 + 64));
      if (v8 == 0) {
        goto LABEL_17;
      }
    }
    else {
      v8 = CudaDriverStub_203210(0, 0, 0, 0,
                                 (__int64)cuda_driver_misc_helpers_4c40 +
                                     (_QWORD)CudaDriverData_1422118);
      if (v8 == 0) {
        goto LABEL_17;
      }
    }
    v9 = (__int64*)((char*)cuda_driver_misc_helpers_4c40 + (_QWORD)v6);
  }
  else {
    v8 = 2;
    v9 = (__int64*)((char*)cuda_driver_misc_helpers_4c40 +
                    (_QWORD)CudaDriverData_1422118);
  }
LABEL_60:
  v24 = v8;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v6) == 1) {
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v6) != 0) {
      v25 = 0;
      v26 = (__int64*)((char*)&CudaDriverRoutine_4c48 + (_QWORD)v6);
      do {
        CudaDriverRoutine_203100(v26);
        ++v25;
        ++v26;
      } while (v25 <
               *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v6));
    }
  }
  else {
    CudaDriverRoutine_203100(v9);
  }
  CudaDriverRoutine_12e340(v5);
  return v24;
}

__int64 cuda_driver_103bd0(__int64 result, __int64* a2, __int64 a3, __int64 a4,
                           int a5, __int64 a6, int a7, __int64 a8)
{
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  struct {
    int v21;
    char gap12_[4];
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    unsigned int v26;
    int v27;
    __int64 v28;
    int v29;
    int v30;
    __int64 v31;
    __int64 v32;
    int v33;
  } v21_;

  if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_1432178) != 0) {
    v21_.v21 = 88;
    v15 = CudaDriverRoutine_98340(result);
    v16 = *a2;
    v17 = *((unsigned int*)a2 + 3);
    v21_.v22 = v15;
    v21_.v23 = a3;
    v21_.v24 = a4;
    v21_.v25 = v16;
    switch ((_DWORD)v17) {
    case 4:
      v21_.v26 = ((unsigned int)v16 >> 2) & 0xF;
      if ((unsigned __int64)a2[4] > 1) {
        v18 = 3;
      }
      else {
        v18 = 4;
      }
      break;
    case 2:
      v21_.v26 = (((unsigned int)v16 >> 2) & 0xF) + ((v16 & 2) != 0);
      v18 = 2;
      break;
    case 1:
      v21_.v26 = (((unsigned int)v16 >> 2) & 0xF) - (v16 & 3) + 4;
      v18 = 1;
      break;
    default:
      v18 = 0;
      v21_.v26 = 0;
      break;
    }
    v21_.v27 = v18;
    v19 = a2[2];
    v20 = a2[4];
    v21_.v31 = a6;
    v21_.v32 = a8;
    v21_.v33 = a7;
    v21_.v28 = v19 * v17 * v20;
    v21_.v29 = *((_DWORD*)a2 + 2);
    v21_.v30 = a5;
    return cuda_driver_20b420(9u, 1u, (__int64)&v21_.v21);
  }
  return result;
}

__int64 cuda_driver_103d10(__int64 result, __int64 a2, int a3, __int64 a4,
                           int a5, __int64 a6, __int64 a7)
{
  struct {
    int v7;
    char gap4_[4];
    __int64 v8;
    __int64 v9;
    int v10;
    char gap28_[4];
    __int64 v11;
    __int64 v12;
    int v13;
    char gap52_[4];
    __int64 v14;
  } v7_;

  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_1432178) !=
      0) {
    v7_.v8 = result;
    v7_.v9 = a2;
    v7_.v10 = a3;
    v7_.v11 = a4;
    v7_.v12 = a6;
    v7_.v13 = a5;
    v7_.v14 = a7;
    v7_.v7 = 64;
    return cuda_driver_20b420(9u, 2u, (__int64)&v7_.v7);
  }
  return result;
}

__int64 cuda_driver_1048e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64* a5, char a6, __int64 a7)
{
  __int64 v7;
  __int64 v15;
  int v16;
  int v17;
  int8x16_t v18;
  unsigned __int64 v19;
  __int64 v20;
  int8x16_t v21;
  int v22;
  int v23;
  __int64 result;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  struct {
    char gap16_[8];
    int v29;
    char gap28_[4];
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64* v34;
    __int64 v35;
    int8x16_t v36;
    int v37;
    int v38;
    _BOOL4 v39;
  } v29_;

  v7 = *(_QWORD*)(a7 + 56);
  if (a5 != nullptr && (a6 & 2) == 0) {
    CudaDriverRoutine_9aa20(*(_QWORD*)(a1 + 64));
  }
  if (a4 == 0) {
    v15 = *(_QWORD*)(a7 + 56);
    if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x48LL) +
                              (_QWORD)CudaDriverData_14225e0) +
                   4) != 0) {
      v17 = *(_DWORD*)(a2 + 8);
      v16 = *(_DWORD*)(a2 + 12);
      v18 = *(int8x16_t*)(a2 + 24);
      v29_.v29 = 88;
      v19 = *(_QWORD*)a2;
      v29_.v30 = a1;
      v29_.v31 = a3;
      v29_.v37 = v16;
      v29_.v38 = v17;
      v29_.v32 = v15;
      v29_.v33 = v19;
      v20 = (v19 >> 2) & 0xF;
      v21 = vextq_s8(v18, v18, 8u);
      v22 = v20 + ((v19 & 2) != 0);
      v23 = v20 - (v19 & 3) + 4;
      if (v16 != 1) {
        v23 = 0;
      }
      if (v16 == 2) {
        v23 = v22;
      }
      v29_.v36 = v21;
      if (v16 != 4) {
        LODWORD(v20) = v23;
      }
      LODWORD(v29_.v34) = v20;
      HIDWORD(v29_.v34) = a6 & 1;
      v29_.v35 = *(_QWORD*)(a2 + 16);
      v29_.v39 = (a6 & 2) == 0;
      cuda_driver_20b420(9u, 3u, (__int64)&v29_.v29);
    }
  }
  if (*(_BYTE*)(a7 + 67) != 0) {
    v27 = 0;
    v28 = 0;
    if (a5 != nullptr) {
      result =
          CudaDriverRoutine_c43e0(a4, 0, *a5, a5[1], a5[2], &v28, &v27, 1u);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    else {
      CudaDriverRoutine_205ee0(0, a3, (__int64)&v28, &v27, 1);
    }
    cuda_driver_103bd0(a1, (__int64*)a7, a3, v7, 0, v27, 0, (__int64)&v28);
    v28 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
        *(_QWORD*)(a1 + 64) + 19312LL))(v28, a1, a7, 2);
    if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x48LL) +
                              (_QWORD)CudaDriverData_14225e0)) != 0) {
      v29_.v30 = a1;
      v29_.v31 = a3;
      LODWORD(v29_.v32) = 0;
      v29_.v33 = v27;
      v29_.v34 = &v28;
      LODWORD(v29_.v35) = 0;
      LANES128(v29_.v36).n128_u64[0] = a4;
      v29_.v29 = 64;
      cuda_driver_20b420(9u, 2u, (__int64)&v29_.v29);
    }
    if (a5 != nullptr) {
      goto LABEL_26;
    }
  LABEL_34:
    CudaDriverRoutine_206060(a3, v28);
    return 0;
  }
  if (*(_BYTE*)(a7 + 68) == 0) {
    return cuda_driver_helpers_1b7b30(a1, a7, a3);
  }
  if (CudaDriverRoutine_5e980(*(_QWORD*)(a1 + 72))) {
    v25 = 3;
    v26 = 1;
    v27 = 0;
    v28 = 0;
    if (a5 != nullptr) {
      goto LABEL_20;
    }
  LABEL_30:
    CudaDriverRoutine_205fa0_alt1(v26, a3, (__int64)&v28, &v27);
    goto LABEL_31;
  }
  CudaDriverRoutine_9ab50(*(_QWORD*)(a1 + 64));
  if ((*(_WORD*)(*(_QWORD*)(a1 + 64) + 16848LL) & 0x80) != 0) {
    return 999;
  }
  v25 = 2;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if (a5 == nullptr) {
    goto LABEL_30;
  }
LABEL_20:
  result = CudaDriverRoutine_c43e0(a4, v26, *a5, a5[1], a5[2], &v28, &v27, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
LABEL_31:
  cuda_driver_103bd0(a1, (__int64*)a7, a3, v7, 0, v27, v25, (__int64)&v28);
  v28 = (*(__int64 (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)(a1 + 64) + 19320LL))(v28, a1, a7, 0, 0);
  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                 *(_QWORD*)((char*)((_UNKNOWN*)0x48LL) +
                            (_QWORD)CudaDriverData_14225e0)) != 0) {
    v29_.v30 = a1;
    v29_.v31 = a3;
    LODWORD(v29_.v32) = 0;
    v29_.v33 = v27;
    v29_.v34 = &v28;
    LODWORD(v29_.v35) = v25;
    LANES128(v29_.v36).n128_u64[0] = a4;
    v29_.v29 = 64;
    cuda_driver_20b420(9u, 2u, (__int64)&v29_.v29);
  }
  if (a5 == nullptr) {
    goto LABEL_34;
  }
LABEL_26:
  CudaDriverRoutine_c46c0(a4, v27, *a5, v28, 0);
  return 0;
}

__int64 cuda_driver_107140(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           unsigned __int64 a5)
{
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v10 = (char*)CudaDriverData_1422118;
  CudaDriverStub_107f90_alt1((char*)CudaDriverData_1422118 + 104);
  if (*(_QWORD*)(a4 + 8) != 1 || (v11 = *(_QWORD*)(a4 + 16), a5 >= v11)) {
    v14 = *(_QWORD*)(a4 + 32);
    v15 = *(_QWORD*)(a4 + 24);
    if (v14 == 0) {
      v14 = (a4 + v15 + 39) & -v15;
    }
    v16 = *(_QWORD*)(a4 + 16);
    if (v16 <= a5) {
      v17 = a5;
    }
    else {
      v17 = *(_QWORD*)(a4 + 16);
    }
    v18 = CudaDriverStub_12e330(v15 + v17 + 39);
    if (v18 == 0) {
      v24 = 2;
      goto LABEL_30;
    }
    v19 = *(_BYTE*)v18;
    *(_QWORD*)(v18 + 24) = v15;
    *(_QWORD*)(v18 + 32) = 0;
    v20 = v18;
    *(_QWORD*)(v18 + 8) = 1;
    *(_QWORD*)(v18 + 16) = v17;
    *(_BYTE*)v18 = v19 & 0xFC;
    *(_QWORD*)(*(_QWORD*)(a1 + 464) + 8 * a2) = v18;
    v21 = *(_QWORD*)(v18 + 32);
    if (v21 == 0) {
      v21 = (v18 + *(_QWORD*)(v18 + 24) + 39) & -*(_QWORD*)(v18 + 24);
    }
    memcpy_plt(v21, v14, v16);
    memset_plt_alt1(v21 + v16, 0, v17 - v16);
    v22 = *(_QWORD*)(v20 + 32);
    if (v22 != 0) {
      *a3 = v22;
      v23 = *(_QWORD*)(a4 + 8) - 1LL;
      *(_QWORD*)(a4 + 8) = v23;
      if (v23 != 0) {
        goto LABEL_29;
      }
    }
    else {
      *a3 = (v20 + *(_QWORD*)(v20 + 24) + 39) & -*(_QWORD*)(v20 + 24);
      v25 = *(_QWORD*)(a4 + 8) - 1LL;
      *(_QWORD*)(a4 + 8) = v25;
      if (v25 != 0) {
        goto LABEL_29;
      }
    }
    v26 = *(_QWORD*)((char*)&CudaDriverRoutine_4720 + (_QWORD)v10);
    v27 = *(_QWORD*)(a4 + 32);
    if (v27 != 0) {
      if (CudaDriverStub_1a2d50(v26, v27, *(_QWORD*)(a4 + 16)) != a4) {
        goto LABEL_27;
      }
    }
    else if (CudaDriverStub_1a2d50(
                 v26, (a4 + *(_QWORD*)(a4 + 24) + 39) & -*(_QWORD*)(a4 + 24),
                 *(_QWORD*)(a4 + 16)) != a4) {
      goto LABEL_27;
    }
    CudaDriverRoutine_12e340(a4);
  LABEL_29:
    v24 = 0;
    goto LABEL_30;
  }
  v12 = *(_QWORD*)((char*)&CudaDriverRoutine_4720 + (_QWORD)v10);
  v13 = *(_QWORD*)(a4 + 32);
  if (v13 != 0) {
    if (CudaDriverStub_1a2d50(v12, v13, v11) == a4) {
      goto LABEL_23;
    }
  LABEL_27:
    v24 = 999;
    goto LABEL_30;
  }
  if (CudaDriverStub_1a2d50(
          v12, (a4 + *(_QWORD*)(a4 + 24) + 39) & -*(_QWORD*)(a4 + 24), v11) !=
      a4) {
    goto LABEL_27;
  }
LABEL_23:
  *(_BYTE*)a4 &= ~1u;
  v28 = *(_QWORD*)(a4 + 32);
  if (v28 == 0) {
    v28 = (a4 + *(_QWORD*)(a4 + 24) + 39) & -*(_QWORD*)(a4 + 24);
  }
  v24 = 0;
  *a3 = v28;
LABEL_30:
  CudaDriverStub_108070_alt1(v10 + 104);
  return v24;
}

__int64 cuda_driver_107380(__int64* a1, unsigned __int64 a2)
{
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v11;
  __int64 v12;

  if (CudaDriverRoutine_a3820(a1[10], a2, &v12, &v11) == 0 || a2 >= a1[57]) {
    return 999;
  }
  v4 = a1[58];
  v5 = *(_QWORD*)(v4 + 8 * a2);
  if (v5 == 0 || *(_QWORD*)(v5 + 32) != 0 || (*(_BYTE*)v5 & 2) != 0) {
    return 0;
  }
  v6 = (char*)CudaDriverData_1422118;
  CudaDriverStub_107f90_alt1((char*)CudaDriverData_1422118 + 104);
  if ((*(_BYTE*)v5 & 1) != 0 || *(_QWORD*)(v5 + 8) != 1) {
    v9 = 999;
  }
  else {
    v7 = *(_QWORD*)(v5 + 32);
    if (v7 == 0) {
      v7 = (v5 + *(_QWORD*)(v5 + 24) + 39) & -*(_QWORD*)(v5 + 24);
    }
    v8 = CudaDriverStub_1a2d60(
        *(_QWORD*)((char*)&CudaDriverRoutine_4720 + (_QWORD)v6), v7,
        *(_QWORD*)(v5 + 16), 0, 0);
    if (v8 != 0) {
      if (*(_QWORD*)v8 != 0) {
        ++*(_QWORD*)(*(_QWORD*)v8 + 8LL);
        *(_QWORD*)(v4 + 8 * a2) = *(_QWORD*)v8;
        CudaDriverRoutine_12e340(v5);
        v9 = 0;
      }
      else {
        *(_QWORD*)v8 = v5;
        v9 = 0;
        *(_BYTE*)v5 |= 1u;
      }
    }
    else {
      v9 = 2;
    }
  }
  CudaDriverStub_108070_alt1(v6 + 104);
  return v9;
}

__int64 cuda_driver_107620(__int64* a1, unsigned __int64 a2, __int64 a3,
                           unsigned __int64 a4, __int64 a5, char a6)
{
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;

  if (CudaDriverRoutine_a3820(a1[10], a2, (__int64*)&v21, &v20) == 0 ||
      a2 >= a1[57] || (a6 & 2) == 0 && a4 < v21) {
    return 999;
  }
  v13 = a1[58];
  v14 = *(_QWORD*)(v13 + 8 * a2);
  if (v14 == 0) {
  LABEL_11:
    v15 = CudaDriverStub_12e330(40);
    *(_QWORD*)(v13 + 8 * a2) = v15;
    if (v15 != 0) {
    LABEL_12:
      v16 = *(_BYTE*)v15;
      *(_QWORD*)(v15 + 24) = a5;
      *(_QWORD*)(v15 + 32) = a3;
      *(_BYTE*)v15 = v16 & 0xFC | (2 * (a6 & 1));
      *(_QWORD*)(v15 + 8) = 1;
      *(_QWORD*)(v15 + 16) = a4;
      return 0;
    }
    return 2;
  }
  if ((*(_BYTE*)v14 & 1) != 0) {
    if ((*(_BYTE*)v14 & 2) == 0) {
      v17 = (char*)CudaDriverData_1422118;
      CudaDriverStub_107f90_alt1((char*)CudaDriverData_1422118 + 104);
      v18 = *(_QWORD*)(v14 + 8) - 1LL;
      *(_QWORD*)(v14 + 8) = v18;
      if (v18 == 0) {
        v19 = *(_QWORD*)(v14 + 32);
        if (v19 == 0) {
          v19 = (v14 + *(_QWORD*)(v14 + 24) + 39) & -*(_QWORD*)(v14 + 24);
        }
        if (CudaDriverStub_1a2d50(
                *(_QWORD*)((char*)&CudaDriverRoutine_4720 + (_QWORD)v17), v19,
                *(_QWORD*)(v14 + 16)) != v14) {
          CudaDriverStub_108070_alt1(v17 + 104);
          return 999;
        }
        CudaDriverRoutine_12e340(v14);
      }
      *(_QWORD*)(v13 + 8 * a2) = 0;
      CudaDriverStub_108070_alt1(v17 + 104);
      v15 = CudaDriverStub_12e330(40);
      *(_QWORD*)(v13 + 8 * a2) = v15;
      if (v15 != 0) {
        goto LABEL_12;
      }
      return 2;
    }
  }
  else if ((*(_BYTE*)v14 & 2) == 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(v13 + 8 * a2));
    *(_QWORD*)(v13 + 8 * a2) = 0;
    goto LABEL_11;
  }
  return 999;
}

__int64 cuda_driver_1084c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;

  if (*(_BYTE*)(result + 8) == 0) {
    return CudaDriverStub_12db60(result);
  }
  v1 = result;
  v2 = CudaDriverStub_12e470(result);
  v3 = *(_DWORD*)(v1 + 12);
  __builtin_arm_dmb(0xDu);
  v4 = v2;
  result = v1;
  if (v3 == 0 || atomic_fetch_or((atomic_ullong* volatile)(v1 + 16), 0) != v4) {
    return CudaDriverStub_12db60(result);
  }
  return result;
}

unsigned __int64 cuda_driver_108520(__int64 a1)
{
  unsigned __int64 result;
  int v3;
  unsigned __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;

  if (*(_BYTE*)(a1 + 8) == 0) {
    return CudaDriverStub_12db60(a1);
  }
  result = CudaDriverStub_12e470(a1);
  v3 = *(_DWORD*)(a1 + 12);
  __builtin_arm_dmb(0xDu);
  v4 = result;
  if (v3 == 0 ||
      atomic_fetch_or((atomic_ullong* volatile)(a1 + 16), 0) != result) {
    result = CudaDriverStub_12db60(a1);
  }
  v5 = *(_DWORD*)(a1 + 12);
  do {
    v6 = *(_QWORD*)(a1 + 16);
    v7 = v6;
    atomic_compare_exchange_strong((atomic_ullong* volatile)(a1 + 16),
                                   (unsigned __int64*)&v7, v4);
  } while (v7 != v6);
  __builtin_arm_dmb(0xEu);
  *(_DWORD*)(a1 + 12) = v5 + 1;
  return result;
}

unsigned __int64 cuda_driver_108620(unsigned __int64 result,
                                    unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v6;
  unsigned __int64 v9;
  unsigned __int64 v11;
  int v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;

  if (result + 1 <= 1) {
    v3 = -1;
  }
  else {
    v3 = result;
  }
  if (a2 < v3 && a2 != 0) {
    v3 = a2;
  }
  if (a3 >= v3 || a3 == 0) {
    v6 = v3;
  }
  else {
    v6 = a3;
  }
  if (v6 != -1) {
    v9 = result;
    do {
      if (*(_BYTE*)(v6 + 8) != 0) {
        result = CudaDriverStub_12e470(result);
        v14 = *(_DWORD*)(v6 + 12);
        __builtin_arm_dmb(0xDu);
        v15 = result;
        if (v14 == 0 ||
            atomic_fetch_or((atomic_ullong* volatile)(v6 + 16), 0) != result) {
          result = CudaDriverStub_12db60(v6);
        }
        v16 = *(_DWORD*)(v6 + 12);
        do {
          v17 = *(_QWORD*)(v6 + 16);
          v18 = v17;
          atomic_compare_exchange_strong((atomic_ullong* volatile)(v6 + 16),
                                         (unsigned __int64*)&v18, v15);
        } while (v18 != v17);
        __builtin_arm_dmb(0xEu);
        *(_DWORD*)(v6 + 12) = v16 + 1;
      }
      else {
        result = CudaDriverStub_12db60(v6);
      }
      if (v9 == -1 || v6 >= v9) {
        v11 = -1;
      }
      else {
        v11 = v9;
      }
      if (a2 < v11 && v6 < a2) {
        v11 = a2;
      }
      if (a3 >= v11 || v6 >= a3) {
        v6 = v11;
      }
      else {
        v6 = a3;
      }
    } while (v6 != -1);
  }
  return result;
}

__int64 cuda_driver_108740(__int64 result, unsigned __int64* a2)
{
  int v2;
  int v3;
  unsigned int v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  int v8;
  unsigned __int64* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v22;
  unsigned __int64 v23;
  int i;
  unsigned __int64 v27;
  unsigned __int64 v28;
  int v30;
  unsigned __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;

  if ((_DWORD)result != 0) {
    v2 = result & 7;
    v3 = result & 0xFFFFFFF8;
    v5 = result;
    v6 = 0;
    v7 = -1;
    if ((unsigned int)result >= 8) {
      goto LABEL_5;
    }
  LABEL_51:
    v9 = a2;
    if (v2 != 0) {
    LABEL_52:
      for (i = v2; i != 0; --i) {
        v28 = *v9++;
        v27 = v28;
        if (v28 < v7 && v6 < v27) {
          v7 = v27;
        }
      }
    }
    while (v7 != -1) {
      if (*(_BYTE*)(v7 + 8) != 0) {
        result = CudaDriverStub_12e470(result);
        v30 = *(_DWORD*)(v7 + 12);
        __builtin_arm_dmb(0xDu);
        v31 = result;
        if (v30 == 0 ||
            atomic_fetch_or((atomic_ullong* volatile)(v7 + 16), 0) != result) {
          result = CudaDriverStub_12db60(v7);
        }
        v32 = *(_DWORD*)(v7 + 12);
        do {
          v33 = *(_QWORD*)(v7 + 16);
          v34 = v33;
          atomic_compare_exchange_strong((atomic_ullong* volatile)(v7 + 16),
                                         (unsigned __int64*)&v34, v31);
        } while (v34 != v33);
        __builtin_arm_dmb(0xEu);
        *(_DWORD*)(v7 + 12) = v32 + 1;
        v6 = v7;
        v7 = -1;
        if (v5 < 8) {
          goto LABEL_51;
        }
      }
      else {
        result = CudaDriverStub_12db60(v7);
        v6 = v7;
        v7 = -1;
        if (v5 < 8) {
          goto LABEL_51;
        }
      }
    LABEL_5:
      v8 = v3;
      v9 = a2;
      do {
        v10 = *v9;
        v11 = v9[1];
        if (*v9 >= v7 || v6 >= v10) {
          v10 = v7;
        }
        if (v11 < v10 && v6 < v11) {
          v10 = v9[1];
        }
        v14 = v9[2];
        v15 = v9[3];
        if (v14 < v10 && v6 < v14) {
          v10 = v9[2];
        }
        if (v15 < v10 && v6 < v15) {
          v10 = v9[3];
        }
        v18 = v9[4];
        v19 = v9[5];
        if (v18 < v10 && v6 < v18) {
          v10 = v9[4];
        }
        if (v19 < v10 && v6 < v19) {
          v10 = v9[5];
        }
        v22 = v9[6];
        v23 = v9[7];
        v9 += 8;
        if (v22 < v10 && v6 < v22) {
          v10 = v22;
        }
        if (v23 >= v10 || v6 >= v23) {
          v7 = v10;
        }
        else {
          v7 = v23;
        }
        v8 -= 8;
      } while (v8 != 0);
      if (v2 != 0) {
        goto LABEL_52;
      }
    }
  }
  return result;
}

__int64 cuda_driver_108b60(__int64 result, unsigned __int64 a2,
                           unsigned __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v6;
  unsigned __int64 v9;
  unsigned __int64 v11;
  int v14;

  if ((unsigned __int64)(result + 1) <= 1) {
    v3 = -1;
  }
  else {
    v3 = result;
  }
  if (a2 < v3 && a2 != 0) {
    v3 = a2;
  }
  if (a3 >= v3 || a3 == 0) {
    v6 = v3;
  }
  else {
    v6 = a3;
  }
  if (v6 != -1) {
    v9 = result;
    do {
      if (*(_BYTE*)(v6 + 8) == 0 ||
          (result = CudaDriverStub_12e470(result), v14 = *(_DWORD*)(v6 + 12),
           __builtin_arm_dmb(0xDu), v14 == 0) ||
          atomic_fetch_or((atomic_ullong* volatile)(v6 + 16), 0) != result) {
        result = CudaDriverStub_12db60(v6);
      }
      if (v9 == -1 || v6 >= v9) {
        v11 = -1;
      }
      else {
        v11 = v9;
      }
      if (a2 < v11 && v6 < a2) {
        v11 = a2;
      }
      if (a3 >= v11 || v6 >= a3) {
        v6 = v11;
      }
      else {
        v6 = a3;
      }
    } while (v6 != -1);
  }
  return result;
}

__int64 cuda_driver_108c40(__int64 result, unsigned __int64* a2)
{
  int v2;
  int v3;
  unsigned int v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64* v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v21;
  unsigned __int64 v22;
  int i;
  unsigned __int64 v26;
  unsigned __int64 v27;
  int v29;

  if ((_DWORD)result != 0) {
    v2 = result & 7;
    v3 = result & 0xFFFFFFF8;
    v5 = result;
    v6 = 0;
    while (1) {
      v7 = -1;
      if (v5 >= 8) {
        v9 = v3;
        v8 = a2;
        do {
          v10 = v8[1];
          if (*v8 < v7 && v6 < *v8) {
            v7 = *v8;
          }
          if (v10 < v7 && v6 < v10) {
            v7 = v8[1];
          }
          v13 = v8[2];
          v14 = v8[3];
          if (v13 < v7 && v6 < v13) {
            v7 = v8[2];
          }
          if (v14 < v7 && v6 < v14) {
            v7 = v8[3];
          }
          v17 = v8[4];
          v18 = v8[5];
          if (v17 < v7 && v6 < v17) {
            v7 = v8[4];
          }
          if (v18 < v7 && v6 < v18) {
            v7 = v8[5];
          }
          v21 = v8[6];
          v22 = v8[7];
          v8 += 8;
          if (v21 < v7 && v6 < v21) {
            v7 = v21;
          }
          if (v22 < v7 && v6 < v22) {
            v7 = v22;
          }
          v9 -= 8;
        } while (v9 != 0);
      }
      else {
        v8 = a2;
      }
      if (v2 != 0) {
        for (i = v2; i != 0; --i) {
          v27 = *v8++;
          v26 = v27;
          if (v27 < v7 && v6 < v26) {
            v7 = v26;
          }
        }
      }
      if (v7 == -1) {
        break;
      }
      v6 = v7;
      if (*(_BYTE*)(v7 + 8) != 0) {
        result = CudaDriverStub_12e470(result);
        v29 = *(_DWORD*)(v6 + 12);
        __builtin_arm_dmb(0xDu);
        if (v29 != 0 &&
            atomic_fetch_or((atomic_ullong* volatile)(v6 + 16), 0) == result) {
          continue;
        }
      }
      result = CudaDriverStub_12db60(v6);
    }
  }
  return result;
}

__int64 cuda_driver_109c80(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64* i;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[3];

  v21 = 0;
  result = CudaDriverRoutine_df060(&v21);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = CudaDriverStub_107f90(
      *(_QWORD*)((char*)&CudaDriverRoutine_3fd0 + v21) + 8LL);
  v5 = *(_QWORD*)((char*)&CudaDriverRoutine_3fd0 + v21);
  v6 = *(_QWORD*)(v5 + 24);
  if (v6 == 0) {
    return result;
  }
  while (*(_QWORD*)(v6 + 40) != a2) {
    v6 = *(_QWORD*)(v6 + 160);
    if (v6 == 0) {
      return result;
    }
  }
  v7 = *(_QWORD**)(v6 + 24);
  if (v7 != nullptr) {
    while (*v7 != a1) {
      v7 = (_QWORD*)v7[4];
      if (v7 == nullptr) {
        goto LABEL_10;
      }
    }
    v8 = (_QWORD*)(v6 + 16);
    for (i = (__int64*)(v6 + 16);; i = (__int64*)(v10 + 64)) {
      v10 = *i;
      if (v7[1] == *(_QWORD*)(*i + 32) && *(_DWORD*)v10 == 2) {
        break;
      }
    }
    CudaDriverStub_1db190(v10 + 32);
    v11 = *(_QWORD*)(v10 + 64);
    if (*v8 == v10) {
      *v8 = v11;
      if (v11 == 0) {
        goto LABEL_22;
      }
      v12 = 0;
    }
    else {
      *(_QWORD*)(*(_QWORD*)(v10 + 56) + 64LL) = v11;
      if (v11 == 0) {
        goto LABEL_22;
      }
      v12 = *(_QWORD*)(v10 + 56);
    }
    *(_QWORD*)(v11 + 56) = v12;
  LABEL_22:
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    v13 = *(_QWORD**)(v6 + 24);
    --*(_DWORD*)(v6 + 128);
    v14 = v7[4];
    if (v13 == v7) {
      *(_QWORD*)(v6 + 24) = v14;
      if (v14 == 0) {
        goto LABEL_28;
      }
      v15 = 0;
    }
    else {
      *(_QWORD*)(v7[3] + 32LL) = v14;
      if (v14 == 0) {
        goto LABEL_28;
      }
      v15 = v7[3];
    }
    *(_QWORD*)(v14 + 24) = v15;
  LABEL_28:
    v16 = v21;
    v7[3] = 0;
    v7[4] = 0;
    result = CudaDriverStub_108070(
        *(_QWORD*)((char*)&CudaDriverRoutine_3fd0 + v16) + 8LL);
    if (*(_DWORD*)(v6 + 128) == 0) {
      goto LABEL_29;
    }
    return result;
  }
LABEL_10:
  result = CudaDriverStub_108070(v5 + 8);
  if (*(_DWORD*)(v6 + 128) == 0) {
  LABEL_29:
    v17 = v21;
    v22 = *(_QWORD*)(v6 + 40);
    v23[1] = 1;
    v23[2] = &v22;
    v23[0] = 0x200000001LL;
    result = CudaDriverData_1432df8(v23);
    v18 = *(_QWORD*)((char*)&CudaDriverRoutine_3fd0 + v17);
    v19 = *(_QWORD*)(v6 + 160);
    if (*(_QWORD*)(v18 + 24) == v6) {
      *(_QWORD*)(v18 + 24) = v19;
      v19 = *(_QWORD*)(*(_QWORD*)((char*)&CudaDriverRoutine_3fd0 + v17) + 24LL);
      if (v19 != 0) {
        v20 = 0;
        goto LABEL_34;
      }
    }
    else {
      *(_QWORD*)(*(_QWORD*)(v6 + 152) + 160LL) = v19;
      if (v19 != 0) {
        v20 = *(_QWORD*)(v6 + 152);
      LABEL_34:
        *(_QWORD*)(v19 + 152) = v20;
      }
    }
    *(_QWORD*)(v6 + 152) = 0;
    *(_QWORD*)(v6 + 160) = 0;
  }
  return result;
}

__int64 cuda_driver_10a130(_DWORD* a1, _OWORD* a2, __int64 a3, __int64 a4,
                           _BYTE* a5)
{
  __int64 result;
  __int64 v11;
  __int128 v12;
  struct {
    __int64 v13;
    char v14;
  } v13_;
  struct {
    __int128 v15;
    __int128 v16;
  } v15_;
  _QWORD v17[3];
  struct {
    __int64 v18;
    __int64 v19;
    __int64* v20;
  } v18_;

  v15_.v15 = (__typeof__(v15_.v15)){0};
  v15_.v16 = (__typeof__(v15_.v16)){0};
  memset(v17, 0, sizeof(v17));
  CudaDriverRoutine_12df40(&CudaDriverData_1432df4,
                           (void (*)(void))CudaDriverData_14232a0);
  if ((CudaDriverData_1432df0 & 1) != 0) {
    return 999;
  }
  result = (*(__int64 (**)(__int64, _QWORD*))(a4 + 21600))(a4, v17);
  if ((_DWORD)result == 0) {
    *(_QWORD*)&v15_.v15 = a3;
    v18_.v19 = 7;
    v18_.v20 = (__int64*)&v15_.v15;
    v18_.v18 = 0x200000001LL;
    CudaDriverData_1432df8_alt1(&v18_.v18);
    if (HIDWORD(v18_.v18) != 0) {
      return 999;
    }
    v13_.v13 = a3;
    v18_.v18 = 0x200000001LL;
    v18_.v19 = 9;
    v18_.v20 = &v13_.v13;
    CudaDriverData_1432df8_alt1(&v18_.v18);
    if (HIDWORD(v18_.v18) != 0) {
      return 999;
    }
    v11 = v15_.v16;
    *a5 = v13_.v14;
    result = (*(__int64 (**)(__int64, __int64, __int64*))(a4 + 21592))(
        a4, v11, &v18_.v18);
    if ((_DWORD)result == 0) {
      v12 = *(_OWORD*)&v17[1];
      *a1 = v18_.v18;
      *a2 = v12;
    }
  }
  return result;
}

__int64 cuda_driver_10a530(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4,
                           int a5, unsigned __int64 a6)
{
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
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
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned int v44;
  int v45;
  int v46;
  __int64 v47;
  char v48;
  unsigned __int64 v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  int v54;
  int v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned int v60;
  int v61;
  unsigned __int64 v62;
  bool v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  int v69;
  int v70;
  int v71;
  char v72;
  unsigned __int64 v73;
  char v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  unsigned int v84;
  signed int v85;
  signed int v86;
  __int64 v87;
  int v88;
  unsigned __int64 v89;
  __int64 v90[3];

  v8 = a5 - 1;
  if (a5 < 1) {
    return 1;
  }
  if (*(int*)(a2 + 8) < 1) {
    return 1;
  }
  if (*(int*)(a2 + 12) < 1) {
    return 1;
  }
  v9 = *(_DWORD*)(a2 + 16);
  if (v9 < 1) {
    return 1;
  }
  v10 = *(_DWORD*)(a2 + 20);
  if (v10 < 1) {
    return 1;
  }
  v11 = *(_DWORD*)(a2 + 24);
  if (v11 < 1) {
    return 1;
  }
  if (*(_QWORD*)(a2 + 32) == 0) {
    return 1;
  }
  if (*(_QWORD*)(a2 + 40) == 0) {
    return 1;
  }
  if (*(int*)(a2 + 48) < 1) {
    return 1;
  }
  if (*(int*)a3 < 1) {
    return 1;
  }
  v12 = *(_DWORD*)(a3 + 4);
  if ((v12 & 0x80000000) != 0) {
    return 1;
  }
  v90[1] = v6;
  v90[2] = v7;
  v13 = *(_DWORD*)a2;
  if (*(_DWORD*)a2 == 6) {
    if (*(_DWORD*)(a2 + 4) == 0) {
      goto LABEL_15;
    }
  LABEL_18:
    v14 = *(_DWORD*)(a3 + 16);
    goto LABEL_20;
  }
  if (v13 == 5) {
    if ((*(_DWORD*)(a2 + 4) & 0xFFFFFFFE) != 2) {
    LABEL_15:
      v14 = 0;
    LABEL_24:
      v17 = 255;
      goto LABEL_25;
    }
    goto LABEL_18;
  }
  v14 = 0;
LABEL_20:
  v16 = 2;
  if (v13 > 9) {
    return v16;
  }
  if (((1 << v13) & 0x68) != 0) {
    goto LABEL_24;
  }
  if (((1 << v13) & 0x380) == 0) {
    return v16;
  }
  v17 = 256;
LABEL_25:
  v16 = 2;
  if (((1 << v13) & 0x3A8) != 0) {
    v18 = 4;
  }
  else {
    if (v13 != 6) {
      return v16;
    }
    if (*(_DWORD*)(a2 + 4) != 0) {
      v18 = 4;
    }
    else {
      v18 = 2;
    }
  }
  v19 = 0;
  v20 = (v8 + v11) / v11;
  v21 = v12 * v11 + 255;
  v22 = (unsigned __int8)(v12 * v11 - 1);
  if (v21 <= 0) {
    v22 = -(unsigned __int8)-(char)v21;
  }
  v23 = v21 - v22;
  v24 = v23 * v20;
  if (v12 > v17) {
    goto LABEL_46;
  }
  if (v9 < (int)(v23 * (int)(v18 + v20 - 1) / (int)v18 * v18) || v9 < v24) {
    goto LABEL_46;
  }
  if (v23 < 1) {
    v19 = 0x7FFFFFFF;
  }
  else {
    v26 = ((unsigned int)v10 >> __clz(__rbit32(v18))) / v23;
    if (v14 == 0) {
      goto LABEL_45;
    }
    v27 = (int)(v26 * (v18 >> 1)) / v20;
    if (v27 != 0) {
      v19 = 2 * v27;
      goto LABEL_46;
    }
    if (v14 == 2) {
      v19 = 0;
    }
    else {
    LABEL_45:
      v14 = 0;
      v19 = (int)(v26 * v18) / v20;
    }
  }
LABEL_46:
  *(_DWORD*)(a1 + 32) = v24;
  if (*(_DWORD*)a2 != 6 || *(_DWORD*)(a2 + 4) != 0 || v19 == 0) {
    goto LABEL_66;
  }
  v28 = *(_DWORD*)(a2 + 24);
  v29 = *(_DWORD*)(a3 + 4);
  v30 = (v8 + v28) / v28;
  v31 = v29 * v28 + 255;
  v32 = (unsigned __int8)v31;
  if (v31 <= 0) {
    v32 = -(unsigned __int8)-(char)v31;
  }
  v33 = v31 - v32;
  v34 = v33 * v30;
  v35 = (v30 + 3) & 3;
  if (v30 + 3 <= 0) {
    v35 = -(-(v30 + 3) & 3);
  }
  if (v29 <= 255) {
    v36 = *(_DWORD*)(a2 + 16);
    if (v36 >= v33 * (v30 + 3 - v35) && v36 >= v34) {
      if (v33 <= 0) {
        *(_DWORD*)(a1 + 32) = v34;
        goto LABEL_66;
      }
      v37 = (signed __int32)*(_DWORD*)(a2 + 20) / 4 / v33;
      if (v14 == 0) {
        goto LABEL_64;
      }
      v38 = 2 * v37 / v30;
      if (v38 != 0) {
        v39 = 2 * v38;
        goto LABEL_65;
      }
      if (v14 != 2) {
      LABEL_64:
        v39 = 4 * v37 / v30;
      LABEL_65:
        *(_DWORD*)(a1 + 32) = v34;
        if (v39 == 0) {
          goto LABEL_63;
        }
      LABEL_66:
        if (a5 <= (signed __int32)*(_DWORD*)(a2 + 8)) {
          v41 = *(_DWORD*)(a2 + 24);
          v42 = (signed __int32)*(_DWORD*)(a2 + 12) / v41;
          v43 = (v8 + v41) / v41;
          if (v14 != 0) {
            v40 = 2 * (v42 / 2 / v43);
          }
          else {
            v40 = v42 / v43;
          }
        }
        else {
          v40 = 0;
        }
        v44 = *(_DWORD*)a2;
        v16 = 2;
        if (*(int*)a2 > 6) {
          if (v44 != 9) {
            if (v44 != 8) {
              if (v44 != 7) {
                return v16;
              }
              if (*(_DWORD*)(a2 + 4) == 5) {
                v45 = 16;
              }
              else {
                v45 = 32;
              }
              goto LABEL_82;
            }
            v50 = *(_DWORD*)(a2 + 4);
            if (v50 == 9) {
              v51 = 24;
            }
            else {
              v51 = 16;
            }
            if (v50 != 0) {
              v45 = v51;
            }
            else {
              v45 = 32;
            }
          LABEL_92:
            v46 = 128;
          LABEL_93:
            v52 = a4[1];
            if (v52 - 101 <= 0xFFFFFF99) {
              return 1;
            }
            v88 = v19;
            if (v52 == -1) {
              v53 = *a4 - 1;
              if (v53 >= 3) {
                v54 = v45;
                v55 = v14;
                v56 = a6;
                v57 = a3;
                v58 = a1;
                v47 = *(_QWORD*)(a2 + 40);
                v90[0] = v47;
                v59 = a2;
                v60 = CudaDriverRoutine_10bbc0(v90, (int*)a2);
                if (v60 != 0) {
                  return v60;
                }
              LABEL_104:
                v49 = v90[0];
                a1 = v58;
                v14 = v55;
                v45 = v54;
                v19 = v88;
                v48 = 0;
                a3 = v57;
                a2 = v59;
                a6 = v56;
                goto LABEL_107;
              }
              v52 = CudaDriverData_1134150[v53];
            }
            v54 = v45;
            v55 = v14;
            v56 = a6;
            v57 = a3;
            v58 = a1;
            v47 = *(_QWORD*)(a2 + 40);
            v90[0] = v47 * (unsigned __int64)v52 / 0x64;
            v59 = a2;
            v60 = CudaDriverRoutine_10bbc0(v90, (int*)a2);
            if (v60 != 0) {
              return v60;
            }
            goto LABEL_104;
          }
        LABEL_81:
          v45 = 32;
          if ((v44 & 0xFFFFFFFE) != 8) {
            goto LABEL_82;
          }
          goto LABEL_92;
        }
        if (v44 - 5 < 2) {
          goto LABEL_81;
        }
        if (v44 != 3) {
          return v16;
        }
        v45 = 16;
      LABEL_82:
        if (v44 >= 7) {
          v46 = 256;
          goto LABEL_93;
        }
        v47 = *(_QWORD*)(a2 + 40);
        if (v44 - 5 < 2) {
        LABEL_85:
          v48 = 1;
          v46 = 256;
          v49 = *(_QWORD*)(a2 + 40);
          goto LABEL_107;
        }
        v49 = v47 - 0x8000;
        if (*a4 == 3) {
          v49 = (v49 + v47) >> 1;
        }
        else if (*a4 != 2) {
          goto LABEL_85;
        }
        v48 = 1;
        v46 = 256;
      LABEL_107:
        v61 = *(_DWORD*)(a3 + 20);
        v62 = *(_QWORD*)(a3 + 24);
        v16 = 2;
        v64 = v61 != 0 && a6 > v62;
        v65 = *(_QWORD*)(a2 + 64);
        v66 = v65 + *(_QWORD*)(a3 + 8);
        if (((1 << v44) & 0x68) != 0) {
          v68 = 32;
        }
        else {
          if (((1 << v44) & 0x380) == 0) {
            return v16;
          }
          v67 = *(_QWORD*)(a2 + 32);
          if (v61 != 1 || v62 + v66 <= v67) {
            goto LABEL_120;
          }
          v68 = 56;
        }
        v67 = *(_QWORD*)(a2 + v68);
      LABEL_120:
        v69 = v46 + a6 + v66;
        if (v44 <= 7) {
          v65 = 0;
        }
        v70 = v69 - 1;
        v71 = (v69 - 1) / v46 * v46;
        v72 = v67 + v65 < v71 || v64;
        if ((v72 & 1) != 0) {
          LODWORD(v73) = 0;
        }
        else {
          if (v49 >= v71) {
            v74 = 1;
          }
          else {
            v74 = v48;
          }
          if ((v74 & 1) != 0) {
            if (v49 < v71) {
              v75 = v47;
            }
            else {
              v75 = v49;
            }
            v89 = v75;
          }
          else {
            v76 = a1;
            v89 = v71;
            v87 = a2;
            v77 = a3;
            v78 = CudaDriverRoutine_10bbc0((__int64*)&v89, (int*)a2);
            a2 = v87;
            a3 = v77;
            v16 = v78;
            a1 = v76;
            if (v16 != 0) {
              return v16;
            }
          }
          if (v70 == v70 - v71) {
            LODWORD(v73) = 0x7FFFFFFF;
          }
          else {
            v73 = v89 / v71;
          }
        }
        *(_QWORD*)(a1 + 40) = v71;
        if (v45 >= v40) {
          v79 = v40;
        }
        else {
          v79 = v45;
        }
        if (v79 >= (int)v73) {
          v79 = v73;
        }
        if (v79 >= v19) {
          v80 = v19;
        }
        else {
          v80 = v79;
        }
        if (v80 == v40) {
          v81 = 3;
        }
        else {
          v81 = 2;
        }
        if (v19 <= v79) {
          v82 = v81;
        }
        else {
          v82 = v80 == v40;
        }
        if (v80 == (_DWORD)v73) {
          v82 |= 4u;
        }
        v83 = v82 | 8;
        if (v80 != v45) {
          v83 = v82;
        }
        if (*(int*)a2 < 9 || (int)(v84 = *(_DWORD*)(a3 + 32)) < 1) {
          v85 = 0x7FFFFFFF;
        }
        else {
          if (*(_DWORD*)a2 != 9) {
            return 2;
          }
          v85 = 2 * v45 / v84;
          if (v80 >= v85) {
            v86 = v85;
          }
          else {
            v86 = v80;
          }
          if (v85 <= v80) {
            v83 |= 0x10u;
          }
          v80 = v86;
        }
        v16 = 0;
        *(_DWORD*)(a1 + 8) = v19;
        *(_DWORD*)(a1 + 12) = v73;
        *(_DWORD*)(a1 + 16) = v40;
        *(_DWORD*)(a1 + 20) = v45;
        *(_DWORD*)(a1 + 24) = v85;
        *(_DWORD*)(a1 + 28) = 0x7FFFFFFF;
        *(_DWORD*)(a1 + 48) = v14;
        *(_DWORD*)a1 = v80;
        *(_DWORD*)(a1 + 4) = v83;
        return v16;
      }
    }
  }
  *(_DWORD*)(a1 + 32) = v34;
LABEL_63:
  v19 = 0;
  goto LABEL_66;
}

__int64 cuda_driver_10c1d0(int a1, unsigned int a2)
{
  __int64 result;
  char* v4;
  __int64 v5;

  result = 1;
  if (a1 <= 4) {
    if (a1 > 2) {
      if (a1 == 3) {
        if (a2 > 1) {
          return result;
        }
        v4 = (char*)CudaDriverData_1422118;
        if (*(_DWORD*)((char*)&CudaDriverRoutine_4390 +
                       (_QWORD)CudaDriverData_1422118) != 0) {
          return 800;
        }
        result = 0;
        v5 = 17292;
      }
      else {
        if (a2 > 2) {
          return result;
        }
        v4 = (char*)CudaDriverData_1422118;
        if (*(_DWORD*)&CudaDriverData_4398[(_QWORD)CudaDriverData_1422118] !=
            0) {
          return 800;
        }
        result = 0;
        v5 = 17300;
      }
      goto LABEL_47;
    }
    if (a1 == 1) {
      if (a2 > 2) {
        return result;
      }
      v4 = (char*)CudaDriverData_1422118;
      if (*(_DWORD*)((char*)&CudaDriverRoutine_4368 +
                     (_QWORD)CudaDriverData_1422118) != 0) {
        return 800;
      }
      result = 0;
      v5 = 17248;
      goto LABEL_47;
    }
    if (a1 == 2 && a2 <= 1) {
      v4 = (char*)CudaDriverData_1422118;
      if (*(_DWORD*)((char*)&CudaDriverRoutine_4378 +
                     (_QWORD)CudaDriverData_1422118) != 0) {
        return 800;
      }
      result = 0;
      v5 = 17268;
      goto LABEL_47;
    }
  }
  else {
    if (a1 <= 6) {
      if (a1 == 5) {
        if (a2 > 1) {
          return result;
        }
        v4 = (char*)CudaDriverData_1422118;
        if (*(_DWORD*)((char*)&CudaDriverRoutine_4388 +
                       (_QWORD)CudaDriverData_1422118) != 0) {
          return 800;
        }
        v5 = 17284;
      }
      else {
        if (a2 > 1) {
          return result;
        }
        v4 = (char*)CudaDriverData_1422118;
        if (*(_DWORD*)((char*)&CudaDriverRoutine_4380 +
                       (_QWORD)CudaDriverData_1422118) != 0) {
          return 800;
        }
        result = 0;
        v5 = 17276;
      }
      goto LABEL_47;
    }
    if (a1 == 7) {
      if (a2 > 1) {
        return result;
      }
      v4 = (char*)CudaDriverData_1422118;
      if (*(_DWORD*)((char*)&CudaDriverRoutine_43a8 +
                     (_QWORD)CudaDriverData_1422118) != 0) {
        return 800;
      }
      result = 0;
      v5 = 17316;
      goto LABEL_47;
    }
    if (a1 == 8) {
      if (a2 > 1) {
        return result;
      }
      v4 = (char*)CudaDriverData_1422118;
      if (*(_DWORD*)((char*)&CudaDriverRoutine_43b0 +
                     (_QWORD)CudaDriverData_1422118) != 0) {
        return 800;
      }
      result = 0;
      v5 = 17324;
      goto LABEL_47;
    }
    if (a1 == 9 && a2 <= 1) {
      v4 = (char*)CudaDriverData_1422118;
      if (*(_DWORD*)((char*)&CudaDriverRoutine_43b8 +
                     (_QWORD)CudaDriverData_1422118) != 0) {
        return 800;
      }
      v5 = 17332;
      result = 0;
    LABEL_47:
      *(_DWORD*)&v4[v5] = a2;
    }
  }
  return result;
}

long double cuda_driver_10c800(int a1)
{

#pragma clang fp contract(off)
  int v1;
  long double result;
  _OWORD* v3;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a1 != 0) {
    v1 = 0;
  }
  else {
    v1 = -1;
  }
  *CudaDriverData_14232b8 = v1;
  if (a1 == 0) {
    v3 = (_OWORD*)CudaDriverData_14232c0;
    *(_OWORD*)((char*)((__int64*)0x10LL) + CudaDriverData_14232c0) =
        (__typeof__(*(_OWORD*)((char*)((__int64*)0x10LL) +
                               CudaDriverData_14232c0))){0};
    *(_OWORD*)((char*)((__int64*)0x10LL) + (_QWORD)v3 + 16) =
        (__typeof__(*(_OWORD*)((char*)((__int64*)0x10LL) + (_QWORD)v3 + 16))){
            0};
    *v3 = (__typeof__(*v3)){0};
    *(_OWORD*)&result = (__typeof__(*(_OWORD*)&result)){0};
  }
  return result;
}

__int64 cuda_driver_10d580(__int64* a1, __int64 a2, unsigned int a3)
{
  int v6;
  unsigned int v7;
  __int64 result;
  _BOOL4 v9;
  int v10;
  unsigned int v11;
  unsigned int* v12;
  const char* v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  void* v18;
  unsigned int v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  unsigned int v24;
  unsigned int* v25;
  const char* v26;
  bool v27;
  struct {
    int v28;
    char v29;
  } v28_;
  struct {
    _BYTE v30[4];
    int v31;
    char gap32_[11];
    char v32;
  } v30_;

  v6 = CudaDriverRoutine_1fc4a0(a2 + 184, (__int64)a1, a3, &v27);
  if (v6 == 0) {
    return 2;
  }
  if (a3 == 0 && v6 != 1) {
    v7 = 704;
  LABEL_25:
    CudaDriverRoutine_1fc5a0((unsigned int*)(a2 + 184), (__int64)a1, a3,
                             nullptr);
    return v7;
  }
  v9 = v27;
  if (v27) {
    v10 = v6;
    v11 = (*(__int64 (**)(__int64, _QWORD))(*a1 + 21048))(*a1, *(_QWORD*)a2);
    v6 = v10;
    if (v11 != 0) {
      v7 = v11;
      v12 = CudaDriverRoutine_b4720(v11);
      if (v12 != nullptr) {
        v13 = *((const char**)v12 + 1);
      }
      else {
        v13 = "UNRECOGNIZED_ERROR";
      }
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Failed to enable peer mapping in the "
                                       "OS abstraction layer: %s\n",
                              v13);
      goto LABEL_25;
    }
  }
  if (a3 != 0) {
    return 0;
  }
  v14 = v6 == 1;
  result = 0;
  if (v14) {
    v28_.v29 = 0;
    v28_.v28 = 1;
    if ((unsigned __int8)CudaDriverRoutine_1d9c30(a2) != 0 &&
        (unsigned __int8)CudaDriverRoutine_1d9c30((__int64)a1) != 0 &&
        ((v15 = a1[1]) != 0 && (v16 = *(_QWORD*)(a2 + 8)) != 0 &&
             (unsigned int)CudaDriverRoutine_1fc720(
                 *(_QWORD*)(v16 + 80) + 184LL, *(_QWORD*)(v15 + 80), 0) != 0 ||
         *a1 == *(_QWORD*)a2 && *(_DWORD*)(*a1 + 21864) != 1)) {
      v17 = *(_QWORD*)(CudaDriverData_143bd80 + 24);
      if (v17 != 0) {
        v18 = CudaDriverData_1422118;
        while (1) {
          if ((*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v18) != 1 ||
               (CudaDriverRoutine_1db1b0(v17) & 0x700000000LL) !=
                   0x100000000LL) &&
              CudaDriverRoutine_1dc850(v17) && !CudaDriverRoutine_1dc9c0(v17) &&
              a2 == CudaDriverRoutine_1dc000(v17)) {
            v20 = *a1;
            v21 = (__int64*)CudaDriverRoutine_1dc000(v17);
            if (v20 == 0 || (v22 = v21, *v21 == v20) ||
                CudaDriverRoutine_1dc9c0(v17) ||
                (CudaDriverRoutine_1db1b0(v17) & 0x7C0000000000000LL) !=
                        0x3C0000000000000LL &&
                    (v23 = *(_QWORD*)(*(_QWORD*)(v17 + 72) + 240LL),
                     (unsigned int)CudaDriverRoutine_ec740(
                         *v22, v20, (__int64)v30_.v30) == 0) &&
                    v30_.v31 != 0 &&
                    ((v23 & 0x18000) != 0x8000 || v30_.v32 != 0)) {
              v19 = cuda_driver_predicates_10ebf0(a1, v17, &v28_.v28);
              if (v19 != 0) {
                break;
              }
            }
          }
          v17 = *(_QWORD*)(v17 + 344);
          if (v17 == 0) {
            return 0;
          }
        }
        v24 = v19;
        CudaDriverRoutine_10ef20((__int64)a1, a2);
        v7 = v24;
        v25 = CudaDriverRoutine_b4720(v24);
        if (v25 != nullptr) {
          v26 = *((const char**)v25 + 1);
        }
        else {
          v26 = "UNRECOGNIZED_ERROR";
        }
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Failed to auto-map allocations for new peering: %s\n",
            v26);
        if (v9) {
          (*(void (**)(__int64))(*a1 + 21056))((__int64)a1);
        }
        goto LABEL_25;
      }
    }
    return 0;
  }
  return result;
}

__int64 cuda_driver_112680(__int64 a1, __int64* a2, int a3, __int64* a4,
                           __int64* a5, __int64 a6, __int64 a7)
{
  char v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 i;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if (a2 == (__int64*)-1LL) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Stream handle is not valid\n", a4, a5, a6,
                            a7);
    return 400;
  }
  if ((unsigned __int64)a2 >= 3) {
    v15 = *a2;
    if (*a2 != 0) {
      v9 = a6;
      v10 = a4;
      v11 = a5;
      if ((*((_BYTE*)&CudaDriverRoutine_7488 + (_QWORD)CudaDriverData_1422118) &
           2) != 0 &&
          *(_QWORD*)(v15 + 992) == 0) {
        v22 = a7;
        result = CudaDriverRoutine_12d560(a1, *a2);
        LOBYTE(a7) = v22;
        if ((_DWORD)result != 0) {
          return result;
        }
      }
      v14 = *(_QWORD*)(v15 + 16);
      result = cuda_driver_misc_helpers_deeb0(
          v14, (unsigned __int8)a7 | (8 * *(_BYTE*)(v15 + 56)) & 0x40u);
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_15;
    }
    return 400;
  }
  v9 = a6;
  v10 = a4;
  v11 = a5;
  if (a1 != 0) {
    v12 = a1;
    result = CudaDriverRoutine_df0b0(a1, (unsigned __int64)&v24,
                                     (unsigned __int64)&v23, a7);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  else {
    v17 = a7;
    v25 = 0;
    result = CudaDriverRoutine_121c60(&v25);
    if ((_DWORD)result != 0) {
      return result;
    }
    v12 = v25;
    result = CudaDriverRoutine_df0b0(v25, (unsigned __int64)&v24,
                                     (unsigned __int64)&v23, v17);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  if (v23 != 0) {
    v14 = v23;
  }
  else {
    v14 = v24;
  }
  result = cuda_driver_1128f0_alt1(v12, v14, a2, a3, &v25);
  if ((_DWORD)result != 0) {
    return result;
  }
  v15 = v25;
LABEL_15:
  if ((*(_BYTE*)(v15 + 56) & 1) != 0) {
    v18 = *(_QWORD*)(v14 + 88);
    if ((v9 & 0x10) == 0 && *(_DWORD*)(v18 + 212) != 0) {
      if ((v9 & 8) == 0) {
        v19 = *(_QWORD*)(v18 + 8);
        CudaDriverStub_107f90(v19 + 8);
        for (i = *(_QWORD*)(v19 + 32); i != 0; i = *(_QWORD*)(i + 320)) {
          v21 = *(_QWORD*)(i + 992);
          if (v21 != 0 && (*(_BYTE*)(i + 56) & 4) != 0) {
            CudaDriverRoutine_c5a60(v21, 901);
          }
        }
        CudaDriverStub_108070(v19 + 8);
      }
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Call cannot be made against CU_STREAM_LEGACY while a "
                   "blocking stream in the same context is capturing");
      return 906;
    }
  }
  v16 = *(_QWORD*)(v15 + 992);
  if (v16 == 0) {
    if ((v9 & 3) == 2) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Stream is not actively capturing");
      return 401;
    }
  LABEL_40:
    if (v10 != nullptr) {
      *v10 = v15;
    }
    result = 0;
    if (v11 != nullptr) {
      *v11 = v14;
    }
    return result;
  }
  if ((v9 & 3) == 0) {
    CudaDriverRoutine_c5a60(v16, 901);
    return 900;
  }
  if ((v9 & 4) != 0) {
    goto LABEL_40;
  }
  result = *(unsigned int*)(v16 + 280);
  if ((_DWORD)result == 0) {
    goto LABEL_40;
  }
  return result;
}

__int64 cuda_driver_1128f0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           __int64* a5)
{
  bool v5;
  _BOOL4 v6;
  __int64 result;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v16 = 0;
  *a5 = 0;
  if (a2 == 0) {
    if ((unsigned __int64)a3 < 3) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Stream handle %p is ambuiguous without a context\n", a3);
      return 400;
    }
  }
  else if ((unsigned __int64)a3 < 3) {
    if (a3 != nullptr) {
      v5 = a3 == (__int64*)((char*)((char*)0x0LL) + 2);
    }
    else if ((int)a4 > 1) {
      if ((_DWORD)a4 == 2) {
        v6 =
            (*((_BYTE*)((_UNKNOWN*)0x1870LL) + (_QWORD)CudaDriverData_1422118) &
             0x20) != 0;
        goto LABEL_8;
      }
      if ((_DWORD)a4 != 3) {
        goto LABEL_25;
      }
      v5 = (CudaDriverData_1436018 & 0x40) == 0;
    }
    else {
      if ((_DWORD)a4 == 0) {
        v6 =
            (*((_BYTE*)((_UNKNOWN*)0x1870LL) + (_QWORD)CudaDriverData_1422118) &
             8) != 0;
        goto LABEL_8;
      }
      if ((_DWORD)a4 != 1) {
        goto LABEL_25;
      }
      v5 = (CudaDriverData_1436018 & 0x10) == 0;
    }
    v6 = v5;
  LABEL_8:
    if (!v6) {
    LABEL_25:
      v8 = *(_QWORD*)(a2 + 104);
      goto LABEL_26;
    }
    if (*(_DWORD*)a2 != 0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"CUDA Green Contexts cannot be used "
                                       "with stream-per-thread mode\n",
                              a4);
      return 400;
    }
    v9 = a5;
    if (a1 != 0) {
      v10 = a1;
      v11 = a2;
      result = CudaDriverRoutine_121bd0(a1, a2, &v16);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    else {
      v13 = a2;
      v15 = 0;
      result = CudaDriverRoutine_121c60(&v15);
      if ((_DWORD)result != 0) {
        return result;
      }
      v14 = v13;
      v10 = v15;
      v11 = v14;
      result = CudaDriverRoutine_121bd0(v15, v14, &v16);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    CudaDriverRoutine_12dea0((atomic_ullong*)(v11 + 960));
    v8 = v16;
    a2 = v11;
    a5 = v9;
    a1 = v10;
  LABEL_27:
    if (v8 == 0) {
      return 400;
    }
    if (a2 != 0 && *(_QWORD*)(v8 + 16) != a2) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"CUDA Stream does not belong to the expected context\n", a4);
      return 400;
    }
    if ((*((_BYTE*)&CudaDriverRoutine_7488 + (_QWORD)CudaDriverData_1422118) &
         2) == 0 ||
        *(_QWORD*)(v8 + 992) != 0) {
      goto LABEL_34;
    }
    v12 = a5;
    result = CudaDriverRoutine_12d560(a1, v8);
    if ((_DWORD)result == 0) {
      v8 = v16;
      a5 = v12;
    LABEL_34:
      *a5 = v8;
      return 0;
    }
    return result;
  }
  v8 = *a3;
LABEL_26:
  v16 = v8;
  goto LABEL_27;
}

void cuda_driver_112c00(__int64 a1, _DWORD* a2, __int64 a3)
{
  unsigned int v5;
  __int64 v6;

  v6 = a1;
  cuda_driver_12ea30((int*)(a3 + 576));
  v5 = CudaDriverRoutine_5c030(*(_QWORD*)(a3 + 328));
  CudaDriverRoutine_5b640(a2, *(_QWORD*)(*(_QWORD*)(a3 + 328) + 32LL), v5, 1, 1,
                          0, 0, &v6);
  CudaDriverRoutine_5c060(*(_QWORD*)(a3 + 328));
  *(_BYTE*)(a3 + 336) = 0;
}

__attribute__((swiftcall)) void cuda_driver_112e10(PSEUDO_X8 x8_, __int64 a1,
                                                   unsigned int a2)
{

#pragma clang fp contract(off)
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  long double result;

  v3 = *(_QWORD*)(a1 + 848) + 24LL * a2;
  result = *(long double*)v3;
  *(_QWORD*)(a3 + 16) = *(_QWORD*)(v3 + 16);
  *(long double*)a3 = result;
  {
    result;
    return;
  }
}

__int64 cuda_driver_unplaced_7_113960(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, int a5, __int64 a6,
                                      __int64 a7, __int64 a8)
{
  __int64 v9;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  bool v37;
  __int64 v38;
  unsigned __int64 v39;
  _DWORD* v40;
  __int64 v41;
  bool v43;
  __int64 v44;
  unsigned int v45;
  __int64 v46;
  bool v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int16 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  int v61;
  __int64 v62;
  unsigned int v63;
  __int64 v64[26];

  v9 = *(_QWORD*)(a1 + 1112);
  v62 = 0;
  v63 = 2;
  CudaDriverRoutine_1ba4f0((__int64)v64,
                           *(_QWORD*)(*(_QWORD*)(a1 + 16) + 72LL));
  v17 = CudaDriverRoutine_112e50((__int64)v64, a1, 1);
  if (v17 != 0 || (v17 = cuda_driver_1bace0(&v63, v64, 4)) != 0 ||
      (v17 = CudaDriverRoutine_125cf0(a5, a4, a8, &v62)) != 0) {
    v18 = v17;
    goto LABEL_5;
  }
  v21 = CudaDriverStub_4f840_alt1();
  v22 = CudaDriverStub_12e260(v21);
  v23 = v62;
  *(_DWORD*)(v62 + 68) = v22;
  memcpy_plt(*(_QWORD*)(v23 + 32), a6, 8 * a8);
  memcpy_plt(*(_QWORD*)(v62 + 40), a7, 8 * a8);
  if (a4 == 0) {
    v18 = 0;
  LABEL_48:
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 64LL) + 17068LL) & 2) ==
        0) {
      CudaDriverRoutine_ed630_alt1(
          (__int64)"CUDA", 0,
          "Stream must be associated with a device that has a non-zero value "
          "for the device attribute for concurrent managed access");
      goto LABEL_50;
    }
    v47 = a5 == 2 || v9 == 0;
    v48 = !v47;
    if (!v47) {
      v49 = CudaDriverStub_1223e0(*(_QWORD*)(a1 + 1112));
      v50 = v62;
      *(_QWORD*)(v62 + 56) = v49;
      *(_DWORD*)(v50 + 64) = *(_DWORD*)(a1 + 1120);
    }
    if (v9 != 0 && v63 == 5) {
      cuda_driver_125d80(*(_QWORD*)(a1 + 48), 0, v62);
    }
    else {
      if (v9 != 0) {
        v51 = 1536;
      }
      else {
        v51 = 512;
      }
      v18 = CudaDriverRoutine_113110(a1, *(_QWORD*)(a1 + 48), 0,
                                     (__int64)cuda_driver_125d80_ptr, v62, v51);
      if (v18 != 0) {
        goto LABEL_5;
      }
    }
    if (v48 != 0) {
      v18 = CudaDriverRoutine_113e70(a1, (__int64)v64, *(_QWORD*)(a1 + 1112),
                                     *(_DWORD*)(a1 + 1120));
      ++*(_DWORD*)(a1 + 1120);
    }
    goto LABEL_9;
  }
  v58 = a2;
  v59 = a4;
  v18 = 0;
  v24 = 0;
  v61 = 0;
  v56 = a7 + 8;
  v57 = a8 - 1;
  v60 = -1;
  while (1) {
    v25 = *(_QWORD*)(a2 + 8 * v24);
    if (v25 == 0) {
      CudaDriverRoutine_ed630_alt1(
          (__int64)"CUDA", 0,
          "Specified base pointer in dptrs[%zd] cannot be NULL", v24);
      if (*(_QWORD*)(a3 + 8 * v24) == 0) {
      LABEL_63:
        CudaDriverRoutine_ed630_alt1(
            (__int64)"CUDA", 0,
            "Specified byte count in sizes[%zd] cannot be 0", v24);
      }
      goto LABEL_74;
    }
    if (*(_QWORD*)(a3 + 8 * v24) == 0) {
      goto LABEL_63;
    }
    v26 = CudaDriverRoutine_1dba10(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 80LL), v25);
    v27 = v26;
    if (v26 == 0) {
      if ((*((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)CudaDriverData_1422118) &
           1) != 0) {
        if (!CudaDriverRoutine_12c960(*(_QWORD*)(a2 + 8 * v24),
                                      *(_QWORD*)(a3 + 8 * v24) +
                                          *(_QWORD*)(a2 + 8 * v24))) {
          goto LABEL_25;
        }
        CudaDriverRoutine_ed630_alt1(
            (__int64)"CUDA", 0,
            "Address range(0x%llx and size: %zd) cannot overlap "
            "system-allocated memory and memory allocated via CUDA APIs",
            *(_QWORD*)(a2 + 8 * v24), *(_QWORD*)(a3 + 8 * v24));
      }
      else {
        CudaDriverRoutine_ed630_alt1(
            (__int64)"CUDA", 0,
            "System-allocated memory specified in dptrs[%zd]. Prefetching "
            "system-allocated memory is only supported on syst"
            "ems with non-zero CU_DEVICE_ATTRIBUTE_PAGEABLE_MEMORY_ACCESS",
            v24);
      }
    LABEL_74:
      v18 = 1;
      goto LABEL_5;
    }
    v28 = CudaDriverRoutine_1dc9c0(v26);
    v29 = *(_QWORD*)(a2 + 8 * v24);
    v30 = *(_QWORD*)(a3 + 8 * v24);
    if (!v28) {
      CudaDriverRoutine_ed630_alt1(
          (__int64)"CUDA", 0,
          "Address range(0x%llx and size: %zd) specified for prefetch must "
          "belong to system-allocated memory or managed memory",
          v29, v30);
      goto LABEL_74;
    }
    v31 = a3;
    v32 = a6;
    v33 = a5;
    v34 = v9;
    v35 = v30 + v29;
    v36 = CudaDriverStub_102e00(v27);
    v37 = v35 > CudaDriverStub_1dbf90(v27) + v36;
    v9 = v34;
    a5 = v33;
    a6 = v32;
    a3 = v31;
    a2 = v58;
    if (v37) {
      v52 = *(_QWORD*)(v58 + 8 * v24);
      v53 = *(_QWORD*)(a3 + 8 * v24);
      v54 = CudaDriverStub_102e00(v27);
      v55 = CudaDriverStub_1dbf90(v27);
      CudaDriverRoutine_ed630_alt1(
          (__int64)"CUDA", 0,
          "Address range specified for prefetch(address: 0x%llx and size: %zd) "
          "in (dptrs[%zd], sizes[%zd]) extends beyond a"
          "llocation range(address: 0x%llx and size: %llu)",
          v52, v53, v24, v24, v54, v55);
      goto LABEL_74;
    }
  LABEL_25:
    *(_QWORD*)(*(_QWORD*)(v62 + 8) + 8 * v24) = *(_QWORD*)(a2 + 8 * v24);
    v38 = *(_QWORD*)(a3 + 8 * v24);
    *(_QWORD*)(*(_QWORD*)(v62 + 16) + 8 * v24) = v38;
    if (a5 != 2) {
      v39 = v60;
      if (v60 == -1) {
        v39 = 0;
        goto LABEL_31;
      }
      if (v60 < v57 && v24 == *(_QWORD*)(v56 + 8 * v60)) {
        break;
      }
    LABEL_34:
      v60 = v39;
      v18 = CudaDriverRoutine_125b50(*(_QWORD*)(a2 + 8 * v24), v38,
                                     *(_QWORD*)(a6 + 8 * v39));
      if (v18 != 0) {
        goto LABEL_5;
      }
    }
    v43 = v9 != 0 && v63 == 5;
    if (v27 == 0 && !v43 && v61 == 0) {
      v44 = v62 + 80;
      *(_BYTE*)(v62 + 72) = 1;
      v45 = CudaDriverRoutine_125bf0(v44);
      v46 = v62;
      if (v45 != 0) {
        v18 = v45;
      }
      else {
        v18 = CudaDriverRoutine_125ca0(v62 + 80);
        if (v18 == 0) {
          goto LABEL_14;
        }
        CudaDriverRoutine_125c60(v62 + 80);
        v46 = v62;
      }
      *(_BYTE*)(v46 + 72) = 0;
    LABEL_14:
      v61 = 1;
    }
    if (v59 == ++v24) {
      goto LABEL_48;
    }
  }
  v39 = v60 + 1;
LABEL_31:
  v40 = (_DWORD*)(a6 + 8 * v39);
  if (*v40 != 1) {
    goto LABEL_34;
  }
  v41 = *((_QWORD*)CudaDriverData_1422118 + v40[1] + 35);
  if (v41 == 0 || (*(_BYTE*)(v41 + 17068) & 2) != 0) {
    goto LABEL_34;
  }
  CudaDriverRoutine_ed630_alt1(
      (__int64)"CUDA", 0,
      "Prefetching is only supported on destination device that has a non-zero "
      "value for the device attribute for concurren"
      "t managed access");
LABEL_50:
  v18 = 101;
LABEL_5:
  v19 = v62;
  if (v62 != 0) {
    if (*(_BYTE*)(v62 + 72) != 0) {
      CudaDriverRoutine_125c60(v62 + 80);
      v19 = v62;
    }
    CudaDriverStub_54930(v19);
  }
LABEL_9:
  CudaDriverRoutine_1ba580((__int64)v64);
  return v18;
}

void cuda_driver_1142a0(unsigned int* result, unsigned __int8 a2, char a3)
{
  __int64 v3;
  __int64 v4;
  void* v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  int i;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  void* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v35;
  __int64 v36;
  __int64 v37;
  struct {
    int v38;
    char gap44_[4];
    __int64 v39;
    char gap56_[8];
    __int64 v40;
    __int64 v41;
    __int64 v42;
    _BYTE* v43;
  } v38_;
  _BYTE v44[96];

  v3 = *result;
  if ((_DWORD)v3 == 0) {
    return;
  }
  v4 = *((_QWORD*)result + 33);
  v6 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  v7 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_4768 + (_QWORD)v6);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v36 = v3;
  v35 = a2;
  do {
    if (*(_QWORD*)(v4 + 8 * v8) == 0 ||
        CudaDriverRoutine_8b200(
            (__int64)cuda_driver_misc_helpers_4c20 + (_QWORD)v6, 0, v8) == 0) {
      goto LABEL_4;
    }
    cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v6] + 616 * v8);
    v11 = CudaDriverRoutine_8b200(
        (__int64)cuda_driver_misc_helpers_4c20 + (_QWORD)v6, 0, v8);
    if (v11 == 0 || (v12 = (_QWORD*)v11,
                     *(_QWORD*)(v11 + 352) >= *(_QWORD*)(v4 + 8 * v8))) {
      CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v6] +
                               616 * v8);
      goto LABEL_4;
    }
    if (v7 != 0) {
      for (i = 0; i != v7; ++i) {
        v14 = cuda_driver_checks_102f50(v8, i);
        if (v14 != 0) {
          v15 = v14;
          CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v6] +
                                   616 * v8);
          if (CudaDriverRoutine_f1f60(v15, *(_QWORD*)(v4 + 8 * v8), 1)) {
            v16 = CudaDriverStub_102370(v15);
            v9 |= 1LL << **(
                      _DWORD**)(*(_QWORD*)(CudaDriverStub_102040(v16) + 24) +
                                176LL);
          }
          CudaDriverStub_102360(v15);
          cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v6] +
                             616 * v8);
        }
      }
    }
    CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v6] +
                             616 * v8);
    cuda_driver_108520(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v6] + 616 * v8);
    if ((_QWORD*)CudaDriverRoutine_8b200(
            (__int64)cuda_driver_misc_helpers_4c20 + (_QWORD)v6, 0, v8) !=
        v12) {
      v3 = v36;
      goto LABEL_34;
    }
    v17 = v12[44];
    v3 = v36;
    if (v17 <= *(_QWORD*)(v4 + 8 * v8)) {
      v17 = *(_QWORD*)(v4 + 8 * v8);
    }
    v12[44] = v17;
    if (v35 != 0) {
      v18 = v12[70];
      if (v18 != 0) {
        while (1) {
          v20 = v18;
          if (*(_QWORD*)(v18 + 544) > v12[44]) {
            break;
          }
          v21 = CudaDriverRoutine_1dbfd0(v18);
          if (v12[71] == v20) {
            v12[71] = *(_QWORD*)(v20 + 552);
            if (v12[70] != v20) {
            LABEL_28:
              v22 = *(_QWORD*)(v20 + 560);
              *(_QWORD*)(*(_QWORD*)(v20 + 552) + 560LL) = v22;
              if (v22 == 0) {
                goto LABEL_24;
              }
              v19 = *(_QWORD*)(v20 + 552);
              goto LABEL_23;
            }
          }
          else if (v12[70] != v20) {
            goto LABEL_28;
          }
          v22 = *(_QWORD*)(v20 + 560);
          v12[70] = v22;
          if (v22 != 0) {
            v19 = 0;
          LABEL_23:
            *(_QWORD*)(v22 + 552) = v19;
          }
        LABEL_24:
          *(_OWORD*)(v20 + 552) = (__typeof__(*(_OWORD*)(v20 + 552))){0};
          atomic_fetch_add((atomic_ullong* volatile)(v21 + 0x4000), 1u);
          *(_QWORD*)(v20 + 560) = v10;
          v10 = v20;
          v18 = v12[70];
          if (v18 == 0) {
            goto LABEL_35;
          }
        }
      }
    }
  LABEL_34:
    v20 = v10;
  LABEL_35:
    CudaDriverRoutine_1085d0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v6] +
                             616 * v8);
    v10 = v20;
  LABEL_4:
    ++v8;
  } while (v8 != v3);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v6);
  CudaDriverRoutine_8b570((__int64)result);
  if (a3 != 0) {
    do {
      v23 = *(_QWORD*)((char*)&CudaDriverRoutine_4e80 + (_QWORD)v6);
      v24 = v23;
      atomic_compare_exchange_strong(
          (atomic_ullong* volatile)((char*)&CudaDriverRoutine_4e80 +
                                    (_QWORD)v6),
          (unsigned __int64*)&v24, 0);
    } while (v24 != v23);
    cuda_driver_f12e0(v23 | v9);
    v37 = v10;
    if (v10 == 0) {
      return;
    }
  }
  else {
    atomic_fetch_or(
        (atomic_ullong* volatile)((char*)&CudaDriverRoutine_4e80 + (_QWORD)v6),
        v9);
    v37 = v10;
    if (v10 == 0) {
      return;
    }
  }
  v25 = CudaDriverData_14225e0;
  do {
    v28 = v10;
    v10 = *(_QWORD*)(v10 + 560);
    v29 = CudaDriverRoutine_1dbfd0(v28);
    v27 = v37;
    v30 = v29;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0xCCLL) +
                   *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v25)) != 0) {
      if ((CudaDriverRoutine_1db1b0(v37) & 0x7C0000000000000LL) != 0) {
        v31 = 1;
      }
      else {
        v31 = 2;
      }
      v32 = CudaDriverStub_1db750(v27);
      if (v32 != 0) {
        v32 = CudaDriverRoutine_f1060(v32);
      }
      v26 = v32 + 176;
      v38_.v38 = 56;
      if (v32 == 0) {
        v26 = 0;
      }
      v38_.v39 = v26;
      v38_.v40 = CudaDriverStub_102e00(v27);
      v38_.v41 = CudaDriverStub_1dbf90(v27);
      v38_.v42 = CudaDriverRoutine_1dc000(v27);
      v38_.v43 = v44;
      CudaDriverRoutine_eeec0(v27, nullptr, v31, (__int64)v44);
      cuda_driver_20b420(2u, 0x33u, (__int64)&v38_.v38);
      v27 = v37;
    }
    CudaDriverRoutine_10e060(v27);
    CudaDriverStub_1db380(&v37);
    atomic_fetch_add((atomic_ullong* volatile)(v30 + 0x4000),
                     0xFFFFFFFFFFFFFFFFLL);
    v37 = v10;
  } while (v10 != 0);
}

__int64 cuda_driver_1150a0(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v10;
  void* v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  char v26;
  unsigned int v27;
  _DWORD* v28;
  char v29;
  __int64 v30;

  v6 = CudaDriverStub_12d100(a2);
  v7 = *(_DWORD**)(a1 + 16);
  if (v7 != (_DWORD*)v6) {
    if (*v7 != 1 || (v8 = CudaDriverRoutine_98340((__int64)v7),
                     v7 = *(_DWORD**)(a1 + 16), v8 != v6)) {
      CudaDriverRoutine_98340((__int64)v7);
      return CudaDriverRoutine_1bc330(a1, a2, a3);
    }
  }
  if (*v7 == 1) {
    v10 = CudaDriverRoutine_98340((__int64)v7);
    cuda_driver_1084c0(*(_QWORD*)(v10 + 88) + 104LL);
  }
  v11 = CudaDriverData_1422118;
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 16);
  }
  else {
    v12 = *(_QWORD*)(a1 + 16);
    if ((*(_BYTE*)(a1 + 56) & 2) == 0 &&
        *((_BYTE*)&CudaDriverRoutine_4730 + (_QWORD)CudaDriverData_1422118) ==
            0) {
      cuda_driver_1084c0(*(_QWORD*)(v12 + 88) + 104LL);
      CudaDriverStub_107f90(a1 + 592);
      if ((a3 & 2) != 0) {
        goto LABEL_11;
      }
      goto LABEL_19;
    }
  }
  cuda_driver_108520(*(_QWORD*)(v12 + 88) + 104LL);
  CudaDriverStub_107f90(a1 + 592);
  if ((a3 & 2) != 0) {
  LABEL_11:
    v13 = CudaDriverRoutine_1bb6a0(*(_QWORD*)(a1 + 584), a2);
    if (v13 == 0) {
      if ((*(_BYTE*)(a1 + 56) & 3) != 0) {
        v14 = *(_QWORD*)(a1 + 16);
        v15 = *(_QWORD*)(v14 + 88);
        v16 = CudaDriverRoutine_98340(v14);
        CudaDriverStub_107f90(v15 + 88);
        v17 = CudaDriverRoutine_1bb6a0(*(_QWORD*)(v15 + 48), a2);
        CudaDriverStub_108070(v15 + 88);
        if (v17 == 0) {
          atomic_fetch_add((atomic_ullong* volatile)(v16 + 1320), 1u);
          v18 = atomic_fetch_add((atomic_ullong* volatile)(v16 + 1328), 1u) + 1;
          do {
            v19 = *(_QWORD*)(a1 + 744);
            v20 = v19;
            atomic_compare_exchange_strong((atomic_ullong* volatile)(a1 + 744),
                                           (unsigned __int64*)&v20, v18);
          } while (v20 != v19);
        LABEL_37:
          CudaDriverStub_107f90(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) + 72LL);
          v29 = *(_BYTE*)(a1 + 56);
          if ((v29 & 5) != 0) {
            v17 = CudaDriverRoutine_1bb6a0(
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) + 32LL), a2);
            if (v17 != 0) {
              goto LABEL_44;
            }
            v29 = *(_BYTE*)(a1 + 56);
            if ((v29 & 1) == 0) {
              *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) + 40LL) = 1;
              v29 = *(_BYTE*)(a1 + 56);
            }
          }
          if ((v29 & 2 | a3 & 1) != 0) {
            v17 = CudaDriverRoutine_1bb6a0(
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) + 56LL), a2);
          }
          else {
            v17 = 0;
          }
        LABEL_44:
          CudaDriverStub_108070(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) + 72LL);
          CudaDriverStub_108070(a1 + 592);
          v26 = *(_BYTE*)(a1 + 56);
          if ((v26 & 1) != 0) {
            goto LABEL_45;
          }
          goto LABEL_33;
        }
        goto LABEL_32;
      }
    LABEL_30:
      v27 =
          CudaDriverRoutine_206120(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL), a1);
      if (v27 == 0) {
        goto LABEL_37;
      }
      v17 = v27;
    LABEL_32:
      CudaDriverStub_108070(a1 + 592);
      v26 = *(_BYTE*)(a1 + 56);
      if ((v26 & 1) != 0) {
        goto LABEL_45;
      }
      goto LABEL_33;
    }
    goto LABEL_28;
  }
LABEL_19:
  v21 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL);
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v22 = 24;
  }
  else {
    if ((*(_BYTE*)(a1 + 56) & 2) == 0) {
      goto LABEL_27;
    }
    v22 = 48;
  }
  v23 = v21 + 72;
  v24 = v21 + v22;
  CudaDriverStub_107f90(v21 + 72);
  CudaDriverRoutine_1bb040(*(_QWORD*)(v24 + 8));
  v25 = CudaDriverRoutine_1ba7d0(*(_QWORD*)(a1 + 584), *(_QWORD*)(v24 + 8));
  if (v25 == 0) {
    *(_BYTE*)(v24 + 16) = 0;
    CudaDriverStub_108070(v23);
  LABEL_27:
    v13 = CudaDriverRoutine_1bb6a0(*(_QWORD*)(a1 + 584), a2);
    if (v13 == 0) {
      goto LABEL_30;
    }
  LABEL_28:
    v17 = v13;
    CudaDriverStub_108070(a1 + 592);
    v26 = *(_BYTE*)(a1 + 56);
    if ((v26 & 1) != 0) {
      goto LABEL_45;
    }
    goto LABEL_33;
  }
  v17 = v25;
  CudaDriverStub_108070(v23);
  CudaDriverStub_108070(a1 + 592);
  v26 = *(_BYTE*)(a1 + 56);
  if ((v26 & 1) == 0) {
  LABEL_33:
    if ((v26 & 2) == 0 &&
        *((_BYTE*)&CudaDriverRoutine_4730 + (_QWORD)v11) == 0) {
      CudaDriverRoutine_1085b0(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) + 104LL);
      v28 = *(_DWORD**)(a1 + 16);
      if (*v28 == 1) {
        goto LABEL_46;
      }
      return v17;
    }
  }
LABEL_45:
  CudaDriverRoutine_1085d0(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) + 104LL);
  v28 = *(_DWORD**)(a1 + 16);
  if (*v28 == 1) {
  LABEL_46:
    v30 = CudaDriverRoutine_98340((__int64)v28);
    CudaDriverRoutine_1085b0(*(_QWORD*)(v30 + 88) + 104LL);
  }
  return v17;
}

__int64 cuda_driver_115a40(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  void* v11;
  __int64 v12;
  __int64 v13;
  char v14;
  _QWORD* v15;
  unsigned int** v16;
  unsigned int** v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int128 v26;
    __int128 v27;
  } v26_;

  v2 = *(_QWORD*)(a1 + 40);
  if ((unsigned int)CudaDriverRoutine_997d0(*(_QWORD*)(a1 + 16)) != 3 &&
      *(_DWORD*)((char*)((__int64*)0x10LL) + (_QWORD)CudaDriverData_1432140 +
                 4) != 0) {
    v3 = *(_QWORD*)(a1 + 16);
    v26_.v26 = (__typeof__(v26_.v26)){0};
    v26_.v27 = (__typeof__(v26_.v27)){0};
    LODWORD(v26_.v26) = 32;
    v4 = CudaDriverRoutine_98340(v3);
    v5 = *(_DWORD**)(a1 + 16);
    *((_QWORD*)&v26_.v26 + 1) = v4;
    *(_QWORD*)&v26_.v27 = a1;
    if (*v5 == 1) {
      *((_QWORD*)&v26_.v27 + 1) = v5;
    }
    cuda_driver_20b420(2u, 5u, (__int64)&v26_.v26);
  }
  v6 = *(_QWORD*)(a1 + 992);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v6 + 272);
    if (v7 != a1) {
      CudaDriverStub_107f90(v7 + 592);
      v8 = *(_QWORD*)(a1 + 992);
      if (*(_QWORD*)(v8 + 272) == a1) {
        v9 = *(_QWORD*)(a1 + 1088);
        *(_QWORD*)(v8 + 272) = v9;
        if (v9 != 0) {
          v10 = 0;
          goto LABEL_16;
        }
      }
      else {
        v9 = *(_QWORD*)(a1 + 1088);
        *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 1088LL) = v9;
        if (v9 != 0) {
          v10 = *(_QWORD*)(a1 + 1080);
        LABEL_16:
          *(_QWORD*)(v9 + 1080) = v10;
        }
      }
      *(_QWORD*)(a1 + 992) = 0;
      *(_OWORD*)(a1 + 1080) = (__typeof__(*(_OWORD*)(a1 + 1080))){0};
      CudaDriverRoutine_1a39e0(a1 + 1000);
      atomic_fetch_add(
          (atomic_uint* volatile)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) +
                                  208LL),
          0xFFFFFFFF);
      if ((*(_BYTE*)(a1 + 56) & 4) != 0) {
        atomic_fetch_add(
            (atomic_uint* volatile)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) +
                                    212LL),
            0xFFFFFFFF);
      }
      CudaDriverStub_108070(*(_QWORD*)(v6 + 272) + 592LL);
      goto LABEL_20;
    }
    v25 = 0;
    *(_QWORD*)&v26_.v26 = 0;
    if ((unsigned int)CudaDriverRoutine_121c60(&v25) == 0) {
      cuda_driver_117200_alt1(v25, a1, (__int64*)&v26_.v26, 1);
      if ((_QWORD)v26_.v26 != 0) {
        cuda_driver_c36c0(v26_.v26);
      }
    }
  }
LABEL_20:
  CudaDriverRoutine_127070((_QWORD*)a1);
  if (!cuda_driver_12ea30((int*)(a1 + 576))) {
    goto LABEL_29;
  }
  v11 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v11] +
                     616LL * *(unsigned int*)(a1 + 348));
  v12 = *(_QWORD*)(a1 + 560);
  CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v11] +
                           616LL * *(unsigned int*)(a1 + 348));
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v11);
  if (v12 != 0) {
    CudaDriverRoutine_113ee0(a1, 1);
  }
  if ((unsigned int)CudaDriverRoutine_112f60(a1) != 0) {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) + 192LL) == 1) {
      CudaDriverRoutine_113110(a1, *(_QWORD*)(a1 + 48), 0,
                               (__int64)CudaDriverRoutine_119c90, a1, 0);
      goto LABEL_29;
    }
    cuda_driver_1bace0((unsigned int*)&v26_.v26, *(__int64**)(a1 + 584), 3);
    v13 = a1;
    v14 = (_DWORD)v26_.v26 == 5;
  }
  else {
    v13 = a1;
    v14 = 1;
  }
  CudaDriverRoutine_119bc0(v13, v14);
LABEL_29:
  v15 = *(_QWORD**)(a1 + 48);
  if (v15 != nullptr) {
    *v15 = 0;
    CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 48));
    *(_QWORD*)(a1 + 48) = 0;
  }
  CudaDriverRoutine_968c0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) + 16LL),
      (__int64*)(a1 + 776), *(_DWORD*)(a1 + 916), *(__int64**)(a1 + 584));
  v16 = *(unsigned int***)(a1 + 1112);
  if (v16 != nullptr) {
    cuda_driver_203fd0(v16, *(_DWORD*)(a1 + 1120) - 1);
    *(_QWORD*)(a1 + 1112) = 0;
  }
  v17 = *(unsigned int***)(a1 + 1128);
  if (v17 != nullptr) {
    cuda_driver_203fd0(v17, *(_DWORD*)(a1 + 1136) - 1);
    *(_QWORD*)(a1 + 1128) = 0;
  }
  result = CudaDriverRoutine_116c40(a1);
  if (*(_QWORD*)(v2 + 32) == a1) {
    v19 = *(_QWORD*)(a1 + 320);
    *(_QWORD*)(v2 + 32) = v19;
    if (v19 == 0) {
      goto LABEL_41;
    }
    v20 = 0;
  }
  else {
    v19 = *(_QWORD*)(a1 + 320);
    *(_QWORD*)(*(_QWORD*)(a1 + 312) + 320LL) = v19;
    if (v19 == 0) {
      goto LABEL_41;
    }
    v20 = *(_QWORD*)(a1 + 312);
  }
  *(_QWORD*)(v19 + 312) = v20;
LABEL_41:
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 320) = *(_QWORD*)(v2 + 40);
  *(_QWORD*)(v2 + 40) = a1;
  v21 = *(_QWORD*)(a1 + 320);
  if (v21 != 0) {
    *(_QWORD*)(v21 + 312) = a1;
  }
  ++*(_DWORD*)(v2 + 48);
  *(_DWORD*)(a1 + 1168) = 1;
  v22 = *(_QWORD*)(v2 + 40);
  if (v22 != 0) {
    do {
      v23 = *(__int64**)(v22 + 584);
      v24 = *(_QWORD*)(v22 + 320);
      LODWORD(v26_.v26) = 2;
      result = cuda_driver_1bace0((unsigned int*)&v26_.v26, v23, 1);
      if ((_DWORD)result != 0) {
        break;
      }
      if ((_DWORD)v26_.v26 == 5) {
        result = cuda_driver_115e00(v22);
      }
      v22 = v24;
    } while (v24 != 0);
  }
  if (*(int*)(v2 + 64) >= 65) {
    do {
      result = CudaDriverRoutine_115f80(*(_QWORD*)(v2 + 56), 1);
    } while (*(int*)(v2 + 64) > 16);
  }
  return result;
}

__int64 cuda_driver_115e00(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  unsigned __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  _QWORD v12[4];

  v1 = *(_QWORD*)(a1 + 40);
  if (*(_QWORD*)(v1 + 40) == a1) {
    v3 = *(_QWORD*)(a1 + 320);
    *(_QWORD*)(v1 + 40) = v3;
    if (v3 == 0) {
      goto LABEL_7;
    }
    v4 = 0;
  }
  else {
    v3 = *(_QWORD*)(a1 + 320);
    *(_QWORD*)(*(_QWORD*)(a1 + 312) + 320LL) = v3;
    if (v3 == 0) {
      goto LABEL_7;
    }
    v4 = *(_QWORD*)(a1 + 312);
  }
  *(_QWORD*)(v3 + 312) = v4;
LABEL_7:
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  --*(_DWORD*)(v1 + 48);
  *(_QWORD*)(a1 + 320) = *(_QWORD*)(v1 + 56);
  *(_QWORD*)(v1 + 56) = a1;
  v5 = *(_QWORD*)(a1 + 320);
  if (v5 != 0) {
    *(_QWORD*)(v5 + 312) = a1;
  }
  ++*(_DWORD*)(v1 + 64);
  *(_QWORD*)(a1 + 304) = 0;
  *(_DWORD*)(a1 + 1168) = 2;
  v6 = *(_BYTE*)(a1 + 56);
  *(_OWORD*)(a1 + 744) = (__typeof__(*(_OWORD*)(a1 + 744))){0};
  *(_BYTE*)(a1 + 56) = v6 & 0xFC;
  *(_OWORD*)(a1 + 616) = (__typeof__(*(_OWORD*)(a1 + 616))){0};
  *(_OWORD*)(a1 + 632) = (__typeof__(*(_OWORD*)(a1 + 632))){0};
  *(_OWORD*)(a1 + 648) = (__typeof__(*(_OWORD*)(a1 + 648))){0};
  *(_OWORD*)(a1 + 664) = (__typeof__(*(_OWORD*)(a1 + 664))){0};
  *(_OWORD*)(a1 + 680) = (__typeof__(*(_OWORD*)(a1 + 680))){0};
  *(_OWORD*)(a1 + 696) = (__typeof__(*(_OWORD*)(a1 + 696))){0};
  *(_OWORD*)(a1 + 712) = (__typeof__(*(_OWORD*)(a1 + 712))){0};
  *(_OWORD*)(a1 + 724) = (__typeof__(*(_OWORD*)(a1 + 724))){0};
  CudaDriverStub_107f90(a1 + 592);
  v7 = *(_QWORD*)(a1 + 8);
  if (v7 != 0) {
    CudaDriverRoutine_1bb6a0(v7, *(_QWORD*)(a1 + 584));
  }
  CudaDriverRoutine_56260(*(_QWORD*)(a1 + 584));
  CudaDriverStub_108070(a1 + 592);
  result = CudaDriverRoutine_997d0(*(_QWORD*)(a1 + 16));
  if ((_DWORD)result != 3 && *(_DWORD*)((char*)((__int64*)0x18LL) +
                                        (_QWORD)CudaDriverData_1432140) != 0) {
    v9 = *(_QWORD*)(a1 + 16);
    memset(v12, 0, sizeof(v12));
    LODWORD(v12[0]) = 32;
    v10 = CudaDriverRoutine_98340(v9);
    v11 = *(_DWORD**)(a1 + 16);
    v12[1] = v10;
    v12[2] = a1;
    if (*v11 == 1) {
      v12[3] = v11;
    }
    return cuda_driver_20b420(2u, 6u, (__int64)v12);
  }
  return result;
}

__int64 cuda_driver_1162c0(__int64* a1, __int64 a2, signed int* a3)
{
  __int64 v5;
  __int64* v6;
  signed int v7;
  signed int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  void* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int128* v24;
  __int128 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  signed int v40;
  unsigned int v41;

  v5 = *(_QWORD*)(*(_QWORD*)(a2 + 88) + 8LL);
  CudaDriverStub_107f90(v5 + 8);
  v6 = nullptr;
  *(_BYTE*)(v5 + 24) = 1;
  v7 = *a3;
  v8 = a3[1];
  v9 = *(_QWORD*)v5;
  if ((v8 & 4) == 0) {
    v6 = (__int64*)CudaDriverStub_12e330(8);
    if (v6 == nullptr) {
    LABEL_52:
      v18 = 2;
      goto LABEL_53;
    }
  }
  v10 = *(_QWORD*)(v5 + 56);
  v40 = v7;
  if (v10 != 0) {
    goto LABEL_4;
  }
  v19 = *(_QWORD*)(v5 + 40);
  if (v19 == 0) {
    goto LABEL_37;
  }
  do {
    v20 = *(__int64**)(v19 + 584);
    v21 = *(_QWORD*)(v19 + 320);
    v41 = 2;
    v22 = cuda_driver_1bace0(&v41, v20, 1);
    if (v22 != 0) {
      v18 = v22;
      goto LABEL_53;
    }
    if (v41 == 5) {
      cuda_driver_115e00(v19);
    }
    v19 = v21;
  } while (v21 != 0);
  v10 = *(_QWORD*)(v5 + 56);
  if (v10 != 0) {
    goto LABEL_4;
  }
LABEL_37:
  while (*(int*)(v5 + 64) <= 7) {
    v32 = *(_QWORD*)v5;
    v33 = CudaDriverStub_12e330(1360);
    if (v33 == 0) {
      goto LABEL_49;
    }
    v34 = v33;
    memset_plt(v33, 0, 1360);
    *(_DWORD*)v34 = 1;
    *(_QWORD*)(v34 + 8) = 0;
    *(_QWORD*)(v34 + 16) = v32;
    *(_QWORD*)(v34 + 40) = v5;
    CudaDriverRoutine_107f40((_QWORD*)(v34 + 1144), 53, 0);
    CudaDriverRoutine_107f40((_QWORD*)(v34 + 24), 14, 0);
    CudaDriverRoutine_107f40((_QWORD*)(v34 + 592), 40, 0);
    v35 = CudaDriverRoutine_12e510(
        *(unsigned int*)(*(_QWORD*)(v32 + 64) + 3776LL), 24);
    *(_QWORD*)(v34 + 848) = v35;
    if (v35 == 0 ||
        (v36 = CudaDriverRoutine_12e510(
             1, *(unsigned int*)(*(_QWORD*)(v32 + 64) + 17104LL)),
         *(_QWORD*)(v34 + 888) = v36, v36 == 0) ||
        (v37 = CudaDriverRoutine_12e510(1, 2048), *(_QWORD*)(v34 + 896) = v37,
         v37 == 0)) {
      v18 = 2;
      CudaDriverRoutine_115f80(v34, 0);
    LABEL_48:
      if (v18 != 2) {
        goto LABEL_53;
      }
    LABEL_49:
      if (*(int*)(v5 + 64) < 1) {
        goto LABEL_52;
      }
      break;
    }
    CudaDriverRoutine_1a2dd0(v34 + 1000, 16, 8, 0, 0, 0);
    v18 = CudaDriverRoutine_1ba480((_QWORD*)(v34 + 584), *(_QWORD*)(v32 + 72));
    if (v18 != 0) {
      CudaDriverRoutine_115f80(v34, 0);
      goto LABEL_48;
    }
    CudaDriverRoutine_1199d0(v34);
    *(_QWORD*)(v34 + 320) = *(_QWORD*)(v5 + 56);
    *(_QWORD*)(v5 + 56) = v34;
    v38 = *(_QWORD*)(v34 + 320);
    if (v38 != 0) {
      *(_QWORD*)(v38 + 312) = v34;
    }
    ++*(_DWORD*)(v5 + 64);
    *(_DWORD*)(v34 + 1168) = 2;
  }
  v10 = *(_QWORD*)(v5 + 56);
  if (v10 != 0) {
  LABEL_4:
    v11 = *(_QWORD*)(v10 + 320);
    *(_QWORD*)(v5 + 56) = v11;
    if (v11 != 0) {
      *(_QWORD*)(v11 + 312) = 0;
    }
    *(_QWORD*)(v10 + 312) = 0;
    *(_QWORD*)(v10 + 320) = 0;
    --*(_DWORD*)(v5 + 64);
  }
  *(_QWORD*)(v10 + 320) = *(_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 32) = v10;
  v12 = *(_QWORD*)(v10 + 320);
  if (v12 != 0) {
    *(_QWORD*)(v12 + 312) = v10;
  }
  *(_DWORD*)(v10 + 1168) = 0;
  *(_DWORD*)(v10 + 576) = 0;
  *(_DWORD*)(v10 + 916) = *(_DWORD*)(*(_QWORD*)(v9 + 64) + 17020LL);
  v13 = CudaDriverData_1422118;
  if ((v8 & 0x20) != 0 ||
      *((_BYTE*)((_UNKNOWN*)0x1164LL) + (_QWORD)CudaDriverData_1422118) != 0 ||
      *(_DWORD*)(*(_QWORD*)(v9 + 64) + 21864LL) == 1) {
    *(_DWORD*)(v10 + 916) = 1;
  }
  v14 = *(_QWORD*)(v10 + 16);
  *(_DWORD*)(v10 + 840) = 0;
  v15 = *(__int64**)(*(_QWORD*)(v14 + 88) + 16LL);
  v16 = CudaDriverRoutine_98340(v14);
  CudaDriverRoutine_96e50(v16, *(_QWORD*)(v10 + 848));
  v17 = cuda_driver_96040(v15, v10 + 776, *(_DWORD*)(v10 + 916));
  if (v17 == 0) {
    v23 = *(_QWORD*)(v10 + 848);
    v24 = *(__int128**)(v10 + 776 + 8LL * *(unsigned int*)(v10 + 840));
    *(_QWORD*)(v10 + 768) = v24;
    v25 = *v24;
    v26 = v23 + 24LL * *(unsigned int*)(*(_QWORD*)(v14 + 64) + 11708LL);
    *(_QWORD*)(v26 + 16) = *((_QWORD*)v24 + 2);
    *(_OWORD*)v26 = v25;
    if ((v8 & 0x10) != 0 || (v17 = cuda_driver_1167a0(v10)) == 0) {
      if ((*(_WORD*)((_BYTE*)((_UNKNOWN*)0x1870LL) + (_QWORD)v13) & 1) == 0 ||
          *(_BYTE*)(*(_QWORD*)(v9 + 80) + 56LL) == 0 ||
          *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v13) > 1u ||
          (*(_BYTE*)(*(_QWORD*)(v9 + 64) + 17068LL) & 2) == 0 ||
          (v27 = CudaDriverRoutine_98340(v9),
           (v17 = CudaDriverRoutine_125af0(v27, (__int64*)(v10 + 1112),
                                           (_DWORD*)(v10 + 1120))) == 0)) {
        v28 = CudaDriverRoutine_98340(v9);
        v17 = CudaDriverRoutine_203600(*(_QWORD*)(v28 + 1880),
                                       (_QWORD*)(v10 + 1128));
        if (v17 == 0) {
          *(_DWORD*)(v10 + 1136) =
              cuda_driver_204330(*(_QWORD*)(v10 + 1128)) + 1;
          v29 = CudaDriverRoutine_98340(v9);
          v17 = CudaDriverRoutine_8d690(v29);
          if (v17 == 0) {
            if ((v8 & 0xB) != 0) {
              v30 = 0;
            }
            else {
              v30 = 4;
            }
            *(_BYTE*)(v10 + 56) =
                v30 & 0xFC | *(_BYTE*)(v10 + 56) & 0xF8 | v8 & 3;
            if ((v8 & 4) != 0) {
              v31 = nullptr;
            }
            else {
              *v6 = v10;
              v31 = v6;
            }
            *(_QWORD*)(v10 + 48) = v31;
            if ((v8 & 0xC) == 8) {
              *(_BYTE*)(v5 + 25) = 1;
            }
            *(_DWORD*)(v10 + 64) = v40;
            *(_DWORD*)(v10 + 60) =
                CudaDriverRoutine_9b5e0(*(_QWORD*)(v9 + 64), v40);
            *(_QWORD*)(v10 + 304) = CudaDriverRoutine_12dea0(
                (atomic_ullong*)((char*)((_UNKNOWN*)0x10B0LL) + (_QWORD)v13));
            v17 = CudaDriverRoutine_126fa0(v10);
            if (v17 == 0) {
              CudaDriverRoutine_1199d0(v10);
              if ((unsigned int)CudaDriverRoutine_997d0(*(_QWORD*)(v10 + 16)) !=
                  3) {
                cuda_driver_119b20_alt1(v9, v10);
              }
              v18 = 0;
            LABEL_54:
              *(_BYTE*)(v5 + 24) = 0;
              CudaDriverStub_108070(v5 + 8);
              *a1 = v10;
              return v18;
            }
          }
        }
      }
    }
  }
  v18 = v17;
  cuda_driver_115a40(v10);
LABEL_53:
  CudaDriverRoutine_12e340((__int64)v6);
  v10 = 0;
  goto LABEL_54;
}

__int64 cuda_driver_1167a0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  void* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;

  result = CudaDriverRoutine_200200(*(_QWORD*)(a1 + 16), 1u, 8, a1 + 88);
  if ((_DWORD)result != 0) {
    return result;
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 88) + 40LL) = a1;
  *(_QWORD*)(*(_QWORD*)(a1 + 88) + 48LL) = *(_QWORD*)(a1 + 144);
  v3 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(*(_QWORD*)(a1 + 88) + 56LL) = v3;
  *(_QWORD*)(v3 + 40) = a1;
  *(_QWORD*)(*(_QWORD*)(a1 + 96) + 48LL) = *(_QWORD*)(a1 + 88);
  v4 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(*(_QWORD*)(a1 + 96) + 56LL) = v4;
  *(_QWORD*)(v4 + 40) = a1;
  *(_QWORD*)(*(_QWORD*)(a1 + 104) + 48LL) = *(_QWORD*)(a1 + 96);
  v5 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(*(_QWORD*)(a1 + 104) + 56LL) = v5;
  *(_QWORD*)(v5 + 40) = a1;
  *(_QWORD*)(*(_QWORD*)(a1 + 112) + 48LL) = *(_QWORD*)(a1 + 104);
  v6 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(*(_QWORD*)(a1 + 112) + 56LL) = v6;
  *(_QWORD*)(v6 + 40) = a1;
  *(_QWORD*)(*(_QWORD*)(a1 + 120) + 48LL) = *(_QWORD*)(a1 + 112);
  v7 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(*(_QWORD*)(a1 + 120) + 56LL) = v7;
  *(_QWORD*)(v7 + 40) = a1;
  *(_QWORD*)(*(_QWORD*)(a1 + 128) + 48LL) = *(_QWORD*)(a1 + 120);
  v8 = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(*(_QWORD*)(a1 + 128) + 56LL) = v8;
  *(_QWORD*)(v8 + 40) = a1;
  *(_QWORD*)(*(_QWORD*)(a1 + 136) + 48LL) = *(_QWORD*)(a1 + 128);
  v9 = *(_QWORD*)(a1 + 144);
  *(_QWORD*)(*(_QWORD*)(a1 + 136) + 56LL) = v9;
  *(_QWORD*)(v9 + 40) = a1;
  *(_QWORD*)(*(_QWORD*)(a1 + 144) + 48LL) = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(*(_QWORD*)(a1 + 144) + 56LL) = *(_QWORD*)(a1 + 88);
  *(_WORD*)(a1 + 224) = 0;
  v10 = CudaDriverData_1422118;
  v11 = *(_QWORD*)(a1 + 16);
  if (*((_BYTE*)((_UNKNOWN*)0x1888LL) + (_QWORD)CudaDriverData_1422118) == 0 &&
      (*(_BYTE*)((v12 = *(_QWORD*)(v11 + 64)) + 17015) & 1) != 0) {
    v13 = *(_DWORD*)(v12 + 21864);
    if (v13 != 1) {
      if ((unsigned int)CudaDriverRoutine_200200(v11, 1u, 8, a1 + 160) != 0) {
        *(_QWORD*)(a1 + 152) = 0;
        return 0;
      }
      LOBYTE(v13) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 88) + 72LL) = *(_QWORD*)(a1 + 160);
      *(_QWORD*)(*(_QWORD*)(a1 + 88) + 88LL) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 88) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 160) + 72LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 160) + 88LL) = *(_QWORD*)(a1 + 88);
      *(_BYTE*)(*(_QWORD*)(a1 + 160) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 96) + 72LL) = *(_QWORD*)(a1 + 168);
      *(_QWORD*)(*(_QWORD*)(a1 + 96) + 88LL) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 96) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 168) + 72LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 168) + 88LL) = *(_QWORD*)(a1 + 96);
      *(_BYTE*)(*(_QWORD*)(a1 + 168) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 104) + 72LL) = *(_QWORD*)(a1 + 176);
      *(_QWORD*)(*(_QWORD*)(a1 + 104) + 88LL) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 104) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 176) + 72LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 176) + 88LL) = *(_QWORD*)(a1 + 104);
      *(_BYTE*)(*(_QWORD*)(a1 + 176) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 112) + 72LL) = *(_QWORD*)(a1 + 184);
      *(_QWORD*)(*(_QWORD*)(a1 + 112) + 88LL) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 112) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 184) + 72LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 184) + 88LL) = *(_QWORD*)(a1 + 112);
      *(_BYTE*)(*(_QWORD*)(a1 + 184) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 120) + 72LL) = *(_QWORD*)(a1 + 192);
      *(_QWORD*)(*(_QWORD*)(a1 + 120) + 88LL) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 120) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 192) + 72LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 192) + 88LL) = *(_QWORD*)(a1 + 120);
      *(_BYTE*)(*(_QWORD*)(a1 + 192) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 128) + 72LL) = *(_QWORD*)(a1 + 200);
      *(_QWORD*)(*(_QWORD*)(a1 + 128) + 88LL) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 128) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 200) + 72LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 200) + 88LL) = *(_QWORD*)(a1 + 128);
      *(_BYTE*)(*(_QWORD*)(a1 + 200) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 136) + 72LL) = *(_QWORD*)(a1 + 208);
      *(_QWORD*)(*(_QWORD*)(a1 + 136) + 88LL) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 136) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 208) + 72LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 208) + 88LL) = *(_QWORD*)(a1 + 136);
      *(_BYTE*)(*(_QWORD*)(a1 + 208) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 144) + 72LL) = *(_QWORD*)(a1 + 216);
      *(_QWORD*)(*(_QWORD*)(a1 + 144) + 88LL) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 144) + 80LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 216) + 72LL) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 216) + 88LL) = *(_QWORD*)(a1 + 144);
      *(_BYTE*)(*(_QWORD*)(a1 + 216) + 80LL) = 0;
      *(_BYTE*)(a1 + 224) = 1;
      v11 = *(_QWORD*)(a1 + 16);
    }
  }
  else {
    LOBYTE(v13) = 1;
  }
  if (*((_BYTE*)((_UNKNOWN*)0x1888LL) + (_QWORD)v10) == 0) {
    v14 = *(_QWORD*)(v11 + 64);
    if ((*(_BYTE*)(v14 + 17012) & 1) == 0) {
      LOBYTE(v13) = 1;
    }
    if ((v13 & 1) == 0) {
      if ((unsigned int)CudaDriverRoutine_1a4200(
              a1 + 232, *(_QWORD*)(v14 + 21648), 8u) != 0) {
      LABEL_15:
        *(_QWORD*)(a1 + 152) = 0;
        return 0;
      }
      v15 = CudaDriverStub_f0f50(*(_QWORD*)(a1 + 232));
      *(_DWORD*)(*(_QWORD*)(a1 + 88) + 64LL) = v15;
      *(_DWORD*)(*(_QWORD*)(a1 + 96) + 64LL) = v15 + 1;
      *(_DWORD*)(*(_QWORD*)(a1 + 104) + 64LL) = v15 + 2;
      *(_DWORD*)(*(_QWORD*)(a1 + 112) + 64LL) = v15 + 3;
      *(_DWORD*)(*(_QWORD*)(a1 + 120) + 64LL) = v15 + 4;
      *(_DWORD*)(*(_QWORD*)(a1 + 128) + 64LL) = v15 + 5;
      *(_DWORD*)(*(_QWORD*)(a1 + 136) + 64LL) = v15 + 6;
      *(_DWORD*)(*(_QWORD*)(a1 + 144) + 64LL) = v15 + 7;
      v11 = *(_QWORD*)(a1 + 16);
      *(_BYTE*)(a1 + 225) = 1;
    }
  }
  v16 = CudaDriverRoutine_98340(v11);
  if (!CudaDriverRoutine_92190(v16)) {
    goto LABEL_15;
  }
  result = CudaDriverRoutine_200200(*(_QWORD*)(a1 + 16), 1u, 8, a1 + 240);
  if ((_DWORD)result == 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 88) + 192LL) = *(_QWORD*)(a1 + 240);
    *(_QWORD*)(*(_QWORD*)(a1 + 96) + 192LL) = *(_QWORD*)(a1 + 248);
    *(_QWORD*)(*(_QWORD*)(a1 + 104) + 192LL) = *(_QWORD*)(a1 + 256);
    *(_QWORD*)(*(_QWORD*)(a1 + 112) + 192LL) = *(_QWORD*)(a1 + 264);
    *(_QWORD*)(*(_QWORD*)(a1 + 120) + 192LL) = *(_QWORD*)(a1 + 272);
    *(_QWORD*)(*(_QWORD*)(a1 + 128) + 192LL) = *(_QWORD*)(a1 + 280);
    *(_QWORD*)(*(_QWORD*)(a1 + 136) + 192LL) = *(_QWORD*)(a1 + 288);
    *(_QWORD*)(*(_QWORD*)(a1 + 144) + 192LL) = *(_QWORD*)(a1 + 296);
  }
  *(_QWORD*)(a1 + 152) = 0;
  return result;
}

bool cuda_driver_116e40(__int64 a1)
{
  int v1;

  v1 = *(_DWORD*)(a1 + 1224);
  __builtin_arm_dmb(0xDu);
  return v1 != 0;
}

__int64 cuda_driver_116e60(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 result;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;

  v8 = 0;
  v1 = *(_QWORD*)(a1 + 16);
  v2 = *(_DWORD*)(a1 + 1224);
  __builtin_arm_dmb(0xDu);
  if (v2 != 0) {
    return 0;
  }
  CudaDriverRoutine_98340(*(_QWORD*)(a1 + 16));
  v7 = 0;
  v5 = CudaDriverRoutine_98340(v1);
  result = CudaDriverRoutine_8da00(v5, 1u, &v8, &v7);
  if ((_DWORD)result == 0) {
    *(_QWORD*)(a1 + 1216) = v8;
    v6 = v7;
    __builtin_arm_dmb(0xEu);
    *(_DWORD*)(a1 + 1224) = v6;
  }
  return result;
}

__int64 cuda_driver_116ef0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  int v3;
  unsigned int v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned int v8;
  int v10;
  int v11;
  __int64 v12;

  v12 = 0;
  v2 = *(_QWORD*)(a1 + 16);
  v3 = *(_DWORD*)(a1 + 1224);
  __builtin_arm_dmb(0xDu);
  if (v3 == 0) {
    v5 = a1;
    v6 = a2;
    CudaDriverRoutine_98340(*(_QWORD*)(a1 + 16));
    v11 = 0;
    v7 = CudaDriverRoutine_98340(v2);
    v8 = CudaDriverRoutine_8da00(v7, 1u, &v12, &v11);
    if (v8 != 0) {
      return v8;
    }
    a1 = v5;
    a2 = v6;
    *(_QWORD*)(v5 + 1216) = v12;
    v10 = v11;
    __builtin_arm_dmb(0xEu);
    *(_DWORD*)(v5 + 1224) = v10;
  }
  v4 = 0;
  *a2 = *(_QWORD*)(a1 + 1216);
  return v4;
}

__int64 cuda_driver_117060(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _DWORD* v12;
  __int64 v13;
  struct {
    __int128 v14;
    __int128 v15;
    __int128 v16;
  } v14_;

  v13 = 0;
  if (a4 != 0) {
    v6 = a4;
    if (*(_QWORD*)(a4 + 272) != 0) {
      return 401;
    }
  LABEL_7:
    if (a3 == 2) {
      *(_QWORD*)(v6 + 304) = 0;
    }
    else {
      CudaDriverRoutine_121b90(a1, (atomic_uint**)(v6 + 304));
      atomic_fetch_add((atomic_uint* volatile)(*(_QWORD*)(v6 + 304) + 8LL), 1u);
    }
    *(_QWORD*)(a2 + 992) = v6;
    *(_DWORD*)(v6 + 296) = a3;
    *(_QWORD*)(a2 + 1088) = *(_QWORD*)(v6 + 272);
    *(_QWORD*)(v6 + 272) = a2;
    v9 = *(_QWORD*)(a2 + 1088);
    if (v9 != 0) {
      *(_QWORD*)(v9 + 1080) = a2;
    }
    atomic_fetch_add(
        (atomic_uint* volatile)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 88LL) + 208LL),
        1u);
    if ((*(_BYTE*)(a2 + 56) & 4) != 0) {
      atomic_fetch_add(
          (atomic_uint* volatile)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 88LL) +
                                  212LL),
          1u);
      *(_DWORD*)(v6 + 280) = 0;
      *(_QWORD*)(v6 + 288) = 0;
      if (a3 != 0) {
      LABEL_14:
        if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_14321b8) ==
            0) {
          return 0;
        }
        goto LABEL_18;
      }
    }
    else {
      *(_DWORD*)(v6 + 280) = 0;
      *(_QWORD*)(v6 + 288) = 0;
      if (a3 != 0) {
        goto LABEL_14;
      }
    }
    atomic_fetch_add((atomic_uint* volatile)((char*)&CudaDriverRoutine_470c +
                                             (_QWORD)CudaDriverData_1422118),
                     1u);
    if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_14321b8) == 0) {
      return 0;
    }
  LABEL_18:
    v10 = *(_QWORD*)(a2 + 16);
    v14_.v15 = (__typeof__(v14_.v15)){0};
    v14_.v16 = (__typeof__(v14_.v16)){0};
    v14_.v14 = (__typeof__(v14_.v14)){0};
    LODWORD(v14_.v14) = 48;
    v11 = CudaDriverRoutine_98340(v10);
    v12 = *(_DWORD**)(a2 + 16);
    *((_QWORD*)&v14_.v14 + 1) = v11;
    *(_QWORD*)&v14_.v15 = a2;
    *((_QWORD*)&v14_.v15 + 1) = v6;
    if (*v12 == 1) {
      *((_QWORD*)&v14_.v16 + 1) = v12;
    }
    cuda_driver_20b420(0x11u, 1u, (__int64)&v14_.v14);
    return 0;
  }
  v8 = a1;
  result = cuda_driver_c30d0(&v13, 1, 0);
  if ((_DWORD)result == 0) {
    v6 = v13;
    a1 = v8;
    goto LABEL_7;
  }
  return result;
}

__int64 cuda_driver_117200(__int64 a1, _QWORD* a2, __int64* a3, __int64 a4)
{
  __int64 v4;
  unsigned int v7;
  int v8;
  __int64 v10;
  void* i;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  struct {
    __int128 v19;
    __int128 v20;
    __int128 v21;
  } v19_;

  v4 = a2[124];
  if (*(_DWORD*)(v4 + 296) == 2) {
    v7 = 0;
    if (*(_DWORD*)(v4 + 280) == 0) {
      goto LABEL_3;
    }
  LABEL_11:
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Capture was invalidated by a prior API call", a4);
    v7 = *(_DWORD*)(v4 + 280);
    goto LABEL_12;
  }
  if ((_BYTE)a4 != 0 || (CudaDriverRoutine_121b80(a1, &v19_.v19),
                         *(_QWORD*)(v4 + 304) == (_QWORD)v19_.v19)) {
    v7 = 0;
  }
  else {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"CU_STREAM_CAPTURE_MODE_RELAXED is required to begin and end "
                 "the capture on different threads");
    v7 = 908;
  }
  atomic_fetch_add((atomic_uint* volatile)(*(_QWORD*)(v4 + 304) + 8LL),
                   0xFFFFFFFF);
  CudaDriverRoutine_121bb0(*(_QWORD*)(v4 + 304));
  v8 = *(_DWORD*)(v4 + 296);
  *(_QWORD*)(v4 + 304) = 0;
  if (v8 != 0) {
    if (*(_DWORD*)(v4 + 280) != 0) {
      goto LABEL_11;
    }
  }
  else {
    atomic_fetch_add((atomic_uint* volatile)((char*)&CudaDriverRoutine_470c +
                                             (_QWORD)CudaDriverData_1422118),
                     0xFFFFFFFF);
    if (*(_DWORD*)(v4 + 280) != 0) {
      goto LABEL_11;
    }
  }
LABEL_3:
  if ((unsigned __int8)CudaDriverRoutine_c55e0(v4, a2 + 125) == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Capture sequence contains a fork that "
                                     "was not joined to the primary stream");
    v7 = 904;
  }
LABEL_12:
  CudaDriverRoutine_c5500(v4, (unsigned int*)a2 + 250);
  CudaDriverRoutine_c5a20(v4);
  v10 = *(_QWORD*)(v4 + 272);
  for (i = CudaDriverData_14225e0; v10 != 0; v10 = *(_QWORD*)(v4 + 272)) {
    if ((_QWORD*)v10 != a2 &&
        *(_DWORD*)((char*)((__int64*)0x10LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x88LL) + (_QWORD)i)) != 0) {
      v19_.v20 = (__typeof__(v19_.v20)){0};
      v19_.v21 = (__typeof__(v19_.v21)){0};
      v19_.v19 = (__typeof__(v19_.v19)){0};
      LODWORD(v19_.v19) = 48;
      *((_QWORD*)&v19_.v19 + 1) = CudaDriverRoutine_98340(*(_QWORD*)(v10 + 16));
      *(_QWORD*)&v19_.v20 = v10;
      *((_QWORD*)&v19_.v20 + 1) = v4;
      if (**(_DWORD**)(v10 + 16) == 1) {
        *((_QWORD*)&v19_.v21 + 1) = *(_QWORD*)(v10 + 16);
      }
      cuda_driver_20b420(0x11u, 4u, (__int64)&v19_.v19);
      v10 = *(_QWORD*)(v4 + 272);
    }
    v12 = *(_QWORD*)(v10 + 992);
    if (*(_QWORD*)(v12 + 272) == v10) {
      v13 = *(_QWORD*)(v10 + 1088);
      *(_QWORD*)(v12 + 272) = v13;
      if (v13 != 0) {
        v14 = 0;
        goto LABEL_25;
      }
    }
    else {
      v13 = *(_QWORD*)(v10 + 1088);
      *(_QWORD*)(*(_QWORD*)(v10 + 1080) + 1088LL) = v13;
      if (v13 != 0) {
        v14 = *(_QWORD*)(v10 + 1080);
      LABEL_25:
        *(_QWORD*)(v13 + 1080) = v14;
      }
    }
    *(_QWORD*)(v10 + 992) = 0;
    *(_OWORD*)(v10 + 1080) = (__typeof__(*(_OWORD*)(v10 + 1080))){0};
    CudaDriverRoutine_1a39e0(v10 + 1000);
    atomic_fetch_add(
        (atomic_uint* volatile)(*(_QWORD*)(*(_QWORD*)(v10 + 16) + 88LL) +
                                208LL),
        0xFFFFFFFF);
    if ((*(_BYTE*)(v10 + 56) & 4) != 0) {
      atomic_fetch_add(
          (atomic_uint* volatile)(*(_QWORD*)(*(_QWORD*)(v10 + 16) + 88LL) +
                                  212LL),
          0xFFFFFFFF);
    }
  }
  if (v7 != 0) {
    cuda_driver_c36c0(v4);
    *a3 = 0;
  }
  else {
    *a3 = v4;
    if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x88LL) + (_QWORD)i)) != 0) {
      v15 = a2[2];
      v19_.v20 = (__typeof__(v19_.v20)){0};
      v19_.v21 = (__typeof__(v19_.v21)){0};
      v19_.v19 = (__typeof__(v19_.v19)){0};
      LODWORD(v19_.v19) = 48;
      v16 = CudaDriverRoutine_98340(v15);
      v17 = (_DWORD*)a2[2];
      *((_QWORD*)&v19_.v19 + 1) = v16;
      *(_QWORD*)&v19_.v20 = a2;
      *((_QWORD*)&v19_.v20 + 1) = v4;
      if (*v17 == 1) {
        *((_QWORD*)&v19_.v21 + 1) = v17;
      }
      cuda_driver_20b420(0x11u, 2u, (__int64)&v19_.v19);
    }
  }
  return v7;
}

__int64 cuda_driver_117500(__int64 a1, __int64 a2)
{
  __int128 v2;
  __int128 v3;
  struct {
    int v6;
    char gap12_[4];
    __int64 v7;
  } v6_;

  v2 = *(_OWORD*)(a2 + 1232);
  v3 = *(_OWORD*)(a2 + 1248);
  *(_OWORD*)(a1 + 1264) = *(_OWORD*)(a2 + 1264);
  *(_OWORD*)(a1 + 1248) = v3;
  *(_OWORD*)(a1 + 1232) = v2;
  *(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 64);
  *(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 60);
  if ((unsigned int)CudaDriverRoutine_997d0(*(_QWORD*)(a2 + 16)) != 3 &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x140LL) +
                 (_QWORD)CudaDriverData_1432140) != 0) {
    v6_.v7 = a1;
    v6_.v6 = 24;
    cuda_driver_20b420(2u, 0x50u, (__int64)&v6_.v6);
  }
  return 0;
}

__int64 cuda_driver_117a70(__int64 a1, int a2, unsigned __int8* a3)
{
  __int64 result;
  int v7;
  signed int v8;
  __int64 v9;
  unsigned int v10;
  __int128 v11;
  _QWORD v12[5];

  result = 1;
  if (a2 > 7) {
    switch (a2) {
    case 8:
      v8 = *(_DWORD*)a3;
      v9 = *(_QWORD*)(a1 + 16);
      *(_DWORD*)(a1 + 64) = *(_DWORD*)a3;
      *(_DWORD*)(a1 + 60) = CudaDriverRoutine_9b5e0(*(_QWORD*)(v9 + 64), v8);
      goto LABEL_21;
    case 9:
      v10 = (*(__int64 (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 64LL) +
                                      18424LL))(44);
      if (*a3 >= v10) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Invalid mem sync domain map: default domain maps to %u "
                     "which is beyond the device limit %u");
      }
      else {
        if (a3[1] < v10) {
          *(_WORD*)(a1 + 1268) = *(_WORD*)a3;
          goto LABEL_21;
        }
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Invalid mem sync domain map: remote domain maps to %u "
                     "which is beyond the device limit %u");
      }
      break;
    case 10:
      v7 = *(_DWORD*)a3;
      if (*(_DWORD*)a3 < 2u) {
        *(_DWORD*)(a1 + 1272) = v7;
        goto LABEL_21;
      }
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Invalid CUlaunchMemSyncDomain value %d",
                              v7);
      break;
    default:
      return result;
    }
    return 1;
  }
  if (a2 == 1) {
    if ((unsigned int)CudaDriverRoutine_117620(*(_QWORD*)(a1 + 16),
                                               (__int64)a3) != 0) {
      return 1;
    }
    v11 = *(_OWORD*)a3;
    *(_OWORD*)(a1 + 1248) = *((_OWORD*)a3 + 1);
    *(_OWORD*)(a1 + 1232) = v11;
  }
  else {
    if (a2 != 3 || (unsigned int)(*(_DWORD*)a3 - 5) < 0xFFFFFFFC) {
      return result;
    }
    *(_DWORD*)(a1 + 1264) = *(_DWORD*)a3;
  }
LABEL_21:
  if ((unsigned int)CudaDriverRoutine_997d0(*(_QWORD*)(a1 + 16)) != 3 &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x114LL) +
                 (_QWORD)CudaDriverData_1432140) != 0) {
    v12[1] = a1;
    v12[3] = a3;
    LODWORD(v12[0]) = 40;
    HIDWORD(v12[0]) = a2;
    cuda_driver_20b420(2u, 0x45u, (__int64)v12);
  }
  return 0;
}

__int64 cuda_driver_117ee0(__int64 a1)
{
  __int64 result;
  void* v3;
  unsigned int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;

  if (*(_DWORD*)(a1 + 344) == 0) {
    return 0;
  }
  result =
      cuda_driver_12ea60((atomic_uint*)(a1 + 576),
                         (__int64 (*)(__int64))CudaDriverData_14232e0[0], a1);
  if ((_DWORD)result == 0) {
    *(_DWORD*)(a1 + 344) = 0;
    v3 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                       (_QWORD)CudaDriverData_1422118);
    v4 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_4780 + (_QWORD)v3);
    if (v4 != 0) {
      v5 = 0;
      v6 = 0;
      v7 = 616LL * v4;
      do {
        if (CudaDriverRoutine_8b200(
                (__int64)cuda_driver_misc_helpers_4c20 + (_QWORD)v3, 0, v5) !=
            0) {
          cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v3] + v6);
          v10 = CudaDriverRoutine_8b200(
              (__int64)cuda_driver_misc_helpers_4c20 + (_QWORD)v3, 0, v5);
          if (v10 != 0 && (*(_BYTE*)(v10 + 56) & 4) != 0 &&
              *(_DWORD*)(*(_QWORD*)(a1 + 16) + 56LL) ==
                  *(_DWORD*)(*(_QWORD*)(v10 + 16) + 56LL)) {
            if (*(_DWORD*)(v10 + 340) != 0) {
              *(_DWORD*)(v10 + 340) = 0;
              CudaDriverRoutine_8b420(
                  (__int64)&CudaDriverRoutine_4780 + (_QWORD)v3,
                  *(_DWORD*)(a1 + 348),
                  (__int64)&CudaDriverRoutine_4780 + (_QWORD)v3,
                  *(_DWORD*)(v10 + 348));
            }
            else {
              v8 = v10;
              v9 = CudaDriverRoutine_8b200(
                  (__int64)&CudaDriverRoutine_4780 + (_QWORD)v3,
                  *(_DWORD*)(v10 + 348), *(_DWORD*)(v10 + 348));
              CudaDriverRoutine_8b180(
                  (__int64)&CudaDriverRoutine_4780 + (_QWORD)v3,
                  *(_DWORD*)(a1 + 348), *(_DWORD*)(v8 + 348), v9);
            }
          }
          CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v3] +
                                   v6);
        }
        v6 += 616;
        ++v5;
      } while (v7 != v6);
    }
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v3);
    return 0;
  }
  return result;
}

__int64 cuda_driver_118130(__int64 a1, unsigned __int64* a2)
{
  unsigned __int64 v4;

  v4 = CudaDriverRoutine_5b820(*(_QWORD*)(a1 + 328));
  *(_BYTE*)(a1 + 336) = 1;
  *a2 = v4;
  CudaDriverRoutine_8b180((__int64)&CudaDriverRoutine_4780 +
                              (_QWORD)CudaDriverData_1422118,
                          *(_DWORD*)(a1 + 348), *(_DWORD*)(a1 + 348), v4);
  return CudaDriverRoutine_1ba7d0(a1 + 360, *(_QWORD*)(a1 + 584));
}

__int64 cuda_driver_118460(unsigned __int64 a1)
{
  void* v2;
  unsigned int v3;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  _QWORD* v13;
  __int64 v14;
  struct {
    __int64 v15;
    int v16;
    int v17;
  } v15_;
  unsigned __int64 v18;

  v18 = 0;
  *(_DWORD*)(a1 + 348) = -1;
  v15_.v15 = *(_QWORD*)(a1 + 16);
  v15_.v17 = 0;
  v15_.v16 = 0x4000;
  v2 = CudaDriverData_1422118;
  if ((unsigned int)cuda_driver_12ea60(
          (atomic_uint*)((char*)&CudaDriverRoutine_4e48 +
                         (_QWORD)CudaDriverData_1422118),
          (__int64 (*)(__int64))CudaDriverRoutine_118780,
          (__int64)&v15_.v15) != 0) {
    goto LABEL_2;
  }
  CudaDriverRoutine_1ba4f0(a1 + 360, *(_QWORD*)(*(_QWORD*)(a1 + 16) + 72LL));
  CudaDriverStub_107f90_alt1((char*)&CudaDriverRoutine_4bf8 + (_QWORD)v2);
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v2) == 1) {
    v5 = **(unsigned int**)(*(_QWORD*)(a1 + 16) + 64LL);
    v6 = CudaDriverRoutine_4d0d0(
             *(_QWORD*)((char*)&CudaDriverRoutine_4bf0 + (_QWORD)v2)) -
         1;
    if ((unsigned __int8)CudaDriverRoutine_4d910(
            *(unsigned __int64**)((char*)&CudaDriverRoutine_4bf0 + (_QWORD)v2),
            0, v6, &v18) != 0) {
      while (v18 % *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v2) !=
             v5) {
        if ((unsigned __int8)CudaDriverRoutine_4d910(
                *(unsigned __int64**)((char*)&CudaDriverRoutine_4bf0 +
                                      (_QWORD)v2),
                v18 + 1, v6, &v18) == 0) {
          goto LABEL_12;
        }
      }
      v12 = CudaDriverRoutine_4d310(
          *(unsigned __int64**)((char*)&CudaDriverRoutine_4bf0 + (_QWORD)v2),
          v18);
      LODWORD(v7) = v18;
      v3 = v12;
      CudaDriverStub_108070_alt1((char*)&CudaDriverRoutine_4bf8 + (_QWORD)v2);
      if (v3 != 0) {
        goto LABEL_3;
      }
      goto LABEL_23;
    }
  }
  else if ((unsigned __int8)cuda_driver_4d860(
               *(__int64**)((char*)&CudaDriverRoutine_4bf0 + (_QWORD)v2),
               &v18) != 0) {
    LODWORD(v7) = v18;
    CudaDriverStub_108070_alt1((char*)&CudaDriverRoutine_4bf8 + (_QWORD)v2);
    goto LABEL_23;
  }
LABEL_12:
  LODWORD(v7) = CudaDriverRoutine_4d0d0(
      *(_QWORD*)((char*)&CudaDriverRoutine_4bf0 + (_QWORD)v2));
  v8 = (unsigned int)(2 * v7);
  if ((unsigned int)v8 <= 0x4000) {
    cuda_driver_108520((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
    v9 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_4768 + (_QWORD)v2);
    v10 = cuda_driver_8ade0((__int64)&CudaDriverRoutine_4768 + (_QWORD)v2, v8,
                            v9);
    if (v10 != 0 ||
        (v11 =
             CudaDriverStub_8b270((char*)&CudaDriverRoutine_4798 + (_QWORD)v2),
         (v10 = cuda_driver_8ade0((__int64)&CudaDriverRoutine_4798 + (_QWORD)v2,
                                  v11, v8)) != 0) ||
        (v10 = cuda_driver_8ade0((__int64)&CudaDriverRoutine_4780 + (_QWORD)v2,
                                 v8, v8)) != 0 ||
        (v10 = cuda_driver_8ade0(
             (__int64)cuda_driver_misc_helpers_4c20 + (_QWORD)v2, 1u, v8)) !=
            0 ||
        (v10 = CudaDriverRoutine_4d200(
             *(unsigned __int64**)((char*)&CudaDriverRoutine_4bf0 + (_QWORD)v2),
             v8)) != 0) {
      v3 = v10;
      LODWORD(v7) = -1;
    }
    else if (*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v2) == 1) {
      v7 = (unsigned int)(**(_DWORD**)(*(_QWORD*)(a1 + 16) + 64LL) + v7);
      v3 = CudaDriverRoutine_4d310(
          *(unsigned __int64**)((char*)&CudaDriverRoutine_4bf0 + (_QWORD)v2),
          v7);
    }
    else {
      v3 = CudaDriverRoutine_4d310(
          *(unsigned __int64**)((char*)&CudaDriverRoutine_4bf0 + (_QWORD)v2),
          (unsigned int)v7);
    }
    CudaDriverRoutine_1085d0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
    CudaDriverStub_108070_alt1((char*)&CudaDriverRoutine_4bf8 + (_QWORD)v2);
    if (v3 != 0) {
      goto LABEL_3;
    }
  LABEL_23:
    *(_DWORD*)(a1 + 348) = v7;
    v13 = (_QWORD*)(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v2] +
                    616LL * (unsigned int)v7 + 560);
    v14 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 328) = v13;
    CudaDriverRoutine_5c020(v13, *(_QWORD*)(v14 + 72), a1 + 592);
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
    cuda_driver_108520(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v2] +
                       616LL * (unsigned int)v7);
    CudaDriverRoutine_8b180((__int64)cuda_driver_misc_helpers_4c20 + (_QWORD)v2,
                            0, v7, a1);
    CudaDriverRoutine_1085d0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v2] +
                             616LL * (unsigned int)v7);
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
    return 0;
  }
  CudaDriverStub_108070_alt1((char*)&CudaDriverRoutine_4bf8 + (_QWORD)v2);
LABEL_2:
  v3 = 2;
LABEL_3:
  cuda_driver_1187c0(a1);
  return v3;
}

__int64 cuda_driver_1187c0(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  _OWORD* v3;
  void* v4;
  unsigned __int64 v5;
  int v6;
  int v7;
  int i;
  unsigned __int64 v9;

  v1 = *(unsigned int*)(result + 348);
  if ((_DWORD)v1 != -1) {
    v2 = result;
    v3 = (_OWORD*)(result + 328);
    v4 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                       (_QWORD)CudaDriverData_1422118);
    cuda_driver_108520(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v4] +
                       616LL * (unsigned int)v1);
    v5 = CudaDriverRoutine_8b200((__int64)&CudaDriverRoutine_4780 + (_QWORD)v4,
                                 v1, v1);
    CudaDriverRoutine_8b220((__int64)&CudaDriverRoutine_4780 + (_QWORD)v4, v1);
    CudaDriverRoutine_8b180((__int64)&CudaDriverRoutine_4780 + (_QWORD)v4, v1,
                            v1, v5);
    CudaDriverRoutine_8b180((__int64)cuda_driver_misc_helpers_4c20 + (_QWORD)v4,
                            0, v1, 0);
    v6 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_4768 + (_QWORD)v4);
    if (v6 != 0) {
      v7 = v6;
      for (i = 0; i != v7; ++i) {
        v9 = CudaDriverRoutine_8b200(
            (__int64)&CudaDriverRoutine_4768 + (_QWORD)v4, v1, i);
        if (v9 != 0) {
          CudaDriverRoutine_101ff0(v9);
        }
      }
    }
    CudaDriverRoutine_1085d0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v4] +
                             616LL * (unsigned int)v1);
    CudaDriverRoutine_8b220((__int64)&CudaDriverRoutine_4768 + (_QWORD)v4, v1);
    CudaDriverRoutine_1ba580(v2 + 360);
    *v3 = (__typeof__(*v3)){0};
    v3[1] = (__typeof__(v3[1])){0};
    v3[2] = (__typeof__(v3[2])){0};
    v3[3] = (__typeof__(v3[3])){0};
    v3[4] = (__typeof__(v3[4])){0};
    v3[5] = (__typeof__(v3[5])){0};
    v3[6] = (__typeof__(v3[6])){0};
    v3[7] = (__typeof__(v3[7])){0};
    v3[8] = (__typeof__(v3[8])){0};
    v3[9] = (__typeof__(v3[9])){0};
    v3[10] = (__typeof__(v3[10])){0};
    v3[11] = (__typeof__(v3[11])){0};
    v3[12] = (__typeof__(v3[12])){0};
    v3[13] = (__typeof__(v3[13])){0};
    v3[14] = (__typeof__(v3[14])){0};
    v3[15] = (__typeof__(v3[15])){0};
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v4);
    CudaDriverStub_107f90_alt1((char*)&CudaDriverRoutine_4bf8 + (_QWORD)v4);
    CudaDriverRoutine_4d790(
        *(unsigned __int64**)((char*)&CudaDriverRoutine_4bf0 + (_QWORD)v4), v1);
    CudaDriverRoutine_4d720(
        *(unsigned __int64**)((char*)&CudaDriverRoutine_4bf0 + (_QWORD)v4), v1);
    result =
        CudaDriverStub_108070_alt1((char*)&CudaDriverRoutine_4bf8 + (_QWORD)v4);
    *(_DWORD*)(v2 + 348) = -1;
  }
  return result;
}

unsigned __int64 cuda_driver_118980(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v6[25];
  unsigned int v7;

  v1 = *(_QWORD*)(a1 + 328);
  v7 = 2;
  v3 = CudaDriverRoutine_5bda0(v1);
  v4 = CudaDriverRoutine_5bd00(v1, v3);
  if (v4 == CudaDriverRoutine_5ae00(v1) && CudaDriverRoutine_5ada0(v1)) {
    CudaDriverRoutine_1ba4f0((__int64)v6,
                             *(_QWORD*)(*(_QWORD*)(a1 + 16) + 72LL));
    CudaDriverRoutine_1ba7d0((__int64)v6, a1 + 360);
    cuda_driver_1bace0(&v7, v6, 5);
    CudaDriverRoutine_1ba580((__int64)v6);
    if (v7 == 5) {
      v4 = CudaDriverRoutine_5c030(v1);
      CudaDriverRoutine_8b200((__int64)&CudaDriverRoutine_4780 +
                                  (_QWORD)CudaDriverData_1422118,
                              *(_DWORD*)(a1 + 348), *(_DWORD*)(a1 + 348));
    }
  }
  return v4;
}

__int64 cuda_driver_118a60(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a4 != 0) {
    goto LABEL_2;
  }
  v8 = a3;
  if (a3 <= 3) {
    if ((unsigned __int8)CudaDriverData_144d31c[a3] == 0) {
      do {
        if ((*(_BYTE*)(a2 + 56) & 1) != 0 ||
            *(_BYTE*)(CudaDriverRoutine_98340(a1) + v8 + 15888) == 0) {
          break;
        }
        v9 = CudaDriverRoutine_98340(a1);
        cuda_driver_1084c0(v9 + 24);
        CudaDriverStub_107f90(a2 + 24);
        if ((unsigned __int8)CudaDriverData_144d31c[v8] == 0) {
          return 1;
        }
        CudaDriverStub_108070(a2 + 24);
        v10 = CudaDriverRoutine_98340(a1);
        CudaDriverRoutine_1085b0(v10 + 24);
      } while ((unsigned __int8)CudaDriverData_144d31c[v8] == 0);
    }
    goto LABEL_2;
  }
  if ((*(_BYTE*)(a2 + 56) & 1) != 0 ||
      *(_BYTE*)(CudaDriverRoutine_98340(a1) + a3 + 15888) == 0) {
  LABEL_2:
    v5 = CudaDriverRoutine_98340(a1);
    cuda_driver_108520(v5 + 24);
    return 0;
  }
  v11 = CudaDriverRoutine_98340(a1);
  cuda_driver_1084c0(v11 + 24);
  CudaDriverStub_107f90(a2 + 24);
  return 1;
}

__int64 cuda_driver_118c20(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, unsigned int a7, char a8)
{
  __int64 v14;
  __int64 v15;
  char v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _BOOL4 v25;
  __int64 v26;

  v14 = a2;
  if (a1 != 0) {
    v15 = CudaDriverRoutine_98340(a1);
    if (v14 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v15 = 0;
  if (a2 != 0) {
  LABEL_3:
    v14 = CudaDriverRoutine_98340(v14);
  }
LABEL_4:
  if (a3 != 0) {
    a3 = CudaDriverRoutine_98340(a3);
  }
  if ((v15 == 0 || (v16 = *(_BYTE*)(v15 + a7 + 15888)) != 0) &&
      (v14 == 0 || (v16 = *(_BYTE*)(v14 + a7 + 15888)) != 0)) {
    if (a3 == 0) {
      v16 = 1;
      if (a8 != 0) {
        goto LABEL_13;
      }
      goto LABEL_26;
    }
    v16 = *(_BYTE*)(a3 + a7 + 15888) != 0;
  }
  if (a8 != 0) {
    goto LABEL_13;
  }
LABEL_26:
  if (v15 != 0) {
    v21 = v15 + 24;
  }
  else {
    v21 = 0;
  }
  if (v14 != 0) {
    v22 = v14 + 24;
  }
  else {
    v22 = 0;
  }
  if (a3 != 0) {
    v23 = a3 + 24;
  }
  else {
    v23 = 0;
  }
  v25 = a6 == a4 || a6 == a5;
  if ((v16 & 1) == 0) {
    goto LABEL_13;
  }
  if (a7 <= 3) {
    v26 = v21;
    if (a5 == a4) {
      if (v25) {
        for (; (unsigned __int8)CudaDriverData_144d31c[a7] == 0; v21 = v26) {
          if ((*(_BYTE*)(a4 + 56) & 1) != 0) {
            break;
          }
          cuda_driver_108b60(v21, v22, v23);
          CudaDriverStub_107f90(a4 + 24);
          if ((unsigned __int8)CudaDriverData_144d31c[a7] == 0) {
            return 1;
          }
          CudaDriverRoutine_119030(v15, v14, a3, a4, a5, a6, 1);
        }
      }
      else {
        for (; (unsigned __int8)CudaDriverData_144d31c[a7] == 0; v21 = v26) {
          if ((*(_BYTE*)(a4 + 56) & 1) != 0) {
            break;
          }
          cuda_driver_108b60(v21, v22, v23);
          CudaDriverStub_107f90(a4 + 24);
          CudaDriverStub_107f90(a6 + 24);
          if ((unsigned __int8)CudaDriverData_144d31c[a7] == 0) {
            return 1;
          }
          CudaDriverRoutine_119030(v15, v14, a3, a4, a5, a6, 1);
        }
      }
    }
    else if (v25) {
      for (; (unsigned __int8)CudaDriverData_144d31c[a7] == 0; v21 = v26) {
        if ((*(_BYTE*)(a4 + 56) & 1) != 0) {
          break;
        }
        cuda_driver_108b60(v21, v22, v23);
        CudaDriverStub_107f90(a4 + 24);
        CudaDriverStub_107f90(a5 + 24);
        if ((unsigned __int8)CudaDriverData_144d31c[a7] == 0) {
          return 1;
        }
        CudaDriverRoutine_119030(v15, v14, a3, a4, a5, a6, 1);
      }
    }
    else {
      for (; (unsigned __int8)CudaDriverData_144d31c[a7] == 0; v21 = v26) {
        if ((*(_BYTE*)(a4 + 56) & 1) != 0) {
          break;
        }
        cuda_driver_108b60(v21, v22, v23);
        CudaDriverStub_107f90(a4 + 24);
        CudaDriverStub_107f90(a5 + 24);
        CudaDriverStub_107f90(a6 + 24);
        if ((unsigned __int8)CudaDriverData_144d31c[a7] == 0) {
          return 1;
        }
        CudaDriverRoutine_119030(v15, v14, a3, a4, a5, a6, 1);
      }
    }
    goto LABEL_13;
  }
  if ((*(_BYTE*)(a4 + 56) & 1) != 0) {
  LABEL_13:
    if (v15 != 0) {
      v17 = v15 + 24;
    }
    else {
      v17 = 0;
    }
    if (v14 != 0) {
      v18 = v14 + 24;
    }
    else {
      v18 = 0;
    }
    if (a3 != 0) {
      v19 = a3 + 24;
    }
    else {
      v19 = 0;
    }
    cuda_driver_108620(v17, v18, v19);
    return 0;
  }
  cuda_driver_108b60(v21, v22, v23);
  CudaDriverStub_107f90(a4 + 24);
  if (a5 != a4) {
    CudaDriverStub_107f90(a5 + 24);
  }
  if (!v25) {
    CudaDriverStub_107f90(a6 + 24);
  }
  return 1;
}

__int64 cuda_driver_119300(__int64 result, _OWORD* a2, _DWORD* a3, double a4,
                           double a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  char v17;
  unsigned int v18;
  int v19;

  LODWORD(a5) = a3[6];
  v5 = *(_QWORD*)(result + 64);
  v6 = a3[8];
  v7 = *(_DWORD*)(v5 + 3732);
  v8 = *(_DWORD*)(v5 + 3736);
  v9 = (unsigned int)((double)*(unsigned __int64*)&a5 / 0x1.9000000000000p+6 *
                      (double)v7);
  if (a3[7] > v9) {
    v9 = a3[7];
  }
  *a2 = (__typeof__(*a2)){0};
  a2[1] = (__typeof__(a2[1])){0};
  if (v9 >= v6) {
    v9 = v6;
  }
  v10 = v7 - v9;
  if (v8 <= v10) {
    v11 = v10 / v8;
    if (v11 <= 1) {
      v12 = 1;
    }
    else {
      v12 = v11;
    }
    v13 = v12 & 7;
    if (v11 >= 8) {
      v15 = v12 & 0xFFFFFFF8;
      v14 = 0;
      do {
        v16 = v14 >> 5;
        v17 = v14 & 0x18;
        v14 += 8;
        *((_DWORD*)a2 + v16) |= 255 << v17;
      } while (v15 != v14);
    }
    else {
      v14 = 0;
    }
    for (; v13 != 0; *((_DWORD*)a2 + v18) |= v19) {
      v18 = v14 >> 5;
      v19 = 1 << v14++;
      --v13;
    }
  }
  return result;
}

__int64 cuda_driver_119850(__int64 result, __int64 a2)
{
  struct {
    int v2;
    char gap12_[4];
    __int64 v3;
    __int64 v4;
  } v2_;

  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_14321e0) !=
      0) {
    v2_.v3 = result;
    v2_.v4 = a2;
    v2_.v2 = 24;
    return cuda_driver_20b420(0x16u, 2u, (__int64)&v2_.v2);
  }
  return result;
}

__int64 cuda_driver_1198a0(__int64 a1, int* a2)
{
  __int64 result;
  void* v5;

  if (*a2 == 0) {
    return 0;
  }
  result =
      cuda_driver_12ea60((atomic_uint*)(a1 + 576),
                         (__int64 (*)(__int64))CudaDriverData_14232e0[0], a1);
  if ((_DWORD)result == 0) {
    v5 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                       (_QWORD)CudaDriverData_1422118);
    CudaDriverRoutine_8b8a0((__int64)&CudaDriverRoutine_4780 + (_QWORD)v5,
                            *(_DWORD*)(a1 + 348), a2);
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v5);
    return 0;
  }
  return result;
}

int* cuda_driver_119b20(int* result, __int64 a2)
{
  int* v3;
  __int64 v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  struct {
    __int128 v9;
    __int128 v10;
    __int128 v11;
  } v9_;

  if (*(_DWORD*)((char*)((__int64*)0x10LL) + (_QWORD)CudaDriverData_1432140) !=
      0) {
    v3 = result;
    v9_.v10 = (__typeof__(v9_.v10)){0};
    v9_.v11 = (__typeof__(v9_.v11)){0};
    v9_.v9 = (__typeof__(v9_.v9)){0};
    LODWORD(v9_.v9) = 48;
    v4 = CudaDriverRoutine_98340((__int64)result);
    v5 = *(_DWORD*)(a2 + 60);
    v6 = *(_DWORD*)(a2 + 64);
    *((_QWORD*)&v9_.v9 + 1) = v4;
    *(_QWORD*)&v9_.v10 = a2;
    *((_QWORD*)&v9_.v10 + 1) = __PAIR64__(v5, v6);
    v7 = cuda_driver_9b560(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 64LL), v5, 0);
    v8 = *v3;
    LODWORD(v9_.v11) = v7;
    if (v8 == 1) {
      *((_QWORD*)&v9_.v11 + 1) = v3;
    }
    return (int*)cuda_driver_20b420(2u, 4u, (__int64)&v9_.v9);
  }
  return result;
}

__int64 cuda_driver_119d60(__int64 a1)
{
  int v2;
  __int64 v4;
  void* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 (*v9)(__int64, __int64);
  __int64 v10;
  int v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int* v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;

  v21 = 0;
  v2 = CudaDriverRoutine_121c60(&v21);
  *(_DWORD*)(a1 + 68) = v2;
  if (v2 != 0) {
    CudaDriverRoutine_12e4f0((_QWORD*)(a1 + 56));
    if (*(_DWORD*)(a1 + 68) != 0) {
      return 1;
    }
  }
  else {
    CudaDriverRoutine_121b30(v21, 0);
    CudaDriverRoutine_12e4f0((_QWORD*)(a1 + 56));
    if (*(_DWORD*)(a1 + 68) != 0) {
      return 1;
    }
  }
  CudaDriverRoutine_12e4c0((_QWORD*)(a1 + 48));
  CudaDriverStub_107f90(a1 + 32);
  v4 = *(_QWORD*)a1;
  if (*(_QWORD*)a1 != 0) {
    v5 = CudaDriverData_1422118;
    while (*(_QWORD*)(a1 + 8) == v4) {
      *(_QWORD*)(a1 + 8) = *(_QWORD*)(v4 + 440);
      v6 = *(_QWORD*)(v4 + 448);
      *(_QWORD*)a1 = v6;
      if (v6 != 0) {
        goto LABEL_11;
      }
    LABEL_12:
      *(_QWORD*)(v4 + 440) = 0;
      *(_QWORD*)(v4 + 448) = 0;
      CudaDriverStub_108070(a1 + 32);
      v7 = *(_DWORD*)(v4 + 320);
      v8 = *(_QWORD*)(*(_QWORD*)(v4 + 32) + 16LL);
      v9 = *(__int64 (**)(__int64, __int64))(*(_QWORD*)(v8 + 64) + 21152LL);
      v10 = CudaDriverRoutine_98340(v8);
      v11 = v9(v10, 1);
      if (v11 != 0) {
        *(_DWORD*)(v4 + 320) = v11;
      }
      v12 = *(_QWORD*)(v4 + 328);
      if (v12 != 0) {
        v13 = CudaDriverRoutine_12a1d0(v12);
        if (v13 != 0) {
          *(_DWORD*)(v4 + 320) = v13;
        }
      }
      if (*(_DWORD*)(v4 + 40) != 0) {
        cuda_driver_1142a0((unsigned int*)(v4 + 40), 0, 0);
      }
      if (*((_BYTE*)&CudaDriverRoutine_7468 + (_QWORD)v5) != 0) {
        if (*(_DWORD*)v4 == 0) {
          goto LABEL_26;
        }
      }
      else {
        v14 = CudaDriverRoutine_98340(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 16LL));
        CudaDriverRoutine_11ccb0(v14, 1u);
        if (*(_DWORD*)v4 == 0) {
        LABEL_26:
          (*(void (**)(_QWORD, _QWORD, _QWORD))(v4 + 8))(
              *(_QWORD*)(v4 + 24), *(unsigned int*)(v4 + 320),
              *(_QWORD*)(v4 + 344));
          goto LABEL_27;
        }
      }
      if (*(_DWORD*)(v4 + 320) == 0) {
        (*(void (**)(_QWORD))(v4 + 8))(*(_QWORD*)(v4 + 344));
      }
    LABEL_27:
      v15 = *(_QWORD*)(v4 + 336);
      if (v15 != 0) {
        CudaDriverRoutine_12a1d0(v15);
      }
      if (*(_BYTE*)(v4 + 352) != 0) {
        v16 = CudaDriverRoutine_98340(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 16LL));
        cuda_driver_204700(v16, (_QWORD*)(v4 + 360), *(_DWORD*)(v4 + 424));
      }
      CudaDriverStub_107f90(*(_QWORD*)(v4 + 32) + 1144LL);
      v17 = *(_QWORD*)(v4 + 432);
      if (v17 != 0) {
        v20 = 4;
        CudaDriverStub_1388f0(v17, &v20);
        if (v20 == 5 ||
            (v18 = (unsigned int*)CudaDriverRoutine_5e970(
                 *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 16LL) + 72LL)),
             (v7 = CudaDriverRoutine_138810(v18, *(_QWORD*)(v4 + 432))) != 0)) {
          CudaDriverRoutine_138910(*(_QWORD*)(v4 + 432), v7);
        }
        *(_QWORD*)(v4 + 432) = 0;
      }
      v19 = *(_QWORD*)(v4 + 32);
      if (v4 == *(_QWORD*)(v19 + 1160)) {
        *(_QWORD*)(v19 + 1160) = 0;
        CudaDriverStub_108070(*(_QWORD*)(v4 + 32) + 1144LL);
        if (*(_DWORD*)v4 == 0) {
        LABEL_40:
          if (atomic_fetch_add((atomic_uint* volatile)(v4 + 456), 0xFFFFFFFF) !=
              1) {
            goto LABEL_8;
          }
        }
      }
      else {
        CudaDriverStub_108070(v19 + 1144);
        if (*(_DWORD*)v4 == 0) {
          goto LABEL_40;
        }
      }
      CudaDriverRoutine_12e340(v4);
    LABEL_8:
      CudaDriverRoutine_12e4c0((_QWORD*)(a1 + 48));
      CudaDriverStub_107f90(a1 + 32);
      v4 = *(_QWORD*)a1;
      if (*(_QWORD*)a1 == 0) {
        goto LABEL_42;
      }
    }
    v6 = *(_QWORD*)(v4 + 448);
    *(_QWORD*)a1 = v6;
    if (v6 == 0) {
      goto LABEL_12;
    }
  LABEL_11:
    *(_QWORD*)(v6 + 440) = 0;
    goto LABEL_12;
  }
LABEL_42:
  CudaDriverStub_108070(a1 + 32);
  return 0;
}

__int64 cuda_driver_11a410(__int64 a1, __int64 a2, __int64 a3, int a4, char a5,
                           __int64* a6)
{
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  unsigned int v17;
  __int64 v18;
  struct {
    int v19;
    char gap12_[4];
    __int64 v20;
    __int64 v21;
  } v19_;

  v12 = CudaDriverStub_12e330(768);
  if (v12 == 0) {
    return 2;
  }
  v13 = v12;
  memset_plt(v12, 0, 768);
  *(_QWORD*)v13 = a1;
  *(_QWORD*)(v13 + 8) = a2;
  *(_DWORD*)(v13 + 16) = a4;
  *(_BYTE*)(v13 + 517) = a5;
  *(_DWORD*)(v13 + 96) = 1;
  *(_DWORD*)(v13 + 104) = 1;
  *(_DWORD*)(v13 + 184) = 1;
  *(_DWORD*)(v13 + 512) = -1;
  *(_BYTE*)(v13 + 516) = 1;
  if (a3 != 0) {
    v14 = CudaDriverRoutine_12ec20(a3);
    *(_QWORD*)(v13 + 24) = v14;
    if (v14 == 0) {
      v17 = 2;
    LABEL_18:
      CudaDriverRoutine_12e340(v13);
      return v17;
    }
    a2 = *(_QWORD*)(v13 + 8);
  }
  if (a2 == 0) {
    *(_QWORD*)(v13 + 200) = *(_QWORD*)(a1 + 2032);
    *(_QWORD*)(a1 + 2032) = v13;
    v15 = *(_QWORD*)(v13 + 200);
    if (v15 == 0) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  *(_QWORD*)(v13 + 200) = *(_QWORD*)(a2 + 248);
  *(_QWORD*)(a2 + 248) = v13;
  v15 = *(_QWORD*)(v13 + 200);
  if (v15 != 0) {
  LABEL_7:
    *(_QWORD*)(v15 + 192) = v13;
  }
LABEL_8:
  *a6 = v13;
  if (*(_DWORD*)(*(_QWORD*)v13 + 188LL) != 3 &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x6CLL) + (_QWORD)CudaDriverData_1432140) !=
          0) {
    v19_.v20 = a1;
    v19_.v21 = v13;
    v19_.v19 = 24;
    cuda_driver_20b420(2u, 0x1Bu, (__int64)&v19_.v19);
  }
  result = CudaDriverRoutine_209520(*(_QWORD*)(*(_QWORD*)(a1 + 2112) + 104LL));
  if ((_DWORD)result != 0) {
    v17 = result;
    v18 = *(_QWORD*)(v13 + 24);
    if (v18 != 0) {
      CudaDriverRoutine_12e340(v18);
    }
    goto LABEL_18;
  }
  return result;
}

__int64 cuda_driver_11a580(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    int v11;
    char gap12_[4];
    __int64 v12;
    _QWORD* v13;
  } v11_;

  v1 = *a1;
  if (*(_DWORD*)(*a1 + 188LL) != 3 &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x70LL) + (_QWORD)CudaDriverData_1432140) !=
          0) {
    v11_.v12 = *a1;
    v11_.v13 = a1;
    v11_.v11 = 24;
    cuda_driver_20b420(2u, 0x1Cu, (__int64)&v11_.v11);
    v1 = *a1;
  }
  v3 = *(_QWORD**)(v1 + 2112);
  if (v3 != nullptr) {
    CudaDriverRoutine_2087f0(v3, (__int64)a1);
    CudaDriverRoutine_2095d0(*(_QWORD*)(*(_QWORD*)(*a1 + 2112LL) + 104LL));
  }
  v4 = a1[3];
  if (v4 != 0) {
    CudaDriverRoutine_12e340(v4);
    a1[3] = 0;
  }
  CudaDriverRoutine_8a7f0((__int64)a1);
  for (i = a1[22]; i != 0; i = a1[22]) {
    cuda_driver_checks_bada0(i);
  }
  v6 = a1[24];
  v7 = a1[25];
  if (v7 != 0) {
    *(_QWORD*)(v7 + 192) = v6;
  }
  if (v6 != 0) {
    *(_QWORD*)(v6 + 200) = a1[25];
  }
  else {
    v8 = a1[1];
    v9 = a1[25];
    if (v8 != 0) {
      *(_QWORD*)(v8 + 248) = v9;
    }
    else {
      *(_QWORD*)(*a1 + 2032LL) = v9;
    }
  }
  return CudaDriverRoutine_12e340((__int64)a1);
}

__int64 cuda_driver_11bd80(_QWORD* a1)
{
  int* v1;
  __int64 result;
  __int64* v3;
  __int64 v4;
  bool v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[2];
  __int64 v13;

  v1 = (int*)a1[8];
  v11 = 0;
  if ((unsigned int)(v1[791] + 10 * v1[790]) < 0x23) {
    return 0;
  }
  v3 = a1 + 310;
  v4 = -109;
  v13 = 0;
  while (1) {
    v7 = (_BYTE*)*(v3 - 2);
    if (v7 != nullptr && *v7 == 95 &&
        (unsigned int)strcmp_plt("__cuda_syscall_cnpExit", v7) == 0) {
      break;
    }
    v6 = __CFADD__(v4++, 1);
    v3 += 13;
    if (v6) {
      goto LABEL_14;
    }
  }
  if ((*((_BYTE*)((_UNKNOWN*)0x1484LL) + (_QWORD)CudaDriverData_1422118) & 2) !=
          0 ||
      v4 != -103 || v1[4266] != 0) {
    v8 = *v3;
    v9 = cuda_driver_8c000(5, v1[788], v1[789]);
    if (v9 != 0) {
      v10 = v9;
      v12[0] = "at_exit_function";
      v12[1] = (*(__int64 (**)(__int64))(a1[8] + 18872LL))(v8);
      if ((unsigned int)CudaDriverRoutine_1059a0((__int64)a1, &v13, v10, 4,
                                                 (__int64)v12, 1, 1) == 0) {
        a1[298] = v13;
      }
    }
  }
LABEL_14:
  result = cuda_driver_checks_bae90(a1[298], (__int64)"generic_entry", &v11);
  if ((_DWORD)result == 0) {
    a1[299] = (*(__int64 (**)(__int64))(a1[8] + 18872LL))(v11);
    return 0;
  }
  return result;
}

__int64 cuda_driver_11c740(__int64 result, __int64 a2, char a3, int8x16_t* a4,
                           _BYTE* a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v9;
  int8x16_t v10;
  char v11;
  unsigned __int16 v12;
  int8x16_t v13;
  __int64 v14;
  _QWORD* v15;
  __int128 v16;
  unsigned __int16 v17;
  _QWORD* v18;
  int8x16_t v21;
  int8x16_t v22;
  struct {
    __int128 v23;
    __int128 v24;
    __int128 v25;
    int8x16_t v26;
  } v23_;

  v5 = *(_QWORD*)(result + 64);
  if (*(_DWORD*)(v5 + 3732) != 0) {
    v6 = a2 + 81920;
    v9 = result;
    if (a3 != 0) {
      v10 = (__typeof__(v10)){0};
      v11 = 0;
      v12 = 0;
      while (1) {
        v21 = v10;
        v15 = (_QWORD*)(a2 + 320LL * v12);
        v23_.v23 = (__typeof__(v23_.v23)){0};
        v23_.v24 = (__typeof__(v23_.v24)){0};
        v23_.v25 = (__typeof__(v23_.v25)){0};
        v23_.v26 = (__typeof__(v23_.v26)){0};
        result = CudaDriverRoutine_11c520(v9, v12, v15, a3, &v23_.v23);
        if (v23_.v24 == 0) {
          if (v23_.v25 == 0) {
            goto LABEL_9;
          }
        }
        else {
          *(_BYTE*)(v6 + 4) = 1;
          if (v23_.v25 == 0) {
          LABEL_9:
            v16 = v23_.v23;
            if ((_QWORD)v23_.v23 == v15[2]) {
              goto LABEL_4;
            }
            goto LABEL_13;
          }
        }
        *(_BYTE*)(v6 + 5) = 1;
        v16 = v23_.v23;
        if ((_QWORD)v23_.v23 == v15[2]) {
        LABEL_4:
          if (*((_QWORD*)&v16 + 1) != v15[3]) {
            v11 = 1;
          }
          goto LABEL_6;
        }
      LABEL_13:
        v11 = 1;
      LABEL_6:
        v13 = v23_.v26;
        ++v12;
        v14 = v15[5] | *((_QWORD*)&v16 + 1);
        v15[4] |= v16;
        v15[5] = v14;
        v10 = vorrq_s8(v13, v21);
        if (*(_DWORD*)(v5 + 3732) <= (unsigned int)v12) {
          goto LABEL_15;
        }
      }
    }
    v10 = (__typeof__(v10)){0};
    v11 = 0;
    v17 = 0;
    while (1) {
      v22 = v10;
      v18 = (_QWORD*)(a2 + 320LL * v17);
      v23_.v23 = (__typeof__(v23_.v23)){0};
      v23_.v24 = (__typeof__(v23_.v24)){0};
      v23_.v25 = (__typeof__(v23_.v25)){0};
      v23_.v26 = (__typeof__(v23_.v26)){0};
      result = CudaDriverRoutine_11c520(v9, v17, v18, 0, &v23_.v23);
      if (v23_.v24 == 0) {
        if (v23_.v25 == 0) {
          goto LABEL_27;
        }
      }
      else {
        *(_BYTE*)(v6 + 4) = 1;
        if (v23_.v25 == 0) {
        LABEL_27:
          if ((_QWORD)v23_.v23 == v18[2]) {
            goto LABEL_22;
          }
          goto LABEL_31;
        }
      }
      *(_BYTE*)(v6 + 5) = 1;
      if ((_QWORD)v23_.v23 == v18[2]) {
      LABEL_22:
        if (*((_QWORD*)&v23_.v23 + 1) != v18[3]) {
          v11 = 1;
        }
        goto LABEL_24;
      }
    LABEL_31:
      v11 = 1;
    LABEL_24:
      ++v17;
      v10 = vorrq_s8(v23_.v26, v22);
      if (*(_DWORD*)(v5 + 3732) <= (unsigned int)v17) {
        goto LABEL_15;
      }
    }
  }
  v11 = 0;
  v10 = (__typeof__(v10)){0};
LABEL_15:
  if (a4 != nullptr) {
    *a4 = v10;
  }
  if (a5 != nullptr && v11 != 0) {
    *a5 = 1;
  }
  return result;
}

__int64 cuda_driver_11d110(__int64 a1, unsigned int a2, _QWORD* a3)
{
  if ((*((_BYTE*)((_UNKNOWN*)0x1484LL) + (_QWORD)CudaDriverData_1422118) & 2) !=
          0 ||
      a2 != 6 || *(_DWORD*)(*(_QWORD*)(a1 + 64) + 17064LL) != 0) {
    *a3 = *(_QWORD*)(a1 + 104LL * a2 + 2480);
    return 0;
  }
  else {
    *a3 = 0;
    return 500;
  }
}

__int64 cuda_driver_11d180(__int64 a1, unsigned __int8* a2, _QWORD* a3)
{
  __int64* v3;
  __int64 v4;
  bool v8;
  unsigned __int8* v9;
  __int64 v10;
  __int64 result;

  v3 = (__int64*)(a1 + 2480);
  v4 = -109;
  while (1) {
    v9 = (unsigned __int8*)*(v3 - 2);
    if (v9 != nullptr && *a2 == *v9 && (unsigned int)strcmp_plt(a2, v9) == 0) {
      break;
    }
    v8 = __CFADD__(v4++, 1);
    v3 += 13;
    if (v8) {
      goto LABEL_9;
    }
  }
  if ((*((_BYTE*)((_UNKNOWN*)0x1484LL) + (_QWORD)CudaDriverData_1422118) & 2) ==
          0 &&
      v4 == -103 && *(_DWORD*)(*(_QWORD*)(a1 + 64) + 17064LL) == 0) {
  LABEL_9:
    v10 = 0;
    result = 500;
    goto LABEL_10;
  }
  v10 = *v3;
  result = 0;
LABEL_10:
  *a3 = v10;
  return result;
}

__int64 cuda_driver_11d250(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 result;
  __int64 v4;
  __int64 v5;

  if ((*((_BYTE*)((_UNKNOWN*)0x1484LL) + (_QWORD)CudaDriverData_1422118) & 2) !=
          0 ||
      a2 != 6 || *(_DWORD*)(*(_QWORD*)(a1 + 64) + 17064LL) != 0) {
    v4 = a1 + 104LL * a2;
    v5 = *(_QWORD*)(v4 + 2496);
    result = 0;
    if (v5 == 0) {
      v5 = *(_QWORD*)(v4 + 2488);
    }
    *a3 = v5;
  }
  else {
    *a3 = 0;
    return 500;
  }
  return result;
}

__int64 cuda_driver_11d2c0(__int64 a1, unsigned __int8* a2, _QWORD* a3)
{
  __int64* v3;
  __int64 v4;
  bool v8;
  unsigned __int8* v9;
  __int64 v10;
  __int64 result;

  v3 = (__int64*)(a1 + 2496);
  v4 = -109;
  while (1) {
    v9 = (unsigned __int8*)*(v3 - 4);
    if (v9 != nullptr && *a2 == *v9 && (unsigned int)strcmp_plt(a2, v9) == 0) {
      break;
    }
    v8 = __CFADD__(v4++, 1);
    v3 += 13;
    if (v8) {
      goto LABEL_9;
    }
  }
  if ((*((_BYTE*)((_UNKNOWN*)0x1484LL) + (_QWORD)CudaDriverData_1422118) & 2) ==
          0 &&
      v4 == -103 && *(_DWORD*)(*(_QWORD*)(a1 + 64) + 17064LL) == 0) {
  LABEL_9:
    v10 = 0;
    result = 500;
    goto LABEL_10;
  }
  v10 = *v3;
  if (*v3 == 0) {
    v10 = *(v3 - 1);
  }
  result = 0;
LABEL_10:
  *a3 = v10;
  return result;
}

__int64 cuda_driver_11d3a0(__int64 a1, unsigned int a2, _QWORD* a3)
{
  if ((*((_BYTE*)((_UNKNOWN*)0x1484LL) + (_QWORD)CudaDriverData_1422118) & 2) !=
          0 ||
      a2 != 6 || *(_DWORD*)(*(_QWORD*)(a1 + 64) + 17064LL) != 0) {
    *a3 = *(_QWORD*)(a1 + 104LL * a2 + 2488);
    return 0;
  }
  else {
    *a3 = 0;
    return 500;
  }
}

__int64 cuda_driver_11d400(__int64 a1, unsigned __int8* a2, _QWORD* a3)
{
  __int64* v3;
  __int64 v4;
  bool v8;
  unsigned __int8* v9;
  __int64 v10;
  __int64 result;

  v3 = (__int64*)(a1 + 2488);
  v4 = -109;
  while (1) {
    v9 = (unsigned __int8*)*(v3 - 3);
    if (v9 != nullptr && *a2 == *v9 && (unsigned int)strcmp_plt(a2, v9) == 0) {
      break;
    }
    v8 = __CFADD__(v4++, 1);
    v3 += 13;
    if (v8) {
      goto LABEL_9;
    }
  }
  if ((*((_BYTE*)((_UNKNOWN*)0x1484LL) + (_QWORD)CudaDriverData_1422118) & 2) ==
          0 &&
      v4 == -103 && *(_DWORD*)(*(_QWORD*)(a1 + 64) + 17064LL) == 0) {
  LABEL_9:
    v10 = 0;
    result = 500;
    goto LABEL_10;
  }
  v10 = *v3;
  result = 0;
LABEL_10:
  *a3 = v10;
  return result;
}

__int64 cuda_driver_11e8e0(__int64 a1, __int64 a2, __int64 a3, int a4, char a5,
                           __int64* a6, int a7)
{
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  unsigned int v19;
  __int64 v20;
  struct {
    int v21;
    char gap12_[4];
    __int64 v22;
    __int64 v23;
  } v21_;

  v14 = CudaDriverStub_12e330(1024);
  if (v14 == 0) {
    return 2;
  }
  v15 = v14;
  memset_plt(v14, 0, 1024);
  *(_DWORD*)(v15 + 32) = a7;
  *(_QWORD*)v15 = a2;
  *(_QWORD*)(v15 + 8) = a1;
  *(_DWORD*)(v15 + 16) = a4;
  *(_QWORD*)(v15 + 104) = 0;
  *(_QWORD*)(v15 + 112) = 0;
  *(_DWORD*)(v15 + 120) = 0;
  *(_BYTE*)(v15 + 873) = a5;
  *(_DWORD*)(v15 + 272) = 1;
  *(_BYTE*)(v15 + 872) = 1;
  *(_QWORD*)(v15 + 264) = 0x100000001LL;
  *(_DWORD*)(v15 + 868) = -1;
  *(_QWORD*)(v15 + 96) = 0x100000020LL;
  if (a3 != 0) {
    v16 = CudaDriverRoutine_12ec20(a3);
    *(_QWORD*)(v15 + 24) = v16;
    if (v16 == 0) {
      v19 = 2;
    LABEL_18:
      CudaDriverRoutine_12e340(v15);
      return v19;
    }
    a2 = *(_QWORD*)v15;
  }
  if (a2 == 0) {
    *(_QWORD*)(v15 + 912) = *(_QWORD*)(a1 + 2024);
    *(_QWORD*)(a1 + 2024) = v15;
    v17 = *(_QWORD*)(v15 + 912);
    if (v17 == 0) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  *(_QWORD*)(v15 + 912) = *(_QWORD*)(a2 + 240);
  *(_QWORD*)(a2 + 240) = v15;
  v17 = *(_QWORD*)(v15 + 912);
  if (v17 != 0) {
  LABEL_7:
    *(_QWORD*)(v17 + 904) = v15;
  }
LABEL_8:
  *a6 = v15;
  if (*(_DWORD*)(*(_QWORD*)(v15 + 8) + 188LL) != 3 &&
      *(_DWORD*)((char*)((__int64*)0x30LL) + (_QWORD)CudaDriverData_1432140 +
                 4) != 0) {
    v21_.v22 = a1;
    v21_.v23 = v15;
    v21_.v21 = 24;
    cuda_driver_20b420(2u, 0xDu, (__int64)&v21_.v21);
  }
  result = CudaDriverRoutine_209520(*(_QWORD*)(*(_QWORD*)(a1 + 2112) + 104LL));
  if ((_DWORD)result != 0) {
    v19 = result;
    v20 = *(_QWORD*)(v15 + 24);
    if (v20 != 0) {
      CudaDriverRoutine_12e340(v20);
    }
    goto LABEL_18;
  }
  return result;
}

__int64 cuda_driver_11ea60(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    int v10;
    char gap12_[4];
    __int64 v11;
    _QWORD* v12;
  } v10_;

  v1 = a1[1];
  if (*(_DWORD*)(v1 + 188) != 3 &&
      *(_DWORD*)((char*)((__int64*)0x38LL) + (_QWORD)CudaDriverData_1432140) !=
          0) {
    v10_.v11 = a1[1];
    v10_.v12 = a1;
    v10_.v10 = 24;
    cuda_driver_20b420(2u, 0xEu, (__int64)&v10_.v10);
    v1 = a1[1];
  }
  v3 = *(_QWORD**)(v1 + 2112);
  if (v3 != nullptr) {
    CudaDriverRoutine_208000(v3, (__int64)a1);
    CudaDriverRoutine_2095d0(*(_QWORD*)(*(_QWORD*)(a1[1] + 2112LL) + 104LL));
  }
  CudaDriverRoutine_8a6e0((__int64)a1);
  v4 = a1[3];
  if (v4 != 0) {
    CudaDriverRoutine_12e340(v4);
  }
  while (1) {
    v5 = a1[112];
    if (v5 == 0) {
      break;
    }
    cuda_driver_checks_bada0(v5);
  }
  v6 = a1[114];
  v7 = a1[113];
  if (v6 != 0) {
    *(_QWORD*)(v6 + 904) = v7;
  }
  if (v7 != 0) {
    *(_QWORD*)(v7 + 912) = a1[114];
  }
  else {
    v8 = a1[114];
    if (*a1 != 0) {
      *(_QWORD*)(*a1 + 240LL) = v8;
    }
    else {
      *(_QWORD*)(a1[1] + 2024LL) = v8;
    }
  }
  return CudaDriverRoutine_12e340((__int64)a1);
}

float cuda_driver_11f820(_BYTE* a1, float* a2, double a3, double a4, double a5)
{
  float v5;
  float v7;
  float* v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float* v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float result;

  v5 = *a2;
  if (*a2 <= 0x1.0000000000000p+0f) {
    a5 = 0x0.0p+0;
    if (v5 > 0x0.0p+0f) {
      if (v5 >= 0x1.9a5c380000000p-9f) {
        v8 = a2;
        v9 = pow_plt(v5, 0x1.aaa8ec0000000p-2, 0x0.0p+0);
        a2 = v8;
        v7 = (float)(v9 * 0x1.0e147a0000000p+0f) + -0x1.c28f5c0000000p-5f;
      }
      else {
        v7 = v5 * 0x1.9d70a40000000p+3f;
      }
      v10 = (float)(v7 * 0x1.fe00000000000p+7f) + 0x1.8000000000000p+23f;
      *(float*)&a5 = (float)LOBYTE(v10);
    }
  }
  else {
    LODWORD(a5) = 1132396544;
  }
  v11 = 0x1.fe00000000000p+7f;
  v12 = *(float*)&a5 / 0x1.fe00000000000p+7f;
  LODWORD(a5) = 1262485504;
  *a1 = COERCE_UNSIGNED_INT((float)(v12 * 0x1.fe00000000000p+7f) +
                            0x1.8000000000000p+23f);
  v13 = a2[1];
  if (v13 <= 0x1.0000000000000p+0f) {
    v11 = 0x0.0p+0f;
    if (v13 > 0x0.0p+0f) {
      if (v13 >= 0x1.9a5c380000000p-9f) {
        v15 = a2;
        v16 = pow_plt(v13, 0x1.aaa8ec0000000p-2, a5);
        a2 = v15;
        v14 = (float)(v16 * 0x1.0e147a0000000p+0f) + -0x1.c28f5c0000000p-5f;
      }
      else {
        v14 = v13 * 0x1.9d70a40000000p+3f;
      }
      v17 = (float)(v14 * 0x1.fe00000000000p+7f) + 0x1.8000000000000p+23f;
      v11 = (float)LOBYTE(v17);
    }
  }
  v18 = 0x1.fe00000000000p+7f;
  LODWORD(a5) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  a1[1] = COERCE_UNSIGNED_INT(
      (float)((float)(v11 / 0x1.fe00000000000p+7f) * 0x1.fe00000000000p+7f) +
      0x1.8000000000000p+23f);
  v19 = a2[2];
  if (v19 <= 0x1.0000000000000p+0f) {
    v18 = 0x0.0p+0f;
    if (v19 > 0x0.0p+0f) {
      if (v19 >= 0x1.9a5c380000000p-9f) {
        v21 = pow_plt(v19, 0x1.aaa8ec0000000p-2, a5);
        v20 = (float)(v21 * 0x1.0e147a0000000p+0f) + -0x1.c28f5c0000000p-5f;
      }
      else {
        v20 = v19 * 0x1.9d70a40000000p+3f;
      }
      v22 = (float)(v20 * 0x1.fe00000000000p+7f) + 0x1.8000000000000p+23f;
      v18 = (float)LOBYTE(v22);
    }
  }
  result =
      (float)((float)(v18 / 0x1.fe00000000000p+7f) * 0x1.fe00000000000p+7f) +
      0x1.8000000000000p+23f;
  a1[2] = LOBYTE(result);
  return result;
}

__int64 cuda_driver_120770(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v13;
  __int64 result;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 (*v22)(__int64*, __int64, __int64, __int64);
  unsigned int v23;
  int v24;
  struct {
    int v25;
    char gap4_[4];
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v25_;

  v6 = *(_QWORD*)(a3 + 32);
  if (v6 != a4) {
    ((void (*)(__int64, __int64, __int64, __int64))CudaDriverRoutine_120560)(
        a1, a4, a5, a3);
  }
  v13 = *(_QWORD*)(v6 + 1120);
  if (v13 == 0) {
    return 0;
  }
  if (**(_QWORD**)(*(_QWORD*)(v6 + 32) + 504LL) == 1) {
    if (*(_QWORD*)(v13 + 48) == 0 && *(_QWORD*)(v13 + 40) == 0) {
      return 0;
    }
    if (v6 == a4) {
      if (*(_QWORD*)(v13 + 40) == 0) {
        return 0;
      }
      goto LABEL_22;
    }
  LABEL_11:
    result = CudaDriverRoutine_1209a0(a1, a2, a3, a6);
    goto LABEL_12;
  }
  if (v6 != a4) {
    goto LABEL_11;
  }
LABEL_22:
  if (*(_BYTE*)(a3 + 90) == 0) {
    return 0;
  }
  if (a5 == 0) {
    return 999;
  }
  v18 = *(_QWORD*)(a3 + 464);
  if ((*(_BYTE*)(a3 + 456) & 1) != 0) {
    memcpy_plt(a5, v18, *(unsigned int*)(a3 + 460));
  }
  else {
    CudaDriverRoutine_bc880(v6, v18, a5);
  }
  v20 = *(_QWORD*)(a3 + 168);
  CudaDriverStub_107f90(a6 + 24);
  v21 = *(_QWORD*)(v6 + 32);
  if (**(_QWORD**)(v21 + 504) != 1) {
    CudaDriverStub_108070(a6 + 24);
    return 999;
  }
  v22 = *(__int64 (**)(__int64*, __int64, __int64, __int64))(
      *(_QWORD*)(v6 + 1120) + 40LL);
  if (v22 != nullptr) {
    v23 = v22(&CudaDriverData_1412140, v21 + 520, v20 + 40, a5);
    CudaDriverStub_108070(a6 + 24);
    result = v23;
    if (v23 != 0) {
      return result;
    }
  }
  else {
    CudaDriverStub_108070(a6 + 24);
  }
  result = 0;
  *(_BYTE*)(a3 + 456) |= 3u;
  v24 = *(_DWORD*)(v6 + 240);
  *(_QWORD*)(a3 + 464) = a5;
  *(_DWORD*)(a3 + 460) = v24;
  *(_DWORD*)(a3 + 120) = 0;
  *(_DWORD*)(a3 + 124) = v24;
LABEL_12:
  if (*(_DWORD*)(a1 + 188) == 3) {
    v15 = 21;
  }
  else {
    v15 = 19;
  }
  if (*(_DWORD*)(a1 + 188) == 3) {
    v16 = 0;
  }
  else {
    v16 = 24;
  }
  if (*(_DWORD*)(CudaDriverData_1432130[v15] + 4LL * v16) != 0) {
    v25_.v25 = 32;
    if (a2 != 0 && *(_BYTE*)(a2 + 415) != 0) {
      v17 = result;
      a2 = *(_QWORD*)(*(_QWORD*)(a2 + 424) + 96LL);
    }
    else {
      v17 = result;
    }
    v19 = *(_QWORD*)(a3 + 464);
    v25_.v26 = a2;
    v25_.v27 = a3;
    v25_.v28 = v19;
    cuda_driver_20b420(v15, v16, (__int64)&v25_.v25);
    return v17;
  }
  return result;
}

#pragma GCC visibility pop
