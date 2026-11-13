#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_1a28d0();
_DWORD* CudaDriverRoutine_1abf10(_DWORD*, unsigned __int64, unsigned int);
_QWORD* CudaDriverRoutine_1a0f20(__int64);
_QWORD* CudaDriverRoutine_1bc4b0(_QWORD*);
_QWORD* CudaDriverRoutine_1cd100(_QWORD*);
_QWORD* CudaDriverRoutine_208ba0(_QWORD* result, unsigned int, unsigned int,
                                 _QWORD*, _QWORD*);
_QWORD* CudaDriverRoutine_2221c0(__int64, __int64, unsigned __int64);
_QWORD* CudaDriverRoutine_4d080(_QWORD* result);
__int64* CudaDriverRoutine_2231b0(__int64* result, __int64, __int64);
__int64 CudaDriverRoutine_107f40(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_107f60(_QWORD*);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_10a2a0(__int64, __int64, unsigned int*, unsigned int,
                                 __int64, _DWORD*, char*, _DWORD*, _DWORD*,
                                 _DWORD*);
__int64 CudaDriverRoutine_10b5f0(__int64, __int64, int, int, unsigned int*);
__int64 CudaDriverRoutine_114a80(__int64, __int64, int);
__int64 CudaDriverRoutine_116fa0(__int64);
__int64 CudaDriverRoutine_117c40(__int64, int, char, __int64);
__int64 CudaDriverRoutine_119540(__int64);
__int64 CudaDriverRoutine_1197e0(__int64 result);
__int64 CudaDriverRoutine_11c9a0(__int64, __int64, unsigned __int8);
__int64 CudaDriverRoutine_1209a0(__int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_121270();
__int64 CudaDriverRoutine_1212c0();
__int64 CudaDriverRoutine_121c60(__int64*);
__int64 CudaDriverRoutine_122ac0();
__int64 CudaDriverRoutine_122be0();
__int64 CudaDriverRoutine_122d80();
__int64 CudaDriverRoutine_122df0();
__int64 CudaDriverRoutine_122e60();
__int64 CudaDriverRoutine_122ee0(__int64);
__int64 CudaDriverRoutine_122fe0(__int64*);
__int64 CudaDriverRoutine_123080(_QWORD*);
__int64 CudaDriverRoutine_127550();
__int64 CudaDriverRoutine_12dd10();
__int64 CudaDriverRoutine_12e300();
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_12f300(__int64*);
__int64 CudaDriverRoutine_1383e0(__int64 result, int);
__int64 CudaDriverRoutine_1398c0(_DWORD*, __int64, __int64, int, __int64,
                                 unsigned int, int, __int64, char, __int64,
                                 char);
__int64 CudaDriverRoutine_15fd0(__int64);
__int64 CudaDriverRoutine_195dc0(_QWORD*, __int64, __int64);
__int64 CudaDriverRoutine_197480(__int64 result, __int64, unsigned int,
                                 unsigned int*, __int64, unsigned int, _QWORD*,
                                 unsigned int*);
__int64 CudaDriverRoutine_197c60(__int64*, int, __int64);
__int64 CudaDriverRoutine_19af00();
__int64 CudaDriverRoutine_19bcb0(__int64, __int64, __int64*, int, char*, char);
__int64 CudaDriverRoutine_19be90();
__int64 CudaDriverRoutine_19bf30();
__int64 CudaDriverRoutine_19c000();
__int64 CudaDriverRoutine_19c2a0();
__int64 CudaDriverRoutine_19c540();
__int64 CudaDriverRoutine_19c5e0();
__int64 CudaDriverRoutine_19c6a0();
__int64 CudaDriverRoutine_19c8d0();
__int64 CudaDriverRoutine_19c8e0();
__int64 CudaDriverRoutine_19c8f0();
__int64 CudaDriverRoutine_19c9c0();
__int64 CudaDriverRoutine_19cca0();
__int64 CudaDriverRoutine_19d6e0();
__int64 CudaDriverRoutine_19db90(unsigned int, __int64);
__int64 CudaDriverRoutine_19df60(_QWORD*, __int64);
__int64 CudaDriverRoutine_19ec40();
__int64 CudaDriverRoutine_1a0f80(__int64);
__int64 CudaDriverRoutine_1a2300(__int64);
__int64 CudaDriverRoutine_1a2800(__int64 result,
                                 __int64 (*)(_QWORD, _QWORD, __int64), __int64);
__int64 CudaDriverRoutine_1a2910(__int64);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64);
__int64 CudaDriverRoutine_1a40e0(__int64 result);
__int64 CudaDriverRoutine_1a4580(__int64);
__int64 CudaDriverRoutine_1a47a0(__int64, unsigned __int64);
__int64 CudaDriverRoutine_1a5d90(__int64);
__int64 CudaDriverRoutine_1a81a0(__int64);
__int64 CudaDriverRoutine_1a8360(__int64, unsigned int*);
__int64 CudaDriverRoutine_1a8440(unsigned int);
__int64 CudaDriverRoutine_1a9070(_DWORD*, int);
__int64 CudaDriverRoutine_1aa7f0(__int64 result, int);
__int64 CudaDriverRoutine_1bb6a0(unsigned __int64, unsigned __int64);
__int64 CudaDriverRoutine_1d9f90(_QWORD);
__int64 CudaDriverRoutine_1ff080(_QWORD*);
__int64 CudaDriverRoutine_1ff5f0(_QWORD*);
__int64 CudaDriverRoutine_1ff6e0(__int64 result, int);
__int64 CudaDriverRoutine_1ffe30(__int64);
__int64 CudaDriverRoutine_2045e0(_QWORD*);
__int64 CudaDriverRoutine_205ee0(int, __int64, __int64, _QWORD*, int);
__int64 CudaDriverRoutine_206060(__int64, __int64);
__int64 CudaDriverRoutine_2077b0(__int64 result);
__int64 CudaDriverRoutine_2222a0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_223120(_QWORD*);
__int64 CudaDriverRoutine_4cfb0(_QWORD*, unsigned __int64);
__int64 CudaDriverRoutine_4d370(__int64*);
__int64 CudaDriverRoutine_4df00(unsigned __int64*, _QWORD*);
__int64 CudaDriverRoutine_5e000(__int64);
__int64 CudaDriverRoutine_5e0f0(__int64);
__int64 CudaDriverRoutine_5e790(__int64);
__int64 CudaDriverRoutine_633b0(_DWORD*, double*);
__int64 CudaDriverRoutine_6c430(__int64, unsigned int, unsigned int,
                                unsigned int, __int64, __int64, __int64, int,
                                __int64, int, _BYTE*);
__int64 CudaDriverRoutine_96f20(__int64, __int64, __int64, unsigned int,
                                __int64, __int64);
__int64 CudaDriverRoutine_97e80(__int64 result);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_98650(__int64, char);
__int64 CudaDriverRoutine_98870(__int64 result);
__int64 CudaDriverRoutine_98ef0(__int64, __int64);
__int64 CudaDriverRoutine_99f40(__int64, _DWORD*, int);
__int64 CudaDriverRoutine_9aea0(__int64, int);
__int64 CudaDriverRoutine_b0ce0();
__int64 CudaDriverRoutine_bbd70(__int64 result, _QWORD*);
__int64 CudaDriverRoutine_bc3f0(__int64);
__int64 CudaDriverRoutine_bc6c0(__int64, int, char);
__int64 CudaDriverRoutine_e1db0(__int64 result);
__int64 CudaDriverRoutine_e7ac0(__int64, __int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_e7b50(__int64 result, __int64, __int64, __int64,
                                __int64);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_ee030(__int64, __int64, _QWORD*, __int128*);
__int64 CudaDriverRoutine_ee2a0(__int64, __int64);
__int64 CudaDriverRoutine_eec70(__int64, __int64);
__int64 CudaDriverStub_102370(_QWORD);
__int64 CudaDriverStub_107f90(char*);
__int64 CudaDriverStub_107f90_alt1(_QWORD*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_107f90_alt2(_QWORD) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_107f90_alt3(__int64) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_108070(char*);
__int64 CudaDriverStub_108070_alt1(_QWORD*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_108070_alt2(_QWORD) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_108070_alt3(__int64) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_10f430(__int64, __int64);
__int64 CudaDriverStub_10f720(_QWORD);
__int64 CudaDriverStub_112e30(_QWORD);
__int64 CudaDriverStub_116790(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_124f70(_QWORD, _QWORD);
__int64 CudaDriverStub_12d100(_QWORD);
__int64 CudaDriverStub_12db40(_QWORD);
__int64 CudaDriverStub_12db70(_QWORD, _QWORD);
__int64 CudaDriverStub_12dc90(_QWORD);
__int64 CudaDriverStub_12dca0(_QWORD);
__int64 CudaDriverStub_12dd40(__int64, __int64, unsigned int);
__int64 CudaDriverStub_12e260(_QWORD);
__int64 CudaDriverStub_12e320(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_12e550(_QWORD, _QWORD);
__int64 CudaDriverStub_197d80(__int64);
__int64 CudaDriverStub_1a0ee0(_QWORD, _QWORD);
__int64 CudaDriverStub_1a2960(__int64, __int64, __int64);
__int64 CudaDriverStub_1a2ae0(_QWORD, _QWORD);
__int64 CudaDriverStub_1a4c80(void);
__int64 CudaDriverStub_1abf50(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_1db190(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1ff640(_QWORD);
__int64 CudaDriverStub_203210(__int64, __int64, __int64, __int64, __int64);
__int64 CudaDriverStub_57450(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_5bb90(_QWORD);
__int64 CudaDriverStub_77c40(_QWORD);
__int64 CudaDriverStub_8e230(_QWORD);
__int64 CudaDriverStub_f0f50(_QWORD);
__int64 NvRmGpuClockCloseAsyncReq_plt(_QWORD);
__int64 NvRmGpuClockGetDomains_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmGpuClockGetPoints_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuClockSet_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuClockWaitAsyncReq_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuDeviceGetInfo_plt(_QWORD);
__int64 NvRmGpuLibOpen_plt(_QWORD);
__int64 NvRmGpuRegOpsSessionCreateChannelless_plt(_QWORD, _QWORD);
__int64 NvRmGpuRegOpsSessionCreateForChannel_plt(_QWORD, _QWORD);
__int64 NvRmGpuRegOpsSessionGetTimeoutMode_plt(_QWORD, _QWORD);
__int64 atoi_plt(_QWORD);
__int64 cuda_driver_103bd0(__int64 result, __int64*, __int64, __int64, int,
                           __int64, int, __int64);
__int64 cuda_driver_103d10(__int64 result, __int64, int, __int64, int, __int64,
                           __int64);
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_5e0a0(__int64);
__int64 cuda_driver_6c0c0(__int64, _QWORD*, __int64, __int64);
__int64 cuda_driver_772c0(__int64);
__int64 cuda_driver_98c30(__int64);
__int64 cuda_driver_98c70(__int64, unsigned int);
__int64 cuda_driver_helpers_1b6f70(__int64, __int64*, __int64, __int64, __int64,
                                   int, char);
__int64 cuda_driver_helpers_1db920(__int64, unsigned __int64);
__int64 cuda_driver_misc_helpers_4bb0(__int64 result);
__int64 cuda_driver_predicates_10f450(__int64);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 qsort_plt(_QWORD, _QWORD, _QWORD, _QWORD);
unsigned __int8 CudaDriverRoutine_1ff750(__int64, unsigned int);
unsigned __int8 CudaDriverRoutine_5c230(__int64);
unsigned __int8 CudaDriverRoutine_98110(_BOOL8 result);
unsigned __int8 CudaDriverRoutine_985b0(int);
unsigned __int8 CudaDriverRoutine_99720(__int64);
unsigned __int8 CudaDriverRoutine_9aa00(__int64);
unsigned __int8 CudaDriverRoutine_9aa40(__int64);
unsigned __int8 CudaDriverRoutine_bbdf0(__int64);
unsigned __int8 CudaDriverRoutine_bbe30(__int64);
unsigned __int8 CudaDriverRoutine_bbe70(__int64);
unsigned __int8 CudaDriverRoutine_e7cb0(__int64, __int64, unsigned int);
unsigned __int8 CudaDriverStub_985a0(__int64);
unsigned __int8 CudaDriverStub_b9300(__int64);
unsigned __int8 cuda_debugger_api_7cff0();
bool cuda_driver_77480(__int64);
extern _DWORD CudaDriverData_1130110[6];
extern _DWORD CudaDriverData_121fac0[9];
extern _DWORD CudaDriverData_121fae4[72];
extern _DWORD CudaDriverData_121fc04[7];
extern _QWORD CudaDriverData_1432130[1];
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_14321c0;
extern _UNKNOWN** CudaDriverData_1423090;
extern _UNKNOWN CudaDriverData_1432e08;
extern _UNKNOWN CudaDriverData_f00000;
extern __int128 CudaDriverData_1115260;
extern __int128 CudaDriverData_1115300;
extern __int128 CudaDriverData_11153b0;
extern __int128 CudaDriverData_11153c0;
extern __int128 CudaDriverData_11153d0;
extern __int128 CudaDriverData_1115480;
extern __int128 CudaDriverData_11154e0;
extern __int128 CudaDriverData_1115550;
extern __int128 CudaDriverData_1115570;
extern __int128 CudaDriverData_1115620;
extern __int128 CudaDriverData_1115670;
extern __int128 CudaDriverData_1115680;
extern __int128 CudaDriverData_11156d0;
extern __int128 CudaDriverData_11156e0;
extern __int128 CudaDriverData_11156f0;
extern __int128 CudaDriverData_11157a0;
extern __int128 CudaDriverData_11157b0;
extern __int128 CudaDriverData_11157f0;
extern __int128 CudaDriverData_1115810;
extern __int128 CudaDriverData_11158a0;
extern __int128 CudaDriverData_11158b0;
extern __int128 CudaDriverData_11158c0;
extern __int128 CudaDriverData_1115960;
extern __int128 CudaDriverData_11159e0;
extern __int128 CudaDriverData_1115a50;
extern __int128 CudaDriverData_1115b00;
extern __int128 CudaDriverData_1115bb0;
extern __int128 CudaDriverData_1115c00;
extern __int128 CudaDriverData_1115c10;
extern __int128 CudaDriverData_1115cf0;
extern __int128 CudaDriverData_1115dc0;
extern __int128 CudaDriverData_1115e30;
extern __int128 CudaDriverData_1115e40;
extern __int128 CudaDriverData_1115f30;
extern __int128 CudaDriverData_1115f70;
extern __int128 CudaDriverData_1116000;
extern __int128 CudaDriverData_1116060;
extern __int128 CudaDriverData_1116160;
extern __int128 CudaDriverData_11161c0;
extern __int128 CudaDriverData_1116210;
extern __int128 CudaDriverData_1116220;
extern __int128 CudaDriverData_11162a0;
extern __int128 CudaDriverData_11162b0;
extern __int128 CudaDriverData_11162d0;
extern __int128 CudaDriverData_11162e0;
extern __int128 CudaDriverData_14302e0;
extern __int128 CudaDriverData_14403f8;
extern __int64 (*CudaDriverData_1423010)();
extern __int64 (*CudaDriverData_1423358)();
extern __int64 (*CudaDriverData_14235b0[25])();
extern __int64 (*CudaDriverData_1430370)(__int64 a1);
extern __int64 (*CudaDriverData_1430378)(__int64 a1);
extern __int64 (*CudaDriverData_1430380)(__int64 a1);
extern __int64 (*CudaDriverData_1430388)(__int64 a1);
extern __int64 (*CudaDriverData_14364f8)(_QWORD, unsigned int*, unsigned int*,
                                         unsigned int*);
extern __int64 (*CudaDriverStub_222170_ptr[2])();
extern __int64 CudaDriverData_1423000;
extern __int64 CudaDriverData_1423360;
extern __int64 CudaDriverData_1423370;
extern __int64 CudaDriverData_1432e00;
extern __int64 CudaDriverData_1432e18;
extern __int64 CudaDriverData_1432e20;
extern __int64 CudaDriverData_14348c0[];
extern __int64 CudaDriverData_143bc08;
extern __int64 CudaDriverData_143bd98;
extern __int64 CudaDriverData_14403e0;
extern char CudaDriverData_1432e90;
extern char CudaDriverData_143bc00;
extern char CudaDriverData_14403dc;
extern int CudaDriverData_1434ac0;
extern int CudaDriverData_14403d8;
extern void (*CudaDriverData_1421fd8[27])();
extern void (*CudaDriverData_14220a8)();
int* cuda_driver_6c700(__int64, __int64, __int64, __int64, __int64*, __int64,
                       _BYTE*);
long double CudaDriverRoutine_1c1350(__int64);
long double CudaDriverRoutine_1f28c0(__int64);
long double CudaDriverRoutine_2342e0(__int64);
long double CudaDriverRoutine_23d590(__int64);
long double cuda_driver_misc_helpers_17670(__int64);
unsigned __int64* CudaDriverRoutine_4d790(unsigned __int64* result,
                                          unsigned __int64);
unsigned __int64* CudaDriverRoutine_ee010(unsigned __int64* result, char);
unsigned __int64 CudaDriverRoutine_196560(__int64*);
unsigned __int64 CudaDriverRoutine_4d7e0(unsigned __int64 result);
unsigned __int64 CudaDriverRoutine_5c030(__int64);
void CudaDriverRoutine_4198();
void CudaDriverRoutine_419c();
void CudaDriverRoutine_41a0();
void CudaDriverRoutine_41a4();
void CudaDriverRoutine_41b0();
void CudaDriverRoutine_41c0();
void CudaDriverRoutine_41c8();
void CudaDriverRoutine_41e0();
void CudaDriverRoutine_4338();
void CudaDriverRoutine_4350();
void CudaDriverRoutine_4360();
void CudaDriverRoutine_4374();
void CudaDriverRoutine_437c();
void CudaDriverRoutine_4384();
void CudaDriverRoutine_438c();
void CudaDriverRoutine_4394();
void CudaDriverRoutine_43a4();
void CudaDriverRoutine_43d8();
void CudaDriverRoutine_4434();
void CudaDriverRoutine_4448();
void CudaDriverRoutine_4450();
void CudaDriverRoutine_4454();
void CudaDriverRoutine_4458();
void CudaDriverRoutine_4460();
void CudaDriverRoutine_4464();
void CudaDriverRoutine_4484();
void CudaDriverRoutine_44e0();
void CudaDriverRoutine_470c();
void CudaDriverRoutine_7368();
void CudaDriverRoutine_743c();
void CudaDriverRoutine_747c();
void CudaDriverRoutine_7488();
void CudaDriverRoutine_7508();
void CudaDriverRoutine_7510();
void CudaDriverRoutine_7518();
void CudaDriverRoutine_7520();
__int64 cuda_driver_120c20(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_1210d0(unsigned __int64* a1);
__int64 cuda_driver_121520(__int64* a1);
__int64 cuda_driver_121e20(__int64 a1);
__int64 cuda_driver_121fa0(_QWORD* a1);
__int64 cuda_driver_122360(char a1, __int64 a2);
__int64 cuda_driver_1226c0(_QWORD* a1, unsigned int a2);
__int64 cuda_driver_1231f0(__int64 a1, __int64 a2, unsigned __int8* a3,
                           __int64 a4, char a5, int* a6);
bool cuda_driver_124130();
__int64 cuda_driver_124170();
__int64 cuda_driver_124f80(__int64 a1);
__int64 cuda_driver_125290(_QWORD* a1);
__int64 cuda_driver_125d80(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_126320(unsigned __int64 a1, __int64 a2, int a3, _DWORD* a4,
                           unsigned __int64 a5);
__int64 cuda_driver_1265e0(__int64 a1, _BYTE* a2);
__int64 cuda_driver_126790(__int64 a1, unsigned __int64 a2);
__int64 cuda_driver_127770(__int64 result);
__int64 cuda_driver_128950(__int64 a1);
__int64 cuda_driver_128f20(unsigned __int64 a1, __int64 a2, __int64 a3,
                           unsigned __int64 a4);
__int64 cuda_driver_12a100();
long double cuda_driver_12b300(__int64* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_12bf60(__int64 a1, __int64 a2);
__int64 cuda_driver_12c6e0(unsigned __int64 a1, __int64 a2);
__int64 cuda_driver_12d6e0(__int64 a1, unsigned __int64* a2, __int64 a3);
__int64 cuda_driver_12e910();
__int64 cuda_driver_12e920();
bool cuda_driver_12ea30(int* a1);
__int64 cuda_driver_12ea60(atomic_uint* a1, __int64 (*a2)(__int64), __int64 a3);
int* cuda_driver_1312a0(int* result);
__int64 cuda_driver_131480(__int64* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_132100(__int64 a1);
__int64 cuda_driver_133dc0(__int64 a1);
__int64 cuda_driver_134300(__int64 a1);
__int64 cuda_driver_135e60(_QWORD* a1);
__int64 cuda_driver_1378a0(__int64 a1);
__int64 cuda_driver_1378c0(__int64 a1);
__int64 cuda_driver_1378e0(__int64 a1);
__int64 cuda_driver_137940(__int64 a1);
bool cuda_driver_138980(int a1, int a2);
__int64 cuda_driver_138b20(__int64 result);
__int64 cuda_driver_138b90(unsigned int a1);
__int64 cuda_driver_1394c0(__int64 a1, __int64* a2, __int64 a3, __int64 a4);
__int64 cuda_driver_194b20(int* a1, char a2);
__int64 cuda_driver_194c50(int* a1, int* a2, char a3);
unsigned __int64 cuda_driver_195f00(__int64* a1, __int64 a2);
__int64 cuda_driver_1964d0(__int64* a1);
__int64 cuda_driver_1966b0(__int64 a1, char a2);
bool cuda_driver_1968d0(__int64 a1, int a2, int a3, char a4);
long double cuda_driver_196b50(__int64 a1);
__int64 cuda_driver_196ed0(__int64 result, int a2, bool* a3);
__int64 cuda_driver_198430();
__int64 cuda_driver_19b120(_OWORD* a1);
__int64 cuda_driver_19b3d0(__int64 a1, int a2);
__int64 cuda_driver_19b720(__int64 a1, unsigned int a2, unsigned int a3);
__int64 cuda_driver_19e150(__int64 a1);
__int64 cuda_driver_1a03e0(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_1a0490();
__int64 cuda_driver_1a0c10(unsigned int a1, __int64 a2);
long double cuda_driver_1a51a0(__int64 a1, __int64 a2, int* a3, __int64 a4);
_DWORD* cuda_driver_1a5840(__int64 a1, __int64* a2, __int64 a3);
__int64 cuda_driver_1a6030(__int64 a1, unsigned int* a2, unsigned __int64* a3,
                           bool* a4);
__int64 cuda_driver_1a6170(__int64 a1, int a2, int a3, unsigned int* a4,
                           unsigned __int64* a5, char* a6);
__int64 cuda_driver_1a7250(__int64 a1);
__int64 cuda_driver_1a8040(__int64 result, unsigned __int64 a2,
                           unsigned int a3);
__int64 cuda_driver_1a9930(__int64 a1);
__int64 cuda_driver_1aace0(__int64 a1, double* a2);
__int64 cuda_driver_1ab7d0(int* a1);
double cuda_driver_1ab880(__int64 a1, __int64 a2, char a3);
__int64 cuda_driver_1ab940(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5);
__int64 cuda_driver_1abfa0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                           char a9);
__int64 cuda_driver_1ad640(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, char a8);
__int64 cuda_driver_1adec0(__int64 result, __int64 a2, __int64 a3,
                           unsigned __int8 a4, char a5, char a6);
__int64 cuda_driver_1ae070(__int64 result, __int64 a2, __int64 a3, char a4);
bool cuda_driver_1ae1f0(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_1ae770(__int64* a1, __int64 a2, __int64 a3, char a4);
_DWORD* cuda_driver_1aed40(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                           unsigned __int64 a5, __int64 a6, unsigned int a7);
__int64 cuda_driver_1af1b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           int a5, __int64 a6, __int64 a7, unsigned int a8,
                           int a9);
_DWORD* cuda_driver_1b01a0(__int64 a1, __int64 a2, __int64* a3, char a4,
                           int a5);
_DWORD* cuda_driver_1b18a0(_DWORD* result, __int64 a2);
__int64 CudaDriverRoutine_11a720(__int64);
__int64 CudaDriverRoutine_11d680(__int64*);
__int64 CudaDriverRoutine_1ff780(__int64, __int64);
__int64 CudaDriverRoutine_5f0d0(unsigned int*);
__int64 CudaDriverRoutine_8aaa0(__int64, __int64);
__int64 memset_plt_alt1(__int64, int, unsigned __int64) __asm__("memset_plt");
unsigned __int8 CudaDriverRoutine_5adc0(__int64);
extern _DWORD CudaDriverData_1116290[4];
extern __int128 CudaDriverData_11160a0;
void CudaDriverRoutine_4488();
void CudaDriverRoutine_44d0();
void CudaDriverRoutine_5c060(__int64);
__int64 cuda_driver_unplaced_8_197020(__int64* a1);
unsigned __int64 cuda_driver_unplaced_8_1a7380(__int64 a1);

__int64 cuda_driver_120c20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 result;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  struct {
    int v13;
    char gap4_[4];
    __int64 v14;
    __int64 v15;
    __int64 v16;
  } v13_;

  v4 = *(_QWORD*)(a3 + 32);
  v5 = *(_QWORD*)(v4 + 1120);
  if (v5 != 0 && (**(_QWORD**)(*(_QWORD*)(v4 + 32) + 504LL) != 1 ||
                  *(_QWORD*)(v5 + 48) != 0 || *(_QWORD*)(v5 + 40) != 0)) {
    v7 = a2;
    result = CudaDriverRoutine_1209a0(a1, a2, a3, a4);
    if ((_DWORD)result != 0) {
      return result;
    }
    if (*(_DWORD*)(a1 + 188) == 3) {
      v10 = 21;
    }
    else {
      v10 = 19;
    }
    if (*(_DWORD*)(a1 + 188) == 3) {
      v11 = 0;
    }
    else {
      v11 = 23;
    }
    if (*(_DWORD*)(CudaDriverData_1432130[v10] + 4LL * v11) != 0) {
      v13_.v13 = 32;
      if (v7 != 0 && *(_BYTE*)(v7 + 415) != 0) {
        v7 = *(_QWORD*)(*(_QWORD*)(v7 + 424) + 96LL);
      }
      v12 = *(_QWORD*)(a3 + 464);
      v13_.v14 = v7;
      v13_.v15 = a3;
      v13_.v16 = v12;
      cuda_driver_20b420(v10, v11, (__int64)&v13_.v13);
    }
  }
  return 0;
}

__int64 cuda_driver_1210d0(unsigned __int64* a1)
{
  void* v1;
  unsigned __int64 v2;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned int (*v8)(__int64, _QWORD*, __int64*);
  bool v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  _QWORD v13[2];

  v1 = CudaDriverData_1422118;
  v2 =
      atomic_fetch_or((atomic_ullong* volatile)((char*)&CudaDriverRoutine_7518 +
                                                (_QWORD)CudaDriverData_1422118),
                      0);
  *a1 = v2;
  if (v2 != 0) {
    return 0;
  }
  CudaDriverStub_107f90((char*)&CudaDriverRoutine_7520 + (_QWORD)v1);
  v5 = 0;
  v6 = atomic_fetch_or(
      (atomic_ullong* volatile)((char*)&CudaDriverRoutine_7518 + (_QWORD)v1),
      0);
  *a1 = v6;
  if (v6 == 0) {
    v5 = *(_DWORD*)((char*)&CudaDriverRoutine_7510 + (_QWORD)v1);
    if (v5 == 0) {
      if ((*(_WORD*)((_BYTE*)((_UNKNOWN*)0x1884LL) + (_QWORD)v1) & 8) != 0) {
        v7 = *(_QWORD*)((char*)&CudaDriverRoutine_7508 + (_QWORD)v1);
      }
      else {
        v7 = CudaDriverStub_12e260("libnvidia-gpucomp.so.580.00");
        *(_QWORD*)((char*)&CudaDriverRoutine_7508 + (_QWORD)v1) = v7;
      }
      if (v7 != 0) {
        v8 = (unsigned int (*)(__int64, _QWORD*,
                               __int64*))CudaDriverStub_12e260(v7);
        if (v8 == nullptr ||
            ((v13[0] = 0, v13[1] = 0,
              v8(0x484F535454494C45LL, v13, &CudaDriverData_1432e00) == 0)
                 ? (v9 = CudaDriverData_1432e00 == 0)
                 : (v9 = true),
             v9)) {
          v5 = 999;
        }
        else {
          v13[0] = 16;
          v13[1] = CudaDriverData_1423358;
          v5 = (*(__int64 (**)(_QWORD*))CudaDriverData_1432e00)(v13);
          if (v5 == 0) {
            CudaDriverData_1432e18 = (__int64)CudaDriverRoutine_121270;
            CudaDriverData_1432e20 = (__int64)CudaDriverRoutine_1212c0;
            do {
              v10 = *(_QWORD*)((char*)&CudaDriverRoutine_7518 + (_QWORD)v1);
              v11 = v10;
              atomic_compare_exchange_strong(
                  (atomic_ullong* volatile)((char*)&CudaDriverRoutine_7518 +
                                            (_QWORD)v1),
                  (unsigned __int64*)&v11,
                  (unsigned __int64)&CudaDriverData_1432e08);
            } while (v11 != v10);
            *a1 = (unsigned __int64)&CudaDriverData_1432e08;
          }
        }
      }
      else {
        v5 = 221;
      }
    }
  }
  v12 = v5;
  *(_DWORD*)((char*)&CudaDriverRoutine_7510 + (_QWORD)v1) = v5;
  CudaDriverStub_108070((char*)&CudaDriverRoutine_7520 + (_QWORD)v1);
  return v12;
}

__int64 cuda_driver_121520(__int64* a1)
{
  void* v2;
  __int64 i;
  int j;
  unsigned int v5;
  __int64 v6;
  atomic_uint* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  CudaDriverRoutine_12dd10();
  CudaDriverRoutine_12dd10();
  v2 = CudaDriverData_1422118;
  CudaDriverStub_107f90((char*)((_UNKNOWN*)0x17C8LL) +
                        (_QWORD)CudaDriverData_1422118);
  for (i = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v2); i != 0;
       i = *(_QWORD*)(i + 16328)) {
    CudaDriverRoutine_98ef0(i, a1[2]);
  }
  CudaDriverStub_108070((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v2);
  for (j = *((_DWORD*)a1 + 2); j != 0; j = *((_DWORD*)a1 + 2)) {
    v5 = j - 1;
    v6 = *(_QWORD*)(*a1 + 8LL * v5);
    *(_QWORD*)(*a1 + 8LL * v5) = 0;
    --*((_DWORD*)a1 + 2);
    CudaDriverRoutine_98870(v6);
  }
  v7 = (atomic_uint*)a1[5];
  if (atomic_fetch_add(v7, 0xFFFFFFFF) == 1) {
    CudaDriverRoutine_12e340((__int64)v7);
  }
  v8 = a1[6];
  a1[5] = 0;
  CudaDriverRoutine_e1db0(v8);
  a1[6] = 0;
  if ((__int64*)CudaDriverData_14302e0 == a1) {
    v9 = a1[10];
    *(_QWORD*)&CudaDriverData_14302e0 = v9;
    if (v9 != 0) {
      v10 = 0;
      goto LABEL_12;
    }
  }
  else {
    v9 = a1[10];
    *(_QWORD*)(a1[9] + 80) = v9;
    if (v9 != 0) {
      v10 = a1[9];
    LABEL_12:
      *(_QWORD*)(v9 + 72) = v10;
    }
  }
  v11 = *((unsigned int*)a1 + 3);
  v12 = *a1;
  a1[9] = 0;
  a1[10] = 0;
  memset_plt(v12, 0, 8 * v11);
  CudaDriverRoutine_12e340(*a1);
  a1[10] = 0;
  *((_OWORD*)a1 + 1) = (__typeof__(*((_OWORD*)a1 + 1))){0};
  *((_OWORD*)a1 + 2) = (__typeof__(*((_OWORD*)a1 + 2))){0};
  *((_OWORD*)a1 + 3) = (__typeof__(*((_OWORD*)a1 + 3))){0};
  *((_OWORD*)a1 + 4) = (__typeof__(*((_OWORD*)a1 + 4))){0};
  *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
  return CudaDriverRoutine_12e340((__int64)a1);
}

__int64 cuda_driver_121e20(__int64 a1)
{
  __int64 v1;
  _BOOL4 v2;
  int v3;
  _BOOL4 v4;
  void* v6;
  _QWORD* i;
  __int64 j;

  if (a1 == -1) {
    return 3;
  }
  v1 = *(_QWORD*)(a1 + 40);
  v2 = false;
  v3 = *(_DWORD*)(v1 + 4);
  if (v3 == 2) {
    v4 = false;
  }
  else {
    if (v3 == 0) {
      v2 = *(_DWORD*)((char*)&CudaDriverRoutine_470c +
                      (_QWORD)CudaDriverData_1422118) != 0;
    }
    v4 = *(_DWORD*)(v1 + 8) != 0;
    if (v2) {
      goto LABEL_11;
    }
  }
  if (!v4) {
    return 0;
  }
LABEL_11:
  v6 = CudaDriverData_1422118;
  CudaDriverStub_107f90((char*)((_UNKNOWN*)0x17C8LL) +
                        (_QWORD)CudaDriverData_1422118);
  for (i = *(_QWORD**)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v6); i != nullptr;
       i = (_QWORD*)i[2041]) {
    CudaDriverRoutine_117c40(*(_QWORD*)(i[11] + 8LL), v2, 1, v1);
    CudaDriverStub_107f90(i + 2071);
    for (j = i[2070]; j != 0; j = *(_QWORD*)(j + 264)) {
      CudaDriverRoutine_117c40(*(_QWORD*)(*(_QWORD*)(j + 88) + 8LL), v2, 1, v1);
    }
    CudaDriverStub_108070_alt1(i + 2071);
  }
  CudaDriverStub_108070_alt1((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v6);
  if (v4 || v2) {
    if (v4) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"API call conflicts with a stream capture sequence "
                   "initiated from the calling thread\n");
    }
    else {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"API call conflicts with a stream capture sequence "
                   "initiated from another thread\n");
    }
  }
  return 900;
}

__int64 cuda_driver_121fa0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;

  v3 = 0;
  result = CudaDriverRoutine_121c60(&v3);
  if ((_DWORD)result == 0) {
    *a1 = *(__int64*)((char*)((__int64*)0x30LL) + v3);
  }
  return result;
}

__int64 cuda_driver_122360(char a1, __int64 a2)
{
  __int64 result;
  void* v4;

  result = 0xFFFF;
  if (a1 != 0) {
    v4 = CudaDriverData_1422118;
    if (*((_BYTE*)((_UNKNOWN*)0x17BCLL) + (_QWORD)CudaDriverData_1422118) ==
        0) {
      if ((*((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)CudaDriverData_1422118) &
           2) != 0 ||
          (cuda_driver_772c0(a2) & 1) != 0 ||
          *((_BYTE*)((_UNKNOWN*)0x10ACLL) + (_QWORD)v4) != 0 &&
              !cuda_debugger_api_7cff0()) {
        return 59;
      }
      else {
        return 57;
      }
    }
  }
  return result;
}

__int64 cuda_driver_1226c0(_QWORD* a1, unsigned int a2)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 (*v10)();
  void* v11;
  __int64 (*v12)();
  __int64 (*v13)();
  char v14;
  __int64 v15;
  char v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  if (*((_DWORD*)a1 + 2) == 2) {
    return 0;
  }
  v3 = *a1;
  v6 = *(_QWORD*)(*a1 + 64LL);
  if ((*(_BYTE*)(*a1 + 1952LL) & 4) != 0 &&
      CudaDriverRoutine_9aa40(*(_QWORD*)(*a1 + 64LL))) {
    v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 16864LL) + 232LL);
    if (*(_DWORD*)(v7 + 8) != 2) {
      v8 = cuda_driver_1226c0((_QWORD*)v7, a2);
      if (v8 != 0) {
        goto LABEL_11;
      }
    }
  }
  if ((a2 & 2) == 0 && (*(_BYTE*)(v6 + 16977) & 4) != 0) {
    v10 = CudaDriverRoutine_122ac0;
    v11 = CudaDriverData_1422118;
    if ((*(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1840LL) +
                    (_QWORD)CudaDriverData_1422118) &
         2) != 0) {
      v12 = CudaDriverRoutine_122ac0;
    }
    else {
      v12 = CudaDriverRoutine_122be0;
    }
    if ((unsigned int)CudaDriverStub_10f720(*(_QWORD*)(*a1 + 1208LL)) == 2 &&
        !CudaDriverRoutine_98110(*a1)) {
      v12 = CudaDriverRoutine_122d80;
      v14 = 0;
      v17 = *((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)v11);
      v13 = CudaDriverRoutine_122df0;
      if ((v17 & 2) == 0) {
        v10 = CudaDriverRoutine_122be0;
      }
      if (CudaDriverRoutine_98110(*a1)) {
        goto LABEL_19;
      }
    }
    else {
      v10 = nullptr;
      v13 = nullptr;
      v14 = 1;
      if (CudaDriverRoutine_98110(*a1)) {
        goto LABEL_19;
      }
    }
    if ((unsigned __int8)CudaDriverRoutine_9aea0(*(_QWORD*)(v3 + 64), 2) != 0) {
      v18 = *a1;
      if ((unsigned __int8)CudaDriverRoutine_9aea0(*(_QWORD*)(*a1 + 64LL), 2) ==
          0) {
        goto LABEL_51;
      }
      v8 = CudaDriverRoutine_197c60(a1 + 7, 2,
                                    *(_QWORD*)(*(_QWORD*)(v18 + 72) + 33160LL));
      if (v8 != 0) {
        goto LABEL_11;
      }
      v8 = cuda_driver_helpers_1b6f70(*(_QWORD*)(v18 + 216), a1 + 13,
                                      (__int64)v12, (__int64)a1, a1[7] + 16LL,
                                      0, 0);
      if (v8 != 0) {
        goto LABEL_11;
      }
    }
    if (v10 != nullptr &&
        (unsigned __int8)CudaDriverRoutine_9aea0(*(_QWORD*)(v3 + 64), 4) != 0) {
      v19 = *a1;
      if ((unsigned __int8)CudaDriverRoutine_9aea0(*(_QWORD*)(*a1 + 64LL), 4) ==
          0) {
        goto LABEL_51;
      }
      v8 = CudaDriverRoutine_197c60(a1 + 8, 4,
                                    *(_QWORD*)(*(_QWORD*)(v19 + 72) + 33160LL));
      if (v8 != 0) {
        goto LABEL_11;
      }
      v8 = cuda_driver_helpers_1b6f70(*(_QWORD*)(v19 + 216), a1 + 14,
                                      (__int64)v10, (__int64)a1, a1[8] + 16LL,
                                      0, 0);
      if (v8 != 0) {
        goto LABEL_11;
      }
    }
    if ((v14 & 1) == 0 &&
        (unsigned __int8)CudaDriverRoutine_9aea0(*(_QWORD*)(v3 + 64), 5) != 0) {
      v20 = *a1;
      if ((unsigned __int8)CudaDriverRoutine_9aea0(*(_QWORD*)(*a1 + 64LL), 5) ==
          0) {
        goto LABEL_51;
      }
      v8 = CudaDriverRoutine_197c60(a1 + 9, 5,
                                    *(_QWORD*)(*(_QWORD*)(v20 + 72) + 33160LL));
      if (v8 != 0) {
        goto LABEL_11;
      }
      v8 = cuda_driver_helpers_1b6f70(*(_QWORD*)(v20 + 216), a1 + 15,
                                      (__int64)v13, (__int64)a1, a1[9] + 16LL,
                                      0, 0);
      if (v8 != 0) {
        goto LABEL_11;
      }
    }
  LABEL_19:
    if ((unsigned __int8)CudaDriverRoutine_9aea0(*(_QWORD*)(v3 + 64), 3) == 0) {
    LABEL_23:
      if (*(_BYTE*)(*(_QWORD*)(v3 + 64) + 3371LL) != 0) {
        v8 = CudaDriverRoutine_122ee0((__int64)a1);
        if (v8 != 0) {
          goto LABEL_11;
        }
      }
      v8 = CudaDriverRoutine_122fe0(a1);
      if (v8 != 0) {
        goto LABEL_11;
      }
      *((_DWORD*)a1 + 20536) = 0;
      CudaDriverStub_107f90_alt1(a1 + 10262);
      v16 = a1[10264] & 0xFE;
      if ((a2 & 4) == 0) {
        ++v16;
      }
      *((_BYTE*)a1 + 82112) = v16;
      CudaDriverStub_108070_alt1(a1 + 10262);
      v8 = (*(__int64 (**)(_QWORD, __int64, _QWORD))(v6 + 21184))(*a1, 1,
                                                                  a2 & 1);
      if (v8 != 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v15 = *a1;
    if ((unsigned __int8)CudaDriverRoutine_9aea0(*(_QWORD*)(*a1 + 64LL), 3) !=
        0) {
      v8 = CudaDriverRoutine_197c60(a1 + 10, 3,
                                    *(_QWORD*)(*(_QWORD*)(v15 + 72) + 33160LL));
      if (v8 != 0) {
        goto LABEL_11;
      }
      v8 = cuda_driver_helpers_1b6f70(*(_QWORD*)(v15 + 216), a1 + 16,
                                      (__int64)CudaDriverRoutine_122e60,
                                      (__int64)a1, a1[10] + 16LL, 2, 0);
      if (v8 != 0) {
        goto LABEL_11;
      }
      goto LABEL_23;
    }
  LABEL_51:
    v9 = 801;
    goto LABEL_12;
  }
  v8 = (*(__int64 (**)(_QWORD, __int64, _QWORD))(v6 + 21184))(*a1, 1, a2 & 1);
  if (v8 != 0) {
  LABEL_11:
    v9 = v8;
  LABEL_12:
    CudaDriverRoutine_123080(a1);
    return v9;
  }
LABEL_10:
  *((_BYTE*)a1 + 12) |= 1u;
  v8 = CudaDriverStub_10f430(*(_QWORD*)(*a1 + 1208LL), *(_QWORD*)(*a1 + 72LL));
  if (v8 != 0) {
    goto LABEL_11;
  }
  *((_DWORD*)a1 + 2) = 2;
  if ((a2 & 8) == 0) {
    CudaDriverRoutine_97e80(*a1);
  }
  return 0;
}

__int64 cuda_driver_1231f0(__int64 a1, __int64 a2, unsigned __int8* a3,
                           __int64 a4, char a5, int* a6)
{
  __int64 v7;
  __int64 result;
  __int64 v14;
  int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  void* v21;
  bool v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  char v31[4];
  _BYTE v32[4];
  struct {
    int v33;
    char gap20_[4];
    __int64 v34;
    __int64 v35;
    int v36;
  } v33_;

  v7 = *(_QWORD*)a4;
  v32[0] = 0;
  v31[0] = 1;
  if ((unsigned int)CudaDriverRoutine_98650(v7, 0) != 0) {
    goto LABEL_2;
  }
  if (a5 != 0) {
    v14 = *(_QWORD*)(a4 + 24);
    if (v14 == 0) {
      return 999;
    }
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)(a1 + 64) + 19560LL))(
        a1, *(_QWORD*)(a4 + 24));
    if ((_DWORD)result != 0) {
      return result;
    }
    if (CudaDriverStub_1dbab0(v14) == 0) {
      return 999;
    }
    result = (*(__int64 (**)(__int64, __int64, _QWORD, _BYTE*, __int64, char*))(
        *(_QWORD*)(a1 + 64) + 19552LL))(a1, a4 + 168, *(_QWORD*)(a4 + 24), v32,
                                        a2, v31);
    if ((_DWORD)result == 0) {
    LABEL_2:
      if (*a3) {
        return 0;
      }
      if (v31[0] == 0) {
        result = 0;
        ++*(_DWORD*)(a4 + 82144);
        v17 = 7;
      LABEL_50:
        *a6 = v17;
        return result;
      }
      v15 = v32[0];
      if ((cuda_driver_772c0(a1) & 1) != 0) {
        v16 = CudaDriverStub_77c40(a1);
        v30 = !cuda_driver_77480(a1);
        result = v16;
        if (v30) {
          v17 = 1;
        }
        else {
          v17 = 8;
        }
        goto LABEL_50;
      }
      *(_DWORD*)(a4 + 82144) = 0;
      v20 = *(_QWORD*)(a4 + 24);
      v21 = CudaDriverData_14225e0;
      if (*(int*)((char*)((int*)0x4LL) +
                  *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) +
                             (_QWORD)CudaDriverData_14225e0)) != 0) {
        v33_.v34 = a1;
        v33_.v35 = v20;
        v33_.v36 = v15;
        v33_.v33 = 32;
        cuda_driver_20b420(0xAu, 1u, (__int64)&v33_.v33);
      }
      if (!CudaDriverStub_985a0(a1)) {
        CudaDriverRoutine_11c9a0(a1, a4 + 168, 1u);
      }
      if (*(_BYTE*)(a4 + 82092) != 0) {
        v22 = (*(_BYTE*)(a4 + 82112) & 2) != 0;
        v23 = *(unsigned __int8*)(a4 + 82093);
        v24 = *(_QWORD*)(a4 + 24);
        if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                       *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + (_QWORD)v21)) ==
            0) {
          goto LABEL_30;
        }
      }
      else {
        v22 = false;
        v23 = *(unsigned __int8*)(a4 + 82093);
        v24 = *(_QWORD*)(a4 + 24);
        if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                       *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + (_QWORD)v21)) ==
            0) {
        LABEL_30:
          if (v15 != 0) {
            v17 = 1;
            if ((*(_BYTE*)(a4 + 82112) & 4) != 0) {
              (*(void (**)(__int64, __int64, _QWORD, int*))(
                  *(_QWORD*)(a1 + 64) + 19624LL))(
                  a1, a4 + 168, *(_QWORD*)(a4 + 24), &v33_.v33);
              if ((_BYTE)v33_.v33 != 0) {
                v17 = 2;
              }
              else {
                v17 = 1;
              }
            }
          }
          else {
            if (v22) {
              v17 = 5;
              goto LABEL_42;
            }
            if (v23 != 0) {
              v17 = 1;
            LABEL_46:
              CudaDriverRoutine_98110(a1);
              v25 = 721;
            LABEL_47:
              cuda_driver_98c70(a1, v25);
            LABEL_48:
              CudaDriverRoutine_1383e0(
                  *(_QWORD*)(*(_QWORD*)(a1 + 72) + 34328LL), v25);
              CudaDriverRoutine_5e790(*(_QWORD*)(a1 + 72));
            LABEL_49:
              result = 0;
              goto LABEL_50;
            }
            v26 = *(unsigned int*)(a1 + 164);
            if ((_DWORD)v26 != 0) {
              v27 = (_QWORD*)(*(_QWORD*)(a1 + 232) + 208LL);
              while (1) {
                v28 = *(v27 - 5) & *(v27 - 3);
                if (v28 == (v28 & *(v27 - 1))) {
                  v29 = *(v27 - 4) & *(v27 - 2);
                  v30 = v29 == (v29 & *v27);
                }
                else {
                  v30 = false;
                }
                if (!v30) {
                  break;
                }
                v27 += 40;
                if (--v26 == 0) {
                  goto LABEL_60;
                }
              }
              v17 = 6;
            }
            else {
            LABEL_60:
              if (*(_DWORD*)(a4 + 82088) != 0) {
                v17 = *(_DWORD*)(a4 + 82088);
              }
              else {
                v17 = 2;
              }
            }
          }
          if (!v22) {
            if (v23 == 0) {
              goto LABEL_49;
            }
            goto LABEL_46;
          }
        LABEL_42:
          v25 = 710;
          if (CudaDriverRoutine_98110(a1) && v22) {
            goto LABEL_48;
          }
          goto LABEL_47;
        }
      }
      v33_.v34 = a1;
      v33_.v35 = v24;
      v33_.v36 = v15;
      v33_.v33 = 32;
      cuda_driver_20b420(0xAu, 2u, (__int64)&v33_.v33);
      goto LABEL_30;
    }
  }
  else {
    v18 = *(_QWORD*)(a1 + 64);
    LOBYTE(v33_.v33) = 0;
    result = (*(__int64 (**)(__int64, int*))(v18 + 21328))(a1, &v33_.v33);
    if ((_DWORD)result == 0) {
      v19 = (unsigned __int8)v33_.v33;
      *a3 = (_BYTE)v33_.v33 == 0;
      if (v19 == 0) {
        return 0;
      }
      result = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 21304LL))(a1);
      if ((_DWORD)result == 0) {
        result = (*(__int64 (**)(__int64, __int64, _QWORD, _BYTE*))(
            *(_QWORD*)(a1 + 64) + 21312LL))(a1, a4 + 168, *(_QWORD*)(a4 + 24),
                                            v32);
        if ((_DWORD)result == 0) {
          result = CudaDriverStub_197d80(*(_QWORD*)(a4 + 56));
          if ((_DWORD)result == 0) {
            v31[0] = 1;
            goto LABEL_2;
          }
        }
      }
    }
  }
  return result;
}

