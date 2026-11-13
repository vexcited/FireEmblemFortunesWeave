#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_198310(_DWORD* result, __int64);
_DWORD* CudaDriverRoutine_1bc2f0(_DWORD* result, _QWORD*, _QWORD*);
_QWORD* CudaDriverRoutine_1dc5c0(__int64, unsigned __int64, unsigned __int64,
                                 __int64, char);
_QWORD* CudaDriverRoutine_58590(_QWORD* result);
_QWORD* CudaDriverRoutine_5d5c0(_QWORD* result);
_QWORD* CudaDriverRoutine_5f100(__int64, unsigned int*, __int64);
__int64 CudaDriverRoutine_103d70(__int64);
__int64 CudaDriverRoutine_104c40(__int64, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_104e80(__int64*, __int64);
__int64 CudaDriverRoutine_104fd0(__int64, _QWORD*, __int64, __int64*,
                                 unsigned int);
__int64 CudaDriverRoutine_107f40(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_107f60(_QWORD*);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_10dd50(__int64);
__int64 CudaDriverRoutine_10e060(__int64);
__int64 CudaDriverRoutine_10e1b0(__int64);
__int64 CudaDriverRoutine_113960(__int64, __int64, __int64, __int64, int,
                                 __int64, __int64, __int64);
__int64 CudaDriverRoutine_113ee0(__int64, char);
__int64 CudaDriverRoutine_114a80(__int64, __int64, int);
__int64 CudaDriverRoutine_117980(__int64, _WORD*, unsigned __int8*);
__int64 CudaDriverRoutine_117a20(unsigned int*, unsigned int);
__int64 CudaDriverRoutine_118bc0(__int64, __int64, char);
__int64 CudaDriverRoutine_119030(__int64, __int64, __int64, __int64, __int64,
                                 __int64, char);
__int64 CudaDriverRoutine_120d10(__int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_1216a0(__int64);
__int64 CudaDriverRoutine_1218b0(__int64, __int64);
__int64 CudaDriverRoutine_1219b0(__int64 result);
__int64 CudaDriverRoutine_121b30(__int64 result, char);
__int64 CudaDriverRoutine_121c60(__int64*);
__int64 CudaDriverRoutine_1251c0(unsigned int*);
__int64 CudaDriverRoutine_125580(__int64 result);
__int64 CudaDriverRoutine_126190(unsigned __int64, __int64, int, __int64);
__int64 CudaDriverRoutine_12c9e0(__int64);
__int64 CudaDriverRoutine_12ca30(__int64, __int64);
__int64 CudaDriverRoutine_12cb10(__int64, __int64*, _QWORD*);
__int64 CudaDriverRoutine_12e020(__int64);
__int64 CudaDriverRoutine_12e210(__int64);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_138320(_QWORD*, __int64);
__int64 CudaDriverRoutine_1383a0(__int64);
__int64 CudaDriverRoutine_196750(__int64, unsigned int, char);
__int64 CudaDriverRoutine_197020(__int64*);
__int64 CudaDriverRoutine_197d20(__int64 result);
__int64 CudaDriverRoutine_197d90(_QWORD*);
__int64 CudaDriverRoutine_197de0(unsigned int*);
__int64 CudaDriverRoutine_197ec0(__int64 result);
__int64 CudaDriverRoutine_198100(unsigned int**);
__int64 CudaDriverRoutine_198160(unsigned int**);
__int64 CudaDriverRoutine_1981c0(_DWORD*, _DWORD*, char);
__int64 CudaDriverRoutine_1982f0(_DWORD*, __int64);
__int64 CudaDriverRoutine_1a16e0(unsigned __int8*, unsigned __int64);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64);
__int64 CudaDriverRoutine_1a3d20(__int64, unsigned __int8*);
__int64 CudaDriverRoutine_1ba4f0(__int64 result, __int64);
__int64 CudaDriverRoutine_1ba580(__int64);
__int64 CudaDriverRoutine_1baa40(_QWORD*, __int64);
__int64 CudaDriverRoutine_1bb6a0(unsigned __int64, unsigned __int64);
__int64 CudaDriverRoutine_1bbd70(__int64);
__int64 CudaDriverRoutine_1bbf50(__int64);
__int64 CudaDriverRoutine_1d50e0(_QWORD*, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_1d5df0(_QWORD*, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_1d6380(__int64, __int64, int, __int64);
__int64 CudaDriverRoutine_1d6cc0(_QWORD*, __int64, int, __int64);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverRoutine_1db1c0(__int64, __int64);
__int64 CudaDriverRoutine_1dba10(__int64, unsigned __int64);
__int64 CudaDriverRoutine_1dbfd0(__int64);
__int64 CudaDriverRoutine_1dc000(__int64);
__int64 CudaDriverRoutine_1dc020(__int64);
__int64 CudaDriverRoutine_1dc0c0(__int64, __int64);
__int64 CudaDriverRoutine_1dc160(__int64, __int64);
__int64 CudaDriverRoutine_1dc2a0(__int64);
__int64 CudaDriverRoutine_1dc340(_QWORD*, _QWORD*);
__int64 CudaDriverRoutine_1dd030(__int64);
__int64 CudaDriverRoutine_1dd1a0(__int64);
__int64 CudaDriverRoutine_1dd1f0(__int64);
__int64 CudaDriverRoutine_1ff5f0(_QWORD*);
__int64 CudaDriverRoutine_202960(__int64, __int64, __int64, __int64, __int64,
                                 char);
__int64 CudaDriverRoutine_203f30(__int64);
__int64 CudaDriverRoutine_206380(__int64, __int64, unsigned int);
__int64 CudaDriverRoutine_22420(__int64, __int64, __int64, __int64, __int64,
                                __int64);
__int64 CudaDriverRoutine_235e0(_QWORD*, __int64, __int64, __int64, __int64,
                                unsigned int, __int64);
__int64 CudaDriverRoutine_23750(__int64, __int64);
__int64 CudaDriverRoutine_241b0(__int64, __int64, _DWORD*);
__int64 CudaDriverRoutine_24640(__int64, __int64, _QWORD*, __int64, __int64);
__int64 CudaDriverRoutine_266b0(__int64, _DWORD*);
__int64 CudaDriverRoutine_2b6c0(__int64, int, unsigned __int8*);
__int64 CudaDriverRoutine_2b880(_QWORD*, __int64, int, __int64,
                                unsigned __int8*, __int64);
__int64 CudaDriverRoutine_2bb60(__int64, _QWORD**, __int64, char, __int64,
                                _BYTE*, __int64);
__int64 CudaDriverRoutine_2d700(unsigned __int64, __int64, __int64);
__int64 CudaDriverRoutine_2d7f0(unsigned __int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_2d8f0(unsigned __int64, __int64, __int64*, __int64);
__int64 CudaDriverRoutine_306e0(__int64, __int64);
__int64 CudaDriverRoutine_41c40(__int64, __int64, __int64*, _DWORD*);
__int64 CudaDriverRoutine_4fa10(__int64, __int64*, int, char);
__int64 CudaDriverRoutine_4fc20(__int64*, _QWORD*, __int64, __int64*);
__int64 CudaDriverRoutine_4fdd0(_QWORD*);
__int64 CudaDriverRoutine_56080(__int64, __int64, _QWORD*, _QWORD*);
__int64 CudaDriverRoutine_56100(__int64, __int64);
__int64 CudaDriverRoutine_57370(__int64, __int64, __int64);
__int64 CudaDriverRoutine_573d0(__int64, __int64);
__int64 CudaDriverRoutine_574e0(__int64, _QWORD*);
__int64 CudaDriverRoutine_577d0(__int64);
__int64 CudaDriverRoutine_592c0(_QWORD*, __int64, __int64);
__int64 CudaDriverRoutine_59350(__int64);
__int64 CudaDriverRoutine_5b640(_DWORD*, __int64, unsigned int, char, char,
                                char, char, __int64*);
__int64 CudaDriverRoutine_5cc50(__int64);
__int64 CudaDriverRoutine_5d370();
__int64 CudaDriverRoutine_5d530(__int64);
__int64 CudaDriverRoutine_5e580(__int64 result);
__int64 CudaDriverRoutine_5f0d0(unsigned int*);
__int64 CudaDriverRoutine_5fa20(__int64, int);
__int64 CudaDriverRoutine_81690(__int64 result);
__int64 CudaDriverRoutine_816b0(__int64 result);
__int64 CudaDriverRoutine_86c70(_QWORD*, unsigned __int64, char);
__int64 CudaDriverRoutine_87190(__int64, unsigned int*, unsigned __int8,
                                unsigned int, char);
__int64 CudaDriverRoutine_89f80(__int64*, __int64, __int128*, unsigned int,
                                __int64);
__int64 CudaDriverRoutine_8a9e0(__int64);
__int64 CudaDriverRoutine_98190(__int64, unsigned int);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_985c0(__int64 result);
__int64 CudaDriverRoutine_98650(__int64, char);
__int64 CudaDriverRoutine_99340(__int64);
__int64 CudaDriverRoutine_9b5e0(__int64, signed int);
__int64 CudaDriverRoutine_b7c30(__int64, _QWORD*, _QWORD*);
__int64 CudaDriverRoutine_d64a0(_QWORD*, __int64);
__int64 CudaDriverRoutine_d6740(__int64, __int64, __int64, _DWORD*);
__int64 CudaDriverRoutine_d6af0(__int64 result, __int64*, __int64);
__int64 CudaDriverRoutine_d9230(__int64*, __int64, __int64);
__int64 CudaDriverRoutine_dabb0(__int64, __int64, __int64, int);
__int64 CudaDriverRoutine_dafc0(__int64, __int64, __int64, __int64, int);
__int64 CudaDriverRoutine_df060(__int64*);
__int64 CudaDriverRoutine_df0b0(__int64, unsigned __int64, unsigned __int64,
                                char);
__int64 CudaDriverRoutine_e3050(__int64, __int64);
__int64 CudaDriverRoutine_e30b0(__int64);
__int64 CudaDriverRoutine_e73b0(__int64, __int64);
__int64 CudaDriverRoutine_e7820(__int64, __int64, _DWORD*, unsigned int);
__int64 CudaDriverRoutine_e7a20(_DWORD*, _DWORD*, unsigned int, unsigned int,
                                unsigned int);
__int64 CudaDriverRoutine_e7c60(__int64, __int64, unsigned int);
__int64 CudaDriverRoutine_e7d30(__int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_ec740(__int64, __int64, __int64);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_ee120(__int64);
__int64 CudaDriverRoutine_ee330(__int64);
__int64 CudaDriverRoutine_eec70(__int64, __int64);
__int64 CudaDriverRoutine_f3ad0(__int64, __int64);
__int64 CudaDriverRoutine_f60f0(__int64, __int64, __int64, __int64, __int64,
                                __int64, unsigned int, __int64, unsigned int);
__int64 CudaDriverRoutine_f8160(__int64, __int64, unsigned int);
__int64 CudaDriverRoutine_f97c0(__int64, __int64*, __int64*, __int64*);
__int64 CudaDriverRoutine_f9b10(__int64, unsigned int, __int64, __int64,
                                __int64, _QWORD*, _QWORD*);
__int64 CudaDriverRoutine_f9bd0(int*, __int64, __int64, __int64, unsigned int,
                                __int64, unsigned int, __int64, char);
__int64 CudaDriverRoutine_fa700(__int64 result, __int64, __int64, __int64);
__int64 CudaDriverRoutine_fba20(__int64, __int64, int, char, __int64);
__int64 CudaDriverRoutine_fbcc0(__int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_fcca0(__int64, __int64);
__int64 CudaDriverRoutine_fd5c0(__int64, __int64, __int64, __int64, char);
__int64 CudaDriverRoutine_fd890(__int64 result, _QWORD*, __int64, __int64, int,
                                __int64);
__int64 CudaDriverRoutine_fe850(__int64*, int);
__int64 CudaDriverRoutine_fe960();
__int64 CudaDriverRoutine_ff570(_QWORD*, _QWORD*);
__int64 CudaDriverStub_102370(void);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_102f00(__int64);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_107f90_alt1(_QWORD*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_107f90_alt2(char*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_107f90_alt3(_BYTE*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_108070_alt1(_QWORD*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_108070_alt2(char*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_108070_alt3(_BYTE*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_10eba0(_QWORD);
__int64 CudaDriverStub_112b20(__int64, __int64*, unsigned int, __int64*,
                              __int64*);
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_12c940(__int64);
__int64 CudaDriverStub_12d100(_QWORD);
__int64 CudaDriverStub_12dc90(_QWORD);
__int64 CudaDriverStub_12dca0(_QWORD);
__int64 CudaDriverStub_12e320(void);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1db190(_QWORD);
__int64 CudaDriverStub_1db750(_QWORD);
__int64 CudaDriverStub_1db760(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf50(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1dbfa0(_QWORD);
__int64 CudaDriverStub_1dbfc0(_QWORD);
__int64 CudaDriverStub_2066f0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_4f840(_QWORD);
__int64 CudaDriverStub_57450(_QWORD);
__int64 CudaDriverStub_5ab60(_QWORD, _QWORD);
__int64 CudaDriverStub_8e1f0(void);
__int64 CudaDriverStub_9b050(_QWORD);
__int64 CudaDriverStub_b5180(__int64, __int64, __int64);
__int64 CudaDriverStub_b9660(__int64);
__int64 cuGraphExecBatchMemOpNodeSetParams_impl(unsigned __int64, __int64,
                                                __int64);
__int64 cuGraphExecEventRecordNodeSetEvent_impl(unsigned __int64, __int64,
                                                __int64);
__int64 cuGraphExecEventWaitNodeSetEvent_impl(unsigned __int64, __int64,
                                              __int64);
__int64 cuGraphExecExternalSemaphoresSignalNodeSetParams_impl(unsigned __int64,
                                                              __int64, __int64);
__int64 cuGraphExecExternalSemaphoresWaitNodeSetParams_impl(unsigned __int64,
                                                            __int64, __int64);
__int64 cuGraphExecHostNodeSetParams_impl(unsigned __int64, __int64, __int64);
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_108520(__int64);
__int64 cuda_driver_112680(__int64, __int64*, unsigned int, __int64*, __int64*,
                           char, unsigned int);
__int64 cuda_driver_118a60(__int64, __int64, unsigned int, char);
__int64 cuda_driver_118c20(__int64, __int64, __int64, __int64, __int64, __int64,
                           unsigned int, char);
__int64 cuda_driver_121e20(__int64);
__int64 cuda_driver_126320(unsigned __int64, __int64, int, _DWORD*,
                           unsigned __int64);
__int64 cuda_driver_1968d0(__int64, int, int, char);
__int64 cuda_driver_1bace0(unsigned int*, __int64*, char);
__int64 cuda_driver_1d5f60(__int64, __int64, __int64, __int64, unsigned int,
                           unsigned int, __int64, __int64, char);
__int64 cuda_driver_1da1b0(__int64, __int64*, __int64, _QWORD*);
__int64 cuda_driver_1dbe40(__int64, __int64, __int64);
__int64 cuda_driver_204330(__int64);
__int64 cuda_driver_207340(__int64 result, int);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_24490_alt1(__int64, _QWORD*,
                               _QWORD*) __asm__("cuda_driver_24490");
__int64 cuda_driver_5a700_alt1(__int64*, char, _BYTE*, unsigned int,
                               unsigned int) __asm__("cuda_driver_5a700");
__int64 cuda_driver_5e7e0(__int64);
__int64 cuda_driver_5fc00(__int64, int);
__int64 cuda_driver_772c0(__int64);
__int64 cuda_driver_98c70(__int64, unsigned int);
__int64 cuda_driver_9b080(_QWORD*);
__int64 cuda_driver_9b180(__int64);
__int64 cuda_driver_9bd90(__int64);
__int64 cuda_driver_b4d40(__int64, __int64, unsigned int, char);
__int64 cuda_driver_c3200(__int64, char);
__int64 cuda_driver_c36c0(__int64);
__int64 cuda_driver_c4770(__int64, __int64);
__int64 cuda_driver_cfc10(_QWORD*, __int64, __int64, char*, char);
__int64 cuda_driver_checks_103390(__int64, char);
__int64 cuda_driver_d5170(__int64, __int64);
__int64 cuda_driver_d69f0(__int64*, __int64, __int64, __int64, __int64, __int64,
                          __int64*, __int64, unsigned int);
__int64 cuda_driver_d7d60(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                          unsigned __int64*, char, __int64);
__int64 cuda_driver_d82e0(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                          __int64, char, unsigned int);
__int64 cuda_driver_ddc90(__int64*, __int64, __int64, int);
__int64 cuda_driver_e2fa0(__int64, __int64, _QWORD*, char);
__int64 cuda_driver_e83e0(unsigned int*, __int64, __int64, __int64);
__int64 cuda_driver_ef110(__int64, unsigned int);
__int64 cuda_driver_f7ce0(_DWORD*, __int64);
__int64 cuda_driver_f91e0(int*, __int64, __int64);
__int64 cuda_driver_fabf0(__int64, __int64, __int64, unsigned int, unsigned int,
                          __int64, __int64);
__int64 cuda_driver_fb050(__int64, __int64, char, bool*, bool*);
__int64 cuda_driver_fdb30(_QWORD*, __int64, unsigned __int64, __int64);
__int64 cuda_driver_fe9e0(_DWORD*);
__int64 cuda_driver_ff320(_DWORD*, __int64, _DWORD*);
__int64 cuda_driver_helpers_1b6f70(__int64, __int64*, __int64, __int64, __int64,
                                   int, char);
__int64 cuda_driver_helpers_1b70a0(__int64, __int64);
__int64 cuda_driver_helpers_1db770(__int64 result, _QWORD*);
__int64 cuda_driver_helpers_1db780(__int64 result, _QWORD*);
__int64 cuda_driver_helpers_b8060(__int64 result, __int64, __int64);
__int64 cuda_driver_helpers_b80d0(__int64, __int64);
__int64 cuda_driver_misc_2daf0(unsigned __int64, __int64, __int64);
__int64 cuda_driver_misc_helpers_ded50(__int64, __int64*, unsigned int);
__int64 cuda_driver_misc_helpers_deeb0(__int64, char);
__int64 cuda_driver_predicates_f7910(__int64);
__int64 fclose_plt(_QWORD);
__int64 fread_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
unsigned __int8 CudaDriverRoutine_121b40(__int64);
unsigned __int8 CudaDriverRoutine_12c960(__int64, __int64);
unsigned __int8 CudaDriverRoutine_1b76a0(__int64, __int64);
unsigned __int8 CudaDriverRoutine_1bbf10(__int64, __int64);
unsigned __int8 CudaDriverRoutine_1dc590(__int64);
unsigned __int8 CudaDriverRoutine_1dc850(__int64);
unsigned __int8 CudaDriverRoutine_1dc9c0(__int64);
unsigned __int8 CudaDriverRoutine_242a0(__int64, __int64);
unsigned __int8 CudaDriverRoutine_98110(_BOOL8 result);
unsigned __int8 CudaDriverRoutine_fa910(__int64, _DWORD*);
unsigned __int8 CudaDriverRoutine_fb5d0(__int64, int*);
unsigned __int8 CudaDriverStub_1dbf40(__int64);
unsigned __int8 CudaDriverStub_1dbff0(__int64);
unsigned __int8 CudaDriverStub_d4800(__int64);
unsigned __int8 CudaDriverStub_f78c0(_DWORD*);
unsigned __int8 cuda_driver_f7b60(int*, __int64);
unsigned __int8 cuda_driver_faa80(__int64, int*);
unsigned __int8 cuda_driver_predicates_1dc880(__int64);
extern _QWORD CudaDriverData_11307c0[7];
extern _QWORD CudaDriverData_11307f8[7];
extern _QWORD CudaDriverData_1130830[7];
extern _QWORD CudaDriverData_1422ba8;
extern _QWORD CudaDriverData_1422bb0;
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_1432140;
extern _UNKNOWN* CudaDriverData_1432148;
extern _UNKNOWN* CudaDriverData_1432158;
extern _UNKNOWN* CudaDriverData_14321c8;
extern _UNKNOWN* CudaDriverData_1432208;
extern _UNKNOWN CudaDriverData_1130618;
extern _UNKNOWN CudaDriverData_14347a8;
extern __int64 CudaDriverData_14348c0[];
extern char CudaDriverData_1436502;
extern int CudaDriverData_1434ac0;
extern unsigned int CudaDriverData_1130880[12];
extern void (**CudaDriverData_1130788[2])();
int64x2_t* cuda_driver_64280(int64x2_t* result, unsigned __int32, unsigned int,
                             __int64);
long double CudaDriverRoutine_117930(__int64, _OWORD*, __int64);
long double CudaDriverRoutine_f8090(int*, __int64);
unsigned __int64 CudaDriverRoutine_12dea0(atomic_ullong*);
unsigned __int64 CudaDriverRoutine_1bb040(unsigned __int64 result);
unsigned __int64 CudaDriverRoutine_24010(__int64, __int64, __int64,
                                         unsigned __int64);
unsigned __int64 CudaDriverRoutine_5bd00(__int64, unsigned __int64);
unsigned __int64 CudaDriverRoutine_5bda0(__int64);
unsigned __int64 CudaDriverRoutine_5c030(__int64);
unsigned int* CudaDriverRoutine_5b220(unsigned int* result, int, __int64,
                                      unsigned int);
void CudaDriverRoutine_4198();
void CudaDriverRoutine_4230();
void CudaDriverRoutine_4484();
void CudaDriverRoutine_5194();
void CudaDriverRoutine_5e800(__int64, unsigned int);
void CudaDriverRoutine_7210();
void CudaDriverRoutine_7370();
void CudaDriverRoutine_7378();
void cuda_driver_5b0c0_alt1(__int64, __int64) __asm__("cuda_driver_5b0c0");
void cuda_driver_fbd40(__int64, char);
__int64 cuda_driver_21400(__int64 a1, __int64 a2, int a3);
__int64 cuda_driver_21ec0(_QWORD* a1, int64x2_t* a2, unsigned int a3);
__int64 cuda_driver_22620(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7, _QWORD* a8,
                          __int64 a9, __int64 a10);
__int64 cuda_driver_237d0(__int64 a1, __int64 a2, __int64 a3,
                          unsigned __int64 a4, __int64 a5, _QWORD* a6,
                          unsigned __int64 a7);
__int64 cuda_driver_23cd0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                          __int64 a5);
__int64 cuda_driver_24340(unsigned __int64 a1, __int64 a2);
__int64 cuda_driver_24490(__int64* a1, _QWORD* a2, __int64* a3);
__int64 cuda_driver_251d0(__int64 a1, char a2);
__int64 cuda_driver_254e0(__int64 a1, char a2);
__int64 CudaDriverRoutine_99f70(__int64, __int64);
__int64 cuda_driver_26f80(__int64 a1, int a2);
__int64 cuda_driver_271e0(_DWORD* a1, int a2, int a3, int a4);
__int64 cuda_driver_284f0(__int64 a1, __int64* a2, unsigned int a3,
                          unsigned int a4);
__int64 cuda_driver_2b0c0(__int64* a1, __int64 a2, __int64 a3, int a4, int a5);
__int64 cuda_driver_2b220(__int64 a1, __int64 a2);
__int64 cuda_driver_2ce20(__int64* a1, __int64 a2, __int64 a3, unsigned int a4,
                          int a5);
__int64 cuda_driver_2d560(unsigned __int64 a1, __int64 a2, __int64 a3, int a4,
                          __int64* a5, _QWORD* a6);
__int64 cuda_driver_2e480(__int64 a1, __int64* a2);
__int64 cuda_driver_2ed10(__int64 a1, __int64 a2);
__int64 cuda_driver_2ef60(__int64 a1, __int64 a2);
__int64 cuda_driver_2fae0(__int64 a1, __int64 a2, __int64 a3,
                          unsigned __int8* a4, __int64 a5);
__int64 cuda_driver_2ff50(__int64 a1, __int64 a2);
__int64 cuda_driver_30490(unsigned __int64 a1, __int64 a2, __int64 a3, int a4);
__int64 cuda_driver_30790(__int64 result, __int64 a2);
__int64 cuda_driver_307f0(__int64 result, __int64 a2, __int64 a3, int a4,
                          int a5);
__int64 cuda_driver_30e80(__int64 a1, __int64 a2, int a3, unsigned __int8* a4);
__int64 cuda_driver_316f0(_QWORD* a1, __int64 a2, __int64 a3,
                          unsigned __int8* a4, __int64 a5, __int64 a6);
__int64 cuda_driver_32230(unsigned __int64 a1, __int64 a2, unsigned int* a3);
__int64 cuda_driver_327b0(_QWORD* a1, __int64 a2, unsigned int a3, int a4);
__int64 cuda_driver_33a60(__int64 a1, __int64 a2, __int64 a3, unsigned int* a4,
                          __int64 a5, __int64 a6, __int64 a7);
__int64 cuda_driver_37930(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                          unsigned int a5);
__int64 cuda_driver_37c10(unsigned __int64 a1, __int64 a2, unsigned int a3,
                          unsigned __int64 a4);
__int64 cuda_driver_37fe0(__int64* a1, unsigned __int64* a2, int* a3,
                          __int64 a4, unsigned __int64 a5, __int64 a6);
__int64 cuda_driver_383e0(__int64 a1, _QWORD* a2, __int64 a3,
                          unsigned __int64 a4, unsigned int a5, int* a6,
                          __int64** a7);
__int64 cuda_driver_39cb0(_QWORD* a1, __int64 a2, char a3, char a4);
__int64 cuda_driver_39e80(unsigned __int64 a1);
__int64 cuda_driver_3a490(int* a1, __int64 a2);
__int64 cuda_driver_3a9c0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                          __int64 a5);
__int64 cuda_driver_40e00(__int64* a1, __int64 a2, unsigned __int64 a3,
                          __int64 a4, __int64 a5);
__int64 cuda_driver_41820(unsigned __int64 a1, __int64 a2, int* a3, __int64 a4);
__int64 cuda_driver_43ef0(__int64* a1, __int64 a2, _OWORD* a3);
__int64 cuda_driver_44a20(__int64 a1, int a2, int a3, __int64 a4, __int64 a5,
                          __int64 a6, __int64* a7, int a8, unsigned int a9,
                          unsigned int a10, char a11);
__int64 cuda_driver_45b10(__int64** a1, __int64 a2, __int64 a3);
__int64 cuda_driver_45c70(__int64** a1, __int64 a2, __int64 a3);
__int64 cuda_driver_49a00(__int64 result, __int64 a2);
__int64 cuda_driver_4c3f0(__int64 a1, __int64 a2, __int64 a3);
__int64* cuda_driver_4d860(__int64* result, _QWORD* a2);
__int64 cuda_driver_4db20(unsigned __int64* a1, unsigned __int64 a2,
                          unsigned __int64 a3, _QWORD* a4);
__int64 cuda_driver_4f8e0(__int64 a1, _QWORD* a2, __int64* a3);
__int64 cuda_driver_514c0(__int64* a1, __int64 a2, __int64 a3);
__int64 cuda_driver_52110(__int64 a1);
bool cuda_driver_525c0();
__int64 cuda_driver_525e0(__int64 result);
__int64 cuda_driver_53610(__int64* a1);
__int64 cuda_driver_54130(__int64 a1);
__int64 cuda_driver_54690(__int64 a1);
__int64 cuda_driver_547e0(__int64 result, __int64 a2);
double cuda_driver_548d0(__int64 a1, __int64 a2, __int64 a3);
_QWORD* cuda_driver_54a60(_QWORD* result);
__int64 cuda_driver_550f0(__int64 a1);
__int64 cuda_driver_55a00(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7);
__int64 cuda_driver_58e10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7);
__int64 cuda_driver_595a0(__int64 a1, _QWORD* a2, unsigned int a3,
                          unsigned int a4);
void cuda_driver_59a40(_DWORD* a1, __int64 a2, char a3, char a4);
void cuda_driver_59ce0(__int64 a1);
__int64 cuda_driver_5a060(__int64 a1);
bool cuda_driver_5a220(__int64 a1, unsigned __int64 a2, unsigned int a3);
__int64 cuda_driver_5a700(__int64* a1, char a2, _BYTE* a3, unsigned int a4,
                          char a5);
__int64 cuda_driver_5aba0(__int64 a1, __int64* a2, char a3);
void cuda_driver_5b0c0(__int64 a1, _DWORD* a2);
__int64 cuda_driver_5c2a0(__int64* a1);
__int64 cuda_driver_5c430(_QWORD* a1, __int64 a2);
__int64 cuda_driver_5d3e0(__int64 a1, __int64 a2);
__int64 cuda_driver_5d740(_QWORD* a1);
__int64 cuda_driver_5d860(unsigned __int64 a1, __int64 a2);
__int64 cuda_driver_5df40(__int64 a1);
__int64 cuda_driver_5e0a0(__int64 a1);
__int64 cuda_driver_5e160(_QWORD* a1, __int64* a2, int a3, int a4, int a5);
__int64 cuda_driver_5e360(__int64 a1);
__int64
CudaDriverRoutine_1218b0_alt1(__int64*,
                              __int64) __asm__("CudaDriverRoutine_1218b0");
__int64 CudaDriverRoutine_1297a0(__int64, _QWORD*);
__int64 CudaDriverRoutine_205fa0(int, __int64, __int64, __int64*);
__int64 CudaDriverRoutine_2060c0(__int64, __int64, __int16);
__int64 CudaDriverRoutine_9bed0(__int64 result, __int64);
__int64 cuda_driver_97bc0(__int64, __int64, unsigned int, int);
__int64 cuda_driver_9bad0(__int64*, __int64*);
__int64 cuda_driver_9e5f0(__int64, __int64, __int128*);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
unsigned __int64 CudaDriverRoutine_5b820(__int64);
__int64 cuda_driver_unplaced_2_4f330(_QWORD* a1, unsigned __int64* a2, int a3);
__int64 cuda_driver_57800(__int64 a1, __int64 a2, __int64 a3);

__int64 cuda_driver_21400(__int64 a1, __int64 a2, int a3)
{
  *(_DWORD*)(CudaDriverStub_1dbab0(a2) + 4) = 1;
  __builtin_arm_dmb(0xFu);
  CudaDriverStub_1dbab0(a2);
  __builtin_arm_dmb(0xEu);
  if (a3 == 1) {
    return (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) +
                                   104LL))(
        *(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
  }
  else {
    return 0;
  }
}

__int64 cuda_driver_21ec0(_QWORD* a1, int64x2_t* a2, unsigned int a3)
{
  int64x2_t v5;
  __int64 result;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned __int64 v13;
  __int128 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v16 = 0;
  v17 = 0;
  v15 = 0;
  v13 = 0;
  v14 = (__typeof__(v14)){0};
  if (a2 != nullptr) {
    v5 = *a2;
    HIDWORD(v14) = LANES128(a2[2]).n128_u32[0];
    LODWORD(v14) = LANES128(a2[1]).n128_u64[0];
    v13 = LANES64_OF(vmovn_s64(v5)).n64_u64[0];
    *(_QWORD*)((char*)&v14 + 4) = LANES128(a2[1]).n128_u64[1];
  }
  result = CudaDriverRoutine_121c60(&v17);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v17, &v15, 2u);
    if ((_DWORD)result == 0) {
      result = cuda_driver_121e20(v17);
      if ((_DWORD)result == 0) {
        if (a1 != nullptr) {
          result = CudaDriverRoutine_87190(v15, (unsigned int*)&v13, 1u, a3, 0);
          if ((_DWORD)result == 0) {
            v7 = v13;
            v8 = v14;
            if ((unsigned int)v13 <= HIDWORD(v13)) {
              v7 = HIDWORD(v13);
            }
            if (v7 > (unsigned int)v14) {
              v8 = v7;
            }
            if ((BYTE12(v14) & 5) == 0) {
              v7 = v8;
            }
            v9 = 32 - __clz(v7);
            if (a3 < v9) {
              v9 = a3;
            }
            if (v9 <= 1) {
              v9 = 1;
            }
            if (v7 != 0) {
              v10 = v9;
            }
            else {
              v10 = 1;
            }
            cuda_driver_108520(v15 + 24);
            v11 = CudaDriverRoutine_89f80(&v16, v15, (__int128*)&v13, v10, 0);
            CudaDriverRoutine_1085d0(v15 + 24);
            if (v11 != 0) {
              return v11;
            }
            else {
              result = CudaDriverRoutine_10e1b0(v16);
              if ((_DWORD)result != 0) {
                v12 = result;
                cuda_driver_108520(v15 + 24);
                CudaDriverRoutine_8a9e0(v16);
                CudaDriverRoutine_1085d0(v15 + 24);
                return v12;
              }
              else {
                *a1 = v16;
              }
            }
          }
        }
        else {
          return 1;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_22620(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7, _QWORD* a8,
                          __int64 a9, __int64 a10)
{
  __int64 v10;
  unsigned int v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned int v22;
  unsigned int v23;
  int* v24;
  unsigned __int64 v25;
  int v26;
  unsigned __int64 v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  bool v35;
  char v36;
  char v38;
  bool v39;
  unsigned __int64 v40;
  unsigned __int64 v42;
  int v44;
  int v45;
  int v46;
  int v47;
  _QWORD* v48;
  int v49;
  __int64 v50;
  _QWORD* v51;
  _QWORD* v52;
  int v53;
  unsigned int v54;
  unsigned __int64 v55;
  bool v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned int v59;
  int v60;
  int v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int128 v73;
  __int64 v74;
  unsigned int v75;
  __int64 v76;
  int v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  int v86;
  int v87;
  unsigned int v88;
  _QWORD* v90;
  unsigned __int64 v91;
  __int64 v92;
  int v93;
  _DWORD* v94;
  __int64 v95;
  __int64 v96;
  int v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  _BYTE v105[24];
  struct {
    _QWORD v106[21];
    int v107;
  } v106_;
  struct {
    int v108[50];
    __int64 v109;
    char gap592_[53];
    char v110;
  } v108_;
  unsigned int v111;
  struct {
    _QWORD v112[8];
    __int128 v113;
    __int128 v114;
    __int128 v115;
    __int128 v116;
  } v112_;
  struct {
    _QWORD* v117[8];
    __int128 v118;
    __int128 v119;
    __int128 v120;
    __int128 v121;
  } v117_;
  struct {
    __int64 v122[6];
    __int128 v123;
    __int128 v124;
    __int128 v125;
    __int64 v126;
  } v122_;
  struct {
    _QWORD v127[6];
    __int128 v128;
    __int128 v129;
    __int128 v130;
    __int64 v131;
  } v127_;
  __int64 v132;
  _BYTE v133[200];
  struct {
    _DWORD v134[5];
    int v135;
  } v134_;
  bool v136;
  bool v137;
  struct {
    __int64 v138[6];
    __int128 v139;
  } v138_;
  struct {
    __int128 v140;
    __int128 v141;
    __int64 v142;
  } v140_;

  v10 = a10;
  v132 = 0;
  v127_.v131 = 0;
  v122_.v126 = 0;
  v111 = 2;
  v127_.v130 = (__typeof__(v127_.v130)){0};
  v127_.v129 = (__typeof__(v127_.v129)){0};
  v127_.v128 = (__typeof__(v127_.v128)){0};
  memset(v127_.v127, 0, sizeof(v127_.v127));
  memset(v122_.v122, 0, sizeof(v122_.v122));
  v122_.v123 = (__typeof__(v122_.v123)){0};
  v122_.v124 = (__typeof__(v122_.v124)){0};
  v122_.v125 = (__typeof__(v122_.v125)){0};
  CudaDriverStub_107f90(a10 + 592);
  v19 = cuda_driver_1bace0(&v111, *(__int64**)(a10 + 584), 3);
  CudaDriverStub_108070(a10 + 592);
  if (v19 == 0) {
    if (a4 != 0) {
      v95 = a4;
      v96 = a5;
      v101 = a1;
      v102 = 0;
      v20 = 0;
      v92 = a6;
      v90 = a8;
      v21 = 0;
      v93 = 0;
      v97 = 0;
      v100 = a3;
      v98 = a7 - 1;
      v99 = a2;
      while (1) {
        v22 = CudaDriverRoutine_22420(
            *(_QWORD*)(v101 + 8 * v20), *(_QWORD*)(a2 + 8 * v20),
            *(_QWORD*)(a3 + 8 * v20), a9, v10, (__int64)v105);
        if (v22 != 0) {
          v19 = v22;
          if (v90 != nullptr) {
            *v90 = v20;
          }
          goto LABEL_196;
        }
        if (v21 < v98 && v20 == *(_QWORD*)(v92 + 8 * (v21 + 1))) {
          ++v21;
        }
        v23 = v111;
        v122_.v126 = 0;
        v140_.v142 = 0;
        v24 = (int*)(a5 + 24 * v21);
        v25 = *(_QWORD*)(v24 + 3);
        v26 = *v24;
        v27 = *(_QWORD*)(v24 + 1);
        v94 = v24;
        memset(v122_.v122, 0, sizeof(v122_.v122));
        v122_.v123 = (__typeof__(v122_.v123)){0};
        v103 = v25;
        v104 = v21;
        v28 = v24[5];
        v122_.v124 = (__typeof__(v122_.v124)){0};
        v122_.v125 = (__typeof__(v122_.v125)){0};
        memset(v138_.v138, 0, sizeof(v138_.v138));
        v138_.v139 = (__typeof__(v138_.v139)){0};
        v140_.v140 = (__typeof__(v140_.v140)){0};
        v140_.v141 = (__typeof__(v140_.v141)){0};
        if (v26 == 2) {
          LOBYTE(v138_.v139) = 1;
        }
        HIDWORD(v138_.v138[5]) = 3;
        v29 = CudaDriverRoutine_f97c0((__int64)v105, v138_.v138, &v138_.v138[1],
                                      &v138_.v138[2]);
        CudaDriverRoutine_f9b10((__int64)v105, v29, v138_.v138[0],
                                v138_.v138[1], v138_.v138[2], &v138_.v138[3],
                                &v138_.v138[4]);
        if (v29 >= 0x40) {
          LODWORD(v138_.v138[5]) = 5;
          v30 = CudaDriverRoutine_98340(*(_QWORD*)(v138_.v138[3] + 16));
          CudaDriverRoutine_f8090((int*)v106_.v106, v30);
          v31 = CudaDriverRoutine_98340(*(_QWORD*)(v138_.v138[4] + 16));
          CudaDriverRoutine_f8090(v108_.v108, v31);
          goto LABEL_117;
        }
        CudaDriverRoutine_f8090((int*)v106_.v106, v138_.v138[2]);
        CudaDriverRoutine_f8090(v108_.v108, v138_.v138[2]);
        v32 = CudaDriverRoutine_98340(*(_QWORD*)(v138_.v138[3] + 16));
        v137 = false;
        v136 = false;
        v33 = cuda_driver_fb050((__int64)v106_.v106, v32, 1, &v137, &v136);
        if (v33 != 0) {
          goto LABEL_195;
        }
        v35 = v136 || !v137;
        v36 = !v35;
        if (v137) {
          HIDWORD(v138_.v138[5]) = 2;
          if ((unsigned __int8)cuda_driver_predicates_f7910(
                  (__int64)v108_.v108) == 0 &&
              CudaDriverRoutine_fa910(v32, v106_.v106)) {
            v38 = 0;
            v39 = true;
            goto LABEL_26;
          }
          if ((unsigned __int8)cuda_driver_predicates_f7910(
                  (__int64)v106_.v106) == 0) {
            v38 = 1;
            v39 = !cuda_driver_faa80(v32, (int*)v106_.v106);
            goto LABEL_26;
          }
        }
        v38 = 1;
        v39 = true;
      LABEL_26:
        v91 = v27;
        v40 =
            CudaDriverRoutine_24010((__int64)v106_.v106, v108_.v109, v32, v27);
        v42 =
            CudaDriverRoutine_24010((__int64)v108_.v108, v108_.v109, v32, v103);
        if ((v36 & 1) == 0 &&
            (unsigned __int8)cuda_driver_predicates_f7910(
                (__int64)v106_.v106) != 0 &&
            (unsigned __int8)cuda_driver_predicates_f7910(
                (__int64)v108_.v108) == 0 &&
            !cuda_driver_f7b60(v108_.v108, v32) &&
            (unsigned __int8)CudaDriverRoutine_f8160(v32, (__int64)v106_.v106,
                                                     v23) != 0) {
          v44 = 2;
          LODWORD(v138_.v138[5]) = 2;
          if (v26 == 2) {
            v10 = a10;
            v46 = 0;
            v45 = 0;
            LOBYTE(v138_.v139) = 0;
          }
          else {
            v10 = a10;
            v46 = 0;
            v45 = 0;
            if (v26 == 1) {
              BYTE1(v138_.v139) = 1;
              v44 = 2;
            }
          }
          goto LABEL_42;
        }
        if ((v38 & 1) == 0) {
          v44 = 8;
        LABEL_39:
          v10 = a10;
          goto LABEL_40;
        }
        if (!v39) {
          v44 = 9;
          goto LABEL_39;
        }
        if ((_DWORD)v40 == 1 && (_DWORD)v42 == 1) {
          if ((*(_BYTE*)(*(_QWORD*)(v32 + 64) + 3360LL) & 1) != 0) {
            v108_.v110 = v28 & 1;
            if ((v28 & 1) != 0 || (unsigned int)v91 != 1) {
              goto LABEL_84;
            }
          }
          else {
            v108_.v110 = 0;
            if ((_DWORD)v91 != 1) {
            LABEL_84:
              if (CudaDriverRoutine_1b76a0(v32, (__int64)v106_.v106) &&
                  CudaDriverRoutine_fb5d0(v32, (int*)v106_.v106)) {
                goto LABEL_86;
              }
              v57 = v42 ^ v40;
              v10 = a10;
              v44 = 7;
              v45 = 3;
              LODWORD(v138_.v138[5]) = 7;
              if (HIDWORD(v57) != 0) {
                v46 = 5;
              }
              else {
                v46 = 2;
              }
              goto LABEL_42;
            }
          }
          if ((unsigned int)v103 == 1 && (v103 ^ v91) >> 32 == 0 &&
              CudaDriverStub_f78c0(v106_.v106) &&
              CudaDriverStub_f78c0(v108_.v108) &&
              *(_BYTE*)(*(_QWORD*)(v32 + 64) + 17096LL) != 0) {
          LABEL_86:
            v10 = a10;
            v44 = 6;
            v46 = 16;
            v45 = 6;
            LODWORD(v138_.v138[5]) = 6;
            goto LABEL_42;
          }
          goto LABEL_84;
        }
        v54 = v42 - 2;
        if ((unsigned int)(v40 - 2) > 2) {
          if ((_DWORD)v40 != 1 || v54 >= 3) {
          LABEL_99:
            v44 = v138_.v138[5];
            v10 = a10;
            goto LABEL_41;
          }
          v10 = a10;
          if (CudaDriverRoutine_242a0(v32, (__int64)v108_.v108)) {
            v44 = 4;
            goto LABEL_40;
          }
          *(_QWORD*)&v134_.v134[1] = v91;
        LABEL_109:
          v134_.v134[0] = v26;
          v134_.v135 = v28;
          *(_QWORD*)&v134_.v134[3] = v103;
          if ((unsigned __int8)CudaDriverRoutine_241b0(v32, (__int64)v106_.v106,
                                                       v134_.v134) == 0) {
            v44 = 7;
            v45 = 3;
            v46 = 2;
            LODWORD(v138_.v138[5]) = 7;
            goto LABEL_42;
          }
        LABEL_112:
          v44 = 6;
          v46 = 16;
          v45 = 6;
          LODWORD(v138_.v138[5]) = 6;
          goto LABEL_42;
        }
        if (v54 <= 2) {
          if ((*(_BYTE*)(*(_QWORD*)(v32 + 64) + 17068LL) & 2) != 0) {
            v10 = a10;
            v55 = v91;
            v56 = false;
          }
          else {
            v55 = v91;
            v56 = v106_.v107 == 2 || v108_.v108[42] == 2;
            v10 = a10;
          }
          if ((unsigned __int8)cuda_driver_f7ce0(v106_.v106, v32) == 0 ||
              (unsigned __int8)cuda_driver_f7ce0(v108_.v108, v32) == 0 || v56) {
            v58 = *(_QWORD*)(v32 + 64);
            v44 = 1;
            LOBYTE(v138_.v139) = 0;
            LODWORD(v138_.v138[5]) = 1;
            BYTE1(v138_.v139) = (v26 != 2) & *(_BYTE*)(v58 + 3360);
            goto LABEL_41;
          }
          *(_QWORD*)&v134_.v134[1] = v55;
          goto LABEL_109;
        }
        if ((_DWORD)v42 != 1) {
          goto LABEL_99;
        }
        v10 = a10;
        if (CudaDriverRoutine_242a0(v32, (__int64)v106_.v106)) {
          if (v26 == 2) {
            LOBYTE(v138_.v139) = 0;
          }
          else if (v26 == 1) {
            BYTE1(v138_.v139) = 1;
          }
          v44 = 3;
        LABEL_40:
          LODWORD(v138_.v138[5]) = v44;
        LABEL_41:
          v45 = 6;
          v46 = 16;
          goto LABEL_42;
        }
        v134_.v134[0] = v26;
        v134_.v135 = v28;
        *(_QWORD*)&v134_.v134[1] = v91;
        *(_QWORD*)&v134_.v134[3] = v103;
        if ((unsigned __int8)CudaDriverRoutine_241b0(v32, (__int64)v106_.v106,
                                                     v134_.v134) != 0) {
          goto LABEL_112;
        }
        v44 = 7;
        v45 = 3;
        v46 = 1;
        LODWORD(v138_.v138[5]) = 7;
      LABEL_42:
        v47 = v127_.v127[5];
        if (LODWORD(v127_.v127[5]) == v44) {
          if (v44 != 7 && v44 != 2 ||
              (v48 = *((_QWORD**)&v127_.v128 + 1),
               *((_QWORD*)&v127_.v128 + 1) != 0) &&
                  (v49 = v45,
                   v50 =
                       CudaDriverRoutine_98340(*(_QWORD*)(v138_.v138[3] + 16)),
                   v45 = v49, *v48 == *(_QWORD*)(v50 + 72)) &&
                  *(_DWORD*)(v48[4227] + 36LL) == v46) {
            if (BYTE1(v127_.v128) == BYTE1(v138_.v139) &&
                (unsigned __int8)v127_.v128 == (unsigned __int8)v138_.v139 &&
                v127_.v127[0] == v138_.v138[0] &&
                *(_OWORD*)&v127_.v127[1] == *(_OWORD*)&v138_.v138[1] &&
                *(_OWORD*)&v127_.v127[3] == *(_OWORD*)&v138_.v138[3]) {
              *((_QWORD*)&v138_.v139 + 1) = *((_QWORD*)&v127_.v128 + 1);
            LABEL_116:
              LOBYTE(v140_.v142) = v127_.v131;
              v140_.v140 = v127_.v129;
              v140_.v141 = v127_.v130;
              goto LABEL_117;
            }
          }
        }
        if (LODWORD(v138_.v138[5]) == 7 || LODWORD(v138_.v138[5]) == 2) {
          CudaDriverRoutine_fba20(v32, (__int64)v106_.v106, v45, 0,
                                  (__int64)&v140_.v140);
          v51 = CudaDriverRoutine_5f100(
              *(_QWORD*)(v32 + 72), (unsigned int*)&v140_.v140, v138_.v138[3]);
          v52 = *((_QWORD**)&v127_.v128 + 1);
          *((_QWORD*)&v138_.v139 + 1) = v51;
          if (v51 == *((_QWORD**)&v127_.v128 + 1) &&
              v47 == LODWORD(v138_.v138[5])) {
            if ((v53 = *(_DWORD*)(v51[4227] + 36LL), v47 != 7) && v47 != 2 ||
                *v52 == *(_QWORD*)(CudaDriverRoutine_98340(
                                       *(_QWORD*)(v138_.v138[3] + 16)) +
                                   72) &&
                    *(_DWORD*)(v52[4227] + 36LL) == v53) {
              if (BYTE1(v127_.v128) == BYTE1(v138_.v139) &&
                  (unsigned __int8)v127_.v128 == (unsigned __int8)v138_.v139 &&
                  v127_.v127[0] == v138_.v138[0] &&
                  *(_OWORD*)&v127_.v127[1] == *(_OWORD*)&v138_.v138[1] &&
                  *(_OWORD*)&v127_.v127[3] == *(_OWORD*)&v138_.v138[3]) {
                goto LABEL_116;
              }
            }
          }
        }
      LABEL_117:
        v122_.v126 = v140_.v142;
        v122_.v124 = v140_.v140;
        v122_.v125 = v140_.v141;
        qmemcpy(v122_.v122, v138_.v138, sizeof(v122_.v122));
        v122_.v123 = v138_.v139;
        if ((unsigned int)memcmp_plt(v127_.v127, v122_.v122, 104) != 0) {
          v59 =
              CudaDriverRoutine_235e0(v127_.v127, v132, (__int64)v133, a9, v10,
                                      HIDWORD(v102), (__int64)v112_.v112);
          if (v59 != 0) {
            return v59;
          }
          if (v97 == 0 && BYTE1(v122_.v123) != 0) {
            v97 = 1;
            v59 = CudaDriverRoutine_113ee0(v10, 1);
            if (v59 != 0) {
              return v59;
            }
          }
          v60 = (unsigned __int8)v122_.v123;
          v61 = v122_.v122[5];
          v132 = 0;
          if (LODWORD(v122_.v122[5]) == 2 || LODWORD(v122_.v122[5]) == 7) {
            v62 = v122_.v122[3];
            v63 = CudaDriverRoutine_98340(*(_QWORD*)(v122_.v122[3] + 16));
            CudaDriverRoutine_1ba4f0((__int64)v133, *(_QWORD*)(v63 + 72));
          }
          else {
            v62 = v122_.v122[3];
          }
          v73 = *(_OWORD*)v122_.v122;
          v74 = v122_.v122[4];
          HIDWORD(v102) = cuda_driver_118c20(v122_.v122[0], v122_.v122[1], a9,
                                             v10, v62, v122_.v122[4], 2u, 0);
          if (v10 != v62) {
            v75 = CudaDriverRoutine_114a80(v62, v10, 0);
            if (v75 != 0) {
            LABEL_202:
              v19 = v75;
              CudaDriverRoutine_119030(v73, *((__int64*)&v73 + 1), a9, v10, v62,
                                       v74, SBYTE4(v102));
              return v19;
            }
          }
          if (v61 != 5) {
            v59 = CudaDriverRoutine_f9bd0((int*)v106_.v106, v62, v62, v10, 1u,
                                          0, HIDWORD(v122_.v122[5]),
                                          (__int64)v117_.v117, 1);
            if (v59 != 0) {
              return v59;
            }
            if (v61 == 7 || v61 == 2) {
              v75 = CudaDriverRoutine_206380(v62, (__int64)v133, 1u);
              if (v75 != 0) {
                goto LABEL_202;
              }
              v76 = *((_QWORD*)&v122_.v123 + 1);
              CudaDriverStub_2066f0(*((_QWORD*)&v122_.v123 + 1), v62, &v132);
              if (v61 == 2) {
                v77 = 0;
              }
              else {
                v77 = 6;
              }
              if (v61 == 7) {
                v78 = 3;
              }
              else {
                v78 = v77;
              }
              BYTE6(v117_.v120) = 1;
              CudaDriverRoutine_fd890((__int64)&v117_.v117[5], v117_.v117[7],
                                      v62, v76, v78, (__int64)&v132);
              v79 = v122_.v125;
              if ((_QWORD)v122_.v125 != 0) {
                *(_QWORD*)(*(_QWORD*)(v76 + 33816) + 272LL) =
                    *(_QWORD*)(*(_QWORD*)(v62 + 16) + 64LL);
                v80 = *(_QWORD*)(v76 + 33816);
                if (*(_QWORD*)(v80 + 272) != *((_QWORD*)&v122_.v124 + 1)) {
                  v79 = *((_QWORD*)&v122_.v124 + 1);
                }
                *(_QWORD*)(v80 + 264) = v79;
              }
            }
          }
          v93 = 0;
          LODWORD(v102) = v60 | v102;
          LOBYTE(v122_.v126) = 1;
          if ((v61 & 0xFFFFFFFE) != 6) {
            goto LABEL_129;
          }
        LABEL_128:
          cuda_driver_fbd40((__int64)v106_.v106, 1);
          goto LABEL_129;
        }
        v61 = v122_.v122[5];
        if (LODWORD(v122_.v122[5]) == 5) {
          goto LABEL_168;
        }
        BYTE8(v117_.v121) = 1;
        v33 = CudaDriverRoutine_f9bd0(
            (int*)v106_.v106, v122_.v122[3], v122_.v122[3], v10, 1u, 0,
            HIDWORD(v122_.v122[5]), (__int64)v117_.v117, 1);
        if (v33 != 0) {
        LABEL_195:
          v19 = v33;
          goto LABEL_196;
        }
        if ((v61 & 0xFFFFFFFE) == 6) {
          goto LABEL_128;
        }
      LABEL_129:
        v19 = 401;
        if (v61 <= 4) {
          if (v61 > 2) {
            if (v61 == 3) {
              v64 = CudaDriverRoutine_1d50e0(v106_.v106, v122_.v122[3],
                                             (__int64)&v117_.v117[5],
                                             HIDWORD(v122_.v122[5]));
            }
            else {
              v64 = CudaDriverRoutine_1d5df0(v106_.v106, v122_.v122[3],
                                             (__int64)&v117_.v117[5],
                                             HIDWORD(v122_.v122[5]));
            }
            goto LABEL_175;
          }
          if (v61 == 1) {
            if (*v94 == 2 || v97 != 0 || v111 == 5) {
              CudaDriverRoutine_fcca0((__int64)v106_.v106,
                                      (__int64)&v117_.v117[5]);
              v19 = 0;
            }
            else {
              v19 = CudaDriverRoutine_23750((__int64)v106_.v106, v122_.v122[3]);
              v97 = 0;
            }
            goto LABEL_176;
          }
          if (v61 != 2) {
            goto LABEL_186;
          }
        LABEL_138:
          v65 = v132;
          if (v132 != 0) {
            v66 = CudaDriverRoutine_98340(*(_QWORD*)(v122_.v122[3] + 16));
            v67 = *((_QWORD*)&v122_.v123 + 1);
            v68 = v66;
            v138_.v138[0] = v65;
            v69 = *(_QWORD*)(v101 + 8 * v20);
            v70 = *(_QWORD*)(v99 + 8 * v20);
            v71 = *(_QWORD*)(v100 + 8 * v20);
            if (v93 != 0 &&
                (unsigned __int8)cuda_driver_1968d0(
                    *((__int64*)&v122_.v123 + 1), v65, v93 + 1152, 0) == 0) {
              CudaDriverStub_5ab60(v67, v138_.v138);
            }
            if (v61 == 2) {
              v72 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                                    __int64))(*(_QWORD*)(v68 + 64) + 19248LL))(
                  v138_.v138[0], v68, v69, v70, v71, 2);
            }
            else {
              v72 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                                    _QWORD, bool, __int64))(
                  *(_QWORD*)(v68 + 64) + 19224LL))(v138_.v138[0], v68, v69, v70,
                                                   v71, 0, v93 != 0, 2);
            }
            v84 = v93;
            v132 = v72;
            if (v93 == 0) {
              v84 = v72 - v65;
            }
            v93 = v84;
            if (BYTE6(v117_.v120) != 0) {
              *((_QWORD*)&v117_.v120 + 1) = *(_QWORD*)(v100 + 8 * v20);
              v85 = 1;
            }
            else {
              DWORD1(v117_.v118) = DWORD1(v112_.v113);
              *((_QWORD*)&v117_.v120 + 1) =
                  *(_QWORD*)(v100 + 8 * v20) + *((_QWORD*)&v112_.v115 + 1);
              v85 = v112_.v116 + 1;
            }
            v19 = 0;
            *(_QWORD*)&v117_.v121 = v85;
          }
          goto LABEL_186;
        }
        if (v61 > 6) {
          if (v61 != 7) {
            if (v61 != 8) {
              if (v61 == 9) {
                v64 = CudaDriverRoutine_1d6cc0(v106_.v106, v122_.v122[3],
                                               SHIDWORD(v122_.v122[5]),
                                               (__int64)&v117_.v117[5]);
                goto LABEL_175;
              }
            LABEL_186:
              if ((unsigned int)v61 <= 7) {
                v83 = v95;
                a5 = v96;
                v86 = 1 << v61;
                a2 = v99;
                a3 = v100;
                if ((v86 & 0xA4) != 0) {
                  goto LABEL_188;
                }
                goto LABEL_177;
              }
            LABEL_176:
              v83 = v95;
              a5 = v96;
              a2 = v99;
              a3 = v100;
            LABEL_177:
              CudaDriverRoutine_fa700(v19, v10, (__int64)v117_.v117, 0);
              goto LABEL_188;
            }
            v64 = CudaDriverRoutine_1d6380((__int64)v106_.v106, v122_.v122[3],
                                           SHIDWORD(v122_.v122[5]),
                                           (__int64)&v117_.v117[5]);
          LABEL_175:
            v19 = v64;
            goto LABEL_176;
          }
          goto LABEL_138;
        }
        if (v61 != 5) {
          v81 = v122_.v122[3];
          v82 = CudaDriverRoutine_98340(*(_QWORD*)(v122_.v122[3] + 16));
          v64 = CudaDriverRoutine_fbcc0(v82, (__int64)v106_.v106, v81,
                                        (__int64)&v117_.v117[5]);
          goto LABEL_175;
        }
      LABEL_168:
        v83 = v95;
        a5 = v96;
        a2 = v99;
        a3 = v100;
        v19 = cuda_driver_1d5f60((__int64)v106_.v106, v122_.v122[4],
                                 v122_.v122[3], v10, 1u, HIDWORD(v122_.v122[5]),
                                 0, 0, 1);
      LABEL_188:
        if (v19 != 0) {
          goto LABEL_196;
        }
        ++v20;
        v127_.v131 = v122_.v126;
        v127_.v129 = v122_.v124;
        v127_.v130 = v122_.v125;
        qmemcpy(v127_.v127, v122_.v122, sizeof(v127_.v127));
        v127_.v128 = v122_.v123;
        qmemcpy(v112_.v112, v117_.v117, sizeof(v112_.v112));
        v112_.v115 = v117_.v120;
        v112_.v116 = v117_.v121;
        v112_.v113 = v117_.v118;
        v112_.v114 = v117_.v119;
        v35 = v83 == v20;
        v21 = v104;
        if (v35) {
          v19 = 0;
        LABEL_196:
          v87 = v102;
          v88 = HIDWORD(v102);
          goto LABEL_197;
        }
      }
    }
    v19 = 0;
    v87 = 0;
    v88 = 0;
  LABEL_197:
    CudaDriverRoutine_235e0(v122_.v122, v132, (__int64)v133, a9, v10, v88,
                            (__int64)v117_.v117);
    if (v87 != 0 && v19 == 0) {
      return (unsigned int)CudaDriverRoutine_113ee0(v10, 1);
    }
  }
  return v19;
}

__int64 cuda_driver_237d0(__int64 a1, __int64 a2, __int64 a3,
                          unsigned __int64 a4, __int64 a5, _QWORD* a6,
                          unsigned __int64 a7)
{
  __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64* v16;
  const char* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;

  if (a1 == 0 || a2 == 0 || a3 == 0 || a4 == 0) {
    if (a1 != 0) {
      if (a2 != 0) {
        goto LABEL_12;
      }
    }
    else {
      v9 = a2;
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Parameter dsts cannot be NULL");
      a2 = v9;
      if (v9 != 0) {
      LABEL_12:
        if (a3 != 0) {
          goto LABEL_13;
        }
        goto LABEL_21;
      }
    }
    CudaDriverRoutine_ed630((__int64)"CUDA", a2,
                            (__int64)"Parameter srcs cannot be NULL");
    if (a3 != 0) {
    LABEL_13:
      if (a4 != 0) {
        return 1;
      }
    LABEL_22:
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Parameter count cannot be 0");
      return 1;
    }
  LABEL_21:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Parameter sizes cannot be NULL");
    if (a4 != 0) {
      return 1;
    }
    goto LABEL_22;
  }
  if (a5 == 0 || a6 == nullptr || a7 == 0) {
    if (a5 != 0) {
      if (a6 != nullptr) {
        goto LABEL_17;
      }
    }
    else {
      v11 = a7;
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Parameter attrs cannot be NULL");
      a7 = v11;
      if (a6 != nullptr) {
      LABEL_17:
        if (a7 != 0) {
        LABEL_18:
          CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                  (__int64)"Batch attributes unspecified");
          return 1;
        }
      LABEL_28:
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Parameter numAttrs cannot be 0");
        goto LABEL_18;
      }
    }
    v13 = a7;
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Parameter attrsIdxs cannot be NULL");
    if (v13 != 0) {
      goto LABEL_18;
    }
    goto LABEL_28;
  }
  if (a7 <= a4) {
    if (*a6 != 0) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"First attribute must start from index 0");
    }
    else {
      v14 = a7 - 1;
      v15 = a5 + 12;
      v16 = a6 + 1;
      v17 =
          "Invalid srcAccessOrder specified at index: %zu of attributes array";
      v18 = 0;
      while (1) {
        if (a7 == v18) {
          return 0;
        }
        if ((unsigned int)(*(_DWORD*)(v15 - 12) - 1) > 2) {
          goto LABEL_41;
        }
        if (*(_DWORD*)(v15 + 8) > 1u) {
          v17 = "Invalid flags specified at index: %zu of attributes array";
        LABEL_41:
          CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)v17, v18);
        LABEL_42:
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"Invalid attributes specified in attrs[%zu]", v18);
          return 1;
        }
        v19 = a7;
        if ((unsigned __int8)cuda_driver_24340(*(_QWORD*)(v15 - 8), v18) == 0) {
          goto LABEL_42;
        }
        v20 = *(_QWORD*)v15;
        v15 += 24;
        if ((unsigned __int8)cuda_driver_24340(v20, v18) == 0) {
          goto LABEL_42;
        }
        v21 = *(v16 - 1);
        if (v21 >= a4) {
          break;
        }
        if (v14 == v18) {
          return 0;
        }
        v23 = *v16++;
        v22 = v23;
        ++v18;
        a7 = v19;
        if (v21 >= v23) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"Attribute indices in parameter attrsIdxs are not "
                       "sorted. attrsIdxs[%zu]: %zu, attrsIdxs[%zu]: %zu",
              v18 - 1, v21, v18, v22);
          return 1;
        }
      }
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Specified attribute index(attrsIdx[%zd]: %zd) beyond batch "
                   "size(count: %zd)",
          v18, v21, a4);
    }
  }
  else {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Specified more attributes(numAttrs: %zu) "
                                     "than copies(count: %zu)",
                            a7, a4);
  }
  return 1;
}

