#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_1afd20(_DWORD*, __int64, __int64, __int64);
_QWORD* CudaDriverRoutine_1dc5c0(_QWORD*, unsigned __int64, unsigned __int64,
                                 __int64, char);
_QWORD* CudaDriverRoutine_208af0(_QWORD* result, _QWORD*, _QWORD*);
_QWORD* CudaDriverRoutine_208ba0(_QWORD* result, unsigned int, unsigned int,
                                 _QWORD*, _QWORD*);
__attribute__((swiftcall)) void cuda_driver_112e10(PSEUDO_X8, __int64,
                                                   unsigned int);
__int64 CudaDriverRoutine_101f00(__int64);
__int64 CudaDriverRoutine_101ff0(__int64);
__int64 CudaDriverRoutine_103e40(__int64, __int64, __int64*, __int64, char,
                                 __int64*);
__int64 CudaDriverRoutine_104cd0(__int64, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_105220(__int64 result);
__int64 CudaDriverRoutine_105570(_QWORD*, unsigned __int64, __int64*,
                                 unsigned __int64*, unsigned __int64);
__int64 CudaDriverRoutine_107f40(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_107f60(_QWORD*);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_1090(__int64);
__int64 CudaDriverRoutine_10a2a0(__int64, __int64, unsigned int*, unsigned int,
                                 __int64, _DWORD*, char*, _DWORD*, _DWORD*,
                                 _DWORD*);
__int64 CudaDriverRoutine_10b6e0(__int64 result, int*, unsigned int, int,
                                 unsigned int, _DWORD*);
__int64 CudaDriverRoutine_1174d0(__int64);
__int64 CudaDriverRoutine_118bc0(__int64, __int64, char);
__int64 CudaDriverRoutine_1195c0(__int64, _OWORD*);
__int64 CudaDriverRoutine_11cce0(__int64, _QWORD*);
__int64 CudaDriverRoutine_11fc40(int*, char, int, char);
__int64 CudaDriverRoutine_120f80(__int64 result, __int64, __int64, __int64);
__int64 CudaDriverRoutine_1216a0(__int64);
__int64 CudaDriverRoutine_125cf0(int, __int64, __int64, __int64*);
__int64 CudaDriverRoutine_126ed0(__int64, unsigned __int64*);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_13b30(__int64);
__int64 CudaDriverRoutine_15d80(__int64);
__int64 CudaDriverRoutine_15fd0(__int64);
__int64 CudaDriverRoutine_162c0(__int64, __int64);
__int64 CudaDriverRoutine_197480(__int64 result, __int64, unsigned int,
                                 unsigned int*, __int64, unsigned int, _QWORD*,
                                 unsigned int*);
__int64 CudaDriverRoutine_1a1320(__int64);
__int64 CudaDriverRoutine_1a1670(__int64, int);
__int64 CudaDriverRoutine_1a3d20(__int64, unsigned __int8*);
__int64 CudaDriverRoutine_1a5d90(__int64);
__int64 CudaDriverRoutine_1a81a0(__int64);
__int64 CudaDriverRoutine_1aa7f0(__int64 result, int);
__int64 CudaDriverRoutine_1cb3b0(__int64, unsigned int);
__int64 CudaDriverRoutine_1cb530(__int64, unsigned int);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverRoutine_1db1c0(__int64, __int64);
__int64 CudaDriverRoutine_1dba10(__int64, unsigned __int64);
__int64 CudaDriverRoutine_1dbb80(__int64 result, __int64);
__int64 CudaDriverRoutine_1dbfd0(__int64);
__int64 CudaDriverRoutine_1dc000(__int64);
__int64 CudaDriverRoutine_1dc020(__int64);
__int64 CudaDriverRoutine_1dc0c0(__int64, __int64);
__int64 CudaDriverRoutine_1dc340(_QWORD*, _QWORD*);
__int64 CudaDriverRoutine_1dd1f0(__int64);
__int64 CudaDriverRoutine_1e2ce0(__int64);
__int64 CudaDriverRoutine_1e9390(__int64 result);
__int64 CudaDriverRoutine_1f5570(__int64 result, int);
__int64 CudaDriverRoutine_1fc5a0(unsigned int*, __int64, int, bool*);
__int64 CudaDriverRoutine_1fec20(__int64, __int64, __int64, char, __int64*);
__int64 CudaDriverRoutine_1ff080(_QWORD*);
__int64 CudaDriverRoutine_1ffe30(__int64);
__int64 CudaDriverRoutine_203f30(__int64);
__int64 CudaDriverRoutine_2045e0(_QWORD*);
__int64 CudaDriverRoutine_205810(__int64, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_205dd0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_205fa0(int, __int64, __int64, __int64*);
__int64 CudaDriverRoutine_206060(__int64, __int64);
__int64 CudaDriverRoutine_2060c0(__int64, __int64, __int16);
__int64 CudaDriverRoutine_206200(__int64, __int64);
__int64 CudaDriverRoutine_2077b0(__int64 result);
__int64 CudaDriverRoutine_20ebc0(__int64 result, __int64, __int64);
__int64 CudaDriverRoutine_20f580(__int64 result);
__int64 CudaDriverRoutine_24e80(_QWORD*, unsigned int, int);
__int64 CudaDriverRoutine_33c90(char, __int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_3540(__int64);
__int64 CudaDriverRoutine_3750(unsigned int, char);
__int64 CudaDriverRoutine_3770(__int64);
__int64 CudaDriverRoutine_3ac0(__int64, __int64);
__int64 CudaDriverRoutine_57540(__int64, __int64, __int64, __int64, int);
__int64 CudaDriverRoutine_5e000(__int64);
__int64 CudaDriverRoutine_5e0f0(__int64);
__int64 CudaDriverRoutine_5f050(__int64, __int64, char);
__int64 CudaDriverRoutine_7d4d0(__int64 result, __int64);
__int64 CudaDriverRoutine_7d5b0();
__int64 CudaDriverRoutine_7fa50(__int64, int, __int64, __int64, int, __int64,
                                char, __int64, unsigned int, int);
__int64 CudaDriverRoutine_87a10(unsigned __int8, int);
__int64 CudaDriverRoutine_87c60(char);
__int64 CudaDriverRoutine_8aae0(__int64);
__int64 CudaDriverRoutine_8ab20(__int64, __int64, int, int);
__int64 CudaDriverRoutine_8b1c0(__int64, int, int, __int64*, unsigned __int64);
__int64 CudaDriverRoutine_96f20(__int64, __int64, __int64, unsigned int,
                                __int64, __int64);
__int64 CudaDriverRoutine_980c0(__int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_99f40(__int64, _DWORD*, int);
__int64 CudaDriverRoutine_9ab10(__int64);
__int64 CudaDriverRoutine_9bed0(__int64 result, __int64);
__int64 CudaDriverRoutine_9e520(__int64, __int64, __int64, _DWORD*);
__int64 CudaDriverRoutine_a57e0(__int64, unsigned int,
                                __int64 (*)(int*, __int64), __int64);
__int64 CudaDriverRoutine_b3850();
__int64
CudaDriverRoutine_b3850_alt1(__int64,
                             __int64*) __asm__("CudaDriverRoutine_b3850");
__int64 CudaDriverRoutine_b4790(__int64 result);
__int64 CudaDriverRoutine_b4eb0(__int64 result);
__int64 CudaDriverRoutine_b4f40(__int64, __int64, __int64, __int64,
                                unsigned int);
__int64 CudaDriverRoutine_ba080(__int64, __int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_ba240(__int64, __int64, unsigned int, __int64);
__int64 CudaDriverRoutine_bab60(__int64, unsigned int);
__int64 CudaDriverRoutine_bbd70(__int64 result, _QWORD*);
__int64 CudaDriverRoutine_bc3f0(__int64);
__int64 CudaDriverRoutine_bc6c0(__int64, int, char);
__int64 CudaDriverRoutine_c59c0(__int64 result, __int64);
__int64 CudaDriverRoutine_d5e70(__int64, __int64);
__int64 CudaDriverRoutine_d64a0(__int64, __int64);
__int64 CudaDriverRoutine_d9180(__int64, __int64);
__int64 CudaDriverRoutine_df0b0(__int64, unsigned __int64, unsigned __int64,
                                unsigned int);
__int64 CudaDriverRoutine_e8250(_QWORD*, _DWORD*, __int64, __int64, __int64);
__int64 CudaDriverRoutine_ed6a0(__int64, unsigned int, __int64, _OWORD*);
__int64 CudaDriverRoutine_ee330(__int64);
__int64 CudaDriverRoutine_eec70(__int64, __int64);
__int64 CudaDriverRoutine_f0380(_DWORD*, __int64, __int64, unsigned __int8,
                                unsigned __int8, __int64*);
__int64 CudaDriverRoutine_f2a00(_DWORD*, __int64, __int64, unsigned __int64*);
__int64 CudaDriverRoutine_f2c20(int*, __int64*);
__int64 CudaDriverRoutine_f60f0(__int64, __int64, __int64, __int64, __int64,
                                __int64, unsigned int, __int64, unsigned int);
__int64 CudaDriverRoutine_f6230(__int64, __int64, __int64, __int64, __int64,
                                __int64, unsigned int, __int64);
__int64 CudaDriverRoutine_f7f50(__int64);
__int64 CudaDriverRoutine_f8ed0(_DWORD*);
__int64 CudaDriverRoutine_f8f00(_DWORD*);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_105c00(_QWORD);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_112e30(_QWORD);
__int64 CudaDriverStub_118070(__int64);
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_12dca0(_QWORD);
__int64 CudaDriverStub_12e260(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_19ade0(_QWORD, _QWORD);
__int64 CudaDriverStub_1a9040(__int64);
__int64 CudaDriverStub_1db190(_QWORD);
__int64 CudaDriverStub_1db380(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1dc6e0(void);
__int64 CudaDriverStub_251c0(_QWORD);
__int64 CudaDriverStub_4f840(_QWORD);
__int64 CudaDriverStub_5ab60(_QWORD, _QWORD);
__int64 CudaDriverStub_5bb90(_QWORD);
__int64 CudaDriverStub_8e230(_QWORD);
__int64 CudaDriverStub_99850(_QWORD);
__int64 CudaDriverStub_9b050(_QWORD);
__int64 CudaDriverStub_b9660(__int64);
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_108520(__int64);
__int64 cuda_driver_116e60(__int64);
__int64 cuda_driver_118a60(__int64, __int64, unsigned int, char);
__int64 cuda_driver_120770(__int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 cuda_driver_125d80(__int64, __int64, __int64);
__int64 cuda_driver_1964d0(_QWORD*);
__int64 cuda_driver_1da1b0(__int64, __int64*, __int64, _QWORD*);
__int64 cuda_driver_1dbe40(__int64, __int64, __int64);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_33a60(__int64, __int64, __int64, unsigned int*, __int64,
                          __int64, __int64);
__int64 cuda_driver_5a060(__int64);
__int64 cuda_driver_5e0a0(__int64);
__int64 cuda_driver_88ba0(__int64, __int64*, unsigned int, unsigned int,
                          unsigned int, int, __int64, unsigned __int64*,
                          unsigned __int64*);
__int64 cuda_driver_89100(_QWORD*, __int64, __int64*, __int128*, int, __int64,
                          __int64, __int64, char);
__int64 cuda_driver_89e50(unsigned int*);
__int64 cuda_driver_9e5f0(__int64, __int64, __int128*);
__int64 cuda_driver_ba0b0(__int64, unsigned int, unsigned int, unsigned int);
__int64 cuda_driver_ba410(__int64, unsigned int, unsigned int, unsigned int,
                          unsigned int, unsigned int, unsigned int);
__int64 cuda_driver_ba620(unsigned int, unsigned int, unsigned int,
                          unsigned int, unsigned int, int, unsigned int,
                          unsigned int, unsigned int);
__int64 cuda_driver_bbeb0(__int64, _QWORD*, __int64, unsigned int);
__int64 cuda_driver_c3200(__int64, char);
__int64 cuda_driver_d6100(__int64*, __int64, int, __int64*, _QWORD*, __int64,
                          __int64, int);
__int64 cuda_driver_d6360(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                          __int64, __int64);
__int64 cuda_driver_d93c0(__int64, __int64*);
__int64 cuda_driver_d9500(__int64);
__int64 cuda_driver_e7e60(__int64, __int64, __int64, char);
__int64 cuda_driver_helpers_1b7b30(__int64, __int64, __int64);
__int64 cuda_driver_helpers_b92e0(__int64);
__int64 cuda_driver_misc_helpers_4bb0(__int64 result);
__int64 cuda_driver_misc_helpers_ded50(__int64, __int64*, char);
__int64 cuda_driver_misc_helpers_deeb0(__int64, char);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nvidia_105e80(_QWORD*, __int64, _QWORD*, __int64, int);
__int64 nvidia_121c60(__int64*);
__int64 nvidia_1d9f90(_QWORD);
__int64 nvidia_5bbb0(__int64);
__int64 nvidia_eeec0(__int64 result, unsigned int*, int, __int64);
__int64 vfprintf_plt(_QWORD, _QWORD, _QWORD);
__int64 vsnprintf_plt(_QWORD, _QWORD, _QWORD, _QWORD);
bool CudaDriverRoutine_10ac30(__int64, __int64, unsigned int, _DWORD*, __int64,
                              char);
bool CudaDriverRoutine_122140(_BOOL8 result);
bool CudaDriverRoutine_127eb0(__int64, __int64);
bool CudaDriverRoutine_1dc9c0(__int64);
bool CudaDriverRoutine_208b20(_DWORD*, int*, unsigned int*);
bool CudaDriverRoutine_5c230(__int64);
bool CudaDriverRoutine_86fe0(__int64);
bool CudaDriverRoutine_874c0(unsigned __int8);
bool CudaDriverRoutine_98110(_BOOL8 result);
bool CudaDriverRoutine_985b0(int);
bool CudaDriverRoutine_99720(__int64);
bool CudaDriverRoutine_9aa00(__int64);
bool CudaDriverRoutine_9aa20(__int64);
bool CudaDriverRoutine_9aa30(__int64);
bool CudaDriverRoutine_9aa40(__int64);
bool CudaDriverRoutine_9ac20(__int64);
bool CudaDriverRoutine_9ac50(__int64);
bool CudaDriverRoutine_9ad80(__int64);
bool CudaDriverRoutine_9adc0(__int64);
bool CudaDriverRoutine_9adf0(__int64);
bool CudaDriverRoutine_9ae20(__int64);
bool CudaDriverRoutine_ba980(_QWORD*);
bool CudaDriverRoutine_bbdf0(__int64);
bool CudaDriverRoutine_bbe70(__int64);
bool CudaDriverRoutine_efe40(__int64);
bool CudaDriverStub_985a0(__int64);
bool CudaDriverStub_b9300(__int64);
bool cuda_debugger_api_7cff0();
bool cuda_driver_116e40(__int64);
bool cuda_driver_predicates_10ebb0(__int64);
bool cuda_driver_predicates_1dc720(__int64);
bool cuda_driver_predicates_9ac80(__int64);
bool cuda_driver_predicates_9ae50(__int64);
extern _DWORD CudaDriverData_11318bc[23];
extern _DWORD CudaDriverData_135e0b4[7];
extern _QWORD CudaDriverData_13b59c0[7];
extern _QWORD CudaDriverData_1422ba8;
extern _QWORD CudaDriverData_1422bb0;
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_1423388;
extern _UNKNOWN* CudaDriverData_1432140;
extern _UNKNOWN* CudaDriverData_1432148;
extern _UNKNOWN* CudaDriverData_1432160;
extern _UNKNOWN* CudaDriverData_1432170;
extern _UNKNOWN* CudaDriverData_1432198;
extern _UNKNOWN* CudaDriverData_14321b0;
extern _UNKNOWN* CudaDriverData_14321c8;
extern _UNKNOWN** CudaDriverData_1423090;
extern _UNKNOWN CudaDriverData_1432130;
extern _UNKNOWN CudaDriverData_14347a8;
extern __int128 CudaDriverData_1115280;
extern __int128 CudaDriverData_1115340;
extern __int128 CudaDriverData_11153a0;
extern __int128 CudaDriverData_11154a0;
extern __int128 CudaDriverData_1115550;
extern __int128 CudaDriverData_1115760;
extern __int128 CudaDriverData_1115970;
extern __int128 CudaDriverData_1115a20;
extern __int128 CudaDriverData_1115a90;
extern __int128 CudaDriverData_1115bd0;
extern __int128 CudaDriverData_1115cb0;
extern __int128 CudaDriverData_1115d40;
extern __int128 CudaDriverData_1115de0;
extern __int64 (*CudaDriverData_14408e0)(int*);
extern __int64 (*CudaDriverData_1440938)(int*);
extern __int64 (*CudaDriverData_1440950)(int*);
extern __int64 (*CudaDriverData_14409c0)(int*);
extern __int64 (*CudaDriverData_1440a20)(int*);
extern __int64* CudaDriverData_1133ee0;
extern __int64 CudaDriverData_14230e0;
extern __int64 CudaDriverData_143bd80;
extern char CudaDriverData_143b974;
extern int CudaDriverData_14358d0;
extern int CudaDriverData_1438c04;
extern int CudaDriverData_1438c94;
extern unsigned int CudaDriverData_1134ef4[34];
extern void (*CudaDriverData_14220a8)();
typedef __int64 CudaDriverAlign_1438c8c __attribute__((aligned(4)));
extern CudaDriverAlign_1438c8c CudaDriverData_1438c8c;
unsigned __int64 CudaDriverRoutine_8b200(__int64, int, int);
unsigned __int64 CudaDriverRoutine_f0f30(unsigned int*);
void CudaDriverRoutine_4198();
void CudaDriverRoutine_4390();
void CudaDriverRoutine_444c();
void CudaDriverRoutine_4450();
void CudaDriverRoutine_4454();
void CudaDriverRoutine_4458();
void CudaDriverRoutine_445c();
void CudaDriverRoutine_4484();
void CudaDriverRoutine_44d8();
void CudaDriverRoutine_44e8();
void CudaDriverRoutine_44ec();
void CudaDriverRoutine_4710();
void CudaDriverRoutine_4728();
void CudaDriverRoutine_4768();
void CudaDriverRoutine_4e50();
void CudaDriverRoutine_71c8();
void CudaDriverRoutine_71cc();
void CudaDriverRoutine_7238();
void CudaDriverRoutine_7248();
void CudaDriverRoutine_7260();
void CudaDriverRoutine_7268();
void CudaDriverRoutine_7280();
void CudaDriverRoutine_72a4();
void CudaDriverRoutine_7418();
void CudaDriverRoutine_743c();
void CudaDriverRoutine_7440();
void CudaDriverRoutine_7488();
void CudaDriverStub_10fdf0();
__int64 nvidia_5bd0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD* a5,
                    __int64 a6);
__int64 nvidia_d740(__int64 a1, __int64 a2, __int64 a3);
long double nvidia_12700(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 nvidia_19440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD* a5,
                     __int64 a6);
__int64 nvidia_25b80();
__int64 nvidia_2bb60(__int64 a1, _QWORD** a2, __int64 a3, char a4, __int64 a5,
                     _BYTE* a6, __int64 a7);
__int64 nvidia_34020(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
unsigned __int64* nvidia_4d420(unsigned __int64* result, unsigned __int64 a2,
                               unsigned __int64 a3);
unsigned __int64* nvidia_4d5a0(unsigned __int64* result, unsigned __int64 a2,
                               unsigned __int64 a3);
__int64 nvidia_4de20(unsigned __int64* a1, unsigned __int64 a2,
                     unsigned __int64 a3);
__int64 nvidia_4e310(unsigned __int64* a1, unsigned __int64 a2,
                     unsigned __int64 a3, _QWORD* a4);
__int64 nvidia_56640(__int64 a1, __int64* a2, __int64 a3, char a4, __int64 a5);
__int64 nvidia_59350(__int64 a1);
__int64 nvidia_63500(__int64 a1, _QWORD* a2, _QWORD* a3);
__int64 nvidia_81710(__int64 a1, __int64* a2);
__int64 nvidia_89360(__int64* a1, __int64 a2, __int128* a3, __int64 a4,
                     __int64* a5, __int64 a6, __int64 a7, char a8);
__int64 nvidia_8dfc0(__int64 a1, _DWORD* a2);
__int64 nvidia_97e80(__int64 result);
__int64 nvidia_99550(__int64 a1, __int64 a2);
__int64 nvidia_b3600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, char a9, __int64 a10,
                     _BYTE* a11);
__int64 nvidia_b3d20(__int64 a1, __int64 a2, _BYTE* a3, char a4, __int64 a5,
                     __int64 a6);
__int64 nvidia_b68c0(int** a1, _QWORD* a2, unsigned int a3, __int64 a4);
__int64 nvidia_d6550(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8, _DWORD* a9,
                     int a10);
__int64 nvidia_d6740(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4);
__int64 nvidia_d6af0(__int64 result, __int64* a2, __int64 a3);
__int64 nvidia_d9700(__int64 a1, __int64* a2);
__int64 nvidia_e6320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7);
__int64 nvidia_e73b0(__int64 a1, __int64 a2);
__int64 nvidia_e7820(__int64 a1, __int64 a2, _DWORD* a3, unsigned int a4);
__int64 nvidia_e96c0(__int64 a1, __int64 a2, _QWORD* a3);
__int64 nvidia_ed630(__int64 a1, __int64 a2, __int64 a3, ...);
__int64 nvidia_f2e00(unsigned int* a1, __int64 a2, unsigned __int64* a3,
                     __int64* a4);
__int64 nvidia_f6490(int* a1, _QWORD* a2, char a3);
__int64 nvidia_fd890(__int64 result, _QWORD* a2, __int64 a3, __int64 a4, int a5,
                     __int64 a6);
__int64 nvidia_ff600(_QWORD* a1, int a2, __int64 a3, __int64 a4);
__int64 nvidia_10da00(__int64 result, char a2);
__int64 nvidia_10f540(__int64 a1, __int64 a2);
__int64 nvidia_11a720(__int64 a1);
__int64 nvidia_11fa80(__int64 a1);
__int64 nvidia_12e930(__int64 a1, ...);
__int64 nvidia_12e9c0(__int64 a1, char* a2, ...);
__int64 nvidia_12eb10(__int64 a1, ...);
__int64 nvidia_137750(__int64 a1);
__int64 nvidia_137830(__int64 a1);
__int64 nvidia_174200(_QWORD* a1, unsigned int a2, int a3);
__int64 nvidia_179800(__int64 a1);
__int64 nvidia_196060(__int64 a1, unsigned int* a2);
bool nvidia_1985d0(__int64 a1, __int64 a2);
__int64 nvidia_1a5dd0(__int64 a1, __int64 a2, unsigned int a3, int a4,
                      __int64 a5, __int64 a6, int* a7);
__int64 nvidia_1ac720(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _QWORD* a5, __int64 a6);
__int64 nvidia_1af2c0(char** a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                      __int64 a6, unsigned int a7);
__int64 nvidia_1ba340(int a1, unsigned __int64 a2);
__int64 nvidia_1bd060(__int64 a1, __int64 a2, unsigned int a3, int a4,
                      _DWORD* a5, __int64 a6, int* a7);
__int64 nvidia_1cb040(__int64 a1, unsigned int a2, unsigned int a3, int a4,
                      int a5, int a6);
__int64 nvidia_1cf1b0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8, char a9);
void nvidia_1d4420(__int64 a1, _QWORD* a2);
__int64 nvidia_1e1540(__int64 a1, char a2);
__int64 nvidia_1e20d0(_QWORD* a1, int a2);
__int64 nvidia_1e2be0(_QWORD* a1, _DWORD* a2);
__int64 nvidia_1e4360(__int64 a1, _DWORD* a2);
__int64 nvidia_1e5400(__int64 a1, __int64 a2, int* a3, int a4);
__int64 nvidia_1e6d60(__int64 a1, unsigned int a2);
__int64 nvidia_1e75f0(__int64 a1, int a2, int a3, __int64 a4);
__int64 nvidia_1ec000(__int64 a1);
__int64 nvidia_1eca90(__int64 a1, __int64* a2, _DWORD* a3);
__int64 nvidia_1f8580(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, unsigned int a7);
__int64 nvidia_1f9080(__int64* a1, __int64 a2, __int64 a3, unsigned __int64 a4,
                      unsigned __int64 a5, int* a6, unsigned int a7);
unsigned __int64 nvidia_1ff190(__int64* a1, __int64 a2);
__int64 nvidia_20e1e0(_QWORD* a1, __int64 a2, _DWORD* a3, int a4);
__int64 nvidia_212090(unsigned int* a1);
__int64 nvidia_212250(unsigned int* a1);

__int64 nvidia_5bd0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD* a5,
                    __int64 a6)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  void* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int v29;
  _DWORD* v30;
  __int64 v31;
  __int64 v33;
  __int64 v34;

  v11 = CudaDriverRoutine_98340(a1);
  v12 = CudaDriverRoutine_3540(v11);
  v13 = CudaDriverRoutine_1090(v11);
  *(_QWORD*)(a6 + 24) = v12;
  *(_QWORD*)(a6 + 32) = v13;
  *(_DWORD*)a6 = *(_DWORD*)(a4 + 168);
  *(_DWORD*)(a6 + 4) = *(_DWORD*)(a4 + 172);
  *(_DWORD*)(a6 + 8) = *(_DWORD*)(a4 + 176);
  *(_DWORD*)(a6 + 12) = *(_DWORD*)(a4 + 144);
  *(_DWORD*)(a6 + 16) = *(_DWORD*)(a4 + 148);
  *(_DWORD*)(a6 + 20) = *(_DWORD*)(a4 + 152);
  if (*(_BYTE*)(a4 + 352) != 0) {
    *(_DWORD*)(a6 + 40) = 0x1000000 - (*(int*)(a4 + 356) + *(int*)(a4 + 360));
    {
      v14 = *(_QWORD*)(a4 + 136);
      __asm__ volatile("" ::"r"(v14));
    }
    if (v14 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  *(_DWORD*)(a6 + 40) = CudaDriverRoutine_3770(a2);
  {
    v14 = *(_QWORD*)(a4 + 136);
    __asm__ volatile("" ::"r"(v14));
  }
  if (v14 != 0) {
  LABEL_3:
    *(_QWORD*)(a6 + 56) = *(_QWORD*)(v14 + 8);
  }
LABEL_4:
  if (CudaDriverRoutine_985b0(*(_DWORD*)(*(_QWORD*)(a2 + 32) + 32LL))) {
    v15 = *(_OWORD*)(a2 + 688);
    v16 = *(_OWORD*)(a2 + 704);
    v17 = *(_OWORD*)(a2 + 720);
    *(_OWORD*)(a6 + 184) = *(_OWORD*)(a2 + 736);
    *(_OWORD*)(a6 + 168) = v17;
    *(_OWORD*)(a6 + 152) = v16;
    *(_OWORD*)(a6 + 136) = v15;
    v18 = *(_OWORD*)(a2 + 752);
    v19 = *(_OWORD*)(a2 + 768);
    v20 = *(_OWORD*)(a2 + 784);
    *(_OWORD*)(a6 + 248) = *(_OWORD*)(a2 + 800);
    *(_OWORD*)(a6 + 232) = v20;
    *(_OWORD*)(a6 + 216) = v19;
    *(_OWORD*)(a6 + 200) = v18;
    CudaDriverRoutine_208ba0(*(_QWORD**)(v11 + 2112), 0, 0, (_QWORD*)(a6 + 112),
                             (_QWORD*)(a6 + 128));
    *(_QWORD*)(a6 + 120) = 0;
    v21 = CudaDriverData_1422118;
    if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) ==
        0) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  *(_QWORD*)(a6 + 112) = 0;
  *(_QWORD*)(a6 + 120) = 0;
  *(_QWORD*)(a6 + 128) = 0;
  v21 = CudaDriverData_1422118;
  if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) != 0) {
  LABEL_6:
    CudaDriverRoutine_208af0(*(_QWORD**)(v11 + 2112), &v34, &v33);
    CudaDriverRoutine_208b20(*(_DWORD**)(v11 + 2112), (int*)(a6 + 240),
                             (unsigned int*)(a6 + 244));
    v22 = v33;
    *(_QWORD*)(a6 + 248) = v34;
    *(_QWORD*)(a6 + 256) = v22;
  }
LABEL_7:
  *(_QWORD*)(a6 + 64) = *a5;
  *(_QWORD*)(a6 + 72) = a5[1];
  *(_QWORD*)(a6 + 80) = a5[3];
  *(_QWORD*)(a6 + 88) = a5[4];
  *(_QWORD*)(a6 + 96) = a5[5];
  {
    v23 = a5[6];
    __asm__ volatile("" ::"r"(v23));
  }
  *(_DWORD*)(a6 + 264) = 0;
  *(_QWORD*)(a6 + 104) = v23;
  *(_DWORD*)(a6 + 268) = *(_DWORD*)(v11 + 164);
  {
    v24 = *(_DWORD*)(a4 + 288);
    __asm__ volatile("" ::"r"(v24));
  }
  *(_DWORD*)(a6 + 44) = v24;
  *(_DWORD*)(a6 + 276) = *(_DWORD*)(a2 + 140);
  v25 = CudaDriverRoutine_99f40(*(_QWORD*)(a1 + 64), (_DWORD*)(a2 + 128), v24);
  {
    v26 = *(_DWORD*)(a6 + 276);
    __asm__ volatile("" ::"r"(v26));
  }
  if (v26 != 0) {
    {
      v26 = (v25 - *(int*)(a2 + 140) + *(int*)(a2 + 396) + 15) & 0xFFFFFFF0;
      __asm__ volatile("" ::"r"(v26));
    }
    v27 = v26 + 288;
  }
  else {
    v27 = 0;
  }
  *(_DWORD*)(a6 + 292) = v26;
  *(_DWORD*)(a6 + 288) = v27;
  *(_DWORD*)(a6 + 272) = 0;
  v28 = CudaDriverRoutine_3ac0(v11, a2);
  {
    v29 = *(_DWORD*)(a2 + 632);
    __asm__ volatile("" ::"r"(v29));
  }
  *(_QWORD*)(a6 + 280) = 0;
  *(_DWORD*)(a6 + 300) = v29 + v28;
  if ((unsigned __int8)CudaDriverRoutine_9ab10(*(_QWORD*)(a1 + 64)) != 0) {
    {
      v30 = *(_DWORD**)(a1 + 64);
      __asm__ volatile("" ::"r"(v30));
    }
    if (v30[5466] != 1 &&
        (*((_BYTE*)&CudaDriverRoutine_4728 + (_QWORD)v21) & 2) == 0) {
      *(_DWORD*)(a6 + 296) = v30[4271] + v30[4272] == 0;
    }
  }
  *(_QWORD*)(a6 + 304) = 0;
  *(_QWORD*)(a6 + 312) = CudaDriverStub_1db800(*(_QWORD*)(v11 + 2232));
  if (*(_BYTE*)(a4 + 204) != 0 && *(_BYTE*)(a4 + 205) != 0) {
    v31 = *(_QWORD*)(a2 + 104);
    __asm__ volatile("" ::"r"(v31));
  }
  else {
    v31 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
        *(_QWORD*)(a2 + 96));
  }
  *(_QWORD*)(a6 + 320) = v31;
  *(_DWORD*)(a6 + 328) = *(int*)(a4 + 288) + *(int*)(a2 + 128) +
                         *(int*)(a2 + 136) + *(int*)(a2 + 140);
  return 0;
}

__int64 nvidia_d740(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int128 v21;
  int8x16_t v22;
  __int64 v23;
  _BOOL4 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  int64x2_t v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64* v47;
  unsigned __int64* v48;
  __int64 v49;
  bool v50;
  __int64 v51;
  __int64 v52;
  bool v53;
  __int64 v54;
  unsigned __int64* v55;
  unsigned __int64* v56;
  __int64* v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64* v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  struct {
    _QWORD v85[2];
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    int v91;
    int v92;
    __int128 v93;
    __int128 v94;
  } v85_;
  struct {
    __int128 v95;
    __int128 v96;
  } v95_;

  {
    v3 = (unsigned __int64*)(*(_QWORD*)a3 +
                             8LL * (unsigned int)(2 * *(int*)(a3 + 12)));
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v4 = *v3;
    __asm__ volatile("" ::"r"(v4));
  }
  if ((*v3 & 0xFFF) != 0xB82) {
    return 0;
  }
  {
    v5 = v3[1];
    __asm__ volatile("" ::"r"(v5));
  }
  if ((~(_DWORD)v4 & 0xFF0000) == 0 || (v3[1] & 0xC000) != 0) {
    return 0;
  }
  {
    v8 = *(_QWORD*)(a1 + 16104);
    __asm__ volatile("" ::"r"(v8));
  }
  v84 = a2;
  v85_.v85[0] = 0;
  {
    v11 = *(_QWORD*)(v8 + 3104);
    __asm__ volatile("" ::"r"(v11));
  }
  v12 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_ba080(v12, *(unsigned int*)(a1 + 188),
                                   *(_QWORD*)(v11 + 48), 64, (__int64)v85_.v85);
  if ((_DWORD)result == 0) {
    atomic_fetch_add((atomic_uint* volatile)((char*)&CudaDriverRoutine_4390 +
                                             (_QWORD)CudaDriverData_1422118),
                     1u);
    {
      v14 = v85_.v85[0];
      __asm__ volatile("" ::"r"(v14));
    }
    v15 = CudaDriverStub_b9660(*(_QWORD*)(v11 + 40));
    memcpy_plt(*(_QWORD*)(v11 + 56), v15, *(_QWORD*)(v11 + 48));
    v82 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
        *(_QWORD*)(v84 + 96));
    {
      v80 = *(unsigned int*)(a3 + 12);
      __asm__ volatile("" ::"r"(v80));
    }
    v16 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 19448LL))(v14);
    {
      v17 = *(_QWORD*)(v11 + 80);
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v81 = *(unsigned int*)(v11 + 112);
      __asm__ volatile("" ::"r"(v81));
    }
    v18 = (v4 >> 54) & 0x1F;
    if (v18 > 6) {
      v19 = 0xFFFFFFC000000000LL;
    }
    else {
      v19 = CudaDriverData_13b59c0[v18];
      __asm__ volatile("" ::"r"(v19));
    }
    v20 = v17 + v16;
    v21 = *(_OWORD*)(v11 + 64);
    {
      v22 = *(int8x16_t*)(v11 + 184);
      __asm__ volatile("" ::"w"(v22));
    }
    {
      v23 = *(_QWORD*)(v11 + 104);
      __asm__ volatile("" ::"r"(v23));
    }
    v24 = true;
    {
      v25 = *(_QWORD*)(v11 + 248);
      __asm__ volatile("" ::"r"(v25));
    }
    LOWORD(v85_.v85[0]) = 0;
    v83 = v20;
    {
      v26 = *(_QWORD*)(v11 + 88);
      __asm__ volatile("" ::"r"(v26));
    }
    {
      v27 = *(_QWORD*)(v11 + 96);
      __asm__ volatile("" ::"r"(v27));
    }
    {
      v28 = *(_QWORD*)(v11 + 120);
      __asm__ volatile("" ::"r"(v28));
    }
    {
      v29 = *(_QWORD*)(v11 + 128);
      __asm__ volatile("" ::"r"(v29));
    }
    {
      v31 = *(_QWORD*)(v11 + 136);
      __asm__ volatile("" ::"r"(v31));
    }
    {
      v30 = *(_QWORD*)(v11 + 144);
      __asm__ volatile("" ::"r"(v30));
    }
    {
      v32 = *(_QWORD*)(v11 + 152);
      __asm__ volatile("" ::"r"(v32));
    }
    {
      v33 = *(_QWORD*)(v11 + 160);
      __asm__ volatile("" ::"r"(v33));
    }
    {
      v35 = *(_QWORD*)(v11 + 168);
      __asm__ volatile("" ::"r"(v35));
    }
    {
      v34 = *(_QWORD*)(v11 + 176);
      __asm__ volatile("" ::"r"(v34));
    }
    {
      v37 = *(_QWORD*)(v11 + 200);
      __asm__ volatile("" ::"r"(v37));
    }
    {
      v36 = *(_QWORD*)(v11 + 208);
      __asm__ volatile("" ::"r"(v36));
    }
    {
      v38 = *(_QWORD*)(v11 + 216);
      __asm__ volatile("" ::"r"(v38));
    }
    {
      v39 = *(_QWORD*)(v11 + 224);
      __asm__ volatile("" ::"r"(v39));
    }
    {
      v40 = *(_QWORD*)(v11 + 232);
      __asm__ volatile("" ::"r"(v40));
    }
    {
      v41 = *(_QWORD*)(v11 + 240);
      __asm__ volatile("" ::"r"(v41));
    }
    if ((v4 & 0xFE0000) == 0x20000) {
      *((_BYTE*)v85_.v85 + BYTE2(v4) - 2) = 1;
      if (((v5 >> 9) & 7) == 5 && BYTE2(v4) <= 2uLL) {
        *((_BYTE*)v85_.v85 + BYTE2(v4) - 1) = 1;
      }
      v42 = LANES64_OF(vdup_n_s32(LOBYTE(v85_.v85[0]) == 0)).n64_u64[0];
      LANES128(v43).n128_u64[0] = (unsigned int)v42;
      LANES128(v43).n128_u64[1] = HIDWORD(v42);
      {
        v24 = BYTE1(v85_.v85[0]) == 0;
        __asm__ volatile("" ::"r"(v24));
      }
      v22 = vbslq_s8(vcltzq_s64(vshlq_n_s64(v43, 0x3Fu)), v22,
                     COERCE_AS(int8x16_t, CudaDriverData_1115d40));
    }
    v44 = v35 & 0xFFFFFFFFFFFFF1FFLL | (((v5 >> 9) & 7) << 9);
    v45 = v33 & 0xFFFFFFFFFF00FFFFLL | ((unsigned __int64)BYTE2(v4) << 16);
    {
      v46 = *(_QWORD*)(v11 + 56);
      __asm__ volatile("" ::"r"(v46));
    }
    *(_OWORD*)(v46 + (v17 & 0x7FFFFFFF0LL)) = v21;
    v47 = (__int64*)(v46 + (v29 & 0x7FFFFFFF0LL));
    v48 = (unsigned __int64*)(v46 + (v23 & 0x7FFFFFFF0LL));
    *v48 = v26 & 0xFFC000FF00FFFFFFLL | v19 & 0x3FFF0000000000LL |
           (unsigned int)v4 & 0xFF000000;
    v48[1] = v27;
    if ((v4 & 0xFF000000) == 0xFF000000) {
      v49 = (unsigned __int16)(v4 >> 38);
    }
    else {
      v49 = (unsigned int)((int)(v4 >> 22) >> 16);
    }
    v50 = (_DWORD)v49 == 0;
    if ((_DWORD)v49 == 0) {
      v28 = 0;
    }
    v51 = v81 | (v49 << 32);
    v52 = 31000;
    if (v50) {
      v51 = 31000;
    }
    v53 = !v24;
    *v47 = v51;
    v47[1] = v28;
    if (v24) {
      v52 = v36;
    }
    v54 = v83;
    v55 = (unsigned __int64*)(v46 + (v32 & 0x7FFFFFFF0LL));
    *v55 =
        (v19 + 0x10000000000LL) & 0x7F0000000000LL | v31 & 0xFFC000FFFFFFFFFFLL;
    v55[1] = v30;
    v56 = (unsigned __int64*)(v46 + (v34 & 0x7FFFFFFF0LL));
    v57 = (__int64*)(v46 + (v39 & 0x7FFFFFFF0LL));
    *v56 = v45;
    v56[1] = v44;
    *(int8x16_t*)(v46 + (v37 & 0x7FFFFFFF0LL)) = v22;
    v58 = v53 ? 0LL : v38;
    *v57 = v52;
    v57[1] = v58;
    v59 = v82 + 16LL * (unsigned int)(v80 + 1) - v25 - v83 - 16;
    v60 = v59 >> 2;
    v61 = v41 & 0xFFFFFFFFFFFC0000LL | HIDWORD(v59) & 0x3FFFF;
    v62 = (unsigned __int64*)(v46 + (v25 & 0x7FFFFFFF0LL));
    *v62 = v40 & 0x3FFFFFFFFLL | ((unsigned __int64)(unsigned int)v60 << 34);
    v62[1] = v61;
    result = CudaDriverRoutine_f6230(a1, v14, 0, *(_QWORD*)(v11 + 56),
                                     *(_QWORD*)(v11 + 48), *(_QWORD*)(a1 + 96),
                                     2u, 0);
    if ((_DWORD)result == 0) {
      v63 = v82 + 16 * v80;
      v64 = v83 - v63 - 16;
      {
        v65 = *(_QWORD*)(v11 + 240) & 0xFFFFFFFFFFFC0000LL |
              HIDWORD(v64) & 0x3FFFF;
        __asm__ volatile("" ::"r"(v65));
      }
      v66 = (unsigned __int16)v4 & 0xF000 |
            ((unsigned __int64)(unsigned int)(v64 >> 2) << 34) |
            *(_QWORD*)(v11 + 232) & 0x3FFFF0FFFLL;
      {
        v67 = 8LL * (unsigned int)(2 * *(int*)(a3 + 12));
        __asm__ volatile("" ::"r"(v67));
      }
      *(_QWORD*)(*(_QWORD*)a3 + v67) = v66;
      *(_QWORD*)(*(_QWORD*)a3 + v67 + 8) = v65;
      v95_.v95 = (__typeof__(v95_.v95)){0};
      v95_.v96 = (__typeof__(v95_.v96)){0};
      v85_.v94 = (__typeof__(v85_.v94)){0};
      if (cuda_debugger_api_7cff0()) {
        goto LABEL_36;
      }
      v68 = 16;
      if (*(_DWORD*)(a1 + 188) == 3) {
        v68 = 168;
      }
      v69 = 132;
      {
        v70 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v68);
        __asm__ volatile("" ::"r"(v70));
      }
      if (*(_DWORD*)(a1 + 188) == 3) {
        v69 = 52;
      }
      if (*(_DWORD*)(v70 + v69) != 0) {
      LABEL_36:
        *(_QWORD*)&v95_.v95 = v4;
        *((_QWORD*)&v95_.v95 + 1) = v5;
        *(_QWORD*)&v85_.v94 = v84;
        *((_QWORD*)&v85_.v94 + 1) = v82 + 16 * v80;
        {
          v71 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16104) + 3104LL) + 48LL);
          __asm__ volatile("" ::"r"(v71));
        }
        *(_QWORD*)&v95_.v96 = v83;
        *((_QWORD*)&v95_.v96 + 1) = v71;
        if (!cuda_debugger_api_7cff0()) {
        LABEL_38:
          {
            v73 = *(_DWORD*)(a1 + 188);
            __asm__ volatile("" ::"r"(v73));
          }
          v74 = 16;
          if (v73 == 3) {
            v74 = 168;
          }
          v75 = 132;
          {
            v76 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v74);
            __asm__ volatile("" ::"r"(v76));
          }
          if (v73 == 3) {
            v75 = 52;
          }
          if (*(_DWORD*)(v76 + v75) != 0) {
            v85_.v86 = *(_QWORD*)(v85_.v94 + 32);
            v85_.v87 = v85_.v94;
            {
              v77 = *(_QWORD*)(v85_.v86 + 24);
              __asm__ volatile("" ::"r"(v77));
            }
            v85_.v88 = 0;
            v85_.v89 = *((_QWORD*)&v85_.v94 + 1);
            v85_.v93 = v95_.v95;
            v85_.v85[0] = 80;
            v85_.v85[1] = v77;
            v85_.v90 = v95_.v96;
            v85_.v91 = DWORD2(v95_.v96);
            v85_.v92 = 3;
            if (v73 == 3) {
              v78 = 21;
            }
            else {
              v78 = 2;
            }
            if (v73 == 3) {
              v79 = 13;
            }
            else {
              v79 = 33;
            }
            cuda_driver_20b420(v78, v79, (__int64)v85_.v85);
          }
          return 0;
        }
      }
      else {
        v63 = 0;
        LODWORD(v71) = 0;
        v54 = 0;
        v84 = 0;
        if (!cuda_debugger_api_7cff0()) {
          goto LABEL_38;
        }
      }
      v72 = CudaDriverStub_1db800(*(_QWORD*)(v84 + 96));
      CudaDriverRoutine_7fa50(a1, 256, v72, v54, v71, v63, 0,
                              (__int64)&v95_.v95, 0x10u, 1);
      goto LABEL_38;
    }
  }
  return result;
}

long double nvidia_12700(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  int v4;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  __int16 v13;
  unsigned __int64 v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  __int64 v20;
  unsigned int* v21;
  unsigned int v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  int8x16_t v28;
  int8x8_t v29;
  int v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  int8x16_t v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  int v40;
  unsigned __int64 v41;
  int v42;
  int8x16_t v43;
  int v44;
  __int64 v45;
  int8x16_t v47;
  int8x16_t v48;
  __int128 v49;
  __int64 v50;
  _DWORD v51[8];
  struct {
    _QWORD v52[2];
    int8x16_t v53;
    int8x16_t v54;
    __int128 v55;
  } v52_;

  {
    v4 = *(_DWORD*)(a3 + 20);
    __asm__ volatile("" ::"r"(v4));
  }
  v50 = 0;
  *(_OWORD*)v52_.v52 = (__typeof__(*(_OWORD*)v52_.v52)){0};
  v52_.v53 = (__typeof__(v52_.v53)){0};
  v52_.v54 = (__typeof__(v52_.v54)){0};
  v52_.v55 = (__typeof__(v52_.v55)){0};
  *(_DWORD*)(a3 + 20) = v4 & 0x3FFFFFF;
  {
    v9 = *(_DWORD*)(a3 + 44) & 0xFFFCBFFF;
    __asm__ volatile("" ::"r"(v9));
  }
  memset(v51, 0, sizeof(v51));
  *(_DWORD*)(a3 + 44) = v9;
  CudaDriverRoutine_bbd70(a2, &v50);
  {
    v10 = *(_DWORD*)(a3 + 68);
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = HIDWORD(v50) & 0x1FFFF | (*(_DWORD*)(a3 + 196) >> 17 << 17);
    __asm__ volatile("" ::"r"(v11));
  }
  *(_DWORD*)(a3 + 192) = v50;
  *(_DWORD*)(a3 + 196) = v11;
  *(_DWORD*)(a3 + 44) |= 0x44000000u;
  {
    v12 = *(_DWORD*)(a3 + 80);
    __asm__ volatile("" ::"r"(v12));
  }
  *(_DWORD*)(a3 + 116) = *(_DWORD*)(a3 + 116) & 0x7FFFFFF | 0x8000000;
  {
    v13 = *(_DWORD*)(a2 + 392);
    __asm__ volatile("" ::"r"(v13));
  }
  *(_DWORD*)(a3 + 88) = 0;
  *(_DWORD*)(a3 + 80) = v12 & 0xFFFE00FF | ((v13 & 0x1FF) << 8);
  *(_DWORD*)(a3 + 84) = 0;
  *(_BYTE*)(a3 + 72) = 36;
  *(_BYTE*)(a3 + 127) = -126;
  {
    v14 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3888LL);
    __asm__ volatile("" ::"r"(v14));
  }
  v15 = ((unsigned __int64)(unsigned int)(v14 - 1) + 8448) / v14 * v14;
  v16 = v10 & 0xFFFC0000 | v15 & 0x3FFFF;
  *(_DWORD*)(a3 + 68) = v16;
  v17 = (CudaDriverRoutine_3750(0x4000u, 0) & 0x7F) << 18;
  *(_DWORD*)(a3 + 68) = v16 & 0xFE03FFFF | v17;
  v18 = v17 & 0x3FC0000 |
        ((unsigned int)CudaDriverRoutine_3750(0x29000u, 0) << 25) |
        v15 & 0x3FFFF;
  {
    v19 = *(_DWORD*)(a3 + 80);
    __asm__ volatile("" ::"r"(v19));
  }
  *(_DWORD*)(a3 + 68) = v18;
  *(_DWORD*)(a3 + 80) =
      v19 & 0xFF01FFFF | ((CudaDriverRoutine_3750(0x4000u, 0) & 0x7F) << 17);
  v20 = CudaDriverStub_112e30(*(_QWORD*)(a1 + 96));
  CudaDriverRoutine_96f20(a1, a2, v20, 0, (__int64)v52_.v52, (__int64)v51);
  {
    v21 = *(unsigned int**)(a1 + 64);
    __asm__ volatile("" ::"r"(v21));
  }
  if (v21[944] != 0) {
    v22 = 1075;
    v23 = 0;
    do {
      while (1) {
        {
          v24 = v52_.v52[v23];
          __asm__ volatile("" ::"r"(v24));
        }
        if (v24 != 0) {
          break;
        }
        *(_DWORD*)(a3 + 4LL * ((unsigned int)(v23 + 640) >> 5)) &= ~(1 << v23);
        {
          v21 = *(unsigned int**)(a1 + 64);
          __asm__ volatile("" ::"r"(v21));
        }
        ++v23;
        v22 += 64;
        if (v23 >= v21[944]) {
          goto LABEL_6;
        }
      }
      {
        v25 = ((v51[v23] + v21[946] - 1) / v21[946] * v21[946]) << 15;
        __asm__ volatile("" ::"r"(v25));
      }
      *(_DWORD*)(a3 + 4LL * ((unsigned int)(v23 + 640) >> 5)) |= 1 << v23;
      *(_DWORD*)(a3 + 4LL * (v22 >> 5)) =
          v25 & 0xFFF80000 | *(_DWORD*)(a3 + 4LL * (v22 >> 5)) & 0x7FFFF;
      *(_DWORD*)(a3 + 4LL * ((v22 - 19) >> 5)) =
          HIDWORD(v24) & 0x1FFFF |
          (*(_DWORD*)(a3 + 4LL * ((v22 - 19) >> 5)) >> 17 << 17);
      *(_DWORD*)(a3 + 4LL * ((v22 - 51) >> 5)) = v24;
      {
        v21 = *(unsigned int**)(a1 + 64);
        __asm__ volatile("" ::"r"(v21));
      }
      ++v23;
      v22 += 64;
    } while (v23 < v21[944]);
  }
LABEL_6:
  *(_DWORD*)(a3 + 4LL * ((v21[2927] + 640) >> 5)) |= 1 << v21[2927];
  {
    v26 = (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) +
                         1075) >>
          5;
    __asm__ volatile("" ::"r"(v26));
  }
  *(_DWORD*)(a3 + 4LL * v26) = *(_DWORD*)(a3 + 4LL * v26) & 0x7FFFF | 0xE000000;
  {
    v27 = (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) +
                         1056) >>
          5;
    __asm__ volatile("" ::"r"(v27));
  }
  *(_DWORD*)(a3 + 4LL * v27) = ((unsigned __int64)(a4 + 2048) >> 32) & 0x1FFFF |
                               (*(_DWORD*)(a3 + 4LL * v27) >> 17 << 17);
  *(_DWORD*)(a3 +
             4LL * ((unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL)
                                    << 6) +
                                   1024) >>
                    5)) = a4 + 2048;
  *(_WORD*)(a3 + 74) = 32;
  LANES128(v28).n128_u64[0] = *(_QWORD*)(a3 + 8);
  PSEUDO_LOW_LANE64(v29, n64_u64, *(unsigned __int64*)(a3 + 16));
  *(_DWORD*)(a3 + 76) = 65537;
  LOBYTE(v27) = *(_BYTE*)(a3 + 123);
  *(_DWORD*)(a3 + 116) =
      *(_DWORD*)(a1 + 1276) & 0xFFFFFF | (*(unsigned __int8*)(a3 + 119) << 24);
  {
    v30 = *(_DWORD*)(a1 + 1280) & 0xFFFFFF | ((unsigned __int8)v27 << 24);
    __asm__ volatile("" ::"r"(v30));
  }
  {
    v31 = *(_DWORD*)(a3 + 44);
    __asm__ volatile("" ::"r"(v31));
  }
  *(_DWORD*)(a3 + 120) = v30;
  {
    v32 = *(_DWORD*)(a3 + 4) & 0x80000000;
    __asm__ volatile("" ::"r"(v32));
  }
  {
    v33 = *(_DWORD*)a3 & 0x80000000;
    __asm__ volatile("" ::"r"(v33));
  }
  *(_QWORD*)(a3 + 44) = (v31 & 0xFFF74000) + 557056;
  *(_DWORD*)a3 = v33;
  *(_DWORD*)(a3 + 4) = v32 | 0xFFFFF;
  *(_DWORD*)(a3 + 64) = (*(_DWORD*)(a3 + 64) & 0xFF8003FF) + 1327104;
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vand_s8(v29, COERCE_AS(int8x8_t, 0xFE000000FFFFF2C0LL));
  LANES128(v34).n128_u64[0] = 0x8000000080000000LL;
  LANES128(v34).n128_u64[1] = 0x8000000080000000LL;
  LANES128(v34).n128_u64[0] = LANES128_OF(vandq_s8(v28, v34)).n128_u64[0];
  LANES128(v34).n128_u64[1] =
      LANES128_OF(vorrq_s8(v28, COERCE_AS(int8x16_t, CudaDriverData_1115760)))
          .n128_u64[1];
  LANES128(v28).n128_u64[0] = *(_QWORD*)(a3 + 52);
  *(int8x16_t*)(a3 + 8) = v34;
  *(int8x8_t*)(a3 + 52) =
      vand_s8(COERCE_AS(int8x8_t, LANES128(v28).n128_u64[0]),
              COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL));
  v35 = CudaDriverRoutine_98340(a1);
  v36 = v50;
  v37 = v35;
  v38 = CudaDriverRoutine_15d80(v35);
  v39 = CudaDriverRoutine_13b30(v37);
  v40 = v39;
  v41 = HIDWORD(v39);
  v42 = CudaDriverRoutine_15fd0(a2);
  PSEUDO_LOW_LANE128(v43, n128_u64, v52_.v55);
  v44 = v42;
  v48 = vextq_s8(v52_.v53, v52_.v54, 8u);
  v49 = *(_OWORD*)v52_.v52;
  v47 = vextq_s8(v52_.v54, v43, 8u);
  v45 = CudaDriverStub_1db800(*(_QWORD*)(v37 + 2232));
  *(_QWORD*)(a3 + 2072) = v38;
  *(_DWORD*)(a3 + 2080) = v40;
  *(_DWORD*)(a3 + 2084) = v41;
  *(_DWORD*)(a3 + 2088) = v44;
  *(_DWORD*)(a3 + 2092) = 0;
  *(_QWORD*)(a3 + 2104) = a4;
  *(_QWORD*)(a3 + 2352) = 0;
  *(_QWORD*)(a3 + 2360) = v45;
  *(_QWORD*)(a3 + 8288) = v36;
  *(_QWORD*)(a3 + 8312) = 0;
  *(_QWORD*)(a3 + 1088) = a4 + 2048;
  *(_QWORD*)(a3 + 2064) = 0x100000001LL;
  *(int8x16_t*)(a3 + 2128) = v48;
  *(int8x16_t*)(a3 + 2144) = v47;
  *(_QWORD*)(a3 + 2096) = -4;
  *(_OWORD*)(a3 + 2112) = v49;
  *(_OWORD*)(a3 + 2048) = CudaDriverData_1115550;
  *(_OWORD*)(a3 + 2160) = (__typeof__(*(_OWORD*)(a3 + 2160))){0};
  *(_OWORD*)(a3 + 2176) = (__typeof__(*(_OWORD*)(a3 + 2176))){0};
  *(_OWORD*)(a3 + 2192) = (__typeof__(*(_OWORD*)(a3 + 2192))){0};
  *(_OWORD*)(a3 + 2208) = (__typeof__(*(_OWORD*)(a3 + 2208))){0};
  *(_OWORD*)(a3 + 2224) = (__typeof__(*(_OWORD*)(a3 + 2224))){0};
  *(_OWORD*)(a3 + 2240) = (__typeof__(*(_OWORD*)(a3 + 2240))){0};
  *(_OWORD*)(a3 + 2256) = (__typeof__(*(_OWORD*)(a3 + 2256))){0};
  *(_OWORD*)(a3 + 2272) = (__typeof__(*(_OWORD*)(a3 + 2272))){0};
  *(_OWORD*)(a3 + 2288) = (__typeof__(*(_OWORD*)(a3 + 2288))){0};
  *(_OWORD*)(a3 + 2304) = (__typeof__(*(_OWORD*)(a3 + 2304))){0};
  *(_OWORD*)(a3 + 2320) = (__typeof__(*(_OWORD*)(a3 + 2320))){0};
  *(_OWORD*)(a3 + 2336) = (__typeof__(*(_OWORD*)(a3 + 2336))){0};
  *(_OWORD*)(a3 + 2384) = (__typeof__(*(_OWORD*)(a3 + 2384))){0};
  *(_OWORD*)(a3 + 2368) = (__typeof__(*(_OWORD*)(a3 + 2368))){0};
  *(_OWORD*)(a3 + 8296) = (__typeof__(*(_OWORD*)(a3 + 8296))){0};
  return *(long double*)&CudaDriverData_1115550;
}

__int64 nvidia_19440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD* a5,
                     __int64 a6)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  void* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int v29;
  _DWORD* v30;
  __int64 v31;
  __int64 v33;
  __int64 v34;

  v11 = CudaDriverRoutine_98340(a1);
  v12 = CudaDriverRoutine_15d80(v11);
  v13 = CudaDriverRoutine_13b30(v11);
  *(_QWORD*)(a6 + 24) = v12;
  *(_QWORD*)(a6 + 32) = v13;
  *(_DWORD*)a6 = *(_DWORD*)(a4 + 168);
  *(_DWORD*)(a6 + 4) = *(_DWORD*)(a4 + 172);
  *(_DWORD*)(a6 + 8) = *(_DWORD*)(a4 + 176);
  *(_DWORD*)(a6 + 12) = *(_DWORD*)(a4 + 144);
  *(_DWORD*)(a6 + 16) = *(_DWORD*)(a4 + 148);
  *(_DWORD*)(a6 + 20) = *(_DWORD*)(a4 + 152);
  if (*(_BYTE*)(a4 + 352) != 0) {
    *(_DWORD*)(a6 + 40) = 0x1000000 - (*(int*)(a4 + 356) + *(int*)(a4 + 360));
    {
      v14 = *(_QWORD*)(a4 + 136);
      __asm__ volatile("" ::"r"(v14));
    }
    if (v14 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  *(_DWORD*)(a6 + 40) = CudaDriverRoutine_15fd0(a2);
  {
    v14 = *(_QWORD*)(a4 + 136);
    __asm__ volatile("" ::"r"(v14));
  }
  if (v14 != 0) {
  LABEL_3:
    *(_QWORD*)(a6 + 56) = *(_QWORD*)(v14 + 8);
  }
LABEL_4:
  if (CudaDriverRoutine_985b0(*(_DWORD*)(*(_QWORD*)(a2 + 32) + 32LL))) {
    v15 = *(_OWORD*)(a2 + 688);
    v16 = *(_OWORD*)(a2 + 704);
    v17 = *(_OWORD*)(a2 + 720);
    *(_OWORD*)(a6 + 184) = *(_OWORD*)(a2 + 736);
    *(_OWORD*)(a6 + 168) = v17;
    *(_OWORD*)(a6 + 152) = v16;
    *(_OWORD*)(a6 + 136) = v15;
    v18 = *(_OWORD*)(a2 + 752);
    v19 = *(_OWORD*)(a2 + 768);
    v20 = *(_OWORD*)(a2 + 784);
    *(_OWORD*)(a6 + 248) = *(_OWORD*)(a2 + 800);
    *(_OWORD*)(a6 + 232) = v20;
    *(_OWORD*)(a6 + 216) = v19;
    *(_OWORD*)(a6 + 200) = v18;
    CudaDriverRoutine_208ba0(*(_QWORD**)(v11 + 2112), 0, 0, (_QWORD*)(a6 + 112),
                             (_QWORD*)(a6 + 128));
  }
  else {
    *(_QWORD*)(a6 + 112) = 0;
    *(_QWORD*)(a6 + 128) = 0;
  }
  *(_QWORD*)(a6 + 120) = 0;
  CudaDriverRoutine_208af0(*(_QWORD**)(v11 + 2112), &v34, &v33);
  v21 = CudaDriverData_1422118;
  if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) != 0) {
    v22 = v33;
    *(_QWORD*)(a6 + 248) = v34;
    *(_QWORD*)(a6 + 256) = v22;
  }
  *(_QWORD*)(a6 + 64) = *a5;
  *(_QWORD*)(a6 + 72) = a5[1];
  *(_QWORD*)(a6 + 80) = a5[3];
  *(_QWORD*)(a6 + 88) = a5[4];
  *(_QWORD*)(a6 + 96) = a5[5];
  {
    v23 = a5[6];
    __asm__ volatile("" ::"r"(v23));
  }
  *(_DWORD*)(a6 + 264) = 0;
  *(_QWORD*)(a6 + 104) = v23;
  *(_DWORD*)(a6 + 268) = *(_DWORD*)(v11 + 164);
  {
    v24 = *(_DWORD*)(a4 + 288);
    __asm__ volatile("" ::"r"(v24));
  }
  *(_DWORD*)(a6 + 44) = v24;
  *(_DWORD*)(a6 + 276) = *(_DWORD*)(a2 + 140);
  v25 = CudaDriverRoutine_99f40(*(_QWORD*)(a1 + 64), (_DWORD*)(a2 + 128), v24);
  {
    v26 = *(_DWORD*)(a6 + 276);
    __asm__ volatile("" ::"r"(v26));
  }
  if (v26 != 0) {
    {
      v26 = (v25 - *(int*)(a2 + 140) + *(int*)(a2 + 396) + 15) & 0xFFFFFFF0;
      __asm__ volatile("" ::"r"(v26));
    }
    v27 = v26 + 288;
  }
  else {
    v27 = 0;
  }
  *(_DWORD*)(a6 + 292) = v26;
  *(_DWORD*)(a6 + 288) = v27;
  *(_DWORD*)(a6 + 272) = 0;
  v28 = CudaDriverRoutine_162c0(v11, a2);
  {
    v29 = *(_DWORD*)(a2 + 632);
    __asm__ volatile("" ::"r"(v29));
  }
  *(_QWORD*)(a6 + 280) = 0;
  *(_DWORD*)(a6 + 300) = v29 + v28;
  if ((unsigned __int8)CudaDriverRoutine_9ab10(*(_QWORD*)(a1 + 64)) != 0 &&
      (*((_BYTE*)&CudaDriverRoutine_4728 + (_QWORD)v21) & 2) == 0) {
    {
      v30 = *(_DWORD**)(a1 + 64);
      __asm__ volatile("" ::"r"(v30));
    }
    if (v30[5466] != 1) {
      *(_DWORD*)(a6 + 296) = v30[4271] + v30[4272] == 0;
    }
  }
  *(_QWORD*)(a6 + 304) = 0;
  *(_QWORD*)(a6 + 312) = CudaDriverStub_1db800(*(_QWORD*)(v11 + 2232));
  if (*(_BYTE*)(a4 + 204) != 0 && *(_BYTE*)(a4 + 205) != 0) {
    v31 = *(_QWORD*)(a2 + 104);
    __asm__ volatile("" ::"r"(v31));
  }
  else {
    v31 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
        *(_QWORD*)(a2 + 96));
  }
  *(_QWORD*)(a6 + 320) = v31;
  *(_DWORD*)(a6 + 328) = *(int*)(a4 + 288) + *(int*)(a2 + 128) +
                         *(int*)(a2 + 136) + *(int*)(a2 + 140);
  return 0;
}

__int64 nvidia_25b80()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  struct {
    __int64 v5;
    __int64 v6;
    __int64 v7;
  } v5_;
  __int64 v8;

  v4 = 0;
  v5_.v5 = 0;
  v8 = 0;
  result = nvidia_121c60(&v5_.v5);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_df0b0(v5_.v5, (unsigned __int64)&v8,
                                     (unsigned __int64)&v4, 0);
    if ((_DWORD)result == 0) {
      v1 = v4 != 0 ? v4 : v8;
      result = CudaDriverRoutine_980c0(v1);
      if ((_DWORD)result == 0) {
        {
          v2 = *(__int64*)((char*)(*(void*(*)[1])0x28LL) +
                           (_QWORD)CudaDriverData_14225e0);
          __asm__ volatile("" ::"r"(v2));
        }
        if (*(_DWORD*)v1 == 1) {
          if (*(_DWORD*)((char*)((__int64*)0x10LL) + v2) != 0) {
            v3 = 4;
            LODWORD(v5_.v5) = 24;
            v5_.v6 = *(_QWORD*)(v1 + 168);
            v5_.v7 = v1;
          LABEL_13:
            cuda_driver_20b420(5u, v3, (__int64)&v5_.v5);
          }
        }
        else if (*(int*)((char*)((int*)0x4LL) + v2) != 0) {
          v3 = 1;
          v5_.v6 = v1;
          v5_.v7 = 0;
          LODWORD(v5_.v5) = 24;
          goto LABEL_13;
        }
        return 0;
      }
    }
  }
  return result;
}

__int64 nvidia_2bb60(__int64 a1, _QWORD** a2, __int64 a3, char a4, __int64 a5,
                     _BYTE* a6, __int64 a7)
{
  __int64 result;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  int v21;
  __int128 v22;
  __int64 v23;
  __int64 v24;
  struct {
    _QWORD v25[18];
    _QWORD* v26;
  } v25_;
  struct {
    char gap160_[8];
    _BYTE v27[56];
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
    __int128 v41;
    __int128 v42;
    __int128 v43;
    __int128 v44;
    __int64 v45;
  } v27_;
  __int64 v46;

  v46 = 0;
  if (a6 != nullptr) {
    *a6 = 0;
  }
  if (a2 == nullptr) {
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"Kernel node parameters cannot be NULL");
    return 1;
  }
  result = cuda_driver_bbeb0(a1, &v46, (__int64)*a2, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (*(_DWORD*)a3 == 1) {
    if (a4 == 0) {
      result = cuda_driver_misc_helpers_deeb0(a3, 0);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    if (v46 != *(_QWORD*)(a3 + 168)) {
      nvidia_ed630((__int64)"CUDA", 0,
                   (__int64)"Function context must match green context's "
                            "parent context");
      return 201;
    }
    v46 = a3;
  }
  if (CudaDriverRoutine_ba980(*a2)) {
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"Kernels using texture and surface references are "
                          "not supported");
    if (a6 != nullptr) {
      *a6 = 1;
    }
    return 801;
  }
  v14 = (__int64)*a2;
  {
    v15 = (*a2)[106];
    __asm__ volatile("" ::"r"(v15));
  }
  if ((v15 & 0xEBFFFFFFFFFFFFF6LL | (*a2)[107]) != 0) {
    nvidia_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Function %s contains code that is not supported on HOS.",
        *(const char**)(v14 + 8));
    return 801;
  }
  if (v15 >> 60 != 0 && (*(_WORD*)(*(_QWORD*)(v46 + 64) + 16848LL) & 4) == 0) {
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"Kernels which launch device graphs require unified "
                          "addressing support");
    return 801;
  }
  result = cuda_driver_ba0b0(v14, *((_DWORD*)a2 + 5), *((_DWORD*)a2 + 6),
                             *((_DWORD*)a2 + 7));
  if ((_DWORD)result == 0) {
    result =
        CudaDriverRoutine_ba240((__int64)*a2, *((unsigned int*)a2 + 2),
                                *((_DWORD*)a2 + 3), *((unsigned int*)a2 + 4));
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_bab60((__int64)*a2, *((_DWORD*)a2 + 8));
      if ((_DWORD)result == 0) {
        if (a5 == 0) {
          return 0;
        }
        result = cuda_driver_ba410((__int64)*a2, *(_DWORD*)(a5 + 44),
                                   *(_DWORD*)(a5 + 48), *(_DWORD*)(a5 + 52),
                                   *((_DWORD*)a2 + 2), *((_DWORD*)a2 + 3),
                                   *((_DWORD*)a2 + 4));
        if ((_DWORD)result == 0) {
          result = cuda_driver_ba620(
              *(_DWORD*)(a5 + 60), *(_DWORD*)(a5 + 64), *(_DWORD*)(a5 + 68),
              *(_DWORD*)(a5 + 44), *(_DWORD*)(a5 + 48), *(_DWORD*)(a5 + 52),
              *((_DWORD*)a2 + 2), *((_DWORD*)a2 + 3), *((_DWORD*)a2 + 4));
          if ((_DWORD)result == 0) {
            if (*(_DWORD*)(a5 + 32) != 0) {
              {
                v17 = a2[1];
                __asm__ volatile("" ::"r"(v17));
              }
              {
                v18 = *(_QWORD*)(a5 + 44);
                __asm__ volatile("" ::"r"(v18));
              }
              {
                v20 = *((_DWORD*)a2 + 4);
                __asm__ volatile("" ::"r"(v20));
              }
              {
                v19 = *((_DWORD*)a2 + 5);
                __asm__ volatile("" ::"r"(v19));
              }
              v27_.v45 = 0;
              {
                v21 = *(_DWORD*)(a5 + 68);
                __asm__ volatile("" ::"r"(v21));
              }
              memset(v25_.v25, 0, sizeof(v25_.v25));
              *(_QWORD*)v27_.v27 = v20;
              v25_.v26 = v17;
              *(_QWORD*)&v22 = a2[3];
              *((_QWORD*)&v22 + 1) = v18;
              memset(&v27_.v27[8], 0, 48);
              *(_DWORD*)&v27_.v27[12] = v20;
              *(_DWORD*)&v27_.v27[16] = v19;
              v27_.v28 = (__typeof__(v27_.v28)){0};
              HIDWORD(v27_.v28) = v21;
              v27_.v29 = (__typeof__(v27_.v29)){0};
              v27_.v30 = (__typeof__(v27_.v30)){0};
              v27_.v31 = (__typeof__(v27_.v31)){0};
              v27_.v32 = (__typeof__(v27_.v32)){0};
              v27_.v33 = (__typeof__(v27_.v33)){0};
              v27_.v34 = (__typeof__(v27_.v34)){0};
              v27_.v35 = (__typeof__(v27_.v35)){0};
              v27_.v36 = (__typeof__(v27_.v36)){0};
              v27_.v37 = (__typeof__(v27_.v37)){0};
              v27_.v38 = (__typeof__(v27_.v38)){0};
              v27_.v39 = (__typeof__(v27_.v39)){0};
              v27_.v40 = (__typeof__(v27_.v40)){0};
              v27_.v41 = (__typeof__(v27_.v41)){0};
              v27_.v42 = (__typeof__(v27_.v42)){0};
              v27_.v43 = (__typeof__(v27_.v43)){0};
              v27_.v44 = (__typeof__(v27_.v44)){0};
              {
                v23 = *(_QWORD*)(a5 + 52);
                __asm__ volatile("" ::"r"(v23));
              }
              *(_QWORD*)&v27_.v27[4] = v25_.v26;
              *(_QWORD*)&v27_.v27[36] = v23;
              *(_OWORD*)&v27_.v27[20] = v22;
              *(_QWORD*)((char*)&v27_.v28 + 4) = *(_QWORD*)(a5 + 60);
              v24 = CudaDriverRoutine_98340(v46);
              result =
                  nvidia_e7820(v24, (__int64)*a2, v25_.v25, *((_DWORD*)a2 + 8));
              if ((_DWORD)result != 0) {
                return result;
              }
              if (a2[6] != nullptr) {
                nvidia_ed630((__int64)"CUDA", 0,
                             (__int64)"Cooperative kernels cannot use the "
                                      "extra field for kernel parameters");
                return 1;
              }
            }
            result = 0;
            if (a7 != 0 && *(_BYTE*)(a5 + 85) != 0 && v46 != a7) {
              nvidia_ed630((__int64)"CUDA", 0,
                           (__int64)"Context of device-updatable nodes cannot "
                                    "be changed");
              return 801;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 nvidia_34020(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v15;
  __int64 result;
  __int128 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  char v27;
  char v28;
  __int64 v29;
  unsigned int v30;
  void* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int128 v44;
  __int128 v45;
  __int128 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  unsigned int v51;
  unsigned int v52;
  _BYTE v53[4];
  _QWORD* v54;
  __int128 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  struct {
    __int128 v61;
    __int128 v62;
    __int128 v63;
    __int128 v64;
    __int128 v65;
  } v61_;
  struct {
    __int128 v66;
    __int128 v67;
  } v66_;
  struct {
    _QWORD v68[6];
    __int128 v69;
    __int128 v70;
    __int128 v71;
    __int128 v72;
    __int64 v73;
  } v68_;
  _QWORD v74[4];

  if (*(_QWORD*)(a7 + 992) != 0) {
    {
      v15 = *(_QWORD*)(a7 + 16);
      __asm__ volatile("" ::"r"(v15));
    }
    v68_.v73 = 0;
    v61_.v65 = (__typeof__(v61_.v65)){0};
    v66_.v66 = (__typeof__(v66_.v66)){0};
    v66_.v67 = (__typeof__(v66_.v67)){0};
    memset(v68_.v68, 0, sizeof(v68_.v68));
    v68_.v69 = (__typeof__(v68_.v69)){0};
    v68_.v70 = (__typeof__(v68_.v70)){0};
    v68_.v71 = (__typeof__(v68_.v71)){0};
    v68_.v72 = (__typeof__(v68_.v72)){0};
    v61_.v61 = (__typeof__(v61_.v61)){0};
    v61_.v62 = (__typeof__(v61_.v62)){0};
    v61_.v63 = (__typeof__(v61_.v63)){0};
    v61_.v64 = (__typeof__(v61_.v64)){0};
    result = cuda_driver_e7e60(a6, v15, (__int64)v68_.v68, 1);
    if ((_DWORD)result != 0) {
      return result;
    }
    CudaDriverRoutine_e8250(v68_.v68, (_DWORD*)a4, a7, a5, (__int64)&v61_.v61);
    if (*((_QWORD*)&v68_.v69 + 1) != 0) {
      CudaDriverRoutine_b4eb0(*(_QWORD*)(*((_QWORD*)&v68_.v69 + 1) + 8LL));
    }
    if ((_QWORD)v68_.v72 != 0) {
      CudaDriverRoutine_b4eb0(*(_QWORD*)(v68_.v72 + 8));
    }
    CudaDriverStub_107f90(*(_QWORD*)(*(_QWORD*)(a7 + 992) + 272LL) + 592LL);
    v17 = *(_OWORD*)a6;
    v54 = (_QWORD*)a4;
    {
      v18 = *(_DWORD*)(a6 + 24);
      __asm__ volatile("" ::"r"(v18));
    }
    {
      v19 = *(_QWORD*)(a7 + 16);
      __asm__ volatile("" ::"r"(v19));
    }
    {
      v20 = *(unsigned int*)(a7 + 1036);
      __asm__ volatile("" ::"r"(v20));
    }
    {
      v21 = *(__int64**)(a7 + 1000);
      __asm__ volatile("" ::"r"(v21));
    }
    v59 = a9;
    v60 = 0;
    v58 = a8;
    v57 = v18;
    v55 = v17;
    {
      v56 = *(_QWORD*)(a6 + 16);
      __asm__ volatile("" ::"r"(v56));
    }
    v22 = nvidia_2bb60(a2, &v54, v19, 1, (__int64)&v61_.v61, v53, 0);
    if (v22 != 0) {
      if (v53[0] != 0) {
        v23 = 900;
      }
      else {
        v23 = v22;
      }
      CudaDriverRoutine_c59c0(*(_QWORD*)(a7 + 992), 901);
      v24 = v60;
      if (v60 == 0) {
        goto LABEL_28;
      }
      goto LABEL_27;
    }
    v37 = cuda_driver_d6360(&v60, *(_QWORD*)(a7 + 992), 0, 0, (__int64)v21, v20,
                            (__int64)&v54, v19);
    if (v37 == 0) {
      if (*(_BYTE*)(a7 + 1172) != 0) {
        nvidia_e73b0(v60 + 184, a7);
      }
      if ((_QWORD)v68_.v69 != 0 && *(_DWORD*)(v68_.v69 + 8) != 0 &&
          (_DWORD)v20 != 0) {
        while (1) {
          {
            v38 = *v21;
            __asm__ volatile("" ::"r"(v38));
          }
          v21 += 2;
          v37 = CudaDriverRoutine_d5e70(v38, v60);
          if (v37 != 0) {
            break;
          }
          if (--v20 == 0) {
            goto LABEL_36;
          }
        }
      }
      else {
      LABEL_36:
        if (*((_QWORD*)&v68_.v69 + 1) == 0 ||
            ((v39 = *(_QWORD*)(a7 + 992), v74[0] = v60, v74[1] = 0x10000,
              v40 = *(_QWORD*)(*((_QWORD*)&v68_.v69 + 1) + 8LL),
              *(_DWORD*)(*((_QWORD*)&v68_.v69 + 1) + 20LL) == 0)
                 ? (v41 = 1)
                 : (v41 = 2),
             LOBYTE(v74[1]) = v41,
             (v37 = CudaDriverRoutine_b4f40(v39, v40, 0, (__int64)v74, 1u)) ==
                 0)) {
          if ((_QWORD)v68_.v72 == 0 ||
              (v42 = *(_QWORD*)(a7 + 992), v74[0] = v60, v74[1] = 2,
               (v37 = CudaDriverRoutine_b4f40(v42, *(_QWORD*)(v68_.v72 + 8), 0,
                                              (__int64)v74, 1u)) == 0)) {
            v43 = v60;
            if (BYTE5(v66_.v66) != 0) {
              v37 = CudaDriverRoutine_d64a0((__int64)&v66_.v66 + 8,
                                            *(_QWORD*)(v60 + 1200));
              if (v37 != 0) {
                goto LABEL_26;
              }
              v43 = v60;
              *(_BYTE*)(*(_QWORD*)(v60 + 24) + 332LL) = 1;
            }
            v44 = v66_.v66;
            v74[0] = v43;
            v74[1] = 0;
            *(_OWORD*)(v43 + 920) = v61_.v65;
            *(_OWORD*)(v43 + 936) = v44;
            *(_OWORD*)(v43 + 952) = v66_.v67;
            v45 = v61_.v62;
            *(_OWORD*)(v43 + 856) = v61_.v61;
            *(_OWORD*)(v43 + 872) = v45;
            v46 = v61_.v64;
            *(_OWORD*)(v43 + 888) = v61_.v63;
            *(_OWORD*)(v43 + 904) = v46;
            v37 = CudaDriverRoutine_1a3d20(a7 + 1000, (unsigned __int8*)v74);
            if (v37 == 0) {
              if (BYTE5(v66_.v66) != 0) {
                v47 = CudaDriverStub_1db800(*((_QWORD*)&v66_.v66 + 1));
                *(_QWORD*)(*((_QWORD*)&v68_.v72 + 1) + 16LL) = v47;
              }
              v23 = 0;
              goto LABEL_28;
            }
          }
        }
      }
    }
  LABEL_26:
    v23 = v37;
    v24 = v60;
    if (v60 == 0) {
    LABEL_28:
      CudaDriverStub_108070(*(_QWORD*)(*(_QWORD*)(a7 + 992) + 272LL) + 592LL);
      return v23;
    }
  LABEL_27:
    cuda_driver_c3200(v24, 0);
    goto LABEL_28;
  }
  LODWORD(v61_.v61) = 0;
  result = cuda_driver_33a60(a3, a4, a5, (unsigned int*)a6, a7, a8, a9);
  if ((_DWORD)result == 0) {
    v27 = ((__int64 (*)(_QWORD*))CudaDriverRoutine_ba980)((_QWORD*)a4);
    if (*(_BYTE*)(a5 + 204) == 0 || v27 != 0 || cuda_driver_116e40(a7) ||
        (v48 = CudaDriverRoutine_98340(a3), cuda_driver_108520(v48 + 24),
         v49 = cuda_driver_116e60(a7), v50 = CudaDriverRoutine_98340(a3),
         CudaDriverRoutine_1085d0(v50 + 24), v49 == 0)) {
      v28 = cuda_driver_118a60(a3, a7, 0, v27);
      v29 = CudaDriverRoutine_98340(a3);
      v30 = CudaDriverRoutine_9e520(v29, a4, a5 + 296, (_DWORD*)(a5 + 344));
      if (v30 == 0) {
        v31 = CudaDriverData_14225e0;
        while (1) {
          v32 = CudaDriverRoutine_98340(a3);
          {
            v33 = *(__int64*)((char*)((__int64*)0x18LL) + (_QWORD)v31);
            __asm__ volatile("" ::"r"(v33));
          }
          LODWORD(v61_.v61) = 0;
          {
            v34 = *(_DWORD*)((char*)(*(void*(*)[3])0x28LL) + v33 + 4);
            __asm__ volatile("" ::"r"(v34));
          }
          if (v34 != 0) {
            {
              v35 = *(_QWORD*)(a4 + 32);
              __asm__ volatile("" ::"r"(v35));
            }
            v68_.v68[1] = v32;
            v68_.v68[2] = a7;
            LODWORD(v68_.v68[0]) = 48;
            v68_.v68[5] = &v61_.v61;
            v68_.v68[3] = v35;
            v68_.v68[4] = a4;
            cuda_driver_20b420(3u, 0xBu, (__int64)v68_.v68);
            LOBYTE(v34) = (_DWORD)v61_.v61 != 0;
          }
          if (v28 == 0 || ((*(_DWORD*)(a5 + 344) != 3) | v34 & 1) == 0) {
            break;
          }
          CudaDriverRoutine_118bc0(a3, a7, v28);
          v28 = cuda_driver_118a60(a3, a7, 0, 1);
          v36 = CudaDriverRoutine_98340(a3);
          v30 = CudaDriverRoutine_9e520(v36, a4, a5 + 296, (_DWORD*)(a5 + 344));
          if (v30 != 0) {
            goto LABEL_53;
          }
        }
        v30 = CudaDriverRoutine_33c90(a1, a3, a4, a5, a7);
      }
    LABEL_53:
      v51 = v30;
      CudaDriverRoutine_118bc0(a3, a7, v28);
      result = v51;
    }
    else {
      result = v49;
    }
  }
  if (*(_BYTE*)(a5 + 480) == 0) {
    v52 = result;
    CudaDriverRoutine_120f80(a3, a7, a4, a5);
    return v52;
  }
  return result;
}

unsigned __int64* nvidia_4d420(unsigned __int64* result, unsigned __int64 a2,
                               unsigned __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64* v4;
  unsigned __int64* v5;
  unsigned __int64 v6;
  unsigned __int64* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int64x2_t v13;
  int64x2_t v14;
  int8x16_t* v15;
  unsigned __int64 v16;
  int64x2_t v17;
  unsigned __int64 v18;
  int64x2_t v19;
  int64x2_t v20;
  int64x2_t v21;
  int64x2_t v22;
  int8x16_t v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;

  if (result != nullptr && a2 <= a3) {
    {
      v3 = *result;
      __asm__ volatile("" ::"r"(v3));
    }
    if (a3 <= *result - 1) {
      {
        v5 = (unsigned __int64*)result[1];
        __asm__ volatile("" ::"r"(v5));
      }
      ++result;
      v4 = v5;
      v6 = a2 >> 6;
      v7 = v3 >= 0x41 ? v4 : result;
      v8 = a3 >> 6;
      if (a3 >> 6 >= v6) {
        v9 = v8 - v6;
        v10 = -1LL << a2;
        v11 = v8 == v6 ? 0xFFFFFFFFFFFFFFFFLL >> ((~(_BYTE)a3) & 63) : -1LL;
        v7[v6] |= v10 & v11;
        if (v8 != v6) {
          if (v9 >= 4) {
            v13 = vdupq_n_s64(v6);
            v14 = vdupq_n_s64(v10);
            v12 = v6 + (v9 & 0xFFFFFFFFFFFFFFFCLL);
            {
              v15 = (int8x16_t*)&v7[v6 + 3];
              __asm__ volatile("" ::"r"(v15));
            }
            v16 = v9 & 0xFFFFFFFFFFFFFFFCLL;
            v17 = vdupq_n_s64(v8);
            v18 = a2 >> 6;
            v19 = vdupq_n_s64(0xFFFFFFFFFFFFFFFFLL >> ((~(_BYTE)a3) & 63));
            do {
              v20 = vdupq_n_s64(v18);
              v16 -= 4LL;
              v18 += 4LL;
              v21 =
                  vaddq_s64(v20, COERCE_AS(int64x2_t, CudaDriverData_1115bd0));
              v22 =
                  vaddq_s64(v20, COERCE_AS(int64x2_t, CudaDriverData_1115a20));
              v23 =
                  vorrq_s8(*v15, vandq_s8(vornq_s8(v14, vceqq_s64(v22, v13)),
                                          vornq_s8(v19, vceqq_s64(v22, v17))));
              v15[-1] = vorrq_s8(v15[-1],
                                 vandq_s8(vornq_s8(v14, vceqq_s64(v21, v13)),
                                          vornq_s8(v19, vceqq_s64(v21, v17))));
              *v15 = v23;
              v15 += 2;
            } while (v16 != 0);
            if (v9 == (v9 & 0xFFFFFFFFFFFFFFFCLL)) {
              return result;
            }
          }
          else {
            v12 = a2 >> 6;
          }
          if (v8 == v12 + 1) {
            v24 = v12;
          }
          else {
            v25 = v8 - 1;
            v26 = v7 + 1;
            do {
              v24 = v12 + 1;
              if (v6 - 1 == v12) {
                v27 = -1LL << a2;
              }
              else {
                v27 = -1;
              }
              if (v25 == v12) {
                v28 = 0xFFFFFFFFFFFFFFFFLL >> ((~(_BYTE)a3) & 63);
              }
              else {
                v28 = -1;
              }
              v29 = v27 & v28;
              {
                result = (unsigned __int64*)v26[v12];
                __asm__ volatile("" ::"r"(result));
              }
              v26[v12++] = (unsigned __int64)result | v29;
            } while (v25 != v24);
          }
          v30 = v24 + 1;
          if (v24 + 1 == v6) {
            v31 = -1LL << a2;
          }
          else {
            v31 = -1;
          }
          if (v30 == v8) {
            v32 = 0xFFFFFFFFFFFFFFFFLL >> ((~(_BYTE)a3) & 63);
          }
          else {
            v32 = -1;
          }
          v7[v30] |= v31 & v32;
        }
      }
    }
  }
  return result;
}

unsigned __int64* nvidia_4d5a0(unsigned __int64* result, unsigned __int64 a2,
                               unsigned __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64* v4;
  unsigned __int64* v5;
  unsigned __int64 v6;
  unsigned __int64* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int64x2_t v13;
  int64x2_t v14;
  int8x16_t* v15;
  unsigned __int64 v16;
  int64x2_t v17;
  unsigned __int64 v18;
  int64x2_t v19;
  int64x2_t v20;
  int64x2_t v21;
  int64x2_t v22;
  int8x16_t v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;

  if (result != nullptr && a2 <= a3) {
    {
      v3 = *result;
      __asm__ volatile("" ::"r"(v3));
    }
    if (a3 <= *result - 1) {
      {
        v5 = (unsigned __int64*)result[1];
        __asm__ volatile("" ::"r"(v5));
      }
      ++result;
      v4 = v5;
      v6 = a2 >> 6;
      v7 = v3 >= 0x41 ? v4 : result;
      v8 = a3 >> 6;
      if (a3 >> 6 >= v6) {
        v9 = v8 - v6;
        v10 = -1LL << a2;
        v11 = v8 == v6 ? 0xFFFFFFFFFFFFFFFFLL >> ((~(_BYTE)a3) & 63) : -1LL;
        v7[v6] &= ~(v10 & v11);
        if (v8 != v6) {
          if (v9 >= 4) {
            v13 = vdupq_n_s64(v6);
            v14 = vdupq_n_s64(v10);
            v12 = v6 + (v9 & 0xFFFFFFFFFFFFFFFCLL);
            {
              v15 = (int8x16_t*)&v7[v6 + 3];
              __asm__ volatile("" ::"r"(v15));
            }
            v16 = v9 & 0xFFFFFFFFFFFFFFFCLL;
            v17 = vdupq_n_s64(v8);
            v18 = a2 >> 6;
            v19 = vdupq_n_s64(0xFFFFFFFFFFFFFFFFLL >> ((~(_BYTE)a3) & 63));
            do {
              v20 = vdupq_n_s64(v18);
              v16 -= 4LL;
              v18 += 4LL;
              v21 =
                  vaddq_s64(v20, COERCE_AS(int64x2_t, CudaDriverData_1115bd0));
              v22 =
                  vaddq_s64(v20, COERCE_AS(int64x2_t, CudaDriverData_1115a20));
              v23 =
                  vbicq_s8(*v15, vandq_s8(vornq_s8(v14, vceqq_s64(v22, v13)),
                                          vornq_s8(v19, vceqq_s64(v22, v17))));
              v15[-1] = vbicq_s8(v15[-1],
                                 vandq_s8(vornq_s8(v14, vceqq_s64(v21, v13)),
                                          vornq_s8(v19, vceqq_s64(v21, v17))));
              *v15 = v23;
              v15 += 2;
            } while (v16 != 0);
            if (v9 == (v9 & 0xFFFFFFFFFFFFFFFCLL)) {
              return result;
            }
          }
          else {
            v12 = a2 >> 6;
          }
          if (v8 == v12 + 1) {
            v24 = v12;
          }
          else {
            v25 = v8 - 1;
            v26 = v7 + 1;
            do {
              v24 = v12 + 1;
              if (v6 - 1 == v12) {
                v27 = -1LL << a2;
              }
              else {
                v27 = -1;
              }
              if (v25 == v12) {
                v28 = 0xFFFFFFFFFFFFFFFFLL >> ((~(_BYTE)a3) & 63);
              }
              else {
                v28 = -1;
              }
              v29 = v27 & v28;
              {
                result = (unsigned __int64*)v26[v12];
                __asm__ volatile("" ::"r"(result));
              }
              v26[v12++] = (unsigned __int64)result & ~v29;
            } while (v25 != v24);
          }
          v30 = v24 + 1;
          if (v24 + 1 == v6) {
            v31 = -1LL << a2;
          }
          else {
            v31 = -1;
          }
          if (v30 == v8) {
            v32 = 0xFFFFFFFFFFFFFFFFLL >> ((~(_BYTE)a3) & 63);
          }
          else {
            v32 = -1;
          }
          v7[v30] &= ~(v31 & v32);
        }
      }
    }
  }
  return result;
}

__int64 nvidia_4de20(unsigned __int64* a1, unsigned __int64 a2,
                     unsigned __int64 a3)
{
  __int64 result;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;

  result = 0;
  if (a1 != nullptr && a2 <= a3) {
    {
      v5 = *a1;
      __asm__ volatile("" ::"r"(v5));
    }
    if (a3 <= *a1 - 1) {
      {
        v8 = a1[1];
        __asm__ volatile("" ::"r"(v8));
      }
      v6 = a1 + 1;
      v7 = (_QWORD*)v8;
      v9 = a2 >> 6;
      if (v5 >= 0x41) {
        v10 = v7;
      }
      else {
        v10 = v6;
      }
      v11 = a3 >> 6;
      if (v9 > a3 >> 6) {
        return 1;
      }
      v12 = v9 == v11 ? 0xFFFFFFFFFFFFFFFFLL >> ((~(_BYTE)a3) & 63) : -1LL;
      if ((v12 & (-1LL << a2) & v10[v9]) == 0) {
        v13 = v9 - v11;
        if (v13 == 0) {
          return 1;
        }
        {
          v14 = &v10[v9];
          __asm__ volatile("" ::"r"(v14));
        }
        v15 = 1;
        result = 1;
        while (1) {
          v16 = v15 != 0 ? -1LL : -1LL << a2;
          v17 = v13 + v15 != 0 ? -1LL
                               : 0xFFFFFFFFFFFFFFFFLL >> ((~(_BYTE)a3) & 63);
          if ((v16 & v17 & v14[v15]) != 0) {
            break;
          }
          ++v15;
          if (v13 + v15 == 1) {
            return result;
          }
        }
      }
    }
    return 0;
  }
  return result;
}

__int64 nvidia_4e310(unsigned __int64* a1, unsigned __int64 a2,
                     unsigned __int64 a3, _QWORD* a4)
{
  __int64 result;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 i;
  __int64 v18;
  unsigned __int64 v19;

  result = 0;
  if (a1 != nullptr && a2 <= a3) {
    result = 0;
    if (a4 != nullptr) {
      {
        v6 = *a1;
        __asm__ volatile("" ::"r"(v6));
      }
      if (a3 <= *a1 - 1) {
        {
          v9 = a1[1];
          __asm__ volatile("" ::"r"(v9));
        }
        v7 = a1 + 1;
        v8 = (_QWORD*)v9;
        v10 = a3 >> 6;
        if (v6 >= 0x41) {
          v11 = v8;
        }
        else {
          v11 = v7;
        }
        v12 = a2 >> 6;
        if (v10 >= a2 >> 6) {
          v13 = v10 + 1;
          while (1) {
            v14 = --v13 == v12 ? -1LL << a2 : -1LL;
            v15 =
                v13 == v10 ? 0xFFFFFFFFFFFFFFFFLL >> ((~(_BYTE)a3) & 63) : -1LL;
            {
              v16 = v15 & ~v11[v13] & v14;
              __asm__ volatile("" ::"r"(v16));
            }
            if (v16 != 0) {
              break;
            }
          LABEL_35:
            result = 0;
            if (v13 <= v12) {
              return result;
            }
          }
          for (i = 51;; i -= 13) {
            if (((v16 >> ((unsigned __int8)i + 12)) & 1) != 0) {
              *a4 = i + 12 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 11)) & 1) != 0) {
              *a4 = i + 11 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 10)) & 1) != 0) {
              *a4 = i + 10 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 9)) & 1) != 0) {
              *a4 = i + 9 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 8)) & 1) != 0) {
              *a4 = i + 8 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 7)) & 1) != 0) {
              *a4 = i + 7 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 6)) & 1) != 0) {
              *a4 = i + 6 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 5)) & 1) != 0) {
              *a4 = i + 5 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 4)) & 1) != 0) {
              *a4 = i + 4 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 3)) & 1) != 0) {
              *a4 = i + 3 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 2)) & 1) != 0) {
              *a4 = i + 2 + (v13 << 6);
              return 1;
            }
            if (((v16 >> ((unsigned __int8)i + 1)) & 1) != 0) {
              break;
            }
            if (i == -1) {
              goto LABEL_35;
            }
            v18 = i - 13;
            v19 = v16 >> i;
            if ((v19 & 1) != 0) {
              *a4 = v18 + 13 + (v13 << 6);
              return 1;
            }
          }
          *a4 = i + 1 + (v13 << 6);
          return 1;
        }
        else {
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 nvidia_56640(__int64 a1, __int64* a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v5;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
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
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  __int64 v46;
  int v47;
  unsigned int v48;
  __int64 v49;
  __int64 v50;
  _DWORD* v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  bool v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  __int64 v59;
  unsigned int v60;
  int v61;
  unsigned int v62;
  bool v63;
  unsigned int v64;
  unsigned int v65;
  int v66;
  int v67;
  unsigned int v68;
  unsigned int v69;
  __int64 v70;
  int v71;
  int v72;
  void (*v73)(__int64, __int64, _QWORD, __int128*, __int64*, __int64);
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  __int64 result;
  int v83;
  int v84;
  unsigned int v85;
  unsigned int v86;
  unsigned int v87;
  unsigned int v88;
  unsigned int v89;
  unsigned int v90;
  unsigned int v91;
  _QWORD* v92;
  unsigned int v93;
  __int64 v94;
  __int64 v95;
  int v96;
  __int64 v97;
  __int128 v98;
  __int64 v99;
  unsigned int v100;
  unsigned int v101;
  __int64 v102;
  unsigned int v103;
  unsigned int v104;
  bool v105;
  __int64 v106;
  int v107;
  int v108;
  int v109;
  int v110;
  unsigned int v111;
  bool v112;
  __int64 v113;
  int v114;
  __int64 v115;
  __int64 v116;
  int v117;
  __int64 v120;
  unsigned int v121;
  struct {
    char gap64_[3];
    char v122;
    int v123;
  } v122_;
  struct {
    unsigned int v124;
    char gap76_[4];
    __int64 v125;
  } v124_;
  struct {
    __int128 v126;
    __int128 v127;
    __int128 v128;
    __int128 v129;
  } v126_;
  struct {
    _QWORD v130[4];
    __int128 v131;
    __int128 v132;
    __int128 v133;
  } v130_;
  struct {
    _QWORD v134[4];
    __int128 v135;
    __int128 v136;
    __int128 v137;
    __int128 v138;
    __int128 v139;
    __int128 v140;
    __int128 v141;
    __int128 v142;
    __int128 v143;
    __int128 v144;
    __int128 v145;
    __int128 v146;
    __int128 v147;
    __int128 v148;
    __int128 v149;
    __int128 v150;
    __int128 v151;
    __int128 v152;
    __int128 v153;
    __int64 v154;
  } v134_;

  {
    v5 = *(_QWORD*)a1;
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v9 = *(_QWORD*)(*(_QWORD*)a1 + 16448LL);
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v10 = *(_QWORD*)(*(_QWORD*)a1 + 64LL);
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v12 = *(_DWORD*)(v9 + 168);
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v11 = *(_DWORD*)(v9 + 172);
    __asm__ volatile("" ::"r"(v11));
  }
  if (a2[15] == 0) {
    {
      v13 = *(_QWORD*)(a2[1] + 176);
      __asm__ volatile("" ::"r"(v13));
    }
    if (v13 != 0) {
      v14 = CudaDriverStub_1db800(v13);
      {
        v15 = a2[1];
        __asm__ volatile("" ::"r"(v15));
      }
      a2[7] = v14;
      v16 = CudaDriverStub_1dbf90(*(_QWORD*)(v15 + 176));
      a2[15] =
          v16 -
          (unsigned __int8)(CudaDriverStub_1dbf90(*(_QWORD*)(a2[1] + 176)) -
                            1) +
          255;
    }
  }
  if (a2[16] == 0) {
    {
      v17 = *(_QWORD*)(a2[1] + 184);
      __asm__ volatile("" ::"r"(v17));
    }
    if (v17 != 0) {
      v18 = CudaDriverStub_1db800(v17);
      {
        v19 = a2[1];
        __asm__ volatile("" ::"r"(v19));
      }
      a2[8] = v18;
      v20 = CudaDriverStub_1dbf90(*(_QWORD*)(v19 + 184));
      a2[16] =
          v20 -
          (unsigned __int8)(CudaDriverStub_1dbf90(*(_QWORD*)(a2[1] + 184)) -
                            1) +
          255;
    }
  }
  if (a2[17] == 0) {
    {
      v21 = *(_QWORD*)(a2[1] + 192);
      __asm__ volatile("" ::"r"(v21));
    }
    if (v21 != 0) {
      v22 = CudaDriverStub_1db800(v21);
      {
        v23 = a2[1];
        __asm__ volatile("" ::"r"(v23));
      }
      a2[9] = v22;
      v24 = CudaDriverStub_1dbf90(*(_QWORD*)(v23 + 192));
      a2[17] =
          v24 -
          (unsigned __int8)(CudaDriverStub_1dbf90(*(_QWORD*)(a2[1] + 192)) -
                            1) +
          255;
    }
  }
  if (a2[18] == 0) {
    {
      v25 = *(_QWORD*)(a2[1] + 200);
      __asm__ volatile("" ::"r"(v25));
    }
    if (v25 != 0) {
      v26 = CudaDriverStub_1db800(v25);
      {
        v27 = a2[1];
        __asm__ volatile("" ::"r"(v27));
      }
      a2[10] = v26;
      v28 = CudaDriverStub_1dbf90(*(_QWORD*)(v27 + 200));
      a2[18] =
          v28 -
          (unsigned __int8)(CudaDriverStub_1dbf90(*(_QWORD*)(a2[1] + 200)) -
                            1) +
          255;
    }
  }
  if (a2[19] == 0) {
    {
      v29 = *(_QWORD*)(a2[1] + 208);
      __asm__ volatile("" ::"r"(v29));
    }
    if (v29 != 0) {
      v30 = CudaDriverStub_1db800(v29);
      {
        v31 = a2[1];
        __asm__ volatile("" ::"r"(v31));
      }
      a2[11] = v30;
      v32 = CudaDriverStub_1dbf90(*(_QWORD*)(v31 + 208));
      a2[19] =
          v32 -
          (unsigned __int8)(CudaDriverStub_1dbf90(*(_QWORD*)(a2[1] + 208)) -
                            1) +
          255;
    }
  }
  if (a2[20] == 0) {
    {
      v33 = *(_QWORD*)(a2[1] + 216);
      __asm__ volatile("" ::"r"(v33));
    }
    if (v33 != 0) {
      v34 = CudaDriverStub_1db800(v33);
      {
        v35 = a2[1];
        __asm__ volatile("" ::"r"(v35));
      }
      a2[12] = v34;
      v36 = CudaDriverStub_1dbf90(*(_QWORD*)(v35 + 216));
      a2[20] =
          v36 -
          (unsigned __int8)(CudaDriverStub_1dbf90(*(_QWORD*)(a2[1] + 216)) -
                            1) +
          255;
    }
  }
  if (a2[21] == 0) {
    {
      v37 = *(_QWORD*)(a2[1] + 224);
      __asm__ volatile("" ::"r"(v37));
    }
    if (v37 != 0) {
      v38 = CudaDriverStub_1db800(v37);
      {
        v39 = a2[1];
        __asm__ volatile("" ::"r"(v39));
      }
      a2[13] = v38;
      v40 = CudaDriverStub_1dbf90(*(_QWORD*)(v39 + 224));
      a2[21] =
          v40 -
          (unsigned __int8)(CudaDriverStub_1dbf90(*(_QWORD*)(a2[1] + 224)) -
                            1) +
          255;
    }
  }
  v41 = v12 * v11;
  LODWORD(v42) = v41;
  if (a2[14] != 0) {
    *(_QWORD*)(a1 + 136) = a2[6];
    *(_QWORD*)(a1 + 144) = a2[14];
    if (a2[15] != 0) {
      goto LABEL_24;
    }
    goto LABEL_61;
  }
  {
    v43 = *(_QWORD*)(v5 + 64);
    __asm__ volatile("" ::"r"(v43));
  }
  {
    v44 = *(_QWORD*)a1;
    __asm__ volatile("" ::"r"(v44));
  }
  {
    v45 = *(_DWORD*)(v43 + 3780);
    __asm__ volatile("" ::"r"(v45));
  }
  {
    v46 = *(_QWORD*)(*(_QWORD*)a1 + 64LL);
    __asm__ volatile("" ::"r"(v46));
  }
  v134_.v154 = 0;
  v134_.v138 = (__typeof__(v134_.v138)){0};
  v134_.v139 = (__typeof__(v134_.v139)){0};
  v134_.v140 = (__typeof__(v134_.v140)){0};
  v134_.v141 = (__typeof__(v134_.v141)){0};
  {
    v47 = *(_DWORD*)(v43 + 3800);
    __asm__ volatile("" ::"r"(v47));
  }
  v48 = v41 + v45;
  {
    v49 = *a2;
    __asm__ volatile("" ::"r"(v49));
  }
  {
    v50 = a2[1];
    __asm__ volatile("" ::"r"(v50));
  }
  v126_.v126 = (__typeof__(v126_.v126)){0};
  v126_.v127 = (__typeof__(v126_.v127)){0};
  v51 = (_DWORD*)v46;
  v126_.v128 = (__typeof__(v126_.v128)){0};
  v126_.v129 = (__typeof__(v126_.v129)){0};
  memset(v130_.v130, 0, sizeof(v130_.v130));
  v130_.v131 = (__typeof__(v130_.v131)){0};
  v130_.v132 = (__typeof__(v130_.v132)){0};
  v130_.v133 = (__typeof__(v130_.v133)){0};
  memset(v134_.v134, 0, sizeof(v134_.v134));
  v120 = (v48 - 1) / v45 * v45;
  v134_.v135 = (__typeof__(v134_.v135)){0};
  v134_.v136 = (__typeof__(v134_.v136)){0};
  v134_.v137 = (__typeof__(v134_.v137)){0};
  v134_.v142 = (__typeof__(v134_.v142)){0};
  v134_.v143 = (__typeof__(v134_.v143)){0};
  v134_.v144 = (__typeof__(v134_.v144)){0};
  v134_.v145 = (__typeof__(v134_.v145)){0};
  v134_.v146 = (__typeof__(v134_.v146)){0};
  v134_.v147 = (__typeof__(v134_.v147)){0};
  v134_.v148 = (__typeof__(v134_.v148)){0};
  v134_.v149 = (__typeof__(v134_.v149)){0};
  v134_.v150 = (__typeof__(v134_.v150)){0};
  v134_.v151 = (__typeof__(v134_.v151)){0};
  v134_.v152 = (__typeof__(v134_.v152)){0};
  v134_.v153 = (__typeof__(v134_.v153)){0};
  {
    v52 = *(_DWORD*)(v50 + 240);
    __asm__ volatile("" ::"r"(v52));
  }
  if (v52 >= 0x1101) {
    v114 = v47;
    v116 = v5;
    v53 = v49;
    v54 = v46;
    v55 = cuda_driver_predicates_9ae50(v46);
    {
      v52 = *(_DWORD*)(v50 + 240);
      __asm__ volatile("" ::"r"(v52));
    }
    {
      v51 = *(_DWORD**)(v44 + 64);
      __asm__ volatile("" ::"r"(v51));
    }
    if (!v55) {
      v49 = v53;
      v5 = v116;
      v46 = v54;
      {
        v58 = v51[2936] + v52;
        __asm__ volatile("" ::"r"(v58));
      }
      {
        v57 = *(_DWORD*)(v50 + 232);
        __asm__ volatile("" ::"r"(v57));
      }
      v47 = v114;
      {
        v56 = v58 + v51[2937];
        __asm__ volatile("" ::"r"(v56));
      }
      goto LABEL_37;
    }
    v49 = v53;
    v5 = v116;
    v47 = v114;
    v46 = v54;
  }
  {
    v56 = v51[950] + v52;
    __asm__ volatile("" ::"r"(v56));
  }
  if ((*(_BYTE*)(v44 + 16316) & 2) != 0) {
    {
      v57 = v51[2937] + v51[2936];
      __asm__ volatile("" ::"r"(v57));
    }
  LABEL_37:
    if (v56 <= v57) {
      v56 = v57;
    }
  }
  {
    v59 = a2[1];
    __asm__ volatile("" ::"r"(v59));
  }
  v60 = v56 + 255;
  v61 = v120 + v47;
  {
    v62 = *(_DWORD*)(v59 + 240);
    __asm__ volatile("" ::"r"(v62));
  }
  v117 = v61;
  if (v62 < 0x1101) {
    goto LABEL_42;
  }
  v113 = v49;
  v115 = v46;
  v63 = cuda_driver_predicates_9ae50((__int64)v51);
  {
    v62 = *(_DWORD*)(v59 + 240);
    __asm__ volatile("" ::"r"(v62));
  }
  {
    v51 = *(_DWORD**)(v44 + 64);
    __asm__ volatile("" ::"r"(v51));
  }
  if (v63) {
    v49 = v113;
    v46 = v115;
  LABEL_42:
    v42 = v120;
    {
      v64 = v51[950] + v62;
      __asm__ volatile("" ::"r"(v64));
    }
    if ((*(_BYTE*)(v44 + 16316) & 2) == 0) {
      v65 = v60 - (unsigned __int8)(v64 - 1);
      v41 = v117;
      if (v65 == 0) {
        v65 = 256;
      }
      goto LABEL_60;
    }
    {
      v66 = v51[2936];
      __asm__ volatile("" ::"r"(v66));
    }
    {
      v67 = v51[2937];
      __asm__ volatile("" ::"r"(v67));
    }
    if (v64 <= v67 + v66) {
      LOBYTE(v64) = v67 + v66;
    }
    v65 = v60 - (unsigned __int8)(v64 - 1);
    v41 = v117;
    if (v65 == 0) {
      v65 = 256;
    }
    if (v51[2931] == 0) {
      goto LABEL_51;
    }
    goto LABEL_60;
  }
  {
    v66 = v51[2936];
    __asm__ volatile("" ::"r"(v66));
  }
  {
    v67 = v51[2937];
    __asm__ volatile("" ::"r"(v67));
  }
  v49 = v113;
  v69 = v66 + v62 + v67;
  if (v69 <= *(_DWORD*)(v59 + 232)) {
    LOBYTE(v69) = *(_DWORD*)(v59 + 232);
  }
  v65 = v60 - (unsigned __int8)(v69 - 1);
  if (v65 == 0) {
    v65 = 256;
  }
  if ((*(_BYTE*)(v44 + 16316) & 2) == 0) {
    v42 = v120;
    v41 = v117;
    v46 = v115;
    goto LABEL_60;
  }
  v42 = v120;
  v41 = v117;
  v46 = v115;
  if (v51[2931] == 0) {
  LABEL_51:
    v68 = v67 + v66;
    if (v65 <= v68) {
      v65 = v68;
    }
  }
LABEL_60:
  {
    v70 = a2[4];
    __asm__ volatile("" ::"r"(v70));
  }
  {
    v71 = *((_DWORD*)a2 + 7);
    __asm__ volatile("" ::"r"(v71));
  }
  a2[14] = v65;
  v134_.v134[3] = v70;
  LODWORD(v70) = *((_DWORD*)a2 + 10);
  {
    v72 = *((_DWORD*)a2 + 11);
    __asm__ volatile("" ::"r"(v72));
  }
  LODWORD(v134_.v134[1]) = v71;
  HIDWORD(v134_.v134[2]) = v71;
  a2[6] = v49 + v42;
  v73 = *(void (**)(__int64, __int64, _QWORD, __int128*, __int64*, __int64))(
      v46 + 18688);
  LODWORD(v134_.v135) = v70;
  {
    v74 = *(__int64*)((char*)a2 + 20);
    __asm__ volatile("" ::"r"(v74));
  }
  LODWORD(v134_.v142) = v72;
  *(_QWORD*)((char*)&v134_.v134[1] + 4) = v74;
  *((_QWORD*)&v130_.v133 + 1) = &v124_.v124;
  v134_.v134[0] = v74;
  {
    v75 = a2[1];
    __asm__ volatile("" ::"r"(v75));
  }
  v124_.v125 = *a2;
  v73(v44, v75, 0, &v126_.v126, a2 + 6, a3 + v42);
  *(_QWORD*)(a1 + 136) = a2[6];
  *(_QWORD*)(a1 + 144) = a2[14];
  if (a2[15] != 0) {
  LABEL_24:
    *(_BYTE*)(a1 + 160) = 1;
    *(_QWORD*)(a1 + 168) = a2[7];
    *(_QWORD*)(a1 + 176) = a2[15];
    if (a2[16] != 0) {
      goto LABEL_25;
    }
    goto LABEL_62;
  }
LABEL_61:
  *(_BYTE*)(a1 + 160) = 0;
  if (a2[16] != 0) {
  LABEL_25:
    *(_BYTE*)(a1 + 192) = 1;
    *(_QWORD*)(a1 + 200) = a2[8];
    *(_QWORD*)(a1 + 208) = a2[16];
    if (a2[17] != 0) {
      goto LABEL_26;
    }
    goto LABEL_63;
  }
LABEL_62:
  *(_BYTE*)(a1 + 192) = 0;
  if (a2[17] != 0) {
  LABEL_26:
    *(_BYTE*)(a1 + 224) = 1;
    *(_QWORD*)(a1 + 232) = a2[9];
    *(_QWORD*)(a1 + 240) = a2[17];
    if (a2[18] != 0) {
      goto LABEL_27;
    }
    goto LABEL_64;
  }
LABEL_63:
  *(_BYTE*)(a1 + 224) = 0;
  if (a2[18] != 0) {
  LABEL_27:
    *(_BYTE*)(a1 + 256) = 1;
    *(_QWORD*)(a1 + 264) = a2[10];
    *(_QWORD*)(a1 + 272) = a2[18];
    if (a2[19] != 0) {
      goto LABEL_28;
    }
    goto LABEL_65;
  }
LABEL_64:
  *(_BYTE*)(a1 + 256) = 0;
  if (a2[19] != 0) {
  LABEL_28:
    *(_BYTE*)(a1 + 288) = 1;
    *(_QWORD*)(a1 + 296) = a2[11];
    *(_QWORD*)(a1 + 304) = a2[19];
    if (a2[20] != 0) {
      goto LABEL_29;
    }
  LABEL_66:
    *(_BYTE*)(a1 + 320) = 0;
    if (a2[21] != 0) {
      goto LABEL_30;
    }
    goto LABEL_67;
  }
LABEL_65:
  *(_BYTE*)(a1 + 288) = 0;
  if (a2[20] == 0) {
    goto LABEL_66;
  }
LABEL_29:
  *(_BYTE*)(a1 + 320) = 1;
  *(_QWORD*)(a1 + 328) = a2[12];
  *(_QWORD*)(a1 + 336) = a2[20];
  if (a2[21] != 0) {
  LABEL_30:
    *(_BYTE*)(a1 + 352) = 1;
    *(_QWORD*)(a1 + 360) = a2[13];
    *(_QWORD*)(a1 + 368) = a2[21];
    goto LABEL_68;
  }
LABEL_67:
  *(_BYTE*)(a1 + 352) = 0;
LABEL_68:
  *(_DWORD*)(a1 + 80) = *((_DWORD*)a2 + 5);
  *(_DWORD*)(a1 + 84) = *((_DWORD*)a2 + 6);
  *(_DWORD*)(a1 + 88) = *((_DWORD*)a2 + 7);
  *(_DWORD*)(a1 + 92) = *((_DWORD*)a2 + 8);
  *(_DWORD*)(a1 + 96) = *((_DWORD*)a2 + 9);
  *(_DWORD*)(a1 + 100) = *((_DWORD*)a2 + 10);
  {
    v76 = *(_DWORD*)(a2[1] + 392);
    __asm__ volatile("" ::"r"(v76));
  }
  if (v76 <= 0x10) {
    LOWORD(v76) = 16;
  }
  *(_WORD*)(a1 + 384) = v76;
  {
    v77 = *(_DWORD*)(a2[1] + 76);
    __asm__ volatile("" ::"r"(v77));
  }
  if (v77 <= 1) {
    LOWORD(v77) = 1;
  }
  *(_WORD*)(a1 + 386) = v77;
  {
    v78 = *(_DWORD*)(*(_QWORD*)(v5 + 64) + 3888LL);
    __asm__ volatile("" ::"r"(v78));
  }
  {
    v79 = *(int*)(a2[1] + 128) + *((_DWORD*)a2 + 11) + v78 - 1;
    __asm__ volatile("" ::"r"(v79));
  }
  v80 = v79 / v78 * v78;
  *(_DWORD*)(a1 + 420) = v80;
  {
    v81 = a2[1];
    __asm__ volatile("" ::"r"(v81));
  }
  if (*(_BYTE*)(v81 + 120) != 0) {
    LODWORD(v126_.v126) =
        *(int*)(*(_QWORD*)(v5 + 64) + 4152LL) * *(int*)(v81 + 124) / 0x64u;
    result =
        (*(__int64 (**)(__int64, __int128*))(v10 + 19488))(v10, &v126_.v126);
    if ((_DWORD)result != 0) {
      return result;
    }
    v83 = v126_.v126;
    *(_DWORD*)(a1 + 656) = v126_.v126;
    *(_DWORD*)(a1 + 652) = v83;
    goto LABEL_85;
  }
  if (v79 != v79 % v78) {
    {
      v84 = *((_DWORD*)a2 + 45);
      __asm__ volatile("" ::"r"(v84));
    }
    if (v84 == 1) {
      {
        v85 = *(_DWORD*)(v9 + 156);
        __asm__ volatile("" ::"r"(v85));
      }
    }
    else {
      if (v84 != 2) {
        {
          v107 = *((_DWORD*)a2 + 8);
          __asm__ volatile("" ::"r"(v107));
        }
        {
          v108 = *((_DWORD*)a2 + 9);
          __asm__ volatile("" ::"r"(v108));
        }
        *(_QWORD*)&v126_.v126 = *((unsigned int*)a2 + 45);
        v109 = v108 * v107;
        {
          v110 = *((_DWORD*)a2 + 10);
          __asm__ volatile("" ::"r"(v110));
        }
        v124_.v124 = 0;
        v126_.v127 = (__typeof__(v126_.v127)){0};
        v126_.v128 = (__typeof__(v126_.v128)){0};
        BYTE8(v126_.v126) = 0;
        result = CudaDriverRoutine_10a2a0(
            v5, v81, (unsigned int*)&v126_.v126, v109 * v110, v80, &v122_.v123,
            &v122_.v122, nullptr, &v124_.v124, nullptr);
        if ((_DWORD)result != 0) {
          return result;
        }
        v85 = v124_.v124;
        {
          v111 = *(_DWORD*)(a1 + 420);
          __asm__ volatile("" ::"r"(v111));
        }
        v112 = v124_.v124 > v111;
        *(_DWORD*)(a1 + 652) = v111;
        if (!v112) {
          v85 = v111;
        }
        goto LABEL_83;
      }
      {
        v85 = *(_DWORD*)(v9 + 152);
        __asm__ volatile("" ::"r"(v85));
      }
    }
    *(_DWORD*)(a1 + 652) = v80;
    if (v85 <= (unsigned int)v80) {
      v85 = v80;
    }
  LABEL_83:
    *(_DWORD*)(a1 + 656) = v85;
    goto LABEL_84;
  }
  *(_DWORD*)(a1 + 656) = *(_DWORD*)(*(_QWORD*)(v5 + 64) + 4156LL);
  *(_DWORD*)(a1 + 652) = *(_DWORD*)(*(_QWORD*)(v5 + 64) + 4156LL);
LABEL_84:
  {
    v83 = *(_DWORD*)(*(_QWORD*)(v5 + 64) + 4152LL);
    __asm__ volatile("" ::"r"(v83));
  }
LABEL_85:
  *(_DWORD*)(a1 + 660) = v83;
  v121 = v42;
  *(_BYTE*)(a1 + 520) = a2[28] == 0;
  if (a2[28] != 0) {
    v86 = v41;
    *(_BYTE*)(a1 + 472) = 1;
    *(_DWORD*)(a1 + 488) = 7;
    *(_DWORD*)(a1 + 664) = 512;
  }
  else {
    *(_BYTE*)(a1 + 472) = 0;
    v86 = v41;
    *(_DWORD*)(a1 + 664) = 256;
    *(_QWORD*)(a1 + 528) = *a2;
  }
  CudaDriverRoutine_bbd70(a2[1], (_QWORD*)(a1 + 104));
  *(_QWORD*)(a1 + 112) = *(_QWORD*)(a1 + 104);
  *(_DWORD*)(a1 + 120) = *(_DWORD*)(a2[1] + 64);
  result = ((__int64 (*)(__int64))CudaDriverRoutine_9ad80)(*(_QWORD*)(v5 + 64));
  if ((_BYTE)result != 0) {
    *(_DWORD*)(a1 + 668) = *((_DWORD*)a2 + 46);
    *(_DWORD*)(a1 + 692) = *((_DWORD*)a2 + 52);
    *(_DWORD*)(a1 + 688) = *((_DWORD*)a2 + 51);
    *(_DWORD*)(a1 + 684) = *((_DWORD*)a2 + 50);
    *(_DWORD*)(a1 + 680) = *((_DWORD*)a2 + 49);
    *(_DWORD*)(a1 + 676) = *((_DWORD*)a2 + 48);
    *(_DWORD*)(a1 + 672) = *((_DWORD*)a2 + 47);
    if (CudaDriverRoutine_9adf0(*(_QWORD*)(v5 + 64))) {
      {
        v87 = *(_DWORD*)(a1 + 692);
        __asm__ volatile("" ::"r"(v87));
      }
      if (v87 >= 0x80) {
        v87 = 128;
      }
      if (*(_DWORD*)(a1 + 680) >= 0x80u) {
        v88 = 128;
      }
      else {
        v88 = *(_DWORD*)(a1 + 680);
        __asm__ volatile("" ::"r"(v88));
      }
      *(_DWORD*)(a1 + 692) = v87 >> 1;
      *(_DWORD*)(a1 + 680) = v88 >> 1;
    }
    result =
        ((__int64 (*)(__int64))CudaDriverRoutine_9adc0)(*(_QWORD*)(v5 + 64));
    if ((_BYTE)result != 0) {
      {
        v89 = *(_DWORD*)(a1 + 692);
        __asm__ volatile("" ::"r"(v89));
      }
      if (v89 >= 0x80) {
        v89 = 128;
      }
      if (*(_DWORD*)(a1 + 680) >= 0x80u) {
        v90 = 128;
      }
      else {
        v90 = *(_DWORD*)(a1 + 680);
        __asm__ volatile("" ::"r"(v90));
      }
      *(_DWORD*)(a1 + 692) = v89 >> 1;
      *(_DWORD*)(a1 + 680) = v90 >> 1;
    }
  }
  *(_BYTE*)(a1 + 456) = *((_BYTE*)a2 + 16);
  if (*(_DWORD*)(v9 + 168) != 0) {
    v91 = 0;
    do {
      {
        v92 = (_QWORD*)a2[28];
        __asm__ volatile("" ::"r"(v92));
      }
      if (v92 != nullptr) {
        *(_QWORD*)(a1 + 480) = *v92 + *(int*)(v9 + 172) * v91;
      }
      result = (*(__int64 (**)(__int64, __int64))(v10 + 18696))(
          a3 + *(int*)(v9 + 172) * v91++, a1 + 80);
    } while (v91 < *(_DWORD*)(v9 + 168));
  }
  if (a4 != 0 && a2[28] == 0) {
    v106 = v86 - v121;
    v105 = v86 == v121;
    v93 = v121;
    if (!v105) {
      result =
          (**(__int64 (***)(_QWORD, _QWORD, __int64, __int64, __int64, _QWORD))(
              v9 + 16))(*(_QWORD*)(v9 + 8), *(_QWORD*)(a1 + 704), *a2 + v121,
                        a3 + v121, v106, 0);
    }
  }
  else {
    result = (**(__int64 (***)(_QWORD, _QWORD, _QWORD, __int64, _QWORD,
                               _QWORD))(v9 + 16))(
        *(_QWORD*)(v9 + 8), *(_QWORD*)(a1 + 704), *a2, a3, v86, 0);
    v93 = v121;
  }
  *((_BYTE*)a2 + 232) = 1;
  if (*(_BYTE*)(v9 + 160) != 0) {
    result = CudaDriverRoutine_57540(
        a5, *a2, a2[6], a2[1], *((_DWORD*)a2 + 11) + *(int*)(a2[1] + 128));
  }
  {
    v95 = *a2;
    __asm__ volatile("" ::"r"(v95));
  }
  {
    v94 = a2[1];
    __asm__ volatile("" ::"r"(v94));
  }
  {
    v96 = *(_DWORD*)(v5 + 188);
    __asm__ volatile("" ::"r"(v96));
  }
  v97 = 192;
  v98 = *(_OWORD*)((char*)a2 + 20);
  {
    v99 = *(__int64*)((char*)a2 + 36);
    __asm__ volatile("" ::"r"(v99));
  }
  {
    v100 = *(_DWORD*)(a1 + 420);
    __asm__ volatile("" ::"r"(v100));
  }
  {
    v101 = *((_DWORD*)a2 + 45);
    __asm__ volatile("" ::"r"(v101));
  }
  if (v96 == 3) {
    v97 = 168;
  }
  v102 = 16;
  if (v96 == 3) {
    v102 = 0;
  }
  if (*(_DWORD*)(*(_QWORD*)((char*)CudaDriverData_14225e0 + v97) + v102) != 0) {
    *((_QWORD*)&v126_.v129 + 1) = *(_QWORD*)(v94 + 32);
    v130_.v130[0] = v94;
    *((_QWORD*)&v126_.v126 + 1) = v5;
    *(_QWORD*)&v126_.v127 = a1;
    *(_OWORD*)&v130_.v130[1] = v98;
    v130_.v130[3] = v99;
    if (v96 == 3) {
      v103 = 21;
    }
    else {
      v103 = 24;
    }
    LODWORD(v126_.v126) = 104;
    if (v96 == 3) {
      v104 = 0;
    }
    else {
      v104 = 4;
    }
    *((_QWORD*)&v126_.v127 + 1) = a3;
    *(_QWORD*)&v126_.v128 = a3 + v93;
    *((_QWORD*)&v126_.v128 + 1) = v95;
    *(_QWORD*)&v126_.v129 = v95 + v93;
    *(_QWORD*)&v130_.v131 = __PAIR64__(v101, v100);
    return cuda_driver_20b420(v103, v104, (__int64)&v126_.v126);
  }
  return result;
}

__int64 nvidia_59350(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  struct {
    _QWORD v9[3];
    int v10;
  } v9_;

  v1 = a1 + 0x8000;
  {
    v3 = *(_QWORD*)(*(_QWORD*)a1 + 8LL);
    __asm__ volatile("" ::"r"(v3));
  }
  *(_QWORD*)(*(_QWORD*)a1 + 8LL * *(unsigned int*)(a1 + 24) + 48) = 0;
  (*(void (**)(void))(a1 + 33904))();
  {
    v4 = *(_QWORD**)(a1 + 48);
    __asm__ volatile("" ::"r"(v4));
  }
  if (v4 != nullptr) {
    cuda_driver_1964d0(v4);
    *(_QWORD*)(a1 + 48) = 0;
  }
  {
    v5 = *(_QWORD*)(v1 + 1000);
    __asm__ volatile("" ::"r"(v5));
  }
  if (v5 != 0) {
    CudaDriverRoutine_203f30(v5);
  }
  {
    v6 = *(_QWORD*)(v1 + 1024);
    __asm__ volatile("" ::"r"(v6));
  }
  if (v6 != 0) {
    CudaDriverRoutine_203f30(v6);
  }
  if (*(_BYTE*)(a1 + 37) != 0 || *(_DWORD*)(a1 + 24) == 0) {
    CudaDriverRoutine_107f60((_QWORD*)(a1 + 8));
  }
  if (*(_DWORD*)((char*)(*(void*(*)[1])0x28LL) +
                 (_QWORD)CudaDriverData_1432198) != 0) {
    {
      v7 = *(_DWORD*)(a1 + 24);
      __asm__ volatile("" ::"r"(v7));
    }
    v9_.v9[1] = v3;
    LODWORD(v9_.v9[0]) = 32;
    HIDWORD(v9_.v9[0]) = v7;
    v9_.v10 = *(_DWORD*)(a1 + 96);
    cuda_driver_20b420(0xDu, 0xAu, (__int64)v9_.v9);
  }
  return memset_plt(a1, 0, 0x85D0u);
}

__int64 nvidia_63500(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  int v6;
  void* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
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
  __int128 v41;
  __int128 v42;
  __int64 v43;

  v18 = 0;
  v36 = (__typeof__(v36)){0};
  v37 = (__typeof__(v37)){0};
  v38 = (__typeof__(v38)){0};
  v39 = (__typeof__(v39)){0};
  v42 = (__typeof__(v42)){0};
  v20 = (__typeof__(v20)){0};
  v21 = (__typeof__(v21)){0};
  v22 = (__typeof__(v22)){0};
  v23 = (__typeof__(v23)){0};
  v24 = (__typeof__(v24)){0};
  v25 = (__typeof__(v25)){0};
  v26 = (__typeof__(v26)){0};
  v27 = (__typeof__(v27)){0};
  v28 = (__typeof__(v28)){0};
  v29 = (__typeof__(v29)){0};
  v30 = (__typeof__(v30)){0};
  v31 = (__typeof__(v31)){0};
  v32 = (__typeof__(v32)){0};
  v33 = (__typeof__(v33)){0};
  v34 = (__typeof__(v34)){0};
  v35 = (__typeof__(v35)){0};
  v40 = (__typeof__(v40)){0};
  v41 = (__typeof__(v41)){0};
  {
    v6 = *(unsigned __int8*)(a1 + 15908);
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = CudaDriverData_1422118;
  v43 = 0;
  if (v6 != 0) {
    v19 = 0x80010C002602LL;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                   (_QWORD)CudaDriverData_1422118) < 2u) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  DWORD1(v41) = -1;
  if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) &
       1) != 0) {
    v15 = 0x80010D002611LL;
  }
  else {
    v15 = 0x80010D002619LL;
  }
  v19 = v15;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u) {
  LABEL_3:
    CudaDriverRoutine_126ed0(*(_QWORD*)(a1 + 64), (unsigned __int64*)&v19);
    v19 &= 0xF83FFFFFFFFFFFFFLL;
  }
LABEL_4:
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 18424LL))(9);
  result = cuda_driver_1da1b0(*(_QWORD*)(a1 + 80), &v19, v8, &v18);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v7) >= 2u) {
    v17 = 0;
    result = CudaDriverRoutine_125cf0(1, 1, 1, &v17);
    if ((_DWORD)result != 0) {
      goto LABEL_10;
    }
    v10 = CudaDriverStub_1db800(v18);
    **(_QWORD**)((char*)((_UNKNOWN**)0x8LL) + v17) = v10;
    **(_QWORD**)((char*)((__int64*)0x10LL) + v17) = v8;
    **(_DWORD**)((char*)((char*)0x20LL) + v17) = 1;
    *(_DWORD*)(*(_QWORD*)((char*)((char*)0x20LL) + v17) + 4LL) =
        **(_DWORD**)(a1 + 64);
    **(_QWORD**)((char*)(*(void*(*)[1])0x28LL) + v17) = 0;
    v11 = CudaDriverStub_4f840(v10);
    v12 = CudaDriverStub_12e260(v11);
    v13 = v17;
    *(_DWORD*)((char*)((_UNKNOWN*)0x44LL) + v17) = v12;
    cuda_driver_125d80(0, 0, v13);
  }
  if (*(_QWORD*)(a1 + 72) == 0) {
    v16 = CudaDriverStub_1dbab0(v18);
    memset_plt(v16, 0, v8);
    goto LABEL_18;
  }
  result = CudaDriverRoutine_104cd0(a1, v18, v8, 2u);
  if ((_DWORD)result == 0) {
  LABEL_18:
    *a2 = CudaDriverStub_102e00(v18);
    *a3 = v18;
    return 0;
  }
LABEL_10:
  if (v18 != 0) {
    v14 = result;
    CudaDriverStub_1db190(&v18);
    return v14;
  }
  return result;
}

__int64 nvidia_81710(__int64 a1, __int64* a2)
{
  int8x16_t v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  int32x4_t v6;
  __int64 v7;
  __int128 v8;
  __int64 v9;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int8x16_t v15;
  __int64 v16;
  __int64 v17;
  __int128 v18;
  int v19;
  char v20;
  char v21;
  int v22;
  char v23;
  int v24;

  {
    v2 = *(int8x16_t*)(a2 + 5);
    __asm__ volatile("" ::"w"(v2));
  }
  {
    v3 = *a2;
    __asm__ volatile("" ::"r"(v3));
  }
  v11 = 6;
  {
    v4 = (__int64*)a2[3];
    __asm__ volatile("" ::"r"(v4));
  }
  {
    v5 = *v4;
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v14 = v4[4];
    __asm__ volatile("" ::"r"(v14));
  }
  LOBYTE(v4) = *((_BYTE*)a2 + 32);
  v15 = vextq_s8(v2, v2, 8u);
  {
    v6 = *((int32x4_t*)a2 + 4);
    __asm__ volatile("" ::"w"(v6));
  }
  v12 = v5;
  v13 = v3;
  {
    v7 = a2[11];
    __asm__ volatile("" ::"r"(v7));
  }
  v21 = (char)v4;
  *(_QWORD*)&v8 = LANES128_OF(vrev64q_s32(v6)).n128_u64[0];
  {
    v23 = *((_BYTE*)a2 + 33);
    __asm__ volatile("" ::"r"(v23));
  }
  *((_QWORD*)&v8 + 1) = LANES128(v6).n128_u64[1];
  {
    v24 = *((_DWORD*)a2 + 9);
    __asm__ volatile("" ::"r"(v24));
  }
  {
    v9 = a2[7];
    __asm__ volatile("" ::"r"(v9));
  }
  v18 = v8;
  v16 = v7;
  v17 = v9;
  {
    v20 = *((_BYTE*)a2 + 96);
    __asm__ volatile("" ::"r"(v20));
  }
  {
    v19 = *((_DWORD*)a2 + 4);
    __asm__ volatile("" ::"r"(v19));
  }
  {
    v22 = *(_DWORD*)((char*)a2 + 97);
    __asm__ volatile("" ::"r"(v22));
  }
  CudaDriverRoutine_7d4d0((__int64)&v11, 353);
  CudaDriverRoutine_7d5b0();
  return 0;
}

__int64 nvidia_89360(__int64* a1, __int64 a2, __int128* a3, __int64 a4,
                     __int64* a5, __int64 a6, __int64 a7, char a8)
{
  __int64 v16;
  __int64 v17;
  __int128 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  bool v25;
  int v26;
  bool v27;
  unsigned int v29;
  __int64 v30;
  unsigned int v31;
  _BOOL4 v33;
  int v37;
  _BOOL4 v38;
  int v45;
  int v46;
  unsigned __int64 v47;
  int v48;
  int v49;
  int v50;
  char v51;
  unsigned int v52;
  unsigned int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  __int64 v68;
  __int128 v69;
  __int128 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  unsigned int v75;
  unsigned __int64 v76;
  __int64 v77;
  int v79;
  int v80;
  unsigned int v81;
  __int64 v82;
  unsigned int v83;
  unsigned __int64 v84;
  int v86;
  __int64 v87;
  unsigned int v88;
  unsigned __int64 v89;
  __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 i;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _BOOL4 v97;
  __int64 v98;
  char v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  struct {
    int v107;
    char gap68_[4];
    __int64 v108;
    __int64 v109;
    _BYTE* v110;
    char gap96_[8];
    _BOOL4 v111;
  } v107_;
  _BYTE v112[96];

  v16 = CudaDriverRoutine_12e510(1, 256);
  v17 = v16;
  if (v16 == 0) {
    v31 = 2;
    goto LABEL_194;
  }
  *(_QWORD*)(v16 + 96) = 0;
  *(_BYTE*)(v16 + 88) = 0;
  v18 = *a3;
  {
    v19 = *((_QWORD*)a3 + 2);
    __asm__ volatile("" ::"r"(v19));
  }
  v105 = (__int64)a3;
  v106 = a4;
  *(_QWORD*)v16 = a2;
  *(_QWORD*)(v16 + 28) = v19;
  *(_OWORD*)(v16 + 12) = v18;
  CudaDriverRoutine_107f40((_QWORD*)(v16 + 168), 75, 0);
  {
    v21 = *(_DWORD*)(v17 + 12);
    __asm__ volatile("" ::"r"(v21));
  }
  {
    v20 = *(_DWORD*)(v17 + 16);
    __asm__ volatile("" ::"r"(v20));
  }
  {
    v22 = *(_DWORD*)(v17 + 32);
    __asm__ volatile("" ::"r"(v22));
  }
  {
    v23 = *(_DWORD*)(v17 + 20);
    __asm__ volatile("" ::"r"(v23));
  }
  v24 = v22 & 1;
  v103 = a7;
  v104 = a1;
  v101 = a6;
  v102 = a5;
  v100 = a8;
  v25 = v21 != 0 && v20 == 0;
  v26 = !v25;
  if (v25) {
    v27 = v23 == 0 && v24 == 0;
    if (v27 && (v22 & 4) == 0) {
      v29 = 1;
      v30 = a2;
      *(_DWORD*)(v17 + 8) = 1;
      goto LABEL_85;
    }
  }
  v33 = v21 != 0 && v20 != 0;
  if (v33 && v23 == 0 && v24 == 0 && (*(_DWORD*)(v17 + 32) & 4) == 0) {
    v45 = 2;
    goto LABEL_68;
  }
  v37 = v22 & 1;
  v38 = v23 != 0 && v33;
  if (v38 && v37 == 0 && (*(_DWORD*)(v17 + 32) & 4) == 0) {
    v45 = 3;
    goto LABEL_68;
  }
  if (v26 == 0 && v23 != 0 && v37 != 0 && (*(_DWORD*)(v17 + 32) & 4) == 0) {
    v46 = 4;
    goto LABEL_73;
  }
  if ((v38 & v22) == 1 && (*(_DWORD*)(v17 + 32) & 4) == 0) {
    v45 = 5;
    goto LABEL_68;
  }
  if (v21 == 0) {
    v46 = 0;
    goto LABEL_73;
  }
  if (v21 != v20 || v23 != 6 || (v22 & 1) != 0 || (v22 & 4) == 0) {
    v46 = 0;
    if (v21 == v20 && v23 != 0) {
      HIDWORD(v47) = -1431655765 * v23;
      LODWORD(v47) = -1431655765 * v23;
      if ((unsigned int)(v47 >> 1) > 0x2AAAAAAA || (v22 & 1) == 0 ||
          (v22 & 4) == 0) {
        *(_DWORD*)(v17 + 8) = 0;
        if ((v22 & 5) == 0) {
        LABEL_71:
          v29 = 3;
          v30 = a2;
          goto LABEL_85;
        }
        goto LABEL_84;
      }
      v45 = 7;
      goto LABEL_68;
    }
  LABEL_73:
    *(_DWORD*)(v17 + 8) = v46;
    if (v20 == 0) {
      v30 = a2;
      v29 = 1;
      goto LABEL_85;
    }
    goto LABEL_69;
  }
  v45 = 6;
LABEL_68:
  *(_DWORD*)(v17 + 8) = v45;
LABEL_69:
  if (v23 != 0 && (v22 & 5) == 0) {
    goto LABEL_71;
  }
LABEL_84:
  v30 = a2;
  v29 = 2;
LABEL_85:
  {
    v49 = *(_DWORD*)(v17 + 24);
    __asm__ volatile("" ::"r"(v49));
  }
  {
    v48 = *(_DWORD*)(v17 + 28);
    __asm__ volatile("" ::"r"(v48));
  }
  *(_DWORD*)(v17 + 104) = v29;
  if ((unsigned __int8)(v49 + 111) >= 0xEu) {
    v50 = 1;
  }
  else {
    v50 = 4;
  }
  *(_DWORD*)(v17 + 148) = v50;
  *(_DWORD*)(v17 + 152) = v50;
  if ((unsigned __int8)(v49 + 111) >= 0xEu) {
    v51 = 0;
  }
  else {
    v51 = 2;
  }
  v52 = CudaDriverRoutine_87a10(v49, v48);
  v53 = 0;
  *(_DWORD*)(v17 + 108) = v52;
  *(_DWORD*)(v17 + 112) = ((unsigned int)(v21 + v50 - 1) >> v51) * v52;
  if ((unsigned __int8)(v49 + 97) > 0x16u) {
    v54 = v30;
    v55 = v105;
    *(_DWORD*)(v17 + 156) = 0;
    if ((v22 & 0x40) != 0) {
    LABEL_93:
      *(_DWORD*)(v17 + 144) = cuda_driver_89e50((unsigned int*)(v17 + 12));
      if ((*(_BYTE*)(v55 + 21) & 1) != 0) {
        goto LABEL_94;
      }
      goto LABEL_106;
    }
  }
  else {
    {
      v53 = CudaDriverData_11318bc[(unsigned __int8)(v49 + 97)];
      __asm__ volatile("" ::"r"(v53));
    }
    v54 = v30;
    v55 = v105;
    *(_DWORD*)(v17 + 156) = v53;
    if ((v22 & 0x40) != 0) {
      goto LABEL_93;
    }
  }
  if ((*(_BYTE*)(v55 + 21) & 1) != 0) {
  LABEL_94:
    {
      v103 = *(_QWORD*)(*(_QWORD*)(v54 + 64) + 4288LL) - 1LL;
      __asm__ volatile("" ::"r"(v103));
    }
    v56 = v106;
    if (v106 == 0) {
      goto LABEL_95;
    }
    goto LABEL_107;
  }
LABEL_106:
  v56 = v106;
  if (v106 == 0) {
  LABEL_95:
    cuda_driver_88ba0(v17 + 12, v102, v29, v52, 1u, 0, v17 + 40,
                      (unsigned __int64*)(v17 + 136),
                      (unsigned __int64*)(v17 + 120));
    {
      v53 = *(_DWORD*)(v17 + 156);
      __asm__ volatile("" ::"r"(v53));
    }
    if (v53 == 0) {
      goto LABEL_96;
    }
    goto LABEL_108;
  }
LABEL_107:
  v69 = *(_OWORD*)(v56 + 24);
  v70 = *(_OWORD*)(v56 + 40);
  *(_QWORD*)(v17 + 72) = *(_QWORD*)(v56 + 56);
  *(_OWORD*)(v17 + 56) = v70;
  *(_OWORD*)(v17 + 40) = v69;
  *(_QWORD*)(v17 + 120) = *(_QWORD*)(v56 + 16);
  *(_DWORD*)(v17 + 128) = *(_DWORD*)(v56 + 64);
  *(_QWORD*)(v17 + 136) = *(_QWORD*)(v56 + 72);
  if (v53 == 0) {
  LABEL_96:
    v57 = 0;
    v58 = 0;
    v59 = 0;
    if (v56 != 0) {
      goto LABEL_97;
    }
    goto LABEL_171;
  }
LABEL_108:
  v71 = CudaDriverRoutine_12e510(v53, 24);
  if (v71 != 0) {
    v58 = v71;
    v72 = CudaDriverRoutine_12e510(*(unsigned int*)(v17 + 156), 80);
    v59 = v72;
    if (v72 == 0) {
      v31 = 2;
      goto LABEL_173;
    }
    {
      v57 = *(_DWORD*)(v17 + 156);
      __asm__ volatile("" ::"r"(v57));
    }
    if (v57 == 0) {
      v76 = 0;
      goto LABEL_170;
    }
    *(_DWORD*)v58 = *(_DWORD*)v55;
    *(_DWORD*)(v58 + 4) = *(_DWORD*)(v55 + 4);
    *(_DWORD*)(v58 + 8) = *(_DWORD*)(v55 + 8);
    *(_DWORD*)(v58 + 20) = *(_DWORD*)(v55 + 20);
    if ((unsigned int)*(unsigned __int8*)(v55 + 12) - 159 > 0x16) {
      goto LABEL_160;
    }
    {
      v73 = 1 << (*(_BYTE*)(v55 + 12) + 97);
      __asm__ volatile("" ::"r"(v73));
    }
    if ((v73 & 0x500035) != 0) {
      v74 = 0x100000002LL;
      v75 = 2;
    }
    else {
      if ((v73 & 0x2A0008) == 0) {
        goto LABEL_160;
      }
      v74 = 0x100000001LL;
      v75 = 1;
    }
    *(_QWORD*)(v58 + 12) = v74;
    cuda_driver_88ba0(v55, (__int64*)(v17 + 40), *(_DWORD*)(v17 + 104), v75, 1u,
                      0, v72 + 24, (unsigned __int64*)(v72 + 72),
                      (unsigned __int64*)(v72 + 16));
    *(_DWORD*)(v59 + 12) = *(_QWORD*)(v17 + 64);
    {
      v77 = *(_QWORD*)(v59 + 16);
      __asm__ volatile("" ::"r"(v77));
    }
    if ((v77 & 0x1FFF) != 0 && (signed __int32)*(_DWORD*)(v55 + 20) <= -1) {
      v76 = (v77 + 0x1FFF) & 0xFFFFFFFFFFFFE000LL;
    }
    else {
      v76 = *(_QWORD*)(v59 + 16);
      __asm__ volatile("" ::"r"(v76));
    }
    {
      v57 = *(_DWORD*)(v17 + 156);
      __asm__ volatile("" ::"r"(v57));
    }
    if (v57 < 2) {
      goto LABEL_170;
    }
    {
      v79 = *(_DWORD*)v55;
      __asm__ volatile("" ::"r"(v79));
    }
    *(_DWORD*)(v58 + 24) = *(_DWORD*)v55;
    {
      v80 = *(_DWORD*)(v55 + 4);
      __asm__ volatile("" ::"r"(v80));
    }
    *(_DWORD*)(v58 + 28) = v80;
    *(_DWORD*)(v58 + 32) = *(_DWORD*)(v55 + 8);
    *(_DWORD*)(v58 + 44) = *(_DWORD*)(v55 + 20);
    {
      v81 = *(unsigned __int8*)(v55 + 12);
      __asm__ volatile("" ::"r"(v81));
    }
    if (v81 > 0xAF) {
      if (*(unsigned __int8*)(v55 + 12) <= 0xB2u) {
        if (v81 != 176) {
          if (v81 != 178) {
            goto LABEL_160;
          }
          v82 = 0x100000001LL;
          v83 = 1;
          goto LABEL_150;
        }
        *(_DWORD*)(v58 + 24) = (unsigned int)(v79 + 1) >> 1;
        *(_DWORD*)(v58 + 28) = (unsigned int)(v80 + 1) >> 1;
        goto LABEL_147;
      }
      if (v81 == 179) {
        v82 = 0x100000002LL;
        goto LABEL_149;
      }
      if (v81 == 180) {
      LABEL_147:
        v82 = 0x200000001LL;
      LABEL_149:
        v83 = 2;
        goto LABEL_150;
      }
      if (v81 != 181) {
        goto LABEL_160;
      }
    }
    else if (*(unsigned __int8*)(v55 + 12) > 0xA2u) {
      if (v81 - 163 >= 2) {
        goto LABEL_160;
      }
      *(_DWORD*)(v58 + 24) = (unsigned int)(v79 + 1) >> 1;
    }
    else {
      if (v81 != 159 && v81 != 161) {
        if (v81 != 162) {
          goto LABEL_160;
        }
        *(_DWORD*)(v58 + 24) = (unsigned int)(v79 + 1) >> 1;
        goto LABEL_147;
      }
      *(_DWORD*)(v58 + 24) = (unsigned int)(v79 + 1) >> 1;
      *(_DWORD*)(v58 + 28) = (unsigned int)(v80 + 1) >> 1;
    }
    v82 = 0x200000002LL;
    v83 = 4;
  LABEL_150:
    *(_QWORD*)(v58 + 36) = v82;
    cuda_driver_88ba0(v55, (__int64*)(v17 + 40), *(_DWORD*)(v17 + 104), v83, 1u,
                      1, v59 + 104, (unsigned __int64*)(v59 + 152),
                      (unsigned __int64*)(v59 + 96));
    *(_DWORD*)(v59 + 92) = *(int*)(v17 + 64) + v76;
    {
      v84 = *(_QWORD*)(v59 + 96) + v76;
      __asm__ volatile("" ::"r"(v84));
    }
    if ((v84 & 0x1FFF) != 0 && (signed __int32)*(_DWORD*)(v55 + 20) <= -1) {
      v76 = (v84 + 0x1FFF) & 0xFFFFFFFFFFFFE000LL;
    }
    else {
      v76 += *(_QWORD*)(v59 + 96);
    }
    {
      v57 = *(_DWORD*)(v17 + 156);
      __asm__ volatile("" ::"r"(v57));
    }
    if (v57 < 3) {
      goto LABEL_170;
    }
    *(_DWORD*)(v58 + 48) = *(_DWORD*)v55;
    *(_DWORD*)(v58 + 52) = *(_DWORD*)(v55 + 4);
    *(_DWORD*)(v58 + 56) = *(_DWORD*)(v55 + 8);
    *(_DWORD*)(v58 + 68) = *(_DWORD*)(v55 + 20);
    {
      v86 = *(unsigned __int8*)(v55 + 12);
      __asm__ volatile("" ::"r"(v86));
    }
    if (v86 == 178) {
      v87 = 0x100000001LL;
      v88 = 1;
    LABEL_162:
      *(_QWORD*)(v58 + 60) = v87;
      cuda_driver_88ba0(v55, (__int64*)(v17 + 40), *(_DWORD*)(v17 + 104), v88,
                        1u, 2, v59 + 184, (unsigned __int64*)(v59 + 232),
                        (unsigned __int64*)(v59 + 176));
      *(_DWORD*)(v59 + 172) = *(int*)(v17 + 64) + v76;
      {
        v89 = *(_QWORD*)(v59 + 176) + v76;
        __asm__ volatile("" ::"r"(v89));
      }
      if ((v89 & 0x1FFF) != 0 && (signed __int32)*(_DWORD*)(v55 + 20) <= -1) {
        v76 = (v89 + 0x1FFF) & 0xFFFFFFFFFFFFE000LL;
      }
      else {
        v76 += *(_QWORD*)(v59 + 176);
      }
      {
        v57 = *(_DWORD*)(v17 + 156);
        __asm__ volatile("" ::"r"(v57));
      }
      if (v57 >= 4) {
        v31 = 1;
        *(_DWORD*)(v58 + 72) = *(_DWORD*)v55;
        *(_DWORD*)(v58 + 76) = *(_DWORD*)(v55 + 4);
        *(_DWORD*)(v58 + 80) = *(_DWORD*)(v55 + 8);
        *(_DWORD*)(v58 + 92) = *(_DWORD*)(v55 + 20);
        goto LABEL_173;
      }
    LABEL_170:
      v56 = v106;
      *(_QWORD*)(v17 + 120) = *(_QWORD*)(v17 + 64) + v76;
      if (v106 != 0) {
      LABEL_97:
        *(_QWORD*)(v17 + 80) = *(_QWORD*)v56;
        *(_BYTE*)(v17 + 88) = *(_BYTE*)(v56 + 8) == 0;
        *(_QWORD*)(v17 + 96) = *(unsigned int*)(v56 + 12);
        *(_QWORD*)v17 = v54;
        if (v57 == 0) {
          goto LABEL_189;
        }
      LABEL_98:
        v60 = CudaDriverRoutine_12e510(v57, 8);
        *(_QWORD*)(v17 + 160) = v60;
        if (v60 != 0) {
          if (*(_DWORD*)(v17 + 156) != 0) {
            v61 = 0;
            v62 = 0;
            v63 = v58;
            v64 = v59;
            while (1) {
              {
                v65 = *(_QWORD*)(v17 + 80);
                __asm__ volatile("" ::"r"(v65));
              }
              *(_BYTE*)(v64 + 8) = 0;
              v66 = v64;
              *(_QWORD*)v64 = v65;
              v64 += 80;
              v67 = nvidia_89360((__int64*)(*(_QWORD*)(v17 + 160) + v61), v54,
                                 v63, v66, nullptr, 0, -1, 0);
              if (v67 != 0) {
                break;
              }
              ++v62;
              v63 += 24;
              {
                v68 = *(_QWORD*)(*(_QWORD*)(v17 + 160) + v61);
                __asm__ volatile("" ::"r"(v68));
              }
              v61 += 8;
              *(_QWORD*)(v68 + 208) = v17;
              if (v62 >= *(unsigned int*)(v17 + 156)) {
                goto LABEL_103;
              }
            }
          LABEL_172:
            v31 = v67;
            if (v58 == 0) {
              goto LABEL_174;
            }
            goto LABEL_173;
          }
        LABEL_103:
          CudaDriverRoutine_12e340(v58);
          CudaDriverRoutine_12e340(v59);
        LABEL_189:
          *(_QWORD*)(v17 + 224) = *(_QWORD*)(v54 + 2008);
          *(_QWORD*)(v54 + 2008) = v17;
          {
            v95 = *(_QWORD*)(v17 + 224);
            __asm__ volatile("" ::"r"(v95));
          }
          if (v95 != 0) {
            *(_QWORD*)(v95 + 216) = v17;
          }
          a1 = v104;
          if (*(_DWORD*)((char*)(*(void*(*)[3])0x28LL) +
                         (_QWORD)CudaDriverData_1432140 + 4) != 0) {
            {
              v96 = *(_QWORD*)(v17 + 80);
              __asm__ volatile("" ::"r"(v96));
            }
            v107_.v108 = v54;
            v107_.v109 = v17;
            v107_.v107 = 48;
            v107_.v110 = v112;
            v97 = cuda_driver_predicates_10ebb0(v96);
            {
              v98 = *(_QWORD*)(v17 + 80);
              __asm__ volatile("" ::"r"(v98));
            }
            v107_.v111 = v97;
            nvidia_eeec0(v98, (unsigned int*)v17, 3, (__int64)v112);
            cuda_driver_20b420(2u, 0xBu, (__int64)&v107_.v107);
          }
          v31 = 0;
          goto LABEL_194;
        }
        v31 = 2;
        if (v58 == 0) {
        LABEL_174:
          if (v59 != 0) {
            CudaDriverRoutine_12e340(v59);
          }
          goto LABEL_176;
        }
      LABEL_173:
        CudaDriverRoutine_12e340(v58);
        goto LABEL_174;
      }
    LABEL_171:
      v67 = cuda_driver_89100((_QWORD*)(v17 + 80), v54, (__int64*)(v17 + 12),
                              (__int128*)(v17 + 40), *(_DWORD*)(v17 + 108),
                              *(_QWORD*)(v17 + 120), v101, v103, v100);
      if (v67 != 0) {
        goto LABEL_172;
      }
      {
        v57 = *(_DWORD*)(v17 + 156);
        __asm__ volatile("" ::"r"(v57));
      }
      *(_QWORD*)v17 = v54;
      if (v57 == 0) {
        goto LABEL_189;
      }
      goto LABEL_98;
    }
    if (v86 == 179) {
      v87 = 0x100000002LL;
      v88 = 2;
      goto LABEL_162;
    }
  LABEL_160:
    v31 = 1;
    goto LABEL_173;
  }
  v31 = 2;
LABEL_176:
  a1 = v104;
  {
    v91 = *(_QWORD*)(v17 + 160);
    __asm__ volatile("" ::"r"(v91));
  }
  if (v91 != 0) {
    {
      v92 = *(unsigned int*)(v17 + 156);
      __asm__ volatile("" ::"r"(v92));
    }
    if ((_DWORD)v92 != 0) {
      for (i = 0; i < v92; ++i) {
        {
          v94 = *(_QWORD*)(*(_QWORD*)(v17 + 160) + 8 * i);
          __asm__ volatile("" ::"r"(v94));
        }
        if (v94 != 0) {
          CudaDriverRoutine_107f60((_QWORD*)(v94 + 168));
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v17 + 160) + 8 * i) + 208LL) = 0;
          CudaDriverRoutine_12e340(*(_QWORD*)(*(_QWORD*)(v17 + 160) + 8 * i));
          {
            v92 = *(unsigned int*)(v17 + 156);
            __asm__ volatile("" ::"r"(v92));
          }
        }
      }
      {
        v91 = *(_QWORD*)(v17 + 160);
        __asm__ volatile("" ::"r"(v91));
      }
    }
    CudaDriverRoutine_12e340(v91);
    *(_QWORD*)(v17 + 160) = 0;
  }
  CudaDriverRoutine_107f60((_QWORD*)(v17 + 168));
  if (*(_QWORD*)(v17 + 80) != 0 && *(_BYTE*)(v17 + 88) == 0) {
    CudaDriverStub_1db190(v17 + 80);
  }
  CudaDriverRoutine_12e340(v17);
  v17 = 0;
LABEL_194:
  *a1 = v17;
  return v31;
}

__int64 nvidia_8dfc0(__int64 a1, _DWORD* a2)
{
  void* v2;
  __int64 result;
  __int64 v4;
  __int64 i;
  __int64 j;

  *(_DWORD*)a2 = 0;
  v2 = CudaDriverData_1422118;
  if (*((_BYTE*)&CudaDriverRoutine_72a4 + (_QWORD)CudaDriverData_1422118) !=
      0) {
    return 0;
  }
  result = (*(__int64 (**)(void))((char*)&CudaDriverRoutine_7260 +
                                  (_QWORD)CudaDriverData_1422118))();
  if ((_DWORD)result == 0) {
    if (*((_BYTE*)&CudaDriverRoutine_72a4 + (_QWORD)v2) != 0) {
      return 0;
    }
    {
      v4 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v2);
      __asm__ volatile("" ::"r"(v4));
    }
    if (v4 != 0) {
      while (1) {
        result = (*(__int64 (**)(__int64))((char*)&CudaDriverRoutine_7280 +
                                           (_QWORD)v2))(v4);
        if ((_DWORD)result != 0) {
          break;
        }
        {
          v4 = *(_QWORD*)(v4 + 16328);
          __asm__ volatile("" ::"r"(v4));
        }
        if (v4 == 0) {
          goto LABEL_9;
        }
      }
    }
    else {
    LABEL_9:
      result = (*(__int64 (**)(void))((char*)&CudaDriverRoutine_7248 +
                                      (_QWORD)v2))();
      if ((_DWORD)result == 0) {
        for (i = *(_QWORD*)(CudaDriverData_143bd80 + 16); i != 0;
             i = *(_QWORD*)(i + 176)) {
          for (j = *(_QWORD*)(i + 2040); j != 0; j = *(_QWORD*)(j + 8)) {
            (*(void (**)(__int64))((char*)&CudaDriverRoutine_7238 +
                                   (_QWORD)v2))(j);
          }
        }
        (*(void (**)(void))((char*)&CudaDriverRoutine_7268 + (_QWORD)v2))();
        return 0;
      }
    }
  }
  return result;
}

__int64 nvidia_97e80(__int64 result)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  __int64 (*v8)(__int64, __int64, __int64, __int64, __int64, __int64);
  __int64 v9;
  __int64 v10;
  __int64 (*v11)(__int64, __int64);
  struct {
    __int64 v12[2];
    __int64 v13;
  } v12_;

  if ((unsigned int)(*(int*)(result + 8) - 5) >= 0xFFFFFFFE) {
    {
      v3 = *(_QWORD*)(result + 64);
      __asm__ volatile("" ::"r"(v3));
    }
    v4 = result;
    cuda_driver_112e10((void*)((__int64)v12_.v12), *(_QWORD*)(result + 96),
                       *(_DWORD*)(v3 + 11736));
    v5 = v12_.v13;
    if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 72) + 33160LL) + 24LL) != 0) {
      CudaDriverRoutine_205fa0(0, *(_QWORD*)(v4 + 96), (__int64)v12_.v12,
                               nullptr);
      v6 = CudaDriverRoutine_122140(*(_QWORD*)(v4 + 232));
      {
        v7 = v12_.v12[0];
        __asm__ volatile("" ::"r"(v7));
      }
      if (v6) {
        v7 = (*(__int64 (**)(__int64, __int64))(v3 + 19712))(v12_.v12[0], v4);
        v12_.v12[0] = v7;
      }
      v8 = *(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                          __int64))(v3 + 19248);
      v9 = CudaDriverStub_1db800(v5);
      v10 = v8(v7, v4, v9 + *(unsigned int*)(*(_QWORD*)(v4 + 64) + 11740LL),
               v4 + 13800, 2048, 2);
      v11 = *(__int64 (**)(__int64, __int64))(v3 + 18992);
      v12_.v12[0] = v10;
      v12_.v12[0] = v11(v10, 2);
      result = CudaDriverRoutine_206060(*(_QWORD*)(v4 + 96), v12_.v12[0]);
      *(_BYTE*)(v4 + 15928) = 0;
    }
    else {
      return CudaDriverRoutine_f60f0(
          v4, v12_.v13, *(unsigned int*)(*(_QWORD*)(v4 + 64) + 11740LL),
          v4 + 13800, 2048, *(_QWORD*)(v4 + 96), 2u, 0, 0);
    }
  }
  return result;
}

__int64 nvidia_99550(__int64 a1, __int64 a2)
{
  _DWORD* v2;

  {
    v2 = *(_DWORD**)(a2 + 8);
    __asm__ volatile("" ::"r"(v2));
  }
  if (*(_DWORD*)((char*)(*(void*(*)[1])0x28LL) + CudaDriverData_1422ba8) != 0 ||
      (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118 + 2) &
       2) != 0) {
    *(_WORD*)(a1 + 240) = 256;
    return 0;
  }
  else {
    *(_BYTE*)(a1 + 240) = 1;
    if (*(_DWORD*)v2 == 40961) {
      *(_DWORD*)(a1 + 244) = 1;
      *(_QWORD*)(a1 + 248) = *(_QWORD*)(a2 + 8);
      return 0;
    }
    else {
      return 801;
    }
  }
}

__int64 nvidia_b3600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, char a9, __int64 a10,
                     _BYTE* a11)
{
  int v13;
  bool v14;
  __int64 result;
  bool v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  _QWORD v21[4];
  int v22;
  bool v23;
  char v24;
  char v25;
  char v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int64 v30;

  v30 = 0;
  v29 = (__typeof__(v29)){0};
  v28 = (__typeof__(v28)){0};
  v27 = (__typeof__(v27)){0};
  if (a11 != nullptr) {
    *a11 = 0;
  }
  if (a4 == 0) {
    return 0;
  }
  v21[0] = a1;
  v21[1] = a2;
  v21[2] = a4;
  v21[3] = 0;
  v22 = 0;
  if (a2 != 0 ||
      *((_BYTE*)&CudaDriverRoutine_71c8 + (_QWORD)CudaDriverData_1422118 + 3) !=
          0 ||
      (*(_BYTE*)(a1 + 380) & 1) == 0) {
    {
      v13 = *((unsigned __int8*)&CudaDriverRoutine_71cc +
              (_QWORD)CudaDriverData_1422118);
      __asm__ volatile("" ::"r"(v13));
    }
    v14 = v13 != 0;
  }
  else {
    LOBYTE(v13) =
        *((_BYTE*)&CudaDriverRoutine_71cc + (_QWORD)CudaDriverData_1422118);
    v14 = true;
  }
  v24 = v13;
  *((_QWORD*)&v27 + 1) = 0;
  *(_QWORD*)&v28 = a10;
  v23 = v14;
  v25 = 1;
  v26 = a9;
  LOBYTE(v27) = 0;
  DWORD1(v27) = 0;
  *((_QWORD*)&v28 + 1) = a6;
  *(_QWORD*)&v29 = a7;
  *((_QWORD*)&v29 + 1) = a8;
  LOBYTE(v30) = 0;
  result = CudaDriverRoutine_a57e0(
      a3, a4, (__int64 (*)(int*, __int64))CudaDriverRoutine_b3850,
      (__int64)v21);
  if ((_DWORD)result == 0) {
    if (a11 != nullptr) {
      *a11 = v30;
    }
    v16 = CudaDriverRoutine_985b0(*(_DWORD*)(a1 + 32));
    result = 0;
    if (a2 != 0 && v16) {
      if (*(_DWORD*)(a2 + 616) != 0) {
        v17 = 0;
        while (1) {
          {
            v18 = *(_QWORD*)(a2 + 624) + 104 * v17;
            __asm__ volatile("" ::"r"(v18));
          }
          if (*(_DWORD*)v18 != 2) {
            goto LABEL_18;
          }
          {
            v19 = *(_DWORD*)(v18 + 8);
            __asm__ volatile("" ::"r"(v19));
          }
          if (v19 == 3) {
            break;
          }
          if (v19 == 2) {
            *(_QWORD*)(v18 + 24) = 0;
            {
              v20 = *(_QWORD*)(a2 + 584);
              __asm__ volatile("" ::"r"(v20));
            }
            if (v20 == 0) {
              goto LABEL_18;
            }
            while (*(_QWORD*)(v20 + 8) != *(_QWORD*)(v18 + 16)) {
              {
                v20 = *(_QWORD*)(v20 + 80);
                __asm__ volatile("" ::"r"(v20));
              }
              if (v20 == 0) {
                goto LABEL_18;
              }
            }
            goto LABEL_17;
          }
          if (v19 != 1) {
            return 1;
          }
          *(_QWORD*)(v18 + 24) = 0;
          {
            v20 = *(_QWORD*)(a2 + 576);
            __asm__ volatile("" ::"r"(v20));
          }
          if (v20 != 0) {
            while (*(_QWORD*)(v20 + 8) != *(_QWORD*)(v18 + 16)) {
              {
                v20 = *(_QWORD*)(v20 + 80);
                __asm__ volatile("" ::"r"(v20));
              }
              if (v20 == 0) {
                goto LABEL_18;
              }
            }
          LABEL_17:
            *(_QWORD*)(v18 + 24) = v20;
          }
        LABEL_18:
          if (++v17 >= (unsigned __int64)*(unsigned int*)(a2 + 616)) {
            return 0;
          }
        }
        *(_QWORD*)(v18 + 24) = 0;
        {
          v20 = *(_QWORD*)(a2 + 592);
          __asm__ volatile("" ::"r"(v20));
        }
        if (v20 == 0) {
          goto LABEL_18;
        }
        while (*(_QWORD*)(v20 + 8) != *(_QWORD*)(v18 + 16)) {
          {
            v20 = *(_QWORD*)(v20 + 80);
            __asm__ volatile("" ::"r"(v20));
          }
          if (v20 == 0) {
            goto LABEL_18;
          }
        }
        goto LABEL_17;
      }
      return 0;
    }
  }
  return result;
}

__int64 nvidia_b3d20(__int64 a1, __int64 a2, _BYTE* a3, char a4, __int64 a5,
                     __int64 a6)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  int v11;
  __int64 result;
  unsigned __int8 v13;
  __int16 v14;
  __int16 v15;
  __int16 v16;
  __int16 v17;
  __int64 v18;
  __int16 v19;
  __int16 v20;
  __int16 v21;
  __int16 v22;
  __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  int v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  _QWORD v31[4];
  int v32;
  char v33;
  char v34;
  bool v35;
  char v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int64 v40;
  struct {
    _QWORD v41[2];
    __int64 v42;
  } v41_;
  struct {
    __int64 v43[8];
    __int64 v44;
  } v43_;

  {
    v7 = *(_QWORD*)(a2 + 32);
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v8 = *(unsigned int*)(a2 + 1004);
    __asm__ volatile("" ::"r"(v8));
  }
  v40 = 0;
  v32 = 0;
  v39 = (__typeof__(v39)){0};
  v38 = (__typeof__(v38)){0};
  v37 = (__typeof__(v37)){0};
  v31[0] = v7;
  v31[1] = 0;
  v31[2] = v8;
  v31[3] = 0;
  {
    v9 = *(_QWORD*)(a2 + 848);
    __asm__ volatile("" ::"r"(v9));
  }
  v10 = true;
  {
    v33 = *a3 & 1 | (CudaDriverData_143b974 != 0);
    __asm__ volatile("" ::"r"(v33));
  }
  v34 = v33;
  if (v9 == 0) {
    v10 = *(_QWORD*)(a2 + 856) != 0 || *(_DWORD*)(a2 + 864) != 0;
    __asm__ volatile("" ::"r"(v10));
  }
  LOBYTE(v37) = 1;
  {
    v11 = *(_DWORD*)(a2 + 80);
    __asm__ volatile("" ::"r"(v11));
  }
  v36 = a4;
  v35 = v10;
  *((_QWORD*)&v37 + 1) = 0;
  *(_QWORD*)&v38 = 0;
  *((_QWORD*)&v39 + 1) = a6;
  DWORD1(v37) = v11;
  *((_QWORD*)&v38 + 1) = *(_QWORD*)(a2 + 408);
  *(_QWORD*)&v39 = a5;
  result = CudaDriverRoutine_a57e0(
      a1, v8, (__int64 (*)(int*, __int64))CudaDriverRoutine_b3850_alt1,
      (__int64)v31);
  if ((_DWORD)result == 0) {
    v13 = v40;
    {
      v14 = *(_WORD*)(a2 + 977);
      __asm__ volatile("" ::"r"(v14));
    }
    v15 = v14 & 0x2000;
    v16 = v14 & 0xDFFF;
    v17 = (v15 & 0x3F00 | (unsigned __int8)v40) != 0 ? 0x2000 : 0;
    *(_WORD*)(a2 + 977) = v17 | v16;
    {
      v18 = *(_QWORD*)(a2 + 32);
      __asm__ volatile("" ::"r"(v18));
    }
    {
      v19 = *(_WORD*)(v18 + 36);
      __asm__ volatile("" ::"r"(v19));
    }
    v20 = v19 & 0x100;
    v21 = v19 & 0xFEFF;
    v22 = (v20 & 0x100 | v13) != 0 ? 256 : 0;
    *(_WORD*)(v18 + 36) = v22 | v21;
    {
      v23 = *(_QWORD*)(a2 + 1096);
      __asm__ volatile("" ::"r"(v23));
    }
    if (v23 == 0) {
      goto LABEL_16;
    }
    v43_.v44 = 0;
    {
      v24 = *(_QWORD**)(a2 + 32);
      __asm__ volatile("" ::"r"(v24));
    }
    {
      v25 = *(unsigned int*)(a2 + 1004);
      __asm__ volatile("" ::"r"(v25));
    }
    memset(&v43_.v43[2], 0, 48);
    *(_OWORD*)v43_.v43 = (__typeof__(*(_OWORD*)v43_.v43)){0};
    v41_.v41[0] = *(_QWORD*)(v23 + 32);
    v41_.v41[1] = 0;
    v41_.v42 = *(unsigned int*)(v23 + 1004);
    LOBYTE(v43_.v43[2]) = 1;
    v43_.v43[3] = (__int64)(v24 + 5);
    result = CudaDriverRoutine_105570(v24, v25, v43_.v43, nullptr, 0);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_a57e0(
          *(_QWORD*)(*(_QWORD*)(v23 + 32) + 80LL), *(_DWORD*)(v23 + 1004),
          (__int64 (*)(int*, __int64))CudaDriverRoutine_b3850_alt1,
          (__int64)v41_.v41);
      if ((_DWORD)result == 0) {
      LABEL_16:
        {
          v26 = *(_QWORD*)(a2 + 1104);
          __asm__ volatile("" ::"r"(v26));
        }
        if (v26 == 0) {
          return 0;
        }
        v43_.v44 = 0;
        {
          v27 = *(_DWORD*)(a2 + 84);
          __asm__ volatile("" ::"r"(v27));
        }
        {
          v28 = *(_QWORD**)(a2 + 32);
          __asm__ volatile("" ::"r"(v28));
        }
        {
          v29 = *(unsigned int*)(a2 + 1004);
          __asm__ volatile("" ::"r"(v29));
        }
        memset(&v43_.v43[2], 0, 48);
        *(_OWORD*)v43_.v43 = (__typeof__(*(_OWORD*)v43_.v43)){0};
        {
          v30 = *(_QWORD*)(v26 + 32);
          __asm__ volatile("" ::"r"(v30));
        }
        HIDWORD(v43_.v43[2]) = v27;
        v43_.v43[3] = (__int64)(v28 + 5);
        v41_.v41[0] = v30;
        v41_.v41[1] = 0;
        v41_.v42 = *(unsigned int*)(v26 + 1004);
        LOBYTE(v43_.v43[2]) = 1;
        result = CudaDriverRoutine_105570(v28, v29, v43_.v43, nullptr, 0);
        if ((_DWORD)result == 0) {
          result = CudaDriverRoutine_a57e0(
              *(_QWORD*)(*(_QWORD*)(v26 + 32) + 80LL), *(_DWORD*)(v26 + 1004),
              (__int64 (*)(int*, __int64))CudaDriverRoutine_b3850_alt1,
              (__int64)v41_.v41);
          if ((_DWORD)result == 0) {
            return 0;
          }
        }
      }
    }
  }
  return result;
}

__int64 nvidia_b68c0(int** a1, _QWORD* a2, unsigned int a3, __int64 a4)
{
  int** v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int** v11;
  int v13;
  __int64 v14;
  _DWORD* v15;
  _DWORD* v16;
  int v17;
  void (*v18)(_QWORD, __int64, _QWORD*, _DWORD*);
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int** v29;
  int v31;
  int v32;
  _QWORD* v33;
  unsigned int v34;
  int* v35;
  int v36;
  int v37;
  unsigned int v38;
  __int64 v39;
  _QWORD* v40;
  int** v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;

  if (a3 == 0) {
    return 0;
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
        goto LABEL_5;
      }
    }
    else {
      v7 = 1;
    }
    if (v8 != 0) {
      goto LABEL_11;
    }
  LABEL_5:
    ++v11;
    --v10;
  } while (v10 != 0);
  if (v7 == 0) {
    return 0;
  }
LABEL_11:
  CudaDriverRoutine_205fa0(0, a4, (__int64)&v44, nullptr);
  v13 = 0;
  v14 = v9;
  v40 = a2;
  v41 = v6;
  while (2) {
    {
      v16 = *v6++;
      __asm__ volatile("" ::"r"(v16));
    }
    v15 = v16;
    {
      v17 = *(_DWORD*)v16;
      __asm__ volatile("" ::"r"(v17));
    }
    if (*(_DWORD*)v16 <= 0xAu) {
      if (((1 << v17) & 0x5BC) != 0) {
        v13 = 1;
        goto LABEL_13;
      }
      if (v17 == 1) {
        v25 = CudaDriverStub_1db800(*((_QWORD*)v15 + 2));
        {
          v20 = *(_QWORD*)(a4 + 16);
          __asm__ volatile("" ::"r"(v20));
        }
        v22 = v25;
        v21 = v44;
        v24 = 1;
        v23 = 0;
      LABEL_23:
        v44 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)(v20 + 64) + 19064LL))(v21, v22, v24, v23);
        goto LABEL_13;
      }
      if (v17 == 9) {
        v18 = (void (*)(_QWORD, __int64, _QWORD*, _DWORD*))*a2;
        v19 = CudaDriverStub_1db800(*((_QWORD*)v15 + 2));
        if (!CudaDriverRoutine_9aa30(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 64LL))) {
          return 801;
        }
        v44 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD))(
            *(_QWORD*)(*(_QWORD*)(a4 + 16) + 64LL) + 19072LL))(v44, v19, v18,
                                                               0);
      LABEL_13:
        a2 += 18;
        if (--v14 != 0) {
          continue;
        }
        CudaDriverRoutine_206060(a4, v44);
        if (v13 == 0) {
          return 0;
        }
        v26 = a4;
        v27 = CudaDriverRoutine_1174d0(a4);
        cuda_driver_5a060(v27);
        v28 = v27;
        if (*(_BYTE*)(v27 + 37) == 0) {
          v28 = *(_QWORD*)(*(_QWORD*)v27 + 48LL);
          __asm__ volatile("" ::"r"(v28));
        }
        CudaDriverStub_107f90(v28 + 8);
        v29 = v41;
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                       (_QWORD)CudaDriverData_1422118) >= 2u &&
            *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)CudaDriverData_1422118) ==
                0 &&
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(**(_QWORD**)(v27 + 33816) + 8LL) +
                                 64LL) +
                      17329LL) != 0) {
          {
            v31 = *(_DWORD*)(v27 + 34248);
            __asm__ volatile("" ::"r"(v31));
          }
          __builtin_arm_dmb(0xDu);
          if (v31 != 0) {
            do {
              CudaDriverStub_12dca0(100);
              {
                v32 = *(_DWORD*)(v27 + 34248);
                __asm__ volatile("" ::"r"(v32));
              }
              __builtin_arm_dmb(0xDu);
            } while (v32 != 0);
          }
        }
        v33 = v40 + 2;
        do {
          {
            v35 = *v29++;
            __asm__ volatile("" ::"r"(v35));
          }
          {
            v36 = *v35;
            __asm__ volatile("" ::"r"(v36));
          }
          if ((unsigned int)*v35 <= 0xA) {
            v37 = 1 << v36;
            if ((v37 & 0x43C) != 0) {
              v34 = (*(__int64 (**)(__int64))(v27 + 34072))(v27);
              if (v34 != 0) {
                goto LABEL_45;
              }
            }
            else if ((v37 & 0x180) != 0) {
              v34 = (*(__int64 (**)(__int64))(v27 + 34072))(v27);
              if (v34 != 0) {
                goto LABEL_45;
              }
            }
          }
          v33 += 18;
          --v9;
        } while (v9 != 0);
        v34 = 0;
      LABEL_45:
        v38 = v34;
        v39 = v27;
        if (*(_BYTE*)(v27 + 37) == 0) {
          v39 = *(_QWORD*)(*(_QWORD*)v27 + 48LL);
          __asm__ volatile("" ::"r"(v39));
        }
        CudaDriverStub_108070(v39 + 8);
        CudaDriverRoutine_205dd0(v27, v26, (__int64)&v44);
        CudaDriverRoutine_206060(v26, v44);
        return v38;
      }
    }
    break;
  }
  if (v17 != 100) {
    goto LABEL_13;
  }
  ((void (*)(_QWORD, __int64, __int64*, unsigned int*))*a2)(a2[1], 1, &v43,
                                                            &v42);
  {
    v20 = *(_QWORD*)(a4 + 16);
    __asm__ volatile("" ::"r"(v20));
  }
  v22 = v43;
  v21 = v44;
  v23 = 1;
  v24 = v42;
  goto LABEL_23;
}

__int64 nvidia_d6550(__int64* a1, __int64 a2, __int64* a3, _QWORD* a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8, _DWORD* a9,
                     int a10)
{
  unsigned int v14;
  __int64 v15;
  __int64 v16;
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
  _DWORD* v27;
  __int64 v28;
  int v29;
  __int64 v31;
  struct {
    _DWORD v32[2];
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v32_;

  v31 = 0;
  v14 = cuda_driver_d6100(&v31, a2, 1, a3, a4, a5, a6, a10);
  if (v14 != 0) {
    return v14;
  }
  v15 = v31;
  *(_QWORD*)((char*)((_UNKNOWN*)0x300LL) + v31) = *(_QWORD*)(a2 + 136);
  *(_QWORD*)(a2 + 136) = v15 + 32;
  {
    v16 = *(_QWORD*)((char*)((_UNKNOWN*)0x300LL) + v15);
    __asm__ volatile("" ::"r"(v16));
  }
  if (v16 != 0) {
    *(_QWORD*)(v16 + 728) = v15 + 32;
  }
  if (*(_QWORD*)(a2 + 144) == 0) {
    *(_QWORD*)(a2 + 144) = *(_QWORD*)(a2 + 136);
  }
  memcpy_plt(v15 + 40, a7, 0x1D8u);
  v17 = v15 + 536;
  *(_OWORD*)(v15 + 536) = *(_OWORD*)a8;
  v18 = *(_OWORD*)(a8 + 32);
  v19 = *(_OWORD*)(a8 + 48);
  v20 = *(_OWORD*)(a8 + 64);
  *(_OWORD*)((char*)((__int64*)0x10LL) + v17) = *(_OWORD*)(a8 + 16);
  *(_OWORD*)((char*)((__int64*)0x10LL) + v17 + 16) = v18;
  *(_OWORD*)((char*)((__int64*)0x30LL) + v17) = v19;
  *(_OWORD*)((char*)((__int64*)0x30LL) + v17 + 16) = v20;
  v21 = *(_OWORD*)(a8 + 96);
  v22 = *(_OWORD*)(a8 + 112);
  v23 = *(_OWORD*)(a8 + 128);
  *(_OWORD*)((char*)((_UNKNOWN*)0x50LL) + v17) = *(_OWORD*)(a8 + 80);
  *(_OWORD*)((char*)((_UNKNOWN*)0x50LL) + v17 + 16) = v21;
  *(_OWORD*)((char*)((_UNKNOWN*)0x70LL) + v17) = v22;
  *(_OWORD*)((char*)((_UNKNOWN*)0x70LL) + v17 + 16) = v23;
  v24 = *(_OWORD*)(a8 + 144);
  v25 = *(_OWORD*)(a8 + 160);
  v26 = *(_OWORD*)(a8 + 176);
  *(_QWORD*)((char*)((_UNKNOWN*)0x2D8LL) + v15) = *(_QWORD*)(a8 + 192);
  *(_OWORD*)((char*)((_UNKNOWN*)0x90LL) + v17) = v24;
  *(_OWORD*)((char*)((_UNKNOWN*)0xA0LL) + v17) = v25;
  *(_OWORD*)((char*)((_UNKNOWN*)0xA0LL) + v17 + 16) = v26;
  *(_DWORD*)((char*)((char*)0x20LL) + v15) = 1;
  *(_OWORD*)((char*)((_UNKNOWN*)0x2E0LL) + v15) =
      (__typeof__(*(_OWORD*)((char*)((_UNKNOWN*)0x2E0LL) + v15))){0};
  if (*(_DWORD*)a7 == 2) {
    *(_QWORD*)(v15 + 736) = *(_QWORD*)(a7 + 96);
    if (*(_DWORD*)(a7 + 200) != 2) {
    LABEL_8:
      if (a9 != nullptr) {
        goto LABEL_9;
      }
      goto LABEL_19;
    }
  }
  else if (*(_DWORD*)(a7 + 200) != 2) {
    goto LABEL_8;
  }
  *(_QWORD*)((char*)((_UNKNOWN*)0x2E8LL) + v15) = *(_QWORD*)(a7 + 296);
  if (a9 != nullptr) {
  LABEL_9:
    if (*(_DWORD*)a9 == 1) {
      v27 = a9;
    }
    else {
      v27 = nullptr;
    }
    *(_QWORD*)((char*)((_UNKNOWN*)0x2F0LL) + v15) = v27;
    if (*(_DWORD*)((char*)(*(void*(*)[1])0x28LL) +
                   (_QWORD)CudaDriverData_14321c8) == 0) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
LABEL_19:
  *(_QWORD*)((char*)((_UNKNOWN*)0x2F0LL) + v15) = 0;
  if (*(_DWORD*)((char*)(*(void*(*)[1])0x28LL) +
                 (_QWORD)CudaDriverData_14321c8) != 0) {
  LABEL_13:
    v32_.v32[0] = 40;
    {
      v28 = *(__int64*)((char*)((__int64*)0x18LL) + v15);
      __asm__ volatile("" ::"r"(v28));
    }
    v32_.v35 = v15 + 536;
    v32_.v33 = v28;
    v32_.v34 = v15;
    cuda_driver_20b420(0x13u, 0xAu, (__int64)v32_.v32);
  }
LABEL_14:
  *a1 = v15;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)CudaDriverData_1432140 +
                 4) != 0) {
    {
      v29 = *(int*)((char*)((int*)0x4LL) + v15);
      __asm__ volatile("" ::"r"(v29));
    }
    v32_.v32[0] = 24;
    v32_.v32[1] = v29;
    v32_.v33 = *(__int64*)((char*)((__int64*)0x18LL) + v15);
    v32_.v34 = v15;
    cuda_driver_20b420(2u, 0x25u, (__int64)v32_.v32);
  }
  return v14;
}

__int64 nvidia_d6740(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4)
{
  __int64 result;
  __int128 v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  _DWORD* v18;
  struct {
    int v19;
    char gap12_[4];
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v19_;

  result = memcpy_plt(a1 + 40, a2, 0x1D8u);
  *(_OWORD*)(a1 + 536) = *(_OWORD*)a3;
  v9 = *(_OWORD*)(a3 + 32);
  v10 = *(_OWORD*)(a3 + 48);
  v11 = *(_OWORD*)(a3 + 64);
  *(_OWORD*)(a1 + 552) = *(_OWORD*)(a3 + 16);
  *(_OWORD*)(a1 + 568) = v9;
  *(_OWORD*)(a1 + 584) = v10;
  *(_OWORD*)(a1 + 600) = v11;
  v12 = *(_OWORD*)(a3 + 96);
  v13 = *(_OWORD*)(a3 + 112);
  v14 = *(_OWORD*)(a3 + 128);
  *(_OWORD*)(a1 + 616) = *(_OWORD*)(a3 + 80);
  *(_OWORD*)(a1 + 632) = v12;
  *(_OWORD*)(a1 + 648) = v13;
  *(_OWORD*)(a1 + 664) = v14;
  v15 = *(_OWORD*)(a3 + 144);
  v16 = *(_OWORD*)(a3 + 160);
  v17 = *(_OWORD*)(a3 + 176);
  *(_QWORD*)(a1 + 728) = *(_QWORD*)(a3 + 192);
  *(_OWORD*)(a1 + 680) = v15;
  *(_OWORD*)(a1 + 696) = v16;
  *(_OWORD*)(a1 + 712) = v17;
  *(_DWORD*)(a1 + 32) = 1;
  *(_OWORD*)(a1 + 736) = (__typeof__(*(_OWORD*)(a1 + 736))){0};
  if (*(_DWORD*)a2 == 2) {
    *(_QWORD*)(a1 + 736) = *(_QWORD*)(a2 + 96);
    if (*(_DWORD*)(a2 + 200) != 2) {
    LABEL_3:
      if (a4 != nullptr) {
        goto LABEL_4;
      }
    LABEL_12:
      *(_QWORD*)(a1 + 752) = 0;
      if (*(_DWORD*)((char*)(*(void*(*)[1])0x28LL) +
                     (_QWORD)CudaDriverData_14321c8) == 0) {
        return result;
      }
      goto LABEL_8;
    }
  }
  else if (*(_DWORD*)(a2 + 200) != 2) {
    goto LABEL_3;
  }
  *(_QWORD*)(a1 + 744) = *(_QWORD*)(a2 + 296);
  if (a4 == nullptr) {
    goto LABEL_12;
  }
LABEL_4:
  if (*(_DWORD*)a4 == 1) {
    v18 = a4;
  }
  else {
    v18 = nullptr;
  }
  *(_QWORD*)(a1 + 752) = v18;
  if (*(_DWORD*)((char*)(*(void*(*)[1])0x28LL) +
                 (_QWORD)CudaDriverData_14321c8) != 0) {
  LABEL_8:
    v19_.v22 = a1 + 536;
    v19_.v19 = 40;
    v19_.v20 = *(_QWORD*)(a1 + 24);
    v19_.v21 = a1;
    return cuda_driver_20b420(0x13u, 0xAu, (__int64)&v19_.v19);
  }
  return result;
}

__int64 nvidia_d6af0(__int64 result, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[2];
    int v12;
    int v13;
    __int64 v14;
    __int64 v15;
  } v11_;
  struct {
    int v16;
    char gap44_[4];
    __int64 v17;
    __int64 v18;
    _QWORD* v19;
  } v16_;

  {
    v3 = *a2;
    __asm__ volatile("" ::"r"(v3));
  }
  *(_QWORD*)(result + 40) = *a2;
  v4 = result + 40;
  *(_QWORD*)(result + 64) = a2[3];
  *(_DWORD*)(result + 48) = *((_DWORD*)a2 + 2);
  *(_QWORD*)(result + 56) = a2[2];
  *(_DWORD*)(result + 52) = *((_DWORD*)a2 + 3);
  {
    v5 = a2[4];
    __asm__ volatile("" ::"r"(v5));
  }
  *(_QWORD*)(result + 1200) = a3;
  *(_QWORD*)(result + 72) = v5;
  if (*(_DWORD*)((char*)(*(void*(*)[3])0x28LL) +
                 (_QWORD)CudaDriverData_14321c8 + 4) != 0) {
    v16_.v16 = 40;
    v16_.v17 = *(_QWORD*)(result + 24);
    v16_.v18 = result;
    {
      v6 = *(_DWORD*)(result + 4);
      __asm__ volatile("" ::"r"(v6));
    }
    if (v6 != 2) {
      if (v6 != 0 || (v7 = *(_QWORD*)(result + 800)) == 0 ||
          *(_DWORD*)(v7 + 8) != 2) {
        nvidia_ed630((__int64)"CUDA", 0, (__int64)"Node is not a memset node");
        goto LABEL_9;
      }
      {
        v8 = *(_QWORD*)(v7 + 24);
        __asm__ volatile("" ::"r"(v8));
      }
      v4 = v7 + 24;
      v3 = v8;
    }
    {
      v9 = *(_QWORD*)(v4 + 24);
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v10 = *(_QWORD*)(v4 + 32);
      __asm__ volatile("" ::"r"(v10));
    }
    v11_.v11[0] = v3;
    v11_.v11[1] = v9;
    v11_.v12 = *(_DWORD*)(v4 + 8);
    v11_.v13 = *(_DWORD*)(v4 + 12);
    v11_.v14 = *(_QWORD*)(v4 + 16);
    v11_.v15 = v10;
  LABEL_9:
    v16_.v19 = v11_.v11;
    return cuda_driver_20b420(0x13u, 0xBu, (__int64)&v16_.v16);
  }
  return result;
}

__int64 nvidia_d9700(__int64 a1, __int64* a2)
{
  int v2;
  __int64 v3;
  __int128 v4;
  __int128 v5;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  unsigned int v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int128 v15;
  __int128 v16;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  struct {
    __int64 v21[7];
    char gap64_[13];
    char v22;
    char gap78_[138];
    __int64* v23;
  } v21_;
  _BYTE v24[40];

  {
    v2 = *(_DWORD*)(a1 + 4);
    __asm__ volatile("" ::"r"(v2));
  }
  v3 = a1;
  if (v2 == 2) {
    v15 = *(_OWORD*)a2;
    v16 = *((_OWORD*)a2 + 1);
    {
      v18 = *(_QWORD*)(a1 + 1200);
      __asm__ volatile("" ::"r"(v18));
    }
    *(_OWORD*)(v3 + 72) = *((_OWORD*)a2 + 2);
    *(_OWORD*)(v3 + 56) = v16;
    *(_OWORD*)(v3 + 40) = v15;
    v19 = CudaDriverRoutine_98340(v18);
    result = CudaDriverRoutine_103e40(v19, *(_QWORD*)(v3 + 24), a2, 0, 5,
                                      (__int64*)(v3 + 88));
    if ((_DWORD)result == 0) {
      if (*(_DWORD*)((char*)(*(void*(*)[3])0x28LL) +
                     (_QWORD)CudaDriverData_14321c8 + 4) != 0) {
        LODWORD(v21_.v21[0]) = 40;
        v21_.v21[1] = *(_QWORD*)(v3 + 24);
        v21_.v21[2] = v3;
        CudaDriverRoutine_d9180(v3, (__int64)v24);
        v21_.v21[3] = (__int64)v24;
        cuda_driver_20b420(0x13u, 0xBu, (__int64)v21_.v21);
      }
      return 0;
    }
  }
  else if (v2 != 0) {
    return 1;
  }
  else {
    v4 = *(_OWORD*)a2;
    v5 = *((_OWORD*)a2 + 1);
    {
      v7 = *(_QWORD*)(a1 + 800);
      __asm__ volatile("" ::"r"(v7));
    }
    *(_OWORD*)(v7 + 56) = *((_OWORD*)a2 + 2);
    *(_OWORD*)(v7 + 40) = v5;
    *(_OWORD*)(v7 + 24) = v4;
    *((_DWORD*)a2 + 10) = 2;
    v8 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 1200));
    result =
        CudaDriverRoutine_103e40(v8, *(_QWORD*)(v3 + 24), a2, 0, 5, v21_.v21);
    *((_DWORD*)a2 + 10) = 0;
    if ((_DWORD)result == 0) {
      v21_.v22 = 1;
      CudaDriverRoutine_105220((__int64)v21_.v21);
      v10 = CudaDriverRoutine_98340(*(_QWORD*)(v3 + 1200));
      v11 = cuda_driver_helpers_1b7b30(v10, (__int64)v21_.v21, 0);
      if (v11 == 0) {
        v12 = v21_.v23;
        if (v21_.v23 != nullptr) {
          do {
            if ((*(_BYTE*)(v3 + 456) & 2) != 0) {
              v13 = *(_QWORD*)(v3 + 464);
              __asm__ volatile("" ::"r"(v13));
            }
            else {
              v13 = 0;
            }
            {
              v14 = *(_QWORD*)(v3 + 32);
              __asm__ volatile("" ::"r"(v14));
            }
            v11 = cuda_driver_d93c0(v3, v12);
            if (v11 != 0) {
              break;
            }
            v11 = cuda_driver_d9500(v3);
            if (v11 != 0) {
              break;
            }
            v11 = cuda_driver_120770(*(_QWORD*)(v3 + 1200), *(_QWORD*)(v3 + 24),
                                     v3, v14, v13, *(_QWORD*)(v3 + 1208));
            if (v11 != 0) {
              break;
            }
            if (*(_DWORD*)(v3 + 1092) != 1) {
              goto LABEL_21;
            }
            {
              v12 = (__int64*)v12[15];
              __asm__ volatile("" ::"r"(v12));
            }
            v11 = 0;
            if (v12 == nullptr) {
              break;
            }
            {
              v3 = **(_QWORD**)(v3 + 1056);
              __asm__ volatile("" ::"r"(v3));
            }
          } while (v3 != 0);
        }
        else {
        LABEL_21:
          v11 = 0;
        }
      }
      v20 = v11;
      CudaDriverRoutine_105220((__int64)v21_.v21);
      return v20;
    }
  }
  return result;
}

__int64 nvidia_e6320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7)
{
  __int64 v14;
  __int64 result;
  __int64 v16;
  void* v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  bool v25;
  struct {
    unsigned int v26;
    char gap4_[4];
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v26_;

  v14 = CudaDriverRoutine_98340(a1);
  LODWORD(result) = cuda_driver_9e5f0(v14, a2, (__int128*)(a6 + 296));
  if ((_DWORD)result != 0) {
    goto LABEL_2;
  }
  {
    v16 = *(_QWORD*)(a2 + 848);
    __asm__ volatile("" ::"r"(v16));
  }
  if ((v16 & 0xEBFFFFFFFFFFFFF6LL | *(_QWORD*)(a2 + 856)) != 0) {
    nvidia_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Function %s contains code that is not supported on HOS.\n",
        *(const char**)(a2 + 8));
    return 801;
  }
  if (v16 != 0 &&
      (unsigned int)CudaDriverRoutine_11cce0(v14, (_QWORD*)a2) != 0) {
    return 701;
  }
  if (*(_DWORD*)((char*)(*(void*(*)[1])0x28LL) +
                 (_QWORD)CudaDriverData_1432148) != 0) {
    v26_.v27 = v14;
    v26_.v28 = a3;
    v26_.v26 = 64;
    v26_.v29 = *(_QWORD*)(a2 + 32);
    v26_.v30 = a2;
    v26_.v31 = *(_QWORD*)(a6 + 32);
    v26_.v32 = a6;
    cuda_driver_20b420(3u, 0xAu, (__int64)&v26_.v26);
  }
  LODWORD(result) =
      (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64))(
          *(_QWORD*)(a1 + 64) + 18520LL))(a1, a2, *(_QWORD*)(a6 + 32), a6, a7);
  if ((_DWORD)result != 0) {
  LABEL_2:
    if ((_DWORD)result == 1) {
      return 999;
    }
    else {
      return (unsigned int)result;
    }
  }
  else {
    if ((*(_WORD*)(a2 + 977) & 0x1000) == 0) {
      CudaDriverRoutine_96f20(a1, a2, a5, *(unsigned __int16*)(a6 + 450),
                              a6 + 40, a6 + 104);
    }
    v17 = CudaDriverData_1432148;
    *(_BYTE*)(a6 + 207) = 0;
    *(_QWORD*)(a6 + 136) = a4;
    if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17) != 0) {
      v26_.v27 = v14;
      v26_.v28 = a3;
      v26_.v26 = 64;
      v26_.v29 = *(_QWORD*)(a2 + 32);
      v26_.v30 = a2;
      v26_.v31 = *(_QWORD*)(a6 + 32);
      v26_.v32 = a6;
      cuda_driver_20b420(3u, 2u, (__int64)&v26_.v26);
    }
    CudaDriverRoutine_9bed0(v14, a3);
    if (*(_BYTE*)(a6 + 204) != 0 && *(_QWORD*)(v14 + 2400) != 0 &&
        ((*(_WORD*)((_BYTE*)&CudaDriverRoutine_4484 +
                    (_QWORD)CudaDriverData_1422118) &
          0x40) != 0 ||
         *(_DWORD*)(a6 + 424) != 1 ||
         !cuda_driver_predicates_9ae50(*(_QWORD*)(a1 + 64)))) {
      {
        v18 = *(_QWORD*)(a1 + 64);
        __asm__ volatile("" ::"r"(v18));
      }
      {
        v19 = *(int*)(a6 + 172) * *(int*)(a6 + 168);
        __asm__ volatile("" ::"r"(v19));
      }
      {
        v20 = *(_DWORD*)(a6 + 176);
        __asm__ volatile("" ::"r"(v20));
      }
      {
        v21 = *(_DWORD*)(a6 + 288);
        __asm__ volatile("" ::"r"(v21));
      }
      v26_.v26 = 0;
      v22 = v19 * v20;
      v23 = CudaDriverRoutine_99f40(v18, (_DWORD*)(a7 + 16), v21);
      if (CudaDriverRoutine_10ac30(a1, a2, v22, &v26_.v26,
                                   *(unsigned int*)(a6 + 288), 0)) {
        return 999;
      }
      v25 = v26_.v26 > 2 && v23 != 0;
      *(_BYTE*)(a6 + 205) = v25;
    }
    if (!CudaDriverRoutine_bbe70(a2)) {
      return (*(__int64 (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)(a1 + 64) + 18528LL))(a1, a2, a6, a7);
    }
    result = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64,
                             _QWORD))(*(_QWORD*)(a1 + 64) + 18688LL))(
        a1, a2, 0, a6, a6 + 40, *(_QWORD*)(a6 + 24));
    if ((_DWORD)result == 0) {
      return (*(__int64 (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)(a1 + 64) + 18528LL))(a1, a2, a6, a7);
    }
  }
  return result;
}

__int64 nvidia_e73b0(__int64 a1, __int64 a2)
{
  __int64 v4;
  char v5;
  __int64 result;
  __int64 v7;
  int v8;
  void* v9;

  {
    v4 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 64LL);
    __asm__ volatile("" ::"r"(v4));
  }
  if (CudaDriverRoutine_9adf0(v4) || cuda_driver_predicates_9ae50(v4)) {
    v5 = 0;
    result = ((__int64 (*)(__int64))cuda_driver_predicates_9ae50)(v4);
    if ((_BYTE)result == 0) {
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v5 = 1;
  result = ((__int64 (*)(__int64))cuda_driver_predicates_9ae50)(v4);
  if ((_BYTE)result != 0) {
  LABEL_4:
    *(_BYTE*)(a1 + 377) = 1;
  }
LABEL_5:
  {
    v7 = *(_QWORD*)(a2 + 16);
    __asm__ volatile("" ::"r"(v7));
  }
  if (*(_DWORD*)v7 != 1) {
    if (*(_BYTE*)(a2 + 1172) == 0) {
      result = CudaDriverRoutine_1195c0(a2, (_OWORD*)(a1 + 380));
      if ((_BYTE)result != 0) {
        goto LABEL_16;
      }
      if (*(_BYTE*)(v4 + 17283) != 0) {
        *(_DWORD*)(a1 + 380) = *(_DWORD*)(v4 + 17284);
        *(_DWORD*)(a1 + 384) = *(_DWORD*)(v4 + 17288);
        if ((v5 & 1) != 0) {
          goto LABEL_16;
        }
        *(_DWORD*)(a1 + 388) = *(_DWORD*)(v4 + 17292);
        {
          v8 = *(_DWORD*)(v4 + 17296);
          __asm__ volatile("" ::"r"(v8));
        }
        goto LABEL_14;
      }
      v9 = CudaDriverData_1422118;
      if (*((_BYTE*)((_UNKNOWN*)0x1498LL) + (_QWORD)CudaDriverData_1422118) ==
          0) {
        return result;
      }
      *(_DWORD*)(a1 + 380) = *(_DWORD*)((char*)((_UNKNOWN*)0x149CLL) +
                                        (_QWORD)CudaDriverData_1422118);
      *(_DWORD*)(a1 + 384) =
          *(_DWORD*)((char*)((_UNKNOWN*)0x14A0LL) + (_QWORD)v9);
      if ((v5 & 1) == 0) {
        *(_DWORD*)(a1 + 388) =
            *(_DWORD*)((char*)((_UNKNOWN*)0x14A4LL) + (_QWORD)v9);
        {
          v8 = *(_DWORD*)((char*)((_UNKNOWN*)0x14A8LL) + (_QWORD)v9);
          __asm__ volatile("" ::"r"(v8));
        }
        goto LABEL_14;
      }
    LABEL_16:
      *(_BYTE*)(a1 + 376) = 1;
      return result;
    }
  LABEL_12:
    *(_DWORD*)(a1 + 380) = *(_DWORD*)(a2 + 1176);
    *(_DWORD*)(a1 + 384) = *(_DWORD*)(a2 + 1180);
    if ((v5 & 1) == 0) {
      *(_DWORD*)(a1 + 388) = *(_DWORD*)(a2 + 1184);
      {
        v8 = *(_DWORD*)(a2 + 1188);
        __asm__ volatile("" ::"r"(v8));
      }
    LABEL_14:
      *(_DWORD*)(a1 + 392) = v8;
      goto LABEL_16;
    }
    goto LABEL_16;
  }
  if (*(_BYTE*)(a2 + 1172) != 0) {
    goto LABEL_12;
  }
  if (*(_BYTE*)(a1 + 376) == 0) {
    result = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
        *(_QWORD*)(v7 + 64) + 19384LL))(*(_QWORD*)(v7 + 168), a1 + 380,
                                        *(_QWORD*)(v7 + 184));
  }
  *(_WORD*)(a1 + 376) = 1;
  return result;
}

__int64 nvidia_e7820(__int64 a1, __int64 a2, _DWORD* a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64 result;
  unsigned __int64 v19;
  int v20;
  unsigned __int64 v21;
  unsigned int v22;
  unsigned __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  struct {
    int v30;
    unsigned int v31;
  } v30_;

  {
    v4 = a3[39];
    __asm__ volatile("" ::"r"(v4));
  }
  {
    v5 = a3[45];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = a3[46];
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v10 = *(_QWORD*)(a1 + 64);
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = a3[42];
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = a3[55];
    __asm__ volatile("" ::"r"(v12));
  }
  v30_.v31 = 0;
  v29 = v4;
  v27 = v5;
  {
    v13 = (unsigned int)a3[41];
    __asm__ volatile("" ::"r"(v13));
  }
  {
    v14 = a3[43];
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = a3[44];
    __asm__ volatile("" ::"r"(v15));
  }
  {
    v17 = a3[53];
    __asm__ volatile("" ::"r"(v17));
  }
  {
    v16 = a3[54];
    __asm__ volatile("" ::"r"(v16));
  }
  {
    v28 = a3[40];
    __asm__ volatile("" ::"r"(v28));
  }
  {
    v25 = a3[47];
    __asm__ volatile("" ::"r"(v25));
  }
  v26 = v6;
  {
    v24 = a3[48];
    __asm__ volatile("" ::"r"(v24));
  }
  if ((unsigned __int8)CudaDriverStub_4f840(v10) == 0) {
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"Cooperative launch not supported on this device\n");
    return 801;
  }
  if (v17 != 0 || v16 != 0 || v12 != 0) {
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"Preferred cluster size cannot be specified if "
                          "cooperative launch is used\n");
    return 801;
  }
  result = ((__int64 (*)(__int64, __int64, unsigned int, _DWORD*, __int64,
                         char))CudaDriverRoutine_10ac30)(
      a1, a2, v14 * v11 * v15, &v30_.v31, a4, 0);
  if ((_DWORD)result == 0) {
    v19 = v28 * (unsigned __int64)v29 * v13;
    v20 = CudaDriverStub_99850(a1);
    v21 = v30_.v31 * v20;
    if (v19 <= v21) {
      v22 = v26 * v27 * v25;
      if (v22 != 0 && (v23 = (unsigned int)v19 / v22,
                       CudaDriverRoutine_10b6e0(a2, (int*)a1, v30_.v31, v24,
                                                v22, &v30_.v30),
                       v23 > v30_.v30)) {
        nvidia_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Grid size of (%u,%u,%u) with cluster size of (%u,%u,%u) "
                     "yields %llu clusters but maximum is %d",
            v29, v28, v13, v27, v26, v25, v23, v30_.v30);
        return 720;
      }
      else if (CudaDriverStub_b9300(a2)) {
        nvidia_ed630((__int64)"CUDA", 0,
                     (__int64)"Cooperative launch does not support kernels "
                              "using CUDA Dynamic Parallelism");
        return 800;
      }
      else {
        return 0;
      }
    }
    else {
      nvidia_ed630((__int64)"CUDA", 0,
                   (__int64)"Requested cooperative grid dimensions (%u,%u,%u) "
                            "exceed occupancy limit for this kernel on this "
                            "device of %u blocks",
                   v29, v28, v13, v21);
      return 720;
    }
  }
  return result;
}

__int64 nvidia_e96c0(__int64 a1, __int64 a2, _QWORD* a3)
{
  unsigned int* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  struct {
    _QWORD v20[6];
    __int64 v21;
  } v20_;
  struct {
    _QWORD v22[8];
    __int128 v23;
    __int128 v24;
    __int128 v25;
    __int128 v26;
    __int64 v27;
  } v22_;
  _QWORD* v28;

  cuda_driver_108520(a2 + 24);
  {
    v6 = *(unsigned int**)(a2 + 64);
    __asm__ volatile("" ::"r"(v6));
  }
  v28 = nullptr;
  v22_.v27 = 0;
  memset(v22_.v22, 0, sizeof(v22_.v22));
  memset(v20_.v20, 0, sizeof(v20_.v20));
  v22_.v23 = (__typeof__(v22_.v23)){0};
  v22_.v24 = (__typeof__(v22_.v24)){0};
  v22_.v25 = (__typeof__(v22_.v25)){0};
  v22_.v26 = (__typeof__(v22_.v26)){0};
  v7 = (_QWORD*)(a1 + ((unsigned __int64)*v6 << 6));
  {
    v8 = v7[2];
    __asm__ volatile("" ::"r"(v8));
  }
  if (v8 != 0) {
    if (*((_BYTE*)&CudaDriverRoutine_71c8 + (_QWORD)CudaDriverData_1422118) !=
        0) {
      cuda_driver_1084c0(a1 + 4120);
      {
        v9 = *(_QWORD*)(a1 + 4112);
        __asm__ volatile("" ::"r"(v9));
      }
      if (v9 != 0) {
        while (*(_QWORD*)(v9 + 8) != a2) {
          {
            v9 = *(_QWORD*)(v9 + 24);
            __asm__ volatile("" ::"r"(v9));
          }
          if (v9 == 0) {
            goto LABEL_6;
          }
        }
        {
          v11 = *(_QWORD**)v9;
          __asm__ volatile("" ::"r"(v11));
        }
        CudaDriverRoutine_1085b0(a1 + 4120);
        v10 = 0;
      LABEL_14:
        CudaDriverRoutine_1085d0(a2 + 24);
        if (a3 == nullptr) {
          goto LABEL_20;
        }
        goto LABEL_15;
      }
    LABEL_6:
      CudaDriverRoutine_1085b0(a1 + 4120);
    }
    v10 = 2;
    v11 = (_QWORD*)CudaDriverRoutine_12e510(1, 32);
    if (v11 == nullptr) {
      goto LABEL_14;
    }
    {
      v12 = *(_QWORD*)(a1 + 4160);
      __asm__ volatile("" ::"r"(v12));
    }
    {
      v13 = v7[5];
      __asm__ volatile("" ::"r"(v13));
    }
    {
      v14 = v7[1];
      __asm__ volatile("" ::"r"(v14));
    }
    v20_.v21 = a1;
    *((_QWORD*)&v22_.v23 + 1) = v8;
    LODWORD(v22_.v24) = 2;
    v20_.v20[2] = v12;
    *((_QWORD*)&v22_.v25 + 1) = v14;
    *(_QWORD*)&v22_.v26 = v13;
    v15 = *(_OWORD*)(a1 + 4440);
    LODWORD(v20_.v20[5]) = *(_DWORD*)(a1 + 4456);
    {
      v16 = v7[3];
      __asm__ volatile("" ::"r"(v16));
    }
    *(_OWORD*)&v20_.v20[3] = v15;
    *((_QWORD*)&v22_.v24 + 1) = v16;
    v17 = nvidia_105e80(&v28, a2, v22_.v22, (__int64)v20_.v20, 1);
    if (v17 != 0) {
      v10 = v17;
      CudaDriverRoutine_12e340((__int64)v11);
      v11 = nullptr;
      CudaDriverRoutine_1085d0(a2 + 24);
      if (a3 == nullptr) {
        goto LABEL_20;
      }
    }
    else {
      *v11 = v28;
      v11[1] = a2;
      cuda_driver_108520(a1 + 4120);
      v11[3] = *(_QWORD*)(a1 + 4112);
      *(_QWORD*)(a1 + 4112) = v11;
      {
        v18 = v11[3];
        __asm__ volatile("" ::"r"(v18));
      }
      if (v18 != 0) {
        *(_QWORD*)(v18 + 16) = v11;
      }
      CudaDriverRoutine_1085d0(a1 + 4120);
      v11 = v28;
      v10 = 0;
      CudaDriverRoutine_1085d0(a2 + 24);
      if (a3 == nullptr) {
        goto LABEL_20;
      }
    }
  }
  else {
    v11 = nullptr;
    v10 = 0;
    CudaDriverRoutine_1085d0(a2 + 24);
    if (a3 == nullptr) {
      goto LABEL_20;
    }
  }
LABEL_15:
  if (v10 == 0) {
    *a3 = v11;
    return v10;
  }
LABEL_20:
  if (v10 != 0 && v11 != nullptr) {
    cuda_driver_108520(a2 + 24);
    CudaDriverStub_105c00(v11);
    CudaDriverRoutine_1085d0(a2 + 24);
  }
  return v10;
}

__int64 nvidia_ed630(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __builtin_va_list va1;
  __builtin_va_list va;

  __builtin_va_start(va, a3);
  __builtin_va_copy(va1, va);
  return CudaDriverRoutine_ed6a0(a1, a2, a3, (__int64)&va1);
}

__int64 nvidia_f2e00(unsigned int* a1, __int64 a2, unsigned __int64* a3,
                     __int64* a4)
{
  unsigned __int64 v4;
  int v8;
  __int64 result;
  void* v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v15;
  unsigned int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _DWORD v21[2];
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int64 v26;
  __int64 v27;

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  {
    v4 = *a3;
    __asm__ volatile("" ::"r"(v4));
  }
  *a4 = 0;
  v18 = v4;
  v19 = 0;
  if (v4 != 0 || (v4 = atomic_fetch_or(
                      (atomic_ullong* volatile)((char*)CudaDriverData_1422118 +
                                                8 * *a1 + 18392),
                      0)) != 0) {
    {
      v8 = *(_DWORD*)(v4 + 112);
      __asm__ volatile("" ::"r"(v8));
    }
    result = CudaDriverStub_118070(a2),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((_DWORD)result == 0) {
      goto LABEL_4;
    }
  }
  else if ((unsigned __int8)CudaDriverStub_4f840(a1) != 0 &&
           cuda_driver_predicates_9ac80((__int64)a1)) {
    {
      v16 = *a1;
      __asm__ volatile("" ::"r"(v16));
    }
    v27 = 0;
    v26 = 0;
    v21[0] = 1;
    v21[1] = v16;
    v25 = (__typeof__(v25)){0};
    v24 = (__typeof__(v24)){0};
    v23 = (__typeof__(v23)){0};
    v22 = (__typeof__(v22)){0};
    v20 = 1;
    result = CudaDriverRoutine_f2a00(v21, 0, v15, (unsigned __int64*)&v27),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_f0380(&v20, 0, v27, 1u, 0, (__int64*)&v18),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if ((_DWORD)result == 0) {
        v4 = v18;
        {
          v8 = *(_DWORD*)(v18 + 112);
          __asm__ volatile("" ::"r"(v8));
        }
        result = CudaDriverStub_118070(a2),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if ((_DWORD)result == 0) {
        LABEL_4:
          v10 = CudaDriverData_1422118;
          cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                             (_QWORD)CudaDriverData_1422118),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v11 = CudaDriverRoutine_8b200((__int64)&CudaDriverRoutine_4768 +
                                            (_QWORD)v10,
                                        *(_DWORD*)(a2 + 348), v8),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          if (v11 != 0) {
            v12 = v11;
          }
          else {
            v17 = CudaDriverRoutine_101f00(*(_QWORD*)v4),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            v12 = v17;
            if (v17 == 0) {
              v13 = 2;
              goto LABEL_7;
            }
            if ((unsigned __int8)CudaDriverRoutine_8b1c0(
                    (__int64)&CudaDriverRoutine_4768 + (_QWORD)v10,
                    *(_DWORD*)(a2 + 348), v8, &v19, v17) == 0) {
              CudaDriverRoutine_101ff0(v12),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              v12 = v19;
            }
          }
          v13 = 0;
        LABEL_7:
          CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 +
                                   (_QWORD)v10),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          *a3 = v4;
          *a4 = v12;
          return v13;
        }
      }
    }
  }
  else {
    return 801;
  }
  return result;
}

__int64 nvidia_f6490(int* a1, _QWORD* a2, char a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  int* v6;
  _QWORD* v7;
  char v8;
  __int64 v9;
  _BOOL4 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  int* v14;
  _QWORD* v15;
  char v16;
  __int64 v17;
  int* v18;
  _QWORD* v19;
  char v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  char* v34;
  bool v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _DWORD* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned int v43;
  _QWORD* v44;
  int* v45;
  bool v46;
  _DWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  bool v53;
  _QWORD* v54;
  unsigned __int64 v55;
  char* v56;
  bool v57;
  char* v58;
  int v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  char* v62;
  _QWORD* v64;
  int* v65;
  _BOOL4 v66;

  {
    v3 = *a2;
    __asm__ volatile("" ::"r"(v3));
  }
  if (*a2 == 0) {
    return (unsigned int)v3;
  }
  {
    v3 = a2[1];
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 == 0) {
    return (unsigned int)v3;
  }
  {
    v3 = a2[2];
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 == 0) {
    return (unsigned int)v3;
  }
  {
    v4 = *a1;
    __asm__ volatile("" ::"r"(v4));
  }
  if (*a1 != 0) {
    if (v4 != 1) {
      if (v4 == 2) {
        {
          v5 = *((_QWORD*)a1 + 12);
          __asm__ volatile("" ::"r"(v5));
        }
      LABEL_13:
        if (v5 != 0) {
          {
            v10 = ((*((_QWORD*)a1 + 18) >> **(_DWORD**)(v5 + 64)) & 1LL) == 0;
            __asm__ volatile("" ::"r"(v10));
          }
          v11 = (a3 & 4) == 0;
          if ((a3 & 4) != 0) {
            goto LABEL_29;
          }
          goto LABEL_26;
        }
      LABEL_28:
        v11 = (a3 & 4) == 0;
        goto LABEL_29;
      }
      v5 = 0;
      if (v4 == 0) {
        goto LABEL_19;
      }
      goto LABEL_11;
    }
    {
      v5 = *((_QWORD*)a1 + 4);
      __asm__ volatile("" ::"r"(v5));
    }
    if (v5 != 0) {
      goto LABEL_9;
    }
  }
  else {
    {
      v5 = *((_QWORD*)a1 + 3);
      __asm__ volatile("" ::"r"(v5));
    }
    if (v5 != 0) {
    LABEL_9:
      v6 = a1;
      v7 = a2;
      v8 = a3;
      v9 = CudaDriverRoutine_1dbfd0(v5);
      {
        v4 = *v6;
        __asm__ volatile("" ::"r"(v4));
      }
      a3 = v8;
      a2 = v7;
      v5 = v9;
      a1 = v6;
    }
  }
  if (v4 == 0) {
  LABEL_19:
    v12 = 6;
    goto LABEL_21;
  }
LABEL_11:
  if (v4 != 1) {
    if (v4 != 2) {
      goto LABEL_28;
    }
    goto LABEL_13;
  }
  v12 = 8;
LABEL_21:
  {
    v13 = *(_QWORD*)&a1[v12];
    __asm__ volatile("" ::"r"(v13));
  }
  if (v5 != 0 && v13 != 0) {
    v14 = a1;
    v15 = a2;
    v16 = a3;
    v17 = CudaDriverRoutine_1dbb80(v13, *(_QWORD*)(v5 + 80));
    a3 = v16;
    a2 = v15;
    v13 = v17;
    a1 = v14;
  }
  if (v13 == 0) {
    goto LABEL_28;
  }
  v18 = a1;
  v19 = a2;
  v20 = a3;
  v21 = CudaDriverRoutine_1db1b0(v13) & 0xE0000000000LL;
  a3 = v20;
  a2 = v19;
  a1 = v18;
  v10 = v21 == 0x20000000000LL;
  v11 = (v20 & 4) == 0;
  if ((v20 & 4) == 0) {
  LABEL_26:
    if (v10) {
      nvidia_ed630((__int64)"CUDA", 0, (__int64)"%s, for %s\n",
                   "Requested write on read-only memory",
                   "destination operand");
    LABEL_98:
      LODWORD(v3) = 1;
      return (unsigned int)v3;
    }
  }
LABEL_29:
  {
    v22 = *a1;
    __asm__ volatile("" ::"r"(v22));
  }
  LODWORD(v3) = 1;
  if (*a1 > 1) {
    if (v22 != 2) {
      if (v22 != 3) {
        return (unsigned int)v3;
      }
      if (*((_QWORD*)a1 + 8) == 0) {
        v35 = !v11;
        v34 = "Invalid address";
        goto LABEL_94;
      }
      {
        v36 = *((_QWORD*)a1 + 22);
        __asm__ volatile("" ::"r"(v36));
      }
      {
        v37 = *((_QWORD*)a1 + 9);
        __asm__ volatile("" ::"r"(v37));
      }
      if (v36 >= v37) {
        v35 = !v11;
        v34 = "Invalid X start position";
        goto LABEL_94;
      }
      if (*a2 + v36 > v37) {
        v35 = !v11;
        v34 = "Invalid X finish position";
        goto LABEL_94;
      }
      {
        v49 = *((_QWORD*)a1 + 23);
        __asm__ volatile("" ::"r"(v49));
      }
      {
        v50 = *((_QWORD*)a1 + 10);
        __asm__ volatile("" ::"r"(v50));
      }
      if (v49 >= v50) {
        v35 = !v11;
        v34 = "Invalid Y start position";
        goto LABEL_94;
      }
      if (a2[1] + v49 > v50) {
        v35 = !v11;
        v34 = "Invalid Y finish position";
        goto LABEL_94;
      }
    }
  LABEL_92:
    LODWORD(v3) = 0;
    return (unsigned int)v3;
  }
  if (v22 == 0) {
    {
      v38 = *((_DWORD**)a1 + 1);
      __asm__ volatile("" ::"r"(v38));
    }
    {
      v39 = *((_QWORD*)a1 + 22);
      __asm__ volatile("" ::"r"(v39));
    }
    {
      v40 = (unsigned int)v38[28];
      __asm__ volatile("" ::"r"(v40));
    }
    if (v39 >= v40) {
      v35 = !v11;
      v34 = "Invalid X start position: Must be less than array width";
      goto LABEL_94;
    }
    if (*a2 + v39 > v40) {
      v35 = !v11;
      v34 = "Invalid X finish position: Must be less than array width";
      goto LABEL_94;
    }
    {
      v43 = v38[4];
      __asm__ volatile("" ::"r"(v43));
    }
    v44 = a2;
    v45 = a1;
    v46 = CudaDriverRoutine_874c0(v38[6]);
    {
      v47 = *((_DWORD**)v45 + 1);
      __asm__ volatile("" ::"r"(v47));
    }
    if (v46) {
      {
        v48 = (unsigned int)(v47[27] - 1);
        __asm__ volatile("" ::"r"(v48));
      }
      if ((*((_QWORD*)v45 + 22) & v48) != 0) {
        v35 = !v11;
        v34 = "Misaligned X-offset for compressed array copy";
        goto LABEL_94;
      }
      if ((*v44 & v48) != 0) {
        v35 = !v11;
        v34 = "Misaligned copy X-extent for compressed array copy";
        goto LABEL_94;
      }
      {
        v59 = v47[4];
        __asm__ volatile("" ::"r"(v59));
      }
      v54 = v44;
      {
        v43 = (unsigned int)(v59 + v47[38] - 1) / v47[38];
        __asm__ volatile("" ::"r"(v43));
      }
      {
        v55 = *((_QWORD*)v45 + 23);
        __asm__ volatile("" ::"r"(v55));
      }
      if (v59 == 0) {
        goto LABEL_78;
      }
    }
    else {
      v54 = v44;
      {
        v55 = *((_QWORD*)v45 + 23);
        __asm__ volatile("" ::"r"(v55));
      }
      if (v47[4] == 0) {
      LABEL_78:
        if (v55 != 0) {
          v35 = !v11;
          v34 = "Invalid Y start position: Must be 0 for 1D arrays";
          goto LABEL_94;
        }
        if (v54[1] != 1) {
          v35 = !v11;
          v34 = "Invalid height: Must be 1 for 1D arrays";
          goto LABEL_94;
        }
      LABEL_81:
        {
          v60 = (unsigned int)v47[5];
          __asm__ volatile("" ::"r"(v60));
        }
        {
          v61 = *((_QWORD*)v45 + 24);
          __asm__ volatile("" ::"r"(v61));
        }
        if ((_DWORD)v60 != 0) {
          if (v61 >= v60) {
            v35 = !v11;
            v34 = "Invalid Z start position: Must be less than depth";
            goto LABEL_94;
          }
          if (v54[2] + v61 > v60) {
            v35 = !v11;
            v34 = "Invalid Z finish position: Must be less than or equal to "
                  "depth";
            goto LABEL_94;
          }
        }
        else {
          if (v61 != 0) {
            v35 = !v11;
            v34 = "Invalid Z start position: must be 0 for 1D and 2D arrays";
            goto LABEL_94;
          }
          if (v54[2] != 1) {
            v35 = !v11;
            v34 = "Invalid depth: must be 1 for 1D and 2D arrays";
            goto LABEL_94;
          }
        }
        if ((unsigned __int8)CudaDriverRoutine_87c60(v47[6]) != 0) {
          v35 = !v11;
          v34 = "Cannot use an array with multi-planar format as a memcpy "
                "operand, use its planes instead";
          goto LABEL_94;
        }
        goto LABEL_92;
      }
    }
    if (v55 >= v43) {
      v57 = !v11;
      goto LABEL_73;
    }
    if (v54[1] + v55 > v43) {
      v53 = !v11;
      goto LABEL_64;
    }
    goto LABEL_81;
  }
  if (v22 == 1) {
    {
      v23 = *((_QWORD*)a1 + 22);
      __asm__ volatile("" ::"r"(v23));
    }
    {
      v24 = *((_QWORD*)a1 + 23);
      __asm__ volatile("" ::"r"(v24));
    }
    {
      v25 = *((_QWORD*)a1 + 24);
      __asm__ volatile("" ::"r"(v25));
    }
    v26 = a3;
    v64 = a2;
    v65 = a1;
    v66 = v11;
    {
      v27 = a2[2];
      __asm__ volatile("" ::"r"(v27));
    }
    {
      v29 = *((_QWORD*)a1 + 6);
      __asm__ volatile("" ::"r"(v29));
    }
    {
      v28 = *((_QWORD*)a1 + 7);
      __asm__ volatile("" ::"r"(v28));
    }
    {
      v30 = *((_QWORD*)a1 + 5);
      __asm__ volatile("" ::"r"(v30));
    }
    {
      v31 = *a2;
      __asm__ volatile("" ::"r"(v31));
    }
    {
      v32 = a2[1];
      __asm__ volatile("" ::"r"(v32));
    }
    v33 = CudaDriverStub_1dbf90(*((_QWORD*)a1 + 4));
    if ((v26 & 2) == 0 &&
        v30 + v23 + v31 + (v24 + v32 + (v25 + v27 - 1) * v28 - 1) * v29 - 1 >=
            v33) {
      v34 = "Copy is larger than memobj size";
      v35 = !v66;
    LABEL_94:
      if (v35) {
        v62 = "source operand";
      }
      else {
        v62 = "destination operand";
      }
      nvidia_ed630((__int64)"CUDA", 0, (__int64)"%s, for %s\n", v34, v62);
      goto LABEL_98;
    }
    {
      v41 = *((_QWORD*)v65 + 22);
      __asm__ volatile("" ::"r"(v41));
    }
    {
      v42 = *((_QWORD*)v65 + 6);
      __asm__ volatile("" ::"r"(v42));
    }
    if (v41 >= v42) {
      v34 = "Invalid X start position: Must be less than pitch";
      v35 = !v66;
      goto LABEL_94;
    }
    if (*v64 + v41 > v42) {
      v34 = "Invalid X finish position: Must be less than or equal to pitch";
      v35 = !v66;
      goto LABEL_94;
    }
    {
      v51 = *((_QWORD*)v65 + 23);
      __asm__ volatile("" ::"r"(v51));
    }
    {
      v52 = *((_QWORD*)v65 + 7);
      __asm__ volatile("" ::"r"(v52));
    }
    if (v51 < v52) {
      if (v64[1] + v51 > v52) {
        v53 = !v66;
      LABEL_64:
        if (v53) {
          v56 = "source operand";
        }
        else {
          v56 = "destination operand";
        }
        nvidia_ed630(
            (__int64)"CUDA", 0, (__int64)"%s, for %s\n",
            "Invalid Y finish position: Must be less than or equal to height",
            v56);
        goto LABEL_98;
      }
      goto LABEL_92;
    }
    v57 = !v66;
  LABEL_73:
    if (v57) {
      v58 = "source operand";
    }
    else {
      v58 = "destination operand";
    }
    nvidia_ed630((__int64)"CUDA", 0, (__int64)"%s, for %s\n",
                 "Invalid Y start position: Must be less than height", v58);
    goto LABEL_98;
  }
  return (unsigned int)v3;
}

__int64 nvidia_fd890(__int64 result, _QWORD* a2, __int64 a3, __int64 a4, int a5,
                     __int64 a6)
{
  __int64 v6;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  int v18;
  struct {
    int v19;
    char gap12_[4];
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    int v25;
    int v26;
  } v19_;

  *(_DWORD*)(result + 48) = a5;
  *(_QWORD*)(result + 32) = a3;
  *(_QWORD*)(result + 40) = a4;
  *(_DWORD*)(result + 28) = 1;
  if (*(_DWORD*)((char*)(*(void*(*)[3])0x28LL) +
                 (_QWORD)CudaDriverData_1432170 + 4) != 0) {
    {
      v6 = *(_QWORD*)(a3 + 16);
      __asm__ volatile("" ::"r"(v6));
    }
    v19_.v19 = 56;
    v12 = CudaDriverRoutine_98340(v6);
    {
      v13 = a2[50];
      __asm__ volatile("" ::"r"(v13));
    }
    {
      v14 = a2[51];
      __asm__ volatile("" ::"r"(v14));
    }
    v19_.v20 = v12;
    v19_.v21 = a3;
    v15 = v14 * v13;
    {
      v16 = a2[52];
      __asm__ volatile("" ::"r"(v16));
    }
    v19_.v24 = a6;
    v19_.v22 = v15 * v16;
    v19_.v23 = a4;
    v17 = CudaDriverStub_5bb90(a4);
    if (v17 >= 0xC) {
      v18 = 12;
    }
    else {
      v18 = v17;
    }
    v19_.v25 = v18;
    v19_.v26 = a5;
    return cuda_driver_20b420(8u, 0xBu, (__int64)&v19_.v19);
  }
  return result;
}

__int64 nvidia_ff600(_QWORD* a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int128* v33;
  __int64 v34;
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
  __int128* v47;
  _OWORD* v48;
  __int128 v49;
  __int128 v50;
  __int128 v51;
  __int64 v52;
  int v53;
  unsigned __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int128* v65;
  __int64 v66;
  __int64 v67;
  __int128 v68;
  __int128 v69;
  __int128 v70;
  __int128 v71;
  __int128 v72;
  __int128 v73;
  __int128 v74;
  __int128 v75;
  __int128 v76;
  __int128 v77;
  __int128 v78;
  __int128 v79;
  __int128 v80;
  __int128 v81;
  __int128 v82;
  __int128 v83;
  __int128 v84;
  __int128 v85;
  __int128 v86;
  __int128 v87;
  __int128 v88;
  __int128 v89;
  __int128 v90;
  __int128 v91;
  __int64 v92;
  __int128* v93;
  _OWORD* v94;
  __int128 v95;
  __int128 v96;
  __int128 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int128* v103;
  __int64 v104;
  __int64 v105;
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
  __int128 v124;
  __int128 v125;
  __int128 v126;
  __int128 v127;
  __int128 v128;
  __int128 v129;
  __int64 v130;
  __int128* v131;
  _OWORD* v132;
  __int128 v133;
  __int128 v134;
  __int128 v135;
  __int64 v136;
  int v137;
  bool v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int128* v142;
  __int64 v143;
  __int128 v144;
  __int128 v145;
  __int128 v146;
  __int128 v147;
  __int128 v148;
  __int128 v149;
  __int128 v150;
  __int128 v151;
  __int128 v152;
  __int128 v153;
  __int128 v154;
  __int128 v155;
  __int128 v156;
  __int128 v157;
  __int128 v158;
  __int128 v159;
  __int128 v160;
  __int128 v161;
  __int128 v162;
  __int128 v163;
  __int128 v164;
  __int128 v165;
  __int128 v166;
  __int128 v167;
  __int128* v168;
  __int64 v169;
  _OWORD* v170;
  __int128 v171;
  __int128 v172;
  __int128 v173;
  unsigned int v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int128* v179;
  __int64 v180;
  __int128 v181;
  __int128 v182;
  __int128 v183;
  __int128 v184;
  __int128 v185;
  __int128 v186;
  __int128 v187;
  __int128 v188;
  __int128 v189;
  __int128 v190;
  __int128 v191;
  __int128 v192;
  __int128* v193;
  _OWORD* v194;
  __int128 v195;
  __int128 v196;
  __int128 v197;
  __int64 v198;
  unsigned int v199;
  int v200;
  __int64 v201;
  unsigned int v202;
  __int64 v203;
  __int64 v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  __int64 v207;
  __int64 v208;
  _QWORD* v209;
  __int64 v210;
  int v211;
  unsigned int v212;
  __int128 v213;
  __int64 v214;
  _QWORD v215[2];

  LODWORD(v6) = a2;
  v214 = 0;
  v204 = CudaDriverRoutine_98340((__int64)a1);
  v8 = (*(__int64 (**)(__int64))(a1[8] + 18424LL))(29);
  v202 = v6;
  v203 = a4;
  if ((_DWORD)v6 == 0) {
    goto LABEL_40;
  }
  v9 = v8 - 1;
  v200 = 0;
  v6 = (unsigned int)v6;
  v10 = a3;
  do {
    {
      v11 = *(_DWORD*)v10;
      __asm__ volatile("" ::"r"(v11));
    }
    if (*(int*)v10 > 3) {
      if (v11 == 5) {
        goto LABEL_11;
      }
      if (v11 != 4) {
        goto LABEL_3;
      }
    LABEL_10:
      v200 = 1;
      goto LABEL_11;
    }
    if (v11 == 1) {
      goto LABEL_10;
    }
    if (v11 != 2) {
      goto LABEL_3;
    }
  LABEL_11:
    {
      v12 = *(_QWORD*)(v10 + 8);
      __asm__ volatile("" ::"r"(v12));
    }
    v13 = CudaDriverRoutine_1dba10(a1[10], v12);
    if (v13 != 0) {
      v14 = (_QWORD*)v13;
      v15 = (_QWORD*)v13;
      if (CudaDriverRoutine_1dc9c0(v13)) {
        goto LABEL_36;
      }
    }
    else {
      v16 = cuda_driver_1dbe40((__int64)a1, v12, 0);
      if (v16 == 0) {
        {
          v24 = a1[8];
          __asm__ volatile("" ::"r"(v24));
        }
        if ((*(_BYTE*)(v24 + 17068) & 1) == 0 ||
            !cuda_driver_predicates_9ae50(v24)) {
          nvidia_ed630((__int64)"CUDA", 0,
                       (__int64)"Batch memory address 0x%016llx is not valid",
                       v12);
          return 1;
        }
        if (v12 == 0) {
          nvidia_ed630(
              (__int64)"CUDA", 0,
              (__int64)"Batch memory operation address cannot be zero");
          return 1;
        }
        goto LABEL_24;
      }
      v14 = (_QWORD*)v16;
      if ((unsigned int)CudaDriverRoutine_1dd1f0(v16) != 15 ||
          (v17 = (_QWORD*)CudaDriverStub_9b050(a1[8]),
           (v18 = CudaDriverRoutine_1dc340(v14, v17)) == 0)) {
        nvidia_ed630((__int64)"CUDA", 0,
                     (__int64)"Batch memory operation address 0x%016llx is not "
                              "accessible from supplied device",
                     v12);
        return 1;
      }
      v15 = (_QWORD*)v18;
      if (CudaDriverRoutine_1dc9c0((__int64)v14)) {
      LABEL_36:
        nvidia_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Batch memory operations do not support managed memory");
        return 1;
      }
    }
    v19 = ((__int64 (*)(__int64))cuda_driver_predicates_1dc720)((__int64)v14);
    if ((unsigned int)CudaDriverRoutine_1dd1f0((__int64)v14) == 15) {
      v20 = CudaDriverStub_9b050(a1[8]);
    }
    else {
      v20 = a1[10];
      __asm__ volatile("" ::"r"(v20));
    }
    v215[0] = CudaDriverRoutine_1dc5c0(v15, 0, v9, v20, v19);
    if (v215[0] == 0) {
      CudaDriverRoutine_1db1c0((__int64)v15, (__int64)&v205);
      v205 = v205 & 0xF03EFFF883FDFFFFLL | 0x11C020000LL;
      v206 = v206 & 0xFFFFFFFFFFB7FFD9LL | 0x400020 | (4 * (v19 & 1)) | 2u;
      v213 = CudaDriverData_11153a0;
      v21 = CudaDriverStub_1dbf90(v14);
      result = cuda_driver_1da1b0(v20, (__int64*)&v205, v21, v215);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    v23 = CudaDriverStub_102e00(v15);
    v12 = v12 - v23 + CudaDriverStub_102e00(v215[0]);
  LABEL_24:
    if (*(_DWORD*)v10 <= 5u && ((1 << *(_DWORD*)v10) & 0x36) != 0) {
      *(_QWORD*)(v10 + 32) = v12;
    }
  LABEL_3:
    v10 += 48;
    --v6;
  } while (v6 != 0);
  LODWORD(v6) = v202;
  a4 = v203;
  if (v200 == 0) {
    goto LABEL_40;
  }
  if ((*(_BYTE*)(v203 + 56) & 1) != 0) {
    v25 = CudaDriverRoutine_98340(*(_QWORD*)(v203 + 16));
    cuda_driver_1084c0(v25 + 24);
    result = CudaDriverRoutine_206200(a1[11], v203);
    if ((*(_BYTE*)(v203 + 56) & 1) == 0) {
      goto LABEL_34;
    }
  }
  else {
    result = CudaDriverRoutine_206200(a1[11], v203);
    if ((*(_BYTE*)(v203 + 56) & 1) == 0) {
    LABEL_34:
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_40;
    }
  }
  v26 = result;
  v27 = CudaDriverRoutine_98340(*(_QWORD*)(v203 + 16));
  CudaDriverRoutine_1085b0(v27 + 24);
  result = v26;
  if (v26 != 0) {
    return result;
  }
LABEL_40:
  v28 = CudaDriverRoutine_5f050(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 72LL), a4, 1);
  if (*(int*)((char*)((int*)0x4LL) +
              *(_QWORD*)((char*)((_UNKNOWN*)0x7CLL) +
                         (_QWORD)CudaDriverData_14225e0 + 4)) != 0) {
    LODWORD(v205) = 64;
    HIDWORD(v205) = v6;
    v206 = v204;
    v29 = CudaDriverStub_12e330(56LL * (unsigned int)v6);
    v207 = v29;
    if ((_DWORD)v6 == 0) {
      goto LABEL_50;
    }
    v30 = v6 & 3;
    if ((unsigned int)v6 >= 4) {
      v32 = v29 + 112;
      v33 = (__int128*)(a3 + 96);
      v34 = 0;
      do {
        *(_DWORD*)(v32 - 112) = 56;
        v34 -= 4;
        v35 = *(v33 - 6);
        v36 = *(v33 - 5);
        v37 = *(v33 - 4);
        *(_DWORD*)(v32 - 56) = 56;
        *(_OWORD*)(v32 - 72) = v37;
        *(_OWORD*)(v32 - 88) = v36;
        *(_OWORD*)(v32 - 104) = v35;
        v38 = *(v33 - 3);
        v39 = *(v33 - 2);
        v40 = *(v33 - 1);
        *(_DWORD*)v32 = 56;
        *(_OWORD*)(v32 - 32) = v39;
        *(_OWORD*)(v32 - 16) = v40;
        *(_OWORD*)(v32 - 48) = v38;
        v41 = *v33;
        v42 = v33[1];
        v43 = v33[2];
        *(_DWORD*)(v32 + 56) = 56;
        *(_OWORD*)(v32 + 40) = v43;
        *(_OWORD*)(v32 + 24) = v42;
        *(_OWORD*)(v32 + 8) = v41;
        v44 = v33[3];
        v45 = v33[4];
        v46 = v33[5];
        v33 += 12;
        *(_OWORD*)(v32 + 80) = v45;
        *(_OWORD*)(v32 + 96) = v46;
        *(_OWORD*)(v32 + 64) = v44;
        v32 += 224;
      } while (-(__int64)((unsigned int)v6 & 0xFFFFFFFC) != v34);
      v31 = -v34;
      if ((v6 & 3) != 0) {
        goto LABEL_48;
      }
    }
    else {
      v31 = 0;
      if ((v6 & 3) == 0) {
        goto LABEL_50;
      }
    LABEL_48:
      v47 = (__int128*)(a3 + 48 * v31);
      v48 = (_OWORD*)(v29 + 56 * v31 + 8);
      do {
        *((_DWORD*)v48 - 2) = 56;
        --v30;
        v49 = *v47;
        v50 = v47[1];
        v51 = v47[2];
        v47 += 3;
        v48[1] = v50;
        v48[2] = v51;
        *v48 = v49;
        v48 = (_OWORD*)((char*)v48 + 56);
      } while (v30 != 0);
    }
  LABEL_50:
    v210 = v28;
    v208 = a4;
    v209 = v215;
    cuda_driver_20b420(0x10u, 1u, (__int64)&v205);
    CudaDriverRoutine_12e340(v207);
  }
  CudaDriverRoutine_205810(v28, a4, (__int64)&v214, 2u);
  if ((_DWORD)v6 == 0) {
    CudaDriverRoutine_2060c0(a4, v214, 2);
    result = 0;
    if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                   (_QWORD)CudaDriverData_14321b0) != 0) {
      goto LABEL_115;
    }
    return result;
  }
  v52 = 0;
  v53 = 0;
  v201 = v28;
  v198 = 56LL * (unsigned int)v6;
  v54 = 448 * ((unsigned __int64)(unsigned int)v6 >> 3);
  while (2) {
    v57 = a3 + 48 * v52;
    v56 = 1;
    {
      v58 = *(_DWORD*)v57;
      __asm__ volatile("" ::"r"(v58));
    }
    if (*(int*)v57 > 3) {
      if (v58 != 4) {
        if (v58 == 6) {
          v55 = (*(__int64 (**)(__int64, bool))(a1[8] + 19192LL))(
              v214, *(_DWORD*)(v57 + 4) == 0);
        LABEL_54:
          v214 = v55;
          goto LABEL_55;
        }
        if (v58 != 5) {
          goto LABEL_97;
        }
      LABEL_65:
        if ((*(_BYTE*)(v57 + 24) & 1) == 0) {
          v59 = (*(__int64 (**)(__int64, __int64))(a1[8] + 19192LL))(v214, 1);
          {
            v58 = *(_DWORD*)v57;
            __asm__ volatile("" ::"r"(v58));
          }
          v214 = v59;
        }
        {
          v60 = a1[8];
          __asm__ volatile("" ::"r"(v60));
        }
        {
          v61 = *(_QWORD*)(v57 + 32);
          __asm__ volatile("" ::"r"(v61));
        }
        if (v58 == 2) {
          v55 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64))(
              v60 + 19064))(v214, v61, *(unsigned int*)(v57 + 16), 1);
        }
        else {
          v55 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64))(
              v60 + 19072))(v214, v61, *(_QWORD*)(v57 + 16), 1);
        }
        goto LABEL_54;
      }
    LABEL_69:
      {
        v62 = *(_DWORD*)(v57 + 24);
        __asm__ volatile("" ::"r"(v62));
      }
      if (*(_DWORD*)((char*)((__int64*)0x10LL) +
                     *(_QWORD*)((char*)((_UNKNOWN*)0x7CLL) +
                                (_QWORD)CudaDriverData_14225e0 + 4)) != 0) {
        v206 = v204;
        LODWORD(v205) = 64;
        HIDWORD(v205) = v202;
        v63 = CudaDriverStub_12e330(v198);
        v207 = v63;
        if (v202 >= 8) {
          v65 = (__int128*)(a3 + 192);
          v66 = 0;
          v64 = 0;
          do {
            v67 = v63 + v66;
            v64 += 8;
            v66 += 448;
            *(_DWORD*)v67 = 56;
            v68 = *(v65 - 12);
            v69 = *(v65 - 11);
            v70 = *(v65 - 10);
            *(_DWORD*)(v67 + 56) = 56;
            *(_OWORD*)(v67 + 40) = v70;
            *(_OWORD*)(v67 + 24) = v69;
            *(_OWORD*)(v67 + 8) = v68;
            v71 = *(v65 - 9);
            v72 = *(v65 - 8);
            v73 = *(v65 - 7);
            *(_DWORD*)(v67 + 112) = 56;
            *(_OWORD*)(v67 + 80) = v72;
            *(_OWORD*)(v67 + 96) = v73;
            *(_OWORD*)(v67 + 64) = v71;
            v74 = *(v65 - 6);
            v75 = *(v65 - 5);
            v76 = *(v65 - 4);
            *(_DWORD*)(v67 + 168) = 56;
            *(_OWORD*)(v67 + 152) = v76;
            *(_OWORD*)(v67 + 136) = v75;
            *(_OWORD*)(v67 + 120) = v74;
            v77 = *(v65 - 3);
            v78 = *(v65 - 2);
            v79 = *(v65 - 1);
            *(_DWORD*)(v67 + 224) = 56;
            *(_OWORD*)(v67 + 192) = v78;
            *(_OWORD*)(v67 + 208) = v79;
            *(_OWORD*)(v67 + 176) = v77;
            v80 = *v65;
            v81 = v65[1];
            v82 = v65[2];
            *(_DWORD*)(v67 + 280) = 56;
            *(_OWORD*)(v67 + 264) = v82;
            *(_OWORD*)(v67 + 248) = v81;
            *(_OWORD*)(v67 + 232) = v80;
            v83 = v65[3];
            v84 = v65[4];
            v85 = v65[5];
            *(_DWORD*)(v67 + 336) = 56;
            *(_OWORD*)(v67 + 304) = v84;
            *(_OWORD*)(v67 + 320) = v85;
            *(_OWORD*)(v67 + 288) = v83;
            v86 = v65[6];
            v87 = v65[7];
            v88 = v65[8];
            *(_DWORD*)(v67 + 392) = 56;
            *(_OWORD*)(v67 + 360) = v87;
            *(_OWORD*)(v67 + 376) = v88;
            *(_OWORD*)(v67 + 344) = v86;
            v89 = v65[9];
            v90 = v65[10];
            v91 = v65[11];
            v65 += 24;
            *(_OWORD*)(v67 + 416) = v90;
            *(_OWORD*)(v67 + 432) = v91;
            *(_OWORD*)(v67 + 400) = v89;
          } while (v54 != v66);
        }
        else {
          v64 = 0;
        }
        v28 = v201;
        if ((v6 & 7) != 0) {
          v92 = v6 & 7;
          v93 = (__int128*)(a3 + 48 * v64);
          v94 = (_OWORD*)(v63 + 56 * v64 + 8);
          do {
            *((_DWORD*)v94 - 2) = 56;
            --v92;
            v95 = *v93;
            v96 = v93[1];
            v97 = v93[2];
            v93 += 3;
            v94[1] = v96;
            v94[2] = v97;
            *v94 = v95;
            v94 = (_OWORD*)((char*)v94 + 56);
          } while (v92 != 0);
        }
        v210 = v201;
        v211 = v52;
        v208 = v203;
        v209 = v215;
        cuda_driver_20b420(0x10u, 4u, (__int64)&v205);
        CudaDriverRoutine_12e340(v207);
        {
          v58 = *(_DWORD*)v57;
          __asm__ volatile("" ::"r"(v58));
        }
      }
      {
        v98 = a1[8];
        __asm__ volatile("" ::"r"(v98));
      }
      {
        v99 = *(_QWORD*)(v57 + 32);
        __asm__ volatile("" ::"r"(v99));
      }
      if (v58 == 1) {
        v214 = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64,
                               _QWORD, _QWORD))(v98 + 19112))(
            v214, 0, 0, v204, v99, *(unsigned int*)(v57 + 16), v62 & 3);
        if ((v62 & 0x40000000) != 0) {
          goto LABEL_81;
        }
      }
      else {
        v214 = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64,
                               _QWORD, _QWORD))(v98 + 19120))(
            v214, 0, 0, v204, v99, *(_QWORD*)(v57 + 16), v62 & 3);
        if ((v62 & 0x40000000) != 0) {
        LABEL_81:
          if ((*(char*)(a1[8] + 16988LL) & 0x80000000) == 0) {
            goto LABEL_96;
          }
          v53 = (*(__int64 (**)(__int64, __int64, __int64*))(v28 + 34048))(
              v28, 200, &v214);
          if (*(_DWORD*)((char*)((__int64*)0x10LL) +
                         (_QWORD)CudaDriverData_14321b0 + 4) == 0) {
            goto LABEL_55;
          }
        LABEL_86:
          v206 = v204;
          LODWORD(v205) = 64;
          HIDWORD(v205) = v202;
          v100 = CudaDriverStub_12e330(v198);
          v207 = v100;
          if (v202 >= 8) {
            v103 = (__int128*)(a3 + 192);
            v101 = v203;
            v104 = 0;
            v102 = 0;
            do {
              v105 = v100 + v104;
              v102 += 8;
              v104 += 448;
              *(_DWORD*)v105 = 56;
              v106 = *(v103 - 12);
              v107 = *(v103 - 11);
              v108 = *(v103 - 10);
              *(_DWORD*)(v105 + 56) = 56;
              *(_OWORD*)(v105 + 40) = v108;
              *(_OWORD*)(v105 + 24) = v107;
              *(_OWORD*)(v105 + 8) = v106;
              v109 = *(v103 - 9);
              v110 = *(v103 - 8);
              v111 = *(v103 - 7);
              *(_DWORD*)(v105 + 112) = 56;
              *(_OWORD*)(v105 + 80) = v110;
              *(_OWORD*)(v105 + 96) = v111;
              *(_OWORD*)(v105 + 64) = v109;
              v112 = *(v103 - 6);
              v113 = *(v103 - 5);
              v114 = *(v103 - 4);
              *(_DWORD*)(v105 + 168) = 56;
              *(_OWORD*)(v105 + 152) = v114;
              *(_OWORD*)(v105 + 136) = v113;
              *(_OWORD*)(v105 + 120) = v112;
              v115 = *(v103 - 3);
              v116 = *(v103 - 2);
              v117 = *(v103 - 1);
              *(_DWORD*)(v105 + 224) = 56;
              *(_OWORD*)(v105 + 192) = v116;
              *(_OWORD*)(v105 + 208) = v117;
              *(_OWORD*)(v105 + 176) = v115;
              v118 = *v103;
              v119 = v103[1];
              v120 = v103[2];
              *(_DWORD*)(v105 + 280) = 56;
              *(_OWORD*)(v105 + 264) = v120;
              *(_OWORD*)(v105 + 248) = v119;
              *(_OWORD*)(v105 + 232) = v118;
              v121 = v103[3];
              v122 = v103[4];
              v123 = v103[5];
              *(_DWORD*)(v105 + 336) = 56;
              *(_OWORD*)(v105 + 304) = v122;
              *(_OWORD*)(v105 + 320) = v123;
              *(_OWORD*)(v105 + 288) = v121;
              v124 = v103[6];
              v125 = v103[7];
              v126 = v103[8];
              *(_DWORD*)(v105 + 392) = 56;
              *(_OWORD*)(v105 + 360) = v125;
              *(_OWORD*)(v105 + 376) = v126;
              *(_OWORD*)(v105 + 344) = v124;
              v127 = v103[9];
              v128 = v103[10];
              v129 = v103[11];
              v103 += 24;
              *(_OWORD*)(v105 + 416) = v128;
              *(_OWORD*)(v105 + 432) = v129;
              *(_OWORD*)(v105 + 400) = v127;
            } while (v54 != v104);
          }
          else {
            v101 = v203;
            v102 = 0;
          }
          if ((v6 & 7) != 0) {
            v130 = v6 & 7;
            v131 = (__int128*)(a3 + 48 * v102);
            v132 = (_OWORD*)(v100 + 56 * v102 + 8);
            do {
              *((_DWORD*)v132 - 2) = 56;
              --v130;
              v133 = *v131;
              v134 = v131[1];
              v135 = v131[2];
              v131 += 3;
              v132[1] = v134;
              v132[2] = v135;
              *v132 = v133;
              v132 = (_OWORD*)((char*)v132 + 56);
            } while (v130 != 0);
          }
          v210 = v28;
          v211 = v52;
          v208 = v101;
          v209 = v215;
          cuda_driver_20b420(0x10u, 5u, (__int64)&v205);
          CudaDriverRoutine_12e340(v207);
        LABEL_55:
          ++v52;
          v56 = v53;
          if (v52 == (unsigned int)v6) {
            goto LABEL_97;
          }
          continue;
        }
      }
      if (*(_DWORD*)((char*)((__int64*)0x10LL) +
                     (_QWORD)CudaDriverData_14321b0 + 4) == 0) {
        goto LABEL_55;
      }
      goto LABEL_86;
    }
    break;
  }
  switch (v58) {
  case 1:
    goto LABEL_69;
  case 2:
    goto LABEL_65;
  case 3:
    if (*(char*)(a1[8] + 16988LL) < 0) {
      v53 = (*(__int64 (**)(__int64, __int64, __int64*))(v28 + 34048))(v28, 200,
                                                                       &v214);
      goto LABEL_55;
    }
  LABEL_96:
    nvidia_ed630(
        (__int64)"CUDA", 0,
        (__int64)"The selected device does not support flushing remote writes");
    v56 = 801;
    break;
  default:
    break;
  }
LABEL_97:
  v199 = v56;
  CudaDriverRoutine_2060c0(v203, v214, 2);
  v136 = 0;
  do {
    {
      v137 = *(_DWORD*)(a3 + 48 * v136);
      __asm__ volatile("" ::"r"(v137));
    }
    v138 = v137 == 5 || v137 == 2;
    if (v138 && *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                           (_QWORD)CudaDriverData_14321b0 + 4) != 0) {
      v206 = v204;
      LODWORD(v205) = 64;
      HIDWORD(v205) = v202;
      v139 = CudaDriverStub_12e330(56LL * v202);
      v207 = v139;
      if (v202 >= 8) {
        v141 = 0;
        v140 = 0;
        v142 = (__int128*)(a3 + 192);
        do {
          v143 = v139 + v141;
          v140 += 8;
          v141 += 448;
          *(_DWORD*)v143 = 56;
          v144 = *(v142 - 12);
          v145 = *(v142 - 11);
          v146 = *(v142 - 10);
          *(_DWORD*)(v143 + 56) = 56;
          *(_OWORD*)(v143 + 40) = v146;
          *(_OWORD*)(v143 + 24) = v145;
          *(_OWORD*)(v143 + 8) = v144;
          v147 = *(v142 - 9);
          v148 = *(v142 - 8);
          v149 = *(v142 - 7);
          *(_DWORD*)(v143 + 112) = 56;
          *(_OWORD*)(v143 + 80) = v148;
          *(_OWORD*)(v143 + 96) = v149;
          *(_OWORD*)(v143 + 64) = v147;
          v150 = *(v142 - 6);
          v151 = *(v142 - 5);
          v152 = *(v142 - 4);
          *(_DWORD*)(v143 + 168) = 56;
          *(_OWORD*)(v143 + 152) = v152;
          *(_OWORD*)(v143 + 136) = v151;
          *(_OWORD*)(v143 + 120) = v150;
          v153 = *(v142 - 3);
          v154 = *(v142 - 2);
          v155 = *(v142 - 1);
          *(_DWORD*)(v143 + 224) = 56;
          *(_OWORD*)(v143 + 192) = v154;
          *(_OWORD*)(v143 + 208) = v155;
          *(_OWORD*)(v143 + 176) = v153;
          v156 = *v142;
          v157 = v142[1];
          v158 = v142[2];
          *(_DWORD*)(v143 + 280) = 56;
          *(_OWORD*)(v143 + 264) = v158;
          *(_OWORD*)(v143 + 248) = v157;
          *(_OWORD*)(v143 + 232) = v156;
          v159 = v142[3];
          v160 = v142[4];
          v161 = v142[5];
          *(_DWORD*)(v143 + 336) = 56;
          *(_OWORD*)(v143 + 304) = v160;
          *(_OWORD*)(v143 + 320) = v161;
          *(_OWORD*)(v143 + 288) = v159;
          v162 = v142[6];
          v163 = v142[7];
          v164 = v142[8];
          *(_DWORD*)(v143 + 392) = 56;
          *(_OWORD*)(v143 + 360) = v163;
          *(_OWORD*)(v143 + 376) = v164;
          *(_OWORD*)(v143 + 344) = v162;
          v165 = v142[9];
          v166 = v142[10];
          v167 = v142[11];
          v142 += 24;
          *(_OWORD*)(v143 + 416) = v166;
          *(_OWORD*)(v143 + 432) = v167;
          *(_OWORD*)(v143 + 400) = v165;
        } while (v54 != v141);
      }
      else {
        v140 = 0;
      }
      v28 = v201;
      if ((v6 & 7) != 0) {
        v168 = (__int128*)(a3 + 48 * v140);
        v169 = v6 & 7;
        v170 = (_OWORD*)(v139 + 56 * v140 + 8);
        do {
          *((_DWORD*)v170 - 2) = 56;
          --v169;
          v171 = *v168;
          v172 = v168[1];
          v173 = v168[2];
          v168 += 3;
          v170[1] = v172;
          v170[2] = v173;
          *v170 = v171;
          v170 = (_OWORD*)((char*)v170 + 56);
        } while (v169 != 0);
      }
      v210 = v201;
      v211 = v136;
      v208 = v203;
      v209 = v215;
      cuda_driver_20b420(0x10u, 3u, (__int64)&v205);
      CudaDriverRoutine_12e340(v207);
    }
    ++v136;
  } while (v136 != (unsigned int)v6);
  result = v199;
  LODWORD(v6) = v202;
  a4 = v203;
  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_14321b0) !=
      0) {
  LABEL_115:
    v174 = result;
    LODWORD(v205) = 64;
    HIDWORD(v205) = v6;
    v206 = v204;
    v175 = CudaDriverStub_12e330(56LL * (unsigned int)v6);
    v207 = v175;
    if ((_DWORD)v6 == 0) {
      goto LABEL_124;
    }
    v176 = v6 & 3;
    if ((unsigned int)v6 >= 4) {
      v178 = v175 + 112;
      v179 = (__int128*)(a3 + 96);
      v180 = 0;
      do {
        *(_DWORD*)(v178 - 112) = 56;
        v180 -= 4;
        v181 = *(v179 - 6);
        v182 = *(v179 - 5);
        v183 = *(v179 - 4);
        *(_DWORD*)(v178 - 56) = 56;
        *(_OWORD*)(v178 - 72) = v183;
        *(_OWORD*)(v178 - 88) = v182;
        *(_OWORD*)(v178 - 104) = v181;
        v184 = *(v179 - 3);
        v185 = *(v179 - 2);
        v186 = *(v179 - 1);
        *(_DWORD*)v178 = 56;
        *(_OWORD*)(v178 - 32) = v185;
        *(_OWORD*)(v178 - 16) = v186;
        *(_OWORD*)(v178 - 48) = v184;
        v187 = *v179;
        v188 = v179[1];
        v189 = v179[2];
        *(_DWORD*)(v178 + 56) = 56;
        *(_OWORD*)(v178 + 40) = v189;
        *(_OWORD*)(v178 + 24) = v188;
        *(_OWORD*)(v178 + 8) = v187;
        v190 = v179[3];
        v191 = v179[4];
        v192 = v179[5];
        v179 += 12;
        *(_OWORD*)(v178 + 80) = v191;
        *(_OWORD*)(v178 + 96) = v192;
        *(_OWORD*)(v178 + 64) = v190;
        v178 += 224;
      } while (-(__int64)((unsigned int)v6 & 0xFFFFFFFC) != v180);
      v177 = -v180;
      if ((v6 & 3) != 0) {
        goto LABEL_122;
      }
    }
    else {
      v177 = 0;
      if ((v6 & 3) == 0) {
        goto LABEL_124;
      }
    LABEL_122:
      v193 = (__int128*)(a3 + 48 * v177);
      v194 = (_OWORD*)(v175 + 56 * v177 + 8);
      do {
        *((_DWORD*)v194 - 2) = 56;
        --v176;
        v195 = *v193;
        v196 = v193[1];
        v197 = v193[2];
        v193 += 3;
        v194[1] = v196;
        v194[2] = v197;
        *v194 = v195;
        v194 = (_OWORD*)((char*)v194 + 56);
      } while (v176 != 0);
    }
  LABEL_124:
    v210 = v28;
    v212 = v174;
    v208 = a4;
    v209 = v215;
    cuda_driver_20b420(0x10u, 2u, (__int64)&v205);
    CudaDriverRoutine_12e340(v207);
    return v174;
  }
  return result;
}

__int64 nvidia_10da00(__int64 result, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  void* v8;
  _QWORD* v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 i;
  _QWORD* v24;
  __int64 v25;
  struct {
    char v26[4];
    char v27[4];
  } v26_;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = result;
  v3 = CudaDriverData_14230e0;
  if (a2 != 0) {
    result = ((__int64 (*)(__int64))CudaDriverRoutine_1dc9c0)(result),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((_BYTE)result != 0) {
      {
        v4 = *(_QWORD*)v3;
        __asm__ volatile("" ::"r"(v4));
      }
      {
        v5 = *(_QWORD*)(*(_QWORD*)v3 + 304LL) - 1LL;
        __asm__ volatile("" ::"r"(v5));
      }
      *(_QWORD*)(*(_QWORD*)v3 + 304LL) = v5;
      if (v5 == 0) {
        for (i = *(_QWORD*)(v4 + 16); i != 0; i = *(_QWORD*)(i + 176)) {
          {
            v24 = *(_QWORD**)(i + 176);
            __asm__ volatile("" ::"r"(v24));
          }
          if (v24 == nullptr) {
            break;
          }
          do {
            result = ((__int64 (*)(__int64, __int64))CudaDriverRoutine_127eb0)(
                (__int64)v24, i),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((_BYTE)result != 0) {
              result = CudaDriverRoutine_1fc5a0(
                  (unsigned int*)(i + 184), (__int64)v24, 1, (bool*)v26_.v26),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if ((_DWORD)result != 0 && v26_.v26[0] != 0) {
                result =
                    (*(__int64 (**)(__int64))(*v24 + 21056LL))((__int64)v24),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v19 =
                    COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            {
              v24 = (_QWORD*)v24[22];
              __asm__ volatile("" ::"r"(v24));
            }
          } while (v24 != nullptr);
        }
      }
    }
  }
  {
    v6 = *(_QWORD*)v3;
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = *(__int64**)(*(_QWORD*)v3 + 16LL);
    __asm__ volatile("" ::"r"(v7));
  }
  if (v7 != nullptr) {
    v8 = CudaDriverData_1422118;
    while (*((_BYTE*)v7 + 161) != 0) {
      {
        v9 = *(_QWORD**)(v2 + 72);
        __asm__ volatile("" ::"r"(v9));
      }
      if ((v9[30] & 0xF800000000LL) == 0x1000000000LL && v9[11] != v9[42] &&
          *(_BYTE*)(*v7 + 17069) != 0) {
        break;
      }
    LABEL_6:
      {
        v7 = (__int64*)v7[22];
        __asm__ volatile("" ::"r"(v7));
      }
      if (v7 == nullptr) {
        v6 = CudaDriverData_143bd80;
        goto LABEL_46;
      }
    }
    while (1) {
      while (1) {
        result = CudaDriverRoutine_1dc0c0(v2, (__int64)v7),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v25 = result;
        if (result == 0) {
          goto LABEL_6;
        }
        if ((unsigned __int8)CudaDriverStub_1dc6e0() != 0) {
          break;
        }
        if (v25 != 0) {
          CudaDriverRoutine_ee330(v25),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          {
            v13 = *v7;
            __asm__ volatile("" ::"r"(v13));
          }
          v14 = v25;
          v15 = cuda_driver_predicates_9ac80(*v7) &&
                *((_BYTE*)&CudaDriverRoutine_4710 + (_QWORD)v8) == 0,
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (!v15 ||
              v14 != 0 &&
                  (CudaDriverRoutine_1db1b0(v14), (v16 & 0x40000) != 0) ||
              *(_DWORD*)(v13 + 21864) != 0) {
            CudaDriverStub_1db190(&v25),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v19 =
                    COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            CudaDriverStub_1db380(&v25),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v19 =
                    COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
      if ((unsigned __int8)nvidia_1d9f90(v7) != 0 &&
              CudaDriverRoutine_1dc9c0(v2) &&
              (v10 = CudaDriverRoutine_1dc020(v2),
               (unsigned __int8)CudaDriverRoutine_eec70(v10, *v7) == 0) ||
          (CudaDriverRoutine_1db1b0(v2) & 7) != 2) {
        v11 = true;
        v12 = v25;
        if (v25 != 0) {
          goto LABEL_32;
        }
      LABEL_38:
        if (!v11) {
          goto LABEL_39;
        }
      }
      else {
        v11 = *(_QWORD*)CudaDriverRoutine_1dc000(v2) == *v7,
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v12 = v25;
        if (v25 == 0) {
          goto LABEL_38;
        }
      LABEL_32:
        CudaDriverRoutine_ee330(v12),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        {
          v17 = *v7;
          __asm__ volatile("" ::"r"(v17));
        }
        v18 = v25;
        if (!cuda_driver_predicates_9ac80(*v7) ||
            *((_BYTE*)&CudaDriverRoutine_4710 + (_QWORD)v8) != 0 ||
            v18 != 0 && (CudaDriverRoutine_1db1b0(v18), (v19 & 0x40000) != 0) ||
            *(_DWORD*)(v17 + 21864) != 0) {
          CudaDriverStub_1db190(&v25),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          goto LABEL_38;
        }
        CudaDriverStub_1db380(&v25),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (!v11) {
        LABEL_39:
          v20 = CudaDriverRoutine_1dc000(v2),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((unsigned int)CudaDriverRoutine_1fc5a0((unsigned int*)(v20 + 184),
                                                     (__int64)v7, 1,
                                                     (bool*)v26_.v27) != 0 &&
              v26_.v27[0] != 0) {
            (*(void (**)(__int64))(*v7 + 21056))((__int64)v7),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v19 =
                    COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
    }
  }
LABEL_46:
  if (*(_QWORD*)(v6 + 24) == v2) {
    {
      v21 = *(_QWORD*)(v2 + 344);
      __asm__ volatile("" ::"r"(v21));
    }
    *(_QWORD*)(v6 + 24) = v21;
    if (v21 != 0) {
      v22 = 0;
      goto LABEL_51;
    }
  }
  else {
    {
      v21 = *(_QWORD*)(v2 + 344);
      __asm__ volatile("" ::"r"(v21));
    }
    *(_QWORD*)(*(_QWORD*)(v2 + 336) + 344LL) = v21;
    if (v21 != 0) {
      {
        v22 = *(_QWORD*)(v2 + 336);
        __asm__ volatile("" ::"r"(v22));
      }
    LABEL_51:
      *(_QWORD*)(v21 + 336) = v22;
    }
  }
  *(_QWORD*)(v2 + 336) = 0;
  *(_QWORD*)(v2 + 344) = 0;
  *(_BYTE*)(v2 + 352) = 0;
  return result;
}

__int64 nvidia_10f540(__int64 a1, __int64 a2)
{
  void* v4;
  __int64 v5;
  char v6;
  char v7;
  _BOOL4 v8;
  char v9;
  bool v10;
  int v11;

  v4 = CudaDriverData_1422118;
  v5 = a2 + 15906;
  if (*((_BYTE*)((_UNKNOWN*)0x17BCLL) + (_QWORD)CudaDriverData_1422118) != 0) {
    v6 = 0;
    if ((*(unsigned __int8 (**)(__int64))(a1 + 21096))(a1) == 0) {
      return 0;
    }
  }
  else {
    if (a2 != 0 && (*(_BYTE*)(a2 + 16216) & 1) != 0) {
      {
        v9 =
            *((_BYTE*)&CudaDriverRoutine_44d8 + (_QWORD)CudaDriverData_1422118);
        __asm__ volatile("" ::"r"(v9));
      }
      if ((*(unsigned __int8 (**)(__int64))(a1 + 21096))(a1) == 0) {
        return 0;
      }
      {
        v8 = *(_BYTE*)v5 != 0;
        __asm__ volatile("" ::"r"(v8));
      }
      if ((v9 & 0x40) == 0) {
        goto LABEL_17;
      }
      goto LABEL_18;
    }
    v7 = (*(__int64 (**)(__int64))(a1 + 21104))(a1);
    if (*(_BYTE*)(a1 + 3368) != 0) {
      v6 = 1;
    }
    else {
      v6 = v7;
    }
    if ((*(unsigned __int8 (**)(__int64))(a1 + 21096))(a1) == 0) {
      return 0;
    }
  }
  if (a2 != 0) {
    {
      v8 = *(_BYTE*)v5 != 0;
      __asm__ volatile("" ::"r"(v8));
    }
    if (v6 != 0) {
      goto LABEL_18;
    }
  LABEL_17:
    if (!v8) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v8 = false;
  if (v6 == 0) {
    goto LABEL_17;
  }
LABEL_18:
  if ((*((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)v4) & 0x10) != 0) {
    {
      v10 = (*(_BYTE*)(a1 + 16977) & 2) != 0;
      __asm__ volatile("" ::"r"(v10));
    }
    if (a2 == 0) {
      goto LABEL_25;
    }
    goto LABEL_22;
  }
LABEL_19:
  v10 = false;
  if (a2 == 0) {
  LABEL_25:
    if (v10) {
      return 2;
    }
    if ((*((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)v4) & 0x40) == 0) {
      return 0;
    }
    return (*(_DWORD*)(a1 + 16976) & 0x100) != 0;
  }
LABEL_22:
  if (!CudaDriverRoutine_99720(a2)) {
    goto LABEL_25;
  }
  {
    v11 = *(_DWORD*)(v5 + 1774);
    __asm__ volatile("" ::"r"(v11));
  }
  if (v11 == 2 && v10) {
    return ~(*(_DWORD*)((char*)((_UNKNOWN*)0x1840LL) + (_QWORD)v4) >> 12) & 2;
  }
  if (v11 != 1) {
    return 0;
  }
  return (*(_DWORD*)(a1 + 16976) & 0x100) != 0;
}

__int64 nvidia_11a720(__int64 a1)
{
  int v2;
  unsigned int v3;
  __int64 result;
  unsigned int v5;
  bool v6;

  if (CudaDriverStub_985a0(*(_QWORD*)a1)) {
    if (*((_BYTE*)((_UNKNOWN*)0x1488LL) + (_QWORD)CudaDriverData_1422118) !=
        0) {
      return 0;
    }
    if ((*(_WORD*)(*(_QWORD*)(a1 + 8) + 36LL) & 1) != 0) {
      return 0;
    }
    {
      v2 = *(_DWORD*)(a1 + 96);
      __asm__ volatile("" ::"r"(v2));
    }
    if ((v2 & 0xFE00) == 0x1000) {
      return 0;
    }
    {
      v3 = (unsigned __int8)*(_DWORD*)(a1 + 96);
      __asm__ volatile("" ::"r"(v3));
    }
    result = 1;
    if ((v3 > 0x20 || ((1LL << v2) & 0x10001070ELL) == 0) &&
        (v3 - 96 > 0x30 ||
         ((1LL << ((unsigned __int8)v2 - 96)) & 0x1000100010001LL) == 0) &&
        v3 != 80) {
      return 0;
    }
  }
  else {
    {
      v5 = *(unsigned __int8*)(a1 + 96);
      __asm__ volatile("" ::"r"(v5));
    }
    result = 1;
    if (v5 - 192 >= 0xC) {
      v6 = v5 > 0x20 || ((1LL << v5) & 0x10001070ELL) == 0;
      if (v6 && v5 != 80) {
        return 0;
      }
    }
  }
  return result;
}

__int64 nvidia_11fa80(__int64 a1)
{
  __int64 v2;
  __int64 result;
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;

  {
    v2 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v2));
  }
  v7 = 51;
  if (CudaDriverStub_985a0(v2)) {
    result = 51;
    {
      v4 = *(_DWORD*)(a1 + 100);
      __asm__ volatile("" ::"r"(v4));
    }
    v5 = 6;
    switch (*(_BYTE*)(a1 + 96)) {
    case 1:
    case 8:
    case 0x60:
    case 0x80:
      switch (v4) {
      case 1:
        result = 113;
        break;
      case 4:
        result = 88;
        break;
      case 2:
        result = 103;
        break;
      default:
        break;
      }
      break;
    case 2:
    case 9:
    case 0x10:
    case 0x70:
    case 0x90:
      switch (v4) {
      case 1:
        result = 107;
        break;
      case 4:
        result = 76;
        break;
      case 2:
        result = 93;
        break;
      default:
        break;
      }
      break;
    case 3:
    case 0xA:
    case 0x20:
      switch (v4) {
      case 1:
        result = 97;
        break;
      case 4:
        result = 69;
        break;
      case 2:
        result = 80;
        break;
      default:
        break;
      }
      break;
    case 0x30:
      goto LABEL_26;
    case 0x40:
      result = 3;
      break;
    case 0x50:
      v5 = 54;
    LABEL_26:
      result = v5;
      break;
    default:
      return result;
    }
  }
  else if (*(_BYTE*)(a1 + 144) != 0) {
    {
      v6 = *(int*)(a1 + 152) - 1;
      __asm__ volatile("" ::"r"(v6));
    }
    if (v6 >= 0x22) {
      return 51;
    }
    else {
      return CudaDriverData_1134ef4[v6];
    }
  }
  else {
    CudaDriverRoutine_11fc40((int*)&v7, *(_DWORD*)(a1 + 96),
                             *(_DWORD*)(a1 + 100), *(_DWORD*)(a1 + 328));
    return v7;
  }
  return result;
}

__int64 nvidia_12e930(__int64 a1, ...)
{
  __int64 v2;
  __builtin_va_list va1;
  __builtin_va_list va;

  __builtin_va_start(va, a1);
  {
    v2 = *(_QWORD*)CudaDriverData_14220a8;
    __asm__ volatile("" ::"r"(v2));
  }
  __builtin_va_copy(va1, va);
  return vfprintf_plt(v2, a1, (__int64)&va1);
}

__int64 nvidia_12e9c0(__int64 a1, char* a2, ...)
{
  __builtin_va_list va1;
  __builtin_va_list va;

  __builtin_va_start(va, a2);
  __builtin_va_copy(va1, va);
  return vfprintf_plt(a1, a2, (__int64)&va1);
}

__int64 nvidia_12eb10(__int64 a1, ...)
{
  int v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __builtin_va_list va2;
  __builtin_va_list va1;
  __builtin_va_list va;

  __builtin_va_start(va, a1);
  __builtin_va_copy(va1, va);
  v2 = vsnprintf_plt(0, 0, a1, (__int64)&va1);
  if (v2 < 0) {
    return 0;
  }
  v3 = (unsigned int)(v2 + 1);
  result = CudaDriverStub_12e330(v3);
  if (result == 0) {
    return result;
  }
  v5 = result;
  __builtin_va_end(va);
  __builtin_va_start(va, a1);
  __builtin_va_copy(va2, va);
  if ((vsnprintf_plt(result, v3, a1, (__int64)&va2) & 0x80000000) != 0) {
    CudaDriverRoutine_12e340(v5);
    return 0;
  }
  return v5;
}

__int64 nvidia_137750(__int64 a1)
{
  void* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 result;
  void (*v8)(__int64);
  unsigned int v9;

  v2 = CudaDriverData_1423388;
  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)CudaDriverData_1423388))() &
       1) == 0) {
    return 10;
  }
  {
    v3 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 != 0) {
    {
      v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 72) + 33160LL) + 8LL) +
           0x8000LL;
      __asm__ volatile("" ::"r"(v4));
    }
    {
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 1096) + 32LL);
      __asm__ volatile("" ::"r"(v5));
    }
    {
      v6 = **(_QWORD**)(*(_QWORD*)(v4 + 1056) + 88LL);
      __asm__ volatile("" ::"r"(v6));
    }
    *(_QWORD*)(a1 + 24) = 0;
    result = (*(__int64 (**)(__int64, unsigned __int64, unsigned __int64))(
        (char*)((char*)0x20LL) + (_QWORD)v2))(a1, v5, v6);
    if ((_DWORD)result == 0) {
      return result;
    }
  LABEL_7:
    v8 = *(void (**)(__int64))((char*)(*(void*(*)[1])0x28LL) + (_QWORD)v2);
    v9 = result;
    v8(*(_QWORD*)(a1 + 24));
    *(_QWORD*)(a1 + 24) = 0;
    return v9;
  }
  *(_QWORD*)(a1 + 24) = 0;
  result = (*(__int64 (**)(__int64, unsigned __int64, unsigned __int64))(
      (char*)((char*)0x20LL) + (_QWORD)v2))(a1, 0, 0);
  if ((_DWORD)result != 0) {
    goto LABEL_7;
  }
  return result;
}

__int64 nvidia_137830(__int64 a1)
{
  void* v2;

  v2 = CudaDriverData_1423388;
  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)CudaDriverData_1423388))() &
       1) == 0) {
    return 10;
  }
  (*(void (**)(__int64))((char*)(*(void*(*)[1])0x28LL) + (_QWORD)v2))(
      *(_QWORD*)(a1 + 8));
  return 0;
}

__int64 nvidia_174200(_QWORD* a1, unsigned int a2, int a3)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD* v11;
    unsigned int v12;
    int v13;
  } v11_;
  __int64 v14;
  struct {
    int v15;
    char gap28_[4];
    __int64 v16;
    __int64 v17;
    char gap48_[8];
    __int64* v18;
    unsigned int* v19;
    char* v20;
    _QWORD** v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    int* v25;
  } v15_;
  __int64 v26;
  __int64 v27;
  struct {
    int v28;
    unsigned int v29;
  } v28_;

  v26 = 0;
  v27 = 0;
  v28_.v29 = 999;
  if (*(_DWORD*)((char*)(*(void*(*)[1])0x28LL) +
                 (_QWORD)CudaDriverData_1432160) == 0 ||
      (unsigned int)nvidia_121c60(&v27) != 0 ||
      (unsigned int)cuda_driver_misc_helpers_ded50(v27, &v26, 16) != 0) {
    return CudaDriverRoutine_24e80(a1, a2, a3);
  }
  v14 = 0;
  v28_.v28 = 0;
  v11_.v11 = a1;
  v11_.v12 = a2;
  v11_.v13 = a3;
  v15_.v15 = 104;
  v7 = v26;
  v15_.v22 = v26;
  if (v26 != 0) {
    v7 = *(unsigned int*)(v26 + 56);
    __asm__ volatile("" ::"r"(v7));
  }
  v15_.v16 = v7;
  v15_.v17 = 0;
  v15_.v23 = 0;
  v15_.v18 = &v14;
  v15_.v19 = &v28_.v29;
  v15_.v20 = "cuCtxCreate";
  v15_.v21 = &v11_.v11;
  v15_.v25 = &v28_.v28;
  v15_.v24 = 10;
  cuda_driver_20b420(6u, 0xAu, (__int64)&v15_.v15);
  if (v28_.v28 == 0) {
    v28_.v29 = CudaDriverRoutine_24e80(v11_.v11, v11_.v12, v11_.v13);
  }
  v27 = 0;
  nvidia_121c60(&v27);
  v8 = CudaDriverRoutine_1216a0(v27);
  if (v8 != 0) {
    v9 = CudaDriverRoutine_98340(v8);
    v26 = v9;
    v15_.v22 = v9;
    if (v9 != 0) {
      v10 = *(unsigned int*)(v9 + 56);
      __asm__ volatile("" ::"r"(v10));
    }
    else {
      v10 = 0;
    }
  }
  else {
    v10 = 0;
    v26 = 0;
    v15_.v22 = 0;
  }
  v15_.v16 = v10;
  HIDWORD(v15_.v24) = 1;
  cuda_driver_20b420(6u, 0xAu, (__int64)&v15_.v15);
  return v28_.v29;
}

__int64 nvidia_179800(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    int v9;
    char gap28_[4];
    __int64 v10;
    __int64 v11;
    char gap48_[8];
    __int64* v12;
    unsigned int* v13;
    char* v14;
    __int64* v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    int* v19;
  } v9_;
  __int64 v20;
  __int64 v21;
  struct {
    int v22;
    unsigned int v23;
  } v22_;

  v20 = 0;
  v21 = 0;
  v22_.v23 = 999;
  if (*(_DWORD*)((char*)(*(void*(*)[3])0x28LL) +
                 (_QWORD)CudaDriverData_1432160 + 4) == 0 ||
      (unsigned int)nvidia_121c60(&v21) != 0 ||
      (unsigned int)cuda_driver_misc_helpers_ded50(v21, &v20, 16) != 0) {
    return CudaDriverStub_251c0(a1);
  }
  v7 = a1;
  v8 = 0;
  v22_.v22 = 0;
  v9_.v9 = 104;
  v3 = v20;
  v9_.v16 = v20;
  if (v20 != 0) {
    v3 = *(unsigned int*)(v20 + 56);
    __asm__ volatile("" ::"r"(v3));
  }
  v9_.v10 = v3;
  v9_.v11 = 0;
  v9_.v17 = 0;
  v9_.v12 = &v8;
  v9_.v13 = &v22_.v23;
  v9_.v14 = "cuCtxDestroy";
  v9_.v15 = &v7;
  v9_.v19 = &v22_.v22;
  v9_.v18 = 11;
  cuda_driver_20b420(6u, 0xBu, (__int64)&v9_.v9);
  if (v22_.v22 == 0) {
    v22_.v23 = CudaDriverStub_251c0(v7);
  }
  v21 = 0;
  nvidia_121c60(&v21);
  v4 = CudaDriverRoutine_1216a0(v21);
  if (v4 != 0) {
    v5 = CudaDriverRoutine_98340(v4);
    v20 = v5;
    v9_.v16 = v5;
    if (v5 != 0) {
      v6 = *(unsigned int*)(v5 + 56);
      __asm__ volatile("" ::"r"(v6));
    }
    else {
      v6 = 0;
    }
  }
  else {
    v6 = 0;
    v20 = 0;
    v9_.v16 = 0;
  }
  v9_.v10 = v6;
  HIDWORD(v9_.v18) = 1;
  cuda_driver_20b420(6u, 0xBu, (__int64)&v9_.v9);
  return v22_.v23;
}

__int64 nvidia_196060(__int64 a1, unsigned int* a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  void* v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int v10;
  char v11;
  char v12;
  char v13;
  char v14;
  int v15;
  bool v16;
  char v17;
  char v18;
  char v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  unsigned int v23;
  unsigned __int64 v24;
  __int64 v25;
  char v26;
  int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  _QWORD* v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v42;
  char v43;
  __int64 v44;
  __int128 v45;
  __int128 v46;
  __int128 v47;
  __int128 v48;
  __int128 v49;
  __int128 v50;
  __int128 v51;
  __int128 v52;
  __int128 v53;
  __int128 v54;
  __int128 v55;
  __int128 v56;
  __int128 v57;
  __int128 v58;
  __int128 v59;
  __int128 v60;
  __int128 v61;
  __int128 v62;
  __int128 v63;
  __int128 v64;
  __int128 v65;
  __int128 v66;
  __int128 v67;
  __int64 v68;

  {
    v4 = *(_QWORD*)(*(_QWORD*)a1 + 8LL);
    __asm__ volatile("" ::"r"(v4));
  }
  v5 = CudaDriverData_1422118;
  if (*((_BYTE*)&CudaDriverRoutine_4454 + (_QWORD)CudaDriverData_1422118) !=
      0) {
    *a2 = *(_DWORD*)((char*)&CudaDriverRoutine_4458 +
                     (_QWORD)CudaDriverData_1422118);
  }
  if (*((_BYTE*)&CudaDriverRoutine_743c + (_QWORD)v5 + 3) != 0) {
    {
      v6 = a2[2];
      __asm__ volatile("" ::"r"(v6));
    }
    v7 = v6 / *a2;
    v8 = (vcvtmd_u32_f64(
              *(double*)((char*)&CudaDriverRoutine_7440 + (_QWORD)v5) *
              0x1.0000000000000p+19) +
          3) &
         0xFFFFFFFC;
    if (v6 < v8) {
      v8 = a2[2];
      __asm__ volatile("" ::"r"(v8));
    }
    a2[2] = v8;
    *a2 = v8 / v7;
  }
  {
    v9 = *(_DWORD*)((char*)&CudaDriverRoutine_445c + (_QWORD)v5);
    __asm__ volatile("" ::"r"(v9));
  }
  if (v9 != 4 && *(_DWORD*)(*(_QWORD*)(a1 + 33816) + 36LL) != 9 &&
      *(_DWORD*)(a1 + 32) != 11) {
    *a2 = (*a2 >> 2) * v9;
  }
  {
    v10 = *(_DWORD*)((char*)&CudaDriverRoutine_444c + (_QWORD)v5);
    __asm__ volatile("" ::"r"(v10));
  }
  if (v10 != 0) {
    v11 = v10 == 2 ? 4 : 0;
    {
      v12 = a2[1] & 0xFB | v11;
      __asm__ volatile("" ::"r"(v12));
    }
    *((_BYTE*)a2 + 4) = v12;
    if (*(_DWORD*)(*(_QWORD*)(v4 + 64) + 21864LL) == 1) {
      v13 = v12 & 0xF7;
      if (*(_DWORD*)((char*)&CudaDriverRoutine_444c + (_QWORD)v5) == 2) {
        v14 = 8;
      }
      else {
        v14 = 0;
      }
      *((_BYTE*)a2 + 4) = v14 | v13;
    }
  }
  {
    v15 = *(_DWORD*)((char*)&CudaDriverRoutine_4450 + (_QWORD)v5);
    __asm__ volatile("" ::"r"(v15));
  }
  if (v15 != 0) {
    v16 = v15 == 1;
    {
      v17 = a2[1] & 0xFE;
      __asm__ volatile("" ::"r"(v17));
    }
    if (v16) {
      ++v17;
    }
    *((_BYTE*)a2 + 4) = v17;
    v18 = v17 & 0xFD;
    if (*(_DWORD*)((char*)&CudaDriverRoutine_4450 + (_QWORD)v5) == 2) {
      v19 = 2;
    }
    else {
      v19 = 0;
    }
    *((_BYTE*)a2 + 4) = v19 | v18;
  }
  v20 = CudaDriverStub_12e330(104);
  if (v20 == 0) {
    return 2;
  }
  *(_QWORD*)v20 = a1;
  v21 = (_QWORD*)v20;
  *(_OWORD*)(v20 + 88) = (__typeof__(*(_OWORD*)(v20 + 88))){0};
  *(_OWORD*)(v20 + 72) = (__typeof__(*(_OWORD*)(v20 + 72))){0};
  *(_OWORD*)(v20 + 56) = (__typeof__(*(_OWORD*)(v20 + 56))){0};
  *(_OWORD*)(v20 + 40) = (__typeof__(*(_OWORD*)(v20 + 40))){0};
  *(_OWORD*)(v20 + 24) = (__typeof__(*(_OWORD*)(v20 + 24))){0};
  *(_OWORD*)(v20 + 8) = (__typeof__(*(_OWORD*)(v20 + 8))){0};
  {
    v22 = *(_QWORD*)a2;
    __asm__ volatile("" ::"r"(v22));
  }
  {
    v23 = a2[2];
    __asm__ volatile("" ::"r"(v23));
  }
  *(_QWORD*)(v20 + 72) = 0;
  *(_DWORD*)(v20 + 16) = v23;
  *(_QWORD*)(v20 + 8) = v22;
  v24 = 56LL * *a2;
  v25 = CudaDriverStub_12e330(v24);
  v21[8] = v25;
  if (v25 != 0) {
    memset_plt(v25, 0, v24);
    v68 = 0;
    v61 = (__typeof__(v61)){0};
    v62 = (__typeof__(v62)){0};
    v63 = (__typeof__(v63)){0};
    v64 = (__typeof__(v64)){0};
    v67 = (__typeof__(v67)){0};
    v45 = (__typeof__(v45)){0};
    v46 = (__typeof__(v46)){0};
    v47 = (__typeof__(v47)){0};
    v48 = (__typeof__(v48)){0};
    v49 = (__typeof__(v49)){0};
    v50 = (__typeof__(v50)){0};
    v51 = (__typeof__(v51)){0};
    v52 = (__typeof__(v52)){0};
    v53 = (__typeof__(v53)){0};
    v54 = (__typeof__(v54)){0};
    v55 = (__typeof__(v55)){0};
    v56 = (__typeof__(v56)){0};
    v57 = (__typeof__(v57)){0};
    v58 = (__typeof__(v58)){0};
    v59 = (__typeof__(v59)){0};
    v60 = (__typeof__(v60)){0};
    v65 = (__typeof__(v65)){0};
    v66 = (__typeof__(v66)){0};
    {
      v26 = *((_BYTE*)a2 + 4);
      __asm__ volatile("" ::"r"(v26));
    }
    *((_QWORD*)&v63 + 1) = a1;
    if ((v26 & 4) != 0) {
      v29 = 10;
      if ((*((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)v5) & 8) != 0) {
        v29 = 0x200000000000000ALL;
      }
    }
    else {
      if ((*(_BYTE*)(*(_QWORD*)(v4 + 64) + 17272LL) & 1) != 0) {
        {
          v27 = *(_DWORD*)(*(_QWORD*)(v4 + 64) + 17276LL);
          __asm__ volatile("" ::"r"(v27));
        }
        BYTE8(v66) = v27 != -1;
      }
      else {
        v27 = -1;
      }
      DWORD1(v66) = v27;
      v29 = 17;
      if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)v5 + 2) & 1) == 0) {
        v29 = 25;
      }
    }
    v30 = 0x101000800LL;
    if ((v26 & 0x10) == 0) {
      v30 = 0x800101000800LL;
    }
    v16 = (v26 & 8) == 0;
    {
      v31 = *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v5);
      __asm__ volatile("" ::"r"(v31));
    }
    v32 = v30 | v29;
    v33 = v32 & 0x2000800101000803LL;
    v34 = v32 | 0x18000000;
    v35 = v33 | 0x10;
    if (v16) {
      v36 = v35;
    }
    else {
      v36 = v34;
    }
    v44 = v36;
    if ((v31 > 2 || (*((_BYTE*)((_UNKNOWN*)0x1138LL) + (_QWORD)v5) & 1) != 0) &&
        *(_DWORD*)((char*)((_UNKNOWN*)0x1134LL) + (_QWORD)v5) == 0 &&
        !CudaDriverRoutine_5c230(a1)) {
      BYTE8(v66) = 0;
      DWORD1(v66) = -1;
      v44 = v36 & 0x2000800119000803LL | 0x10;
      *(_QWORD*)&v45 = 0x400000000LL;
    }
    v37 = cuda_driver_1da1b0(*(_QWORD*)(v4 + 80), &v44, 8 * *a2, v21 + 3);
    if (v37 != 0) {
      goto LABEL_50;
    }
    if (!CudaDriverRoutine_5c230(a1) ||
        (v42 = CudaDriverRoutine_12e510(*a2, 8), v21[4] = v42, v42 != 0)) {
      {
        v43 = *((_BYTE*)a2 + 4);
        __asm__ volatile("" ::"r"(v43));
      }
      if ((v43 & 1) != 0) {
        v37 = CudaDriverRoutine_1fec20(v4, a2[2], a1, 0, v21 + 5);
        if (v37 != 0) {
          goto LABEL_50;
        }
        {
          v43 = *((_BYTE*)a2 + 4);
          __asm__ volatile("" ::"r"(v43));
        }
      }
      if ((v43 & 2) == 0 ||
          (v37 = CudaDriverRoutine_1fec20(v4, a2[2], a1, 1, v21 + 6)) == 0) {
        v28 = 0;
        *(_QWORD*)(a1 + 48) = v21;
        return v28;
      }
    LABEL_50:
      v28 = v37;
      {
        v38 = (_QWORD*)v21[6];
        __asm__ volatile("" ::"r"(v38));
      }
      if (v38 != nullptr) {
      LABEL_51:
        CudaDriverRoutine_1ff080(v38);
      }
    LABEL_52:
      {
        v39 = (_QWORD*)v21[5];
        __asm__ volatile("" ::"r"(v39));
      }
      if (v39 != nullptr) {
        CudaDriverRoutine_1ff080(v39);
      }
      {
        v40 = v21[4];
        __asm__ volatile("" ::"r"(v40));
      }
      if (v40 != 0) {
        CudaDriverRoutine_12e340(v40);
        v21[4] = 0;
      }
      if (v21[3] != 0) {
        CudaDriverStub_1db190(v21 + 3);
      }
      CudaDriverRoutine_12e340(v21[8]);
      CudaDriverRoutine_12e340((__int64)v21);
      return v28;
    }
  }
  v28 = 2;
  {
    v38 = (_QWORD*)v21[6];
    __asm__ volatile("" ::"r"(v38));
  }
  if (v38 == nullptr) {
    goto LABEL_52;
  }
  goto LABEL_51;
}

bool nvidia_1985d0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  _DWORD* v6;
  _DWORD* v7;
  _DWORD* v9;
  unsigned int v10;
  unsigned int v11;
  _BOOL8 result;
  __int64 v14;
  _DWORD* v15;
  int v16;
  _DWORD* v17;
  _DWORD* v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned int v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned int v32;
  char v33;
  char v34;
  char v35;
  char v36;
  int v37;
  int v38;
  unsigned __int64 v39;

  {
    v4 = *(_DWORD*)a2;
    __asm__ volatile("" ::"r"(v4));
  }
  if (*(_DWORD*)a2 != 3) {
    {
      v5 = *(_DWORD*)(a2 + 200);
      __asm__ volatile("" ::"r"(v5));
    }
    if (v5 != 3) {
      if ((v5 | v4) != 0) {
        if (v4 == 0 || v5 == 0) {
          goto LABEL_25;
        }
      LABEL_61:
        {
          v24 = *(_QWORD*)(a2 + 400);
          __asm__ volatile("" ::"r"(v24));
        }
        {
          v25 = *(_QWORD*)(a2 + 408);
          __asm__ volatile("" ::"r"(v25));
        }
        {
          v28 = *(int*)a2 - 1;
          __asm__ volatile("" ::"r"(v28));
        }
        if (v25 <= 1) {
          v29 = 1;
        }
        else {
          v29 = *(_QWORD*)(a2 + 408);
          __asm__ volatile("" ::"r"(v29));
        }
        if (v28 <= 2) {
          v2 = *(__int64*)((char*)(&CudaDriverData_1133ee0)[v28] + a2);
          __asm__ volatile("" ::"r"(v2));
        }
        v30 = a2 + 200;
        {
          v31 = *(_QWORD*)(a2 + 416);
          __asm__ volatile("" ::"r"(v31));
        }
        {
          v32 = *(int*)(a2 + 200) - 1;
          __asm__ volatile("" ::"r"(v32));
        }
        if (v32 <= 2) {
          v3 = *(__int64*)((char*)(&CudaDriverData_1133ee0)[v32] + v30);
          __asm__ volatile("" ::"r"(v3));
        }
        v33 = CudaDriverRoutine_f7f50(v30);
        v34 = CudaDriverRoutine_f7f50(a2);
        if (v3 != 0) {
          v35 = v3;
        }
        else {
          v35 = v24;
        }
        if (v2 != 0) {
          v36 = v2;
        }
        else {
          v36 = v24;
        }
        if ((v31 | v25) < 2) {
          return false;
        }
        v37 = v33 & 3;
        v38 = v34 & 3;
        {
          v39 = (unsigned int)(*(int*)(*(_QWORD*)(a1 + 64) + 3832LL) - 8);
          __asm__ volatile("" ::"r"(v39));
        }
        if (v31 >= 0x10 && v29 < v39) {
          if ((v33 & 3) != 0 || (v34 & 3) != 0 || (v35 & 3) != 0 ||
              (v36 & 3) != 0 || (v24 & 3) != 0) {
            result = false;
            if (v37 != v38 || (v35 & 3) != 0 || (v36 & 3) != 0) {
              return result;
            }
          }
          return true;
        }
        if ((v35 & 3 | v36 & 3) != 0) {
          if (v29 < v39) {
            return true;
          }
        }
        else if ((v37 | v38 | v24 & 3) == 0 || (v24 | v29) < 0x40 ||
                 v37 == v38) {
          return true;
        }
        return false;
      }
      {
        v6 = *(_DWORD**)(a2 + 8);
        __asm__ volatile("" ::"r"(v6));
      }
      if (v6[26] != 1) {
        {
          v7 = *(_DWORD**)(a2 + 208);
          __asm__ volatile("" ::"r"(v7));
        }
        if (v7[26] != 1 && !CudaDriverRoutine_86fe0(*(_QWORD*)(a2 + 8)) &&
            !CudaDriverRoutine_86fe0((__int64)v7) && v6[12] == 0 &&
            v7[12] == 0) {
          {
            v9 = *(_DWORD**)(a1 + 64);
            __asm__ volatile("" ::"r"(v9));
          }
          if (v9[963] <= 1u) {
            {
              v10 = v9[1003];
              __asm__ volatile("" ::"r"(v10));
            }
            if (v6[3] <= v10 && v7[3] <= v10) {
              {
                v11 = v9[1004];
                __asm__ volatile("" ::"r"(v11));
              }
              if (v6[4] <= v11) {
                return v7[4] <= v11;
              }
            }
          }
        }
      }
      return false;
    }
  }
  if ((*((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
       2) == 0 ||
      *(_BYTE*)(*(_QWORD*)(a1 + 64) + 17096LL) == 0) {
    return false;
  }
  if (v4 != 0 && *(_DWORD*)(a2 + 200) != 0) {
    goto LABEL_61;
  }
LABEL_25:
  result = false;
  v14 = 208;
  if (*(_DWORD*)a2 == 0) {
    v14 = 8;
  }
  {
    v15 = *(_DWORD**)(a2 + v14);
    __asm__ volatile("" ::"r"(v15));
  }
  {
    v16 = v15[2];
    __asm__ volatile("" ::"r"(v16));
  }
  if (v16 <= 3) {
    switch (v16) {
    case 1: {
      v21 = *(_QWORD*)(a1 + 64);
      __asm__ volatile("" ::"r"(v21));
    }
      {
        v22 = v15[3];
        __asm__ volatile("" ::"r"(v22));
      }
      if (v22 > *(_DWORD*)(v21 + 4008) && v22 > *(_DWORD*)(v21 + 4012)) {
        return false;
      }
      break;
    case 2: {
      v23 = *(_QWORD*)(a1 + 64);
      __asm__ volatile("" ::"r"(v23));
    }
      if (v15[3] > *(_DWORD*)(v23 + 4012)) {
        return false;
      }
      if (v15[4] > *(_DWORD*)(v23 + 4016)) {
        return false;
      }
      break;
    case 3: {
      v18 = *(_DWORD**)(a1 + 64);
      __asm__ volatile("" ::"r"(v18));
    }
      {
        v19 = v15[3];
        __asm__ volatile("" ::"r"(v19));
      }
      if (v19 > v18[1005] || v15[4] > v18[1006] || v15[5] > v18[1007]) {
        if (v19 > v18[997]) {
          return false;
        }
        if (v15[4] > v18[998]) {
          return false;
        }
        if (v15[5] > v18[999]) {
          return false;
        }
      }
      break;
    default:
      return result;
    }
  }
  else if ((unsigned int)(v16 - 5) >= 3) {
    if (v16 != 4) {
      return result;
    }
    {
      v20 = *(_QWORD*)(a1 + 64);
      __asm__ volatile("" ::"r"(v20));
    }
    if (v15[3] > *(_DWORD*)(v20 + 4032)) {
      return false;
    }
    if (v15[5] > *(_DWORD*)(v20 + 4036)) {
      return false;
    }
  }
  else {
    {
      v17 = *(_DWORD**)(a1 + 64);
      __asm__ volatile("" ::"r"(v17));
    }
    if (v15[3] > v17[1010]) {
      return false;
    }
    if (v15[4] > v17[1011]) {
      return false;
    }
    if (v15[5] > v17[1012]) {
      return false;
    }
  }
  return true;
}

__int64 nvidia_1a5dd0(__int64 a1, __int64 a2, unsigned int a3, int a4,
                      __int64 a5, __int64 a6, int* a7)
{
  unsigned __int64 v12;
  void* v13;
  int v14;
  int v15;
  int v16;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  unsigned __int64 v28;
  __int64 v29;

  v12 = a3;
  v13 = CudaDriverData_1422118;
  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c +
         (_QWORD)CudaDriverData_1422118 + 2)) != 0) {
    v14 = 64;
  }
  else {
    v14 = 576;
  }
  if (a4 != 0) {
    v15 = a4 + 16;
  }
  else {
    v15 = 0;
  }
  v16 = v14 + v15;
  *(_DWORD*)(a6 + 28) = *(_DWORD*)(a5 + 28);
  *(_DWORD*)(a6 + 32) = *(_DWORD*)(a5 + 32);
  *a7 = 1;
  if (a2 != 0) {
    if (a3 <= (unsigned int)CudaDriverRoutine_bc3f0(a2)) {
      v12 = (unsigned int)CudaDriverRoutine_bc3f0(a2);
    }
    if (CudaDriverStub_b9300(a2) &&
        v12 <= *(unsigned int*)(*(_QWORD*)(a2 + 32) + 332LL)) {
      LODWORD(v12) = *(_DWORD*)(*(_QWORD*)(a2 + 32) + 332LL);
    }
    v13 = CudaDriverData_1422118;
    if (*(_BYTE*)(a1 + 1301) != 0) {
      {
        v18 = *(_DWORD*)(a2 + 72);
        __asm__ volatile("" ::"r"(v18));
      }
    LABEL_18:
      v20 = (v18 + 15) & 0xFFFFFFF0;
      v19 = 1;
      *(_DWORD*)(a6 + 28) = v20;
      goto LABEL_24;
    }
    {
      v18 = *(_DWORD*)(a2 + 72);
      __asm__ volatile("" ::"r"(v18));
    }
    if (*(_DWORD*)(a5 + 28) < v18) {
      goto LABEL_18;
    }
    if (*(_DWORD*)(a5 + 32) == ((v16 + (int)v12 + 15) & 0xFFFFFFF0)) {
    LABEL_23:
      v19 = 3;
    LABEL_24:
      *a7 = v19;
      {
        v21 = *(_DWORD*)(a6 + 28);
        __asm__ volatile("" ::"r"(v21));
      }
      if (v21 <= 0x80000) {
        goto LABEL_25;
      }
      return 999;
    }
  }
  else {
    if (*(_DWORD*)(a5 + 28) > 0x3FFu) {
      v19 = 2;
      *(_DWORD*)(a6 + 28) = 0;
      goto LABEL_24;
    }
    if (*(_DWORD*)(a5 + 32) == ((v16 + a3 + 15) & 0xFFFFFFF0)) {
      goto LABEL_23;
    }
  }
  {
    v21 = *(_DWORD*)(a6 + 28);
    __asm__ volatile("" ::"r"(v21));
  }
  if (v21 > 0x80000) {
    return 999;
  }
LABEL_25:
  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c + (_QWORD)v13 + 2)) != 0) {
    v23 = 64;
  }
  else {
    v23 = 576;
  }
  v24 = v15 + v12 + v23 + 15;
  v25 = v24 & 0xFFFFFFF0;
  if ((v24 & 0xFFFFFFF0) <= 0x80000) {
    {
      v26 = *(_QWORD*)(a1 + 64);
      __asm__ volatile("" ::"r"(v26));
    }
    {
      v27 = (*(int*)(v26 + 3924) * (v25 + v21) + 511) & 0xFFFFFE00;
      __asm__ volatile("" ::"r"(v27));
    }
    {
      v28 = *(unsigned int*)(v26 + 3756) * (unsigned __int64)v27 + 0x7FFF;
      __asm__ volatile("" ::"r"(v28));
    }
    {
      v29 = *(unsigned int*)(a1 + 164);
      __asm__ volatile("" ::"r"(v29));
    }
    *(_DWORD*)(a6 + 32) = v25;
    *(_DWORD*)(a6 + 36) = v27;
    *(_DWORD*)(a6 + 20) =
        ((((v24 | 0xF) + v21) >> 4 << 9) + 33791) & 0xFFFFFE00;
    *(_DWORD*)(a6 + 24) = a4;
    *(_DWORD*)(a6 + 16) = v25 - v16;
    *(_QWORD*)(a6 + 8) = (v28 & 0xFFFFFFFFFFFF8000LL) * v29;
    return 0;
  }
  else {
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"Requested stack size exceeds limit\n");
    return 1;
  }
}

__int64 nvidia_1ac720(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _QWORD* a5, __int64 a6)
{

#pragma clang fp contract(off)
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int128 v18;
  __int64 v19;
  uint32x2_t v20;
  unsigned int v21;
  bool v22;
  int v23;
  int v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  void* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _DWORD* v37;
  __int64 v38;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned int v43;
  unsigned int v44;
  __int64 v46;
  __int64 v47;

  v10 = CudaDriverRoutine_98340(a1);
  {
    v11 = *(_DWORD*)(a4 + 152);
    __asm__ volatile("" ::"r"(v11));
  }
  v12 = v10;
  {
    v13 = *(_QWORD*)(a4 + 180);
    __asm__ volatile("" ::"r"(v13));
  }
  {
    v42 = *(_QWORD*)(a4 + 180);
    __asm__ volatile("" ::"r"(v42));
  }
  {
    v14 = *(_DWORD*)(a4 + 168);
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = *(_DWORD*)(a4 + 188);
    __asm__ volatile("" ::"r"(v15));
  }
  {
    v43 = *(_DWORD*)(a4 + 144);
    __asm__ volatile("" ::"r"(v43));
  }
  {
    v44 = *(_DWORD*)(a4 + 148);
    __asm__ volatile("" ::"r"(v44));
  }
  {
    v41 = *(_QWORD*)(a4 + 144);
    __asm__ volatile("" ::"r"(v41));
  }
  {
    v40 = *(_QWORD*)(a4 + 172);
    __asm__ volatile("" ::"r"(v40));
  }
  v16 = CudaDriverRoutine_1a81a0(v10);
  v17 = CudaDriverRoutine_1a5d90(v12);
  *(_QWORD*)&v18 = v40;
  *(_DWORD*)a6 = v14;
  *((_QWORD*)&v18 + 1) = v41;
  *(_QWORD*)(a6 + 32) = v17;
  *(_QWORD*)(a6 + 24) = v16;
  *(_DWORD*)(a6 + 20) = v11;
  *(_OWORD*)(a6 + 4) = v18;
  {
    v19 = *(_QWORD*)(a4 + 136);
    __asm__ volatile("" ::"r"(v19));
  }
  if (v19 != 0) {
    *(_QWORD*)(a6 + 56) = *(_QWORD*)(v19 + 8);
  }
  LANES64(v20).n64_u64[0] = v42;
  if (v13 == 0 || ((v21 = HIDWORD(v42), HIDWORD(v42) != 0) ? (v22 = v15 == 0)
                                                           : (v22 = true),
                   v22)) {
    LANES64(v20).n64_u64[0] = 0x100000001LL;
    v15 = 1;
    v21 = 1;
    v13 = 1;
    v23 = 0;
  }
  else {
    v23 = 1;
  }
  *(_DWORD*)(a6 + 320) = v23;
  *(_DWORD*)(a6 + 328) = v21;
  *(_DWORD*)(a6 + 324) = v13;
  *(_DWORD*)(a6 + 332) = v15;
  *(_DWORD*)(a6 + 360) = 0;
  *(_QWORD*)(a6 + 376) = 0;
  *(_QWORD*)(a6 + 384) = 0;
  *(_DWORD*)(a6 + 348) = v43 / v13;
  *(float32x2_t*)(a6 + 336) =
      vdiv_f32(COERCE_AS(float32x2_t, 0x3F8000003F800000LL), vcvt_f32_u32(v20));
  *(_DWORD*)(a6 + 392) = v21 * v15 * v13;
  *(float*)(a6 + 344) = 0x1.0000000000000p+0f / (float)v15;
  *(_DWORD*)(a6 + 352) = v44 / v21;
  *(_DWORD*)(a6 + 356) = v11 / v15;
  {
    v24 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 4232LL);
    __asm__ volatile("" ::"r"(v24));
  }
  *(_QWORD*)(a6 + 368) = v16;
  *(_DWORD*)(a6 + 364) = v24;
  if (*(_BYTE*)(a4 + 352) != 0) {
    *(_DWORD*)(a6 + 40) = 0x1000000 - (*(int*)(a4 + 356) + *(int*)(a4 + 360));
    if (CudaDriverRoutine_985b0(*(_DWORD*)(*(_QWORD*)(a2 + 32) + 32LL))) {
      goto LABEL_12;
    }
  LABEL_25:
    *(_QWORD*)(a6 + 240) = 0;
    *(_QWORD*)(a6 + 248) = 0;
    *(_QWORD*)(a6 + 256) = 0;
    v31 = CudaDriverData_1422118;
    if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) ==
        0) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  *(_DWORD*)(a6 + 40) = CudaDriverRoutine_15fd0(a2);
  if (!CudaDriverRoutine_985b0(*(_DWORD*)(*(_QWORD*)(a2 + 32) + 32LL))) {
    goto LABEL_25;
  }
LABEL_12:
  v25 = *(_OWORD*)(a2 + 704);
  v26 = *(_OWORD*)(a2 + 720);
  v27 = *(_OWORD*)(a2 + 736);
  *(_OWORD*)(a6 + 64) = *(_OWORD*)(a2 + 688);
  *(_OWORD*)(a6 + 80) = v25;
  *(_OWORD*)(a6 + 96) = v26;
  *(_OWORD*)(a6 + 112) = v27;
  v28 = *(_OWORD*)(a2 + 768);
  v29 = *(_OWORD*)(a2 + 784);
  v30 = *(_OWORD*)(a2 + 800);
  *(_OWORD*)(a6 + 128) = *(_OWORD*)(a2 + 752);
  *(_OWORD*)(a6 + 144) = v28;
  *(_OWORD*)(a6 + 160) = v29;
  *(_OWORD*)(a6 + 176) = v30;
  CudaDriverRoutine_208ba0(*(_QWORD**)(v12 + 2112), 0, 0, (_QWORD*)(a6 + 240),
                           (_QWORD*)(a6 + 256));
  *(_QWORD*)(a6 + 248) = 0;
  v31 = CudaDriverData_1422118;
  if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) != 0) {
  LABEL_13:
    CudaDriverRoutine_208af0(*(_QWORD**)(v12 + 2112), &v47, &v46);
    CudaDriverRoutine_208b20(*(_DWORD**)(v12 + 2112), (int*)(a6 + 168),
                             (unsigned int*)(a6 + 172));
    v32 = v46;
    *(_QWORD*)(a6 + 176) = v47;
    *(_QWORD*)(a6 + 184) = v32;
  }
LABEL_14:
  *(_QWORD*)(a6 + 192) = *a5;
  *(_QWORD*)(a6 + 200) = a5[1];
  *(_QWORD*)(a6 + 208) = a5[3];
  *(_QWORD*)(a6 + 216) = a5[4];
  *(_QWORD*)(a6 + 224) = a5[5];
  {
    v33 = a5[6];
    __asm__ volatile("" ::"r"(v33));
  }
  *(_DWORD*)(a6 + 264) = 0;
  *(_QWORD*)(a6 + 232) = v33;
  LODWORD(v33) = *(_DWORD*)(v12 + 164);
  *(_DWORD*)(a6 + 272) = 0;
  *(_DWORD*)(a6 + 268) = v33;
  *(_DWORD*)(a6 + 44) = *(_DWORD*)(a4 + 288);
  *(_DWORD*)(a6 + 276) = *(_DWORD*)(a2 + 140);
  if (*(_BYTE*)(a4 + 204) != 0 && *(_BYTE*)(a4 + 205) != 0) {
    v34 = *(_QWORD*)(a2 + 104);
    __asm__ volatile("" ::"r"(v34));
  }
  else {
    v34 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
        *(_QWORD*)(a2 + 96));
  }
  *(_QWORD*)(a6 + 280) = v34;
  *(_DWORD*)(a6 + 316) = *(int*)(a4 + 288) + *(int*)(a2 + 128) +
                         *(int*)(a2 + 136) + *(int*)(a2 + 140);
  {
    v35 = *a5;
    __asm__ volatile("" ::"r"(v35));
  }
  v36 = v35 + (unsigned int)CudaDriverStub_1a9040(v12);
  *(_QWORD*)(a6 + 408) = v36;
  *(_QWORD*)(a6 + 416) = v36 + *(unsigned int*)(a2 + 632);
  if ((unsigned __int8)CudaDriverRoutine_9ab10(*(_QWORD*)(a1 + 64)) != 0 &&
      (*((_BYTE*)&CudaDriverRoutine_4728 + (_QWORD)v31) & 2) == 0) {
    {
      v37 = *(_DWORD**)(a1 + 64);
      __asm__ volatile("" ::"r"(v37));
    }
    if (v37[5466] != 1) {
      *(_DWORD*)(a6 + 396) = v37[4271] + v37[4272] == 0;
    }
  }
  *(_QWORD*)(a6 + 520) = 0;
  *(_QWORD*)(a6 + 400) = 0;
  if (*(_BYTE*)(*(_QWORD*)(a1 + 64) + 16850LL) != 0) {
    v38 = CudaDriverStub_1db800(*(_QWORD*)(v12 + 2232));
  }
  else {
    v38 = 0;
  }
  *(_QWORD*)(a6 + 424) = v38;
  return 0;
}

__int64 nvidia_1af2c0(char** a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                      __int64 a6, unsigned int a7)
{
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _DWORD* v20;
  unsigned __int64 v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned __int64 v26;
  int v27;
  int v28;
  _DWORD* v29;
  int v30;
  int v31;
  int v32;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  char v38;
  unsigned __int64 v39;
  char v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned int v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  char v52;
  unsigned __int64 v53;
  char v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned int v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  char* v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  int v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  _DWORD* v81;
  int v82;
  int v83;
  int v84;
  unsigned int v85;
  unsigned __int64 v86;
  unsigned int v87;
  char* v88;
  _BOOL4 v89;
  _BOOL4 v90;
  _DWORD* v91;
  __int64 v92;
  __int64 v93;
  _DWORD* v94;
  _DWORD* v95;
  bool v96;
  bool v97;
  _DWORD* v98;
  _DWORD* v99;
  _DWORD* v100;
  unsigned __int64 v101;
  _BOOL4 v103;
  int v104;
  int v105;
  int v106;
  int v108;
  char v109;
  char v110;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  char v123;
  char v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  struct {
    char* v139;
    __int64 v140;
    char gap232_[168];
    unsigned __int64 v141;
    unsigned __int64 v142;
  } v139_;
  struct {
    int v143;
    char gap420_[4];
    __int64 v144;
    char gap432_[168];
    unsigned __int64 v145;
    unsigned __int64 v146;
    char gap616_[8];
    unsigned __int64 v147;
    unsigned __int64 v148;
    char gap640_[35];
    unsigned __int8 v149;
    char v150;
  } v143_;
  _DWORD* v151;

  if (*(_DWORD*)(a6 + 404) == 0 &&
      (*(_DWORD*)a6 == 0 ||
       (unsigned __int64)CudaDriverRoutine_f8f00((_DWORD*)a6) >> 31 == 0)) {
    v8 = (_DWORD*)(a6 + 200);
    if (*(_DWORD*)(a6 + 200) == 0 ||
        (unsigned __int64)CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) >> 31 ==
            0) {
      memcpy_plt((__int64)&v139_.v139, a6, 0x1D8u);
      if (*(_DWORD*)a6 != 0) {
        v9 = CudaDriverRoutine_f8f00((_DWORD*)a6);
        if (CudaDriverRoutine_f8ed0((_DWORD*)a6) != 0) {
          v10 = CudaDriverRoutine_f8ed0((_DWORD*)a6);
        }
        else {
          v10 = 1;
        }
        v39 = 1;
        v41 = 1;
        v112 = CudaDriverRoutine_f8f00((_DWORD*)a6) * v10;
        v116 = -1;
        v127 = -1;
        v47 = v9;
        if (*(_DWORD*)v8 != 0) {
        LABEL_54:
          v126 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200));
          if (CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200)) != 0) {
            v62 = CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200));
          }
          else {
            v62 = 1;
          }
          v53 = 1;
          v55 = 1;
          v111 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) * v62;
          v115 = -1;
          v125 = -1;
          {
            v61 = *(_QWORD*)(a6 + 416);
            __asm__ volatile("" ::"r"(v61));
          }
          if (v61 == 0) {
            return 0;
          }
          goto LABEL_58;
        }
      }
      else {
        {
          v34 = *(_QWORD*)(a6 + 8);
          __asm__ volatile("" ::"r"(v34));
        }
        {
          v35 = *(_DWORD*)(v34 + 44);
          __asm__ volatile("" ::"r"(v35));
        }
        {
          v36 = *(_DWORD*)(v34 + 48);
          __asm__ volatile("" ::"r"(v36));
        }
        {
          v37 = *(unsigned int*)(v34 + 52);
          __asm__ volatile("" ::"r"(v37));
        }
        {
          v38 = v35 + *(int*)(v34 + 40);
          __asm__ volatile("" ::"r"(v38));
        }
        LOBYTE(v35) = v35 + 3;
        v39 = 1LL << v36;
        v40 = v38 + v36;
        v41 = 1LL << v35;
        v42 = 512LL << v40;
        {
          v43 = *(_DWORD*)(v34 + 56);
          __asm__ volatile("" ::"r"(v43));
        }
        v44 = (0x4000000uLL >> v40) / (unsigned int)v37;
        v45 = v42 * v37;
        v127 = v44 << v35;
        if ((unsigned int)v44 < v43) {
          v46 = 1;
        }
        else {
          v46 = (unsigned int)v44 / v43;
        }
        v116 = v46 << v36;
        if (CudaDriverRoutine_86fe0(v34)) {
          {
            v112 = *(_QWORD*)(v34 + 136);
            __asm__ volatile("" ::"r"(v112));
          }
          v47 = v45;
          if (*(_DWORD*)v8 != 0) {
            goto LABEL_54;
          }
        }
        else {
          {
            v112 = v45 * *(unsigned int*)(v34 + 56);
            __asm__ volatile("" ::"r"(v112));
          }
          v47 = v45;
          if (*(_DWORD*)v8 != 0) {
            goto LABEL_54;
          }
        }
      }
      {
        v48 = *(_QWORD*)(a6 + 208);
        __asm__ volatile("" ::"r"(v48));
      }
      {
        v49 = *(_DWORD*)(v48 + 44);
        __asm__ volatile("" ::"r"(v49));
      }
      {
        v50 = *(_DWORD*)(v48 + 48);
        __asm__ volatile("" ::"r"(v50));
      }
      {
        v51 = *(unsigned int*)(v48 + 52);
        __asm__ volatile("" ::"r"(v51));
      }
      {
        v52 = v49 + *(int*)(v48 + 40);
        __asm__ volatile("" ::"r"(v52));
      }
      LOBYTE(v49) = v49 + 3;
      v53 = 1LL << v50;
      v54 = v52 + v50;
      v55 = 1LL << v49;
      v56 = 512LL << v54;
      {
        v57 = *(_DWORD*)(v48 + 56);
        __asm__ volatile("" ::"r"(v57));
      }
      v58 = (0x4000000uLL >> v54) / (unsigned int)v51;
      v59 = v56 * v51;
      v125 = v58 << v49;
      if ((unsigned int)v58 < v57) {
        v60 = 1;
      }
      else {
        v60 = (unsigned int)v58 / v57;
      }
      v115 = v60 << v50;
      v126 = v56 * v51;
      if (CudaDriverRoutine_86fe0(v48)) {
        {
          v111 = *(_QWORD*)(v48 + 136);
          __asm__ volatile("" ::"r"(v111));
        }
        {
          v61 = *(_QWORD*)(a6 + 416);
          __asm__ volatile("" ::"r"(v61));
        }
        if (v61 == 0) {
          return 0;
        }
      }
      else {
        {
          v111 = v59 * *(unsigned int*)(v48 + 56);
          __asm__ volatile("" ::"r"(v111));
        }
        {
          v61 = *(_QWORD*)(a6 + 416);
          __asm__ volatile("" ::"r"(v61));
        }
        if (v61 == 0) {
          return 0;
        }
      }
    LABEL_58:
      {
        v63 = *(_QWORD*)(a6 + 408);
        __asm__ volatile("" ::"r"(v63));
      }
      if (v63 == 0) {
        return 0;
      }
      v64 = 0;
      v120 = v47;
      v109 = __clz((unsigned long long)(__rbit64(v53)));
      v110 = __clz((unsigned long long)(__rbit64(v39)));
      v113 = v53 - 1;
      v114 = v39 - 1;
      v123 = __clz((unsigned long long)(__rbit64(v55)));
      v124 = __clz((unsigned long long)(__rbit64(v41)));
      v121 = v55 - 1;
      v122 = v41 - 1;
      while (1) {
        {
          v65 = *(_QWORD*)(a6 + 192) + v64;
          __asm__ volatile("" ::"r"(v65));
        }
        {
          v66 = *(_QWORD*)(a6 + 392) + v64;
          __asm__ volatile("" ::"r"(v66));
        }
        v139_.v142 = v65 & v114;
        v67 = v116 - (v65 & v114);
        v143_.v146 = v66 & v113;
        if (v67 >= v115 - (v66 & v113)) {
          v67 = v115 - (v66 & v113);
        }
        if (v61 - v64 < v67) {
          v67 = v61 - v64;
        }
        v143_.v148 = v67;
        if (v63 != 0) {
          break;
        }
      LABEL_61:
        v64 += v67;
        if (v64 >= v61) {
          return 0;
        }
      }
      v117 = v64;
      v68 = 0;
      v133 = a5 + (v65 >> v110) * v112;
      v131 = a4 + (v66 >> v109) * v111;
      {
        v69 = *a1;
        __asm__ volatile("" ::"r"(v69));
      }
      while (1) {
        v71 = v63 - v68;
        v72 = v143_.v149;
        {
          v73 = *(_QWORD*)(a6 + 184) + v68;
          __asm__ volatile("" ::"r"(v73));
        }
        {
          v74 = *(_QWORD*)(a6 + 384) + v68;
          __asm__ volatile("" ::"r"(v74));
        }
        v139_.v141 = v73 & v122;
        v75 = v127 - (v73 & v122);
        v143_.v145 = v74 & v121;
        if (v75 >= v125 - (v74 & v121)) {
          v75 = v125 - (v74 & v121);
        }
        if (v71 >= v75) {
          v71 = v75;
        }
        v143_.v147 = v71;
        if ((_DWORD)v139_.v139 != 0) {
          v76 = CudaDriverRoutine_f8f00(&v139_.v139);
          v135 = v68;
          v137 = CudaDriverRoutine_f8ed0(&v139_.v139) * v76;
          if (v143_.v143 != 0) {
            goto LABEL_76;
          }
        }
        else {
          v135 = v68;
          {
            v137 = *(_QWORD*)(v139_.v140 + 136);
            __asm__ volatile("" ::"r"(v137));
          }
          if (v143_.v143 != 0) {
          LABEL_76:
            v77 = CudaDriverRoutine_f8f00(&v143_.v143);
            v78 = CudaDriverRoutine_f8ed0(&v143_.v143) * v77;
            goto LABEL_79;
          }
        }
        {
          v78 = *(_QWORD*)(v143_.v144 + 136);
          __asm__ volatile("" ::"r"(v78));
        }
      LABEL_79:
        v79 = v133 + (v73 >> v124) * v47;
        v80 = v131 + (v74 >> v123) * v126;
        v81 = CudaDriverRoutine_1afd20(v69, v80, v79, (__int64)&v139_.v139);
        v151 = v81;
        if ((_DWORD)v139_.v139 != 0) {
          v82 = 128;
        }
        else {
          v82 = 0;
        }
        if (v143_.v143 != 0) {
          v82 |= 0x100u;
        }
        v83 = v82 | 0x400;
        if (v72 == 0) {
          v83 = v82;
        }
        v70 = v143_.v147;
        if (v143_.v147 <= 1) {
          v84 = v83;
        }
        else {
          v84 = v83 | 0x200;
        }
        if (v143_.v148 != 0) {
          v85 = a7;
          v86 = 0;
          v87 = 0;
          while (1) {
            v88 = (char*)v151;
            if ((_DWORD)v139_.v139 != 0) {
              v89 = true;
              if (v143_.v143 != 0) {
                goto LABEL_95;
              }
            }
            else {
              v96 = CudaDriverRoutine_86fe0(v139_.v140);
              v85 = a7;
              v89 = v96;
              if (v143_.v143 != 0) {
              LABEL_95:
                v90 = true;
                v91 = v151;
                v92 = HIDWORD(v79) & 0x1FFFFFF;
                v93 = HIDWORD(v80) & 0x1FFFFFF;
                if (v89) {
                  goto LABEL_96;
                }
                goto LABEL_99;
              }
            }
            v97 = CudaDriverRoutine_86fe0(v143_.v144);
            v85 = a7;
            v90 = v97;
            v91 = v151;
            v92 = HIDWORD(v79) & 0x1FFFFFF;
            v93 = HIDWORD(v80) & 0x1FFFFFF;
            if (v89 && v90) {
            LABEL_96:
              *(_DWORD*)v91 = 537166080;
              v151[1] = v92;
              v94 = v151;
              v151[2] = v79;
              v94[3] = v93;
              v94[4] = v80;
              v95 = v94 + 5;
              v80 += v78;
              v151 = v95;
              v79 += v137;
              goto LABEL_105;
            }
          LABEL_99:
            if (v89) {
              *(_DWORD*)v91 = 537035008;
              v151[1] = v92;
              v98 = v151;
              v151[2] = v79;
              v99 = v98 + 3;
              v79 += v137;
              v151 = v99;
              if (v90) {
                goto LABEL_103;
              }
            }
            else {
              *(_DWORD*)v91 = 536969678;
              v151[1] = v87 + v139_.v142;
              v99 = v151 + 2;
              v151 += 2;
              if (v90) {
              LABEL_103:
                *(_DWORD*)v99 = 537035010;
                v99[1] = v93;
                v100 = v151;
                v151[2] = v80;
                v95 = v100 + 3;
                v80 += v78;
                goto LABEL_104;
              }
            }
            *(_DWORD*)v99 = 536969671;
            v99[1] = v87 + v143_.v146;
            v95 = v151 + 2;
          LABEL_104:
            v151 = v95;
          LABEL_105:
            v101 = v88 - v69 - 32688;
            v103 = v101 < 0xFFFFFFFFFFFF8000LL || v143_.v148 - 1 == v86;
            if (v85 != 0 || !v103 ||
                (*((_BYTE*)&CudaDriverRoutine_4198 +
                   (_QWORD)CudaDriverData_1422118) &
                 1) != 0) {
              v104 = 0;
            }
            else {
              v104 = 4;
            }
            v105 = v104 | v84;
            if (v143_.v150 != 0) {
              v106 = 2;
            }
            else {
              v106 = 1;
            }
            if (v87 == 0) {
              v106 = 2;
            }
            *(_DWORD*)v95 = 536969408;
            v95[1] = v105 | v106;
            v151 += 2;
            if (v101 < 0xFFFFFFFFFFFF8000LL || v143_.v148 - 1 == v86) {
              v108 = v85;
              if ((unsigned __int8)cuda_driver_misc_helpers_4bb0(v85) != 0) {
                v151 = (_DWORD*)CudaDriverRoutine_1aa7f0((__int64)v151, v108);
              }
              if (v101 < 0xFFFFFFFFFFFF8000LL) {
                v85 = a7;
                if (v143_.v148 - 1 <= v86) {
                  goto LABEL_92;
                }
                CudaDriverStub_5ab60(a3, &v151);
                v69 = (char*)v151;
                if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                               (_QWORD)CudaDriverData_1422118) >= 2u &&
                    *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) +
                               (_QWORD)CudaDriverData_1422118) == 0) {
                  v151 = CudaDriverRoutine_1afd20(v151, v80, v79,
                                                  (__int64)&v139_.v139);
                }
              }
              v85 = a7;
            }
          LABEL_92:
            v67 = v143_.v148;
            v86 = ++v87;
            if (v143_.v148 <= v87) {
              v69 = (char*)v151;
              v70 = v143_.v147;
              v47 = v120;
              goto LABEL_69;
            }
          }
        }
        v67 = 0;
        v69 = (char*)v81;
      LABEL_69:
        *a1 = v69;
        v68 = v70 + v135;
        {
          v63 = *(_QWORD*)(a6 + 408);
          __asm__ volatile("" ::"r"(v63));
        }
        if (v68 >= v63) {
          {
            v61 = *(_QWORD*)(a6 + 416);
            __asm__ volatile("" ::"r"(v61));
          }
          v64 = v117;
          goto LABEL_61;
        }
      }
    }
  }
  {
    v11 = *(_QWORD*)(a6 + 416);
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = *a1;
    __asm__ volatile("" ::"r"(v12));
  }
  v139_.v139 = *a1;
  if (v11 == 0) {
    goto LABEL_39;
  }
  v130 = 0;
  do {
    v13 = CudaDriverRoutine_f8f00((_DWORD*)a6);
    v14 = CudaDriverRoutine_f8ed0((_DWORD*)a6);
    v15 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200));
    v16 = CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200));
    if (*(_QWORD*)(a6 + 408) != 0) {
      v17 = 0;
      v18 = a4 + v15 * v130 * v16;
      v19 = a5 + v13 * v130 * v14;
      do {
        v136 = v17;
        if ((v17 | v130) != 0) {
          CudaDriverStub_5ab60(a3, &v139_.v139);
        }
        v20 = v139_.v139;
        {
          v21 = *(_QWORD*)(a6 + 400);
          __asm__ volatile("" ::"r"(v21));
        }
        {
          v22 = *(unsigned __int8*)(a6 + 459);
          __asm__ volatile("" ::"r"(v22));
        }
        v132 = v19;
        v134 = v18;
        v23 = v21;
        do {
          if (v23 >= 0xFFFFFFFF) {
            v24 = 0xFFFFFFFFLL;
          }
          else {
            v24 = v23;
          }
          if (v22 != 0) {
            v25 = (unsigned int)v24 /
                  (*(unsigned __int8*)(a6 + 456) *
                   (unsigned int)*(unsigned __int8*)(a6 + 458));
            __asm__ volatile("" ::"r"(v25));
          }
          else {
            v25 = v24;
          }
          v20[6] = v25;
          *(_DWORD*)v20 = 537166080;
          v20[1] = HIDWORD(v19) & 0x1FFFFFF;
          v20[2] = v19;
          v20[3] = HIDWORD(v18) & 0x1FFFFFF;
          v20[4] = v18;
          v20[5] = 536969478;
          v26 = HIDWORD(v23);
          if (a7 != 0 || v26 != 0 ||
              (*((_BYTE*)&CudaDriverRoutine_4198 +
                 (_QWORD)CudaDriverData_1422118) &
               1) != 0) {
            v27 = 0;
            if (v22 == 0) {
            LABEL_29:
              v28 = 0;
              v29 = v20 + 7;
              goto LABEL_32;
            }
          }
          else {
            v27 = 4;
            if (v22 == 0) {
              goto LABEL_29;
            }
          }
          v30 = *(_BYTE*)(a6 + 424) & 7 |
                (unsigned __int8)(16 * (*(_BYTE*)(a6 + 428) & 7)) |
                ((*(_DWORD*)(a6 + 432) & 7) << 8) |
                ((*(_DWORD*)(a6 + 436) & 7) << 12) |
                ((*(unsigned __int8*)(a6 + 458) << 16) - 0x10000) & 0x30000 |
                ((*(unsigned __int8*)(a6 + 456) << 20) - 0x100000) & 0x300000 |
                ((*(unsigned __int8*)(a6 + 457) << 24) - 0x1000000) & 0x3000000;
          v20[7] = 537100736;
          v20[8] = *(_DWORD*)(a6 + 448);
          v20[9] = *(_DWORD*)(a6 + 452);
          v20[10] = v30;
          v29 = v20 + 11;
          v28 = 1024;
        LABEL_32:
          v20 = v29 + 2;
          v31 = v27 | v28;
          if (v23 == v21) {
            v32 = 386;
          }
          else {
            v32 = 385;
          }
          *(_DWORD*)v29 = 536969408;
          v29[1] = v31 | v32;
          if (v26 == 0 &&
              (unsigned __int8)cuda_driver_misc_helpers_4bb0(a7) != 0) {
            v20 = (_DWORD*)CudaDriverRoutine_1aa7f0((__int64)v20, a7);
          }
          v18 += v24;
          v19 += v24;
          v23 -= v24;
        } while (v23 != 0);
        v139_.v139 = (char*)v20;
        v19 = CudaDriverRoutine_f8f00((_DWORD*)a6) + v132;
        v18 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) + v134;
        v17 = v136 + 1;
      } while ((unsigned __int64)(v136 + 1) < *(_QWORD*)(a6 + 408));
    }
    ++v130;
  } while (v130 < *(_QWORD*)(a6 + 416));
  v12 = v139_.v139;
LABEL_39:
  *a1 = v12;
  return 0;
}

__int64 nvidia_1ba340(int a1, unsigned __int64 a2)
{
  unsigned int* v4;
  char* v5;
  __int64 v7;
  int v8;
  int v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;

  if (a1 >=
      (unsigned __int64)*(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                                         (_QWORD)CudaDriverData_1422118)) {
    return 1;
  }
  {
    v4 = *((unsigned int**)CudaDriverData_1422118 + a1 + 35);
    __asm__ volatile("" ::"r"(v4));
  }
  v5 = (char*)CudaDriverData_1422118 + 8 * *v4;
  if (*((_QWORD*)v5 + 2363) < a2) {
    *((_QWORD*)v5 + 2363) = a2;
  }
  if (CudaDriverRoutine_f0f30(v4) != 0) {
    return 208;
  }
  if (!CudaDriverRoutine_efe40((__int64)v4)) {
    return 801;
  }
  v15 = 0;
  if (a2 == 0) {
    return CudaDriverRoutine_f2c20((int*)v4, &v15);
  }
  v14 = 0;
  v8 = 1;
  v9 = a1;
  v13 = (__typeof__(v13)){0};
  v12 = (__typeof__(v12)){0};
  v11 = (__typeof__(v11)){0};
  v10 = (__typeof__(v10)){0};
  v7 = 1;
  return CudaDriverRoutine_f0380(&v7, 0, a2, 1u, 0, &v15);
}

__int64 nvidia_1bd060(__int64 a1, __int64 a2, unsigned int a3, int a4,
                      _DWORD* a5, __int64 a6, int* a7)
{
  unsigned __int64 v11;
  void* v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;

  v11 = a3;
  v12 = CudaDriverData_1422118;
  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c +
         (_QWORD)CudaDriverData_1422118 + 2)) != 0) {
    v13 = 32;
  }
  else {
    v13 = 544;
  }
  if (a4 != 0) {
    v14 = a4 + 16;
  }
  else {
    v14 = 0;
  }
  v15 = v13 + v14;
  *(_DWORD*)(a6 + 28) = a5[7];
  *(_DWORD*)(a6 + 32) = a5[8];
  *(_DWORD*)(a6 + 36) = a5[9];
  *a7 = 1;
  if (a2 == 0) {
    if (a5[7] > 0x3FFu) {
      v16 = 0;
      v22 = 2;
      *(_DWORD*)(a6 + 28) = 0;
      goto LABEL_28;
    }
    v16 = 0;
    if (a5[8] == ((v15 + a3 + 15) & 0xFFFFFFF0)) {
      goto LABEL_27;
    }
  LABEL_24:
    {
      v24 = *(_DWORD*)(a6 + 28);
      __asm__ volatile("" ::"r"(v24));
    }
    if (v24 <= 0x80000) {
      goto LABEL_29;
    }
    return 999;
  }
  {
    v16 = *(_DWORD*)(a2 + 364);
    __asm__ volatile("" ::"r"(v16));
  }
  if (a3 <= (unsigned int)CudaDriverRoutine_bc3f0(a2)) {
    v11 = (unsigned int)CudaDriverRoutine_bc3f0(a2);
  }
  if (CudaDriverStub_b9300(a2)) {
    {
      v18 = *(_QWORD*)(a2 + 32);
      __asm__ volatile("" ::"r"(v18));
    }
    {
      v19 = *(unsigned int*)(v18 + 332);
      __asm__ volatile("" ::"r"(v19));
    }
    {
      v20 = *(unsigned int*)(v18 + 336);
      __asm__ volatile("" ::"r"(v20));
    }
    v12 = CudaDriverData_1422118;
    if (v11 <= v19) {
      v11 = v19;
    }
    if ((unsigned int)v20 > 0x2000 && v11 <= v20) {
      LODWORD(v11) = v20;
    }
    if (*(_BYTE*)(a1 + 1301) != 0) {
      goto LABEL_17;
    }
  }
  else {
    v12 = CudaDriverData_1422118;
    if (*(_BYTE*)(a1 + 1301) != 0) {
    LABEL_17:
      {
        v21 = *(_DWORD*)(a2 + 72);
        __asm__ volatile("" ::"r"(v21));
      }
    LABEL_22:
      v23 = (v21 + 15) & 0xFFFFFFF0;
      v22 = 1;
      *(_DWORD*)(a6 + 28) = v23;
      goto LABEL_28;
    }
  }
  {
    v21 = *(_DWORD*)(a2 + 72);
    __asm__ volatile("" ::"r"(v21));
  }
  if (a5[7] < v21) {
    goto LABEL_22;
  }
  if (a5[8] != ((v15 + (int)v11 + 15) & 0xFFFFFFF0)) {
    goto LABEL_24;
  }
LABEL_27:
  v22 = 3;
LABEL_28:
  *a7 = v22;
  {
    v24 = *(_DWORD*)(a6 + 28);
    __asm__ volatile("" ::"r"(v24));
  }
  if (v24 > 0x80000) {
    return 999;
  }
LABEL_29:
  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c + (_QWORD)v12 + 2)) != 0) {
    v26 = 32;
  }
  else {
    v26 = 544;
  }
  v27 = v14 + v11 + v26 + 15;
  v28 = v27 & 0xFFFFFFF0;
  if (v16 != 0 || 2 * v28 <= 0x2000) {
    v29 = v16 + 511;
    if ((unsigned int)(v16 + 511) <= 0x2000) {
      v29 = 0x2000;
    }
    if (v28 <= 0x80000) {
      goto LABEL_35;
    }
  LABEL_40:
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"Requested stack size exceeds limit\n");
    return 1;
  }
  v29 = 2 * v28 + 511;
  if (v28 > 0x80000) {
    goto LABEL_40;
  }
LABEL_35:
  if ((v29 & 0xFFFFFE00) > 0x100000) {
    return 1;
  }
  {
    v30 = *(_QWORD*)(a1 + 64);
    __asm__ volatile("" ::"r"(v30));
  }
  {
    v31 = *(_DWORD*)(v30 + 3924);
    __asm__ volatile("" ::"r"(v31));
  }
  LODWORD(v30) = *(_DWORD*)(v30 + 3756);
  v32 = (v29 | 0x1FF) + v31 * (v28 + v24);
  {
    v33 = *(unsigned int*)(a1 + 164);
    __asm__ volatile("" ::"r"(v33));
  }
  *(_DWORD*)(a6 + 32) = v28;
  *(_DWORD*)(a6 + 36) = v29 & 0xFFFFFE00;
  *(_DWORD*)(a6 + 16) = v28 - v15;
  *(_DWORD*)(a6 + 40) = v32 & 0xFFFFFE00;
  *(_QWORD*)(a6 + 8) =
      (((unsigned int)v30 * (unsigned __int64)(v32 & 0xFFFFFE00) + 0x7FFF) &
       0xFFFFFFFFFFFF8000LL) *
      v33;
  *(_DWORD*)(a6 + 20) =
      ((((v29 & 0xFFFFFE00) + 32 * ((v27 | 0xF) + v24)) & 0xFFFFFE00) + 33791) &
      0xFFFFFE00;
  *(_DWORD*)(a6 + 24) = a4;
  return 0;
}

__int64 nvidia_1cb040(__int64 a1, unsigned int a2, unsigned int a3, int a4,
                      int a5, int a6)
{
  __int64 v6;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  uint32x4_t v14;
  int8x16_t v15;
  int8x16_t v16;
  unsigned int v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  bool v26;
  struct {
    _QWORD v27[2];
    char gap24_[4];
    unsigned int v28;
  } v27_;
  struct {
    int v29;
    int v30;
  } v29_;

  {
    v6 = *(_QWORD*)(a1 + 24);
    __asm__ volatile("" ::"r"(v6));
  }
  LODWORD(v27_.v27[0]) = a4;
  v29_.v29 = a6;
  v29_.v30 = a5;
  if (v6 == 0 || *(_BYTE*)(v6 + 85) != 1) {
    return 29;
  }
  v10 = a1 + 23375408;
  v11 = a1 + 91280LL * a2 + 1240;
  v12 = v11 + 1424LL * a3;
  {
    v13 = *(_DWORD*)(v12 + 32);
    __asm__ volatile("" ::"r"(v13));
  }
  v14 = vdupq_n_s32(v13);
  LANES128(v15).n128_u32[0] = v13;
  LANES128(v15).n128_u32[1] = v13 >> 1;
  *(uint32x2_t*)&LANES128(v15).n128_i8[8] =
      vshl_u32(COERCE_AS(uint32x2_t, LANES128(v14).n128_u64[0]),
               COERCE_AS(uint32x2_t, 0xFFFFFFFDFFFFFFFELL));
  LANES128(v16).n128_u64[0] = 0x100000001LL;
  LANES128(v16).n128_u64[1] = 0x100000001LL;
  v27_.v28 =
      vaddvq_s32(vaddq_s32(
          vaddq_s32(
              vandq_s8(v15, v16),
              vaddq_s32(
                  vandq_s8(vshlq_u32(v14, COERCE_AS(uint32x4_t,
                                                    CudaDriverData_1115340)),
                           v16),
                  vaddq_s32(
                      vandq_s8(
                          vshlq_u32(v14, COERCE_AS(uint32x4_t,
                                                   CudaDriverData_1115de0)),
                          v16),
                      COERCE_AS(
                          int32x4_t,
                          (COERCE_AS(
                               _OWORD,
                               vshlq_u32(v14,
                                         COERCE_AS(uint32x4_t,
                                                   CudaDriverData_1115970))) &
                           __PAIR128__(0xFFFFFF01FFFFFF01LL,
                                       0xFFFFFF01FFFFFF01LL)))))),
          vaddq_s32(
              vaddq_s32(
                  vandq_s8(vshlq_u32(v14, COERCE_AS(uint32x4_t,
                                                    CudaDriverData_11154a0)),
                           v16),
                  vandq_s8(vshlq_u32(v14, COERCE_AS(uint32x4_t,
                                                    CudaDriverData_1115a90)),
                           v16)),
              vandq_s8(
                  vshlq_u32(v14, COERCE_AS(uint32x4_t, CudaDriverData_1115280)),
                  v16)))) +
      ((v13 & 0x10000000) != 0) + ((v13 & 0x20000000) != 0) +
      ((v13 & 0x40000000) != 0) + (v13 >> 31);
  if (v27_.v28 != 0) {
    v17 = 0;
    while (1) {
      result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int*,
                               __int64))(v10 + 456))(
          a1, a2, a3, v17, (unsigned int)(*(int*)(v12 + 520) - 304), &v29_.v29,
          4);
      if ((_DWORD)result != 0) {
        break;
      }
      result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD,
                               unsigned int*, __int64))(v10 + 456))(
          a1, a2, a3, v17, (unsigned int)(*(int*)(v12 + 520) - 308), &v27_.v28,
          4);
      if ((_DWORD)result != 0) {
        break;
      }
      result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD*,
                               __int64))(v10 + 456))(
          a1, a2, a3, v17, (unsigned int)(*(int*)(v12 + 520) - 312), v27_.v27,
          4);
      if ((_DWORD)result != 0) {
        break;
      }
      result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int*,
                               __int64))(v10 + 456))(
          a1, a2, a3, v17, (unsigned int)(*(int*)(v12 + 520) - 316), &v29_.v30,
          4);
      if ((_DWORD)result != 0) {
        break;
      }
      if (++v17 >= v27_.v28) {
        goto LABEL_10;
      }
    }
  }
  else {
  LABEL_10:
    if (a3 > 0x3F) {
      if (a3 - 64 > 0xFFFFFFBE) {
        v20 = -1;
        v19 = -1;
      }
      else {
        v19 = ~(1LL << ((unsigned __int8)a3 - 64));
        v20 = -1;
      }
    }
    else {
      v19 = -1;
      v20 = ~(1LL << a3);
    }
    v21 = a1 + 91280LL * a2;
    {
      v22 = v20 & *(_QWORD*)(v21 + 1128);
      __asm__ volatile("" ::"r"(v22));
    }
    {
      v23 = v19 & *(_QWORD*)(v21 + 1136);
      __asm__ volatile("" ::"r"(v23));
    }
    v27_.v27[0] = v22;
    v27_.v27[1] = v23;
    (*(void (**)(__int64, _QWORD, _QWORD*))v10)(a1, a2, v27_.v27);
    (*(void (**)(__int64, _QWORD, _QWORD))(v10 + 696))(a1, 0, a2);
    result = CudaDriverRoutine_1cb3b0(a1, a2);
    if ((_DWORD)result == 0) {
      v24 = 0;
      while (1) {
        result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int*,
                                 __int64))(*(_QWORD*)(a1 + 32306416) + 72LL))(
            a1, a2, a3, 0,
            (unsigned int)(*(int*)(v11 + 1424LL * a3 + 520) - 304), &v29_.v30,
            4);
        if ((_DWORD)result != 0) {
          break;
        }
        v25 = v24 + 500;
        if (v29_.v30 != 0) {
          v24 += 500;
          v26 = v25 >= 0x4C4B40;
        }
        else {
          v26 = true;
        }
        if (v26) {
          if (v24 > 0x4C4B3F) {
            return 10;
          }
          result = (*(__int64 (**)(__int64, _QWORD))(v10 + 216))(a1, a2);
          if ((_DWORD)result == 0) {
            return CudaDriverRoutine_1cb530(a1, a2);
          }
          return result;
        }
      }
    }
  }
  return result;
}

__int64 nvidia_1cf1b0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8, char a9)
{
  _QWORD* v9;
  _DWORD* v10;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int16 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 result;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  int v51;
  __int64 v52;
  __int16 v53;
  __int64 v54;
  __int64 v55;
  char v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v67;
  struct {
    int v68;
    char gap44_[4];
    __int64 v69;
    __int64 v70;
    __int64 v71;
    _DWORD* v72;
    __int64 v73;
    __int16 v74;
    char gap90_[6];
    __int64 v75;
    char gap104_[8];
    char v76;
    char gap113_[7];
    __int64* v77;
  } v68_;
  __int64 v78;
  struct {
    __int64 v79;
    __int64 v80;
  } v79_;
  __int64 v81;

  {
    v10 = *(_DWORD**)(a8 + 8);
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v9 = *(_QWORD**)(a8 + 16);
    __asm__ volatile("" ::"r"(v9));
  }
  v15 = v9 + 64;
  {
    v16 = *(_QWORD*)(a8 + 136);
    __asm__ volatile("" ::"r"(v16));
  }
  if (*(_DWORD*)(*(_QWORD*)(a3 + 64) + 3384LL) == 45504) {
    {
      v17 = *a1;
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v67 = *a1;
      __asm__ volatile("" ::"r"(v67));
    }
    if (!CudaDriverRoutine_bbdf0(a4)) {
      v15 = nullptr;
    }
    if ((a9 & 2) != 0 || CudaDriverStub_b9300(a4) ||
        (unsigned __int8)cuda_driver_helpers_b92e0(a4) != 0) {
      v10[24] = v10[24] & 0xFB8FFFFF | 0x4000000;
      v18 = CudaDriverStub_8e230(v16);
    }
    else {
      v18 = CudaDriverRoutine_1ffe30(v16);
    }
    v10[25] = v18;
    v19 = CudaDriverStub_1223e0(*(_QWORD*)(v16 + 24));
    v10[23] = v19;
    *((_BYTE*)v10 + 96) = BYTE4(v19);
    if (CudaDriverStub_b9300(a4) ||
        (unsigned __int8)cuda_driver_helpers_b92e0(a4) != 0) {
      v9[129] = CudaDriverRoutine_2045e0(*(_QWORD**)(v16 + 24));
      v9[153] = *(_QWORD*)(v16 + 8) + 1232LL;
      v9[156] = *(_QWORD*)(v16 + 8) + 1224LL;
    }
    if (a6 != 0 && (*(_BYTE*)(a6 + 60) & 1) != 0) {
      v20 = CudaDriverStub_1223e0(*(_QWORD*)(a6 + 40));
      {
        v21 = v10[6];
        __asm__ volatile("" ::"r"(v21));
      }
      v10[28] = 0;
      v10[6] = v21 | 0x800;
      {
        v22 = v10[27] & 0x7FFFFF00 | BYTE4(v20);
        __asm__ volatile("" ::"r"(v22));
      }
      v10[26] = v20;
      v10[27] = v22;
      CudaDriverRoutine_2077b0(a6);
    }
    {
      v23 = v10[6];
      __asm__ volatile("" ::"r"(v23));
    }
    v10[6] = v23 & 0xFFFFFFC0 |
             CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), 0) & 0x3F;
    if (CudaDriverRoutine_bbdf0(a4)) {
      {
        v24 = *((_DWORD*)v15 + 6);
        __asm__ volatile("" ::"r"(v24));
      }
      *((_DWORD*)v15 + 6) =
          v24 & 0xFFFFFFC0 |
          (CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), 0) - 1) & 0x3F;
    }
    {
      v25 = *(_QWORD*)(a3 + 64);
      __asm__ volatile("" ::"r"(v25));
    }
    {
      v26 = *(_WORD*)(v25 + 17281);
      __asm__ volatile("" ::"r"(v26));
    }
    if (*(int*)((char*)((int*)0x4LL) +
                *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) +
                           (_QWORD)CudaDriverData_14225e0)) != 0) {
      v68_.v68 = 88;
      {
        v27 = *(_QWORD*)(a4 + 32);
        __asm__ volatile("" ::"r"(v27));
      }
      {
        v28 = *(_QWORD*)(v27 + 24);
        __asm__ volatile("" ::"r"(v28));
      }
      {
        v29 = *(_BYTE*)(a8 + 205);
        __asm__ volatile("" ::"r"(v29));
      }
      v68_.v71 = a4;
      v68_.v72 = v10;
      v68_.v74 = v26;
      v68_.v75 = a8;
      v68_.v69 = v28;
      v68_.v70 = v27;
      v68_.v76 = v29;
      v68_.v77 = &v67;
      v68_.v73 = a7;
      cuda_driver_20b420(0xBu, 1u, (__int64)&v68_.v68);
      {
        v25 = *(_QWORD*)(a3 + 64);
        __asm__ volatile("" ::"r"(v25));
      }
      v17 = v67;
    }
    v30 = v9 + 64;
    v31 = (*(__int64 (**)(__int64, __int64, _QWORD, _DWORD*, __int64, __int64))(
        v25 + 19248))(v17, a3, *(_QWORD*)(v16 + 8), v10, 192, 2);
    {
      v32 = *(_QWORD*)(a4 + 832);
      __asm__ volatile("" ::"r"(v32));
    }
    v67 = v31;
    if (v32 != 0) {
      {
        v33 = *(_QWORD*)(v16 + 8);
        __asm__ volatile("" ::"r"(v33));
      }
      v34 = v31;
      v35 = (*(__int64 (**)(int*, __int64, __int64, _DWORD*, __int64, __int64))(
          *(_QWORD*)(a3 + 64) + 19248LL))(&v68_.v68, a3, v33 + 48, v10 + 12, 6,
                                          2);
      v36 = v33 + 54;
      v30 = v9 + 64;
      (*(void (**)(__int64, __int64, __int64, __int64, __int64, __int64))(
          *(_QWORD*)(a3 + 64) + 19248LL))(v35, a3, v36, (__int64)v10 + 54, 2,
                                          2);
      v79_.v79 = *(_QWORD*)(a4 + 832);
      v79_.v80 = v79_.v79 + 8;
      v78 = 0x400000008LL;
      v81 = 0x5000000024LL;
      v67 = CudaDriverRoutine_197480(v34, a2, 2u, (unsigned int*)&v81,
                                     (__int64)&v68_.v68, 0x54u, &v79_.v79,
                                     (unsigned int*)&v78);
    }
    if (CudaDriverRoutine_bbdf0(a4)) {
      v67 = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64,
                            __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
          v67, a3, *(_QWORD*)(v16 + 8) + 512LL, v30, 192, 2);
    }
    if (!CudaDriverStub_b9300(a4)) {
      result = cuda_driver_helpers_b92e0(a4);
      if ((_BYTE)result == 0) {
        *a1 = v67;
        return result;
      }
    }
    {
      v38 = *(_QWORD*)(a3 + 64);
      __asm__ volatile("" ::"r"(v38));
    }
    {
      v39 = *(_QWORD*)(v16 + 8);
      __asm__ volatile("" ::"r"(v39));
    }
    v40 = v67;
    v41 = v9 + 128;
    v42 = a3;
    v43 = 0;
  }
  else {
    {
      v44 = *a1;
      __asm__ volatile("" ::"r"(v44));
    }
    {
      v67 = *a1;
      __asm__ volatile("" ::"r"(v67));
    }
    if (!CudaDriverRoutine_bbdf0(a4)) {
      v15 = nullptr;
    }
    if ((a9 & 2) != 0 || CudaDriverStub_b9300(a4) ||
        (unsigned __int8)cuda_driver_helpers_b92e0(a4) != 0) {
      v10[24] = v10[24] & 0xFB8FFFFF | 0x4000000;
      v45 = CudaDriverStub_8e230(v16);
    }
    else {
      v45 = CudaDriverRoutine_1ffe30(v16);
    }
    v10[25] = v45;
    v46 = CudaDriverStub_1223e0(*(_QWORD*)(v16 + 24));
    v10[23] = v46;
    *((_BYTE*)v10 + 96) = BYTE4(v46);
    if (CudaDriverStub_b9300(a4) ||
        (unsigned __int8)cuda_driver_helpers_b92e0(a4) != 0) {
      v9[129] = CudaDriverRoutine_2045e0(*(_QWORD**)(v16 + 24));
      v9[153] = *(_QWORD*)(v16 + 8) + 1232LL;
      v9[156] = *(_QWORD*)(v16 + 8) + 1224LL;
    }
    if (a6 != 0 && (*(_BYTE*)(a6 + 60) & 1) != 0) {
      v47 = CudaDriverStub_1223e0(*(_QWORD*)(a6 + 40));
      {
        v48 = v10[6];
        __asm__ volatile("" ::"r"(v48));
      }
      v10[28] = 0;
      v10[6] = v48 | 0x800;
      {
        v49 = v10[27] & 0x7FFFFF00 | BYTE4(v47);
        __asm__ volatile("" ::"r"(v49));
      }
      v10[26] = v47;
      v10[27] = v49;
      CudaDriverRoutine_2077b0(a6);
    }
    {
      v50 = v10[6];
      __asm__ volatile("" ::"r"(v50));
    }
    v10[6] = v50 & 0xFFFFFFC0 |
             CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), 0) & 0x3F;
    if (CudaDriverRoutine_bbdf0(a4)) {
      {
        v51 = *((_DWORD*)v15 + 6);
        __asm__ volatile("" ::"r"(v51));
      }
      *((_DWORD*)v15 + 6) =
          v51 & 0xFFFFFFC0 |
          (CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), 0) - 1) & 0x3F;
    }
    {
      v52 = *(_QWORD*)(a3 + 64);
      __asm__ volatile("" ::"r"(v52));
    }
    {
      v53 = *(_WORD*)(v52 + 17281);
      __asm__ volatile("" ::"r"(v53));
    }
    if (*(int*)((char*)((int*)0x4LL) +
                *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) +
                           (_QWORD)CudaDriverData_14225e0)) != 0) {
      v68_.v68 = 88;
      {
        v54 = *(_QWORD*)(a4 + 32);
        __asm__ volatile("" ::"r"(v54));
      }
      {
        v55 = *(_QWORD*)(v54 + 24);
        __asm__ volatile("" ::"r"(v55));
      }
      {
        v56 = *(_BYTE*)(a8 + 205);
        __asm__ volatile("" ::"r"(v56));
      }
      v68_.v71 = a4;
      v68_.v72 = v10;
      v68_.v74 = v53;
      v68_.v75 = a8;
      v68_.v69 = v55;
      v68_.v70 = v54;
      v68_.v76 = v56;
      v68_.v77 = &v67;
      v68_.v73 = a7;
      cuda_driver_20b420(0xBu, 1u, (__int64)&v68_.v68);
      {
        v52 = *(_QWORD*)(a3 + 64);
        __asm__ volatile("" ::"r"(v52));
      }
      v44 = v67;
    }
    v57 = v9 + 64;
    v58 = (*(__int64 (**)(__int64, __int64, _QWORD, _DWORD*, __int64, __int64))(
        v52 + 19248))(v44, a3, *(_QWORD*)(v16 + 8), v10, 192, 2);
    {
      v59 = *(_QWORD*)(a4 + 832);
      __asm__ volatile("" ::"r"(v59));
    }
    v67 = v58;
    if (v59 != 0) {
      {
        v60 = *(_QWORD*)(v16 + 8);
        __asm__ volatile("" ::"r"(v60));
      }
      v61 = v58;
      v62 = (*(__int64 (**)(int*, __int64, __int64, _DWORD*, __int64, __int64))(
          *(_QWORD*)(a3 + 64) + 19248LL))(&v68_.v68, a3, v60 + 48, v10 + 12, 6,
                                          2);
      v63 = v60 + 54;
      v57 = v9 + 64;
      (*(void (**)(__int64, __int64, __int64, __int64, __int64, __int64))(
          *(_QWORD*)(a3 + 64) + 19248LL))(v62, a3, v63, (__int64)v10 + 54, 2,
                                          2);
      v79_.v79 = *(_QWORD*)(a4 + 832);
      v79_.v80 = v79_.v79 + 8;
      v78 = 0x400000008LL;
      v81 = 0x5000000024LL;
      v67 = CudaDriverRoutine_197480(v61, a2, 2u, (unsigned int*)&v81,
                                     (__int64)&v68_.v68, 0x54u, &v79_.v79,
                                     (unsigned int*)&v78);
    }
    if (CudaDriverRoutine_bbdf0(a4)) {
      v67 = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64,
                            __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
          v67, a3, *(_QWORD*)(v16 + 8) + 512LL, v57, 192, 2);
    }
    if (!CudaDriverStub_b9300(a4) &&
        (unsigned __int8)cuda_driver_helpers_b92e0(a4) == 0) {
      result = v67;
      goto LABEL_49;
    }
    {
      v38 = *(_QWORD*)(a3 + 64);
      __asm__ volatile("" ::"r"(v38));
    }
    {
      v39 = *(_QWORD*)(v16 + 8);
      __asm__ volatile("" ::"r"(v39));
    }
    v40 = v67;
    v41 = v9 + 128;
    v43 = 2;
    v42 = a3;
  }
  result =
      (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64, __int64))(
          v38 + 19248))(v40, v42, v39 + 1024, v41, 1024, v43);
LABEL_49:
  *a1 = result;
  return result;
}

void nvidia_1d4420(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v4;
  int32x4_t* v5;
  int32x4_t* v6;
  bool v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned __int64 v15;
  __int64 v16;
  int32x4_t* v17;
  float* v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  unsigned __int64 v22;
  int32x4_t v23;
  int32x4_t v24;
  char v25;
  _DWORD v26[768];
  float32x4x3_t v27;
  float32x4x3_t v28;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  {
    v2 = *(_QWORD*)(a1 + 64);
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v4 = *(unsigned int*)(v2 + 3732);
    __asm__ volatile("" ::"r"(v4));
  }
  if ((_DWORD)v4 != 0) {
    {
      v5 = *(int32x4_t**)(a1 + 16104);
      __asm__ volatile("" ::"r"(v5));
    }
    v6 = v5 + 2;
    if ((unsigned int)v4 < 0xC ||
        ((unsigned int)(v4 - 1) <= 0x55555554 ? (v7 = (v4 - 1) >> 32 == 0)
                                              : (v7 = false),
         !v7 || v6 < (int32x4_t*)&v26[3 * (unsigned int)v4] &&
                    v26 < (_DWORD*)&v5[2] + v4)) {
      v8 = 0;
      v9 = 0;
      do {
      LABEL_11:
        {
          v10 = LANES128(*(v6)).n128_i32[v8];
          __asm__ volatile("" ::"r"(v10));
        }
        v11 = v9 + 1;
        v12 = v9 + 2;
        ++v8;
        v10 += 5260820;
        v26[v9] = v10;
        v9 += 3;
        v26[v11] = v10 + 32;
        v26[v12] = v10 + 16;
      } while (v8 < v4);
      goto LABEL_12;
    }
    v8 = (unsigned int)v4 & 0xFFFFFFF8;
    v17 = v5 + 3;
    v9 = 3 * (v4 & 0xFFFFFFF8);
    v18 = (float*)v26;
    v19 = vdupq_n_s32(0x504624u);
    v20 = vdupq_n_s32(0x504614u);
    v21 = vdupq_n_s32(0x504634u);
    v22 = v8;
    do {
      {
        v23 = v17[-1];
        __asm__ volatile("" ::"w"(v23));
      }
      {
        v24 = *v17;
        __asm__ volatile("" ::"w"(v24));
      }
      v22 -= 8LL;
      v17 += 2;
      v27.val[2] = vaddq_s32(v23, v19);
      v27.val[1] = vaddq_s32(v23, v21);
      v27.val[0] = vaddq_s32(v23, v20);
      v28.val[2] = vaddq_s32(v24, v19);
      v28.val[1] = vaddq_s32(v24, v21);
      v28.val[0] = vaddq_s32(v24, v20);
      vst3q_f32(v18, v27);
      vst3q_f32(v18 + 12, v28);
      v18 += 24;
    } while (v22 != 0);
    if (v8 != v4) {
      goto LABEL_11;
    }
  }
LABEL_12:
  CudaDriverRoutine_98340(a1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  CudaDriverStub_10fdf0(),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v13 == 0 && *(_DWORD*)(v2 + 3732) != 0) {
    v14 = 2;
    v15 = 0;
    do {
      ++v15;
      *a2 = *((_QWORD*)&v25 + v14 - 2);
      a2[1] = 0;
      a2[2] = *((_QWORD*)&v25 + v14 - 1);
      a2[3] = 0;
      {
        v16 = *((_QWORD*)&v25 + v14);
        __asm__ volatile("" ::"r"(v16));
      }
      v14 += 3;
      a2[6] = v16;
      a2[7] = 0;
      a2 += 40;
    } while (v15 < *(unsigned int*)(v2 + 3732));
  }
}

__int64 nvidia_1e1540(__int64 a1, char a2)
{
  __int64* v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;

  {
    v3 = *(__int64**)(*(_QWORD*)(a1 + 200) + 88LL);
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 != nullptr && (v4 = *v3) != 0) {
    v18 = v4;
    v17 = 16;
    if (a2 != 0) {
      v5 = 1;
    }
    else {
      v5 = 2;
    }
    v19 = v5;
    result = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x118LL) +
                                    CudaDriverData_1422bb0))(&v17);
    if ((_DWORD)result != 0) {
      return CudaDriverRoutine_1e9390(result);
    }
  }
  else {
    if (*(_DWORD*)(a1 + 24) != 0) {
      if (a2 != 0) {
        v6 = 33864;
        v7 = 0;
        v8 = CudaDriverData_1422bb0;
        while (1) {
          {
            v9 = *(_QWORD*)(a1 + 8);
            __asm__ volatile("" ::"r"(v9));
          }
          v18 = 0;
          v19 = 1;
          v17 = 16;
          {
            v10 = *(_QWORD*)(v9 + v6);
            __asm__ volatile("" ::"r"(v10));
          }
          v19 = 1;
          {
            v18 = *(_QWORD*)(v10 + 32);
            __asm__ volatile("" ::"r"(v18));
          }
          result =
              (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x120LL) + v8))(&v17);
          if ((_DWORD)result != 0) {
            break;
          }
          ++v7;
          v6 += 34256;
          if (v7 >= *(unsigned int*)(a1 + 24)) {
            return 0;
          }
        }
      }
      else {
        v12 = 33864;
        v13 = 0;
        v14 = CudaDriverData_1422bb0;
        while (1) {
          {
            v15 = *(_QWORD*)(a1 + 8);
            __asm__ volatile("" ::"r"(v15));
          }
          v18 = 0;
          v19 = 1;
          v17 = 16;
          {
            v16 = *(_QWORD*)(v15 + v12);
            __asm__ volatile("" ::"r"(v16));
          }
          v19 = 2;
          {
            v18 = *(_QWORD*)(v16 + 32);
            __asm__ volatile("" ::"r"(v18));
          }
          result =
              (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x120LL) + v14))(&v17);
          if ((_DWORD)result != 0) {
            break;
          }
          ++v13;
          v12 += 34256;
          if (v13 >= *(unsigned int*)(a1 + 24)) {
            return 0;
          }
        }
      }
      return CudaDriverRoutine_1e9390(result);
    }
    return 0;
  }
  return result;
}

__int64 nvidia_1e20d0(_QWORD* a1, int a2)
{
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  int v8;

  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*a1 + 8LL) + 64LL) +
                                      19824LL) +
                           96LL) +
                28LL) != 1) {
    return 215;
  }
  v6 = 16;
  {
    v4 = **(_QWORD**)(a1[25] + 88LL);
    __asm__ volatile("" ::"r"(v4));
  }
  v8 = a2;
  v7 = v4;
  result = CudaDriverData_1440a20(&v6);
  if ((_DWORD)result != 0) {
    return CudaDriverRoutine_1e9390(result);
  }
  return result;
}

__int64 nvidia_1e2be0(_QWORD* a1, _DWORD* a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 (*v10)(int*);
  __int64 v11;
  __int64 result;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;

  v17 = 0;
  v16 = 0;
  v18 = 0;
  v14 = 40;
  {
    v4 = *(_QWORD*)(*(_QWORD*)(*a1 + 8LL) + 64LL);
    __asm__ volatile("" ::"r"(v4));
  }
  {
    v5 = *(_DWORD*)(v4 + 3732);
    __asm__ volatile("" ::"r"(v5));
  }
  CudaDriverRoutine_9aa30(v4);
  {
    v6 = a1[4227];
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = v5 - 1;
  {
    v15 = **(_QWORD**)(*(_QWORD*)(v6 + 200) + 88LL);
    __asm__ volatile("" ::"r"(v15));
  }
  if (v5 < 1) {
    return 0;
  }
  v8 = 0;
  v9 = CudaDriverData_1422bb0;
  while (1) {
    v10 = *(__int64 (**)(int*))((char*)((_UNKNOWN*)0xE0LL) + v9);
    v19 = v8;
    v11 = v10(&v14);
    if ((_DWORD)v11 != 0) {
      result = CudaDriverRoutine_1e9390(v11);
      if ((_DWORD)result != 0) {
        break;
      }
    }
    result = (*(__int64 (**)(_QWORD, _QWORD, _DWORD*, _QWORD, _QWORD))(
        v4 + 19728))((unsigned int)v16, HIDWORD(v16), a2, 0, 0);
    if ((_DWORD)result != 0) {
      break;
    }
    if (*(_DWORD*)a2 != 719 || v7 == v8++) {
      return 0;
    }
  }
  return result;
}

__int64 nvidia_1e4360(__int64 a1, _DWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  int v7;
  struct {
    char gap0_[4];
    int v9;
    __int64 v10;
    __int128 v11;
  } v9_;

  if (a2 != nullptr) {
    {
      v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) + 68LL) /
           0x3E8uLL;
      __asm__ volatile("" ::"r"(v2));
    }
    *(_DWORD*)a2 = v2;
    if (*(_QWORD*)(a1 + 3136) == 310) {
      LODWORD(v2) = 1290000;
    }
    *(_DWORD*)a2 = v2;
    {
      v3 = *(_QWORD*)(a1 + 19824);
      __asm__ volatile("" ::"r"(v3));
    }
    if (*(_BYTE*)(*(_QWORD*)(v3 + 96) + 76LL) == 1) {
      {
        v4 = *(_QWORD*)(v3 + 88);
        __asm__ volatile("" ::"r"(v4));
      }
      v9_.v9 = 28;
      v9_.v10 = v4;
      v9_.v11 = CudaDriverData_1115cb0;
      if ((*(unsigned int (**)(int*))((char*)(*(void*(*)[1])0x28LL) +
                                      CudaDriverData_1422bb0))(&v9_.v9) != 0) {
        a2[1] = 12750;
      }
      else {
        a2[1] = *((_QWORD*)&v9_.v11 + 1) / 0x3E8uLL;
      }
      return 0;
    }
    {
      v6 = *(_QWORD*)(a1 + 3136);
      __asm__ volatile("" ::"r"(v6));
    }
    if (v6 > 346) {
      if (v6 == 347) {
        v7 = 1500000;
        goto LABEL_18;
      }
      if (v6 == 356) {
        v7 = 1440000;
        goto LABEL_18;
      }
    }
    else {
      if (v6 == 315) {
        v7 = 1600000;
        goto LABEL_18;
      }
      if (v6 == 320) {
        v7 = 877000;
      LABEL_18:
        a2[1] = v7;
        return 0;
      }
    }
    v7 = 12750;
    goto LABEL_18;
  }
  return 0;
}

__int64 nvidia_1e5400(__int64 a1, __int64 a2, int* a3, int a4)
{
  void* v8;
  int v9;
  _OWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned int v19;
  __int64 v20;
  _QWORD* v21;
  struct {
    char gap8_[4];
    int v22;
    __int64 v23;
    __int64* v24;
  } v22_;
  struct {
    __int64 v25;
    char gap40_[4];
    int v26;
  } v25_;

  v25_.v26 = 0;
  v22_.v23 = 0;
  v22_.v24 = nullptr;
  v22_.v22 = 20;
  v8 = CudaDriverData_1422118;
  v9 = CudaDriverRoutine_1a1320(
      *(_QWORD*)&(*(_BYTE(*)[8])0x1588LL)[(_QWORD)CudaDriverData_1422118]);
  *a3 = v9;
  if (v9 == 0) {
    return 2;
  }
  v10 = (_OWORD*)CudaDriverStub_12e330(32);
  v12 = (__int64)v10;
  if (v10 != nullptr) {
    *v10 = (__typeof__(*v10)){0};
    v10[1] = (__typeof__(v10[1])){0};
    *((_DWORD*)v10 + 4) = *a3;
    if (a4 == 1) {
      v22_.v23 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 64LL);
      goto LABEL_16;
    }
    if (a4 == 2) {
      {
        v13 = *(_QWORD*)(a2 + 72);
        __asm__ volatile("" ::"r"(v13));
      }
      {
        v14 = *(unsigned int*)(v13 + 34312);
        __asm__ volatile("" ::"r"(v14));
      }
      if ((_DWORD)v14 != 0) {
        v15 = (__int64*)(v13 + 48);
        while (1) {
          {
            v17 = *v15++;
            __asm__ volatile("" ::"r"(v17));
          }
          v16 = v17;
          {
            v11 = *(unsigned int*)(v17 + 32);
            __asm__ volatile("" ::"r"(v11));
          }
          if ((_DWORD)v11 == 0) {
            break;
          }
          if (--v14 == 0) {
            goto LABEL_21;
          }
        }
        nvidia_5bbb0(v16);
        v22_.v23 = CudaDriverRoutine_1e2ce0(a2);
      LABEL_16:
        v22_.v24 = &v25_.v25;
        v19 = CudaDriverData_14408e0(&v22_.v22);
        if (v19 != 0) {
          goto LABEL_17;
        }
        v11 = v25_.v25;
      }
    LABEL_21:
      *(_QWORD*)(v12 + 24) = v11;
      *(_QWORD*)(v12 + 8) =
          *(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8) +
                     80LL);
      *(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8) + 80LL) =
          v12;
      {
        v20 = *(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8) +
                         80LL);
        __asm__ volatile("" ::"r"(v20));
      }
      {
        v21 = *(_QWORD**)(v20 + 8);
        __asm__ volatile("" ::"r"(v21));
      }
      if (v21 != nullptr) {
        *v21 = v20;
      }
      return 0;
    }
    v19 = 31;
  }
  else {
    v19 = 81;
  }
LABEL_17:
  CudaDriverRoutine_1a1670(*(_QWORD*)&(*(_BYTE(*)[8])0x1588LL)[(_QWORD)v8],
                           *a3);
  *a3 = 0;
  if (v12 != 0) {
    CudaDriverRoutine_12e340(v12);
  }
  return CudaDriverRoutine_b4790(v19);
}

__int64 nvidia_1e6d60(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;

  v14 = 0;
  v13 = 0;
  v11 = 32;
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 19824LL) + 96LL) +
                260LL) == 0) {
    return 801;
  }
  v12 = -1;
  if (a2 >= 2) {
    v3 = 1;
  }
  else {
    v3 = 2;
  }
  v15 = v3;
  {
    v4 = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL);
    __asm__ volatile("" ::"r"(v4));
  }
  if (*(_DWORD*)(v4 + 24) == 0) {
    return 0;
  }
  v5 = 0;
  v6 = 33824;
  v7 = CudaDriverData_1422bb0;
  while (1) {
    {
      v8 = *(_QWORD*)(v4 + 8);
      __asm__ volatile("" ::"r"(v8));
    }
    {
      v13 = *(_QWORD*)(*(_QWORD*)(v8 + v6 + 40) + 32LL);
      __asm__ volatile("" ::"r"(v13));
    }
    v14 = v13;
    v9 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x1F0LL) + v7))(&v11);
    if ((_DWORD)v9 != 0) {
      break;
    }
    if (**(_QWORD**)(*(_QWORD*)(v8 + v6) + 88LL) == 0) {
      ++v5;
      v6 += 34256;
      {
        v4 = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL);
        __asm__ volatile("" ::"r"(v4));
      }
      if (v5 < *(unsigned int*)(v4 + 24)) {
        continue;
      }
    }
    return 0;
  }
  return CudaDriverRoutine_1e9390(v9);
}

__int64 nvidia_1e75f0(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 result;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;

  v9 = a3;
  v5 = 24;
  {
    v7 = *(_DWORD*)(a4 + 20);
    __asm__ volatile("" ::"r"(v7));
  }
  v8 = a2;
  {
    v6 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 80LL);
    __asm__ volatile("" ::"r"(v6));
  }
  result = CudaDriverData_1440938(&v5);
  if ((_DWORD)result != 0) {
    return CudaDriverRoutine_1e9390(result);
  }
  return result;
}

__int64 nvidia_1ec000(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  char v3;
  __int64 v4;
  __int64 result;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  struct {
    __int64 v15;
    char gap8_[4];
    int v16;
    __int64 v17;
  } v15_;
  _QWORD v18[2];
  int v19;
  __int64 v20;
  unsigned int v21;
  int* v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  int v26;
  __int64 v27;
  unsigned __int64 v28;

  {
    v1 = *(_QWORD*)(a1 + 64);
    __asm__ volatile("" ::"r"(v1));
  }
  {
    v2 = *(_QWORD*)(v1 + 19824);
    __asm__ volatile("" ::"r"(v2));
  }
  if (*(_BYTE*)(*(_QWORD*)(v2 + 96) + 263LL) != 0) {
    v21 = 0;
    {
      v3 = *(_BYTE*)(v1 + 16841);
      __asm__ volatile("" ::"r"(v3));
    }
    v19 = 16;
    LOBYTE(v21) = 1;
    if ((v3 & 1) != 0) {
      BYTE1(v21) = 1;
    }
    {
      v4 = *(_QWORD*)(v2 + 88);
      __asm__ volatile("" ::"r"(v4));
    }
    BYTE2(v21) = 1;
    v20 = v4;
    result = CudaDriverData_1440950(&v19);
    if ((_DWORD)result != 0) {
      return CudaDriverRoutine_1e9390(result);
    }
  }
  else {
    memset((char*)v18 + 4, 0, 12);
    v15_.v17 = 0;
    v19 = 48;
    LODWORD(v18[0]) = 16;
    v15_.v16 = 12;
    CudaDriverStub_107f90(*(_QWORD*)(*(_QWORD*)(a1 + 16128) + 8LL) + 24LL);
    {
      v7 = *(_QWORD**)(*(_QWORD*)(a1 + 16128) + 8LL);
      __asm__ volatile("" ::"r"(v7));
    }
    {
      v8 = v7[2];
      __asm__ volatile("" ::"r"(v8));
    }
    v9 = CudaDriverStub_1db800(*v7);
    {
      v10 = *(_QWORD*)(a1 + 16128);
      __asm__ volatile("" ::"r"(v10));
    }
    v27 = v9;
    v26 = 24;
    {
      v11 = *(unsigned int*)(*(_QWORD*)(v10 + 8) + 8LL);
      __asm__ volatile("" ::"r"(v11));
    }
    {
      v20 = *(_QWORD*)(*(_QWORD*)(v8 + 33864) + 32LL);
      __asm__ volatile("" ::"r"(v20));
    }
    v28 = v11 >> 2;
    v21 = 0x80000000;
    v22 = &v26;
    v23 = 1;
    v24 = 0;
    v25 = &v15_.v15;
    v12 = CudaDriverData_1422bb0;
    v13 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x298LL) +
                                 CudaDriverData_1422bb0))(&v19);
    if ((_DWORD)v13 != 0 ||
        (v18[1] = v15_.v15, HIDWORD(v18[0]) = -1,
         (_DWORD)(v13 = (*(__int64 (**)(_QWORD*))((char*)((_UNKNOWN*)0x98LL) +
                                                  v12))(v18)) != 0)) {
      v14 = CudaDriverRoutine_1e9390(v13);
    }
    else {
      v15_.v17 = v15_.v15;
      (*(void (**)(int*))((char*)((_UNKNOWN*)0xF8LL) + v12))(&v15_.v16);
      v14 = 0;
    }
    CudaDriverStub_108070(*(_QWORD*)(*(_QWORD*)(a1 + 16128) + 8LL) + 24LL);
    return v14;
  }
  return result;
}

__int64 nvidia_1eca90(__int64 a1, __int64* a2, _DWORD* a3)
{
  __int64 v3;
  __int64 result;
  int v5;
  unsigned int v6;
  int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int128 v14;
  int v15;
  __int64 v16;
  int v17;
  _BYTE v18[12];
  int v19;

  v14 = (__typeof__(v14)){0};
  v11 = 32;
  {
    v3 = *a2;
    __asm__ volatile("" ::"r"(v3));
  }
  if ((*a2 & 0x7E00) == 0x1800) {
    *(_QWORD*)((char*)&v14 + 4) = a3;
    v13 = 3;
    {
      v12 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 88LL);
      __asm__ volatile("" ::"r"(v12));
    }
    result = CudaDriverData_14409c0(&v11);
    if ((_DWORD)result != 0) {
      return CudaDriverRoutine_1e9390(result);
    }
  }
  else {
    if ((v3 & 0xF800000000LL) == 0x800000000LL) {
      {
        v5 = *((_DWORD*)a2 + 56);
        __asm__ volatile("" ::"r"(v5));
      }
      if (v5 != 0) {
        *(_DWORD*)a3 = v5;
        return 0;
      }
    }
    if ((v3 & 0x18000) == 0x8000 &&
        (v6 = ((unsigned int)v3 >> 18) & 0xF) <= 5) {
      v7 = CudaDriverData_135e0b4[v6];
      __asm__ volatile("" ::"r"(v7));
    }
    else {
      v7 = 0;
    }
    {
      v8 = a2[1];
      __asm__ volatile("" ::"r"(v8));
    }
    v9 = ((unsigned int)v3 >> 15) & 3;
    v17 = 0;
    *(_DWORD*)&v18[8] = 0;
    v19 = 0;
    v15 = 32;
    *(_QWORD*)v18 = (v8 & 0x600) == 512;
    v18[1] = (v8 & 0x600) == 512;
    if (v9 != 0) {
      if (v9 != 1) {
        return 801;
      }
      v17 = 1;
      v19 = v7;
    }
    else {
      v17 = 2;
    }
    {
      v10 = *(_QWORD*)(a1 + 19824);
      __asm__ volatile("" ::"r"(v10));
    }
    *(_QWORD*)&v18[4] = a3;
    {
      v16 = *(_QWORD*)(v10 + 88);
      __asm__ volatile("" ::"r"(v16));
    }
    result = CudaDriverData_14409c0(&v15);
    if ((_DWORD)result != 0) {
      return CudaDriverRoutine_1e9390(result);
    }
  }
  return result;
}

__int64 nvidia_1f8580(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, unsigned int a7)
{
  __int64 v8;
  __int64* v9;
  _DWORD* v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  unsigned __int64 v22;
  int v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned __int64 v27;
  int v28;
  int v29;
  _DWORD* v30;
  int v31;
  int v32;
  int v33;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  char v53;
  char v54;
  __int64 v55;
  unsigned int v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  int v62;
  __int64 v63;
  char v64;
  char v65;
  __int64 v66;
  unsigned int v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  char v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  unsigned int v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  unsigned int v105;
  unsigned int v106;
  unsigned int v107;
  unsigned __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  unsigned int v112;
  unsigned int v113;
  unsigned int v114;
  __int64 v115;
  __int64* v116;
  __int64 v117;
  unsigned int v118;
  unsigned int v119;
  unsigned int v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  unsigned int v124;
  __int64 v125;
  unsigned int v126;
  unsigned int v127;
  unsigned int v128;
  unsigned int v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  unsigned int v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  char v136;
  char v137;
  __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  __int64 v143;
  char v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  char v152;
  __int64 v153;
  unsigned __int64 v154;
  __int64 v155;
  unsigned __int64 v156;
  unsigned __int64 v158;
  unsigned __int64 v159;
  __int64 v161;
  unsigned __int64 v162;
  int v163;
  __int64 v164;
  __int64 v165;
  int v166;
  __int64 v168;
  __int64 v169;
  struct {
    int v171;
    char gap252_[4];
    __int64 v172;
    char gap264_[160];
    unsigned int v173;
    char gap428_[4];
    unsigned __int64 v174;
    unsigned __int64 v175;
    int v176;
    char gap452_[4];
    __int64 v177;
    char gap464_[160];
    unsigned int v178;
    char gap628_[4];
    unsigned __int64 v179;
    unsigned __int64 v180;
    unsigned __int64 v181;
    unsigned __int64 v182;
    unsigned __int64 v183;
  } v171_;
  struct {
    int v184[44];
    unsigned __int64 v185;
    char gap904_[192];
    __int64 v186;
    char gap1104_[16];
    unsigned __int64 v187;
  } v184_;

  v8 = a3;
  v9 = a1;
  if (*(_DWORD*)(a6 + 404) == 0 &&
      (*(_DWORD*)a6 == 0 ||
       (unsigned __int64)CudaDriverRoutine_f8f00((_DWORD*)a6) >> 31 == 0)) {
    v10 = (_DWORD*)(a6 + 200);
    if (*(_DWORD*)(a6 + 200) == 0) {
      v11 = false;
    LABEL_40:
      memcpy_plt((__int64)&v171_.v171, a6, 0x1D8u);
      {
        v35 = *(_DWORD*)a6;
        __asm__ volatile("" ::"r"(v35));
      }
      {
        v36 = *(_QWORD*)(a2 + 64);
        __asm__ volatile("" ::"r"(v36));
      }
      if (!CudaDriverRoutine_9ac20(v36) && !CudaDriverRoutine_9ac50(v36) ||
          *(_BYTE*)(a6 + 459) != 0) {
        v11 = true;
        if (*(_DWORD*)a6 != 0) {
          goto LABEL_44;
        }
      LABEL_60:
        {
          v49 = *(_QWORD*)(a6 + 8);
          __asm__ volatile("" ::"r"(v49));
        }
        {
          v50 = *(_DWORD*)(v49 + 44);
          __asm__ volatile("" ::"r"(v50));
        }
        {
          v51 = *(_DWORD*)(v49 + 48);
          __asm__ volatile("" ::"r"(v51));
        }
        {
          v52 = *(unsigned int*)(v49 + 52);
          __asm__ volatile("" ::"r"(v52));
        }
        {
          v53 = v50 + *(int*)(v49 + 40);
          __asm__ volatile("" ::"r"(v53));
        }
        LOBYTE(v50) = v50 + 3;
        v40 = 1LL << v51;
        v54 = v53 + v51;
        v42 = 1LL << v50;
        v55 = 512LL << v54;
        {
          v56 = *(_DWORD*)(v49 + 56);
          __asm__ volatile("" ::"r"(v56));
        }
        v57 = (0x800000uLL >> v54) / (unsigned int)v52;
        v58 = v55 * v52;
        v41 = v57 << v50;
        if ((unsigned int)v57 < v56) {
          v59 = 1;
        }
        else {
          v59 = (unsigned int)v57 / v56;
        }
        v143 = v59 << v51;
        if (CudaDriverRoutine_86fe0(v49)) {
          {
            v139 = *(_QWORD*)(v49 + 136);
            __asm__ volatile("" ::"r"(v139));
          }
          v151 = v58;
          if (*(_DWORD*)v10 != 0) {
            goto LABEL_52;
          }
        }
        else {
          {
            v139 = v58 * *(unsigned int*)(v49 + 56);
            __asm__ volatile("" ::"r"(v139));
          }
          v151 = v58;
          if (*(_DWORD*)v10 != 0) {
            goto LABEL_52;
          }
        }
        goto LABEL_65;
      }
      {
        v39 = *(_QWORD*)(a6 + 400);
        __asm__ volatile("" ::"r"(v39));
      }
      if (v35 != 0 ||
          (unsigned __int64)(v39 + *(_QWORD*)(a6 + 176)) <= 0x10000) {
        if ((unsigned __int64)(*(_QWORD*)(a6 + 376) + v39) <= 0x10000) {
          v11 = true;
        }
        if (*(_DWORD*)a6 == 0) {
          goto LABEL_60;
        }
      }
      else {
        v11 = false;
        if (*(_DWORD*)a6 == 0) {
          goto LABEL_60;
        }
      }
    LABEL_44:
      v37 = CudaDriverRoutine_f8f00((_DWORD*)a6);
      if (CudaDriverRoutine_f8ed0((_DWORD*)a6) != 0) {
        v38 = CudaDriverRoutine_f8ed0((_DWORD*)a6);
      }
      else {
        v38 = 1;
      }
      v40 = 1;
      v41 = -1;
      v42 = 1;
      v139 = CudaDriverRoutine_f8f00((_DWORD*)a6) * v38;
      v143 = -1;
      v151 = v37;
      if (*(_DWORD*)v10 != 0) {
      LABEL_52:
        v150 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200));
        if (CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200)) != 0) {
          v43 = CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200));
        }
        else {
          v43 = 1;
        }
        v44 = 1;
        v45 = -1;
        v46 = 1;
        v138 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) * v43;
        v142 = -1;
        v47 = a2;
        {
          v48 = *(_QWORD*)(a6 + 416);
          __asm__ volatile("" ::"r"(v48));
        }
        if (v48 == 0) {
          return 0;
        }
        goto LABEL_74;
      }
    LABEL_65:
      {
        v60 = *(_QWORD*)(a6 + 208);
        __asm__ volatile("" ::"r"(v60));
      }
      {
        v61 = *(_DWORD*)(v60 + 44);
        __asm__ volatile("" ::"r"(v61));
      }
      {
        v62 = *(_DWORD*)(v60 + 48);
        __asm__ volatile("" ::"r"(v62));
      }
      {
        v63 = *(unsigned int*)(v60 + 52);
        __asm__ volatile("" ::"r"(v63));
      }
      {
        v64 = v61 + *(int*)(v60 + 40);
        __asm__ volatile("" ::"r"(v64));
      }
      LOBYTE(v61) = v61 + 3;
      v44 = 1LL << v62;
      v65 = v64 + v62;
      v46 = 1LL << v61;
      v66 = 512LL << v65;
      {
        v67 = *(_DWORD*)(v60 + 56);
        __asm__ volatile("" ::"r"(v67));
      }
      v68 = (0x800000uLL >> v65) / (unsigned int)v63;
      v69 = v66 * v63;
      v45 = v68 << v61;
      if ((unsigned int)v68 < v67) {
        v70 = 1;
      }
      else {
        v70 = (unsigned int)v68 / v67;
      }
      v142 = v70 << v62;
      v150 = v66 * v63;
      if (CudaDriverRoutine_86fe0(v60)) {
        {
          v138 = *(_QWORD*)(v60 + 136);
          __asm__ volatile("" ::"r"(v138));
        }
        v47 = a2;
        {
          v48 = *(_QWORD*)(a6 + 416);
          __asm__ volatile("" ::"r"(v48));
        }
        if (v48 == 0) {
          return 0;
        }
      }
      else {
        {
          v138 = v69 * *(unsigned int*)(v60 + 56);
          __asm__ volatile("" ::"r"(v138));
        }
        v47 = a2;
        {
          v48 = *(_QWORD*)(a6 + 416);
          __asm__ volatile("" ::"r"(v48));
        }
        if (v48 == 0) {
          return 0;
        }
      }
    LABEL_74:
      {
        v71 = *(_QWORD*)(a6 + 408);
        __asm__ volatile("" ::"r"(v71));
      }
      if (v71 == 0) {
        return 0;
      }
      v72 = v42 - 1;
      v73 = v46 - 1;
      v74 = 0;
      v159 = v42 - 1;
      v156 = v46 - 1;
      v136 = __clz((unsigned long long)(__rbit64(v44)));
      v137 = __clz((unsigned long long)(__rbit64(v40)));
      v140 = v44 - 1;
      v141 = v40 - 1;
      v75 = __clz((unsigned long long)(__rbit64(v42)));
      v152 = __clz((unsigned long long)(__rbit64(v46)));
      v153 = v41;
      if (v11) {
        do {
          {
            v76 = *(_QWORD*)(a6 + 192) + v74;
            __asm__ volatile("" ::"r"(v76));
          }
          {
            v77 = *(_QWORD*)(a6 + 392) + v74;
            __asm__ volatile("" ::"r"(v77));
          }
          v171_.v175 = v76 & v141;
          v78 = v143 - (v76 & v141);
          v171_.v180 = v77 & v140;
          if (v78 >= v142 - (v77 & v140)) {
            v78 = v142 - (v77 & v140);
          }
          if (v48 - v74 < v78) {
            v78 = v48 - v74;
          }
          v171_.v183 = v78;
          if (v71 != 0) {
            v79 = 0;
            v169 = a5 + (v76 >> v137) * v139;
            v162 = v74;
            v165 = a4 + (v77 >> v136) * v138;
            do {
              {
                v80 = *(_QWORD*)(a6 + 184) + v79;
                __asm__ volatile("" ::"r"(v80));
              }
              {
                v81 = *(_QWORD*)(a6 + 384) + v79;
                __asm__ volatile("" ::"r"(v81));
              }
              v82 = v169 + (v80 >> v75) * v151;
              v171_.v174 = v80 & v72;
              v83 = v165 + (v81 >> v152) * v150;
              v84 = v81 & v73;
              v85 = v71 - v79;
              v86 = v47;
              v171_.v179 = v84;
              v87 = v45 - v84;
              v88 = v41 - (v80 & v72);
              if (v88 >= v87) {
                v88 = v87;
              }
              if (v85 < v88) {
                v88 = v85;
              }
              v171_.v182 = v88;
              nvidia_1f9080(a1, v47, a3, v83, v82, &v171_.v171, a7);
              v47 = v86;
              v73 = v46 - 1;
              v72 = v42 - 1;
              v79 += v171_.v182;
              {
                v71 = *(_QWORD*)(a6 + 408);
                __asm__ volatile("" ::"r"(v71));
              }
            } while (v79 < v71);
            v78 = v171_.v183;
            {
              v48 = *(_QWORD*)(a6 + 416);
              __asm__ volatile("" ::"r"(v48));
            }
            v74 = v162;
          }
          v74 += v78;
        } while (v74 < v48);
        return 0;
      }
      {
        v89 = *(_QWORD*)(a6 + 408);
        __asm__ volatile("" ::"r"(v89));
      }
      v146 = v75;
      v147 = v45;
      while (1) {
        {
          v91 = *(_QWORD*)(a6 + 192) + v74;
          __asm__ volatile("" ::"r"(v91));
        }
        {
          v92 = *(_QWORD*)(a6 + 392) + v74;
          __asm__ volatile("" ::"r"(v92));
        }
        v171_.v175 = v91 & v141;
        v90 = v143 - (v91 & v141);
        v171_.v180 = v92 & v140;
        if (v90 >= v142 - (v92 & v140)) {
          v90 = v142 - (v92 & v140);
        }
        if (v48 - v74 < v90) {
          v90 = v48 - v74;
        }
        v171_.v183 = v90;
        if (v89 != 0) {
          break;
        }
      LABEL_92:
        v74 += v90;
        if (v74 >= v48) {
          return 0;
        }
      }
      v134 = v90;
      v135 = v74;
      v93 = 0;
      v94 = v171_.v181;
      v95 = a3;
      v96 = v171_.v181;
      v149 = a5 + (v91 >> v137) * v139;
      v148 = a4 + (v92 >> v136) * v138;
      v166 = v171_.v171;
      v163 = v171_.v176;
      while (1) {
        v97 = v89 - v93;
        {
          v98 = *(_QWORD*)(a6 + 184) + v93;
          __asm__ volatile("" ::"r"(v98));
        }
        {
          v99 = *(_QWORD*)(a6 + 384) + v93;
          __asm__ volatile("" ::"r"(v99));
        }
        v171_.v174 = v98 & v72;
        v100 = v41 - (v98 & v72);
        v171_.v179 = v99 & v73;
        if (v100 >= v45 - (v99 & v73)) {
          v100 = v45 - (v99 & v73);
        }
        if (v97 < v100) {
          v100 = v97;
        }
        v154 = v100;
        v155 = v93;
        v171_.v182 = v100;
        memcpy_plt((__int64)v184_.v184, (__int64)&v171_.v171, 0x1D8u);
        if (v96 != 0) {
          break;
        }
      LABEL_100:
        v73 = v156;
        v89 = v71;
        v93 = v154 + v155;
        v72 = v159;
        if (v154 + v155 >= v71) {
          {
            v48 = *(_QWORD*)(a6 + 416);
            __asm__ volatile("" ::"r"(v48));
          }
          v90 = v134;
          v74 = v135;
          v89 = v71;
          goto LABEL_92;
        }
      }
      v101 = v96;
      v102 = v149 + (v98 >> v75) * v151;
      v103 = v102;
      if (v166 == 0) {
        v104 = v171_.v172;
        v105 = v171_.v173;
        v106 = CudaDriverRoutine_8aae0(v171_.v172);
        v107 = v105 / v106 * v106;
        v108 = v105 % v106;
        v103 = CudaDriverRoutine_8ab20(v104, v102,
                                       v107 / *(_DWORD*)(v104 + 108), 0);
        v184_.v185 = v108;
        if ((unsigned int)v96 >= 0x10000 - (int)v108) {
          v101 = 0x10000 - v108;
        }
        else {
          v101 = v96;
        }
      }
      v109 = v148 + (v99 >> v152) * v150;
      if (v163 != 0) {
        v110 = v148 + (v99 >> v152) * v150;
      }
      else {
        v111 = v171_.v177;
        v112 = v171_.v178;
        v113 = CudaDriverRoutine_8aae0(v171_.v177);
        v114 = v112 / v113 * v113;
        v115 = v112 % v113;
        v110 = CudaDriverRoutine_8ab20(v111, v109,
                                       v114 / *(_DWORD*)(v111 + 108), 0);
        v184_.v186 = v115;
        if ((unsigned int)v96 >= 0x10000 - (int)v115) {
          LODWORD(v96) = 0x10000 - v115;
        }
      }
      v116 = a1;
      if (v101 >= (unsigned int)v96) {
        v96 = (unsigned int)v96;
      }
      else {
        v96 = v101;
      }
      v184_.v187 = v96;
      nvidia_1f9080(a1, a2, v95, v110, v103, v184_.v184, a7);
      while (1) {
        if (v94 <= v96) {
          {
            v71 = *(_QWORD*)(a6 + 408);
            __asm__ volatile("" ::"r"(v71));
          }
          v41 = v153;
          v75 = v146;
          v45 = v147;
          v96 = v94;
          goto LABEL_100;
        }
        if ((_DWORD)v96 != 0) {
          CudaDriverStub_5ab60(v95, v116);
        }
        v124 = v94 - v96;
        if (v166 != 0) {
          v122 = v96 + v102;
          LODWORD(v121) = v94 - v96;
          if (v163 != 0) {
            goto LABEL_122;
          }
        }
        else {
          v117 = v171_.v172;
          v118 = v96 + v171_.v173;
          v119 = CudaDriverRoutine_8aae0(v171_.v172);
          v120 = v118 / v119 * v119;
          v121 = v118 % v119;
          v122 = CudaDriverRoutine_8ab20(v117, v102,
                                         v120 / *(_DWORD*)(v117 + 108), 0);
          v184_.v185 = v121;
          if (v124 >= 0x10000 - (int)v121) {
            LODWORD(v121) = 0x10000 - v121;
          }
          else {
            LODWORD(v121) = v94 - v96;
          }
          if (v163 != 0) {
          LABEL_122:
            v123 = v96 + v109;
            goto LABEL_123;
          }
        }
        v125 = v171_.v177;
        v126 = v96 + v171_.v178;
        v127 = CudaDriverRoutine_8aae0(v171_.v177);
        {
          v128 = *(_DWORD*)(v125 + 108);
          __asm__ volatile("" ::"r"(v128));
        }
        v129 = v126 / v127 * v127;
        v130 = v125;
        v116 = a1;
        v131 = v126 - v129;
        v132 = CudaDriverRoutine_8ab20(v130, v109, v129 / v128, 0);
        v184_.v186 = v131;
        v123 = v132;
        v133 = 0x10000 - v131;
        v95 = a3;
        if (v124 >= v133) {
          v124 = v133;
        }
      LABEL_123:
        if ((unsigned int)v121 >= v124) {
          v121 = v124;
        }
        else {
          v121 = (unsigned int)v121;
        }
        v184_.v187 = v121;
        nvidia_1f9080(v116, a2, v95, v123, v122, v184_.v184, a7);
        v96 = (unsigned int)(v121 + v96);
      }
    }
    if ((unsigned __int64)CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) >> 31 ==
        0) {
      {
        v11 = *(_DWORD*)v10 != 0;
        __asm__ volatile("" ::"r"(v11));
      }
      goto LABEL_40;
    }
  }
  {
    v12 = *v9;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v13 = *(_QWORD*)(a6 + 416);
    __asm__ volatile("" ::"r"(v13));
  }
  *(_QWORD*)v184_.v184 = *v9;
  if (v13 == 0) {
    goto LABEL_37;
  }
  v158 = 0;
  do {
    v14 = CudaDriverRoutine_f8f00((_DWORD*)a6);
    v15 = CudaDriverRoutine_f8ed0((_DWORD*)a6);
    v16 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200));
    v17 = CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200));
    if (*(_QWORD*)(a6 + 408) != 0) {
      v18 = 0;
      v19 = a4 + v16 * v158 * v17;
      v20 = a5 + v14 * v158 * v15;
      do {
        v168 = v18;
        if ((v18 | v158) != 0) {
          CudaDriverStub_5ab60(v8, v184_.v184);
        }
        {
          v21 = *(_DWORD**)v184_.v184;
          __asm__ volatile("" ::"r"(v21));
        }
        {
          v22 = *(_QWORD*)(a6 + 400);
          __asm__ volatile("" ::"r"(v22));
        }
        {
          v23 = *(unsigned __int8*)(a6 + 459);
          __asm__ volatile("" ::"r"(v23));
        }
        v161 = v20;
        v164 = v19;
        v24 = v22;
        do {
          if (v24 >= 0xFFFFFFFF) {
            v25 = 0xFFFFFFFFLL;
          }
          else {
            v25 = v24;
          }
          if (v23 != 0) {
            v26 = (unsigned int)v25 /
                  (*(unsigned __int8*)(a6 + 456) *
                   (unsigned int)*(unsigned __int8*)(a6 + 458));
            __asm__ volatile("" ::"r"(v26));
          }
          else {
            v26 = v25;
          }
          v21[6] = v26;
          *(_DWORD*)v21 = 537166080;
          v21[1] = HIDWORD(v20) & 0x1FFFF;
          v21[2] = v20;
          v21[3] = HIDWORD(v19) & 0x1FFFF;
          v21[4] = v19;
          v21[5] = 536969478;
          v27 = HIDWORD(v24);
          if (a7 != 0 || v27 != 0 ||
              (*((_BYTE*)&CudaDriverRoutine_4198 +
                 (_QWORD)CudaDriverData_1422118) &
               1) != 0) {
            v28 = 0;
            if (v23 == 0) {
            LABEL_27:
              v29 = 0;
              v30 = v21 + 7;
              goto LABEL_30;
            }
          }
          else {
            v28 = 4;
            if (v23 == 0) {
              goto LABEL_27;
            }
          }
          v31 = *(_BYTE*)(a6 + 424) & 7 |
                (unsigned __int8)(16 * (*(_BYTE*)(a6 + 428) & 7)) |
                ((*(_DWORD*)(a6 + 432) & 7) << 8) |
                ((*(_DWORD*)(a6 + 436) & 7) << 12) |
                ((*(unsigned __int8*)(a6 + 458) << 16) - 0x10000) & 0x30000 |
                ((*(unsigned __int8*)(a6 + 456) << 20) - 0x100000) & 0x300000 |
                ((*(unsigned __int8*)(a6 + 457) << 24) - 0x1000000) & 0x3000000;
          v21[7] = 537100736;
          v21[8] = *(_DWORD*)(a6 + 448);
          v21[9] = *(_DWORD*)(a6 + 452);
          v21[10] = v31;
          v30 = v21 + 11;
          v29 = 1024;
        LABEL_30:
          v21 = v30 + 2;
          v32 = v28 | v29;
          if (v24 == v22) {
            v33 = 386;
          }
          else {
            v33 = 385;
          }
          *(_DWORD*)v30 = 536969408;
          v30[1] = v32 | v33;
          if (v27 == 0 &&
              (unsigned __int8)cuda_driver_misc_helpers_4bb0(a7) != 0) {
            v21 = (_DWORD*)CudaDriverRoutine_1f5570((__int64)v21, a7);
          }
          v19 += v25;
          v20 += v25;
          v24 -= v25;
        } while (v24 != 0);
        *(_QWORD*)v184_.v184 = v21;
        v20 = CudaDriverRoutine_f8f00((_DWORD*)a6) + v161;
        v19 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) + v164;
        v8 = a3;
        v18 = v168 + 1;
      } while ((unsigned __int64)(v168 + 1) < *(_QWORD*)(a6 + 408));
    }
    ++v158;
  } while (v158 < *(_QWORD*)(a6 + 416));
  {
    v12 = *(_QWORD*)v184_.v184;
    __asm__ volatile("" ::"r"(v12));
  }
  v9 = a1;
LABEL_37:
  *v9 = v12;
  return 0;
}

__int64 nvidia_1f9080(__int64* a1, __int64 a2, __int64 a3, unsigned __int64 a4,
                      unsigned __int64 a5, int* a6, unsigned int a7)
{
  _DWORD* v7;
  int v8;
  int v9;
  __int64 v14;
  int* v15;
  __int64 v16;
  unsigned int v17;
  _DWORD* v18;
  __int64 v19;
  __int64 result;
  _DWORD* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  _DWORD* v26;
  unsigned int v27;
  int v28;
  int v29;
  _BOOL4 v30;
  int v31;
  _DWORD* v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  int v43;
  unsigned int v44;
  __int64 v45;
  _DWORD* v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int v54;
  int v55;
  int v56;
  int v57;
  unsigned __int64 v58;
  unsigned int v59;
  __int64 v60;
  _DWORD* v61;
  _BOOL4 v62;
  _BOOL4 v63;
  _DWORD* v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned int v67;
  __int64 v68;
  _DWORD* v69;
  __int64 v70;
  _DWORD* v71;
  __int64 v72;
  unsigned __int64 v73;
  _BOOL4 v75;
  int v76;
  int v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  _DWORD* v81;
  int v83;
  int v84;
  __int64 v87;
  __int64 v88;
  unsigned int v89;
  int* v90;
  _DWORD* v91;

  v7 = (_DWORD*)*a1;
  {
    v8 = *((unsigned __int8*)a6 + 459);
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v9 = *a6;
    __asm__ volatile("" ::"r"(v9));
  }
  v91 = (_DWORD*)*a1;
  if (v9 != 0) {
    v14 = CudaDriverRoutine_f8f00(a6);
    v88 = CudaDriverRoutine_f8ed0(a6) * v14;
    v15 = a6 + 50;
    v89 = a7;
    if (a6[50] != 0) {
      goto LABEL_3;
    }
  }
  else {
    {
      v88 = *(_QWORD*)(*((_QWORD*)a6 + 1) + 136LL);
      __asm__ volatile("" ::"r"(v88));
    }
    v15 = a6 + 50;
    v89 = a7;
    if (a6[50] != 0) {
    LABEL_3:
      v16 = CudaDriverRoutine_f8f00(v15);
      v87 = CudaDriverRoutine_f8ed0(v15) * v16;
      v90 = v15;
      if (*a6 != 0) {
        goto LABEL_4;
      }
    LABEL_8:
      v83 = v8;
      {
        v23 = *((_QWORD*)a6 + 1);
        __asm__ volatile("" ::"r"(v23));
      }
      if ((*(_BYTE*)(v23 + 32) & 0x40) != 0) {
        v24 = *(_DWORD*)(v23 + 52) << 6;
        __asm__ volatile("" ::"r"(v24));
      }
      else {
        v24 = *(_DWORD*)(v23 + 112);
        __asm__ volatile("" ::"r"(v24));
      }
      {
        v25 = a6[44];
        __asm__ volatile("" ::"r"(v25));
      }
      v26 = v7;
      {
        v27 = (unsigned int)(*(int*)(v23 + 16) + *(int*)(v23 + 152) - 1) /
              *(_DWORD*)(v23 + 152);
        __asm__ volatile("" ::"r"(v27));
      }
      if (*((_BYTE*)a6 + 459) != 0) {
        {
          v24 = *(_DWORD*)(v23 + 12);
          __asm__ volatile("" ::"r"(v24));
        }
        v25 /= *(_DWORD*)(v23 + 108);
        {
          v28 = *(_DWORD*)(v23 + 108);
          __asm__ volatile("" ::"r"(v28));
        }
      }
      else {
        v28 = 1;
      }
      v29 = *(_BYTE*)(v23 + 40) & 0xF |
            (unsigned __int8)(16 * (*(_DWORD*)(v23 + 44) & 0xF)) |
            ((*(_DWORD*)(v23 + 48) & 0xF) << 8) | 0x1000;
      v30 = CudaDriverRoutine_86fe0(*((_QWORD*)a6 + 1));
      if (v27 <= 1) {
        v31 = 1;
      }
      else {
        v31 = v27;
      }
      if (v30) {
        v26[2] = v24;
        v26[3] = v31;
        v26[5] = 0;
        *(_DWORD*)v26 = 537231818;
        v26[1] = v29;
        v7 = v26;
        v26[4] = 1;
        v18 = v26 + 6;
        v17 = v28;
        if (*((_QWORD*)a6 + 22) >= 0x10000u) {
          goto LABEL_19;
        }
      }
      else {
        v26[2] = v24;
        v26[3] = v31;
        *(_DWORD*)v26 = 537166282;
        v26[1] = v29;
        v7 = v26;
        {
          v36 = *(_DWORD*)(v23 + 20);
          __asm__ volatile("" ::"r"(v36));
        }
        if (v36 <= 1) {
          v36 = 1;
        }
        v26[4] = v36;
        v18 = v26 + 5;
        v17 = v28;
        if (*((_QWORD*)a6 + 22) >= 0x10000u) {
        LABEL_19:
          v32 = v7;
          if (*((_BYTE*)a6 + 459) != 0) {
            {
              v33 = *(_DWORD*)(v23 + 108);
              __asm__ volatile("" ::"r"(v33));
            }
            v25 *= v33;
            {
              v34 = v25 & ~(-1 << (*(int*)(v23 + 40) + 6));
              __asm__ volatile("" ::"r"(v34));
            }
            v35 = v34 / v33;
          }
          else {
            {
              v34 = v25 & ~(-1 << (*(int*)(v23 + 40) + 6));
              __asm__ volatile("" ::"r"(v34));
            }
            {
              v33 = *(_DWORD*)(v23 + 108);
              __asm__ volatile("" ::"r"(v33));
            }
            v35 = v34;
          }
          v19 = CudaDriverRoutine_8ab20(v23, a5, (v25 - v34) / v33, 0);
          v25 = v35;
          v7 = v32;
          v15 = v90;
          v8 = v83;
          if (*((_BYTE*)a6 + 459) != 0) {
            goto LABEL_31;
          }
          goto LABEL_28;
        }
      }
      v19 = a5;
      v15 = v90;
      v8 = v83;
      if (*((_BYTE*)a6 + 459) == 0) {
      LABEL_28:
        if (*((_QWORD*)a6 + 50) + (unsigned __int64)v25 > 0x10000) {
          {
            v79 = *(_QWORD*)(a2 + 64);
            __asm__ volatile("" ::"r"(v79));
          }
          if (!CudaDriverRoutine_9ac20(v79)) {
            CudaDriverRoutine_9ac50(v79);
          }
        }
      }
    LABEL_31:
      *(_DWORD*)v18 = 536969679;
      v18[1] = (unsigned __int16)v25 | ((unsigned __int16)a6[46] << 16);
      if (*v15 != 0) {
        goto LABEL_5;
      }
      goto LABEL_32;
    }
  }
  {
    v87 = *(_QWORD*)(*((_QWORD*)a6 + 26) + 136LL);
    __asm__ volatile("" ::"r"(v87));
  }
  v90 = v15;
  if (*a6 == 0) {
    goto LABEL_8;
  }
LABEL_4:
  CudaDriverRoutine_f8f00(a6);
  *(_DWORD*)v7 = 536969476;
  v17 = 1;
  v18 = v7;
  v19 = a5;
  v7[1] = CudaDriverRoutine_f8f00(a6);
  if (*v15 != 0) {
  LABEL_5:
    CudaDriverRoutine_f8f00(v15);
    v18[2] = 536969477;
    result = CudaDriverRoutine_f8f00(v15);
    v18[3] = result;
    v21 = v18 + 4;
    v22 = a4;
    goto LABEL_56;
  }
LABEL_32:
  {
    v37 = *((_QWORD*)a6 + 26);
    __asm__ volatile("" ::"r"(v37));
  }
  v81 = v7;
  v84 = v8;
  if ((*(_BYTE*)(v37 + 32) & 0x40) != 0) {
    v38 = *(_DWORD*)(v37 + 52) << 6;
    __asm__ volatile("" ::"r"(v38));
  }
  else {
    v38 = *(_DWORD*)(v37 + 112);
    __asm__ volatile("" ::"r"(v38));
  }
  {
    v39 = a6[94];
    __asm__ volatile("" ::"r"(v39));
  }
  v80 = v19;
  {
    v40 = (unsigned int)(*(int*)(v37 + 16) + *(int*)(v37 + 152) - 1) /
          *(_DWORD*)(v37 + 152);
    __asm__ volatile("" ::"r"(v40));
  }
  if (*((_BYTE*)a6 + 459) != 0) {
    {
      v38 = *(_DWORD*)(v37 + 12);
      __asm__ volatile("" ::"r"(v38));
    }
    v39 /= *(_DWORD*)(v37 + 108);
    {
      v41 = *(_DWORD*)(v37 + 108);
      __asm__ volatile("" ::"r"(v41));
    }
  }
  else {
    v41 = v17;
  }
  v42 = *(_BYTE*)(v37 + 40) & 0xF |
        (unsigned __int8)(16 * (*(_DWORD*)(v37 + 44) & 0xF)) |
        ((*(_DWORD*)(v37 + 48) & 0xF) << 8) | 0x1000;
  result = ((__int64 (*)(__int64))CudaDriverRoutine_86fe0)(v37);
  if (v40 <= 1) {
    v43 = 1;
  }
  else {
    v43 = v40;
  }
  if ((_BYTE)result != 0) {
    v18[4] = v38;
    v18[5] = v43;
    v44 = 1;
    v18[7] = 0;
    v18[2] = 537231811;
    v18[3] = v42;
    v45 = 8;
  }
  else {
    v18[4] = v38;
    v18[5] = v43;
    v18[2] = 537166275;
    v18[3] = v42;
    v45 = 7;
    {
      v44 = *(_DWORD*)(v37 + 20);
      __asm__ volatile("" ::"r"(v44));
    }
    if (v44 <= 1) {
      v44 = 1;
    }
  }
  v18[6] = v44;
  v7 = v81;
  {
    v46 = &v18[v45];
    __asm__ volatile("" ::"r"(v46));
  }
  v17 = v41;
  if (*((_QWORD*)a6 + 47) < 0x10000u) {
    v19 = v80;
    v22 = a4;
    if (*((_BYTE*)a6 + 459) == 0) {
      goto LABEL_52;
    }
  }
  else {
    v19 = v80;
    if (*((_BYTE*)a6 + 459) != 0) {
      {
        v47 = *(_DWORD*)(v37 + 108);
        __asm__ volatile("" ::"r"(v47));
      }
      v39 *= v47;
      {
        v48 = v39 & ~(-1 << (*(int*)(v37 + 40) + 6));
        __asm__ volatile("" ::"r"(v48));
      }
      v49 = v48 / v47;
    }
    else {
      {
        v48 = v39 & ~(-1 << (*(int*)(v37 + 40) + 6));
        __asm__ volatile("" ::"r"(v48));
      }
      {
        v47 = *(_DWORD*)(v37 + 108);
        __asm__ volatile("" ::"r"(v47));
      }
      v49 = v48;
    }
    result = CudaDriverRoutine_8ab20(v37, a4, (v39 - v48) / v47, 0);
    v22 = result;
    v39 = v49;
    v7 = v81;
    if (*((_BYTE*)a6 + 459) == 0) {
    LABEL_52:
      if (*((_QWORD*)a6 + 50) + (unsigned __int64)v39 > 0x10000) {
        {
          v50 = *(_QWORD*)(a2 + 64);
          __asm__ volatile("" ::"r"(v50));
        }
        result = ((__int64 (*)(__int64))CudaDriverRoutine_9ac20)(v50);
        if ((_BYTE)result == 0) {
          result = ((__int64 (*)(__int64))CudaDriverRoutine_9ac50)(v50);
        }
      }
    }
  }
  v21 = v46 + 2;
  *(_DWORD*)v46 = 536969672;
  v46[1] = (unsigned __int16)v39 | ((unsigned __int16)a6[96] << 16);
  v15 = v90;
  v8 = v84;
LABEL_56:
  *(_DWORD*)v21 = 537035014;
  v21[1] = a6[100] / v17;
  v21[2] = *((_QWORD*)a6 + 51);
  if ((*a6 == 0 || *v15 == 0) && *((_QWORD*)a6 + 51) > 0x10000u) {
    {
      v51 = *(_QWORD*)(a2 + 64);
      __asm__ volatile("" ::"r"(v51));
    }
    result = ((__int64 (*)(__int64))CudaDriverRoutine_9ac20)(v51);
    if ((_BYTE)result == 0) {
      result = ((__int64 (*)(__int64))CudaDriverRoutine_9ac50)(v51);
    }
  }
  v21[7] = v22;
  v21[3] = 537166080;
  v21[4] = HIDWORD(v19) & 0x1FFFF;
  v21[5] = v19;
  v21[6] = HIDWORD(v22) & 0x1FFFF;
  if (*((_BYTE*)a6 + 459) != 0) {
    v52 = a6[106] & 7 | (unsigned __int8)(16 * (a6[107] & 7)) |
          ((a6[108] & 7) << 8) | ((a6[109] & 7) << 12) |
          ((*((unsigned __int8*)a6 + 458) << 16) - 0x10000) & 0x30000 |
          ((*((unsigned __int8*)a6 + 456) << 20) - 0x100000) & 0x300000 |
          ((*((unsigned __int8*)a6 + 457) << 24) - 0x1000000) & 0x3000000;
    v21[8] = 537100736;
    v21[9] = a6[112];
    v21[10] = a6[113];
    v21[11] = v52;
    v53 = (__int64)(v21 + 12);
  }
  else {
    v53 = (__int64)(v21 + 8);
  }
  {
    v54 = *a6;
    __asm__ volatile("" ::"r"(v54));
  }
  {
    v55 = a6[50];
    __asm__ volatile("" ::"r"(v55));
  }
  v91 = (_DWORD*)v53;
  if (v54 != 0) {
    v56 = 128;
  }
  else {
    v56 = 0;
  }
  if (v55 != 0) {
    v56 |= 0x100u;
  }
  if (v8 != 0) {
    v56 |= 0x400u;
  }
  if (*((_QWORD*)a6 + 51) <= 1u) {
    v57 = v56;
  }
  else {
    v57 = v56 | 0x200;
  }
  if (*((_QWORD*)a6 + 52) != 0) {
    v58 = 0;
    v59 = 0;
    while (1) {
      v60 = (__int64)v91;
      v61 = v7;
      if (*a6 != 0) {
        v62 = true;
        if (*v90 != 0) {
          goto LABEL_79;
        }
      }
      else {
        result =
            ((__int64 (*)(__int64))CudaDriverRoutine_86fe0)(*((_QWORD*)a6 + 1));
        v62 = (unsigned __int8)result != 0;
        if (*v90 != 0) {
        LABEL_79:
          v63 = true;
          v64 = v91;
          v65 = HIDWORD(a5) & 0x1FFFF;
          v66 = HIDWORD(a4) & 0x1FFFF;
          if (v62) {
            goto LABEL_80;
          }
          goto LABEL_83;
        }
      }
      result =
          ((__int64 (*)(__int64))CudaDriverRoutine_86fe0)(*((_QWORD*)a6 + 26));
      v63 = (unsigned __int8)result != 0;
      v64 = v91;
      v65 = HIDWORD(a5) & 0x1FFFF;
      v66 = HIDWORD(a4) & 0x1FFFF;
      if (v62 && v63) {
      LABEL_80:
        v67 = v89;
        v7 = v61;
        *(_DWORD*)v64 = 537166080;
        v91[1] = v65;
        v68 = (__int64)v91;
        v91[2] = a5;
        *(_DWORD*)(v68 + 12) = v66;
        *(_DWORD*)(v68 + 16) = a4;
        v69 = (_DWORD*)(v68 + 20);
        v91 = v69;
        a5 += v88;
        a4 += v87;
        goto LABEL_89;
      }
    LABEL_83:
      if (v62) {
        *(_DWORD*)v64 = 537035008;
        v91[1] = v65;
        v70 = (__int64)v91;
        v91[2] = a5;
        v71 = (_DWORD*)(v70 + 12);
        a5 += v88;
        v67 = v89;
        v91 = v71;
        v7 = v61;
        if (!v63) {
          goto LABEL_87;
        }
      }
      else {
        *(_DWORD*)v64 = 536969678;
        v91[1] = v59 + a6[48];
        v71 = v91 + 2;
        v67 = v89;
        v91 += 2;
        v7 = v61;
        if (!v63) {
        LABEL_87:
          *(_DWORD*)v71 = 536969671;
          v71[1] = v59 + a6[98];
          v69 = v91 + 2;
          goto LABEL_88;
        }
      }
      *(_DWORD*)v71 = 537035010;
      v71[1] = v66;
      v72 = (__int64)v91;
      v91[2] = a4;
      v69 = (_DWORD*)(v72 + 12);
      a4 += v87;
    LABEL_88:
      v91 = v69;
    LABEL_89:
      v73 = v60 - (_QWORD)v7 - 32688;
      {
        v75 = v73 < 0xFFFFFFFFFFFF8000LL || *((_QWORD*)a6 + 52) - 1LL == v58;
        __asm__ volatile("" ::"r"(v75));
      }
      if (v67 != 0 || !v75 ||
          (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118) &
           1) != 0) {
        v76 = 0;
        if (v59 != 0) {
        LABEL_101:
          if (*((_BYTE*)a6 + 460) != 0) {
            v77 = 2;
          }
          else {
            v77 = 1;
          }
          goto LABEL_104;
        }
      }
      else {
        v76 = 4;
        if (v59 != 0) {
          goto LABEL_101;
        }
      }
      v77 = 2;
    LABEL_104:
      *(_DWORD*)v69 = 536969408;
      v69[1] = v76 | v57 | v77;
      v91 += 2;
      if (v73 < 0xFFFFFFFFFFFF8000LL ||
          (v78 = *((_QWORD*)a6 + 52)) - 1 == v58) {
        result = cuda_driver_misc_helpers_4bb0(v67);
        if ((_BYTE)result != 0) {
          result = CudaDriverRoutine_1f5570((__int64)v91, v67);
          v91 = (_DWORD*)result;
        }
        {
          v78 = *((_QWORD*)a6 + 52);
          __asm__ volatile("" ::"r"(v78));
        }
        if (v73 < 0xFFFFFFFFFFFF8000LL && v78 - 1 > v58) {
          result = CudaDriverStub_5ab60(a3, &v91);
          v7 = v91;
          {
            v78 = *((_QWORD*)a6 + 52);
            __asm__ volatile("" ::"r"(v78));
          }
        }
      }
      v58 = ++v59;
      if (v78 <= v59) {
        v53 = (__int64)v91;
        break;
      }
    }
  }
  *a1 = v53;
  return result;
}

unsigned __int64 nvidia_1ff190(__int64* a1, __int64 a2)
{
  __int64 v4;
  bool v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  void* v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned int v47;
  int v48;
  int v49;
  _BOOL8 v50;
  bool v51;
  unsigned int v52;
  unsigned int v53;

  v53 = CudaDriverRoutine_5e000(a1[1]);
  {
    v4 = a1[1];
    __asm__ volatile("" ::"r"(v4));
  }
  {
    v49 = *(_DWORD*)(*(_QWORD*)(v4 + 64) + 14472LL);
    __asm__ volatile("" ::"r"(v49));
  }
  v48 = cuda_driver_5e0a0(v4);
  v52 = CudaDriverRoutine_5e0f0(a1[1]);
  v51 = CudaDriverRoutine_98110(a1[1]);
  v5 = CudaDriverRoutine_9aa40(*(_QWORD*)(a1[1] + 64));
  {
    v6 = a1[1];
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = v5;
  {
    v8 = *(_QWORD*)(v6 + 64);
    __asm__ volatile("" ::"r"(v8));
  }
  if (v7) {
    {
      v50 = (*(_BYTE*)(v8 + 16976) & 4) == 0;
      __asm__ volatile("" ::"r"(v50));
    }
    if (!CudaDriverRoutine_9aa20(v8)) {
      goto LABEL_6;
    }
  }
  else {
    v50 = false;
    if (!CudaDriverRoutine_9aa20(v8)) {
      goto LABEL_6;
    }
  }
  if (!CudaDriverRoutine_9aa00(*(_QWORD*)(v6 + 64))) {
    v47 = CudaDriverStub_19ade0(*(_QWORD*)(v6 + 64), 1);
    goto LABEL_8;
  }
LABEL_6:
  v47 = CudaDriverData_1438c8c;
LABEL_8:
  {
    v9 = a1[1];
    __asm__ volatile("" ::"r"(v9));
  }
  v10 = CudaDriverData_1438c04;
  if (CudaDriverRoutine_9aa20(*(_QWORD*)(v9 + 64)) &&
      !CudaDriverRoutine_9aa00(*(_QWORD*)(v9 + 64))) {
    LODWORD(v11) = CudaDriverStub_19ade0(*(_QWORD*)(v9 + 64), 0);
  }
  else {
    LODWORD(v11) = HIDWORD(CudaDriverData_1438c8c);
  }
  {
    v12 = a1[1];
    __asm__ volatile("" ::"r"(v12));
  }
  v13 = CudaDriverData_1438c04;
  if (CudaDriverRoutine_9aa20(*(_QWORD*)(v12 + 64)) &&
      !CudaDriverRoutine_9aa00(*(_QWORD*)(v12 + 64))) {
    LODWORD(v14) = CudaDriverStub_19ade0(*(_QWORD*)(v12 + 64), 0);
  }
  else {
    LODWORD(v14) = CudaDriverData_1438c94;
  }
  {
    v15 = a1[1];
    __asm__ volatile("" ::"r"(v15));
  }
  v16 = CudaDriverData_14358d0;
  v17 = CudaDriverData_1438c04;
  if (CudaDriverRoutine_9aa20(*(_QWORD*)(v15 + 64)) &&
      !CudaDriverRoutine_9aa00(*(_QWORD*)(v15 + 64))) {
    v19 = CudaDriverStub_19ade0(*(_QWORD*)(v15 + 64), 0);
  }
  else {
    if (v16 == 2) {
      v18 = &CudaDriverRoutine_44ec;
    }
    else {
      v18 = &CudaDriverRoutine_44e8;
    }
    {
      v19 = *(_DWORD*)((char*)&CudaDriverData_14347a8 + (_QWORD)v18);
      __asm__ volatile("" ::"r"(v19));
    }
  }
  if (v17 == 4) {
    v14 = (unsigned int)v14;
  }
  else {
    v14 = ((unsigned int)v14 >> 2) * v17;
  }
  if (v13 == 4) {
    v11 = (unsigned int)v11;
  }
  else {
    v11 = ((unsigned int)v11 >> 2) * v13;
  }
  if (v10 == 4) {
    v20 = v47;
  }
  else {
    v20 = (v47 >> 2) * v10;
  }
  if (CudaDriverData_1438c04 == 4) {
    v21 = v19;
  }
  else {
    v21 = (v19 >> 2) * CudaDriverData_1438c04;
  }
  CudaDriverRoutine_9aa40(*(_QWORD*)(a1[1] + 64));
  v22 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v23 = v20 - 1;
  v24 = v20 - 1 + (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v25 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v26 = v23 + v22 + v24 / v25 * v25 - v24;
  v27 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v28 = v11 - 1;
  v29 = v11 - 1 + (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v30 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v31 = v28 + v27 + v29 / v30 * v30 - v29;
  v32 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v33 = v14 - 1;
  v34 = v14 - 1 + (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v35 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v36 = v33 + v32 + v34 / v35 * v35 - v34;
  v37 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v38 = v21 - 1;
  v39 = v38 + (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v40 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v41 = v38 + v37 + v39 / v40 * v40 - v39;
  v42 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v43 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2) - 1;
  v44 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  if (v51) {
    v45 = v41;
  }
  else {
    v45 = 0;
  }
  return v26 * v53 + v31 * (unsigned int)(v48 * v49) + v36 * v52 + v45 +
         (v42 + ~(v43 % v44)) * v50;
}

__int64 nvidia_20e1e0(_QWORD* a1, __int64 a2, _DWORD* a3, int a4)
{
  unsigned int* v4;
  unsigned int v7;
  unsigned int* v8;
  unsigned int* v9;
  unsigned int* v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int* v22;
  unsigned int* v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  char v48;
  __int64 v49;
  unsigned int v50;
  int v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned int v54;
  unsigned __int64 v55;
  int v56;
  __int64 v57;
  unsigned int v58;
  unsigned int v59;
  _DWORD* v60;
  unsigned int* v62;
  _QWORD v63[4];
  _QWORD v64[8];
  _QWORD v65[22];

  memset(v64, 0, sizeof(v64));
  memset(v65, 0, 160);
  if (a1 == nullptr) {
    return 201;
  }
  if (a3 == nullptr) {
    return 1;
  }
  {
    v4 = (unsigned int*)a1[8];
    __asm__ volatile("" ::"r"(v4));
  }
  if (a2 == 0) {
    goto LABEL_72;
  }
  v60 = a3;
  CudaDriverRoutine_20ebc0((__int64)v4, (__int64)v64, (__int64)v65);
  if (cuda_driver_predicates_9ae50((__int64)v4)) {
    {
      v7 = v4[1097];
      __asm__ volatile("" ::"r"(v7));
    }
    if (v7 != 0) {
      v8 = v4 + 2140;
      v9 = v4 + 2396;
      v10 = v4 + 1372;
      v62 = v4 + 1116;
      if (a4 != 0) {
        v11 = 0;
        do {
          {
            v12 = v4[934] * v11;
            __asm__ volatile("" ::"r"(v12));
          }
          {
            v13 = v8[v12];
            __asm__ volatile("" ::"r"(v13));
          }
          {
            v14 = v9[v12];
            __asm__ volatile("" ::"r"(v14));
          }
          if (((*(unsigned __int16*)(a1[23] + 2 * v13 + 32) >> v14) & 1) != 0) {
            {
              v15 = v62[v12];
              __asm__ volatile("" ::"r"(v15));
            }
            *((_DWORD*)&v65[8] + v15) |= 1 << v10[v12];
          }
          if (CudaDriverRoutine_9ae20((__int64)v4) &&
              (*((_BYTE*)&CudaDriverRoutine_7488 +
                 (_QWORD)CudaDriverData_1422118) &
               1) == 0 &&
              *(_QWORD*)(CudaDriverRoutine_98340((__int64)a1) + 1072) != 0 &&
              v14 == 0 && v4[4258] == (_DWORD)v13) {
            {
              v17 = v62[v12];
              __asm__ volatile("" ::"r"(v17));
            }
            *((_DWORD*)&v65[8] + v17) |= 1 << v10[v12];
          }
          ++v11;
        } while (v11 < v4[1097]);
      }
      else {
        {
          v41 = v4[934];
          __asm__ volatile("" ::"r"(v41));
        }
        {
          v42 = a1[23] + 32LL;
          __asm__ volatile("" ::"r"(v42));
        }
        if (v7 == 1) {
          v43 = 0;
        }
        else {
          v44 = 0;
          v45 = 0;
          do {
            v46 = v45;
            if (((*(unsigned __int16*)(v42 + 2LL * v8[v45]) >> v9[v45]) & 1) !=
                0) {
              *((_DWORD*)&v65[8] + v62[v45]) |= 1 << v10[v45];
            }
            v47 = v41 + v45;
            if (((*(unsigned __int16*)(v42 + 2LL * v8[v47]) >> v9[v47]) & 1) !=
                0) {
              {
                v48 = v10[v47];
                __asm__ volatile("" ::"r"(v48));
              }
              {
                v49 = v62[v47];
                __asm__ volatile("" ::"r"(v49));
              }
              *((_DWORD*)&v65[8] + v49) |= 1 << v48;
            }
            v45 = v46 + 2 * v41;
            v44 -= 2;
          } while (-(__int64)(v7 & 0xFFFFFFFE) != v44);
          v43 = -(int)v44;
        }
        if ((v7 & 1) != 0) {
          v50 = v41 * v43;
          if (((*(unsigned __int16*)(v42 + 2LL * v8[v50]) >> v9[v50]) & 1) !=
              0) {
            {
              v51 = 1 << v10[v50];
              __asm__ volatile("" ::"r"(v51));
            }
            {
              v52 = v62[v50];
              __asm__ volatile("" ::"r"(v52));
            }
            *((_DWORD*)&v65[8] + v52) |= v51;
          }
        }
      }
    }
    goto LABEL_58;
  }
  memset(v63, 0, sizeof(v63));
  if (cuda_driver_predicates_9ae50((__int64)v4) ||
      CudaDriverRoutine_9adf0((__int64)v4)) {
    v19 = 3;
  }
  else {
    v19 = 2;
  }
  (*(void (**)(_QWORD, _QWORD*, _QWORD))(a1[8] + 19384LL))(a1[21], v63, a1[23]);
  v20 = 0;
  v21 = 0;
  v22 = v4 + 1372;
  v23 = v4 + 1116;
  while (2) {
    v24 = 32;
    {
      v25 = ~*((_DWORD*)v63 + v20);
      __asm__ volatile("" ::"r"(v25));
    }
    *((_DWORD*)v63 + v20) = v25;
    do {
      if ((v25 & 1) != 0) {
        {
          v33 = v23[v21];
          __asm__ volatile("" ::"r"(v33));
        }
        *((_DWORD*)&v65[8] + v33) |= 1 << v22[v21];
        *((_DWORD*)v63 + v20) = v25 >> 1;
        {
          v26 = v4[934] + v21;
          __asm__ volatile("" ::"r"(v26));
        }
        if ((v25 & 2) == 0) {
        LABEL_31:
          *((_DWORD*)v63 + v20) = v25 >> 2;
          {
            v27 = v4[934] + v26;
            __asm__ volatile("" ::"r"(v27));
          }
          if ((v25 & 4) == 0) {
            goto LABEL_32;
          }
          goto LABEL_40;
        }
      }
      else {
        *((_DWORD*)v63 + v20) = v25 >> 1;
        {
          v26 = v4[934] + v21;
          __asm__ volatile("" ::"r"(v26));
        }
        if ((v25 & 2) == 0) {
          goto LABEL_31;
        }
      }
      {
        v34 = v23[v26];
        __asm__ volatile("" ::"r"(v34));
      }
      *((_DWORD*)&v65[8] + v34) |= 1 << v22[v26];
      *((_DWORD*)v63 + v20) = v25 >> 2;
      {
        v27 = v4[934] + v26;
        __asm__ volatile("" ::"r"(v27));
      }
      if ((v25 & 4) == 0) {
      LABEL_32:
        *((_DWORD*)v63 + v20) = v25 >> 3;
        {
          v28 = v4[934] + v27;
          __asm__ volatile("" ::"r"(v28));
        }
        if ((v25 & 8) == 0) {
          goto LABEL_33;
        }
        goto LABEL_41;
      }
    LABEL_40:
      {
        v35 = v23[v27];
        __asm__ volatile("" ::"r"(v35));
      }
      *((_DWORD*)&v65[8] + v35) |= 1 << v22[v27];
      *((_DWORD*)v63 + v20) = v25 >> 3;
      {
        v28 = v4[934] + v27;
        __asm__ volatile("" ::"r"(v28));
      }
      if ((v25 & 8) == 0) {
      LABEL_33:
        *((_DWORD*)v63 + v20) = v25 >> 4;
        {
          v29 = v4[934] + v28;
          __asm__ volatile("" ::"r"(v29));
        }
        if ((v25 & 0x10) == 0) {
          goto LABEL_34;
        }
        goto LABEL_42;
      }
    LABEL_41:
      {
        v36 = v23[v28];
        __asm__ volatile("" ::"r"(v36));
      }
      *((_DWORD*)&v65[8] + v36) |= 1 << v22[v28];
      *((_DWORD*)v63 + v20) = v25 >> 4;
      {
        v29 = v4[934] + v28;
        __asm__ volatile("" ::"r"(v29));
      }
      if ((v25 & 0x10) == 0) {
      LABEL_34:
        *((_DWORD*)v63 + v20) = v25 >> 5;
        {
          v30 = v4[934] + v29;
          __asm__ volatile("" ::"r"(v30));
        }
        if ((v25 & 0x20) == 0) {
          goto LABEL_35;
        }
        goto LABEL_43;
      }
    LABEL_42:
      {
        v37 = v23[v29];
        __asm__ volatile("" ::"r"(v37));
      }
      *((_DWORD*)&v65[8] + v37) |= 1 << v22[v29];
      *((_DWORD*)v63 + v20) = v25 >> 5;
      {
        v30 = v4[934] + v29;
        __asm__ volatile("" ::"r"(v30));
      }
      if ((v25 & 0x20) == 0) {
      LABEL_35:
        *((_DWORD*)v63 + v20) = v25 >> 6;
        {
          v31 = v4[934] + v30;
          __asm__ volatile("" ::"r"(v31));
        }
        if ((v25 & 0x40) != 0) {
          goto LABEL_44;
        }
        goto LABEL_36;
      }
    LABEL_43:
      {
        v38 = v23[v30];
        __asm__ volatile("" ::"r"(v38));
      }
      *((_DWORD*)&v65[8] + v38) |= 1 << v22[v30];
      *((_DWORD*)v63 + v20) = v25 >> 6;
      {
        v31 = v4[934] + v30;
        __asm__ volatile("" ::"r"(v31));
      }
      if ((v25 & 0x40) != 0) {
      LABEL_44:
        {
          v39 = v23[v31];
          __asm__ volatile("" ::"r"(v39));
        }
        *((_DWORD*)&v65[8] + v39) |= 1 << v22[v31];
        *((_DWORD*)v63 + v20) = v25 >> 7;
        {
          v32 = v4[934] + v31;
          __asm__ volatile("" ::"r"(v32));
        }
        if ((v25 & 0x80) == 0) {
          goto LABEL_28;
        }
        goto LABEL_45;
      }
    LABEL_36:
      *((_DWORD*)v63 + v20) = v25 >> 7;
      {
        v32 = v4[934] + v31;
        __asm__ volatile("" ::"r"(v32));
      }
      if ((v25 & 0x80) != 0) {
      LABEL_45:
        {
          v40 = v23[v32];
          __asm__ volatile("" ::"r"(v40));
        }
        *((_DWORD*)&v65[8] + v40) |= 1 << v22[v32];
      }
    LABEL_28:
      v25 >>= 8;
      v24 -= 8;
      *((_DWORD*)v63 + v20) = v25;
      {
        v21 = v4[934] + v32;
        __asm__ volatile("" ::"r"(v21));
      }
    } while (v24 != 0);
    if (++v20 != v19) {
      continue;
    }
    break;
  }
LABEL_58:
  {
    v53 = v4[870];
    __asm__ volatile("" ::"r"(v53));
  }
  a3 = v60;
  if ((_DWORD)v53 != 0) {
    {
      v54 = v4[938];
      __asm__ volatile("" ::"r"(v54));
    }
    if (v54 != 0) {
      v55 = 0;
      v56 = 1;
      do {
        if (v56 != 0) {
          {
            v57 = *((unsigned int*)v65 + v55);
            __asm__ volatile("" ::"r"(v57));
          }
          v58 = 0;
          v59 = 0;
          do {
            if ((v4[v57 + 887] & (1 << v58)) != 0) {
              if (((*((_DWORD*)&v65[8] + v55) >> v59) & 1) != 0) {
                *(_DWORD*)(a2 + 4LL * *((unsigned int*)v64 + v55)) |= 1 << v58;
                {
                  v54 = v4[938];
                  __asm__ volatile("" ::"r"(v54));
                }
              }
              ++v59;
            }
            if (v59 >= v54) {
              break;
            }
            ++v58;
          } while (v58 < v54);
          {
            v53 = v4[870];
            __asm__ volatile("" ::"r"(v53));
          }
          v56 = v54;
        }
        ++v55;
      } while (v55 < v53);
    }
  }
LABEL_72:
  result = 0;
  *(_DWORD*)a3 = v4[1074];
  return result;
}

__int64 nvidia_212090(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  struct {
    __int128 v9;
    __int128 v10;
  } v9_;
  __int128 v11;
  _QWORD v12[3];

  if (a1 != nullptr) {
    {
      v1 = *a1;
      __asm__ volatile("" ::"r"(v1));
    }
    v9_.v10 = (__typeof__(v9_.v10)){0};
    v11 = (__typeof__(v11)){0};
    v9_.v9 = (__typeof__(v9_.v9)){0};
    if (v1 >= 0x30) {
      v3 = 48;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v9_.v9, (__int64)a1, v3);
    LODWORD(v9_.v9) = v3;
    if (*((_QWORD*)&v9_.v9 + 1) != 0 && (_QWORD)v9_.v10 != 0) {
      {
        v4 = *(_QWORD*)(*((_QWORD*)&v9_.v9 + 1) + 8LL);
        __asm__ volatile("" ::"r"(v4));
      }
      v12[0] = v9_.v10;
      v12[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, _QWORD, _QWORD, __int128*))
                  CudaDriverData_1423090[**((_DWORD**)&v9_.v9 + 1)] +
              20))(v12, DWORD2(v9_.v10), DWORD1(v9_.v9), &v11);
      v6 = CudaDriverRoutine_20f580(v5);
      v3 = (unsigned int)v9_.v9;
      v7 = v6;
    }
    else {
      v7 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&v9_.v9, v3);
  }
  else {
    return 4;
  }
  return v7;
}

__int64 nvidia_212250(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int128 v9;
  struct {
    __int128 v10;
    __int64 v11;
  } v10_;
  _QWORD v12[3];

  if (a1 != nullptr) {
    {
      v1 = *a1;
      __asm__ volatile("" ::"r"(v1));
    }
    v10_.v11 = 0;
    v9 = (__typeof__(v9)){0};
    v10_.v10 = (__typeof__(v10_.v10)){0};
    if (v1 >= 0x28) {
      v3 = 40;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v9, (__int64)a1, v3);
    LODWORD(v9) = v3;
    if (*((_QWORD*)&v9 + 1) != 0 && (_QWORD)v10_.v10 != 0) {
      {
        v4 = *(_QWORD*)(*((_QWORD*)&v9 + 1) + 8LL);
        __asm__ volatile("" ::"r"(v4));
      }
      v12[0] = v10_.v10;
      v12[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, char*))
                  CudaDriverData_1423090[**((_DWORD**)&v9 + 1)] +
              12))(v12, (char*)&v10_.v10 + 8);
      v6 = CudaDriverRoutine_20f580(v5);
      v3 = (unsigned int)v9;
      v7 = v6;
    }
    else {
      v7 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&v9, v3);
  }
  else {
    return 4;
  }
  return v7;
}

#pragma GCC visibility pop