bool cuda_driver_124130()
{
  return (*(_WORD*)((_BYTE*)&CudaDriverRoutine_4484 +
                    (_QWORD)CudaDriverData_1422118) &
          2) == 0 &&
         ((*((_BYTE*)&CudaDriverRoutine_4350 + (_QWORD)CudaDriverData_1422118) &
           0x10) == 0 ||
          (*((_BYTE*)&CudaDriverRoutine_44e0 + (_QWORD)CudaDriverData_1422118) &
           8) == 0);
}

__int64 cuda_driver_124170()
{
  _BYTE v1[64];

  if ((unsigned int)CudaDriverRoutine_12e300() == 0 &&
      (unsigned int)atoi_plt(v1) != 0) {
    *((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)CudaDriverData_1422118) |= 2u;
  }
  if ((unsigned int)CudaDriverRoutine_12e300() != 0 ||
      (unsigned int)atoi_plt(v1) == 0) {
    return 0;
  }
  *((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)CudaDriverData_1422118) |= 4u;
  return 0;
}

__int64 cuda_driver_124f80(__int64 a1)
{
  char* v1;
  unsigned int* v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  char* v14;
  unsigned int v15;
  unsigned int* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  unsigned int v21;
  __int64 v22;

  v1 = (char*)CudaDriverData_1422118;
  if ((*((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)CudaDriverData_1422118) & 2) !=
      0) {
    v2 = *(unsigned int**)(a1 + 64);
    if ((v2[4212] & 0x20) != 0 && (*(_WORD*)((_BYTE*)((_UNKNOWN*)0x1870LL) +
                                             (_QWORD)CudaDriverData_1422118) &
                                   1) == 0) {
      v22 = a1;
      v3 = *v2;
      v4 = (_QWORD*)CudaDriverData_1423360;
      CudaDriverStub_107f90_alt2(*(_QWORD*)CudaDriverData_1423360);
      *(_BYTE*)(*v4 + v3 + 1248) = 1;
      v5 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v1);
      v6 = *v4;
      if ((_DWORD)v5 != 0) {
        v7 = (__int64*)(v1 + 288);
        v8 = 1249;
        v9 = 0;
        do {
          if (*(_BYTE*)(v6 + v9 + 1248) != 0) {
            v10 = v9 + 1;
            if (v9 + 1 < v5) {
              v11 = v7;
              v12 = v8;
              do {
                if (*(_BYTE*)(v6 + v12) != 0) {
                  v14 = &v1[8 * v9];
                  if ((unsigned __int8)CudaDriverRoutine_eec70(
                          *((_QWORD*)v14 + 35), *v11) == 0 ||
                      (unsigned __int8)CudaDriverRoutine_eec70(
                          *v11, *((_QWORD*)v14 + 35)) == 0) {
                    *(_BYTE*)(*v4 + v3 + 1248) = 0;
                    CudaDriverStub_108070_alt2(*v4);
                    return 101;
                  }
                  v6 = *v4;
                  v5 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                                        (_QWORD)v1);
                }
                v13 = v12 - 1247;
                ++v12;
                ++v11;
              } while (v13 < v5);
            }
          }
          else {
            v10 = v9 + 1;
          }
          ++v8;
          ++v7;
          v9 = v10;
        } while (v10 < v5);
      }
      CudaDriverStub_108070_alt2(v6);
      a1 = v22;
    }
  }
  if (*((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)v1 + 2) != 0) {
    v16 = *(unsigned int**)(a1 + 64);
    if ((v16[4212] & 0x20) != 0) {
      v17 = a1;
      v18 = (_QWORD*)CudaDriverData_1423360;
      CudaDriverStub_107f90_alt2(*(_QWORD*)CudaDriverData_1423360);
      v19 = *v18;
      if (*(_DWORD*)(*v18 + 4LL * *v16 + 480) == 0) {
        v21 = (*(__int64 (**)(unsigned int*))(v19 + 104))(v16);
        if (v21 != 0) {
          v15 = v21;
          CudaDriverStub_108070_alt2(*v18);
          return v15;
        }
        v19 = *v18;
        if ((v16[4267] & 2) == 0) {
          ++*(_DWORD*)(v19 + 456);
        }
      }
      ++*(_DWORD*)(v19 + 4LL * *v16 + 480);
      CudaDriverStub_108070_alt2(*v18);
      a1 = v17;
    }
    v15 = 0;
    *(_BYTE*)(a1 + 1952) |= 8u;
  }
  else {
    return 0;
  }
  return v15;
}

__int64 cuda_driver_125290(_QWORD* a1)
{
  _DWORD* v2;
  _DWORD* v3;

  if ((*(_WORD*)((_BYTE*)((_UNKNOWN*)0x1870LL) +
                 (_QWORD)CudaDriverData_1422118) &
       1) != 0) {
    CudaDriverStub_203210((__int64)a1, 0, 4, 0, (__int64)(a1 + 262));
    if (a1[262] == 0) {
      return 2;
    }
  }
  CudaDriverRoutine_107f40(a1 + 257, 56, 0);
  v2 = CudaDriverRoutine_1a28d0();
  a1[259] = v2;
  if (v2 == nullptr) {
    return 2;
  }
  v3 = CudaDriverRoutine_1a28d0();
  a1[260] = v3;
  if (v3 == nullptr) {
    return 2;
  }
  a1[261] = 0;
  return 0;
}

__int64 cuda_driver_125d80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  _QWORD* v10;
  unsigned int v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64* v29;
  unsigned __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v37;
  __int64 v38;
  char v40;
  struct {
    _QWORD v41[8];
    __int128 v42;
  } v41_;
  _DWORD* v43;
  unsigned int v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;

  v4 = CudaDriverStub_12e320(a1);
  v5 = *(unsigned __int8*)(a3 + 72);
  v6 = (unsigned int)v4;
  v41_.v42 = (__typeof__(v41_.v42)){0};
  memset(v41_.v41, 0, sizeof(v41_.v41));
  if (v5 == 0) {
    v12 = 0;
    v40 = 1;
    if (*(_DWORD*)a3 == 1) {
      goto LABEL_30;
    }
    goto LABEL_24;
  }
  v7 = CudaDriverStub_12e260(v4);
  if (v7 < 0x201) {
    v10 = nullptr;
  }
  else {
    v8 = CudaDriverStub_12e260(v7);
    v9 = CudaDriverStub_12e260(v8);
    v7 = CudaDriverRoutine_12e510(
        8, (v8 - (unsigned __int64)((v9 - 1) & 0x3F) + 63) >> 6);
    v10 = (_QWORD*)v7;
    *((_QWORD*)&v41_.v42 + 1) = v7;
    if (v7 == 0) {
      v11 = 2;
      v40 = 1;
      if ((unsigned __int64)CudaDriverStub_12e260(0) < 0x201) {
        goto LABEL_23;
      }
    LABEL_22:
      CudaDriverRoutine_12e340(*(_QWORD*)(a3 + 152));
      *(_QWORD*)(a3 + 152) = 0;
      goto LABEL_23;
    }
  }
  if ((unsigned __int64)CudaDriverStub_12e260(v7) <= 0x200) {
    v13 = &v41_.v41[1];
  }
  else {
    v13 = v10;
  }
  v14 = CudaDriverStub_12db70(v41_.v41, v13);
  if ((_DWORD)v14 != 0) {
    v15 = CudaDriverStub_12e260(v14);
    if (v15 < 0x201) {
      v11 = 304;
      v40 = 1;
      if ((unsigned __int64)CudaDriverStub_12e260(v15) >= 0x201) {
        goto LABEL_22;
      }
    }
    else {
      v16 = CudaDriverRoutine_12e340(*((__int64*)&v41_.v42 + 1));
      *((_QWORD*)&v41_.v42 + 1) = 0;
      v11 = 304;
      v40 = 1;
      if ((unsigned __int64)CudaDriverStub_12e260(v16) >= 0x201) {
        goto LABEL_22;
      }
    }
  }
  else {
    if ((unsigned __int64)CudaDriverStub_12e260(v14) < 0x201) {
      v17 = a3 + 88;
    }
    else {
      v17 = *(_QWORD*)(a3 + 152);
    }
    v18 = CudaDriverStub_12db70(*(unsigned int*)(a3 + 80), v17);
    v40 = 0;
    v11 = 0;
    if ((unsigned __int64)CudaDriverStub_12e260(v18) >= 0x201) {
      goto LABEL_22;
    }
  }
LABEL_23:
  v12 = v11;
  if (*(_DWORD*)a3 == 1) {
    goto LABEL_30;
  }
LABEL_24:
  v19 = *(_QWORD*)(a3 + 24);
  if (v19 != 0) {
    v20 = 0;
    v21 = CudaDriverData_1423360;
    do {
      v22 = *(_QWORD*)(*(_QWORD*)(a3 + 8) + 8 * v20);
      v23 = *(_QWORD*)(*(_QWORD*)(a3 + 16) + 8 * v20) + v22;
      v24 = (v6 - 1 + v22) / v6 * v6;
      v25 = v23 % v6 + v24;
      if (v23 != v25) {
        v12 = (*(__int64 (**)(unsigned __int64, unsigned __int64, bool))(
            *(_QWORD*)v21 + 296LL))(v24, v23 - v25, *(_DWORD*)a3 == 2);
        if ((_DWORD)v12 != 0) {
          break;
        }
        v19 = *(_QWORD*)(a3 + 24);
      }
      ++v20;
    } while (v20 < v19);
  }
LABEL_30:
  v26 = *(_QWORD*)(a3 + 48);
  if (v26 != 0) {
    v27 = 0;
    v28 = CudaDriverData_1423360;
    do {
      v43 = (_DWORD*)(*(_QWORD*)(a3 + 32) + 8 * v27);
      if (*v43 == 3) {
        v44 = v43[1];
        v45 = 0;
      }
      else {
        v44 = *(_DWORD*)(a3 + 68);
        v45 = 0;
        if (*v43 == 1) {
          v45 = *(_QWORD*)((char*)CudaDriverData_1422118 + 8LL * (int)v43[1] +
                           280);
        }
      }
      v29 = (unsigned __int64*)(*(_QWORD*)(a3 + 40) + 8 * v27);
      v32 = *v29;
      v30 = v29 + 1;
      v31 = v32;
      if (v27 >= v26 - 1) {
        v30 = (unsigned __int64*)(a3 + 24);
      }
      v33 = *v30;
      if (v31 < v33) {
        v34 = v33 - 1;
        do {
          v46 = *(_QWORD*)(*(_QWORD*)(a3 + 8) + 8 * v31);
          v47 = v6 - 1 + v46 + *(_QWORD*)(*(_QWORD*)(a3 + 16) + 8 * v31);
          v48 = v46 / v6 * v6;
          if (*(_QWORD*)(a3 + 56) != 0 && v31 == *(_QWORD*)(a3 + 24) - 1LL) {
            v12 = (*(__int64 (**)(unsigned __int64, unsigned __int64, __int64,
                                  unsigned int, __int64,
                                  unsigned int))(*(_QWORD*)v28 + 288LL))(
                v48, v47 - v48 - v47 % v6, v45, v44, *(_QWORD*)(a3 + 56),
                *(_DWORD*)(a3 + 64));
          }
          else {
            v12 = (*(__int64 (**)(unsigned __int64, unsigned __int64, __int64,
                                  unsigned int))(*(_QWORD*)v28 + 280LL))(
                v48, v47 - v48 - v47 % v6, v45, v44);
          }
        } while ((_DWORD)v12 == 0 && v34 != v31++);
        v26 = *(_QWORD*)(a3 + 48);
      }
      ++v27;
    } while (v27 < v26);
  }
  if ((_DWORD)v12 != 0 && *(_QWORD*)(a3 + 56) != 0) {
    __builtin_arm_dmb(0xEu);
    **(_DWORD**)(a3 + 56) = *(_DWORD*)(a3 + 64);
  }
  if ((v40 & 1) == 0) {
    if ((unsigned __int64)CudaDriverStub_12e260(v12) <= 0x200) {
      v37 = &v41_.v41[1];
    }
    else {
      v37 = *((_QWORD**)&v41_.v42 + 1);
    }
    v38 = CudaDriverStub_12db70(LODWORD(v41_.v41[0]), v37);
    if ((unsigned __int64)CudaDriverStub_12e260(v38) >= 0x201) {
      CudaDriverRoutine_12e340(*((__int64*)&v41_.v42 + 1));
      *((_QWORD*)&v41_.v42 + 1) = 0;
    }
  }
  return CudaDriverRoutine_12e340(a3);
}

__int64 cuda_driver_126320(unsigned __int64 a1, __int64 a2, int a3, _DWORD* a4,
                           unsigned __int64 a5)
{
  unsigned int v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned int v17;
  void (*v18)(unsigned __int64, unsigned __int64, unsigned __int64*);
  unsigned __int64 v19;
  unsigned __int64 v20;
  void (*v21)(unsigned __int64, unsigned __int64, unsigned __int64*);
  void (*v22)(unsigned __int64, unsigned __int64, unsigned __int64*);
  void (*v23)(unsigned __int64, unsigned __int64, unsigned __int64*);
  unsigned __int64 v24;
  __int128 v25;
  _OWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  _DWORD* v29;
  unsigned __int64 v31;

  v10 = CudaDriverStub_12e320(a1);
  v11 = a1 / v10 * v10;
  v12 = a1 + a2;
  v13 = (_QWORD*)CudaDriverData_1423360;
  v14 = v12 + v10 - 1;
  v15 = v14 - v11;
  v16 = v14 % v10;
  CudaDriverStub_107f90_alt2(*(_QWORD*)CudaDriverData_1423360);
  v17 = 0;
  if (a3 > 4) {
    if (a3 > 6) {
      if (a3 != 7) {
        if (a3 != 8) {
          goto LABEL_33;
        }
        v21 = *(void (**)(unsigned __int64, unsigned __int64,
                          unsigned __int64*))(*v13 + 312LL);
      LABEL_17:
        v31 = 0xFFFFFFFE00000000LL;
        v21(v11, v15 - v16, &v31);
        v17 = 0;
        *a4 = HIDWORD(v31);
        goto LABEL_33;
      }
      v23 = *(void (**)(unsigned __int64, unsigned __int64, unsigned __int64*))(
          *v13 + 312LL);
    }
    else {
      if (a3 != 5) {
        v21 = *(void (**)(unsigned __int64, unsigned __int64,
                          unsigned __int64*))(*v13 + 360LL);
        goto LABEL_17;
      }
      v23 = *(void (**)(unsigned __int64, unsigned __int64, unsigned __int64*))(
          *v13 + 360LL);
    }
    v31 = 0xFFFFFFFE00000000LL;
    v23(v11, v15 - v16, &v31);
    v17 = 0;
    *a4 = v31;
    goto LABEL_33;
  }
  if (a3 > 2) {
    if (a3 != 3) {
      *a4 = -2;
      v22 = *(void (**)(unsigned __int64, unsigned __int64, unsigned __int64*))(
          *v13 + 312LL);
      v31 = 0xFFFFFFFE00000000LL;
      v22(v11, v15 - v16, &v31);
      v19 = v31;
      if ((unsigned int)(v31 - 2) < 3) {
        goto LABEL_6;
      }
      goto LABEL_12;
    }
    if (a5 != 0) {
      if (a5 >= 8) {
        *(_QWORD*)&v25 = 0x100000001LL;
        *((_QWORD*)&v25 + 1) = 0x100000001LL;
        v24 = a5 & 0xFFFFFFFFFFFFFFF8LL;
        v26 = a4 + 4;
        v27 = a5 & 0xFFFFFFFFFFFFFFF8LL;
        do {
          *(v26 - 1) = v25;
          *v26 = v25;
          v27 -= 8LL;
          v26 += 2;
        } while (v27 != 0);
        if (a5 == v24) {
          goto LABEL_32;
        }
      }
      else {
        v24 = 0;
      }
      v28 = a5 - v24;
      v29 = &a4[v24];
      do {
        *v29++ = -2;
        --v28;
      } while (v28 != 0);
    }
  LABEL_32:
    v17 = (*(__int64 (**)(unsigned __int64, unsigned __int64, _DWORD*,
                          unsigned __int64))(*v13 + 384LL))(v11, v15 - v16, a4,
                                                            a5);
    goto LABEL_33;
  }
  if (a3 == 1) {
    *a4 = 0;
    (*(void (**)(unsigned __int64, unsigned __int64, _DWORD*))(*v13 + 336LL))(
        v11, v15 - v16, a4);
    v17 = 0;
  }
  else if (a3 == 2) {
    *a4 = -2;
    v18 = *(void (**)(unsigned __int64, unsigned __int64, unsigned __int64*))(
        *v13 + 360LL);
    v31 = 0xFFFFFFFE00000000LL;
    v18(v11, v15 - v16, &v31);
    v19 = v31;
    if ((unsigned int)(v31 - 2) < 3) {
    LABEL_6:
      LODWORD(v20) = -1;
    LABEL_26:
      v17 = 0;
      *a4 = v20;
      goto LABEL_33;
    }
  LABEL_12:
    if ((_DWORD)v19 == 1) {
      v20 = HIDWORD(v19);
    }
    else {
      LODWORD(v20) = -2;
    }
    goto LABEL_26;
  }
LABEL_33:
  CudaDriverStub_108070_alt2(*v13);
  return v17;
}

__int64 cuda_driver_1265e0(__int64 a1, _BYTE* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v6;
  _QWORD* v7;
  __int64 (*v8)(__int64, _QWORD, __int64);
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 (*v15)(__int64, __int64, _QWORD);
  __int64 v16;
  unsigned int v17;
  void (*v18)(__int64, _QWORD);
  __int64 v19;
  __int64 (*v20)(__int64);
  __int64 v21;
  __int64 v22;

  *a2 = 0;
  v3 = 0;
  v4 = *(_QWORD*)(a1 + 16);
  if ((*(_WORD*)(*(_QWORD*)(v4 + 64) + 16848LL) & 0x20) != 0) {
    v6 = CudaDriverRoutine_98340(v4);
    CudaDriverStub_107f90_alt3(v6 + 2056);
    v3 = 0;
    if (*(_BYTE*)(a1 + 944) != 0) {
    LABEL_16:
      v22 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 16));
      CudaDriverStub_108070_alt3(v22 + 2056);
      return v3;
    }
    v7 = (_QWORD*)CudaDriverData_1423360;
    CudaDriverStub_107f90_alt3(*(_QWORD*)CudaDriverData_1423360);
    v8 = *(__int64 (**)(__int64, _QWORD, __int64))(*v7 + 392LL);
    v9 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 16));
    v10 = v8(v9, *(_QWORD*)(a1 + 304), a1);
    v3 = v10;
    if (v10 != 0) {
    LABEL_14:
      CudaDriverStub_108070_alt3(*v7);
      if ((v3 | v10) == 0) {
        v20 = *(__int64 (**)(__int64))(*v7 + 424LL);
        v21 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 16));
        v3 = v20(v21);
      }
      goto LABEL_16;
    }
    if ((unsigned __int8)CudaDriverRoutine_1d9f90(
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 80LL)) == 0 ||
        (*(_BYTE*)(*(_QWORD*)((v11 = *(_QWORD*)(a1 + 16)) + 64) + 17068LL) &
         2) == 0 ||
        (*((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)CudaDriverData_1422118) &
         4) != 0) {
      v12 = *v7;
      v13 = *(_QWORD*)(*v7 + 48LL);
      if (v13 == 0) {
        v15 = *(__int64 (**)(__int64, __int64, _QWORD))(v12 + 392);
        v16 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 16));
        v17 = v15(v16, 2, 0);
        if (v17 != 0) {
          v3 = v17;
        LABEL_13:
          v18 = *(void (**)(__int64, _QWORD))(*v7 + 400LL);
          v19 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 16));
          v18(v19, *(_QWORD*)(a1 + 304));
          goto LABEL_14;
        }
        v12 = *v7;
      }
      *(_QWORD*)(v12 + 48) = v13 + 1;
      v11 = *(_QWORD*)(a1 + 16);
    }
    v14 = CudaDriverRoutine_98340(v11);
    v3 = CudaDriverStub_1a2960(*(_QWORD*)(v14 + 2072), *(_QWORD*)(a1 + 304), 1);
    if (v3 == 0) {
      *(_BYTE*)(a1 + 944) = 1;
      *a2 = 1;
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  return v3;
}

__int64 cuda_driver_126790(__int64 a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v6;
  _QWORD* v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  unsigned __int64 v21;

  v2 = *(_QWORD*)(a1 + 64);
  v21 = a2;
  if ((*(_WORD*)(v2 + 16848) & 0x20) == 0) {
    return 0;
  }
  v6 = CudaDriverRoutine_98340(a1);
  CudaDriverStub_107f90_alt3(v6 + 2056);
  if (CudaDriverRoutine_1a2980(*(int**)(a1 + 2072), a2) == 0) {
    goto LABEL_16;
  }
  CudaDriverRoutine_98340(a1);
  v8 = (_QWORD*)CudaDriverData_1423360;
  CudaDriverStub_107f90_alt3(*(_QWORD*)CudaDriverData_1423360);
  v9 = (*(__int64 (**)(__int64, unsigned __int64*, __int64))(*v8 + 408LL))(
      a1, &v21, 1);
  if (v9 == 0) {
    if ((unsigned __int8)CudaDriverRoutine_1d9f90(*(_QWORD*)(a1 + 80)) != 0 &&
        (*(_BYTE*)(*(_QWORD*)(a1 + 64) + 17068LL) & 2) != 0 &&
        (*((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)CudaDriverData_1422118) &
         4) == 0) {
      v11 = *v8;
    }
    else {
      v11 = *v8;
      v12 = *(_QWORD*)(*v8 + 48LL);
      v13 = v12 - 1;
      if (v12 == 1) {
        v18 = (*(__int64 (**)(__int64, __int64))(v11 + 400))(a1, 2);
        v11 = *v8;
        if (v18 != 0) {
          v19 = v18;
          v20 = CudaDriverRoutine_1a2980(*(int**)(v11 + 40), v21);
          (*(void (**)(__int64, unsigned __int64, __int64))(*v8 + 392LL))(
              a1, v21, v20);
          v9 = v19;
          goto LABEL_5;
        }
      }
      *(_QWORD*)(v11 + 48) = v13;
    }
    CudaDriverStub_108070_alt3(v11);
    v10 = (*(__int64 (**)(__int64))(*v8 + 424LL))(a1);
    if (v10 != 0) {
      goto LABEL_17;
    }
    CudaDriverStub_107f90_alt3(*v8);
    v15 = CudaDriverRoutine_1a2980(*(int**)(*v8 + 40LL), v21);
    CudaDriverStub_108070_alt3(*v8);
    if (v15 != 0) {
      CudaDriverRoutine_98340(*(_QWORD*)(v15 + 16));
      *(_BYTE*)(v15 + 944) = 0;
    }
    CudaDriverStub_1a2ae0(*(_QWORD*)(a1 + 2072), v21);
  LABEL_16:
    v10 = 0;
    goto LABEL_17;
  }
LABEL_5:
  v10 = v9;
  CudaDriverStub_108070_alt3(*v8);
LABEL_17:
  v16 = CudaDriverRoutine_98340(a1);
  CudaDriverStub_108070_alt3(v16 + 2056);
  return v10;
}

__int64 cuda_driver_127770(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  struct {
    __int64 v5;
    char v6;
  } v5_;

  if ((*(_WORD*)((_BYTE*)((_UNKNOWN*)0x1858LL) +
                 (_QWORD)CudaDriverData_1422118) &
       0x200) != 0) {
    v1 = result;
    v2 = (_QWORD*)CudaDriverData_1423360;
    CudaDriverStub_107f90_alt2(*(_QWORD*)CudaDriverData_1423360);
    v3 = (_QWORD*)CudaDriverStub_1a2ae0(*(_QWORD*)(*v2 + 448LL), v1);
    result = CudaDriverStub_108070_alt2(*v2);
    if (v3 != nullptr) {
      v4 = v3[5];
      v3[2] = 0;
      if (v4 != 0) {
        v5_.v5 = 0;
        v5_.v6 = 1;
        CudaDriverRoutine_1a2800(
            v4, (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_127550,
            (__int64)&v5_.v5);
        CudaDriverRoutine_1a2300(v3[5]);
        v3[5] = 0;
      }
      CudaDriverRoutine_107f60(v3);
      return CudaDriverRoutine_12e340((__int64)v3);
    }
  }
  return result;
}

__int64 cuda_driver_128950(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 21152LL))((void*)a1);
}

__int64 cuda_driver_128f20(unsigned __int64 a1, __int64 a2, __int64 a3,
                           unsigned __int64 a4)
{
  void* v8;
  __int64 result;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  bool v18;
  int v19;
  __int64* v20;

  v8 = CudaDriverData_1422118;
  result = CudaDriverRoutine_4cfb0(
      &v20, (unsigned int)(*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                                      (_QWORD)CudaDriverData_1422118) +
                           1));
  if ((_DWORD)result == 0) {
    CudaDriverRoutine_4d370(v20);
    v10 = a2 + a1;
    if (a1 >= a2 + a1) {
    LABEL_7:
      if (a4 != 0) {
        v16 = 0;
        v17 = 0;
        do {
          if ((unsigned __int8)CudaDriverRoutine_4d790((unsigned __int64*)v20,
                                                       v17) != 0) {
            if (v17 == *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v8)) {
              v19 = -1;
            }
            else {
              v19 = v17;
            }
            *(_DWORD*)(a3 + 4 * v16++) = v19;
          }
          v18 = v17++ >=
                *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v8);
          v18 = v18 || v16 >= a4;
        } while (!v18);
      }
    }
    else {
      v11 = (unsigned __int64*)v20;
      v12 = CudaDriverData_1423360;
      while (1) {
        v13 = CudaDriverRoutine_1a47a0(*(_QWORD*)(*(_QWORD*)v12 + 472LL), a1);
        if (v13 == 0) {
          break;
        }
        v14 = v13;
        v15 = CudaDriverStub_1a4c80();
        CudaDriverRoutine_4df00(v11, *(_QWORD**)(v15 + 40));
        if ((unsigned __int8)CudaDriverRoutine_4d7e0((unsigned __int64)v11) ==
            0) {
          break;
        }
        a1 += CudaDriverStub_12d100(v14);
        if (a1 >= v10) {
          goto LABEL_7;
        }
      }
    }
    CudaDriverRoutine_4d080(v20);
    return 0;
  }
  return result;
}

__int64 cuda_driver_12a100()
{
  __int64 result;

  result = CudaDriverData_143bd98;
  if (CudaDriverData_143bd98 != 0) {
    return CudaDriverStub_108070_alt3(CudaDriverData_143bd98);
  }
  return result;
}

long double cuda_driver_12b300(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 i;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  long double result;
  _OWORD* v34;
  struct {
    int v35;
    char gap12_[4];
    __int64 v36;
    __int64 v37;
  } v35_;

  v5 = *((unsigned int*)a1 + 14);
  v6 = *(_QWORD*)CudaDriverData_1423370;
  v7 = CudaDriverData_1422118;
  v8 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                        (_QWORD)CudaDriverData_1422118);
  if ((_DWORD)v8 != 0) {
    for (i = 0; i < v8; ++i) {
      v10 = v7[i + 35];
      if ((~*(unsigned __int16*)(v10 + 16848) & 0xC) == 0) {
        (*(void (**)(__int64, __int64*))(v10 + 20912))(v10, a1);
        v8 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v7);
      }
    }
    v11 = *((_DWORD*)a1 + 14);
  }
  else {
    v11 = *((_DWORD*)a1 + 14);
  }
  v12 = *a1;
  v13 = a1[1] - *a1;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x14CLL) +
                 *(__int64*)((char*)((__int64*)0x10LL) +
                             (_QWORD)CudaDriverData_14225e0)) != 0) {
    v35_.v36 = *a1;
    v35_.v37 = v13;
    v35_.v35 = 24;
    cuda_driver_20b420(2u, 0x53u, (__int64)&v35_.v35);
  }
  if ((v11 & 0xFFFFFFFD) != 0 ||
      *((_BYTE*)((_UNKNOWN*)0x1860LL) + (_QWORD)v7 + 2) == 0) {
    CudaDriverStub_57450(v12, v13, 2, a4);
    v15 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v7);
    if ((_DWORD)v15 == 0) {
      goto LABEL_22;
    }
  }
  else {
    CudaDriverStub_124f70(v12, v13);
    v15 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v7);
    if ((_DWORD)v15 == 0) {
      goto LABEL_22;
    }
  }
  v16 = v7 + 35;
  do {
    v18 = *v16++;
    v17 = v18;
    if ((*(_WORD*)(v18 + 16848) & 4) != 0) {
      (*(void (**)(__int64, __int64, __int64))(v17 + 21032))(v17, v12, v13);
    }
    --v15;
  } while (v15 != 0);
