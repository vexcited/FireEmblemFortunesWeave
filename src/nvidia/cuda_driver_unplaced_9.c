#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_1cfa50(_DWORD*, unsigned __int64, int);
_QWORD* CudaDriverRoutine_1b72e0(_QWORD* result);
__int64 CudaDriverRoutine_107f40(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_107f60(_QWORD*);
__int64 CudaDriverRoutine_108080(__int64 result, unsigned __int64,
                                 unsigned __int64);
__int64 CudaDriverRoutine_108280(__int64 result, unsigned __int64,
                                 unsigned __int64);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_110820(__int64, __int64, __int64, __int64, __int64,
                                 __int64, __int64);
__int64 CudaDriverRoutine_114a80(__int64, __int64, int);
__int64 CudaDriverRoutine_1181a0(__int64);
__int64 CudaDriverRoutine_11ca80(__int64 result, unsigned int);
__int64 CudaDriverRoutine_11f370(__int64, unsigned int);
__int64 CudaDriverRoutine_11f790(__int64, unsigned int);
__int64 CudaDriverRoutine_11fa80(__int64);
__int64 CudaDriverRoutine_11fd60(__int64);
__int64 CudaDriverRoutine_121c60(__int64*);
__int64 CudaDriverRoutine_12bb60(unsigned __int64);
__int64 CudaDriverRoutine_12c680(__int64, __int64, __int64);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_12f6b0(__int64, __int64);
__int64 CudaDriverRoutine_196020(__int64 result, __int64);
__int64 CudaDriverRoutine_196060(__int64, unsigned int*);
__int64 CudaDriverRoutine_19adf0(__int64, char);
__int64 CudaDriverRoutine_1a1320(__int64);
__int64 CudaDriverRoutine_1a1670(__int64, int);
__int64 CudaDriverRoutine_1a3d20(__int64, unsigned __int8*);
__int64 CudaDriverRoutine_1ba480(_QWORD*, __int64);
__int64 CudaDriverRoutine_1ba520(__int64 result);
__int64 CudaDriverRoutine_1ba5d0(__int64, __int64, unsigned int,
                                 unsigned __int64);
__int64 CudaDriverRoutine_1bab30(__int64);
__int64 CudaDriverRoutine_1bbf60(__int64, __int64, __int64);
__int64 CudaDriverRoutine_1bf730(__int64);
__int64 CudaDriverRoutine_1bfa10(_DWORD*);
__int64 CudaDriverRoutine_1bfa50();
__int64 CudaDriverRoutine_1cb3b0(__int64, unsigned int);
__int64 CudaDriverRoutine_1d4c40(_QWORD*);
__int64 CudaDriverRoutine_1d5ae0(_QWORD*, __int64, _DWORD*, __int64, int);
__int64 CudaDriverRoutine_1da4a0(unsigned int**, __int64, __int64, __int64*,
                                 _BYTE*);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverRoutine_1dbd40(__int64, unsigned __int64, _QWORD*);
__int64 CudaDriverRoutine_1dc000(__int64);
__int64 CudaDriverRoutine_1dc020(__int64);
__int64 CudaDriverRoutine_1dd080(__int64);
__int64 CudaDriverRoutine_1dddf0(__int64, char, __int64, _QWORD*);
__int64 CudaDriverRoutine_1dff10(__int64);
__int64 CudaDriverRoutine_1dff50(__int64);
__int64 CudaDriverRoutine_1e27d0(__int64*);
__int64 CudaDriverRoutine_1e29b0(__int64, int, __int64);
__int64 CudaDriverRoutine_1e9390(__int64 result);
__int64 CudaDriverRoutine_1ebbc0(__int64);
__int64 CudaDriverRoutine_1ee060(__int64, unsigned __int64*, __int64*);
__int64 CudaDriverRoutine_1ee140(__int64*);
__int64 CudaDriverRoutine_1ff0d0(__int64, int);
__int64 CudaDriverRoutine_203600(__int64, _QWORD*);
__int64 CudaDriverRoutine_203f30(__int64);
__int64 CudaDriverRoutine_428b0(__int64*, int, __int64*, __int64*);
__int64 CudaDriverRoutine_56260(_QWORD);
__int64 CudaDriverRoutine_5a580(__int64);
__int64 CudaDriverRoutine_5bfb0(__int64 result, _DWORD*, _DWORD*);
__int64 CudaDriverRoutine_5bfe0(__int64 result, unsigned int, __int64);
__int64 CudaDriverRoutine_61ac0();
__int64 CudaDriverRoutine_61af0(__int64);
__int64 CudaDriverRoutine_96f20(__int64, __int64, __int64, unsigned int,
                                __int64, __int64);
__int64 CudaDriverRoutine_98190(__int64, unsigned int);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_985c0(__int64 result);
__int64 CudaDriverRoutine_98650(__int64, char);
__int64 CudaDriverRoutine_9ab30(__int64, _BYTE*);
__int64 CudaDriverRoutine_bbd70(__int64 result, _QWORD*);
__int64 CudaDriverRoutine_bc3f0(__int64);
__int64 CudaDriverRoutine_d3860(_BOOL8, __int64, __int64);
__int64 CudaDriverRoutine_df060(__int64*);
__int64 CudaDriverRoutine_e7e40(__int64);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_ee030(__int64, __int64, _QWORD*, __int128*);
__int64 CudaDriverRoutine_ee2a0(__int64, __int64);
__int64 CudaDriverRoutine_eeec0(__int64 result, unsigned int*, int, __int64);
__int64 CudaDriverRoutine_efc80(__int64, unsigned __int64);
__int64 CudaDriverRoutine_f1060(__int64);
__int64 CudaDriverRoutine_f1e90(__int64, unsigned __int64);
__int64 CudaDriverRoutine_f1f00(_QWORD*, _QWORD*);
__int64 CudaDriverRoutine_f2cf0(unsigned int*, __int64*);
__int64 CudaDriverRoutine_f2e00(unsigned int*, __int64, unsigned __int64*,
                                __int64*);
__int64 CudaDriverRoutine_f3ac0(__int64 result, __int64);
__int64 CudaDriverRoutine_f7c90(int*);
__int64 CudaDriverRoutine_f9bd0(int*, __int64, __int64, __int64, unsigned int,
                                __int64, unsigned int, __int64, char);
__int64 CudaDriverRoutine_fa210(__int64 result, __int64, __int64, int, __int64,
                                char);
__int64 CudaDriverRoutine_fa700(__int64 result, __int64, __int64, __int64);
__int64 CudaDriverStub_102040(_QWORD);
__int64 CudaDriverStub_102350(__int64);
__int64 CudaDriverStub_102360(_QWORD);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_107f90_alt1(_QWORD) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_107f90_alt2(char*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_108070_alt1(_QWORD) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_108070_alt2(char*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_10f370(__int64);
__int64 CudaDriverStub_10f710(__int64);
__int64 CudaDriverStub_112e30(_QWORD);
__int64 CudaDriverStub_112e40(_QWORD, _QWORD);
__int64 CudaDriverStub_118070(__int64);
__int64 CudaDriverStub_122310(__int64);
__int64 CudaDriverStub_122320(__int64);
__int64 CudaDriverStub_122340(__int64);
__int64 CudaDriverStub_122350(__int64);
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1d9a90(_QWORD);
__int64 CudaDriverStub_1db190(_QWORD);
__int64 CudaDriverStub_1db1a0(_QWORD);
__int64 CudaDriverStub_1db380(_QWORD);
__int64 CudaDriverStub_1db750(_QWORD);
__int64 CudaDriverStub_1db760(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1ee180(void);
__int64 CudaDriverStub_1ee190(_QWORD);
__int64 CudaDriverStub_1ff640(_QWORD);
__int64 CudaDriverStub_57450(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_57450_alt1(_QWORD) __asm__("CudaDriverStub_57450");
__int64 CudaDriverStub_8b280(_QWORD);
__int64 CudaDriverStub_8e230(_QWORD);
__int64 CudaDriverStub_efe90(_QWORD);
__int64 CudaDriverStub_f0f50(_QWORD);
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_1150a0(__int64, unsigned __int64, char);
__int64 cuda_driver_118130(__int64, unsigned __int64*);
__int64 cuda_driver_121fa0(_QWORD*);
__int64 cuda_driver_194b20(int*, char);
__int64 cuda_driver_1964d0(__int64*);
__int64 cuda_driver_1b39a0_alt1(__int64, _QWORD*) __asm__("cuda_driver_1b39a0");
__int64 cuda_driver_1da1b0_alt1(__int64, __int64*, __int64,
                                _QWORD*) __asm__("cuda_driver_1da1b0");
__int64 cuda_driver_204330(__int64);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_5a060(__int64);
__int64 cuda_driver_5e820(__int64, unsigned int);
__int64 cuda_driver_98c70(__int64, unsigned int);
__int64 cuda_driver_c3200(__int64, char);
__int64 cuda_driver_d3530(_QWORD*, __int64, __int64*, _QWORD*, __int64, __int64,
                          unsigned __int64, __int64);
__int64 cuda_driver_f1180(__int64*, unsigned __int64);
__int64 cuda_driver_helpers_1db1f0(__int64, __int64, __int64);
__int64 cuda_driver_helpers_1db280(__int64);
__int64 cuda_driver_helpers_1db770(__int64 result, _QWORD*);
__int64 cuda_driver_helpers_b7ed0(__int64, unsigned int, int, unsigned __int64);
__int64 cuda_driver_misc_helpers_de5a0();
__int64 cuda_driver_misc_helpers_ded50(__int64, __int64*, unsigned int);
__int64 cuda_driver_predicates_10e960(__int64 result);
__int64 cuda_driver_predicates_10f750(__int64, int, unsigned int, __int64,
                                      _DWORD*, __int64);
__int64 cuda_driver_predicates_1dc7a0(unsigned int);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 puts_plt(_QWORD);
unsigned __int8 CudaDriverRoutine_11f2f0(__int64);
unsigned __int8 CudaDriverRoutine_11f690(__int64*);
unsigned __int8 CudaDriverRoutine_11f6d0(__int64);
unsigned __int8 CudaDriverRoutine_12b530();
bool CudaDriverRoutine_1a0620(_BOOL8 result);
unsigned __int8 CudaDriverRoutine_1d8a00(__int64);
unsigned __int8 CudaDriverRoutine_1dd040(__int64);
unsigned __int8 CudaDriverRoutine_1e26f0(_DWORD*);
unsigned __int8 CudaDriverRoutine_1e86f0(__int64);
unsigned __int8 CudaDriverRoutine_5c090(__int64, unsigned __int64);
unsigned __int8 CudaDriverRoutine_98110(_BOOL8 result);
unsigned __int8 CudaDriverRoutine_9aa30(__int64);
unsigned __int8 CudaDriverRoutine_9ad80(__int64);
unsigned __int8 CudaDriverRoutine_bbdf0(__int64);
unsigned __int8 CudaDriverRoutine_efe40(__int64);
unsigned __int8 CudaDriverStub_985a0(__int64);
unsigned __int8 CudaDriverStub_b9300(__int64);
unsigned __int8 cuda_driver_9b4d0(__int64, int);
unsigned __int8 cuda_driver_9e1e0(__int64);
unsigned __int8 cuda_driver_predicates_10ebb0(__int64);
extern _BYTE CudaDriverData_4c38[8];
extern _DWORD CudaDriverData_1130110[6];
extern _QWORD CudaDriverData_1422bb0;
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_1432140;
extern _UNKNOWN* CudaDriverData_1432188;
extern _UNKNOWN CudaDriverData_14347a8;
extern _UNKNOWN CudaDriverData_f00000;
extern __int128 CudaDriverData_1115330;
extern __int128 CudaDriverData_1115360;
extern __int128 CudaDriverData_1115480;
extern __int128 CudaDriverData_1115570;
extern __int128 CudaDriverData_1115620;
extern __int128 CudaDriverData_1115690;
extern __int128 CudaDriverData_11156a0;
extern __int128 CudaDriverData_11156b0;
extern __int128 CudaDriverData_11156d0;
extern __int128 CudaDriverData_1115700;
extern __int128 CudaDriverData_1115780;
extern __int128 CudaDriverData_11157d0;
extern __int128 CudaDriverData_11157f0;
extern __int128 CudaDriverData_1115810;
extern __int128 CudaDriverData_1115870;
extern __int128 CudaDriverData_1115a00;
extern __int128 CudaDriverData_1115a60;
extern __int128 CudaDriverData_1115a70;
extern __int128 CudaDriverData_1115a80;
extern __int128 CudaDriverData_1115b20;
extern __int128 CudaDriverData_1115b30;
extern __int128 CudaDriverData_1115b40;
extern __int128 CudaDriverData_1115c20;
extern __int128 CudaDriverData_1115c80;
extern __int128 CudaDriverData_1115cc0;
extern __int128 CudaDriverData_1115d10;
extern __int128 CudaDriverData_1115da0;
extern __int128 CudaDriverData_1115dd0;
extern __int128 CudaDriverData_1115e70;
extern __int128 CudaDriverData_1115e80;
extern __int128 CudaDriverData_1115e90;
extern __int128 CudaDriverData_1115f00;
extern __int128 CudaDriverData_1115f30;
extern __int128 CudaDriverData_1115f70;
extern __int128 CudaDriverData_1116010;
extern __int128 CudaDriverData_11160c0;
extern __int128 CudaDriverData_1116170;
extern __int128 CudaDriverData_1116180;
extern __int128 CudaDriverData_11161c0;
extern __int128 CudaDriverData_1116230;
extern __int128 CudaDriverData_11162c0;
extern __int128 CudaDriverData_11162d0;
extern __int128 CudaDriverData_1116370;
extern __int128 CudaDriverData_135dfc0;
extern __int128 CudaDriverData_135dfd0;
extern __int128 CudaDriverData_135dfe0;
extern __int64 (*CudaDriverData_1434738)(__int64, _QWORD*);
extern __int64 (*CudaDriverData_14407b8)(int*);
extern __int64 (*CudaDriverData_1440830)(int*);
extern __int64 (*CudaDriverData_1440838)(int*);
extern __int64 (*CudaDriverData_1440840)(int*);
extern __int64 (*CudaDriverData_1440870)(int*);
extern __int64 CudaDriverData_1435ed8;
extern char CudaDriverData_1438c09;
extern int CudaDriverData_1434ac0;
extern int CudaDriverData_14358d0;
float cuda_driver_11f820(_BYTE*, float*);
long double CudaDriverRoutine_11f810(long double*, __int64);
long double CudaDriverRoutine_1d5420(__int64, __int64, unsigned __int64*,
                                     __int64, __int64, __int64, _QWORD*,
                                     __int64);
long double CudaDriverRoutine_1d8ec0(__int64, unsigned __int64*);
long double CudaDriverRoutine_1edfe0(__int64);
long double CudaDriverRoutine_1ee1a0(__int64);
unsigned __int64* CudaDriverRoutine_ee010(unsigned __int64* result, char);
unsigned __int64 CudaDriverRoutine_1bb040(unsigned __int64 result);
unsigned __int64 cuda_driver_108520(__int64);
void CudaDriverRoutine_1021a0();
void CudaDriverRoutine_12c020();
void CudaDriverRoutine_4198();
void CudaDriverRoutine_43c8();
void CudaDriverRoutine_445c();
void CudaDriverRoutine_4464();
void CudaDriverRoutine_46fc();
void CudaDriverRoutine_4780();
void CudaDriverRoutine_4e50();
void CudaDriverRoutine_51a8();
void CudaDriverRoutine_743c();
void CudaDriverRoutine_7440();
void CudaDriverRoutine_7448();
void CudaDriverRoutine_7450();
void CudaDriverRoutine_7458();
void CudaDriverRoutine_7460();
void CudaDriverRoutine_7468();
void CudaDriverStub_111420();
void CudaDriverStub_111430();
__int64 cuda_driver_1b2e40(__int64 a1, __int64 a2, __int64 a3, char* a4);
__int64 cuda_driver_1b2f80(__int64 a1, __int64 a2, int a3);
__int64 cuda_driver_1b3060(__int64 a1, __int64 a2, __int64 a3, char* a4,
                           _BYTE* a5, char* a6);
void cuda_driver_1b3760(__int64 a1, _QWORD* a2, __int64 a3, char* a4);
void cuda_driver_1b39a0(__int64 a1, _QWORD* a2);
void cuda_driver_1b3d20(__int64 a1, _BYTE* a2);
__int64 cuda_driver_1b3eb0(__int64 a1, __int64 a2);
__int64 cuda_driver_1b3ee0(__int64 a1, __int64 a2, int a3);
__int64 cuda_driver_1b4600(__int64 a1);
__int64 cuda_driver_1b9740(__int64 result, __int64 a2, int a3);
__int64 cuda_driver_1b9890(unsigned __int64 a1, __int64* a2, int a3);
__int64 cuda_driver_1b9d50(__int64 result, __int64 a2);
__int64 cuda_driver_1b9e60(__int64 result, __int64 a2);
__int64 cuda_driver_1b9f70(unsigned int a1, __int64 a2);
__int64 cuda_driver_1ba060(unsigned int a1, unsigned __int64 a2);
__int64 cuda_driver_1ba140(_QWORD* a1, unsigned int a2);
__int64 cuda_driver_1ba290(unsigned int a1, _DWORD* a2);
__int64 cuda_driver_1ba8c0(__int64 a1, __int64 a2, unsigned int a3,
                           unsigned __int64 a4);
__int64 cuda_driver_1bace0(unsigned int* a1, __int64* a2, char a3);
__int64 cuda_driver_1bc0e0(_QWORD* a1, __int64 a2, _BYTE* a3);
__int64 cuda_driver_1bc4f0(__int64 a1, __int64 a2, __int64 a3);
long double cuda_driver_1bc660(__int64 a1, __int64 a2, unsigned int* a3,
                               __int64 a4);
_DWORD* cuda_driver_1bcc80(__int64 a1, __int64* a2, __int64 a3);
__int64 cuda_driver_1bd360(__int64 a1, unsigned int* a2, unsigned __int64* a3,
                           bool* a4);
__int64 cuda_driver_1bd4d0(__int64 a1, int a2, int a3, unsigned int* a4,
                           unsigned __int64* a5, char* a6);
__int64 cuda_driver_1bd6f0(__int64 a1);
__int64 cuda_driver_1be5c0(__int64 a1);
__int64 cuda_driver_1bf360(__int64 result, unsigned __int64 a2,
                           unsigned int a3);
__int64 cuda_driver_1bf480(__int64 result, unsigned __int64 a2,
                           unsigned int a3);
__int64 cuda_driver_1bf600();
__int64 cuda_driver_1bf610();
__int64 cuda_driver_1c02d0(__int64 a1);
__int64 cuda_driver_1c21c0(__int64 a1, __int64 a2, __int64 a3,
                           unsigned __int64 a4);
__int64 cuda_driver_1c2b10(__int64 a1, unsigned __int64 a2, __int64* a3,
                           __int64 a4, unsigned int a5, _DWORD* a6);
__int64 cuda_driver_1c5fa0(__int64 a1, _DWORD* a2, _DWORD* a3, _QWORD* a4);
__int64 cuda_driver_1c6030(__int64 a1, _DWORD* a2, int a3);
__int64 cuda_driver_1c61b0(__int64 a1, unsigned int a2);
__int64 cuda_driver_1c62e0(__int64 a1, unsigned int a2);
__int64 cuda_driver_1c6c40(__int64 a1, unsigned int a2, __int64* a3);
__int64 cuda_driver_1c95e0(_DWORD* a1);
__int64 cuda_driver_1cd8c0(__int64 a1);
__int64 cuda_driver_1cdc50(int* a1);
double cuda_driver_1cdd00(__int64 a1, __int64 a2, char a3);
double cuda_driver_1cfb30(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5);
int8x8_t cuda_driver_1cfc80(__int64 a1, int8x8_t* a2, __int64 a3);
__int64 cuda_driver_1cff50(__int64* a1, __int64 a2, __int64 a3, char a4);
_DWORD* cuda_driver_1d27e0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           int a5);
__int64 cuda_driver_1d47c0(__int64 a1, _BYTE* a2);
__int64 cuda_driver_1d4cc0(__int64 a1, __int64* a2);
__int64 cuda_driver_1d4df0(__int64 a1, __int64 a2, unsigned int a3);
__int64 cuda_driver_1d5f60(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           unsigned int a5, unsigned int a6, __int64 a7,
                           __int64 a8, char a9);
unsigned __int64 cuda_driver_1d85d0(__int64 a1, char a2);
__int64 cuda_driver_1d8bf0(__int64 a1);
__int64 cuda_driver_1d8c00(__int64 a1);
__int64 cuda_driver_1d8eb0(__int64 a1);
__int64 cuda_driver_1d9310(int a1);
__int64 cuda_driver_1da1b0(__int64 a1, unsigned __int64* a2, __int64 a3,
                           __int64** a4);
__int64 cuda_driver_1dbe40(__int64 a1, unsigned __int64 a2, _QWORD* a3);
__int64 cuda_driver_1dd850(int a1);
__int64 cuda_driver_1dd980();
__int64 cuda_driver_1ddaf0();
__int64 cuda_driver_1de4f0(__int64* a1, __int64 a2, _QWORD* a3);
__int64 cuda_driver_1df890(unsigned __int64 a1, _QWORD* a2, __int64 a3,
                           _DWORD* a4);
__int64 cuda_driver_1dfc10(_QWORD* a1, _QWORD* a2);
__int64 cuda_driver_1e0200(__int64 a1);
__int64 cuda_driver_1e08a0(__int64 result);
__int64 cuda_driver_1e0cd0(_QWORD* a1);
__int64 cuda_driver_1e0d60(__int64 a1);
__int64 cuda_driver_1e1070(__int64 a1);
__int64 cuda_driver_1e10a0(__int64 a1, __int64 a2);
__int64 cuda_driver_1e1230(__int64 a1, _QWORD* a2);
__int64 cuda_driver_1e16e0(__int64 a1, unsigned int a2);
__int64 cuda_driver_1e1800(__int64 a1);
__int64 cuda_driver_1e19c0(__int64 a1);
__int64 cuda_driver_1e1d00(_DWORD* a1);
__int64 CudaDriverRoutine_1a16e0(unsigned __int8*, unsigned __int64);
__int64 CudaDriverRoutine_1bbb60(__int64 result);
__int64 CudaDriverRoutine_1d1940(_DWORD**, __int64, __int64, __int64, __int64,
                                 int*, int, int);
__int64 CudaDriverRoutine_1d2240(__int64 result, __int64, __int64, __int64,
                                 __int64, __int64*, int);
__int64 CudaDriverRoutine_1d7ca0(__int64, __int64);
__int64 CudaDriverRoutine_1d87a0(__int64*);
__int64 CudaDriverRoutine_f8ed0(_DWORD*);
__int64 CudaDriverRoutine_f8f00(_DWORD*);
__int64 CudaDriverStub_12e550(_QWORD, _QWORD);
__int64 CudaDriverStub_5ab60(_QWORD, _QWORD);
__int64 cuda_driver_ef950(__int64 result);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt_alt1(__int64, int, unsigned __int64) __asm__("memset_plt");
unsigned __int8 CudaDriverRoutine_1da040(_QWORD*);
unsigned __int8 CudaDriverRoutine_86fe0(__int64);
unsigned __int8 CudaDriverRoutine_9abe0(__int64);
extern _UNKNOWN CudaDriverData_1435878;
extern __int64 (*cuda_driver_1d85d0_ptr[2])();
unsigned __int64 CudaDriverRoutine_12dea0(atomic_ullong*);
void CudaDriverRoutine_4448();
__int64 cuda_driver_unplaced_9_1bb6a0(unsigned __int64 a1, unsigned __int64 a2);
__int64 cuda_driver_unplaced_9_1d0980(__int64* a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      int a7);
__int64 cuda_driver_unplaced_9_1d8110(__int64* a1, __int64* a2, __int64 a3,
                                      __int64* a4);

__int64 cuda_driver_1b2e40(__int64 a1, __int64 a2, __int64 a3, char* a4)
{
  __int64 result;
  __int64 v8;
  unsigned __int64 v9;
  _DWORD* v10;
  char v11;
  unsigned __int64 v12;
  void* v13;
  unsigned __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _DWORD* v19;
  char v20;
  unsigned __int64 v21;

  result = CudaDriverStub_1dbab0(a3);
  if (result != 0) {
    v8 = *(_QWORD*)(a1 + 64);
    v9 = *(unsigned int*)(v8 + 3732);
    if ((_DWORD)v9 != 0) {
      v10 = (_DWORD*)(result + 676);
      v11 = 1;
      v12 = 0;
      result = 0;
      v13 = CudaDriverData_1422118;
      do {
        v14 = (unsigned __int64*)(a2 + 320 * v12);
        v16 = *v14;
        v15 = v14[1];
        if ((v16 | v15) != 0) {
          v17 = *(unsigned int*)(v8 + 3756);
          if ((_DWORD)v17 != 0) {
            v18 = 0;
            v19 = v10;
            do {
              v20 = 64 - v18;
              if ((unsigned int)v18 > 0x40) {
                v20 = 0;
              }
              v21 = v15 >> v18 << v20;
              if (v18 <= 0x3F) {
                v21 = v16 >> v18;
              }
              if ((v21 & 1) != 0) {
                v11 = 0;
                if ((*v19 & 0xF | (unsigned __int8)*(v19 - 12) |
                     *(v19 - 20) & 0x280) != 0) {
                  result = 1;
                }
                else {
                  result = (unsigned int)result;
                }
                *((_BYTE*)&CudaDriverRoutine_46fc + (_QWORD)v13) =
                    (*(v19 - 12) & 0xF) == 14;
                v17 = *(unsigned int*)(v8 + 3756);
              }
              ++v18;
              v19 += 168;
            } while (v18 < v17);
            v9 = *(unsigned int*)(v8 + 3732);
          }
        }
        ++v12;
        v10 += 10752;
      } while (v12 < v9);
    }
    else {
      result = 0;
      v11 = 1;
    }
    if (a4 != nullptr) {
      *a4 = v11;
    }
  }
  return result;
}

__int64 cuda_driver_1b2f80(__int64 a1, __int64 a2, int a3)
{
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _BYTE* v10;

  v5 = CudaDriverStub_1dbab0(a2);
  v6 = *(_QWORD*)(a1 + 64);
  if (*(_DWORD*)(v6 + 3732) != 0 && *(_DWORD*)(v6 + 3756) != 0) {
    v7 = (_BYTE*)(v5 + 685);
    v8 = 0;
    do {
      if (*(_DWORD*)(v6 + 3756) != 0) {
        v9 = 0;
        v10 = v7;
        do {
          *v10 = 0;
          ++v9;
          v10 += 672;
          v6 = *(_QWORD*)(a1 + 64);
        } while (v9 < *(unsigned int*)(v6 + 3756));
      }
      ++v8;
      v7 += 43008;
    } while (v8 < *(unsigned int*)(v6 + 3732));
  }
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

__int64 cuda_driver_1b3060(__int64 a1, __int64 a2, __int64 a3, char* a4,
                           _BYTE* a5, char* a6)
{
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BOOL8 v14;
  _BYTE* v15;
  unsigned __int64 v16;
  int v17;
  char v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64* v21;
  int v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  bool v38;
  _BOOL4 v39;
  bool v40;
  bool v41;
  bool v42;
  unsigned int v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47;
  unsigned __int64 v48;
  char v49;
  int v50;
  unsigned int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  bool v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned int v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned int v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  _BYTE* v72;
  char v73;
  char v74;
  __int64 v75;
  char v76;
  char v77;
  char v78;
  char v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  _DWORD* v83;
  unsigned __int64 v84;
  void* v85;
  unsigned __int64* v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  _DWORD* v91;
  char v92;
  unsigned __int64 v93;
  char* v95;
  char* v96;
  __int64 v97;
  __int64 v98;
  _BYTE* v100;
  char v101;

  v11 = CudaDriverStub_1dbab0(a3);
  v12 = *(_QWORD*)(a1 + 64);
  if (*(_DWORD*)(v12 + 3732) == 0) {
    *a5 = 0;
    v79 = 1;
    goto LABEL_155;
  }
  v95 = a6;
  v13 = (_BYTE*)(v11 + 684);
  v14 = a1;
  v15 = (_BYTE*)v11;
  v16 = 0;
  LOBYTE(v17) = 0;
  v98 = a1;
  v18 = 1;
  v96 = a4;
  v97 = v11 + 16;
  while (1) {
    v22 = *(_DWORD*)(v12 + 3756);
    v100 = v13;
    v101 = v18;
    if (v22 != 0) {
      if (v22 == 1) {
        v23 = 0;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
      }
      else {
        v49 = 64;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        do {
          if (*v13 != 0) {
            v64 = 1LL << v23;
            v65 = v23 - 64;
            if (v23 >= 0x40) {
              v64 = 0;
            }
            v27 |= v64;
            if (v65 <= 0xFFFFFFBE) {
              v66 = 1LL << v65;
              v67 = v26 & ~v66;
              if (v23 < 0x40) {
                v66 = 1uLL >> v49;
              }
              v26 = v67 | v66;
            }
          }
          if (v13[1] != 0) {
            v68 = 1LL << v23;
            v69 = v23 - 64;
            if (v23 >= 0x40) {
              v68 = 0;
            }
            v25 |= v68;
            if (v69 <= 0xFFFFFFBE) {
              v70 = 1LL << v69;
              v71 = v24 & ~v70;
              if (v23 < 0x40) {
                v70 = 1uLL >> v49;
              }
              v24 = v71 | v70;
            }
          }
          v50 = (unsigned __int8)v13[672];
          v51 = v23 - 63;
          v52 = 2LL << v23;
          v53 = (unsigned __int8)v13[673];
          v13 += 1344;
          v49 -= 2;
          v54 = 1LL << ((unsigned __int8)v23 - 63);
          if (v23 >= 0x40) {
            v52 = 0;
          }
          v55 = v27 | v52;
          v56 = v26 & ~v54;
          if (v23 < 0x40) {
            v54 = 0;
          }
          v57 = v56 | v54;
          if (v51 > 0xFFFFFFBE) {
            v57 = v26;
          }
          v42 = v50 == 0;
          v58 = 2LL << v23;
          if (!v42) {
            v27 = v55;
            v26 = v57;
          }
          v59 = 1LL << v51;
          if (v23 >= 0x40) {
            v58 = 0;
          }
          v60 = v24 & ~v59;
          v61 = v23 >= 0x40;
          v23 += 2LL;
          if (!v61) {
            v59 = 0;
          }
          v62 = v25 | v58;
          v63 = v60 | v59;
          if (v51 > 0xFFFFFFBE) {
            v63 = v24;
          }
          if (v53 != 0) {
            v25 = v62;
            v24 = v63;
          }
        } while ((v22 & 0xFFFFFFFE) != v23);
      }
      if ((v22 & 1) != 0) {
        v28 = v97 + 43008 * v16 + 672 * v23;
        if (*(_BYTE*)(v28 + 668) != 0) {
          v29 = 1LL << v23;
          if (v23 >= 0x40) {
            v29 = 0;
          }
          v27 |= v29;
          v30 = 1LL << ((unsigned __int8)v23 - 64);
          v31 = v26 & ~v30;
          if (v23 < 0x40) {
            v30 = 1uLL >> (-(char)v23 & 63);
          }
          v32 = v31 | v30;
          if ((unsigned int)(v23 - 64) <= 0xFFFFFFBE) {
            v26 = v32;
          }
        }
        if (*(_BYTE*)(v28 + 669) != 0) {
          v33 = 1LL << v23;
          if (v23 >= 0x40) {
            v33 = 0;
          }
          v25 |= v33;
          v34 = v23 - 64;
          v35 = 1LL << ((unsigned __int8)v23 - 64);
          if (v23 >= 0x40) {
            v36 = 1LL << ((unsigned __int8)v23 - 64);
          }
          else {
            v36 = 1uLL >> (-(char)v23 & 63);
          }
          v37 = v24 & ~v35 | v36;
          if (v34 <= 0xFFFFFFBE) {
            v24 = v37;
          }
        }
      }
    }
    else {
      v27 = 0;
      v26 = 0;
      v25 = 0;
      v24 = 0;
    }
    v38 = (_BYTE)v17 != 0 || (v27 | v26) != 0;
    v39 = CudaDriverRoutine_98110(v14);
    v40 = (v25 | v24) != 0;
    if (v38) {
      v40 = v39 || v38;
    }
    v41 = v39 ? v40 : v39 || v38;
    v17 = v41;
    if (v101 == 0) {
      break;
    }
    v42 = v27 == v25 && v26 == v24;
    v18 = v42;
    if (!v42) {
      v18 = 0;
      *a5 = v17;
      if (v17 == 0) {
        goto LABEL_153;
      }
    LABEL_135:
      *v95 = v18;
      v80 = CudaDriverStub_1dbab0(a3);
      a4 = v96;
      if (v80 != 0 && (v81 = *(_QWORD*)(v98 + 64),
                       (_DWORD)(v82 = *(unsigned int*)(v81 + 3732)) != 0)) {
        v83 = (_DWORD*)(v80 + 676);
        v84 = 0;
        v79 = 0;
        v85 = CudaDriverData_1422118;
        do {
          v86 = (unsigned __int64*)(a2 + 320 * v84);
          v88 = *v86;
          v87 = v86[1];
          if ((v88 | v87) != 0) {
            v89 = *(unsigned int*)(v81 + 3756);
            if ((_DWORD)v89 != 0) {
              v90 = 0;
              v91 = v83;
              do {
                v92 = 64 - v90;
                if ((unsigned int)v90 > 0x40) {
                  v92 = 0;
                }
                v93 = v87 >> v90 << v92;
                if (v90 <= 0x3F) {
                  v93 = v88 >> v90;
                }
                if ((v93 & 1) != 0) {
                  if ((*v91 & 0xF | (unsigned __int8)*(v91 - 12) |
                       *(v91 - 20) & 0x280) != 0) {
                    v79 = 1;
                  }
                  *((_BYTE*)&CudaDriverRoutine_46fc + (_QWORD)v85) =
                      (*(v91 - 12) & 0xF) == 14;
                  v89 = *(unsigned int*)(v81 + 3756);
                }
                ++v90;
                v91 += 168;
              } while (v90 < v89);
              v82 = *(unsigned int*)(v81 + 3732);
            }
          }
          ++v84;
          v83 += 10752;
        } while (v84 < v82);
      }
      else {
        v79 = 0;
      }
      goto LABEL_155;
    }
    v14 = v98;
    v43 = *(_DWORD*)(*(_QWORD*)(v98 + 64) + 3756LL);
    if (v43 != 0) {
      if (v43 < 4) {
        v44 = 0;
        v20 = 0;
        v19 = 0;
      LABEL_46:
        v45 = v43 & 3;
        if (v45 != 0) {
          v46 = 672 * v44 + 628;
          do {
            v47 = 64 - v44;
            v48 = v27 >> v44;
            if ((unsigned int)v44 > 0x40) {
              v47 = 0;
            }
            if (v44 >= 0x40) {
              v48 = v26 >> v44 << v47;
            }
            if ((v48 & 1) != 0 && (v15[v46 + 3] & 7) != 0) {
              if (v44 >= 0x40) {
                v20 |= 1LL << v44;
              }
              else {
                v19 |= 1LL << v44;
              }
            }
            ++v44;
            v46 += 672;
            --v45;
          } while (v45 != 0);
        }
        goto LABEL_4;
      }
      v44 = 0;
      v20 = 0;
      v19 = 0;
      v72 = v15;
      while (2) {
        v73 = v44 - 63;
        if (v44 <= 0x3F) {
          if (((v27 >> v44) & 1) == 0) {
            goto LABEL_102;
          }
        LABEL_99:
          if ((v72[631] & 7) == 0) {
            goto LABEL_102;
          }
          v75 = 1LL << v44;
          if (v44 <= 0x3F) {
            v19 |= v75;
            goto LABEL_102;
          }
          v20 |= v75;
          if (v44 >= 0x40) {
            goto LABEL_106;
          }
        LABEL_103:
          if (((v27 >> ((unsigned __int8)v44 + 1)) & 1) == 0) {
            goto LABEL_112;
          }
        LABEL_109:
          if ((v72[1303] & 7) == 0) {
            goto LABEL_112;
          }
          if (v44 < 0x40) {
            v19 |= 2LL << v44;
            goto LABEL_112;
          }
          v20 |= 1LL << v73;
          goto LABEL_116;
        }
        v74 = 64 - v44;
        if ((unsigned int)v44 > 0x40) {
          v74 = 0;
        }
        if (((v26 >> v44 << v74) & 1) != 0) {
          goto LABEL_99;
        }
      LABEL_102:
        if (v44 < 0x40) {
          goto LABEL_103;
        }
      LABEL_106:
        v76 = 63 - v44;
        if ((unsigned int)(v44 + 1) > 0x40) {
          v76 = 0;
        }
        if (((v26 >> v73 << v76) & 1) != 0) {
          goto LABEL_109;
        }
      LABEL_112:
        if (v44 < 0x40) {
          if (((v27 >> ((unsigned __int8)v44 + 2)) & 1) == 0) {
            goto LABEL_122;
          }
        LABEL_119:
          if ((v72[1975] & 7) == 0) {
            goto LABEL_122;
          }
          if (v44 < 0x40) {
            v19 |= 4LL << v44;
            goto LABEL_122;
          }
          v20 |= 1LL << ((unsigned __int8)v44 - 62);
          goto LABEL_126;
        }
      LABEL_116:
        v77 = 62 - v44;
        if ((unsigned int)(v44 + 2) > 0x40) {
          v77 = 0;
        }
        if (((v26 >> ((unsigned __int8)v44 - 62) << v77) & 1) != 0) {
          goto LABEL_119;
        }
      LABEL_122:
        if (v44 >= 0x40) {
        LABEL_126:
          v78 = 61 - v44;
          if ((unsigned int)(v44 + 3) > 0x40) {
            v78 = 0;
          }
          if (((v26 >> ((unsigned __int8)v44 - 61) << v78) & 1) != 0) {
          LABEL_129:
            if ((v72[2647] & 7) != 0) {
              if (v44 < 0x40) {
                v19 |= 8LL << v44;
              }
              else {
                v20 |= 1LL << ((unsigned __int8)v44 - 61);
              }
            }
          }
        }
        else if (((v27 >> ((unsigned __int8)v44 + 3)) & 1) != 0) {
          goto LABEL_129;
        }
        v44 += 4LL;
        v72 += 2688;
        if ((v43 & 0xFFFFFFFC) == v44) {
          goto LABEL_46;
        }
        continue;
      }
    }
    v19 = 0;
    v20 = 0;
  LABEL_4:
    v21 = (unsigned __int64*)(a2 + 320 * v16++);
    *v21 = v27;
    v21[1] = v26;
    v21[2] = v19;
    v21[3] = v20;
    v21[6] = v27;
    v21[7] = v26;
    v12 = *(_QWORD*)(v98 + 64);
    v13 = v100 + 43008;
    v15 += 43008;
    if (v16 >= *(unsigned int*)(v12 + 3732)) {
      goto LABEL_134;
    }
  }
  v18 = 0;
LABEL_134:
  *a5 = v17;
  if (v17 != 0) {
    goto LABEL_135;
  }
LABEL_153:
  a4 = v96;
  v79 = 1;
LABEL_155:
  *a4 = v79;
  return 0;
}

void cuda_driver_1b3760(__int64 a1, _QWORD* a2, __int64 a3, char* a4)
{
  int v8;
  int v9;
  int v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _DWORD* v16;
  unsigned __int64 v17;
  char v18;
  void* v19;
  unsigned __int64* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _DWORD* v25;
  char v26;
  unsigned __int64 v27;
  int v28;
  int v29[2];

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v8 = (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 21368LL))((void*)a1),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v8 == 0) {
  LABEL_10:
    v11 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
    if ((_DWORD)v11 != 0) {
      v12 = a2 + 1;
      while (*(v12 - 1) == 0 && *v12 == 0) {
        v12 += 40;
        if (--v11 == 0) {
          goto LABEL_15;
        }
      }
      v13 = CudaDriverStub_1dbab0(a3),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v13 != 0 && (v14 = *(_QWORD*)(a1 + 64),
                       (_DWORD)(v15 = *(unsigned int*)(v14 + 3732)) != 0)) {
        v16 = (_DWORD*)(v13 + 676);
        v17 = 0;
        v18 = 0;
        v19 = CudaDriverData_1422118;
        do {
          v20 = &a2[40 * v17];
          v22 = *v20;
          v21 = v20[1];
          if ((v22 | v21) != 0) {
            v23 = *(unsigned int*)(v14 + 3756);
            if ((_DWORD)v23 != 0) {
              v24 = 0;
              v25 = v16;
              do {
                v26 = 64 - v24;
                if ((unsigned int)v24 > 0x40) {
                  v26 = 0;
                }
                v27 = v21 >> v24 << v26;
                if (v24 <= 0x3F) {
                  v27 = v22 >> v24;
                }
                if ((v27 & 1) != 0) {
                  if ((*v25 & 0xF | (unsigned __int8)*(v25 - 12) |
                       *(v25 - 20) & 0x280) != 0) {
                    v18 = 1;
                  }
                  *((_BYTE*)&CudaDriverRoutine_46fc + (_QWORD)v19) =
                      (*(v25 - 12) & 0xF) == 14;
                  v23 = *(unsigned int*)(v14 + 3756);
                }
                ++v24;
                v25 += 168;
              } while (v24 < v23);
              v15 = *(unsigned int*)(v14 + 3732);
            }
          }
          ++v17;
          v16 += 10752;
        } while (v17 < v15);
      }
      else {
        v18 = 0;
      }
      *a4 = v18;
    }
    else {
    LABEL_15:
      *a4 = 1;
    }
    return;
  }
  if (v8 != 801) {
    return;
  }
  if (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3732LL) == 0) {
  LABEL_9:
    cuda_driver_1b39a0_alt1(a1, a2),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    goto LABEL_10;
  }
  v9 = 0;
  while (1) {
    v29[0] = 0x505700;
    v29[1] = v9;
    v10 = ((int (*)(__int64, int, int, int*, int*, int*,
                    __int64))CudaDriverStub_111420)(
        CudaDriverRoutine_98340(a1), 2, 1, &v29[0], &v28, &v29[1], 0);
    if (v10 != 0 || (unsigned int)CudaDriverRoutine_98650(a1, 0) != 0) {
      break;
    }
    if ((v28 & 0x10) != 0 &&
        (unsigned int)++v9 >= *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3732LL)) {
      goto LABEL_9;
    }
  }
}