__int64 cuda_driver_23cd0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                          __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v12;
  int v13;
  int v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  int v17;
  int v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  const char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25[7];

  if (a5 == 0) {
    v25[5] = v5;
    v25[6] = v6;
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Legacy NULL stream is not supported with "
                                     "batched memcpy API(s).");
    return 1;
  }
  v25[1] = v5;
  v25[2] = v6;
  result = cuda_driver_24490_alt1(a5, &v24, v25);
  if ((_DWORD)result == 0) {
    if (a1 == 0 || a2 == 0) {
      if (a1 != 0) {
        if (a2 != 0) {
          goto LABEL_13;
        }
      }
      else {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Argument numOps cannot be 0");
        if (a2 != 0) {
          goto LABEL_13;
        }
      }
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Argument opList cannot be NULL");
      goto LABEL_13;
    }
    if (a4 != 0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)"flags must be 0");
    LABEL_13:
      result = 1;
      goto LABEL_14;
    }
    v12 = a2 + 56;
    while (1) {
      v13 = *(_DWORD*)(v12 - 56);
      v14 = *(_DWORD*)(v12 - 16);
      if (((2 - v14) | (unsigned int)(2 - v13)) > 1) {
        result = 1;
        goto LABEL_15;
      }
      if ((unsigned int)(*(_DWORD*)(v12 + 48) - 1) >= 3) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Invalid srcAccessOrder specified at "
                                         "index: %zu of attributes array",
                                a4);
        goto LABEL_46;
      }
      if (*(_DWORD*)(v12 + 52) >= 2u) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Invalid flags specified at index: "
                                         "%zu of attributes array",
                                a4);
        goto LABEL_46;
      }
      v15 = *(_QWORD*)(v12 + 24);
      if (v15 == 0 || (v16 = *(_QWORD*)(v12 + 32)) == 0 ||
          *(_QWORD*)(v12 + 40) == 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Invalid extent specified for copy at index:(%zu)", a4);
      LABEL_46:
        result = 1;
        goto LABEL_15;
      }
      if (v13 == 1) {
        v19 = *(_QWORD*)(v12 - 40);
        if (v19 != 0 && v19 < v15) {
          v21 = *(_QWORD*)v12;
          v22 = "Invalid rowLength specified for src of copy at index:(%zu), "
                "rowLength:(%zu) and width:(%zu)";
        LABEL_52:
          v23 = a4;
          v16 = *(_QWORD*)(v12 + 24);
          goto LABEL_55;
        }
        v20 = *(_QWORD*)(v12 - 32);
        if (v20 != 0 && v20 < v16) {
          v21 = *(_QWORD*)(v12 + 8);
          v22 = "Invalid layerHeight specified for src of copy at index:(%zu), "
                "layerHeight:(%zu) and width:(%zu)";
        LABEL_54:
          v23 = a4;
        LABEL_55:
          CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)v22, v23, v21,
                                  v16);
          result = 1;
          goto LABEL_15;
        }
      }
      else if (v13 == 2) {
        if (v14 == 1) {
          goto LABEL_37;
        }
        if (v14 == 2) {
          v17 = *(_DWORD*)(*(_QWORD*)(v12 - 48) + 108LL);
          v18 = *(_DWORD*)(*(_QWORD*)(v12 - 8) + 108LL);
          if (v17 != v18) {
            CudaDriverRoutine_ed630(
                (__int64)"CUDA", 0,
                (__int64)"Mismatch between src array BytesPerElement(%u) and "
                         "dst array BytesPerElement(%u) for copy at "
                         "index:(%zu)",
                v17, v18, a4);
            result = 1;
            goto LABEL_15;
          }
        }
        goto LABEL_19;
      }
      if (v14 == 1) {
      LABEL_37:
        v21 = *(_QWORD*)v12;
        if (*(_QWORD*)v12 != 0 && v21 < v15) {
          v22 = "Invalid rowLength specified for dst of copy at index:(%zu), "
                "rowLength:(%zu) and width:(%zu)";
          goto LABEL_52;
        }
        v21 = *(_QWORD*)(v12 + 8);
        if (v21 != 0 && v21 < v16) {
          v22 = "Invalid layerHeight specified for dst of copy at index:(%zu), "
                "layerHeight:(%zu) and width:(%zu)";
          goto LABEL_54;
        }
      }
    LABEL_19:
      ++a4;
      v12 += 112;
      if (a1 == a4) {
        if (*(_QWORD*)(v24 + 992) != 0) {
          return 900;
        }
        result = CudaDriverRoutine_24640(a1, a2, a3, v25[0], v24);
        break;
      }
    }
  }