LABEL_22:
  v19 = a1[5];
  if (v19 != 0) {
    CudaDriverRoutine_1a2910(v19);
  }
  v20 = a1[3];
  if (v20 != 0) {
    CudaDriverRoutine_1a40e0(v20);
  }
  v21 = a1[4];
  if (v21 != 0) {
    CudaDriverRoutine_1a40e0(v21);
  }
  v22 = a1[6];
  v23 = v6 + 16 * v5;
  if (v22 != 0) {
    CudaDriverRoutine_1a4580(v22);
  }
  v24 = (unsigned int)(*(_DWORD*)(v23 + 16) - 1);
  *(_DWORD*)(v23 + 16) = v24;
  if ((_DWORD)v24 != 0) {
    v25 = (__int64*)(*(_QWORD*)(v23 + 24) + (v24 << 6));
    if (v25 != a1) {
      v26 = *((_OWORD*)v25 + 1);
      v27 = *((_OWORD*)v25 + 2);
      v28 = *((_OWORD*)v25 + 3);
      *(_OWORD*)a1 = *(_OWORD*)v25;
      *((_OWORD*)a1 + 1) = v26;
      *((_OWORD*)a1 + 2) = v27;
      *((_OWORD*)a1 + 3) = v28;
      LODWORD(v24) = *(_DWORD*)(v23 + 16);
    }
    v29 = 3 * v24;
    v30 = *(unsigned int*)(v23 + 20);
    if (v29 < (unsigned int)v30 && (unsigned int)v30 >= 0x202) {
      v31 = CudaDriverStub_12e550(*(_QWORD*)(v23 + 24),
                                  (32 * v30) & 0x1FFFFFFFC0LL);
      if (v31 != 0) {
        v32 = *(_DWORD*)(v23 + 20);
        *(_QWORD*)(v23 + 24) = v31;
        *(_DWORD*)(v23 + 20) = v32 >> 1;
      }
    }
  }
  v34 = (_OWORD*)(*(_QWORD*)(v23 + 24) +
                  ((unsigned __int64)*(unsigned int*)(v23 + 16) << 6));
  *v34 = (__typeof__(*v34)){0};
  v34[1] = (__typeof__(v34[1])){0};
  v34[2] = (__typeof__(v34[2])){0};
  v34[3] = (__typeof__(v34[3])){0};
  *(_OWORD*)&result = (__typeof__(*(_OWORD*)&result)){0};
  return result;
}

__int64 cuda_driver_12bf60(__int64 a1, __int64 a2)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 40);
  if (result != 0) {
    return CudaDriverStub_1a2ae0(result, a2);
  }
  return result;
}

__int64 cuda_driver_12c6e0(unsigned __int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int64* v6;
  __int64 v7;
  unsigned __int64* v8;
  __int64 v9;
  unsigned __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (__CFADD__(a1, a2)) {
    return 0;
  }
  v4 = *(_QWORD*)CudaDriverData_1423370;
  v5 = *(unsigned int*)(*(_QWORD*)CudaDriverData_1423370 + 16LL);
  if ((_DWORD)v5 == 0) {
  LABEL_11:
    v6 = nullptr;
    v7 = *(unsigned int*)(v4 + 32);
    if ((_DWORD)v7 == 0) {
      goto LABEL_17;
    }
    goto LABEL_12;
  }
  v6 = *(unsigned __int64**)(v4 + 24);
  while (*v6 > a1 || a1 >= v6[1]) {
    --v5;
    v6 += 8;
    if (v5 == 0) {
      goto LABEL_11;
    }
  }
  v7 = *(unsigned int*)(v4 + 32);
  if ((_DWORD)v7 != 0) {
  LABEL_12:
    v8 = *(unsigned __int64**)(v4 + 40);
    while (*v8 > a1 || a1 >= v8[1]) {
      --v7;
      v8 += 8;
      if (v7 == 0) {
        goto LABEL_17;
      }
    }
    v6 = v8;
  }
LABEL_17:
  v9 = *(unsigned int*)(v4 + 48);
  if ((_DWORD)v9 != 0) {
    v10 = *(unsigned __int64**)(v4 + 56);
    while (*v10 > a1 || a1 >= v10[1]) {
      --v9;
      v10 += 8;
      if (v9 == 0) {
        goto LABEL_23;
      }
    }
    v11 = a2;
    v6 = v10;
  }
  else {
  LABEL_23:
    v11 = a2;
    if (v6 == nullptr) {
      return 0;
    }
  }
  v12 = CudaDriverRoutine_1a47a0(v6[3], a1);
  if (v12 == 0) {
    return 0;
  }
  v13 = v12;
  if (CudaDriverStub_f0f50(v12) != a1) {
    return 0;
  }
  v14 = CudaDriverStub_12d100(v13);
  result = v13;
  if (v14 != v11) {
    return 0;
  }
  return result;
}

__int64 cuda_driver_12d6e0(__int64 a1, unsigned __int64* a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;

  v6 = CudaDriverRoutine_98340(a1);
  cuda_driver_1084c0(v6 + 24);
  v7 = *(_QWORD*)(a3 + 8);
  v8 = *(_DWORD*)(a1 + 8);
  if (v8 == 1) {
  LABEL_4:
    if (*a2 != 0) {
      v12 = 0;
      do {
        CudaDriverRoutine_1197e0(*(_QWORD*)(a2[2] + 8 * v12));
        *(_QWORD*)(a2[2] + 8 * v12++) = 0;
      } while (v12 < *a2);
    }
    v13 = 0;
    *a2 = 0;
    goto LABEL_19;
  }
  while (v8 != 3) {
    v9 = CudaDriverRoutine_98340(a1);
    v10 = CudaDriverRoutine_1085b0(v9 + 24);
    CudaDriverStub_12dc90(v10);
    v11 = CudaDriverRoutine_98340(a1);
    cuda_driver_1084c0(v11 + 24);
    v8 = *(_DWORD*)(a1 + 8);
    if (v8 == 1) {
      goto LABEL_4;
    }
  }
  v23 = 0;
  v24 = 0x3C00000000LL;
  v14 = CudaDriverStub_116790(&v23, a1, &v24);
  if (v14 != 0) {
  LABEL_16:
    v13 = v14;
  LABEL_17:
    v20 = v23;
    if (v23 == 0) {
      goto LABEL_19;
    }
  LABEL_18:
    CudaDriverRoutine_116fa0(v20);
    goto LABEL_19;
  }
  if (*a2 == 0) {
  LABEL_15:
    v14 = CudaDriverRoutine_114a80(v7, v23, 1);
    goto LABEL_16;
  }
  v15 = 0;
  while (1) {
    v16 = *(_QWORD*)(a2[2] + 8 * v15);
    CudaDriverStub_107f90_alt3(v16 + 592);
    v17 = v23;
    v18 = *(_QWORD*)(v16 + 8);
    if (v18 != 0) {
      v19 = CudaDriverRoutine_1bb6a0(
          *(_QWORD*)((char*)((_UNKNOWN*)0x248LL) + v23), v18);
      if (v19 != 0) {
        break;
      }
    }
    v13 = CudaDriverRoutine_1bb6a0(
        *(_QWORD*)((char*)((_UNKNOWN*)0x248LL) + v17), *(_QWORD*)(v16 + 584));
    CudaDriverStub_108070_alt3(v16 + 592);
    if (v13 != 0) {
      goto LABEL_17;
    }
    if (++v15 >= *a2) {
      goto LABEL_15;
    }
  }
  v13 = v19;
  CudaDriverStub_108070_alt3(v16 + 592);
  v20 = v23;
  if (v23 != 0) {
    goto LABEL_18;
  }
LABEL_19:
  *(_DWORD*)a3 = v13;
  v21 = CudaDriverRoutine_98340(a1);
  return CudaDriverRoutine_1085b0(v21 + 24);
}

__int64 cuda_driver_12e910() { return *(_QWORD*)CudaDriverData_14220a8; }

__int64 cuda_driver_12e920() { return *(_QWORD*)CudaDriverData_1421fd8[0]; }

bool cuda_driver_12ea30(int* a1)
{
  int v1;

  v1 = *a1;
  __builtin_arm_dmb(0xDu);
  return v1 == 2;
}

__int64 cuda_driver_12ea60(atomic_uint* a1, __int64 (*a2)(__int64), __int64 a3)
{
  int v3;
  __int64 result;
  atomic_uint* v7;
  int v8;
  int v9;
  int v10;

  v3 = *(_DWORD*)a1;
  __builtin_arm_dmb(0xDu);
  if (v3 == 2) {
    return 0;
  }
  v7 = a1;
  while (1) {
    v9 = 0;
    atomic_compare_exchange_strong(v7, (unsigned int*)&v9, 1u);
    if (v9 == 0) {
      break;
    }
    if (v9 != 2) {
      a1 = (atomic_uint*)CudaDriverStub_12dc90(a1);
    }
    v8 = *(_DWORD*)v7;
    __builtin_arm_dmb(0xDu);
    if (v8 == 2) {
      return 0;
    }
  }
  result = a2(a3);
  __builtin_arm_dmb(0xEu);
  if ((_DWORD)result != 0) {
    v10 = 0;
  }
  else {
    v10 = 2;
  }
  *(_DWORD*)v7 = v10;
  return result;
}

int* cuda_driver_1312a0(int* result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;

  v1 = *((_QWORD*)result + 89);
  *result = 0;
  if (v1 != 0) {
    do {
      v2 = *result;
      *(_DWORD*)v1 = v2;
      *result = v2 + 1;
      *(_QWORD*)&result[2 * v2 + 2] = v1;
      v1 = *(_QWORD*)(v1 + 22000);
    } while (v1 != 0);
    v3 = *result;
    v4 = (char*)CudaDriverData_1422118;
    *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)CudaDriverData_1422118) =
        *result;
    if (v3 != 0) {
      v5 = 0;
      do {
        v6 = 2 * v5;
        v7 = &v4[8 * v5++];
        *((_QWORD*)v7 + 35) = *(_QWORD*)&result[v6 + 2];
      } while (v5 < *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v4));
    }
  }
  else {
    CudaDriverData_1434ac0 = 0;
  }
  return result;
}

__int64 cuda_driver_131480(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 i;
  __int64 v11;

  v4 = *a1;
  v6 = CudaDriverData_1422118;
  v7 =
      *(_QWORD*)((char*)((_UNKNOWN*)0x1550LL) + (_QWORD)CudaDriverData_1422118);
  if (v7 != 0) {
    CudaDriverStub_57450(v7,
                         *(_QWORD*)((char*)((_UNKNOWN*)0x1558LL) +
                                    (_QWORD)CudaDriverData_1422118),
                         2, a4);
    *(_QWORD*)((char*)((_UNKNOWN*)0x1528LL) + (_QWORD)v6) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x1538LL) + (_QWORD)v6) = 0;
    *(_OWORD*)((char*)((_UNKNOWN*)0x1548LL) + (_QWORD)v6) =
        (__typeof__(*(_OWORD*)((char*)((_UNKNOWN*)0x1548LL) + (_QWORD)v6))){0};
  }
  while (*(_QWORD*)(v4 + 712) != 0) {
    v11 = *(_QWORD*)(v4 + 712);
    CudaDriverRoutine_12f300(&v11);
  }
  v8 = *(unsigned int*)((char*)((_UNKNOWN*)0x520LL) + (_QWORD)v6);
  if ((_DWORD)v8 != 0) {
    for (i = 0; i < v8; ++i) {
      v11 = v6[i + 100];
      if (v11 != 0) {
        CudaDriverRoutine_12f300(&v11);
        v8 = *(unsigned int*)((char*)((_UNKNOWN*)0x520LL) + (_QWORD)v6);
      }
    }
  }
  (*(void (**)(__int64, __int64, __int64, __int64))(
      (char*)((_UNKNOWN*)0x16F8LL) + (_QWORD)v6))(v4, a2, a3, a4);
  (*(void (**)(__int64))((char*)((_UNKNOWN*)0x16A8LL) + (_QWORD)v6))(v4);
  (*(void (**)(__int64))((char*)((_UNKNOWN*)0x1608LL) + (_QWORD)v6))(v4);
  (*(void (**)(__int64))((char*)((_UNKNOWN*)0x15B8LL) + (_QWORD)v6))(v4);
  (*(void (**)(__int64))((char*)((_UNKNOWN*)0x1658LL) + (_QWORD)v6))(v4);
  memset_plt(v4, 0, 728);
  CudaDriverRoutine_12e340(v4);
  *a1 = 0;
  return 0;
}

__int64 cuda_driver_132100(__int64 a1)
{
  unsigned int* v1;
  __int64 v2;
  int v4;
  __int64 result;
  struct {
    _DWORD v6[6];
    __int64 v7;
    __int64 v8;
  } v6_;
  _QWORD v9[3];

  if (a1 == 0) {
    return 5;
  }
  v1 = *(unsigned int**)(a1 + 8);
  if (v1 == nullptr || *(_QWORD*)(a1 + 16) == 0 || *(_QWORD*)(a1 + 32) == 0) {
    return 5;
  }
  v2 = *((_QWORD*)v1 + 1);
  v9[0] = *(_QWORD*)(a1 + 16);
  v9[1] = v2;
  v4 = (*((__int64 (**)(_QWORD*, _QWORD, _DWORD*,
                        _QWORD))CudaDriverData_1423090[*v1] +
          25))(v9, *(unsigned int*)(a1 + 24), v6_.v6, 0);
  if (v4 == 37) {
    result = 4;
  }
  else {
    result = 8;
  }
  if (v4 == 0) {
    result = 0;
    qmemcpy((void*)(*(_QWORD*)(a1 + 32) + 4LL), v6_.v6, 20);
    *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) = v6_.v7;
    *(_QWORD*)(*(_QWORD*)(a1 + 32) + 32LL) = v6_.v8;
  }
  return result;
}

__int64 cuda_driver_133dc0(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  int v5;
  __int64 v7;
  int v8;
  __int64 v9;

  if (CudaDriverData_14403d8 != 2) {
    if ((unsigned int)CudaDriverStub_12dd40((__int64)&CudaDriverData_14403d8, 1,
                                            0) != 0) {
      while (CudaDriverData_14403d8 == 1) {
        CudaDriverStub_12dca0(100);
      }
    }
    else {
      v2 = NvRmGpuLibOpen_plt(0);
      if (v2 != 0) {
        CudaDriverData_14403e0 = v2;
      }
      CudaDriverData_14403dc = v2 != 0;
      CudaDriverData_14403d8 = 2;
    }
  }
  if (CudaDriverData_14403dc != 1) {
    return 10;
  }
  v3 = *(_QWORD**)(a1 + 8);
  v4 = v3[1];
  if (v4 != 0) {
    if ((unsigned int)NvRmGpuRegOpsSessionGetTimeoutMode_plt(v4, &v8) != 0) {
      return 7;
    }
  }
  else {
    v7 = v3[3];
    v9 = 0;
    if (v7 != 0) {
      if ((unsigned int)NvRmGpuRegOpsSessionCreateForChannel_plt(v7, &v9) !=
          0) {
        return 7;
      }
    }
    else if ((unsigned int)NvRmGpuRegOpsSessionCreateChannelless_plt(
                 *v3, &v9) != 0) {
      return 7;
    }
    v3[1] = v9;
    if ((unsigned int)NvRmGpuRegOpsSessionGetTimeoutMode_plt(v9, &v8) != 0) {
      return 7;
    }
  }
  if (v8 == 1) {
    v5 = 0;
    goto LABEL_22;
  }
  if (v8 != 0) {
    return 7;
  }
  v5 = 1;
LABEL_22:
  *(_DWORD*)(a1 + 4) = v5;
  return 0;
}

__int64 cuda_driver_134300(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  _QWORD* v4;
  __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v8;
  int8x16_t v9;
  int8x16_t v10;
  __int64 v11;
  const double* v12;
  unsigned __int64 v13;
  const double* v14;
  int8x16_t v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  int v28;
  __int64 v29;
  unsigned int v30;
  unsigned __int64 v31;
  __int64 v32;
  int64x2_t v33;
  int8x16_t* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  int8x16_t v37;
  int8x16_t v38;
  int8x16_t v39;
  int8x16_t v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned int v46;
  unsigned __int64 v47;
  _QWORD v48[4];
  unsigned __int64 v49;
  __int64 v50;
  float64x2_t v51;
  float64x2_t v52;

  if (CudaDriverData_14403d8 != 2) {
    if ((unsigned int)CudaDriverStub_12dd40((__int64)&CudaDriverData_14403d8, 1,
                                            0) != 0) {
      while (CudaDriverData_14403d8 == 1) {
        CudaDriverStub_12dca0(100);
      }
    }
    else {
      v2 = NvRmGpuLibOpen_plt(0);
      if (v2 != 0) {
        CudaDriverData_14403e0 = v2;
      }
      CudaDriverData_14403dc = v2 != 0;
      CudaDriverData_14403d8 = 2;
    }
  }
  if (CudaDriverData_14403dc != 1) {
    return 10;
  }
  v3 = *(_DWORD*)(a1 + 16);
  if (v3 == 3) {
    return 3;
  }
  v4 = *(_QWORD**)(a1 + 8);
  if (v3 != 2) {
    if (v3 == 1 && v4[15] != 0) {
      result = NvRmGpuClockCloseAsyncReq_plt(*v4);
      if ((_DWORD)result == 0) {
        v4[15] = 0;
        return result;
      }
      if ((_DWORD)result != 4) {
        if ((_DWORD)result == 196623) {
          return 9;
        }
        return 7;
      }
    }
    return 5;
  }
  if (v4[15] != 0) {
    return 11;
  }
  if ((unsigned int)NvRmGpuClockGetDomains_plt(*v4, &v50, &v49) != 0 ||
      v49 == 0) {
    return 7;
  }
  if (v49 >= 5) {
    v9 = (__typeof__(v9)){0};
    v10 = (__typeof__(v10)){0};
    v11 = v49 & 3;
    if ((v49 & 3) == 0) {
      v11 = 4;
    }
    v12 = (const double*)(v50 + 88);
    v7 = v49 - v11;
    v13 = v7;
    do {
      v14 = v12 - 8;
      v52 = vld4q_f64(v12).val[0];
      v12 += 16;
      v13 -= 4LL;
      v51 = vld4q_f64(v14).val[0];
      v9 = vbslq_s8(vcgtq_u64(v51, v9), v51, v9);
      v10 = vbslq_s8(vcgtq_u64(v52, v10), v52, v10);
    } while (v13 != 0);
    v15 = vbslq_s8(vcgtq_u64(v9, v10), v9, v10);
    v16 = LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0];
    v8 =
        LANES64_OF(vbsl_s8(COERCE_AS(int8x8_t,
                                     vcgtd_u64(LANES128(v15).n128_u64[0], v16)),
                           COERCE_AS(int8x8_t, LANES128(v15).n128_u64[0]),
                           COERCE_AS(int8x8_t, v16)))
            .n64_u64[0];
  }
  else {
    v7 = 0;
    v8 = 0;
  }
  v17 = v49 - v7;
  v18 = (unsigned __int64*)(v50 + 32 * v7 + 24);
  do {
    v20 = *v18;
    v18 += 4;
    v19 = v20;
    if (v20 > v8) {
      v8 = v19;
    }
    --v17;
  } while (v17 != 0);
  v21 = 8 * v8;
  v22 = CudaDriverStub_12e330(8 * v8);
  v23 = (unsigned __int64*)v22;
  if (v22 != 0) {
    memset_plt(v22, 0, v21);
  }
  if (v49 != 0) {
    v24 = v50;
    v25 = 0;
    while (1) {
      v29 = 32 * v25;
      v30 = NvRmGpuClockGetPoints_plt(*v4, *(unsigned int*)(v24 + 32 * v25),
                                      v23, &v47);
      if (v30 != 0) {
        goto LABEL_59;
      }
      v31 = *v23;
      if (v47 >= 2) {
        if (v47 < 5) {
          v32 = 1;
        LABEL_51:
          v42 = v47 - v32;
          v43 = &v23[v32];
          do {
            v45 = *v43++;
            v44 = v45;
            if (v45 > v31) {
              v31 = v44;
            }
            --v42;
          } while (v42 != 0);
          goto LABEL_43;
        }
        v33 = vdupq_n_s64(v31);
        v34 = (int8x16_t*)(v23 + 3);
        v35 = (v47 - 1) & 0xFFFFFFFFFFFFFFFCLL;
        v32 = v35 | 1;
        v36 = v35;
        v37 = v33;
        do {
          v38 = v34[-1];
          v39 = *v34;
          v34 += 2;
          v36 -= 4LL;
          v33 = vbslq_s8(vcgtq_u64(v38, v33), v38, v33);
          v37 = vbslq_s8(vcgtq_u64(v39, v37), v39, v37);
        } while (v36 != 0);
        v40 = vbslq_s8(vcgtq_u64(v33, v37), v33, v37);
        v41 = LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0];
        v31 = LANES64_OF(
                  vbsl_s8(COERCE_AS(int8x8_t,
                                    vcgtd_u64(LANES128(v40).n128_u64[0], v41)),
                          COERCE_AS(int8x8_t, LANES128(v40).n128_u64[0]),
                          COERCE_AS(int8x8_t, v41)))
                  .n64_u64[0];
        if (v47 - 1 != v35) {
          goto LABEL_51;
        }
      }
    LABEL_43:
      v24 = v50;
      v26 = v49;
      v27 = &v48[2 * v25++];
      v28 = *(_DWORD*)(v50 + v29);
      v27[1] = v31;
      *(_DWORD*)v27 = v28;
      if (v25 >= v26) {
        goto LABEL_57;
      }
    }
  }
  v26 = 0;
LABEL_57:
  v30 = NvRmGpuClockSet_plt(*v4, v48, v26, v4 + 15);
  if (v30 == 0) {
    v30 = NvRmGpuClockWaitAsyncReq_plt(*v4, v4 + 15, 1, 0xFFFFFFFFLL);
  }
LABEL_59:
  v46 = v30;
  CudaDriverRoutine_12e340((__int64)v23);
  result = v46;
  if (v46 != 0) {
    if (v46 == 196623) {
      return 9;
    }
    if (v46 != 4) {
      return 7;
    }
    return 5;
  }
  return result;
}

__int64 cuda_driver_135e60(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  int v5;
  _DWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char v10;
  int32x4_t v11;
  int32x4_t v12;
  __int64 v13;
  unsigned __int32* v14;
  unsigned __int64 v15;
  int32x4_t v16;
  int32x4_t v17;
  unsigned __int32* v18;
  unsigned __int32* v19;
  unsigned __int32* v20;
  unsigned __int32* v21;
  int* v22;
  unsigned __int64 v23;
  int v24;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  if (CudaDriverData_14403d8 == 2) {
    goto LABEL_5;
  }
  if ((unsigned int)CudaDriverStub_12dd40((__int64)&CudaDriverData_14403d8, 1,
                                          0) != 0) {
    while (CudaDriverData_14403d8 == 1) {
      CudaDriverStub_12dca0(100);
    }
  LABEL_5:
    if (CudaDriverData_14403dc == 1) {
      goto LABEL_6;
    }
    return 10;
  }
  v26 = NvRmGpuLibOpen_plt(0);
  if (v26 != 0) {
    CudaDriverData_14403e0 = v26;
  }
  CudaDriverData_14403dc = v26 != 0;
  CudaDriverData_14403d8 = 2;
  if (v26 == 0) {
    return 10;
  }
LABEL_6:
  v2 = (_QWORD*)a1[1];
  if (v2[1] == 0) {
    v27 = v2[3];
    v28 = 0;
    if (v27 != 0) {
      if ((unsigned int)NvRmGpuRegOpsSessionCreateForChannel_plt(v27, &v28) !=
          0) {
        return 7;
      }
    }
    else if ((unsigned int)NvRmGpuRegOpsSessionCreateChannelless_plt(
                 *v2, &v28) != 0) {
      return 7;
    }
    v2[1] = v28;
    v3 = NvRmGpuDeviceGetInfo_plt(*v2);
    if (v3 != 0) {
      goto LABEL_8;
    }
    return 1;
  }
  v3 = NvRmGpuDeviceGetInfo_plt(*v2);
  if (v3 == 0) {
    return 1;
  }
LABEL_8:
  if (a1[2] != 0) {
    v4 = 0;
    while (1) {
      v6 = (_DWORD*)(a1[3] + 32 * v4);
      if (*v6 == 5) {
        break;
      }
      if (*v6 == 1) {
        v5 = *(_DWORD*)(v3 + 860);
      LABEL_11:
        v6[1] = 0;
        v6[2] = v5;
        if ((unsigned __int64)++v4 >= a1[2]) {
          return 0;
        }
      }
      else {
        v6[1] = 2;
        if ((unsigned __int64)++v4 >= a1[2]) {
          return 0;
        }
      }
    }
    if (*(_DWORD*)(v3 + 224) == 1) {
      v7 = *(_QWORD*)(v3 + 672);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v3 + 664);
        if (v7 >= 9) {
          v11 = (__typeof__(v11)){0};
          v12 = (__typeof__(v12)){0};
          v13 = *(_QWORD*)(v3 + 672) & 7LL;
          v14 = (unsigned __int32*)(v8 + 128);
          if ((v7 & 7) == 0) {
            v13 = 8;
          }
          v9 = v7 - v13;
          v15 = v9;
          do {
            LANES128(v16).n128_u32[0] = *(v14 - 32);
            LANES128(v17).n128_u32[0] = *v14;
            v18 = v14 - 16;
            v19 = v14 + 16;
            LANES128(v16).n128_u32[1] = *(v14 - 24);
            LANES128(v17).n128_u32[1] = v14[8];
            v20 = v14 - 8;
            v21 = v14 + 24;
            v15 -= 8LL;
            v14 += 64;
            LANES128(v16).n128_u32[2] = *v18;
            LANES128(v17).n128_u32[2] = *v19;
            LANES128(v16).n128_u32[3] = *v20;
            LANES128(v17).n128_u32[3] = *v21;
            v11 = vsubq_s32(v11, vceqzq_s32(v16));
            v12 = vsubq_s32(v12, vceqzq_s32(v17));
          } while (v15 != 0);
          v10 = vaddvq_s32(vaddq_s32(v12, v11));
        }
        else {
          v9 = 0;
          v10 = 0;
        }
        v22 = (int*)(v8 + 32 * v9);
        v23 = v7 - v9;
        do {
          v24 = *v22;
          v22 += 8;
          if (v24 == 0) {
            ++v10;
          }
          --v23;
        } while (v23 != 0);
      }
      else {
        v10 = 0;
      }
      v5 = ~(-1 << v10);
    }
    else {
      v5 = 1;
    }
    goto LABEL_11;
  }
  return 0;
}

__int64 cuda_driver_1378a0(__int64 a1) { return CudaDriverData_1430370(a1); }

__int64 cuda_driver_1378c0(__int64 a1) { return CudaDriverData_1430378(a1); }

__int64 cuda_driver_1378e0(__int64 a1) { return CudaDriverData_1430380(a1); }

__int64 cuda_driver_137940(__int64 a1) { return CudaDriverData_1430388(a1); }

bool cuda_driver_138980(int a1, int a2)
{
  _BOOL8 result;
  __int64 v6;
  int v7;
  int v8;

  result = false;
  if (a2 <= 3) {
    if (a2 > 1) {
      if (a2 == 2) {
        return *(_DWORD*)((char*)&CudaDriverRoutine_437c +
                          (_QWORD)CudaDriverData_1422118) != 0;
      }
      else {
        return *(_DWORD*)((char*)&CudaDriverRoutine_4360 +
                          (_QWORD)CudaDriverData_1422118) != 0;
      }
    }
    else if (a2 != 0) {
      if (a2 == 1) {
        return *(_DWORD*)((char*)&CudaDriverRoutine_4384 +
                          (_QWORD)CudaDriverData_1422118) != 0;
      }
    }
    else {
      return *(_DWORD*)((char*)&CudaDriverRoutine_4374 +
                        (_QWORD)CudaDriverData_1422118) != 0;
    }
  }
  else if (a2 <= 5) {
    if (a2 == 4) {
      return *(_DWORD*)((char*)&CudaDriverRoutine_438c +
                        (_QWORD)CudaDriverData_1422118) != 0;
    }
    else {
      return *(_DWORD*)((char*)&CudaDriverRoutine_4394 +
                        (_QWORD)CudaDriverData_1422118) != 0;
    }
  }
  else {
    switch (a2) {
    case 6:
      return *(_DWORD*)((char*)&CudaDriverRoutine_43a4 +
                        (_QWORD)CudaDriverData_1422118) != 0;
    case 7:
      if ((*((_BYTE*)&CudaDriverRoutine_747c + (_QWORD)CudaDriverData_1422118) &
           8) != 0) {
        v8 = 0;
        v6 = *((_QWORD*)CudaDriverData_1422118 + a1 + 35);
        v7 = (*(__int64 (**)(_QWORD, int*))(v6 + 21400))(*(_QWORD*)(v6 + 16864),
                                                         &v8);
        result = v7 == 0;
        if (v7 == 801) {
          CudaDriverRoutine_9aa00(v6);
          return false;
        }
      }
      else {
        return false;
      }
      break;
    case 8:
      return (*((_BYTE*)&CudaDriverRoutine_747c +
                (_QWORD)CudaDriverData_1422118) &
              0x10) != 0;
    default:
      break;
    }
  }
  return result;
}

__int64 cuda_driver_138b20(__int64 result)
{
  if ((_DWORD)result == 2) {
    return 801;
  }
  if ((_DWORD)result == 1) {
    *(_DWORD*)((char*)&CudaDriverRoutine_4434 +
               (_QWORD)CudaDriverData_1422118) = 1;
    return 0;
  }
  else if ((_DWORD)result != 0) {
    return 1;
  }
  else {
    *(_DWORD*)((char*)&CudaDriverRoutine_4434 +
               (_QWORD)CudaDriverData_1422118) = 0;
  }
  return result;
}

__int64 cuda_driver_138b90(unsigned int a1)
{
  if (a1 > 3) {
    return 1;
  }
  *(_DWORD*)((char*)&CudaDriverRoutine_4448 + (_QWORD)CudaDriverData_1422118) =
      a1;
  return 0;
}

__int64 cuda_driver_1394c0(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
  int v4;
  __int64 v6;
  _DWORD* v7;
  int v8;
  int v9;
  _DWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  int v35;
  unsigned __int64 i;
  unsigned int v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  char v50;
  unsigned int v51;
  unsigned __int64 v52;
  __int64 v53;

  v4 = *((_DWORD*)a2 + 3);
  v6 = a1;
  switch (v4) {
  case 4:
    v9 = *((_DWORD*)a2 + 2);
    v50 = 0;
    v7 = *(_DWORD**)(*(_QWORD*)(a1 + 2288) + 16LL);
    break;
  case 2:
    v7 = *(_DWORD**)(*(_QWORD*)(a1 + 2288) + 8LL);
    a2[2] *= 2;
    v9 = *((_DWORD*)a2 + 2) | (*((_DWORD*)a2 + 2) << 16);
    v50 = 1;
    *((_DWORD*)a2 + 2) = v9;
    *((_DWORD*)a2 + 3) = 1;
    break;
  case 1:
    v7 = *(_DWORD**)(*(_QWORD*)(a1 + 2288) + 8LL);
    v8 = *((_DWORD*)a2 + 2) | (*((_DWORD*)a2 + 2) << 8);
    v9 = v8 | (v8 << 16);
    *((_DWORD*)a2 + 2) = v9;
    v50 = 1;
    break;
  default:
    return 1;
  }
  v10 = *(_DWORD**)(a1 + 64);
  v11 = a2[4];
  v12 = *a2;
  v13 = (unsigned int)v10[958];
  v51 = v10[957];
  v52 = (unsigned int)v10[981];
  v14 = a2[2];
  v15 = a2[3];
  cuda_driver_103bd0(a1, a2, a3, a4, (v11 + v13 - 1) / v13, 0, 0, 0);
  if (v11 == 0) {
  LABEL_43:
    v35 = 0;
    goto LABEL_44;
  }
  if (v14 == 0) {
    for (i = 0; i < v11; i += v13)
      ;
    goto LABEL_43;
  }
  v16 = 0;
  v40 = v12;
  v41 = v11;
  v39 = v13;
  v49 = v15;
  v45 = v14;
  v46 = -(int)v52;
  v47 = v52 - 1;
  v17 = v51;
  while (2) {
    v18 = v11 - v16;
    v42 = v16;
    v19 = v12 + v16 * v15;
    v20 = 0;
    if (v18 >= v13) {
      v18 = v13;
    }
    v48 = v19;
    v43 = v17 | ((unsigned __int64)(unsigned int)v18 << 32);
    v44 = v18 << 32;
    do {
      v21 = v6;
      v22 = v14 - v20;
      v23 = (v14 - v20) >> 2;
      if ((v50 & 1) == 0) {
        v24 = v48 + 4 * v20;
        if (v23 <= v52) {
          v23 = v52;
        }
        if (v23 >= 0x200) {
          LODWORD(v23) = 512;
        }
        v31 = (v47 + (_DWORD)v23) & (unsigned int)v46;
        v27 = v31 | 0x100000000LL;
        v32 = (unsigned int)(4 * v31);
        v33 = v22 / v32;
        if (v22 / v32 <= 1) {
          LODWORD(v33) = 1;
        }
        if ((unsigned int)v33 > v17) {
          v30 = ((unsigned int)v33 - v17) * (unsigned int)v32;
          goto LABEL_30;
        }
        v29 = (unsigned int)v33;
      LABEL_33:
        v34 = v29 | v44;
        goto LABEL_34;
      }
      v24 = v20 + v48;
      v25 = v22 >> 4;
      if (v22 >> 4 <= v52) {
        v25 = v52;
      }
      if (v25 >= 0x200) {
        LODWORD(v25) = 512;
      }
      v26 = (v47 + (_DWORD)v25) & (unsigned int)v46;
      v27 = v26 | 0x100000000LL;
      v28 = (unsigned int)(4 * v26);
      v29 = v23 / v28;
      if (v29 <= 1) {
        LODWORD(v29) = 1;
      }
      if (v17 >= (unsigned int)v29) {
        v29 = (unsigned int)v29;
        goto LABEL_33;
      }
      v30 = 4LL * ((unsigned int)v29 - v17) * (unsigned int)v28;
    LABEL_30:
      v34 = v43;
      v22 -= v30;
    LABEL_34:
      v35 = CudaDriverRoutine_1398c0(v7, v24, v34, 1, v27, 1u, v9, v22, v49, a3,
                                     1);
      if (v35 != 0 ||
          (v53 = 0, CudaDriverRoutine_205ee0(0, a3, (__int64)&v53, nullptr, 2),
           v53 =
               (*(__int64 (**)(__int64))(*(_QWORD*)(v21 + 64) + 19184LL))(v53),
           CudaDriverRoutine_206060(a3, v53),
           (v35 = CudaDriverRoutine_1398c0(v7, v24, v34, 1, v27, 1u, v9, v22,
                                           v49, a3, 2)) != 0)) {
        v6 = v21;
        goto LABEL_44;
      }
      CudaDriverRoutine_205ee0(0, a3, (__int64)&v53, nullptr, 2);
      v53 = (*(__int64 (**)(__int64))(*(_QWORD*)(v21 + 64) + 19184LL))(v53);
      CudaDriverRoutine_206060(a3, v53);
      v14 = v45;
      v17 = v51;
      v20 += v22;
      v6 = v21;
    } while (v20 < v45);
    v13 = v39;
    v12 = v40;
    v11 = v41;
    v35 = 0;
    v16 = v42 + v39;
    v15 = v49;
    if (v42 + v39 < v41) {
      continue;
    }
    break;
  }
LABEL_44:
  v38 = v35;
  cuda_driver_103d10(v6, a3, v35, 0, 0, 0, 0);
  return v38;
}

__int64 cuda_driver_194b20(int* a1, char a2)
{
  _BOOL4 v5;
  int v6;
  int v7;
  bool v8;
  struct {
    int v10[6];
    __int64 v11;
    __int64 v12;
  } v10_;

  cuda_driver_194c50(v10_.v10, a1, a2);
  if (v10_.v10[0] == 3 && v10_.v11 == 1) {
    v5 = v10_.v12 != 1;
    v6 = *a1;
    if ((unsigned int)(*a1 - 1) < 2) {
      goto LABEL_8;
    }
  }
  else {
    v5 = true;
    v6 = *a1;
    if ((unsigned int)(*a1 - 1) < 2) {
      goto LABEL_8;
    }
  }
  if (v6 != 0 || a2 != 0 ||
      (unsigned int)(*(_DWORD*)(*((_QWORD*)a1 + 1) + 8LL) - 4) < 0xFFFFFFFD) {
    goto LABEL_17;
  }
LABEL_8:
  v7 = a1[50];
  if ((unsigned int)(v7 - 1) < 2) {
    v8 = true;
    if (v5) {
      goto LABEL_18;
    }
    return 1;
  }
  if (v7 != 0 || a2 != 0) {
  LABEL_17:
    v8 = false;
    if (v5) {
      goto LABEL_18;
    }
    return 1;
  }
  v8 = (unsigned int)(*(_DWORD*)(*((_QWORD*)a1 + 26) + 8LL) - 1) < 3;
  if (!v5) {
    return 1;
  }
LABEL_18:
  if (v10_.v10[1] == 3) {
    return ((*(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 +
                       (_QWORD)CudaDriverData_1422118) &
             0x300) != 0) &
           (unsigned __int8)v8;
  }
  else {
    return 0;
  }
}