void cuda_driver_1b39a0(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int32x4_t v7;
  int32x4_t v8;
  float* v9;
  _OWORD* v10;
  int v11;
  float* v12;
  int v13;
  int v14;
  int v15;
  unsigned __int64 v16;
  int v17;
  int v18;
  _BYTE v19[9216];
  _DWORD v20[768];
  float32x4x3_t v21;
  float32x4x3_t v22;

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = *(_QWORD*)(a1 + 64);
  v4 = *(_DWORD*)(v2 + 3732);
  if (v4 != 0) {
    if (v4 - 1431655766 < 0xAAAAAAB2) {
      v5 = 0;
      v6 = 0;
      do {
      LABEL_8:
        v13 = v6 + 1;
        v14 = v6 + 2;
        *(_DWORD*)&v19[4 * v6] = v5;
        v20[v6] = 5265160;
        v6 += 3;
        *(_DWORD*)&v19[4 * v13] = v5;
        *(_DWORD*)&v19[4 * v14] = v5++;
        v20[v13] = 5265176;
        v20[v14] = 5265168;
      } while (v5 < v4);
      goto LABEL_9;
    }
    LANES128(v7).n128_u64[0] = 0x400000004LL;
    LANES128(v7).n128_u64[1] = 0x400000004LL;
    LANES128(v8).n128_u64[0] = 0x800000008LL;
    LANES128(v8).n128_u64[1] = 0x800000008LL;
    v5 = v4 & 0x7FFFFFF8;
    v9 = (float*)v19;
    v21.val[0] = COERCE_AS(float32x4_t, CudaDriverData_1115690);
    v6 = 3 * (v4 & 0x7FFFFFF8);
    v10 = v20;
    v11 = v4 & 0x7FFFFFF8;
    do {
      v22.val[0] = vaddq_s32(v21.val[0], v7);
      v21.val[1] = v21.val[0];
      v12 = v9;
      v11 -= 8;
      v9 += 24;
      v21.val[2] = v21.val[0];
      v22.val[1] = v22.val[0];
      vst3q_f32(v12, v21);
      v22.val[2] = v22.val[0];
      v21.val[0] = vaddq_s32(v21.val[0], v8);
      *v10 = CudaDriverData_1115a60;
      v10[1] = CudaDriverData_1116170;
      v10[2] = CudaDriverData_1115330;
      v10[3] = CudaDriverData_1115a60;
      v10[4] = CudaDriverData_1116170;
      v10[5] = CudaDriverData_1115330;
      v10 += 6;
      vst3q_f32(v12 + 12, v22);
    } while (v11 != 0);
    if (v4 != v5) {
      goto LABEL_8;
    }
  }
LABEL_9:
  CudaDriverRoutine_98340(a1),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  CudaDriverStub_111430(),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v15 == 0 && *(_DWORD*)(v2 + 3732) != 0) {
    v16 = 0;
    v17 = 0;
    do {
      ++v16;
      *a2 = *(_QWORD*)&v19[8 * v17 + 3072];
      a2[2] = *(_QWORD*)&v19[8 * (v17 + 1) + 3072];
      v18 = v17 + 2;
      v17 += 3;
      a2[6] = *(_QWORD*)&v19[8 * v18 + 3072];
      a2 += 40;
    } while (v16 < *(unsigned int*)(v2 + 3732));
  }
}

void cuda_driver_1b3d20(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 i;
  int32x4_t v6;
  int32x4_t v7;
  int32x4_t v8;
  int32x4_t* v9;
  int32x4_t v10;
  int32x4_t* v11;
  __int64 v12;
  int v13;
  char* v14;
  char v15;
  _DWORD v16[4];
  __int64 v17;
  _DWORD v18[4];
  __int64 v19;
  _BYTE v20[1024];

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v20, 0, 1024),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v18, 0, 1024),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v16, 0, 1024),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  if ((*(unsigned int (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(
          a1, a2) != 801) {
    return;
  }
  if ((_DWORD)v4 != 0) {
    if ((unsigned int)v4 < 8) {
      for (i = 0; i != v4; ++i) {
      LABEL_8:
        v18[i] = 5264652;
        v16[i] = i;
      }
      goto LABEL_9;
    }
    LANES128(v6).n128_u64[0] = 0x400000004LL;
    LANES128(v6).n128_u64[1] = 0x400000004LL;
    LANES128(v7).n128_u64[0] = 0x800000008LL;
    LANES128(v7).n128_u64[1] = 0x800000008LL;
    i = (unsigned int)v4 & 0xFFFFFFF8;
    v8 = COERCE_AS(int32x4_t, CudaDriverData_1115690);
    v9 = (int32x4_t*)&v17;
    v10 = vdupq_n_s32(0x50550Cu);
    v11 = (int32x4_t*)&v19;
    v12 = i;
    do {
      v11[-1] = v10;
      *v11 = v10;
      v12 -= 8;
      v11 += 2;
      v9[-1] = v8;
      *v9 = vaddq_s32(v8, v6);
      v9 += 2;
      v8 = vaddq_s32(v8, v7);
    } while (v12 != 0);
    if (i != v4) {
      goto LABEL_8;
    }
  }
LABEL_9:
  CudaDriverRoutine_98340(a1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  CudaDriverStub_111420(),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v13 == 0 && (_DWORD)v4 != 0) {
    v14 = v20;
    while (1) {
      v15 = *v14;
      v14 += 4;
      if ((v15 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return;
      }
    }
    *a2 = 1;
  }
}

__int64 cuda_driver_1b3eb0(__int64 a1, __int64 a2)
{
  *(_DWORD*)(CudaDriverStub_1dbab0(a2) + 4) = 0;
  __builtin_arm_dmb(0xFu);
  return 0;
}

__int64 cuda_driver_1b3ee0(__int64 a1, __int64 a2, int a3)
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

__int64 cuda_driver_1b4600(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v2 = *(_QWORD*)a1;
  v3 = *(_QWORD*)(a1 + 16);
  if (*(_QWORD*)(v2 + 32) == a1) {
    *(_QWORD*)(v2 + 32) = v3;
    if (v3 == 0) {
      goto LABEL_7;
    }
    v4 = 0;
  }
  else {
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL) = v3;
    if (v3 == 0) {
      goto LABEL_7;
    }
    v4 = *(_QWORD*)(a1 + 8);
  }
  *(_QWORD*)(v3 + 8) = v4;
LABEL_7:
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  result = (*(__int64 (**)(void*))(*(_QWORD*)(v2 + 48) + 8LL))((void*)v2);
  if ((_DWORD)result == 0) {
    *(_QWORD*)(a1 + 80) = 0;
    *(_OWORD*)(a1 + 16) = (__typeof__(*(_OWORD*)(a1 + 16))){0};
    *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
    *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
    *(_OWORD*)(a1 + 64) = (__typeof__(*(_OWORD*)(a1 + 64))){0};
    *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
    CudaDriverRoutine_12e340(a1);
    return 0;
  }
  return result;
}

__int64 cuda_driver_1b9740(__int64 result, __int64 a2, int a3)
{
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  struct {
    _DWORD v12[2];
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
    _QWORD* v17;
    int v18;
    char gap52_[4];
    _BOOL4 v19;
    char gap60_[4];
    int v20;
  } v12_;
  _QWORD v21[11];

  if (*(_DWORD*)((char*)((_UNKNOWN*)0xC4LL) + (_QWORD)CudaDriverData_1432140) !=
      0) {
    v5 = result;
    v6 = CudaDriverRoutine_1db1b0(result);
    v7 = (_DWORD*)CudaDriverRoutine_1dc020(v5);
    if ((v6 & 0x7C0000000000000LL) != 0) {
      v8 = 1;
    }
    else {
      v8 = 2;
    }
    v9 = CudaDriverStub_1db750(v5);
    if (v9 != 0) {
      v9 = CudaDriverRoutine_f1060(v9);
    }
    v12_.v12[0] = 72;
    v12_.v12[1] = *v7;
    v10 = v9 + 176;
    if (v9 == 0) {
      v10 = 0;
    }
    v12_.v13 = a2;
    v12_.v14 = v10;
    if ((v6 & 7) == 1 && (v6 & 0x3000000) != 0) {
      v12_.v15 = CudaDriverStub_1dbab0(v5);
      v21[0] = 0;
      cuda_driver_helpers_1db770(v5, v21);
      if (v21[0] != 0) {
        v11 = *(_DWORD*)((char*)((_UNKNOWN*)0x15CLL) + v21[0]);
      LABEL_15:
        v12_.v20 = v11;
        v12_.v18 = a3;
        v12_.v16 = CudaDriverStub_1dbf90(v5);
        v12_.v17 = v21;
        v12_.v19 = cuda_driver_predicates_10ebb0(v5);
        CudaDriverRoutine_eeec0(v5, nullptr, v8, (__int64)v21);
        return cuda_driver_20b420(2u, 0x31u, (__int64)v12_.v12);
      }
    }
    else {
      v12_.v15 = CudaDriverStub_102e00(v5);
    }
    v11 = -1;
    goto LABEL_15;
  }
  return result;
}

__int64 cuda_driver_1b9890(unsigned __int64 a1, __int64* a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int** v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  _QWORD* v19;
  void* v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37[2];

  v36 = 0;
  result = CudaDriverRoutine_121c60(&v36);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_428b0(a2, a3, &v34, &v35);
    if ((_DWORD)result == 0) {
      v7 = v34;
      if (CudaDriverRoutine_efe40(*(_QWORD*)(v35 + 64))) {
        if (a1 == 0) {
          return 0;
        }
        v8 = *(_QWORD*)(v34 + 992);
        if (v8 != 0) {
          CudaDriverStub_107f90(*(_QWORD*)(v8 + 272) + 592LL);
          v9 = cuda_driver_d3530(&v33, *(_QWORD*)(v34 + 992), nullptr, nullptr,
                                 *(_QWORD*)(v34 + 1000),
                                 *(unsigned int*)(v34 + 1036), a1, 1);
          if (v9 == 0) {
            v37[0] = v33;
            v37[1] = 0;
            v10 = CudaDriverRoutine_1a3d20(v34 + 1000, (unsigned __int8*)v37);
            if (v10 != 0) {
              v9 = v10;
              cuda_driver_c3200(v33, 0);
            }
            else {
              v9 = 0;
            }
          }
          CudaDriverStub_108070(*(_QWORD*)(*(_QWORD*)(v34 + 992) + 272LL) +
                                592LL);
          return v9;
        }
        v11 = CudaDriverRoutine_efc80(v35, a1);
        v33 = v11;
        if (v11 == 0) {
          return 1;
        }
        v12 = v11;
        v13 = CudaDriverStub_1db750(v11);
        v14 = v13;
        if (v13 != 0) {
          v32 = 0;
          v31 = CudaDriverRoutine_f1060(v13);
          if (v31 != 0 && (unsigned __int8)((
                              __int64 (*)(void))CudaDriverStub_efe90)() != 0) {
            result = CudaDriverStub_118070(v34);
            if ((_DWORD)result != 0) {
              return result;
            }
            goto LABEL_27;
          }
        LABEL_25:
          v15 = (unsigned int**)CudaDriverRoutine_1dc000(v12);
          result =
              CudaDriverRoutine_f2e00(*v15, v34, (unsigned __int64*)&v31, &v32);
          if ((_DWORD)result != 0) {
            return result;
          }
          CudaDriverStub_efe90(v31);
        LABEL_27:
          cuda_driver_1b9d50(v12, v34);
          v16 = v34;
          if ((*(_BYTE*)(v34 + 56) & 1) != 0) {
            v17 = CudaDriverRoutine_98340(v35);
            cuda_driver_1084c0(v17 + 24);
            cuda_driver_108520(*(_QWORD*)(v35 + 88) + 104LL);
            v16 = v34;
          }
          CudaDriverStub_107f90(v16 + 592);
          v18 = CudaDriverRoutine_1181a0(v34);
          if (v18 != 0) {
            goto LABEL_54;
          }
          v19 = (_QWORD*)v33;
          cuda_driver_1b9e60(v33, v34);
          v20 = CudaDriverData_1422118;
          cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                             (_QWORD)CudaDriverData_1422118);
          v21 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_4780 +
                                     (_QWORD)v20);
          cuda_driver_108520(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v20] +
                             616LL * *(unsigned int*)(v7 + 348));
          v22 = cuda_driver_118130(v34, v37);
          if (v14 == 0) {
            v23 = v22;
            v24 = CudaDriverStub_1db760(v19);
            v22 = v23;
            if (v24 == 0) {
              v19[68] = v37[0];
              v25 = *(_QWORD*)(v7 + 568);
              if (v25 != 0) {
                v19[69] = v25;
                v26 = *(_QWORD*)(*(_QWORD*)(v7 + 568) + 560LL);
                v19[70] = v26;
                if (v26 != 0) {
                  *(_QWORD*)(v26 + 552) = v19;
                }
                *(_QWORD*)(*(_QWORD*)(v7 + 568) + 560LL) = v19;
              }
              else {
                v19[70] = *(_QWORD*)(v7 + 560);
                *(_QWORD*)(v7 + 560) = v19;
                v27 = v19[70];
                if (v27 != 0) {
                  *(_QWORD*)(v27 + 552) = v19;
                }
              }
              *(_QWORD*)(v7 + 568) = v19;
            }
          }
          if (v22 != 0) {
            v18 = v22;
            CudaDriverRoutine_1085d0(
                *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v20] +
                616LL * *(unsigned int*)(v7 + 348));
            CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 +
                                     (_QWORD)v20);
          LABEL_54:
            CudaDriverStub_108070(v34 + 592);
            result = v18;
            goto LABEL_55;
          }
          if ((*(_BYTE*)(v34 + 56) & 4) != 0) {
            *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v34 + 16) + 104LL) + 344LL) = 1;
          }
          if (CudaDriverStub_1db760(v19) != 0 ||
              (v28 = CudaDriverStub_efe90(v31), v14 == 0) || v28 != 0) {
            CudaDriverRoutine_1085d0(
                *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v20] +
                616LL * *(unsigned int*)(v7 + 348));
            CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 +
                                     (_QWORD)v20);
            if (v19 == nullptr) {
              goto LABEL_51;
            }
          }
          else {
            v29 = CudaDriverStub_1dbf90(v19);
            CudaDriverStub_102350(v32);
            CudaDriverRoutine_1085d0(
                *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v20] +
                616LL * *(unsigned int*)(v7 + 348));
            CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 +
                                     (_QWORD)v20);
            CudaDriverStub_1db380(&v33);
            CudaDriverRoutine_f3ac0(v31, v29);
            ((void (*)(__int64, __int64,
                       unsigned __int64))CudaDriverRoutine_1021a0)(v32, v14,
                                                                   v37[0]);
            CudaDriverStub_102360(v32);
            v19 = (_QWORD*)v33;
            if (v33 == 0) {
              goto LABEL_51;
            }
          }
          if (CudaDriverStub_1db760(v19) != 0) {
            cuda_driver_helpers_b7ed0(v33, v21, *(_DWORD*)(v7 + 348), v37[0]);
          LABEL_53:
            v18 = 0;
            goto LABEL_54;
          }
        LABEL_51:
          if ((unsigned __int8)CudaDriverStub_efe90(v31) != 0) {
            CudaDriverStub_108070(v34 + 592);
            result = CudaDriverRoutine_d3860(v33, v34, v37[0]);
          LABEL_55:
            if ((*(_BYTE*)(v34 + 56) & 1) == 0) {
              return result;
            }
            v9 = result;
            v30 = CudaDriverRoutine_98340(v35);
            CudaDriverRoutine_1085b0(v30 + 24);
            CudaDriverRoutine_1085d0(*(_QWORD*)(v35 + 88) + 104LL);
            return v9;
          }
          goto LABEL_53;
        }
        if (CudaDriverStub_1db760(v12) != 0 ||
            (CudaDriverRoutine_1db1b0(v12) & 0x7C0000000000000LL) ==
                0x80000000000000LL ||
            (CudaDriverRoutine_1db1b0(v12) & 0x7C0000000000000LL) ==
                0x180000000000000LL) {
          v31 = 0;
          v32 = 0;
          goto LABEL_25;
        }
      }
      return 801;
    }
  }
  return result;
}

__int64 cuda_driver_1b9d50(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    int v10;
    char gap12_[4];
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    _BYTE* v16;
    _BOOL4 v17;
  } v10_;
  _BYTE v18[88];

  if (*(_DWORD*)((char*)((_UNKNOWN*)0xECLL) + (_QWORD)CudaDriverData_1432140) !=
      0) {
    v3 = result;
    v4 = CudaDriverRoutine_1db1b0(result);
    v5 = v4;
    if ((v4 & 0x7C0000000000000LL) != 0) {
      v6 = 1;
    }
    else {
      v6 = 2;
    }
    v7 = CudaDriverStub_1db750(v3);
    if (v7 != 0) {
      v7 = CudaDriverRoutine_f1060(v7);
    }
    v10_.v10 = 64;
    v8 = v7 + 176;
    if (v7 == 0) {
      v8 = 0;
    }
    v10_.v11 = a2;
    v10_.v12 = v8;
    if ((v5 & 7) == 1 && (v5 & 0x3000000) != 0) {
      v9 = CudaDriverStub_1dbab0(v3);
    }
    else {
      v9 = CudaDriverStub_102e00(v3);
    }
    v10_.v13 = v9;
    v10_.v14 = CudaDriverStub_1dbf90(v3);
    v10_.v15 = CudaDriverRoutine_1dc000(v3);
    v10_.v16 = v18;
    v10_.v17 = cuda_driver_predicates_10ebb0(v3);
    CudaDriverRoutine_eeec0(v3, nullptr, v6, (__int64)v18);
    return cuda_driver_20b420(2u, 0x3Bu, (__int64)&v10_.v10);
  }
  return result;
}

__int64 cuda_driver_1b9e60(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    int v10;
    char gap12_[4];
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    _BYTE* v16;
    _BOOL4 v17;
  } v10_;
  _BYTE v18[88];

  if (*(_DWORD*)((char*)((_UNKNOWN*)0xC8LL) + (_QWORD)CudaDriverData_1432140) !=
      0) {
    v3 = result;
    v4 = CudaDriverRoutine_1db1b0(result);
    v5 = v4;
    if ((v4 & 0x7C0000000000000LL) != 0) {
      v6 = 1;
    }
    else {
      v6 = 2;
    }
    v7 = CudaDriverStub_1db750(v3);
    if (v7 != 0) {
      v7 = CudaDriverRoutine_f1060(v7);
    }
    v10_.v10 = 64;
    v8 = v7 + 176;
    if (v7 == 0) {
      v8 = 0;
    }
    v10_.v11 = a2;
    v10_.v12 = v8;
    if ((v5 & 7) == 1 && (v5 & 0x3000000) != 0) {
      v9 = CudaDriverStub_1dbab0(v3);
    }
    else {
      v9 = CudaDriverStub_102e00(v3);
    }
    v10_.v13 = v9;
    v10_.v14 = CudaDriverStub_1dbf90(v3);
    v10_.v15 = CudaDriverRoutine_1dc000(v3);
    v10_.v16 = v18;
    v10_.v17 = cuda_driver_predicates_10ebb0(v3);
    CudaDriverRoutine_eeec0(v3, nullptr, v6, (__int64)v18);
    return cuda_driver_20b420(2u, 0x32u, (__int64)&v10_.v10);
  }
  return result;
}

__int64 cuda_driver_1b9f70(unsigned int a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;

  v8 = 0;
  result = CudaDriverRoutine_121c60(&v8);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v8, nullptr, 0);
    if ((_DWORD)result == 0) {
      if (a1 >= CudaDriverData_1434ac0) {
        return 101;
      }
      else {
        v7 = nullptr;
        result = CudaDriverRoutine_f2cf0(
            *((unsigned int**)&CudaDriverData_14347a8 + (int)a1 + 35),
            (__int64*)&v7);
        if ((_DWORD)result == 0) {
          CudaDriverStub_107f90_alt1(
              *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) + (_QWORD)v7));
          v5 = CudaDriverStub_f0f50(v7);
          v6 = CudaDriverStub_102040(v5);
          cuda_driver_f1180(
              v7,
              (a2 + (unsigned __int64)(unsigned int)(*(_DWORD*)(v6 + 8) - 1)) /
                  *(unsigned int*)(v6 + 8));
          CudaDriverStub_108070_alt1(
              *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) + (_QWORD)v7));
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_1ba060(unsigned int a1, unsigned __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;

  v6 = 0;
  result = CudaDriverRoutine_121c60(&v6);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v6, nullptr, 0);
    if ((_DWORD)result == 0) {
      if (a1 >= CudaDriverData_1434ac0) {
        return 101;
      }
      else {
        v5 = 0;
        result = CudaDriverRoutine_f2cf0(
            *((unsigned int**)&CudaDriverData_14347a8 + (int)a1 + 35), &v5);
        if ((_DWORD)result == 0) {
          CudaDriverStub_107f90_alt1(
              *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) + v5));
          CudaDriverRoutine_f1e90(v5, a2);
          CudaDriverStub_108070_alt1(
              *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) + v5));
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_1ba140(_QWORD* a1, unsigned int a2)
{
  __int64 result;
  _QWORD* v5;
  __int64 v6;

  v6 = 0;
  result = CudaDriverRoutine_121c60(&v6);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v6, nullptr, 0);
    if ((_DWORD)result == 0) {
      if (a2 >= CudaDriverData_1434ac0) {
        return 101;
      }
      else if (a1 != nullptr) {
        v5 = nullptr;
        result = CudaDriverRoutine_f2cf0(
            *((unsigned int**)&CudaDriverData_14347a8 + (int)a2 + 35),
            (__int64*)&v5);
        if ((_DWORD)result == 0) {
          CudaDriverStub_107f90_alt1(
              *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) + (_QWORD)v5));
          CudaDriverRoutine_f1f00(v5, a1);
          CudaDriverStub_108070_alt1(
              *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) + (_QWORD)v5));
          return 0;
        }
      }
      else {
        return 1;
      }
    }
  }
  return result;
}

__int64 cuda_driver_1ba290(unsigned int a1, _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v7;
  __int64 v8[3];

  result = 1;
  if (a2 != nullptr && a1 < CudaDriverData_1434ac0) {
    v8[1] = v2;
    v8[2] = v3;
    v8[0] = 0;
    result = CudaDriverRoutine_f2cf0(
        *((unsigned int**)&CudaDriverData_14347a8 + (int)a1 + 35), v8);
    if ((_DWORD)result == 0) {
      CudaDriverStub_107f90_alt1(
          *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) + v8[0]));
      v7 = CudaDriverStub_f0f50(v8[0]);
      *a2 = *(_DWORD*)(CudaDriverStub_102040(v7) + 8);
      CudaDriverStub_108070_alt1(
          *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) + v8[0]));
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_1ba8c0(__int64 a1, __int64 a2, unsigned int a3,
                           unsigned __int64 a4)
{
  void* v8;

  v8 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v8] + 616LL * a3);
  LODWORD(a4) = CudaDriverRoutine_1ba5d0(a1, a2, a3, a4);
  CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v8] +
                           616LL * a3);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v8);
  return (unsigned int)a4;
}

__int64 cuda_driver_1bace0(unsigned int* a1, __int64* a2, char a3)
{
  _BOOL4 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  unsigned __int64 i;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned int v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 result;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  int v28;
  _QWORD v29[3];

  v6 = (a3 & 2) == 0;
  v7 = *(_QWORD*)(*a2 + 8);
  if (!CudaDriverRoutine_98110(v7)) {
    v8 = false;
    if ((a3 & 1) != 0) {
      goto LABEL_16;
    }
    goto LABEL_5;
  }
  v8 = (unsigned __int8)CudaDriverRoutine_1b72e0(*(_QWORD**)(v7 + 216)) == 0;
  if ((a3 & 1) == 0) {
  LABEL_5:
    if (*((_DWORD*)a2 + 4) == 0) {
      goto LABEL_16;
    }
    v9 = 0;
    for (i = 0; i < *((unsigned int*)a2 + 4); ++i) {
      v12 = a2[3];
      v13 = *(_DWORD*)(v12 + v9);
      if (v13 == 3) {
        v15 = v12 + v9;
        v11 = *(_QWORD*)(v15 + 24);
        if (v11 == 0 ||
            CudaDriverRoutine_5c090(v11 + 33736, *(_QWORD*)(v15 + 32))) {
          goto LABEL_8;
        }
      }
      else {
        if (v13 != 1) {
          goto LABEL_8;
        }
        v14 = v12 + v9;
        if (CudaDriverRoutine_5c090(*(_QWORD*)(v12 + v9 + 8) + 33736LL,
                                    *(_QWORD*)(v12 + v9 + 16))) {
          goto LABEL_8;
        }
        v11 = *(_QWORD*)(v14 + 8);
      }
      cuda_driver_5a060(v11);
    LABEL_8:
      v9 += 40;
    }
  }
LABEL_16:
  CudaDriverRoutine_1bb040((unsigned __int64)a2);
  if (*((_DWORD*)a2 + 4) != 0) {
    v16 = 5;
    v17 = 0;
    v18 = 0;
    do {
      v19 = CudaDriverRoutine_1bab30(a2[3] + v17);
      ++v18;
      v17 += 40;
      if (v16 >= v19) {
        v16 = v19;
      }
    } while (v18 < *((unsigned int*)a2 + 4));
    if (!v8) {
      goto LABEL_32;
    }
  }
  else {
    v16 = 5;
    if (!v8) {
      goto LABEL_32;
    }
  }
  if ((a3 & 6) == 0) {
    CudaDriverRoutine_1dff10(*(_QWORD*)(v7 + 16136));
  }
  v20 = *(_QWORD*)(v7 + 16136);
  __builtin_arm_dmb(0xFu);
  if (v16 >= 4) {
    v21 = 4;
  }
  else {
    v21 = v16;
  }
  v22 = *(_DWORD*)(v20 + 152);
  __builtin_arm_dmb(0xFu);
  if (v22 != 0) {
    v6 = false;
    v16 = v21;
  }
  if ((a3 & 6) == 0) {
    CudaDriverRoutine_1dff50(*(_QWORD*)(v7 + 16136));
    if (!v6) {
      goto LABEL_45;
    }
    goto LABEL_33;
  }
LABEL_32:
  if (!v6) {
    goto LABEL_45;
  }
LABEL_33:
  result = CudaDriverRoutine_98650(v7, v16 == 5);
  if ((_DWORD)result != 0) {
    if ((a3 & 4) == 0) {
      goto LABEL_38;
    }
    goto LABEL_46;
  }
  v24 = cuda_driver_misc_helpers_de5a0();
  if (v24 == 0) {
    if (CudaDriverData_1434738 != nullptr) {
      v28 = 0;
      v29[2] = 0;
      v29[0] = v7;
      v29[1] = &v28;
      CudaDriverData_1434738(4, v29);
      if (v28 != 0) {
        cuda_driver_98c70(v7, 0x38Fu);
        result = 911;
        if ((a3 & 4) != 0) {
          goto LABEL_46;
        }
        goto LABEL_38;
      }
    }
  LABEL_45:
    result = 0;
    goto LABEL_46;
  }
  v25 = v24;
  cuda_driver_98c70(v7, v24);
  result = v25;
  if ((a3 & 4) == 0) {
  LABEL_38:
    v26 = *a2;
    v27 = result;
    CudaDriverRoutine_11ca80(*(_QWORD*)(v26 + 8), 0);
    result = v27;
  }
LABEL_46:
  *a1 = v16;
  return result;
}