LABEL_14:
  a4 = -1;
LABEL_15:
  if (a3 != nullptr) {
    *a3 = a4;
  }
  return result;
}

__int64 cuda_driver_24340(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3;
  __int64 result;
  int v6;

  v3 = HIDWORD(a1);
  result = 1;
  if ((int)a1 <= 1) {
    if ((_DWORD)a1 != 0) {
      if ((_DWORD)a1 != 1) {
        goto LABEL_16;
      }
      if ((a1 & 0x8000000000000000LL) != 0 ||
          CudaDriverData_1434ac0 <= (int)v3) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Invalid device ordinal(%d) specified "
                                         "at index: %zu of attributes array",
                                v3, a2);
        return 0;
      }
    }
  }
  else {
    if ((_DWORD)a1 == 2) {
      return result;
    }
    if ((_DWORD)a1 != 3) {
      if ((_DWORD)a1 == 4) {
        if ((unsigned int)CudaDriverStub_4f840(1) != 0) {
          return 1;
        }
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"NUMA is not supported on this system, index %zu of "
                     "attributes array specifies "
                     "CU_MEM_LOCATION_TYPE_HOST_NUMA_CURRENT",
            a2);
        return 0;
      }
    LABEL_16:
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Invalid location type specified at "
                                       "index: %zu of attributes array",
                              a2);
      return 0;
    }
    v6 = CudaDriverStub_4f840(1);
    result = 1;
    if (v3 != 0 && v6 == 0) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"NUMA is not supported on this system, index %zu of "
                   "attributes array specifies CU_MEM_LOCATION_TYPE_HOST_NUMA",
          a2);
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_24490(__int64* a1, _QWORD* a2, __int64* a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = 0;
  *a2 = 0;
  *a3 = 0;
  if (a1 == (__int64*)((char*)((char*)0x0LL) + 1)) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Legacy NULL stream is not supported with this API");
    return 1;
  }
  result = CudaDriverRoutine_121c60(&v13);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (!CudaDriverRoutine_121b40(v13)) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"CUDA driver does not allow certain API "
                                     "calls from this thread");
    return 800;
  }
  v7 = CudaDriverRoutine_1216a0(v13);
  if (v7 != 0) {
    v8 = v7;
    result = cuda_driver_misc_helpers_deeb0(v7, 2);
    if ((_DWORD)result != 0) {
      return result;
    }
    v9 = CudaDriverRoutine_98340(v8);
  }
  else {
    v9 = 0;
  }
  result = cuda_driver_112680(v13, a1, 3u, &v11, &v12, 1, 2u);
  if ((_DWORD)result == 0) {
    if ((unsigned __int8)CudaDriverRoutine_985c0(v9) != 0 &&
        (unsigned __int8)CudaDriverRoutine_985c0(v12) != 0) {
      v10 = v12;
      *a2 = v11;
      *a3 = v10;
      return 0;
    }
    if ((unsigned __int8)CudaDriverRoutine_985c0(v9) == 0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"The current context must have UVA to "
                                       "use the batched memcpy API");
    }
    if ((unsigned __int8)CudaDriverRoutine_985c0(v12) == 0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"The stream context must have UVA to "
                                       "use the batched memcpy API");
    }
    return 1;
  }
  return result;
}

__int64 cuda_driver_251d0(__int64 a1, char a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;

  v8 = 0;
  if (a1 == 0) {
    return 1;
  }
  if (*(_DWORD*)a1 == 1) {
    if (*(_BYTE*)(a1 + 176) == 1) {
      return CudaDriverStub_8e1f0();
    }
    return 201;
  }
  result = CudaDriverRoutine_121c60(&v8);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v8, nullptr, 0);
    if ((_DWORD)result == 0) {
      if ((*(_BYTE*)(a1 + 12) & 2) != 0) {
        return 201;
      }
      result = cuda_driver_misc_helpers_deeb0(a1, 4);
      if ((_DWORD)result == 0) {
        v5 = CudaDriverRoutine_1216a0(v8);
        v6 = v5;
        if (a2 != 0) {
          if (*(_DWORD*)(a1 + 52) > 1u) {
            return 201;
          }
          __builtin_arm_dmb(0xFu);
          v7 = *(_DWORD*)(a1 + 48);
          __builtin_arm_dmb(0xFu);
          if (v7 == 2 && a1 != v5) {
            return 201;
          }
        }
        cuda_driver_9bd90(a1);
        if (a1 == v6) {
          CudaDriverRoutine_1219b0(v8);
        }
        return 0;
      }
    }
  }
  return result;
}

__int64 cuda_driver_254e0(__int64 a1, char a2)
{
  __int64 result;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;

  v8 = 0;
  result = CudaDriverRoutine_121c60(&v8);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v8, nullptr, 0);
    if ((_DWORD)result == 0) {
      if (a1 == 0) {
        return 1;
      }
      if (*(_DWORD*)a1 == 1) {
        result = 201;
        if (a2 != 0 || *(_BYTE*)(a1 + 4) == 0) {
          return result;
        }
        v5 = *(_QWORD*)(a1 + 168);
      }
      else {
        v5 = a1;
        if (a2 != 0) {
          if (*(_DWORD*)(a1 + 52) != 1) {
            return 201;
          }
          __builtin_arm_dmb(0xFu);
          v5 = a1;
          v6 = *(_DWORD*)(a1 + 48);
          __builtin_arm_dmb(0xFu);
          if (v6 > 1) {
            return 201;
          }
        }
      }
      result = CudaDriverRoutine_1218b0(v8, a1);
      v7 = result;
      if ((_DWORD)result == 0) {
        if (*(_QWORD*)(v5 + 64) == 0) {
          return 0;
        }
        CudaDriverRoutine_266b0(v5, &v7);
        result = v7;
        if (v7 == 0) {
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_26f80(__int64 a1, int a2)
{
  __int64 result;

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    if (a1 == 0) {
      return 1;
    }
    if (a2 < 0 || a2 >= CudaDriverData_1434ac0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Parameter dev must be between 0 and %d",
                              CudaDriverData_1434ac0);
      return 101;
    }
    return CudaDriverRoutine_99f70(
        *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a2 + 35), a1);
  }
  return result;
}

__int64 cuda_driver_271e0(_DWORD* a1, int a2, int a3, int a4)
{
  __int64 result;
  int v9;
  const char* v10;
  struct {
    _DWORD v11[4];
    char gap16_[1];
    unsigned __int8 v12;
    unsigned __int8 v13;
    unsigned __int8 v14;
  } v11_;

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (a1 == nullptr) {
    return 1;
  }
  if (a3 == a4) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Same source and destination device: %d\n",
                            (unsigned int)a3);
    return 101;
  }
  if (a3 < 0 || a3 >= CudaDriverData_1434ac0) {
    v10 = "Parameter srcDevice must be between 0 and %d";
  LABEL_17:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)v10,
                            (unsigned int)CudaDriverData_1434ac0);
    return 101;
  }
  if (a4 < 0 || a4 >= CudaDriverData_1434ac0) {
    v10 = "Parameter dstDevice must be between 0 and %d";
    goto LABEL_17;
  }
  result =
      CudaDriverRoutine_ec740(CudaDriverData_14348c0[a3],
                              CudaDriverData_14348c0[a4], (__int64)v11_.v11);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = 1;
  if (a2 <= 2) {
    if (a2 == 1) {
      v9 = v11_.v11[3];
    }
    else {
      if (a2 != 2) {
        return result;
      }
      v9 = v11_.v12;
    }
  LABEL_25:
    *a1 = v9;
    return 0;
  }
  if (a2 == 3) {
    v9 = v11_.v13;
    goto LABEL_25;
  }
  if (a2 == 4) {
    v9 = v11_.v14;
    goto LABEL_25;
  }
  return result;
}

__int64 cuda_driver_284f0(__int64 a1, __int64* a2, unsigned int a3,
                          unsigned int a4)
{
  __int64 result;
  char v7;
  __int64 v8;
  char v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  __int64 v16;

  v16 = 0;
  v14 = 0;
  result = cuda_driver_112680(0, a2, a4, &v16, &v14, 1, 0);
  if ((_DWORD)result == 0) {
    v7 = *(_QWORD*)((char*)((_UNKNOWN*)0x3E0LL) + v16) != 0;
    v8 = CudaDriverRoutine_98340(v14);
    result = cuda_driver_b4d40(a1, v8, a3, v7);
    if ((_DWORD)result == 0) {
      if ((a3 & 1) != 0) {
        CudaDriverStub_107f90(
            *(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x3E0LL) + v16) + 272LL) +
            592LL);
        v11 = cuda_driver_d82e0(
            &v13, *(_QWORD*)((char*)((_UNKNOWN*)0x3E0LL) + v16), 0, 0,
            *(_QWORD*)((char*)((_UNKNOWN*)0x3E8LL) + v16),
            *(unsigned int*)((char*)((_UNKNOWN*)0x40CLL) + v16), a1, 1, 1u);
        if (v11 == 0) {
          v15[0] = v13;
          v15[1] = 0;
          v12 = CudaDriverRoutine_1a3d20(v16 + 1000, (unsigned __int8*)v15);
          if (v12 != 0) {
            v11 = v12;
            cuda_driver_c3200(v13, 0);
          }
          else {
            v11 = 0;
          }
        }
        CudaDriverStub_108070(
            *(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x3E0LL) + v16) + 272LL) +
            592LL);
        return v11;
      }
      else {
        v9 = cuda_driver_118a60(v14, v16, 4u, 0);
        CudaDriverStub_107f90(a1 + 32);
        v10 = CudaDriverStub_b5180(v14, a1, v16);
        CudaDriverStub_108070(a1 + 32);
        CudaDriverRoutine_118bc0(v14, v16, v9);
        return v10;
      }
    }
  }
  return result;
}

__int64 cuda_driver_2b0c0(__int64* a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _QWORD* v9;
  __int64* v10;
  struct {
    int v12;
    char gap4_[4];
    __int64* v13;
    __int64 v14;
    __int64 v15;
    char gap32_[8];
    int v16;
  } v12_;

  if (a1 == nullptr) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"object_out cannot be NULL");
    return 1;
  }
  if (a3 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"destroy callback cannot be NULL");
    return 1;
  }
  if (a4 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"initialRefcount cannot be 0");
    return 1;
  }
  if (a5 != 1) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)"Invalid flags 0x%x",
                            a5);
    return 1;
  }
  v9 = (_QWORD*)CudaDriverStub_12e330(24);
  *a1 = (__int64)v9;
  if (v9 == nullptr) {
    return 2;
  }
  *v9 = a2;
  *(_QWORD*)(*a1 + 8) = a3;
  *(_DWORD*)(*a1 + 16) = a4;
  v10 = (__int64*)*a1;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0xD8LL) +
                 *(__int64*)((char*)((__int64*)0x10LL) +
                             (_QWORD)CudaDriverData_14225e0)) != 0) {
    v12_.v13 = (__int64*)*a1;
    v12_.v12 = 48;
    v12_.v14 = *v10;
    v12_.v15 = v10[1];
    v12_.v16 = *((_DWORD*)v10 + 4);
    cuda_driver_20b420(2u, 0x36u, (__int64)&v12_.v12);
  }
  return 0;
}

__int64 cuda_driver_2b220(__int64 a1, __int64 a2)
{
  int v5;
  struct {
    int v7;
    char gap4_[4];
    __int64 v8;
    char gap16_[8];
    int v9;
    int v10;
  } v7_;
  __int64 v14;

  if ((a2 & 0x80000000) != 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"count cannot exceed INT_MAX");
    return 1;
  }
  if (a1 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"object cannot be NULL");
    return 1;
  }
  if ((_DWORD)a2 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", a2, (__int64)"count cannot be 0");
    return 1;
  }
  v5 = atomic_fetch_add((atomic_uint* volatile)(a1 + 16), a2) + a2;
  if (v5 != 0) {
    if (*(_DWORD*)((char*)((_UNKNOWN*)0xE0LL) +
                   (_QWORD)CudaDriverData_1432140) != 0) {
      v7_.v8 = a1;
      v7_.v9 = a2;
      v7_.v10 = v5;
      v7_.v7 = 32;
      cuda_driver_20b420(2u, 0x38u, (__int64)&v7_.v7);
      return 0;
    }
  }
  else {
    v14 = 0;
    CudaDriverRoutine_121c60(&v14);
    if (*(_DWORD*)((char*)((_UNKNOWN*)0xDCLL) +
                   (_QWORD)CudaDriverData_1432140) != 0) {
      v7_.v8 = a1;
      v7_.v7 = 24;
      cuda_driver_20b420(2u, 0x37u, (__int64)&v7_.v7);
    }
    if (v14 != 0) {
      CudaDriverRoutine_121b30(v14, 0);
    }
    (*(void (**)(_QWORD))(a1 + 8))(*(_QWORD*)a1);
    if (v14 != 0) {
      CudaDriverRoutine_121b30(v14, 1);
    }
    CudaDriverRoutine_12e340(a1);
  }
  return 0;
}

__int64 cuda_driver_2ce20(__int64* a1, __int64 a2, __int64 a3, unsigned int a4,
                          int a5)
{
  __int64 result;
  char v7;
  int v8;
  unsigned __int64 v9;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  result = 1;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  v7 = a5 < 11000;
  if (a3 == 0) {
    return result;
  }
  *(_QWORD*)(a3 + 16) = 0;
  *(_DWORD*)(a3 + 24) = 1;
  v8 = *(_DWORD*)((char*)&CudaDriverRoutine_4230 +
                  (_QWORD)CudaDriverData_1422118);
  v9 = *(_QWORD*)a3;
  if (v8 == 2) {
    v9 &= ~8uLL;
  }
  else {
    if (v8 != 1) {
      goto LABEL_7;
    }
    v9 |= 8u;
  }
  *(_QWORD*)a3 = v9;
LABEL_7:
  if (v9 >= 0x10) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Invalid instantiation flags: 0x%llx", v9);
    return 1;
  }
  v11 = a1;
  if ((v9 & 2) != 0) {
    v12 = a3;
    result = CudaDriverStub_112b20(0, *(__int64**)(a3 + 8), a4, &v20, &v22);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_19:
    if ((*(_QWORD*)v12 & 4) != 0) {
      if ((*(_QWORD*)v12 & 1) != 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"CUDA_GRAPH_INSTANTIATE_FLAG_DEVICE_LAUNCH cannot be used "
                     "with CUDA_GRAPH_INSTANTIATE_FLAG_AUTO_FREE_ON_LAUNCH");
        return 1;
      }
      if ((*(_WORD*)(*(_QWORD*)(v22 + 64) + 16848LL) & 4) == 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Device-launched graphs are unsupported on systems which "
                     "do not support unified addressing");
        return 801;
      }
    }
    if (a2 != 0) {
      if (*(_DWORD*)(a2 + 4) == 1) {
        if (CudaDriverStub_d4800(a2)) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"hGraph is owned by another graph and cannot be "
                       "independently instantiated");
          return 801;
        }
        if (v11 != nullptr) {
          result = cuda_driver_cfc10(&v21, a2, v22, (char*)v12, v7);
          if ((_DWORD)result == 0) {
            if (v20 != 0 && (v14 = cuda_driver_c4770(v21, v20)) != 0) {
              v15 = v14;
              cuda_driver_c36c0(v21);
              return v15;
            }
            else {
              v16 = v21;
              if (v21 != 0 && *(_BYTE*)(v21 + 415) != 0) {
                v16 = *(_QWORD*)(*(_QWORD*)(v21 + 424) + 96LL);
              }
              *v11 = v16;
              *(_DWORD*)(v12 + 24) = 0;
              return 0;
            }
          }
          return result;
        }
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Executable graph pointer cannot be NULL");
        return 1;
      }
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"The source graph pointer is invalid");
    }
    else {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"The source graph pointer is NULL");
    }
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Graph is not a valid source graph");
    return 1;
  }
  v12 = a3;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  result = CudaDriverRoutine_121c60(&v17);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_df0b0(v17, (unsigned __int64)&v19,
                                     (unsigned __int64)&v18, 0);
    if ((_DWORD)result == 0) {
      v13 = v18;
      if (v18 == 0) {
        v13 = v19;
      }
      v22 = v13;
      result = cuda_driver_121e20(v17);
      if ((_DWORD)result == 0) {
        goto LABEL_19;
      }
    }
  }
  return result;
}

__int64 cuda_driver_2d560(unsigned __int64 a1, __int64 a2, __int64 a3, int a4,
                          __int64* a5, _QWORD* a6)
{
  __int64 v13;
  void* v14;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v20 = 0;
  if ((unsigned int)CudaDriverRoutine_121c60(&v20) != 0) {
    return 0;
  }
  if (a5 != nullptr) {
    v18 = 0;
    v19 = 0;
    if ((unsigned int)CudaDriverRoutine_df0b0(v20, (unsigned __int64)&v19,
                                              (unsigned __int64)&v18, 0) != 0) {
      return 0;
    }
    v13 = v18;
    if (v18 == 0) {
      v13 = v19;
    }
    *a5 = v13;
  }
  else if ((unsigned int)CudaDriverRoutine_df0b0(v20, 0, 0, 0) != 0) {
    return 0;
  }
  if (a1 == 0 ||
      (v14 = CudaDriverData_1422118,
       cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                          (_QWORD)CudaDriverData_1422118),
       v16 = CudaDriverRoutine_1a2980(
           *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v14), a1),
       CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v14),
       v16 == 0) &&
          (v16 = a1, *(_DWORD*)(a1 + 4) != 2)) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Graph is not a valid executable graph");
    return 0;
  }
  if (a2 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)"Node cannot be NULL");
    return 0;
  }
  v17 = *(_DWORD*)(a2 + 4);
  if (v17 != a4) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Node type %d does not match the expected value %d", v17, a4);
    return 0;
  }
  if (a3 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Node parameters cannot be NULL");
    return 0;
  }
  if ((unsigned int)CudaDriverRoutine_d9230(&v19, a2, v16) != 0) {
    return 0;
  }
  if (a6 != nullptr) {
    *a6 = v20;
  }
  return v19;
}

__int64 cuda_driver_2e480(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  _DWORD* v6;
  _DWORD* v7;
  __int64 var50[12];

  if (a1 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)"Node cannot be NULL");
    return 1;
  }
  if (a2 == nullptr) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Node parameters cannot be NULL");
    return 1;
  }
  if (*(_DWORD*)(a1 + 4) != 2) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Node is not a memset node");
    return 1;
  }
  var50[6] = var50[10];
  var50[7] = var50[11];
  v7 = nullptr;
  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    var50[0] = 0;
    result = CudaDriverRoutine_121c60(var50);
    if ((_DWORD)result == 0) {
      v6 = (_DWORD*)CudaDriverRoutine_1216a0(var50[0]);
      if (v6 != nullptr) {
        result = cuda_driver_misc_helpers_deeb0((__int64)v6, 0);
        if ((_DWORD)result != 0) {
          return result;
        }
        v5 = CudaDriverRoutine_98340((__int64)v6);
        if (*v6 != 1) {
          v6 = nullptr;
        }
        result = CudaDriverRoutine_104e80(a2, (__int64)var50);
        if ((_DWORD)result != 0) {
          return result;
        }
      }
      else {
        v5 = 0;
        result = CudaDriverRoutine_104e80(a2, (__int64)var50);
        if ((_DWORD)result != 0) {
          return result;
        }
      }
      result = CudaDriverRoutine_104fd0(*(_QWORD*)(a1 + 24), var50, v5,
                                        (__int64*)&v7, 1u);
      if ((_DWORD)result == 0) {
        if (v6 != nullptr) {
          if ((_DWORD*)v5 == v7) {
          LABEL_20:
            CudaDriverRoutine_d6af0(a1, var50, (__int64)v6);
            return 0;
          }
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 1,
              (__int64)"Green context's primary ctx is not the same as the "
                       "chosen memset ctx, ignoring green context resources");
        }
        v6 = v7;
        goto LABEL_20;
      }
    }
  }
  return result;
}

__int64 cuda_driver_2ed10(__int64 a1, __int64 a2)
{
  struct {
    int v3;
    char gap12_[4];
    __int64 v4;
    __int64 v5;
    __int64 v6;
  } v3_;

  if (a1 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)"Node cannot be NULL");
    return 1;
  }
  if (a2 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"event cannot be NULL");
    return 1;
  }
  if (*(_DWORD*)(a1 + 4) != 7) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Node is not an event record node");
    return 1;
  }
  *(_QWORD*)(a1 + 32) = a2;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x44LL) + (_QWORD)CudaDriverData_14321c8) !=
      0) {
    v3_.v6 = a2;
    v3_.v3 = 40;
    v3_.v4 = *(_QWORD*)(a1 + 24);
    v3_.v5 = a1;
    cuda_driver_20b420(0x13u, 0x11u, (__int64)&v3_.v3);
  }
  return 0;
}

__int64 cuda_driver_2ef60(__int64 a1, __int64 a2)
{
  struct {
    int v3;
    char gap12_[4];
    __int64 v4;
    __int64 v5;
    __int64 v6;
  } v3_;

  if (a1 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)"Node cannot be NULL");
    return 1;
  }
  if (a2 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"event cannot be NULL");
    return 1;
  }
  if (*(_DWORD*)(a1 + 4) != 6) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Node is not an event wait node");
    return 1;
  }
  *(_QWORD*)(a1 + 32) = a2;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x48LL) + (_QWORD)CudaDriverData_14321c8) !=
      0) {
    v3_.v6 = a2;
    v3_.v3 = 40;
    v3_.v4 = *(_QWORD*)(a1 + 24);
    v3_.v5 = a1;
    cuda_driver_20b420(0x13u, 0x12u, (__int64)&v3_.v3);
  }
  return 0;
}

__int64 cuda_driver_2fae0(__int64 a1, __int64 a2, __int64 a3,
                          unsigned __int8* a4, __int64 a5)
{
  unsigned __int8* v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  const void* v16;

  if (a5 == 0) {
    return 0;
  }
  if (a2 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"from pointer is NULL but the number of "
                                     "dependencies is non-zero");
    return 1;
  }
  if (a3 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"to pointer is NULL but the number of "
                                     "dependencies is non-zero");
    return 1;
  }
  v8 = a4;
  v10 = 0;
  if (a4 != nullptr) {
    while (1) {
      v11 = *(_QWORD*)(a2 + 8 * v10);
      if (v11 == 0) {
        break;
      }
      v12 = *(_QWORD*)(a3 + 8 * v10);
      if (v12 == 0) {
        goto LABEL_25;
      }
      if (v11 == v12) {
        v16 = *(const void**)(a2 + 8 * v10);
        goto LABEL_31;
      }
      if (a1 != *(_QWORD*)(v11 + 24)) {
        goto LABEL_32;
      }
      if (a1 != *(_QWORD*)(v12 + 24)) {
        goto LABEL_26;
      }
      result = CudaDriverRoutine_2b6c0(v11, *(_DWORD*)(v12 + 4), v8);
      if ((_DWORD)result != 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Index %zu: Edge data entry is invalid", v10);
        return 1;
      }
      ++v10;
      v8 += 8;
      if (a5 == v10) {
        return result;
      }
    }
  }
  else {
    while (1) {
      v15 = *(_QWORD*)(a2 + 8 * v10);
      if (v15 == 0) {
        break;
      }
      v14 = *(_QWORD*)(a3 + 8 * v10);
      if (v14 == 0) {
      LABEL_25:
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Index %zu: to node is NULL", v10);
        return 1;
      }
      if (v15 == v14) {
        v16 = *(const void**)(a2 + 8 * v10);
      LABEL_31:
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Index %zu: from and to are the same node (%p)", v10, v16);
        return 1;
      }
      if (a1 != *(_QWORD*)(v15 + 24)) {
      LABEL_32:
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Index %zu: from (node %p) is from graph %p which does "
                     "not match the supplied graph",
            v10);
        return 1;
      }
      if (a1 != *(_QWORD*)(v14 + 24)) {
      LABEL_26:
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Index %zu: to (node %p) is from graph %p which does not "
                     "match the supplied graph",
            v10);
        return 1;
      }
      ++v10;
      result = 0;
      if (a5 == v10) {
        return result;
      }
    }
  }
  CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                          (__int64)"Index %zu: from node is NULL", v10);
  return 1;
}

__int64 cuda_driver_2ff50(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  _DWORD* v6;
  struct {
    __int64 v7[58];
    int v8;
    char gap476_[4];
    __int64 v9;
    __int64 v10;
    char gap496_[16];
    __int64 vars0;
    __int64 vars8;
  } v7_;

  if (a1 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)"Node cannot be NULL");
    return 1;
  }
  if (a2 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Node parameters cannot be NULL");
    return 1;
  }
  if (*(_DWORD*)(a1 + 4) != 1) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Node is not a memcpy node");
    return 1;
  }
  v7_.v9 = v7_.vars0;
  v7_.v10 = v7_.vars8;
  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    v7_.v7[0] = 0;
    result = CudaDriverRoutine_121c60(v7_.v7);
    if ((_DWORD)result == 0) {
      v6 = (_DWORD*)CudaDriverRoutine_1216a0(v7_.v7[0]);
      if (v6 != nullptr) {
        result = cuda_driver_misc_helpers_deeb0((__int64)v6, 0);
        if ((_DWORD)result == 0) {
          v5 = CudaDriverRoutine_98340((__int64)v6);
          result = CudaDriverRoutine_fd5c0(a2, (__int64)v7_.v7, v5,
                                           *(_QWORD*)(a1 + 24), 1);
          if ((_DWORD)result == 0) {
            goto LABEL_13;
          }
        }
      }
      else {
        result = CudaDriverRoutine_fd5c0(a2, (__int64)v7_.v7, 0,
                                         *(_QWORD*)(a1 + 24), 1);
        if ((_DWORD)result == 0) {
        LABEL_13:
          v7_.v8 = *(_DWORD*)(a1 + 504);
          CudaDriverRoutine_d6740(a1, (__int64)v7_.v7, a2, v6);
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_30490(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8;
  __int64 result;
  void* v10;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  __int64 v19;

  v19 = 0;
  *(_DWORD*)a3 = 0;
  *(_QWORD*)(a3 + 8) = 0;
  v8 = a3 + 8;
  *(_QWORD*)(a3 + 16) = 0;
  result = CudaDriverRoutine_121c60(&v19);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = cuda_driver_misc_helpers_ded50(v19, nullptr, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (a1 == 0 ||
      (v10 = CudaDriverData_1422118,
       cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                          (_QWORD)CudaDriverData_1422118),
       v12 = CudaDriverRoutine_1a2980(
           *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v10), a1),
       CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v10),
       v12 == 0) &&
          (v12 = a1, *(_DWORD*)(a1 + 4) != 2)) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"hGraphExec is not a valid executable graph");
    return 1;
  }
  if (a2 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"The source graph pointer is NULL");
  LABEL_13:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"hGraph is not a valid source graph");
    return 1;
  }
  if (*(_DWORD*)(a2 + 4) != 1) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"The source graph pointer is invalid");
    goto LABEL_13;
  }
  if (CudaDriverStub_d4800(a2)) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"hGraph is owned by another graph and "
                                     "cannot be used in cuGraphExecUpdate");
    return 1;
  }
  v13 = CudaDriverRoutine_306e0(v12, a2);
  if (v13 == 2) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"hGraph is already instantiated and contains memory "
                 "allocation or free nodes. Only one instantiation of th"
                 "is graph may exist at any point in time.");
    return 801;
  }
  if (*(_BYTE*)(a2 + 332) != 0 || *(_BYTE*)(v12 + 414) != 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Whole-graph update of a graph with device-updatable kernel "
                 "nodes not allowed");
    return 801;
  }
  v14 = v13;
  cuda_driver_30790(v12, a2);
  v15 = CudaDriverRoutine_dabb0(*(_QWORD*)(v12 + 280), a2, a3, a4);
  if (v14 == 3 && v15 == 0) {
    v15 = cuda_driver_d5170(v12, a2);
  }
  if (v15 == 0) {
    v15 = CudaDriverRoutine_dafc0(v12, *(_QWORD*)(v12 + 280), a2, v8, a4);
    if (v15 != 0) {
      *(_DWORD*)a3 = 1;
    }
  }
  v16 = *(_QWORD*)(a3 + 8);
  v17 = *(_DWORD*)a3;
  v18 = v15;
  cuda_driver_307f0(v12, a2, v16, v17, v15);
  return v18;
}

__int64 cuda_driver_30790(__int64 result, __int64 a2)
{
  struct {
    int v2;
    char gap12_[4];
    __int64 v3;
    __int64 v4;
  } v2_;

  if (*(_DWORD*)((char*)((__int64*)0x30LL) + (_QWORD)CudaDriverData_14321c8 +
                 4) != 0) {
    v2_.v2 = 24;
    if (*(_BYTE*)(result + 415) != 0) {
      result = *(_QWORD*)(*(_QWORD*)(result + 424) + 96LL);
    }
    v2_.v3 = result;
    v2_.v4 = a2;
    return cuda_driver_20b420(0x13u, 0xDu, (__int64)&v2_.v2);
  }
  return result;
}

__int64 cuda_driver_307f0(__int64 result, __int64 a2, __int64 a3, int a4,
                          int a5)
{
  struct {
    int v5;
    char gap12_[4];
    __int64 v6;
    __int64 v7;
    __int64 v8;
    int v9;
    int v10;
  } v5_;

  if (*(_DWORD*)((char*)((__int64*)0x38LL) + (_QWORD)CudaDriverData_14321c8) !=
      0) {
    v5_.v5 = 40;
    if (*(_BYTE*)(result + 415) != 0) {
      result = *(_QWORD*)(*(_QWORD*)(result + 424) + 96LL);
    }
    v5_.v6 = result;
    v5_.v7 = a2;
    v5_.v8 = a3;
    v5_.v9 = a4;
    v5_.v10 = a5;
    return cuda_driver_20b420(0x13u, 0xEu, (__int64)&v5_.v5);
  }
  return result;
}