__int64 cuda_driver_194c50(int* a1, int* a2, char a3)
{
  unsigned int v27;
  int* v6;
  int* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  __int64 v26;

  *((_OWORD*)a1 + 1) = (__typeof__(*((_OWORD*)a1 + 1))){0};
  *((_OWORD*)a1 + 2) = (__typeof__(*((_OWORD*)a1 + 2))){0};
  *((_OWORD*)a1 + 4) = (__typeof__(*((_OWORD*)a1 + 4))){0};
  *((_OWORD*)a1 + 5) = (__typeof__(*((_OWORD*)a1 + 5))){0};
  *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
  *((_OWORD*)a1 + 3) = (__typeof__(*((_OWORD*)a1 + 3))){0};
  v6 = a1 + 12;
  v7 = a2 + 50;
  *a1 = CudaDriverData_121fac0[3 * (*a2 != 0) + (a2[50] != 0)];
  v8 = *((_QWORD*)a2 + 50);
  *((_QWORD*)a1 + 2) = v8;
  v9 = *((_QWORD*)a2 + 51);
  if (v9 <= 1) {
    v9 = 1;
  }
  *((_QWORD*)a1 + 3) = v9;
  v10 = *((_QWORD*)a2 + 52);
  a1[1] = 0;
  if (v10 <= 1) {
    v10 = 1;
  }
  *((_QWORD*)a1 + 4) = v10;
  CudaDriverRoutine_195dc0(v6, (__int64)a2, v8);
  result = CudaDriverRoutine_195dc0((_QWORD*)a1 + 9, (__int64)v7,
                                    *((_QWORD*)a1 + 2));
  v12 = a1[16];
  if (v12 == 0) {
    goto LABEL_12;
  }
  if (v12 != 2) {
    v13 = a1[22];
  LABEL_10:
    if (v13 != 0) {
      v15 = 1;
      v14 = 1;
      goto LABEL_13;
    }
  LABEL_12:
    v14 = 0;
    v15 = 0;
    goto LABEL_13;
  }
  v13 = a1[22];
  if (v13 != 2) {
    goto LABEL_10;
  }
  v14 = 2;
  v15 = 2;
LABEL_13:
  a1[10] = v14;
  v16 = *a2;
  if ((unsigned int)(*a2 - 1) >= 2 &&
      (v16 != 0 || a3 != 0 ||
       (unsigned int)(*(_DWORD*)(*((_QWORD*)a2 + 1) + 8LL) - 4) < 0xFFFFFFFD)) {
    return result;
  }
  v17 = *v7;
  if ((unsigned int)(*v7 - 1) < 2) {
    if ((*(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 +
                   (_QWORD)CudaDriverData_1422118) &
         0x300) == 0) {
      return result;
    }
  LABEL_16:
    if (*((_QWORD*)a1 + 4) <= 1u) {
      if (*((_QWORD*)a1 + 3) <= 1u) {
        v18 = 1;
      }
      else {
        v18 = 2;
      }
      if ((v16 | v17) != 0) {
      LABEL_18:
        if (v16 != 0) {
          if (v17 != 0) {
          LABEL_48:
            v25 = *a1;
            v26 = *((_QWORD*)a1 + 2);
            a1[2] = v18;
            a1[1] =
                CudaDriverData_121fae4[18 * v25 + 6 * (unsigned int)(v18 - 1) +
                                       2 * v15 + ((v26 & 3) == 0)];
            return result;
          }
          v19 = *(_DWORD*)(*((_QWORD*)a2 + 26) + 8LL) - 1;
          if (v19 >= 7) {
          LABEL_21:
            v18 = 0;
            goto LABEL_48;
          }
        }
        else {
          v19 = *(_DWORD*)(*((_QWORD*)a2 + 1) + 8LL) - 1;
          if (v19 >= 7) {
            goto LABEL_21;
          }
        }
        v18 = CudaDriverData_121fc04[v19];
        goto LABEL_48;
      }
    }
    else {
      v18 = 3;
      if ((v16 | v17) != 0) {
        goto LABEL_18;
      }
    }
    v21 = *(_DWORD*)(*((_QWORD*)a2 + 1) + 8LL) - 1;
    if (v21 > 6) {
      v22 = 0;
      v23 = *(_DWORD*)(*((_QWORD*)a2 + 26) + 8LL) - 1;
      if (v23 > 6) {
        goto LABEL_40;
      }
    }
    else {
      v22 = CudaDriverData_121fc04[v21];
      v23 = *(_DWORD*)(*((_QWORD*)a2 + 26) + 8LL) - 1;
      if (v23 > 6) {
      LABEL_40:
        v24 = 0;
        goto LABEL_45;
      }
    }
    v24 = CudaDriverData_121fc04[v23];
  LABEL_45:
    if (v22 >= v24) {
      v18 = v24;
    }
    else {
      v18 = v22;
    }
    goto LABEL_48;
  }
  if (v17 == 0 && a3 == 0) {
    v27 = *(_DWORD*)(*((_QWORD*)a2 + 26) + 8LL);
    __asm__ volatile("" ::"r"(v27));
    if ((*(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 +
                   (_QWORD)CudaDriverData_1422118) &
         0x300) != 0 &&
        v27 - 1 < 3) {
      goto LABEL_16;
    }
  }
  return result;
}

unsigned __int64 cuda_driver_195f00(__int64* a1, __int64 a2)
{
  __int64 v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  int v16;

  v16 = CudaDriverRoutine_5e000(a1[1]);
  v4 = a1[1];
  v5 = *(_DWORD*)(*(_QWORD*)(v4 + 64) + 14472LL);
  v6 = cuda_driver_5e0a0(v4);
  v7 = CudaDriverRoutine_5e0f0(a1[1]);
  v8 = (*(__int64 (**)(void*))(*(_QWORD*)(a1[1] + 64) + 20856LL))((void*)a1[1]);
  v9 = *((unsigned __int8*)&CudaDriverRoutine_4454 +
         (_QWORD)CudaDriverData_1422118);
  v10 = *(_DWORD*)((char*)&CudaDriverRoutine_4458 +
                   (_QWORD)CudaDriverData_1422118);
  v11 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v12 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  v13 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, a2);
  if (v9 != 0) {
    v14 = v10;
  }
  else {
    v14 = v8;
  }
  return (v11 + (8 * (unsigned __int64)v14 - 1 + v12) / v13 * v13 - v12) *
         (unsigned int)(v16 + v6 * v5 + v7);
}

__int64 cuda_driver_1964d0(__int64* a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;

  v2 = *(_QWORD*)(*(_QWORD*)*a1 + 8LL);
  if (*(_QWORD*)(*a1 + 33768) != 0) {
    CudaDriverRoutine_196560(a1);
  }
  cuda_driver_98c30(v2);
  v3 = (_QWORD*)a1[6];
  if (v3 != nullptr) {
    CudaDriverRoutine_1ff080(v3);
  }
  v4 = (_QWORD*)a1[5];
  if (v4 != nullptr) {
    CudaDriverRoutine_1ff080(v4);
  }
  v5 = a1[4];
  if (v5 != 0) {
    CudaDriverRoutine_12e340(v5);
    a1[4] = 0;
  }
  if (a1[3] != 0) {
    CudaDriverStub_1db190(a1 + 3);
  }
  CudaDriverRoutine_12e340(a1[8]);
  return CudaDriverRoutine_12e340((__int64)a1);
}

__int64 cuda_driver_1966b0(__int64 a1, char a2)
{
  if (((a2 & 1) == 0 || *(_DWORD*)((char*)&CudaDriverRoutine_4450 +
                                   (_QWORD)CudaDriverData_1422118) != 0) &&
      *(_QWORD*)(a1 + 48) != 0) {
    return *(_QWORD*)(a1 + 48);
  }
  else {
    return *(_QWORD*)(a1 + 40);
  }
}

bool cuda_driver_1968d0(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  _BOOL8 result;

  v4 = *(_QWORD*)(a1 + 48);
  v5 = *(_QWORD*)(v4 + 64) + 56LL * *(unsigned int*)(v4 + 72);
  if ((a4 & 1) != 0 && *(_DWORD*)((char*)&CudaDriverRoutine_4450 +
                                  (_QWORD)CudaDriverData_1422118) == 0 ||
      (v6 = *(_QWORD*)(v4 + 48)) == 0) {
    v6 = *(_QWORD*)(v4 + 40);
  }
  v7 = a3 + a2 - *(_DWORD*)(v5 + 16) - CudaDriverRoutine_1ff5f0(*(_QWORD**)v5);
  result = CudaDriverRoutine_1ff750(v6, v7);
  if (result) {
    *(_DWORD*)(v5 + 32) = v7;
  }
  return result;
}

long double cuda_driver_196b50(__int64 a1)
{

#pragma clang fp contract(off)
  _DWORD* v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  __int64* v7;
  __int128 v8;
  __int128 v9;
  unsigned int v10;
  __int64* v11;
  __int64 v12;
  void (*v13)(__int64, _QWORD, _QWORD, _QWORD);
  __int64 v14;
  void (*v15)(__int64, __int64, __int64, __int64);
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  unsigned int v26;
  __int64 v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  _DWORD* v31;
  __int64 v32;
  unsigned int v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  long double result;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  struct {
    int v42;
    int v43;
    __int64 v44;
    __int128 v45;
    __int128 v46;
    __int128 v47;
  } v42_;

  v2 = *(_DWORD**)a1;
  v3 = *(_DWORD*)(a1 + 72);
  v4 = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
  v5 = *(_QWORD*)(a1 + 64);
  v6 = CudaDriverData_1422118;
  v7 = (__int64*)(v5 + 56LL * v3);
  if (*(_BYTE*)(a1 + 84) == 0) {
    v10 = *(_DWORD*)(a1 + 72);
    if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_14321c0) != 0) {
      goto LABEL_12;
    }
  LABEL_5:
    v15 = *(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)(v4 + 64) +
                                                           19032LL);
    if (!CudaDriverRoutine_5c230((__int64)v2)) {
      goto LABEL_15;
    }
  LABEL_6:
    v19 = *(_QWORD*)(a1 + 32);
    v20 = *v7;
    v21 = 8 * v10;
    if (*v7 == 0) {
      goto LABEL_16;
    }
  LABEL_7:
    v22 = CudaDriverStub_1ff640(v20);
    v23 = v7[2];
    v24 = *((unsigned int*)v7 + 7);
    if (*((_BYTE*)&CudaDriverRoutine_43d8 + (_QWORD)v6) == 0) {
      goto LABEL_17;
    }
    goto LABEL_8;
  }
  v8 = *(_OWORD*)v7;
  v9 = *((_OWORD*)v7 + 2);
  v10 = (v3 + 1) % *(_DWORD*)(a1 + 8);
  v11 = (__int64*)(v5 + 56LL * v10);
  v12 = v7[6];
  *((_OWORD*)v11 + 1) = *((_OWORD*)v7 + 1);
  *((_OWORD*)v11 + 2) = v9;
  *(_OWORD*)v11 = v8;
  v11[6] = v12;
  v7[2] = 0;
  *v7 = 0;
  *((_DWORD*)v7 + 7) = 0;
  v7[5] = CudaDriverRoutine_5c030(*(_QWORD*)a1 + 33736LL);
  v13 = *(void (**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)(v4 + 64) +
                                                      19032LL);
  if (CudaDriverRoutine_5c230(*(_QWORD*)a1)) {
    v14 = *(_QWORD*)(a1 + 32);
  }
  else {
    v14 = CudaDriverStub_1dbab0(*(_QWORD*)(a1 + 24));
  }
  v13(v14 + 8 * v3, *(_QWORD*)(a1 + 88), *(unsigned int*)(a1 + 96),
      *((unsigned __int8*)&CudaDriverRoutine_43d8 + (_QWORD)v6));
  v2 = *(_DWORD**)a1;
  *(_BYTE*)(a1 + 84) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v7 = v11;
  *(_DWORD*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 72) = v10;
  if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_14321c0) == 0) {
    goto LABEL_5;
  }
LABEL_12:
  v42_.v42 = 64;
  v42_.v46 = (__typeof__(v42_.v46)){0};
  v42_.v47 = (__typeof__(v42_.v47)){0};
  v42_.v45 = (__typeof__(v42_.v45)){0};
  v42_.v44 = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
  v26 = *((_DWORD*)v7 + 7);
  if (v26 != 0) {
    v27 = CudaDriverRoutine_1ff5f0((_QWORD*)*v7) + v7[2];
    v2 = *(_DWORD**)a1;
    *(_QWORD*)&v42_.v45 = v27;
    v26 = *((_DWORD*)v7 + 7);
  }
  *((_QWORD*)&v42_.v45 + 1) = __PAIR64__(v2[24], v26);
  v28 = CudaDriverStub_5bb90(v2);
  v29 = *(_DWORD*)(a1 + 8);
  v30 = *(_DWORD*)(a1 + 72) + v29 - 1;
  *((_QWORD*)&v42_.v46 + 1) = *(_QWORD*)(a1 + 76);
  LODWORD(v42_.v46) = v28;
  DWORD1(v42_.v46) = v30 % v29;
  v42_.v43 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 33824LL) + 16LL);
  cuda_driver_20b420(0x12u, 1u, (__int64)&v42_.v42);
  v15 = *(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)(v4 + 64) +
                                                         19032LL);
  if (CudaDriverRoutine_5c230(*(_QWORD*)a1)) {
    goto LABEL_6;
  }
LABEL_15:
  v19 = CudaDriverStub_1dbab0(*(_QWORD*)(a1 + 24));
  v20 = *v7;
  v21 = 8 * v10;
  if (*v7 != 0) {
    goto LABEL_7;
  }
LABEL_16:
  v22 = v7[1];
  v23 = v7[2];
  v24 = *((unsigned int*)v7 + 7);
  if (*((_BYTE*)&CudaDriverRoutine_43d8 + (_QWORD)v6) == 0) {
  LABEL_17:
    v15(v19 + v21, v23 + v22, v24, v7[3] & 1);
    v25 = (_QWORD*)*v7;
    if (*v7 == 0) {
      goto LABEL_23;
    }
    goto LABEL_18;
  }
LABEL_8:
  v15(v19 + v21, v23 + v22, v24, 1);
  v25 = (_QWORD*)*v7;
  if (*v7 == 0) {
    goto LABEL_23;
  }
LABEL_18:
  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_14321c0) !=
      0) {
    v31 = *(_DWORD**)a1;
    v42_.v42 = 64;
    v42_.v46 = (__typeof__(v42_.v46)){0};
    v42_.v47 = (__typeof__(v42_.v47)){0};
    v42_.v45 = (__typeof__(v42_.v45)){0};
    v42_.v44 = *(_QWORD*)(*(_QWORD*)v31 + 8LL);
    if (*((_DWORD*)v7 + 7) != 0) {
      v32 = CudaDriverRoutine_1ff5f0(v25) + v7[2];
      v31 = *(_DWORD**)a1;
      *(_QWORD*)&v42_.v45 = v32;
      v33 = *((_DWORD*)v7 + 7);
    }
    else {
      v33 = 0;
    }
    *((_QWORD*)&v42_.v45 + 1) = __PAIR64__(v31[24], v33);
    v34 = CudaDriverStub_5bb90(v31);
    v35 = *(_DWORD*)(a1 + 80);
    v36 = *(_QWORD*)(a1 + 72);
    LODWORD(v42_.v46) = v34;
    DWORD3(v42_.v46) = v35;
    v37 = *(_QWORD*)a1;
    *(_QWORD*)((char*)&v42_.v46 + 4) = v36;
    v42_.v43 = *(_DWORD*)(*(_QWORD*)(v37 + 33824) + 16LL);
    cuda_driver_20b420(0x12u, 2u, (__int64)&v42_.v42);
  }
LABEL_23:
  v7[5] = CudaDriverRoutine_5c030(*(_QWORD*)a1 + 33736LL);
  v39 = (unsigned int)(*(_DWORD*)(a1 + 72) + 1) % *(_DWORD*)(a1 + 8);
  v40 = *(_QWORD*)(a1 + 64);
  *(_DWORD*)(a1 + 72) = v39;
  v41 = v40 + 56LL * v39;
  *(_OWORD*)v41 = (__typeof__(*(_OWORD*)v41)){0};
  *(_OWORD*)(v41 + 16) = (__typeof__(*(_OWORD*)(v41 + 16))){0};
  *(_OWORD*)(v41 + 32) = (__typeof__(*(_OWORD*)(v41 + 32))){0};
  *(_QWORD*)(v41 + 48) = 0;
  *(_OWORD*)&result = (__typeof__(*(_OWORD*)&result)){0};
  return result;
}

__int64 cuda_driver_196ed0(__int64 result, int a2, bool* a3)
{
  unsigned int* v3;
  _QWORD* v4;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  bool v14;
  struct {
    _DWORD v15[2];
    __int64 v16;
    __int64 v17;
    unsigned int v18;
    int v19;
    int v20;
    unsigned int v21;
    __int64 v22;
  } v15_;

  v3 = *(unsigned int**)(result + 48);
  v4 = (_QWORD*)(*((_QWORD*)v3 + 8) + 56LL * v3[18]);
  if (*v4 != 0) {
    v6 = result + 0x8000;
    v7 = a2 - *((_DWORD*)v4 + 4) - CudaDriverRoutine_1ff5f0((_QWORD*)*v4);
    CudaDriverRoutine_1ff6e0(*v4, v7 - *((_DWORD*)v4 + 7));
    *((_DWORD*)v4 + 7) = v7;
    if (*(_DWORD*)((char*)((__int64*)0x10LL) + (_QWORD)CudaDriverData_14321c0 +
                   4) != 0) {
      v15_.v17 = 0;
      v15_.v15[0] = 48;
      v8 = *(_QWORD*)v3;
      v15_.v16 = *(_QWORD*)(**(_QWORD**)v3 + 8LL);
      if (v7 != 0) {
        v15_.v17 = CudaDriverRoutine_1ff5f0((_QWORD*)*v4) + v4[2];
        v8 = *(_QWORD*)v3;
      }
      v9 = *(_DWORD*)(v8 + 96);
      v15_.v18 = v7;
      v15_.v19 = v9;
      v15_.v20 = CudaDriverStub_5bb90(v8);
      v10 = v3[2];
      v11 = v3[18] + v10;
      v15_.v22 = *(_QWORD*)(v3 + 19);
      v15_.v21 = (v11 - 1) % v10;
      v15_.v15[1] = *(_DWORD*)(*(_QWORD*)(v6 + 1056) + 16LL);
      cuda_driver_20b420(0x12u, 5u, (__int64)v15_.v15);
      v7 = *((_DWORD*)v4 + 7);
    }
    v12 = *(_DWORD*)(v6 + 1400);
    result = CudaDriverStub_102370(*v4);
    v14 = v7 >= v12 ||
          result - (unsigned __int64)*(unsigned int*)(*v4 + 32LL) < 0x18000;
    *a3 = v14;
  }
  return result;
}

__int64 cuda_driver_unplaced_8_197020(__int64* a1)
{
  __int64 v1;
  unsigned int v2;
  __int64* v3;
  __int64 v4;
  unsigned int v5;
  _QWORD** v6;
  unsigned int v7;
  unsigned int v8;
  bool v9;
  unsigned int v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 result;
  unsigned int v35;
  __int64 v36;
  int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  struct {
    __int64* v45;
    unsigned int v46;
    _QWORD v47[128];
    char v49;
    struct {
      int v50;
      int v51;
      __int64 v52;
      __int64 v53;
      int v54;
      int v55;
      int v56;
      unsigned int v57;
      __int64 v58;
      __int64 v59;
      int v60;
      int v61;
      char gap64_[1472];
    } v50_;
  } v45_;
  _QWORD v62[6];

  v1 = *a1;
  v45_.v45 = a1;
  v45_.v46 = 0;
  v45_.v49 = 0;
  if (v1 == 0) {
    return 0;
  }
  v2 = 0;
  do {
    v3 = *(__int64**)(v1 + 48);
    v4 = v1 + 0x8000;
    v5 = v2;
    v6 = (_QWORD**)(v3[8] + 56LL * *((unsigned int*)v3 + 18));
    if (*((_DWORD*)v6 + 7) != 0) {
      cuda_driver_196b50(*(_QWORD*)(v1 + 48));
      v8 = *((_DWORD*)v3 + 18);
      v7 = *((_DWORD*)v3 + 19);
      v9 = v8 >= v7;
      v10 = v8 - v7;
      if (!v9) {
        v10 += *((_DWORD*)v3 + 2);
      }
      if (v10 != 0) {
        v11 = &v45_.v47[2 * v2++];
        v45_.v46 = v5 + 1;
        *v11 = v3;
        *((_DWORD*)v11 + 2) = v7;
        *((_DWORD*)v11 + 3) = v10;
        if (*(_BYTE*)(v1 + 33188) != 0) {
          *(_BYTE*)(v1 + 33188) = 0;
          v45_.v49 = 1;
        }
        CudaDriverRoutine_5c060(v1 + 33736);
        *((_DWORD*)v3 + 19) = *((_DWORD*)v3 + 18);
        if (CudaDriverRoutine_5adc0(v1) && *(_DWORD*)(v1 + 32) == 0) {
          v12 = CudaDriverRoutine_5f0d0((unsigned int*)v1);
          v13 = *(_QWORD*)(v12 + 48);
          if (*(_DWORD*)(*(_QWORD*)(v13 + 64) +
                         56LL * *(unsigned int*)(v13 + 72) + 28) != 0) {
            v14 = v12;
            cuda_driver_196b50(*(_QWORD*)(v12 + 48));
            v16 = *(_DWORD*)(v13 + 72);
            v15 = *(_DWORD*)(v13 + 76);
            v9 = v16 >= v15;
            v17 = v16 - v15;
            if (!v9) {
              v17 += *(_DWORD*)(v13 + 8);
            }
            if (v17 != 0) {
              v18 = &v45_.v47[2 * v2];
              v2 = v5 + 2;
              v45_.v46 = v5 + 2;
              *v18 = v13;
              *((_DWORD*)v18 + 2) = v15;
              *((_DWORD*)v18 + 3) = v17;
              if (*(_BYTE*)(v14 + 33188) != 0) {
                *(_BYTE*)(v14 + 33188) = 0;
                v45_.v49 = 1;
              }
              CudaDriverRoutine_5c060(v14 + 33736);
              *(_DWORD*)(v13 + 76) = *(_DWORD*)(v13 + 72);
            }
          }
        }
      }
    }
    v1 = *(_QWORD*)(v4 + 1064);
  } while (v1 != 0);
  if (v2 == 0) {
    return 0;
  }
  if (*(_DWORD*)((char*)((__int64*)0x18LL) + (_QWORD)CudaDriverData_14321c0) !=
      0) {
    memset(v62, 0, 32);
    memset_plt_alt1((__int64)&v45_.v50_.v50, 0, 0x600u);
    v19 = 0;
    LODWORD(v62[0]) = 32;
    v62[1] = *(_QWORD*)(**(_QWORD**)v45_.v47[0] + 8LL);
    v62[2] = &v45_.v50_.v50;
    v20 = &v45_.v50_.v52;
    v21 = (__int64*)&v45_.v47[1];
    do {
      v22 = (_QWORD*)*(v21 - 1);
      v23 = *v21;
      v21 += 2;
      v24 = *(_DWORD*)(*v22 + 24LL);
      *v20 = v23;
      *((_DWORD*)v20 - 1) = v24;
      v20[1] = CudaDriverStub_1db800(v22[3]);
      ++v19;
      v20 += 3;
    } while (v19 < v2);
    LODWORD(v62[3]) = v2;
    cuda_driver_20b420(0x12u, 6u, (__int64)v62);
  }
  if (*((_BYTE*)&CudaDriverRoutine_4488 + (_QWORD)CudaDriverData_1422118) !=
      0) {
    CudaDriverRoutine_1ff780(*(_QWORD*)((char*)&CudaDriverRoutine_44d0 +
                                        (_QWORD)CudaDriverData_1422118),
                             (__int64)&v45_.v45);
  }
  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_14321c0 +
                 4) != 0) {
    v45_.v50_.v53 = 0;
    v45_.v50_.v50 = 64;
    v25 = *v3;
    v45_.v50_.v52 = *(_QWORD*)(*(_QWORD*)*v3 + 8LL);
    v26 = *((_DWORD*)v6 + 7);
    if (v26 != 0) {
      v45_.v50_.v53 = (__int64)v6[2] + CudaDriverRoutine_1ff5f0(*v6);
      v26 = *((_DWORD*)v6 + 7);
      v25 = *v3;
    }
    v27 = *(_DWORD*)(v25 + 96);
    v45_.v50_.v54 = v26;
    v45_.v50_.v55 = v27;
    v45_.v50_.v56 = CudaDriverStub_5bb90(v25);
    v28 = *((_DWORD*)v3 + 2);
    v29 = (v28 - 1 + *((_DWORD*)v3 + 18)) % v28;
    LODWORD(v45_.v50_.v58) = (*((_DWORD*)v3 + 19) + v28 - 1) % v28;
    v30 = *((_DWORD*)v3 + 20);
    v45_.v50_.v57 = v29;
    HIDWORD(v45_.v50_.v58) = v30;
    v31 = *v3;
    v32 = *v3 + 0x8000;
    v45_.v50_.v51 = *(_DWORD*)(*(_QWORD*)(*v3 + 33824) + 16LL);
    v33 = *(_QWORD*)(v32 + 1000);
    v45_.v50_.v59 = *(_QWORD*)(v33 + 24);
    v45_.v50_.v60 = **(_DWORD**)(v33 + 16);
    v45_.v50_.v61 = **(_DWORD**)(*(_QWORD*)(*(_QWORD*)v31 + 8LL) + 64LL);
    cuda_driver_20b420(0x12u, 3u, (__int64)&v45_.v50_.v50);
  }
  result = (*(__int64 (**)(__int64**))(*a1 + 33944))(&v45_.v45);
  if (*(_DWORD*)((char*)((__int64*)0x10LL) + (_QWORD)CudaDriverData_14321c0) !=
      0) {
    v45_.v50_.v53 = 0;
    v35 = result;
    v45_.v50_.v50 = 64;
    v36 = *v3;
    v45_.v50_.v52 = *(_QWORD*)(*(_QWORD*)*v3 + 8LL);
    v37 = *((_DWORD*)v6 + 7);
    if (v37 != 0) {
      v45_.v50_.v53 = (__int64)v6[2] + CudaDriverRoutine_1ff5f0(*v6);
      v37 = *((_DWORD*)v6 + 7);
      v36 = *v3;
    }
    v38 = *(_DWORD*)(v36 + 96);
    v45_.v50_.v54 = v37;
    v45_.v50_.v55 = v38;
    v45_.v50_.v56 = CudaDriverStub_5bb90(v36);
    v39 = *((_DWORD*)v3 + 2);
    v40 = *((_DWORD*)v3 + 18) + v39;
    v45_.v50_.v58 = *(__int64*)((char*)v3 + 76);
    v45_.v50_.v57 = (v40 - 1) % v39;
    v41 = *v3;
    v42 = *v3 + 0x8000;
    v45_.v50_.v51 = *(_DWORD*)(*(_QWORD*)(*v3 + 33824) + 16LL);
    v43 = *(_QWORD*)(v42 + 1000);
    v45_.v50_.v59 = *(_QWORD*)(v43 + 24);
    v45_.v50_.v60 = **(_DWORD**)(v43 + 16);
    v45_.v50_.v61 = **(_DWORD**)(*(_QWORD*)(*(_QWORD*)v41 + 8LL) + 64LL);
    cuda_driver_20b420(0x12u, 4u, (__int64)&v45_.v50_.v50);
    return v35;
  }
  return result;
}

__int64 cuda_driver_198430()
{
  return *(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 +
                   (_QWORD)CudaDriverData_1422118) &
         1;
}

__int64 cuda_driver_19b120(_OWORD* a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;

  cuda_driver_1a0490();
  result = CudaDriverRoutine_19d6e0();
  if ((_DWORD)result == 0) {
    v3 = (__int64*)CudaDriverData_1423000;
    if ((CudaDriverData_1432e90 & 1) != 0) {
    LABEL_5:
      *(_OWORD*)((char*)((__int64*)0x10LL) + (_QWORD)v3) = *a1;
      return CudaDriverRoutine_19af00();
    }
    v4 = CudaDriverRoutine_12e510(64, 8);
    *v3 = v4;
    if (v4 != 0) {
      CudaDriverData_1432e90 = 1;
      CudaDriverStub_12db40(v3 + 10);
      goto LABEL_5;
    }
    return 20;
  }
  return result;
}

__int64 cuda_driver_19b3d0(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  _QWORD v13[4];

  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = a1 + 23375256;
  v4 = CudaDriverData_14348c0[a2];
  *(_DWORD*)(a1 + 1088) = a2;
  CudaDriverRoutine_1a0f20(a1),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  CudaDriverRoutine_1c1350(a1 + 23372872),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v3 + 384) = CudaDriverRoutine_19be90;
  *(_QWORD*)(v3 + 392) = CudaDriverRoutine_19bf30;
  *(_QWORD*)(v3 + 416) = CudaDriverRoutine_19c000;
  *(_QWORD*)(v3 + 424) = CudaDriverRoutine_19c2a0;
  *(_QWORD*)(v3 + 576) = CudaDriverRoutine_19c540;
  *(_QWORD*)(v3 + 584) = CudaDriverRoutine_19c5e0;
  *(_QWORD*)(v3 + 608) = CudaDriverRoutine_19c6a0;
  *(_QWORD*)(v3 + 520) = CudaDriverRoutine_19c8d0;
  *(_QWORD*)(v3 + 664) = CudaDriverRoutine_19c8e0;
  *(_QWORD*)(v3 + 896) = CudaDriverRoutine_19c8f0;
  *(_QWORD*)(v3 + 872) = CudaDriverRoutine_19c9c0;
  *(_QWORD*)(v3 + 880) = CudaDriverRoutine_19cca0;
  v5 = CudaDriverData_14348c0[*(int*)(a1 + 1088)];
  if (v5 == 0 || (unsigned int)CudaDriverRoutine_19db90(
                     *(_DWORD*)(v5 + 3156) + 10 * *(_DWORD*)(v5 + 3152),
                     (__int64)v13) != 0) {
    if ((unsigned int)cuda_driver_predicates_10f450(v4) != 2) {
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v9 = v13[2];
  *(_QWORD*)(v3 + 752) = v13[3];
  v10 = v13[1];
  *(_QWORD*)(v3 + 824) = v9;
  *(_QWORD*)(v3 + 792) = v10;
  if ((unsigned int)cuda_driver_predicates_10f450(v4) == 2) {
  LABEL_4:
    *(_DWORD*)v3 = 2;
  }
LABEL_5:
  result = 11;
  v7 = __ROR8__(*(_QWORD*)(v4 + 3128) - 272LL, 4);
  if (v7 <= 2) {
    if (v7 != 0) {
      if (v7 == 1) {
        CudaDriverRoutine_1cd100((_QWORD*)(a1 + 23372872)),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        if (v7 != 2) {
          return result;
        }
        v8 = CudaDriverRoutine_1f28c0(a1 + 23372872);
      }
    }
    else {
      CudaDriverRoutine_1bc4b0((_QWORD*)(a1 + 23372872)),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  else if ((unsigned __int64)(v7 - 3) < 2) {
    v8 = CudaDriverRoutine_23d590(a1 + 23372872);
  }
  else if (v7 == 5) {
    v8 = CudaDriverRoutine_2342e0(a1 + 23372872);
  }
  else {
    if (v7 != 6) {
      return result;
    }
    v8 = cuda_driver_misc_helpers_17670(a1 + 23372872);
  }
  v11 = (*(__int64 (**)(__int64, __int64, long double))(
      *(_QWORD*)(a1 + 32306416) + 48LL))(a1, a1 + 1064, v8),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v11 == 0) {
    return (*(__int64 (**)(__int64))(v3 + 72))(a1);
  }
  v12 = v11;
  CudaDriverRoutine_1a0f80(a1),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result = (*(__int64 (**)(__int64))(v3 + 800))(a1),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((_DWORD)result == 0) {
    **(_DWORD**)(*(_QWORD*)CudaDriverData_1423000 + 8LL * *(int*)(a1 + 1088)) =
        5;
    return v12;
  }
  return result;
}

__int64 cuda_driver_19b720(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 (*v10)(__int64, __int64, _BYTE*);
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE v20[4];
  _BYTE v21[4];
  _QWORD* v22;
  _BYTE v23[4];
  unsigned int v24;
  struct {
    __int64 v25;
    int v26;
  } v25_;
  struct {
    __int64 v27;
    int v28;
  } v27_;
  __int64 v29;

  v3 = *(_QWORD*)(a1 + 24);
  v23[0] = 0;
  v20[0] = 0;
  v7 = a1 + 91280LL * a2 + 1424LL * a3;
  v8 = *(_QWORD*)(v7 + 1248);
  v9 = *(_QWORD*)(v7 + 1256);
  v10 = *(__int64 (**)(__int64, __int64, _BYTE*))(a1 + 23376528);
  v19 = v9;
  result = v10(a1, v8, v21);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (v3 == 0) {
    return 29;
  }
  result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64*))(a1 + 23376800))(
      *(_QWORD*)(v3 + 608), a2, a3, &v18);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = (*(__int64 (**)(__int64, _QWORD, _QWORD, unsigned int*))(
      a1 + 23375432))(a1, a2, a3, &v24);
  if ((_DWORD)result != 0) {
    return result;
  }
  v12 = *(unsigned int*)(a1 + 23372892);
  if ((_DWORD)v12 != 0) {
    result = 13;
    v13 = 0;
    while ((((unsigned __int64)v24 >> v13) & 1) == 0) {
      if (v12 == ++v13) {
        return result;
      }
    }
  }
  else {
    LODWORD(v13) = 0;
  }
  if ((_DWORD)v13 == (_DWORD)v12) {
    return 13;
  }
  v14 = CudaDriverStub_1a0ee0(a1, v8);
  v29 = v14;
  if (v14 != 0) {
    *(_QWORD*)(v14 + 56) = v18;
    if ((v21[0] & 1) != 0 || *(_DWORD*)(v14 + 48) != 0) {
      return 0;
    }
    result = (__int64)cuda_driver_6c700(a1, a2, a3, (unsigned int)v13, &v29, v9,
                                        v23);
    if ((_DWORD)result != 0) {
      return result;
    }
    v16 = v18;
    v17 = v29;
    goto LABEL_31;
  }
  result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64*))(a1 + 23376712))(
      *(_QWORD*)(v3 + 608), a2, a3, &v25_.v25);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64*))(a1 + 23376728))(
        *(_QWORD*)(v3 + 608), a2, a3, &v27_.v27);
    if ((_DWORD)result == 0) {
      result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(
          a1 + 23376832))(*(_QWORD*)(v3 + 608), a2, a3, v7 + 2640);
      if ((_DWORD)result == 0) {
        if ((v21[0] & 1) == 0) {
          result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _BYTE*,
                                   __int64*))(a1 + 23376536))(
              a1, a2, a3, (unsigned int)v13, v20, &v19);
          if ((_DWORD)result != 0) {
            return result;
          }
          if (v20[0] != 0) {
            v9 = v19;
          }
        }
        result = CudaDriverRoutine_6c430(a1, a2, a3, v13, v8, v9, v27_.v27,
                                         v27_.v28, v25_.v25, v25_.v26, v23);
        if ((_DWORD)result == 0) {
          v15 = CudaDriverStub_1a0ee0(a1, v8);
          v29 = v15;
          if (v15 == 0) {
            return 10;
          }
          v16 = v18;
          v17 = v15;
        LABEL_31:
          *(_QWORD*)(v17 + 56) = v16;
          if ((v23[0] & 1) != 0) {
            if (DWORD1(CudaDriverData_14403f8) != 0 || (v21[0] & 1) != 0 ||
                *(_DWORD*)(v17 + 72) != 1) {
              return cuda_driver_6c0c0(a1, *(_QWORD**)(a1 + 24), v17,
                                       *(_QWORD*)(v17 + 8));
            }
            result = (*(__int64 (**)(__int64, __int64, _QWORD**))(
                a1 + 23376328))(a1, v17, &v22);
            if ((_DWORD)result == 0) {
              v17 = v29;
              *(_QWORD*)(v29 + 64) = *v22;
              return cuda_driver_6c0c0(a1, *(_QWORD**)(a1 + 24), v17,
                                       *(_QWORD*)(v17 + 8));
            }
          }
          else {
            return (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD, _QWORD,
                                   __int64, __int64))(a1 + 23376544))(
                a1, v3, a2, a3, (unsigned int)v13, v17, v17 + 16);
          }
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_19e150(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  if ((*((_BYTE*)((__int64*)0x10LL) + CudaDriverData_1423000) & 1) == 0) {
    v2 = *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 +
                    8LL * *(unsigned int*)(a1 + 84));
    if (v2 != 0) {
      v3 = *(_QWORD*)(v2 + 32306416);
      if (*(_DWORD*)v3 == 2 && *(_DWORD*)(a1 + 52) != 0) {
        (*(void (**)(__int64, _QWORD))(v3 + 56))(v2, *(unsigned int*)(a1 + 72));
      }
    }
  }
  CudaDriverRoutine_2231b0((__int64*)(a1 + 128),
                           (__int64)CudaDriverRoutine_19ec40, 0);
  return CudaDriverRoutine_12e340(a1);
}

__int64 cuda_driver_1a03e0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  unsigned __int8 v8;
  __int64 v9;
  __int64 v10[3];
  unsigned __int8 v11;

  if ((*(_BYTE*)(a3 + 12) & 1) != 0) {
    return 0;
  }
  v10[1] = v3;
  v10[2] = v4;
  v6 = *(_QWORD*)(a1 + 24);
  v11 = 0;
  v10[0] = 0;
  result = CudaDriverRoutine_19bcb0(a2, v6, v10, 2, (char*)&v11, 0);
  if ((_DWORD)result == 0) {
    v8 = v11;
    v9 = v10[0];
    *(_DWORD*)(a3 + 8) = v11;
    if (v9 != 0) {
      LODWORD(v9) = *((unsigned __int8*)((_UNKNOWN*)0x4CLL) + v9);
    }
    result = 0;
    ++*(_DWORD*)a3;
    *(_DWORD*)(a3 + 4) = v9;
    if ((v8 & 1) == 0) {
      *(_BYTE*)(a3 + 12) = 1;
    }
  }
  return result;
}

__int64 cuda_driver_1a0490()
{
  __int64 v0;
  __int64 result;
  void* v2;
  __int64 (*v3)();
  __int64 (*v4)();

  v0 = CudaDriverData_1423000;
  if (*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + CudaDriverData_1423000) !=
      nullptr) {
    return 0;
  }
  v2 = (void*)CudaDriverRoutine_12e510(1, 24);
  *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + v0) = v2;
  if (v2 == nullptr) {
    return 20;
  }
  v3 = CudaDriverStub_222170_ptr[0];
  v4 = CudaDriverData_1423010;
  **(_QWORD**)((char*)((_UNKNOWN**)0x8LL) + v0) =
      CudaDriverRoutine_2221c0((__int64)CudaDriverStub_222170_ptr[0],
                               (__int64)CudaDriverData_1423010, 8u);
  (*(_QWORD**)((char*)((_UNKNOWN**)0x8LL) + v0))[1] =
      CudaDriverRoutine_2221c0((__int64)v3, (__int64)v4, 8u);
  result = CudaDriverRoutine_19df60((_QWORD*)(v0 + 64), 0);
  if ((_DWORD)result == 0) {
    return (unsigned int)CudaDriverRoutine_223120((_QWORD*)(v0 + 72)) != 0;
  }
  return result;
}