__int64 cuda_driver_unplaced_9_1bb6a0(unsigned __int64 a1, unsigned __int64 a2)
{
  int v2;
  int v3;
  unsigned int v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v9;
  bool v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int128* v21;
  __int128 v22;
  __int128 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int128* v32;
  __int64 v33;
  __int128 v34;
  __int128 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int128 v39;
  __int128 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int128 v44;
  __int128 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int128 v49;
  __int128 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int128 v58;
  __int128 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int128* v67;
  __int64 v68;
  __int128 v69;
  __int128 v70;
  __int64 v71;
  __int64 v72;
  __int128 v73;
  __int128 v74;
  __int64 v75;
  __int64 v76;
  __int128 v77;
  __int128 v78;
  __int64 v79;
  __int64 v80;
  __int128 v81;
  __int128 v82;
  __int128 v83;
  __int128 v84;
  __int64 v85;
  __int64 v86;
  __int128* v87;
  __int64 v88;
  int v89;
  __int128 v90;
  __int128 v91;
  __int64 v92;

  if (a1 == a2) {
    return 0;
  }
  v2 = *(_DWORD*)(a1 + 16);
  v3 = *(_DWORD*)(a2 + 16);
  v5 = v3 + v2;
  if ((unsigned int)(v3 + v2) > *(_DWORD*)(a1 + 32)) {
    v6 = a1;
    CudaDriverRoutine_1bb040(a1);
    CudaDriverRoutine_1bb040(a2);
    v2 = *(_DWORD*)(v6 + 16);
    v3 = *(_DWORD*)(a2 + 16);
    a1 = v6;
    v5 = v3 + v2;
    if (*(_DWORD*)(v6 + 32) < (unsigned int)(v3 + v2)) {
      if (*(_QWORD*)(v6 + 24) == v6 + 40) {
        v9 = CudaDriverStub_12e330(40LL * v5);
        if (v9 == 0) {
          return 2;
        }
        v7 = v9;
        memcpy_plt(v9, *(_QWORD*)(v6 + 24), 40LL * *(unsigned int*)(v6 + 16));
      }
      else {
        v7 = CudaDriverStub_12e550(*(_QWORD*)(v6 + 24), 40LL * v5);
        if (v7 == 0) {
          return 2;
        }
      }
      memset_plt_alt1(v7 + 40LL * *(unsigned int*)(v6 + 32), 0,
                      40LL * (v5 - *(_DWORD*)(v6 + 32)));
      *(_QWORD*)(v6 + 24) = v7;
      *(_DWORD*)(v6 + 32) = v5;
      v2 = *(_DWORD*)(v6 + 16);
      a1 = v6;
      v3 = *(_DWORD*)(a2 + 16);
      v5 = v3 + v2;
    }
  }
  v10 = __OFSUB__(v2, 1);
  v11 = v2 - 1;
  v12 = v3 - 1;
  LODWORD(v13) = v5 - 1;
  if (((v11 & 0x80000000) != 0) == v10 && v3 >= 1) {
    while (1) {
      v86 = *(_QWORD*)(a1 + 24);
      v87 = (__int128*)(v86 + 40LL * v11);
      v88 = *(_QWORD*)(a2 + 24) + 40LL * v12;
      v89 = *(_DWORD*)v87;
      if (*(_DWORD*)v87 != *(_DWORD*)v88) {
        if ((unsigned int)v89 >= *(_DWORD*)v88) {
          goto LABEL_31;
        }
        goto LABEL_45;
      }
      if (v89 <= 4) {
        break;
      }
      if (v89 != 5) {
        if (v89 != 6 && v89 != 16) {
        LABEL_31:
          v83 = *v87;
          v84 = v87[1];
          v85 = v86 + 40LL * (int)v13;
          --v11;
          *(_QWORD*)(v85 + 32) = *((_QWORD*)v87 + 4);
          *(_OWORD*)v85 = v83;
          *(_OWORD*)(v85 + 16) = v84;
          LODWORD(v13) = v13 - 1;
          if ((v11 & 0x80000000) != 0) {
            goto LABEL_16;
          }
          goto LABEL_32;
        }
        goto LABEL_44;
      }
      if (*(_QWORD*)(*((_QWORD*)v87 + 1) + 32LL) >=
          *(_QWORD*)(*(_QWORD*)(v88 + 8) + 32LL)) {
        goto LABEL_31;
      }
    LABEL_45:
      v90 = *(_OWORD*)v88;
      v91 = *(_OWORD*)(v88 + 16);
      v92 = v86 + 40LL * (int)v13;
      --v12;
      *(_QWORD*)(v92 + 32) = *(_QWORD*)(v88 + 32);
      *(_OWORD*)v92 = v90;
      *(_OWORD*)(v92 + 16) = v91;
      LODWORD(v13) = v13 - 1;
      if ((v11 & 0x80000000) != 0) {
        goto LABEL_16;
      }
    LABEL_32:
      if ((v12 & 0x80000000) != 0) {
        goto LABEL_16;
      }
    }
    if (v89 != 1 && v89 != 3 && v89 != 4) {
      goto LABEL_31;
    }
  LABEL_44:
    if (*((_QWORD*)v87 + 1) >= *(_QWORD*)(v88 + 8)) {
      goto LABEL_31;
    }
    goto LABEL_45;
  }
LABEL_16:
  if ((v11 & 0x80000000) == 0) {
    v13 = (int)v13;
    v15 = v11;
    if ((~(_BYTE)v11 & 3) != 0) {
      v16 = ((_BYTE)v11 + 1) & 3;
      v17 = 40LL * v11;
      v18 = 40LL * (int)v13;
      v15 = v11 - v16;
      v13 = (int)v13 - v16;
      do {
        v19 = *(_QWORD*)(a1 + 24);
        --v16;
        v20 = v19 + v18;
        v21 = (__int128*)(v19 + v17);
        v17 -= 40;
        v18 -= 40;
        v22 = *v21;
        v23 = v21[1];
        *(_QWORD*)(v20 + 32) = *((_QWORD*)v21 + 4);
        *(_OWORD*)v20 = v22;
        *(_OWORD*)(v20 + 16) = v23;
      } while (v16 != 0);
    }
    if (v11 >= 3) {
      v24 = 5 * v15;
      v25 = v15 + 1;
      v26 = 0;
      v27 = 8 * v24;
      v28 = 40 * v13;
      do {
        v29 = *(_QWORD*)(a1 + 24);
        v30 = v27 + v26;
        v31 = v28 + v26;
        LODWORD(v13) = v13 - 4;
        v26 -= 160;
        v25 -= 4;
        v32 = (__int128*)(v29 + v30);
        v33 = v29 + v31;
        v34 = *v32;
        v35 = v32[1];
        *(_QWORD*)(v33 + 32) = *((_QWORD*)v32 + 4);
        *(_OWORD*)v33 = v34;
        *(_OWORD*)(v33 + 16) = v35;
        v36 = *(_QWORD*)(a1 + 24);
        v37 = v36 + v30;
        v38 = v36 + v31;
        v39 = *(_OWORD*)(v37 - 40);
        v40 = *(_OWORD*)(v37 - 24);
        *(_QWORD*)(v38 - 8) = *(_QWORD*)(v37 - 8);
        *(_OWORD*)(v38 - 24) = v40;
        *(_OWORD*)(v38 - 40) = v39;
        v41 = *(_QWORD*)(a1 + 24);
        v42 = v41 + v31;
        v43 = v41 + v30;
        v44 = *(_OWORD*)(v43 - 80);
        v45 = *(_OWORD*)(v43 - 64);
        *(_QWORD*)(v42 - 48) = *(_QWORD*)(v43 - 48);
        *(_OWORD*)(v42 - 80) = v44;
        *(_OWORD*)(v42 - 64) = v45;
        v46 = *(_QWORD*)(a1 + 24);
        v47 = v46 + v31;
        v48 = v46 + v30;
        v49 = *(_OWORD*)(v48 - 120);
        v50 = *(_OWORD*)(v48 - 104);
        *(_QWORD*)(v47 - 88) = *(_QWORD*)(v48 - 88);
        *(_OWORD*)(v47 - 104) = v50;
        *(_OWORD*)(v47 - 120) = v49;
      } while (v25 != 0);
    }
  }
  if ((v12 & 0x80000000) == 0) {
    v51 = (int)v13;
    v52 = v12;
    if ((~(_BYTE)v12 & 3) != 0) {
      v53 = ((_BYTE)v12 + 1) & 3;
      v54 = 40LL * v12;
      v55 = 40 * v51;
      v52 = v12 - v53;
      v51 -= v53;
      do {
        --v53;
        v56 = *(_QWORD*)(a2 + 24) + v54;
        v57 = *(_QWORD*)(a1 + 24) + v55;
        v54 -= 40;
        v55 -= 40;
        v58 = *(_OWORD*)v56;
        v59 = *(_OWORD*)(v56 + 16);
        *(_QWORD*)(v57 + 32) = *(_QWORD*)(v56 + 32);
        *(_OWORD*)v57 = v58;
        *(_OWORD*)(v57 + 16) = v59;
      } while (v53 != 0);
    }
    if (v12 >= 3) {
      v60 = 5 * v52;
      v61 = v52 + 1;
      v62 = 0;
      v63 = 8 * v60;
      v64 = 40 * v51;
      do {
        v65 = v63 + v62;
        v66 = v64 + v62;
        v62 -= 160;
        v61 -= 4;
        v67 = (__int128*)(*(_QWORD*)(a2 + 24) + v65);
        v68 = *(_QWORD*)(a1 + 24) + v66;
        v69 = *v67;
        v70 = v67[1];
        *(_QWORD*)(v68 + 32) = *((_QWORD*)v67 + 4);
        *(_OWORD*)v68 = v69;
        *(_OWORD*)(v68 + 16) = v70;
        v71 = *(_QWORD*)(a2 + 24) + v65;
        v72 = *(_QWORD*)(a1 + 24) + v66;
        v73 = *(_OWORD*)(v71 - 40);
        v74 = *(_OWORD*)(v71 - 24);
        *(_QWORD*)(v72 - 8) = *(_QWORD*)(v71 - 8);
        *(_OWORD*)(v72 - 24) = v74;
        *(_OWORD*)(v72 - 40) = v73;
        v75 = *(_QWORD*)(a2 + 24) + v65;
        v76 = *(_QWORD*)(a1 + 24) + v66;
        v77 = *(_OWORD*)(v75 - 80);
        v78 = *(_OWORD*)(v75 - 64);
        *(_QWORD*)(v76 - 48) = *(_QWORD*)(v75 - 48);
        *(_OWORD*)(v76 - 80) = v77;
        *(_OWORD*)(v76 - 64) = v78;
        v79 = *(_QWORD*)(a1 + 24) + v66;
        v80 = *(_QWORD*)(a2 + 24) + v65;
        v81 = *(_OWORD*)(v80 - 120);
        v82 = *(_OWORD*)(v80 - 104);
        *(_QWORD*)(v79 - 88) = *(_QWORD*)(v80 - 88);
        *(_OWORD*)(v79 - 104) = v82;
        *(_OWORD*)(v79 - 120) = v81;
      } while (v61 != 0);
    }
  }
  *(_DWORD*)(a1 + 16) += *(_DWORD*)(a2 + 16);
  CudaDriverRoutine_1bbb60(a1);
  return 0;
}

__int64 cuda_driver_1bc0e0(_QWORD* a1, __int64 a2, _BYTE* a3)
{
  __int64 result;
  __int64 v7;
  unsigned __int64 i;
  __int64 v9;
  int v10;
  bool v11;
  unsigned int v12;

  v12 = 2;
  if (a3 != nullptr) {
    *a3 = 0;
  }
  result = cuda_driver_1bace0(&v12, (__int64*)a2, 0);
  if ((_DWORD)result == 0) {
    if (v12 == 5) {
      return 0;
    }
    cuda_driver_5a060((__int64)a1);
    if ((unsigned __int8)CudaDriverRoutine_12f6b0(
            *(_QWORD*)(*(_QWORD*)(*a1 + 8LL) + 64LL),
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 8LL) + 64LL)) != 0) {
      if (*(_DWORD*)(a2 + 16) != 0) {
        v7 = 0;
        for (i = 0; i < *(unsigned int*)(a2 + 16); ++i) {
          v9 = *(_QWORD*)(a2 + 24);
          v10 = *(_DWORD*)(v9 + v7);
          if (v10 == 1) {
            if (*(_QWORD*)(v9 + 8 + v7) != 0) {
              goto LABEL_17;
            }
          }
          else {
            if (v10 != 3) {
              if (v10 == 16) {
                CudaDriverRoutine_5a580((__int64)a1);
              }
              goto LABEL_9;
            }
            if (*(_QWORD*)(v9 + 24 + v7) != 0) {
            LABEL_17:
              CudaDriverRoutine_108080(*(_QWORD*)(*a1 + 48LL) + 8LL,
                                       *(_QWORD*)(*(_QWORD*)a2 + 48LL) + 8LL,
                                       0);
              (*(void (**)(void))(a1[4228] + 120LL))();
              CudaDriverRoutine_108280(*(_QWORD*)(*a1 + 48LL) + 8LL,
                                       *(_QWORD*)(*(_QWORD*)a2 + 48LL) + 8LL,
                                       0);
            }
          }
        LABEL_9:
          v7 += 40;
        }
      }
      result = 0;
      if (a3 != nullptr) {
        *a3 = 1;
      }
    }
    else {
      v11 = cuda_driver_9e1e0(*(_QWORD*)(a2 + 8));
      return (*(__int64 (**)(__int64, bool, _QWORD, _QWORD))(
          *(_QWORD*)a2 + 132720LL))(a2, v11, 0, 0);
    }
  }
  return result;
}

__int64 cuda_driver_1bc4f0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  unsigned int v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  int v21;
  int v22;
  int8x8_t v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 result;

  v3 = *(_QWORD*)(a3 + 8);
  v4 = *(_QWORD*)(a3 + 16);
  v5 = *(_OWORD*)(v3 + 96);
  v6 = *(_OWORD*)(v3 + 112);
  v7 = *(_OWORD*)(v3 + 80);
  v8 = *(_QWORD*)(a1 + 64);
  v9 = (unsigned int)(*(_DWORD*)(a3 + 172) * *(_DWORD*)(a3 + 168) *
                          *(_DWORD*)(a3 + 176) +
                      31) >>
       5;
  v10 = *(_DWORD*)(v8 + 3756);
  LODWORD(v8) = *(_DWORD*)(v8 + 3768);
  *(_OWORD*)(v4 + 576) = *(_OWORD*)(v3 + 64);
  *(_OWORD*)(v4 + 592) = v7;
  *(_OWORD*)(v4 + 608) = v5;
  *(_OWORD*)(v4 + 624) = v6;
  v11 = *(_OWORD*)(v3 + 160);
  v12 = *(_OWORD*)(v3 + 176);
  v13 = *(_OWORD*)(v3 + 144);
  v14 = v10 / (unsigned int)v8;
  *(_OWORD*)(v4 + 640) = *(_OWORD*)(v3 + 128);
  *(_OWORD*)(v4 + 656) = v13;
  *(_OWORD*)(v4 + 672) = v11;
  *(_OWORD*)(v4 + 688) = v12;
  v15 = *(_OWORD*)(v3 + 224);
  v16 = *(_OWORD*)(v3 + 240);
  v17 = *(_OWORD*)(v3 + 208);
  *(_OWORD*)(v4 + 704) = *(_OWORD*)(v3 + 192);
  *(_OWORD*)(v4 + 720) = v17;
  *(_OWORD*)(v4 + 736) = v15;
  *(_OWORD*)(v4 + 752) = v16;
  v18 = *(_OWORD*)(v3 + 16);
  v19 = *(_OWORD*)(v3 + 32);
  v20 = *(_OWORD*)(v3 + 48);
  if (v9 <= v14) {
    LOWORD(v9) = v14;
  }
  v21 = (((_WORD)v9 << 6) + 16320) & 0x3FC0;
  *(_OWORD*)(v4 + 512) = *(_OWORD*)v3;
  *(_OWORD*)(v4 + 528) = v18;
  *(_OWORD*)(v4 + 544) = v19;
  *(_OWORD*)(v4 + 560) = v20;
  v22 = *(_DWORD*)(v4 + 516);
  *(_QWORD*)(v4 + 560) = 0;
  PSEUDO_LOW_LANE64(v23, n64_u64, *(unsigned __int64*)(v4 + 536));
  *(_DWORD*)(v4 + 516) = v22 & 0x80000000 | 0xFFFFF;
  *(_DWORD*)(v4 + 520) &= 0x80000000;
  v24 = LANES64_OF(
            vorr_s8(vand_s8(v23, COERCE_AS(int8x8_t, 0xFE000000FFFFF2FFLL)),
                    COERCE_AS(int8x8_t, 0x10000000000100LL)))
            .n64_u64[0];
  *(_QWORD*)(v4 + 536) = v24;
  *(_DWORD*)(v4 + 544) = *(_DWORD*)(*(_QWORD*)(a1 + 1064) + 408LL);
  *(_DWORD*)(v4 + 540) = HIDWORD(v24) & 0x2100000;
  *(_DWORD*)(v4 + 556) = v21 | *(_DWORD*)(v4 + 556) & 0xFFF40000 | 0x803F;
  *(_DWORD*)(v3 + 44) = v21 | *(_DWORD*)(v3 + 44) & 0xFFF74000 | 0x8803F;
  v25 = *(_QWORD*)(a3 + 40);
  *(_DWORD*)(v4 + 1072) = 0;
  *(_QWORD*)(v4 + 1088) = v25;
  *(_QWORD*)(v4 + 1040) = 0x200000000LL;
  *(_QWORD*)(v4 + 1168) = 0x100000001LL;
  result = CudaDriverRoutine_e7e40(a3);
  *(_DWORD*)(v4 + 1176) = result;
  *(_DWORD*)(v4 + 1180) = 1;
  return result;
}

long double cuda_driver_1bc660(__int64 a1, __int64 a2, unsigned int* a3,
                               __int64 a4)
{

#pragma clang fp contract(off)
  unsigned int v4;
  unsigned int v9;
  char v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int* v13;
  unsigned int v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned __int64 v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int8x8_t v27;
  unsigned int v28;
  __int128 v29;
  unsigned int v30;
  __int128 v31;
  long double result;
  __int64 v33;
  _DWORD v34[8];
  _QWORD v35[2];
  _BYTE v36[48];

  v4 = a3[7];
  v33 = 0;
  memset(v34, 0, sizeof(v34));
  *(_OWORD*)v35 = (__typeof__(*(_OWORD*)v35)){0};
  *(_OWORD*)v36 = (__typeof__(*(_OWORD*)v36)){0};
  a3[7] = v4 & 0x3FFFFFF;
  v9 = a3[11] & 0xFFFCBFFF;
  memset(&v36[16], 0, 32);
  a3[11] = v9;
  CudaDriverRoutine_bbd70(a2, &v33);
  a3[8] = v33;
  a3[11] |= 0x44000000u;
  a3[45] = a3[45] & 0x7FFFFFF | 0x8000000;
  v10 = *(_BYTE*)(a2 + 392);
  a3[21] = 0;
  a3[22] = 0;
  *((_BYTE*)a3 + 187) = v10;
  *((_BYTE*)a3 + 72) = 23;
  *((_BYTE*)a3 + 191) =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3164LL) << 24) +
                     (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3160LL) << 28)) >>
      24;
  v11 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3888LL);
  a3[17] = a3[17] & 0xFFFC0000 |
           (((unsigned __int64)(unsigned int)(v11 - 1) + 8448) / v11 * v11) &
               0x3FFFF;
  v12 = CudaDriverStub_112e30(*(_QWORD*)(a1 + 96));
  CudaDriverRoutine_96f20(a1, a2, v12, 0, (__int64)v35, (__int64)v34);
  v13 = *(unsigned int**)(a1 + 64);
  if (v13[944] != 0) {
    v14 = 975;
    v15 = 0;
    do {
      while (1) {
        v16 = v35[v15];
        if (v16 != 0) {
          break;
        }
        a3[(unsigned int)(v15 + 640) >> 5] &= ~(1 << v15);
        v13 = *(unsigned int**)(a1 + 64);
        ++v15;
        v14 += 64;
        if (v15 >= v13[944]) {
          goto LABEL_6;
        }
      }
      v17 = (v34[v15] + v13[946] - 1) / v13[946] * v13[946];
      a3[(unsigned int)(v15 + 640) >> 5] |= 1 << v15;
      a3[v14 >> 5] = a3[v14 >> 5] & 0x7FFF | (v17 << 15);
      LOBYTE(a3[(v14 - 15) >> 5]) = BYTE4(v16);
      a3[(v14 - 47) >> 5] = v16;
      v13 = *(unsigned int**)(a1 + 64);
      ++v15;
      v14 += 64;
    } while (v15 < v13[944]);
  }
LABEL_6:
  v18 = v33;
  a3[(v13[2927] + 640) >> 5] |= 1 << v13[2927];
  v19 =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 975) >>
      5;
  a3[v19] = a3[v19] & 0x7FFF | 0xE000000;
  LOBYTE(a3[(unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) +
                           960) >>
            5]) = (unsigned __int64)(a4 + 2048) >> 32;
  a3[(unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 928) >>
     5] = a4 + 2048;
  *((_WORD*)a3 + 37) = 32;
  a3[19] = 65537;
  v20 = a3[11];
  v21 = LANES64_OF(vand_s8(*(int8x8_t*)(a3 + 2),
                           COERCE_AS(int8x8_t, 0x8000000080000000LL)))
            .n64_u64[0];
  a3[45] =
      *(_DWORD*)(a1 + 1276) & 0xFFFFFF | (*((unsigned __int8*)a3 + 183) << 24);
  v22 = v20 & 0xFFF74000 | 0x88000;
  v23 = a3[16] & 0xFFFC0380 | 0x401F;
  v25 = *a3;
  v24 = a3[1];
  a3[46] =
      *(_DWORD*)(a1 + 1280) & 0xFFFFFF | (*((unsigned __int8*)a3 + 187) << 24);
  v26 = *(_DWORD*)(a1 + 1284);
  a3[16] = v23;
  *((_QWORD*)a3 + 1) = v21;
  PSEUDO_LOW_LANE64(v27, n64_u64, *(_QWORD*)(a3 + 6));
  a3[11] = v22;
  *((_QWORD*)a3 + 6) = 0;
  *a3 = v25 & 0x80000000;
  a3[1] = v24 & 0x80000000 | 0xFFFFF;
  a3[47] = v26 & 0xFFFFFF | (*((unsigned __int8*)a3 + 191) << 24);
  *((int8x8_t*)a3 + 3) =
      vorr_s8(vand_s8(v27, COERCE_AS(int8x8_t, 0xFE000000FFFFF2C0LL)),
              COERCE_AS(int8x8_t, 0x10000000000100LL));
  v28 = CudaDriverRoutine_1bf730(a2);
  *(_QWORD*)&v29 = 0x100000001LL;
  *((_QWORD*)&v29 + 1) = 0x100000001LL;
  v30 = *(_DWORD*)(a1 + 1284);
  v31 = *(_OWORD*)v35;
  *((_QWORD*)a3 + 280) = 0;
  a3[520] = v28;
  *((_QWORD*)a3 + 295) = 0;
  *((_QWORD*)a3 + 1032) = a4;
  a3[2066] = v18;
  *((_QWORD*)a3 + 136) = a4 + 2048;
  *((_OWORD*)a3 + 129) = v29;
  a3[521] = v30;
  *((_OWORD*)a3 + 139) = (__typeof__(*((_OWORD*)a3 + 139))){0};
  *((_OWORD*)a3 + 138) = (__typeof__(*((_OWORD*)a3 + 138))){0};
  *((_OWORD*)a3 + 137) = (__typeof__(*((_OWORD*)a3 + 137))){0};
  *((_OWORD*)a3 + 136) = (__typeof__(*((_OWORD*)a3 + 136))){0};
  *(_OWORD*)(a3 + 574) = (__typeof__(*(_OWORD*)(a3 + 574))){0};
  *(_OWORD*)(a3 + 578) = (__typeof__(*(_OWORD*)(a3 + 578))){0};
  *((_OWORD*)a3 + 135) = (__typeof__(*((_OWORD*)a3 + 135))){0};
  *((_OWORD*)a3 + 134) = (__typeof__(*((_OWORD*)a3 + 134))){0};
  *((_OWORD*)a3 + 133) = (__typeof__(*((_OWORD*)a3 + 133))){0};
  *((_OWORD*)a3 + 132) = (__typeof__(*((_OWORD*)a3 + 132))){0};
  *((_QWORD*)a3 + 261) = -4;
  *((_OWORD*)a3 + 131) = (__typeof__(*((_OWORD*)a3 + 131))){0};
  *((_QWORD*)a3 + 281) = v31;
  *((_QWORD*)a3 + 286) = *((_QWORD*)&v31 + 1);
  *((_OWORD*)a3 + 128) = CudaDriverData_1115700;
  *((_OWORD*)a3 + 141) = *(_OWORD*)&v36[8];
  result = *(long double*)&v36[24];
  *(_OWORD*)(a3 + 582) = (__typeof__(*(_OWORD*)(a3 + 582))){0};
  *(_OWORD*)(a3 + 586) = (__typeof__(*(_OWORD*)(a3 + 586))){0};
  *(_OWORD*)(a3 + 2067) = (__typeof__(*(_OWORD*)(a3 + 2067))){0};
  *(_QWORD*)(a3 + 2071) = 0;
  *((long double*)a3 + 142) = result;
  return result;
}

_DWORD* cuda_driver_1bcc80(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  _DWORD* v16;
  int v17;
  int v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned int* v21;
  unsigned __int64 v22;
  unsigned int v23;
  unsigned __int64 i;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  unsigned __int8 v30;
  int v31;
  unsigned __int8 v32;
  int v33;
  unsigned __int8 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 (*v41)(__int64, __int64, _QWORD, _QWORD*, __int64, __int64);
  __int64 v42;
  _DWORD* v43;
  _DWORD* result;
  struct {
    _QWORD v45[2];
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
  } v45_;
  _DWORD v61[8];
  _QWORD v62[8];
  __int64 v63;

  v3 = *a2;
  memset(v61, 0, sizeof(v61));
  memset(v62, 0, sizeof(v62));
  v7 = *(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072);
  v63 = 0;
  v8 = *(_QWORD*)(v7 + 392);
  v9 = *(_QWORD*)(a3 + 136);
  *(_OWORD*)v45_.v45 = (__typeof__(*(_OWORD*)v45_.v45)){0};
  v45_.v46 = (__typeof__(v45_.v46)){0};
  v45_.v47 = (__typeof__(v45_.v47)){0};
  v45_.v48 = (__typeof__(v45_.v48)){0};
  v10 = *(_QWORD*)(v9 + 192);
  v11 = *(_QWORD*)(a1 + 64);
  v45_.v49 = (__typeof__(v45_.v49)){0};
  v45_.v50 = (__typeof__(v45_.v50)){0};
  v12 = *(unsigned int*)(v11 + 11708);
  v45_.v51 = (__typeof__(v45_.v51)){0};
  v45_.v52 = (__typeof__(v45_.v52)){0};
  v45_.v53 = (__typeof__(v45_.v53)){0};
  v45_.v54 = (__typeof__(v45_.v54)){0};
  v45_.v55 = (__typeof__(v45_.v55)){0};
  v45_.v56 = (__typeof__(v45_.v56)){0};
  v13 = *(_QWORD*)(a3 + 8 * v12 + 40);
  v45_.v57 = (__typeof__(v45_.v57)){0};
  v45_.v58 = (__typeof__(v45_.v58)){0};
  v45_.v59 = (__typeof__(v45_.v59)){0};
  v45_.v60 = (__typeof__(v45_.v60)){0};
  *((_QWORD*)&v45_.v46 + 1) = 0x3C00000000001000LL;
  CudaDriverRoutine_bbd70(v8, &v63);
  v14 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)((char*)&v45_.v50 + 4) = 0;
  DWORD3(v45_.v47) = 1141047296;
  v15 = *(_DWORD*)(v8 + 392);
  LODWORD(v45_.v47) = v63;
  DWORD1(v45_.v56) = 0x8000000;
  DWORD2(v45_.v56) = v15 << 24;
  v16 = *(_DWORD**)(a1 + 64);
  v17 = v16[791];
  v18 = v16[790];
  v19 = (unsigned int)v16[972];
  DWORD3(v45_.v56) = (v17 << 24) + (v18 << 28);
  DWORD1(v45_.v49) =
      (((unsigned __int64)(unsigned int)(v19 - 1) + 8448) / v19 * v19) &
      0x3FFFF;
  DWORD2(v45_.v49) = 23;
  v20 = CudaDriverStub_112e30(v14);
  CudaDriverRoutine_96f20(a1, v8, v20, 0, (__int64)v62, (__int64)v61);
  v21 = *(unsigned int**)(a1 + 64);
  v22 = v21[944];
  if ((_DWORD)v22 != 0) {
    v23 = 975;
    for (i = 0; i < v22; ++i) {
      while (1) {
        v25 = v62[i];
        if (v25 != 0) {
          break;
        }
        *((_DWORD*)v45_.v45 + ((unsigned int)(i + 640) >> 5)) &= ~(1 << i);
        ++i;
        v23 += 64;
        if (i >= v22) {
          goto LABEL_6;
        }
      }
      v26 = (v61[i] + v21[946] - 1) / v21[946] * v21[946];
      *((_DWORD*)v45_.v45 + ((unsigned int)(i + 640) >> 5)) |= 1 << i;
      *((_DWORD*)v45_.v45 + (v23 >> 5)) =
          *((_DWORD*)v45_.v45 + (v23 >> 5)) & 0x7FFF | (v26 << 15);
      *((_BYTE*)v45_.v45 + 4 * ((v23 - 15) >> 5)) = BYTE4(v25);
      *((_DWORD*)v45_.v45 + ((v23 - 47) >> 5)) = v25;
      v23 += 64;
    }
  }
LABEL_6:
  v27 = v21[2927];
  v28 = v27 + 640;
  v29 = 1 << v27;
  v27 <<= 6;
  *((_DWORD*)v45_.v45 + (v28 >> 5)) |= v29;
  *((_DWORD*)v45_.v45 + ((v27 + 975) >> 5)) =
      *((_DWORD*)v45_.v45 + ((v27 + 975) >> 5)) & 0x7FFF | 0xE000000;
  *((_DWORD*)v45_.v45 + ((v27 + 928) >> 5)) = v13;
  *((_BYTE*)v45_.v45 + 4 * ((v27 + 960) >> 5)) = BYTE4(v13);
  WORD5(v45_.v49) = 1;
  DWORD3(v45_.v49) = 65537;
  v30 = BYTE7(v45_.v56);
  v31 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1276) & 0xFFFFFF | (v30 << 24);
  v32 = BYTE11(v45_.v56);
  DWORD1(v45_.v56) = v31;
  v33 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1280) & 0xFFFFFF | (v32 << 24);
  v34 = HIBYTE(v45_.v56);
  DWORD2(v45_.v56) = v33;
  v35 = CudaDriverRoutine_98340(a1);
  v36 = DWORD2(v45_.v46);
  DWORD3(v45_.v56) = *(_DWORD*)(v35 + 1284) & 0xFFFFFF | (v34 << 24);
  v37 = CudaDriverStub_1223e0(*(_QWORD*)(v10 + 24));
  v38 = v45_.v51;
  v39 = v37;
  v40 = CudaDriverStub_8e230(v10);
  DWORD3(v45_.v50) = v39;
  LODWORD(v45_.v51) = v38 & 0x7B8FFF00 | 0x84000000 | BYTE4(v39);
  DWORD1(v45_.v51) = v40;
  DWORD2(v45_.v46) = v36 & 0xFFFFF2C0 | 0x400;
  v41 = *(__int64 (**)(__int64, __int64, _QWORD, _QWORD*, __int64, __int64))(
      *(_QWORD*)(a1 + 64) + 19248LL);
  *(_QWORD*)&v45_.v48 = 0x1000100000001LL;
  v42 = CudaDriverRoutine_98340(a1);
  v43 = (_DWORD*)v41(v3, v42, *(_QWORD*)(v10 + 8), v45_.v45, 256, 2);
  result = CudaDriverRoutine_1cfa50(v43, *(_QWORD*)(v10 + 8), 1);
  *a2 = (__int64)result;
  return result;
}

__int64 cuda_driver_1bd360(__int64 a1, unsigned int* a2, unsigned __int64* a3,
                           bool* a4)
{
  unsigned int v8;
  bool v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  __int64 result;
  unsigned __int64 v19;

  v8 = (*(_DWORD*)(a1 + 72) + 15) & 0xFFFFFFF0;
  v9 = v8 <= 0x80000;
  v10 = CudaDriverRoutine_bc3f0(a1);
  v11 = *(_DWORD*)(a1 + 364);
  v12 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL);
  v13 = *(_DWORD*)(v12 + 1312);
  if ((*(unsigned __int8*)(v12 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c +
         (_QWORD)CudaDriverData_1422118 + 2)) != 0) {
    v14 = 32;
  }
  else {
    v14 = 544;
  }
  if (v13 != 0) {
    v15 = v13 + 16;
  }
  else {
    v15 = 0;
  }
  v16 = (v10 + v15 + v14 + 15) & 0xFFFFFFF0;
  if (v11 == 0 && 2 * v16 > 0x2000) {
    v17 = 2 * v16 + 511;
    if (v16 <= 0x80000) {
      goto LABEL_10;
    }
  LABEL_16:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Requested stack size exceeds limit\n");
  LABEL_17:
    v19 = 0;
    v16 = 0;
    v9 = false;
    result = 1;
    if (a2 == nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v17 = v11 + 511;
  if (v17 <= 0x2000) {
    v17 = 0x2000;
  }
  if (v16 > 0x80000) {
    goto LABEL_16;
  }
LABEL_10:
  if ((v17 & 0xFFFFFE00) > 0x100000) {
    goto LABEL_17;
  }
  result = 0;
  v19 = ((*(unsigned int*)(*(_QWORD*)(v12 + 64) + 3756LL) *
              (unsigned __int64)(((v17 | 0x1F0) +
                                  *(_DWORD*)(*(_QWORD*)(v12 + 64) + 3924LL) *
                                      (v16 + v8)) &
                                 0xFFFFFE00) +
          0x7FFF) &
         0xFFFFFFFFFFFF8000LL) *
        *(unsigned int*)(v12 + 164);
  if (a2 != nullptr) {
  LABEL_18:
    *a2 = v16;
  }
LABEL_19:
  if (a3 != nullptr) {
    *a3 = v19;
  }
  if (a4 != nullptr) {
    *a4 = v9;
  }
  return result;
}

__int64 cuda_driver_1bd4d0(__int64 a1, int a2, int a3, unsigned int* a4,
                           unsigned __int64* a5, char* a6)
{
  int v6;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned __int64 v14;
  char v15;

  v6 = *(_DWORD*)(a1 + 1312);
  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c +
         (_QWORD)CudaDriverData_1422118 + 2)) != 0) {
    v10 = 32;
  }
  else {
    v10 = 544;
  }
  if (v6 != 0) {
    v11 = v6 + 16;
  }
  else {
    v11 = 0;
  }
  v12 = (a3 + v11 + v10 + 15) & 0xFFFFFFF0;
  if (2 * v12 <= 0x2000) {
    v13 = 0x2000;
  }
  else {
    v13 = 2 * v12 + 511;
  }
  if (v12 > 0x80000) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Requested stack size exceeds limit\n");
    v14 = 0;
    v12 = 0;
    v15 = 0;
    if (a4 == nullptr) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ((v13 & 0x3FFE00u) > 0x100000) {
    v14 = 0;
    v12 = 0;
    v15 = 0;
    if (a4 == nullptr) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v14 = ((*(unsigned int*)(*(_QWORD*)(a1 + 64) + 3756LL) *
              (unsigned __int64)(((v13 | 0x1FF) +
                                  *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3924LL) *
                                      (v12 + a2)) &
                                 0xFFFFFE00) +
          0x7FFF) &
         0xFFFFFFFFFFFF8000LL) *
        *(unsigned int*)(a1 + 164);
  v15 = 1;
  if (a4 != nullptr) {
  LABEL_15:
    *a4 = v12;
  }
LABEL_16:
  if (a5 != nullptr) {
    *a5 = v14;
  }
  if (a6 != nullptr) {
    *a6 = v15;
  }
  return 0;
}