__int64 cuda_driver_30e80(__int64 a1, __int64 a2, int a3, unsigned __int8* a4)
{
  _OWORD* v4;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int128 v26;
  __int128 v27;
  struct {
    __int128 v29;
    __int128 v30;
  } v29_;
  struct {
    _QWORD v31[4];
    __int128 v32;
  } v31_;
  struct {
    __int128 v33;
    __int128 v34;
  } v33_;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = (_OWORD*)(a2 + 856);
  v8 = *(_OWORD*)(a2 + 936);
  v31_.v32 = *(_OWORD*)(a2 + 920);
  v33_.v33 = v8;
  v33_.v34 = *(_OWORD*)(a2 + 952);
  v9 = *(_OWORD*)(a2 + 872);
  v29_.v29 = *(_OWORD*)(a2 + 856);
  v29_.v30 = v9;
  v10 = *(_OWORD*)(a2 + 904);
  *(_OWORD*)v31_.v31 = *(_OWORD*)(a2 + 888);
  *(_OWORD*)&v31_.v31[2] = v10;
  if (a3 <= 7) {
    if (a3 > 3) {
      if (a3 == 4) {
        v18 = *(_QWORD*)a4;
        HIDWORD(v31_.v31[2]) = *((_DWORD*)a4 + 2);
        *(_QWORD*)((char*)&v31_.v31[1] + 4) = v18;
        goto LABEL_30;
      }
      if (a3 == 5) {
        LODWORD(v31_.v31[3]) = *(_DWORD*)a4;
        goto LABEL_30;
      }
      goto LABEL_28;
    }
    if (a3 != 1) {
      if (a3 == 2) {
        LODWORD(v31_.v31[0]) = *(_DWORD*)a4;
        goto LABEL_30;
      }
      goto LABEL_28;
    }
    v15 = a1;
    v16 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 1200)),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    CudaDriverRoutine_117930(v16, &v29_.v29, (__int64)a4),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v14 = v17;
    a1 = v15;
    if (v14 == 0) {
      goto LABEL_30;
    }
  }
  else if (a3 <= 9) {
    if (a3 == 8) {
      v20 = *(_QWORD*)(a2 + 1200);
      v21 = a1;
      LODWORD(v33_.v34) = *(_DWORD*)a4;
      v22 = CudaDriverRoutine_9b5e0(*(_QWORD*)(v20 + 64), v33_.v34),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      a1 = v21;
      DWORD1(v33_.v34) = v22;
      goto LABEL_30;
    }
    v12 = a1;
    v13 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 1200)),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v14 = CudaDriverRoutine_117980(v13, (_WORD*)v31_.v31 + 2, a4),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    a1 = v12;
    if (v14 == 0) {
    LABEL_30:
      v24 = CudaDriverRoutine_2bb60(
          a1, (_QWORD**)(a2 + 32), *(_QWORD*)(a2 + 1200), 0, (__int64)&v29_.v29,
          nullptr, *(_QWORD*)(a2 + 1200)),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v24 != 0) {
        return v24;
      }
      if (a3 == 13) {
        if (*((_QWORD*)a4 + 1) != 0) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"devNode must be initialized to NULL"),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          return 1;
        }
        if (BYTE5(v33_.v33) != 0) {
          v25 = *((_QWORD*)&v33_.v33 + 1);
          if (*((_QWORD*)&v33_.v33 + 1) == 0) {
            v24 = CudaDriverRoutine_d64a0((_QWORD*)&v33_.v33 + 1,
                                          *(_QWORD*)(a2 + 1200)),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            if (v24 != 0) {
              return v24;
            }
            v25 = *((_QWORD*)&v33_.v33 + 1);
            *(_BYTE*)(*(_QWORD*)(a2 + 24) + 332LL) = 1;
          }
          *((_QWORD*)a4 +
            1) = CudaDriverStub_1db800(v25),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
      }
      v26 = v33_.v33;
      v14 = 0;
      v4[4] = v31_.v32;
      v4[5] = v26;
      v4[6] = v33_.v34;
      v27 = v29_.v30;
      *v4 = v29_.v29;
      v4[1] = v27;
      qmemcpy(v4 + 2, v31_.v31, 32);
    }
  }
  else {
    switch (a3) {
    case 10:
      v19 = a1;
      v14 = CudaDriverRoutine_117a20((unsigned int*)&v31_.v31[1], *(_DWORD*)a4),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      a1 = v19;
      if (v14 == 0) {
        goto LABEL_30;
      }
      break;
    case 13:
      v23 = *(unsigned int*)a4;
      if ((unsigned int)v23 >= 2) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Invalid value 0x%08x for deviceUpdatable field", v23),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        return 1;
      }
      BYTE5(v33_.v33) = v23;
      if ((_DWORD)v23 != 0 || *(_BYTE*)(a2 + 941) == 0) {
        goto LABEL_30;
      }
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Cannot opt-out of device node update once opted in"),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      return 801;
    case 14:
      v11 = *(unsigned int*)a4;
      if ((unsigned int)v11 >= 0x65) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Invalid value %d for sharedMemCarveout field", v11),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        return 1;
      }
      DWORD3(v33_.v34) = v11;
      BYTE8(v33_.v34) = 1;
      goto LABEL_30;
    default:
    LABEL_28:
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Invalid kernel attribute: %d",
                              (unsigned int)a3),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      return 1;
    }
  }
  return v14;
}

__int64 cuda_driver_316f0(_QWORD* a1, __int64 a2, __int64 a3,
                          unsigned __int8* a4, __int64 a5, __int64 a6)
{
  int v6;
  __int64 result;
  __int64 v14;

  v14 = 0;
  if (a1 == nullptr) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Node pointer cannot be NULL");
    return 1;
  }
  if (a6 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Node parameters cannot be NULL");
    return 1;
  }
  v6 = *(_DWORD*)(a6 + 8);
  switch (v6) {
  case 2:
    if (*(_DWORD*)(a6 + 12) == 0) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Size cannot be zero for SWITCH conditional nodes");
      return 1;
    }
    break;
  case 1:
    if (*(_DWORD*)(a6 + 12) != 1) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Size must be 1 for WHILE conditional nodes");
      return 1;
    }
    break;
  case 0:
    if ((unsigned int)(*(_DWORD*)(a6 + 12) - 1) >= 2) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Size must be 1 or 2 for IF conditional nodes");
      return 1;
    }
    break;
  default:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Invalid conditional node type");
    return 1;
  }
  result = cuda_driver_misc_helpers_deeb0(*(_QWORD*)(a6 + 24), 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  if ((unsigned int)CudaDriverRoutine_2b880(&v14, a2, 13, a3, a4, a5) == 0) {
    return cuda_driver_d7d60(a1, v14, a3, (__int64)a4, 0, a5,
                             (unsigned __int64*)a6, 0, 0);
  }
  return 1;
}

__int64 cuda_driver_32230(unsigned __int64 a1, __int64 a2, unsigned int* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  unsigned int v10;
  __int64 result;

  if (a1 == 0) {
    v6 = "Graph cannot be NULL";
  LABEL_23:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)v6);
    return 1;
  }
  if (a2 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)"Node cannot be NULL");
    return 1;
  }
  if (a3 == nullptr) {
    v6 = "nodeParams cannot be NULL";
    goto LABEL_23;
  }
  v3 = *a3;
  if ((_DWORD)v3 != *(_DWORD*)(a2 + 4)) {
    v6 = "Parameter type does not match node type";
    goto LABEL_23;
  }
  if ((*(_QWORD*)(a3 + 1) | a3[3]) != 0) {
  LABEL_22:
    v6 = "nodeParams struct must be initialized to zero";
    goto LABEL_23;
  }
  v4 = 168;
  v5 = 22;
  switch (*a3) {
  case 0u:
    goto LABEL_21;
  case 1u:
    if ((*((_QWORD*)a3 + 29) | *((_QWORD*)a3 + 30) | *((_QWORD*)a3 + 31)) !=
        0) {
      goto LABEL_22;
    }
    v4 = 8;
    goto LABEL_20;
  case 2u:
    v4 = 192;
    v5 = 16;
    goto LABEL_21;
  case 3u:
  case 4u:
    v4 = 224;
    v5 = 8;
    goto LABEL_21;
  case 5u:
    v4 = 240;
  LABEL_20:
    v5 = 4;
    goto LABEL_21;
  case 6u:
  case 7u:
  case 0xBu:
    v4 = 232;
    v5 = 6;
    goto LABEL_21;
  case 8u:
  case 9u:
    v4 = 216;
    v5 = 10;
    goto LABEL_21;
  case 0xAu:
    v4 = 120;
    v5 = 34;
    goto LABEL_21;
  case 0xCu:
  case 0xDu:
    v4 = 208;
    v5 = 12;
  LABEL_21:
    v10 = memcmp_plt(&a3[v5], &CudaDriverData_1130618, v4);
    if (v10 != 0) {
      goto LABEL_22;
    }
    switch (v3) {
    case 0LL:
      return CudaDriverRoutine_2d700(a1, a2, (__int64)(a3 + 4));
    case 1LL:
      return CudaDriverRoutine_2d7f0(a1, a2, (__int64)(a3 + 8),
                                     *((_QWORD*)a3 + 3));
    case 2LL:
      return CudaDriverRoutine_2d8f0(a1, a2, (__int64*)a3 + 2,
                                     *((_QWORD*)a3 + 7));
    case 3LL:
      return cuGraphExecHostNodeSetParams_impl(a1, a2, (__int64)(a3 + 4));
    case 4LL:
      return cuda_driver_misc_2daf0(a1, a2, *((_QWORD*)a3 + 2));
    case 5LL:
      return v10;
    case 6LL:
      return cuGraphExecEventWaitNodeSetEvent_impl(a1, a2, *((_QWORD*)a3 + 2));
    case 7LL:
      return cuGraphExecEventRecordNodeSetEvent_impl(a1, a2,
                                                     *((_QWORD*)a3 + 2));
    case 8LL:
      return cuGraphExecExternalSemaphoresSignalNodeSetParams_impl(
          a1, a2, (__int64)(a3 + 4));
    case 9LL:
      return cuGraphExecExternalSemaphoresWaitNodeSetParams_impl(
          a1, a2, (__int64)(a3 + 4));
    case 10LL:
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Cannot set parameters of instantiated "
                                       "memory allocation nodes");
      goto LABEL_41;
    case 11LL:
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Cannot set parameters of instantiated memory free nodes");
      goto LABEL_41;
    case 12LL:
      return cuGraphExecBatchMemOpNodeSetParams_impl(a1, a2, (__int64)(a3 + 4));
    case 13LL:
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Cannot set parameters of instantiated conditional nodes");
    LABEL_41:
      result = 801;
      break;
    default:
      abort();
    }
    return result;
  default:
    return 999;
  }
}

__int64 cuda_driver_327b0(_QWORD* a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result;
  int v9;
  _QWORD* v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;

  v14 = 0;
  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    if (a1 != nullptr) {
      v9 = *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                      (_QWORD)CudaDriverData_1422118);
      if ((a3 & 0x80000000) != 0 || (int)a3 >= v9) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Parameter device must be between 0 and %d", v9);
        return 101;
      }
      if (a4 == 1) {
        if (*(_DWORD*)((char*)((__int64*)0x18LL) + CudaDriverData_1422ba8 +
                       4) != 0 ||
            *(unsigned int*)((char*)((int*)0x4LL) + CudaDriverData_1422bb0) <
                4) {
          return 801;
        }
        v11 = *((_QWORD**)CudaDriverData_1422118 + a3 + 35);
        if (a2 == 0 || v11 == *(_QWORD**)(a2 + 8)) {
          CudaDriverStub_107f90_alt1(v11 + 2109);
          v12 = cuda_driver_9b080(v11);
          CudaDriverStub_108070_alt1(v11 + 2109);
          if (v12 != 0) {
            return v12;
          }
          result = cuda_driver_ddc90(&v14, v11[2108], a2, 1);
          if ((_DWORD)result != 0) {
            v13 = result;
            CudaDriverStub_107f90_alt1(v11 + 2109);
            cuda_driver_9b180((__int64)v11);
            CudaDriverStub_108070_alt1(v11 + 2109);
            return v13;
          }
          else {
            *a1 = v14;
          }
          return result;
        }
        return 101;
      }
    }
    return 1;
  }
  return result;
}

__int64 cuda_driver_33a60(__int64 a1, __int64 a2, __int64 a3, unsigned int* a4,
                          __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  int v18;
  struct {
    int v19;
    char gap20_[4];
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    int* v24;
  } v19_;

  v14 = CudaDriverRoutine_98340(a1);
  v18 = 0;
  if (*(_DWORD*)((char*)((__int64*)0x30LL) + (_QWORD)CudaDriverData_1432148 +
                 4) != 0) {
    v19_.v20 = v14;
    v19_.v21 = a5;
    v19_.v19 = 48;
    v19_.v22 = *(_QWORD*)(a2 + 32);
    v19_.v23 = a2;
    v19_.v24 = &v18;
    cuda_driver_20b420(3u, 0xDu, (__int64)&v19_.v19);
  LABEL_4:
    v15 = *(_QWORD*)(a2 + 32);
    if (v15 != 0 &&
        a1 == atomic_fetch_or((atomic_ullong* volatile)(v15 + 24), 0)) {
      goto LABEL_11;
    }
    goto LABEL_6;
  }
  if (a2 != 0) {
    goto LABEL_4;
  }
LABEL_6:
  if (*(_DWORD*)a1 != 1 || (v16 = *(_QWORD*)(*(_QWORD*)(a2 + 32) + 24LL)) !=
                               CudaDriverRoutine_98340(a1)) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Function handle does not match expected context");
    return 400;
  }
LABEL_11:
  if (a5 != 0 && a1 != atomic_fetch_or((atomic_ullong* volatile)(a5 + 16), 0)) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Stream handle does not match expected context");
    return 400;
  }
  *(_QWORD*)(a3 + 32) =
      atomic_fetch_add((atomic_ullong* volatile)(*(_QWORD*)(a1 + 64) + 21640LL),
                       1u) +
      1;
  if (v18 == 0 && (*(_BYTE*)(a2 + 855) & 0x10) != 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Kernels which call cudaGraphLaunch cannot be launched "
                 "directly into streams");
    return 801;
  }
  else {
    result = CudaDriverRoutine_e7d30(a3, a2, a6, a7);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_e7a20((_DWORD*)a3, (_DWORD*)a2, a4[3], a4[4],
                                       a4[5]);
      if ((_DWORD)result == 0) {
        result = cuda_driver_e83e0(a4, a2, a5, a3);
        if ((_DWORD)result == 0 &&
            (*(_BYTE*)(a3 + 204) == 0 || *(_DWORD*)(a3 + 424) > 1u ||
             (_DWORD)(result = CudaDriverRoutine_e7820(a1, a2, (_DWORD*)a3,
                                                       a4[6])) == 0)) {
          result = CudaDriverRoutine_e7c60(a3, a2, a4[6]);
          if ((_DWORD)result == 0) {
            CudaDriverRoutine_e73b0(a3, a5);
            if (*(_BYTE*)(a3 + 480) != 0) {
              return 0;
            }
            result = CudaDriverRoutine_120d10(a1, a5, a2, a3);
            if ((_DWORD)result == 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_37930(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                          unsigned int a5)
{
  __int64 result;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v17 = a3;
  v15 = a2;
  v16 = a1;
  v13 = 0;
  v14 = 0;
  result = CudaDriverStub_112b20(0, a4, a5, &v13, &v14);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (a1 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Specified base pointer cannot be NULL");
    return 1;
  }
  if (a2 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Specified byte count cannot be 0");
    return 1;
  }
  if ((_DWORD)a3 == 1 &&
      (a3 < 0 || (signed __int32)*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                                            (_QWORD)CudaDriverData_1422118) <=
                     SHIDWORD(a3))) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Invalid device ordinal specified as prefetch destination");
    return 101;
  }
  else {
    v12 = 0;
    v9 = CudaDriverRoutine_98340(v14);
    cuda_driver_108520(v9 + 24);
    v10 = CudaDriverRoutine_113960(v13, (__int64)&v16, (__int64)&v15, 1, 1,
                                   (__int64)&v17, (__int64)&v12, 1);
    v11 = CudaDriverRoutine_98340(v14);
    CudaDriverRoutine_1085d0(v11 + 24);
    return v10;
  }
}

__int64 cuda_driver_37c10(unsigned __int64 a1, __int64 a2, unsigned int a3,
                          unsigned __int64 a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v14 = 0;
  v13 = 0;
  result = CudaDriverRoutine_121c60(&v14);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v14, &v13, 2u);
    if ((_DWORD)result == 0) {
      result = cuda_driver_121e20(v14);
      if ((_DWORD)result == 0) {
        if (a1 != 0) {
          if (a2 == 0) {
            CudaDriverRoutine_ed630(
                (__int64)"CUDA", 0,
                (__int64)"Value of parameter count cannot be 0");
            return 1;
          }
          result = 1;
          if (a3 > 6) {
            return result;
          }
          if (((1 << a3) & 0x16) == 0) {
            if (((1 << a3) & 0x68) == 0) {
              return result;
            }
            if ((_DWORD)a4 == 0) {
              return 101;
            }
            if ((_DWORD)a4 == 1) {
              if ((a4 & 0x8000000000000000LL) != 0 ||
                  (signed __int32)*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                                             (_QWORD)CudaDriverData_1422118) <=
                      SHIDWORD(a4)) {
                CudaDriverRoutine_ed630(
                    (__int64)"CUDA", 0,
                    (__int64)"Invalid device ordinal specified as device to "
                             "apply the advise to");
                return 101;
              }
              v9 = *((_QWORD*)CudaDriverData_1422118 + HIDWORD(a4) + 35);
              if (v9 != 0 && (*(_BYTE*)(v9 + 17068) & 2) == 0) {
                CudaDriverRoutine_ed630(
                    (__int64)"CUDA", 0,
                    (__int64)"Mem Advise is only supported on device that has "
                             "a non-zero value for the device attribute for"
                             " concurrent managed access");
                return 101;
              }
            }
          }
          v10 = CudaDriverRoutine_1dba10(*(_QWORD*)(v13 + 80), a1);
          if (v10 != 0) {
            v11 = v10;
            if (!CudaDriverRoutine_1dc9c0(v10)) {
              CudaDriverRoutine_ed630(
                  (__int64)"CUDA", 0,
                  (__int64)"Specified pointer must belong to system-allocated "
                           "memory or managed memory");
              return 1;
            }
            v12 = CudaDriverStub_102e00(v11);
            if (a2 + a1 > CudaDriverStub_1dbf90(v11) + v12) {
              CudaDriverRoutine_ed630(
                  (__int64)"CUDA", 0,
                  (__int64)"Mem advise extends beyond allocation range");
              return 1;
            }
          }
          else {
            if ((*((_BYTE*)((_UNKNOWN*)0x1860LL) +
                   (_QWORD)CudaDriverData_1422118) &
                 1) == 0) {
              CudaDriverRoutine_ed630(
                  (__int64)"CUDA", 0,
                  (__int64)"Mem Advise for system-allocated memory is only "
                           "supported on systems with non-zero CU_DEVICE_ATT"
                           "RIBUTE_PAGEABLE_MEMORY_ACCESS");
              return 1;
            }
            if (CudaDriverRoutine_12c960(a1, a2 + a1)) {
              CudaDriverRoutine_ed630(
                  (__int64)"CUDA", 0,
                  (__int64)"Specified address range cannot overlap "
                           "system-allocated memory and memory allocated via "
                           "CUDA APIs");
              return 1;
            }
          }
          return CudaDriverRoutine_126190(a1, a2, a3, a4);
        }
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Value of parameter devPtr cannot be NULL");
        return 1;
      }
    }
  }
  return result;
}

__int64 cuda_driver_37fe0(__int64* a1, unsigned __int64* a2, int* a3,
                          __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 result;
  __int64* v13;
  int* v14;
  __int64 v15;
  unsigned __int64* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  int v24;
  _DWORD* v25;
  __int64 v26;
  __int64 v27;

  v27 = 0;
  v26 = 0;
  result = CudaDriverRoutine_121c60(&v27);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v27, &v26, 2u);
    if ((_DWORD)result == 0) {
      result = 1;
      if (a4 != 0 && a6 != 0 && a2 != nullptr && a3 != nullptr &&
          a1 != nullptr && a5 != 0) {
        v13 = a1;
        v14 = a3;
        v15 = a4;
        v16 = a2;
        do {
          v17 = *v13++;
          if (v17 == 0) {
            return 1;
          }
          v18 = *v14;
          result = 1;
          if ((unsigned int)*v14 > 8) {
            return result;
          }
          if (((1 << v18) & 0x156) != 0 || ((1 << v18) & 0xA0) != 0) {
            if (*v16 != 4) {
              return result;
            }
          }
          else if (v18 != 3 || *v16 == 0 || (*v16 & 3) != 0) {
            return result;
          }
          ++v16;
          --v15;
          ++v14;
        } while (v15 != 0);
        v19 = cuda_driver_1dbe40(v26, a5, 0);
        if (v19 != 0) {
          v20 = v19;
          if (!CudaDriverRoutine_1dc9c0(v19)) {
            return 1;
          }
          v21 = CudaDriverStub_102e00(v20);
          if (a6 + a5 > CudaDriverStub_1dbf90(v20) + v21) {
            return 1;
          }
        }
        else if ((*((_BYTE*)((_UNKNOWN*)0x1860LL) +
                    (_QWORD)CudaDriverData_1422118) &
                  1) == 0 ||
                 CudaDriverRoutine_12c960(a5, a6 + a5)) {
          return 1;
        }
        do {
          v23 = *a2++;
          v22 = v23;
          LODWORD(v23) = *a3++;
          v24 = v23;
          v25 = (_DWORD*)*a1++;
          result = cuda_driver_126320(a5, a6, v24, v25, v22 >> 2);
          if ((_DWORD)result != 0) {
            break;
          }
          --a4;
        } while (a4 != 0);
      }
    }
  }
  return result;
}

__int64 cuda_driver_383e0(__int64 a1, _QWORD* a2, __int64 a3,
                          unsigned __int64 a4, unsigned int a5, int* a6,
                          __int64** a7)
{
  unsigned int v12;
  __int64 v13;
  _BOOL4 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 result;
  int v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  _QWORD* v27;
  __int64 v28;
  int v29;
  __int64* v30;
  unsigned __int8 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  _DWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  char v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  bool v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  _BOOL4 v62;
  _BOOL4 v63;
  _BOOL4 v64;
  __int64 v65;

  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = 0;
  v13 = a5;
  v14 = a1 != 0;
  v15 = a2 != nullptr && a1 != 0;
  if (a2 != nullptr) {
    v14 = false;
  }
  v63 = a2 != nullptr;
  v64 = v15;
  v62 = v14;
  while (2) {
    v18 = *a6++;
    result = 1;
    switch (v18) {
    case 1:
      v19 = *a7;
      **a7 = 0;
      if (a2 != nullptr) {
        *v19 = CudaDriverRoutine_1dbfd0((__int64)a2),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_9;
    case 2:
      v26 = *a7;
      *(_DWORD*)*a7 = 0;
      if (a2 == nullptr) {
        goto LABEL_9;
      }
      if (CudaDriverRoutine_1dc850((__int64)a2)) {
        *(_DWORD*)v26 = 2;
        goto LABEL_9;
      }
      v49 = CudaDriverRoutine_1db1b0((__int64)a2),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LODWORD(v47) = v49 & 7;
      if ((v49 & 7) == 1) {
        goto LABEL_101;
      }
      goto LABEL_9;
    case 3:
      v20 = *a7;
      **a7 = 0;
      if (v62) {
        if ((*((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)CudaDriverData_1422118) &
             1) == 0) {
          goto LABEL_9;
        }
      LABEL_34:
        *v20 = a4;
        goto LABEL_9;
      }
      if (v64) {
        v44 = CudaDriverRoutine_1dc340(a2, *(_QWORD**)(a1 + 80)),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v44 != 0) {
          v45 = v44;
          if (CudaDriverStub_1db750(v44) != 0 ||
              CudaDriverStub_1db760(v45) != 0) {
            if (CudaDriverStub_1db760(v45) != 0) {
              v46 = CudaDriverStub_1db760(v45),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if ((unsigned __int8)cuda_driver_checks_103390(
                      *(_QWORD*)(v46 + 16) + 104LL, **(_DWORD**)(a1 + 64)) !=
                  0) {
                goto LABEL_34;
              }
            }
            else {
              v58 = CudaDriverStub_1db750(v45),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v59 = CudaDriverStub_102f00(v58),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if ((unsigned __int8)cuda_driver_checks_103390(
                      v59 + 176, **(_DWORD**)(a1 + 64)) != 0) {
                goto LABEL_34;
              }
            }
          }
          else if ((CudaDriverRoutine_1db1b0(v45) & 0x7C000000) == 0xC000000) {
            v16 = CudaDriverStub_102e00(v45) + a3,
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          LABEL_8:
            *v20 = v16;
          }
        }
      }
    LABEL_9:
      ++a7;
      --v13;
      result = v12;
      if (v13 != 0) {
        continue;
      }
      return result;
    case 4:
      v20 = *a7;
      **a7 = 0;
      if (a2 == nullptr) {
        goto LABEL_34;
      }
      if (CudaDriverStub_1dbff0((__int64)a2)) {
        goto LABEL_9;
      }
      v23 = a2;
      if ((unsigned int)CudaDriverRoutine_1dd1f0((__int64)a2) == 15) {
        v24 = CudaDriverRoutine_1dc000((__int64)a2),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v25 = CudaDriverRoutine_1dc0c0((__int64)a2, v24),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v25 == 0) {
          goto LABEL_9;
        }
        v23 = (_QWORD*)v25;
        if ((CudaDriverRoutine_1db1b0(v25) & 0x3000000) == 0) {
          v23 = (_QWORD*)CudaDriverRoutine_1dc160((__int64)a2, (__int64)v23),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v23 == nullptr) {
            goto LABEL_9;
          }
        }
      }
      if ((CudaDriverRoutine_1db1b0((__int64)v23) & 0x3000000) != 0x1000000) {
        goto LABEL_9;
      }
      v16 = a3 + CudaDriverStub_1dbab0(v23),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_8;
    case 6:
      v30 = *a7;
      *(_DWORD*)*a7 = 0;
      if (a2 == nullptr) {
        goto LABEL_9;
      }
      v31 = CudaDriverRoutine_1dd030((__int64)a2),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_45;
    case 7:
      v22 = *a7;
      **a7 = 0;
      if (a2 != nullptr) {
        *v22 = CudaDriverStub_1dbfa0(a2),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_9;
    case 8:
      v30 = *a7;
      *(_DWORD*)*a7 = 0;
      if (a2 == nullptr) {
        goto LABEL_9;
      }
      v31 = CudaDriverRoutine_1dc9c0((__int64)a2),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_45:
      *(_DWORD*)v30 = v31;
      goto LABEL_9;
    case 9:
      v35 = *a7;
      *(_DWORD*)*a7 = -2;
      if (a2 != nullptr) {
        v36 = (_DWORD*)CudaDriverRoutine_1dc020((__int64)a2),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v36 != nullptr) {
          *(_DWORD*)v35 = *v36;
        }
      }
      else if ((*((_BYTE*)((_UNKNOWN*)0x1860LL) +
                  (_QWORD)CudaDriverData_1422118) &
                1) != 0) {
        *(_DWORD*)v35 = -1;
      }
      goto LABEL_9;
    case 10:
      v26 = *a7;
      *(_DWORD*)*a7 = 0;
      if (a2 == nullptr || CudaDriverStub_1dbff0((__int64)a2)) {
        goto LABEL_9;
      }
      v27 = a2;
      if (CudaDriverStub_1dbf40((__int64)a2)) {
        v27 = (_QWORD*)CudaDriverStub_1dbf50(a2),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v28 = CudaDriverRoutine_1dc020((__int64)v27),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((unsigned int)CudaDriverRoutine_e30b0(v28) != 0) {
        goto LABEL_93;
      }
      *(_DWORD*)v26 = (CudaDriverRoutine_1db1b0((__int64)v27) &
                       0x7C0000000000000LL) == 0x80000000000000LL,
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_9;
    case 11:
      v33 = *a7;
      if (a2 != nullptr &&
          (unsigned int)CudaDriverRoutine_1dd1f0((__int64)a2) != 15) {
        *v33 = CudaDriverStub_1db800(a2),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        CudaDriverRoutine_12cb10(a4, v33, nullptr),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_9;
    case 12:
      v40 = *a7;
      if (a2 != nullptr &&
          (unsigned int)CudaDriverRoutine_1dd1f0((__int64)a2) != 15) {
        *v40 = CudaDriverStub_1dbf90(a2),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        CudaDriverRoutine_12cb10(a4, nullptr, v40),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_9;
    case 13:
      *(_DWORD*)*a7 = v63;
      goto LABEL_9;
    case 14:
      v20 = *a7;
      **a7 = 0;
      v65 = 0;
      if (a2 == nullptr || CudaDriverStub_1dbff0((__int64)a2)) {
        goto LABEL_9;
      }
      if (CudaDriverStub_1db750(a2) != 0) {
        v34 = CudaDriverStub_1db750(a2),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v16 = *(unsigned int*)(CudaDriverStub_102f00(v34) + 152),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        if (CudaDriverRoutine_1dc590((__int64)a2)) {
          cuda_driver_helpers_1db780((__int64)a2, &v65),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          cuda_driver_helpers_1db770((__int64)a2, &v65),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v16 = (unsigned __int16)*(_QWORD*)(v65 + 8) >> 11;
      }
      goto LABEL_8;
    case 15:
      v26 = *a7;
      if (a2 == nullptr) {
        goto LABEL_93;
      }
      CudaDriverRoutine_1db1b0((__int64)a2),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_DWORD*)v26 = (v29 & 0x1000000) != 0;
      goto LABEL_9;
    case 16:
      v26 = *a7;
      v41 = a2;
      *(_DWORD*)*a7 = 0;
      if (v64) {
        v41 = a2;
        if ((CudaDriverRoutine_1db1b0((__int64)a2) & 0x7C0000000000000LL) ==
            0x3C0000000000000LL) {
          v42 = CudaDriverStub_9b050(*(_QWORD*)(a1 + 64)),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v43 = CudaDriverRoutine_1dc0c0((__int64)a2, v42),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v43 == 0) {
            goto LABEL_9;
          }
          v41 = (_QWORD*)v43;
          if ((CudaDriverRoutine_1db1b0(v43) & 0x3000000) != 0) {
            v41 = (_QWORD*)CudaDriverRoutine_1dc160((__int64)a2, (__int64)v41),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v41 == nullptr) {
              goto LABEL_9;
            }
          }
        }
      }
      if ((*((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)CudaDriverData_1422118) &
           1) != 0) {
        if (v41 == nullptr || cuda_driver_predicates_1dc880((__int64)v41)) {
        LABEL_92:
          *(_DWORD*)v26 = 3;
          goto LABEL_9;
        }
      }
      else if (v41 == nullptr) {
        goto LABEL_9;
      }
      v47 =
          ((unsigned __int64)CudaDriverRoutine_1db1b0((__int64)v41) >> 41) & 7,
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      switch ((_DWORD)v47) {
      case 2:
      LABEL_93:
        *(_DWORD*)v26 = 0;
        break;
      case 1:
      LABEL_101:
        *(_DWORD*)v26 = v47;
        break;
      case 0:
        goto LABEL_92;
      default:
        v12 = 1;
        break;
      }
      goto LABEL_9;
    case 17:
      v20 = *a7;
      if (a2 == nullptr) {
        goto LABEL_7;
      }
      v37 = CudaDriverStub_1db750(a2),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v38 = CudaDriverStub_1db760(a2),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v37 != 0) {
        v39 = CudaDriverStub_102f00(v37),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (*(_BYTE*)(v39 + 124) != 0) {
          v16 = 0;
        }
        else {
          v16 = v39 + 176;
        }
      }
      else if (v38 != 0) {
        v16 = *(_QWORD*)(v38 + 16) + 104LL;
      }
      else {
      LABEL_7:
        v16 = 0;
      }
      goto LABEL_8;
    case 18:
      v20 = *a7;
      **a7 = 0;
      if (a2 == nullptr) {
        goto LABEL_9;
      }
      if (CudaDriverStub_1db750(a2) != 0 || CudaDriverStub_1db760(a2) != 0) {
        v16 = *(unsigned int*)(CudaDriverRoutine_1dd1a0((__int64)a2) + 44),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v60 = *(_QWORD*)(CudaDriverStub_1dbfc0(a2) + 80),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v52 = a4;
        v53 = a3;
        v54 = *(_QWORD*)(CudaDriverStub_1dbfc0(a2) + 128),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v55 = CudaDriverStub_1dbfc0(a2),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v56 = v60 > v54;
        v57 = 128;
        a3 = v53;
        a4 = v52;
        if (v56) {
          v57 = 80;
        }
        v16 = *(_QWORD*)(v55 + v57);
      }
      goto LABEL_8;
    case 19:
      v20 = *a7;
      **a7 = 0;
      if (a2 == nullptr) {
        goto LABEL_9;
      }
      if (CudaDriverStub_1db750(a2) != 0 || CudaDriverStub_1db760(a2) != 0) {
        v32 = CudaDriverRoutine_1dd1a0((__int64)a2),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v16 = a4 / *(unsigned int*)(v32 + 44) * *(unsigned int*)(v32 + 44);
      }
      else {
        CudaDriverStub_1dbfc0(a2),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v16 = *(_QWORD*)(CudaDriverStub_1dbfc0(a2) + 88),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_8;
    case 20:
      v20 = *a7;
      **a7 = 0;
      if (a2 == nullptr) {
        goto LABEL_9;
      }
      if (CudaDriverStub_1db750(a2) != 0) {
        v21 = CudaDriverStub_1db750(a2),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v20 = CudaDriverRoutine_f3ad0(v21, a4),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_9;
      }
      if (CudaDriverStub_1db760(a2) != 0) {
        v48 = CudaDriverStub_1db760(a2),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v20 = cuda_driver_helpers_b80d0(v48, a4),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_9;
      }
      v50 = CudaDriverStub_1dbfc0(a2),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v51 = *(_QWORD*)(v50 + 168);
      if (v51 == 0) {
        v51 = v50;
      }
      v16 = *(_QWORD*)(v51 + 192);
      goto LABEL_8;
    default:
      return result;
    }
  }
}