__int64 cuda_driver_1a0c10(unsigned int a1, __int64 a2)
{
  unsigned int v2;
  _QWORD* v3;
  __int64 v5;
  unsigned int v7;
  void* v8;
  __int64 (*v9)();
  __int64 (*v10)();
  int v11;

  v2 = 11;
  if (a2 != 0) {
    v3 = CudaDriverData_1422118;
    if (a1 < *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                        (_QWORD)CudaDriverData_1422118)) {
      v5 = CudaDriverData_1423000;
      if (*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + CudaDriverData_1423000) ==
          nullptr) {
        v7 = a1;
        v8 = (void*)CudaDriverRoutine_12e510(1, 24);
        a1 = v7;
        *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + v5) = v8;
        if (v8 != nullptr) {
          v9 = CudaDriverStub_222170_ptr[0];
          v10 = CudaDriverData_1423010;
          **(_QWORD**)((char*)((_UNKNOWN**)0x8LL) + v5) =
              CudaDriverRoutine_2221c0((__int64)CudaDriverStub_222170_ptr[0],
                                       (__int64)CudaDriverData_1423010, 8u);
          (*(_QWORD**)((char*)((_UNKNOWN**)0x8LL) + v5))[1] =
              CudaDriverRoutine_2221c0((__int64)v9, (__int64)v10, 8u);
          v11 = CudaDriverRoutine_19df60((_QWORD*)(v5 + 64), 0);
          a1 = v7;
          if (v11 == 0) {
            CudaDriverRoutine_223120((_QWORD*)(v5 + 72));
            a1 = v7;
          }
        }
      }
      return (unsigned int)CudaDriverRoutine_2222a0(
                 (*(_QWORD**)((char*)((_UNKNOWN**)0x8LL) + v5))[1], v3[a1 + 35],
                 a2) != 0;
    }
  }
  return v2;
}

long double cuda_driver_1a51a0(__int64 a1, __int64 a2, int* a3, __int64 a4)
{

#pragma clang fp contract(off)
  int v4;
  unsigned int v9;
  int8x8_t v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  unsigned int* v22;
  unsigned int v23;
  int v24;
  unsigned __int64 v25;
  unsigned int v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned int v29;
  unsigned __int64 v30;
  unsigned int v31;
  unsigned int v32;
  int8x8_t v33;
  unsigned __int8 v34;
  unsigned __int8 v35;
  int v36;
  unsigned __int64 v37;
  int8x8_t v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int8x8_t v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  int v51;
  unsigned __int64 v52;
  int v53;
  int8x16_t v54;
  int v55;
  __int64 v56;
  long double result;
  int8x16_t v58;
  int8x16_t v59;
  __int128 v60;
  __int64 v61;
  _DWORD v62[8];
  struct {
    _QWORD v63[2];
    int8x16_t v64;
    int8x16_t v65;
    __int128 v66;
  } v63_;

  v4 = a3[18];
  v61 = 0;
  *(_OWORD*)v63_.v63 = (__typeof__(*(_OWORD*)v63_.v63)){0};
  v63_.v64 = (__typeof__(v63_.v64)){0};
  v63_.v65 = (__typeof__(v63_.v65)){0};
  v63_.v66 = (__typeof__(v63_.v66)){0};
  a3[18] = v4 & 0x3FFFFFF;
  v9 = a3[35] & 0xFFFCFFFF;
  memset(v62, 0, sizeof(v62));
  PSEUDO_LOW_LANE64(v10, n64_u64, *(_QWORD*)(a3 + 10));
  a3[35] = v9;
  *((int8x8_t*)a3 + 5) =
      vand_s8(v10, COERCE_AS(int8x8_t, 0xFFFFFFF7FFF7FFF7LL));
  CudaDriverRoutine_bbd70(a2, &v61);
  v11 = HIDWORD(v61) & 0x1FFFFFF | ((unsigned int)a3[39] >> 25 << 25);
  v12 = a3[17];
  a3[38] = v61;
  a3[39] = v11;
  a3[17] = v12 | 0x3000000;
  v13 = a3[37] & 0x7FFFFFF | 0x8000000;
  a3[37] = v13;
  a3[37] = ((*(_DWORD*)(a2 + 392) & 0x1FF) << 16) | v13 & 0xE00FFFF;
  v14 = *a3;
  if ((*((_BYTE*)&CudaDriverRoutine_7488 + (_QWORD)CudaDriverData_1422118) &
       1) != 0) {
    *a3 = v14 & 0x7FFFFFFF;
  }
  else {
    *a3 = v14 | 0x80000000;
    a3[76] =
        *(_DWORD*)(*(_QWORD*)(CudaDriverRoutine_98340(a1) + 16104) + 4488LL);
    a3[77] =
        *(_DWORD*)(*(_QWORD*)(CudaDriverRoutine_98340(a1) + 16104) + 4492LL);
    a3[78] =
        *(_DWORD*)(*(_QWORD*)(CudaDriverRoutine_98340(a1) + 16104) + 4496LL);
    a3[79] =
        *(_DWORD*)(*(_QWORD*)(CudaDriverRoutine_98340(a1) + 16104) + 4500LL);
  }
  v15 = a3[18];
  v16 = a3[19];
  *((_BYTE*)a3 + 67) = -112;
  v17 = v15 & 0xFFFFFF00 | 0x40;
  a3[18] = v17;
  v18 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3888LL);
  a3[18] =
      ((((unsigned int)(((unsigned __int64)(unsigned int)(v18 - 1) + 8448) /
                        v18) *
         (_DWORD)v18) &
        0x3FFFF)
       << 8) |
      v17 & 0xFC0000FF;
  v19 = v16 & 0xFFFFFFC0 | CudaDriverRoutine_1a8440(0x4000u) & 0x3F;
  a3[19] = v19;
  v20 = v19 & 0xFFFFF03F | ((CudaDriverRoutine_1a8440(0x39000u) & 0x3F) << 6);
  a3[19] = v20;
  a3[19] =
      v20 & 0xFFFC0FFF | ((CudaDriverRoutine_1a8440(0x4000u) & 0x3F) << 12);
  v21 = CudaDriverStub_112e30(*(_QWORD*)(a1 + 96));
  CudaDriverRoutine_96f20(a1, a2, v21, 0, (__int64)v63_.v63, (__int64)v62);
  v22 = *(unsigned int**)(a1 + 64);
  if (v22[944] != 0) {
    v23 = 1587;
    v24 = 0;
    v25 = 0;
    do {
      v28 = v63_.v63[v25];
      if (v28 != 0) {
        v29 = ((v62[v25] + v22[946] - 1) / v22[946] * v22[946]) << 15;
        a3[(unsigned int)(v24 + 416) >> 5] |= 1 << (v24 & 0x1C);
        v30 = v28 >> 38;
        v27 = v28 >> 6;
        a3[v23 >> 5] = v29 & 0xFFF80000 | a3[v23 >> 5] & 0x7FFFF;
        a3[(v23 - 19) >> 5] =
            v30 & 0x7FFFF | ((unsigned int)a3[(v23 - 19) >> 5] >> 19 << 19);
        v26 = (v23 - 51) >> 5;
      }
      else {
        v26 = (unsigned int)(v24 + 416) >> 5;
        LODWORD(v27) = a3[v26] & ~(1 << (v24 & 0x1C));
      }
      a3[v26] = v27;
      v22 = *(unsigned int**)(a1 + 64);
      ++v25;
      v24 += 4;
      v23 += 64;
    } while (v25 < v22[944]);
  }
  a3[(4 * v22[2927] + 416) >> 5] |= 1 << ((4 * *((_BYTE*)v22 + 11708)) & 0x1C);
  v31 =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1587) >>
      5;
  a3[v31] = a3[v31] & 0x7FFFF | 0xE000000;
  v32 =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1568) >>
      5;
  a3[v32] = ((unsigned __int64)(a4 + 2048) >> 38) & 0x7FFFF |
            ((unsigned int)a3[v32] >> 19 << 19);
  a3[(unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1536) >>
     5] = (unsigned __int64)(a4 + 2048) >> 6;
  *((_WORD*)a3 + 74) = 1;
  PSEUDO_LOW_LANE64(v33, n64_u64, *(_QWORD*)(a3 + 10));
  v34 = *((_BYTE*)a3 + 67);
  v35 = *((_BYTE*)a3 + 71);
  v36 = a3[95];
  a3[36] = 65568;
  v37 = LANES64_OF(vand_s8(v33, COERCE_AS(int8x8_t, 0xFFFFFFFEFFFEFFFELL)))
            .n64_u64[0];
  PSEUDO_LOW_LANE64(v38, n64_u64, *(_QWORD*)(a3 + 2));
  v39 = *(_DWORD*)(a1 + 1276) & 0xFFFFFF | (v34 << 24);
  v40 = a3[94];
  a3[16] = v39;
  v41 = *(_DWORD*)(a1 + 1280);
  *((_QWORD*)a3 + 5) = v37;
  *((_WORD*)a3 + 70) = -16384;
  a3[95] = v36 & 0x80000000 | 0xFFFFF;
  v42 = *a3;
  v43 = a3[1];
  a3[32] = 0;
  a3[94] = v40 & 0x80000000;
  v44 = a3[66];
  *((int8x8_t*)a3 + 1) =
      vand_s8(v38, COERCE_AS(int8x8_t, 0x8000000080000000LL));
  PSEUDO_LOW_LANE64(v45, n64_u64, *(unsigned __int64*)(a3 + 33));
  a3[17] = v41 & 0xFFFFFF | (v35 << 24);
  a3[66] = v44 & 0xE000FFFF | 0x5100000;
  *a3 = v42 & 0xFC40FFFF;
  a3[1] = v43 & 0xFE000000 | 0x100000;
  *(int8x8_t*)(a3 + 33) =
      vand_s8(v45, COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL));
  v46 = CudaDriverRoutine_98340(a1);
  v47 = v61;
  v48 = v46;
  v49 = CudaDriverRoutine_1a81a0(v46);
  v50 = CudaDriverRoutine_1a5d90(v48);
  v51 = v50;
  v52 = HIDWORD(v50);
  v53 = CudaDriverRoutine_15fd0(a2);
  PSEUDO_LOW_LANE128(v54, n128_u64, v63_.v66);
  v55 = v53;
  v59 = vextq_s8(v63_.v64, v63_.v65, 8u);
  v60 = *(_OWORD*)v63_.v63;
  v58 = vextq_s8(v63_.v65, v54, 8u);
  v56 = CudaDriverStub_1db800(*(_QWORD*)(v48 + 2232));
  *((_QWORD*)a3 + 259) = v49;
  a3[520] = v51;
  a3[521] = v52;
  a3[522] = v55;
  a3[523] = 0;
  *((_QWORD*)a3 + 263) = a4;
  *((_QWORD*)a3 + 290) = 0;
  *((_QWORD*)a3 + 291) = v47;
  *((_QWORD*)a3 + 308) = 0;
  *((_QWORD*)a3 + 309) = v56;
  *((_QWORD*)a3 + 136) = a4 + 2048;
  *((_QWORD*)a3 + 258) = 0x100000001LL;
  *((int8x16_t*)a3 + 141) = v59;
  *((_QWORD*)a3 + 262) = -4;
  *((int8x16_t*)a3 + 142) = v58;
  *((_OWORD*)a3 + 128) = CudaDriverData_1115550;
  *((_OWORD*)a3 + 140) = v60;
  *((_OWORD*)a3 + 132) = (__typeof__(*((_OWORD*)a3 + 132))){0};
  *((_OWORD*)a3 + 133) = (__typeof__(*((_OWORD*)a3 + 133))){0};
  *((_OWORD*)a3 + 134) = (__typeof__(*((_OWORD*)a3 + 134))){0};
  *((_OWORD*)a3 + 135) = (__typeof__(*((_OWORD*)a3 + 135))){0};
  *((_OWORD*)a3 + 136) = (__typeof__(*((_OWORD*)a3 + 136))){0};
  *((_OWORD*)a3 + 137) = (__typeof__(*((_OWORD*)a3 + 137))){0};
  *((_OWORD*)a3 + 138) = (__typeof__(*((_OWORD*)a3 + 138))){0};
  *((_OWORD*)a3 + 139) = (__typeof__(*((_OWORD*)a3 + 139))){0};
  *((_OWORD*)a3 + 144) = (__typeof__(*((_OWORD*)a3 + 144))){0};
  *((_OWORD*)a3 + 143) = (__typeof__(*((_OWORD*)a3 + 143))){0};
  *((_OWORD*)a3 + 153) = (__typeof__(*((_OWORD*)a3 + 153))){0};
  *((_OWORD*)a3 + 152) = (__typeof__(*((_OWORD*)a3 + 152))){0};
  *((_OWORD*)a3 + 151) = (__typeof__(*((_OWORD*)a3 + 151))){0};
  *((_OWORD*)a3 + 150) = (__typeof__(*((_OWORD*)a3 + 150))){0};
  *((_OWORD*)a3 + 149) = (__typeof__(*((_OWORD*)a3 + 149))){0};
  *((_OWORD*)a3 + 148) = (__typeof__(*((_OWORD*)a3 + 148))){0};
  *((_OWORD*)a3 + 147) = (__typeof__(*((_OWORD*)a3 + 147))){0};
  *((_OWORD*)a3 + 146) = (__typeof__(*((_OWORD*)a3 + 146))){0};
  *((_OWORD*)a3 + 160) = (__typeof__(*((_OWORD*)a3 + 160))){0};
  *((_OWORD*)a3 + 159) = (__typeof__(*((_OWORD*)a3 + 159))){0};
  *((_OWORD*)a3 + 158) = (__typeof__(*((_OWORD*)a3 + 158))){0};
  *((_OWORD*)a3 + 157) = (__typeof__(*((_OWORD*)a3 + 157))){0};
  *((_OWORD*)a3 + 156) = (__typeof__(*((_OWORD*)a3 + 156))){0};
  *((_OWORD*)a3 + 155) = (__typeof__(*((_OWORD*)a3 + 155))){0};
  *(_OWORD*)&result = (__typeof__(*(_OWORD*)&result)){0};
  return result;
}

_DWORD* cuda_driver_1a5840(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned int* v19;
  unsigned int v20;
  int v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned __int8 v27;
  int v28;
  unsigned __int8 v29;
  int v30;
  __int64 v31;
  _DWORD* result;
  __int64 (*v33)(__int64, __int64, _QWORD, unsigned int*, __int64, __int64);
  __int64 v34;
  _DWORD* v35;
  unsigned int v36;
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
  __int128 v49;
  __int128 v50;
  __int128 v51;
  __int128 v52;
  __int128 v53;
  __int128 v54;
  _DWORD v55[23];
  __int64 v56;
  _DWORD v57[8];
  _QWORD v58[10];

  v3 = *a2;
  memset(v57, 0, sizeof(v57));
  memset(v58, 0, 64);
  v7 = CudaDriverRoutine_98340(a1);
  v8 = *(_QWORD*)(a3 + 136);
  v9 = *(_QWORD*)(v7 + 1072);
  v56 = 0;
  v10 = *(_QWORD*)(v8 + 192);
  v11 = *(_QWORD*)(v9 + 392);
  v52 = (__typeof__(v52)){0};
  v51 = (__typeof__(v51)){0};
  v50 = (__typeof__(v50)){0};
  v49 = (__typeof__(v49)){0};
  v48 = (__typeof__(v48)){0};
  v47 = (__typeof__(v47)){0};
  v46 = (__typeof__(v46)){0};
  v45 = (__typeof__(v45)){0};
  v41 = (__typeof__(v41)){0};
  v54 = (__typeof__(v54)){0};
  memset(v55, 0, sizeof(v55));
  v53 = (__typeof__(v53)){0};
  v44 = (__typeof__(v44)){0};
  v43 = (__typeof__(v43)){0};
  v42 = (__typeof__(v42)){0};
  v40 = (__typeof__(v40)){0};
  v39 = (__typeof__(v39)){0};
  v38 = (__typeof__(v38)){0};
  v37 = (__typeof__(v37)){0};
  v12 = *(_QWORD*)(a3 + 8LL * *(unsigned int*)(*(_QWORD*)(a1 + 64) + 11708LL) +
                   40);
  DWORD2(v39) = 0;
  v36 = 0x40000000;
  DWORD2(v45) = 196608;
  CudaDriverRoutine_bbd70(v11, &v56);
  *(_QWORD*)&v55[3] = 0;
  *(_QWORD*)&v55[5] = 0;
  *(_QWORD*)((char*)&v46 + 4) = v56 & 0x1FFFFFFFFFFFFFFLL;
  HIBYTE(v40) = -112;
  v13 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3888LL);
  LODWORD(v46) = ((*(_DWORD*)(v11 + 392) & 0x1FF) << 16) | 0x8000000;
  LODWORD(v41) = 50331648;
  DWORD1(v41) =
      ((((unsigned int)(((unsigned __int64)(unsigned int)(v13 - 1) + 8448) /
                        v13) *
         (_DWORD)v13) &
        0x3FFFF)
       << 8) |
      0x3C000040;
  v14 = CudaDriverRoutine_1a8440(0x4000u) & 0x3F;
  v15 = v14 | ((CudaDriverRoutine_1a8440(0x39000u) & 0x3F) << 6);
  v16 = v15 & 0xFFF | ((CudaDriverRoutine_1a8440(0x4000u) & 0x3F) << 12);
  v17 = *(_QWORD*)(a1 + 96);
  DWORD2(v41) = v16;
  v18 = CudaDriverStub_112e30(v17);
  CudaDriverRoutine_96f20(a1, v11, v18, 0, (__int64)v58, (__int64)v57);
  v19 = *(unsigned int**)(a1 + 64);
  if (v19[944] != 0) {
    v20 = 1587;
    v21 = 0;
    v22 = 0;
    do {
      while (1) {
        v23 = v58[v22];
        if (v23 != 0) {
          break;
        }
        *(&v36 + ((unsigned int)(v21 + 416) >> 5)) &= ~(1 << (v21 & 0x1C));
        ++v22;
        v21 += 4;
        v20 += 64;
        if (v22 >= v19[944]) {
          goto LABEL_6;
        }
      }
      v24 = ((v57[v22] + v19[946] - 1) / v19[946] * v19[946]) << 15;
      *(&v36 + ((unsigned int)(v21 + 416) >> 5)) |= 1 << (v21 & 0x1C);
      *(&v36 + (v20 >> 5)) = v24 & 0xFFF80000 | *(&v36 + (v20 >> 5)) & 0x7FFFF;
      *(&v36 + ((v20 - 19) >> 5)) =
          (v23 >> 38) & 0x7FFFF | (*(&v36 + ((v20 - 19) >> 5)) >> 19 << 19);
      *(&v36 + ((v20 - 51) >> 5)) = v23 >> 6;
      ++v22;
      v21 += 4;
      v20 += 64;
    } while (v22 < v19[944]);
  }
LABEL_6:
  *(&v36 + ((4 * v19[2927] + 416) >> 5)) |=
      1 << ((4 * *((_BYTE*)v19 + 11708)) & 0x1C);
  v25 = ((v19[2927] << 6) + 1587) >> 5;
  *(&v36 + v25) = *(&v36 + v25) & 0x7FFFF | 0xE000000;
  v26 = ((v19[2927] << 6) + 1568) >> 5;
  *(&v36 + v26) = (v12 >> 38) & 0x7FFFF | (*(&v36 + v26) >> 19 << 19);
  *(&v36 + (((v19[2927] << 6) + 1536) >> 5)) = v12 >> 6;
  LOWORD(v46) = 1;
  v27 = HIBYTE(v40);
  DWORD3(v45) = 65537;
  v28 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1276) & 0xFFFFFF | (v27 << 24);
  v29 = BYTE3(v41);
  DWORD3(v40) = v28;
  v30 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1280) & 0xFFFFFF | (v29 << 24);
  v36 &= 0xFFC0FFFF;
  LODWORD(v41) = v30;
  v31 = CudaDriverStub_1223e0(*(_QWORD*)(v10 + 24));
  DWORD1(v39) = DWORD1(v39) & 0xFFFFEF08 | 0x13;
  DWORD1(v42) = CudaDriverStub_8e230(v10);
  DWORD3(v44) = 1;
  DWORD3(v41) = v31;
  LODWORD(v42) = HIDWORD(v31) & 0x1FFFFFF | ((unsigned int)v42 >> 25 << 25);
  v36 = v36 & 0xFC7FFFFF | 0x1000000;
  *(int8x8_t*)((char*)&v39 + 4) = vand_s8(
      *(int8x8_t*)((char*)&v39 + 4), COERCE_AS(int8x8_t, 0xFFFFFFFEFFFEFFFFLL));
  *(_QWORD*)&v45 =
      LANES64_OF(
          vand_s8(*(int8x8_t*)&v45, COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL)))
          .n64_u64[0] |
      0x100000001LL;
  if (*(_BYTE*)(*(_QWORD*)(CudaDriverRoutine_98340(a1) + 16104) + 4508LL) !=
          0 &&
      *(_BYTE*)(a3 + 196) != 0) {
    result = (_DWORD*)CudaDriverStub_1abf50(v3, *(_QWORD*)(v10 + 8), &v36);
  }
  else {
    v33 = *(__int64 (**)(__int64, __int64, _QWORD, unsigned int*, __int64,
                         __int64))(*(_QWORD*)(a1 + 64) + 19248LL);
    v34 = CudaDriverRoutine_98340(a1);
    v35 = (_DWORD*)v33(v3, v34, *(_QWORD*)(v10 + 8), &v36, 384, 2);
    result = CudaDriverRoutine_1abf10(v35, *(_QWORD*)(v10 + 8), 1u);
  }
  *a2 = (__int64)result;
  return result;
}

__int64 cuda_driver_1a6030(__int64 a1, unsigned int* a2, unsigned __int64* a3,
                           bool* a4)
{
  unsigned int v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned __int64 v15;
  unsigned int v16;
  bool v18;

  v8 = (*(_DWORD*)(a1 + 72) + 15) & 0xFFFFFFF0;
  v9 = CudaDriverRoutine_bc3f0(a1);
  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL);
  v11 = *(_DWORD*)(v10 + 1312);
  if ((*(unsigned __int8*)(v10 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c +
         (_QWORD)CudaDriverData_1422118 + 2)) != 0) {
    v12 = 64;
  }
  else {
    v12 = 576;
  }
  if (v11 != 0) {
    v13 = v11 + 16;
  }
  else {
    v13 = 0;
  }
  v14 = (v9 + v13 + v12 + 15) & 0xFFFFFFF0;
  if (v14 > 0x80000) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Requested stack size exceeds limit\n");
    v15 = 0;
    v16 = 0;
    if (a2 == nullptr) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v15 = ((*(unsigned int*)(*(_QWORD*)(v10 + 64) + 3756LL) *
              (unsigned __int64)((*(_DWORD*)(*(_QWORD*)(v10 + 64) + 3924LL) *
                                      (v14 + v8) +
                                  511) &
                                 0xFFFFFE00) +
          0x7FFF) &
         0xFFFFFFFFFFFF8000LL) *
        *(unsigned int*)(v10 + 164);
  v16 = (v9 + v13 + v12 + 15) & 0xFFFFFFF0;
  if (a2 != nullptr) {
  LABEL_11:
    *a2 = v16;
  }
LABEL_12:
  if (a3 != nullptr) {
    *a3 = v15;
  }
  if (a4 != nullptr) {
    v18 = v8 < 0x80001 && v14 < 0x80001;
    *a4 = v18;
  }
  return 0;
}

__int64 cuda_driver_1a6170(__int64 a1, int a2, int a3, unsigned int* a4,
                           unsigned __int64* a5, char* a6)
{
  int v6;
  int v10;
  int v11;
  unsigned int v12;
  unsigned __int64 v13;
  char v14;

  v6 = *(_DWORD*)(a1 + 1312);
  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c +
         (_QWORD)CudaDriverData_1422118 + 2)) != 0) {
    v10 = 64;
  }
  else {
    v10 = 576;
  }
  if (v6 != 0) {
    v11 = v6 + 16;
  }
  else {
    v11 = 0;
  }
  v12 = (a3 + v11 + v10 + 15) & 0xFFFFFFF0;
  if (v12 <= 0x80000) {
    v13 = ((*(unsigned int*)(*(_QWORD*)(a1 + 64) + 3756LL) *
                (unsigned __int64)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3924LL) *
                                        (v12 + a2) +
                                    511) &
                                   0xFFFFFE00) +
            0x7FFF) &
           0xFFFFFFFFFFFF8000LL) *
          *(unsigned int*)(a1 + 164);
    v14 = 1;
    if (a4 == nullptr) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                          (__int64)"Requested stack size exceeds limit\n");
  v13 = 0;
  v12 = 0;
  v14 = 0;
  if (a4 != nullptr) {
  LABEL_11:
    *a4 = v12;
  }
LABEL_12:
  if (a5 != nullptr) {
    *a5 = v13;
  }
  if (a6 != nullptr) {
    *a6 = v14;
  }
  return 0;
}

__int64 cuda_driver_1a7250(__int64 a1)
{
  int v1;
  int v2;
  int v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v10;
  int v11;
  int v12;

  if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) == 0) {
    v4 = *(unsigned int*)(a1 + 36);
    if ((unsigned int)v4 > 4) {
      return 1;
    }
    v5 = *(_DWORD*)(a1 + 40);
    v6 = CudaDriverData_1130110[v4];
    v7 = 1;
    *(_DWORD*)(a1 + 56) = v6;
    if (v5 <= 1) {
      if (v5 == 0) {
        goto LABEL_15;
      }
      if (v5 != 1) {
        return v7;
      }
      v8 = 16;
    }
    else {
      switch (v5) {
      case 4:
        v8 = 32;
        break;
      case 3:
        v8 = 24;
        break;
      case 2:
        v8 = 8;
        break;
      default:
        return v7;
      }
    }
    v6 |= v8;
    *(_DWORD*)(a1 + 56) = v6;
  LABEL_15:
    v10 = *(_DWORD*)(a1 + 44);
    v7 = 1;
    if (v10 <= 1) {
      if (v10 == 0) {
        goto LABEL_25;
      }
      if (v10 == 1) {
        v6 |= 0x80u;
        goto LABEL_25;
      }
    }
    else {
      switch (v10) {
      case 2:
        v6 |= 0x40u;
        goto LABEL_25;
      case 3:
        v6 |= 0xC0u;
        goto LABEL_25;
      case 4:
        v6 |= 0x100u;
      LABEL_25:
        v11 = v6 | 0x2000;
        if (*(_DWORD*)(a1 + 48) == 1) {
          v12 = 98;
        }
        else {
          v12 = 81;
        }
        *(_DWORD*)(a1 + 56) = v11;
        *(_DWORD*)(a1 + 60) = v12;
        if (*(_BYTE*)(a1 + 52) != 0) {
          *(_DWORD*)(a1 + 60) = v12 | 0x2000000;
        }
        v7 = 0;
        *(_QWORD*)(a1 + 72) = 0;
        *(_QWORD*)(a1 + 80) = 0;
        *(_QWORD*)(a1 + 64) = &CudaDriverData_f00000;
        break;
      default:
        break;
      }
    }
    return v7;
  }
  v1 = *(_DWORD*)(a1 + 36);
  v2 = *(_DWORD*)(a1 + 40);
  *(_OWORD*)(a1 + 128) = (__typeof__(*(_OWORD*)(a1 + 128))){0};
  *(_OWORD*)(a1 + 144) = (__typeof__(*(_OWORD*)(a1 + 144))){0};
  *(_OWORD*)(a1 + 160) = (__typeof__(*(_OWORD*)(a1 + 160))){0};
  *(_OWORD*)(a1 + 176) = (__typeof__(*(_OWORD*)(a1 + 176))){0};
  *(_BYTE*)(a1 + 164) = v1;
  *(_BYTE*)(a1 + 165) = v2;
  v3 = *(_DWORD*)(a1 + 48);
  *(_BYTE*)(a1 + 166) = *(_DWORD*)(a1 + 44);
  *(_DWORD*)(a1 + 172) = v3 == 1;
  *(_BYTE*)(a1 + 176) = *(_BYTE*)(a1 + 52);
  *(_BYTE*)(a1 + 177) = 1;
  *(_DWORD*)(a1 + 140) = 1164967936;
  return 0;
}