__int64 cuda_driver_1bd6f0(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  bool v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int* v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  __int16 v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  _DWORD* v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  int v32;
  unsigned int v33;
  int v34;
  int v35;
  int v36;
  bool v37;
  int v38;
  unsigned int v39;
  int v40;
  char v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  unsigned int v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  float v56;
  int v57;
  int v58;
  int v59;
  int v60;
  float v61;
  _BOOL4 v62;
  bool v63;
  double v64;
  int v65;
  int v66;
  unsigned int v67;
  float v68;
  _BOOL4 v69;
  bool v70;
  __int16 v71;
  float v72;
  int v73;
  int v74;
  int v75;
  int v76;
  unsigned int v78;
  __int64 v79;
  __int64* v83;
  int v84;
  int v85;
  long double v87;
  _BYTE v88[4];

  v1 = *(_DWORD*)(a1 + 40);
  *(_OWORD*)(a1 + 336) = (__typeof__(*(_OWORD*)(a1 + 336))){0};
  *(_OWORD*)(a1 + 352) = (__typeof__(*(_OWORD*)(a1 + 352))){0};
  *(_OWORD*)(a1 + 368) = (__typeof__(*(_OWORD*)(a1 + 368))){0};
  *(_OWORD*)(a1 + 384) = (__typeof__(*(_OWORD*)(a1 + 384))){0};
  if (v1 == 1) {
    v3 = *(_DWORD*)(a1 + 120) == 0;
    if (*(_DWORD*)(a1 + 120) != 0) {
      v4 = 1;
    }
    else {
      v4 = 2;
    }
  }
  else {
    v3 = false;
    v4 = 0;
  }
  v5 = CudaDriverRoutine_11fa80(a1);
  v6 = 1;
  v7 = 29;
  switch (v5) {
  case 0:
    v7 = 28;
    goto LABEL_29;
  case 3:
    v7 = 20;
    goto LABEL_29;
  case 6:
    v7 = 21;
    goto LABEL_29;
  case 47:
    v7 = 34;
    goto LABEL_29;
  case 48:
    v7 = 35;
    goto LABEL_29;
  case 54:
    v7 = 9;
    goto LABEL_29;
  case 69:
    v7 = 1;
    goto LABEL_29;
  case 76:
    v7 = 3;
    goto LABEL_29;
  case 80:
    v7 = 4;
    goto LABEL_29;
  case 88:
    v7 = 8;
    goto LABEL_29;
  case 93:
    v7 = 12;
    goto LABEL_29;
  case 97:
    v7 = 15;
    goto LABEL_29;
  case 103:
    v7 = 24;
    goto LABEL_29;
  case 107:
    v7 = 27;
    goto LABEL_29;
  case 113:
    goto LABEL_29;
  case 119:
    v7 = 36;
    goto LABEL_29;
  case 121:
    v7 = 37;
    goto LABEL_29;
  case 123:
    v7 = 38;
    goto LABEL_29;
  case 125:
    v7 = 39;
    goto LABEL_29;
  case 127:
    v7 = 40;
    goto LABEL_29;
  case 130:
    v7 = 17;
    goto LABEL_29;
  case 131:
    v7 = 16;
    goto LABEL_29;
  case 132:
    v7 = 23;
  LABEL_29:
    v8 = (unsigned int*)(a1 + 336);
    *(_DWORD*)(a1 + 336) = *(_DWORD*)(a1 + 336) & 0xFFFFFF80 | v7;
    v9 = CudaDriverRoutine_11fd60(a1);
    if (v9 <= 2) {
      if (v9 == 1) {
        v12 = *v8;
        v13 = 1170;
      }
      else {
        if (v9 != 2) {
          return v6;
        }
        v12 = *v8;
        v13 = 585;
      }
    LABEL_45:
      *(_DWORD*)(a1 + 336) = v12 & 0xFFF8007F | ((v13 & 0xFFF) << 7);
      v10 = CudaDriverRoutine_11f370(a1, 0);
      if (v10 <= 2) {
        goto LABEL_34;
      }
      goto LABEL_46;
    }
    if (v9 == 3) {
      v12 = *v8;
      v13 = 2340;
      goto LABEL_45;
    }
    if (v9 == 4) {
      v12 = *v8;
      v13 = 1755;
      goto LABEL_45;
    }
    if (v9 != 5) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 | 0x7FF80;
    v10 = CudaDriverRoutine_11f370(a1, 0);
    if (v10 <= 2) {
    LABEL_34:
      if (v10 != 0) {
        if (v10 == 1) {
          *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x100000;
          v11 = CudaDriverRoutine_11f370(a1, 1u);
          if (v11 <= 2) {
            goto LABEL_68;
          }
        }
        else {
          if (v10 != 2) {
            return v6;
          }
          *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x180000;
          v11 = CudaDriverRoutine_11f370(a1, 1u);
          if (v11 <= 2) {
            goto LABEL_68;
          }
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_68;
        }
      }
    LABEL_59:
      if (v11 > 4) {
        if (v11 == 5) {
          *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x1800000;
          v14 = CudaDriverRoutine_11f370(a1, 2u);
          if (v14 <= 2) {
            goto LABEL_87;
          }
        }
        else {
          if (v11 != 6) {
            return v6;
          }
          *(_DWORD*)(a1 + 336) = *v8 | 0x1C00000;
          v14 = CudaDriverRoutine_11f370(a1, 2u);
          if (v14 <= 2) {
            goto LABEL_87;
          }
        }
      }
      else if (v11 == 3) {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x1000000;
        v14 = CudaDriverRoutine_11f370(a1, 2u);
        if (v14 <= 2) {
          goto LABEL_87;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x1400000;
        v14 = CudaDriverRoutine_11f370(a1, 2u);
        if (v14 <= 2) {
          goto LABEL_87;
        }
      }
    LABEL_78:
      if (v14 > 4) {
        if (v14 == 5) {
          *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0xC000000;
          v15 = CudaDriverRoutine_11f370(a1, 3u);
          if (v15 <= 2) {
            goto LABEL_106;
          }
        }
        else {
          if (v14 != 6) {
            return v6;
          }
          *(_DWORD*)(a1 + 336) = *v8 | 0xE000000;
          v15 = CudaDriverRoutine_11f370(a1, 3u);
          if (v15 <= 2) {
            goto LABEL_106;
          }
        }
      }
      else if (v14 == 3) {
        *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0x8000000;
        v15 = CudaDriverRoutine_11f370(a1, 3u);
        if (v15 <= 2) {
          goto LABEL_106;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0xA000000;
        v15 = CudaDriverRoutine_11f370(a1, 3u);
        if (v15 <= 2) {
          goto LABEL_106;
        }
      }
    LABEL_97:
      if (v15 > 4) {
        if (v15 == 5) {
          v16 = *v8 & 0x8FFFFFFF | 0x60000000;
          v17 = *(_DWORD*)(a1 + 328);
          *(_DWORD*)(a1 + 336) = v16;
          if ((v17 & 8) == 0) {
            goto LABEL_117;
          }
        }
        else {
          if (v15 != 6) {
            return v6;
          }
          v16 = *v8 | 0x70000000;
          v17 = *(_DWORD*)(a1 + 328);
          *(_DWORD*)(a1 + 336) = v16;
          if ((v17 & 8) == 0) {
            goto LABEL_117;
          }
        }
      }
      else if (v15 == 3) {
        v16 = *v8 & 0x8FFFFFFF | 0x40000000;
        v17 = *(_DWORD*)(a1 + 328);
        *(_DWORD*)(a1 + 336) = v16;
        if ((v17 & 8) == 0) {
          goto LABEL_117;
        }
      }
      else {
        v16 = *v8 & 0x8FFFFFFF | 0x50000000;
        v17 = *(_DWORD*)(a1 + 328);
        *(_DWORD*)(a1 + 336) = v16;
        if ((v17 & 8) == 0) {
          goto LABEL_117;
        }
      }
    LABEL_116:
      *v8 = v16 | 0x80000000;
      goto LABEL_117;
    }
  LABEL_46:
    if (v10 <= 4) {
      if (v10 == 3) {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x200000;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_68;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x280000;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_68;
        }
      }
      goto LABEL_59;
    }
    if (v10 == 5) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x300000;
      v11 = CudaDriverRoutine_11f370(a1, 1u);
      if (v11 <= 2) {
        goto LABEL_68;
      }
      goto LABEL_59;
    }
    if (v10 != 6) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 | 0x380000;
    v11 = CudaDriverRoutine_11f370(a1, 1u);
    if (v11 > 2) {
      goto LABEL_59;
    }
  LABEL_68:
    if (v11 == 0) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF;
      v14 = CudaDriverRoutine_11f370(a1, 2u);
      if (v14 <= 2) {
        goto LABEL_87;
      }
      goto LABEL_78;
    }
    if (v11 == 1) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x800000;
      v14 = CudaDriverRoutine_11f370(a1, 2u);
      if (v14 <= 2) {
        goto LABEL_87;
      }
      goto LABEL_78;
    }
    if (v11 != 2) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0xC00000;
    v14 = CudaDriverRoutine_11f370(a1, 2u);
    if (v14 > 2) {
      goto LABEL_78;
    }
  LABEL_87:
    if (v14 == 0) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF;
      v15 = CudaDriverRoutine_11f370(a1, 3u);
      if (v15 <= 2) {
        goto LABEL_106;
      }
      goto LABEL_97;
    }
    if (v14 == 1) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0x4000000;
      v15 = CudaDriverRoutine_11f370(a1, 3u);
      if (v15 <= 2) {
        goto LABEL_106;
      }
      goto LABEL_97;
    }
    if (v14 != 2) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0x6000000;
    v15 = CudaDriverRoutine_11f370(a1, 3u);
    if (v15 > 2) {
      goto LABEL_97;
    }
  LABEL_106:
    if (v15 == 0) {
      v16 = *v8 & 0x8FFFFFFF;
      v17 = *(_DWORD*)(a1 + 328);
      *(_DWORD*)(a1 + 336) = v16;
      if ((v17 & 8) == 0) {
        goto LABEL_117;
      }
      goto LABEL_116;
    }
    if (v15 == 1) {
      v16 = *v8 & 0x8FFFFFFF | 0x20000000;
      v17 = *(_DWORD*)(a1 + 328);
      *(_DWORD*)(a1 + 336) = v16;
      if ((v17 & 8) == 0) {
        goto LABEL_117;
      }
      goto LABEL_116;
    }
    if (v15 != 2) {
      return v6;
    }
    v16 = *v8 & 0x8FFFFFFF | 0x30000000;
    v17 = *(_DWORD*)(a1 + 328);
    *(_DWORD*)(a1 + 336) = v16;
    if ((v17 & 8) != 0) {
      goto LABEL_116;
    }
  LABEL_117:
    if (v4 == 0) {
      v20 = *(_QWORD*)(a1 + 128);
      v21 = *(_DWORD*)(a1 + 344);
      *(_DWORD*)(a1 + 340) = v20 & 0xFFFFFE00 | *(_DWORD*)(a1 + 340) & 0x1FF;
      *(_DWORD*)(a1 + 344) = v21 & 0xFF1F0000 | 0x600000 | WORD2(v20);
      if (v3) {
        goto LABEL_123;
      }
      goto LABEL_122;
    }
    if (v4 == 1) {
      v18 = *(_QWORD*)(a1 + 128);
      v19 = *(_DWORD*)(a1 + 344);
      *(_DWORD*)(a1 + 340) = v18 & 0xFFFFFFE0 | *(_DWORD*)(a1 + 340) & 0x1F;
      *(_DWORD*)(a1 + 344) = v19 & 0xFF1F0000 | 0x400000 | WORD2(v18);
      if (v3) {
        goto LABEL_123;
      }
    LABEL_122:
      *(_DWORD*)(a1 + 348) |= 0x10000u;
      goto LABEL_123;
    }
    v27 = *(_QWORD*)(a1 + 128);
    v28 = *(_DWORD*)(a1 + 344) & 0xFF1FFFFF;
    *(_DWORD*)(a1 + 340) = v27;
    *(_DWORD*)(a1 + 344) = v28 & 0xFFFF0000 | WORD2(v27);
    if (!v3) {
      goto LABEL_122;
    }
  LABEL_123:
    if (v4 != 0) {
      if (v4 == 2) {
        v22 = ((unsigned int)(*(_DWORD*)(a1 + 104) - 1) >> 16) |
              (*(unsigned __int16*)(a1 + 350) << 16);
      LABEL_132:
        *(_DWORD*)(a1 + 348) = v22;
        goto LABEL_133;
      }
      v22 = (*(unsigned __int16*)(a1 + 350) << 16) |
            (unsigned __int16)(*(_DWORD*)(a1 + 116) >> 5);
      v26 = *(_QWORD*)(a1 + 88);
      *(_DWORD*)(a1 + 348) = v22;
      if (v26 == 0) {
        goto LABEL_133;
      }
    LABEL_131:
      v22 = (v22 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v26 + 40) << 28)) -
            0x10000000;
      goto LABEL_132;
    }
    v23 = *(_DWORD**)(a1 + 64);
    v24 = *(_DWORD*)(a1 + 348) & 0xFFFFFFF8 | v23[10] & 7;
    *(_DWORD*)(a1 + 348) = v24;
    v25 = v24 & 0xFFFFFFC7 | (8 * (v23[11] & 7));
    *(_DWORD*)(a1 + 348) = v25;
    v22 = v25 & 0xFFFFFE3F | ((v23[12] & 7) << 6);
    v26 = *(_QWORD*)(a1 + 88);
    *(_DWORD*)(a1 + 348) = v22;
    if (v26 != 0) {
      goto LABEL_131;
    }
  LABEL_133:
    if (!v3) {
      *(_DWORD*)(a1 + 348) = v22 | 0x60000;
    }
    if (v4 == 0) {
      v30 = (unsigned __int16)(*(_DWORD*)(a1 + 104) - 1) |
            (*(unsigned __int16*)(a1 + 354) << 16);
      v31 = *(_QWORD*)(a1 + 64);
      *(_DWORD*)(a1 + 352) = v30;
      v32 = *(_DWORD*)(v31 + 8);
      if (v32 > 3) {
        if (v32 > 5) {
          if (v32 == 6) {
            v30 = v30 & 0xF87FFFFF | 0x1800000;
          }
          else if (v32 == 7) {
            v30 = v30 & 0xF87FFFFF | 0x4000000;
          }
        }
        else if (v32 == 4) {
          v30 = v30 & 0xF87FFFFF | 0x2000000;
        }
        else {
          v30 = v30 & 0xF87FFFFF | 0x2800000;
        }
        goto LABEL_161;
      }
      if (v32 == 1) {
        if (!CudaDriverRoutine_11f690((__int64*)a1)) {
          v30 = *(_DWORD*)(a1 + 352) & 0xF87FFFFF;
          goto LABEL_161;
        }
      }
      else if (v32 != 2) {
        if (v32 == 3) {
          v30 = v30 & 0xF87FFFFF | 0x1000000;
        }
      LABEL_161:
        v29 = v30 | 0xE0000000;
        v34 = *(_DWORD*)(a1 + 328);
        *(_DWORD*)(a1 + 352) = v29;
        if ((v34 & 0x10) == 0) {
          goto LABEL_163;
        }
        goto LABEL_162;
      }
      v33 = *(_DWORD*)(a1 + 352) & 0xF87FFFFF;
      if (*(_DWORD*)(a1 + 120) != 0) {
        v30 = v33 | 0x3800000;
      }
      else {
        v30 = v33 | 0x800000;
      }
      goto LABEL_161;
    }
    if (v4 == 2) {
      v29 = *(_DWORD*)(a1 + 352) & 0xF87F0000 |
            (unsigned __int16)(*(_WORD*)(a1 + 104) - 1) | 0x3000000;
      *(_DWORD*)(a1 + 352) = v29;
      if ((v17 & 0x10) == 0) {
        goto LABEL_163;
      }
    LABEL_162:
      *(_DWORD*)(a1 + 352) = v29 | 0x400000;
      goto LABEL_163;
    }
    v29 = *(_DWORD*)(a1 + 352) & 0x187F0000 |
          (unsigned __int16)(*(_DWORD*)(a1 + 104) - 1) | 0xE3800000;
    *(_DWORD*)(a1 + 352) = v29;
    if ((v17 & 0x10) != 0) {
      goto LABEL_162;
    }
  LABEL_163:
    if (!v3) {
      v35 = *(_DWORD*)(a1 + 108);
      v36 = *(_DWORD*)(a1 + 112);
      v37 = v35 == 0;
      v38 = (unsigned __int16)(v35 - 1);
      if (v37) {
        v38 = 0;
      }
      v39 = v38 | *(_DWORD*)(a1 + 356) & 0xC0000000;
      v40 = ((v36 << 16) + 1073676288) & 0x3FFF0000;
      if (v36 == 0) {
        v40 = 0;
      }
      *(_DWORD*)(a1 + 356) = v40 | v39;
      if (CudaDriverRoutine_11f6d0(a1)) {
        *(_DWORD*)(a1 + 356) |= 0x80000000;
      }
      v41 = *(_BYTE*)(a1 + 328);
      v42 = *(_DWORD*)(a1 + 360) & 0xF87FFFFF | 0x3000000;
      *(_DWORD*)(a1 + 360) = v42;
      if ((v41 & 0x20) == 0) {
        v43 = *(_DWORD*)(a1 + 296);
        if (v43 > 7) {
          v45 = v42 & 0xFB7FFFC1 | 0x10;
        }
        else {
          v44 = 1 << v43;
          if ((v44 & 0xF0) != 0) {
            v45 = v42 & 0xFB7FFFC1 | 0xC;
          }
          else if ((v44 & 3) != 0) {
            v45 = v42 & 0xFB7FFFC1;
          }
          else {
            v45 = v42 & 0xFB7FFFC1 | 8;
          }
        }
        *(_DWORD*)(a1 + 360) = v45;
      }
    }
    if (*(_QWORD*)(a1 + 88) != 0) {
      *(_DWORD*)(a1 + 364) = *(_DWORD*)(a1 + 364) & 0xFFFFFF00 |
                             *(_DWORD*)(a1 + 136) & 0xF |
                             (16 * (*(_DWORD*)(a1 + 140) & 0xF));
    }
    v46 = CudaDriverRoutine_11f790(a1, 0);
    if (v46 > 2) {
      if ((unsigned int)(v46 - 3) >= 2) {
        return v6;
      }
    }
    else {
      switch (v46) {
      case 0:
        goto LABEL_190;
      case 1:
        v46 = 2;
        break;
      case 2:
        v46 = 1;
        break;
      default:
        return v6;
      }
    }
    *(_DWORD*)(a1 + 368) |= v46;
  LABEL_190:
    v47 = CudaDriverRoutine_11f790(a1, 1u);
    if (v47 <= 1) {
      if (v47 == 0) {
        goto LABEL_201;
      }
      if (v47 != 1) {
        return v6;
      }
      v48 = 16;
    }
    else {
      switch (v47) {
      case 4:
        v48 = 32;
        break;
      case 3:
        v48 = 24;
        break;
      case 2:
        v48 = 8;
        break;
      default:
        return v6;
      }
    }
    *(_DWORD*)(a1 + 368) |= v48;
  LABEL_201:
    v49 = CudaDriverRoutine_11f790(a1, 2u);
    if (v49 <= 1) {
      if (v49 != 0) {
        if (v49 != 1) {
          return v6;
        }
        v50 = *(_DWORD*)(a1 + 368) | 0x80;
      }
      else {
        v50 = *(_DWORD*)(a1 + 368);
      }
    LABEL_212:
      *(_DWORD*)(a1 + 368) = v50 | 0x2000;
      v51 = *(_DWORD*)(a1 + 296);
      v52 = 1056768;
      if ((int)v51 > 5) {
        if (v51 <= 0xF) {
          if (((1 << v51) & 0xF000) != 0) {
            v52 = 6299648;
            goto LABEL_227;
          }
          if (((1 << v51) & 0x300) != 0) {
            v52 = 4202496;
            goto LABEL_227;
          }
          if (((1 << v51) & 0xC00) != 0) {
            v52 = 5251072;
            goto LABEL_227;
          }
        }
        if (v51 - 6 < 2) {
          v52 = 3153920;
          goto LABEL_227;
        }
      }
      else {
        if (v51 < 2) {
          goto LABEL_228;
        }
        if (v51 - 2 < 2) {
        LABEL_227:
          *(_DWORD*)(a1 + 368) = v50 | v52;
        LABEL_228:
          if (*(_DWORD*)(a1 + 276) == 1) {
            v53 = 34;
          }
          else {
            v53 = 17;
          }
          v54 = *(_DWORD*)(a1 + 372) | v53;
          v55 = *(_QWORD*)(a1 + 88);
          if (v55 != 0) {
            v56 = 0x0.0p+0f;
            if (*(_DWORD*)(a1 + 280) == 1) {
              v57 = 192;
            }
            else {
              v57 = 128;
            }
            v58 = v54 | v57;
            if (!v3 && (*(_BYTE*)(a1 + 328) & 0x20) == 0) {
              if (v51 > 7) {
                v56 = -0x1.0000000000000p-2f;
                v58 |= 0x20000000u;
              }
              else {
                v59 = 1 << v51;
                if ((v59 & 0xF0) != 0) {
                  v58 |= 0x18000000u;
                  v56 = -0x1.b6db6e0000000p-3f;
                }
                else if ((v59 & 3) != 0) {
                  v56 = -0x0.0p+0f;
                }
                else {
                  v58 |= 0x10000000u;
                  v56 = -0x1.5555560000000p-3f;
                }
              }
            }
            v61 = v56 + *(float*)(a1 + 284);
            v62 = v61 >= 0x1.e000000000000p+3f;
            v63 = v61 <= -0x1.e000000000000p+3f;
            v64 = v61;
            v65 = !v63 || v62;
            if (v63) {
              v62 = true;
            }
            if (v65 != 0) {
              v66 = 3840;
            }
            else {
              v66 = 4352;
            }
            v67 = vcvtd_n_s32_f64(v64, 8u) & 0x1FFF;
            if (!v62) {
              v66 = v67;
            }
            v60 = v58 | (v66 << 12);
            *(_DWORD*)(a1 + 372) = v60;
            if (v3) {
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
                goto LABEL_259;
              }
            }
            else {
              *(_DWORD*)(a1 + 360) =
                  *(_DWORD*)(a1 + 360) & 0xFFF8003F | ((v66 & 0x1FFF) << 6);
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              LABEL_259:
                if (v55 == 0) {
                  goto LABEL_260;
                }
                goto LABEL_264;
              }
            }
          }
          else {
            v60 = v54 | 0x40;
            *(_DWORD*)(a1 + 372) = v54 | 0x40;
            if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              goto LABEL_259;
            }
          }
          *(_DWORD*)(a1 + 372) = v60 | 0x300;
          if (v55 == 0) {
          LABEL_260:
            if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) != 3) {
            LABEL_286:
              if ((unsigned int)CudaDriverRoutine_11f790(a1, 1u) != 3 &&
                  (unsigned int)CudaDriverRoutine_11f790(a1, 2u) != 3) {
                return 0;
              }
            }
          LABEL_288:
            CudaDriverRoutine_11f810(&v87, a1);
            v79 = *(_QWORD*)&v87;
            *(_DWORD*)(a1 + 392) = DWORD2(v87);
            *(_QWORD*)(a1 + 384) = v79;
            if (CudaDriverRoutine_11f2f0(a1)) {
              v83 = (__int64*)(a1 + 8);
              if (*(_QWORD*)a1 != 0) {
                v83 = (__int64*)(*(_QWORD*)a1 + 24LL);
              }
              if (!CudaDriverStub_985a0(*v83)) {
                goto LABEL_295;
              }
              v84 = *(_DWORD*)(a1 + 396) | 1;
            }
            else {
              v84 = DWORD3(v87);
            }
            *(_DWORD*)(a1 + 396) = v84;
          LABEL_295:
            if ((*(_BYTE*)(a1 + 328) & 0x10) != 0) {
              cuda_driver_11f820(v88, (float*)&v87);
              v85 = v88[2];
              *(_DWORD*)(a1 + 376) |= v88[0] << 24;
              *(_DWORD*)(a1 + 380) = (v88[1] << 12) | (v85 << 20);
            }
            return 0;
          }
        LABEL_264:
          v68 = *(float*)(a1 + 288);
          v69 = v68 >= 0x1.e000000000000p+3f;
          v70 = v68 <= 0x0.0p+0f;
          v71 = vcvtd_n_s32_f64(v68, 8u);
          v72 = *(float*)(a1 + 292);
          v73 = !v70 || v69;
          if (v70) {
            v69 = true;
          }
          if (v73 != 0) {
            v74 = 3840;
          }
          else {
            v74 = 0;
          }
          v75 = v71 & 0xFFF;
          if (v69) {
            v76 = v74;
          }
          else {
            v76 = v75;
          }
          if (v72 <= 0x0.0p+0f && v72 < 0x1.e000000000000p+3f) {
            v78 = 0;
          }
          else {
            v78 = 15728640;
          }
          if (v72 < 0x1.e000000000000p+3f && v72 > 0x0.0p+0f) {
            v78 = (vcvtd_n_s32_f64(v72, 8u) & 0xFFF) << 12;
          }
          *(_DWORD*)(a1 + 376) |= v78 | v76;
          if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) == 3) {
            goto LABEL_288;
          }
          goto LABEL_286;
        }
        if (v51 - 4 < 2) {
          v52 = 2105344;
          goto LABEL_227;
        }
      }
      v52 = 7348224;
      goto LABEL_227;
    }
    switch (v49) {
    case 2:
      v50 = *(_DWORD*)(a1 + 368) | 0x40;
      goto LABEL_212;
    case 3:
      v50 = *(_DWORD*)(a1 + 368) | 0xC0;
      goto LABEL_212;
    case 4:
      v50 = *(_DWORD*)(a1 + 368) | 0x100;
      goto LABEL_212;
    default:
      break;
    }
    return v6;
  default:
    return v6;
  }
}

__int64 cuda_driver_1be5c0(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;

  v1 = *(unsigned int*)(a1 + 36);
  if ((unsigned int)v1 > 4) {
    return 1;
  }
  v2 = *(_DWORD*)(a1 + 40);
  v3 = CudaDriverData_1130110[v1];
  *(_DWORD*)(a1 + 56) = v3;
  if (v2 <= 1) {
    if (v2 == 0) {
      goto LABEL_14;
    }
    if (v2 != 1) {
      return 1;
    }
    v4 = 16;
  }
  else {
    switch (v2) {
    case 4:
      v4 = 32;
      break;
    case 3:
      v4 = 24;
      break;
    case 2:
      v4 = 8;
      break;
    default:
      return 1;
    }
  }
  v3 |= v4;
  *(_DWORD*)(a1 + 56) = v3;
LABEL_14:
  v6 = *(_DWORD*)(a1 + 44);
  if (v6 <= 1) {
    if (v6 == 0) {
      goto LABEL_24;
    }
    if (v6 == 1) {
      v3 |= 0x80u;
      goto LABEL_24;
    }
    return 1;
  }
  if (v6 == 2) {
    v3 |= 0x40u;
    goto LABEL_24;
  }
  if (v6 == 3) {
    v3 |= 0xC0u;
    goto LABEL_24;
  }
  if (v6 != 4) {
    return 1;
  }
  v3 |= 0x100u;
LABEL_24:
  v7 = v3 | 0x2000;
  if (*(_DWORD*)(a1 + 48) == 1) {
    v8 = 226;
  }
  else {
    v8 = 145;
  }
  *(_DWORD*)(a1 + 56) = v7;
  *(_DWORD*)(a1 + 60) = v8;
  if (*(_BYTE*)(a1 + 52) != 0) {
    *(_DWORD*)(a1 + 60) = v8 | 0x2000000;
  }
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 64) = &CudaDriverData_f00000;
  return 0;
}

__int64 cuda_driver_1bf360(__int64 result, unsigned __int64 a2, unsigned int a3)
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
        *(_QWORD*)(result + 8) = 0x1200120AFLL;
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
    v22.val[2] = vdupq_n_s32(0x200120AFu);
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

__int64 cuda_driver_1bf480(__int64 result, unsigned __int64 a2, unsigned int a3)
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
        *(_QWORD*)(result + 8) = 0x1200120AFLL;
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
    v22.val[2] = vdupq_n_s32(0x200120AFu);
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

__int64 cuda_driver_1bf600() { return 67108320; }

__int64 cuda_driver_1bf610() { return 67108324; }

__int64 cuda_driver_1c02d0(__int64 a1)
{
  __int128 v2;
  int64x2_t v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  char v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v18;

  *(_BYTE*)(a1 + 3744) = 0;
  *(_DWORD*)(a1 + 4120) = 0;
  *(_DWORD*)(a1 + 4228) = 0;
  *(_DWORD*)(a1 + 3736) = 1;
  *(_DWORD*)(a1 + 3408) = 140;
  *(_OWORD*)(a1 + 3756) = CudaDriverData_1115480;
  *(_OWORD*)(a1 + 3772) = CudaDriverData_1115f70;
  *(_OWORD*)(a1 + 3788) = CudaDriverData_1115a70;
  *(_OWORD*)(a1 + 3804) = CudaDriverData_1116370;
  *(_OWORD*)(a1 + 3820) = CudaDriverData_1115810;
  *(_QWORD*)(a1 + 4152) = 0x1000000010000LL;
  *(_OWORD*)(a1 + 3836) = CudaDriverData_11156d0;
  *(_OWORD*)(a1 + 3852) = CudaDriverData_1115620;
  *(_OWORD*)(a1 + 3868) = CudaDriverData_1115570;
  *(_OWORD*)(a1 + 3884) = CudaDriverData_11160c0;
  *(_QWORD*)(a1 + 3456) = 0x2000000020LL;
  *(_OWORD*)(a1 + 3900) = CudaDriverData_1115c80;
  *(_OWORD*)(a1 + 3916) = CudaDriverData_1115b20;
  *(_OWORD*)(a1 + 3932) = CudaDriverData_1115e70;
  *(_QWORD*)&v2 = 0x1000000010000LL;
  *((_QWORD*)&v2 + 1) = 0x1000000010000LL;
  *(_OWORD*)(a1 + 3948) = v2;
  *(_OWORD*)(a1 + 3964) = CudaDriverData_11156a0;
  *(_OWORD*)(a1 + 3980) = CudaDriverData_1115870;
  *(_OWORD*)(a1 + 4076) = CudaDriverData_11156b0;
  *(_OWORD*)(a1 + 3996) = CudaDriverData_1115b30;
  *(_OWORD*)(a1 + 4012) = CudaDriverData_1116230;
  *(_OWORD*)(a1 + 4028) = CudaDriverData_1115c20;
  *(_DWORD*)(a1 + 4108) = 0x7FFFFFFF;
  *(_OWORD*)(a1 + 4044) = CudaDriverData_1115e80;
  *(_OWORD*)(a1 + 4092) = CudaDriverData_1115b40;
  *(_OWORD*)(a1 + 4132) = CudaDriverData_1116180;
  *(_OWORD*)(a1 + 4060) = CudaDriverData_1115a80;
  *(_QWORD*)(a1 + 4164) = 0x400010000LL;
  *(_QWORD*)(a1 + 4288) = 0x10000000000LL;
  *(_QWORD*)(a1 + 17120) = 16;
  *(_QWORD*)(a1 + 17128) = 0x1000000;
  *(_OWORD*)(a1 + 4192) = CudaDriverData_1115f00;
  v3 = vdupq_n_s64(0x1000000u);
  v4 = a1 + 16836;
  *(_BYTE*)(a1 + 17080) = 0;
  *(_BYTE*)(a1 + 17044) = 0;
  *(_DWORD*)(a1 + 16836) = 0;
  *(_BYTE*)(a1 + 16840) = 0;
  *(_WORD*)(a1 + 17013) = 0;
  *(_DWORD*)(a1 + 17072) = 0;
  *(_BYTE*)(a1 + 17082) = 0;
  *(_BYTE*)(a1 + 17062) = 1;
  *(int64x2_t*)(a1 + 17136) = v3;
  *(int64x2_t*)(a1 + 17152) = v3;
  *(_OWORD*)(a1 + 3384) = CudaDriverData_1115e90;
  *(_DWORD*)(a1 + 14472) = 2;
  *(_DWORD*)(a1 + 14764) = 2;
  *(_DWORD*)(a1 + 3440) = 8;
  *(_DWORD*)(a1 + 3448) = 4;
  *(_DWORD*)(a1 + 17040) = 32;
  v5 = *(_DWORD*)(a1 + 3768);
  *(_QWORD*)(a1 + 3432) = 1;
  *(_QWORD*)(a1 + 17000) = 1;
  *(_OWORD*)(a1 + 11732) = CudaDriverData_1115a00;
  *(_OWORD*)(a1 + 11748) = CudaDriverData_1115d10;
  *(_OWORD*)(a1 + 11764) = CudaDriverData_11162c0;
  *(_OWORD*)(a1 + 11780) = CudaDriverData_1116010;
  *(_OWORD*)(a1 + 11700) = CudaDriverData_1115cc0;
  *(_OWORD*)(a1 + 11716) = CudaDriverData_1115360;
  *(_BYTE*)(a1 + 16856) |= 1u;
  v6 = *(_DWORD*)(a1 + 16976);
  *(_OWORD*)(a1 + 4368) = CudaDriverData_11162d0;
  *(_DWORD*)(a1 + 16976) = v6 & 0xFFFF841A | 0x79E4;
  LOBYTE(v6) = *(_BYTE*)(a1 + 16996) & 0xFB;
  *(_DWORD*)(a1 + 17024) = *(_DWORD*)(a1 + 3756);
  *(_DWORD*)(a1 + 17028) = v5;
  *(_BYTE*)(a1 + 16996) = v6 | 2;
  *(_WORD*)(a1 + 16848) |= 8u;
  *(_WORD*)(a1 + 17060) = 256;
  *(_DWORD*)(a1 + 17064) = 24;
  *(_WORD*)(a1 + 17098) = 257;
  *(_QWORD*)(a1 + 17016) = 0x200000004LL;
  *(_QWORD*)(a1 + 17104) = 580;
  v7 = *(_DWORD*)((char*)&CudaDriverRoutine_4464 +
                  (_QWORD)CudaDriverData_1422118);
  *(_BYTE*)(a1 + 17272) &= ~2u;
  *(_DWORD*)(a1 + 17112) = v7;
  LOBYTE(v7) = *(_BYTE*)(a1 + 17280);
  *(_OWORD*)(a1 + 17168) = CudaDriverData_1115dd0;
  *(_WORD*)(a1 + 17281) = 1793;
  *(_BYTE*)(a1 + 17280) = v7 & 0xFE;
  *(_QWORD*)(a1 + 17320) = 48;
  *(_OWORD*)(a1 + 17184) = CudaDriverData_11157d0;
  *(_DWORD*)(a1 + 14844) = CudaDriverRoutine_1bfa10((_DWORD*)a1);
  *(_DWORD*)(a1 + 14848) = CudaDriverRoutine_1bfa10((_DWORD*)a1);
  *(_DWORD*)(a1 + 14852) = CudaDriverRoutine_1bfa10((_DWORD*)a1);
  v8 = CudaDriverRoutine_1bfa10((_DWORD*)a1);
  v9 = *(_DWORD*)(a1 + 3148);
  *(_DWORD*)(a1 + 14856) = v8;
  if ((unsigned int)(v9 - 23) >= 5) {
    if ((unsigned int)(v9 - 21) > 1) {
      return 100;
    }
    *(_DWORD*)(v4 + 200) = 0;
    *(_DWORD*)(a1 + 3384) = 45248;
    *(_DWORD*)(v4 + 140) &= ~0x1000u;
    *(_DWORD*)(a1 + 4172) = 1;
  }
  else {
    *(_DWORD*)(a1 + 3408) = 140;
    *(_DWORD*)(v4 + 200) = 1;
    *(_DWORD*)(a1 + 3384) = 45504;
    *(_DWORD*)(a1 + 3392) = 45167;
    *(_QWORD*)(a1 + 17320) = 48;
    *(int32x2_t*)(a1 + 4152) = vdup_n_s32(0x18000u);
    *(_QWORD*)(a1 + 4168) = 0x200000002LL;
    if (v9 > 23) {
      if (v9 > 25) {
        v14 = 0;
        *(_DWORD*)(a1 + 3760) = 0x8000;
        *(_DWORD*)v4 = 1;
        *(_DWORD*)(a1 + 3480) = 1;
        *(_DWORD*)(a1 + 4168) = 1;
        *(_DWORD*)(a1 + 14472) = 1;
        *(_DWORD*)(a1 + 4180) = 1;
        *(_DWORD*)(a1 + 3448) = 1;
        v15 = 2;
        *(_DWORD*)(a1 + 4224) = 16;
        v16 = *(_DWORD*)(v4 + 140) & 0xFFFFFF7F;
        *(_QWORD*)(a1 + 4152) = 0x1000000010000LL;
        *(_DWORD*)(v4 + 140) = v16;
        *(_DWORD*)(a1 + 3440) = 4;
        v13 = 2;
        *(_DWORD*)(a1 + 3724) = 2;
      }
      else {
        if (v9 == 24) {
          v10 = 16;
          v11 = 4;
          v12 = 0;
          goto LABEL_15;
        }
        v13 = 8;
        v15 = 4;
        *(_DWORD*)(a1 + 3480) = 2;
        *(_DWORD*)(a1 + 4180) = 2;
        *(_DWORD*)(a1 + 3724) = 8;
        *(_DWORD*)(a1 + 4224) = 32;
        *(_DWORD*)(a1 + 4100) = 49152;
        v14 = 4;
      }
    LABEL_18:
      *(_DWORD*)(a1 + 3488) = v14;
      *(_DWORD*)(a1 + 3732) = v13;
      *(_DWORD*)(a1 + 3484) = v15;
      *(_QWORD*)(a1 + 3492) = 0;
      goto LABEL_19;
    }
  }
  if (v9 == 21) {
    v14 = 0;
    *(_DWORD*)(a1 + 3480) = 1;
    v13 = 5;
    *(_DWORD*)(a1 + 4180) = 2;
    *(_DWORD*)(a1 + 3724) = 5;
    *(_DWORD*)(a1 + 4224) = 16;
    v15 = 5;
    goto LABEL_18;
  }
  if (v9 == 22) {
    v13 = 3;
    v14 = 0;
    *(_DWORD*)(a1 + 3480) = 1;
    *(_DWORD*)(a1 + 4180) = 1;
    *(_DWORD*)(a1 + 3724) = 3;
    *(_DWORD*)(a1 + 4224) = 16;
    v15 = 3;
    goto LABEL_18;
  }
  v12 = 1;
  v10 = 24;
  v11 = 6;
LABEL_15:
  *(_DWORD*)(a1 + 3724) = v10;
  *(_DWORD*)(a1 + 3732) = v10;
  v18 = v10 / v11;
  *(_DWORD*)(a1 + 3480) = v11;
  *(_DWORD*)(a1 + 4180) = v11;
  *(_DWORD*)(a1 + 4100) = 49152;
  *(_DWORD*)(a1 + 4224) = 32;
  *(_DWORD*)(a1 + 3484) = v18;
  *(_DWORD*)(a1 + 3488) = v18;
  *(_DWORD*)(a1 + 3492) = v18;
  *(_DWORD*)(a1 + 3496) = v18;
  if ((v12 & 1) == 0) {
  LABEL_19:
    v18 = 0;
    *(_DWORD*)(a1 + 3500) = 0;
    goto LABEL_20;
  }
  *(_DWORD*)(a1 + 3500) = v18;
LABEL_20:
  *(_DWORD*)(a1 + 3504) = v18;
  *(_DWORD*)(a1 + 14752) = 0x20000;
  *(_BYTE*)(v4 + 492) = 0;
  *(_QWORD*)(a1 + 18360) = CudaDriverRoutine_1bfa50;
  *(_QWORD*)(a1 + 4280) = 0x10000000000LL;
  *(_OWORD*)(a1 + 3508) = (__typeof__(*(_OWORD*)(a1 + 3508))){0};
  *(_OWORD*)(a1 + 3524) = (__typeof__(*(_OWORD*)(a1 + 3524))){0};
  *(_QWORD*)(a1 + 3540) = 0;
  *(_DWORD*)(v4 + 140) = *(_DWORD*)(v4 + 140) & 0xFFFE7FFF | 0x8000;
  return 0;
}