__int64 cuda_driver_39cb0(_QWORD* a1, __int64 a2, char a3, char a4)
{
  __int64 result;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;

  v12 = 0;
  v11 = 0;
  if ((a3 & 1) == 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"cuIpcOpenMemHandle must be called with Flags "
                 "CU_IPC_MEM_LAZY_ENABLE_PEER_ACCESS set");
    return 1;
  }
  if (a1 == nullptr) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"pdptr cannot be NULL");
    return 1;
  }
  result = CudaDriverRoutine_df060(&v12);
  if ((_DWORD)result == 0) {
    v8 = CudaDriverRoutine_e30b0(*(_QWORD*)(v12 + 64));
    if (v8 != 0) {
      v9 = v8;
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Can't do IPC on device %d",
                              **(_DWORD**)(v12 + 64));
    }
    else {
      result = cuda_driver_e2fa0(v12, a2, &v11, a4);
      if ((_DWORD)result != 0) {
        return result;
      }
      if ((*(_WORD*)((_BYTE*)&CudaDriverRoutine_4484 +
                     (_QWORD)CudaDriverData_1422118) &
           0x100) == 0 ||
          (v10 = CudaDriverRoutine_10dd50(v11)) == 0) {
        CudaDriverRoutine_ee120(v11);
        *a1 = CudaDriverStub_102e00(v11);
        return 0;
      }
      v9 = v10;
      cuda_driver_108520(v12 + 24);
      CudaDriverStub_1db190(&v11);
      CudaDriverRoutine_1085d0(v12 + 24);
    }
    return v9;
  }
  return result;
}

__int64 cuda_driver_39e80(unsigned __int64 a1)
{
  __int64 result;
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned int v10;
  _QWORD* v11;
  __int64 v12;

  v12 = 0;
  v11 = nullptr;
  result = CudaDriverRoutine_df060(&v12);
  if ((_DWORD)result != 0) {
    return result;
  }
  v3 = CudaDriverRoutine_e30b0(*(_QWORD*)((char*)((char*)0x40LL) + v12));
  if (v3 != 0) {
    v4 = v3;
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Can't do IPC on device %d",
                            **(_DWORD**)((char*)((char*)0x40LL) + v12));
    return v4;
  }
  v5 = cuda_driver_1dbe40(v12, a1, 0);
  if (v5 == 0) {
    v5 = CudaDriverRoutine_1dba10(*(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v12),
                                  a1);
    if (v5 == 0) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"User passed invalid device pointer");
      return 1;
    }
  }
  v6 = v5;
  if ((CudaDriverRoutine_1db1b0(v5) & 0x7C0000000000000LL) !=
      0x280000000000000LL) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Can't close mem handle allocation was not opened with the "
                 "cuIpcOpenMemHandle API function");
    return 1;
  }
  if (a1 != CudaDriverStub_102e00(v6)) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Attempt to free a non-base allocation device pointer");
    return 1;
  }
  if ((unsigned __int8)CudaDriverStub_10eba0(v6) != 0) {
    CudaDriverRoutine_10e060(v6);
  }
  if ((unsigned __int8)CudaDriverStub_10eba0(v6) == 0) {
    v7 = (*(__int64 (**)(__int64))(*(_QWORD*)((char*)((char*)0x40LL) + v12) +
                                   18424LL))(29);
    v8 = CudaDriverRoutine_1dc5c0(
        v6, 0, v7 - 1, *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v12), 1);
    v11 = v8;
    if (v8 != nullptr && v8 != (_QWORD*)v6) {
      CudaDriverStub_1db190(&v11);
    }
  }
  cuda_driver_108520(v12 + 24);
  v10 = CudaDriverRoutine_98190(v12, 0);
  CudaDriverRoutine_ee330(v6);
  if (v10 == 0) {
    CudaDriverRoutine_e3050(v12, v6);
  }
  CudaDriverRoutine_1085d0(v12 + 24);
  return v10;
}

__int64 cuda_driver_3a490(int* a1, __int64 a2)
{
  unsigned int v4;
  unsigned int v5;
  __int64 result;

  v4 = cuda_driver_f91e0(a1, (__int64)(a1 + 100), a2);
  if (v4 != 0) {
    v5 = v4;
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Source operand: managed allocation not accessible from "
                 "stream, see cudaStreamAttachMemAsync");
  }
  else {
    result = cuda_driver_f91e0(a1 + 50, (__int64)(a1 + 100), a2);
    if ((_DWORD)result == 0) {
      return result;
    }
    v5 = result;
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Destination operand: managed allocation not accessible from "
                 "stream, see cudaStreamAttachMemAsync");
  }
  return v5;
}

__int64 cuda_driver_3a9c0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                          __int64 a5)
{
  __int64 v10;
  _DWORD* v11;
  unsigned int v12;
  char v13;
  char v14;
  __int64 v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  char v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v29;
  char v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v33_;

  v31 = 0;
  v32 = 0;
  CudaDriverRoutine_f9b10(a1, a2, a3, a4, a5, &v32, &v31);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = *(_DWORD**)(v10 + 16);
  if (*v11 == 1 || (*(_BYTE*)(v10 + 56) & 1) == 0) {
    v12 = 1;
    v33_.v33 = *(_QWORD*)(a1 + 16);
    goto LABEL_4;
  }
  if (a4 == 0) {
    v12 = 0;
    if (a3 == 0) {
      goto LABEL_38;
    }
  LABEL_36:
    if (a3 != a4) {
      *(&v33_.v33 + v12++) = *(_QWORD*)(a3 + 104);
    }
    goto LABEL_38;
  }
  v12 = 1;
  v33_.v33 = *(_QWORD*)(a4 + 104);
  if (a3 != 0) {
    goto LABEL_36;
  }
LABEL_38:
  if (v11 != (_DWORD*)a3 && v11 != (_DWORD*)a4) {
    *(&v33_.v33 + v12++) = v10;
  }
LABEL_4:
  v13 = *(_DWORD*)(a1 + 24) == 0 || *(_DWORD*)(a1 + 224) == 0;
  v14 = cuda_driver_118c20(a3, a4, (__int64)v11, v10, v32, v31, 2u, v13);
  v15 = v31;
  v16 = v32;
  if (*(_BYTE*)(a1 + 500) != 0) {
    v17 = 2;
  }
  else {
    v17 = 1;
  }
  v29 = v17;
  v30 = v14;
  if (v12 != 0 &&
      (v33_.v33 != v32 &&
           (v18 = CudaDriverRoutine_114a80(v32, v33_.v33, 0)) != 0 ||
       v12 != 1 &&
           (v33_.v34 != v16 &&
                (v18 = CudaDriverRoutine_114a80(v16, v33_.v34, 0)) != 0 ||
            v12 != 2 && v33_.v35 != v16 &&
                (v18 = CudaDriverRoutine_114a80(v16, v33_.v35, 0)) != 0))) {
    v19 = v30;
  LABEL_27:
    v22 = v18;
    goto LABEL_34;
  }
  if (a2 >= 0x40) {
    v20 = CudaDriverRoutine_98340(*(_QWORD*)(v16 + 16));
    CudaDriverRoutine_f8090((int*)(a1 + 24), v20);
    v21 = CudaDriverRoutine_98340(*(_QWORD*)(v15 + 16));
    CudaDriverRoutine_f8090((int*)(a1 + 224), v21);
    v22 = cuda_driver_1d5f60(a1 + 24, v15, v16, *(_QWORD*)(a1 + 16), 1u, v29, 0,
                             0, 0);
    if (v12 != 0) {
      goto LABEL_22;
    }
  LABEL_29:
    v19 = v30;
    goto LABEL_34;
  }
  CudaDriverRoutine_f8090((int*)(a1 + 24), a5);
  CudaDriverRoutine_f8090((int*)(a1 + 224), a5);
  v22 = cuda_driver_fabf0(a1 + 24, v16, *(_QWORD*)(a1 + 16), 1u, v29, 0, 0);
  if (v12 == 0) {
    goto LABEL_29;
  }
LABEL_22:
  v19 = v30;
  if (v22 == 0) {
    v23 = &v33_.v33;
    v24 = v12;
    while (1) {
      v26 = *v23++;
      v25 = v26;
      if (v26 != v15) {
        v18 = CudaDriverRoutine_114a80(v25, v15, 1);
        if (v18 != 0) {
          goto LABEL_27;
        }
      }
      if (--v24 == 0) {
        v22 = 0;
        break;
      }
    }
  }
LABEL_34:
  CudaDriverRoutine_119030(a3, a4, *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16LL),
                           *(_QWORD*)(a1 + 16), v32, v31, v19);
  return v22;
}

__int64 cuda_driver_40e00(__int64* a1, __int64 a2, unsigned __int64 a3,
                          __int64 a4, __int64 a5)
{
  __int64 result;
  const char* v11;
  __int64 v12;
  unsigned __int64 v13;
  void* v14;
  unsigned int v15;
  unsigned int v16;

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    if ((unsigned __int8)CudaDriverRoutine_fe960() != 0) {
      if (a5 != 0) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Parameter flags must be 0");
        return 1;
      }
      if (a1 == nullptr) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Parameter ptr cannot be NULL");
        return 1;
      }
      if ((a3 & (a3 - 1)) != 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Parameter alignment must be a power of two");
        return 1;
      }
      if (a2 == 0) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Parameter size cannot be 0");
        return 1;
      }
      if ((a2 & 0x1FFFFF) != 0) {
        v11 = "Parameter size not aligned to minimum granularity (0x%zx bytes)";
      LABEL_14:
        v12 = 0x200000;
      LABEL_15:
        CudaDriverRoutine_ed630((__int64)"CUDA", 0, (__int64)v11, v12);
        return 1;
      }
      if (a3 <= 0x200000) {
        v13 = 0x200000;
      }
      else {
        v13 = a3;
      }
      if (((v13 - 1) & a4) != 0) {
        if (a3 > 0x200000) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              (__int64)"Requested address, addr, not aligned to requested "
                       "alignment, (alignment = 0x%zx bytes))",
              v13);
          return 1;
        }
        v11 = "Requested address, addr, not aligned to minimum granularity "
              "(0x%zx bytes))";
        goto LABEL_14;
      }
      if (((unsigned int)a2 & ((unsigned int)CudaDriverStub_12e320() - 1)) !=
          0) {
        v12 = (unsigned int)CudaDriverStub_12e320();
        v11 = "Requested size is not page aligned, (page size = 0x%zx bytes)";
        goto LABEL_15;
      }
      v14 = CudaDriverData_1422118;
      CudaDriverStub_107f90_alt2((char*)&CudaDriverRoutine_5194 +
                                 (_QWORD)CudaDriverData_1422118 + 4);
      v15 = cuda_driver_fdb30(a1, a2, v13, a4);
      if (v15 == 0) {
        v15 = CudaDriverRoutine_12ca30(*a1, a2);
      }
      v16 = v15;
      CudaDriverStub_108070_alt2((char*)&CudaDriverRoutine_5194 + (_QWORD)v14 +
                                 4);
      return v16;
    }
    else {
      return 801;
    }
  }
  return result;
}

__int64 cuda_driver_41820(unsigned __int64 a1, __int64 a2, int* a3, __int64 a4)
{
  __int64 result;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int8x16_t v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  int8x16_t v19;
  __int64 v20;
  int* v21;
  __int64 i;
  unsigned int v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  int64x2_t v39;
  int8x16_t v40;
  _QWORD* v41;
  __int64 v42;
  struct {
    int8x16_t v43;
    char gap80_[104];
    __int64 v44;
  } v43_;
  _DWORD v45[3];

  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  result = CudaDriverRoutine_df060(nullptr),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((_DWORD)result == 0) {
    if ((unsigned __int8)CudaDriverRoutine_fe960() != 0) {
      if (a1 == 0) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Parameter ptr cannot be NULL"),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        return 1;
      }
      if (a2 == 0) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Parameter size cannot be 0"),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        return 1;
      }
      if (a4 == 0) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Parameter count cannot be 0"),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        return 1;
      }
      if (a3 == nullptr) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Parameter map(Access descriptor array) cannot be NULL"),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        return 1;
      }
      if ((a2 & 0x1FFFFF) != 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Size not aligned to minimum granularity (0x%zx bytes)",
            0x200000),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        return 1;
      }
      if ((a1 & 0x1FFFFF) != 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Pointer not aligned to minimum granularity (0x%zx bytes)",
            0x200000),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        return 1;
      }
      result = cuda_driver_ff320(a3, a4, v45),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((_DWORD)result == 0) {
        LANES128(v43_.v43).n128_u64[0] = 0;
        if (cuda_driver_1dbe40(0, a1, (__int64)&v43_.v43) != 0 &&
            LANES128(v43_.v43).n128_u64[0] == 0) {
          v9 = a2 + a1;
          v10 = cuda_driver_1dbe40(0, v9 - 1, (__int64)&v43_.v43),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if (v10 != 0) {
            v11 = v10;
            v12 = *(_QWORD*)(CudaDriverStub_1dbfc0(v10) + 88),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            if (v9 == CudaDriverStub_1dbf90(v11) + v12) {
              v13 = CudaDriverStub_12c940(a1),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              if (v13 != 0) {
                v15 = v13;
                v38 = v9;
                PSEUDO_LOW_LANE128(v14, n128_u64, -50331649);
                v40 = v14;
                v39 = vdupq_n_s64(2u);
                while (1) {
                  v17 = CudaDriverRoutine_12c9e0(v15),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  if ((CudaDriverRoutine_1db1b0(v17) & 0x7C0000000000000LL) !=
                      0x3C0000000000000LL) {
                    break;
                  }
                  if (*(_QWORD*)(CudaDriverStub_1dbfc0(v17) + 88) >= a1) {
                    CudaDriverStub_1dbfc0(v17),
                        v23 = COERCE_AS(
                            __typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  }
                  v41 = (_QWORD*)v15;
                  CudaDriverRoutine_1db1c0(v17, (__int64)&v43_.v43),
                      v23 = COERCE_AS(
                          __typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v18 = CudaDriverStub_1dbf90(v17),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  LANES128(v19).n128_u64[0] =
                      LANES128_OF(vandq_s8(v43_.v43, v40)).n128_u64[0];
                  v43_.v44 = v18;
                  LANES128(v19).n128_u64[1] =
                      LANES128_OF(vorrq_s8(v43_.v43, v39)).n128_u64[1];
                  v43_.v43 = v19;
                  v20 = CudaDriverRoutine_1dc020(v17),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  if (*(_DWORD*)(v20 + 21864) != v45[0]) {
                    return 101;
                  }
                  v21 = a3;
                  for (i = a4; i != 0; --i) {
                    v24 = (__int64*)cuda_driver_fe9e0(v21),
                    v23 = COERCE_AS(
                        __typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    v25 = CudaDriverRoutine_1db1b0(v17) & 7,
                    v23 = COERCE_AS(
                        __typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    v26 = 0;
                    if (v21[2] == 1) {
                      v27 = 0x20000000000LL;
                    }
                    else {
                      v27 = 0;
                    }
                    LANES128(v43_.v43).n128_u64[0] =
                        LANES128(v43_.v43).n128_u64[0] & 0xFFFFF1FFFFFFFFFFLL |
                        v27;
                    if (v25 == 1) {
                      v28 = CudaDriverRoutine_1dc2a0(v17),
                      v23 = COERCE_AS(
                          __typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v26 = 0x10000000000LL;
                      if (v28 != 0) {
                        v26 = 0;
                      }
                    }
                    LANES128(v43_.v43).n128_u64[1] =
                        LANES128(v43_.v43).n128_u64[1] & 0xFFFFFEFFFFFFFFFFLL |
                        v26;
                    v23 = CudaDriverRoutine_41c40(v17, (__int64)v24,
                                                  (__int64*)&v43_.v43, v21);
                    if (v23 == 208) {
                      v23 = 0;
                    }
                    else if (v21[2] != 0) {
                      v42 = 0;
                      v29 = CudaDriverRoutine_1dc020(v17),
                      v23 = COERCE_AS(
                          __typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v30 = *v21;
                      v31 = v29;
                      v32 = CudaDriverRoutine_1db1b0(v17) & 7,
                      v23 = COERCE_AS(
                          __typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      if (v30 == 1) {
                        v33 = *v24;
                        if (v32 == 2) {
                          if (v33 != v31 &&
                              (unsigned __int8)CudaDriverRoutine_eec70(
                                  v31, v33) == 0) {
                            return 101;
                          }
                          v34 = (_QWORD*)CudaDriverRoutine_1dc000(v17),
                          v23 = COERCE_AS(
                              __typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                          result = CudaDriverRoutine_ff570(v24, v34),
                          v23 = COERCE_AS(
                              __typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                          if ((_DWORD)result != 0) {
                            return result;
                          }
                        }
                        else {
                          result =
                              CudaDriverRoutine_1251c0((unsigned int*)*v24),
                          v23 = COERCE_AS(
                              __typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                          if ((_DWORD)result != 0) {
                            return result;
                          }
                        }
                        v35 = -2080374785;
                        v36 = 201326592;
                      }
                      else {
                        if (v32 == 2) {
                          return 801;
                        }
                        v35 = -50331649;
                        v36 = 0x1000000;
                      }
                      LANES128(v43_.v43).n128_u64[0] =
                          LANES128(v43_.v43).n128_u64[0] & v35 | v36;
                      v37 = CudaDriverStub_1dbf90(v17),
                      v23 = COERCE_AS(
                          __typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      result = cuda_driver_1da1b0(
                          (__int64)v24, (__int64*)&v43_.v43, v37, &v42),
                      v23 = COERCE_AS(
                          __typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      if ((_DWORD)result != 0) {
                        return result;
                      }
                      CudaDriverRoutine_ee120(v42),
                          v23 = COERCE_AS(
                              __typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                      v23 = 0;
                      LANES128(v43_.v43).n128_u64[0] &= 0xFFFFFFFF80FFFFFFLL;
                    }
                    v21 += 3;
                  }
                  v16 = v23;
                  v15 = CudaDriverRoutine_86c70(v41, v38, 1),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  result = v16;
                  if (v15 == 0) {
                    return result;
                  }
                }
              }
              CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                      (__int64)"Address range not fully mapped "
                                               "with cuMemMap or equivalent"),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            }
          }
        }
        return 1;
      }
    }
    else {
      return 801;
    }
  }
  return result;
}

__int64 cuda_driver_43ef0(__int64* a1, __int64 a2, _OWORD* a3)
{
  __int64 result;
  __int64 v7;
  __int128 v8;
  unsigned int v9;
  __int64 v10;
  struct {
    _QWORD v11[4];
    __int128 v12;
  } v11_;
  __int64 v13;
  __int64 v14;

  v14 = 0;
  v13 = 0;
  result = CudaDriverRoutine_121c60(&v13);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = cuda_driver_misc_helpers_ded50(v13, nullptr, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = cuda_driver_121e20(v13);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (a2 == 0 || a1 == nullptr || a3 == nullptr) {
    if (a1 != nullptr) {
      if (a3 != nullptr) {
        goto LABEL_13;
      }
    }
    else {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"ptr_out cannot be NULL");
      if (a3 != nullptr) {
      LABEL_13:
        if (a2 != 0) {
          return 1;
        }
      LABEL_18:
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"pool cannot be NULL");
        return 1;
      }
    }
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"shareData cannot be NULL");
    if (a2 != 0) {
      return 1;
    }
    goto LABEL_18;
  }
  *a1 = 0;
  v7 = *(_QWORD*)(a2 + 104);
  if (v7 == 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Cannot import onto a CUmemoryPool of this type");
    return 1;
  }
  v8 = a3[1];
  *(_OWORD*)v11_.v11 = *a3;
  *(_OWORD*)&v11_.v11[2] = v8;
  v11_.v12 = a3[2];
  v9 = CudaDriverRoutine_b7c30(v7, v11_.v11, &v14);
  if (v9 != 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Failed to import allocation based on export data");
  }
  else {
    if (*(_DWORD*)(a2 + 16) == 1 || CudaDriverStub_1dbff0(v14)) {
      v10 = CudaDriverStub_1db800(v14);
    }
    else {
      v10 = CudaDriverStub_1dbab0(v14);
    }
    *a1 = v10;
    cuda_driver_helpers_b8060(*(_QWORD*)(a2 + 104) + 104LL, v10, v11_.v12);
  }
  return v9;
}

__int64 cuda_driver_44a20(__int64 a1, int a2, int a3, __int64 a4, __int64 a5,
                          __int64 a6, __int64* a7, int a8, unsigned int a9,
                          unsigned int a10, char a11)
{
  __int64 result;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 v26;
    int v27;
    int v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v26_;
  _QWORD v33[2];
  __int64 v34;

  v34 = 0;
  v25 = 0;
  result = cuda_driver_112680(0, a7, a10, &v25, &v34, a11, a9);
  if ((_DWORD)result == 0 && a4 != 0 && a5 != 0) {
    v26_.v26 = a1;
    v26_.v27 = a2;
    v26_.v28 = a3;
    v26_.v31 = a5;
    v26_.v32 = 0;
    v26_.v29 = a4;
    v26_.v30 = a6;
    result = CudaDriverRoutine_103d70((__int64)&v26_.v26);
    if ((_DWORD)result == 0) {
      v19 = *(_QWORD*)((char*)((_UNKNOWN*)0x3E0LL) + v25);
      if (v19 != 0) {
        CudaDriverStub_107f90(*(_QWORD*)(v19 + 272) + 592LL);
        v20 = cuda_driver_d69f0(
            &v24, *(_QWORD*)((char*)((_UNKNOWN*)0x3E0LL) + v25), 0, 0,
            *(_QWORD*)((char*)((_UNKNOWN*)0x3E8LL) + v25),
            *(unsigned int*)((char*)((_UNKNOWN*)0x40CLL) + v25), &v26_.v26, v34,
            1u);
        if (v20 == 0) {
          v33[0] = v24;
          v33[1] = 0;
          v21 = CudaDriverRoutine_1a3d20(v25 + 1000, (unsigned __int8*)v33);
          if (v21 != 0) {
            v20 = v21;
            cuda_driver_c3200(v24, 0);
          }
          else {
            v20 = 0;
          }
        }
        CudaDriverStub_108070(
            *(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x3E0LL) + v25) + 272LL) +
            592LL);
      }
      else {
        v22 = cuda_driver_118a60(v34, v25, 1u, 0);
        v23 = CudaDriverRoutine_98340(v34);
        v20 = CudaDriverRoutine_104c40(v23, (__int64)&v26_.v26, v25, a8 | 1u);
        CudaDriverRoutine_118bc0(v34, v25, v22);
      }
      return v20;
    }
  }
  return result;
}

__int64 cuda_driver_45b10(__int64** a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;

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
  v3 = *(_QWORD*)(a2 + 8) | 0x80000LL;
  v4 = *(_QWORD*)a2 & 0xF83F0FF880FF8038LL | 0x3C0800200000202LL;
  *(_QWORD*)a2 = v4;
  *(_QWORD*)(a2 + 8) = v3;
  v5 = v4 & 0xFFFFFFFFFFFFFE07LL;
  v6 = 16;
  if ((CudaDriverData_1436502 & 1) == 0) {
    v6 = 24;
  }
  *(_QWORD*)a2 = v6 | v5;
  v7 = *(__int64**)(CudaDriverData_14348c0[0] + 16928);
  if (v7 == nullptr) {
    return 101;
  }
  v8 = *(_QWORD*)(a3 + 16);
  if ((v8 & 1) == 0) {
    goto LABEL_7;
  }
  if ((unsigned __int8)CudaDriverRoutine_fe850(v7, 1) != 0) {
    *(_QWORD*)(a2 + 8) = *(_QWORD*)(a2 + 8) & 0xFFFFFFFFFFFF07FFLL | 0x800;
    v8 = *(_QWORD*)(a3 + 16);
  LABEL_7:
    if ((v8 & 8) == 0) {
    LABEL_10:
      *(_DWORD*)(a2 + 344) = *(_DWORD*)a3;
      *a1 = v7;
      return 0;
    }
    if ((unsigned __int8)CudaDriverRoutine_fe850(v7, 8) != 0) {
      *(_QWORD*)(a2 + 8) |= 0x4000uLL;
      goto LABEL_10;
    }
  }
  return 1;
}

__int64 cuda_driver_45c70(__int64** a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  unsigned int v11;

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
  v3 = *(_QWORD*)(a2 + 8) | 0x80000LL;
  v4 = *(_QWORD*)a2 & 0xF83F0FF880FF8038LL | 0x3C0800200000202LL;
  *(_QWORD*)a2 = v4;
  *(_QWORD*)(a2 + 8) = v3;
  v5 = v4 & 0xFFFFFFFFFFFFFE07LL;
  v6 = 16;
  if ((CudaDriverData_1436502 & 1) == 0) {
    v6 = 24;
  }
  *(_QWORD*)a2 = v6 | v5;
  v7 = *(__int64**)(CudaDriverData_14348c0[0] + 16928);
  if (v7 == nullptr) {
    return 101;
  }
  if ((*(_BYTE*)(a3 + 12) & 1) == 0) {
    goto LABEL_7;
  }
  v8 = a2;
  v9 = a3;
  v10 = a1;
  v11 = 1;
  if ((unsigned __int8)CudaDriverRoutine_fe850(v7, 1) != 0) {
    a2 = v8;
    a1 = v10;
    a3 = v9;
    *(_QWORD*)(v8 + 8) = *(_QWORD*)(v8 + 8) & 0xFFFFFFFFFFFF07FFLL | 0x800;
  LABEL_7:
    v11 = 0;
    *(_DWORD*)(a2 + 344) = *(_DWORD*)(a3 + 8);
    *a1 = v7;
  }
  return v11;
}

__int64 cuda_driver_49a00(__int64 result, __int64 a2)
{
  struct {
    int v3;
    char gap12_[4];
    __int64 v4;
    __int64 v5;
  } v3_;

  if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_1432158) != 0) {
    v3_.v3 = 24;
    v3_.v4 = CudaDriverRoutine_98340(result);
    v3_.v5 = a2;
    return cuda_driver_20b420(5u, 1u, (__int64)&v3_.v3);
  }
  return result;
}

__int64 cuda_driver_4c3f0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  __int64 result;
  _BOOL4 v5;

  v3 = *((unsigned __int8*)((_UNKNOWN*)0x17BCLL) +
         (_QWORD)CudaDriverData_1422118);
  v5 = *((_BYTE*)((_UNKNOWN*)0x17BCLL) + (_QWORD)CudaDriverData_1422118) != 0;
  if (v3 == 0) {
    return 0;
  }
  result =
      CudaDriverRoutine_202960(*(_QWORD*)(*(_QWORD*)(a1 + 2800) + 32LL), a3,
                               (__int64)"debuggerAttached", (__int64)&v5, 4, 0);
  if ((_DWORD)result == 0) {
    return 0;
  }
  return result;
}

__int64* cuda_driver_4d860(__int64* result, _QWORD* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (result != nullptr) {
    v2 = *result;
    v3 = result + 1;
    v4 = 0;
    v5 = 0;
    if ((unsigned __int64)*result >= 0x41) {
      v3 = (_QWORD*)result[1];
    }
    v6 = (unsigned __int64)(v2 - 1) >> 6;
    v7 = ((_BYTE)v2 - 1) & 0x3F;
    while (1) {
      v9 = v3[v5];
      if (v9 != -1) {
        break;
      }
    LABEL_5:
      v4 -= 64;
      if (v5++ == v6) {
        return nullptr;
      }
    }
    v10 = 0;
    if (v5 == v6) {
      v11 = v7;
    }
    else {
      v11 = 63;
    }
    v12 = v11 + 1;
    while (((1LL << v10) & v9) != 0) {
      if (v12 == ++v10) {
        goto LABEL_5;
      }
    }
    result = (_QWORD*)(((char*)0x0LL) + 1);
    v3[v5] = (1LL << v10) | v9;
    *a2 = v10 - v4;
  }
  return result;
}

__int64 cuda_driver_4db20(unsigned __int64* a1, unsigned __int64 a2,
                          unsigned __int64 a3, _QWORD* a4)
{
  __int64 result;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;

  result = 0;
  if (a1 != nullptr && a2 <= a3) {
    v6 = *a1;
    if (a3 > *a1 - 1) {
      return 0;
    }
    v9 = a1[1];
    v7 = a1 + 1;
    v8 = (_QWORD*)v9;
    v10 = a2 >> 6;
    v11 = a3 >> 6;
    if (v6 < 0x41) {
      v8 = v7;
    }
    if (v10 <= v11) {
      v12 = a2 >> 6;
      while (1) {
        v13 = v12 == v10 ? -1LL << a2 : -1LL;
        v14 = v12 == v11 ? 0xFFFFFFFFFFFFFFFFLL >> ~(_BYTE)a3 : -1LL;
        v15 = v14 & v13 & v8[v12];
        if (v15 != 0) {
          break;
        }
      LABEL_35:
        result = 0;
        if (v12++ == v11) {
          return result;
        }
      }
      v16 = 0;
      while (1) {
        v17 = v15 >> v16;
        if (((v15 >> v16) & 1) != 0) {
          break;
        }
        if ((v17 & 2) != 0) {
          *a4 = v16 + 1 + (v12 << 6);
          return 1;
        }
        if ((v17 & 4) != 0) {
          *a4 = v16 + 2 + (v12 << 6);
          return 1;
        }
        if ((v17 & 8) != 0) {
          *a4 = v16 + 3 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x10) != 0) {
          *a4 = v16 + 4 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x20) != 0) {
          *a4 = v16 + 5 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x40) != 0) {
          *a4 = v16 + 6 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x80) != 0) {
          *a4 = v16 + 7 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x100) != 0) {
          *a4 = v16 + 8 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x200) != 0) {
          *a4 = v16 + 9 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x400) != 0) {
          *a4 = v16 + 10 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x800) != 0) {
          *a4 = v16 + 11 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x1000) != 0) {
          *a4 = v16 + 12 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x2000) != 0) {
          *a4 = v16 + 13 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x4000) != 0) {
          *a4 = v16 + 14 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x8000) != 0) {
          v16 += 15;
          break;
        }
        v16 += 16;
        if (v16 == 64) {
          goto LABEL_35;
        }
      }
      *a4 = v16 + (v12 << 6);
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_unplaced_2_4f330(_QWORD* a1, unsigned __int64* a2, int a3)
{
  __int64 result;
  _QWORD* v7;
  unsigned __int64 v8;
  int v9;
  unsigned int v10;
  __int64* v11;
  struct {
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
    __int64 v28;
  } v12_;
  __int64 v29;
  struct {
    __int128 v30;
    __int128 v31;
    __int64 v32;
  } v30_;

  result = 101;
  v29 = 0;
  v12_.v28 = 0;
  v12_.v20 = (__typeof__(v12_.v20)){0};
  v12_.v21 = (__typeof__(v12_.v21)){0};
  v12_.v22 = (__typeof__(v12_.v22)){0};
  v12_.v23 = (__typeof__(v12_.v23)){0};
  v11 = nullptr;
  v12_.v24 = (__typeof__(v12_.v24)){0};
  v12_.v25 = (__typeof__(v12_.v25)){0};
  v12_.v26 = (__typeof__(v12_.v26)){0};
  v12_.v27 = (__typeof__(v12_.v27)){0};
  v12_.v12 = (__typeof__(v12_.v12)){0};
  v12_.v13 = (__typeof__(v12_.v13)){0};
  v12_.v14 = (__typeof__(v12_.v14)){0};
  v12_.v15 = (__typeof__(v12_.v15)){0};
  v12_.v16 = (__typeof__(v12_.v16)){0};
  v12_.v17 = (__typeof__(v12_.v17)){0};
  v12_.v18 = (__typeof__(v12_.v18)){0};
  v12_.v19 = (__typeof__(v12_.v19)){0};
  if ((a3 & 0x80000000) == 0 && a3 < CudaDriverData_1434ac0) {
    if (a1 != nullptr) {
      v7 = a1;
      result = CudaDriverRoutine_121c60((__int64*)&v11);
      if ((_DWORD)result == 0) {
        result = cuda_driver_97bc0(
            (__int64)&v12_.v12,
            *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a3 + 35), 0, 1);
        if ((_DWORD)result == 0) {
          v8 = *a2;
          v30_.v32 = 0;
          v30_.v30 = (__typeof__(v30_.v30)){0};
          v30_.v31 = (__typeof__(v30_.v31)){0};
          memcpy_plt((__int64)&v30_.v30, (__int64)a2, v8);
          BYTE6(v12_.v19) = DWORD2(v30_.v30) != 0;
          if ((_DWORD)v30_.v31 != 0) {
            DWORD1(v12_.v17) = v30_.v31;
          }
          if (DWORD1(v30_.v31) != 0) {
            HIDWORD(v12_.v17) = DWORD1(v30_.v31);
          }
          LOBYTE(v12_.v19) = BYTE8(v30_.v31);
          if (HIDWORD(v30_.v30) != 0) {
            v9 = 8;
          }
          else {
            v9 = 0;
          }
          DWORD2(v12_.v12) |= v9;
          if (HIDWORD(v30_.v31) != 0) {
            DWORD2(v12_.v18) = HIDWORD(v30_.v31);
          }
          if ((_DWORD)v30_.v32 != 0) {
            BYTE3(v12_.v19) = 1;
          }
          DWORD1(v12_.v13) = 3020;
          result = cuda_driver_9bad0(&v29, (__int64*)&v12_.v12);
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_1218b0_alt1(v11, v29);
            if ((_DWORD)result != 0) {
              v10 = result;
              cuda_driver_9bd90(v29);
              return v10;
            }
            else {
              *v7 = v29;
            }
          }
        }
      }
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 cuda_driver_4f8e0(__int64 a1, _QWORD* a2, __int64* a3)
{
  int v3;
  unsigned int v7;
  unsigned int v9;
  __int64 v10;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  struct {
    char gap16_[4];
    _BYTE v18[12];
    __int64 v19;
    __int64 v20;
  } v18_;

  v3 = *(unsigned __int8*)(a1 + 28);
  v16 = nullptr;
  v17 = 0;
  if (v3 != 0) {
    v7 = CudaDriverRoutine_4fa10(a1, (__int64*)&v16, 0, 0);
    if (v7 != 0 || (v7 = CudaDriverRoutine_4fc20(
                        (__int64*)a1, a2, (__int64)v18_.v18, &v17)) != 0) {
      v9 = v7;
      v10 = 0;
    }
    else {
      v12 = (_QWORD*)CudaDriverStub_12e330(16);
      v10 = (__int64)v12;
      if (v12 != nullptr &&
          (v13 = v18_.v19, *v12 = v18_.v19, v14 = CudaDriverStub_12e330(v13),
           *(_QWORD*)(v10 + 8) = v14, v14 != 0)) {
        if (fread_plt(v14, v13, 1, v17) == 1 &&
            (v15 = v18_.v20) ==
                CudaDriverRoutine_1a16e0(*(unsigned __int8**)(v10 + 8),
                                         *(_QWORD*)v10)) {
          v9 = 0;
          *a3 = v10;
        }
        else {
          v9 = 500;
        }
      }
      else {
        v9 = 2;
      }
    }
    if (v16 != nullptr) {
      CudaDriverRoutine_4fdd0(v16);
    }
    if (v17 != 0) {
      fclose_plt(v17);
    }
    if (v9 != 0) {
      if (v10 != 0) {
        CudaDriverRoutine_12e340(*(_QWORD*)(v10 + 8));
      }
      CudaDriverRoutine_12e340(v10);
    }
  }
  else {
    return 3;
  }
  return v9;
}

__int64 cuda_driver_514c0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  void (*v7)(_QWORD, __int64, __int64*);
  __int64 v8;
  _QWORD* v9;
  struct {
    __int64 v10;
    __int64 v11;
    __int64 v12;
  } v10_;
  struct {
    __int64 v13;
    int v14;
    int v15;
  } v13_;

  if (a1 == nullptr) {
    return 400;
  }
  v4 = *(_QWORD*)(*a1 + 16448);
  v10_.v10 = 0;
  v13_.v13 = 0;
  v10_.v11 = a2;
  v10_.v12 = a3;
  if (a3 != 0) {
    a2 = a3;
  }
  LODWORD(v10_.v10) = 1;
  v13_.v14 = *(_DWORD*)(v4 + 168) * *(_DWORD*)(v4 + 172);
  v13_.v15 = v13_.v14;
  result = CudaDriverRoutine_56080((__int64)a1, a2, &v13_.v13, &v9);
  if ((_DWORD)result == 0) {
    v6 = *(_QWORD*)(v4 + 16);
    v7 = *(void (**)(_QWORD, __int64, __int64*))(v6 + 152);
    if (v7 != nullptr) {
      v7(*(_QWORD*)(v4 + 8), a1[88], &v10_.v10);
      if (*(_BYTE*)(v4 + 160) == 0) {
        return CudaDriverRoutine_56100((__int64)a1, v13_.v13);
      }
    }
    else {
      (*(void (**)(_QWORD, __int64, __int64, __int64))(v6 + 8))(
          *(_QWORD*)(v4 + 8), a1[88], v10_.v11, v10_.v12);
      if (*(_BYTE*)(v4 + 160) == 0) {
        return CudaDriverRoutine_56100((__int64)a1, v13_.v13);
      }
    }
    v8 = CudaDriverRoutine_577d0(a1[88]);
    CudaDriverRoutine_574e0(v8, v9);
    return CudaDriverRoutine_56100((__int64)a1, v13_.v13);
  }
  return result;
}