unsigned __int64 cuda_driver_unplaced_8_1a7380(__int64 a1)
{
  unsigned __int64 result;
  char v3;
  int v4;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
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
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  __int64 v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  unsigned int v54;
  unsigned __int64 v55;
  int8x16_t v56;
  int v57;
  int v58;
  int v59;
  bool v60;
  int v61;
  unsigned int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  unsigned int v67;
  int v68;
  int v69;
  bool v70;
  unsigned int v71;
  unsigned int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 vars0;
  __int64 _28;
  __int64 vars10;
  __int64 _38;

  if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) != 0) {
    return CudaDriverRoutine_11d680((__int64*)a1);
  }
  v3 = CudaDriverRoutine_11a720(a1);
  if (CudaDriverStub_985a0(*(_QWORD*)a1)) {
    v4 = *(_DWORD*)(a1 + 32);
    if (v4 == 1 || v4 == 2 && *(_BYTE*)(a1 + 556) != 0) {
      v5 = *(_DWORD**)(a1 + 72);
      if (*(_DWORD*)(a1 + 552) == 0 && v5 == nullptr) {
        vars0 = v74;
        _28 = v75;
        vars10 = _38;
        result = CudaDriverStub_985a0(*(_QWORD*)a1);
        v62 = 0;
        v63 = (unsigned __int16)*(_DWORD*)(a1 + 96);
        v64 = (unsigned __int8)*(_DWORD*)(a1 + 96);
        *(_OWORD*)(a1 + 208) = (__typeof__(*(_OWORD*)(a1 + 208))){0};
        *(_OWORD*)(a1 + 224) = (__typeof__(*(_OWORD*)(a1 + 224))){0};
        if (v64 <= 111) {
          switch (v64) {
          case 1:
          case 8:
          case 96:
            goto LABEL_151;
          case 2:
          case 9:
          case 16:
            goto LABEL_154;
          case 3:
          case 10:
          case 32:
            v65 = *(_DWORD*)(a1 + 104);
            switch (v65) {
            case 4:
              v62 = 0x10000;
              *(_DWORD*)(a1 + 220) = 0x10000;
              goto LABEL_179;
            case 2:
              v62 = 0x40000;
              *(_DWORD*)(a1 + 220) = 0x40000;
              v66 = (unsigned __int8)v63;
              if ((unsigned __int8)v63 <= 0x4Fu) {
                goto LABEL_180;
              }
              break;
            case 1:
              v62 = 983040;
              *(_DWORD*)(a1 + 220) = 983040;
              v66 = (unsigned __int8)v63;
              if ((unsigned __int8)v63 <= 0x4Fu) {
                goto LABEL_180;
              }
              break;
            default:
              goto LABEL_161;
            }
            break;
          case 80:
            v62 = 589824;
            *(_DWORD*)(a1 + 220) = 589824;
            goto LABEL_175;
          default:
            goto LABEL_179;
          }
        LABEL_162:
          if (v66 <= 111) {
            if (v66 != 80 && v66 != 96) {
              goto LABEL_187;
            }
          }
          else if (v66 != 112) {
            if (v66 == 128 || v66 == 144) {
              v62 |= 0x1000u;
            }
            goto LABEL_187;
          }
        LABEL_175:
          v62 &= 0xFFFF0FFF;
        LABEL_187:
          v69 = *(_DWORD*)(a1 + 104);
          v70 = v63 == 3680;
          v71 = v62 & 0xFFFFF000 | 0xB1A;
          if (v70) {
            v71 = v62 & 0xFFFFF000 | 0xA9C;
          }
          v72 = v62 & 0xFFFFFFC0 | 0x1A;
          if (v69 == 1) {
            v62 = v62 & 0xFFFFFFF8 | 2;
          }
          if (v69 == 2) {
            v62 = v72;
          }
          if (v69 != 4) {
            v71 = v62;
          }
          v73 = *(_QWORD*)(a1 + 40);
          *(_DWORD*)(a1 + 208) = v73;
          *(_DWORD*)(a1 + 212) = HIDWORD(v73) & 0x1FFFFFF;
          LODWORD(v73) = *(_DWORD*)(a1 + 64) - 1;
          *(_DWORD*)(a1 + 216) = v73;
          *(_DWORD*)(a1 + 220) = v71 | 0x50000000;
          *(_DWORD*)(a1 + 224) = v73 & 0x1FFFF | 0x11800000;
          return result;
        }
        if (v64 == 112 || v64 == 144) {
        LABEL_154:
          v68 = *(_DWORD*)(a1 + 104);
          if (v68 == 4) {
            v62 = 196608;
            *(_DWORD*)(a1 + 220) = 196608;
            v66 = (unsigned __int8)v63;
            if ((unsigned __int8)v63 > 0x4Fu) {
              goto LABEL_162;
            }
          }
          else if (v68 == 2) {
            v62 = 786432;
            *(_DWORD*)(a1 + 220) = 786432;
            v66 = (unsigned __int8)v63;
            if ((unsigned __int8)v63 > 0x4Fu) {
              goto LABEL_162;
            }
          }
          else {
            if (v68 == 1) {
              v62 = 1769472;
            }
            else {
              v62 = 0;
            }
            v66 = (unsigned __int8)v63;
            if ((unsigned __int8)v63 > 0x4Fu) {
              goto LABEL_162;
            }
          }
        }
        else if (v64 == 128) {
        LABEL_151:
          v67 = *(_DWORD*)(a1 + 104) - 1;
          if (v67 >= 4) {
          LABEL_161:
            v62 = 0;
            v66 = (unsigned __int8)v63;
            if ((unsigned __int8)v63 > 0x4Fu) {
              goto LABEL_162;
            }
          }
          else {
            v62 = CudaDriverData_1116290[v67];
            v66 = (unsigned __int8)v63;
            if ((unsigned __int8)v63 > 0x4Fu) {
              goto LABEL_162;
            }
          }
        }
        else {
        LABEL_179:
          v66 = (unsigned __int8)v63;
          if ((unsigned __int8)v63 > 0x4Fu) {
            goto LABEL_162;
          }
        }
      LABEL_180:
        if ((unsigned int)v66 <= 0x20) {
          if (((1LL << v66) & 0xE) != 0) {
            v62 |= 0x6000u;
          }
          else if (((1LL << v66) & 0x700) != 0) {
            v62 |= 0x7000u;
          }
          else if (((1LL << v66) & 0x100010000LL) != 0) {
            v62 |= 0x2000u;
          }
        }
        goto LABEL_187;
      }
      v16 = *(_QWORD*)a1;
      CudaDriverStub_985a0(*(_QWORD*)a1);
      v17 = 0;
      *(_OWORD*)(a1 + 208) = (__typeof__(*(_OWORD*)(a1 + 208))){0};
      *(_OWORD*)(a1 + 224) = (__typeof__(*(_OWORD*)(a1 + 224))){0};
      v18 = (unsigned __int16)*(_DWORD*)(a1 + 96);
      v19 = (unsigned __int8)*(_DWORD*)(a1 + 96);
      if (v19 <= 0x6F) {
        v20 = 589824;
        switch ((unsigned __int8)*(_DWORD*)(a1 + 96)) {
        case 1u:
        case 8u:
        case 0x60u:
          goto LABEL_41;
        case 2u:
        case 9u:
        case 0x10u:
          goto LABEL_45;
        case 3u:
        case 0xAu:
        case 0x20u:
          v21 = *(_DWORD*)(a1 + 104);
          switch (v21) {
          case 1:
            v17 = 983040;
            break;
          case 4:
            v17 = 0x10000;
            break;
          case 2:
            v17 = 0x40000;
            break;
          default:
            goto LABEL_49;
          }
          break;
        case 0x50u:
          goto LABEL_57;
        default:
          goto LABEL_113;
        }
        goto LABEL_112;
      }
      if (v19 == 112 || v19 == 144) {
      LABEL_45:
        v24 = *(_DWORD*)(a1 + 104);
        switch (v24) {
        case 1:
          v17 = 1769472;
          goto LABEL_112;
        case 4:
          v17 = 196608;
          goto LABEL_112;
        case 2:
          v17 = 786432;
          goto LABEL_112;
        default:
          break;
        }
      }
      else {
        if (v19 != 128) {
          goto LABEL_113;
        }
      LABEL_41:
        v23 = *(_DWORD*)(a1 + 104);
        switch (v23) {
        case 1:
          v17 = 1900544;
          goto LABEL_112;
        case 4:
          v17 = 0x80000;
          goto LABEL_112;
        case 2:
          v17 = 1572864;
        LABEL_112:
          *(_DWORD*)(a1 + 220) = v17;
        LABEL_113:
          v25 = (unsigned __int8)v18;
          if ((unsigned __int8)v18 <= 0x4Fu) {
          LABEL_114:
            if ((unsigned int)v25 > 0x20) {
              goto LABEL_122;
            }
            if (((1LL << v25) & 0xE) != 0) {
              v17 |= 0x6000u;
            }
            else if (((1LL << v25) & 0x700) != 0) {
              v17 |= 0x7000u;
            }
            else {
              if (((1LL << v25) & 0x100010000LL) == 0) {
                goto LABEL_122;
              }
              v17 |= 0x2000u;
            }
            goto LABEL_121;
          }
        LABEL_50:
          if (v25 <= 111) {
            if (v25 != 80) {
              v20 = v17;
              if (v25 != 96) {
                goto LABEL_122;
              }
            LABEL_57:
              v17 = v20 & 0x1F0FFF;
              goto LABEL_121;
            }
          }
          else if (v25 != 112) {
            if (v25 != 128 && v25 != 144) {
            LABEL_122:
              v47 = *(_DWORD*)(a1 + 104);
              switch (v47) {
              case 4:
                v49 = v17 & 0xFFFFF000;
                if (v18 == 3680) {
                  v50 = 2716;
                }
                else {
                  v50 = 2842;
                }
                v48 = v49 | v50;
                break;
              case 2:
                *(_DWORD*)(a1 + 220) = v17 & 0xFFFFFFC0 | 0x1A;
                goto LABEL_132;
              case 1:
                v48 = v17 & 0xFFFFFFF8 | 2;
                break;
              default:
                goto LABEL_132;
              }
              *(_DWORD*)(a1 + 220) = v48;
            LABEL_132:
              if (*(_DWORD*)(a1 + 552) != 0) {
                v51 = *(_DWORD*)(a1 + 140);
                result = *(_QWORD*)(a1 + 56);
                v52 = v51;
                v53 = *(_DWORD*)(a1 + 144);
                v54 = *(_DWORD*)(a1 + 52);
                v55 = HIDWORD(result);
                if (v54 != 0) {
                LABEL_134:
                  LANES128(v56).n128_u32[3] = 0x20000000;
                  LANES128(v56).n128_u32[0] = result & 0xFFFFFFE0;
                  v57 = 29360128;
                  LANES128(v56).n128_u32[1] = v55 & 0x1FFFFFF;
                  LANES128(v56).n128_u32[2] = (v54 >> 5) & 0x1FFFF;
                  *(int8x16_t*)(a1 + 208) = vorrq_s8(
                      vandq_s8(*(int8x16_t*)(a1 + 208),
                               COERCE_AS(int8x16_t, CudaDriverData_11160a0)),
                      v56);
                  goto LABEL_137;
                }
              }
              else {
                result = CudaDriverRoutine_8aaa0((__int64)v5, v16);
                v51 = v5[3];
                v52 = v5[28] / v5[27];
                v53 = v5[4];
                v54 = *(_DWORD*)(a1 + 52);
                v55 = HIDWORD(result);
                if (v54 != 0) {
                  goto LABEL_134;
                }
              }
              v58 = *(_DWORD*)(a1 + 212) & 0xFE000000 | v55 & 0x1FFFFFF;
              v59 = *(_DWORD*)(a1 + 220);
              *(_DWORD*)(a1 + 208) = result;
              *(_DWORD*)(a1 + 212) = v58;
              *(_DWORD*)(a1 + 216) = v51 - 1;
              *(_DWORD*)(a1 + 220) = v59 & 0xFFFFFFF | 0x50000000;
              v57 = 25165824;
            LABEL_137:
              *(_DWORD*)(a1 + 224) = (v52 - 1) & 0x1FFFF | v57 |
                                     *(_DWORD*)(a1 + 224) & 0xEC3E0000 |
                                     0x10000000;
              if (v54 != 0) {
                v60 = v53 != 0;
                v61 = v53 - 1;
                if (!v60) {
                  v61 = 0;
                }
                *(_DWORD*)(a1 + 228) =
                    *(_DWORD*)(a1 + 228) & 0xFFFE0000 | v61 & 0x1FFFF;
              }
              return result;
            }
            v17 |= 0x1000u;
          LABEL_121:
            *(_DWORD*)(a1 + 220) = v17;
            goto LABEL_122;
          }
          v17 &= 0x1F0FFFu;
          goto LABEL_121;
        default:
          break;
        }
      }
    LABEL_49:
      v17 = 0;
      v25 = (unsigned __int8)*(_DWORD*)(a1 + 96);
      if ((unsigned int)v25 <= 0x4F) {
        goto LABEL_114;
      }
      goto LABEL_50;
    }
  }
  v6 = *(_QWORD*)(a1 + 72);
  v7 = *(_QWORD*)(v6 + 200);
  if (v7 != 0) {
    v8 = **(_QWORD**)(v7 + 64);
  }
  else {
    v8 = *(_QWORD*)(a1 + 72);
  }
  v9 = *(_DWORD*)(v6 + 128);
  v10 = *(_DWORD*)(a1 + 96);
  v11 = *(_QWORD*)a1;
  v12 = 0;
  *(_OWORD*)(a1 + 208) = (__typeof__(*(_OWORD*)(a1 + 208))){0};
  *(_OWORD*)(a1 + 224) = (__typeof__(*(_OWORD*)(a1 + 224))){0};
  v13 = 589824;
  switch ((char)v10) {
  case 1:
  case 8:
  case 96:
  case -128:
  case -64:
  case -63:
  case -62:
  case -58:
  case -57:
  case -56:
    v15 = *(_DWORD*)(a1 + 104);
    switch (v15) {
    case 1:
      v13 = 1900544;
      break;
    case 4:
      v13 = 0x80000;
      break;
    case 2:
      v13 = 1572864;
      break;
    default:
      goto LABEL_32;
    }
    goto LABEL_60;
  case 2:
  case 9:
  case 16:
  case 112:
  case -112:
  case -61:
  case -60:
  case -59:
  case -55:
  case -54:
  case -53:
    v14 = *(_DWORD*)(a1 + 104);
    switch (v14) {
    case 1:
      v13 = 1769472;
      break;
    case 4:
      v13 = 196608;
      break;
    case 2:
      v13 = 786432;
      break;
    default:
      goto LABEL_32;
    }
    goto LABEL_60;
  case 3:
  case 10:
  case 32:
  case -96:
    v22 = *(_DWORD*)(a1 + 104);
    switch (v22) {
    case 1:
      v13 = 983040;
      goto LABEL_60;
    case 4:
      v13 = 0x10000;
      goto LABEL_60;
    case 2:
      v13 = 0x40000;
    LABEL_60:
      *(_DWORD*)(a1 + 220) = v13;
      v12 = v13;
    LABEL_61:
      v10 = (unsigned __int16)v10;
      if (v3 != 0) {
        goto LABEL_62;
      }
      goto LABEL_64;
    default:
      break;
    }
  LABEL_32:
    v12 = 0;
    v10 = (unsigned __int16)v10;
    if (v3 != 0) {
    LABEL_62:
      switch ((char)v10) {
      case 1:
      case 2:
      case 3:
        goto LABEL_64;
      case 8:
      case 9:
      case 10:
        v12 |= 0x7000u;
        goto LABEL_65;
      case 16:
      case 32:
        v12 |= 0x2000u;
        goto LABEL_65;
      case 80:
      case 96:
      case 112:
      case -64:
      case -63:
      case -62:
      case -61:
      case -60:
      case -59:
        goto LABEL_65;
      case -128:
      case -112:
      case -58:
      case -57:
      case -56:
      case -55:
      case -54:
      case -53:
        v12 |= 0x1000u;
        goto LABEL_65;
      default:
        goto LABEL_66;
      }
    }
  LABEL_64:
    v12 |= 0x6000u;
  LABEL_65:
    *(_DWORD*)(a1 + 220) = v12;
  LABEL_66:
    v26 = *(_DWORD*)(a1 + 104);
    switch (v26) {
    case 4:
      v28 = v12 & 0x1FF000;
      if (v3 != 0 && v10 == 3680) {
        v29 = 2716;
      }
      else {
        v29 = 2842;
      }
      v27 = v28 | v29;
      break;
    case 2:
      v27 = v12 & 0x1FFFC0 | 0x1A;
      break;
    case 1:
      v27 = v12 & 0x1FFFF8 | 2;
      break;
    default:
      goto LABEL_77;
    }
    *(_DWORD*)(a1 + 220) = v27;
  LABEL_77:
    CudaDriverRoutine_8aaa0(v8, v11);
    v30 = *(_DWORD*)(a1 + 208);
    *(_DWORD*)(a1 + 208) =
        CudaDriverRoutine_8aaa0(v8, v11) & 0xFFFFFE00 | v30 & 0x1FF;
    CudaDriverRoutine_8aaa0(v8, v11);
    v31 = *(_DWORD*)(a1 + 212);
    result = CudaDriverRoutine_8aaa0(v8, v11);
    v32 = *(_DWORD*)(a1 + 216);
    v33 = *(_DWORD*)(a1 + 220);
    *(_DWORD*)(a1 + 212) = v31 & 0xFE000000 | HIDWORD(result) & 0x1FFFFFF;
    *(_DWORD*)(a1 + 220) = v33 & 0xFFFFFFF | 0x30000000;
    v34 = v32 & 0xFFFFFFF8 | *(_DWORD*)(v8 + 40) & 7;
    *(_DWORD*)(a1 + 216) = v34;
    v35 = v34 & 0xFFFFFFC7 | (8 * (*(_DWORD*)(v8 + 44) & 7));
    *(_DWORD*)(a1 + 216) = v35;
    v36 = v35 & 0xFFFFFE3F | ((*(_DWORD*)(v8 + 48) & 7) << 6);
    *(_DWORD*)(a1 + 216) = v36;
    v37 = *(_QWORD*)(v8 + 200);
    if (v37 != 0) {
      *(_DWORD*)(a1 + 216) =
          (v36 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v37 + 40) << 28)) -
          0x10000000;
    }
    v38 = *(_DWORD*)(a1 + 224) & 0xFFFE0000 |
          (*(_DWORD*)(v8 + 112) / *(_DWORD*)(v8 + 108) - 1) & 0x1FFFF;
    *(_DWORD*)(a1 + 224) = v38;
    v39 = *(_DWORD*)(v8 + 8);
    if (v39 > 3) {
      v40 = v38 & 0xFC3FFFFF | 0x1400000;
      if (v39 == 4) {
        v38 = v38 & 0xFC3FFFFF | 0x1000000;
      }
      if ((unsigned int)(v39 - 5) < 3) {
        v38 = v40;
      }
      goto LABEL_93;
    }
    if (v39 == 1) {
      if (*(_BYTE*)(a1 + 528) == 0) {
        v38 &= 0xFC3FFFFF;
        goto LABEL_93;
      }
    }
    else if (v39 != 2) {
      if (v39 == 3) {
        v38 = v38 & 0xFC3FFFFF | 0x800000;
      }
      goto LABEL_93;
    }
    v41 = v38 & 0xFC3FFFFF;
    v42 = v41 | 0x400000;
    v38 = v41 | 0x1C00000;
    if (*(_QWORD*)(v8 + 200) != 0) {
      v38 = v42;
    }
  LABEL_93:
    *(_DWORD*)(a1 + 224) = v38 | 0x10000000;
    v43 = *(_DWORD*)(v8 + 16);
    if (v43 != 0) {
      v44 = (v43 - 1) & 0x1FFFF;
    }
    else {
      v44 = 0;
    }
    *(_DWORD*)(a1 + 228) = v44 | *(_DWORD*)(a1 + 228) & 0xFFFE0000;
    v45 = *(_DWORD*)(v8 + 20);
    if (v45 != 0) {
      v46 = (v45 << 17) - 0x20000;
    }
    else {
      v46 = 0;
    }
    *(_DWORD*)(a1 + 228) = v46 | v44;
    if (*(_QWORD*)(v8 + 200) != 0) {
      *(_DWORD*)(a1 + 236) =
          *(_DWORD*)(a1 + 236) & 0xFFFFFF00 | (16 * (v9 & 0xF)) | v9 & 0xF;
    }
    return result;
  case 80:
    goto LABEL_60;
  default:
    goto LABEL_61;
  }
}

__int64 cuda_driver_1a8040(__int64 result, unsigned __int64 a2, unsigned int a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  int64x2_t v7;
  float* v8;
  __int64 v9;
  int64x2_t v10;
  int64x2_t v11;
  int64x2_t v12;
  int64x2_t v15;
  __int64 v16;
  int64x2_t v17;
  int64x2_t v18;
  float* v19;
  int32x2_t v20;
  unsigned __int64 v21;
  float32x4x4_t v22;
  float32x4x4_t v23;

  v3 = a2 + a3;
  if (a2 < v3) {
    v4 = a2 + 256;
    if (v3 > a2 + 256) {
      v4 = a2 + a3;
    }
    v5 = v4 + ~a2;
    if (v5 < 0x700) {
      v6 = a2;
      do {
      LABEL_9:
        v21 = v6 >> 8;
        *(_QWORD*)(result + 8) = 0x1200120B0LL;
        v6 += 256LL;
        *(_DWORD*)result = 536944813;
        *(_DWORD*)(result + 4) = v21;
        result += 16;
      } while (v6 < v3);
      return result;
    }
    v7 = vdupq_n_s64(a2);
    v8 = (float*)(result + 64);
    v9 = (v5 >> 8) + 1;
    v6 = a2 + ((v9 & 0x1FFFFFFFFFFFFF8LL) << 8);
    result += 16 * (v9 & 0x1FFFFFFFFFFFFF8LL);
    v10 = vaddq_s64(v7, COERCE_AS(int64x2_t, CudaDriverData_11161c0));
    v11 = vaddq_s64(v7, COERCE_AS(int64x2_t, CudaDriverData_11157f0));
    v12 = vdupq_n_s64(0x400u);
    v22.val[0] = vdupq_n_s32(0x200120ADu);
    v22.val[2] = vdupq_n_s32(0x200120B0u);
    LANES128(v22.val[3]).n128_u64[0] = 0x100000001LL;
    LANES128(v22.val[3]).n128_u64[1] = 0x100000001LL;
    v15 = vdupq_n_s64(0x800u);
    v16 = v9 & 0x1FFFFFFFFFFFFF8LL;
    do {
      v17 = vaddq_s64(v11, v12);
      v18 = vaddq_s64(v10, v12);
      v19 = v8 - 16;
      v16 -= 8;
      LANES64(v20).n64_u64[0] = LANES64_OF(vshrn_n_s64(v11, 8u)).n64_u64[0];
      v11 = vaddq_s64(v11, v15);
      v23.val[1] = vshrn_high_n_s64(v20, v10, 8u);
      v10 = vaddq_s64(v10, v15);
      v22.val[1] = vshrn_high_n_s64(vshrn_n_s64(v17, 8u), v18, 8u);
      v23.val[0] = v22.val[0];
      v23.val[2] = v22.val[2];
      v23.val[3] = v22.val[3];
      vst4q_f32(v8, v22);
      v8 += 32;
      vst4q_f32(v19, v23);
    } while (v16 != 0);
    if (v9 != (v9 & 0x1FFFFFFFFFFFFF8LL)) {
      goto LABEL_9;
    }
  }
  return result;
}

__int64 cuda_driver_1a9930(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned int v2;
  void* v3;
  _OWORD* v4;
  __int64 v5;
  char v6;
  int v7;
  __int16 v8;
  int64x2_t v9;
  char v10;
  int v11;
  unsigned int v12;
  char v13;
  __int16 v14;
  bool v15;
  char v16;
  char v17;
  unsigned int v18;
  int32x2_t v19;
  char v20;
  int v21;
  int v22;
  int v23;
  char v24;
  int v25;
  char v26;
  int v27;
  int v28;
  __int128 v29;
  int v30;
  __int64 result;
  char v32;

  v2 = 0;
  v3 = CudaDriverData_1422118;
  *(_DWORD*)(a1 + 4164) = 0x10000;
  *(_BYTE*)(a1 + 3744) = 0;
  *(_OWORD*)(a1 + 3756) = CudaDriverData_1115480;
  *(_DWORD*)(a1 + 4240) = 16;
  v4 = (_OWORD*)(a1 + 3384);
  *(_OWORD*)(a1 + 3788) = CudaDriverData_11159e0;
  *(_OWORD*)(a1 + 3772) = CudaDriverData_1115f70;
  *(_OWORD*)(a1 + 3804) = CudaDriverData_1115b00;
  *(_OWORD*)(a1 + 3820) = CudaDriverData_1115810;
  *(_OWORD*)(a1 + 3836) = CudaDriverData_11156d0;
  *(_OWORD*)(a1 + 3852) = CudaDriverData_1115620;
  *(_OWORD*)(a1 + 3868) = CudaDriverData_1115570;
  *(_DWORD*)(a1 + 3888) = 128;
  v5 = a1 + 16836;
  *(_OWORD*)(a1 + 4148) = CudaDriverData_11162a0;
  *(_DWORD*)(a1 + 3736) = 2;
  *(_QWORD*)(a1 + 4232) = 0x801000000LL;
  v6 = *((_BYTE*)&CudaDriverRoutine_4338 + (_QWORD)v3);
  *(_DWORD*)(a1 + 4244) = 8;
  *(_OWORD*)(a1 + 3892) = CudaDriverData_1115680;
  *(_OWORD*)(a1 + 3908) = CudaDriverData_11153b0;
  *(_OWORD*)(a1 + 3924) = CudaDriverData_1115960;
  *(_OWORD*)(a1 + 3940) = CudaDriverData_1115e30;
  *(_OWORD*)(a1 + 3956) = CudaDriverData_11162b0;
  *(_OWORD*)(a1 + 3972) = CudaDriverData_1116000;
  if ((v6 & 3) != 0) {
    v7 = 8;
  }
  else {
    v7 = 16;
  }
  *(_DWORD*)(a1 + 4240) = v7;
  *(_OWORD*)(a1 + 3988) = CudaDriverData_11158a0;
  *(_OWORD*)(a1 + 4084) = CudaDriverData_11158b0;
  *(_OWORD*)(a1 + 4004) = CudaDriverData_1115a50;
  *(_OWORD*)(a1 + 4020) = CudaDriverData_1116210;
  *(_OWORD*)(a1 + 4036) = CudaDriverData_11158c0;
  *(_OWORD*)(a1 + 4052) = CudaDriverData_11153c0;
  *(_DWORD*)(a1 + 4100) = 0x8000;
  *(_OWORD*)(a1 + 4132) = CudaDriverData_1115bb0;
  *(_OWORD*)(a1 + 4068) = CudaDriverData_1115cf0;
  *(_QWORD*)(a1 + 4104) = 0x7FFFFFFF00000080LL;
  *(_QWORD*)(a1 + 4288) = 0x10000000000LL;
  *(_QWORD*)(a1 + 17120) = 0x427A000000000010LL;
  *(_QWORD*)(a1 + 4168) = 0x200000004LL;
  *(_DWORD*)(a1 + 4208) = 256;
  *(_OWORD*)(a1 + 4192) = CudaDriverData_1116060;
  *(_QWORD*)(a1 + 17128) = 0x100000000LL;
  *(_QWORD*)(a1 + 4216) = 0x8000000100LL;
  v8 = *(_WORD*)(a1 + 16848);
  *(_OWORD*)(a1 + 17136) = CudaDriverData_11153d0;
  v9 = vdupq_n_s64(0x1000000u);
  *(int64x2_t*)(a1 + 17152) = v9;
  if ((v8 & 0x80) == 0) {
    PSEUDO_LOW_LANE128(v9, n128_u32, *(_DWORD*)(a1 + 4116));
    v2 = (unsigned int)((double)LANES128(v9).n128_u64[0] *
                        0x1.f400000000000p+5 / 0x1.9000000000000p+6);
  }
  *(_DWORD*)(a1 + 4120) = v2;
  *(_DWORD*)(a1 + 14472) = 8;
  v10 = *(_BYTE*)(a1 + 16856);
  *(_DWORD*)(a1 + 14764) = 2;
  *(_DWORD*)(a1 + 4228) = 0x8000000;
  *(_DWORD*)(a1 + 3460) = 128;
  *(_DWORD*)v5 = 0;
  *(_DWORD*)(a1 + 3416) = 148;
  *(_WORD*)(a1 + 17080) = 257;
  *(_DWORD*)(a1 + 11792) = 12;
  *(_BYTE*)(a1 + 16840) = 1;
  *v4 = CudaDriverData_1115e40;
  *(_OWORD*)(a1 + 3400) = CudaDriverData_1115c00;
  *(_OWORD*)(a1 + 3428) = CudaDriverData_1115c10;
  *(_OWORD*)(a1 + 3444) = CudaDriverData_1116160;
  *(_OWORD*)(a1 + 11776) = CudaDriverData_1115260;
  v11 = *(_DWORD*)(a1 + 16976);
  *(_OWORD*)(a1 + 11732) = CudaDriverData_11156e0;
  *(_OWORD*)(a1 + 11760) = CudaDriverData_1115670;
  v12 = v11 & 0xFFFFC7F2 | 0x380C;
  *(_DWORD*)(a1 + 11748) = 28;
  *(_OWORD*)(a1 + 11700) = CudaDriverData_11157a0;
  *(_OWORD*)(a1 + 11716) = CudaDriverData_1115300;
  *(_DWORD*)(a1 + 16976) = v12;
  *(_BYTE*)(a1 + 16856) = v10 | 1;
  *(_OWORD*)(a1 + 4368) = CudaDriverData_11162d0;
  v13 = *(_BYTE*)(a1 + 16996);
  v14 = *(_WORD*)((char*)&CudaDriverRoutine_41b0 + (_QWORD)v3);
  LOBYTE(v11) = *(_BYTE*)(a1 + 17015);
  *(_DWORD*)(a1 + 17008) = 1;
  v15 = (v14 & 0x1000) == 0;
  v16 = v13 | 6;
  v17 = v13 & 0xF9 | 2;
  *(_BYTE*)(a1 + 17015) = v11 | 1;
  if (v15) {
    v17 = v16;
    v18 = 1;
  }
  else {
    v18 = 0;
  }
  LANES64(v19).n64_u64[0] = LANES64_OF(vdup_n_s32(v18)).n64_u64[0];
  v20 = *(_BYTE*)(a1 + 17012);
  *(_BYTE*)(a1 + 16996) = v17;
  *(_BYTE*)(a1 + 17012) = v20 | 3;
  v21 = *((unsigned __int8*)((_UNKNOWN*)0x1878LL) + (_QWORD)v3);
  *(_BYTE*)(a1 + 17014) = 1;
  v22 = *(_DWORD*)(a1 + 3756);
  *(_BYTE*)(a1 + 17013) = v21 == 0;
  v23 = *(_DWORD*)(a1 + 3768);
  *(_DWORD*)(a1 + 17024) = v22;
  *(_DWORD*)(a1 + 17028) = v23;
  *(int8x8_t*)(a1 + 17000) =
      vbsl_s8(vcltz_s32(vshl_n_s32(v19, 0x1Fu)),
              COERCE_AS(int8x8_t, 0x7F00000002LL), COERCE_AS(int8x8_t, 1LL));
  LOWORD(v22) = *(_WORD*)((char*)((_UNKNOWN*)0x1870LL) + (_QWORD)v3);
  *(_QWORD*)(a1 + 17016) = 0x800000020LL;
  if ((v22 & 1) == 0 || *(_DWORD*)(a1 + 21864) == 4) {
    v8 |= 8u;
  }
  *(_BYTE*)(a1 + 17082) = 0;
  *(_WORD*)(a1 + 17060) = 0;
  *(_DWORD*)(a1 + 17064) = 0;
  *(_DWORD*)(a1 + 17056) = 0;
  *(_WORD*)(a1 + 16848) = v8 | 0x10;
  *(_DWORD*)(a1 + 17048) = 32;
  *(_DWORD*)(a1 + 17072) = 2048;
  *(_DWORD*)(a1 + 16976) = v12 & 0xFFFFBC0E | 0x4370;
  v24 = *(_BYTE*)(a1 + 17272);
  *(_WORD*)(a1 + 17098) = 257;
  *(_QWORD*)(a1 + 17036) = 0x4000000000LL;
  *(_QWORD*)(a1 + 17104) = 0x80000003A4LL;
  *(_BYTE*)(a1 + 17044) = 1;
  *(_BYTE*)(a1 + 17062) = 1;
  v25 = *(_DWORD*)((char*)&CudaDriverRoutine_4464 + (_QWORD)v3);
  *(_BYTE*)(a1 + 17272) = v24 & 0xFD;
  v26 = *(_BYTE*)(a1 + 17280);
  *(_BYTE*)(a1 + 17117) = 1;
  *(_BYTE*)(a1 + 16851) = 1;
  *(_DWORD*)(a1 + 16852) = 0;
  *(_BYTE*)(a1 + 17332) = 0;
  *(_QWORD*)(a1 + 17320) = 128;
  *(_DWORD*)(a1 + 3720) = 4;
  *(_OWORD*)(a1 + 17168) = CudaDriverData_11154e0;
  *(_OWORD*)(a1 + 17184) = CudaDriverData_11162e0;
  *(_DWORD*)(a1 + 17112) = v25;
  *(_BYTE*)(a1 + 17280) = v26 | 1;
  *(_WORD*)(a1 + 17281) = 4;
  *(_OWORD*)(a1 + 4248) = CudaDriverData_1116220;
  *(_OWORD*)(a1 + 4264) = CudaDriverData_1115dc0;
  *(_DWORD*)(a1 + 14844) = CudaDriverRoutine_1a9070((_DWORD*)a1, 0);
  *(_DWORD*)(a1 + 14848) = CudaDriverRoutine_1a9070((_DWORD*)a1, 1);
  *(_DWORD*)(a1 + 14852) = CudaDriverRoutine_1a9070((_DWORD*)a1, 2);
  v27 = CudaDriverRoutine_1a9070((_DWORD*)a1, 3);
  v28 = *(_DWORD*)(a1 + 3148);
  *(_DWORD*)(a1 + 14856) = v27;
  if (v28 != 52) {
    return 100;
  }
  *(_QWORD*)&v29 = 0x900000009LL;
  *((_QWORD*)&v29 + 1) = 0x900000009LL;
  *(_DWORD*)(a1 + 4224) = 128;
  *(_DWORD*)(a1 + 3724) = 72;
  *(_DWORD*)(a1 + 4180) = 12;
  *(_DWORD*)(a1 + 3732) = 72 * *(_DWORD*)(a1 + 3736);
  *(_DWORD*)(a1 + 3512) = 9;
  v4[6] = CudaDriverData_11157b0;
  v4[7] = v29;
  *(_OWORD*)(a1 + 3516) = (__typeof__(*(_OWORD*)(a1 + 3516))){0};
  *(_OWORD*)(a1 + 3532) = (__typeof__(*(_OWORD*)(a1 + 3532))){0};
  *(_QWORD*)(a1 + 3712) = 0x800000048LL;
  if ((*((_BYTE*)&CudaDriverRoutine_419c + (_QWORD)v3) & 1) != 0) {
    *(_DWORD*)(a1 + 4148) =
        *(_DWORD*)((char*)&CudaDriverRoutine_41a0 + (_QWORD)v3);
  }
  v30 = *(_DWORD*)((char*)&CudaDriverRoutine_41a4 + (_QWORD)v3);
  if (v30 != 0) {
    *(_DWORD*)(a1 + 4160) = v30;
  }
  result = 0;
  *(_DWORD*)(a1 + 3884) = *(_DWORD*)(a1 + 4152) - *(_DWORD*)(a1 + 4148);
  *(_DWORD*)(a1 + 14752) = 0x200000;
  *(_DWORD*)(v5 + 140) |= 0x18000u;
  *(__int64 (**)(void))(a1 + 18360) = CudaDriverData_14235b0[0];
  *(_BYTE*)(v5 + 152) |= 0x18u;
  v32 = *(_BYTE*)(v5 + 160) & 0xFE;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v3) == 0) {
    ++v32;
  }
  *(_BYTE*)(v5 + 160) = v32;
  *(_BYTE*)(v5 + 436) |= 4u;
  *(_QWORD*)(a1 + 4280) = 0x200000000000000LL;
  *(_BYTE*)(v5 + 492) = 1;
  return result;
}

__int64 cuda_driver_1aace0(__int64 a1, double* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  __int64* v14;
  __int64 v15;
  __int64 v17;
  _OWORD* v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  unsigned int* v22;
  __int64 v23;
  char v24;
  unsigned __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int16 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  char v42;
  char v43;
  __int64 v44;
  __int64 v45;
  _DWORD* v46;
  __int128 v47;
  _OWORD* v48;
  __int128 v49;
  __int128 v50;
  __int128 v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  int v77;
  _DWORD* v78;
  unsigned int v79;
  unsigned int v80;
  int32x2_t v81;
  int v82;
  int v83;
  int v84;
  __int64 v85;
  int v86;
  __int64 v87;
  __int64 v88;
  int v89;
  __int64 v90;
  unsigned __int64 v91;
  int v92;
  unsigned int v93;
  __int128 v94;
  __int64 v95;

  *(_OWORD*)(a1 + 15992) = CudaDriverData_1115f30;
  *(_QWORD*)(a1 + 16008) = 1024;
  if (CudaDriverData_143bc00 != 0) {
    v4 = vcvtmd_u64_f64(*(double*)&CudaDriverData_143bc08 *
                        0x1.0000000000000p+5);
    if (v4 >= 0x400) {
      v4 = 1024;
    }
    *(_QWORD*)(a1 + 16008) = v4;
  }
  *(_DWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 16016) = 0x800000;
  *(_QWORD*)(a1 + 16048) = 64;
  v5 = *(_QWORD*)(a1 + 64);
  *(_OWORD*)(a1 + 16032) = CudaDriverData_11156f0;
  LODWORD(v5) = (*(_DWORD*)(v5 + 3756) * *(_DWORD*)(v5 + 3732)) << 10;
  if ((unsigned int)v5 <= 0x100000) {
    v5 = 0x100000;
  }
  else {
    v5 = (unsigned int)v5;
  }
  *(_QWORD*)(a1 + 16024) = v5;
  *(_BYTE*)(a1 + 16316) |= 1u;
  v6 = CudaDriverStub_12e330(4528);
  if (v6 == 0 || (v7 = v6, memset_plt(v6, 0, 4528), v8 = *(_QWORD*)(a1 + 64),
                  *(_QWORD*)(a1 + 16104) = v7,
                  v9 = CudaDriverStub_12e330(*(unsigned int*)(v8 + 3808)),
                  *(_QWORD*)v7 = v9, v9 == 0)) {
    v13 = 2;
    v14 = *(__int64**)(a1 + 16104);
    if (v14 == nullptr) {
      return v13;
    }
    goto LABEL_14;
  }
  v10 = *(_DWORD**)(a1 + 64);
  v95 = 0;
  v11 = (unsigned int)(16 * v10[939] * v10[981] * v10[933]);
  CudaDriverRoutine_ee010((unsigned __int64*)&v94, 0);
  *(_QWORD*)&v94 = v94 & 0xFFFFFFF883FFFFFFLL | 0x11C000000LL;
  v12 = CudaDriverRoutine_ee030(a1, v11, &v95, &v94);
  if (v12 != 0) {
    v13 = v12;
    v14 = *(__int64**)(a1 + 16104);
    if (v14 == nullptr) {
      return v13;
    }
  LABEL_14:
    v15 = v14[1];
    if (v15 != 0) {
      CudaDriverRoutine_ee2a0(a1, v15);
    }
    if (*v14 != 0) {
      CudaDriverRoutine_12e340(*v14);
    }
    memset_plt(v14, 0, 4528);
    CudaDriverRoutine_12e340((__int64)v14);
    *(_QWORD*)(a1 + 16104) = 0;
    return v13;
  }
  *(_QWORD*)(v7 + 8) = v95;
  *(_QWORD*)(v7 + 16) = v11;
  v17 = *(_QWORD*)(a1 + 64);
  v18 = (_OWORD*)(v7 + 4376);
  v19 = *(_DWORD*)(v17 + 4384);
  v20 = *(_DWORD*)(v17 + 3736);
  if (v19 != 0) {
    v21 = 1372;
    v22 = *(unsigned int**)(a1 + 64);
    do {
      v23 =
          *(unsigned __int16*)(v17 + 7536 + ((unsigned __int64)v22[1116] << 6) +
                               4LL * v22[1372]);
      *(_BYTE*)(v7 + 3096 + v23) = v22[2140];
      v24 = v22[2396];
      ++v22;
      *(_BYTE*)(v7 + 3352 + v23) = v24;
      v25 = v21 - 1371;
      ++v21;
    } while (v25 < *(unsigned int*)(v17 + 4384));
  }
  if (v20 <= v19) {
    v26 = v19 / v20;
    v27 = v7 + 3096;
    v28 = v7 + 3352;
    v29 = v7 + 3608;
    v30 = v26 <= 1 ? 1 : v26;
    v31 = v30 & 3;
    if (v26 >= 4) {
      v33 = v30 & 0xFFFFFFFC;
      v32 = 0;
      do {
        v34 = *(unsigned __int8*)(v27 + ((unsigned __int16)v32 & 0xFFFC));
        *(_WORD*)(v29 + 32 * v34 +
                  2LL * *(unsigned __int8*)(v28 + ((unsigned __int16)v32 &
                                                   0xFFFC))) = v32;
        ++*((_DWORD*)v18 + v34);
        v35 = *(unsigned __int8*)(v27 + ((v32 + 1) & 0xFFFDLL));
        *(_WORD*)(v29 + 32 * v35 +
                  2LL * *(unsigned __int8*)(v28 + ((v32 + 1) & 0xFFFDLL))) =
            v32 + 1;
        ++*((_DWORD*)v18 + v35);
        v36 = (unsigned __int16)(v32 + 2) & 0xFFFE;
        v37 = *(unsigned __int8*)(v27 + v36);
        *(_WORD*)(v29 + 32 * v37 + 2LL * *(unsigned __int8*)(v28 + v36)) =
            v32 + 2;
        ++*((_DWORD*)v18 + v37);
        v38 = v32 + 3;
        v32 += 4;
        v39 = *(unsigned __int8*)(v27 + v38);
        *(_WORD*)(v29 + 32 * v39 + 2LL * *(unsigned __int8*)(v28 + v38)) = v38;
        ++*((_DWORD*)v18 + v39);
      } while (v33 != v32);
    }
    else {
      v32 = 0;
    }
    for (; v31 != 0; ++*((_DWORD*)v18 + v40)) {
      --v31;
      v40 = *(unsigned __int8*)(v27 + (unsigned __int16)v32);
      *(_WORD*)(v29 + 32 * v40 +
                2LL * *(unsigned __int8*)(v28 + (unsigned __int16)v32)) = v32;
      ++v32;
    }
  }
  v41 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3712LL);
  v42 = 0x80 - v41;
  if ((unsigned int)(128 - v41) < 0x20) {
    v46 = (_DWORD*)(v7 + 4484);
  }
  else {
    v43 = 96 - v41;
    v44 = ((unsigned int)(96 - v41) >> 3) & 0x1FFFFFFC;
    v45 = v7 - v44;
    memset_plt(v7 - v44 + 4484, 255, v44 + 4);
    v42 = v43 & 0x1F;
    v46 = (_DWORD*)(v45 + 4480);
  }
  *v46 = -1LL << (32 - v42);
  v47 = *v18;
  v48 = *(_OWORD**)(a1 + 64);
  v48[227] = *(_OWORD*)(v7 + 4392);
  v48[226] = v47;
  v49 = *(_OWORD*)(v7 + 4408);
  v50 = *(_OWORD*)(v7 + 4424);
  v51 = *(_OWORD*)(v7 + 4440);
  v48[231] = *(_OWORD*)(v7 + 4456);
  v48[230] = v51;
  v48[229] = v50;
  v48[228] = v49;
  qsort_plt(*(_QWORD*)(a1 + 64) + 3616LL, 24, 4, CudaDriverRoutine_b0ce0);
  v52 = *(_DWORD*)(v7 + 4376);
  v53 = *(_DWORD*)(v7 + 4380);
  if (v52 != 0) {
    v54 = *(_DWORD*)(v7 + 4384);
    v55 = v53 != 0 && v53 < v52;
    if (v53 == 0 || v53 >= v52) {
      v53 = *(_DWORD*)(v7 + 4376);
    }
    goto LABEL_41;
  }
  v54 = *(_DWORD*)(v7 + 4384);
  if (v53 != 0) {
    v55 = 1;
  LABEL_41:
    if (v54 != 0 && v54 < v53) {
      v55 = 2;
    }
    else {
      v54 = v53;
    }
    v56 = *(_DWORD*)(v7 + 4388);
    goto LABEL_45;
  }
  v56 = *(_DWORD*)(v7 + 4388);
  if (v54 != 0) {
    v55 = 2;
  LABEL_45:
    if (v56 != 0 && v56 < v54) {
      v55 = 3;
    }
    else {
      v56 = v54;
    }
    v57 = *(_DWORD*)(v7 + 4392);
    goto LABEL_49;
  }
  v57 = *(_DWORD*)(v7 + 4392);
  if (v56 != 0) {
    v55 = 3;
  LABEL_49:
    if (v57 != 0 && v57 < v56) {
      v55 = 4;
    }
    else {
      v57 = v56;
    }
    v58 = *(_DWORD*)(v7 + 4396);
    goto LABEL_53;
  }
  v58 = *(_DWORD*)(v7 + 4396);
  if (v57 != 0) {
    v55 = 4;
  LABEL_53:
    if (v58 != 0 && v58 < v57) {
      v55 = 5;
    }
    else {
      v58 = v57;
    }
    v59 = *(_DWORD*)(v7 + 4400);
    goto LABEL_57;
  }
  v59 = *(_DWORD*)(v7 + 4400);
  if (v58 != 0) {
    v55 = 5;
  LABEL_57:
    if (v59 != 0 && v59 < v58) {
      v55 = 6;
    }
    else {
      v59 = v58;
    }
    v60 = *(_DWORD*)(v7 + 4404);
    goto LABEL_61;
  }
  v60 = *(_DWORD*)(v7 + 4404);
  if (v59 != 0) {
    v55 = 6;
  LABEL_61:
    if (v60 != 0 && v60 < v59) {
      v55 = 7;
    }
    else {
      v60 = v59;
    }
    v61 = *(_DWORD*)(v7 + 4408);
    goto LABEL_65;
  }
  v61 = *(_DWORD*)(v7 + 4408);
  if (v60 != 0) {
    v55 = 7;
  LABEL_65:
    if (v61 != 0 && v61 < v60) {
      v55 = 8;
    }
    else {
      v61 = v60;
    }
    v62 = *(_DWORD*)(v7 + 4412);
    goto LABEL_69;
  }
  v62 = *(_DWORD*)(v7 + 4412);
  if (v61 != 0) {
    v55 = 8;
  LABEL_69:
    if (v62 != 0 && v62 < v61) {
      v55 = 9;
    }
    else {
      v62 = v61;
    }
    v63 = *(_DWORD*)(v7 + 4416);
    goto LABEL_73;
  }
  v63 = *(_DWORD*)(v7 + 4416);
  if (v62 != 0) {
    v55 = 9;
  LABEL_73:
    if (v63 != 0 && v63 < v62) {
      v55 = 10;
    }
    else {
      v63 = v62;
    }
    v64 = *(_DWORD*)(v7 + 4420);
    goto LABEL_77;
  }
  v64 = *(_DWORD*)(v7 + 4420);
  if (v63 != 0) {
    v55 = 10;
  LABEL_77:
    if (v64 != 0 && v64 < v63) {
      v55 = 11;
    }
    else {
      v64 = v63;
    }
    v65 = *(_DWORD*)(v7 + 4424);
    goto LABEL_81;
  }
  v65 = *(_DWORD*)(v7 + 4424);
  if (v64 != 0) {
    v55 = 11;
  LABEL_81:
    if (v65 != 0 && v65 < v64) {
      v55 = 12;
    }
    else {
      v65 = v64;
    }
    v66 = *(_DWORD*)(v7 + 4428);
    goto LABEL_85;
  }
  v66 = *(_DWORD*)(v7 + 4428);
  if (v65 != 0) {
    v55 = 12;
  LABEL_85:
    if (v66 != 0 && v66 < v65) {
      v55 = 13;
    }
    else {
      v66 = v65;
    }
    v67 = *(_DWORD*)(v7 + 4432);
    goto LABEL_89;
  }
  v67 = *(_DWORD*)(v7 + 4432);
  if (v66 != 0) {
    v55 = 13;
  LABEL_89:
    if (v67 != 0 && v67 < v66) {
      v55 = 14;
    }
    else {
      v67 = v66;
    }
    v68 = *(_DWORD*)(v7 + 4436);
    goto LABEL_93;
  }
  v68 = *(_DWORD*)(v7 + 4436);
  if (v67 != 0) {
    v55 = 14;
  LABEL_93:
    if (v68 != 0 && v68 < v67) {
      v55 = 15;
    }
    else {
      v68 = v67;
    }
    v69 = *(_DWORD*)(v7 + 4440);
    goto LABEL_97;
  }
  v69 = *(_DWORD*)(v7 + 4440);
  if (v68 != 0) {
    v55 = 15;
  LABEL_97:
    if (v69 != 0 && v69 < v68) {
      v55 = 16;
    }
    else {
      v69 = v68;
    }
    v70 = *(_DWORD*)(v7 + 4444);
    goto LABEL_101;
  }
  v70 = *(_DWORD*)(v7 + 4444);
  if (v69 != 0) {
    v55 = 16;
  LABEL_101:
    if (v70 != 0 && v70 < v69) {
      v55 = 17;
    }
    else {
      v70 = v69;
    }
    v71 = *(_DWORD*)(v7 + 4448);
    goto LABEL_105;
  }
  v71 = *(_DWORD*)(v7 + 4448);
  if (v70 != 0) {
    v55 = 17;
  LABEL_105:
    if (v71 != 0 && v71 < v70) {
      v55 = 18;
    }
    else {
      v71 = v70;
    }
    v72 = *(_DWORD*)(v7 + 4452);
    goto LABEL_109;
  }
  v72 = *(_DWORD*)(v7 + 4452);
  if (v71 != 0) {
    v55 = 18;
  LABEL_109:
    if (v72 != 0 && v72 < v71) {
      v55 = 19;
    }
    else {
      v72 = v71;
    }
    v73 = *(_DWORD*)(v7 + 4456);
    goto LABEL_113;
  }
  v73 = *(_DWORD*)(v7 + 4456);
  if (v72 != 0) {
    v55 = 19;
  LABEL_113:
    if (v73 != 0 && v73 < v72) {
      v55 = 20;
    }
    else {
      v73 = v72;
    }
    v74 = *(_DWORD*)(v7 + 4460);
    goto LABEL_117;
  }
  v74 = *(_DWORD*)(v7 + 4460);
  if (v73 != 0) {
    v55 = 20;
  LABEL_117:
    if (v74 != 0 && v74 < v73) {
      v55 = 21;
    }
    else {
      v74 = v73;
    }
    v75 = *(_DWORD*)(v7 + 4464);
    goto LABEL_121;
  }
  v75 = *(_DWORD*)(v7 + 4464);
  if (v74 != 0) {
    v55 = 21;
  LABEL_121:
    if (v75 != 0 && v75 < v74) {
      v55 = 22;
    }
    else {
      v75 = v74;
    }
    v76 = *(_DWORD*)(v7 + 4468);
  LABEL_125:
    if (v76 != 0 && v76 < v75) {
      v77 = 23;
    }
    else {
      v76 = v75;
      v77 = v55;
    }
    v78 = *(_DWORD**)(a1 + 64);
    if (v76 == 1) {
      goto LABEL_129;
    }
    goto LABEL_173;
  }
  v76 = *(_DWORD*)(v7 + 4468);
  if (v75 != 0) {
    v55 = 22;
    goto LABEL_125;
  }
  v77 = 23;
  v78 = *(_DWORD**)(a1 + 64);
  if (v76 == 1) {
  LABEL_129:
    v79 = v77 - v78[929] + v78[928];
    goto LABEL_174;
  }