__int64 cuda_driver_1c21c0(__int64 a1, __int64 a2, __int64 a3,
                           unsigned __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  int64x2_t v18;
  int64x2_t v19;
  int64x2_t v20;
  int8x16_t* v21;
  int64x2_t v22;
  int64x2_t v23;
  int64x2_t v24;
  int64x2_t v25;
  __int64 v26;
  int8x16_t v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  __int64 v32;
  bool v33;
  unsigned __int64 v34;
  unsigned int v35;
  unsigned int v36;

  v4 = a3 - a2;
  if ((unsigned __int64)(a3 - a2) >= 0x100000) {
    v9 = 0x100000;
  }
  else {
    v9 = a3 - a2;
  }
  v10 = CudaDriverStub_12e330(v9);
  if (v10 == 0) {
    return 10;
  }
  v11 = *(_QWORD*)(a1 + 168);
  v12 = v10;
  v13 = a2 - v11;
  v14 = a3 - v11;
  if (v4 >= 8) {
    if (v9 >> 3 <= 1) {
      v15 = 1;
    }
    else {
      v15 = v9 >> 3;
    }
    if (v4 < 0x20) {
      v16 = 0;
      goto LABEL_15;
    }
    v18 = vdupq_n_s64(v13);
    v19 = COERCE_AS(int64x2_t, CudaDriverData_1115780);
    v20 = vdupq_n_s64(0x10u);
    v16 = v15 & 0x3FFFC;
    v21 = (int8x16_t*)(v10 + 16);
    v22 = vdupq_n_s64(a4);
    v23 = vdupq_n_s64(0x1F8000FC0007E0uLL);
    v24 = vdupq_n_s64(4u);
    v25 = vdupq_n_s64(0x1Fu);
    v26 = v15 & 0x3FFFC;
    do {
      v27 = vshlq_n_s64(v19, 3u);
      v19 = vaddq_s64(v19, v24);
      v26 -= 4;
      v21[-1] =
          vbslq_s8(vceqzq_s64(vandq_s8(vaddq_s64(v27, v18), v25)), v23, v22);
      *v21 = vbslq_s8(
          vceqzq_s64(vandq_s8(vaddq_s64(veorq_s8(v27, v20), v18), v25)), v23,
          v22);
      v21 += 2;
    } while (v26 != 0);
    if (v9 >> 3 != v16) {
    LABEL_15:
      v28 = (__int64*)(v10 + 8 * v16);
      v29 = v16 - v15;
      v30 = a2 + 8 * v16 - v11;
      do {
        v31 = (v30 & 0x1F) == 0;
        v30 += 8;
        if (v31) {
          v32 = 0x1F8000FC0007E0LL;
        }
        else {
          v32 = a4;
        }
        v33 = __CFADD__(v29++, 1);
        *v28++ = v32;
      } while (!v33);
    }
  }
  if (v13 >= v14) {
  LABEL_27:
    v36 = 0;
  }
  else {
    while (1) {
      v34 = v14 - v13 >= v9 ? v9 : v14 - v13;
      v35 = (*(__int64 (**)(__int64, unsigned __int64, __int64, _QWORD))(
          *(_QWORD*)(a1 + 8) + 23375840LL))(a1, v13, v12, (unsigned int)v34);
      if (v35 != 0) {
        break;
      }
      v13 += v34;
      if (v13 >= v14) {
        goto LABEL_27;
      }
    }
    v36 = v35;
  }
  CudaDriverRoutine_12e340(v12);
  return v36;
}

__int64 cuda_driver_1c2b10(__int64 a1, unsigned __int64 a2, __int64* a3,
                           __int64 a4, unsigned int a5, _DWORD* a6)
{
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v14;
  _QWORD v15[3];

  result = 4;
  if (a1 != 0 && a4 != 0 && a6 != nullptr) {
    if (a5 < 0x40) {
      return 10;
    }
    else {
      v15[1] = v6;
      v15[2] = v7;
      result = (*(__int64 (**)(__int64, unsigned __int64, _QWORD*, __int64))(
          *(_QWORD*)(a1 + 8) + 23375648LL))(a1, a2 & 0xFFFFFFFFFFFFFFE0LL, v15,
                                            8);
      if ((_DWORD)result == 0) {
        v14 = *a3;
        *(_QWORD*)a4 = (v15[0] >> (((4 * ((a2 >> 3) & 3)) & 0xC |
                                    (16 * ((a2 >> 3) & 3)) | (a2 >> 3) & 3) -
                                   21)) &
                           0x1FFFFFLL |
                       0x1FC400FE200000LL;
        *(_QWORD*)(a4 + 8) = v14;
        *(_OWORD*)(a4 + 16) = CudaDriverData_135dfc0;
        *(_OWORD*)(a4 + 32) = CudaDriverData_135dfd0;
        *(_OWORD*)(a4 + 48) = CudaDriverData_135dfe0;
        *a6 = 64;
      }
    }
  }
  return result;
}

__int64 cuda_driver_1c5fa0(__int64 a1, _DWORD* a2, _DWORD* a3, _QWORD* a4)
{
  __int64 result;

  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  result = (*(__int64 (**)(void))(*(_QWORD*)(a1 + 32306416) + 264LL))();
  __builtin_arm_dmb(0xDu);
  if ((_DWORD)result == 0) {
    *a2 = 1;
    if (*(_DWORD*)(a1 + 23375256) != 2) {
      CudaDriverRoutine_19adf0(a1, 1);
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_1c6030(__int64 a1, _DWORD* a2, int a3)
{
  __int64 v6;
  unsigned int v7;
  bool v8;
  int v9;
  __int64 result;
  int v12;
  unsigned int v13;

  *a2 = 0;
  v6 = a1 + 23375256;
  if (*(_DWORD*)(a1 + 1084) != 0) {
    (*(void (**)(__int64))(a1 + 23376120))(a1);
  }
  v7 = *(_DWORD*)(v6 + 1876);
  *(_DWORD*)(a1 + 1084) = 0;
  v8 = v7 > 5;
  v9 = (1 << v7) & 0x3A;
  if (v8 || v9 == 0) {
    result = (*(__int64 (**)(__int64, __int64, _QWORD))(v6 + 848))(a1, 1, 0);
    if ((_DWORD)result != 0) {
      return result;
    }
    (*(void (**)(__int64, __int64))(v6 + 832))(a1, 0xFFFFFFFFLL);
    __builtin_arm_dmb(0xEu);
    if (a3 != 0) {
      result = 0;
      *a2 = 1;
      v12 = *(_DWORD*)v6;
      if (*(_DWORD*)v6 == 2) {
        return result;
      }
    }
    else {
      result = (*(__int64 (**)(__int64, _DWORD*))(*(_QWORD*)(a1 + 32306416) +
                                                  280LL))(a1, a2);
      *a2 = 1;
      v12 = *(_DWORD*)v6;
      if (*(_DWORD*)v6 == 2) {
        return result;
      }
    }
    if (v12 != 1 || *(_DWORD*)(v6 + 1876) != 2) {
      v13 = result;
      LODWORD(result) = CudaDriverRoutine_19adf0(a1, 0);
      if (v13 != 0 || (_DWORD)result == 0) {
        return v13;
      }
      else {
        return (unsigned int)result;
      }
    }
  }
  else {
    result = (*(__int64 (**)(__int64, __int64))(v6 + 1104))(a1, v6 + 1876);
    if ((_DWORD)result == 0) {
      *a2 = 1;
    }
  }
  return result;
}

__int64 cuda_driver_1c61b0(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 result;
  __int64 (*v6)(__int64, __int64, _QWORD, unsigned int*);
  unsigned int v7;
  int v8;
  unsigned int v9;

  v4 = a1 + 23375624;
  if (((*(__int64 (**)(void))(*(_QWORD*)(a1 + 32306416) + 336LL))() & 1) == 0) {
    v6 = *(__int64 (**)(__int64, __int64, _QWORD, unsigned int*))(v4 + 984);
    v7 = 0;
    result = v6(a1, 1, a2, &v7);
    if ((_DWORD)result != 0) {
      return result;
    }
    result = (*(__int64 (**)(__int64, __int64, _QWORD, int*))(
        *(_QWORD*)(a1 + 32306416) + 8LL))(a1, 1, v7, &v8);
    if ((_DWORD)result != 0) {
      return result;
    }
    v8 |= 0x80000000;
    result = (*(__int64 (**)(__int64, __int64, _QWORD, int*))(
        *(_QWORD*)(a1 + 32306416) + 24LL))(a1, 1, v7, &v8);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_9:
    __builtin_arm_dmb(0xDu);
    result = (*(__int64 (**)(__int64, _QWORD))v4)(a1, a2);
    if ((_DWORD)result == 0) {
      CudaDriverRoutine_19adf0(a1, 1);
      return 0;
    }
    return result;
  }
  result =
      (*(__int64 (**)(__int64, _QWORD, unsigned int*))(v4 + 184))(a1, a2, &v9);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
        *(_QWORD*)(a1 + 32306416) + 224LL))(*(_QWORD*)(a1 + 24), v9, 1);
  }
  if ((_DWORD)result == 0) {
    goto LABEL_9;
  }
  return result;
}

__int64 cuda_driver_1c62e0(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 (*v5)(__int64, _QWORD, _QWORD);
  __int64 result;
  unsigned int v7;

  v4 = a1 + 23376088;
  if (*(_DWORD*)(a1 + 1084) != 0) {
    (*(void (**)(__int64))(a1 + 23376120))(a1);
  }
  v5 = *(__int64 (**)(__int64, _QWORD, _QWORD))(v4 + 16);
  *(_DWORD*)(a1 + 1084) = 0;
  result = v5(a1, 0, a2);
  if ((_DWORD)result == 0) {
    (*(void (**)(__int64, _QWORD))v4)(a1, a2);
    __builtin_arm_dmb(0xEu);
    v7 = CudaDriverRoutine_1cb3b0(a1, a2);
    LODWORD(result) = CudaDriverRoutine_19adf0(a1, 0);
    if (v7 != 0 || (_DWORD)result == 0) {
      return v7;
    }
    else {
      return (unsigned int)result;
    }
  }
  return result;
}

__int64 cuda_driver_1c6c40(__int64 a1, unsigned int a2, __int64* a3)
{
  unsigned int* v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;

  v6 = (unsigned int*)(a1 + 23372884);
  if (*(_DWORD*)(a1 + 23375256) == 1) {
    v8 = a1 + 91280LL * a2;
    *a3 = *(_QWORD*)(v8 + 1176);
    a3[1] = *(_QWORD*)(v8 + 1184);
    return 0;
  }
  v9 = *(_QWORD*)(a1 + 24);
  if (v9 != 0 && (v10 = a1, CudaDriverRoutine_1a0620(v9))) {
    v11 = *(_QWORD*)(v10 + 24);
    v12 = v10;
    result = 4;
    v22 = 0;
    v13 = *(_QWORD*)(v11 + 608);
    if (a3 != nullptr && v13 != 0) {
      *a3 = 0;
      a3[1] = 0;
      if (*v6 != 0) {
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v17 = v12 + 91280LL * a2 + 1104;
        while (1) {
          if (v14 <= 0x3F) {
            if (((*(_QWORD*)(v17 + 40) >> v14) & 1) == 0) {
              goto LABEL_9;
            }
          }
          else {
            v18 = 64 - v14;
            if ((unsigned int)v14 > 0x40) {
              v18 = 0;
            }
            if (((*(_QWORD*)(v17 + 48) >> v14 << v18) & 1) == 0) {
              goto LABEL_9;
            }
          }
          result = (*(__int64 (**)(__int64, _QWORD, _QWORD, int*))(v6 + 973))(
              v13, a2, (unsigned int)v14, &v22);
          if ((_DWORD)result != 0) {
            return result;
          }
          v19 = 1LL << v14;
          v20 = (1LL << v14) | v15;
          if (v14 > 0x3F) {
            v19 = 0;
          }
          if (v14 < 0x40) {
            v20 = v15;
          }
          v21 = v16 | v19;
          if ((v22 & 0x7000000) == 0x1000000) {
            v16 = v21;
            v15 = v20;
          }
        LABEL_9:
          if (++v14 >= *v6) {
            goto LABEL_26;
          }
        }
      }
      v16 = 0;
      v15 = 0;
    LABEL_26:
      *a3 = v16;
      a3[1] = v15;
      return 0;
    }
  }
  else {
    result = 0;
    *a3 = 0;
    a3[1] = 0;
  }
  return result;
}

__int64 cuda_driver_1c95e0(_DWORD* a1)
{
  __int64 v2;
  int v3;
  __int64 result;
  __int64 v5;
  unsigned int* v6;
  _DWORD* v7;
  int v8;
  _DWORD* v9;
  unsigned int v10;
  __int64 v11;
  _DWORD v13[1829];

  v2 = *((_QWORD*)CudaDriverData_1422118 + a1[272] + 35);
  memset_plt(v13, 0, 7316);
  memset_plt(a1 + 5843230, 255, 2336);
  v3 = (*(__int64 (**)(__int64, _DWORD*))(v2 + 21256))(v2, v13);
  result = 10;
  if (v3 == 0) {
    v5 = v13[0];
    if (v13[0] <= 0xFFu) {
      if (v13[0] != 0) {
        v6 = a1 + 10;
        v7 = v13;
        v8 = 0;
        v9 = a1 + 5843302;
        while (v9[256] == -1) {
          v10 = *((unsigned __int8*)v7 + 80);
          v11 = *((unsigned __int8*)v7 + 1104);
          if (v10 > 7 || (unsigned int)v11 > 8) {
            break;
          }
          v9[256] = v10;
          *v9++ = v11;
          --v5;
          ++v7;
          a1[9 * v10 + 5843230 + v11] = v8;
          *v6++ = ((_DWORD)v11 << 11) | (v10 << 15);
          ++v8;
          ++a1[5843220];
          if (v5 == 0) {
            return 0;
          }
        }
        return 10;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

__int64 cuda_driver_1cd8c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  unsigned __int64 v3;
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  unsigned int v18;
  _BYTE v19[4];
  __int128 v20;
  __int64 v21;
  int v22;

  v19[0] = 0;
  *(_OWORD*)(a1 + 15992) = CudaDriverData_1115f30;
  result = CudaDriverRoutine_9ab30(*(_QWORD*)(a1 + 64), v19);
  if ((_DWORD)result != 0) {
    return result;
  }
  v3 = 512;
  if (v19[0] == 0) {
    v3 = 1024;
  }
  *(_QWORD*)(a1 + 16008) = v3;
  v4 = CudaDriverData_1422118;
  if (*((_BYTE*)&CudaDriverRoutine_7458 + (_QWORD)CudaDriverData_1422118) !=
      0) {
    v5 = vcvtmd_u64_f64(*(double*)((char*)&CudaDriverRoutine_7460 +
                                   (_QWORD)CudaDriverData_1422118) *
                        0x1.0000000000000p+5);
    if (v3 >= v5) {
      v3 = v5;
    }
    *(_QWORD*)(a1 + 16008) = v3;
  }
  *(_QWORD*)(a1 + 16048) = 0;
  *(_DWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 16016) = 0x800000;
  v6 = *(_QWORD*)(a1 + 64);
  *(_OWORD*)(a1 + 16032) = CudaDriverData_1115da0;
  LODWORD(v6) = (*(_DWORD*)(v6 + 3756) * *(_DWORD*)(v6 + 3732)) << 10;
  if ((unsigned int)v6 <= 0x100000) {
    v6 = 0x100000;
  }
  else {
    v6 = (unsigned int)v6;
  }
  *(_QWORD*)(a1 + 16024) = v6;
  *(_BYTE*)(a1 + 16316) |= 1u;
  v7 = CudaDriverStub_12e330(2088);
  if (v7 == 0) {
    result = 2;
  LABEL_20:
    v16 = *(__int64**)(a1 + 16104);
    if (v16 == nullptr) {
      return result;
    }
    goto LABEL_23;
  }
  v8 = v7;
  memset_plt(v7, 0, 2088);
  v9 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 16104) = v8;
  v10 = CudaDriverStub_12e330(*(unsigned int*)(v9 + 3808));
  *(_QWORD*)v8 = v10;
  if (v10 != 0) {
    v11 = *(_DWORD**)(a1 + 64);
    v21 = 0;
    v12 = (unsigned int)(16 * v11[939] * v11[981] * v11[933]);
    CudaDriverRoutine_ee010((unsigned __int64*)&v20, 0);
    *(_QWORD*)&v20 = v20 & 0xFFFFFFF8FFFFFFFFLL | 0x100000000LL;
    result = CudaDriverRoutine_ee030(a1, v12, &v21, &v20);
    if ((_DWORD)result == 0) {
      *(_QWORD*)(v8 + 16) = v21;
      *(_QWORD*)(v8 + 24) = v12;
      *(_DWORD*)(v8 + 8) = 3;
      v13 = *(_QWORD*)(a1 + 64);
      v14 = *(_DWORD*)(v13 + 3724);
      *(_DWORD*)(a1 + 160) = v14;
      *(_DWORD*)(a1 + 164) = *(_DWORD*)(v13 + 3736) * v14;
      if (*((_BYTE*)&CudaDriverRoutine_43c8 + (_QWORD)v4) != 0) {
        LODWORD(v20) = 4294824;
        LODWORD(v21) = -1073741824;
        v22 = -1073741824;
        v15 = CudaDriverRoutine_98340(a1);
        if ((unsigned int)CudaDriverRoutine_110820(v15, 2, 1, (__int64)&v20,
                                                   (__int64)&v21, (__int64)&v22,
                                                   0) != 0) {
          puts_plt(
              "cuiPriRegWriteMasked32 failed to disable membar optimization");
        }
      }
      return 0;
    }
    goto LABEL_20;
  }
  result = 2;
  v16 = *(__int64**)(a1 + 16104);
  if (v16 == nullptr) {
    return result;
  }
LABEL_23:
  v17 = v16[2];
  v18 = result;
  if (v17 != 0) {
    CudaDriverRoutine_ee2a0(a1, v17);
  }
  if (*v16 != 0) {
    CudaDriverRoutine_12e340(*v16);
  }
  memset_plt(v16, 0, 2088);
  CudaDriverRoutine_12e340((__int64)v16);
  *(_QWORD*)(a1 + 16104) = 0;
  return v18;
}

__int64 cuda_driver_1cdc50(int* a1)
{
  return cuda_driver_194b20(
      a1, *((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118));
}

double cuda_driver_1cdd00(__int64 a1, __int64 a2, char a3)
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
  *(_DWORD*)(a1 + 4) = BYTE4(v5);
  *(_QWORD*)(a1 + 12) = 0x200180C000000000LL;
  return 0x1.180c000000000p-511;
}

double cuda_driver_1cfb30(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  __int64 v9;
  __int64 v10;
  __int16 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  unsigned __int64 v15;
  double result;
  __int64 v17;
  struct {
    int v18;
    char gap12_[4];
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    char gap56_[8];
    __int16 v24;
    char gap66_[6];
    __int64* v25;
    char gap80_[8];
    char v26;
    char gap89_[7];
    __int64 v27;
  } v18_;
  __int64 v28;

  v5 = *(_QWORD*)(a3 + 32);
  v6 = *(_QWORD*)(a5 + 8);
  v9 = *(_QWORD*)(a5 + 136);
  v10 = *(_QWORD*)(v5 + 24);
  v28 = *a1;
  v11 = *(_WORD*)(*(_QWORD*)(v10 + 64) + 17281LL);
  __asm__ volatile("" ::"r"(v11));
  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_1432188) !=
      0) {
    v18_.v19 = v10;
    v18_.v20 = v5;
    v18_.v21 = a3;
    v18_.v22 = v6;
    v12 = *(_QWORD*)(v9 + 8);
    v18_.v18 = 104;
    v18_.v26 = 0;
    v18_.v24 = v11;
    v18_.v27 = a5;
    v18_.v23 = v12;
    v18_.v25 = &v28;
    cuda_driver_20b420(0xBu, 2u, (__int64)&v18_.v18);
  }
  if (CudaDriverStub_b9300(a3)) {
    v13 = CudaDriverRoutine_bbdf0(a3);
    v14 = v28;
    if (v13) {
      v15 = (unsigned __int64)(*(_QWORD*)(v9 + 8) + 512LL) >> 8;
      *(_QWORD*)(v28 + 8) = 0x3200120AFLL;
      *(_DWORD*)v14 = 536944813;
      *(_DWORD*)(v14 + 4) = v15;
      v14 += 16;
    }
  }
  else {
    v14 = v28;
  }
  v17 = *(_QWORD*)(v9 + 8) >> 8;
  *(_DWORD*)v14 = 536944813;
  *(_DWORD*)(v14 + 4) = v17;
  *(_QWORD*)(v14 + 8) = 0x3200120AFLL;
  *a1 = v14 + 16;
  *(_QWORD*)&result = 0x3200120AFLL;
  return result;
}

int8x8_t cuda_driver_1cfc80(__int64 a1, int8x8_t* a2, __int64 a3)
{
  unsigned __int64 v3;
  __int64 v4;
  unsigned int v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int i;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int8x8_t result;

  v3 = *(unsigned int*)(a3 + 24);
  if ((_DWORD)v3 != 0) {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    while (1) {
      v7 = *(_QWORD*)(a1 + 64) + 2 * v4;
      v8 = *(unsigned __int16*)(v7 + 19864);
      if (*(_WORD*)(v7 + 19864) == 0) {
        goto LABEL_4;
      }
      v9 = 0;
      do {
        v10 = v9;
        v11 = v8 & 1;
        v12 = v8;
        v8 >>= 1;
        v9 = v10 + v11;
      } while (v12 > 1);
      if (v9 == 0) {
        goto LABEL_4;
      }
      v13 = *(unsigned __int16*)(a3 + 32 + 2 * v4);
      for (i = v9 & 7; i != 0; --i) {
        if ((v13 & 1) != 0) {
          LANES64(*(a2)).n64_u32[v5] |= 1 << v6;
        }
        v15 = v6 + 1;
        --v9;
        v13 >>= 1;
        if (v6 == 31) {
          v6 = 0;
        }
        else {
          ++v6;
        }
        if (v15 == 32) {
          v5 = 1;
        }
      }
      if (v10 + v12 - 1 >= 7) {
        break;
      }
    LABEL_3:
      v3 = *(unsigned int*)(a3 + 24);
    LABEL_4:
      if (++v4 >= v3) {
        goto LABEL_54;
      }
    }
    while (1) {
      if ((v13 & 1) != 0) {
        LANES64(*(a2)).n64_u32[v5] |= 1 << v6;
        v16 = v6 + 1;
        if (v16 != 32) {
        LABEL_23:
          if ((v13 & 2) == 0) {
            goto LABEL_24;
          }
          goto LABEL_40;
        }
      }
      else {
        v16 = v6 + 1;
        if (v16 != 32) {
          goto LABEL_23;
        }
      }
      v5 = 1;
      v16 = 0;
      if ((v13 & 2) == 0) {
      LABEL_24:
        v17 = v16 + 1;
        if (v17 != 32) {
          goto LABEL_25;
        }
        goto LABEL_41;
      }
    LABEL_40:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v16;
      v17 = v16 + 1;
      if (v17 != 32) {
      LABEL_25:
        if ((v13 & 4) == 0) {
          goto LABEL_26;
        }
        goto LABEL_42;
      }
    LABEL_41:
      v5 = 1;
      v17 = 0;
      if ((v13 & 4) == 0) {
      LABEL_26:
        v18 = v17 + 1;
        if (v18 != 32) {
          goto LABEL_27;
        }
        goto LABEL_43;
      }
    LABEL_42:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v17;
      v18 = v17 + 1;
      if (v18 != 32) {
      LABEL_27:
        if ((v13 & 8) == 0) {
          goto LABEL_28;
        }
        goto LABEL_44;
      }
    LABEL_43:
      v5 = 1;
      v18 = 0;
      if ((v13 & 8) == 0) {
      LABEL_28:
        v19 = v18 + 1;
        if (v19 != 32) {
          goto LABEL_29;
        }
        goto LABEL_45;
      }
    LABEL_44:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v18;
      v19 = v18 + 1;
      if (v19 != 32) {
      LABEL_29:
        if ((v13 & 0x10) == 0) {
          goto LABEL_30;
        }
        goto LABEL_46;
      }
    LABEL_45:
      v5 = 1;
      v19 = 0;
      if ((v13 & 0x10) == 0) {
      LABEL_30:
        v20 = v19 + 1;
        if (v20 != 32) {
          goto LABEL_31;
        }
        goto LABEL_47;
      }
    LABEL_46:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v19;
      v20 = v19 + 1;
      if (v20 != 32) {
      LABEL_31:
        if ((v13 & 0x20) == 0) {
          goto LABEL_32;
        }
        goto LABEL_48;
      }
    LABEL_47:
      v5 = 1;
      v20 = 0;
      if ((v13 & 0x20) == 0) {
      LABEL_32:
        v21 = v20 + 1;
        if (v21 != 32) {
          goto LABEL_33;
        }
        goto LABEL_49;
      }
    LABEL_48:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v20;
      v21 = v20 + 1;
      if (v21 != 32) {
      LABEL_33:
        if ((v13 & 0x40) == 0) {
          goto LABEL_34;
        }
        goto LABEL_50;
      }
    LABEL_49:
      v5 = 1;
      v21 = 0;
      if ((v13 & 0x40) == 0) {
      LABEL_34:
        v22 = v21 + 1;
        if (v22 != 32) {
          goto LABEL_35;
        }
        goto LABEL_51;
      }
    LABEL_50:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v21;
      v22 = v21 + 1;
      if (v22 != 32) {
      LABEL_35:
        if ((v13 & 0x80) == 0) {
          goto LABEL_36;
        }
        goto LABEL_52;
      }
    LABEL_51:
      v5 = 1;
      v22 = 0;
      if ((v13 & 0x80) == 0) {
      LABEL_36:
        v6 = v22 + 1;
        if (v6 == 32) {
          goto LABEL_53;
        }
        goto LABEL_20;
      }
    LABEL_52:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v22;
      v6 = v22 + 1;
      if (v6 == 32) {
      LABEL_53:
        v5 = 1;
        v6 = 0;
      }
    LABEL_20:
      v13 >>= 8;
      v9 -= 8;
      if (v9 == 0) {
        goto LABEL_3;
      }
    }
  }
LABEL_54:
  LANES64(result).n64_u64[0] =
      LANES64_OF(vmvn_s8(COERCE_AS(int8x8_t, LANES64(*(a2)).n64_u64[0])))
          .n64_u64[0];
  LANES64(*(a2)).n64_u64[0] = LANES64(result).n64_u64[0];
  return result;
}

__int64 cuda_driver_1cff50(__int64* a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5;
  __int64 v6;
  __int16 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  char v19;
  __int64 v20;
  __int64 result;
  struct {
    int v22;
    char gap4_[4];
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int16 v28;
    char v29;
    char v30;
    char gap52_[4];
    __int64* v31;
    __int64 v32;
    __int64 v33;
    char gap80_[8];
    bool v34;
    char gap89_[7];
    unsigned __int8* v35;
    bool v36;
    char gap105_[7];
    char v37;
    char gap113_[7];
    char v38;
    char gap121_[7];
    char v39;
    char gap129_[7];
    int v40;
    unsigned int v41;
    __int64 v42;
    bool v43;
    char gap153_[7];
    char v44;
  } v22_;
  unsigned __int8 v45;

  v5 = *(_QWORD*)(a2 + 1200);
  v6 = *(_QWORD*)(a2 + 192);
  v10 = *(_WORD*)(*(_QWORD*)(v5 + 64) + 17281LL);
  v11 = CudaDriverRoutine_98340(v5);
  v12 = *(_QWORD*)(a2 + 32);
  v13 = *(_QWORD*)(a2 + 752);
  v14 = true;
  v15 = v11;
  v22_.v22 = 168;
  v45 = 1;
  v16 = *(_QWORD*)(v12 + 32);
  v22_.v25 = v12;
  v22_.v26 = v6;
  v22_.v23 = v11;
  v22_.v24 = v16;
  LOBYTE(v16) = *(_BYTE*)(a2 + 380);
  v17 = *(_QWORD*)(v13 + 8);
  v22_.v29 = 0;
  v22_.v28 = v10;
  v22_.v31 = a1;
  v22_.v32 = a2;
  v22_.v33 = a2 + 184;
  v22_.v30 = v16;
  v22_.v27 = v17;
  v22_.v34 = *((_BYTE*)((_UNKNOWN*)0x1164LL) + (_QWORD)CudaDriverData_1422118 +
               2) == 0;
  v22_.v35 = &v45;
  if (*(_BYTE*)(a2 + 673) == 0) {
    v14 = *(_BYTE*)(a2 + 1412) != 0;
  }
  v22_.v36 = v14;
  v18 = *(_DWORD*)(a3 + 32);
  v22_.v37 = *(_BYTE*)(a2 + 672);
  v19 = *(_BYTE*)(a2 + 390);
  v22_.v39 = a4;
  v22_.v42 = 0;
  if (v18 >= 0xC) {
    v18 = 12;
  }
  v22_.v38 = v19;
  v22_.v40 = *(_DWORD*)(a3 + 24);
  v22_.v41 = v18;
  v20 = *(_QWORD*)(a2 + 24);
  v22_.v44 = *(_BYTE*)(a2 + 389);
  v22_.v43 = a2 == *(_QWORD*)(v20 + 448);
  if (*(_BYTE*)(v20 + 415) != 0 || *(_BYTE*)(v20 + 416) != 0) {
    v22_.v42 = **(_QWORD**)(v20 + 424);
  }
  result = cuda_driver_20b420(0xBu, 3u, (__int64)&v22_.v22);
  *(_BYTE*)(*(_QWORD*)(a2 + 1240) + 4LL) =
      (*(unsigned __int8*)(*(_QWORD*)(a2 + 1240) + 4LL) | v45) != 0;
  if (*(_BYTE*)(a2 + 382) != 0 && *(_BYTE*)(a2 + 380) == 0) {
    result = (*(__int64 (**)(__int64, _QWORD, __int64))(*(_QWORD*)(v15 + 64) +
                                                        18672LL))(
        *a1, *(_QWORD*)(*(_QWORD*)(a2 + 752) + 8LL), 1);
    *a1 = result;
  }
  return result;
}