__int64 cuda_driver_52110(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v10;
  unsigned int v11;
  int v12;
  void* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  unsigned int v17;
  struct {
    int v18;
    char gap4_[4];
    __int64 v19;
  } v18_;

  v1 = *(_DWORD*)(a1 + 188);
  if (v1 == 1) {
    v3 = CudaDriverRoutine_98340(a1);
    cuda_driver_108520(v3 + 24);
    v4 = *(_QWORD*)(a1 + 16448);
    if (v4 != 0) {
      v5 = nullptr;
      v6 = 0;
      v7 = 0;
      ++*(_DWORD*)(v4 + 164);
    }
    else {
      v5 = (_QWORD*)CudaDriverStub_12e330(168);
      CudaDriverRoutine_58590(v5);
      v6 = CudaDriverStub_12e330(216);
      if (v6 != 0) {
        v10 = v6;
        v11 = CudaDriverRoutine_57370(v6, 0, (__int64)v5);
        if (v11 != 0) {
          v7 = v11;
          v6 = v10;
        }
        else {
          CudaDriverRoutine_573d0(v10, *(_QWORD*)(a1 + 64));
          v12 = 1;
          *(_BYTE*)(v10 + 160) = 1;
          *(_DWORD*)(v10 + 172) =
              (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 18424LL))(43);
          v13 = CudaDriverData_1422118;
          if ((*((_BYTE*)&CudaDriverRoutine_7210 +
                 (_QWORD)CudaDriverData_1422118) &
               8) != 0) {
            v12 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) + 24LL);
          }
          *(_DWORD*)(v10 + 168) = v12;
          *(_QWORD*)(a1 + 16448) = v10;
          *(_BYTE*)(a1 + 16216) |= 2u;
          v14 = CudaDriverRoutine_98340(a1);
          if ((cuda_driver_772c0(v14) & 1) != 0 ||
              (*((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)v13) & 2) != 0) {
            CudaDriverRoutine_81690(a1);
          }
          v15 = *(_DWORD*)(a1 + 188);
          v16 = 168;
          if (v15 != 3) {
            v16 = 192;
          }
          if (*(_DWORD*)(*(_QWORD*)((char*)CudaDriverData_14225e0 + v16) +
                         4LL * (v15 != 3)) != 0) {
            v18_.v19 = a1;
            v18_.v18 = 16;
            if (v15 == 3) {
              v17 = 21;
            }
            else {
              v17 = 24;
            }
            cuda_driver_20b420(v17, v15 != 3, (__int64)&v18_.v18);
          }
          v5 = nullptr;
          v6 = 0;
          v7 = 0;
        }
      }
      else {
        v7 = 2;
      }
    }
  }
  else {
    v5 = nullptr;
    v6 = 0;
    v7 = 201;
  }
  CudaDriverRoutine_12e340(v6);
  CudaDriverRoutine_12e340((__int64)v5);
  if (v1 == 1) {
    v8 = CudaDriverRoutine_98340(a1);
    CudaDriverRoutine_1085d0(v8 + 24);
  }
  return v7;
}

bool cuda_driver_525c0()
{
  return (*((_BYTE*)&CudaDriverRoutine_7210 + (_QWORD)CudaDriverData_1422118) &
          8) != 0;
}

__int64 cuda_driver_525e0(__int64 result)
{
  *((_BYTE*)&CudaDriverRoutine_7210 + (_QWORD)CudaDriverData_1422118) =
      *((_BYTE*)&CudaDriverRoutine_7210 + (_QWORD)CudaDriverData_1422118) &
          0xF7 |
      (8 * (result & 1));
  return result;
}

__int64 cuda_driver_53610(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;

  if (a1 == nullptr || a1[1] == 0) {
    return 1;
  }
  v1 = *a1;
  if (*a1 == 0) {
    return 1;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 24LL) + 64LL);
  if ((a1[6] & (unsigned int)(*(_DWORD*)(v2 + 3780) - 1)) != 0) {
    return 5;
  }
  if (*((_DWORD*)a1 + 4) <
      (unsigned int)(*(_DWORD*)(v1 + 232) + *(_DWORD*)(v2 + 3784) - 1) /
          *(_DWORD*)(v2 + 3784) * *(_DWORD*)(v2 + 3784)) {
    return 2;
  }
  result = (*(__int64 (**)(void*))(v2 + 18688))(
      (void*)*(_QWORD*)(*(_QWORD*)(v1 + 32) + 24LL));
  if ((_DWORD)result != 0) {
    return ((_DWORD)result << 16) | 0xFFFFu;
  }
  a1[14] = a1[1] + *(unsigned int*)(v1 + 236);
  *((_DWORD*)a1 + 30) = *(_DWORD*)(v1 + 632);
  return result;
}

__int64 cuda_driver_54130(__int64 a1)
{
  unsigned int v1;
  void(__attribute__((noreturn)) * *v4)();
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 64LL) + 3144LL) - 3;
  if (v1 > 6) {
    return 6;
  }
  v4 = CudaDriverData_1130788[v1];
  v5 = CudaDriverData_11307c0[v1];
  v6 = CudaDriverData_11307f8[v1];
  v7 = CudaDriverData_1130830[v1];
  v8 = *(_QWORD*)(a1 + 8);
  *(void(__attribute__((noreturn))**)())((char*)v4 + v8) =
      *(void(__attribute__((noreturn))**)())(a1 + 16);
  *(_QWORD*)(v8 + v5) = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(v8 + v6) = *(_QWORD*)(a1 + 32);
  *(_DWORD*)(v8 + v7) = *(_DWORD*)(a1 + 40);
  return 0;
}

__int64 cuda_driver_54690(__int64 a1)
{
  __int64 v2;
  __int64 result;
  struct {
    int v4;
    char gap4_[4];
    __int64 v5;
  } v4_;

  v2 = CudaDriverRoutine_98340(a1);
  result = cuda_driver_772c0(v2);
  if ((result & 1) != 0 ||
      (*((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)CudaDriverData_1422118) & 2) !=
          0) {
    result = CudaDriverRoutine_816b0(a1);
  }
  if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_1432208) != 0) {
    v4_.v5 = a1;
    v4_.v4 = 16;
    return cuda_driver_20b420(0x1Bu, 1u, (__int64)&v4_.v4);
  }
  return result;
}

__int64 cuda_driver_547e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[8];
    _BYTE* v10;
  } v9_;
  _BYTE v11[256];

  if (*(_QWORD*)(*(_QWORD*)(result + 24) + 48LL) != 0) {
    v2 = *(_QWORD*)(a2 + 224);
    if (v2 != 0) {
      v3 = result;
      do {
        snprintf_plt(v11, 255,
                     "origin=nvcbl\noriginalName=%s\nregcount=%d\nsmemSize::"
                     "userStatic=0x%x\nlmemsize=0x%x\nbar=%d\n",
                     *(const char**)(v2 + 8), *(_DWORD*)(v2 + 68),
                     *(_DWORD*)(v2 + 128), *(_DWORD*)(v2 + 72),
                     *(_DWORD*)(v2 + 76));
        v4 = CudaDriverStub_b9660(v2);
        v9_.v10 = nullptr;
        memset(&v9_.v9[4], 0, 32);
        *(_OWORD*)&v9_.v9[2] = (__typeof__(*(_OWORD*)&v9_.v9[2])){0};
        v5 = *(_QWORD*)(v2 + 32);
        *(_OWORD*)v9_.v9 = *(_OWORD*)(v3 + 8);
        v9_.v9[2] = v5;
        v9_.v9[3] = *(_QWORD*)(v2 + 8);
        v9_.v9[4] = v4;
        v6 = *(_QWORD*)(v2 + 96);
        v9_.v9[5] = *(unsigned int*)(v2 + 60);
        v7 = CudaDriverStub_1db800(v6);
        v8 = *(_QWORD*)(v2 + 104);
        v9_.v10 = v11;
        v9_.v9[6] = v7;
        v9_.v9[7] = v8;
        result = (*(__int64 (**)(_QWORD*))(*(_QWORD*)(v3 + 24) + 48LL))(v9_.v9);
        v2 = *(_QWORD*)(v2 + 1144);
      } while (v2 != 0);
    }
  }
  return result;
}

double cuda_driver_548d0(__int64 a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  _QWORD* v6;
  double result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  v6 = (_QWORD*)CudaDriverRoutine_12e510(1, 208),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  if (v6 != nullptr) {
    v6[1] = a1;
    v6[2] = a2;
    v6[3] = a3;
    v6[25] = 1;
    *v6 = 0x2000000D0LL;
    *(_QWORD*)&result = 0x2000000D0LL;
  }
  return result;
}

_QWORD* cuda_driver_54a60(_QWORD* result)
{
  __int64 v1;
  char* v2;
  unsigned __int64 v3;
  unsigned int v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;

  v1 = result[3];
  result[1] = 0x2F3A00000002LL;
  v2 = (char*)CudaDriverData_1422118;
  v3 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                        (_QWORD)CudaDriverData_1422118);
  if (v1 != 0) {
    if (result[2] < v3) {
      v3 = result[2];
    }
    result[2] = v3;
    if (v3 != 0) {
      v4 = 1;
      v5 = 0;
      do {
        v6 = 32 * v5;
        v7 = &v2[8 * v5];
        *(_DWORD*)(result[3] + v6 + 8) = 2;
        *(_DWORD*)(result[3] + v6 + 16) = **((_DWORD**)v7 + 35);
        *(_QWORD*)(result[3] + v6) = *((_QWORD*)v7 + 35);
        v5 = v4++;
      } while (result[2] > v5);
    }
  }
  else {
    result[2] = v3;
  }
  return result;
}

__int64 cuda_driver_550f0(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    char gap0_[8];
    unsigned __int64 v20;
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
    __int128 v43;
    __int64 v44;
  } v20_;
  __int64 v45;

  v45 = 0;
  if (a1 == 0) {
    return 1;
  }
  v1 = *(_QWORD*)a1;
  if (*(_QWORD*)a1 == 0) {
    return 201;
  }
  result = cuda_driver_misc_helpers_deeb0(*(_QWORD*)a1, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (*(_QWORD*)(a1 + 24) == 0) {
    return 1;
  }
  v20_.v44 = 0;
  v20_.v38 = (__typeof__(v20_.v38)){0};
  v20_.v39 = (__typeof__(v20_.v39)){0};
  v20_.v40 = (__typeof__(v20_.v40)){0};
  v20_.v41 = (__typeof__(v20_.v41)){0};
  v20_.v37 = (__typeof__(v20_.v37)){0};
  v20_.v36 = (__typeof__(v20_.v36)){0};
  v20_.v35 = (__typeof__(v20_.v35)){0};
  v20_.v34 = (__typeof__(v20_.v34)){0};
  v20_.v33 = (__typeof__(v20_.v33)){0};
  v20_.v32 = (__typeof__(v20_.v32)){0};
  v20_.v31 = (__typeof__(v20_.v31)){0};
  v20_.v30 = (__typeof__(v20_.v30)){0};
  v20_.v29 = (__typeof__(v20_.v29)){0};
  v20_.v42 = (__typeof__(v20_.v42)){0};
  v20_.v43 = (__typeof__(v20_.v43)){0};
  v4 = *(unsigned int*)(a1 + 8);
  v20_.v21 = (__typeof__(v20_.v21)){0};
  v20_.v22 = (__typeof__(v20_.v22)){0};
  v20_.v23 = (__typeof__(v20_.v23)){0};
  v20_.v24 = (__typeof__(v20_.v24)){0};
  v20_.v25 = (__typeof__(v20_.v25)){0};
  v20_.v26 = (__typeof__(v20_.v26)){0};
  v20_.v27 = (__typeof__(v20_.v27)){0};
  v20_.v28 = (__typeof__(v20_.v28)){0};
  if ((_DWORD)v4 != 1) {
    if ((_DWORD)v4 != 0) {
      return 1;
    }
    v4 = 2;
  }
  v5 = *(_DWORD*)(a1 + 12);
  if (v5 >> 13 != 0) {
    return 1;
  }
  if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) &
       1) != 0) {
    v6 = 16;
  }
  else {
    v6 = 24;
  }
  if ((*(_DWORD*)(a1 + 12) & 8 |
       *((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) &
           1) != 0) {
    v7 = 16;
  }
  else {
    v7 = 24;
  }
  v8 = 128;
  if ((v5 & 4) == 0) {
    v8 = 64;
  }
  v9 = 1536;
  if (v5 < 0x1000) {
    v9 = 512;
  }
  v10 = v9 | v8 | v4 | v7;
  if (v5 >= 0x1000) {
    v10 = v10 & 0x6C3 | v6;
  }
  v11 = 0x1000000;
  if ((v10 & 3) != 1) {
    v11 = (v5 << 20) & 0x1000000;
  }
  v12 = 0x84080011C000000LL;
  if ((v5 & 0x1001) == 0) {
    v12 = 0x84080010C000000LL;
  }
  v20_.v20 = v12 | ((unsigned __int64)((*(_DWORD*)(a1 + 12) & 2) != 0) << 41) |
             v10 | v11;
  if ((v5 & 0x20) != 0) {
    return 801;
  }
  v13 = CudaDriverRoutine_98340(v1);
  cuda_driver_108520(v13 + 24);
  v14 = cuda_driver_1da1b0(*(_QWORD*)(v1 + 80), (__int64*)&v20_.v20,
                           *(_QWORD*)(a1 + 24), &v45);
  if (v14 == 0) {
    v15 = CudaDriverStub_1dbfc0(v45);
    v16 = (*(__int64 (**)(_QWORD, unsigned __int64*))(
        *(_QWORD*)(v1 + 64) + 19440LL))(*(_QWORD*)(v1 + 80), &v20_.v20);
    v17 = *(_QWORD*)(v15 + 136);
    if (v17 <= v16) {
      v17 = v16;
    }
    v18 = v45;
    *(_QWORD*)(a1 + 48) = v17;
    cuda_driver_ef110(v18, 8u);
    *(_QWORD*)(a1 + 32) = CudaDriverStub_102e00(v45);
    *(_QWORD*)(a1 + 40) = CudaDriverStub_1dbab0(v45);
  }
  v19 = CudaDriverRoutine_98340(v1);
  CudaDriverRoutine_1085d0(v19 + 24);
  return v14;
}

__int64 cuda_driver_55a00(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7;
  __int64 v10;
  __int64 v11;
  int64x2_t* v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;

  v7 = *(_QWORD*)(a7 + 56);
  v10 = *(_QWORD*)(a7 + 16) * *(unsigned int*)(a7 + 12);
  v11 = CudaDriverStub_102e00(v7);
  v12 = (int64x2_t*)CudaDriverStub_12e330(v10);
  if (v12 == nullptr) {
    return 2;
  }
  v13 = (__int64)v12;
  cuda_driver_64280(v12, *(_DWORD*)(a7 + 8), *(_DWORD*)(a7 + 12),
                    *(_QWORD*)(a7 + 16));
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) == 2) {
    v14 = 8;
  }
  else {
    v14 = 0;
  }
  v15 = CudaDriverRoutine_f60f0(a1, v7, *(_QWORD*)a7 - v11, v13, v10,
                                *(_QWORD*)(a1 + 96), 1u, 0, v14);
  CudaDriverRoutine_12e340(v13);
  return v15;
}

__int64 cuda_driver_57800(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 result;
  unsigned __int64 v9;
  __int128 v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  unsigned __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 (*v33)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64);
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  struct {
    char v41[8];
    __int64 v42;
    unsigned __int64 v43;
    char v44;
    char gap57_[7];
    int v45;
  } v41_;
  _QWORD v46[3];
  __int64 v47;
  __int64 v48;
  struct {
    _QWORD v49[6];
    int v50;
  } v49_;

  v3 = *(_QWORD*)(a3 + 40);
  v4 = a2;
  memset(v46, 0, sizeof(v46));
  v7 = *(_QWORD*)(v3 + 16448);
  result = CudaDriverRoutine_1297a0(a2, v46);
  if ((_DWORD)result == 0) {
    v9 = *(_QWORD*)(a3 + 48);
    if (v9 <= *(_QWORD*)(a1 + 1256)) {
      goto LABEL_4;
    }
    v10 = *(_OWORD*)(a1 + 1264);
    *(_OWORD*)v49_.v49 = *(_OWORD*)(a1 + 1248);
    *(_OWORD*)&v49_.v49[2] = v10;
    v11 = *(_OWORD*)(a1 + 1280);
    v49_.v49[1] = v9;
    v49_.v50 = 1;
    *(_OWORD*)&v49_.v49[4] = v11;
    v12 = CudaDriverRoutine_98340(a1);
    result = cuda_driver_9e5f0(v12, 0, (__int128*)v49_.v49);
    if ((_DWORD)result == 0) {
    LABEL_4:
      v13 = CudaDriverRoutine_98340(*(_QWORD*)(a3 + 40));
      CudaDriverRoutine_9bed0(v13, v4);
      CudaDriverRoutine_205fa0(0, v4, (__int64)&v48, &v47);
      if (*(_BYTE*)(a3 + 16) == 0) {
        if (*(_DWORD*)(a3 + 12) == 0) {
          *(_BYTE*)(a3 + 16) = 1;
          v18 = v47;
          if ((*((_BYTE*)&CudaDriverRoutine_7210 +
                 (_QWORD)CudaDriverData_1422118) &
               8) == 0) {
          LABEL_11:
            v19 = 0;
            v20 = CudaDriverStub_1223e0(*(_QWORD*)(v18 + 33768));
            if (*(_DWORD*)(a3 + 36) != 0) {
              goto LABEL_12;
            }
            goto LABEL_17;
          }
        LABEL_16:
          v19 = *(_DWORD*)(v18 + 28);
          v20 = CudaDriverStub_1223e0(*(_QWORD*)(v18 + 33768));
          if (*(_DWORD*)(a3 + 36) != 0) {
          LABEL_12:
            v37 = v4;
            v38 = v20;
            v40 = v7;
            v21 = 0;
            v39 = v19;
            do {
              v22 = *(__int64**)(*(_QWORD*)(a3 + 24) + 8 * v21);
              v23 = (unsigned int)(*(_DWORD*)(v40 + 172) * v19);
              v24 = *v22;
              v25 = v22[1];
              v26 = (char*)v22 + v23;
              v27 = CudaDriverRoutine_5b820(v47 + 33736);
              v28 = v27;
              v41_.v44 = 0;
              v41_.v45 = 0;
              v41_.v41[0] = 1;
              v29 = *(_QWORD*)(a3 + 40);
              v41_.v42 = v38;
              v41_.v43 = v27;
              (*(void (**)(char*, _QWORD, char*))(
                  *(_QWORD*)(v29 + 64) + 18712LL))(v26 + 560, 0, v41_.v41);
              v30 = (*(__int64 (**)(__int64, __int64, __int64, char*, _QWORD,
                                    __int64))(*(_QWORD*)(a1 + 64) + 19248LL))(
                  v48, a1, v25 + v23, v26 + 560, *(unsigned int*)(v40 + 172),
                  2);
              v31 = *(_QWORD*)(a3 + 40);
              v48 = v30;
              v32 = (*(__int64 (**)(__int64, __int64, __int64))(
                  *(_QWORD*)(v31 + 64) + 18672LL))(v30, v24 + v23, 1);
              v19 = v39;
              v33 = *(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                                   _QWORD,
                                   __int64))(*(_QWORD*)(a1 + 64) + 19112LL);
              v48 = v32;
              v34 = v33(v32, v47, v47, a1, v38, v28, 1);
              v35 = *(unsigned int*)(a3 + 36);
              ++v21;
              v48 = v34;
            } while (v21 < v35);
            v4 = v37;
            v36 = v34;
            goto LABEL_18;
          }
        LABEL_17:
          v36 = v48;
        LABEL_18:
          CudaDriverRoutine_2060c0(v4, v36, 0);
          return 0;
        }
        v14 = *(__int64**)a3;
        memcpy_plt(v48, **(_QWORD**)a3, *(unsigned int*)(*(_QWORD*)a3 + 8LL));
        v48 += *((unsigned int*)v14 + 2);
        CudaDriverRoutine_2060c0(v4, v48, 0);
        if (*(_DWORD*)(a3 + 12) >= 2u) {
          v15 = 1;
          v16 = 0;
          do {
            v17 = *(_QWORD*)a3 + v16;
            CudaDriverRoutine_205fa0(0, v4, (__int64)&v48, &v47);
            memcpy_plt(v48, *(_QWORD*)(v17 + 16), *(unsigned int*)(v17 + 24));
            v48 += *(unsigned int*)(v17 + 24);
            CudaDriverRoutine_2060c0(v4, v48, 0);
            ++v15;
            v16 += 16;
          } while (v15 < *(unsigned int*)(a3 + 12));
        }
        *(_BYTE*)(a3 + 16) = 1;
        CudaDriverRoutine_205fa0(0, v4, (__int64)&v48, &v47);
      }
      v18 = v47;
      if ((*((_BYTE*)&CudaDriverRoutine_7210 + (_QWORD)CudaDriverData_1422118) &
           8) == 0) {
        goto LABEL_11;
      }
      goto LABEL_16;
    }
  }
  return result;
}

__int64 cuda_driver_58e10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7;
  __int64 v10;
  __int64 v11;
  int64x2_t* v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;

  v7 = *(_QWORD*)(a7 + 56);
  v10 = *(_QWORD*)(a7 + 16) * *(unsigned int*)(a7 + 12);
  v11 = CudaDriverStub_102e00(v7);
  v12 = (int64x2_t*)CudaDriverStub_12e330(v10);
  if (v12 == nullptr) {
    return 2;
  }
  v13 = (__int64)v12;
  cuda_driver_64280(v12, *(_DWORD*)(a7 + 8), *(_DWORD*)(a7 + 12),
                    *(_QWORD*)(a7 + 16));
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) == 2) {
    v14 = 8;
  }
  else {
    v14 = 0;
  }
  v15 = CudaDriverRoutine_f60f0(a1, v7, *(_QWORD*)a7 - v11, v13, v10,
                                *(_QWORD*)(a1 + 96), 1u, 0, v14);
  CudaDriverRoutine_12e340(v13);
  return v15;
}

__int64 cuda_driver_595a0(__int64 a1, _QWORD* a2, unsigned int a3,
                          unsigned int a4)
{
  _BOOL8 v8;
  __int64 v12;
  int v14;
  int v15;
  __int64 v16;
  __int64 result;
  _BYTE v18[4];

  v8 = CudaDriverRoutine_98110(*(_QWORD*)(*(_QWORD*)a1 + 8LL));
  if ((a4 & 0x20) == 0 && v8) {
    CudaDriverStub_57450(v8);
  }
  v12 = a1;
  if (*(_BYTE*)(a1 + 37) == 0) {
    v12 = *(_QWORD*)(*(_QWORD*)a1 + 48LL);
  }
  CudaDriverStub_107f90(v12 + 8);
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &&
      *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)CudaDriverData_1422118) == 0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a1 + 33816) + 8LL) + 64LL) +
                17329LL) != 0) {
    v14 = *(_DWORD*)(a1 + 34248);
    __builtin_arm_dmb(0xDu);
    if (v14 != 0) {
      do {
        CudaDriverStub_12dca0(100);
        v15 = *(_DWORD*)(a1 + 34248);
        __builtin_arm_dmb(0xDu);
      } while (v15 != 0);
    }
  }
  v16 = *(_QWORD*)a1;
  *(_QWORD*)(a1 + 33144) =
      CudaDriverRoutine_12dea0((atomic_ullong*)(*(_QWORD*)a1 + 132696LL));
  result = cuda_driver_5e7e0(v16);
  if ((_DWORD)result != 0 ||
      (v18[0] = 0, (_DWORD)(result = cuda_driver_5a700_alt1(
                                (__int64*)a1, 1, v18, a3, a4)) != 0) ||
      (_DWORD)(result = (*(__int64 (**)(__int64, bool, _BYTE*))(a1 + 34112))(
                   a1, v18[0] == 0, v18)) != 0) {
    *a2 = v16 + 34392;
  }
  else {
    result = (*(__int64 (**)(__int64, _QWORD*, _QWORD, _QWORD))(a1 + 33912))(
        a1, a2, a3, a4);
  }
  *(_BYTE*)(a1 + 34152) = 1;
  *(_QWORD*)(v16 + 34368) = a1;
  return result;
}