LABEL_173:
  v79 = v78[938] * v77;
LABEL_174:
  v80 = v79 & 0xFFFFFFE0;
  LANES64(v81).n64_u64[0] = LANES64_OF(vdup_n_s32(v79)).n64_u64[0];
  v78[4258] = v77;
  v82 = 1 << v79;
  if (v79 < 0x20) {
    v83 = ~v82;
  }
  else {
    v83 = -1;
  }
  *(_DWORD*)(v7 + 4488) = v83;
  if (v80 == 96) {
    v84 = ~v82;
  }
  else {
    v84 = -1;
  }
  *(_DWORD*)(v7 + 4500) = v84;
  *(int8x8_t*)(v7 + 4492) = vorn_s8(
      vmvn_s8(vceq_s32(vdup_n_s32(v80), COERCE_AS(int32x2_t, 0x4000000020LL))),
      vshl_u32(COERCE_AS(uint32x2_t, 0x100000001LL),
               vadd_s32(v81, COERCE_AS(int32x2_t, 0xFFFFFFC0FFFFFFE0LL))));
  *(_BYTE*)(v7 + 4508) = *(_BYTE*)(*(_QWORD*)(a1 + 64) + 17332LL);
  v85 = *(_QWORD*)(a1 + 16104);
  v86 = CudaDriverRoutine_633b0(*(_DWORD**)(a1 + 64), a2);
  v87 = *(_QWORD*)(a1 + 64);
  *(_DWORD*)(a1 + 160) = v86;
  v13 = 0;
  *(_DWORD*)(a1 + 164) = *(_DWORD*)(v87 + 3736) * v86;
  *(_DWORD*)(v85 + 4504) = 0;
  v88 = *(_QWORD*)(a1 + 64);
  v89 = *(_DWORD*)(a1 + 160);
  if ((unsigned int)v89 < *(_DWORD*)(v88 + 3724)) {
    if (v89 < 1) {
      v92 = 0;
    }
    else {
      v90 = v88 + 3616;
      v91 = 0;
      v92 = 0;
      do {
        v93 = *(_DWORD*)(v90 + 4 * v91);
        if (v93 <= 1) {
          v93 = 0;
        }
        else {
          ++v92;
        }
        if (v91 > 0x16) {
          break;
        }
        v89 -= v93;
        ++v91;
      } while (v89 > 0);
    }
    v13 = 0;
    *(_DWORD*)(v85 + 4504) = v92;
  }
  return v13;
}

__int64 cuda_driver_1ab7d0(int* a1)
{
  return cuda_driver_194b20(
      a1, *((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118));
}

double cuda_driver_1ab880(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  int v6;

  v5 = CudaDriverStub_1223e0(*(_QWORD*)(a2 + 1344));
  *(_DWORD*)(a1 + 8) = v5;
  if (a3 != 0) {
    v6 = 80;
  }
  else {
    v6 = 48;
  }
  *(_DWORD*)(a1 + 20) = v6;
  *(_DWORD*)a1 = 537100432;
  *(_DWORD*)(a1 + 4) = HIDWORD(v5) & 0x1FFFFFF;
  *(_QWORD*)(a1 + 12) = 0x200180C000000000LL;
  return 0x1.180c000000000p-511;
}

__int64 cuda_driver_1ab940(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5)
{
  _DWORD* v5;
  int v11;
  __int64 result;
  int v13;
  int v14;
  int v15;
  _DWORD* v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  unsigned int v38;
  int v39;
  int v40;
  int v41;
  unsigned int v42;
  int v43;
  __int64 v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  int v51;
  __int64 v52;
  unsigned int v53;
  char v54[4];
  int v55;
  unsigned int v56;
  unsigned int v57;
  __int64 v58;
  unsigned int v59;
  struct {
    unsigned int v60;
    char gap108_[4];
    __int64 v61;
    __int64 v62;
    __int64 v63;
    char gap136_[4];
    unsigned int v64;
    int v65;
    int v66;
    int v67;
    int v68;
    int v69;
    int v70;
    int v71;
    char gap172_[4];
    __int64 v72;
    __int64 v73;
    int v74;
    int v75;
    int v76;
    char gap204_[4];
    __int64 v77;
    char gap216_[8];
    int v78;
  } v60_;

  v5 = *(_DWORD**)a4;
  v55 = 0;
  v54[0] = 0;
  *(_QWORD*)(a4 + 8) = v5;
  *(_QWORD*)(a4 + 24) = v5 + 96;
  v5[228] = -1;
  v11 = CudaDriverRoutine_99f40(*(_QWORD*)(a1 + 64), (_DWORD*)(a5 + 16),
                                *(_DWORD*)(a4 + 288));
  result = CudaDriverRoutine_10a2a0(
      a1, a2, (unsigned int*)a5,
      *(_DWORD*)(a4 + 172) * *(_DWORD*)(a4 + 168) * *(_DWORD*)(a4 + 176),
      *(unsigned int*)(a4 + 288), &v55, v54, &v53, (_DWORD*)&v52 + 1, &v52);
  if ((_DWORD)result == 0) {
    if (v55 == 0) {
      return 701;
    }
    v13 = *(_DWORD*)(a4 + 180);
    if (v13 != 0) {
      v14 = *(_DWORD*)(a4 + 184);
      v15 = *(_DWORD*)(a4 + 188);
      result = CudaDriverRoutine_10b5f0(a2, a1, v55, *(_DWORD*)(a4 + 192),
                                        (unsigned int*)&v51);
      if ((_DWORD)result != 0) {
        return result;
      }
      if (v14 * v13 * v15 > v51) {
        return 912;
      }
    }
    if ((unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3800LL) +
                       *(_DWORD*)(a4 + 276)) <= *(_DWORD*)(a2 + 232) ||
        !CudaDriverRoutine_bbe70(a2)) {
      v5[228] = v11;
      v16 = *(_DWORD**)(a1 + 64);
      v50 = *(unsigned __int8*)(a5 + 8);
      v47 = *(_DWORD*)(a5 + 44);
      v17 = CudaDriverRoutine_98340(a1);
      v18 = *(_DWORD*)a5;
      v19 = *(_DWORD*)(v17 + 16092);
      v20 = v5[228];
      v21 = *(_DWORD*)(a5 + 28);
      v22 = v16[1038];
      v56 = 0;
      v48 = v20;
      v49 = v21;
      if (v18 == 0) {
        v18 = v19;
      }
      v23 = HIDWORD(v52);
      v46 = v18;
      v59 = v53;
      v24 = v16[1039];
      v58 = v52;
      v45 = v24;
      if (v20 > v21) {
        v44 = a3;
        v25 = v22;
        if (v16[1040] * HIDWORD(v52) >= (unsigned int)v52) {
          v26 = v52;
        }
        else {
          v26 = v16[1040] * HIDWORD(v52);
        }
        v60_.v60 = (v16[1025] + v25) >> 1;
        CudaDriverRoutine_1a8360((__int64)v16, &v60_.v60);
        v27 = v60_.v60;
        if (v26 < v60_.v60) {
          v27 = v26;
        }
        v22 = v25;
        a3 = v44;
        if (v27 <= v23) {
          v27 = v23;
        }
        LODWORD(v58) = v27;
      }
      CudaDriverRoutine_1a8360((__int64)v16, &v59);
      CudaDriverRoutine_1a8360((__int64)v16, (unsigned int*)&v58 + 1);
      CudaDriverRoutine_1a8360((__int64)v16, (unsigned int*)&v58);
      if (CudaDriverData_14364f8 != nullptr) {
        CudaDriverData_14364f8(HIDWORD(v58), &v60_.v60, &v56, &v57);
        v28 = v60_.v60;
        v29 = v56;
        v22 = v57;
      }
      else if (v50 != 0) {
        if (v48 == v49) {
          v30 = v58;
          if ((unsigned int)v58 <= v47) {
            v30 = v47;
          }
        }
        else {
          v32 = v47 / (v48 - v49);
          if (v32 <= 1) {
            v32 = 1;
          }
          v30 = v32 * v48;
          if (v30 <= v47) {
            v30 = v47;
          }
          if (v30 >= v16[1038]) {
            v30 = v16[1038];
          }
        }
        v60_.v60 = v30;
        CudaDriverRoutine_1a8360((__int64)v16, &v60_.v60);
        v22 = v60_.v60;
        v28 = HIDWORD(v58);
        v29 = v60_.v60;
        if (HIDWORD(v58) >= v60_.v60) {
          v28 = v60_.v60;
        }
      }
      else if (v46 != 0) {
        CudaDriverRoutine_1a8360((__int64)v16, &v59);
        if (v46 == 3) {
          if (v22 >> 1 <= v59) {
            v22 = v59;
          }
          else {
            v22 >>= 1;
          }
          v31 = v48;
        }
        else {
          v31 = v48;
          if (v46 == 2) {
            if (v45 <= v59) {
              v22 = v59;
            }
            else {
              v22 = v45;
            }
          }
          else if (v46 != 1) {
            v22 = 0;
          }
        }
        if (v31 == v49) {
          v33 = v58;
          if ((unsigned int)v58 <= v22) {
            v33 = v22;
          }
        }
        else {
          v34 = v22 / (v31 - v49);
          if (v34 <= 1) {
            v34 = 1;
          }
          v33 = v34 * v31;
          if (v33 <= v22) {
            v33 = v22;
          }
          if (v33 >= v16[1038]) {
            v33 = v16[1038];
          }
        }
        v60_.v60 = v33;
        CudaDriverRoutine_1a8360((__int64)v16, &v60_.v60);
        v22 = v60_.v60;
        v29 = v60_.v60;
        v28 = v60_.v60;
      }
      else {
        CudaDriverRoutine_1a8360((__int64)v16, (unsigned int*)&v58 + 1);
        v29 = v58;
        v28 = HIDWORD(v58);
      }
      v5[229] = v28;
      v5[230] = v29;
      v5[231] = v22;
      v35 = CudaDriverRoutine_98340(a1);
      v36 = *(_DWORD*)(a4 + 288);
      if (*(_DWORD*)((char*)((char*)0x20LL) +
                     *(__int64*)((char*)((__int64*)0x18LL) +
                                 (_QWORD)CudaDriverData_14225e0)) != 0) {
        v37 = *(_QWORD*)(a2 + 32);
        v38 = *(_DWORD*)a5;
        v39 = *(_DWORD*)(a5 + 36);
        v60_.v60 = 128;
        v60_.v62 = v37;
        v60_.v63 = a2;
        v41 = *(_DWORD*)(a5 + 12);
        v40 = *(_DWORD*)(a5 + 16);
        v60_.v61 = v35;
        v60_.v68 = 0;
        v60_.v69 = v11;
        v60_.v70 = v39;
        v60_.v71 = v39;
        v60_.v72 = a3;
        v60_.v73 = 0x100000001LL;
        v60_.v77 = a4;
        v60_.v66 = v40;
        v60_.v67 = v36;
        v42 = *(_DWORD*)(v35 + 16092);
        v43 = *(_DWORD*)(a2 + 392);
        if (v38 != 0) {
          v42 = v38;
        }
        v60_.v64 = v42;
        v60_.v65 = v43;
        v60_.v74 = *(unsigned __int8*)(a5 + 8);
        v60_.v75 = v41;
        v60_.v76 = v5[230];
        v60_.v78 = *(_DWORD*)(a5 + 28);
        cuda_driver_20b420(3u, 8u, (__int64)&v60_.v60);
      }
      v5[232] = v55;
      return 0;
    }
    else {
      return 701;
    }
  }
  return result;
}

__int64 cuda_driver_1abfa0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                           char a9)
{
  _QWORD* v9;
  unsigned int* v10;
  _QWORD* v16;
  unsigned int* v17;
  _QWORD* v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  char v28;
  char v29;
  char v30;
  char v31;
  unsigned int v32;
  unsigned int v33;
  char v34;
  unsigned int v35;
  unsigned int v36;
  unsigned __int8* v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  __int64 v43;
  __int16 v44;
  __int64 v45;
  __int64 v46;
  char v47;
  __int64 v48;
  int v49;
  bool v50;
  __int64 result;
  _QWORD* v52;
  __int64 v53;
  _QWORD* v56;
  unsigned int v58;
  unsigned int v59;
  struct {
    unsigned int v60;
    char gap60_[4];
    __int64 v61;
    __int64 v62;
    __int64 v63;
    unsigned int* v64;
    __int64 v65;
    __int16 v66;
    char gap106_[6];
    __int64 v67;
    char gap120_[8];
    char v68;
    char gap129_[7];
    __int64* v69;
  } v60_;
  __int64 v70;

  v10 = *(unsigned int**)(a8 + 8);
  v9 = *(_QWORD**)(a8 + 16);
  v16 = *(_QWORD**)(a8 + 136);
  v70 = *a1;
  v53 = *(_QWORD*)(a3 + 64);
  v17 = (unsigned int*)(v9 + 64);
  if (CudaDriverRoutine_bbdf0(a4)) {
    v18 = v9 + 64;
  }
  else {
    v18 = nullptr;
  }
  v52 = v18;
  if ((a9 & 2) != 0 || CudaDriverStub_b9300(a4)) {
    v10[10] = v10[10] & 0xFFFFEF0F | 0x10;
    v10[22] = CudaDriverStub_8e230(v16);
    if (*(_BYTE*)(a8 + 209) == 0) {
      goto LABEL_11;
    }
  }
  else {
    v10[10] &= ~0x1000u;
    v10[22] = CudaDriverRoutine_1ffe30((__int64)v16);
    if (*(_BYTE*)(a8 + 209) == 0) {
      goto LABEL_11;
    }
  }
  if (!CudaDriverStub_b9300(a4)) {
    v19 = *(_QWORD*)(a8 + 8);
    v20 = *(_DWORD*)(v19 + 44);
    *(_DWORD*)(v19 + 56) = *(_QWORD*)(v16[9] + 8LL) >> 8;
    *(_DWORD*)(v19 + 44) = v20 | 0x110000;
    *(_DWORD*)(*(_QWORD*)(a8 + 8) + 44LL) =
        *(_DWORD*)(*(_QWORD*)(a8 + 8) + 44LL) & 0xFFF1FFFF | 0x80000;
  }
  if (*(_BYTE*)(a8 + 210) != 0) {
    *v10 |= 0x40000000u;
  }
LABEL_11:
  v21 = *v10;
  if (*(_BYTE*)(a8 + 229) != 0) {
    v22 = v21 | 0x10000000;
    *v10 = v22;
    v10[46] = *(_DWORD*)(a8 + 232);
    if (*(_BYTE*)(a8 + 230) != 0) {
    LABEL_13:
      *v10 = v22 | 0x20000000;
      v10[47] = *(_DWORD*)(a8 + 236);
      v10[43] |= 0xC0000000;
      goto LABEL_16;
    }
  }
  else {
    v22 = v21 & 0xEFFFFFFF;
    *v10 = v22;
    if (*(_BYTE*)(a8 + 230) != 0) {
      goto LABEL_13;
    }
  }
  *v10 = v22 & 0xDFFFFFFF;
LABEL_16:
  v23 = CudaDriverStub_1223e0(v16[3]);
  v24 = v10[21] & 0xFE000000 | HIDWORD(v23) & 0x1FFFFFF;
  v10[20] = v23;
  v10[21] = v24;
  if (CudaDriverStub_b9300(a4)) {
    v9[129] = CudaDriverRoutine_2045e0((_QWORD*)v16[3]);
    v9[153] = v16[1] + 1232LL;
    v9[156] = v16[1] + 1224LL;
  }
  v56 = v9;
  if (a6 != 0 && (*(_BYTE*)(a6 + 60) & 1) != 0) {
    v25 = CudaDriverStub_1223e0(*(_QWORD*)(a6 + 40));
    v26 = v10[25];
    v27 = v10[10];
    v10[26] = 0;
    v10[24] = v25;
    v10[25] = HIDWORD(v25) & 0x1FFFFFF | (v26 >> 25 << 25);
    v10[10] = v27 & 0xEFF8FFFF | 0x10000;
    CudaDriverRoutine_2077b0(a6);
  }
  if (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118 + 3) !=
      0) {
    v28 = CudaDriverRoutine_1a8440(v10[229]);
    v29 = CudaDriverRoutine_1a8440(v10[231]);
    v30 = CudaDriverRoutine_1a8440(v10[230]);
    if (*((_BYTE*)((_UNKNOWN*)0x1D40LL) + (_QWORD)CudaDriverData_1422118) !=
        0) {
      v60_.v60 = *(_DWORD*)((char*)((_UNKNOWN*)0x1D44LL) +
                            (_QWORD)CudaDriverData_1422118);
      CudaDriverRoutine_1a8360(v53, &v60_.v60);
      v28 = CudaDriverRoutine_1a8440(v60_.v60);
      v29 = CudaDriverRoutine_1a8440(v60_.v60);
      v30 = CudaDriverRoutine_1a8440(v60_.v60);
    }
    v31 = v30;
    v32 = v10[19] & 0xFFFC0000 | ((v30 & 0x3F) << 12) | v28 & 0x3F |
          ((v29 & 0x3F) << 6);
    v10[19] = v32;
    v10[19] = v32 & 0xFFFBFFFF | ((*(_BYTE*)(a5 + 1228) & 1) << 18);
    if (CudaDriverRoutine_bbdf0(a4)) {
      v33 = ((v31 & 0x3F) << 12) | *((_DWORD*)v52 + 19) & 0xFFFC0000;
      *((_DWORD*)v52 + 19) = v33 | v28 & 0x3F | ((v29 & 0x3F) << 6);
      *((_DWORD*)v52 + 19) = v33 & 0xFFFBFFFF | v28 & 0x3F |
                             ((v29 & 0x3F) << 6) |
                             ((*(_BYTE*)(a5 + 1228) & 1) << 18);
    }
  }
  v34 = *(_BYTE*)(a8 + 204);
  v35 = *v10;
  *v10 =
      v35 & 0xFFC0FFFF |
      ((CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), v34) & 0x3F) << 16);
  if (CudaDriverRoutine_bbdf0(a4)) {
    v36 = *v17;
    *v17 = v36 & 0xFFC0FFFF | ((((((unsigned int)CudaDriverRoutine_bc6c0(
                                       a4, *(_DWORD*)(a8 + 436), v34)
                                   << 16) +
                                  4128768) >>
                                 16) &
                                0x3F)
                               << 16);
  }
  v10[35] = v10[35] & 0xCFFFFFFF | ((*(_DWORD*)(a8 + 432) & 3) << 28);
  if (CudaDriverRoutine_99720(a3)) {
    v37 = (unsigned __int8*)CudaDriverRoutine_119540(a5);
    v38 = v10[41];
    v39 = v10[40] & 0xFFFF00FF | (*v37 << 8);
    v10[40] = v39;
    v40 = v39 & 0xFFFFFF00 | v37[1];
    v10[40] = v40;
    v41 = v38 & 0xFFFF00FF | (v37[2] << 8);
    v10[41] = v41;
    v10[41] = v41 & 0xFFFFFF00 | v37[3];
    v42 = v40 & 0xFFFFFF | (v37[4] << 24);
    v10[40] = v42;
    v10[40] = v42 & 0xFF00FFFF | (v37[5] << 16);
    v10[35] = v10[35] & 0xFFF7FFFF | ((*(_BYTE*)(a5 + 80) & 1) << 19);
  }
  v43 = *(_QWORD*)(a3 + 64);
  v44 = *(_WORD*)(v43 + 17281);
  if (*(int*)((char*)((int*)0x4LL) +
              *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) +
                         (_QWORD)CudaDriverData_14225e0)) != 0) {
    v60_.v60 = 88;
    v45 = *(_QWORD*)(a4 + 32);
    v46 = *(_QWORD*)(v45 + 24);
    v47 = *(_BYTE*)(a8 + 205);
    v60_.v63 = a4;
    v60_.v64 = v10;
    v60_.v66 = v44;
    v60_.v67 = a8;
    v60_.v61 = v46;
    v60_.v62 = v45;
    v60_.v68 = v47;
    v60_.v69 = &v70;
    v60_.v65 = a7;
    cuda_driver_20b420(0xBu, 1u, (__int64)&v60_.v60);
    v43 = *(_QWORD*)(a3 + 64);
  }
  if (*(_DWORD*)(v43 + 21864) == 0 && *(_BYTE*)(a4 + 1113) != 0 &&
      (*((_BYTE*)&CudaDriverRoutine_747c + (_QWORD)CudaDriverData_1422118) &
       8) != 0) {
    v49 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)(v53 + 16852),
                                   (unsigned int*)&v49, 1u);
    if (v49 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(a3 + 64) + 21408LL))(a3);
    }
  }
  if (*(_BYTE*)(*(_QWORD*)(a3 + 16104) + 4508LL) == 0 ||
      *(_BYTE*)(a8 + 196) == 0 || *(_BYTE*)(a8 + 197) != 0) {
    if (*(_QWORD*)(a4 + 832) != 0) {
      (*(void (**)(unsigned int*, __int64, _QWORD, unsigned int*, __int64,
                   __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
          &v60_.v60, a3, v16[1], v10, 384, 2);
      v58 = 12;
      v59 = 164;
      v48 = CudaDriverRoutine_197480(v70, a2, 1u, &v59, (__int64)&v60_.v60,
                                     0x1A4u, (_QWORD*)(a4 + 832), &v58);
    }
    else {
      v48 = (*(__int64 (**)(__int64, __int64, _QWORD, unsigned int*, __int64,
                            __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
          v70, a3, v16[1], v10, 384, 2);
    }
    v70 = v48;
  }
  if (CudaDriverRoutine_bbdf0(a4)) {
    v70 = (*(__int64 (**)(__int64, __int64, __int64, unsigned int*, __int64,
                          __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
        v70, a3, v16[1] + 512LL, v17, 384, 2);
  }
  v50 = CudaDriverStub_b9300(a4);
  result = v70;
  if (v50) {
    result = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64,
                             __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
        v70, a3, v16[1] + 1024LL, v56 + 128, 1024, 2);
  }
  *a1 = result;
  return result;
}

__int64 cuda_driver_1ad640(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, char a8)
{

#pragma clang fp contract(off)
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 (**v34)(void);
  int v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  unsigned int v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  void* v57;
  __int64 v58;
  unsigned __int64 v59;
  int v60;
  int v61;
  __int64 v62;
  int v63;
  int v64;
  __int64 i;
  unsigned int v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned int v70;
  __int64 v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  _QWORD v77[71];
  unsigned int v78[4];

  v8 = *(_QWORD*)(a6 + 8);
  v9 = *a1;
  result = CudaDriverRoutine_98340(a3);
  if ((*(_WORD*)(a4 + 977) & 0x1000) != 0) {
    goto LABEL_65;
  }
  v18 = *(_QWORD*)(a6 + 136);
  *(_QWORD*)(v8 + 432) = a5;
  v19 = result;
  *(_QWORD*)(v8 + 896) = *(_QWORD*)(result + 16552);
  *(_DWORD*)(v8 + 656) = *(unsigned __int8*)(a6 + 204);
  *(_QWORD*)(v8 + 440) = *(_QWORD*)(v18 + 8);
  v20 = *(_QWORD*)(a6 + 368);
  v21 = *(_QWORD*)(v20 + 8);
  if (v21 != 0) {
    v22 = *(_QWORD*)v20 >> 12;
    v23 = vcvts_n_u32_f32(*(float*)(v20 + 16), 4u);
    v24 = ((unsigned int)(v21 + 4095) >> 7) & 0xFFFE0 |
          (*(_QWORD*)v20 >> 44) & 0x1F;
    if (v23 >= 0xF) {
      v23 = 15;
    }
    v26 = v20 + 20;
    v25 = *(_DWORD*)(v20 + 20);
    v27 = v24 | (v23 << 20);
    v28 = (*(_DWORD*)(v26 + 4) & 1) << 24;
    if (v25 != 0) {
      v29 = (v25 & 3) << 25;
    }
    else {
      v29 = 100663296;
    }
    *(_QWORD*)(v8 + 904) =
        (unsigned int)v22 |
        ((unsigned __int64)(v27 | v28 | (unsigned int)v29) << 32);
    if (CudaDriverRoutine_985b0(*(_DWORD*)(*(_QWORD*)(a4 + 32) + 32LL))) {
    LABEL_9:
      if (*(_BYTE*)(a6 + 448) == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
  }
  else {
    *(_QWORD*)(v8 + 904) = 0;
    if (CudaDriverRoutine_985b0(*(_DWORD*)(*(_QWORD*)(a4 + 32) + 32LL))) {
      goto LABEL_9;
    }
  }
  *(_WORD*)(v8 + 448) = 12090;
  *(_WORD*)(v8 + 450) = 100 * *(_WORD*)(*(_QWORD*)(a3 + 64) + 3152LL) +
                        10 * *(_DWORD*)(*(_QWORD*)(a3 + 64) + 3156LL);
  if (*(_BYTE*)(a6 + 204) != 0) {
    *(_DWORD*)(v8 + 452) = *(_DWORD*)(a6 + 420);
    *(_DWORD*)(v8 + 456) = *(_QWORD*)(a6 + 416);
  }
  v34 = *(__int64 (***)(void))(a4 + 1056);
  if (v34 != nullptr) {
    v35 = (*v34)();
  }
  else {
    v35 = 0;
  }
  *(_DWORD*)(v8 + 460) = v35;
  *(_QWORD*)(v8 + 464) = *(_QWORD*)(a6 + 440);
  *(_DWORD*)(v8 + 472) = *(_DWORD*)(a3 + 56);
  *(_QWORD*)(v8 + 480) = *(_QWORD*)(a6 + 464);
  if (*(_DWORD*)(a4 + 140) != 0) {
    v70 = (*(_DWORD*)(a4 + 396) + 15) & 0xFFFFFFF0;
    *(_DWORD*)(v8 + 492) = v70;
    *(_DWORD*)(v8 + 488) = v70 + 288;
    if (*(_BYTE*)(a6 + 448) == 0) {
      goto LABEL_11;
    }
  LABEL_10:
    *(_QWORD*)(v8 + 784) = *(_QWORD*)(a6 + 440);
    goto LABEL_11;
  }
  *(_DWORD*)(v8 + 492) = 0;
  *(_DWORD*)(v8 + 488) = 0;
  if (*(_BYTE*)(a6 + 448) != 0) {
    goto LABEL_10;
  }
LABEL_11:
  v30 = a6 + 40;
  if (*(_QWORD*)(a4 + 832) != 0) {
    v31 = a6 + 40;
    (*(void (**)(_QWORD*, __int64, _QWORD, __int64, _QWORD, __int64))(
        *(_QWORD*)(a3 + 64) + 19248LL))(
        v77, v19,
        *(_QWORD*)(v30 + 8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL)),
        v8 + 384, *(unsigned int*)(*(_QWORD*)(a3 + 64) + 3800LL), 2);
    v78[0] = 48;
    v76 = 12;
    v32 = CudaDriverRoutine_197480(v9, a2, 1u, v78, (__int64)v77, 0x234u,
                                   (_QWORD*)(a4 + 832), &v76);
    if (*(_DWORD*)(a6 + 276) != 0) {
      goto LABEL_13;
    }
  }
  else {
    v31 = a6 + 40;
    v32 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, _QWORD, __int64))(
        *(_QWORD*)(a3 + 64) + 19248LL))(
        v9, v19,
        *(_QWORD*)(v30 + 8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL)),
        v8 + 384, *(unsigned int*)(*(_QWORD*)(a3 + 64) + 3800LL), 2);
    if (*(_DWORD*)(a6 + 276) != 0) {
    LABEL_13:
      v33 = v31;
      v32 = CudaDriverRoutine_e7ac0(
          v32, v19, a6 + 272, a4,
          *(_QWORD*)(v31 +
                     8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL)) +
              *(unsigned int*)(a4 + 236));
      if ((a8 & 1) != 0) {
        goto LABEL_62;
      }
      goto LABEL_22;
    }
  }
  v33 = v31;
  if ((a8 & 1) == 0) {
  LABEL_22:
    v36 = **(_QWORD**)(v19 + 16104);
    v75 = *(unsigned int*)(a4 + 608);
    v72 = *(_DWORD*)(a4 + 612);
    v74 = v33;
    v71 =
        *(_QWORD*)(v33 + 8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL));
    if (!CudaDriverRoutine_985b0(*(_DWORD*)(*(_QWORD*)(a4 + 32) + 32LL)) ||
        *(_DWORD*)(a4 + 616) == 0) {
    LABEL_32:
      if (*(_QWORD*)(a4 + 576) != 0 || *(_QWORD*)(a4 + 592) != 0 ||
          *(_QWORD*)(a4 + 584) != 0) {
        v49 = (unsigned int)(v72 - v75);
        v73 = v49;
        memset_plt(v36 + v75, 0, v49);
        v50 = *(_QWORD*)(a4 + 576);
        if (v50 != 0) {
          v51 = 0;
          do {
            v52 = *(_DWORD*)(*(_QWORD*)(v50 + 8) + 868LL);
            if (CudaDriverRoutine_985b0(
                    *(_DWORD*)(*(_QWORD*)(a4 + 32) + 32LL))) {
              CudaDriverRoutine_208ba0(*(_QWORD**)(v19 + 2112), v52, 0, v77,
                                       nullptr);
              v32 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64,
                                    __int64))(*(_QWORD*)(v19 + 64) + 19248LL))(
                  v32, v19, v77[0], v50 + 16, 36, 2);
            }
            if (*(_DWORD*)(v50 + 64) != 0) {
              v53 = 0;
              v54 = 0;
              do {
                ++v54;
                v55 = *(unsigned int*)(*(_QWORD*)(v50 + 56) + v53);
                v53 += 8;
                *(_DWORD*)(v36 + v55) =
                    *(_DWORD*)(v36 + v55) & 0xFFF00000 | v52 & 0xFFFFF;
              } while (v54 < *(unsigned int*)(v50 + 64));
              v51 = 1;
            }
            v50 = *(_QWORD*)(v50 + 80);
          } while (v50 != 0);
        }
        else {
          v51 = 0;
        }
        v56 = *(_QWORD*)(a4 + 584);
        if (v56 != 0) {
          v57 = CudaDriverData_1422118;
          do {
            if (*(_DWORD*)(v56 + 64) != 0) {
              v58 = 0;
              v59 = 0;
              v60 = *(_DWORD*)(*(_QWORD*)(v56 + 8) + 192LL) << 20;
              v61 = *(_DWORD*)(*(_QWORD*)(v56 + 8) + 192LL) & 0xFFF;
              do {
                ++v59;
                v62 = *(unsigned int*)(*(_QWORD*)(v56 + 56) + v58);
                v58 += 8;
                if ((*((_BYTE*)&CudaDriverRoutine_7368 + (_QWORD)v57) & 1) !=
                    0) {
                  v63 = 0xFFFFF;
                }
                else {
                  v63 = -4096;
                }
                if ((*((_BYTE*)&CudaDriverRoutine_7368 + (_QWORD)v57) & 1) !=
                    0) {
                  v64 = v60;
                }
                else {
                  v64 = v61;
                }
                *(_DWORD*)(v36 + v62) = v63 & *(_DWORD*)(v36 + v62) | v64;
              } while (v59 < *(unsigned int*)(v56 + 64));
              v51 = 1;
            }
            v56 = *(_QWORD*)(v56 + 80);
          } while (v56 != 0);
        }
        for (i = *(_QWORD*)(a4 + 592); i != 0; i = *(_QWORD*)(i + 80)) {
          v66 = *(_DWORD*)(*(_QWORD*)(i + 8) + 512LL);
          if (CudaDriverRoutine_985b0(*(_DWORD*)(*(_QWORD*)(a4 + 32) + 32LL))) {
            CudaDriverRoutine_208ba0(*(_QWORD**)(v19 + 2112), 0, v66, nullptr,
                                     v77);
            v32 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64,
                                  __int64))(*(_QWORD*)(v19 + 64) + 19248LL))(
                v32, v19, v77[0], i + 16, 32, 2);
          }
          if (*(_DWORD*)(i + 64) != 0) {
            v67 = 0;
            v68 = 0;
            do {
              ++v68;
              v69 = *(unsigned int*)(*(_QWORD*)(i + 56) + v67);
              v67 += 8;
              *(_DWORD*)(v36 + v69) =
                  *(_DWORD*)(v36 + v69) & 0xFFF00000 | v66 & 0xFFFFF;
            } while (v68 < *(unsigned int*)(i + 64));
            v51 = 1;
          }
        }
        if (v51 == 1) {
          v32 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                                __int64))(*(_QWORD*)(v19 + 64) + 19248LL))(
              v32, v19, v71 + v75, v75 + v36, v73, 2);
        }
      }
      v33 = v74;
      goto LABEL_62;
    }
    v37 = 0;
    v38 = 0;
    while (1) {
      v45 = *(_QWORD*)(a4 + 624);
      if (*(_DWORD*)(v45 + v37) == 5) {
        v46 = v45 + v37;
        v47 = *(_DWORD*)(v45 + v37 + 8);
        if (v47 == 3) {
          CudaDriverRoutine_208ba0(*(_QWORD**)(v19 + 2112), 0,
                                   *(_DWORD*)(*(_QWORD*)(v46 + 24) + 512LL),
                                   nullptr, v78);
          v39 = *(_QWORD*)(v19 + 64);
          v40 = *(_QWORD*)v78;
          v41 = 32;
          v42 = v32;
          v43 = v19;
          v44 = *(_QWORD*)(v46 + 24) + 140LL;
        }
        else {
          if (v47 != 1) {
            goto LABEL_27;
          }
          v48 = v45 + v37;
          CudaDriverRoutine_208ba0(
              *(_QWORD**)(v19 + 2112),
              *(_DWORD*)(*(_QWORD*)(v45 + v37 + 24) + 868LL), 0, v77, nullptr);
          v39 = *(_QWORD*)(v19 + 64);
          v40 = v77[0];
          v42 = v32;
          v43 = v19;
          v41 = 36;
          v44 = *(_QWORD*)(v48 + 24) + 832LL;
        }
        v32 =
            (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                            __int64))(v39 + 19248))(v42, v43, v40, v44, v41, 2);
      }
    LABEL_27:
      ++v38;
      v37 += 104;
      if (v38 >= *(unsigned int*)(a4 + 616)) {
        goto LABEL_32;
      }
    }
  }
LABEL_62:
  result = CudaDriverRoutine_e7b50(
      v32, v19, a6, a4,
      *(_QWORD*)(v33 + 8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11724LL)));
  v9 = result;
  if (*(_BYTE*)(a6 + 204) != 0 && *(_DWORD*)(a6 + 424) >= 2u) {
    result = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64,
                             __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
        result, v19,
        *(_QWORD*)(v33 +
                   8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11736LL)) +
            **(unsigned int**)(v19 + 1224),
        v19 + **(unsigned int**)(v19 + 1224) -
            *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11740LL) + 13800,
        24, 2);
    v9 = result;
  }