__int64 cuda_driver_unplaced_9_1d0980(__int64* a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      int a7)
{
  __int64* v8;
  _DWORD* v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  _DWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  bool v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  int v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  int v49;
  __int64 v50;
  char v51;
  unsigned __int64 v52;
  char v53;
  unsigned __int64 v54;
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
  unsigned __int64 v65;
  char v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned int v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  char v83;
  char v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  int v114;
  int v115;
  unsigned int v116;
  unsigned int v117;
  unsigned int v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  unsigned int v121;
  unsigned int v122;
  __int64 v123;
  __int64 v124;
  __int64* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  char v131;
  char v132;
  __int64 v133;
  __int64 v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  char v148;
  __int64 v149;
  unsigned __int64 v150;
  char v151;
  unsigned __int64 v153;
  __int64 v154;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  __int64 v162;
  struct {
    __int64 v163;
    __int64 v164;
    char gap232_[160];
    unsigned __int64 v165;
    unsigned __int64 v166;
    unsigned __int64 v167;
    int v168;
    char gap420_[4];
    __int64 v169;
    char gap432_[160];
    unsigned __int64 v170;
    unsigned __int64 v171;
    unsigned __int64 v172;
    unsigned int v173;
    char gap620_[4];
    unsigned __int64 v174;
    unsigned __int64 v175;
    char gap640_[48];
  } v163_;
  struct {
    __int64 v176[22];
    unsigned __int64 v177;
    char gap872_[192];
    unsigned __int64 v178;
    char gap1072_[16];
    __int64 v179;
    char gap1096_[64];
  } v176_;

  v8 = a1;
  if (*(_DWORD*)(a6 + 404) == 0 &&
      (*(_DWORD*)a6 == 0 ||
       (unsigned __int64)CudaDriverRoutine_f8f00((_DWORD*)a6) >> 31 == 0)) {
    v9 = (_DWORD*)(a6 + 200);
    if (*(_DWORD*)(a6 + 200) == 0) {
      v10 = true;
    LABEL_57:
      memcpy_plt((__int64)&v163_.v163, a6, 0x1D8u);
      v43 = *(_DWORD*)a6;
      if (!CudaDriverRoutine_9abe0(*(_QWORD*)(a2 + 64)) ||
          *(_BYTE*)(a6 + 459) != 0 ||
          (v43 != 0 || *(_DWORD*)(*(_QWORD*)(a6 + 8) + 112LL) <= 0x10000u) &&
              (!v10 || *(_DWORD*)(*(_QWORD*)(a6 + 208) + 112LL) <= 0x10000u)) {
        v44 = 1;
        if (*(_DWORD*)a6 == 0) {
        LABEL_67:
          v47 = *(_QWORD*)(a6 + 8);
          v48 = *(_DWORD*)(v47 + 44);
          v49 = *(_DWORD*)(v47 + 48);
          v50 = *(unsigned int*)(v47 + 52);
          v51 = v48 + *(_DWORD*)(v47 + 40);
          LOBYTE(v48) = v48 + 3;
          v52 = 1LL << v49;
          v53 = v51 + v49;
          v54 = 1LL << v48;
          v55 = 512LL << v53;
          v56 = *(_DWORD*)(v47 + 56);
          v57 = (0x800000uLL >> v53) / (unsigned int)v50;
          v58 = v55 * v50;
          v142 = v57 << v48;
          if ((unsigned int)v57 < v56) {
            v59 = 1;
          }
          else {
            v59 = (unsigned int)v57 / v56;
          }
          v138 = v59 << v49;
          if (CudaDriverRoutine_86fe0(v47)) {
            v134 = *(_QWORD*)(v47 + 136);
            v146 = v58;
            if (*v9 == 0) {
              goto LABEL_72;
            }
          LABEL_80:
            v141 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200));
            if (CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200)) != 0) {
              v77 = CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200));
            }
            else {
              v77 = 1;
            }
            v78 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) * v77;
            v65 = 1;
            v74 = -1;
            v67 = 1;
            v133 = v78;
            v137 = -1;
            v75 = a2;
            v76 = *(_QWORD*)(a6 + 416);
            if (v76 == 0) {
              return 0;
            }
            goto LABEL_84;
          }
          v134 = v58 * *(unsigned int*)(v47 + 56);
          v146 = v58;
          if (*v9 != 0) {
            goto LABEL_80;
          }
        LABEL_72:
          v60 = *(_QWORD*)(a6 + 208);
          v61 = *(_DWORD*)(v60 + 44);
          v62 = *(_DWORD*)(v60 + 48);
          v63 = *(unsigned int*)(v60 + 52);
          v64 = v61 + *(_DWORD*)(v60 + 40);
          LOBYTE(v61) = v61 + 3;
          v65 = 1LL << v62;
          v66 = v64 + v62;
          v67 = 1LL << v61;
          v68 = 512LL << v66;
          v69 = *(_DWORD*)(v60 + 56);
          v70 = (0x800000uLL >> v66) / (unsigned int)v63;
          v71 = v68 * v63;
          v72 = v70 << v61;
          if ((unsigned int)v70 < v69) {
            v73 = 1;
          }
          else {
            v73 = (unsigned int)v70 / v69;
          }
          v137 = v73 << v62;
          v141 = v68 * v63;
          if (CudaDriverRoutine_86fe0(v60)) {
            v133 = *(_QWORD*)(v60 + 136);
            v74 = v72;
            v75 = a2;
            v76 = *(_QWORD*)(a6 + 416);
            if (v76 == 0) {
              return 0;
            }
          }
          else {
            v133 = v71 * *(unsigned int*)(v60 + 56);
            v74 = v72;
            v75 = a2;
            v76 = *(_QWORD*)(a6 + 416);
            if (v76 == 0) {
              return 0;
            }
          }
        LABEL_84:
          v79 = *(_QWORD*)(a6 + 408);
          if (v79 == 0) {
            return 0;
          }
          v80 = v54 - 1;
          v81 = v67 - 1;
          v82 = 0;
          v131 = __clz(__rbit64(v65));
          v132 = __clz(__rbit64(v52));
          v135 = v65 - 1;
          v136 = v52 - 1;
          v83 = __clz(__rbit64(v54));
          v84 = __clz(__rbit64(v67));
          v148 = v83;
          v149 = v74;
          v150 = v67 - 1;
          v151 = v84;
          if ((v44 & 1) != 0) {
            do {
              v85 = *(_QWORD*)(a6 + 192) + v82;
              v86 = *(_QWORD*)(a6 + 392) + v82;
              v163_.v167 = v85 & v136;
              v87 = v138 - (v85 & v136);
              v163_.v172 = v86 & v135;
              if (v87 >= v137 - (v86 & v135)) {
                v87 = v137 - (v86 & v135);
              }
              if (v76 - v82 < v87) {
                v87 = v76 - v82;
              }
              v163_.v175 = v87;
              if (v79 != 0) {
                v88 = 0;
                v89 = v80;
                v161 = v82;
                v90 = a5 + (v85 >> v132) * v134;
                v91 = a4 + (v86 >> v131) * v133;
                do {
                  v92 = v79 - v88;
                  v93 = *(_QWORD*)(a6 + 184) + v88;
                  v94 = *(_QWORD*)(a6 + 384) + v88;
                  v95 = v90 + (v93 >> v148) * v146;
                  v163_.v166 = v93 & v89;
                  v96 = v142 - (v93 & v89);
                  v163_.v171 = v94 & v150;
                  if (v96 >= v149 - (v94 & v150)) {
                    v96 = v149 - (v94 & v150);
                  }
                  if (v92 >= v96) {
                    v92 = v96;
                  }
                  v163_.v174 = v92;
                  CudaDriverRoutine_1d1940((_DWORD**)a1, v75, a3,
                                           v91 + (v94 >> v84) * v141, v95,
                                           (int*)&v163_.v163, a7, 0);
                  v75 = a2;
                  v88 += v163_.v174;
                  v79 = *(_QWORD*)(a6 + 408);
                } while (v88 < v79);
                v87 = v163_.v175;
                v76 = *(_QWORD*)(a6 + 416);
                v82 = v161;
                v80 = v89;
              }
              v82 += v87;
            } while (v82 < v76);
            return 0;
          }
          v143 = v54 - 1;
          while (1) {
            v98 = *(_QWORD*)(a6 + 192) + v82;
            v99 = *(_QWORD*)(a6 + 392) + v82;
            v163_.v167 = v98 & v136;
            v97 = v138 - (v98 & v136);
            v163_.v172 = v99 & v135;
            if (v97 >= v137 - (v99 & v135)) {
              v97 = v137 - (v99 & v135);
            }
            if (v76 - v82 < v97) {
              v97 = v76 - v82;
            }
            v163_.v175 = v97;
            if (v79 != 0) {
              break;
            }
          LABEL_102:
            v82 += v97;
            if (v82 >= v76) {
              return 0;
            }
          }
          v100 = v146;
          v101 = 0;
          v102 = v141;
          v103 = v142;
          v130 = v82;
          v145 = a5 + (v98 >> v132) * v134;
          v144 = a4 + (v99 >> v131) * v133;
          while (1) {
            v109 = v163_.v163;
            v110 = v79 - v101;
            v111 = *(_QWORD*)(a6 + 184) + v101;
            v112 = *(_QWORD*)(a6 + 384) + v101;
            v163_.v166 = v111 & v80;
            v163_.v171 = v112 & v81;
            v113 = v103 - (v111 & v80);
            if (v113 >= v74 - (v112 & v81)) {
              v113 = v74 - (v112 & v81);
            }
            if (v110 >= v113) {
              v110 = v113;
            }
            v163_.v174 = v110;
            if ((_DWORD)v163_.v163 != 0) {
              v114 = 0;
            }
            else {
              v114 = v163_.v165 % *(unsigned int*)(v163_.v164 + 108);
            }
            v115 = v163_.v168;
            v154 = v145 + (v111 >> v83) * v100;
            v162 = v144 + (v112 >> v84) * v102;
            if (v163_.v168 == 0 && (_DWORD)v163_.v163 == 0 &&
                v114 != v163_.v170 % *(unsigned int*)(v163_.v169 + 108)) {
              CudaDriverRoutine_1d2240((__int64)a1, a2, a3, v162, v154,
                                       &v163_.v163, a7);
              goto LABEL_113;
            }
            if ((_DWORD)v163_.v163 != 0) {
              v116 = 0;
              v117 = 0;
              v118 = 0;
              LODWORD(v119) = 0;
              if (v163_.v168 == 0) {
                goto LABEL_138;
              }
            }
            else {
              v119 = *(unsigned int*)(v163_.v164 + 108);
              v120 = v163_.v165 % v119;
              if (v163_.v165 % v119 != 0) {
                if ((int)v119 - (int)v120 >= v163_.v173) {
                  v116 = v163_.v173;
                }
                else {
                  v116 = v119 - v120;
                }
                v117 = (v163_.v173 - v116) / (unsigned int)v119 * v119;
                v118 = (v163_.v173 - v116) % (unsigned int)v119;
                if (v163_.v168 == 0) {
                LABEL_138:
                  v119 = *(unsigned int*)(v163_.v169 + 108);
                  if (v163_.v170 % v119 != 0) {
                    v121 = v163_.v173;
                    if ((unsigned int)v119 -
                            (unsigned int)(v163_.v170 % v119) >=
                        v163_.v173) {
                      v116 = v163_.v173;
                    }
                    else {
                      v116 = v119 - v163_.v170 % v119;
                    }
                  }
                  else {
                    v121 = v163_.v173;
                    v116 = 0;
                  }
                  v122 = v121 - v116;
                  v117 = v122 / (unsigned int)v119 * v119;
                  v118 = v122 % (unsigned int)v119;
                  memcpy_plt((__int64)v176_.v176, (__int64)&v163_.v163, 0x1D8u);
                  goto LABEL_125;
                }
              }
              else {
                v116 = 0;
                v117 = v163_.v173 / (unsigned int)v119 * v119;
                v118 = v163_.v173 % (unsigned int)v119;
                if (v163_.v168 == 0) {
                  goto LABEL_138;
                }
              }
            }
            memcpy_plt((__int64)v176_.v176, (__int64)&v163_.v163, 0x1D8u);
            if ((_DWORD)v119 == 0) {
              if (v116 != 0) {
                if (v109 == 0) {
                  v176_.v177 = v163_.v165;
                }
                v176_.v179 = v116;
                CudaDriverRoutine_1d2240((__int64)a1, a2, a3, v162, v154,
                                         v176_.v176, a7);
                v116 = v176_.v179;
              }
              if (v117 != 0) {
                if (v109 != 0) {
                  v123 = v154 + v116;
                }
                else {
                  v123 = v154;
                  v176_.v177 = v163_.v165 + v116;
                }
                v176_.v179 = v117;
                CudaDriverRoutine_1d2240((__int64)a1, a2, a3, v162 + v116, v123,
                                         v176_.v176, a7);
                v116 += v176_.v179;
                v81 = v150;
                v84 = v151;
                if (v118 == 0) {
                  goto LABEL_112;
                }
              }
              else {
                v123 = v154;
                v81 = v150;
                v84 = v151;
                if (v118 == 0) {
                  goto LABEL_112;
                }
              }
              if (v109 != 0) {
                v123 = v154 + v116;
              }
              else {
                v176_.v177 = v163_.v165 + v116;
              }
              v104 = (__int64)a1;
              v105 = a2;
              v106 = a3;
              v107 = v162 + v116;
              v108 = v123;
              v176_.v179 = v118;
              goto LABEL_111;
            }
          LABEL_125:
            if (v109 == 0) {
              if (v116 != 0) {
                v176_.v177 = v163_.v165;
                if (v115 != 0) {
                  v176_.v179 = v116;
                  if (v116 % (unsigned int)v119 != 0) {
                    goto LABEL_145;
                  }
                LABEL_179:
                  CudaDriverRoutine_1d1940((_DWORD**)a1, a2, a3, v162, v154,
                                           (int*)v176_.v176, a7, 2);
                }
                else {
                  v176_.v178 = v163_.v170;
                  v176_.v179 = v116;
                  if (v116 % (unsigned int)v119 == 0) {
                    goto LABEL_179;
                  }
                LABEL_145:
                  CudaDriverRoutine_1d2240((__int64)a1, a2, a3, v162, v154,
                                           v176_.v176, a7);
                }
                v116 = v176_.v179;
              }
              if (v117 != 0) {
                v176_.v177 = v163_.v165 + v116;
                if (v115 != 0) {
                  v129 = v162 + v116;
                  v176_.v179 = v117;
                  if (v117 % (unsigned int)v119 != 0) {
                  LABEL_184:
                    CudaDriverRoutine_1d2240((__int64)a1, a2, a3, v129, v154,
                                             v176_.v176, a7);
                    v81 = v150;
                    v84 = v151;
                    v116 += v176_.v179;
                    if (v118 == 0) {
                      goto LABEL_112;
                    }
                    goto LABEL_190;
                  }
                }
                else {
                  v129 = v162;
                  v176_.v178 = v163_.v170 + v116;
                  v176_.v179 = v117;
                  if (v117 % (unsigned int)v119 != 0) {
                    goto LABEL_184;
                  }
                }
                CudaDriverRoutine_1d1940((_DWORD**)a1, a2, a3, v129, v154,
                                         (int*)v176_.v176, a7, 2);
                v81 = v150;
                v84 = v151;
                v116 += v176_.v179;
                if (v118 == 0) {
                  goto LABEL_112;
                }
                goto LABEL_190;
              }
              v129 = v162;
              v81 = v150;
              v84 = v151;
              if (v118 == 0) {
                goto LABEL_112;
              }
            LABEL_190:
              v176_.v177 = v163_.v165 + v116;
              if (v115 != 0) {
                v129 = v162 + v116;
                v176_.v179 = v118;
                if (v118 % (unsigned int)v119 == 0) {
                  goto LABEL_194;
                }
              }
              else {
                v176_.v178 = v163_.v170 + v116;
                v176_.v179 = v118;
                if (v118 % (unsigned int)v119 == 0) {
                LABEL_194:
                  v125 = a1;
                  v124 = a2;
                  v127 = a3;
                  v128 = v154;
                  v126 = v129;
                  goto LABEL_207;
                }
              }
              v104 = (__int64)a1;
              v105 = a2;
              v106 = a3;
              v108 = v154;
              v107 = v129;
              goto LABEL_111;
            }
            if (v115 != 0) {
              if (v116 != 0) {
                v176_.v179 = v116;
                if (v116 % (unsigned int)v119 != 0) {
                  CudaDriverRoutine_1d2240((__int64)a1, a2, a3, v162, v154,
                                           v176_.v176, a7);
                }
                else {
                  CudaDriverRoutine_1d1940((_DWORD**)a1, a2, a3, v162, v154,
                                           (int*)v176_.v176, a7, 2);
                }
                v116 = v176_.v179;
              }
              if (v117 != 0) {
                v176_.v179 = v117;
                if (v117 % (unsigned int)v119 != 0) {
                  CudaDriverRoutine_1d2240((__int64)a1, a2, a3, v162 + v116,
                                           v154 + v116, v176_.v176, a7);
                  v81 = v150;
                  v84 = v151;
                  v116 += v176_.v179;
                  if (v118 == 0) {
                    goto LABEL_112;
                  }
                }
                else {
                  CudaDriverRoutine_1d1940((_DWORD**)a1, a2, a3, v162 + v116,
                                           v154 + v116, (int*)v176_.v176, a7,
                                           2);
                  v81 = v150;
                  v84 = v151;
                  v116 += v176_.v179;
                  if (v118 == 0) {
                    goto LABEL_112;
                  }
                }
              }
              else {
                v81 = v150;
                v84 = v151;
                if (v118 == 0) {
                  goto LABEL_112;
                }
              }
              v176_.v179 = v118;
              if (v118 % (unsigned int)v119 == 0) {
                v124 = a2;
                v125 = a1;
                v126 = v162 + v116;
                v127 = a3;
                v128 = v154 + v116;
              LABEL_207:
                CudaDriverRoutine_1d1940((_DWORD**)v125, v124, v127, v126, v128,
                                         (int*)v176_.v176, a7, 2);
                goto LABEL_112;
              }
              v105 = a2;
              v104 = (__int64)a1;
              v107 = v162 + v116;
              v106 = a3;
              v108 = v154 + v116;
            }
            else {
              if (v116 != 0) {
                v176_.v179 = v116;
                v176_.v178 = v163_.v170;
                if (v116 % (unsigned int)v119 != 0) {
                  CudaDriverRoutine_1d2240((__int64)a1, a2, a3, v162, v154,
                                           v176_.v176, a7);
                }
                else {
                  CudaDriverRoutine_1d1940((_DWORD**)a1, a2, a3, v162, v154,
                                           (int*)v176_.v176, a7, 2);
                }
                v116 = v176_.v179;
              }
              if (v117 != 0) {
                v176_.v179 = v117;
                v176_.v178 = v163_.v170 + v116;
                if (v117 % (unsigned int)v119 != 0) {
                  CudaDriverRoutine_1d2240((__int64)a1, a2, a3, v162,
                                           v154 + v116, v176_.v176, a7);
                  v81 = v150;
                  v84 = v151;
                  v116 += v176_.v179;
                  if (v118 == 0) {
                    goto LABEL_112;
                  }
                }
                else {
                  CudaDriverRoutine_1d1940((_DWORD**)a1, a2, a3, v162,
                                           v154 + v116, (int*)v176_.v176, a7,
                                           2);
                  v81 = v150;
                  v84 = v151;
                  v116 += v176_.v179;
                  if (v118 == 0) {
                    goto LABEL_112;
                  }
                }
              }
              else {
                v81 = v150;
                v84 = v151;
                if (v118 == 0) {
                  goto LABEL_112;
                }
              }
              v176_.v179 = v118;
              v176_.v178 = v163_.v170 + v116;
              if (v118 % (unsigned int)v119 == 0) {
                v127 = a3;
                v125 = a1;
                v128 = v154 + v116;
                v124 = a2;
                v126 = v162;
                goto LABEL_207;
              }
              v106 = a3;
              v104 = (__int64)a1;
              v108 = v154 + v116;
              v105 = a2;
              v107 = v162;
            }
          LABEL_111:
            CudaDriverRoutine_1d2240(v104, v105, v106, v107, v108, v176_.v176,
                                     a7);
          LABEL_112:
            v102 = v141;
            v103 = v142;
            v83 = v148;
            v74 = v149;
          LABEL_113:
            v100 = v146;
            v80 = v143;
            v101 += v163_.v174;
            v79 = *(_QWORD*)(a6 + 408);
            if (v101 >= v79) {
              v97 = v163_.v175;
              v76 = *(_QWORD*)(a6 + 416);
              v82 = v130;
              goto LABEL_102;
            }
          }
        }
      }
      else {
        v44 = 0;
        if (*(_DWORD*)a6 == 0) {
          goto LABEL_67;
        }
      }
      v45 = CudaDriverRoutine_f8f00((_DWORD*)a6);
      if (CudaDriverRoutine_f8ed0((_DWORD*)a6) != 0) {
        v46 = CudaDriverRoutine_f8ed0((_DWORD*)a6);
      }
      else {
        v46 = 1;
      }
      v52 = 1;
      v54 = 1;
      v134 = CudaDriverRoutine_f8f00((_DWORD*)a6) * v46;
      v138 = -1;
      v142 = -1;
      v146 = v45;
      if (*v9 != 0) {
        goto LABEL_80;
      }
      goto LABEL_72;
    }
    if ((unsigned __int64)CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) >> 31 ==
        0) {
      v10 = *v9 == 0;
      goto LABEL_57;
    }
  }
  v11 = *v8;
  v12 = *(_QWORD*)(a6 + 416);
  v176_.v176[0] = *v8;
  if (v12 != 0) {
    v153 = 0;
    do {
      v13 = CudaDriverRoutine_f8f00((_DWORD*)a6);
      v157 = CudaDriverRoutine_f8ed0((_DWORD*)a6);
      v159 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200));
      v14 = CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200));
      if (*(_QWORD*)(a6 + 408) != 0) {
        v15 = v13;
        v16 = 0;
        v160 = a4 + v159 * v153 * v14;
        v158 = a5 + v15 * v153 * v157;
        do {
          if ((v16 | v153) != 0) {
            CudaDriverStub_5ab60(a3, v176_.v176);
          }
          v17 = (_DWORD*)v176_.v176[0];
          v18 = *(_QWORD*)(a6 + 400);
          if (*(_BYTE*)(a6 + 459) != 0) {
            v19 = v158;
            v20 = v160;
            v21 = *(_QWORD*)(a6 + 400);
            do {
              v22 = *(unsigned __int8*)(a6 + 458);
              v23 = *(unsigned __int8*)(a6 + 456);
              if (v21 >= 0xFFFFFFFF) {
                v24 = 0xFFFFFFFFLL;
              }
              else {
                v24 = v21;
              }
              v25 = (v21 & 0xFFFFFFFF00000000LL) != 0 || a7 == 2;
              *v17 = 537166080;
              v17[1] = BYTE4(v19);
              v17[2] = v19;
              v17[3] = BYTE4(v20);
              v19 += v24;
              v17[4] = v20;
              v17[5] = 536969478;
              v20 += v24;
              v17[6] = (unsigned int)v24 / (v23 * v22);
              v26 =
                  ((*(unsigned __int8*)(a6 + 458) << 16) - 0x10000) & 0x30000 |
                  ((*(unsigned __int8*)(a6 + 456) << 20) - 0x100000) & 0x300000;
              v27 = *(unsigned __int8*)(a6 + 457);
              v28 = *(_BYTE*)(a6 + 424) & 7 |
                    (unsigned __int8)(16 * (*(_BYTE*)(a6 + 428) & 7)) |
                    ((*(_DWORD*)(a6 + 432) & 7) << 8);
              v29 = *(_DWORD*)(a6 + 436);
              v17[7] = 537100736;
              v17[8] = *(_DWORD*)(a6 + 448);
              v17[9] = *(_DWORD*)(a6 + 452);
              v17[10] = v28 | ((v29 & 7) << 12) | v26 |
                        ((v27 << 24) - 0x1000000) & 0x3000000;
              if (v25) {
                v30 = 384;
              }
              else {
                v30 = 388;
              }
              if (v21 == v18) {
                v31 = 1026;
              }
              else {
                v31 = 1025;
              }
              v21 -= v24;
              v17[11] = 536969408;
              v17[12] = v31 | v30;
              v17 += 13;
            } while (v21 != 0);
          }
          else {
            v32 = *(_QWORD*)(a6 + 400);
            if (a7 == 2) {
              v33 = v158;
              v34 = v160;
              do {
                *v17 = 537166080;
                v17[1] = BYTE4(v33);
                if (v32 >= 0xFFFFFFFF) {
                  v35 = 0xFFFFFFFFLL;
                }
                else {
                  v35 = v32;
                }
                v17[2] = v33;
                v17[3] = BYTE4(v34);
                v17[6] = v35;
                v17[7] = 536969408;
                v33 += v35;
                v17[4] = v34;
                v17[5] = 536969478;
                if (v32 == v18) {
                  v36 = 386;
                }
                else {
                  v36 = 385;
                }
                v34 += v35;
                v32 -= v35;
                v17[8] = v36;
                v17 += 9;
              } while (v32 != 0);
            }
            else {
              v37 = v158;
              v38 = v160;
              do {
                *v17 = 537166080;
                v17[1] = BYTE4(v37);
                if (v32 >= 0xFFFFFFFF) {
                  v39 = 0xFFFFFFFFLL;
                }
                else {
                  v39 = v32;
                }
                v17[2] = v37;
                v17[3] = BYTE4(v38);
                v17[6] = v39;
                v17[7] = 536969408;
                v37 += v39;
                v17[4] = v38;
                v17[5] = 536969478;
                if (v32 == v18) {
                  v40 = 2;
                }
                else {
                  v40 = 1;
                }
                v38 += v39;
                if (HIDWORD(v32) != 0) {
                  v41 = 384;
                }
                else {
                  v41 = 388;
                }
                v32 -= v39;
                v17[8] = v41 | v40;
                v17 += 9;
              } while (v32 != 0);
            }
          }
          v176_.v176[0] = (__int64)v17;
          v158 += CudaDriverRoutine_f8f00((_DWORD*)a6);
          ++v16;
          v160 += CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200));
        } while (v16 < *(_QWORD*)(a6 + 408));
      }
      ++v153;
    } while (v153 < *(_QWORD*)(a6 + 416));
    v11 = v176_.v176[0];
    v8 = a1;
  }
  *v8 = v11;
  return 0;
}

_DWORD* cuda_driver_1d27e0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           int a5)
{
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  _DWORD* result;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  void* v15;
  __int64 v16;
  int v17;

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
  *(_DWORD*)(a1 + 4) = v9;
  *(_DWORD*)(a1 + 8) = 536969666;
  *(_QWORD*)(a1 + 16) = 0x120018107LL;
  result = (_DWORD*)(a1 + 24);
  if (a5 != 0) {
    v11 = v6;
    do {
      if (v11 >= 0xFFFFFFFF) {
        v12 = 0xFFFFFFFFLL;
      }
      else {
        v12 = v11;
      }
      *result = 537035010;
      result[1] = BYTE4(v7);
      result[2] = v7;
      result[3] = 536969478;
      if (v11 == v6) {
        v13 = 1414;
      }
      else {
        v13 = 1413;
      }
      v7 += v12 * v5;
      result[4] = v12;
      result[5] = 536969408;
      v11 -= v12;
      result[6] = v13;
      result += 7;
    } while (v11 != 0);
  }
  else {
    v14 = v6;
    v15 = CudaDriverData_1422118;
    do {
      while (1) {
        v16 = v14 >= 0xFFFFFFFF ? 0xFFFFFFFFLL : v14;
        *result = 537035010;
        result[1] = BYTE4(v7);
        result[2] = v7;
        result[3] = 536969478;
        v17 = v14 == v6 ? 2 : 1;
        result[4] = v16;
        if (HIDWORD(v14) != 0 &&
            (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)v15) & 1) == 0) {
          break;
        }
        v7 += v16 * v5;
        result[5] = 536969408;
        result[6] = v17 | 0x584;
        result += 7;
        v14 -= v16;
        if (v14 == 0) {
          return result;
        }
      }
      v7 += v16 * v5;
      result[5] = 536969408;
      result[6] = v17 | 0x580;
      result += 7;
      v14 -= v16;
    } while (v14 != 0);
  }
  return result;
}

__int64 cuda_driver_1d47c0(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 result;
  int32x4_t* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int32* v11;
  _DWORD* v12;
  unsigned __int32 v13;
  int32x4_t* v14;
  int32x4_t* v15;
  int32x4_t v16;
  __int64 v17;
  int32x4_t v18;
  int32x4_t v19;
  __int64 v20;
  char* v21;
  char v22;
  _DWORD v23[4];
  __int64 v24;
  _DWORD v25[256];

  memset_plt(v25, 0, 1024);
  memset_plt(v23, 0, 1024);
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  result =
      (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(a1, a2);
  if ((_DWORD)result != 801) {
    return result;
  }
  if ((_DWORD)v4 != 0) {
    v6 = *(int32x4_t**)(a1 + 16104);
    if ((unsigned int)v4 >= 8 &&
        (unsigned __int64)((char*)v23 - (char*)v6 - 32) >= 0x20) {
      v7 = (unsigned int)v4 & 0xFFFFFFF8;
      v14 = (int32x4_t*)&v24;
      v15 = v6 + 3;
      v16 = vdupq_n_s32(0x50450Cu);
      v17 = v7;
      do {
        v18 = v15[-1];
        v19 = *v15;
        v17 -= 8;
        v15 += 2;
        v14[-1] = vaddq_s32(v18, v16);
        *v14 = vaddq_s32(v19, v16);
        v14 += 2;
      } while (v17 != 0);
      if (v7 == v4) {
        goto LABEL_16;
      }
    }
    else {
      v7 = 0;
    }
    v8 = v4 & 7;
    v9 = v7;
    if ((v4 & 7) != 0) {
      v9 = v7;
      do {
        --v8;
        v23[v9] = LANES128(v6[2]).n128_u32[v9] + 5260556;
        ++v9;
      } while (v8 != 0);
    }
    if ((unsigned __int64)(v7 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      v10 = v4 - v9;
      v11 = &LANES128(v6[3]).n128_u32[v9 + 3];
      v12 = &v23[v9 + 4];
      do {
        v10 -= 8;
        *(v12 - 4) = *(v11 - 7) + 5260556;
        *(v12 - 3) = *(v11 - 6) + 5260556;
        *(v12 - 2) = *(v11 - 5) + 5260556;
        *(v12 - 1) = *(v11 - 4) + 5260556;
        *v12 = *(v11 - 3) + 5260556;
        v12[1] = *(v11 - 2) + 5260556;
        v12[2] = *(v11 - 1) + 5260556;
        v13 = *v11;
        v11 += 8;
        v12[3] = v13 + 5260556;
        v12 += 8;
      } while (v10 != 0);
    }
  }
LABEL_16:
  v20 = CudaDriverRoutine_98340(a1);
  result = cuda_driver_predicates_10f750(v20, 2, v4, (__int64)v23, v25, 0);
  if ((_DWORD)result == 0 && (_DWORD)v4 != 0) {
    v21 = (char*)v25;
    while (1) {
      v22 = *v21;
      v21 += 4;
      if ((v22 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return 0;
      }
    }
    *a2 = 1;
    return 0;
  }
  return result;
}

__int64 cuda_driver_1d4cc0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 result;
  unsigned int v9;

  v4 = CudaDriverRoutine_12e510(1, 320);
  if (v4 == 0) {
    return 2;
  }
  *(_QWORD*)v4 = a1;
  v5 = v4;
  v6 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3904LL);
  *(_DWORD*)(v4 + 8) = v6;
  if (*((_BYTE*)&CudaDriverRoutine_7448 + (_QWORD)CudaDriverData_1422118) !=
      0) {
    v7 = (vcvtmd_u32_f64(*(double*)((char*)&CudaDriverRoutine_7450 +
                                    (_QWORD)CudaDriverData_1422118) *
                         0x1.0000000000000p+17) +
          1023) &
         0xFFFFFC00;
    if (v6 >= v7) {
      v6 = v7;
    }
    *(_DWORD*)(v4 + 8) = v6;
  }
  CudaDriverRoutine_107f40((_QWORD*)(v4 + 16), 20, 0);
  LODWORD(result) = cuda_driver_1d4df0(a1, v5 + 32, *(_DWORD*)(v5 + 8));
  if ((_DWORD)result != 0 ||
      (CudaDriverRoutine_107f40((_QWORD*)(v5 + 168), 20, 0),
       (_DWORD)(result = cuda_driver_1d4df0(a1, v5 + 184,
                                            *(_DWORD*)(v5 + 8))) != 0)) {
    v9 = result;
    CudaDriverRoutine_1d4c40((_QWORD*)(v5 + 184));
    CudaDriverRoutine_107f60((_QWORD*)(v5 + 168));
    CudaDriverRoutine_1d4c40((_QWORD*)(v5 + 32));
    CudaDriverRoutine_107f60((_QWORD*)(v5 + 16));
    CudaDriverRoutine_12e340(v5);
    return v9;
  }
  else {
    *a2 = v5;
  }
  return result;
}

__int64 cuda_driver_1d4df0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  void* v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  char v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
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
  __int128 v44;
  __int64 v45;

  v5 = a3;
  v45 = 0;
  *(_QWORD*)a2 = 0x200000000LL;
  *(_OWORD*)(a2 + 8) = (__typeof__(*(_OWORD*)(a2 + 8))){0};
  v6 = (_QWORD*)(a2 + 8);
  *(_OWORD*)(a2 + 24) = (__typeof__(*(_OWORD*)(a2 + 24))){0};
  *(_OWORD*)(a2 + 40) = (__typeof__(*(_OWORD*)(a2 + 40))){0};
  *(_OWORD*)(a2 + 56) = (__typeof__(*(_OWORD*)(a2 + 56))){0};
  v39 = (__typeof__(v39)){0};
  v40 = (__typeof__(v40)){0};
  v41 = (__typeof__(v41)){0};
  v42 = (__typeof__(v42)){0};
  v43 = (__typeof__(v43)){0};
  v44 = (__typeof__(v44)){0};
  v7 = *(_QWORD*)(a1 + 80);
  v38 = (__typeof__(v38)){0};
  v37 = (__typeof__(v37)){0};
  v36 = (__typeof__(v36)){0};
  v35 = (__typeof__(v35)){0};
  v34 = (__typeof__(v34)){0};
  v33 = (__typeof__(v33)){0};
  v32 = (__typeof__(v32)){0};
  v31 = (__typeof__(v31)){0};
  v30 = (__typeof__(v30)){0};
  v29 = (__typeof__(v29)){0};
  v28 = (__typeof__(v28)){0};
  v27 = (__typeof__(v27)){0};
  v26 = (__typeof__(v26)){0};
  v25 = (__typeof__(v25)){0};
  v24 = (__typeof__(v24)){0};
  v23 = (__typeof__(v23)){0};
  v22 = (__typeof__(v22)){0};
  DWORD1(v43) = -1;
  if ((unsigned __int8)CudaDriverStub_1d9a90(v7) != 0) {
    v8 = 0x10D000211LL;
  }
  else {
    v8 = 0x105000211LL;
  }
  v21 = v8;
  v9 = CudaDriverData_1422118;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u) {
    *(_QWORD*)&v22 = 0x400000000LL;
  }
  v10 = cuda_driver_1da1b0_alt1(*(_QWORD*)(a1 + 80), &v21, v5, v6);
  if (v10 != 0) {
    goto LABEL_16;
  }
  v10 = CudaDriverRoutine_1ba480((_QWORD*)(a2 + 16), *(_QWORD*)(a1 + 72));
  if (v10 != 0) {
    goto LABEL_16;
  }
  v11 = CudaDriverRoutine_98340(a1);
  v10 = CudaDriverRoutine_203600(*(_QWORD*)(v11 + 1880), (_QWORD*)(a2 + 24));
  if (v10 != 0) {
    goto LABEL_16;
  }
  v12 = cuda_driver_204330(*(_QWORD*)(a2 + 24));
  v45 = 0;
  *(_DWORD*)(a2 + 32) = v12 + 1;
  *(_OWORD*)(a2 + 72) = (__typeof__(*(_OWORD*)(a2 + 72))){0};
  v6 = (_QWORD*)(a2 + 72);
  v23 = (__typeof__(v23)){0};
  v24 = (__typeof__(v24)){0};
  v25 = (__typeof__(v25)){0};
  v26 = (__typeof__(v26)){0};
  v22 = (__typeof__(v22)){0};
  *(_OWORD*)(a2 + 88) = (__typeof__(*(_OWORD*)(a2 + 88))){0};
  *(_OWORD*)(a2 + 104) = (__typeof__(*(_OWORD*)(a2 + 104))){0};
  *(_OWORD*)(a2 + 120) = (__typeof__(*(_OWORD*)(a2 + 120))){0};
  v13 = *(_QWORD*)(a1 + 80);
  v27 = (__typeof__(v27)){0};
  v28 = (__typeof__(v28)){0};
  v29 = (__typeof__(v29)){0};
  v30 = (__typeof__(v30)){0};
  v31 = (__typeof__(v31)){0};
  v32 = (__typeof__(v32)){0};
  v33 = (__typeof__(v33)){0};
  v34 = (__typeof__(v34)){0};
  v35 = (__typeof__(v35)){0};
  v36 = (__typeof__(v36)){0};
  v37 = (__typeof__(v37)){0};
  v38 = (__typeof__(v38)){0};
  v39 = (__typeof__(v39)){0};
  v40 = (__typeof__(v40)){0};
  v41 = (__typeof__(v41)){0};
  v42 = (__typeof__(v42)){0};
  v43 = (__typeof__(v43)){0};
  v44 = (__typeof__(v44)){0};
  v14 = CudaDriverStub_1d9a90(v13);
  DWORD1(v43) = -1;
  if (v14 != 0) {
    v15 = 0x10D000211LL;
  }
  else {
    v15 = 0x105000211LL;
  }
  v21 = v15;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v9) >= 2u) {
    *(_QWORD*)&v22 = v22 & 0xFFFFFFF1FFFFFFFFLL | 0x400000000LL;
  }
  v10 = cuda_driver_1da1b0_alt1(*(_QWORD*)(a1 + 80), &v21, v5,
                                (_QWORD*)(a2 + 72));
  if (v10 != 0 || (v10 = CudaDriverRoutine_1ba480((_QWORD*)(a2 + 80),
                                                  *(_QWORD*)(a1 + 72))) != 0) {
  LABEL_16:
    v16 = v10;
  }
  else {
    v20 = CudaDriverRoutine_98340(a1);
    v16 = CudaDriverRoutine_203600(*(_QWORD*)(v20 + 1880), (_QWORD*)(a2 + 88));
    if (v16 == 0) {
      *(_DWORD*)(a2 + 96) = cuda_driver_204330(*(_QWORD*)(a2 + 88)) + 1;
      return v16;
    }
  }
  v17 = v6[1];
  if (v17 != 0) {
    CudaDriverRoutine_1ba520(v17);
    v6[1] = 0;
  }
  if (*v6 != 0) {
    CudaDriverStub_1db190(v6);
  }
  v18 = v6[2];
  if (v18 != 0) {
    CudaDriverRoutine_203f30(v18);
    v6[2] = 0;
  }
  CudaDriverRoutine_1d4c40((_QWORD*)a2);
  return v16;
}