void cuda_driver_59a40(_DWORD* a1, __int64 a2, char a3, char a4)
{
  __int64 v4;
  _DWORD* v9;
  __int64 v10;
  int v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  _BYTE v22[4];
  __int64 v23;

  v4 = *(_QWORD*)a1;
  v9 = a1 + 0x2000;
  v23 = a2;
  v22[0] = 0;
  v10 = *(_QWORD*)(v4 + 8);
  if ((unsigned int)cuda_driver_5e7e0(v4) == 0) {
    if ((a4 & 0x10) != 0) {
      v11 = 0;
      v17 = 1;
      goto LABEL_33;
    }
    if ((a4 & 4) != 0) {
      v23 = (*(__int64 (**)(__int64))(*(_QWORD*)(v10 + 64) + 19184LL))(a2);
    }
    if ((a4 & 0x20) != 0) {
      cuda_driver_5aba0((__int64)a1, &v23, a4);
      if (*((_BYTE*)v9 + 1457) != 0) {
        goto LABEL_9;
      }
    }
    else {
      if (*((_BYTE*)v9 + 420) == 0) {
        if (a3 != 0) {
          cuda_driver_5aba0((__int64)a1, &v23, a4);
          v11 = 0;
        }
        else {
          v11 = 0;
          *((_BYTE*)v9 + 1404) |= 1u;
        }
      LABEL_18:
        if (*((_BYTE*)v9 + 420) != 0) {
          if (*((_BYTE*)v9 + 417) != 0) {
            if (*((_BYTE*)v9 + 419) != 0) {
              v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 8LL) + 64LL);
              atomic_fetch_or((atomic_ullong* volatile)(v9 + 360), 0);
              v19 = (*(__int64 (**)(void*))(v18 + 21464))(
                  *(void**)(*(_QWORD*)(*(_QWORD*)a1 + 8LL) + 64LL));
              if (v19 != 0) {
                CudaDriverRoutine_5e800(v4, v19);
                return;
              }
              goto LABEL_32;
            }
            v20 = a1[8];
            if (v20 != 0) {
              if (v20 <= 0xA) {
                v21 = (*(__int64 (**)(__int64, __int64, _QWORD))(
                    *(_QWORD*)(v10 + 64) + 18496LL))(
                    v23, v10, *((unsigned __int8*)v9 + 418));
              }
              else {
                if (v20 != 11) {
                LABEL_32:
                  v17 = 0;
                  *((_BYTE*)v9 + 420) = 0;
                  goto LABEL_33;
                }
                v21 = (*(__int64 (**)(__int64, __int64, _DWORD*, _QWORD))(
                    *(_QWORD*)(v10 + 64) + 18504LL))(
                    v23, v10, a1, *((unsigned __int8*)v9 + 418));
              }
            }
            else {
              v21 = (*(__int64 (**)(__int64, __int64, _QWORD))(
                  *(_QWORD*)(v10 + 64) + 18488LL))(
                  v23, v10, *((unsigned __int8*)v9 + 418));
            }
            v23 = v21;
            goto LABEL_32;
          }
          v17 = 0;
        }
        else {
          v17 = 1;
        }
      LABEL_33:
        (*((void (**)(_DWORD*, __int64, _BYTE*))v9 + 144))(a1, v23, v22);
        *((_BYTE*)v9 + 1384) = 0;
        *(_QWORD*)(v4 + 34368) = 0;
        if ((a4 & 0x40) != 0 || v17 == 0 || (v22[0] | v11) != 0) {
          cuda_driver_59ce0((__int64)a1);
        }
        goto LABEL_37;
      }
      v11 = *((unsigned __int8*)v9 + 419);
      cuda_driver_5aba0((__int64)a1, &v23, a4);
      if (v11 == 0) {
        goto LABEL_18;
      }
      if (*((_BYTE*)v9 + 1457) != 0) {
      LABEL_9:
        v12 = atomic_fetch_or((atomic_ullong* volatile)(v9 + 360), 0);
        v13 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 8LL) + 64LL) + 19760LL))(
            v23, (unsigned int)v12, (unsigned int)(HIDWORD(v12) + 1),
            *((_QWORD*)v9 + 181));
        v14 = (unsigned int)v12 |
              ((unsigned __int64)(unsigned int)(HIDWORD(v12) + 1) << 32);
        v23 = v13;
        do {
          v15 = *((_QWORD*)v9 + 180);
          v16 = v15;
          atomic_compare_exchange_strong((atomic_ullong* volatile)(v9 + 360),
                                         (unsigned __int64*)&v16, v14);
        } while (v16 != v15);
        v11 = 1;
        goto LABEL_18;
      }
    }
    v11 = 1;
    *((_BYTE*)v9 + 1424) = 1;
    goto LABEL_18;
  }
LABEL_37:
  *((_BYTE*)v9 + 1424) = 0;
}

void cuda_driver_59ce0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v5;
  __int64 v6;
  char v7;
  void* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  void (*v12)(__int64, __int64*, __int64, _QWORD);
  char v13;
  __int64 v14;
  __int64* v15;
  bool v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  _BYTE* v20;
  _BYTE* v21;
  _BYTE* v22;
  int v24;
  int v25;
  __int64 v26;
  _DWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 (*v31)(__int64);
  unsigned int v32;
  _BOOL4 v33;
  _BYTE v34[4];
  _BYTE v35[4];
  __int64 v36;

  v1 = a1 + 0x8000;
  v2 = *(_QWORD*)a1;
  v3 = *(unsigned __int8*)(a1 + 36);
  v34[0] = 0;
  v5 = *(_QWORD*)(a1 + 33824);
  if (v3 != 0) {
    v33 = *(_DWORD*)(v5 + 20) != 1;
    if ((unsigned int)cuda_driver_5e7e0(v2) != 0) {
      return;
    }
  }
  else {
    v33 = true;
    if ((unsigned int)cuda_driver_5e7e0(v2) != 0) {
      return;
    }
  }
  v6 = *(_QWORD*)v5;
  if (*(_QWORD*)v5 != 0) {
    v7 = 0;
    v8 = CudaDriverData_1422118;
    do {
      v10 = v6 + 0x8000;
      v11 = *(_QWORD*)(v6 + 33808);
      if ((*(_BYTE*)(v6 + 34172) & 1) != 0) {
        v35[0] = 0;
        if ((unsigned int)cuda_driver_5a700_alt1((__int64*)a1, 0, v35, 0x80u,
                                                 0) != 0 ||
            (*(unsigned int (**)(__int64, _QWORD, _BYTE*))(v1 + 1344))(
                a1, 0, v35) != 0) {
          return;
        }
        v12 = *(void (**)(__int64, __int64*, __int64, _QWORD))(v1 + 1144);
        v36 = 0;
        v12(a1, &v36, 128, 0);
        CudaDriverRoutine_5b640(
            (_DWORD*)a1, *(_QWORD*)(v1 + 1000),
            atomic_fetch_add((atomic_ullong* volatile)(v1 + 976), 1u) + 1, 0,
            (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)v8) & 2) == 0,
            *(_BYTE*)(v1 + 1016), 0, &v36);
        v13 = *(_BYTE*)(v1 + 1404);
        v14 = v36;
        *(_QWORD*)(v1 + 1392) = 0;
        *(_BYTE*)(v1 + 1404) = v13 & 0xFE;
        (*(void (**)(__int64, __int64, _BYTE*))(v1 + 1152))(a1, v14, v34);
      }
      v9 = atomic_fetch_or((atomic_ullong* volatile)(v10 + 984), 0);
      if (v9 != atomic_fetch_or((atomic_ullong* volatile)(v10 + 976), 0)) {
        v7 = 1;
      }
      cuda_driver_207340(v11, 4);
      v6 = *(_QWORD*)(v10 + 1064);
      *(_QWORD*)(v10 + 1040) = 0;
    } while (v6 != 0);
    if (v7 != 0) {
      CudaDriverRoutine_99340(*(_QWORD*)(v2 + 8));
      (*(void (**)(__int64))(v5 + 136))(v5);
      if (v33) {
        while (CudaDriverRoutine_198160(*(unsigned int***)(v5 + 24)) != 0) {
          v15 = (__int64*)CudaDriverStub_102370();
          cuda_driver_59ce0(*v15);
          if ((unsigned int)cuda_driver_5e7e0(v2) != 0) {
            return;
          }
        }
      }
      v16 = *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v8) >= 2u &&
            *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v8) == 0;
      if (v16 && *(_DWORD*)(a1 + 32) == 0) {
        v20 = (_BYTE*)CudaDriverRoutine_5f0d0((unsigned int*)a1);
        v21 = v20;
        v22 = v20;
        if (v20[37] == 0) {
          v22 = *(_BYTE**)(*(_QWORD*)v20 + 48LL);
        }
        CudaDriverStub_107f90_alt3(v22 + 8);
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v8) >= 2u &&
            *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)v8) == 0 &&
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(**((_QWORD**)v21 + 4227) + 8LL) +
                                 64LL) +
                      17329LL) != 0) {
          v24 = *((_DWORD*)v21 + 8562);
          __builtin_arm_dmb(0xDu);
          if (v24 != 0) {
            do {
              CudaDriverStub_12dca0(100);
              v25 = *((_DWORD*)v21 + 8562);
              __builtin_arm_dmb(0xDu);
            } while (v25 != 0);
          }
        }
        v17 = CudaDriverRoutine_197020((__int64*)v5);
        if (v21[37] == 0) {
          v21 = *(_BYTE**)(*(_QWORD*)v21 + 48LL);
        }
        CudaDriverStub_108070_alt3(v21 + 8);
        if (v17 != 0) {
        LABEL_26:
          cuda_driver_98c70(*(_QWORD*)(*(_QWORD*)a1 + 8LL), v17);
          v18 = v2;
          v19 = v17;
        LABEL_47:
          CudaDriverRoutine_5e800(v18, v19);
          return;
        }
      }
      else {
        v17 = CudaDriverRoutine_197020((__int64*)v5);
        if (v17 != 0) {
          goto LABEL_26;
        }
      }
    }
  }
  if (v33) {
  LABEL_41:
    while (1) {
      v26 = CudaDriverRoutine_198100(*(unsigned int***)(v5 + 24));
      if (v26 == 0) {
        break;
      }
      v27 = (_DWORD*)v26;
      v28 = CudaDriverStub_102370();
      CudaDriverRoutine_198310(v27, *(_QWORD*)(v5 + 24));
      v29 = *(_QWORD*)v5;
      if (*(_QWORD*)v5 != 0) {
        while (1) {
          v30 = v29 + 0x8000;
          v31 = *(__int64 (**)(__int64))(v28 + 120);
          atomic_fetch_or((atomic_ullong* volatile)(v29 + 33752), 0);
          v32 = v31(v28);
          if (v32 != 0) {
            break;
          }
          v29 = *(_QWORD*)(v30 + 1064);
          if (v29 == 0) {
            goto LABEL_41;
          }
        }
        v19 = v32;
        v18 = v2;
        goto LABEL_47;
      }
    }
  }
}

__int64 cuda_driver_5a060(__int64 a1)
{
  __int64 v2;
  int v4;
  int v5;

  v2 = a1;
  if (*(_BYTE*)(a1 + 37) == 0) {
    v2 = *(_QWORD*)(*(_QWORD*)a1 + 48LL);
  }
  CudaDriverStub_107f90(v2 + 8);
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &&
      *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)CudaDriverData_1422118) == 0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a1 + 33816) + 8LL) + 64LL) +
                17329LL) != 0) {
    v4 = *(_DWORD*)(a1 + 34248);
    __builtin_arm_dmb(0xDu);
    if (v4 != 0) {
      do {
        CudaDriverStub_12dca0(100);
        v5 = *(_DWORD*)(a1 + 34248);
        __builtin_arm_dmb(0xDu);
      } while (v5 != 0);
    }
  }
  cuda_driver_59ce0(a1);
  if (*(_BYTE*)(a1 + 37) != 0) {
    return CudaDriverStub_108070(a1 + 8);
  }
  else {
    return CudaDriverStub_108070(*(_QWORD*)(*(_QWORD*)a1 + 48LL) + 8LL);
  }
}

bool cuda_driver_5a220(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v3;
  __int64 v6;
  __int64 v9;
  __int64 v11;
  int v13;
  int v14;
  __int64 v15;
  unsigned __int64 v16;

  v3 = *(_DWORD*)(a2 + 16);
  if ((v3 | a3 & 0x10) == 0) {
    return false;
  }
  v6 = a1;
  if (v3 == 1 && (a3 & 2) == 0 && *(_BYTE*)(a1 + 44) == 0) {
    v9 = *(_QWORD*)(a2 + 24);
    if (*(_DWORD*)v9 == 1 && *(_QWORD*)(v9 + 8) == a1) {
      return false;
    }
  }
  if ((unsigned int)cuda_driver_5e7e0(*(_QWORD*)a1) != 0) {
    return false;
  }
  CudaDriverRoutine_1bb040(a2);
  if (*(_BYTE*)(v6 + 36) != 0 && (a3 & 0x80) != 0 &&
      *(_DWORD*)(*(_QWORD*)(v6 + 33824) + 20LL) == 1) {
    return true;
  }
  v11 = v6;
  if (*(_BYTE*)(v6 + 37) == 0) {
    v11 = *(_QWORD*)(*(_QWORD*)v6 + 48LL);
  }
  CudaDriverStub_107f90(v11 + 8);
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &&
      *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)CudaDriverData_1422118) == 0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(**(_QWORD**)(v6 + 33816) + 8LL) + 64LL) +
                17329LL) != 0) {
    v13 = *(_DWORD*)(v6 + 34248);
    __builtin_arm_dmb(0xDu);
    if (v13 != 0) {
      do {
        CudaDriverStub_12dca0(100);
        v14 = *(_DWORD*)(v6 + 34248);
        __builtin_arm_dmb(0xDu);
      } while (v14 != 0);
    }
  }
  if ((a3 & 8) != 0) {
    *(_BYTE*)(v6 + 33188) = 1;
  }
  if (*(_DWORD*)(a2 + 16) != 0) {
    v15 = 0;
    v16 = 0;
    do {
      cuda_driver_5b0c0_alt1(v6, *(_QWORD*)(a2 + 24) + v15);
      ++v16;
      v15 += 40;
    } while (v16 < *(unsigned int*)(a2 + 16));
  }
  if ((a3 & 0x80) == 0) {
    (*(void (**)(__int64, unsigned __int64, _QWORD, _QWORD))(v6 + 34088))(
        v6, a2, a3, 0);
  }
  if (*(_BYTE*)(v6 + 37) == 0) {
    v6 = *(_QWORD*)(*(_QWORD*)v6 + 48LL);
  }
  CudaDriverStub_108070(v6 + 8);
  return (a3 & 0x80) != 0;
}

__int64 cuda_driver_5a700(__int64* a1, char a2, _BYTE* a3, unsigned int a4,
                          char a5)
{
  __int64 v10;
  void* v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  unsigned int v30;
  struct {
    int v31;
    int v32;
    __int64 v33;
    __int128 v34;
    __int128 v35;
    __int128 v36;
  } v31_;

  v10 = CudaDriverRoutine_196750((__int64)a1, a4, a5);
  if ((_BYTE)v10 == 0) {
    v12 = CudaDriverData_14225e0;
    if (*(_DWORD*)((char*)((__int64*)0x18LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) +
                              (_QWORD)CudaDriverData_14225e0) +
                   4) != 0) {
      v13 = a1[6];
      v31_.v35 = (__typeof__(v31_.v35)){0};
      v31_.v36 = (__typeof__(v31_.v36)){0};
      v31_.v34 = (__typeof__(v31_.v34)){0};
      v14 = *(_QWORD*)(v13 + 64);
      v15 = *(_DWORD*)(v13 + 72);
      v31_.v31 = 64;
      v16 = v14 + 56LL * v15;
      v31_.v33 = *(_QWORD*)(*a1 + 8);
      v17 = *(_DWORD*)(v16 + 28);
      if (v17 != 0) {
        *(_QWORD*)&v31_.v34 =
            CudaDriverRoutine_1ff5f0(*(_QWORD**)v16) + *(_QWORD*)(v16 + 16);
        v15 = *(_DWORD*)(v13 + 72);
        v17 = *(_DWORD*)(v16 + 28);
      }
      *((_QWORD*)&v31_.v34 + 1) = __PAIR64__(*((_DWORD*)a1 + 24), v17);
      LODWORD(v31_.v35) = *((_DWORD*)a1 + 8);
      v18 = *(_DWORD*)(v13 + 8);
      v19 = v18 - 1 + *(_DWORD*)(v13 + 76);
      DWORD3(v31_.v35) = *(_DWORD*)(v13 + 80);
      DWORD1(v31_.v35) = (v18 - 1 + v15) % v18;
      DWORD2(v31_.v35) = v19 % v18;
      v31_.v32 = *(_DWORD*)(a1[4228] + 16);
      v10 = cuda_driver_20b420(0x12u, 7u, (__int64)&v31_.v31);
    }
    if (a2 != 0) {
      v10 = ((__int64 (*)(__int64))cuda_driver_59ce0)((__int64)a1);
      *a3 = 1;
    }
    do {
      CudaDriverStub_12dc90(v10);
      v20 = CudaDriverRoutine_98650(*(_QWORD*)(*a1 + 8), 0);
      if (v20 != 0) {
        v28 = v20;
        v29 = *a1;
        v30 = v28;
        CudaDriverRoutine_5e800(v29, v28);
        return v30;
      }
      v10 = CudaDriverRoutine_196750((__int64)a1, a4, a5);
    } while ((_BYTE)v10 == 0);
    if (*(_DWORD*)((char*)((char*)0x20LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v12)) != 0) {
      v21 = a1[6];
      v22 = *(_QWORD*)(v21 + 64);
      v23 = *(_DWORD*)(v21 + 72);
      v31_.v35 = (__typeof__(v31_.v35)){0};
      v31_.v36 = (__typeof__(v31_.v36)){0};
      v31_.v34 = (__typeof__(v31_.v34)){0};
      v24 = v22 + 56LL * v23;
      v31_.v31 = 64;
      v31_.v33 = *(_QWORD*)(*a1 + 8);
      v25 = *(_DWORD*)(v24 + 28);
      if (v25 != 0) {
        *(_QWORD*)&v31_.v34 =
            CudaDriverRoutine_1ff5f0(*(_QWORD**)v24) + *(_QWORD*)(v24 + 16);
        v23 = *(_DWORD*)(v21 + 72);
        v25 = *(_DWORD*)(v24 + 28);
      }
      *((_QWORD*)&v31_.v34 + 1) = __PAIR64__(*((_DWORD*)a1 + 24), v25);
      LODWORD(v31_.v35) = *((_DWORD*)a1 + 8);
      v26 = *(_DWORD*)(v21 + 8);
      v27 = v26 - 1 + *(_DWORD*)(v21 + 76);
      DWORD3(v31_.v35) = *(_DWORD*)(v21 + 80);
      DWORD1(v31_.v35) = (v26 - 1 + v23) % v26;
      DWORD2(v31_.v35) = v27 % v26;
      v31_.v32 = *(_DWORD*)(a1[4228] + 16);
      cuda_driver_20b420(0x12u, 8u, (__int64)&v31_.v31);
    }
  }
  return 0;
}

__int64 cuda_driver_5aba0(__int64 a1, __int64* a2, char a3)
{
  __int64 v3;
  __int64 v6;
  unsigned __int64 add;
  int v8;
  unsigned int v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 (*v16)(__int64, __int64, _QWORD, _QWORD);
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  char v21;
  __int64 (*v22)(__int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD);

  v3 = a1 + 0x8000;
  v6 = *(_QWORD*)(a1 + 33768);
  add = atomic_fetch_add((atomic_ullong* volatile)(a1 + 33744), 1u);
  v8 = *(unsigned __int8*)(a1 + 33784);
  v9 = add + 1;
  if ((a3 & 2) != 0) {
    if (*(_QWORD*)(a1 + 104 + 8LL * *(unsigned int*)(a1 + 24)) >= add) {
      v14 = *a2;
      v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 8LL) + 64LL);
      if ((a3 & 0x80 |
           *((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118) &
               2) == 0) {
        v14 = (*(__int64 (**)(_QWORD, __int64))(v15 + 19192))(*a2, 1);
        *a2 = v14;
      }
    }
    else {
      v11 = *a2;
      if ((a3 & 0x80 |
           *((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118) &
               2) == 0) {
        v11 = (*(__int64 (**)(_QWORD, __int64))(
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 8LL) + 64LL) + 19192LL))(*a2,
                                                                          1);
        *a2 = v11;
      }
      v12 = *(_QWORD*)(*(_QWORD*)a1 + 8LL);
      v22 = *(__int64 (**)(__int64, __int64, __int64, __int64, __int64, _QWORD,
                           _QWORD))(*(_QWORD*)(v12 + 64) + 19112LL);
      v13 = CudaDriverStub_1223e0(v6);
      *a2 = v22(v11, a1, a1, v12, v13, (unsigned int)add, 0);
      *(_QWORD*)(a1 + 104 + 8LL * *(unsigned int*)(a1 + 24)) = add;
      v14 = *a2;
      v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 8LL) + 64LL);
    }
    v16 = *(__int64 (**)(__int64, __int64, _QWORD, _QWORD))(v15 + 19064);
    if (v8 != 0) {
      v17 = 4;
    }
    else {
      v17 = 0;
    }
    v18 = CudaDriverStub_1223e0(v6);
    *a2 = v16(v14, v18, v9, v17);
    v19 = *(unsigned int*)(a1 + 32);
    if ((unsigned int)v19 > 0xB) {
      v20 = 6;
    }
    else {
      v20 = CudaDriverData_1130880[v19];
    }
    result = (__int64)CudaDriverRoutine_5b220((unsigned int*)a1, v20, v6, v9);
    *(_BYTE*)(a1 + 44) = 1;
  }
  else {
    result =
        CudaDriverRoutine_5b640((_DWORD*)a1, v6, v9, 0,
                                (a3 & 0x80 | *((_BYTE*)&CudaDriverRoutine_4198 +
                                               (_QWORD)CudaDriverData_1422118) &
                                                 2) == 0,
                                v8, a3 & 1, a2);
  }
  v21 = *(_BYTE*)(v3 + 1404);
  *(_QWORD*)(v3 + 1392) = 0;
  *(_BYTE*)(v3 + 1404) = v21 & 0xFE;
  return result;
}

void cuda_driver_5b0c0(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)a1;
  v12 = 0;
  v11 = 0;
  CudaDriverRoutine_1bc2f0(a2, &v12, &v11);
  if (v12 != 0) {
    v5 = v12 + 0x8000;
    if (*(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x420LL) + v12 + 0x8000) +
                   24LL) != *(_QWORD*)(*(_QWORD*)(a1 + 33824) + 24LL)) {
      v6 = v11;
      if (atomic_fetch_or((atomic_ullong* volatile)(v12 + 33752), 0) < v6 &&
          (unsigned __int8)CudaDriverRoutine_1982f0(
              *(_DWORD**)(*(_QWORD*)((char*)((_UNKNOWN*)0x420LL) + v5) + 24LL),
              *(_QWORD*)(*(_QWORD*)(a1 + 33824) + 24LL)) != 0) {
        cuda_driver_59ce0(a1);
      }
    }
  }
  v12 = 0;
  v11 = 0;
  CudaDriverRoutine_1bc2f0(a2, &v12, &v11);
  if (v12 != 0) {
    v7 = v12 + 0x8000;
    if (*(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x420LL) + v12 + 0x8000) +
                   24LL) != *(_QWORD*)(*(_QWORD*)(a1 + 33824) + 24LL)) {
      v8 = v11;
      if (atomic_fetch_or((atomic_ullong* volatile)(v12 + 33752), 0) >= v8) {
        v10 = (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 33824) + 120LL))(
            *(void**)(a1 + 33824));
        if (v10 == 0) {
          return;
        }
      }
      else {
        v9 = *(_QWORD*)(a1 + 33824);
        if (*(_BYTE*)(a1 + 36) != 0 && *(_DWORD*)(v9 + 20) == 1) {
          return;
        }
        v10 = CudaDriverRoutine_1981c0(
            *(_DWORD**)(v9 + 24),
            *(_DWORD**)(*(_QWORD*)((char*)((_UNKNOWN*)0x420LL) + v7) + 24LL),
            1);
        if (v10 == 0) {
          return;
        }
      }
      CudaDriverRoutine_5e800(v2, v10);
    }
  }
}

__int64 cuda_driver_5c2a0(__int64* a1)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  _DWORD* v12;
  _BYTE v13[200];

  v2 = a1 + 4096;
  CudaDriverRoutine_1ba4f0((__int64)v13, *a1);
  v3 = atomic_fetch_or((atomic_ullong* volatile)(v2 + 122), 0);
  v4 = atomic_fetch_or((atomic_ullong* volatile)(v2 + 124), 0);
  if (v4 >= v3) {
    goto LABEL_14;
  }
  while (1) {
    v5 = cuda_driver_204330(v2[125]);
    if (v5 == (_DWORD)v4) {
      v8 = v4;
    LABEL_9:
      if (v8 >= v3) {
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    v6 = v4 & 0xFFFFFFFF00000000LL;
    if (v5 < (unsigned int)v4) {
      v6 = (v4 & 0xFFFFFFFF00000000LL) + 0x100000000LL;
    }
    v7 = v6 | v5;
    v8 = v4;
    atomic_compare_exchange_strong((atomic_ullong* volatile)(v2 + 124), &v8,
                                   v7);
    if (v8 == v4) {
      break;
    }
    v4 = v8;
    if (v8 >= v7) {
      goto LABEL_9;
    }
  }
  if (v7 >= v3) {
    goto LABEL_14;
  }
LABEL_12:
  v12 = nullptr;
  result = CudaDriverRoutine_1baa40(&v12, (__int64)v13);
  if ((_DWORD)result == 0) {
    *v12 = 1;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = a1;
    v10 = atomic_fetch_or((atomic_ullong* volatile)(v2 + 122), 0);
    *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v12) = v10;
  LABEL_14:
    v11 = CudaDriverStub_12d100(v13);
    CudaDriverRoutine_1bbf10(v11, 0);
    result = CudaDriverRoutine_1bbf50((__int64)v13);
    if ((_DWORD)result == 0) {
      CudaDriverRoutine_1ba580((__int64)v13);
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_5c430(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  void* v9;
  unsigned int** v10;
  unsigned int v11;
  unsigned int v12;
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
  __int64 result;
  _OWORD* v24;
  __int64 v25;
  unsigned int v26;
  _OWORD* v27;
  _OWORD* v28;
  _OWORD* v29;
  _OWORD* v30;
  _OWORD* v31;
  _OWORD* v32;
  _OWORD* v33;
  unsigned int v34;

  v4 = CudaDriverStub_12e330(132800);
  if (v4 == 0) {
    result = 2;
    *a1 = 0;
    return result;
  }
  v5 = (_QWORD*)v4;
  v6 = v4 + 132736;
  v7 = v4 + 33096;
  memset_plt(v4, 0, 132800);
  v8 = 1;
  *a1 = v5;
  v5[1] = a2;
  *(_DWORD*)(v7 + 1288) = 1;
  *(_BYTE*)(v6 + 56) = 1;
  CudaDriverRoutine_107f40(v5 + 2, 50, 0);
  v9 = CudaDriverData_1422118;
  CudaDriverRoutine_107f40(
      v5 + 4, 61,
      (*(unsigned __int16*)((char*)((_UNKNOWN*)0x1858LL) +
                            (_QWORD)CudaDriverData_1422118) >>
       7) &
          2);
  (*(void (**)(_QWORD*))(*(_QWORD*)(a2 + 64) + 20848LL))(v5);
  v10 = (unsigned int**)(v7 + 1224);
  v11 = CudaDriverRoutine_197d90((_QWORD*)(v7 + 1224));
  if (v11 == 0) {
    v11 = CudaDriverRoutine_138320(v5 + 4291, (__int64)v5);
    if (v11 == 0) {
      v11 = CudaDriverRoutine_5cc50((__int64)v5);
      if (v11 == 0) {
        v24 = (_OWORD*)CudaDriverStub_12e330(80);
        if (v24 == nullptr) {
        LABEL_85:
          v12 = 2;
          goto LABEL_6;
        }
        v25 = (__int64)v24;
        v24[1] = (__typeof__(v24[1])){0};
        v24[2] = (__typeof__(v24[2])){0};
        v24[3] = (__typeof__(v24[3])){0};
        v24[4] = (__typeof__(v24[4])){0};
        *v24 = (__typeof__(*v24)){0};
        v26 = (*(__int64 (**)(_QWORD*, __int64))v6)(v5, (__int64)v24 + 56);
        if (v26 != 0) {
          goto LABEL_36;
        }
        *(_BYTE*)(v25 + 72) = 0;
        v26 = CudaDriverRoutine_592c0((_QWORD*)(v25 + 24), (__int64)v5,
                                      (__int64)(v5 + 4));
        if (v26 != 0) {
          goto LABEL_36;
        }
        *(_QWORD*)v25 = v5;
        *(_DWORD*)(v25 + 8) = 0;
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v9) >= 2u &&
            *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v9) == 0) {
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v25 + 56) + 56LL) + 24LL) =
              *(_QWORD*)(*(_QWORD*)(v7 + 632) + 8LL);
        }
        *(_QWORD*)v7 = v25;
        v27 = (_OWORD*)CudaDriverStub_12e330(80);
        if (v27 != nullptr) {
          v25 = (__int64)v27;
          v27[1] = (__typeof__(v27[1])){0};
          v27[2] = (__typeof__(v27[2])){0};
          v27[3] = (__typeof__(v27[3])){0};
          v27[4] = (__typeof__(v27[4])){0};
          *v27 = (__typeof__(*v27)){0};
          v26 = (*(__int64 (**)(_QWORD*, __int64))v6)(v5, (__int64)v27 + 56);
          if (v26 != 0) {
            goto LABEL_36;
          }
          *(_BYTE*)(v25 + 72) = 0;
          v26 = CudaDriverRoutine_592c0((_QWORD*)(v25 + 24), (__int64)v5,
                                        (__int64)(v5 + 4));
          if (v26 != 0) {
            goto LABEL_36;
          }
          *(_QWORD*)v25 = v5;
          *(_DWORD*)(v25 + 8) = 1;
          if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v9) >= 2u &&
              *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v9) == 0) {
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v25 + 56) + 56LL) + 24LL) =
                *(_QWORD*)(*(_QWORD*)(v7 + 632) + 8LL) + 34256LL;
          }
          *(_QWORD*)(v7 + 8) = v25;
          v28 = (_OWORD*)CudaDriverStub_12e330(80);
          if (v28 != nullptr) {
            v25 = (__int64)v28;
            v28[1] = (__typeof__(v28[1])){0};
            v28[2] = (__typeof__(v28[2])){0};
            v28[3] = (__typeof__(v28[3])){0};
            v28[4] = (__typeof__(v28[4])){0};
            *v28 = (__typeof__(*v28)){0};
            v26 = (*(__int64 (**)(_QWORD*, __int64))v6)(v5, (__int64)v28 + 56);
            if (v26 != 0) {
              goto LABEL_36;
            }
            *(_BYTE*)(v25 + 72) = 0;
            v26 = CudaDriverRoutine_592c0((_QWORD*)(v25 + 24), (__int64)v5,
                                          (__int64)(v5 + 4));
            if (v26 != 0) {
              goto LABEL_36;
            }
            *(_QWORD*)v25 = v5;
            *(_DWORD*)(v25 + 8) = 2;
            if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v9) >= 2u &&
                *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v9) == 0) {
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v25 + 56) + 56LL) + 24LL) =
                  *(_QWORD*)(*(_QWORD*)(v7 + 632) + 8LL) + 68512LL;
            }
            *(_QWORD*)(v7 + 16) = v25;
            v29 = (_OWORD*)CudaDriverStub_12e330(80);
            if (v29 != nullptr) {
              v25 = (__int64)v29;
              v29[1] = (__typeof__(v29[1])){0};
              v29[2] = (__typeof__(v29[2])){0};
              v29[3] = (__typeof__(v29[3])){0};
              v29[4] = (__typeof__(v29[4])){0};
              *v29 = (__typeof__(*v29)){0};
              v26 =
                  (*(__int64 (**)(_QWORD*, __int64))v6)(v5, (__int64)v29 + 56);
              if (v26 != 0) {
                goto LABEL_36;
              }
              *(_BYTE*)(v25 + 72) = 0;
              v26 = CudaDriverRoutine_592c0((_QWORD*)(v25 + 24), (__int64)v5,
                                            (__int64)(v5 + 4));
              if (v26 != 0) {
                goto LABEL_36;
              }
              *(_QWORD*)v25 = v5;
              *(_DWORD*)(v25 + 8) = 3;
              if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v9) >= 2u &&
                  *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v9) == 0) {
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v25 + 56) + 56LL) + 24LL) =
                    *(_QWORD*)(*(_QWORD*)(v7 + 632) + 8LL) + 102768LL;
              }
              *(_QWORD*)(v7 + 24) = v25;
              v30 = (_OWORD*)CudaDriverStub_12e330(80);
              if (v30 != nullptr) {
                v25 = (__int64)v30;
                v30[1] = (__typeof__(v30[1])){0};
                v30[2] = (__typeof__(v30[2])){0};
                v30[3] = (__typeof__(v30[3])){0};
                v30[4] = (__typeof__(v30[4])){0};
                *v30 = (__typeof__(*v30)){0};
                v26 = (*(__int64 (**)(_QWORD*, __int64))v6)(v5,
                                                            (__int64)v30 + 56);
                if (v26 != 0) {
                  goto LABEL_36;
                }
                *(_BYTE*)(v25 + 72) = 0;
                v26 = CudaDriverRoutine_592c0((_QWORD*)(v25 + 24), (__int64)v5,
                                              (__int64)(v5 + 4));
                if (v26 != 0) {
                  goto LABEL_36;
                }
                *(_QWORD*)v25 = v5;
                *(_DWORD*)(v25 + 8) = 4;
                if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v9) >=
                        2u &&
                    *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v9) ==
                        0) {
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v25 + 56) + 56LL) + 24LL) =
                      *(_QWORD*)(*(_QWORD*)(v7 + 632) + 8LL) + 137024LL;
                }
                *(_QWORD*)(v7 + 32) = v25;
                v31 = (_OWORD*)CudaDriverStub_12e330(80);
                if (v31 != nullptr) {
                  v25 = (__int64)v31;
                  v31[1] = (__typeof__(v31[1])){0};
                  v31[2] = (__typeof__(v31[2])){0};
                  v31[3] = (__typeof__(v31[3])){0};
                  v31[4] = (__typeof__(v31[4])){0};
                  *v31 = (__typeof__(*v31)){0};
                  v26 = (*(__int64 (**)(_QWORD*, __int64))v6)(v5, (__int64)v31 +
                                                                      56);
                  if (v26 != 0) {
                    goto LABEL_36;
                  }
                  *(_BYTE*)(v25 + 72) = 0;
                  v26 = CudaDriverRoutine_592c0((_QWORD*)(v25 + 24),
                                                (__int64)v5, (__int64)(v5 + 4));
                  if (v26 != 0) {
                    goto LABEL_36;
                  }
                  *(_QWORD*)v25 = v5;
                  *(_DWORD*)(v25 + 8) = 5;
                  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v9) >=
                          2u &&
                      *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v9) ==
                          0) {
                    *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v25 + 56) + 56LL) + 24LL) =
                        *(_QWORD*)(*(_QWORD*)(v7 + 632) + 8LL) + 171280LL;
                  }
                  *(_QWORD*)(v7 + 40) = v25;
                  v32 = (_OWORD*)CudaDriverStub_12e330(80);
                  if (v32 != nullptr) {
                    v25 = (__int64)v32;
                    v32[1] = (__typeof__(v32[1])){0};
                    v32[2] = (__typeof__(v32[2])){0};
                    v32[3] = (__typeof__(v32[3])){0};
                    v32[4] = (__typeof__(v32[4])){0};
                    *v32 = (__typeof__(*v32)){0};
                    v26 = (*(__int64 (**)(_QWORD*, __int64))v6)(
                        v5, (__int64)v32 + 56);
                    if (v26 == 0) {
                      *(_BYTE*)(v25 + 72) = 0;
                      v26 = CudaDriverRoutine_592c0(
                          (_QWORD*)(v25 + 24), (__int64)v5, (__int64)(v5 + 4));
                      if (v26 == 0) {
                        *(_QWORD*)v25 = v5;
                        *(_DWORD*)(v25 + 8) = 6;
                        if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                                       (_QWORD)v9) >= 2u &&
                            *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) +
                                       (_QWORD)v9) == 0) {
                          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v25 + 56) + 56LL) +
                                     24LL) =
                              *(_QWORD*)(*(_QWORD*)(v7 + 632) + 8LL) + 205536LL;
                        }
                        *(_QWORD*)(v7 + 48) = v25;
                        v33 = (_OWORD*)CudaDriverStub_12e330(80);
                        if (v33 != nullptr) {
                          v25 = (__int64)v33;
                          v33[1] = (__typeof__(v33[1])){0};
                          v33[2] = (__typeof__(v33[2])){0};
                          v33[3] = (__typeof__(v33[3])){0};
                          v33[4] = (__typeof__(v33[4])){0};
                          *v33 = (__typeof__(*v33)){0};
                          v26 = (*(__int64 (**)(_QWORD*, __int64))v6)(
                              v5, (__int64)v33 + 56);
                          if (v26 == 0) {
                            *(_BYTE*)(v25 + 72) = 0;
                            v26 = CudaDriverRoutine_592c0((_QWORD*)(v25 + 24),
                                                          (__int64)v5,
                                                          (__int64)(v5 + 4));
                            if (v26 == 0) {
                              *(_QWORD*)v25 = v5;
                              *(_DWORD*)(v25 + 8) = 7;
                              if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                                             (_QWORD)v9) >= 2u &&
                                  *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) +
                                             (_QWORD)v9) == 0) {
                                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v25 + 56) +
                                                      56LL) +
                                           24LL) =
                                    *(_QWORD*)(*(_QWORD*)(v7 + 632) + 8LL) +
                                    239792LL;
                              }
                              *(_QWORD*)(v7 + 56) = v25;
                              if ((unsigned int)CudaDriverRoutine_12e020(
                                      (__int64)(v5 + 4292)) != 0) {
                                v8 = 1;
                                v12 = 304;
                              }
                              else {
                                v34 = cuda_driver_helpers_1b6f70(
                                    *(_QWORD*)(v5[1] + 216LL), v5 + 4295,
                                    (__int64)CudaDriverRoutine_5d370,
                                    (__int64)v5, (__int64)(v5 + 4292), 2, 0);
                                if (v34 == 0) {
                                  v34 = (*(__int64 (**)(__int64))(
                                      *(_QWORD*)(a2 + 64) + 20776LL))(a2);
                                  if (v34 == 0) {
                                    v34 = cuda_driver_5d3e0(
                                        (__int64)v5, *(_QWORD*)(v7 + 592));
                                    if (v34 == 0) {
                                      *(_BYTE*)(v7 + 640) = 1;
                                      if (*(_DWORD*)((char*)((
                                                         _UNKNOWN*)0x1128LL) +
                                                     (_QWORD)v9) < 2u ||
                                          *(_DWORD*)((char*)((
                                                         _UNKNOWN*)0x113CLL) +
                                                     (_QWORD)v9) != 0 ||
                                          (v34 = cuda_driver_5d3e0(
                                               (__int64)v5,
                                               *(_QWORD*)(v7 + 616))) == 0) {
                                        v34 = CudaDriverRoutine_5d530(
                                            (__int64)v5);
                                        if (v34 == 0) {
                                          CudaDriverRoutine_5d5c0(v5);
                                          *(_BYTE*)v5 = 1;
                                          return 0;
                                        }
                                      }
                                    }
                                  }
                                }
                                v12 = v34;
                                v8 = 0;
                              }
                              goto LABEL_6;
                            }
                          }
                          goto LABEL_36;
                        }
                        goto LABEL_84;
                      }
                    }
                  LABEL_36:
                    v12 = v26;
                    CudaDriverRoutine_12e340(v25);
                    v8 = 1;
                    goto LABEL_6;
                  }
                }
              }
            }
          }
        }
      LABEL_84:
        v8 = 1;
        goto LABEL_85;
      }
    }
  }
  v12 = v11;