LABEL_65:
  *a1 = v9;
  return result;
}

__int64 cuda_driver_1adec0(__int64 result, __int64 a2, __int64 a3,
                           unsigned __int8 a4, char a5, char a6)
{
  __int64 v6;
  unsigned int v7;
  void* v8;
  int v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned __int64 v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;

  v6 = *(_QWORD*)(a2 + 8);
  v7 = *(_DWORD*)(a3 + 104);
  v8 = CudaDriverData_1422118;
  if (a6 != 0) {
    v9 = a4 + 5;
  }
  else {
    v9 = 0;
  }
  if (a6 != 0) {
    v10 = 6;
  }
  else {
    v10 = 2;
  }
  if (a6 != 0) {
    v11 = 2;
  }
  else {
    v11 = 1;
  }
  if (v7 != 0) {
    v12 = *(_QWORD*)(a3 + 40);
    v13 = *(_DWORD*)((char*)&CudaDriverRoutine_41c0 +
                     (_QWORD)CudaDriverData_1422118);
    if (v7 >= v13) {
      v14 = *(_DWORD*)((char*)&CudaDriverRoutine_41c0 +
                       (_QWORD)CudaDriverData_1422118);
    }
    else {
      v14 = *(_DWORD*)(a3 + 104);
    }
    if (v13 != 0) {
      v7 = v14;
    }
    v15 = (*(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) + v7 - 1) /
          *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) *
          *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL);
    v16 = 4 * v9;
    v17 = v9 << 6;
    *(_DWORD*)(v6 + 4LL * ((unsigned int)(v16 + 416) >> 5)) |= 1
                                                               << (v16 & 0x1C);
    *(_DWORD*)(v6 + 4LL * ((unsigned int)(v17 + 1587) >> 5)) =
        (v15 << 15) & 0xFFF80000 |
        *(_DWORD*)(v6 + 4LL * ((unsigned int)(v17 + 1587) >> 5)) & 0x7FFFF;
    v18 = (unsigned int)(v17 + 1568) >> 5;
    v19 = *(_DWORD*)(v6 + 4LL * v18);
    *(_DWORD*)(v6 + 4LL * ((unsigned int)(v17 + 1536) >> 5)) = v12 >> 6;
    *(_DWORD*)(v6 + 4LL * v18) = (v12 >> 38) & 0x7FFFF | (v19 >> 19 << 19);
    *(_DWORD*)(v6 + 4LL * ((unsigned int)(v16 + 417) >> 5)) =
        *(_DWORD*)(v6 + 4LL * ((unsigned int)(v16 + 417) >> 5)) &
            ~(3 << ((v16 - 95) & 0x1F)) |
        (v11 << ((v16 - 95) & 0x1F));
  }
  if (a5 != 0) {
    v20 = *(_DWORD*)(a3 + 112);
    if (v20 != 0) {
      v21 = *(_QWORD*)(a3 + 56);
      v22 = *(_DWORD*)((char*)&CudaDriverRoutine_41c8 + (_QWORD)v8);
      if (v20 >= v22) {
        v23 = v22;
      }
      else {
        v23 = *(_DWORD*)(a3 + 112);
      }
      if (v22 != 0) {
        v24 = v23;
      }
      else {
        v24 = *(_DWORD*)(a3 + 112);
      }
      v25 = ((*(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) + v24 - 1) /
             *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) *
             *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL)) >>
            4;
      *(_DWORD*)(v6 + 52) |= 1 << (4 * v10);
      *(_DWORD*)(v6 + 4LL * ((2 * (v10 & 7)) | 0x31u)) =
          (v21 >> 38) & 0x7FFFF | ((unsigned __int16)v25 << 19);
      *(_DWORD*)(v6 + 4LL * ((2 * v10) | 0x30u)) = v21 >> 6;
      *(_DWORD*)(v6 + 52) =
          *(_DWORD*)(v6 + 52) & ~(3 << ((4 * (v10 & 7)) | 1)) |
          (v11 << ((4 * (v10 & 7)) | 1));
    }
  }
  return result;
}

__int64 cuda_driver_1ae070(__int64 result, __int64 a2, __int64 a3, char a4)
{
  __int64 v4;
  _QWORD* v7;
  void* v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  _DWORD* v18;
  unsigned int v19;
  unsigned int v20;
  __int16 v21;
  unsigned int v22;
  int v23;
  unsigned __int64 v24;

  v24 = 0;
  if ((*(_WORD*)(a2 + 977) & 0x1000) == 0) {
    v4 = *(_QWORD*)(a3 + 8);
    v7 = (_QWORD*)result;
    v8 = CudaDriverData_1422118;
    if ((*((_BYTE*)&CudaDriverRoutine_4460 + (_QWORD)CudaDriverData_1422118) &
         8) != 0) {
      if (CudaDriverRoutine_bbe30(a2)) {
        v9 = v7[299];
        v24 = v9;
      }
      else {
        CudaDriverRoutine_bbd70(a2, &v24);
        v9 = v24;
      }
    }
    else {
      v9 = CudaDriverStub_1db800(*(_QWORD*)(a2 + 96));
      v24 = v9;
    }
    v10 = (v9 >> 40) & 0x1FFFF | (*(_DWORD*)(v4 + 172) >> 17 << 17);
    *(_DWORD*)(v4 + 168) = v9 >> 8;
    *(_DWORD*)(v4 + 172) = v10;
    v11 = *(_QWORD*)(a2 + 96);
    if (v9 < CudaDriverStub_1db800(v11) ||
        (v12 = v24, (v13 = v12 - CudaDriverStub_1db800(v11)) >=
                        CudaDriverStub_1dbf90(v11))) {
      v11 = cuda_driver_helpers_1db920(v7[10], v24);
    }
    v14 = CudaDriverStub_1dbf90(v11);
    v15 = v24;
    v16 = v14;
    result = CudaDriverStub_1db800(v11);
    v17 = v16 - v15 + result;
    v18 = (_DWORD*)v7[8];
    if (v18[1033] + *(_DWORD*)(a2 + 64) < v17) {
      v17 = v18[1033] + *(_DWORD*)(a2 + 64);
    }
    v19 = v17 / v18[1054];
    v20 = *(_DWORD*)((char*)((_UNKNOWN*)0x187CLL) + (_QWORD)v8);
    if (v20 == 0) {
      v20 = v18[1052];
    }
    if (v20 >= v19) {
      v21 = v19;
    }
    else {
      v21 = v20;
    }
    v22 = *(_DWORD*)(v4 + 172) & 0xF001FFFF | ((v21 & 0x1FF) << 17);
    v23 = v22 | 0x4000000;
    if (a4 == 0) {
      v23 = v22;
    }
    *(_DWORD*)(v4 + 172) = v23;
  }
  return result;
}

bool cuda_driver_1ae1f0(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 result;
  _DWORD* v7;
  int v8;
  void* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  unsigned int v15;
  unsigned __int64 v16;
  unsigned int v17;
  int v18;
  char v19;
  _DWORD* v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned __int64 v24;
  int v25;
  int v26;

  result = CudaDriverStub_985a0(a1);
  if ((*(_WORD*)(a2 + 977) & 0x1000) == 0) {
    v7 = *(_DWORD**)(a3 + 8);
    v8 = *(_DWORD*)(a3 + 104);
    v9 = CudaDriverData_1422118;
    if (v8 != 0) {
      if (result) {
        v10 = 0;
      }
      else {
        v10 = 5;
      }
      v11 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3784LL);
      v12 = v8 + v11 - 1;
      v13 = v12 % v11;
      v14 = *(_DWORD*)((_BYTE*)&CudaDriverRoutine_41e0 +
                       (_QWORD)CudaDriverData_1422118) &
            0xFFFFFF00;
      if (result) {
        v15 = 0;
      }
      else {
        v15 = *(_DWORD*)((_BYTE*)&CudaDriverRoutine_41e0 +
                         (_QWORD)CudaDriverData_1422118) &
              0xFFFFFF00;
      }
      if (result) {
        v14 = 0;
      }
      v16 = v14 + *(_QWORD*)(a3 + 40);
      v17 = (v12 - v15 - v13) >> 4;
      result = CudaDriverRoutine_e7cb0(a1, a3, 0);
      v18 = v7[13];
      v19 = 4 * v10;
      v20 = &v7[2 * v10];
      v20[48] = v16 >> 6;
      v20[49] = (v16 >> 38) & 0x7FFFF | ((unsigned __int16)v17 << 19);
      v21 = v18 | (1 << (4 * v10));
      v7[13] = v21;
      if (result) {
        if (*((_BYTE*)((_UNKNOWN*)0x1164LL) + (_QWORD)v9) != 0) {
          v21 = (9 << v19) | v18;
        }
        else {
          v7[18] |= 0x80000000;
        }
      }
      v7[13] = v21 & ~(6 << v19) | (2 << v19);
    }
    v22 = *(_DWORD*)(a3 + 112);
    if (v22 != 0) {
      v23 =
          ((unsigned int)(v22 + *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3784LL) - 1) /
           *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3784LL) *
           *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3784LL)) >>
          4;
      result = CudaDriverRoutine_e7cb0(a1, a3, 2u);
      v24 = *(_QWORD*)(a3 + 56);
      v25 = v7[13];
      v26 = v25 | 0x100;
      v7[13] = v25 | 0x100;
      v7[52] = v24 >> 6;
      v7[53] = (v24 >> 38) & 0x7FFFF | ((unsigned __int16)v23 << 19);
      if (result) {
        if (*((_BYTE*)((_UNKNOWN*)0x1164LL) + (_QWORD)v9) != 0) {
          v26 = v25 | 0x900;
        }
        else {
          v7[18] |= 0x80000000;
        }
      }
      v7[13] = v26 & 0xFFFFF9FF | 0x200;
    }
  }
  return result;
}

__int64 cuda_driver_1ae770(__int64* a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8;
  __int64 v9;
  char v10;
  __int16 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  char v20;
  __int64 v21;
  __int64 result;
  struct {
    int v23;
    char gap4_[4];
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int16 v29;
    char v30;
    char v31;
    char gap52_[4];
    __int64* v32;
    __int64 v33;
    __int64 v34;
    char gap80_[8];
    bool v35;
    char gap89_[7];
    unsigned __int8* v36;
    bool v37;
    char gap105_[7];
    char v38;
    char gap113_[7];
    char v39;
    char gap121_[7];
    char v40;
    char gap129_[7];
    int v41;
    unsigned int v42;
    __int64 v43;
    bool v44;
    char gap153_[7];
    char v45;
  } v23_;
  unsigned __int8 v46;

  v8 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 1200));
  v9 = *(_QWORD*)(a2 + 192);
  v10 = *(_BYTE*)(*(_QWORD*)(v8 + 16104) + 4508LL);
  v11 = *(_WORD*)(*(_QWORD*)(v8 + 64) + 17281LL);
  v12 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 1200));
  v13 = *(_QWORD*)(a2 + 32);
  v14 = *(_QWORD*)(a2 + 752);
  v15 = true;
  v16 = v12;
  v23_.v23 = 168;
  v46 = 1;
  v17 = *(_QWORD*)(v13 + 32);
  v23_.v26 = v13;
  v23_.v27 = v9;
  v23_.v24 = v12;
  v23_.v25 = v17;
  LOBYTE(v17) = *(_BYTE*)(a2 + 380);
  v18 = *(_QWORD*)(v14 + 8);
  v23_.v30 = v10;
  v23_.v29 = v11;
  v23_.v32 = a1;
  v23_.v33 = a2;
  v23_.v34 = a2 + 184;
  v23_.v31 = v17;
  v23_.v28 = v18;
  v23_.v35 = *((_BYTE*)((_UNKNOWN*)0x1164LL) + (_QWORD)CudaDriverData_1422118 +
               2) == 0;
  v23_.v36 = &v46;
  if (*(_BYTE*)(a2 + 673) == 0) {
    v15 = *(_BYTE*)(a2 + 1412) != 0;
  }
  v23_.v37 = v15;
  v19 = *(_DWORD*)(a3 + 32);
  v23_.v38 = *(_BYTE*)(a2 + 672);
  v20 = *(_BYTE*)(a2 + 390);
  v23_.v40 = a4;
  v23_.v43 = 0;
  if (v19 >= 0xC) {
    v19 = 12;
  }
  v23_.v39 = v20;
  v23_.v41 = *(_DWORD*)(a3 + 24);
  v23_.v42 = v19;
  v21 = *(_QWORD*)(a2 + 24);
  v23_.v45 = *(_BYTE*)(a2 + 389);
  v23_.v44 = a2 == *(_QWORD*)(v21 + 448);
  if (*(_BYTE*)(v21 + 415) != 0 || *(_BYTE*)(v21 + 416) != 0) {
    v23_.v43 = **(_QWORD**)(v21 + 424);
  }
  result = cuda_driver_20b420(0xBu, 3u, (__int64)&v23_.v23);
  *(_BYTE*)(*(_QWORD*)(a2 + 1240) + 4LL) =
      (*(unsigned __int8*)(*(_QWORD*)(a2 + 1240) + 4LL) | v46) != 0;
  if (*(_BYTE*)(a2 + 382) != 0 && *(_BYTE*)(a2 + 380) == 0) {
    result = (*(__int64 (**)(__int64, _QWORD, __int64))(*(_QWORD*)(v16 + 64) +
                                                        18672LL))(
        *a1, *(_QWORD*)(*(_QWORD*)(a2 + 752) + 8LL), 1);
    *a1 = result;
  }
  return result;
}

_DWORD* cuda_driver_1aed40(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                           unsigned __int64 a5, __int64 a6, unsigned int a7)
{
  _BOOL4 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned __int64 v17;
  int v18;
  int v19;
  _DWORD* v20;
  int v21;
  int v22;
  int v23;

  v13 = a6 != 0 && *(_BYTE*)(a6 + 35) != 0;
  v14 = a5;
  do {
    if (v14 >= 0xFFFFFFFF) {
      v15 = 0xFFFFFFFFLL;
    }
    else {
      v15 = v14;
    }
    if (v13) {
      v16 = (unsigned int)v15 / (*(unsigned __int8*)(a6 + 32) *
                                 (unsigned int)*(unsigned __int8*)(a6 + 34));
    }
    else {
      v16 = v15;
    }
    a1[6] = v16;
    *a1 = 537166080;
    a1[1] = HIDWORD(a4) & 0x1FFFFFF;
    a1[2] = a4;
    a1[3] = HIDWORD(a3) & 0x1FFFFFF;
    a1[4] = a3;
    a1[5] = 536969478;
    v17 = HIDWORD(v14);
    if (a7 != 0 || v17 != 0 ||
        (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118) &
         1) != 0) {
      v18 = 0;
      if (!v13) {
      LABEL_16:
        v19 = 0;
        v20 = a1 + 7;
        goto LABEL_19;
      }
    }
    else {
      v18 = 4;
      if (!v13) {
        goto LABEL_16;
      }
    }
    v21 = *(_BYTE*)a6 & 7 | (unsigned __int8)(16 * (*(_BYTE*)(a6 + 4) & 7)) |
          ((*(_DWORD*)(a6 + 8) & 7) << 8) | ((*(_DWORD*)(a6 + 12) & 7) << 12) |
          ((*(unsigned __int8*)(a6 + 34) << 16) - 0x10000) & 0x30000 |
          ((*(unsigned __int8*)(a6 + 32) << 20) - 0x100000) & 0x300000 |
          ((*(unsigned __int8*)(a6 + 33) << 24) - 0x1000000) & 0x3000000;
    a1[7] = 537100736;
    a1[8] = *(_DWORD*)(a6 + 24);
    a1[9] = *(_DWORD*)(a6 + 28);
    a1[10] = v21;
    v20 = a1 + 11;
    v19 = 1024;
  LABEL_19:
    a1 = v20 + 2;
    v22 = v18 | v19;
    if (v14 == a5) {
      v23 = 386;
    }
    else {
      v23 = 385;
    }
    *v20 = 536969408;
    v20[1] = v23 | v22;
    if (v17 == 0 && (unsigned __int8)cuda_driver_misc_helpers_4bb0(a7) != 0) {
      a1 = (_DWORD*)CudaDriverRoutine_1aa7f0((__int64)a1, a7);
    }
    a3 += v15;
    a4 += v15;
    v14 -= v15;
  } while (v14 != 0);
  return a1;
}

__int64 cuda_driver_1af1b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           int a5, __int64 a6, __int64 a7, unsigned int a8,
                           int a9)
{
  __int64 v10;
  __int64 v11;
  _DWORD* v12;
  int v13;

  *(_DWORD*)(a1 + 24) = a5;
  *(_DWORD*)a1 = 537166080;
  *(_DWORD*)(a1 + 4) = HIDWORD(a4) & 0x1FFFFFF;
  *(_DWORD*)(a1 + 8) = a4;
  *(_DWORD*)(a1 + 12) = HIDWORD(a3) & 0x1FFFFFF;
  *(_DWORD*)(a1 + 16) = a3;
  *(_DWORD*)(a1 + 20) = 536969478;
  if (a9 == 1) {
    v10 = 56;
    *(_DWORD*)(a1 + 48) = HIDWORD(a6) & 0x1FFFFFF;
    *(_DWORD*)(a1 + 52) = a6;
    v11 = 0x2004814C00000000LL;
  }
  else {
    v10 = 48;
    v11 = 0x2002814500000001LL;
  }
  v12 = (_DWORD*)(a1 + v10);
  *(_QWORD*)(a1 + 32) = v11;
  v13 = 1048962;
  *(_DWORD*)(a1 + 28) = 536969536;
  *(_DWORD*)(a1 + 40) = HIDWORD(a7) & 0x1FFFFFF;
  *(_DWORD*)(a1 + 44) = a7;
  if (a8 == 0 &&
      (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118) &
       1) == 0) {
    v13 = 1048966;
  }
  *v12 = 536969408;
  v12[1] = v13;
  if ((unsigned __int8)cuda_driver_misc_helpers_4bb0(a8) != 0) {
    return CudaDriverRoutine_1aa7f0((__int64)(v12 + 2), a8);
  }
  else {
    return (__int64)(v12 + 2);
  }
}

_DWORD* cuda_driver_1b01a0(__int64 a1, __int64 a2, __int64* a3, char a4, int a5)
{
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  _DWORD* result;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  void* v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;

  v5 = *((unsigned int*)a3 + 3);
  v6 = a3[2];
  v7 = *a3;
  if (v5 == 2) {
    v8 = 65540;
  }
  else {
    v8 = 4;
  }
  if (v5 == 4) {
    v8 = 196612;
  }
  *(_DWORD*)a1 = 536969664;
  v9 = *((_DWORD*)a3 + 2);
  *(_DWORD*)(a1 + 12) = v8;
  v10 = (a4 & 1) << 21;
  *(_DWORD*)(a1 + 4) = v9;
  *(_DWORD*)(a1 + 8) = 536969666;
  *(_QWORD*)(a1 + 16) = 0x120018107LL;
  result = (_DWORD*)(a1 + 24);
  if (a5 != 0) {
    v12 = v6;
    v13 = v10 | 0x584;
    do {
      if (v12 >= 0xFFFFFFFF) {
        v14 = 0xFFFFFFFFLL;
      }
      else {
        v14 = v12;
      }
      *result = 537035010;
      result[1] = HIDWORD(v7) & 0x1FFFFFF;
      result[2] = v7;
      result[3] = 536969478;
      if (v12 == v6) {
        v15 = 2;
      }
      else {
        v15 = 1;
      }
      v7 += v14 * v5;
      result[4] = v14;
      result[5] = 536969408;
      v12 -= v14;
      result[6] = v15 | v13;
      result += 7;
    } while (v12 != 0);
  }
  else {
    v16 = v6;
    v17 = CudaDriverData_1422118;
    v18 = v10 | 0x580;
    do {
      if (v16 >= 0xFFFFFFFF) {
        v20 = 0xFFFFFFFFLL;
      }
      else {
        v20 = v16;
      }
      *result = 537035010;
      result[1] = HIDWORD(v7) & 0x1FFFFFF;
      result[2] = v7;
      result[3] = 536969478;
      if (v16 == v6) {
        v21 = 2;
      }
      else {
        v21 = 1;
      }
      result[4] = v20;
      if (HIDWORD(v16) == 0 ||
          (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)v17) & 1) != 0) {
        v19 = 4;
      }
      else {
        v19 = 0;
      }
      v7 += v20 * v5;
      result[5] = 536969408;
      result[6] = v21 | v19 | v18;
      result += 7;
      v16 -= v20;
    } while (v16 != 0);
  }
  return result;
}

_DWORD* cuda_driver_1b18a0(_DWORD* result, __int64 a2)
{
  int8x16_t v2;
  int v3;
  unsigned __int64 v4;
  int8x16_t v5;
  int v6;
  int8x8_t v7;
  int v8;
  unsigned __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
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
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  unsigned int v48;
  int v49;
  int v50;
  int v51;
  unsigned int v52;
  int v53;
  int v54;
  int v55;
  unsigned int v56;
  unsigned int v57;
  int v58;
  unsigned int v59;
  int v60;
  int v61;
  unsigned int v62;
  int v63;
  int v64;
  unsigned __int64 v65;
  __int64 v66;
  int v67;
  int v68;
  unsigned int v69;

  LANES128(v2).n128_u64[0] = 0x8000000080000000LL;
  LANES128(v2).n128_u64[1] = 0x8000000080000000LL;
  if (*(_BYTE*)(a2 + 377) != 0) {
    v3 = 0x400000;
  }
  else {
    v3 = 0;
  }
  v4 = *(_QWORD*)(a2 + 32);
  v5 = vbicq_s8(v2, vceqzq_s32(*(int32x4_t*)(a2 + 308)));
  if (*(_QWORD*)(a2 + 24) != 0) {
    v6 = 0x1000000;
  }
  else {
    v6 = 0x800000;
  }
  LANES64(v7).n64_u64[0] = LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0];
  if (*(_BYTE*)(a2 + 384) != 0) {
    v8 = 0x40000000;
  }
  else {
    v8 = 0;
  }
  v9 = LANES64_OF(vorr_s8(COERCE_AS(int8x8_t, LANES128(v5).n128_u64[0]), v7))
           .n64_u64[0];
  *result = v9 | v3 | HIDWORD(v9) | v6 | v8 | *(unsigned __int16*)(a2 + 386) |
            ((*(_BYTE*)(a2 + 376) & 0x3F) << 16);
  v10 = *(unsigned __int8*)(a2 + 440);
  if (*(_BYTE*)(a2 + 440) != 0) {
    v11 = *(_DWORD*)(a2 + 472);
    v12 = v11 >> 2;
    v13 = (v11 & 1) != 0 ? 3 : 1;
    v14 = *(_BYTE*)(a2 + 464) != 0 ? 16 : 0;
    v10 = (v13 | v14) & 0xFFFFFBFF | ((v12 & 1) << 10);
    if (*(_DWORD*)(a2 + 460) != 0) {
      v10 |= 0x1000u;
    }
  }
  if (*(_BYTE*)(a2 + 480) != 0) {
    v15 = *(_DWORD*)(a2 + 512);
    v16 = v15 >> 2;
    v17 = (v15 & 1) != 0 ? 196608 : 0x10000;
    v18 = *(_BYTE*)(a2 + 504) != 0 ? 0x100000 : 0;
    v10 |= (v17 | v18) & 0xFBFFFFFF | ((v16 & 1) << 26);
    if (*(_DWORD*)(a2 + 500) != 0) {
      v10 |= 0x10000000u;
    }
  }
  result[10] = v10;
  v19 = *(unsigned __int8*)(a2 + 520);
  if (*(_BYTE*)(a2 + 520) != 0) {
    if ((*(_BYTE*)(a2 + 552) & 1) != 0) {
      v20 = 3;
    }
    else {
      v20 = 1;
    }
    if (*(_BYTE*)(a2 + 544) != 0) {
      v21 = 16;
    }
    else {
      v21 = 0;
    }
    v19 = v20 | v21;
  }
  if (*(_BYTE*)(a2 + 392) != 0) {
    v22 = *(_DWORD*)(a2 + 408);
    if ((v22 & 4) != 0) {
      v19 |= 0x70000u;
      if ((v22 & 8) == 0) {
        goto LABEL_46;
      }
    }
    else if ((v22 & 2) != 0) {
      v19 |= 0x30000u;
      if ((v22 & 8) == 0) {
        goto LABEL_46;
      }
    }
    else {
      if ((v22 & 0x10) != 0) {
        v23 = 589824;
      }
      else {
        v23 = 0x10000;
      }
      v19 |= v23;
      if ((v22 & 8) == 0) {
        goto LABEL_46;
      }
    }
    v19 |= 0x100000u;
  }
LABEL_46:
  if (*(_BYTE*)(a2 + 416) == 0) {
    goto LABEL_56;
  }
  v24 = *(_DWORD*)(a2 + 432);
  if ((v24 & 4) != 0) {
    v19 |= 0xE00000u;
    if ((v24 & 8) == 0) {
      goto LABEL_56;
    }
    goto LABEL_55;
  }
  if ((v24 & 2) != 0) {
    v19 |= 0x600000u;
    if ((v24 & 8) == 0) {
      goto LABEL_56;
    }
  LABEL_55:
    v19 |= 0x2000000u;
    goto LABEL_56;
  }
  if ((v24 & 0x10) != 0) {
    v25 = 18874368;
  }
  else {
    v25 = 0x200000;
  }
  v19 |= v25;
  if ((v24 & 8) != 0) {
    goto LABEL_55;
  }
LABEL_56:
  if (*(_BYTE*)(a2 + 385) != 0) {
    v26 = 0x4000000;
  }
  else {
    v26 = 0;
  }
  result[11] = v26 | v19;
  if (*(_BYTE*)(a2 + 72) != 0) {
    v27 = 8;
  }
  else {
    v27 = 0;
  }
  if (*(_BYTE*)(a2 + 48) != 0) {
    v28 = v27 + 1;
  }
  else {
    v28 = v27;
  }
  if (*(_BYTE*)(a2 + 80) != 0) {
    v29 = 16;
  }
  else {
    v29 = 0;
  }
  if (*(_BYTE*)(a2 + 104) != 0) {
    v30 = 128;
  }
  else {
    v30 = 0;
  }
  v31 = v30 | v29 | v28;
  if (*(_BYTE*)(a2 + 112) != 0) {
    v32 = 256;
  }
  else {
    v32 = 0;
  }
  if (*(_BYTE*)(a2 + 136) != 0) {
    v33 = 2048;
  }
  else {
    v33 = 0;
  }
  v34 = v33 | v32 | v31;
  if (*(_BYTE*)(a2 + 144) != 0) {
    v35 = 4096;
  }
  else {
    v35 = 0;
  }
  if (*(_BYTE*)(a2 + 168) != 0) {
    v36 = 0x8000;
  }
  else {
    v36 = 0;
  }
  v37 = v36 | v35 | v34;
  if (*(_BYTE*)(a2 + 176) != 0) {
    v38 = 0x10000;
  }
  else {
    v38 = 0;
  }
  if (*(_BYTE*)(a2 + 200) != 0) {
    v39 = 0x80000;
  }
  else {
    v39 = 0;
  }
  v40 = v39 | v38 | v37;
  if (*(_BYTE*)(a2 + 208) != 0) {
    v41 = 0x100000;
  }
  else {
    v41 = 0;
  }
  if (*(_BYTE*)(a2 + 232) != 0) {
    v42 = 0x800000;
  }
  else {
    v42 = 0;
  }
  v43 = v42 | v41 | v40;
  if (*(_BYTE*)(a2 + 240) != 0) {
    v44 = 0x1000000;
  }
  else {
    v44 = 0;
  }
  if (*(_BYTE*)(a2 + 264) != 0) {
    v45 = 0x8000000;
  }
  else {
    v45 = 0;
  }
  v46 = v45 | v44 | v43;
  if (*(_BYTE*)(a2 + 272) != 0) {
    v47 = 0x10000000;
  }
  else {
    v47 = 0;
  }
  if (*(_BYTE*)(a2 + 296) != 0) {
    v48 = 0x80000000;
  }
  else {
    v48 = 0;
  }
  result[13] = v48 | v47 | v46;
  if (*(_BYTE*)(a2 + 392) != 0) {
    result[14] = *(_QWORD*)(a2 + 400) >> 8;
  }
  if (*(_BYTE*)(a2 + 416) != 0) {
    result[15] = *(_QWORD*)(a2 + 424) >> 8;
  }
  result[16] =
      *(_DWORD*)(a2 + 360) & 0xFFFFFF |
      ((unsigned __int8)(*(_BYTE*)(a2 + 345) + 16 * *(_BYTE*)(a2 + 344)) << 24);
  if (*(_BYTE*)(a2 + 389) != 0) {
    v49 = 0;
  }
  else {
    v49 = 0x1000000;
  }
  result[17] = v49 & 0xFD000000 | *(_DWORD*)(a2 + 352) & 0xFFFFFF |
               ((*(_BYTE*)(a2 + 388) & 1) << 25);
  if (*(_BYTE*)(a2 + 378) != 0) {
    v50 = 0x4000000;
  }
  else {
    v50 = 0;
  }
  if (*(_BYTE*)(a2 + 379) != 0) {
    v51 = 0x8000000;
  }
  else {
    v51 = 0;
  }
  v52 = v50 & 0xFC0000FF | ((*(_DWORD*)(a2 + 340) & 0x3FFFF) << 8);
  if (*(_BYTE*)(a2 + 380) != 0) {
    v53 = 0x10000000;
  }
  else {
    v53 = 0;
  }
  if (*(_BYTE*)(a2 + 381) != 0) {
    v54 = 0x20000000;
  }
  else {
    v54 = 0;
  }
  if (*(_BYTE*)(a2 + 382) != 0) {
    v55 = 0x40000000;
  }
  else {
    v55 = 0;
  }
  if (*(_BYTE*)(a2 + 383) != 0) {
    v56 = 0x80000000;
  }
  else {
    v56 = 0;
  }
  result[18] = v52 | v51 | v53 | v54 | v55 | v56 | 0x40;
  v57 = *(_DWORD*)(a2 + 572);
  if (v57 != 0) {
    if (v57 > 0x2000) {
      if (v57 > 0x4000) {
        if (v57 > 0x8000) {
          if (v57 > 0x10000) {
            if (v57 >= 0x19001) {
              if (v57 > 0x21000) {
                if (v57 >= 0x29001) {
                  if (v57 > 0x31000) {
                    v58 = 58;
                  }
                  else {
                    v58 = 50;
                  }
                }
                else {
                  v58 = 42;
                }
              }
              else {
                v58 = 34;
              }
            }
            else {
              v58 = 26;
            }
          }
          else {
            v58 = 17;
          }
        }
        else {
          v58 = 9;
        }
      }
      else {
        v58 = 5;
      }
    }
    else {
      v58 = 3;
    }
  }
  else {
    v58 = 1;
  }
  v59 = *(_DWORD*)(a2 + 580);
  if (v59 != 0) {
    if (v59 > 0x2000) {
      if (v59 > 0x4000) {
        if (v59 > 0x8000) {
          if (v59 > 0x10000) {
            if (v59 >= 0x19001) {
              if (v59 > 0x21000) {
                if (v59 >= 0x29001) {
                  if (v59 > 0x31000) {
                    v60 = 3712;
                  }
                  else {
                    v60 = 3200;
                  }
                }
                else {
                  v60 = 2688;
                }
              }
              else {
                v60 = 2176;
              }
            }
            else {
              v60 = 1664;
            }
          }
          else {
            v60 = 1088;
          }
        }
        else {
          v60 = 576;
        }
      }
      else {
        v60 = 320;
      }
    }
    else {
      v60 = 192;
    }
  }
  else {
    v60 = 64;
  }
  v61 = v60 | v58;
  v62 = *(_DWORD*)(a2 + 576);
  if (v62 == 0) {
    v63 = 4096;
    goto LABEL_186;
  }
  if (v62 <= 0x2000) {
    v63 = 12288;
    goto LABEL_186;
  }
  if (v62 <= 0x4000) {
    v63 = 20480;
    goto LABEL_186;
  }
  if (v62 <= 0x8000) {
    v63 = 36864;
    goto LABEL_186;
  }
  v64 = 65537;
  if (v62 <= 0x10000) {
    goto LABEL_183;
  }
  if (v62 >= 0x19001) {
    v64 = 135169;
    if (v62 <= 0x21000) {
    LABEL_183:
      v63 = v64 + 4095;
      goto LABEL_186;
    }
    if (v62 >= 0x29001) {
      if (v62 > 0x31000) {
        v63 = 237568;
      }
      else {
        v63 = 204800;
      }
    }
    else {
      v63 = 172032;
    }
  }
  else {
    v63 = 106496;
  }
LABEL_186:
  result[19] = v61 | v63;
  if (*(_BYTE*)(a2 + 440) != 0) {
    result[20] = *(_QWORD*)(a2 + 448);
    result[21] = *(_DWORD*)(a2 + 452) & 0x1FFFFFF;
    result[22] = *(_QWORD*)(a2 + 456);
    result[23] = *(_DWORD*)(a2 + 460);
  }
  if (*(_BYTE*)(a2 + 480) != 0) {
    result[24] = *(_QWORD*)(a2 + 488);
    result[25] = *(_DWORD*)(a2 + 492) & 0x1FFFFFF;
    result[26] = *(_QWORD*)(a2 + 496);
    result[27] = *(_DWORD*)(a2 + 500);
  }
  if (*(_BYTE*)(a2 + 520) != 0) {
    result[28] = *(_QWORD*)(a2 + 528);
    result[29] = *(_DWORD*)(a2 + 532) & 0x1FFFFFF;
    result[30] = *(_QWORD*)(a2 + 536);
    result[31] = *(_DWORD*)(a2 + 540);
  }
  v65 = v4 >> 8;
  v66 = (v4 >> 40) & 0x1FFFF;
  result[32] = *(_DWORD*)a2;
  result[33] = *(unsigned __int16*)(a2 + 4);
  result[34] = *(unsigned __int16*)(a2 + 8);
  if ((*(_DWORD*)(a2 + 584) & 0xF00) == 0x100) {
    v67 = 0x10000;
  }
  else {
    v67 = 0;
  }
  if ((*(_DWORD*)(a2 + 584) & 0xF00) == 0x200) {
    v68 = 196608;
  }
  else {
    v68 = v67;
  }
  result[35] = v68 & 0xF007FFFF | ((*(_DWORD*)(a2 + 588) & 1) << 19) & 0xFFFFF |
               ((unsigned __int8)*(_DWORD*)(a2 + 560) << 20);
  result[36] = *(unsigned __int16*)(a2 + 12) | (*(_DWORD*)(a2 + 16) << 16);
  result[37] = *(unsigned __int16*)(a2 + 20) |
               ((*(_WORD*)(a2 + 304) & 0x1FF) << 16) |
               (*(unsigned __int16*)(a2 + 306) << 27);
  result[38] = *(_QWORD*)(a2 + 24);
  result[39] = *(_DWORD*)(a2 + 28) & 0x1FFFFFF;
  result[40] =
      (unsigned __int16)(*(unsigned __int8*)(a2 + 592) |
                         ((unsigned __int8)*(_DWORD*)(a2 + 604) << 8)) |
      ((unsigned __int8)*(_DWORD*)(a2 + 596) << 16) |
      (*(_DWORD*)(a2 + 608) << 24);
  result[41] = *(unsigned __int8*)(a2 + 600) |
               ((unsigned __int8)*(_DWORD*)(a2 + 612) << 8);
  result[42] = v65;
  v69 = *(_DWORD*)(a2 + 40) + 255;
  if (v69 >= 0x1FF00) {
    v69 = 130816;
  }
  result[43] = v66 & 0xFC01FFFF | (((v69 >> 8) & 0x1FF) << 17);
  if (*(_BYTE*)(a2 + 48) != 0) {
    result[48] = *(_QWORD*)(a2 + 56) >> 6;
    result[49] = (*(_QWORD*)(a2 + 56) >> 38) & 0x7FFFF |
                 ((unsigned __int16)(*(_DWORD*)(a2 + 64) >> 4) << 19);
  }
  if (*(_BYTE*)(a2 + 80) != 0) {
    result[50] = *(_QWORD*)(a2 + 88) >> 6;
    result[51] = (*(_QWORD*)(a2 + 88) >> 38) & 0x7FFFF |
                 ((unsigned __int16)(*(_DWORD*)(a2 + 96) >> 4) << 19);
  }
  if (*(_BYTE*)(a2 + 112) != 0) {
    result[52] = *(_QWORD*)(a2 + 120) >> 6;
    result[53] = (*(_QWORD*)(a2 + 120) >> 38) & 0x7FFFF |
                 ((unsigned __int16)(*(_DWORD*)(a2 + 128) >> 4) << 19);
  }
  if (*(_BYTE*)(a2 + 144) != 0) {
    result[54] = *(_QWORD*)(a2 + 152) >> 6;
    result[55] = (*(_QWORD*)(a2 + 152) >> 38) & 0x7FFFF |
                 ((unsigned __int16)(*(_DWORD*)(a2 + 160) >> 4) << 19);
  }
  if (*(_BYTE*)(a2 + 176) != 0) {
    result[56] = *(_QWORD*)(a2 + 184) >> 6;
    result[57] = (*(_QWORD*)(a2 + 184) >> 38) & 0x7FFFF |
                 ((unsigned __int16)(*(_DWORD*)(a2 + 192) >> 4) << 19);
  }
  if (*(_BYTE*)(a2 + 208) != 0) {
    result[58] = *(_QWORD*)(a2 + 216) >> 6;
    result[59] = (*(_QWORD*)(a2 + 216) >> 38) & 0x7FFFF |
                 ((unsigned __int16)(*(_DWORD*)(a2 + 224) >> 4) << 19);
  }
  if (*(_BYTE*)(a2 + 240) != 0) {
    result[60] = *(_QWORD*)(a2 + 248) >> 6;
    result[61] = (*(_QWORD*)(a2 + 248) >> 38) & 0x7FFFF |
                 ((unsigned __int16)(*(_DWORD*)(a2 + 256) >> 4) << 19);
  }
  if (*(_BYTE*)(a2 + 272) != 0) {
    result[62] = *(_QWORD*)(a2 + 280) >> 6;
    result[63] = (*(_QWORD*)(a2 + 280) >> 38) & 0x7FFFF |
                 ((unsigned __int16)(*(_DWORD*)(a2 + 288) >> 4) << 19);
  }
  result[76] = *(_DWORD*)(a2 + 308);
  result[77] = *(_DWORD*)(a2 + 312);
  result[78] = *(_DWORD*)(a2 + 316);
  result[79] = *(_DWORD*)(a2 + 320);
  return result;
}

#pragma GCC visibility pop