__int64 cuda_driver_1d5f60(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           unsigned int a5, unsigned int a6, __int64 a7,
                           __int64 a8, char a9)
{
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v21;
  int v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  char v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned int v39;
  unsigned __int64 v40;
  __int64 v41;
  _BOOL4 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  char v49;
  int v50;
  __int64 v51;
  __int64 v52;
  _BYTE v54[472];
  struct {
    _QWORD v55[25];
    int v56;
  } v55_;
  _BYTE v57[40];
  _BYTE v58[88];
  struct {
    unsigned __int64 v59;
    __int64 v60;
    __int64 v61;
  } v59_;
  struct {
    unsigned __int64 v62;
    unsigned __int64 v63;
    unsigned __int64 v64;
  } v62_;

  v59_.v59 = 0;
  v59_.v60 = 0;
  v59_.v61 = 0;
  v16 = CudaDriverRoutine_f7c90((int*)a1);
  v17 = CudaDriverRoutine_98340(v16);
  v18 = CudaDriverRoutine_f7c90((int*)(a1 + 200));
  v19 = CudaDriverRoutine_98340(v18);
  if ((unsigned int)CudaDriverData_14358d0 >= 2) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Staged peer to host to peer copies are not supported in "
                 "confidential computing mode.\n");
    return 801;
  }
  v51 = a8;
  v52 = v19;
  CudaDriverRoutine_108080(*(_QWORD*)(v17 + 1336) + 168LL,
                           *(_QWORD*)(v19 + 1336) + 168LL, 0);
  if ((CudaDriverData_1438c09 & 1) != 0) {
    v21 = v17;
    v23 = (CudaDriverData_1438c09 & 2) == 0;
    goto LABEL_8;
  }
  v21 = v17;
  if ((*(_BYTE*)(v17 + 16316) & 1) != 0) {
    v23 = (*(_BYTE*)(v52 + 16316) & 1) == 0;
  LABEL_8:
    v22 = v23;
    goto LABEL_11;
  }
  v22 = 1;
LABEL_11:
  v50 = v22;
  v24 = a4;
  CudaDriverRoutine_98340(*(_QWORD*)(a3 + 16));
  CudaDriverRoutine_98340(*(_QWORD*)(a2 + 16));
  v25 = CudaDriverRoutine_f9bd0((int*)a1, a2, a3, a4, a5, a7, a6, (__int64)v57,
                                a9);
  v26 = a8;
  v27 = v21;
  if ((_DWORD)v25 != 0) {
    goto LABEL_12;
  }
  v29 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(v21 + 72) + 132728LL))(
      a3, a2);
  v30 = *(_QWORD*)(a1 + 416);
  v49 = v29;
  v62_.v64 = 0;
  if (v30 == 0) {
  LABEL_44:
    v25 = CudaDriverRoutine_fa210(0, a1, a2, a6, (__int64)v57, 0);
    v26 = a8;
    goto LABEL_12;
  }
  v31 = *(_QWORD*)(a1 + 408);
  if (v31 == 0) {
    while (1)
      ;
  }
  v32 = 1;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  while (1) {
    v62_.v63 = 0;
    if (v32 != 0) {
      break;
    }
  LABEL_18:
    v36 += v33;
    v62_.v64 = v36;
    if (v36 >= v30) {
      goto LABEL_44;
    }
  }
  if (*(_QWORD*)(a1 + 400) == 0) {
    v47 = 0;
    v62_.v62 = 0;
    do {
      v47 += v34;
    } while (v47 < v31);
    v62_.v63 = v47;
    v35 = v34;
  LABEL_17:
    v32 = v31;
    goto LABEL_18;
  }
  v37 = 1;
  v38 = 0;
  while (1) {
    v62_.v62 = 0;
    if (v37 != 0) {
      break;
    }
  LABEL_39:
    v38 += v35;
    v62_.v63 = v38;
    if (v38 >= v31) {
      v33 = v59_.v61;
      v30 = *(_QWORD*)(a1 + 416);
      goto LABEL_17;
    }
  }
  v48 = v38;
  v39 = a6;
  v40 = 0;
  while (1) {
    v41 = *(_QWORD*)(v52 + 1336);
    v42 = (*(_DWORD*)(v41 + 184) & 1) == 0;
    if (v50 != 0) {
      v42 = false;
    }
    *(_DWORD*)(v41 + 184) = v42;
    v43 = *(_QWORD*)(v52 + 1336) +
          ((unsigned __int64)*(unsigned int*)(*(_QWORD*)(v52 + 1336) + 184LL)
           << 6);
    v45 = *(_QWORD*)(v43 + 192);
    v44 = v43 + 192;
    CudaDriverRoutine_1d5420((__int64)v55_.v55, (__int64)v54, &v59_.v59, v21,
                             v52, a1, &v62_.v62, v45);
    v25 = cuda_driver_1150a0(a3, *(_QWORD*)(v44 + 8), 0);
    if ((_DWORD)v25 != 0) {
      break;
    }
    v25 = v55_.v56 == 3
              ? CudaDriverRoutine_1d5ae0(
                    v55_.v55, a3, (_DWORD*)(*(_QWORD*)(v21 + 1336) + 184LL),
                    (__int64)v58, 2)
              : (*(__int64 (**)(__int64, _QWORD*, __int64, _BYTE*))(
                    v21 + 16392))(v21, v55_.v55, a3, v58);
    if ((_DWORD)v25 != 0) {
      break;
    }
    v25 = CudaDriverRoutine_114a80(a2, a3, 0);
    if ((_DWORD)v25 != 0) {
      break;
    }
    v25 = (*(__int64 (**)(__int64, _BYTE*, __int64, _BYTE*))(v52 + 16392))(
        v52, v54, a2, v58);
    if ((_DWORD)v25 != 0) {
      break;
    }
    v46 = *(_QWORD*)(v44 + 8);
    if (v49 != 0) {
      v25 = CudaDriverStub_112e40(v46, a2);
      if ((_DWORD)v25 != 0) {
        break;
      }
    }
    else {
      CudaDriverRoutine_56260(v46);
      v25 = CudaDriverRoutine_1bbf60(a2, *(_QWORD*)(v44 + 8), 0);
      if ((_DWORD)v25 != 0) {
        break;
      }
    }
    v37 = *(_QWORD*)(a1 + 400);
    v40 += v59_.v59;
    v62_.v62 = v40;
    if (v40 >= v37) {
      v34 = v59_.v60;
      v31 = *(_QWORD*)(a1 + 408);
      a8 = v51;
      a6 = v39;
      v35 = v59_.v60;
      v38 = v48;
      goto LABEL_39;
    }
  }
  v26 = v51;
LABEL_12:
  v28 = v25;
  CudaDriverRoutine_fa700(v25, v24, (__int64)v57, v26);
  CudaDriverRoutine_108280(*(_QWORD*)(v27 + 1336) + 168LL,
                           *(_QWORD*)(v52 + 1336) + 168LL, 0);
  return v28;
}

__int64 cuda_driver_unplaced_9_1d8110(__int64* a1, __int64* a2, __int64 a3,
                                      __int64* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  unsigned __int64 v28;
  unsigned int v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64 v38;
  _QWORD v39[2];
  __int64 v40;

  v8 = CudaDriverRoutine_12e510(1, 736);
  v40 = v8;
  if (v8 == 0) {
    return 2;
  }
  v9 = v8;
  memcpy_plt(v8 + 240, (__int64)a2, 0x180u);
  *(_QWORD*)(v9 + 632) = a1;
  CudaDriverRoutine_107f40((_QWORD*)(v9 + 16), 75, 0);
  v10 = *a1;
  v11 = *a1 + 0x4000;
  if (*(_BYTE*)(v9 + 592) != 0 && (*(_BYTE*)(*a1 + 17094) & 1) != 0) {
    v12 = *(_DWORD*)((char*)&CudaDriverRoutine_4448 +
                     (_QWORD)CudaDriverData_1422118);
    v13 = *(_QWORD*)(v9 + 240);
    if (v12 != 0) {
      v14 = v13 & 0xFFFFFFFFFFFFFFFLL |
            ((unsigned __int64)(unsigned __int8)v12 << 60);
    }
    else {
      if (v13 >> 60 > 2) {
        goto LABEL_10;
      }
      v14 = v13 | 0x3000000000000000LL;
    }
    *(_QWORD*)(v9 + 240) = v14;
  }
LABEL_10:
  if ((*(_QWORD*)(v9 + 240) & 0xF800000000LL) == 0x1800000000LL) {
    v16 = *(_QWORD*)(v9 + 416);
    *(_QWORD*)(v9 + 168) = v16;
    if (v16 != 0) {
      goto LABEL_12;
    }
  LABEL_31:
    v17 = (*(__int64 (**)(__int64*, __int64))(*a1 + 19440))(a1, v9 + 240);
    *(_QWORD*)(v9 + 136) = v17;
    v18 = *a2;
    if ((*a2 & 0x800000000000LL) != 0) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v16 = *(_QWORD*)(v9 + 168);
  if (v16 == 0) {
    goto LABEL_31;
  }
LABEL_12:
  v17 = *(_QWORD*)(v16 + 136);
  *(_QWORD*)(v9 + 136) = v17;
  v18 = *a2;
  if ((*a2 & 0x800000000000LL) == 0) {
  LABEL_13:
    a3 = (a3 + v17 - 1) / v17 * v17;
  }
LABEL_14:
  if (a3 != 0 && (v18 & 7) == 2 && *(_BYTE*)(v11 + 848) != 0 && a2[22] == 0) {
    CudaDriverStub_107f90(v10 + 17256);
    v26 = *(_QWORD*)(v10 + 17248);
    v27 = __CFADD__(v26, a3);
    v28 = v26 + a3;
    if (v27 || v28 > *(_QWORD*)(v10 + 17240)) {
      CudaDriverStub_108070(v10 + 17256);
      CudaDriverRoutine_107f60((_QWORD*)(v9 + 16));
      CudaDriverRoutine_12e340(v9);
      *a4 = 0;
      return 2;
    }
    *(_QWORD*)(v10 + 17248) = v28;
    CudaDriverStub_108070(v10 + 17256);
    v19 = a1[1];
    if (v19 == 0) {
      goto LABEL_37;
    }
  }
  else {
    v19 = a1[1];
    if (v19 == 0) {
      goto LABEL_37;
    }
  }
  if (*(_QWORD*)(v19 + 16416) != 0) {
    *(_QWORD*)(v9 + 704) = *(_QWORD*)(v19 + 16424);
    v20 = (*(__int64 (**)(__int64, __int64))(a1[1] + 16416))(v9, a3);
    if (v20 == 0) {
      goto LABEL_21;
    }
  LABEL_38:
    v29 = v20;
    if (*(_BYTE*)(v10 + 17232) != 0 && (*a2 & 7) == 2 && a2[22] == 0) {
      CudaDriverStub_107f90(v10 + 17256);
      *(_QWORD*)(v10 + 17248) -= a3;
      CudaDriverStub_108070(v10 + 17256);
      *(_BYTE*)(v9 + 96) |= 0x10u;
    }
    CudaDriverRoutine_1d87a0(&v40);
    return v29;
  }
LABEL_37:
  *(__int64 (**)(void))(v9 + 704) = cuda_driver_1d85d0_ptr[0];
  v20 = CudaDriverRoutine_1d7ca0(v9, a3);
  if (v20 != 0) {
    goto LABEL_38;
  }
LABEL_21:
  v21 = *(_QWORD*)(v9 + 128);
  v22 = v21 - a3;
  if (v21 == a3 || *(_BYTE*)(v10 + 17232) == 0 || (*a2 & 7) != 2 ||
      a2[22] != 0) {
    v23 = a1[255];
    *(_QWORD*)v9 = 0;
    *(_QWORD*)(v9 + 8) = 0;
    if (v23 != 0) {
      goto LABEL_26;
    }
    goto LABEL_51;
  }
  CudaDriverStub_107f90(v10 + 17256);
  v30 = *(_QWORD*)(v10 + 17248);
  v27 = __CFADD__(v30, v22);
  v31 = v30 + v22;
  if (!v27 && v31 <= *(_QWORD*)(v10 + 17240)) {
    *(_QWORD*)(v10 + 17248) = v31;
    CudaDriverStub_108070(v10 + 17256);
    v23 = a1[255];
    *(_QWORD*)v9 = 0;
    *(_QWORD*)(v9 + 8) = 0;
    if (v23 != 0) {
    LABEL_26:
      v24 = *(__int64**)(v23 + 8);
      if (v24 != nullptr) {
        *v24 = v9;
      }
      *(_QWORD*)v9 = v23;
      *(_QWORD*)(v9 + 8) = *(_QWORD*)(v23 + 8);
      *(_QWORD*)(v23 + 8) = v9;
      v25 = *(_QWORD*)(v9 + 168);
      if (v25 == 0) {
      LABEL_55:
        ++*((_DWORD*)a1 + 508);
        *(_QWORD*)(v9 + 192) =
            CudaDriverRoutine_12dea0((atomic_ullong*)&CudaDriverData_1435878);
        CudaDriverRoutine_98110(a1[1]);
        if (CudaDriverRoutine_1da040(a2)) {
          v33 = *(_DWORD*)(*a1 + 21864);
          if (v33 == 3) {
            v36 = 8;
            v39[0] = *(_QWORD*)(v9 + 464);
          }
          else {
            if (v33 == 1) {
              v35 = *(_QWORD*)(v9 + 480);
              v39[0] = *(_QWORD*)(v9 + 448);
              v39[1] = v35;
            }
            else {
              if (v33 != 0) {
                *(_QWORD*)(v9 + 48) = a1[25];
                a1[25] = v9;
                v38 = *(_QWORD*)(v9 + 48);
                if (v38 == 0) {
                  goto LABEL_65;
                }
                goto LABEL_64;
              }
              v34 = *(unsigned int*)(v9 + 456);
              v39[0] = *(_QWORD*)(v9 + 448);
              v39[1] = v34;
            }
            v36 = 16;
          }
          v37 =
              &a1[CudaDriverRoutine_1a16e0((unsigned __int8*)v39, v36) & 0x7F];
          *(_QWORD*)(v9 + 48) = v37[25];
          v37[25] = v9;
          v38 = *(_QWORD*)(v9 + 48);
          if (v38 != 0) {
          LABEL_64:
            *(_QWORD*)(v38 + 56) = v9;
          }
        }
      LABEL_65:
        cuda_driver_ef950(v9);
        *a4 = v9;
        return 0;
      }
    LABEL_52:
      CudaDriverStub_107f90(v25 + 16);
      *(_QWORD*)(v9 + 40) = v25;
      v32 = *(_QWORD*)(v25 + 32);
      *(_QWORD*)(v9 + 32) = v32;
      if (v32 != 0) {
        *(_QWORD*)(v32 + 40) = v9;
      }
      *(_QWORD*)(v25 + 32) = v9;
      CudaDriverStub_108070(v25 + 16);
      goto LABEL_55;
    }
  LABEL_51:
    a1[255] = v9;
    v25 = *(_QWORD*)(v9 + 168);
    if (v25 == 0) {
      goto LABEL_55;
    }
    goto LABEL_52;
  }
  CudaDriverStub_108070(v10 + 17256);
  if (*(_BYTE*)(v10 + 17232) != 0 && (*a2 & 7) == 2 && a2[22] == 0) {
    CudaDriverStub_107f90(v10 + 17256);
    *(_QWORD*)(v10 + 17248) -= a3;
    CudaDriverStub_108070(v10 + 17256);
    *(_BYTE*)(v9 + 96) |= 0x10u;
  }
  CudaDriverRoutine_1d87a0(&v40);
  return 2;
}

unsigned __int64 cuda_driver_1d85d0(__int64 a1, char a2)
{
  char v2;
  __int64 v5;
  __int64 v6;
  bool v7;
  _BOOL4 v8;
  __int64 v9;
  unsigned int v11;
  int v12;
  unsigned __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *(_BYTE*)(a1 + 96);
  if ((v2 & 4) != 0) {
    v5 = *(_QWORD*)(a1 + 632);
    v6 = *(_QWORD*)(v5 + 8);
    if (v6 != 0 && (*(_QWORD*)(a1 + 240) & 0x7E00LL) == 0xA00) {
      v7 = CudaDriverRoutine_9aa30(*(_QWORD*)(v6 + 64));
      v5 = *(_QWORD*)(a1 + 632);
      v8 = v7;
      v9 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 72LL);
      if (v8 && v9 != 0) {
        v11 = CudaDriverStub_10f710(v9);
        v5 = *(_QWORD*)(a1 + 632);
        if (v11 != 0) {
          cuda_driver_98c70(*(_QWORD*)(v5 + 8), v11);
          v5 = *(_QWORD*)(a1 + 632);
        }
      }
    }
    (*(void (**)(__int64))(v5 + 2136))(a1);
    *(_QWORD*)(a1 + 240) &= 0xFFFFFFFF83FFFFFFLL;
    v2 = *(_BYTE*)(a1 + 96) & 0xFB;
    *(_BYTE*)(a1 + 96) = v2;
  }
  if ((v2 & 8) != 0) {
    v12 = *(_DWORD*)(a1 + 152) - 1;
    *(_DWORD*)(a1 + 152) = v12;
    if (v12 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 632) + 2120LL))(a1);
      *(_QWORD*)(a1 + 240) &= 0xFFFFFFFFFCFFFFFFLL;
      *(_BYTE*)(a1 + 96) &= ~8u;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)(a1 + 632) + 2104LL))(a1);
  cuda_driver_predicates_10e960(a1);
  result = *(_QWORD*)(a1 + 184);
  if (result != 0) {
    if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
      v15 = 1;
    }
    else {
      v15 = 2;
    }
    result = CudaDriverStub_57450(
        result, v15, (*(_QWORD*)(a1 + 240) & 0xF800000000LL) != 0x2000000000LL);
  }
  if (a2 == 0) {
    if (*(_QWORD*)(a1 + 88) == 0) {
    LABEL_24:
      *(_QWORD*)(a1 + 88) = 0;
      return result;
    }
    result = *(_QWORD*)(a1 + 72);
    if (result != 0) {
      if ((*(_BYTE*)(a1 + 250) & 8) == 0) {
        result = ((__int64 (*)(void))CudaDriverRoutine_12c020)();
      }
      goto LABEL_24;
    }
    v16 = *(_QWORD*)(a1 + 168);
    if (v16 != 0) {
      v17 = *(_QWORD*)(a1 + 168);
    }
    else {
      v17 = a1;
    }
    if (v16 != 0 && (*(_BYTE*)(a1 + 248) & 2) == 0) {
      goto LABEL_24;
    }
    result = CudaDriverRoutine_12b530();
    if ((_BYTE)result == 0) {
      goto LABEL_24;
    }
    result = *(_QWORD*)(a1 + 88);
    if (result == 0 ||
        (*(_QWORD*)(v17 + 240) & 0xF800000000LL) == 0x1000000000LL &&
            result == *(_QWORD*)(v17 + 336)) {
      goto LABEL_24;
    }
    if ((*(_BYTE*)(a1 + 250) & 8) != 0) {
      goto LABEL_24;
    }
    result = CudaDriverRoutine_12bb60(result);
    *(_QWORD*)(a1 + 88) = 0;
  }
  return result;
}

__int64 cuda_driver_1d8bf0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 632) + 2184LL))((void*)a1);
}

__int64 cuda_driver_1d8c00(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 632) + 2192LL))((void*)a1);
}

__int64 cuda_driver_1d8eb0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 632) + 2352LL))((void*)a1);
}

__int64 cuda_driver_1d9310(int a1)
{
  bool v1;
  __int64 result;
  char v3;

  v1 = a1 == 0;
  result = 0;
  v3 = !v1;
  *((_BYTE*)&CudaDriverRoutine_51a8 + (_QWORD)CudaDriverData_1422118) = v3;
  return result;
}

__int64 cuda_driver_1da1b0(__int64 a1, unsigned __int64* a2, __int64 a3,
                           __int64** a4)
{
  __int64 result;
  __int64* v9;
  unsigned __int64 v10;
  unsigned int v11;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  int8x16_t v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  __int64* v24;
  unsigned int v25;
  struct {
    int8x16_t v26[10];
    char gap160_[8];
    __int64* v27;
  } v26_;
  _BYTE v28[4];
  __int64* v29;

  v29 = nullptr;
  v28[0] = 0;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 3u) {
    v10 = *a2;
    v11 = ((unsigned int)*a2 >> 9) & 0x3F;
    if (v11 == 11) {
      if ((*a2 & 0x7C000007) != 1 || (a2[1] & 0xE00000000LL) == 0x400000000LL) {
        return 801;
      }
    }
    else if (v11 != 15 && (a2[1] & 0xE00000000LL) != 0x400000000LL) {
      v13 = *a2 & 0x3000000;
      v14 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      v15 = v10 & 0x7C0000000000000LL;
      *((_BYTE*)a2 + 352) = 0;
      v16 = v14 | 2;
      v17 = v13 == 0 || v15 == 0;
      *a2 = v16;
      if (!v17) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"User allocation of host-mapped vidmem is prohibited in "
                     "confidential computing mode\n");
        return 801;
      }
      *a2 = v16 & 0xFFFFFFFFFCFFFFFALL;
    }
  }
  result = CudaDriverRoutine_1da4a0((unsigned int**)a1, (__int64)a2, a3,
                                    (__int64*)&v29, v28);
  if ((_DWORD)result == 0) {
    v9 = v29;
    if ((a2[1] & 0xE000000000LL) == 0x2000000000LL) {
      CudaDriverRoutine_12c680((__int64)(v29 + 20), (__int64)v29, v29[13]);
      result = 0;
      v9[30] = (__int64)(v9 + 20);
    LABEL_36:
      *a4 = v9;
      return result;
    }
    v19 = v29[9];
    v18 = v29[10];
    if (cuda_driver_9b4d0(*(_QWORD*)a1, (*(_DWORD*)(v19 + 248) >> 9) & 3)) {
      CudaDriverRoutine_1d8ec0(v9[9], LANES128(v26_.v26[0]).n128_u64);
      v26_.v27 = v9;
      LANES128(v20).n128_u64[0] = 0xFFFEFFFFFFFFFFFFLL;
      LANES128(v20).n128_u64[0] =
          LANES128_OF(vandq_s8(v26_.v26[0], v20)).n128_u64[0];
      LANES128(v20).n128_u64[1] =
          LANES128_OF(vorrq_s8(v26_.v26[0], vdupq_n_s64(0x8000002u)))
              .n128_u64[1];
      v26_.v26[0] = v20;
      v21 = CudaDriverRoutine_1da4a0((unsigned int**)a1, (__int64)v26_.v26, a3,
                                     v9 + 49, nullptr);
      if (v21 != 0) {
        v22 = v21;
        goto LABEL_22;
      }
      *(_QWORD*)(v9[9] + 648) = *(_QWORD*)(*(_QWORD*)(v9[49] + 72) + 648LL);
    }
    if (CudaDriverRoutine_1d8a00(v9[9])) {
      if ((*a2 & 0x7C0000000000000LL) != 0x340000000000000LL) {
        v23 = CudaDriverRoutine_12c680((__int64)(v9 + 20), (__int64)v9,
                                       *(_QWORD*)(v19 + 88) + v18);
        if (v23 != 0) {
          v24 = (__int64*)v23;
        }
        else {
          v24 = v9 + 20;
        }
        v9[30] = (__int64)v24;
      }
      if ((*a2 & 0x700000000LL) == 0x200000000LL && *(_QWORD*)(a1 + 8) != 0) {
        cuda_driver_helpers_1db1f0(a1, (__int64)v9, *(_QWORD*)(v19 + 88) + v18);
      }
    }
    if (v28[0] == 0 || *(_BYTE*)(v9[9] + 640) != 0 ||
        (v25 = (*(__int64 (**)(__int64, _QWORD, __int64*))(a1 + 2224))(
             a1, 0, v9)) == 0) {
      result = 0;
      goto LABEL_36;
    }
    v22 = v25;
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Device paging queue operation failure\n");
  LABEL_22:
    cuda_driver_helpers_1db280((__int64)&v29);
    return v22;
  }
  return result;
}

__int64 cuda_driver_1dbe40(__int64 a1, unsigned __int64 a2, _QWORD* a3)
{
  __int64 result;
  void* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (a1 == 0) {
    v7 = CudaDriverData_1422118;
    CudaDriverStub_107f90_alt2((char*)((_UNKNOWN*)0x17C8LL) +
                               (_QWORD)CudaDriverData_1422118);
    v8 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v7);
    if (v8 == 0) {
    LABEL_10:
      CudaDriverStub_108070_alt2((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v7);
      return 0;
    }
    while (1) {
      v9 = CudaDriverRoutine_1dbd40(v8, a2, a3);
      if (v9 != 0) {
        break;
      }
      v8 = *(_QWORD*)(v8 + 16328);
      if (v8 == 0) {
        goto LABEL_10;
      }
    }
    v10 = v9;
    CudaDriverStub_108070_alt2((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v7);
    result = v10;
    goto LABEL_4;
  }
  if ((unsigned __int8)CudaDriverRoutine_985c0(a1) == 0) {
    return 0;
  }
  result = CudaDriverRoutine_1dbd40(a1, a2, a3);
  if (result != 0) {
  LABEL_4:
    if (*(_QWORD*)(result + 360) != 0) {
      return *(_QWORD*)(result + 360);
    }
  }
  return result;
}

__int64 cuda_driver_1dd850(int a1)
{
  __int64 result;
  void* v3;
  __int64 v4;
  void* v5;
  void* v6;

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = 1;
  if (a1 <= 2) {
    if (a1 != 0) {
      if (a1 != 1) {
        if (a1 == 2) {
          v3 = CudaDriverData_1422118;
          *((_BYTE*)&CudaDriverRoutine_743c + (_QWORD)CudaDriverData_1422118 +
            3) = 1;
          *(_QWORD*)((char*)&CudaDriverRoutine_7440 + (_QWORD)v3) =
              0x3FF0000000000000LL;
          return 0;
        }
        return result;
      }
      result = 0;
      v4 = 29758;
    }
    else {
      result = 0;
      v4 = 29757;
    }
  LABEL_15:
    *((_BYTE*)CudaDriverData_1422118 + v4) = 1;
    return result;
  }
  switch (a1) {
  case 3:
    v5 = CudaDriverData_1422118;
    *((_BYTE*)&CudaDriverRoutine_7448 + (_QWORD)CudaDriverData_1422118) = 1;
    *(_QWORD*)((char*)&CudaDriverRoutine_7450 + (_QWORD)v5) =
        0x3FF0000000000000LL;
    return 0;
  case 4:
    v6 = CudaDriverData_1422118;
    *((_BYTE*)&CudaDriverRoutine_7458 + (_QWORD)CudaDriverData_1422118) = 1;
    *(_QWORD*)((char*)&CudaDriverRoutine_7460 + (_QWORD)v6) =
        0x3FF0000000000000LL;
    return 0;
  case 5:
    v4 = 29800;
    result = 0;
    goto LABEL_15;
  default:
    break;
  }
  return result;
}

__int64 cuda_driver_1dd980()
{
  void* v1;

  v1 = CudaDriverData_1422118;
  *(_WORD*)((char*)&CudaDriverRoutine_743c + (_QWORD)CudaDriverData_1422118) =
      0;
  *((_BYTE*)&CudaDriverRoutine_7448 + (_QWORD)v1) = 0;
  *((_BYTE*)&CudaDriverRoutine_7468 + (_QWORD)v1) = 0;
  *((_BYTE*)&CudaDriverRoutine_7458 + (_QWORD)v1) = 0;
  *((_BYTE*)&CudaDriverRoutine_743c + (_QWORD)v1 + 3) = 0;
  *(_QWORD*)((char*)&CudaDriverRoutine_7440 + (_QWORD)v1) =
      0x3FF0000000000000LL;
  *(_QWORD*)((char*)&CudaDriverRoutine_7450 + (_QWORD)v1) =
      0x3FF0000000000000LL;
  *(_QWORD*)((char*)&CudaDriverRoutine_7460 + (_QWORD)v1) =
      0x3FF0000000000000LL;
  return 0;
}

__int64 cuda_driver_1ddaf0()
{
  *((_BYTE*)&CudaDriverRoutine_743c + (_QWORD)CudaDriverData_1422118) = 1;
  return 0;
}

__int64 cuda_driver_1de4f0(__int64* a1, __int64 a2, _QWORD* a3)
{
  __int64 v6;
  unsigned __int8 v7;
  int v8;
  void (*v9)(_QWORD*, _BYTE*);
  __int64 v10;
  __int64 result;
  __int64 (*v12)(__int64, __int64, _QWORD, _QWORD*, __int64, __int64);
  __int64 v13;
  _QWORD v14[64];
  _BYTE v15[624];
  unsigned int v16;

  v6 = *(_QWORD*)(*(_QWORD*)(a2 + 64) + 64LL);
  v7 = CudaDriverRoutine_9ad80(v6);
  v8 = v7;
  CudaDriverRoutine_1dddf0((__int64)v15, v7, a2, a3);
  v9 = *(void (**)(_QWORD*, _BYTE*))(v6 + 18696);
  for (v16 = 0; v16 < 64; v16 += 2) {
    *(__int128*)&v14[v16] = 0;
    // Stops clang from making the inline zeroing a memset call.
    __asm__ volatile("" ::"r"(v14) : "memory");
  }
  v9(v14, v15);
  v10 = *a1;
  if (v8 != 0) {
    result = (*(__int64 (**)(__int64, _QWORD, _QWORD*))(v6 + 18704))(
        *a1, *(_QWORD*)(a2 + 8), v14);
  }
  else {
    v12 = *(__int64 (**)(__int64, __int64, _QWORD, _QWORD*, __int64, __int64))(
        v6 + 19248);
    v13 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 64));
    result = v12(v10, v13, *(_QWORD*)(a2 + 8), v14, 512, 2);
  }
  *a1 = result;
  return result;
}

__int64 cuda_driver_1df890(unsigned __int64 a1, _QWORD* a2, __int64 a3,
                           _DWORD* a4)
{
  __int64 result;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;

  result = 1;
  if (a1 != 0 && a2 != nullptr && a3 != 0 && a4 != nullptr) {
    result = CudaDriverRoutine_df060(nullptr);
    if ((_DWORD)result == 0) {
      v8 = cuda_driver_1dbe40(0, a1, &v14);
      if (v8 != 0) {
        v9 = v8;
        CudaDriverStub_107f90(*(_QWORD*)(*(_QWORD*)(v8 + 72) + 632LL) + 128LL);
        result =
            (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(v9 + 72) + 632LL) +
                                    2320LL))((void*)*(_QWORD*)(v9 + 72));
        if ((_DWORD)result == 0) {
          v10 = CudaDriverRoutine_1dd040(v9);
          v11 = v14;
          if (v10) {
            v12 = CudaDriverRoutine_1dd080(v9);
          }
          else {
            v12 = CudaDriverStub_1db1a0(v9);
          }
          *a2 = v12 + v11;
          v13 = CudaDriverRoutine_1db1b0(v9);
          *a4 = (unsigned __int8)cuda_driver_predicates_1dc7a0(v13) != 0;
          CudaDriverStub_108070(*(_QWORD*)(*(_QWORD*)(v9 + 72) + 632LL) +
                                128LL);
          return 0;
        }
      }
      else {
        return 1;
      }
    }
  }
  return result;
}

__int64 cuda_driver_1dfc10(_QWORD* a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  int v6;
  __int128 v7;

  v6 = 1;
  v7 = (__typeof__(v7)){0};
  v5 = 0x10000001CLL;
  result = (*(__int64 (**)(__int64*))((char*)((_UNKNOWN*)0x2E8LL) +
                                      CudaDriverData_1422bb0))(&v5);
  if ((_DWORD)result != 0) {
    CudaDriverRoutine_1e9390(result);
    puts_plt("NvRmMemQueryHeapParams call failed");
    return 999;
  }
  else {
    *a1 = *((_QWORD*)&v7 + 1);
    *a2 = 0;
  }
  return result;
}