LABEL_6:
  *a1 = 0;
  v13 = *(_QWORD*)(v7 + 1264);
  if (v13 != 0) {
    cuda_driver_helpers_1b70a0(*(_QWORD*)(v5[1] + 216LL), v13);
    *(_QWORD*)(v7 + 1264) = 0;
  }
  if ((v8 & 1) == 0) {
    CudaDriverRoutine_12e210((__int64)(v5 + 4292));
  }
  cuda_driver_5d740(v5);
  if (*v10 != nullptr) {
    CudaDriverRoutine_197de0(*v10);
    *v10 = nullptr;
  }
  v14 = *(_QWORD*)(v7 + 1232);
  if (v14 != 0) {
    CudaDriverRoutine_1383a0(v14);
    *(_QWORD*)(v7 + 1232) = 0;
  }
  v15 = *(_QWORD*)v7;
  if (*(_QWORD*)v7 != 0) {
    CudaDriverRoutine_203f30(*(_QWORD*)(v15 + 56));
    *(_OWORD*)(v15 + 16) = (__typeof__(*(_OWORD*)(v15 + 16))){0};
    *(_OWORD*)(v15 + 32) = (__typeof__(*(_OWORD*)(v15 + 32))){0};
    *(_OWORD*)(v15 + 48) = (__typeof__(*(_OWORD*)(v15 + 48))){0};
    *(_OWORD*)(v15 + 64) = (__typeof__(*(_OWORD*)(v15 + 64))){0};
    *(_OWORD*)v15 = (__typeof__(*(_OWORD*)v15)){0};
    CudaDriverRoutine_12e340(v15);
    *(_QWORD*)v7 = 0;
  }
  v16 = *(_QWORD*)(v7 + 8);
  if (v16 != 0) {
    CudaDriverRoutine_203f30(*(_QWORD*)(v16 + 56));
    *(_OWORD*)(v16 + 16) = (__typeof__(*(_OWORD*)(v16 + 16))){0};
    *(_OWORD*)(v16 + 32) = (__typeof__(*(_OWORD*)(v16 + 32))){0};
    *(_OWORD*)(v16 + 48) = (__typeof__(*(_OWORD*)(v16 + 48))){0};
    *(_OWORD*)(v16 + 64) = (__typeof__(*(_OWORD*)(v16 + 64))){0};
    *(_OWORD*)v16 = (__typeof__(*(_OWORD*)v16)){0};
    CudaDriverRoutine_12e340(v16);
    *(_QWORD*)(v7 + 8) = 0;
  }
  v17 = *(_QWORD*)(v7 + 16);
  if (v17 != 0) {
    CudaDriverRoutine_203f30(*(_QWORD*)(v17 + 56));
    *(_OWORD*)(v17 + 16) = (__typeof__(*(_OWORD*)(v17 + 16))){0};
    *(_OWORD*)(v17 + 32) = (__typeof__(*(_OWORD*)(v17 + 32))){0};
    *(_OWORD*)(v17 + 48) = (__typeof__(*(_OWORD*)(v17 + 48))){0};
    *(_OWORD*)(v17 + 64) = (__typeof__(*(_OWORD*)(v17 + 64))){0};
    *(_OWORD*)v17 = (__typeof__(*(_OWORD*)v17)){0};
    CudaDriverRoutine_12e340(v17);
    *(_QWORD*)(v7 + 16) = 0;
  }
  v18 = *(_QWORD*)(v7 + 24);
  if (v18 != 0) {
    CudaDriverRoutine_203f30(*(_QWORD*)(v18 + 56));
    *(_OWORD*)(v18 + 16) = (__typeof__(*(_OWORD*)(v18 + 16))){0};
    *(_OWORD*)(v18 + 32) = (__typeof__(*(_OWORD*)(v18 + 32))){0};
    *(_OWORD*)(v18 + 48) = (__typeof__(*(_OWORD*)(v18 + 48))){0};
    *(_OWORD*)(v18 + 64) = (__typeof__(*(_OWORD*)(v18 + 64))){0};
    *(_OWORD*)v18 = (__typeof__(*(_OWORD*)v18)){0};
    CudaDriverRoutine_12e340(v18);
    *(_QWORD*)(v7 + 24) = 0;
  }
  v19 = *(_QWORD*)(v7 + 32);
  if (v19 != 0) {
    CudaDriverRoutine_203f30(*(_QWORD*)(v19 + 56));
    *(_OWORD*)(v19 + 16) = (__typeof__(*(_OWORD*)(v19 + 16))){0};
    *(_OWORD*)(v19 + 32) = (__typeof__(*(_OWORD*)(v19 + 32))){0};
    *(_OWORD*)(v19 + 48) = (__typeof__(*(_OWORD*)(v19 + 48))){0};
    *(_OWORD*)(v19 + 64) = (__typeof__(*(_OWORD*)(v19 + 64))){0};
    *(_OWORD*)v19 = (__typeof__(*(_OWORD*)v19)){0};
    CudaDriverRoutine_12e340(v19);
    *(_QWORD*)(v7 + 32) = 0;
  }
  v20 = *(_QWORD*)(v7 + 40);
  if (v20 != 0) {
    CudaDriverRoutine_203f30(*(_QWORD*)(v20 + 56));
    *(_OWORD*)(v20 + 16) = (__typeof__(*(_OWORD*)(v20 + 16))){0};
    *(_OWORD*)(v20 + 32) = (__typeof__(*(_OWORD*)(v20 + 32))){0};
    *(_OWORD*)(v20 + 48) = (__typeof__(*(_OWORD*)(v20 + 48))){0};
    *(_OWORD*)(v20 + 64) = (__typeof__(*(_OWORD*)(v20 + 64))){0};
    *(_OWORD*)v20 = (__typeof__(*(_OWORD*)v20)){0};
    CudaDriverRoutine_12e340(v20);
    *(_QWORD*)(v7 + 40) = 0;
  }
  v21 = *(_QWORD*)(v7 + 48);
  if (v21 != 0) {
    CudaDriverRoutine_203f30(*(_QWORD*)(v21 + 56));
    *(_OWORD*)(v21 + 16) = (__typeof__(*(_OWORD*)(v21 + 16))){0};
    *(_OWORD*)(v21 + 32) = (__typeof__(*(_OWORD*)(v21 + 32))){0};
    *(_OWORD*)(v21 + 48) = (__typeof__(*(_OWORD*)(v21 + 48))){0};
    *(_OWORD*)(v21 + 64) = (__typeof__(*(_OWORD*)(v21 + 64))){0};
    *(_OWORD*)v21 = (__typeof__(*(_OWORD*)v21)){0};
    CudaDriverRoutine_12e340(v21);
    *(_QWORD*)(v7 + 48) = 0;
  }
  v22 = *(_QWORD*)(v7 + 56);
  if (v22 != 0) {
    CudaDriverRoutine_203f30(*(_QWORD*)(v22 + 56));
    *(_OWORD*)(v22 + 16) = (__typeof__(*(_OWORD*)(v22 + 16))){0};
    *(_OWORD*)(v22 + 32) = (__typeof__(*(_OWORD*)(v22 + 32))){0};
    *(_OWORD*)(v22 + 48) = (__typeof__(*(_OWORD*)(v22 + 48))){0};
    *(_OWORD*)(v22 + 64) = (__typeof__(*(_OWORD*)(v22 + 64))){0};
    *(_OWORD*)v22 = (__typeof__(*(_OWORD*)v22)){0};
    CudaDriverRoutine_12e340(v22);
    *(_QWORD*)(v7 + 56) = 0;
  }
  CudaDriverRoutine_107f60(v5 + 4);
  CudaDriverRoutine_107f60(v5 + 2);
  CudaDriverRoutine_12e340((__int64)v5);
  return v12;
}

__int64 cuda_driver_5d3e0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 result;
  unsigned __int64 v10;
  __int64 v11;
  unsigned int v12;
  _BYTE v13[200];
  _DWORD* v14;

  CudaDriverRoutine_1ba4f0((__int64)v13, a1);
  if (*(_DWORD*)(a2 + 24) != 0) {
    v3 = 33736;
    v4 = 0;
    v5 = 0;
    do {
      v6 = *(_QWORD*)(a2 + 8);
      v7 = CudaDriverRoutine_5c030(v6 + v3);
      v8 = CudaDriverRoutine_5bda0(v6 + v3);
      if (v8 < v7 && CudaDriverRoutine_5bd00(v6 + v3, v8) < v7) {
        v14 = nullptr;
        LODWORD(result) = CudaDriverRoutine_1baa40(&v14, (__int64)v13);
        if ((_DWORD)result != 0) {
          goto LABEL_9;
        }
        *v14 = 1;
        *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) =
            (_UNKNOWN*)(v6 + v4);
        v10 = CudaDriverRoutine_5c030(v6 + v3);
        *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v14) = v10;
      }
      ++v5;
      v3 += 34256;
      v4 += 34256;
    } while (v5 < *(unsigned int*)(a2 + 24));
  }
  CudaDriverRoutine_1bbd70((__int64)v13);
  v11 = CudaDriverStub_12d100(v13);
  CudaDriverRoutine_1bbf10(v11, 0);
  result = CudaDriverRoutine_1bbf50((__int64)v13);
  if ((_DWORD)result != 0) {
  LABEL_9:
    v12 = result;
    CudaDriverRoutine_1ba580((__int64)v13);
    return v12;
  }
  return result;
}

__int64 cuda_driver_5d740(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;

  v1 = a1 + 4096;
  v3 = a1[4146];
  if (v3 != 0) {
    cuda_driver_5e360(v3);
  }
  v4 = v1[49];
  v1[50] = 0;
  if (v4 != 0) {
    cuda_driver_5e360(v4);
  }
  v5 = v1[122];
  v1[49] = 0;
  if (v5 != 0) {
    cuda_driver_5e360(v5);
  }
  v6 = a1[1];
  v1[122] = 0;
  if (*(_DWORD*)(*(_QWORD*)(v6 + 64) + 14472LL) != 0) {
    v7 = 0;
    v8 = a1 + 4147;
    do {
      v9 = v8[v7];
      if (v9 != 0) {
        cuda_driver_5e360(v9);
        v6 = a1[1];
      }
      v8[v7++] = 0;
    } while (v7 < *(unsigned int*)(*(_QWORD*)(v6 + 64) + 14472LL));
  }
  v10 = v1[123];
  if (v10 != 0) {
    cuda_driver_5e360(v10);
  }
  v11 = v1[115];
  v1[123] = 0;
  if (v11 != 0) {
    cuda_driver_5e360(v11);
  }
  v12 = v1[117];
  v1[115] = 0;
  if (v12 != 0) {
    cuda_driver_5e360(v12);
  }
  v13 = v1[120];
  v1[117] = 0;
  if (v13 != 0) {
    cuda_driver_5e360(v13);
  }
  v14 = v1[119];
  v1[120] = 0;
  if (v14 != 0) {
    cuda_driver_5e360(v14);
  }
  v15 = v1[118];
  v1[119] = 0;
  if (v15 != 0) {
    cuda_driver_5e360(v15);
  }
  result = v1[116];
  v1[118] = 0;
  if (result != 0) {
    CudaDriverRoutine_5e580(result);
    result = cuda_driver_5e360(v1[116]);
  }
  v1[116] = 0;
  return result;
}

__int64 cuda_driver_5d860(unsigned __int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  void* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  void* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  void* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  void* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  void* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  void* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  void* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  void* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  void* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 result;
  __int64 v43;
  _DWORD* v44;

  *(_DWORD*)(a1 + 16) = 0;
  v4 = a2 + 0x8000;
  CudaDriverStub_107f90(a2 + 32);
  if (*(_DWORD*)(v4 + 1544) != 0) {
    v5 = 0;
    do {
      v6 = *(void**)(a2 + 48 + 8 * v5);
      v7 = CudaDriverRoutine_5c030((__int64)v6 + 33736);
      v8 = CudaDriverRoutine_5bda0((__int64)v6 + 33736);
      if (v8 < v7 && CudaDriverRoutine_5bd00((__int64)v6 + 33736, v8) < v7) {
        v44 = nullptr;
        CudaDriverRoutine_1baa40(&v44, a1);
        *v44 = 1;
        *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44) = v6;
        v9 = CudaDriverRoutine_5c030((__int64)v6 + 33736);
        *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v44) = v9;
      }
      ++v5;
    } while (v5 < *(unsigned int*)(v4 + 1544));
  }
  v10 = *(void**)(v4 + 328);
  v11 = CudaDriverRoutine_5c030((__int64)v10 + 24);
  v12 = CudaDriverRoutine_5bda0((__int64)v10 + 24);
  if (v12 < v11 && CudaDriverRoutine_5bd00((__int64)v10 + 24, v12) < v11) {
    v44 = nullptr;
    CudaDriverRoutine_1baa40(&v44, a1);
    *v44 = 4;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44) = v10;
    v13 = CudaDriverRoutine_5c030((__int64)v10 + 24);
    *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v44) = v13;
  }
  v14 = *(void**)(v4 + 336);
  v15 = CudaDriverRoutine_5c030((__int64)v14 + 24);
  v16 = CudaDriverRoutine_5bda0((__int64)v14 + 24);
  if (v16 < v15 && CudaDriverRoutine_5bd00((__int64)v14 + 24, v16) < v15) {
    v44 = nullptr;
    CudaDriverRoutine_1baa40(&v44, a1);
    *v44 = 4;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44) = v14;
    v17 = CudaDriverRoutine_5c030((__int64)v14 + 24);
    *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v44) = v17;
  }
  v18 = *(void**)(v4 + 344);
  v19 = CudaDriverRoutine_5c030((__int64)v18 + 24);
  v20 = CudaDriverRoutine_5bda0((__int64)v18 + 24);
  if (v20 < v19 && CudaDriverRoutine_5bd00((__int64)v18 + 24, v20) < v19) {
    v44 = nullptr;
    CudaDriverRoutine_1baa40(&v44, a1);
    *v44 = 4;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44) = v18;
    v21 = CudaDriverRoutine_5c030((__int64)v18 + 24);
    *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v44) = v21;
  }
  v22 = *(void**)(v4 + 352);
  v23 = CudaDriverRoutine_5c030((__int64)v22 + 24);
  v24 = CudaDriverRoutine_5bda0((__int64)v22 + 24);
  if (v24 < v23 && CudaDriverRoutine_5bd00((__int64)v22 + 24, v24) < v23) {
    v44 = nullptr;
    CudaDriverRoutine_1baa40(&v44, a1);
    *v44 = 4;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44) = v22;
    v25 = CudaDriverRoutine_5c030((__int64)v22 + 24);
    *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v44) = v25;
  }
  v26 = *(void**)(v4 + 360);
  v27 = CudaDriverRoutine_5c030((__int64)v26 + 24);
  v28 = CudaDriverRoutine_5bda0((__int64)v26 + 24);
  if (v28 < v27 && CudaDriverRoutine_5bd00((__int64)v26 + 24, v28) < v27) {
    v44 = nullptr;
    CudaDriverRoutine_1baa40(&v44, a1);
    *v44 = 4;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44) = v26;
    v29 = CudaDriverRoutine_5c030((__int64)v26 + 24);
    *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v44) = v29;
  }
  v30 = *(void**)(v4 + 368);
  v31 = CudaDriverRoutine_5c030((__int64)v30 + 24);
  v32 = CudaDriverRoutine_5bda0((__int64)v30 + 24);
  if (v32 < v31 && CudaDriverRoutine_5bd00((__int64)v30 + 24, v32) < v31) {
    v44 = nullptr;
    CudaDriverRoutine_1baa40(&v44, a1);
    *v44 = 4;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44) = v30;
    v33 = CudaDriverRoutine_5c030((__int64)v30 + 24);
    *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v44) = v33;
  }
  v34 = *(void**)(v4 + 376);
  v35 = CudaDriverRoutine_5c030((__int64)v34 + 24);
  v36 = CudaDriverRoutine_5bda0((__int64)v34 + 24);
  if (v36 < v35 && CudaDriverRoutine_5bd00((__int64)v34 + 24, v36) < v35) {
    v44 = nullptr;
    CudaDriverRoutine_1baa40(&v44, a1);
    *v44 = 4;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44) = v34;
    v37 = CudaDriverRoutine_5c030((__int64)v34 + 24);
    *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v44) = v37;
  }
  v38 = *(void**)(v4 + 384);
  v39 = CudaDriverRoutine_5c030((__int64)v38 + 24);
  v40 = CudaDriverRoutine_5bda0((__int64)v38 + 24);
  if (v40 < v39 && CudaDriverRoutine_5bd00((__int64)v38 + 24, v40) < v39) {
    v44 = nullptr;
    CudaDriverRoutine_1baa40(&v44, a1);
    *v44 = 4;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44) = v38;
    v41 = CudaDriverRoutine_5c030((__int64)v38 + 24);
    *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)v44) = v41;
  }
  CudaDriverStub_108070(a2 + 32);
  result = CudaDriverRoutine_1bbd70(a1);
  v43 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 88LL);
  if (v43 != 0 && *(_QWORD*)(v43 + 56) != 0) {
    CudaDriverStub_107f90(v43 + 72);
    CudaDriverRoutine_1bb6a0(
        a1, *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 88LL) + 56LL));
    return CudaDriverStub_108070(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 88LL) + 72LL);
  }
  return result;
}

__int64 cuda_driver_5df40(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 33160) + 120LL))(
      *(void**)(a1 + 33160));
}

__int64 cuda_driver_5e0a0(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v3;
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;

  v1 = *(_QWORD*)(a1 + 64);
  v2 = *(_DWORD*)(v1 + 3448);
  v3 =
      *(_DWORD*)((char*)((_UNKNOWN*)0x1474LL) + (_QWORD)CudaDriverData_1422118);
  if (v3 >= 0x40) {
    v4 = 64;
  }
  else {
    v4 = *(_DWORD*)((char*)((_UNKNOWN*)0x1474LL) +
                    (_QWORD)CudaDriverData_1422118);
  }
  v5 = *(_DWORD*)(v1 + 21864);
  if (v3 != 0) {
    v2 = v4;
  }
  if (v5 == 1) {
    v6 = 1;
  }
  else {
    v6 = v2;
  }
  v7 = *(_DWORD*)(a1 + 16356);
  if (v7 >= v6) {
    return v6;
  }
  else {
    return v7;
  }
}

__int64 cuda_driver_5e160(_QWORD* a1, __int64* a2, int a3, int a4, int a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;

  v10 = CudaDriverStub_12e330(304);
  if (v10 == 0) {
    return 2;
  }
  v11 = v10;
  *(_QWORD*)(v10 + 296) = 0;
  *(_QWORD*)v10 = a1;
  *(_OWORD*)(v10 + 8) = (__typeof__(*(_OWORD*)(v10 + 8))){0};
  *(_OWORD*)(v10 + 248) = (__typeof__(*(_OWORD*)(v10 + 248))){0};
  *(_OWORD*)(v10 + 232) = (__typeof__(*(_OWORD*)(v10 + 232))){0};
  *(_OWORD*)(v10 + 216) = (__typeof__(*(_OWORD*)(v10 + 216))){0};
  *(_OWORD*)(v10 + 200) = (__typeof__(*(_OWORD*)(v10 + 200))){0};
  *(_OWORD*)(v10 + 184) = (__typeof__(*(_OWORD*)(v10 + 184))){0};
  *(_OWORD*)(v10 + 168) = (__typeof__(*(_OWORD*)(v10 + 168))){0};
  *(_OWORD*)(v10 + 152) = (__typeof__(*(_OWORD*)(v10 + 152))){0};
  *(_OWORD*)(v10 + 264) = (__typeof__(*(_OWORD*)(v10 + 264))){0};
  *(_OWORD*)(v10 + 280) = (__typeof__(*(_OWORD*)(v10 + 280))){0};
  *(_OWORD*)(v10 + 136) = (__typeof__(*(_OWORD*)(v10 + 136))){0};
  *(_OWORD*)(v10 + 120) = (__typeof__(*(_OWORD*)(v10 + 120))){0};
  *(_OWORD*)(v10 + 104) = (__typeof__(*(_OWORD*)(v10 + 104))){0};
  *(_OWORD*)(v10 + 88) = (__typeof__(*(_OWORD*)(v10 + 88))){0};
  *(_OWORD*)(v10 + 72) = (__typeof__(*(_OWORD*)(v10 + 72))){0};
  *(_OWORD*)(v10 + 56) = (__typeof__(*(_OWORD*)(v10 + 56))){0};
  *(_OWORD*)(v10 + 40) = (__typeof__(*(_OWORD*)(v10 + 40))){0};
  *(_OWORD*)(v10 + 24) = (__typeof__(*(_OWORD*)(v10 + 24))){0};
  *(_DWORD*)(v10 + 28) = a5;
  *(_DWORD*)(v10 + 32) = a3;
  if (a5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1[1] + 64LL) + 20832LL))(v10);
    (*(void (**)(__int64))(v11 + 72))(v11);
    *(_DWORD*)(v11 + 208) = (*(__int64 (**)(__int64))(v11 + 88))(v11);
    v12 = a1[16598];
    if (v12 != 0) {
    LABEL_4:
      *(_QWORD*)(v11 + 288) = v12;
      v13 = *(_QWORD*)(a1[16598] + 280LL);
      *(_QWORD*)(v11 + 280) = v13;
      if (v13 != 0) {
        *(_QWORD*)(v13 + 288) = v11;
      }
      *(_QWORD*)(a1[16598] + 280LL) = v11;
      goto LABEL_11;
    }
  }
  else {
    *(_DWORD*)(v10 + 208) = 0;
    v12 = a1[16598];
    if (v12 != 0) {
      goto LABEL_4;
    }
  }
  *(_QWORD*)(v11 + 280) = a1[16597];
  a1[16597] = v11;
  v15 = *(_QWORD*)(v11 + 280);
  if (v15 != 0) {
    *(_QWORD*)(v15 + 288) = v11;
  }
LABEL_11:
  a1[16598] = v11;
  *a2 = v11;
  *(_DWORD*)(v11 + 36) = a4;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) < 2u) {
  LABEL_12:
    *(_BYTE*)(*a2 + 296) = 0;
    if (a5 == 0) {
      return 0;
    }
    goto LABEL_16;
  }
  if ((unsigned int)(a3 - 1) >= 0xA) {
    if (a3 == 11) {
      *(_BYTE*)(*a2 + 296) = 1;
      if (a5 == 0) {
        return 0;
      }
      goto LABEL_16;
    }
    goto LABEL_12;
  }
  *(_BYTE*)(*a2 + 296) = (*(_WORD*)(*(_QWORD*)(a1[1] + 64LL) +
                                    20LL * (unsigned int)(a3 - 1) + 13192) &
                          0x400) != 0;
  if (a5 == 0) {
    return 0;
  }
LABEL_16:
  result = CudaDriverRoutine_5fa20(*a2, a3);
  if ((_DWORD)result == 0) {
    result = cuda_driver_5fc00(*a2, a3);
    if ((_DWORD)result == 0) {
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_5e360(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  void (*v18)(__int64);
  __int64 v19;

  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &&
      *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)CudaDriverData_1422118) == 0) {
    v3 = *(_QWORD*)(*(_QWORD*)a1 + 8LL);
    if (*(_BYTE*)(*(_QWORD*)(v3 + 64) + 17329LL) != 0 &&
        *(_BYTE*)(a1 + 296) != 0) {
      v4 = *(_QWORD*)(a1 + 248);
      if (v4 != 0) {
        cuda_driver_helpers_1b70a0(*(_QWORD*)(v3 + 216), v4);
        *(_QWORD*)(a1 + 248) = 0;
      }
      v5 = *(_QWORD*)(a1 + 240);
      if (v5 != 0) {
        CudaDriverRoutine_197d20(v5);
        *(_QWORD*)(a1 + 240) = 0;
      }
    }
  }
  v6 = *(_QWORD*)(a1 + 232);
  if (v6 != 0) {
    cuda_driver_helpers_1b70a0(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 8LL) + 216LL), v6);
    *(_QWORD*)(a1 + 232) = 0;
  }
  v7 = *(_QWORD*)(a1 + 216);
  if (v7 != 0) {
    CudaDriverRoutine_197d20(v7);
    *(_QWORD*)(a1 + 216) = 0;
  }
  if (*(_QWORD*)(a1 + 8) != 0) {
    if (*(_DWORD*)(a1 + 24) != 0) {
      v8 = 0;
      v9 = 0;
      do {
        CudaDriverRoutine_125580(*(_QWORD*)(a1 + 8) + v8);
        v10 = *(unsigned int*)(a1 + 24);
        ++v9;
        v8 += 34256;
      } while (v9 < v10);
      if ((_DWORD)v10 != 0) {
        v11 = 0;
        v12 = 0;
        do {
          CudaDriverRoutine_59350(*(_QWORD*)(a1 + 8) + v11);
          ++v12;
          v11 += 34256;
        } while (v12 < *(unsigned int*)(a1 + 24));
      }
    }
    v13 = *(_QWORD*)(a1 + 8);
    if (v13 != 0) {
      CudaDriverRoutine_12e340(v13);
      *(_QWORD*)(a1 + 8) = 0;
    }
    *(_DWORD*)(a1 + 24) = 0;
  }
  v14 = *(_QWORD*)(a1 + 200);
  if (v14 != 0) {
    if (*(_DWORD*)(a1 + 208) != 0) {
      v15 = 0;
      v16 = 0;
      do {
        v17 = *(_QWORD*)(a1 + 200) + v15;
        v18 = *(void (**)(__int64))(v17 + 112);
        if (v18 != nullptr) {
          v18(*(_QWORD*)(a1 + 200) + v15);
          v19 = *(_QWORD*)(v17 + 24);
          if (v19 != 0) {
            CudaDriverRoutine_197ec0(v19);
            *(_QWORD*)(v17 + 24) = 0;
          }
        }
        ++v16;
        v15 += 176;
      } while (v16 < *(unsigned int*)(a1 + 208));
      v14 = *(_QWORD*)(a1 + 200);
    }
    CudaDriverRoutine_12e340(v14);
    *(_QWORD*)(a1 + 200) = 0;
  }
  if (*(_DWORD*)(a1 + 28) != 0) {
    (*(void (**)(__int64))(a1 + 80))(a1);
  }
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
  *(_OWORD*)(a1 + 272) = (__typeof__(*(_OWORD*)(a1 + 272))){0};
  *(_OWORD*)(a1 + 288) = (__typeof__(*(_OWORD*)(a1 + 288))){0};
  return CudaDriverRoutine_12e340(a1);
}

#pragma GCC visibility pop