__int64 cuda_driver_1e0200(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 result;
  __int64* v5;
  _OWORD* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  void* v10;
  int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  int v23;
  unsigned int v24;
  int v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  char v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  int v40;
  int v41;
  char v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned int v55;
  __int64 v56;
  struct {
    unsigned int v57;
    char v58;
    char gap5_[3];
    int v59;
  } v57_;
  struct {
    char gap8_[4];
    int v60;
    __int64 v61;
    int v62;
  } v60_;
  struct {
    char gap16_[12];
    _DWORD v63[9];
    __int128 v64;
  } v63_;
  int v65;
  __int128 v66;
  _BYTE v67[76];
  unsigned __int64 v68[48];

  v1 = a1 + 0x8000;
  v60_.v61 = 0;
  v65 = 96;
  v2 = *(unsigned __int8*)(a1 + 34233);
  memset(&v63_.v63[1], 0, 32);
  memset(v67, 0, sizeof(v67));
  v66 = (__typeof__(v66)){0};
  v63_.v64 = (__typeof__(v63_.v64)){0};
  *(_DWORD*)&v67[68] = 1;
  v63_.v63[3] = 1;
  v60_.v62 = 0;
  v63_.v63[0] = 52;
  v60_.v60 = 16;
  if (v2 != 0) {
    return 801;
  }
  v5 = *(__int64**)(*(_QWORD*)a1 + 8LL);
  result = CudaDriverRoutine_61ac0();
  if ((_DWORD)result != 0) {
    return result;
  }
  v6 = (_OWORD*)CudaDriverStub_12e330(112);
  *(_QWORD*)(v1 + 1096) = v6;
  if (v6 == nullptr) {
    goto LABEL_79;
  }
  v6[1] = (__typeof__(v6[1])){0};
  v6[2] = (__typeof__(v6[2])){0};
  v6[3] = (__typeof__(v6[3])){0};
  v6[4] = (__typeof__(v6[4])){0};
  *v6 = (__typeof__(*v6)){0};
  v6[5] = (__typeof__(v6[5])){0};
  v6[6] = (__typeof__(v6[6])){0};
  *(_DWORD*)(*(_QWORD*)(v1 + 1096) + 8LL) = -1;
  if (*(_QWORD*)(v5[2016] + 24) == 0) {
    CudaDriverRoutine_1edfe0((__int64)v68);
    v12 = CudaDriverRoutine_1ee060((__int64)v5, v68, (__int64*)(v5[2016] + 24));
    if (v12 != 0) {
      goto LABEL_51;
    }
  }
  v7 = CudaDriverStub_1ee180();
  v8 = 1024;
  v9 = v7;
  *(_DWORD*)v67 = 1024;
  v10 = CudaDriverData_1422118;
  v11 = *(_DWORD*)((char*)&CudaDriverRoutine_445c +
                   (_QWORD)CudaDriverData_1422118);
  if (v11 != 4) {
    v8 = v11 << 8;
    *(_DWORD*)v67 = v11 << 8;
  }
  if (*(_BYTE*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) +
                           (_QWORD)CudaDriverData_1422118) +
                75LL) != 0) {
    v67[4] = 1;
  }
  else {
    v13 = v5[8];
    if ((*(_BYTE*)(v13 + 16977) & 2) != 0 &&
        ((v14 = *(_QWORD*)(v13 + 19824), v15 = *(unsigned __int8*)(v14 + 124),
          v16 = *(_QWORD*)(v14 + 96), v15 != 0) ||
         *(_BYTE*)(v16 + 268) != 0)) {
      v17 = *(unsigned __int8*)(v16 + 6);
      v67[4] = v17;
      if (v17 == 0) {
        v8 = 0;
      }
    }
    else {
      v8 = 0;
      v67[4] = 0;
    }
  }
  v18 = v5[10];
  *(_DWORD*)&v67[8] = v8;
  v19 = CudaDriverRoutine_1ebbc0(v18);
  v20 = *(_QWORD*)(v1 + 1048);
  *(_QWORD*)&v67[12] = v19;
  v21 = *(_QWORD**)(*(_QWORD*)(v20 + 200) + 88LL);
  if (v21 != nullptr) {
    if (v21[1] != 0) {
      *(_QWORD*)&v67[28] = v21[1];
      *(_QWORD*)&v67[12] = 0;
    }
    else {
      *(_QWORD*)&v67[20] = *v21;
    }
  }
  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)(v9 + 632) + 2320LL))(v9, &v67[52]);
  v22 = CudaDriverStub_1ee190(*(_QWORD*)(v5[2016] + 24));
  *(_QWORD*)&v67[36] = 4096;
  *(_QWORD*)&v67[44] = v22;
  v23 = *(_DWORD*)(a1 + 32);
  v24 = v23 - 1;
  if ((unsigned int)(v23 - 1) >= 0xA) {
    v26 = 0;
    if (v23 == 0) {
      *(_DWORD*)&v67[56] =
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v5[8] + 19824) + 96LL) + 8LL);
      *(_DWORD*)&v67[60] =
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5[8] + 19824) + 96LL) +
                                44LL) +
                     8LL);
      *(_DWORD*)(a1 + 84) = *(
          _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 8LL) + 64LL) + 3388LL);
    }
  }
  else {
    v25 = CudaDriverRoutine_1e86f0(v5[8])
              ? 0
              : *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v5[8] + 19824) + 104LL) +
                           28LL * v24 + 8);
    *(_DWORD*)&v67[60] = v25;
    v26 = 3;
    *(_DWORD*)&v67[56] =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v5[8] + 19824) + 96LL) + 12LL);
  }
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5[8] + 19824) + 96LL) + 16LL) & 1) ==
      0) {
    *(_DWORD*)&v67[60] = -1;
  }
  v27 = CudaDriverRoutine_1a1320(
      *(_QWORD*)&(*(_BYTE(*)[8])0x1588LL)[(_QWORD)v10]);
  if (v27 == 0) {
  LABEL_79:
    v38 = 2;
    goto LABEL_80;
  }
  v28 = *(_DWORD*)&v67[56];
  v29 = a1 + 4 * v26;
  *(_DWORD*)(v29 + 56) = v27;
  *(_DWORD*)(v29 + 76) = v28;
  v30 = *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5[8] + 19824) + 96LL) + 264LL);
  if (v30 != 0) {
    v31 = CudaDriverStub_10f370((__int64)v5);
    v30 = 1;
    if (v31 != 2 && v67[4] == 0) {
      v30 = *(_DWORD*)(*(_QWORD*)(v5[8] + 19824) + 120LL) == 1;
    }
  }
  v67[64] = v30;
  v67[65] = 1;
  if ((*(unsigned __int8 (**)(void*))(v5[8] + 21488))(*(void**)&v5[8]) != 0) {
    v32 = 3;
  }
  else {
    v32 = 1;
  }
  *(_DWORD*)&v67[68] = v32;
  v33 = *(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v10);
  if (*(_BYTE*)(v33 + 75) != 0) {
    v67[72] = 1;
    goto LABEL_49;
  }
  v34 = v5[8];
  v35 = 0;
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v34 + 19824) + 96LL) + 17LL) == 1 &&
      v67[4] != 0) {
    if (!CudaDriverRoutine_9aa30(v5[8])) {
      goto LABEL_47;
    }
    v35 = *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v34 + 19824) + 96LL) + 270LL);
    if (v35 != 0) {
      if ((*(unsigned __int8 (**)(void*))(v5[8] + 21448))(*(void**)&v5[8]) !=
          0) {
        v35 = *(_BYTE*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v10) +
                        73LL) == 0;
        goto LABEL_48;
      }
    LABEL_47:
      v35 = 0;
    }
  }
LABEL_48:
  v67[72] = v35;
  v33 = *(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v10);
LABEL_49:
  v67[73] = *(_BYTE*)(v33 + 74);
  *(_QWORD*)&v66 = *(_QWORD*)(v1 + 1096) + 32LL;
  *((_QWORD*)&v66 + 1) = *(_QWORD*)(*(_QWORD*)(v5[8] + 19824) + 88LL);
  v36 = CudaDriverData_1422bb0;
  v37 = (*(__int64 (**)(int*))((char*)((__int64*)0x10LL) +
                               CudaDriverData_1422bb0))(&v65);
  if ((_DWORD)v37 != 0) {
    v12 = CudaDriverRoutine_1e9390(v37);
  LABEL_51:
    v38 = v12;
  LABEL_80:
    cuda_driver_1e08a0(a1);
    return v38;
  }
  *(_QWORD*)&v63_.v63[1] = *(_QWORD*)(*(_QWORD*)(v1 + 1096) + 32LL);
  (*(void (**)(_DWORD*))((char*)((_UNKNOWN*)0xE8LL) + v36))(v63_.v63);
  *(_DWORD*)(*(_QWORD*)(v1 + 1096) + 104LL) = v63_.v63[3];
  v60_.v61 = *(_QWORD*)(*(_QWORD*)(v1 + 1096) + 32LL);
  (*(void (**)(int*))((char*)((_UNKNOWN*)0xECLL) + v36 + 4))(&v60_.v60);
  *(_DWORD*)(*(_QWORD*)(v1 + 1096) + 4LL) = v60_.v62;
  v39 = *(_QWORD*)(v1 + 1096);
  if (*(_DWORD*)(v39 + 4) == -1 ||
      (*(_QWORD*)(v39 + 16) = *(_QWORD*)&v63_.v63[4],
       *(_QWORD*)(*(_QWORD*)(v1 + 1096) + 16LL) == 0)) {
    v38 = 999;
    goto LABEL_80;
  }
  if (CudaDriverRoutine_1e26f0((_DWORD*)a1)) {
    v12 = CudaDriverRoutine_1e27d0((__int64*)a1);
    if (v12 != 0) {
      goto LABEL_51;
    }
  }
  **(_DWORD**)(v1 + 1096) = CudaDriverRoutine_1a1320(
      *(_QWORD*)&(*(_BYTE(*)[8])0x1588LL)[(_QWORD)v10]);
  if (**(_DWORD**)(v1 + 1096) == 0) {
    goto LABEL_79;
  }
  CudaDriverRoutine_196020((__int64)&v57_.v57, (__int64)v5);
  v40 = *(_DWORD*)(a1 + 32);
  v57_.v57 = 1024;
  v41 = CudaDriverRoutine_1ff0d0((__int64)v5, v40);
  v42 = v57_.v58;
  v57_.v59 = v41;
  *(_QWORD*)(a1 + 48) = 0;
  v57_.v58 = v42 & 0xFB;
  v12 = CudaDriverRoutine_196060(a1, &v57_.v57);
  if (v12 != 0) {
    goto LABEL_51;
  }
  *(_DWORD*)(a1 + 96) = -1;
  CudaDriverRoutine_1ee1a0(*(_QWORD*)(v5[2016] + 24));
  CudaDriverRoutine_107f40((_QWORD*)(*(_QWORD*)(v1 + 1096) + 80LL), 75, 0);
  v43 = *(_QWORD*)a1;
  if (*(_QWORD*)(*(_QWORD*)a1 + 33160LL) != 0) {
    v12 = CudaDriverRoutine_98190((__int64)v5, 2u);
    if (v12 != 0) {
      goto LABEL_51;
    }
    v43 = *(_QWORD*)a1;
  }
  v44 = *(_QWORD*)(v43 + 33744);
  if ((v44 == 0 && *(_DWORD*)(a1 + 32) == 0 || *(_QWORD*)(v1 + 1048) == v44) &&
      *(_QWORD*)&v63_.v63[6] != 0) {
    *(_DWORD*)(*(_QWORD*)(v1 + 1096) + 68LL) = v63_.v63[6];
    v45 = *(_QWORD*)(v1 + 1096);
    v46 = *(_DWORD*)(v45 + 104) == 3 ? 1 : 2;
    *(_DWORD*)(v45 + 64) = v46;
    v47 = *(_QWORD*)(v1 + 1096);
    if (*(_DWORD*)(v47 + 64) != 0) {
      v48 = 6;
      do {
        *(_QWORD*)(*(_QWORD*)(v1 + 1096) + 8 * v48) =
            CudaDriverStub_12e330(*(unsigned int*)(v47 + 68));
        v47 = *(_QWORD*)(v1 + 1096);
        if (*(_QWORD*)(v47 + 8 * v48) == 0) {
          goto LABEL_79;
        }
        v49 = v48 - 5;
        ++v48;
      } while (v49 < *(unsigned int*)(v47 + 64));
    }
  }
  v50 = v5[2016];
  v51 = *(unsigned int*)(v50 + 33064);
  v52 = *(_QWORD*)(*(_QWORD*)(v1 + 1096) + 32LL);
  *(_DWORD*)(v50 + 33064) = v51 + 1;
  *(_QWORD*)(v50 + 8 * v51 + 32) = v52;
  v53 = v5[8];
  if (!CudaDriverRoutine_9aa30(v53)) {
    return 0;
  }
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v53 + 19824) + 96LL) + 270LL) == 0 ||
      v67[4] == 0) {
    return 0;
  }
  v55 = v63_.v63[8];
  v56 = (unsigned int)v63_.v64;
  *(_WORD*)(v1 + 1456) = 257;
  CudaDriverRoutine_5bfe0(a1, v55, v56);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5[8] + 19824) + 96LL) + 18LL) != 1) {
    return 0;
  }
  *(_QWORD*)(v1 + 1448) = *(_QWORD*)((char*)&v63_.v64 + 4);
  return 0;
}

__int64 cuda_driver_1e08a0(__int64 result)
{
  int* v1;
  __int64 v2;
  void* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  void (*v10)(int*);
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  void (*v19)(int*);
  __int64* v20;
  struct {
    char gap8_[4];
    int v21;
    __int64 v22;
  } v21_;
  int v23;
  __int64 v24;
  struct {
    char gap32_[4];
    int v25;
    __int64 v26;
  } v25_;

  v25_.v26 = 0;
  v24 = 0;
  v25_.v25 = 12;
  v23 = 12;
  v1 = *(int**)(result + 33864);
  if (v1 != nullptr) {
    v2 = result;
    v3 = CudaDriverData_1422118;
    if (*v1 != 0) {
      CudaDriverRoutine_1a1670(
          *(_QWORD*)&(*(_BYTE(*)[8])0x1588LL)[(_QWORD)CudaDriverData_1422118],
          *v1);
      **(_DWORD**)(v2 + 33864) = 0;
    }
    v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 8LL) + 16128LL);
    v6 = *(_QWORD*)(v4 + 24);
    v5 = (__int64*)(v4 + 24);
    if (v6 != 0) {
      CudaDriverRoutine_1ee140(v5);
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 8LL) + 16128LL) + 24LL) =
          0;
    }
    v7 = *(_QWORD**)(v2 + 33864);
    v8 = CudaDriverData_1422bb0;
    if (v7[12] != 0) {
      v21_.v22 = v7[12];
      v21_.v21 = 12;
      (*(void (**)(int*))((char*)((_UNKNOWN*)0x88LL) + CudaDriverData_1422bb0))(
          &v21_.v21);
      v7 = *(_QWORD**)(v2 + 33864);
    }
    v9 = v7[5];
    if (v9 != 0) {
      v10 = *(void (**)(int*))((char*)((_UNKNOWN*)0xF8LL) + v8);
      v25_.v26 = v9;
      v10(&v25_.v25);
      *(_QWORD*)(*(_QWORD*)(v2 + 33864) + 40LL) = 0;
      v7 = *(_QWORD**)(v2 + 33864);
    }
    CudaDriverRoutine_107f60(v7 + 10);
    v11 = *(_QWORD*)(v2 + 33864);
    if (*(_DWORD*)(v11 + 64) != 0) {
      v12 = 6;
      do {
        v13 = *(_QWORD*)(v11 + 8 * v12);
        if (v13 != 0) {
          CudaDriverRoutine_12e340(v13);
          *(_QWORD*)(*(_QWORD*)(v2 + 33864) + 8 * v12) = 0;
          v11 = *(_QWORD*)(v2 + 33864);
        }
        ++v12;
      } while (v12 - 6 < (unsigned __int64)*(unsigned int*)(v11 + 64));
    }
    v14 = *(_QWORD*)&(*(_BYTE(*)[8])0x1588LL)[(_QWORD)v3];
    v15 = 12;
    if ((unsigned int)(*(_DWORD*)(v2 + 32) - 1) >= 0xA) {
      v15 = 0;
    }
    v16 = v2 + v15;
    CudaDriverRoutine_1a1670(v14, *(_DWORD*)(v2 + v15 + 56));
    v17 = *(_QWORD*)(v2 + 33864);
    *(_DWORD*)(v16 + 56) = 0;
    *(_DWORD*)(v16 + 76) = 0;
    v18 = *(_QWORD*)(v17 + 32);
    if (v18 != 0) {
      v19 = *(void (**)(int*))((char*)((_UNKNOWN*)0xFCLL) + v8 + 4);
      v24 = v18;
      v19(&v23);
      v17 = *(_QWORD*)(v2 + 33864);
    }
    *(_OWORD*)(v17 + 16) = (__typeof__(*(_OWORD*)(v17 + 16))){0};
    *(_OWORD*)(v17 + 32) = (__typeof__(*(_OWORD*)(v17 + 32))){0};
    *(_OWORD*)(v17 + 48) = (__typeof__(*(_OWORD*)(v17 + 48))){0};
    *(_OWORD*)(v17 + 64) = (__typeof__(*(_OWORD*)(v17 + 64))){0};
    *(_OWORD*)v17 = (__typeof__(*(_OWORD*)v17)){0};
    *(_OWORD*)(v17 + 80) = (__typeof__(*(_OWORD*)(v17 + 80))){0};
    *(_OWORD*)(v17 + 96) = (__typeof__(*(_OWORD*)(v17 + 96))){0};
    CudaDriverRoutine_12e340(*(_QWORD*)(v2 + 33864));
    v20 = *(__int64**)(v2 + 48);
    *(_QWORD*)(v2 + 33864) = 0;
    if (v20 != nullptr) {
      cuda_driver_1964d0(v20);
      *(_QWORD*)(v2 + 48) = 0;
    }
    return CudaDriverRoutine_61af0(v2);
  }
  return result;
}

__int64 cuda_driver_1e0cd0(_QWORD* a1)
{
  int v2;
  __int64 v3;
  int v4;

  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*a1 + 8LL) + 64LL) +
                                      19824LL) +
                           96LL) +
                5LL) != 0) {
    v2 = 16;
    v3 = *(_QWORD*)(a1[4233] + 32LL);
    v4 = 4;
    if ((unsigned int)CudaDriverData_1440838(&v2) != 0) {
      return 999;
    }
  }
  else {
    *(_BYTE*)(a1[4233] + 24LL) = 1;
  }
  return 0;
}

__int64 cuda_driver_1e0d60(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  unsigned __int64 v10;
  char* v11;
  char* v11a;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  void (*v27)(int*);
  struct {
    __int64 v28;
    __int64 v29;
  } v28_;
  struct {
    char gap16_[4];
    int v30;
    __int64 v31;
    __int64 v32;
  } v30_;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  unsigned int v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  int v44;
  __int64 v45;

  v1 = *(unsigned int*)(a1 + 28);
  v11a =
      (char*)__builtin_alloca((24LL * (unsigned int)v1 + 15) & 0x3FFFFFFFF0LL);
  v3 = *(_QWORD*)(a1 + 16);
  v45 = 0;
  v42 = 0;
  v41 = 0;
  v44 = 0;
  v43 = nullptr;
  v34 = 0;
  v35 = 68;
  v33 = 12;
  v4 = *(_QWORD*)v3;
  v5 = *(_QWORD*)(**(_QWORD**)v3 + 8LL);
  result = CudaDriverRoutine_98650(v5, 0);
  if ((_DWORD)result == 0) {
    v28_.v28 = v4;
    v28_.v29 = v4 + 0x8000;
    if (*(_DWORD*)(a1 + 28) != 0) {
      v10 = 0;
      v11 = v11a;
      do {
        v12 = (unsigned int)(v10 + *(_DWORD*)(a1 + 24)) % *(_DWORD*)(v3 + 8);
        v13 = *(_QWORD*)(v3 + 64);
        *(_DWORD*)v11 = 24;
        v14 = v13 + 56LL * v12;
        ++v10;
        *(_QWORD*)(v11 + 4) =
            *(_QWORD*)(v14 + 16) + CudaDriverStub_1ff640(*(_QWORD*)v14);
        *(_QWORD*)(v11 + 12) =
            (unsigned __int64)*(unsigned int*)(v14 + 28) >> 2;
        v11 += 24;
      } while (v10 < *(unsigned int*)(a1 + 28));
    }
    CudaDriverStub_57450_alt1(v5);
    v15 = v28_.v29;
    LOBYTE(v44) = 0;
    v16 = *(_BYTE*)(v28_.v29 + 1424);
    v17 = *(_QWORD*)(v28_.v29 + 1096);
    if (v16 != 0 && *(_DWORD*)(v17 + 68) != 0) {
      v18 = (unsigned int)(*(_DWORD*)(v17 + 72) + 1) % *(_DWORD*)(v17 + 64);
      v19 = *(_QWORD*)(v17 + 8LL * v18 + 48);
      v42 = *(unsigned int*)(v17 + 68);
      v41 = v19;
    }
    else {
      v18 = 0;
    }
    v20 = *(_QWORD*)(v17 + 32);
    v38 = v11a;
    v36 = v20;
    v37 = 0x80000000;
    v21 = *(_QWORD*)(v28_.v29 + 1432);
    v39 = v1;
    BYTE1(v44) = v16;
    v40 = v21;
    v43 = &v45;
    v22 = CudaDriverData_1422bb0;
    v23 = (*(__int64 (**)(int*))((char*)((__int64*)0x18LL) +
                                 CudaDriverData_1422bb0))(&v35);
    if ((_DWORD)v23 == 0 ||
        (_DWORD)(result = CudaDriverRoutine_1e9390(v23)) == 0) {
      if (*(_BYTE*)(v15 + 1424) != 0) {
        v24 = *(_QWORD*)(v15 + 1096);
        if (*(_DWORD*)(v24 + 104) == 3) {
          v30_.v30 = 20;
          v30_.v31 = v45;
          v30_.v32 = 0;
          v25 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0xD8LL) + v22))(
              &v30_.v30);
          if ((_DWORD)v25 != 0) {
            return CudaDriverRoutine_1e9390(v25);
          }
          CudaDriverRoutine_5bfe0(v28_.v28, v30_.v32, HIDWORD(v30_.v32));
          v34 = v45;
          (*(void (**)(int*))((char*)((_UNKNOWN*)0xF8LL) + v22))(&v33);
          *(_BYTE*)(v15 + 1456) = 1;
        }
        else {
          v26 = *(_QWORD*)(v24 + 40);
          CudaDriverStub_107f90(v24 + 80);
          *(_QWORD*)(*(_QWORD*)(v15 + 1096) + 40LL) = v45;
          CudaDriverStub_108070(*(_QWORD*)(v15 + 1096) + 80LL);
          if (v26 != 0) {
            v27 = *(void (**)(int*))((char*)((_UNKNOWN*)0xF8LL) + v22);
            v34 = v26;
            v27(&v33);
          }
          *(_DWORD*)(*(_QWORD*)(v15 + 1096) + 72LL) = v18;
        }
      }
      *(_QWORD*)(v15 + 1432) = 0;
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_1e1070(__int64 a1)
{
  return (
      *(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 8LL) + 64LL) +
                             19576LL))((void*)*(_QWORD*)(*(_QWORD*)a1 + 8LL));
}

__int64 cuda_driver_1e10a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 result;
  __int64 v7;
  int v8;
  int v9;
  __int64 v11;
  __int64 (*v12)(_QWORD*);
  int v13;
  _QWORD v16[2];
  _DWORD v17[9];

  v2 = a1;
  v3 = *(_QWORD*)(a1 + 33864);
  memset(&v17[1], 0, 32);
  v4 = *(_QWORD*)(v3 + 40);
  v17[0] = 36;
  if (a2 != 0) {
    v2 = *(_QWORD*)a2;
    v5 = *(_DWORD*)(a2 + 16);
    if (v5 == 1) {
      *(_QWORD*)&v17[3] = *(_QWORD*)(a2 + 8);
      result = cuda_driver_121fa0(v16);
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_8;
    }
    if (v5 != 0) {
      v4 = *(_QWORD*)(a2 + 8);
    LABEL_15:
      CudaDriverStub_107f90(*(_QWORD*)(v2 + 33864) + 80LL);
      LODWORD(v16[0]) = 16;
      v11 = CudaDriverData_1422bb0;
      do {
        v12 = *(__int64 (**)(_QWORD*))((char*)((_UNKNOWN*)0x98LL) + v11);
        v16[1] = v4;
        HIDWORD(v16[0]) = 100;
        v8 = v12(v16);
        v13 = cuda_driver_5e820(*(_QWORD*)v2, 1u);
      } while (v8 == 5 && v13 == 0);
      CudaDriverStub_108070(*(_QWORD*)(v2 + 33864) + 80LL);
      goto LABEL_21;
    }
  }
  if (*(_BYTE*)(v2 + 34224) == 0) {
    goto LABEL_15;
  }
  CudaDriverRoutine_5bfb0(v2, &v17[3], &v17[4]);
  result = cuda_driver_121fa0(v16);
  if ((_DWORD)result != 0) {
    return result;
  }
LABEL_8:
  *(_QWORD*)&v17[1] = *(_QWORD*)v16[0];
  *(_QWORD*)&v17[5] = 100000;
  *(_QWORD*)&v17[7] = 0;
  v7 = CudaDriverData_1422bb0;
  do {
    v8 = (*(__int64 (**)(_DWORD*))((char*)((_UNKNOWN*)0x90LL) + v7))(v17);
    v9 = cuda_driver_5e820(*(_QWORD*)v2, 1u);
  } while (v8 == 5 && v9 == 0);
LABEL_21:
  if (v8 == 5 || v8 == 0) {
    return 0;
  }
  else {
    return 999;
  }
}

__int64 cuda_driver_1e1230(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  _DWORD v11[5];

  if (a2 == nullptr) {
    return 999;
  }
  v2 = a1 + 0x8000;
  *a2 = 0;
  if (*(_BYTE*)(a1 + 34224) == 0) {
    CudaDriverStub_107f90(*(_QWORD*)(a1 + 33864) + 80LL);
    v6 = *(_QWORD*)(v2 + 1096);
    v7 = *(_QWORD*)(v6 + 40);
    if (v7 != 0) {
      *(_QWORD*)v11 = 0;
      *(_QWORD*)&v11[2] = v7;
      v10 = 20;
      v8 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0xA8LL) +
                                  CudaDriverData_1422bb0))(&v10);
      if ((_DWORD)v8 != 0) {
        v9 = CudaDriverRoutine_1e9390(v8);
        v5 = *(_QWORD*)v11;
        CudaDriverStub_108070(*(_QWORD*)(v2 + 1096) + 80LL);
        result = v9;
        if (v5 != 0) {
          goto LABEL_15;
        }
      }
      else {
        v5 = *(_QWORD*)v11;
        CudaDriverStub_108070(*(_QWORD*)(v2 + 1096) + 80LL);
        result = 0;
        if (v5 != 0) {
          goto LABEL_15;
        }
      }
    }
    else {
      CudaDriverStub_108070(v6 + 80);
    }
    return 999;
  }
  memset(v11, 0, sizeof(v11));
  v10 = 24;
  CudaDriverRoutine_5bfb0(a1, v11, &v11[1]);
  v11[2] = 1;
  result = CudaDriverData_14407b8(&v10);
  if ((_DWORD)result != 0) {
    result = CudaDriverRoutine_1e9390(result);
  }
  v5 = *(_QWORD*)&v11[3];
  if (*(_QWORD*)&v11[3] == 0) {
    return 999;
  }
LABEL_15:
  *a2 = v5;
  return result;
}

__int64 cuda_driver_1e16e0(__int64 a1, unsigned int a2)
{
  __int64 result;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  struct {
    char gap8_[4];
    int v7;
    __int64 v8;
    int v9;
    unsigned int v10;
  } v7_;

  v7_.v9 = 256;
  v7_.v8 = 0;
  v7_.v7 = 20;
  if (a2 > 2) {
    return 999;
  }
  v7_.v10 = a2 + 1;
  if (**(_QWORD**)(*(_QWORD*)(a1 + 200) + 88LL) != 0) {
    v7_.v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 33864LL) + 32LL);
    result = CudaDriverData_1440840(&v7_.v7);
    if ((_DWORD)result == 0) {
      return result;
    }
    return CudaDriverRoutine_1e9390(result);
  }
  if (*(_DWORD*)(a1 + 24) != 0) {
    v4 = 33864;
    v5 = 0;
    v6 = CudaDriverData_1422bb0;
    while (1) {
      v7_.v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + v4) + 32LL);
      result =
          (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x128LL) + v6))(&v7_.v7);
      if ((_DWORD)result != 0) {
        break;
      }
      ++v5;
      v4 += 34256;
      if (v5 >= *(unsigned int*)(a1 + 24)) {
        return 0;
      }
    }
    return CudaDriverRoutine_1e9390(result);
  }
  return 0;
}

__int64 cuda_driver_1e1800(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;

  v2 = *(__int64**)(*(_QWORD*)(a1 + 200) + 88LL);
  if (v2 != nullptr) {
    v3 = *v2;
    if (v3 != 0) {
      v11 = v3;
      v10 = 16;
      v12 = 3;
      result = CudaDriverData_1440830(&v10);
      if ((_DWORD)result == 0) {
        return result;
      }
      return CudaDriverRoutine_1e9390(result);
    }
  }
  if (*(_DWORD*)(a1 + 24) != 0) {
    v5 = 33864;
    v6 = 0;
    v7 = CudaDriverData_1422bb0;
    while (1) {
      v8 = *(_QWORD*)(a1 + 8);
      v11 = 0;
      v12 = 1;
      v10 = 16;
      v9 = *(_QWORD*)(v8 + v5);
      v12 = 3;
      v11 = *(_QWORD*)(v9 + 32);
      result = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x120LL) + v7))(&v10);
      if ((_DWORD)result != 0) {
        break;
      }
      ++v6;
      v5 += 34256;
      if (v6 >= *(unsigned int*)(a1 + 24)) {
        return 0;
      }
    }
    return CudaDriverRoutine_1e9390(result);
  }
  return 0;
}

__int64 cuda_driver_1e19c0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  int v8;
  __int64 v9;
  __int64 v10;
  char v11;
  char v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 i;
  __int64 v16;
  bool v17;
  __int64 v18;
  int v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 j;
  __int64 v25;
  struct {
    char gap8_[4];
    int v26;
    __int64 v27;
    __int64 v28;
  } v26_;
  __int64 v29;

  v1 = *(_QWORD*)a1;
  v3 = *(_QWORD*)(**(_QWORD**)a1 + 8LL);
  if ((*(_BYTE*)(v3 + 1952) & 4) != 0) {
    v29 = *(_QWORD*)(*(_QWORD*)(v3 + 64) + 16864LL);
    __asm__ volatile("" ::"r"(v29));
    v8 = *(_DWORD*)(a1 + 8);
    result = 999;
    if (v8 <= 2) {
      if (v8 == 1) {
        v17 = *(_DWORD*)(v1 + 32) == 0;
        v18 = 33760;
        if (v17) {
          v18 = 33160;
        }
        v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 64) +
                                                         16864LL) +
                                              72LL) +
                                   v18) +
                        216LL);
        if (v9 == 0) {
          return 999;
        }
      }
      else {
        if (v8 != 2) {
          return result;
        }
        v9 = CudaDriverStub_122310(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 16864LL));
        if (v9 == 0) {
          return 999;
        }
      }
    }
    else {
      switch (v8) {
      case 3:
        v9 = CudaDriverStub_122340(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 16864LL));
        if (v9 == 0) {
          return 999;
        }
        break;
      case 4:
        v9 = CudaDriverStub_122320(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 16864LL));
        if (v9 == 0) {
          return 999;
        }
        break;
      case 5:
        v9 = CudaDriverStub_122350(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 16864LL));
        if (v9 == 0) {
          return 999;
        }
        break;
      default:
        return result;
      }
    }
    v19 = *(_DWORD*)(v9 + 20);
    goto LABEL_42;
  }
  v4 = CudaDriverRoutine_12e510(1, 4);
  *(_QWORD*)(a1 + 48) = v4;
  if (v4 == 0) {
    return 2;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(v3 + 64) + 19824LL);
  v6 = *(_QWORD*)(v5 + 96);
  if (((*(_BYTE*)(v6 + 267) & 1) != 0 || *(_BYTE*)(v6 + 19) == 1) &&
      *(_BYTE*)(CudaDriverData_1435ed8 + 72) == 0) {
    if (*(_DWORD*)(a1 + 8) == 1 && *(_BYTE*)(v5 + 125) != 0) {
      v10 = *(_QWORD*)(v5 + 80);
      v26_.v26 = 20;
      v26_.v27 = v10;
      v26_.v28 = a1 + 20;
      result = CudaDriverData_1440870(&v26_.v26);
      if ((_DWORD)result != 0) {
        result = CudaDriverRoutine_1e9390(result);
      }
      if ((_DWORD)result != 0) {
        return result;
      }
      v11 = 0;
      v12 = 1;
    LABEL_44:
      *(_DWORD*)(a1 + 24) = -1;
      v20 = *(_BYTE*)(a1 + 16);
      *(_QWORD*)(a1 + 40) = 0x100000001LL;
      *(_BYTE*)(a1 + 16) = v20 & 0xFE;
      *(_BYTE*)(*(_QWORD*)a1 + 256LL) = 1;
      *(_BYTE*)(*(_QWORD*)a1 + 257LL) = v11;
      *(_BYTE*)(*(_QWORD*)a1 + 258LL) = v12;
      return 0;
    }
    result = CudaDriverRoutine_1e29b0(a1, 2, a1 + 32);
    if ((_DWORD)result != 0) {
      return result;
    }
    v12 = 0;
  LABEL_43:
    v11 = 1;
    goto LABEL_44;
  }
  if (*(_DWORD*)(*(_QWORD*)a1 + 32LL) != 0) {
    return 0;
  }
  v13 = *(_QWORD*)(v3 + 72);
  v26_.v26 = 16;
  LODWORD(v26_.v28) = 2;
  if (v13 == 0) {
    return 999;
  }
  v14 = v13 + 48;
  for (i = 0;; ++i) {
    v16 = *(_QWORD*)(v14 + 8 * i);
    if (v16 != 0) {
      break;
    }
    if (i >> 5 > 0x80) {
      goto LABEL_32;
    }
  LABEL_28:;
  }
  if (i >> 5 <= 0x80 && *(_DWORD*)(v16 + 32) != 0) {
    goto LABEL_28;
  }
LABEL_32:
  if (*(_QWORD*)(*(_QWORD*)(v16 + 33864) + 96LL) == 0) {
    CudaDriverRoutine_1e27d0((__int64*)v16);
    v26_.v27 = *(_QWORD*)(*(_QWORD*)(v16 + 33864) + 96LL);
    if (v26_.v27 != 0) {
      goto LABEL_48;
    }
    return 999;
  }
  v26_.v27 = *(_QWORD*)(*(_QWORD*)(v16 + 33864) + 96LL);
LABEL_48:
  v21 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x1C0LL) +
                               CudaDriverData_1422bb0))(&v26_.v26);
  if ((_DWORD)v21 == 0 ||
      (_DWORD)(result = CudaDriverRoutine_1e9390(v21)) == 0) {
    v22 = *(_QWORD*)(v3 + 72);
    if (v22 != 0) {
      v23 = v22 + 48;
      for (j = 0;; ++j) {
        v25 = *(_QWORD*)(v23 + 8 * j);
        if (v25 != 0) {
          if (j >> 5 > 0x80 || *(_DWORD*)(v25 + 32) == 0) {
          LABEL_59:
            v19 = *(_DWORD*)(*(_QWORD*)(v25 + 33864) + 8LL);
            goto LABEL_42;
          }
        }
        else if (j >> 5 > 0x80) {
          goto LABEL_59;
        }
      }
    }
    v19 = -1;
  LABEL_42:
    v12 = 0;
    *(_DWORD*)(a1 + 20) = v19;
    goto LABEL_43;
  }
  return result;
}

__int64 cuda_driver_1e1d00(_DWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 i;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;

  v1 = *(_QWORD*)(**(_QWORD**)a1 + 8LL);
  v2 = *(_QWORD*)(*(_QWORD*)(v1 + 64) + 19824LL);
  v3 = *(_QWORD*)(v2 + 96);
  if (((*(_BYTE*)(v3 + 267) & 1) != 0 || *(_BYTE*)(v3 + 19) == 1) &&
      *(_BYTE*)(CudaDriverData_1435ed8 + 72) == 0) {
    if (a1[2] == 1 && *(_BYTE*)(v2 + 125) != 0) {
      return 0;
    }
    result = CudaDriverRoutine_1e29b0((__int64)a1, 3, (__int64)(a1 + 8));
    if ((_DWORD)result == 0) {
      return 0;
    }
    return result;
  }
  if (*(_DWORD*)(*(_QWORD*)a1 + 32LL) != 0) {
    return 0;
  }
  v5 = *(_QWORD*)(v1 + 72);
  v10 = 16;
  v12 = 3;
  if (v5 == 0) {
    return 999;
  }
  v6 = v5 + 48;
  for (i = 0;; ++i) {
    v8 = *(_QWORD*)(v6 + 8 * i);
    if (v8 != 0) {
      break;
    }
    if (i >> 5 > 0x80) {
      goto LABEL_18;
    }
  LABEL_14:;
  }
  if (i >> 5 <= 0x80 && *(_DWORD*)(v8 + 32) != 0) {
    goto LABEL_14;
  }
LABEL_18:
  if (*(_QWORD*)(*(_QWORD*)(v8 + 33864) + 96LL) == 0) {
    CudaDriverRoutine_1e27d0((__int64*)v8);
    v11 = *(_QWORD*)(*(_QWORD*)(v8 + 33864) + 96LL);
    if (v11 != 0) {
      goto LABEL_21;
    }
    return 999;
  }
  v11 = *(_QWORD*)(*(_QWORD*)(v8 + 33864) + 96LL);
LABEL_21:
  v9 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x1C0LL) +
                              CudaDriverData_1422bb0))(&v10);
  if ((_DWORD)v9 == 0) {
    return 0;
  }
  result = CudaDriverRoutine_1e9390(v9);
  if ((_DWORD)result == 0) {
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
