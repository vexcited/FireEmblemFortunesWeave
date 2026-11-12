#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CudaDriverRoutine_1a0e10(_QWORD* result);
__int64 CudaDriverRoutine_107130(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_10dd50(__int64);
__int64 CudaDriverRoutine_121c60(__int64*);
__int64 CudaDriverRoutine_1235f0(__int64 result, char);
__int64 CudaDriverRoutine_125540(__int64);
__int64 CudaDriverRoutine_125580(__int64 result);
__int64 CudaDriverRoutine_12e1e0(__int64);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_1383e0(__int64 result, int);
__int64 CudaDriverRoutine_19bc20(__int64, __int64, _QWORD*, int, char*);
__int64 CudaDriverRoutine_19bcb0(__int64, __int64, __int64*, int, char*, char);
__int64 CudaDriverRoutine_1a0a80(__int64, __int64);
__int64 CudaDriverRoutine_1a0d20(__int64*, __int64, __int64);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64);
__int64 CudaDriverRoutine_1ba7d0(__int64, __int64);
__int64 CudaDriverRoutine_1baa40(_QWORD*, __int64);
__int64 CudaDriverRoutine_1d9f90(_QWORD);
__int64 CudaDriverRoutine_204620(__int64 result, __int64, __int64);
__int64 CudaDriverRoutine_58ee0(__int64*, __int64*);
__int64 CudaDriverRoutine_59350(__int64);
__int64 CudaDriverRoutine_5a6a0(__int64*);
__int64 CudaDriverRoutine_5b540(__int64, __int64, __int64, unsigned int,
                                __int64*);
__int64 CudaDriverRoutine_5b640(_DWORD*, __int64, unsigned int, char, char,
                                char, char, __int64*);
__int64 CudaDriverRoutine_5bf00(__int64);
__int64 CudaDriverRoutine_5ffe0(__int64);
__int64 CudaDriverRoutine_60120(__int64*);
__int64 CudaDriverRoutine_62000(__int64);
__int64 CudaDriverRoutine_649b0(__int64);
__int64 CudaDriverRoutine_6b250(__int64, _QWORD*, __int64, __int64);
__int64 CudaDriverRoutine_6b5f0(int, int);
__int64 CudaDriverRoutine_6b7b0(__int64, char);
__int64 CudaDriverRoutine_6b880(__int64);
__int64 CudaDriverRoutine_6b9d0(__int64);
__int64 CudaDriverRoutine_6c580(__int64, unsigned int, unsigned int,
                                unsigned int, _QWORD*, _BYTE*);
__int64 CudaDriverRoutine_6cac0(unsigned int, unsigned int, unsigned int,
                                unsigned int, unsigned int);
__int64 CudaDriverRoutine_71840(unsigned int, unsigned int, unsigned int,
                                __int64, unsigned int);
__int64 CudaDriverRoutine_76d70();
__int64 CudaDriverRoutine_78230(int, char*, char, _QWORD*);
__int64 CudaDriverRoutine_7d4d0(__int64 result, __int64);
__int64 CudaDriverRoutine_7d5b0();
__int64 CudaDriverRoutine_80be0(__int64 result, __int64, __int64, __int64);
__int64 CudaDriverRoutine_810c0(unsigned int);
__int64 CudaDriverRoutine_817c0(int);
__int64 CudaDriverRoutine_82bc0(__int64, __int64, unsigned __int64, _BYTE*);
__int64 CudaDriverRoutine_83020(__int64);
__int64 CudaDriverRoutine_83600(__int64, int, char);
__int64 CudaDriverRoutine_83de0(unsigned int*, char);
__int64 CudaDriverRoutine_847c0(__int64 result);
__int64 CudaDriverRoutine_84dc0(__int64, __int64*);
__int64 CudaDriverRoutine_85210(__int64, unsigned int, unsigned int, __int64*,
                                __int64);
__int64 CudaDriverRoutine_8ea00(__int64, __int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_b5f70(__int64);
__int64 CudaDriverRoutine_c7ea0(__int64, __int64, unsigned int, char);
__int64 CudaDriverRoutine_d9230(__int64*, __int64, __int64);
__int64 CudaDriverRoutine_df060(__int64*);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_107f90_alt1(char*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_108070_alt1(char*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_108fc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_12db60(_QWORD);
__int64 CudaDriverStub_12db70(_QWORD, _QWORD);
__int64 CudaDriverStub_12db80(_QWORD);
__int64 CudaDriverStub_12dc90();
__int64 CudaDriverStub_12dd00(_QWORD);
__int64 CudaDriverStub_12dd30(_QWORD);
__int64 CudaDriverStub_12dd40(__int64, __int64, unsigned int);
__int64 CudaDriverStub_12dd70(int*, __int64);
__int64 CudaDriverStub_12e260(_QWORD);
__int64 CudaDriverStub_1a0ee0(void);
__int64 CudaDriverStub_1db190(_QWORD);
__int64 CudaDriverStub_1db1a0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_4f840(_QWORD);
__int64 CudaDriverStub_57450(_QWORD, _QWORD);
__int64 CudaDriverStub_9afa0(_QWORD);
__int64 CudaDriverStub_ee000(_QWORD);
__int64 NvRmGpuChannelCreate_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmHost1xSyncpointWait_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __errno_location_plt(_QWORD);
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_108520(__int64);
__int64 cuda_driver_127770(__int64 result);
__int64 cuda_driver_1da1b0(__int64, __int64*, __int64, _QWORD*);
__int64 cuda_driver_2043d0(__int64 result, int);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_6b4a0_alt1(int, __int64*) __asm__("cuda_driver_6b4a0");
__int64 cuda_driver_84ec0_alt1(__int64, unsigned int, _QWORD*, unsigned int,
                               char, _BYTE*, _BYTE*, int8x16_t*, _QWORD*,
                               __int64) __asm__("cuda_driver_84ec0");
__int64 cuda_driver_86100(__int64, unsigned int, __int64*, unsigned int, char,
                          _BYTE*, _BYTE*, __int64*, _OWORD*);
__int64 cuda_driver_97330(int, char*, __int64, unsigned __int64*);
__int64 cuda_driver_98c70(__int64, unsigned int);
__int64 cuda_driver_9b2b0(__int64);
__int64 cuda_driver_b4990(_QWORD*, __int64*, char);
__int64 cuda_driver_ef950(__int64 result);
__int64 cuda_driver_helpers_1dca30(__int64, __int64);
__int64 cuda_driver_misc_helpers_78990(__int64, __int64);
__int64 cuda_driver_misc_helpers_ded50(__int64, __int64*, unsigned int);
__int64 cuda_driver_misc_helpers_deeb0(__int64, char);
__int64 cuda_driver_predicates_10f450(__int64);
__int64 fprintf_plt(_QWORD, const char*, ...);
__int64 fwrite_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 getenv_plt(_QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 zstd_decompress_223310(__int64 result, __int64);
bool CudaDriverRoutine_1a0620(_BOOL8 result);
bool CudaDriverRoutine_1bbf10(__int64, __int64);
bool CudaDriverRoutine_1d8a80(__int64);
bool CudaDriverRoutine_1ec4a0(__int64, _QWORD*);
bool CudaDriverRoutine_98110(_BOOL8 result);
bool CudaDriverRoutine_9aa40(__int64);
bool CudaDriverRoutine_9acf0(__int64);
bool CudaDriverRoutine_9ad50(__int64);
bool cuda_debugger_api_7d1f0();
bool cuda_driver_predicates_9ae50(__int64);
extern _DWORD* CudaDriverData_14230c8;
extern _DWORD CudaDriverData_1116070[4];
extern _DWORD CudaDriverData_11315d8[14];
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_1423028;
extern _UNKNOWN* CudaDriverData_1423030;
extern _UNKNOWN* CudaDriverData_1430208;
extern _UNKNOWN* CudaDriverData_1432190;
extern _UNKNOWN* CudaDriverData_1432500;
extern _UNKNOWN CudaDriverData_1131610;
extern _UNKNOWN CudaDriverData_14347a8;
extern __int128 CudaDriverData_1115260;
extern __int128 CudaDriverData_1115300;
extern __int128 CudaDriverData_1115360;
extern __int128 CudaDriverData_1115450;
extern __int128 CudaDriverData_1115670;
extern __int128 CudaDriverData_11156e0;
extern __int128 CudaDriverData_11157a0;
extern __int128 CudaDriverData_1115a00;
extern __int128 CudaDriverData_1115cc0;
extern __int128 CudaDriverData_1115d10;
extern __int128 CudaDriverData_1116010;
extern __int128 CudaDriverData_11162c0;
extern __int128 CudaDriverData_1411000;
extern __int128 CudaDriverData_1432510;
extern __int128 CudaDriverData_1432530;
extern __int64 (*CudaDriverData_1410b60[])();
extern __int64 (*CudaDriverData_1422c98[108])();
extern __int64 (*CudaDriverData_1422ca0[107])();
extern __int64 (*CudaDriverData_1422ca8[106])();
extern __int64 (*CudaDriverData_1422cb0[105])();
extern __int64 (*CudaDriverData_1422cb8[104])();
extern __int64 (*CudaDriverData_1422d20[91])();
extern __int64 (*CudaDriverData_1422eb8[40])();
extern __int64 (*CudaDriverData_1422fa0[11])();
extern __int64 (*CudaDriverData_1422fe8[2])();
extern __int64 (*CudaDriverData_1422ff0)();
extern __int64 (*CudaDriverData_14324f8)(_QWORD, _QWORD, _QWORD, _QWORD*);
extern __int64 (*CudaDriverData_14324f8_alt1)(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("CudaDriverData_14324f8");
extern __int64 (*CudaDriverRoutine_658d0_ptr[103])();
extern __int64 (*CudaDriverRoutine_65900_ptr[102])();
extern __int64 (*CudaDriverRoutine_65950_ptr[101])();
extern __int64 (*CudaDriverRoutine_659a0_ptr[100])();
extern __int64 (*CudaDriverRoutine_659f0_ptr[98])();
extern __int64 (*CudaDriverRoutine_65a40_ptr[99])();
extern __int64 (*CudaDriverRoutine_66b30_ptr[96])();
extern __int64 (*CudaDriverRoutine_66b80_ptr[92])();
extern __int64 (*CudaDriverRoutine_66bb0_ptr[90])();
extern __int64 (*CudaDriverRoutine_66c00_ptr[89])();
extern __int64 (*CudaDriverRoutine_66dc0_ptr[79])();
extern __int64 (*CudaDriverRoutine_66e10_ptr[80])();
extern __int64 (*CudaDriverRoutine_66e60_ptr[78])();
extern __int64 (*CudaDriverRoutine_66eb0_ptr[77])();
extern __int64 (*CudaDriverRoutine_66f00_ptr[75])();
extern __int64 (*CudaDriverRoutine_66f50_ptr[76])();
extern __int64 (*CudaDriverRoutine_66f90_ptr[74])();
extern __int64 (*CudaDriverRoutine_67040_ptr[71])();
extern __int64 (*CudaDriverRoutine_67150_ptr[69])();
extern __int64 (*CudaDriverRoutine_67220_ptr[68])();
extern __int64 (*CudaDriverRoutine_673f0_ptr[62])();
extern __int64 (*CudaDriverRoutine_67460_ptr[60])();
extern __int64 (*CudaDriverRoutine_67530_ptr[58])();
extern __int64 (*CudaDriverRoutine_67570_ptr[57])();
extern __int64 (*CudaDriverRoutine_675d0_ptr[56])();
extern __int64 (*CudaDriverRoutine_67620_ptr[55])();
extern __int64 (*CudaDriverRoutine_67670_ptr[54])();
extern __int64 (*CudaDriverRoutine_676a0_ptr[53])();
extern __int64 (*CudaDriverRoutine_676e0_ptr[52])();
extern __int64 (*CudaDriverRoutine_67730_ptr[50])();
extern __int64 (*CudaDriverRoutine_67760_ptr[49])();
extern __int64 (*CudaDriverRoutine_677a0_ptr[48])();
extern __int64 (*CudaDriverRoutine_678e0_ptr[43])();
extern __int64 (*CudaDriverRoutine_67930_ptr[44])();
extern __int64 (*CudaDriverRoutine_67960_ptr[41])();
extern __int64 (*CudaDriverRoutine_67b50_ptr[32])();
extern __int64 (*CudaDriverRoutine_67b80_ptr[29])();
extern __int64 (*CudaDriverRoutine_67bc0_ptr[26])();
extern __int64 (*CudaDriverRoutine_67bf0_ptr[28])();
extern __int64 (*CudaDriverRoutine_67c30_ptr[25])();
extern __int64 (*CudaDriverRoutine_67c60_ptr[23])();
extern __int64 (*CudaDriverRoutine_680e0_ptr[36])();
extern __int64 (*CudaDriverRoutine_68640_ptr[15])();
extern __int64 (*CudaDriverRoutine_68920_ptr[10])();
extern __int64 (*CudaDriverRoutine_68990_ptr[8])();
extern __int64 (*CudaDriverRoutine_68a20_ptr[7])();
extern __int64 (*CudaDriverRoutine_68a50_ptr[6])();
extern __int64 (*CudaDriverRoutine_68a80_ptr[5])();
extern __int64 (*CudaDriverRoutine_68ab0_ptr[4])();
extern __int64 (*CudaDriverRoutine_68b00_ptr[87])();
extern __int64 (*CudaDriverRoutine_68c20_ptr[88])();
extern __int64 (*CudaDriverRoutine_68c80_ptr[83])();
extern __int64 (*CudaDriverRoutine_68cc0_ptr[85])();
extern __int64 (*CudaDriverStub_66c50_ptr[86])();
extern __int64 (*CudaDriverStub_67bb0_ptr[27])();
extern __int64 (*CudaDriverStub_680c0_ptr[35])();
extern __int64 (*CudaDriverStub_680d0_ptr[34])();
extern __int64 (*cuda_driver_requests_65a20_ptr[93])();
extern __int64 (*cuda_driver_requests_65aa0_ptr[95])();
extern __int64 (*cuda_driver_requests_65cc0_ptr[97])();
extern __int64 (*cuda_driver_requests_66b60_ptr[94])();
extern __int64 (*cuda_driver_requests_66c60_ptr[84])();
extern __int64 (*cuda_driver_requests_66cb0_ptr[82])();
extern __int64 (*cuda_driver_requests_66d20_ptr[81])();
extern __int64 (*cuda_driver_requests_66fd0_ptr[73])();
extern __int64 (*cuda_driver_requests_67070_ptr[72])();
extern __int64 (*cuda_driver_requests_670f0_ptr[70])();
extern __int64 (*cuda_driver_requests_671a0_ptr[67])();
extern __int64 (*cuda_driver_requests_671e0_ptr[66])();
extern __int64 (*cuda_driver_requests_67250_ptr[65])();
extern __int64 (*cuda_driver_requests_67270_ptr[64])();
extern __int64 (*cuda_driver_requests_672e0_ptr[63])();
extern __int64 (*cuda_driver_requests_67440_ptr[61])();
extern __int64 (*cuda_driver_requests_674c0_ptr[59])();
extern __int64 (*cuda_driver_requests_67710_ptr[51])();
extern __int64 (*cuda_driver_requests_677f0_ptr[47])();
extern __int64 (*cuda_driver_requests_67850_ptr[46])();
extern __int64 (*cuda_driver_requests_67870_ptr[22])();
extern __int64 (*cuda_driver_requests_678c0_ptr[45])();
extern __int64 (*cuda_driver_requests_67910_ptr[42])();
extern __int64 (*cuda_driver_requests_679a0_ptr[39])();
extern __int64 (*cuda_driver_requests_67a90_ptr[33])();
extern __int64 (*cuda_driver_requests_67ab0_ptr[31])();
extern __int64 (*cuda_driver_requests_67b30_ptr[30])();
extern __int64 (*cuda_driver_requests_67c90_ptr[38])();
extern __int64 (*cuda_driver_requests_67ff0_ptr[37])();
extern __int64 (*cuda_driver_requests_68130_ptr[24])();
extern __int64 (*cuda_driver_requests_681f0_ptr[21])();
extern __int64 (*cuda_driver_requests_68370_ptr[19])();
extern __int64 (*cuda_driver_requests_68470_ptr[18])();
extern __int64 (*cuda_driver_requests_68570_ptr[20])();
extern __int64 (*cuda_driver_requests_685c0_ptr[17])();
extern __int64 (*cuda_driver_requests_68620_ptr[14])();
extern __int64 (*cuda_driver_requests_68670_ptr[16])();
extern __int64 (*cuda_driver_requests_686f0_ptr[13])();
extern __int64 (*cuda_driver_requests_68970_ptr[12])();
extern __int64 (*cuda_driver_requests_689e0_ptr[9])();
extern __int64 (*cuda_driver_requests_68ae0_ptr[3])();
extern __int64 CudaDriverData_1423000;
extern __int64 CudaDriverData_1432520;
extern __int64 CudaDriverData_1432540;
extern __int64 CudaDriverData_14403e8;
extern char CudaDriverData_14324a8;
extern char CudaDriverData_14324b0;
extern char CudaDriverData_14324b4;
extern char CudaDriverData_14324b5;
extern char CudaDriverData_14325d0;
extern char CudaDriverData_14325d3;
extern char CudaDriverData_143260c;
extern char CudaDriverData_14328d0;
extern char CudaDriverData_14328d1;
extern char CudaDriverData_14335e4;
extern char CudaDriverData_14358d9;
extern int* CudaDriverData_1423050;
extern int CudaDriverData_14301e8;
extern int CudaDriverData_1430218;
extern int CudaDriverData_14324b8;
extern int CudaDriverData_14324bc;
extern int CudaDriverData_14324c0;
extern int CudaDriverData_14324cc;
extern int CudaDriverData_14325d4;
extern int CudaDriverData_1432610;
extern int CudaDriverData_14328d8;
extern int CudaDriverData_14328dc;
extern int CudaDriverData_1432900;
extern int CudaDriverData_1434ac0;
extern int CudaDriverData_1435898;
extern int CudaDriverData_143589c;
extern int CudaDriverData_14358d0;
extern void (*CudaDriverData_1421fd8[27])();
extern void (*CudaDriverData_1421fe0[26])();
extern void (*CudaDriverData_1421fe8[25])();
extern void (*CudaDriverData_1421ff0[24])();
extern void (*CudaDriverData_1421ff8[23])();
extern void (*CudaDriverData_1422010[20])();
extern void (*CudaDriverData_1422020[18])();
extern void (*CudaDriverData_1422028[17])();
extern void (*CudaDriverData_1422030[16])();
extern void (*CudaDriverData_1422038[15])();
extern void (*CudaDriverData_1422040[14])();
extern void (*CudaDriverData_1422048[13])();
extern void (*CudaDriverData_1422050[12])();
extern void (*CudaDriverData_1422058[11])();
extern void (*CudaDriverData_14301f0)(void);
extern void (*CudaDriverData_14301f8)(void);
long double cuda_driver_misc_helpers_43a0(_OWORD*);
unsigned __int64 CudaDriverRoutine_5b820(__int64);
unsigned __int64 CudaDriverRoutine_5b8d0(__int64);
unsigned __int64 CudaDriverRoutine_5bd00(__int64, unsigned __int64);
unsigned __int64 CudaDriverRoutine_5bda0(__int64);
unsigned __int64 CudaDriverRoutine_5c030(__int64);
unsigned __int64 cuda_debugger_api_7d280(unsigned __int8, unsigned __int16,
                                         unsigned int, char);
void CudaDriverRoutine_5c060(__int64);
void CudaDriverRoutine_7218();
void CudaDriverRoutine_7228();
void CudaDriverRoutine_7230();
void CudaDriverRoutine_72a4();
void CudaDriverRoutine_7370();
void CudaDriverRoutine_7378();
void CudaDriverRoutine_7540();
void cuda_driver_59ce0(__int64);
__int64 cuda_driver_5e7e0(__int64 a1);
__int64 cuda_driver_5e820(__int64 a1, unsigned int a2);
__int64 cuda_driver_5fc00(__int64* a1, int a2);
void cuda_driver_608e0();
__int64 cuda_driver_60900();
__int64 cuda_driver_60ae0(__int64 a1, int a2, int a3);
__int64 cuda_driver_61d40(_DWORD* a1, __int64* a2, __int64 a3, __int64 a4);
__int64 cuda_driver_61ea0(__int64 a1, char a2, _BYTE* a3);
__int64 cuda_driver_62140(_QWORD* a1);
__int64 cuda_driver_621d0(__int64 a1, unsigned int* a2, bool* a3);
long double cuda_driver_63b40(int a1, __int64 a2, __int64 a3);
__int64* cuda_driver_640e0(__int64* result, _QWORD* a2, char a3);
int64x2_t* cuda_driver_64280(int64x2_t* result, unsigned __int32 a2,
                             unsigned int a3, __int64 a4);
__int64 cuda_driver_645b0(_QWORD* a1, __int64 a2, __int64 a3);
__int64 cuda_driver_647c0(_QWORD* a1, __int64* a2);
__int64 cuda_driver_64ba0(__int64 a1);
__int64 cuda_driver_64d60(__int64 a1);
__int64 cuda_driver_64e80();
__int64 cuda_driver_64f00();
double cuda_driver_64f80(__int64 a1);
double cuda_driver_65430(__int64 a1);
__int64 cuda_driver_65560(__int64 a1);
__int64 cuda_driver_68b50(__int64 a1);
__int64 cuda_driver_69be0(unsigned __int64 a1, _DWORD* a2, _DWORD* a3);
__int64 cuda_driver_69d20(unsigned __int64 a1, __int64 a2, unsigned int a3);
__int64 cuda_driver_6a330(__int64 result);
__int64 cuda_driver_6a360(_QWORD* a1, __int64 a2);
__int64 cuda_driver_6a480(_QWORD* a1, int a2);
__int64 cuda_driver_6a5b0(int a1, __int64* a2);
__int64 cuda_driver_6a690(int a1, int a2);
__int64 cuda_driver_6a770(int a1);
__int64 cuda_driver_6a8e0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                          int a5);
__int64 cuda_driver_6b4a0(unsigned int a1, __int64* a2);
__int64 cuda_driver_6c0c0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4);
int* cuda_driver_6c700(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64* a5, __int64 a6, _BYTE* a7);
__int64 cuda_driver_6cfd0(unsigned int a1);
__int64 cuda_driver_6d0c0(unsigned int a1);
__int64 cuda_driver_6e000(__int64 a1);
__int64 cuda_driver_6e410(__int64 a1, long double a2);
__int64 cuda_driver_6ec30(__int64 a1, long double a2);
__int64 cuda_driver_6f3d0(__int64 a1, long double a2);
__int64 cuda_driver_71150(unsigned int a1, unsigned int a2, unsigned int a3,
                          __int64 a4);
__int64 cuda_driver_71430(unsigned int a1, unsigned int a2, unsigned int a3,
                          char a4, _QWORD* a5, _DWORD* a6);
__int64 cuda_driver_71580(unsigned int a1, unsigned int a2, unsigned int a3,
                          char a4, _QWORD* a5, _QWORD* a6);
__int64 cuda_driver_71790(unsigned int a1, unsigned int a2, unsigned int a3,
                          int a4, _QWORD* a5);
__int64 cuda_driver_73f00();
__int64 cuda_driver_74050(int a1);
__int64 cuda_driver_74140();
__int64 cuda_driver_74930(unsigned int a1, unsigned int a2, unsigned int a3,
                          _QWORD* a4);
__int64 cuda_driver_76dd0();
bool cuda_driver_77230();
__int64 cuda_driver_772c0(__int64 a1);
bool cuda_driver_77360(__int64 a1);
__int64 cuda_driver_773f0(__int64 a1);
bool cuda_driver_77480(__int64 a1);
__int64 cuda_driver_77a80(__int64 a1, __int64 a2);
__int64 cuda_driver_7cec0(__int64 a1, unsigned int* a2);
__int64 cuda_driver_7d2c0();
__int64 cuda_driver_7d470();
__int64 cuda_driver_7d6e0(__int64 a1, char a2, bool* a3, const char** a4);
__int64 cuda_driver_7d930();
__int64 cuda_driver_7e2a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_7e640();
bool cuda_driver_7e7d0(__int64 a1);
__int64 cuda_driver_7f130();
__int64 cuda_driver_7fc90(unsigned int a1, __int64 a2, int a3,
                          __int64 (*a4)(_DWORD*, void*));
__int64 cuda_driver_800f0(__int64 result, __int64 a2);
__int64 cuda_driver_80ee0(__int64 a1, __int64 a2);
__int64 cuda_driver_81090();
void cuda_driver_810a0();
__int64 cuda_driver_815e0(const char* a1);
__int64 cuda_driver_81f30();
__int64 cuda_driver_82e60(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 cuda_driver_83490(__int64 a1, __int64 a2, int a3, char a4);
__int64 cuda_driver_84a40(__int64 a1);
__int64 cuda_driver_84ec0(__int64 a1, unsigned int a2, __int64* a3,
                          unsigned int a4, char a5, _BYTE* a6, _BYTE* a7,
                          int8x16_t* a8, _QWORD* a9, __int64 a10);
__int64 cuda_driver_85bb0(unsigned int* a1, unsigned int a2, unsigned int a3,
                          unsigned int a4, unsigned __int8 a5, int8x16_t* a6);
__int64 cuda_driver_85fc0(unsigned int a1, int a2, char a3);
_QWORD* CudaDriverRoutine_222ce0();
_QWORD* zstd_decompress_2234c0(__int64);
_QWORD* zstd_decompress_2234e0(__int64, __int64);
__int64 CudaDriverRoutine_222520(__int64);
__int64 CudaDriverRoutine_222580(__int64, __int64);
__int64 CudaDriverRoutine_222630(__int64 result);
__int64 CudaDriverRoutine_222d10(__int64, __int64);
__int64 CudaDriverRoutine_222da0(__int64 result);
__int64 CudaDriverRoutine_4d0d0(__int64 result);
__int64 CudaDriverRoutine_709d0(unsigned int, unsigned int, unsigned int,
                                _DWORD*);
__int64 CudaDriverRoutine_70a70(unsigned int, unsigned int, unsigned int,
                                _DWORD*);
__int64 CudaDriverRoutine_72910(unsigned int, unsigned int, unsigned int,
                                unsigned int, __int64);
__int64 CudaDriverRoutine_72aa0(unsigned int, unsigned int, unsigned int,
                                unsigned int, _DWORD*);
__int64 CudaDriverRoutine_745a0(unsigned int, __int64, __int64, __int64*,
                                char*);
__int64 CudaDriverRoutine_7b4e0(__int64, unsigned __int64);
__int64 CudaDriverRoutine_7b550(__int64, __int64, unsigned __int64, int, int,
                                int);
__int64 CudaDriverRoutine_7b720(__int64, __int64, unsigned __int64, int, int,
                                int, const char*, __int64);
__int64 CudaDriverRoutine_7b8e0(__int64, __int64, unsigned __int64, int, int,
                                int, __int64);
__int64 CudaDriverRoutine_7bac0(__int64*, const char*, __int64);
__int64 CudaDriverRoutine_96e40(__int64 result);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 cuda_driver_misc_helpers_ded50_alt1(__int64, __int64*, char) __asm__(
    "cuda_driver_misc_helpers_ded50");
__int64 fopen_plt(const char*, const char*);
__int64 ftell_plt(__int64);
__int64 memset_plt_alt1(__int64, int, unsigned __int64) __asm__("memset_plt");
__int64 rewind_plt(void);
__int64 zstd_decompress_223550(__int64 result);
__int64 zstd_decompress_223590(__int64 result);
__int64 zstd_decompress_2235f0(__int64 result);
extern __int64 CudaDriverData_1432758;
extern __int64 CudaDriverData_1432760;
extern __int64 CudaDriverData_1432768;
extern __int64 CudaDriverData_1432770;
extern __int64 CudaDriverData_1432778;
extern __int64 CudaDriverData_1432780;
extern char CudaDriverData_1432750;
extern char CudaDriverData_1432788[];
int fclose_plt(__int64);
int snprintf_plt(__int64, unsigned __int64, const char*, ...);
unsigned __int64 fwrite_plt_alt1(__int64, unsigned __int64, unsigned __int64,
                                 __int64) __asm__("fwrite_plt");
__int64 cuda_driver_unplaced_3_649b0(__int64 a1);
__int64 cuda_driver_750a0(unsigned int a1, unsigned int a2, unsigned int a3,
                          __int64 a4);
__int64 cuda_driver_7a800(const char* a1, __int64* a2);

__int64 cuda_driver_5e7e0(__int64 a1)
{
  __int64 result;

  __builtin_arm_dmb(0xFu);
  result = *(unsigned int*)(a1 + 34388);
  __builtin_arm_dmb(0xFu);
  return result;
}

__int64 cuda_driver_5e820(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64* v5;
  __int64 result;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;

  v2 = *(_QWORD*)(a1 + 8);
  __builtin_arm_dmb(0xFu);
  v5 = (__int64*)(a1 + 33160);
  result = *(unsigned int*)(a1 + 34388);
  __builtin_arm_dmb(0xFu);
  if ((_DWORD)result == 0) {
    if (CudaDriverRoutine_9aa40(*(_QWORD*)(v2 + 64)) &&
        *(_DWORD*)(*v5 + 28) != 0) {
      result = (*(__int64 (**)(void*))(*(_QWORD*)(*v5 + 200) + 160LL))(
          *(void**)(*v5 + 200));
      if ((_DWORD)result == 0) {
        return result;
      }
    }
    else {
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)(v2 + 64) +
                                                 21480LL))(v2, a2);
      if ((_DWORD)result == 0) {
        v9 = *(_QWORD*)(a1 + 132776);
        if (v9 == 0) {
          return 0;
        }
        while (*(_DWORD*)(v9 + 212) == 0) {
        LABEL_12:
          v9 = *(_QWORD*)(v9 + 280);
          result = 0;
          if (v9 == 0) {
            return result;
          }
        }
        v10 = 0;
        v11 = 0;
        while (1) {
          result = (*(__int64 (**)(__int64, _QWORD))(
              *(_QWORD*)(v9 + 200) + v10 + 160))(*(_QWORD*)(v9 + 200) + v10,
                                                 a2);
          if ((_DWORD)result != 0) {
            break;
          }
          ++v11;
          v10 += 176;
          if (v11 >= *(unsigned int*)(v9 + 212)) {
            goto LABEL_12;
          }
        }
      }
    }
  }
  if ((_BYTE)a2 == 0) {
    v7 = *(_QWORD*)(a1 + 8);
    v8 = result;
    cuda_driver_98c70(v7, result);
    CudaDriverRoutine_1383e0(v5[146], v8);
    return v8;
  }
  return result;
}

__int64 cuda_driver_5fc00(__int64* a1, int a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  int v13;
  __int64 v14;
  bool v15;
  __int16 v16;
  _BOOL4 v17;
  int v18;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned int v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  bool v32;
  struct {
    __int64 v33[2];
    __int128 v34;
    __int128 v35;
  } v33_;

  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v3 = *((unsigned int*)a1 + 7);
  v33_.v34 = (__typeof__(v33_.v34)){0};
  v33_.v35 = (__typeof__(v33_.v35)){0};
  v5 = CudaDriverRoutine_12e510(v3, 34256),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  a1[1] = v5;
  if (v5 == 0) {
    return 2;
  }
  v6 = *a1;
  LODWORD(v33_.v34) = a2;
  v33_.v33[0] = v6;
  v33_.v33[1] = (__int64)a1;
  DWORD1(v33_.v35) = *(_DWORD*)(*(_QWORD*)(v6 + 8) + 16360LL);
  BYTE8(v33_.v35) = *((_BYTE*)a1 + 296);
  if (*((_DWORD*)a1 + 7) != 0) {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    do {
      if (*((_DWORD*)a1 + 52) == 1) {
        *((_QWORD*)&v33_.v34 + 1) = a1[25];
        *((_DWORD*)a1 + 53) = 1;
        if (a2 != 0) {
          goto LABEL_8;
        }
      }
      else {
        *((_QWORD*)&v33_.v34 + 1) = a1[25] + v7;
        *((_DWORD*)a1 + 53) = v9 + 1;
        if (a2 != 0) {
        LABEL_8:
          if (a2 == 11) {
            BYTE8(v33_.v35) = 1;
          }
        LABEL_12:
          LODWORD(v33_.v35) = 0;
        LABEL_13:
          v11 = a1[1];
          a1[2] = v11 + v8;
          goto LABEL_14;
        }
      }
      v10 = *(_QWORD*)(*(_QWORD*)(*a1 + 8) + 64LL);
      if ((*(_BYTE*)(v10 + 16976) & 0x10) == 0) {
        goto LABEL_12;
      }
      if (CudaDriverRoutine_9aa40(v10) ||
          !CudaDriverRoutine_98110(*(_QWORD*)(*a1 + 8)) ||
          *((_DWORD*)a1 + 7) < 2u) {
        v14 = *a1;
        LODWORD(v33_.v35) = 0;
        v15 = CudaDriverRoutine_9acf0(*(_QWORD*)(*(_QWORD*)(v14 + 8) + 64LL)),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v16 = *(_WORD*)((char*)((_UNKNOWN*)0x1884LL) +
                        (_QWORD)CudaDriverData_1422118);
        v17 = (v16 & 0x80) != 0;
        v18 = v16 & 0x40;
        if (!v15) {
          v17 = true;
        }
        if (v17 && v18 == 0) {
          if ((_DWORD)v33_.v35 == 0) {
            goto LABEL_13;
          }
        }
        else {
          LODWORD(v33_.v35) = *(_DWORD*)(*a1 + 34312) & 1;
          if ((_DWORD)v33_.v35 == 0) {
            goto LABEL_13;
          }
        }
      }
      else {
        v22 = (*(__int64 (**)(_QWORD, __int64, __int64))(
            *((_QWORD*)&v33_.v34 + 1) + 168LL))(*((_QWORD*)&v33_.v34 + 1), v20,
                                                v21),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        LODWORD(v33_.v35) = ((_BYTE)v9 + v22) & 1;
        if ((((_BYTE)v9 + v22) & 1) == 0) {
          goto LABEL_13;
        }
      }
      v11 = a1[1];
      *((_BYTE*)a1 + 259) = 1;
    LABEL_14:
      result = CudaDriverRoutine_58ee0((__int64*)(v11 + v8), v33_.v33),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v13 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*a1 + 8) + 64LL) + 21864LL);
      if ((_DWORD)result != 0) {
        if ((unsigned int)(a2 - 11) < 0xFFFFFFF6 || v13 != 1) {
          goto LABEL_43;
        }
      }
      else {
        if (*((_DWORD*)a1 + 9) != 9 && v13 != 3) {
          result = CudaDriverRoutine_5bf00(a1[1] + v8),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          if ((_DWORD)result != 0) {
            goto LABEL_43;
          }
        }
        ++*((_DWORD*)a1 + 6);
        *(_BYTE*)(a1[1] + v8 + 34232) = 1;
      }
      ++v9;
      v8 += 34256;
      v7 += 176;
    } while (v9 < *((unsigned int*)a1 + 7));
  }
  if (*((_DWORD*)a1 + 6) != 0) {
    v23 = 0;
    v24 = 0;
    while (1) {
      result = CudaDriverRoutine_125540(a1[1] + v23),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if ((_DWORD)result != 0) {
        break;
      }
      ++v24;
      v23 += 34256;
      if (v24 >= *((unsigned int*)a1 + 6)) {
        goto LABEL_41;
      }
    }
  LABEL_43:
    if (a1[1] != 0) {
      v25 = result;
      if (*((_DWORD*)a1 + 6) != 0) {
        v26 = 0;
        v27 = 0;
        do {
          CudaDriverRoutine_125580(a1[1] + v26),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v28 = *((unsigned int*)a1 + 6);
          ++v27;
          v26 += 34256;
        } while (v27 < v28);
        if ((_DWORD)v28 != 0) {
          v29 = 0;
          v30 = 0;
          do {
            CudaDriverRoutine_59350(a1[1] + v29),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            ++v30;
            v29 += 34256;
          } while (v30 < *((unsigned int*)a1 + 6));
        }
      }
      v31 = a1[1];
      if (v31 != 0) {
        CudaDriverRoutine_12e340(v31),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        a1[1] = 0;
      }
      *((_DWORD*)a1 + 6) = 0;
      return v25;
    }
    return result;
  }
LABEL_41:
  result = ((__int64 (*)(__int64*))a1[12])(a1),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((_DWORD)result != 0) {
    goto LABEL_43;
  }
  result = CudaDriverRoutine_5ffe0((__int64)a1),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((_DWORD)result != 0) {
    goto LABEL_43;
  }
  v32 = *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                   (_QWORD)CudaDriverData_1422118) >= 2u &&
        *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)CudaDriverData_1422118) == 0;
  if (!v32 ||
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*a1 + 8) + 64LL) + 17329LL) == 0 ||
      *((_BYTE*)a1 + 296) == 0) {
    return 0;
  }
  result = CudaDriverRoutine_60120(a1),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((_DWORD)result != 0) {
    goto LABEL_43;
  }
  return result;
}

void cuda_driver_608e0()
{
  *((_BYTE*)&CudaDriverRoutine_72a4 + (_QWORD)CudaDriverData_1422118) = 1;
}

__int64 cuda_driver_60900()
{
  fwrite_plt("CUDA checkpoint and restore utility unavailable on non-Linux "
             "platforms\n",
             71, 1, *(_QWORD*)CudaDriverData_1421fd8[0]);
  return 0xFFFFFFFFLL;
}

__int64 cuda_driver_60ae0(__int64 a1, int a2, int a3)
{
  _DWORD v7[2];
  __int64 v8;

  memset_plt(&v8, 0, 2056);
  v7[0] = a2;
  v7[1] = a3;
  return CudaDriverRoutine_8ea00(a1, (__int64)v7);
}

__int64 cuda_driver_61d40(_DWORD* a1, __int64* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v8;
  __int64 result;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned int v12;
  char v13;
  void* v14;
  _DWORD* v15;
  _BYTE v16[64];
  _DWORD* v17;

  v4 = *(_QWORD*)a1;
  v17 = nullptr;
  v8 = *(_QWORD*)(v4 + 8);
  result = CudaDriverRoutine_1baa40(&v17, a4);
  if ((_DWORD)result == 0) {
    CudaDriverStub_107f90(*(_QWORD*)a3 + 32LL);
    v10 = CudaDriverRoutine_5c030(a3 + 24);
    v11 = CudaDriverRoutine_5bda0(a3 + 24);
    if (v11 >= v10 || CudaDriverRoutine_5bd00(a3 + 24, v11) >= v10) {
      v12 = 0;
      v13 = 1;
    }
    else {
      v12 = CudaDriverRoutine_5c030(a3 + 24);
      v13 = 0;
    }
    v14 = (void*)CudaDriverRoutine_5b820(a3 + 24);
    CudaDriverRoutine_204620(*(_QWORD*)(a3 + 56), v8, (__int64)v16);
    CudaDriverRoutine_5c060(a3 + 24);
    CudaDriverStub_108070(*(_QWORD*)a3 + 32LL);
    *v17 = 4;
    v15 = v17;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17) = (_UNKNOWN*)a3;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15 + 8) = v14;
    if ((v13 & 1) == 0) {
      CudaDriverRoutine_5b540((__int64)a1, (__int64)a1, (__int64)v16, v12, a2);
    }
    CudaDriverRoutine_5b640(a1, (__int64)v16, (unsigned int)v14, 0, 1, 0, 0,
                            a2);
    return 0;
  }
  return result;
}

__int64 cuda_driver_61ea0(__int64 a1, char a2, _BYTE* a3)
{
  __int64 v3;
  int v4;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 result;
  int v12;
  __int64 v13;
  __int64 v14;
  int v16;

  v3 = a1 + 0x8000;
  if (*(_BYTE*)(a1 + 33184) == 0) {
    return 0;
  }
  __builtin_arm_dmb(0xFu);
  v4 = *(_DWORD*)(a1 + 33208);
  __builtin_arm_dmb(0xFu);
  if (v4 == 0) {
    return 0;
  }
  CudaDriverStub_107f90(*(_QWORD*)a1 + 16LL);
  v8 = CudaDriverRoutine_62000(a1);
  if (v8 == 0) {
    v12 = *(_DWORD*)(v3 + 440);
    v13 = *(_QWORD*)a1;
    if (a2 != 0 || v12 == 0) {
      CudaDriverStub_108070(v13 + 16);
      if (v12 != 0) {
        if (a2 != 0) {
          cuda_driver_59ce0(a1);
          *a3 = 1;
          CudaDriverStub_12dc90();
        }
        goto LABEL_13;
      }
    }
    else {
      v14 = a1 + 33728;
      v10 = v13 + 16;
      while (1) {
        CudaDriverStub_108fc0(v14, v10, 100, 0, 0);
        v16 = *(_DWORD*)(v3 + 440);
        CudaDriverStub_108070(*(_QWORD*)a1 + 16LL);
        if (v16 == 0) {
          break;
        }
      LABEL_13:
        result = CudaDriverRoutine_5a6a0((__int64*)a1);
        if ((_DWORD)result != 0) {
          return result;
        }
        CudaDriverStub_107f90(*(_QWORD*)a1 + 16LL);
        v8 = CudaDriverRoutine_62000(a1);
        if (v8 != 0) {
          goto LABEL_4;
        }
        v10 = *(_QWORD*)a1 + 16LL;
        if (*(_DWORD*)(v3 + 440) == 0) {
          v9 = 0;
          goto LABEL_5;
        }
        v14 = a1 + 33728;
      }
    }
    return 0;
  }
LABEL_4:
  v9 = v8;
  v10 = *(_QWORD*)a1 + 16LL;
LABEL_5:
  CudaDriverStub_108070(v10);
  return v9;
}

__int64 cuda_driver_62140(_QWORD* a1)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = a1 + 4096;
  CudaDriverStub_107f90(*a1 + 16LL);
  v3 = CudaDriverRoutine_5b8d0((__int64)(a1 + 4217));
  v4 = v2[54];
  v5 = v2[53] & 0x3FLL;
  v6 = v2[53] + 1LL;
  v2[53] = v6;
  a1[v5 + 4152] = v3;
  *((_BYTE*)v2 + 420) = 1;
  __builtin_arm_dmb(0xFu);
  *((_DWORD*)v2 + 110) = (unsigned __int64)(v6 - v4) > 0x37;
  __builtin_arm_dmb(0xFu);
  return CudaDriverStub_108070(*a1 + 16LL);
}

__int64 cuda_driver_621d0(__int64 a1, unsigned int* a2, bool* a3)
{
  unsigned int v3;
  void* v7;
  __int64 (*v8)(__int64, int*, __int64);
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;

  v3 = *a2;
  v7 = CudaDriverData_1422118;
  CudaDriverStub_107f90_alt1((char*)&CudaDriverRoutine_7218 +
                             (_QWORD)CudaDriverData_1422118);
  v8 = *(__int64 (**)(__int64, int*, __int64))((char*)&CudaDriverRoutine_7228 +
                                               (_QWORD)v7);
  v9 = *(_QWORD*)((char*)&CudaDriverRoutine_7230 + (_QWORD)v7);
  CudaDriverStub_108070_alt1((char*)&CudaDriverRoutine_7218 + (_QWORD)v7);
  if (v8 != nullptr) {
    cuda_driver_108520(*(_QWORD*)(a1 + 8) + 24LL);
    v10 = cuda_driver_b4990(*(_QWORD**)(a1 + 8), &v19, 2);
    if (v10 != 0) {
      v11 = *(_QWORD*)(a1 + 8);
      v12 = v10;
      CudaDriverRoutine_1085d0(v11 + 24);
      return v12;
    }
    else {
      v14 = CudaDriverRoutine_1ba7d0(*(_QWORD*)(v19 + 96), a1);
      if (v14 == 0) {
        CudaDriverRoutine_1085d0(*(_QWORD*)(a1 + 8) + 24LL);
        if (v3 > 3) {
          v15 = 3;
        }
        else {
          v15 = CudaDriverData_1116070[v3];
        }
        v18 = v15;
        v16 = v8(v19, &v18, v9);
        if (v18 > 2) {
          if (v18 == 3) {
            v3 = 1;
          }
        }
        else if (v18 == 1) {
          v17 = v16;
          v3 = CudaDriverRoutine_1bbf10(*(_QWORD*)(a1 + 8), 0);
          v16 = v17;
        }
        else if (v18 == 2) {
          v3 = 0;
        }
        *a2 = v3;
        *a3 = v16 != 0;
        if (v16 != 0) {
          *a2 = 0;
        }
        cuda_driver_108520(*(_QWORD*)(a1 + 8) + 24LL);
      }
      CudaDriverRoutine_b5f70(v19);
      CudaDriverRoutine_1085d0(*(_QWORD*)(a1 + 8) + 24LL);
      return v14;
    }
  }
  else {
    *a3 = false;
    return 0;
  }
}

long double cuda_driver_63b40(int a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  _OWORD* v3;
  long double result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a1 > 6) {
    switch (a1) {
    case 7:
      v3 = (_OWORD*)a3;
      break;
    case 8:
      v3 = (_OWORD*)a3;
      break;
    case 9:
      *(_DWORD*)(a3 + 92) = 12;
      *(_DWORD*)(a3 + 48) = 28;
      *(_OWORD*)(a3 + 76) = CudaDriverData_1115260;
      *(_OWORD*)(a3 + 60) = CudaDriverData_1115670;
      *(_OWORD*)a3 = CudaDriverData_11157a0;
      *(_OWORD*)(a3 + 16) = CudaDriverData_1115300;
      *(_OWORD*)(a3 + 32) = CudaDriverData_11156e0;
      return *(long double*)&CudaDriverData_11157a0;
    default:
      return result;
    }
    return cuda_driver_misc_helpers_43a0(v3);
  }
  if (a1 == 5) {
    *(_OWORD*)(a3 + 32) = CudaDriverData_1115a00;
    *(_OWORD*)(a3 + 48) = CudaDriverData_1115d10;
    *(_OWORD*)(a3 + 64) = CudaDriverData_11162c0;
    *(_OWORD*)(a3 + 80) = CudaDriverData_1116010;
    *(_OWORD*)a3 = CudaDriverData_1115cc0;
    *(_OWORD*)(a3 + 16) = CudaDriverData_1115360;
    return *(long double*)&CudaDriverData_1115cc0;
  }
  else if (a1 == 6) {
    *(_OWORD*)(a3 + 32) = CudaDriverData_1115a00;
    *(_OWORD*)(a3 + 48) = CudaDriverData_1115450;
    *(_OWORD*)(a3 + 64) = CudaDriverData_11162c0;
    *(_OWORD*)(a3 + 80) = CudaDriverData_1116010;
    *(_OWORD*)a3 = CudaDriverData_1115cc0;
    *(_OWORD*)(a3 + 16) = CudaDriverData_1115360;
    return *(long double*)&CudaDriverData_1115cc0;
  }
  return result;
}

__int64* cuda_driver_640e0(__int64* result, _QWORD* a2, char a3)
{
  __int64* v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned int v12;
  __int64 v13;
  bool v14;
  unsigned int v15;

  if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) &
       1) == 0) {
    v3 = result;
    v6 = result[22] + result[5] +
         (result[23] + result[7] * result[24]) * result[6];
    result = (__int64*)CudaDriverStub_1dbf90(result[4]);
    if (a3 != 0) {
      v7 = v3[4];
      return (__int64*)cuda_driver_helpers_1dca30(v7, v6);
    }
    v8 = v3[6];
    if (v8 == *a2) {
      if (v3[7] == a2[1]) {
        v7 = v3[4];
        return (__int64*)cuda_driver_helpers_1dca30(v7, v6);
      }
      if (a2[2] != 0) {
        v15 = 1;
        do {
          result = (__int64*)cuda_driver_helpers_1dca30(v3[4], v6);
          v6 += v3[7] * v3[6];
          v14 = a2[2] > (unsigned __int64)v15++;
        } while (v14);
      }
    }
    else {
      v9 = a2[2];
      if (v9 != 0 && a2[1] != 0) {
        v10 = 1;
        LODWORD(v11) = 0;
        do {
          if (v10 != 0) {
            v12 = 1;
            v13 = v6;
            do {
              result = (__int64*)cuda_driver_helpers_1dca30(v3[4], v13);
              v8 = v3[6];
              v10 = a2[1];
              v13 += v8;
              v14 = v10 > v12++;
            } while (v14);
            v9 = a2[2];
          }
          v11 = (unsigned int)(v11 + 1);
          v6 += v3[7] * v8;
        } while (v9 > v11);
      }
    }
  }
  return result;
}

int64x2_t* cuda_driver_64280(int64x2_t* result, unsigned __int32 a2,
                             unsigned int a3, __int64 a4)
{
  int v4;
  unsigned int v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  bool v11;
  int64x2_t* v12;
  int64x2_t* v13;
  int64x2_t* v14;
  __int8* v15;
  unsigned __int64 v16;
  int64x2_t v17;
  __int64 v18;
  int64x2_t* v19;
  __int64 v20;

  v4 = 0;
  v5 = 0;
  v6 = 0;
  do {
    v7 = (unsigned __int64)a2 << v4;
    v5 += a3;
    v4 += 8 * a3;
    v6 |= v7;
  } while (v5 < 8);
  v8 = a4 * a3;
  v9 = (unsigned __int64)result;
  if (((unsigned __int8)result & 7) != 0) {
    v10 = (char*)result + a3;
    v9 = (unsigned __int64)result;
    switch (a3) {
    case 1u:
      do {
        *(_BYTE*)v9 = a2;
        v9 += a3;
        v11 = ((unsigned __int8)v10 & 7) == 0;
        v10 += a3;
      } while (!v11);
      break;
    case 2u:
      do {
        *(_WORD*)v9 = a2;
        v9 += a3;
        v11 = ((unsigned __int8)v10 & 7) == 0;
        v10 += a3;
      } while (!v11);
      break;
    case 4u:
      do {
        *(_DWORD*)v9 = a2;
        v9 += 4LL;
        v11 = ((unsigned __int8)v10 & 7) == 0;
        v10 += 4;
      } while (!v11);
      break;
    default:
      do {
        v9 += a3;
        v11 = ((unsigned __int8)v10 & 7) == 0;
        v10 += a3;
      } while (!v11);
      break;
    }
  }
  v12 = (int64x2_t*)((char*)result + v8);
  v13 = (int64x2_t*)((char*)result + v8 - 8);
  if (v9 > (unsigned __int64)v13) {
    v14 = (int64x2_t*)v9;
    goto LABEL_28;
  }
  v15 = (char*)result + v8 - 7;
  if ((unsigned __int64)v15 <= v9 + 8) {
    v15 = (__int8*)(v9 + 8);
  }
  v16 = (unsigned __int64)&v15[~v9];
  if (v16 < 0x18) {
    v14 = (int64x2_t*)v9;
    do {
    LABEL_27:
      LANES128(*(v14)).n128_u64[0] = v6;
      v14 = (int64x2_t*)((char*)v14 + 8);
    } while (v14 <= v13);
    goto LABEL_28;
  }
  v17 = vdupq_n_s64(v6);
  v18 = (v16 >> 3) + 1;
  v14 = (int64x2_t*)(v9 + 8 * (v18 & 0x3FFFFFFFFFFFFFFCLL));
  v19 = (int64x2_t*)(v9 + 16);
  v20 = v18 & 0x3FFFFFFFFFFFFFFCLL;
  do {
    v19[-1] = v17;
    *v19 = v17;
    v19 += 2;
    v20 -= 4;
  } while (v20 != 0);
  if (v18 != (v18 & 0x3FFFFFFFFFFFFFFCLL)) {
    goto LABEL_27;
  }
LABEL_28:
  if (v14 < v12) {
    switch (a3) {
    case 1u:
      do {
        LANES128(*(v14)).n128_u8[0] = a2;
        v14 = (int64x2_t*)((char*)v14 + a3);
      } while (v14 < v12);
      break;
    case 2u:
      do {
        LANES128(*(v14)).n128_u16[0] = a2;
        v14 = (int64x2_t*)((char*)v14 + a3);
      } while (v14 < v12);
      break;
    case 4u:
      do {
        LANES128(*(v14)).n128_u32[0] = a2;
        v14 = (int64x2_t*)((char*)v14 + 4);
      } while (v14 < v12);
      break;
    default:
      break;
    }
  }
  return result;
}

__int64 cuda_driver_645b0(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
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
  __int64 v38;
  __int64 v39;

  v38 = 0;
  v39 = 0;
  result = CudaDriverRoutine_df060(&v39);
  if ((_DWORD)result == 0) {
    result = 1;
    if (a1 != nullptr && a3 != 0) {
      v37 = 0;
      v31 = (__typeof__(v31)){0};
      v32 = (__typeof__(v32)){0};
      v33 = (__typeof__(v33)){0};
      v34 = (__typeof__(v34)){0};
      v30 = (__typeof__(v30)){0};
      v29 = (__typeof__(v29)){0};
      v28 = (__typeof__(v28)){0};
      v27 = (__typeof__(v27)){0};
      v26 = (__typeof__(v26)){0};
      v25 = (__typeof__(v25)){0};
      v24 = (__typeof__(v24)){0};
      v23 = (__typeof__(v23)){0};
      v22 = (__typeof__(v22)){0};
      v21 = (__typeof__(v21)){0};
      v20 = (__typeof__(v20)){0};
      v19 = (__typeof__(v19)){0};
      v18 = (__typeof__(v18)){0};
      v17 = (__typeof__(v17)){0};
      v16 = (__typeof__(v16)){0};
      v15 = (__typeof__(v15)){0};
      v14 = (__typeof__(v14)){0};
      v35 = (__typeof__(v35)){0};
      v36 = (__typeof__(v36)){0};
      v13 = ((unsigned __int8)(CudaDriverStub_ee000(1) & 0x1F) << 26) |
            0x80800200000202LL;
      cuda_driver_108520(v39 + 24);
      v7 = cuda_driver_1da1b0(*(_QWORD*)(v39 + 80), &v13, a3, &v38);
      CudaDriverRoutine_1085d0(v39 + 24);
      if (v7 != 0) {
        return v7;
      }
      else {
        v8 = CudaDriverRoutine_10dd50(v38);
        if (v8 != 0) {
          v9 = v8;
          cuda_driver_108520(v39 + 24);
          CudaDriverStub_1db190(&v38);
          CudaDriverRoutine_1085d0(v39 + 24);
          return v9;
        }
        else {
          *(_OWORD*)a2 = (__typeof__(*(_OWORD*)a2)){0};
          *(_OWORD*)(a2 + 16) = (__typeof__(*(_OWORD*)(a2 + 16))){0};
          v10 = v38;
          *(_DWORD*)a2 = *(_DWORD*)((char*)((_UNKNOWN*)0xF90LL) +
                                    (_QWORD)CudaDriverData_1422118);
          *(_DWORD*)(a2 + 4) =
              **(_DWORD**)(**(_QWORD**)(*(_QWORD*)(v10 + 72) + 200LL) + 176LL);
          *(_QWORD*)(a2 + 8) = CudaDriverStub_1db1a0(v10);
          v11 = v38;
          *(_QWORD*)(a2 + 16) = *(_QWORD*)(v38 + 64);
          v12 = v39;
          *(_DWORD*)(a2 + 24) = *(_DWORD*)(*(_QWORD*)(v39 + 64) + 21868LL);
          *(_DWORD*)(a2 + 28) = *(_DWORD*)(*(_QWORD*)(v12 + 64) + 14760LL);
          *a1 = CudaDriverStub_102e00(v11);
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_647c0(_QWORD* a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  struct {
    char gap0_[8];
    __int64 v15;
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
    __int128 v37;
    __int128 v38;
    __int64 v39;
  } v15_;
  __int64 v40;

  v40 = 0;
  v14 = 0;
  result = CudaDriverRoutine_df060(&v40);
  if ((_DWORD)result == 0) {
    if (a1 != nullptr) {
      v15_.v39 = 0;
      v5 = a2[1];
      v15_.v33 = (__typeof__(v15_.v33)){0};
      v15_.v34 = (__typeof__(v15_.v34)){0};
      v15_.v35 = (__typeof__(v15_.v35)){0};
      v15_.v36 = (__typeof__(v15_.v36)){0};
      v15_.v32 = (__typeof__(v15_.v32)){0};
      v15_.v31 = (__typeof__(v15_.v31)){0};
      v15_.v30 = (__typeof__(v15_.v30)){0};
      v15_.v29 = (__typeof__(v15_.v29)){0};
      v15_.v28 = (__typeof__(v15_.v28)){0};
      v15_.v27 = (__typeof__(v15_.v27)){0};
      v15_.v26 = (__typeof__(v15_.v26)){0};
      v15_.v25 = (__typeof__(v15_.v25)){0};
      v15_.v24 = (__typeof__(v15_.v24)){0};
      v15_.v23 = (__typeof__(v15_.v23)){0};
      v15_.v16 = (__typeof__(v15_.v16)){0};
      v15_.v37 = (__typeof__(v15_.v37)){0};
      v15_.v38 = (__typeof__(v15_.v38)){0};
      v15_.v15 = 0xA0C000202LL;
      v15_.v17 = (__typeof__(v15_.v17)){0};
      v15_.v18 = (__typeof__(v15_.v18)){0};
      v15_.v19 = (__typeof__(v15_.v19)){0};
      v15_.v20 = (__typeof__(v15_.v20)){0};
      v15_.v21 = (__typeof__(v15_.v21)){0};
      v15_.v22 = (__typeof__(v15_.v22)){0};
      v6 = *a2;
      v7 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                            (_QWORD)CudaDriverData_1422118);
      *(_QWORD*)&v15_.v22 = v5;
      *(_QWORD*)&v15_.v29 = v6;
      if ((_DWORD)v7 != 0) {
        v8 = (__int64*)((char*)CudaDriverData_1422118 + 280);
        while (1) {
          v10 = *v8++;
          v9 = v10;
          v11 = v10 + 20480;
          if (*(_DWORD*)(v10 + 21864) == 0 &&
              *((_DWORD*)a2 + 6) == *(_DWORD*)(v11 + 1388) &&
              *((_DWORD*)a2 + 7) == *(_DWORD*)(v9 + 14760)) {
            break;
          }
          if (--v7 == 0) {
            return 999;
          }
        }
        *(_QWORD*)&v15_.v27 = v9;
        result =
            cuda_driver_1da1b0(*(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v40),
                               &v15_.v15, a2[2], &v14);
        if ((_DWORD)result == 0) {
          v12 = CudaDriverRoutine_10dd50(v14);
          if (v12 != 0) {
            v13 = v12;
            cuda_driver_108520(v40 + 24);
            CudaDriverStub_1db190(&v14);
            CudaDriverRoutine_1085d0(v40 + 24);
            return v13;
          }
          else {
            *a1 = CudaDriverStub_102e00(v14);
            return 0;
          }
        }
      }
      else {
        return 999;
      }
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 cuda_driver_unplaced_3_649b0(__int64 a1)
{
  __int64 result;
  _BYTE* v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;

  v7 = 0;
  result = CudaDriverRoutine_121c60(&v7);
  if ((_DWORD)result == 0) {
    if (a1 == 0) {
      return 1;
    }
    if (*(_DWORD*)a1 == 1) {
      return 801;
    }
    v3 = (_BYTE*)(a1 + 16161);
    if ((CudaDriverRoutine_98110(a1) || *v3 != 0) &&
        *((_BYTE*)&CudaDriverRoutine_7540 + (_QWORD)CudaDriverData_1422118 +
          3) == 0) {
      return 801;
    }
    result = cuda_driver_misc_helpers_ded50_alt1(v7, nullptr, 0);
    if ((_DWORD)result == 0) {
      result = cuda_driver_misc_helpers_deeb0(a1, 0);
      if ((_DWORD)result == 0) {
        CudaDriverStub_107f90(a1 + 17816);
        if (*(_BYTE*)(a1 + 17808) != 0) {
          CudaDriverStub_108070(a1 + 17816);
          return 0;
        }
        *(_BYTE*)(a1 + 17808) = 1;
        CudaDriverStub_108070(a1 + 17816);
        if (CudaDriverRoutine_98110(a1) || *v3 != 0) {
          cuda_driver_2043d0(*(_QWORD*)(a1 + 17800), 0);
          CudaDriverStub_107f90(a1 + 17816);
          v4 = 0;
        LABEL_17:
          CudaDriverStub_108070(a1 + 17816);
          return v4;
        }
        v5 = (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) +
                                     104LL))(
            *(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
        if (v5 != 0) {
          v4 = v5;
          CudaDriverStub_107f90(a1 + 17816);
        }
        else {
          v6 = (*(__int64 (**)(void*))(
              *(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) + 120LL))(
              *(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
          CudaDriverStub_107f90(a1 + 17816);
          v4 = v6;
          if (v6 == 0) {
            goto LABEL_17;
          }
        }
        *(_BYTE*)(a1 + 17808) = 0;
        goto LABEL_17;
      }
    }
  }
  return result;
}

__int64 cuda_driver_64ba0(__int64 a1)
{
  __int64 result;
  _BYTE* v3;
  unsigned int v4;
  __int64 v5;

  v5 = 0;
  result = CudaDriverRoutine_121c60(&v5);
  if ((_DWORD)result == 0) {
    if (a1 != 0) {
      if (*(_DWORD*)a1 == 1) {
        return 801;
      }
      if (((v3 = (_BYTE*)(a1 + 16161), CudaDriverRoutine_98110(a1)) ||
           *v3 != 0) &&
          *((_BYTE*)&CudaDriverRoutine_7540 + (_QWORD)CudaDriverData_1422118 +
            3) == 0) {
        return 801;
      }
      else {
        result = cuda_driver_misc_helpers_ded50(v5, nullptr, 0);
        if ((_DWORD)result == 0) {
          result = cuda_driver_misc_helpers_deeb0(a1, 0);
          if ((_DWORD)result == 0) {
            CudaDriverStub_107f90(a1 + 17816);
            if (*(_BYTE*)(a1 + 17808) != 0) {
              *(_BYTE*)(a1 + 17808) = 0;
              CudaDriverStub_108070(a1 + 17816);
              if (CudaDriverRoutine_98110(a1) || *v3 != 0) {
                cuda_driver_2043d0(*(_QWORD*)(a1 + 17800), 1);
                CudaDriverStub_107f90(a1 + 17816);
                v4 = 0;
              }
              else {
                v4 = (*(__int64 (**)(void*))(
                    *(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) + 104LL))(
                    *(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
                CudaDriverStub_107f90(a1 + 17816);
                if (v4 != 0) {
                  *(_BYTE*)(a1 + 17808) = 1;
                }
              }
              CudaDriverStub_108070(a1 + 17816);
              return v4;
            }
            else {
              CudaDriverStub_108070(a1 + 17816);
              return 0;
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

__int64 cuda_driver_64d60(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  __int64 v4;

  v4 = 0;
  result = CudaDriverRoutine_121c60(&v4);
  if ((_DWORD)result == 0) {
    if (a1 != 0) {
      if (*(_DWORD*)a1 == 1 ||
          (CudaDriverRoutine_98110(a1) || *(_BYTE*)(a1 + 16161) != 0) &&
              *((_BYTE*)&CudaDriverRoutine_7540 +
                (_QWORD)CudaDriverData_1422118 + 3) == 0) {
        return 801;
      }
      else {
        result = cuda_driver_misc_helpers_ded50(v4, nullptr, 0);
        if ((_DWORD)result == 0) {
          result = cuda_driver_misc_helpers_deeb0(a1, 0);
          if ((_DWORD)result == 0) {
            CudaDriverStub_107f90(a1 + 17816);
            if (*(_BYTE*)(a1 + 17808) != 0) {
              v3 = 401;
            }
            else {
              v3 = 0;
            }
            CudaDriverStub_108070(a1 + 17816);
            return v3;
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

__int64 cuda_driver_64e80()
{
  void* v0;
  __int64 v1;
  unsigned int v2;
  unsigned int v3;

  v0 = CudaDriverData_1422118;
  CudaDriverStub_107f90_alt1((char*)((_UNKNOWN*)0x17C8LL) +
                             (_QWORD)CudaDriverData_1422118);
  v1 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v0);
  if (v1 != 0) {
    v2 = 0;
    do {
      if (v2 == 0) {
        v2 = CudaDriverRoutine_649b0(v1);
      }
      v1 = *(_QWORD*)(v1 + 16328);
    } while (v1 != 0);
  }
  else {
    v2 = 0;
  }
  v3 = v2;
  CudaDriverStub_108070_alt1((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v0);
  return v3;
}

__int64 cuda_driver_64f00()
{
  void* v0;
  __int64 v1;
  unsigned int v2;
  unsigned int v3;

  v0 = CudaDriverData_1422118;
  CudaDriverStub_107f90_alt1((char*)((_UNKNOWN*)0x17C8LL) +
                             (_QWORD)CudaDriverData_1422118);
  v1 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v0);
  if (v1 != 0) {
    v2 = 0;
    do {
      if (v2 == 0) {
        v2 = cuda_driver_64ba0(v1);
      }
      v1 = *(_QWORD*)(v1 + 16328);
    } while (v1 != 0);
  }
  else {
    v2 = 0;
  }
  v3 = v2;
  CudaDriverStub_108070_alt1((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v0);
  return v3;
}

double cuda_driver_64f80(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 (*v1)();
  double result;
  __int64 (*v3)();
  __int64 (*v4)();
  __int64 (*v5)();
  __int64 (*v6)();
  __int64 (*v7)();
  __int64 (*v8)();
  __int64 (*v9)();
  __int64 (*v10)();
  __int64 (*v11)();
  __int64 (*v12)();
  __int64 (*v13)();
  __int64 (*v14)();
  __int64 (*v15)();
  __int64 (*v16)();
  __int64 (*v17)();
  __int64 (*v18)();
  __int64 (*v19)();
  __int64 (*v20)();
  __int64 (*v21)();
  __int64 (*v22)();
  __int64 (*v23)();
  __int64 (*v24)();
  __int64 (*v25)();
  __int64 (*v26)();
  __int64 (*v27)();
  __int64 (*v28)();
  __int64 (*v29)();
  __int64 (*v30)();
  __int64 (*v31)();
  __int64 (*v32)();
  __int64 (*v33)();
  __int64 (*v34)();
  __int64 (*v35)();
  __int64 (*v36)();
  __int64 (*v37)();
  __int64 (*v38)();
  __int64 (*v39)();
  __int64 (*v40)();
  __int64 (*v41)();
  __int64 (*v42)();
  __int64 (*v43)();
  __int64 (*v44)();
  __int64 (*v45)();
  __int64 (*v46)();
  __int64 (*v47)();
  __int64 (*v48)();
  __int64 (*v49)();
  __int64 (*v50)();
  __int64 (*v51)();
  __int64 (*v52)();
  __int64 (*v53)();
  __int64 (*v54)();

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  if (*(_DWORD*)a1 >= 0x360u) {
    v1 = CudaDriverData_1422c98[0];
    v3 = CudaDriverData_1422ca8[0];
    v4 = CudaDriverData_1422cb0[0];
    v5 = CudaDriverData_1422cb8[0];
    v6 = CudaDriverRoutine_658d0_ptr[0];
    v7 = CudaDriverRoutine_65900_ptr[0];
    *(__int64 (**)(void))(a1 + 16) = CudaDriverData_1422ca0[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 24) = v1;
    v8 = CudaDriverRoutine_65950_ptr[0];
    *(_QWORD*)(a1 + 32) = v3;
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(a1 + 48) = v5;
    *(_QWORD*)(a1 + 56) = v6;
    v9 = CudaDriverRoutine_659a0_ptr[0];
    *(_QWORD*)(a1 + 64) = v7;
    *(_QWORD*)(a1 + 72) = v8;
    v10 = CudaDriverRoutine_659f0_ptr[0];
    v11 = CudaDriverRoutine_65a40_ptr[0];
    *(_QWORD*)(a1 + 80) = v9;
    *(_QWORD*)(a1 + 88) = v10;
    v12 = cuda_driver_requests_65cc0_ptr[0];
    *(_QWORD*)(a1 + 96) = v11;
    *(_QWORD*)(a1 + 104) = v12;
    v13 = CudaDriverRoutine_66b30_ptr[0];
    v14 = cuda_driver_requests_66b60_ptr[0];
    *(__int64 (**)(void))(a1 + 112) = cuda_driver_requests_65aa0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 120) = v13;
    *(__int64 (**)(void))(a1 + 128) = cuda_driver_requests_65a20_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 136) = v14;
    v15 = CudaDriverRoutine_66b80_ptr[0];
    v16 = CudaDriverRoutine_66bb0_ptr[0];
    *(__int64 (**)(void))(a1 + 144) = CudaDriverData_1422d20[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 152) = v15;
    v17 = CudaDriverRoutine_66c00_ptr[0];
    *(_QWORD*)(a1 + 160) = v16;
    *(_QWORD*)(a1 + 168) = v17;
    v18 = CudaDriverRoutine_68c20_ptr[0];
    v19 = CudaDriverStub_66c50_ptr[0];
    *(__int64 (**)(void))(a1 + 176) = CudaDriverRoutine_68b00_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 184) = v18;
    v20 = CudaDriverRoutine_68cc0_ptr[0];
    *(_QWORD*)(a1 + 192) = v19;
    *(_QWORD*)(a1 + 200) = v20;
    v21 = cuda_driver_requests_66c60_ptr[0];
    v22 = cuda_driver_requests_66cb0_ptr[0];
    *(__int64 (**)(void))(a1 + 208) = CudaDriverRoutine_68c80_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 216) = v21;
    v23 = cuda_driver_requests_66d20_ptr[0];
    *(_QWORD*)(a1 + 224) = v22;
    *(_QWORD*)(a1 + 232) = v23;
    v24 = CudaDriverRoutine_66e10_ptr[0];
    v25 = CudaDriverRoutine_66e60_ptr[0];
    *(__int64 (**)(void))(a1 + 240) = CudaDriverRoutine_66dc0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 248) = v24;
    v26 = CudaDriverRoutine_66eb0_ptr[0];
    *(_QWORD*)(a1 + 256) = v25;
    *(_QWORD*)(a1 + 264) = v26;
    v27 = CudaDriverRoutine_66f50_ptr[0];
    v28 = CudaDriverRoutine_66f90_ptr[0];
    *(__int64 (**)(void))(a1 + 272) = CudaDriverRoutine_66f00_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 280) = v27;
    v29 = cuda_driver_requests_66fd0_ptr[0];
    *(_QWORD*)(a1 + 288) = v28;
    *(_QWORD*)(a1 + 296) = v29;
    v30 = cuda_driver_requests_67070_ptr[0];
    v31 = cuda_driver_requests_670f0_ptr[0];
    *(__int64 (**)(void))(a1 + 304) = CudaDriverRoutine_67040_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 312) = v30;
    *(__int64 (**)(void))(a1 + 832) = CudaDriverRoutine_67150_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    v32 = cuda_driver_requests_671a0_ptr[0];
    *(_QWORD*)(a1 + 320) = v31;
    *(_QWORD*)(a1 + 328) = v32;
    v33 = CudaDriverRoutine_67220_ptr[0];
    *(__int64 (**)(void))(a1 + 336) = cuda_driver_requests_671e0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 344) = v33;
    v34 = cuda_driver_requests_67270_ptr[0];
    *(__int64 (**)(void))(a1 + 352) = cuda_driver_requests_67250_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 360) = v34;
    v35 = CudaDriverRoutine_673f0_ptr[0];
    *(__int64 (**)(void))(a1 + 368) = cuda_driver_requests_672e0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 376) = v35;
    v36 = CudaDriverRoutine_67460_ptr[0];
    *(__int64 (**)(void))(a1 + 384) = cuda_driver_requests_67440_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 392) = v36;
    v37 = CudaDriverRoutine_67530_ptr[0];
    *(__int64 (**)(void))(a1 + 400) = cuda_driver_requests_674c0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 408) = v37;
    v38 = CudaDriverRoutine_675d0_ptr[0];
    *(__int64 (**)(void))(a1 + 416) = CudaDriverRoutine_67570_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 424) = v38;
    v39 = CudaDriverRoutine_67670_ptr[0];
    *(__int64 (**)(void))(a1 + 432) = CudaDriverRoutine_67620_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 440) = v39;
    v40 = CudaDriverRoutine_676e0_ptr[0];
    *(__int64 (**)(void))(a1 + 448) = CudaDriverRoutine_676a0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 456) = v40;
    v41 = CudaDriverRoutine_67730_ptr[0];
    *(__int64 (**)(void))(a1 + 464) = cuda_driver_requests_67710_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 472) = v41;
    v42 = CudaDriverRoutine_677a0_ptr[0];
    *(__int64 (**)(void))(a1 + 480) = CudaDriverRoutine_67760_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 488) = v42;
    v43 = cuda_driver_requests_67850_ptr[0];
    *(__int64 (**)(void))(a1 + 496) = cuda_driver_requests_677f0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 504) = v43;
    *(__int64 (**)(void))(a1 + 512) = cuda_driver_requests_678c0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(__int64 (**)(void))(a1 + 520) = CudaDriverRoutine_678e0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    v44 = CudaDriverRoutine_67930_ptr[0];
    *(__int64 (**)(void))(a1 + 528) = cuda_driver_requests_67910_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 536) = v44;
    *(__int64 (**)(void))(a1 + 544) = CudaDriverRoutine_67960_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(__int64 (**)(void))(a1 + 552) = cuda_driver_requests_679a0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    v45 = CudaDriverData_1422eb8[0];
    *(__int64 (**)(void))(a1 + 632) = cuda_driver_requests_67c90_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 816) = v45;
    *(__int64 (**)(void))(a1 + 808) = cuda_driver_requests_67ff0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(__int64 (**)(void))(a1 + 640) = CudaDriverStub_680c0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    v46 = CudaDriverRoutine_680e0_ptr[0];
    *(__int64 (**)(void))(a1 + 648) = CudaDriverStub_680d0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 656) = v46;
    *(__int64 (**)(void))(a1 + 560) = cuda_driver_requests_67a90_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(__int64 (**)(void))(a1 + 568) = cuda_driver_requests_67ab0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    v47 = CudaDriverRoutine_67b50_ptr[0];
    *(__int64 (**)(void))(a1 + 576) = cuda_driver_requests_67b30_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 584) = v47;
    *(__int64 (**)(void))(a1 + 592) = CudaDriverRoutine_67b80_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(__int64 (**)(void))(a1 + 600) = CudaDriverStub_67bb0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    v48 = CudaDriverRoutine_67bf0_ptr[0];
    *(__int64 (**)(void))(a1 + 856) = CudaDriverRoutine_67bc0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 608) = v48;
    *(__int64 (**)(void))(a1 + 616) = CudaDriverRoutine_67c30_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(__int64 (**)(void))(a1 + 624) = CudaDriverRoutine_67c60_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    v49 = cuda_driver_requests_68130_ptr[0];
    *(__int64 (**)(void))(a1 + 664) = cuda_driver_requests_67870_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 672) = v49;
    *(__int64 (**)(void))(a1 + 680) = cuda_driver_requests_681f0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(__int64 (**)(void))(a1 + 688) = cuda_driver_requests_68370_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    v50 = cuda_driver_requests_68570_ptr[0];
    *(__int64 (**)(void))(a1 + 696) = cuda_driver_requests_68470_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 704) = v50;
    *(__int64 (**)(void))(a1 + 712) = cuda_driver_requests_685c0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(__int64 (**)(void))(a1 + 728) = CudaDriverRoutine_68640_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    v51 = cuda_driver_requests_68670_ptr[0];
    *(__int64 (**)(void))(a1 + 720) = cuda_driver_requests_68620_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 736) = v51;
    *(__int64 (**)(void))(a1 + 848) = cuda_driver_requests_686f0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(__int64 (**)(void))(a1 + 744) = CudaDriverData_1422fa0[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    v52 = cuda_driver_requests_68970_ptr[0];
    *(__int64 (**)(void))(a1 + 752) = CudaDriverRoutine_68920_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 840) = v52;
    *(__int64 (**)(void))(a1 + 768) = cuda_driver_requests_689e0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(__int64 (**)(void))(a1 + 776) = CudaDriverRoutine_68a20_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    v53 = CudaDriverRoutine_68990_ptr[0];
    *(__int64 (**)(void))(a1 + 784) = CudaDriverRoutine_68a50_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(_QWORD*)(a1 + 760) = v53;
    *(__int64 (**)(void))(a1 + 792) = CudaDriverRoutine_68a80_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    *(__int64 (**)(void))(a1 + 800) = CudaDriverRoutine_68ab0_ptr[0],
                               result = COERCE_AS(
                                   __typeof__(result),
                                   PSEUDO_REGISTER(double, "d0", "=w"));
    v54 = cuda_driver_requests_68ae0_ptr[0];
    *(_QWORD*)(a1 + 4) = 5;
    *(_QWORD*)(a1 + 824) = v54;
    *(_QWORD*)&result = 5;
  }
  return result;
}

double cuda_driver_65430(__int64 a1)
{

#pragma clang fp contract(off)
  double result;
  __int64 (*v2)();

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  if (*(_DWORD*)a1 >= 0x20u) {
    *(_QWORD*)(a1 + 4) = 5;
    v2 = CudaDriverData_1422fe8[0];
    *(_QWORD*)(a1 + 16) = CudaDriverData_1422ff0;
    *(_QWORD*)(a1 + 24) = v2;
    *(_QWORD*)&result = 5;
  }
  return result;
}

__int64 cuda_driver_65560(__int64 a1)
{
  __int128 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  int8x16_t v9;
  int v10;
  char v11;
  int v12;
  int v13;
  __int64 v14;
  struct {
    _QWORD v15[6];
    __int64 v16;
    __int64 v17;
    int8x16_t v18;
    __int128 v19;
    __int64 v20;
  } v15_;

  if (*(_DWORD*)a1 < 0x60u) {
    return 2;
  }
  v4 = *(_OWORD*)(a1 + 32);
  v5 = *(unsigned int*)(a1 + 20);
  v6 = *(_BYTE*)(a1 + 24) == 0;
  v7 = *(unsigned int*)(a1 + 28);
  v8 = *(_QWORD*)(a1 + 48);
  v9 = *(int8x16_t*)(a1 + 56);
  v15_.v15[0] = 0;
  v15_.v15[3] = 0;
  v15_.v15[1] = v5;
  v15_.v15[2] = v7;
  v15_.v20 = 0;
  *(_OWORD*)&v15_.v15[4] = v4;
  v15_.v17 = 0;
  v15_.v16 = v8;
  LODWORD(v8) = *(_DWORD*)(a1 + 72);
  v10 = *(_DWORD*)(a1 + 76);
  v15_.v18 = vextq_s8(v9, v9, 8u);
  v15_.v19 = (__typeof__(v15_.v19)){0};
  LODWORD(v15_.v17) = v8;
  v11 = !v6;
  DWORD1(v15_.v19) = v10;
  LOBYTE(v15_.v15[3]) = v11;
  HIDWORD(v15_.v19) = *(_DWORD*)(a1 + 80);
  BYTE9(v15_.v19) = *(_BYTE*)(a1 + 84) != 0;
  BYTE8(v15_.v19) = *(_BYTE*)(a1 + 85) != 0;
  v12 = *(_DWORD*)(a1 + 88);
  switch (v12) {
  case 1:
    goto LABEL_12;
  case 2:
    v13 = 1;
    goto LABEL_11;
  case 3:
    v13 = 2;
  LABEL_11:
    LODWORD(v15_.v19) = v13;
  LABEL_12:
    v14 = *(_QWORD*)(a1 + 4);
    LOBYTE(v15_.v20) = *(_BYTE*)(a1 + 92) != 0;
    BYTE1(v15_.v20) = *(_BYTE*)(a1 + 93) != 0;
    return NvRmGpuChannelCreate_plt(*(_QWORD*)(a1 + 12), v15_.v15, v14);
  default:
    break;
  }
  return 4;
}

__int64 cuda_driver_68b50(__int64 a1)
{
  __int64 result;
  _QWORD* v5;
  int v6;
  struct {
    __int64 v7;
    int v8;
    int v9;
  } v7_;

  if (*(_DWORD*)a1 < 0x24u) {
    return 2;
  }
  result = NvRmHost1xSyncpointWait_plt(
      *(_QWORD*)(a1 + 4), *(unsigned int*)(a1 + 12), *(unsigned int*)(a1 + 16),
      *(_QWORD*)(a1 + 20), &v7_.v7);
  if ((_DWORD)result == 0) {
    v5 = *(_QWORD**)(a1 + 28);
    if (v5 != nullptr) {
      *v5 = v7_.v7;
      *(_DWORD*)(*(_QWORD*)(a1 + 28) + 8LL) = v7_.v8;
      if (v7_.v9 == 0) {
        v6 = 1;
        goto LABEL_10;
      }
      if (v7_.v9 == 1) {
        v6 = 2;
      LABEL_10:
        *(_DWORD*)(*(_QWORD*)(a1 + 28) + 12LL) = v6;
        return 0;
      }
    }
    return 0;
  }
  return result;
}

__int64 cuda_driver_69be0(unsigned __int64 a1, _DWORD* a2, _DWORD* a3)
{
  __int64 result;
  __int64 v5;
  _DWORD* v6;
  void* v7;
  __int64 v9;
  _DWORD* v10;

  result = 1;
  if (a2 != nullptr && a3 != nullptr) {
    if (a1 != 0) {
      v5 = (__int64)a2;
      v6 = a3;
      v7 = CudaDriverData_1422118;
      cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                         (_QWORD)CudaDriverData_1422118);
      v9 = CudaDriverRoutine_1a2980(
          *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v7), a1);
      CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v7);
      if (v9 == 0) {
        v9 = a1;
        if (*(_DWORD*)(a1 + 4) != 2) {
          return 1;
        }
      }
      if ((unsigned int)CudaDriverRoutine_d9230((__int64*)&v10, v5, v9) != 0) {
        return 1;
      }
      a2 = v10;
      a3 = v6;
    }
    *a3 = a2[203];
    a3[1] = a2[202];
    a3[2] = a2[205];
    a3[3] = a2[210];
    return 0;
  }
  return result;
}

__int64 cuda_driver_69d20(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  void* v6;
  __int64 v8;

  if (a1 == 0) {
    return 1;
  }
  v6 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                     (_QWORD)CudaDriverData_1422118);
  v8 = CudaDriverRoutine_1a2980(
      *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v6), a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v6);
  if (v8 != 0) {
    if (a2 == 0) {
      return 1;
    }
  }
  else {
    if (*(_DWORD*)(a1 + 4) == 2) {
      v8 = a1;
    }
    else {
      v8 = 0;
    }
    if (a2 == 0) {
      return 1;
    }
  }
  if (v8 != 0) {
    return CudaDriverRoutine_c7ea0(v8, a2, a3, 1);
  }
  return 1;
}

__int64 cuda_driver_6a330(__int64 result)
{
  if (*(_DWORD*)((char*)((_UNKNOWN*)0xFCLL) + (_QWORD)CudaDriverData_1422118 +
                 4) != 840743424) {
    return cuda_driver_127770(result);
  }
  return result;
}

__int64 cuda_driver_6a360(_QWORD* a1, __int64 a2)
{
  __int64 result;
  int v5;
  struct {
    unsigned int v6;
    char gap20_[4];
    __int64 v7;
    _QWORD* v8;
    __int64 v9;
  } v6_;
  _QWORD v10[3];
  __int64 v11;
  struct {
    __int128 v12;
    __int128 v13;
    __int128 v14;
    __int64 v15;
  } v12_;

  v11 = 0;
  result = CudaDriverRoutine_df060(&v11);
  if ((_DWORD)result == 0) {
    if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_1432190) != 0) {
      v5 = 0;
      v6_.v6 = 0;
      v6_.v9 = a2;
      v6_.v7 = v11;
      v6_.v8 = a1;
      v10[1] = &v6_.v6;
      v10[2] = &v5;
      v10[0] = 24;
      cuda_driver_20b420(0xCu, 1u, (__int64)v10);
      if (v5 == 0) {
        v12_.v15 = 0;
        v12_.v12 = (__typeof__(v12_.v12)){0};
        v12_.v13 = (__typeof__(v12_.v13)){0};
        v12_.v14 = (__typeof__(v12_.v14)){0};
        v6_.v6 =
            CudaDriverRoutine_6b250(v6_.v7, v6_.v8, v6_.v9, (__int64)&v12_.v12);
      }
      HIDWORD(v10[0]) = 1;
      cuda_driver_20b420(0xCu, 1u, (__int64)v10);
      return v6_.v6;
    }
    else {
      v12_.v15 = 0;
      v12_.v13 = (__typeof__(v12_.v13)){0};
      v12_.v14 = (__typeof__(v12_.v14)){0};
      v12_.v12 = (__typeof__(v12_.v12)){0};
      return CudaDriverRoutine_6b250(v11, a1, a2, (__int64)&v12_.v12);
    }
  }
  return result;
}

__int64 cuda_driver_6a480(_QWORD* a1, int a2)
{
  __int64 result;
  int v5;
  int v6;
  struct {
    unsigned int v7;
    char gap20_[4];
    _QWORD* v8;
    int v9;
  } v7_;
  _QWORD v10[3];

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                   (_QWORD)CudaDriverData_1432190) != 0) {
      v6 = 0;
      v7_.v7 = 0;
      v7_.v8 = a1;
      v7_.v9 = a2;
      v10[1] = &v7_.v7;
      v10[2] = &v6;
      v10[0] = 24;
      cuda_driver_20b420(0xCu, 2u, (__int64)v10);
      if (v6 == 0) {
        v5 = 101;
        if ((v7_.v9 & 0x80000000) == 0 && v7_.v9 < CudaDriverData_1434ac0) {
          v5 = 0;
          *v7_.v8 = *(_QWORD*)(*((_QWORD*)&CudaDriverData_14347a8 +
                                 (unsigned int)v7_.v9 + 35) +
                               16864LL);
        }
        v7_.v7 = v5;
      }
      HIDWORD(v10[0]) = 1;
      cuda_driver_20b420(0xCu, 2u, (__int64)v10);
      return v7_.v7;
    }
    else {
      result = 101;
      if ((a2 & 0x80000000) == 0 && a2 < CudaDriverData_1434ac0) {
        *a1 = *(_QWORD*)(*((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a2 +
                           35) +
                         16864LL);
        return 0;
      }
    }
  }
  return result;
}

__int64 cuda_driver_6a5b0(int a1, __int64* a2)
{
  __int64 result;
  int v5;
  struct {
    unsigned int v6;
    int v7;
    __int64* v8;
  } v6_;
  _QWORD v9[3];

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_1432190 +
                   4) != 0) {
      v5 = 0;
      v6_.v6 = 0;
      v6_.v7 = a1;
      v6_.v8 = a2;
      v9[1] = &v6_.v6;
      v9[2] = &v5;
      v9[0] = 24;
      cuda_driver_20b420(0xCu, 3u, (__int64)v9);
      if (v5 == 0) {
        v6_.v6 = cuda_driver_6b4a0_alt1(v6_.v7, v6_.v8);
      }
      HIDWORD(v9[0]) = 1;
      cuda_driver_20b420(0xCu, 3u, (__int64)v9);
      return v6_.v6;
    }
    else {
      return cuda_driver_6b4a0_alt1(a1, a2);
    }
  }
  return result;
}

__int64 cuda_driver_6a690(int a1, int a2)
{
  __int64 result;
  struct {
    __int64 v5;
    int v6;
    int v7;
  } v5_;
  _QWORD v8[3];

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)((char*)((__int64*)0x10LL) +
                   (_QWORD)CudaDriverData_1432190) != 0) {
      v5_.v5 = 0;
      v5_.v6 = a1;
      v5_.v7 = a2;
      v8[1] = (char*)&v5_.v5 + 4;
      v8[2] = &v5_.v5;
      v8[0] = 24;
      cuda_driver_20b420(0xCu, 4u, (__int64)v8);
      if ((_DWORD)v5_.v5 == 0) {
        HIDWORD(v5_.v5) = CudaDriverRoutine_6b5f0(v5_.v6, v5_.v7);
      }
      HIDWORD(v8[0]) = 1;
      cuda_driver_20b420(0xCu, 4u, (__int64)v8);
      return HIDWORD(v5_.v5);
    }
    else {
      return CudaDriverRoutine_6b5f0(a1, a2);
    }
  }
  return result;
}

__int64 cuda_driver_6a770(int a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  _QWORD v8[3];
  struct {
    unsigned int v9;
    int v10;
  } v9_;

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)((char*)((__int64*)0x10LL) + (_QWORD)CudaDriverData_1432190 +
                   4) != 0) {
      v7 = 0;
      v9_.v9 = 0;
      v9_.v10 = a1;
      v8[1] = &v9_.v9;
      v8[2] = &v7;
      v8[0] = 24;
      cuda_driver_20b420(0xCu, 5u, (__int64)v8);
      if (v7 == 0) {
        v3 = 101;
        if ((v9_.v10 & 0x80000000) == 0 && v9_.v10 < CudaDriverData_1434ac0) {
          v4 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)v9_.v10 + 35);
          CudaDriverStub_107f90(v4 + 16872);
          v3 = cuda_driver_9b2b0(v4);
          CudaDriverStub_108070(v4 + 16872);
        }
        v9_.v9 = v3;
      }
      HIDWORD(v8[0]) = 1;
      cuda_driver_20b420(0xCu, 5u, (__int64)v8);
      return v9_.v9;
    }
    else {
      result = 101;
      if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
        v5 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
        CudaDriverStub_107f90(v5 + 16872);
        v6 = cuda_driver_9b2b0(v5);
        CudaDriverStub_108070(v5 + 16872);
        return v6;
      }
    }
  }
  return result;
}

__int64 cuda_driver_6a8e0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                          int a5)
{
  __int64 result;
  int v11;
  struct {
    unsigned int v12;
    char gap12_[4];
    __int64 v13;
    _QWORD* v14;
    __int64 v15;
    _QWORD v16[3];
  } v12_;
  _QWORD v17[3];
  __int64 v18;
  struct {
    __int128 v19;
    __int64 v20;
    _BYTE v21[24];
    __int64 v22;
  } v19_;

  v18 = 0;
  result = CudaDriverRoutine_df060(&v18);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)((char*)((__int64*)0x18LL) +
                   *(_QWORD*)((char*)((_UNKNOWN*)0x60LL) +
                              (_QWORD)CudaDriverData_14225e0) +
                   4) != 0) {
      v11 = 0;
      v12_.v12 = 0;
      v12_.v15 = a2;
      v12_.v16[0] = a3;
      v12_.v16[1] = a4;
      LODWORD(v12_.v16[2]) = a5;
      v12_.v13 = v18;
      v12_.v14 = a1;
      v17[1] = &v12_.v12;
      v17[2] = &v11;
      v17[0] = 24;
      cuda_driver_20b420(0xCu, 7u, (__int64)v17);
      if (v11 == 0) {
        v19_.v22 = 0;
        v19_.v19 = (__typeof__(v19_.v19)){0};
        v19_.v20 = 0;
        *(_OWORD*)&v19_.v21[8] = (__typeof__(*(_OWORD*)&v19_.v21[8])){0};
        qmemcpy(v19_.v21, v12_.v16, 20);
        v12_.v12 = CudaDriverRoutine_6b250(v12_.v13, v12_.v14, v12_.v15,
                                           (__int64)&v19_.v19);
      }
      HIDWORD(v17[0]) = 1;
      cuda_driver_20b420(0xCu, 7u, (__int64)v17);
      return v12_.v12;
    }
    else {
      v19_.v22 = 0;
      v19_.v20 = 0;
      *(_OWORD*)&v19_.v21[8] = (__typeof__(*(_OWORD*)&v19_.v21[8])){0};
      v19_.v19 = (__typeof__(v19_.v19)){0};
      *(_QWORD*)v19_.v21 = a3;
      *(_QWORD*)&v19_.v21[8] = a4;
      *(_DWORD*)&v19_.v21[16] = a5;
      return CudaDriverRoutine_6b250(v18, a1, a2, (__int64)&v19_.v19);
    }
  }
  return result;
}

__int64 cuda_driver_6b4a0(unsigned int a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  char v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _DWORD* v14;
  unsigned int v15;

  result = 101;
  if ((a1 & 0x80000000) != 0 || (int)a1 >= CudaDriverData_1434ac0) {
    return result;
  }
  if (a2 == nullptr) {
    return 1;
  }
  v5 = *((_QWORD*)&CudaDriverData_14347a8 + a1 + 35);
  CudaDriverStub_107f90(v5 + 16872);
  if (*(_DWORD*)(*(_QWORD*)(v5 + 16864) + 8LL) != 1) {
    v15 = 708;
    goto LABEL_20;
  }
  v6 = *(_QWORD*)(v5 + 16904);
  v7 = *a2;
  v8 = *(_DWORD*)(v6 + 8);
  v9 = *(_BYTE*)(v6 + 12);
  v10 = *(_DWORD*)(v6 + 40);
  v11 = *(_QWORD*)(v6 + 48);
  if (*a2 == 0) {
  LABEL_18:
    *(_DWORD*)(v6 + 8) = v8;
    *(_BYTE*)(v6 + 12) = v9;
    v15 = 0;
    *(_DWORD*)(v6 + 40) = v10;
    *(_QWORD*)(v6 + 48) = v11;
    goto LABEL_20;
  }
  v12 = a2 + 2;
  while (1) {
    v14 = (_DWORD*)*(v12 - 1);
    if (v7 != 2) {
      break;
    }
    if (v14 == (_DWORD*)((char*)((char*)0x0LL) + 1)) {
      v11 = 0;
      v10 = 0;
    }
    else {
      if (v14 != (int*)((char*)((int*)0x4LL) + 1)) {
        goto LABEL_19;
      }
      v10 = 1;
      v11 = 0;
    }
  LABEL_8:
    v13 = *v12;
    v12 += 2;
    v7 = v13;
    if (v13 == 0) {
      goto LABEL_18;
    }
  }
  if (v7 == 1) {
    v9 = 1;
    if (*v14 < 0x100u) {
      v8 = (*v14 | 8) & ~CudaDriverData_143589c | CudaDriverData_1435898;
      goto LABEL_8;
    }
  }
LABEL_19:
  v15 = 1;
LABEL_20:
  CudaDriverStub_108070(v5 + 16872);
  return v15;
}

__int64 cuda_driver_6c0c0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v12;
  int v13;
  unsigned int v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _OWORD* v25;
  _OWORD* v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  unsigned int v31;
  __int128* v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  unsigned int v37;
  __int128* v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  unsigned int v43;
  _OWORD* v44;
  __int128 v45;
  __int128 v46;
  __int128 v47;
  __int128 v48;
  _OWORD* v49;
  _OWORD* v50;
  __int128 v51;
  __int128 v52;
  __int128 v53;
  __int128 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  _QWORD v59[3];

  result = 4;
  if (a1 != 0 && a2 != nullptr && a3 != 0 && a4 != 0) {
    if (CudaDriverData_14324bc != 0) {
      result = 0;
      *(_DWORD*)(a3 + 48) = 1;
      return result;
    }
    v59[1] = v4;
    v59[2] = v5;
    if ((unsigned int)CudaDriverData_14324b8 <= 0x2E &&
        (*(_BYTE*)(*(_QWORD*)(a4 + 72) + 88LL) & 1) != 0) {
      return 0;
    }
    v8 = a1;
    result = (*(__int64 (**)(_QWORD, _QWORD*, __int64))(a1 + 23376048))(
        *(_QWORD*)(a4 + 48), v59, 1);
    if ((_DWORD)result == 0) {
      v12 = a3;
      v13 = HIDWORD(CudaDriverData_1432530);
      v14 = DWORD1(CudaDriverData_1432530);
      if (HIDWORD(CudaDriverData_1432530) != 0) {
        v15 = a2;
        v16 = v8;
        v17 = a4;
        if (DWORD1(CudaDriverData_1432530) != (_DWORD)CudaDriverData_1432530) {
        LABEL_30:
          result = 0;
          HIDWORD(CudaDriverData_1432530) = v13 + 1;
          v55 = CudaDriverData_1432540 + 92LL * v14;
          DWORD1(CudaDriverData_1432530) =
              (v14 + 1) % DWORD2(CudaDriverData_1432530);
          *(_DWORD*)v55 = 2;
          *(_DWORD*)(v55 + 4) = *(_DWORD*)(v16 + 1088);
          *(_QWORD*)(v55 + 12) = *(_QWORD*)v12;
          *(_DWORD*)(v55 + 8) = v15[4];
          *(_QWORD*)(v55 + 20) = *v15;
          *(_QWORD*)(v55 + 28) = **(_QWORD**)(v17 + 72);
          *(_QWORD*)(v55 + 36) = *(_QWORD*)(v17 + 8);
          *(_QWORD*)(v55 + 44) = v59[0];
          v56 = *(_QWORD*)(v12 + 24);
          *(_DWORD*)(v55 + 60) = *(_DWORD*)(v12 + 32);
          *(_QWORD*)(v55 + 52) = v56;
          v57 = *(_QWORD*)(v12 + 36);
          *(_DWORD*)(v55 + 72) = *(_DWORD*)(v12 + 44);
          *(_QWORD*)(v55 + 64) = v57;
          if (*(_BYTE*)(*(_QWORD*)(v17 + 72) + 88LL) != 0) {
            v58 = 1;
          }
          else {
            v58 = 2;
          }
          *(_DWORD*)(v55 + 76) = v58;
          *(_QWORD*)(v55 + 80) = *(_QWORD*)(v12 + 64);
          *(_DWORD*)(v55 + 88) = *(_DWORD*)(v12 + 72);
          *(_DWORD*)(v12 + 48) = 2;
          return result;
        }
        v18 = CudaDriverRoutine_12e510(
            (unsigned int)(2 * DWORD2(CudaDriverData_1432530)), 92);
        v19 = DWORD2(CudaDriverData_1432530);
        v20 = CudaDriverData_1432540;
        if (DWORD2(CudaDriverData_1432530) != 0) {
          v21 = CudaDriverData_1432530;
          v22 = BYTE8(CudaDriverData_1432530) & 3;
          if (DWORD2(CudaDriverData_1432530) >= 4) {
            v24 = DWORD2(CudaDriverData_1432530) & 0xFFFFFFFC;
            v23 = 0;
            v25 = (_OWORD*)v18;
            do {
              v26 = (_OWORD*)(v20 + 92LL * v21);
              v23 += 4;
              v27 = v26[1];
              *v25 = *v26;
              v25[1] = v27;
              v28 = v26[2];
              v29 = v26[3];
              v30 = v26[4];
              *(_OWORD*)((char*)v25 + 76) = *(_OWORD*)((char*)v26 + 76);
              v25[3] = v29;
              v25[4] = v30;
              v25[2] = v28;
              v31 = (v21 + 1) % v19;
              v32 = (__int128*)(v20 + 92LL * v31);
              v34 = v32[3];
              v33 = v32[4];
              v35 = *(__int128*)((char*)v32 + 76);
              *(_OWORD*)((char*)v25 + 124) = v32[2];
              *(_OWORD*)((char*)v25 + 168) = v35;
              *(_OWORD*)((char*)v25 + 156) = v33;
              *(_OWORD*)((char*)v25 + 140) = v34;
              v36 = *v32;
              if (v31 + 1 == v19) {
                v37 = 0;
              }
              else {
                v37 = v31 + 1;
              }
              v38 = (__int128*)(v20 + 92LL * v37);
              *(_OWORD*)((char*)v25 + 108) = v32[1];
              *(_OWORD*)((char*)v25 + 92) = v36;
              v39 = v38[2];
              v41 = v38[3];
              v40 = v38[4];
              *(_OWORD*)((char*)v25 + 260) = *(__int128*)((char*)v38 + 76);
              *(_OWORD*)((char*)v25 + 216) = v39;
              *(_OWORD*)((char*)v25 + 248) = v40;
              *(_OWORD*)((char*)v25 + 232) = v41;
              v42 = *v38;
              *(_OWORD*)((char*)v25 + 200) = v38[1];
              *(_OWORD*)((char*)v25 + 184) = v42;
              v43 = (v37 + 1) % v19;
              v44 = (_OWORD*)(v20 + 92LL * v43);
              v45 = v44[1];
              *(_OWORD*)((char*)v25 + 276) = *v44;
              *(_OWORD*)((char*)v25 + 292) = v45;
              v46 = v44[2];
              v47 = v44[3];
              v48 = v44[4];
              v25[22] = *(_OWORD*)((char*)v44 + 76);
              *(_OWORD*)((char*)v25 + 324) = v47;
              *(_OWORD*)((char*)v25 + 340) = v48;
              *(_OWORD*)((char*)v25 + 308) = v46;
              v25 += 23;
              if (v43 + 1 == v19) {
                v21 = 0;
              }
              else {
                v21 = v43 + 1;
              }
            } while (v24 != v23);
          }
          else {
            v23 = 0;
          }
          if (v22 != 0) {
            v49 = (_OWORD*)(v18 + 92 * v23);
            do {
              v50 = (_OWORD*)(v20 + 92LL * v21);
              --v22;
              v51 = v50[1];
              *v49 = *v50;
              v49[1] = v51;
              v52 = v50[2];
              v53 = v50[3];
              v54 = v50[4];
              *(_OWORD*)((char*)v49 + 76) = *(_OWORD*)((char*)v50 + 76);
              v49[3] = v53;
              v49[4] = v54;
              v49[2] = v52;
              v49 = (_OWORD*)((char*)v49 + 92);
              v21 = (v21 + 1) % v19;
            } while (v22 != 0);
          }
        }
        LODWORD(CudaDriverData_1432530) = 0;
        DWORD1(CudaDriverData_1432530) = v19;
        DWORD2(CudaDriverData_1432530) = 2 * v19;
        CudaDriverRoutine_12e340(v20);
        v14 = DWORD1(CudaDriverData_1432530);
        v13 = HIDWORD(CudaDriverData_1432530);
        CudaDriverData_1432540 = v18;
        v12 = a3;
      }
      v17 = a4;
      v15 = a2;
      v16 = v8;
      goto LABEL_30;
    }
  }
  return result;
}

int* cuda_driver_6c700(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64* a5, __int64 a6, _BYTE* a7)
{
  int* result;
  __int64 v9;
  __int64 v10;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  bool v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE v23[3];
  struct {
    char gap0_[7];
    char v24;
    __int64 v25;
    int v26;
    char gap20_[4];
    __int64 v27;
    int v28;
  } v24_;
  __int64 v29;

  result = ((int*)0x4LL);
  v29 = a6;
  v23[0] = 0;
  if (a1 != 0 && a5 != nullptr && a7 != nullptr) {
    v9 = *a5;
    if (*a5 != 0) {
      if (*(_DWORD*)(v9 + 48) != 0) {
        return (_DWORD*)(((char*)0x0LL) + 1);
      }
      else {
        v10 = *(_QWORD*)(a1 + 24);
        *a7 = 0;
        v13 = a2;
        v14 = a3;
        v15 = a4;
        result = (int*)(*(__int64 (**)(__int64, __int64, __int64, __int64,
                                       _BYTE*, __int64*))(a1 + 23376536))(
            a1, a2, a3, a4, v23, &v29);
        if ((_DWORD)result == 0 &&
            (v23[0] != 1 ||
             (_DWORD)(result = (int*)CudaDriverRoutine_6c580(
                          a1, v13, v14, v15, &v29, &v24_.v24)) == 0)) {
          result = (int*)zstd_decompress_223310(*(_QWORD*)(v10 + 128), v29);
          if (result != nullptr) {
            *a7 = 0;
            v16 = *result;
            if (*result == 1 ||
                (v16 != 4 ? (v17 = CudaDriverData_14324bc == 0) : (v17 = true),
                 !v17 || (v16 == 0 ? (v18 = *CudaDriverData_1423050 == 0)
                                   : (v18 = true),
                          !v18))) {
              *a7 = 1;
            }
            if (result == *(int**)(v9 + 8) || *result != 1) {
              return nullptr;
            }
            else {
              v19 = *(_QWORD*)v9;
              v20 = (__int64)result;
              v24_.v25 = *(_QWORD*)(v9 + 24);
              v24_.v26 = *(_DWORD*)(v9 + 32);
              v24_.v27 = *(_QWORD*)(v9 + 36);
              v24_.v28 = *(_DWORD*)(v9 + 44);
              CudaDriverRoutine_1a0e10((_QWORD*)v9);
              result = (int*)CudaDriverRoutine_1a0d20(a5, v20, v19);
              if ((_DWORD)result == 0) {
                v21 = *a5;
                *(_QWORD*)(v21 + 24) = v24_.v25;
                *(_DWORD*)(v21 + 32) = v24_.v26;
                v22 = *a5;
                *(_QWORD*)(v22 + 36) = v24_.v27;
                *(_DWORD*)(v22 + 44) = v24_.v28;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_6cfd0(unsigned int a1)
{
  __int64 result;
  int v3;
  _DWORD v4[6];
  _QWORD v5[6];
  char v6;

  result = CudaDriverRoutine_6cac0(7u, a1, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    if ((*(_DWORD**)((char*)((_UNKNOWN**)0x8LL) + CudaDriverData_1423000))[4] ==
        3) {
      return 0;
    }
    else {
      v6 = 0;
      memset(&v5[2], 0, 32);
      v3 = CudaDriverData_14324c0;
      v5[1] = a1;
      ++CudaDriverData_14324c0;
      LODWORD(v5[0]) = 1;
      HIDWORD(v5[0]) = v3;
      result = cuda_driver_82e60((__int64)CudaDriverData_1423028, (__int64)v5,
                                 0x30u);
      if ((_DWORD)result == 0) {
        LODWORD(result) = CudaDriverRoutine_82bc0(
            (__int64)CudaDriverData_1423030, (__int64)v4, 0x18u, &v6);
        if ((_DWORD)result != 0) {
          return (unsigned int)result;
        }
        else {
          return v4[0];
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_6d0c0(unsigned int a1)
{
  __int64 result;
  int v3;
  _DWORD v4[6];
  _QWORD v5[6];
  char v6;

  result = CudaDriverRoutine_6cac0(7u, a1, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    if ((*(_DWORD**)((char*)((_UNKNOWN**)0x8LL) + CudaDriverData_1423000))[4] ==
        3) {
      return 0;
    }
    else {
      v6 = 0;
      memset(&v5[2], 0, 32);
      v3 = CudaDriverData_14324c0;
      v5[1] = a1;
      ++CudaDriverData_14324c0;
      LODWORD(v5[0]) = 2;
      HIDWORD(v5[0]) = v3;
      result = cuda_driver_82e60((__int64)CudaDriverData_1423028, (__int64)v5,
                                 0x30u);
      if ((_DWORD)result == 0) {
        LODWORD(result) = CudaDriverRoutine_82bc0(
            (__int64)CudaDriverData_1423030, (__int64)v4, 0x18u, &v6);
        if ((_DWORD)result != 0) {
          return (unsigned int)result;
        }
        else {
          return v4[0];
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_6e000(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned __int64 v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  struct {
    __int64 v15;
    _QWORD* v16;
  } v15_;

  if (CudaDriverData_14324b0 != 1) {
    return 5;
  }
  if ((CudaDriverData_14324b4 & 1) == 0) {
    goto LABEL_14;
  }
  v4 = a1;
  if ((unsigned int)CudaDriverStub_12dd00(
          (unsigned int)CudaDriverData_14324cc) != 0) {
    return 44;
  }
  if (CudaDriverData_14324b0 != 1) {
    v7 = 0;
    v8 = 5;
    a1 = v4;
    goto LABEL_23;
  }
  a1 = v4;
  if (CudaDriverData_14324b4 != 1) {
    goto LABEL_14;
  }
  if ((unsigned int)CudaDriverStub_12dd00(
          (unsigned int)CudaDriverData_14324cc) == 0) {
    a1 = v4;
    if (CudaDriverData_14324b0 != 1) {
      goto LABEL_31;
    }
    if (CudaDriverData_14324b4 == 1) {
      v9 = CudaDriverStub_12dd00((unsigned int)CudaDriverData_14324cc);
      a1 = v4;
      if (v9 != 0) {
        goto LABEL_31;
      }
    }
  LABEL_14:
    v5 = HIDWORD(CudaDriverData_1432510);
    if (HIDWORD(CudaDriverData_1432510) != 0) {
      v1 = (__int64)&CudaDriverData_1432510;
      v10 = CudaDriverData_1432510;
      LODWORD(v3) = DWORD2(CudaDriverData_1432510);
      v7 = CudaDriverData_1432520;
      --HIDWORD(CudaDriverData_1432510);
      v2 = (unsigned int)(CudaDriverData_1432510 + 1) %
           DWORD2(CudaDriverData_1432510);
      LODWORD(CudaDriverData_1432510) =
          (unsigned int)(CudaDriverData_1432510 + 1) %
          DWORD2(CudaDriverData_1432510);
      if (CudaDriverData_1432520 != 0) {
        v1 = CudaDriverData_1432520 + 92LL * v10;
        v5 = *(_DWORD*)v1;
        v11 = *(unsigned int*)(v1 + 4);
        v3 = *(unsigned int*)(v1 + 8);
        v2 = *(_QWORD*)(v1 + 12);
        v14 = *(_QWORD*)(v1 + 20);
        if (*(int*)v1 <= 3) {
          switch (v5) {
          case 1:
            v12 = a1;
            v15_.v15 = *(_QWORD*)(v1 + 32);
            v15_.v16 = nullptr;
            v13 = CudaDriverRoutine_1a0a80((__int64)CudaDriverRoutine_76d70,
                                           (__int64)&v15_.v15);
            v8 = 10;
            v5 = 1;
            v7 = 0;
            if (v13 != 0) {
              a1 = v12;
            }
            else {
              a1 = v12;
              if (v15_.v16 != nullptr) {
                v7 = v15_.v16[2];
                if (v7 != 0) {
                  v7 = *(_QWORD*)(v7 + 8);
                  if (v7 != 0) {
                    v1 = v15_.v16[5];
                    v3 = v15_.v16[6];
                    v8 = 0;
                    v7 = v3 & 0xFFFFFFFF00000000LL;
                    v2 = HIDWORD(v14) | (unsigned __int64)(v11 << 32);
                    v5 = 1;
                  }
                }
              }
            }
            goto LABEL_23;
          case 2:
            v1 = v11 | (v2 << 32);
            v2 = v14;
            v7 = 0;
            v8 = 0;
            goto LABEL_23;
          case 3:
            v7 = 0;
            v8 = 0;
            v1 = v11 | (*(_QWORD*)(v1 + 44) << 32);
            v5 = 3;
            goto LABEL_23;
          default:
            break;
          }
        }
        else {
          if ((unsigned int)(v5 - 5) < 4) {
            v8 = 0;
            v1 = v11 | (v3 << 32);
            v7 = v2 & 0xFFFFFFFF00000000LL;
            LODWORD(v3) = v2;
            goto LABEL_23;
          }
          if ((unsigned int)(v5 - 9) < 3) {
            v7 = 0;
            v8 = 0;
            goto LABEL_23;
          }
          if (v5 == 4) {
            v7 = 0;
            v8 = 0;
            v1 = *(unsigned int*)(v1 + 4);
            goto LABEL_23;
          }
        }
      LABEL_31:
        v8 = 10;
        v7 = 0;
        v5 = 0;
        goto LABEL_23;
      }
      v5 = 0;
    }
    else {
      v7 = 0;
    }
    v8 = 22;
    goto LABEL_23;
  }
  v7 = 0;
  v8 = 44;
  a1 = v4;
LABEL_23:
  *(_DWORD*)a1 = v5;
  *(_QWORD*)(a1 + 8) = v1;
  *(_QWORD*)(a1 + 16) = v7 | (unsigned int)v3;
  *(_QWORD*)(a1 + 24) = v2;
  return v8;
}

__int64 cuda_driver_6e410(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned __int64 v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  _BYTE v18[36];
  struct {
    __int64 v19;
    _QWORD* v20;
  } v19_;

  if (CudaDriverData_14324b0 != 1) {
    return 5;
  }
  if ((CudaDriverData_14324b4 & 1) == 0) {
    goto LABEL_15;
  }
  v6 = a1;
  if ((unsigned int)CudaDriverStub_12dd00(
          (unsigned int)CudaDriverData_14324cc) != 0) {
    return 44;
  }
  if (CudaDriverData_14324b0 != 1) {
    v9 = 0;
    v10 = 0;
    v11 = 5;
    goto LABEL_11;
  }
  a1 = v6;
  if (CudaDriverData_14324b4 != 1) {
    goto LABEL_15;
  }
  if ((unsigned int)CudaDriverStub_12dd00(
          (unsigned int)CudaDriverData_14324cc) == 0) {
    a1 = v6;
    if (CudaDriverData_14324b0 != 1) {
      goto LABEL_31;
    }
    if (CudaDriverData_14324b4 == 1) {
      v12 = CudaDriverStub_12dd00((unsigned int)CudaDriverData_14324cc);
      a1 = v6;
      if (v12 != 0) {
        goto LABEL_31;
      }
    }
  LABEL_15:
    if (HIDWORD(CudaDriverData_1432510) != 0) {
      v13 = CudaDriverData_1432510;
      LODWORD(v3) = DWORD2(CudaDriverData_1432510);
      v9 = CudaDriverData_1432520;
      --HIDWORD(CudaDriverData_1432510);
      v4 = (unsigned int)(CudaDriverData_1432510 + 1) /
           DWORD2(CudaDriverData_1432510);
      v2 = (unsigned int)(CudaDriverData_1432510 + 1) %
           DWORD2(CudaDriverData_1432510);
      LODWORD(CudaDriverData_1432510) =
          (unsigned int)(CudaDriverData_1432510 + 1) %
          DWORD2(CudaDriverData_1432510);
      if (CudaDriverData_1432520 != 0) {
        v14 = CudaDriverData_1432520 + 92LL * v13;
        a2 = *(long double*)(v14 + 8);
        v7 = *(_DWORD*)v14;
        v15 = *(unsigned int*)(v14 + 4);
        *(_DWORD*)&v18[32] = *(_DWORD*)(v14 + 40);
        *(long double*)v18 = a2;
        *(_OWORD*)&v18[16] = *(_OWORD*)(v14 + 24);
        if (*(int*)v14 <= 3) {
          if (v7 == 1) {
            v16 = a1;
            v19_.v19 = *(_QWORD*)(v14 + 32);
            v19_.v20 = nullptr;
            v17 = CudaDriverRoutine_1a0a80((__int64)CudaDriverRoutine_76d70,
                                           (__int64)&v19_.v19);
            v11 = 10;
            v7 = 1;
            v9 = 0;
            if (v17 != 0) {
              v10 = 0;
              a1 = v16;
            }
            else {
              v10 = 0;
              a1 = v16;
              if (v19_.v20 != nullptr) {
                v9 = v19_.v20[2];
                if (v9 != 0 && (v9 = *(_QWORD*)(v9 + 8)) != 0) {
                  v2 = v19_.v20[5];
                  v3 = v19_.v20[6];
                  v10 = *(_DWORD*)&v18[16];
                  v11 = 0;
                  LODWORD(v5) = v15;
                  v9 = v3 & 0xFFFFFFFF00000000LL;
                  a2 = *(long double*)v18;
                  v4 = *(_QWORD*)&v18[16];
                }
                else {
                  v10 = 0;
                }
              }
            }
            goto LABEL_23;
          }
          v4 = *(_QWORD*)(v14 + 44);
          if (v7 == 2) {
            a2 = *(long double*)&v18[20];
            LODWORD(v3) = *(_DWORD*)v18;
            v9 = 0;
            v11 = 0;
            v2 = v15 | (*(_QWORD*)&v18[4] << 32);
            v10 = *(_DWORD*)&v18[12];
            v5 = HIDWORD(*(_QWORD*)&v18[12]);
            goto LABEL_23;
          }
          if (v7 == 3) {
            v10 = DWORD1(a2);
            a2 = *(long double*)&v18[12];
            v2 = v15 | (v4 << 32);
            LODWORD(v3) = *(_DWORD*)v18;
            v9 = 0;
            v11 = 0;
            v5 = HIDWORD(*(_QWORD*)&v18[4]);
            v4 = *(_QWORD*)&v18[28];
            goto LABEL_23;
          }
        }
        else {
          if ((unsigned int)(v7 - 5) < 4) {
            LODWORD(v3) = DWORD1(a2);
            v10 = 0;
            v11 = 0;
            v2 = v15 | ((unsigned __int64)LODWORD(a2) << 32);
            v9 = (*(_OWORD*)&a2 >> 32) & 0xFFFFFFFF00000000LL;
            goto LABEL_23;
          }
          if ((unsigned int)(v7 - 9) < 3) {
            v9 = 0;
            v10 = 0;
            v11 = 0;
            goto LABEL_23;
          }
          if (v7 == 4) {
            v9 = 0;
            v10 = 0;
            v11 = 0;
            v2 = v15;
            goto LABEL_23;
          }
        }
      LABEL_31:
        v11 = 10;
        v9 = 0;
        v10 = 0;
        v7 = 0;
        goto LABEL_23;
      }
    }
    else {
      v9 = 0;
    }
    v10 = 0;
    v7 = 0;
    v11 = 22;
    goto LABEL_23;
  }
  v9 = 0;
  v10 = 0;
  v11 = 44;
LABEL_11:
  a1 = v6;
LABEL_23:
  *(_DWORD*)a1 = v7;
  *(_QWORD*)(a1 + 8) = v2;
  *(_QWORD*)(a1 + 16) = v9 | (unsigned int)v3;
  *(long double*)(a1 + 32) = a2;
  *(_QWORD*)(a1 + 48) = v4;
  *(_QWORD*)(a1 + 24) = v10 | ((unsigned __int64)(unsigned int)v5 << 32);
  return v11;
}

__int64 cuda_driver_6ec30(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  unsigned __int64 v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  _BYTE v22[36];
  struct {
    __int64 v23;
    _QWORD* v24;
  } v23_;

  if (a1 == 0) {
    return 4;
  }
  if (CudaDriverData_14324b0 != 1) {
    return 5;
  }
  if ((CudaDriverData_14324b4 & 1) != 0) {
    v9 = a1;
    if ((unsigned int)CudaDriverStub_12dd00(
            (unsigned int)CudaDriverData_14324cc) != 0) {
      return 44;
    }
    if (CudaDriverData_14324b0 != 1) {
      v12 = 0;
      v13 = 0;
      v14 = 5;
      goto LABEL_13;
    }
    a1 = v9;
    if (CudaDriverData_14324b4 == 1) {
      if ((unsigned int)CudaDriverStub_12dd00(
              (unsigned int)CudaDriverData_14324cc) != 0) {
        v12 = 0;
        v13 = 0;
        v14 = 44;
      LABEL_13:
        a1 = v9;
        goto LABEL_24;
      }
      a1 = v9;
      if (CudaDriverData_14324b0 != 1) {
        goto LABEL_32;
      }
      if (CudaDriverData_14324b4 == 1) {
        v15 = CudaDriverStub_12dd00((unsigned int)CudaDriverData_14324cc);
        a1 = v9;
        if (v15 != 0) {
          goto LABEL_32;
        }
      }
    }
  }
  if (HIDWORD(CudaDriverData_1432510) == 0 ||
      (v16 = CudaDriverData_1432510,
       LODWORD(v3) = DWORD2(CudaDriverData_1432510),
       --HIDWORD(CudaDriverData_1432510),
       v4 = (unsigned int)(CudaDriverData_1432510 + 1) /
            DWORD2(CudaDriverData_1432510),
       v2 = (unsigned int)(CudaDriverData_1432510 + 1) %
            DWORD2(CudaDriverData_1432510),
       LODWORD(CudaDriverData_1432510) =
           (unsigned int)(CudaDriverData_1432510 + 1) %
           DWORD2(CudaDriverData_1432510),
       CudaDriverData_1432520 == 0)) {
    v12 = 0;
    v13 = 0;
    v10 = 0;
    v14 = 22;
    goto LABEL_24;
  }
  v6 = CudaDriverData_1432520 + 92LL * v16;
  a2 = *(long double*)(v6 + 8);
  v10 = *(_DWORD*)v6;
  v17 = *(unsigned int*)(v6 + 4);
  *(_DWORD*)&v22[32] = *(_DWORD*)(v6 + 40);
  *(long double*)v22 = a2;
  *(_OWORD*)&v22[16] = *(_OWORD*)(v6 + 24);
  if (*(int*)v6 > 3) {
    if ((unsigned int)(v10 - 5) < 4) {
      LODWORD(v3) = DWORD1(a2);
      v13 = 0;
      v14 = 0;
      v2 = v17 | ((unsigned __int64)LODWORD(a2) << 32);
      v12 = (*(_OWORD*)&a2 >> 32) & 0xFFFFFFFF00000000LL;
      goto LABEL_24;
    }
    if ((unsigned int)(v10 - 9) < 3) {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      goto LABEL_24;
    }
    if (v10 == 4) {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v2 = *(unsigned int*)(v6 + 4);
      goto LABEL_24;
    }
    goto LABEL_32;
  }
  if (v10 != 1) {
    v4 = *(_QWORD*)(v6 + 44);
    if (v10 == 2) {
      v8 = *(_DWORD*)(v6 + 60);
      v12 = 0;
      v14 = 0;
      v2 = v17 | ((unsigned __int64)(*(_OWORD*)&a2 >> 32) << 32);
      v7 = *(_QWORD*)(v6 + 52);
      v5 = *(_DWORD*)(v6 + 76);
      v13 = HIDWORD(a2);
      v23_.v23 = *(_QWORD*)(v6 + 64);
      a2 = *(long double*)&v22[20];
      LODWORD(v3) = *(_DWORD*)v22;
      LODWORD(v23_.v24) = *(_DWORD*)(v6 + 72);
      v10 = 2;
      LODWORD(v6) = *(_DWORD*)&v22[16];
      goto LABEL_24;
    }
    if (v10 == 3) {
      v13 = DWORD1(a2);
      a2 = *(long double*)&v22[12];
      v2 = v17 | (v4 << 32);
      LODWORD(v3) = *(_DWORD*)v22;
      v7 = *(_QWORD*)(v6 + 44);
      v12 = 0;
      v14 = 0;
      v6 = HIDWORD(*(_QWORD*)&v22[4]);
      v4 = *(_QWORD*)&v22[28];
      goto LABEL_24;
    }
  LABEL_32:
    v12 = 0;
    v13 = 0;
    v10 = 0;
  LABEL_33:
    v14 = 10;
    goto LABEL_24;
  }
  v19 = a1;
  v23_.v23 = *(_QWORD*)(v6 + 32);
  v23_.v24 = nullptr;
  v20 = CudaDriverRoutine_1a0a80((__int64)CudaDriverRoutine_76d70,
                                 (__int64)&v23_.v23);
  v14 = 10;
  v10 = 1;
  v12 = 0;
  if (v20 != 0) {
    v13 = 0;
    a1 = v19;
    goto LABEL_24;
  }
  v13 = 0;
  a1 = v19;
  if (v23_.v24 != nullptr) {
    v21 = v23_.v24[2];
    if (v21 != 0 && *(_QWORD*)(v21 + 8) != 0) {
      v2 = v23_.v24[5];
      v3 = v23_.v24[6];
      v13 = *(_DWORD*)&v22[16];
      v14 = 0;
      LODWORD(v6) = v17;
      v12 = v3 & 0xFFFFFFFF00000000LL;
      a2 = *(long double*)v22;
      v4 = *(_QWORD*)&v22[16];
      goto LABEL_24;
    }
    v12 = 0;
    v13 = 0;
    goto LABEL_33;
  }
LABEL_24:
  *(_DWORD*)a1 = v10;
  *(_QWORD*)(a1 + 8) = v2;
  *(_QWORD*)(a1 + 16) = v12 | (unsigned int)v3;
  v18 = v23_.v23;
  *(long double*)(a1 + 32) = a2;
  *(_QWORD*)(a1 + 48) = v4;
  *(_QWORD*)(a1 + 56) = v7;
  *(_DWORD*)(a1 + 64) = v8;
  *(_QWORD*)(a1 + 24) = v13 | ((unsigned __int64)(unsigned int)v6 << 32);
  *(_QWORD*)(a1 + 68) = v18;
  *(_DWORD*)(a1 + 76) = (_DWORD)v23_.v24;
  *(_DWORD*)(a1 + 80) = v5;
  return v14;
}

__int64 cuda_driver_6f3d0(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  unsigned __int64 v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  _BYTE v22[36];
  struct {
    __int64 v23;
    _QWORD* v24;
  } v23_;

  if (a1 == 0) {
    return 4;
  }
  if (CudaDriverData_14324b0 != 1) {
    return 5;
  }
  if ((CudaDriverData_14324b4 & 1) != 0) {
    v9 = a1;
    if ((unsigned int)CudaDriverStub_12dd00(
            (unsigned int)CudaDriverData_14324cc) != 0) {
      return 44;
    }
    if (CudaDriverData_14324b0 != 1) {
      v12 = 0;
      v13 = 0;
      v14 = 5;
      goto LABEL_13;
    }
    a1 = v9;
    if (CudaDriverData_14324b4 == 1) {
      if ((unsigned int)CudaDriverStub_12dd00(
              (unsigned int)CudaDriverData_14324cc) != 0) {
        v12 = 0;
        v13 = 0;
        v14 = 44;
      LABEL_13:
        a1 = v9;
        goto LABEL_24;
      }
      a1 = v9;
      if (CudaDriverData_14324b0 != 1) {
        goto LABEL_32;
      }
      if (CudaDriverData_14324b4 == 1) {
        v15 = CudaDriverStub_12dd00((unsigned int)CudaDriverData_14324cc);
        a1 = v9;
        if (v15 != 0) {
          goto LABEL_32;
        }
      }
    }
  }
  if (HIDWORD(CudaDriverData_1432530) == 0 ||
      (v16 = CudaDriverData_1432530,
       LODWORD(v3) = DWORD2(CudaDriverData_1432530),
       --HIDWORD(CudaDriverData_1432530),
       v4 = (unsigned int)(CudaDriverData_1432530 + 1) /
            DWORD2(CudaDriverData_1432530),
       v2 = (unsigned int)(CudaDriverData_1432530 + 1) %
            DWORD2(CudaDriverData_1432530),
       LODWORD(CudaDriverData_1432530) =
           (unsigned int)(CudaDriverData_1432530 + 1) %
           DWORD2(CudaDriverData_1432530),
       CudaDriverData_1432540 == 0)) {
    v12 = 0;
    v13 = 0;
    v10 = 0;
    v14 = 22;
    goto LABEL_24;
  }
  v6 = CudaDriverData_1432540 + 92LL * v16;
  a2 = *(long double*)(v6 + 8);
  v10 = *(_DWORD*)v6;
  v17 = *(unsigned int*)(v6 + 4);
  *(_DWORD*)&v22[32] = *(_DWORD*)(v6 + 40);
  *(long double*)v22 = a2;
  *(_OWORD*)&v22[16] = *(_OWORD*)(v6 + 24);
  if (*(int*)v6 > 3) {
    if ((unsigned int)(v10 - 5) < 4) {
      LODWORD(v3) = DWORD1(a2);
      v13 = 0;
      v14 = 0;
      v2 = v17 | ((unsigned __int64)LODWORD(a2) << 32);
      v12 = (*(_OWORD*)&a2 >> 32) & 0xFFFFFFFF00000000LL;
      goto LABEL_24;
    }
    if ((unsigned int)(v10 - 9) < 3) {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      goto LABEL_24;
    }
    if (v10 == 4) {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v2 = *(unsigned int*)(v6 + 4);
      goto LABEL_24;
    }
    goto LABEL_32;
  }
  if (v10 != 1) {
    v4 = *(_QWORD*)(v6 + 44);
    if (v10 == 2) {
      v8 = *(_DWORD*)(v6 + 60);
      v12 = 0;
      v14 = 0;
      v2 = v17 | ((unsigned __int64)(*(_OWORD*)&a2 >> 32) << 32);
      v7 = *(_QWORD*)(v6 + 52);
      v5 = *(_DWORD*)(v6 + 76);
      v13 = HIDWORD(a2);
      v23_.v23 = *(_QWORD*)(v6 + 64);
      a2 = *(long double*)&v22[20];
      LODWORD(v3) = *(_DWORD*)v22;
      LODWORD(v23_.v24) = *(_DWORD*)(v6 + 72);
      v10 = 2;
      LODWORD(v6) = *(_DWORD*)&v22[16];
      goto LABEL_24;
    }
    if (v10 == 3) {
      v13 = DWORD1(a2);
      a2 = *(long double*)&v22[12];
      v2 = v17 | (v4 << 32);
      LODWORD(v3) = *(_DWORD*)v22;
      v7 = *(_QWORD*)(v6 + 44);
      v12 = 0;
      v14 = 0;
      v6 = HIDWORD(*(_QWORD*)&v22[4]);
      v4 = *(_QWORD*)&v22[28];
      goto LABEL_24;
    }
  LABEL_32:
    v12 = 0;
    v13 = 0;
    v10 = 0;
  LABEL_33:
    v14 = 10;
    goto LABEL_24;
  }
  v19 = a1;
  v23_.v23 = *(_QWORD*)(v6 + 32);
  v23_.v24 = nullptr;
  v20 = CudaDriverRoutine_1a0a80((__int64)CudaDriverRoutine_76d70,
                                 (__int64)&v23_.v23);
  v14 = 10;
  v10 = 1;
  v12 = 0;
  if (v20 != 0) {
    v13 = 0;
    a1 = v19;
    goto LABEL_24;
  }
  v13 = 0;
  a1 = v19;
  if (v23_.v24 != nullptr) {
    v21 = v23_.v24[2];
    if (v21 != 0 && *(_QWORD*)(v21 + 8) != 0) {
      v2 = v23_.v24[5];
      v3 = v23_.v24[6];
      v13 = *(_DWORD*)&v22[16];
      v14 = 0;
      LODWORD(v6) = v17;
      v12 = v3 & 0xFFFFFFFF00000000LL;
      a2 = *(long double*)v22;
      v4 = *(_QWORD*)&v22[16];
      goto LABEL_24;
    }
    v12 = 0;
    v13 = 0;
    goto LABEL_33;
  }
LABEL_24:
  *(_DWORD*)a1 = v10;
  *(_QWORD*)(a1 + 8) = v2;
  *(_QWORD*)(a1 + 16) = v12 | (unsigned int)v3;
  v18 = v23_.v23;
  *(long double*)(a1 + 32) = a2;
  *(_QWORD*)(a1 + 48) = v4;
  *(_QWORD*)(a1 + 56) = v7;
  *(_DWORD*)(a1 + 64) = v8;
  *(_QWORD*)(a1 + 24) = v13 | ((unsigned __int64)(unsigned int)v6 << 32);
  *(_QWORD*)(a1 + 68) = v18;
  *(_DWORD*)(a1 + 76) = (_DWORD)v23_.v24;
  *(_DWORD*)(a1 + 80) = v5;
  return v14;
}

__int64 cuda_driver_71150(unsigned int a1, unsigned int a2, unsigned int a3,
                          __int64 a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  int v11;

  if (a4 == 0) {
    return 4;
  }
  result = CudaDriverRoutine_6cac0(0x4FFu, a1, a2, a3, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
    if ((_DWORD)result == 0) {
      if ((unsigned int)CudaDriverData_14324b8 < 0x63 ||
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8LL * a1) +
                    5LL) == 1) {
        v9 = CudaDriverStub_1a0ee0();
        if (v9 != 0) {
          v10 = *(_QWORD*)(v9 + 24);
          v11 = *(_DWORD*)(v9 + 32);
          result = 0;
          *(_DWORD*)(a4 + 8) = v11;
          *(_QWORD*)a4 = v10;
        }
        else {
          return 21;
        }
      }
      else {
        return 16;
      }
    }
  }
  return result;
}

__int64 cuda_driver_71430(unsigned int a1, unsigned int a2, unsigned int a3,
                          char a4, _QWORD* a5, _DWORD* a6)
{
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  result = CudaDriverRoutine_6cac0(0x4FFu, a1, a2, a3, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    if (a5 != nullptr) {
      result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
      if ((_DWORD)result == 0) {
        result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
        if ((_DWORD)result == 0) {
          v13 = CudaDriverStub_1a0ee0();
          if (v13 != 0) {
            v14 = v13;
            v15 = *(_QWORD*)(v13 + 8);
            v16 = 48;
            result = 0;
            if ((a4 & 1) != 0) {
              v16 = 40;
            }
            *a5 = *(_QWORD*)(*(_QWORD*)(v15 + 72) + v16);
            *a6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 8) + 72LL) + 56LL);
          }
          else {
            return 21;
          }
        }
      }
    }
    else {
      return 4;
    }
  }
  return result;
}

__int64 cuda_driver_71580(unsigned int a1, unsigned int a2, unsigned int a3,
                          char a4, _QWORD* a5, _QWORD* a6)
{
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  result = 4;
  if (a5 != nullptr && a6 != nullptr) {
    result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
      if ((_DWORD)result == 0) {
        v13 = CudaDriverStub_1a0ee0();
        if (v13 != 0) {
          v14 = v13;
          v15 = *(_QWORD*)(v13 + 8);
          v16 = 48;
          result = 0;
          if ((a4 & 1) != 0) {
            v16 = 40;
          }
          *a5 = *(_QWORD*)(*(_QWORD*)(v15 + 72) + v16);
          *a6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 8) + 72LL) + 56LL);
        }
        else {
          return 21;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_71790(unsigned int a1, unsigned int a2, unsigned int a3,
                          int a4, _QWORD* a5)
{
  __int64 result;
  struct {
    int v11;
    char gap4_[4];
    __int64 v12;
  } v11_;

  if (a5 == nullptr) {
    return 4;
  }
  result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    v11_.v11 = a4;
    result = CudaDriverRoutine_71840(a1, a2, a3, (__int64)&v11_.v11, 1u);
    if ((_DWORD)result == 0) {
      *a5 = v11_.v12;
    }
  }
  return result;
}

__int64 cuda_driver_73f00()
{
  __int64 result;
  _QWORD* v1;
  void* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;

  if (CudaDriverData_14324b0 != 1) {
    return 5;
  }
  if (CudaDriverData_14324b4 == 1 &&
      (unsigned int)CudaDriverStub_12dd00(
          (unsigned int)CudaDriverData_14324cc) != 0) {
    return 44;
  }
  v1 = (_QWORD*)CudaDriverData_1423000;
  (*(_DWORD**)((char*)((_UNKNOWN**)0x8LL) + CudaDriverData_1423000))[4] = 3;
  v2 = CudaDriverData_1422118;
  v3 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) +
                        (_QWORD)CudaDriverData_1422118);
  if ((_DWORD)v3 == 0) {
    return 0;
  }
  v4 = 0;
  while (1) {
    v5 = *(_QWORD*)(*v1 + 8 * v4);
    v6 = *(_DWORD*)(v5 + 23372880);
    if (v6 != 0 && *(_DWORD*)(v5 + 23372884) != 0) {
      break;
    }
  LABEL_11:
    ++v4;
    result = 0;
    if (v4 >= v3) {
      return result;
    }
  }
  v7 = 1;
  v8 = 0;
  while (v7 == 0) {
  LABEL_15:
    if (++v8 >= v6) {
      v3 = *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v2);
      goto LABEL_11;
    }
  }
  v9 = 0;
  while (1) {
    result =
        (*(__int64 (**)(__int64, _QWORD, _QWORD))(v5 + 23376152))(v5, v8, v9);
    if ((_DWORD)result != 0) {
      return result;
    }
    v7 = *(_DWORD*)(v5 + 23372884);
    if (++v9 >= v7) {
      v6 = *(_DWORD*)(v5 + 23372880);
      goto LABEL_15;
    }
  }
}

__int64 cuda_driver_74050(int a1)
{
  int v1;
  int v2;
  __int64 result;
  void* v4;

  if (CudaDriverData_14324b0 != 1) {
    return 5;
  }
  if (CudaDriverData_14324b4 == 1) {
    v1 = a1;
    v2 = CudaDriverStub_12dd00((unsigned int)CudaDriverData_14324cc);
    a1 = v1;
    if (v2 != 0) {
      return 44;
    }
  }
  if (a1 == 0) {
    return 4;
  }
  if (a1 == 2) {
    return 0;
  }
  v4 = CudaDriverData_1422118;
  result = CudaDriverStub_4f840((char*)((_UNKNOWN*)0x1800LL) +
                                (_QWORD)CudaDriverData_1422118);
  if ((_DWORD)result != 0) {
    if ((CudaDriverData_14324a8 & 1) != 0) {
      CudaDriverData_14324a8 = 0;
    }
    else if ((unsigned int)CudaDriverRoutine_12e1e0(
                 (__int64)((_UNKNOWN*)0x1800LL) + (_QWORD)v4) != 0) {
      return 28;
    }
    return 0;
  }
  return result;
}

__int64 cuda_driver_74140()
{
  __int64 result;
  void* v1;

  if (CudaDriverData_14324b0 == 1) {
    if (CudaDriverData_14324b4 != 1) {
      goto LABEL_10;
    }
    if ((unsigned int)CudaDriverStub_12dd00(
            (unsigned int)CudaDriverData_14324cc) != 0) {
      return 44;
    }
    if (CudaDriverData_14324b0 == 1) {
      if (CudaDriverData_14324b4 == 1 &&
          (unsigned int)CudaDriverStub_12dd00(
              (unsigned int)CudaDriverData_14324cc) != 0) {
        return 44;
      }
    LABEL_10:
      v1 = CudaDriverData_1422118;
      result = CudaDriverStub_4f840((char*)((_UNKNOWN*)0x1800LL) +
                                    (_QWORD)CudaDriverData_1422118);
      if ((_DWORD)result != 0) {
        if ((CudaDriverData_14324a8 & 1) != 0) {
          CudaDriverData_14324a8 = 0;
        }
        else if ((unsigned int)CudaDriverRoutine_12e1e0(
                     (__int64)((_UNKNOWN*)0x1800LL) + (_QWORD)v1) != 0) {
          return 28;
        }
        return 0;
      }
      return result;
    }
  }
  return 5;
}

__int64 cuda_driver_74930(unsigned int a1, unsigned int a2, unsigned int a3,
                          _QWORD* a4)
{
  __int64 result;

  result = cuda_driver_76dd0();
  if ((_DWORD)result == 0) {
    if (CudaDriverData_14324f8 != nullptr) {
      return CudaDriverData_14324f8(a1, a2, a3, a4);
    }
    else if (a4 != nullptr) {
      if (a3 >= 0x9D) {
        fwrite_plt("Using legacy debugging backend (CUDBG_USE_LEGACY_DEBUGGER) "
                   "with CUDA Toolkit 13.0+ debuggers is unsupported.\n",
                   109, 1, *(_QWORD*)CudaDriverData_1421fd8[0]);
        return 19;
      }
      else {
        *a4 = CudaDriverData_1410b60;
        CudaDriverData_14324b8 = a3;
        return 0;
      }
    }
    else {
      return 4;
    }
  }
  return result;
}

__int64 cuda_driver_750a0(unsigned int a1, unsigned int a2, unsigned int a3,
                          __int64 a4)
{
  __int64 result;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  _DWORD* v12;
  unsigned __int64 v13;
  __int64 i;
  __int64 v15;
  __int64 v16;

  if (a4 == 0) {
    return 4;
  }
  result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
  if ((_DWORD)result == 0) {
    v9 = (_QWORD*)CudaDriverData_1423000;
    v10 = *(_QWORD*)(*(_QWORD*)CudaDriverData_1423000 + 8LL * a1);
    memset_plt_alt1(a4, 0, 0x328u);
    result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
    if ((_DWORD)result == 0) {
      *(_QWORD*)a4 = *(_QWORD*)(*(_QWORD*)(*v9 + 8LL * a1) + 91280LL * a2 +
                                1424LL * a3 + 1248);
      result = CudaDriverRoutine_6cac0(0xFFu, a1, a2, a3, 0xFFFFFFFF);
      if ((_DWORD)result == 0) {
        result =
            (*(__int64 (**)(void))(*(_QWORD*)(*v9 + 8LL * a1) + 23375528LL))();
        if ((_DWORD)result == 0) {
          result = CudaDriverRoutine_6cac0(0x7Fu, a1, a2, a3, 0xFFFFFFFF);
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_745a0(a1, a2, a3, (__int64*)(a4 + 8),
                                             (char*)(a4 + 36));
            if ((_DWORD)result == 0) {
              result = CudaDriverRoutine_709d0(a1, a2, a3, (_DWORD*)(a4 + 28));
              if ((_DWORD)result == 0) {
                result =
                    CudaDriverRoutine_70a70(a1, a2, a3, (_DWORD*)(a4 + 32));
                if ((_DWORD)result == 0) {
                  v11 = *(unsigned int*)(v10 + 23372892);
                  if ((_DWORD)v11 != 0) {
                    v12 = (_DWORD*)(a4 + 60);
                    v13 = 0;
                    for (i = 91280LL * a2 + 1424LL * a3 + 1296;; i += 12) {
                      if (((*(_DWORD*)(a4 + 28) >> v13) & 1) != 0) {
                        result = CudaDriverRoutine_72910(a1, a2, a3, v13,
                                                         (__int64)(v12 - 5));
                        if ((_DWORD)result != 0) {
                          return result;
                        }
                        result =
                            CudaDriverRoutine_6cac0(0x3FFu, a1, a2, a3, v13);
                        if ((_DWORD)result != 0) {
                          return result;
                        }
                        v15 = *(_QWORD*)(*v9 + 8LL * a1) + i;
                        v16 = *(_QWORD*)v15;
                        *(v12 - 1) = *(_DWORD*)(v15 + 8);
                        *(_QWORD*)(v12 - 3) = v16;
                        result = CudaDriverRoutine_72aa0(a1, a2, a3, v13, v12);
                        if ((_DWORD)result != 0) {
                          return result;
                        }
                        v11 = *(unsigned int*)(v10 + 23372892);
                      }
                      ++v13;
                      v12 += 6;
                      result = 0;
                      if (v13 >= v11) {
                        return result;
                      }
                    }
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
  return result;
}

__int64 cuda_driver_76dd0()
{
  __int64 result;
  _BYTE* v3;
  void(__attribute__((noreturn)) * v6)();
  void* v7;
  __int64 v8;
  void* v9;
  __int128 v10;

  if (CudaDriverData_14324b5 == 1) {
    return (unsigned int)CudaDriverData_14301e8;
  }
  CudaDriverData_14324b5 = 1;
  v3 = (_BYTE*)getenv_plt("CUDBG_USE_LEGACY_DEBUGGER");
  if (v3 == nullptr || *v3 != 49) {
    v10 = CudaDriverData_1411000;
    v6 = CudaDriverData_1421fe0[0];
    if (*(_BYTE*)CudaDriverData_1421fe0[0] != 0) {
      *((_BYTE*)CudaDriverData_1421fe0[0] +
        (unsigned __int64)((char*)0xFFFLL)) = 0;
      *(_QWORD*)&v10 = v6;
      BYTE8(v10) = 1;
    }
    CudaDriverStub_57450(&v10, 0);
    v7 = CudaDriverData_1422118;
    v8 = *(_QWORD*)((char*)((_UNKNOWN*)0x1108LL) +
                    (_QWORD)CudaDriverData_1422118);
    if (v8 != 0) {
      CudaDriverData_14324f8_alt1 = (__int64 (*)(
          _QWORD, _QWORD, _QWORD, _QWORD))CudaDriverStub_12e260(v8);
      if (CudaDriverData_14324f8_alt1 != nullptr) {
        v9 = (void*)CudaDriverStub_12e260(
            *(_QWORD*)((char*)((_UNKNOWN*)0x1108LL) + (_QWORD)v7));
        result = 0;
        CudaDriverData_1432500 = v9;
      LABEL_16:
        CudaDriverData_14301e8 = result;
        return result;
      }
    }
    else {
      fwrite_plt("Could not find CUDA Debugger back-end. Please try "
                 "upgrading/re-installing the GPU driver",
                 88, 1, *(_QWORD*)CudaDriverData_1421fd8[0]);
    }
    result = 10;
    goto LABEL_16;
  }
  if (*(_BYTE*)CudaDriverData_1421fe0[0] != 0) {
    return 4;
  }
  CudaDriverData_14301e8 = 0;
  return 0;
}

bool cuda_driver_77230()
{
  void* v1;
  int v2;

  if ((CudaDriverData_14325d0 & 1) != 0) {
    return true;
  }
  v1 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                        (_QWORD)CudaDriverData_1422118);
  if ((CudaDriverData_143260c & 1) != 0) {
    v2 = CudaDriverData_1432610;
    CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v1);
    return v2 != 0;
  }
  else {
    CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v1);
    return false;
  }
}

__int64 cuda_driver_772c0(__int64 a1)
{
  void* v2;
  int v3;
  char v4;
  __int64 v6;
  char v7[4];

  v6 = 1;
  if (a1 != 0 &&
      (v2 = CudaDriverData_1422118,
       CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                             (_QWORD)CudaDriverData_1422118),
       v3 = (unsigned __int8)CudaDriverData_143260c,
       CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v2),
       v3 == 1) &&
      (unsigned int)cuda_driver_97330(1, v7, a1, (unsigned __int64*)&v6) == 0) {
    v4 = v7[0] != 0;
  }
  else {
    v4 = CudaDriverData_14325d0;
  }
  return v4 & 1;
}

bool cuda_driver_77360(__int64 a1)
{
  void* v2;
  int v3;
  int v4;

  if (a1 == 0) {
    return (~CudaDriverData_14325d4 & 0x2F) == 0;
  }
  v2 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                        (_QWORD)CudaDriverData_1422118);
  v3 = (unsigned __int8)CudaDriverData_143260c;
  CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v2);
  if (v3 == 1) {
    v4 = *(_DWORD*)(a1 + 16484);
  }
  else {
    v4 = CudaDriverData_14325d4;
  }
  return (~v4 & 0x2F) == 0;
}

__int64 cuda_driver_773f0(__int64 a1)
{
  void* v2;
  int v3;

  if (a1 == 0) {
    return (unsigned int)CudaDriverData_14325d4;
  }
  v2 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                        (_QWORD)CudaDriverData_1422118);
  v3 = (unsigned __int8)CudaDriverData_143260c;
  CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v2);
  if (v3 == 1) {
    return *(unsigned int*)(a1 + 16484);
  }
  else {
    return (unsigned int)CudaDriverData_14325d4;
  }
}

bool cuda_driver_77480(__int64 a1)
{
  void* v2;
  int v3;
  int v4;

  if (a1 == 0) {
    return (CudaDriverData_14325d4 & 0x10) == 0;
  }
  v2 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                        (_QWORD)CudaDriverData_1422118);
  v3 = (unsigned __int8)CudaDriverData_143260c;
  CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v2);
  if (v3 == 1) {
    v4 = *(_DWORD*)(a1 + 16484);
  }
  else {
    LOBYTE(v4) = CudaDriverData_14325d4;
  }
  return (v4 & 0x10) == 0;
}

__int64 cuda_driver_77a80(__int64 a1, __int64 a2)
{
  void* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  _QWORD v12[4];
  struct {
    __int128 v13;
    __int128 v14;
    __int128 v15;
    __int128 v16;
    __int128 v17;
  } v13_;
  struct {
    int v18;
    char gap124_[4];
    __int64 v19;
  } v18_;

  v4 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                        (_QWORD)CudaDriverData_1422118);
  if (CudaDriverData_14325d3 != 1) {
    v10 = cuda_driver_misc_helpers_78990(a1, a2);
    goto LABEL_16;
  }
  if (*(_BYTE*)(a1 + 184) == 1) {
    goto LABEL_14;
  }
  v18_.v19 = a1;
  v18_.v18 = 40;
  cuda_driver_20b420(2u, 1u, (__int64)&v18_.v18);
  CudaDriverStub_107f90(a1 + 1992);
  v5 = *(_QWORD*)(a1 + 1976);
  if (v5 == 0) {
  LABEL_10:
    CudaDriverStub_108070(a1 + 1992);
    CudaDriverStub_107f90(*(_QWORD*)(a1 + 80) + 128LL);
    v8 = *(_QWORD*)(a1 + 80);
    v9 = *(_QWORD*)(v8 + 2040);
    if (v9 != 0) {
      do {
        cuda_driver_ef950(v9);
        v9 = *(_QWORD*)(v9 + 8);
      } while (v9 != 0);
      v8 = *(_QWORD*)(a1 + 80);
    }
    CudaDriverStub_108070(v8 + 128);
  LABEL_14:
    v10 = 0;
    goto LABEL_16;
  }
  while (1) {
    v12[3] = 0;
    v13_.v14 = (__typeof__(v13_.v14)){0};
    v13_.v15 = (__typeof__(v13_.v15)){0};
    v13_.v13 = (__typeof__(v13_.v13)){0};
    v12[0] = 112;
    v12[1] = a1;
    v12[2] = v5;
    v13_.v16 = (__typeof__(v13_.v16)){0};
    v13_.v17 = (__typeof__(v13_.v17)){0};
    *(_QWORD*)&v13_.v13 = CudaDriverRoutine_107130(v5, (char*)&v13_.v13 + 8);
    *(_QWORD*)&v13_.v14 = *(_QWORD*)(v5 + 16);
    v6 = (*(_WORD*)(v5 + 36) & 1) != 0 ? 1 : 2;
    DWORD2(v13_.v14) = v6;
    v7 = *(unsigned int*)(v5 + 364);
    if ((unsigned int)v7 > 0xD || ((0x33FFu >> v7) & 1) == 0) {
      break;
    }
    LODWORD(v13_.v15) = CudaDriverData_11315d8[v7];
    cuda_driver_20b420(2u, 0x11u, (__int64)v12);
    v5 = *(_QWORD*)(v5 + 552);
    if (v5 == 0) {
      goto LABEL_10;
    }
  }
  CudaDriverStub_108070(a1 + 1992);
  v10 = 1;
LABEL_16:
  CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v4);
  return v10;
}

__int64 cuda_driver_7a800(const char* a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  __int64* v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  _OWORD* v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int16 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  int v74;
  int v75;
  __int64* v76;
  int v77;
  __int64 v78;
  int v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64* v83;
  unsigned int v84;
  __int64 v85;
  __int64 v86;
  int v87;
  int v88;
  int v89;
  _QWORD v90[13];

  result = 4;
  if (a1 == nullptr || a2 == nullptr) {
    return result;
  }
  CudaDriverData_1432760 = fopen_plt(a1, "wb");
  if (CudaDriverData_1432760 == 0) {
    return 37;
  }
  CudaDriverData_1432750 = 1;
  v90[1] = v90[9];
  v90[2] = v90[10];
  v90[12] = v90[11];
  v5 = CudaDriverData_1432758;
  CudaDriverData_1432768 = 0;
  if (CudaDriverData_1432758 == 0) {
    v5 = CudaDriverStub_12e330(64);
    CudaDriverData_1432758 = v5;
    if (v5 == 0) {
      return 37;
    }
    *(_DWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)(v5 + 40) = 0;
    *(_DWORD*)(v5 + 60) = 0;
    *(_DWORD*)v5 = 1179403647;
    *(_BYTE*)(v5 + 8) = 7;
    *(_QWORD*)(v5 + 16) = 0x100BE0004LL;
    *(_QWORD*)(v5 + 24) = 0;
    *(_DWORD*)(v5 + 4) = 855703810;
    *(_QWORD*)(v5 + 52) = 0x40000000000040LL;
    if (CudaDriverData_1432750 != 1) {
      goto LABEL_13;
    }
  }
  else if (CudaDriverData_1432750 != 1) {
  LABEL_13:
    CudaDriverData_1432768 += 64;
    if (CudaDriverData_1432770 != 0) {
      goto LABEL_121;
    }
    CudaDriverData_1432770 = (__int64)CudaDriverRoutine_222ce0();
    if (CudaDriverData_1432770 != 0) {
      v63 = (_OWORD*)CudaDriverStub_12e330(64);
      if (v63 == nullptr) {
        return 37;
      }
      *v63 = (__typeof__(*v63)){0};
      v63[1] = (__typeof__(v63[1])){0};
      v63[2] = (__typeof__(v63[2])){0};
      v63[3] = (__typeof__(v63[3])){0};
      if ((unsigned int)CudaDriverRoutine_222d10(CudaDriverData_1432770,
                                                 (__int64)v63) == 0) {
      LABEL_121:
        CudaDriverData_1432778 = a2[2];
        if (CudaDriverData_1432780 != 0) {
          v6 = zstd_decompress_2234c0(a2[1]);
          if (v6 != nullptr) {
            goto LABEL_16;
          }
          goto LABEL_23;
        }
        CudaDriverData_1432780 = CudaDriverStub_12e330(16);
        if (CudaDriverData_1432780 == 0) {
          return 37;
        }
        v64 = CudaDriverRoutine_222ce0();
        *(_QWORD*)CudaDriverData_1432780 = v64;
        if (v64 != nullptr) {
          if ((unsigned int)CudaDriverRoutine_222d10((__int64)v64,
                                                     (__int64)"") != 0) {
            return 10;
          }
          *(_QWORD*)(CudaDriverData_1432780 + 8) = 1;
          v6 = zstd_decompress_2234c0(a2[1]);
          if (v6 != nullptr) {
          LABEL_16:
            v7 = v6;
            v8 = 0;
            do {
              v9 = zstd_decompress_223550((__int64)v7);
              if (v9 == 0) {
                return 10;
              }
              v10 = v9;
              v11 = zstd_decompress_2235f0((__int64)v7);
              v12 = zstd_decompress_223590((__int64)v7);
              snprintf_plt((__int64)CudaDriverData_1432788, 0x100u, "%s.%d",
                           ".cudbg.global", v8);
              if (*(_BYTE*)(v10 + 8) != 0) {
                v13 = -2147483647;
              }
              else {
                v13 = -2147483646;
              }
              result =
                  CudaDriverRoutine_7b550(*(_QWORD*)v10, v11, v12, v13, 0, 0);
              if ((_DWORD)result != 0) {
                return result;
              }
              ++v8;
              v7 = zstd_decompress_2234e0(a2[1], (__int64)v7);
            } while (v7 != nullptr);
          }
        LABEL_23:
          result = CudaDriverRoutine_7b720(*a2, 24, 0x58u, -2147483639, 0, 0,
                                           ".cudbg.devtbl", (__int64)&v86);
          if ((_DWORD)result == 0) {
            v14 = CudaDriverRoutine_4d0d0(*a2);
            if (v14 != 0) {
              v15 = v86;
              v16 = 0;
              do {
                v78 = v14;
                v17 = CudaDriverRoutine_222da0(v14);
                if (v17 == 0) {
                  return 10;
                }
                v18 = (__int64*)v17;
                snprintf_plt((__int64)CudaDriverData_1432788, 0x100u,
                             "%s.dev%d", ".cudbg.ctxtbl", v16);
                result = CudaDriverRoutine_7b720(
                    v18[2], 8, 0x28u, -2147483638, v15, v16,
                    CudaDriverData_1432788, (__int64)&v89);
                if ((_DWORD)result != 0) {
                  return result;
                }
                v83 = v18;
                v19 = CudaDriverRoutine_4d0d0(v18[2]);
                if (v19 != 0) {
                  v20 = v89;
                  v21 = v19;
                  v22 = 0;
                  v79 = v89;
                  v81 = v15;
                  do {
                    v23 = CudaDriverRoutine_222da0(v21);
                    if (v23 == 0) {
                      return 10;
                    }
                    v24 = (__int64*)v23;
                    snprintf_plt((__int64)CudaDriverData_1432788, 0x100u,
                                 "%s.dev%d.ctx%d", ".cudbg.modtbl", v16, v22);
                    result = CudaDriverRoutine_7b720(
                        *v24, 24, 8u, -2147483632, v20, v22,
                        CudaDriverData_1432788, (__int64)v90);
                    if ((_DWORD)result != 0) {
                      return result;
                    }
                    v25 = CudaDriverRoutine_4d0d0(*v24);
                    if (v25 != 0) {
                      v26 = v90[0];
                      v27 = v25;
                      v28 = 0;
                      do {
                        v29 = (__int64*)CudaDriverRoutine_222da0(v27);
                        if (v29 == nullptr) {
                          return 10;
                        }
                        v30 = v29;
                        if (*v29 != 0) {
                          snprintf_plt((__int64)CudaDriverData_1432788, 0x100u,
                                       "%s.dev%d.ctx%d", ".cudbg.elfimg", v16,
                                       v22);
                          result = CudaDriverRoutine_7b550(
                              *v30, 0, v30[2], -2147483642, v26, v28);
                          if ((_DWORD)result != 0) {
                            return result;
                          }
                        }
                        snprintf_plt((__int64)CudaDriverData_1432788, 0x100u,
                                     "%s.dev%d.ctx%d", ".cudbg.relfimg", v16,
                                     v22);
                        result = CudaDriverRoutine_7b550(v30[1], 0, v30[2],
                                                         -2147483641, v26, v28);
                        if ((_DWORD)result != 0) {
                          return result;
                        }
                        ++v28;
                        v27 = CudaDriverRoutine_4d0d0(v27);
                      } while (v27 != 0);
                    }
                    v20 = v79;
                    v15 = v81;
                    ++v22;
                    v21 = CudaDriverRoutine_4d0d0(v21);
                  } while (v21 != 0);
                }
                snprintf_plt((__int64)CudaDriverData_1432788, 0x100u,
                             "%s.dev%d", ".cudbg.gridtbl", v16);
                v31 = v83;
                result = CudaDriverRoutine_7b8e0(*v83, 16, 0x88u, -2147483636,
                                                 v15, v16, (__int64)v90);
                if ((_DWORD)result != 0) {
                  return result;
                }
                v32 = CudaDriverRoutine_222520(*v83);
                if (v32 != 0) {
                  v33 = v90[0];
                  v34 = v32;
                  v35 = 0;
                  do {
                    v36 = (__int64*)CudaDriverRoutine_222630(v34);
                    if (v36 == nullptr) {
                      return 10;
                    }
                    v37 = v36;
                    if (*v36 != 0) {
                      snprintf_plt((__int64)CudaDriverData_1432788, 0x100u,
                                   "%s.dev%d.grid%d", ".cudbg.param", v16, v35);
                      result = CudaDriverRoutine_7b550(*v37, 0, v37[1],
                                                       -2147483630, v33, v35);
                      if ((_DWORD)result != 0) {
                        return result;
                      }
                    }
                    v31 = v83;
                    ++v35;
                    v34 = CudaDriverRoutine_222580(*v83, v34);
                  } while (v34 != 0);
                }
                snprintf_plt((__int64)CudaDriverData_1432788, 0x100u,
                             "%s.dev%d", ".cudbg.smtbl", v16);
                result = CudaDriverRoutine_7b720(
                    v31[1], 8, 0x30u, -2147483637, v15, v16,
                    CudaDriverData_1432788, (__int64)&v87);
                if ((_DWORD)result != 0) {
                  return result;
                }
                v38 = CudaDriverRoutine_4d0d0(v31[1]);
                if (v38 != 0) {
                  v39 = v38;
                  v40 = 0;
                  v75 = v87;
                  do {
                    v41 = CudaDriverRoutine_222da0(v39);
                    if (v41 == 0) {
                      return 10;
                    }
                    v42 = (__int64*)v41;
                    snprintf_plt((__int64)CudaDriverData_1432788, 0x100u,
                                 "%s.dev%d.sm%d", ".cudbg.ctatbl", v16, v40);
                    result = CudaDriverRoutine_7b8e0(
                        *v42, 32, 0x38u, -2147483635, v75, v40, (__int64)&v88);
                    if ((_DWORD)result != 0) {
                      return result;
                    }
                    v72 = v42;
                    v73 = v39;
                    v43 = CudaDriverRoutine_222520(*v42);
                    if (v43 != 0) {
                      v84 = 0;
                      v80 = v88;
                      v82 = v15;
                      do {
                        v70 = v43;
                        v44 = (__int64*)CudaDriverRoutine_222630(v43);
                        if (v44 == nullptr) {
                          return 10;
                        }
                        v45 = v44;
                        if (*v44 != 0) {
                          snprintf_plt((__int64)CudaDriverData_1432788, 0x100u,
                                       "%s.dev%d.sm%d.cta%d", ".cudbg.shared",
                                       v16, v40, v84);
                          result = CudaDriverRoutine_7b550(
                              *v45, 0, v45[1], -2147483644, v80, v84);
                          if ((_DWORD)result != 0) {
                            return result;
                          }
                        }
                        snprintf_plt((__int64)CudaDriverData_1432788, 0x100u,
                                     "%s.dev%d.sm%d.cta%d", ".cudbg.wptbl", v16,
                                     v40, v84);
                        result = CudaDriverRoutine_7b720(
                            v45[3], 56, 0x40u, -2147483634, v80, v84,
                            CudaDriverData_1432788, (__int64)&v89);
                        if ((_DWORD)result != 0) {
                          return result;
                        }
                        v76 = v45;
                        v46 = CudaDriverRoutine_4d0d0(v45[3]);
                        v47 = v84;
                        v15 = v82;
                        if (v46 != 0) {
                          v77 = 0;
                          v74 = v89;
                          do {
                            v71 = v46;
                            v85 = CudaDriverRoutine_222da0(v46);
                            if (v85 == 0) {
                              return 10;
                            }
                            if (*((_DWORD*)v76 + 4) != 0) {
                              if (*(_QWORD*)(v85 + 24) == 0) {
                                return 10;
                              }
                              snprintf_plt((__int64)CudaDriverData_1432788,
                                           0x100u, "%s.dev%d.sm%d.cta%d.wp%d",
                                           ".cudbg.uregs", v16, v40, v47, v77);
                              result = CudaDriverRoutine_7b550(
                                  *(_QWORD*)(v85 + 24), 0,
                                  4LL * *((unsigned int*)v76 + 4), -2147483629,
                                  v74, v77);
                              if ((_DWORD)result != 0) {
                                return result;
                              }
                            }
                            if (*((_DWORD*)v76 + 5) != 0) {
                              if (*(_QWORD*)(v85 + 40) == 0) {
                                return 10;
                              }
                              snprintf_plt((__int64)CudaDriverData_1432788,
                                           0x100u, "%s.dev%d.sm%d.cta%d.wp%d",
                                           ".cudbg.upred", v16, v40, v47, v77);
                              result = CudaDriverRoutine_7b550(
                                  *(_QWORD*)(v85 + 40), 0, *(_QWORD*)(v85 + 48),
                                  -2147483628, v74, v77);
                              if ((_DWORD)result != 0) {
                                return result;
                              }
                            }
                            snprintf_plt((__int64)CudaDriverData_1432788,
                                         0x100u, "%s.dev%d.sm%d.cta%d.wp%d",
                                         ".cudbg.lntbl", v16, v40, v47, v77);
                            result = CudaDriverRoutine_7b720(
                                *(_QWORD*)v85, 40, 0x38u, -2147483633, v74, v77,
                                CudaDriverData_1432788, (__int64)v90);
                            if ((_DWORD)result != 0) {
                              return result;
                            }
                            v48 = CudaDriverRoutine_4d0d0(*(_QWORD*)v85);
                            if (v48 != 0) {
                              v49 = v90[0];
                              v50 = v48;
                              v51 = 0;
                              do {
                                v52 = CudaDriverRoutine_222da0(v50);
                                if (v52 == 0) {
                                  return 10;
                                }
                                v53 = v52;
                                if (*(_QWORD*)(v52 + 8) != 0) {
                                  snprintf_plt(
                                      (__int64)CudaDriverData_1432788, 0x100u,
                                      "%s.dev%d.sm%d.cta%d.wp%d.ln%d",
                                      ".cudbg.local", v16, v40, v47, v77, v51);
                                  result = CudaDriverRoutine_7b550(
                                      *(_QWORD*)(v53 + 8),
                                      *(unsigned int*)(v85 + 12),
                                      *(unsigned int*)(v85 + 8), -2147483645,
                                      v49, v51);
                                  if ((_DWORD)result != 0) {
                                    return result;
                                  }
                                }
                                snprintf_plt(
                                    (__int64)CudaDriverData_1432788, 0x100u,
                                    "%s.dev%d.sm%d.cta%d.wp%d.ln%d",
                                    ".cudbg.bt", v16, v40, v47, v77, v51);
                                result = CudaDriverRoutine_7b720(
                                    *(_QWORD*)v53, 0, 0x18u, -2147483640, v49,
                                    v51, CudaDriverData_1432788, 0);
                                if ((_DWORD)result != 0) {
                                  return result;
                                }
                                snprintf_plt(
                                    (__int64)CudaDriverData_1432788, 0x100u,
                                    "%s.dev%d.sm%d.cta%d.wp%d.ln%d",
                                    ".cudbg.regs", v16, v40, v47, v77, v51);
                                result = CudaDriverRoutine_7b550(
                                    *(_QWORD*)(v53 + 16), 0,
                                    4LL * *(unsigned int*)(v85 + 16),
                                    -2147483643, v49, v51);
                                if ((_DWORD)result != 0) {
                                  return result;
                                }
                                snprintf_plt(
                                    (__int64)CudaDriverData_1432788, 0x100u,
                                    "%s.dev%d.sm%d.cta%d.wp%d.ln%d",
                                    ".cudbg.pred", v16, v40, v47, v77, v51);
                                result = CudaDriverRoutine_7b550(
                                    *(_QWORD*)(v53 + 24), 0,
                                    *(_QWORD*)(v53 + 32), -2147483631, v49,
                                    v51);
                                if ((_DWORD)result != 0) {
                                  return result;
                                }
                                ++v51;
                                v50 = CudaDriverRoutine_4d0d0(v50);
                              } while (v50 != 0);
                            }
                            v46 = CudaDriverRoutine_4d0d0(v71);
                            v15 = v82;
                            ++v77;
                          } while (v46 != 0);
                        }
                        v84 = v47 + 1;
                        v43 = CudaDriverRoutine_222580(*v72, v70);
                      } while (v43 != 0);
                    }
                    ++v40;
                    v39 = CudaDriverRoutine_4d0d0(v73);
                  } while (v39 != 0);
                }
                v14 = CudaDriverRoutine_4d0d0(v78);
                ++v16;
              } while (v14 != 0);
            }
            v90[0] = 0;
            v54 = CudaDriverData_1432758;
            result = CudaDriverRoutine_7bac0((__int64*)CudaDriverData_1432778,
                                             ".strtab", 0);
            if ((_DWORD)result == 0) {
              result = CudaDriverRoutine_7bac0((__int64*)CudaDriverData_1432780,
                                               ".shstrtab", (__int64)v90);
              if ((_DWORD)result == 0) {
                if (CudaDriverData_1432760 == 0) {
                  return 4;
                }
                v55 = CudaDriverData_1432770;
                v56 = ftell_plt(CudaDriverData_1432760);
                if (v56 < 0) {
                  return 37;
                }
                v57 = v56;
                v58 = CudaDriverRoutine_96e40(v55);
                v59 = CudaDriverRoutine_4d0d0(v55);
                if (v59 == 0) {
                LABEL_112:
                  *(_QWORD*)(v54 + 40) = v57;
                  v68 = v90[0];
                  *(_WORD*)(v54 + 60) = v58;
                  v69 = CudaDriverData_1432760;
                  *(_WORD*)(v54 + 62) = v68;
                  if (v69 != 0) {
                    rewind_plt();
                    result =
                        CudaDriverRoutine_7b4e0(CudaDriverData_1432758, 0x40u);
                    if ((_DWORD)result != 0) {
                      return result;
                    }
                    if (CudaDriverData_1432760 != 0) {
                      if (fclose_plt(CudaDriverData_1432760) != 0) {
                        return 10;
                      }
                      else {
                        return 0;
                      }
                    }
                  }
                  return 4;
                }
                v60 = v59;
                v61 = CudaDriverRoutine_222da0(v59);
                if (v61 != 0) {
                  if (v58 >= 0x10000) {
                    v62 = v90[0];
                    *(_QWORD*)(v61 + 32) = v58;
                    LOWORD(v58) = 0;
                    if (v62 >= 0x10000) {
                      *(_DWORD*)(v61 + 40) = v62;
                      v90[0] = 0xFFFF;
                    }
                  }
                  if (CudaDriverData_1432750 != 1 ||
                      fwrite_plt_alt1(v61, 0x40u, 1u, CudaDriverData_1432760) ==
                          1) {
                    CudaDriverData_1432768 += 64;
                    v65 = CudaDriverRoutine_4d0d0(v60);
                    if (v65 != 0) {
                      v66 = v65;
                      while (1) {
                        v67 = CudaDriverRoutine_222da0(v66);
                        if (v67 == 0) {
                          return 10;
                        }
                        if (CudaDriverData_1432750 == 1 &&
                            fwrite_plt_alt1(v67, 0x40u, 1u,
                                            CudaDriverData_1432760) != 1) {
                          return 37;
                        }
                        CudaDriverData_1432768 += 64;
                        v66 = CudaDriverRoutine_4d0d0(v66);
                        if (v66 == 0) {
                          goto LABEL_112;
                        }
                      }
                    }
                    goto LABEL_112;
                  }
                  return 37;
                }
                return 10;
              }
            }
          }
          return result;
        }
      }
    }
    return 1;
  }
  if (fwrite_plt_alt1(v5, 0x40u, 1u, CudaDriverData_1432760) != 1) {
    return 37;
  }
  goto LABEL_13;
}

__int64 cuda_driver_7cec0(__int64 a1, unsigned int* a2)
{
  __int64 v2;
  unsigned int v3;
  int v4;
  __int64 v5;
  unsigned int v8;
  struct {
    __int128 v10;
    __int128 v11;
    __int128 v12;
    __int128 v13;
    __int128 v14;
    __int128 v15;
    __int128 v16;
    __int128 v17;
    __int64 v18;
  } v10_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *(_DWORD*)(v2 + 1088);
  v5 = *(_QWORD*)(v2 + 24);
  v10_.v18 = 0;
  v10_.v10 = (__typeof__(v10_.v10)){0};
  v10_.v11 = (__typeof__(v10_.v11)){0};
  v10_.v12 = (__typeof__(v10_.v12)){0};
  v10_.v13 = (__typeof__(v10_.v13)){0};
  v10_.v14 = (__typeof__(v10_.v14)){0};
  v10_.v15 = (__typeof__(v10_.v15)){0};
  v10_.v16 = (__typeof__(v10_.v16)){0};
  v10_.v17 = (__typeof__(v10_.v17)){0};
  if (((v3 >> v4) & 1) == 0 && CudaDriverRoutine_1a0620(a1)) {
    *(_QWORD*)(v2 + 24) = a1;
    if (*(_DWORD*)(v2 + 23372880) != 0) {
      v8 = 0;
      do {
        (*(void (**)(__int64, _QWORD, __int128*))(v2 + 23375352))(v2, v8,
                                                                  &v10_.v10);
        if (__PAIR128__(v10_.v12, *((unsigned __int64*)&v10_.v11 + 1)) != 0) {
          *a2 |= 1 << *(_DWORD*)(v2 + 1088);
        }
        ++v8;
      } while (v8 < *(_DWORD*)(v2 + 23372880));
    }
    *(_QWORD*)(v2 + 24) = v5;
  }
  return 0;
}

__int64 cuda_driver_7d2c0()
{
  __int64 result;
  int v3;
  void(__attribute__((noreturn)) * v4)();
  void(__attribute__((noreturn)) * v5)();
  int v6;
  struct {
    char gap0_[12];
    int v7;
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
  } v7_;
  _BYTE v28[29];

  if (*(_DWORD*)CudaDriverData_1421ff8[0] != 0) {
    return cuda_driver_20b420(0x14u, 5u, 0);
  }
  v3 = 1;
  result = CudaDriverRoutine_817c0(1);
  v4 = CudaDriverData_1422028[0];
  if (*(_DWORD*)CudaDriverData_1422028[0] != 0) {
    v5 = CudaDriverData_1422030[0];
    *(_DWORD*)CudaDriverData_1422030[0] = 1;
    if (CudaDriverData_14328d8 == 2) {
      goto LABEL_16;
    }
  }
  else {
    if (CudaDriverData_14328dc == 1) {
      result = CudaDriverStub_12dd70(&CudaDriverData_14328dc, 2);
      if ((_DWORD)result == 2) {
        while (CudaDriverData_14328d8 != 4)
          ;
        v7_.v23 = (__typeof__(v7_.v23)){0};
        v7_.v22 = (__typeof__(v7_.v22)){0};
        v7_.v21 = (__typeof__(v7_.v21)){0};
        v7_.v20 = (__typeof__(v7_.v20)){0};
        v7_.v19 = (__typeof__(v7_.v19)){0};
        v7_.v18 = (__typeof__(v7_.v18)){0};
        v7_.v17 = (__typeof__(v7_.v17)){0};
        v7_.v16 = (__typeof__(v7_.v16)){0};
        v7_.v25 = (__typeof__(v7_.v25)){0};
        v7_.v26 = (__typeof__(v7_.v26)){0};
        v7_.v24 = (__typeof__(v7_.v24)){0};
        v7_.v7 = 14;
        v7_.v27 = (__typeof__(v7_.v27)){0};
        memset(v28, 0, sizeof(v28));
        v7_.v8 = (__typeof__(v7_.v8)){0};
        v7_.v9 = (__typeof__(v7_.v9)){0};
        v7_.v10 = (__typeof__(v7_.v10)){0};
        v7_.v11 = (__typeof__(v7_.v11)){0};
        v7_.v12 = (__typeof__(v7_.v12)){0};
        v7_.v13 = (__typeof__(v7_.v13)){0};
        v7_.v14 = (__typeof__(v7_.v14)){0};
        v7_.v15 = (__typeof__(v7_.v15)){0};
        CudaDriverRoutine_7d4d0((__int64)&v7_.v7, 353);
        result = CudaDriverRoutine_83020((__int64)&CudaDriverData_1432900);
      }
      v6 = 3;
    }
    else {
      v6 = 2;
    }
    if (CudaDriverData_14328d8 != 1) {
      v6 = 4;
    }
    CudaDriverData_14328d8 = v6;
    v3 = *(_DWORD*)v4 != 0;
    v5 = CudaDriverData_1422030[0];
    *(_DWORD*)CudaDriverData_1422030[0] = v3;
    if (CudaDriverData_14328d8 == 2) {
      goto LABEL_16;
    }
  }
  if (CudaDriverData_14328d8 == 3) {
  LABEL_16:
    v3 |= 2u;
    *(_DWORD*)v5 = v3;
  }
  if (CudaDriverData_14328dc == 1 || CudaDriverData_14328dc == 2) {
    *(_DWORD*)v5 = v3 | 4;
  }
  return result;
}

__int64 cuda_driver_7d470()
{
  __int64 v0;
  __int64 v1;
  unsigned int v2;
  char v4[256];

  v0 = CudaDriverStub_12db70(v4, 256);
  if ((_DWORD)v0 != 0) {
    v4[0] = 0;
  }
  v1 = *(_QWORD*)CudaDriverData_1421fd8[0];
  v2 = CudaDriverStub_12dd30(v0);
  return fprintf_plt(
      v1,
      "%s: The application encountered a device error and "
      "CUDA_DEVICE_WAITS_ON_EXCEPTION is set. You can now attach "
      "a debugger to the application (PID %lu) for inspection.\n",
      v4, v2);
}

__int64 cuda_driver_7d6e0(__int64 a1, char a2, bool* a3, const char** a4)
{
  unsigned __int64 v5;
  _BYTE* v6;
  const char* v7;
  __int64 result;
  bool* v9;
  const char** v10;
  int v11;
  bool v13;
  int v14;
  int v15;
  bool* v16;
  const char** v17;
  bool v18[4];

  if (a4 != nullptr) {
    *a4 = "GPU debugging features are disabled. Please consult the list of "
          "supported CUDA devices for more details";
  }
  if ((a2 & 1) != 0) {
    if (*(_DWORD*)a1 >= 0x20u) {
      *a3 = false;
      goto LABEL_13;
    }
    v5 = __ROR8__(*(_QWORD*)(a1 + 3128) - 272LL, 4);
    *a3 = v5 < 7;
    if (v5 >= 7) {
    LABEL_13:
      if (a4 != nullptr) {
        v7 = "Device is not supported by the classic debugger backend";
      LABEL_17:
        *a4 = v7;
        return 11;
      }
      return 11;
    }
  }
  v6 = (_BYTE*)(a1 + 16856);
  if ((*(_BYTE*)(a1 + 16856) & 4) != 0) {
    *a3 = false;
    if (a4 != nullptr) {
      v7 = "Debugging is not supported on NVIDIA CMP devices";
      goto LABEL_17;
    }
    return 11;
  }
  if (*(_DWORD*)(a1 + 21864) == 4) {
    goto LABEL_9;
  }
  v9 = a3;
  v10 = a4;
  v11 = (*(__int64 (**)(__int64, bool*))(a1 + 20648))(a1, v18);
  v13 = v18[0] && v11 == 0;
  v18[0] = v13;
  if (*(_DWORD*)CudaDriverData_1421fe8[0] != 0) {
    v14 = *(unsigned __int8*)(a1 + 16976) >> 7;
    v15 = cuda_driver_predicates_10f450(a1);
    if (!v18[0]) {
      goto LABEL_35;
    }
  }
  else {
    LOBYTE(v14) = 0;
    v15 = cuda_driver_predicates_10f450(a1);
    if (!v18[0]) {
      goto LABEL_35;
    }
  }
  if ((v14 & 1) == 0 && v15 != 2) {
    *v9 = false;
    if (v10 != nullptr) {
      *v10 = "Some devices watchdogged";
    }
    return 23;
  }
LABEL_35:
  a4 = v10;
  a3 = v9;
  if (*(_DWORD*)(a1 + 21864) == 4) {
  LABEL_9:
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) + 261LL) & 1) ==
        0) {
      if (a4 != nullptr) {
        *a4 = "Device node does not allow debugging for the current user. See "
              "the 'Using the cuda-gdb debugger on Jetson "
              "and Drive Tegra' devices section in the CUDA-GDB user manual "
              "for workaround.";
      }
      *a3 = false;
      return 11;
    }
  }
  v16 = a3;
  v17 = a4;
  if ((unsigned __int8)CudaDriverStub_9afa0(a1) != 0 && (*v6 & 2) != 0) {
    if (v17 != nullptr) {
      *v17 = "vGPU debugging disabled. See 'Enabling NVIDIA CUDA Toolkit "
             "Debuggers for NVIDIA vGPU' section in Virtual GP"
             "U Software User Guide.";
    }
    *v16 = false;
    return 11;
  }
  if (CudaDriverData_14358d0 != 0 &&
      (CudaDriverRoutine_9ad50(a1) && CudaDriverData_14358d0 != 1 ||
       cuda_driver_predicates_9ae50(a1) && CudaDriverData_14358d9 == 0)) {
    *v16 = false;
    if (v17 != nullptr) {
      *v17 = "Confidential compute mode detected, GPU debugging features are "
             "disabled";
      return 11;
    }
    return 11;
  }
  result = 0;
  *v16 = true;
  if (v17 != nullptr) {
    *v17 = nullptr;
  }
  return result;
}

__int64 cuda_driver_7d930()
{
  void* v0;
  int v1;
  struct {
    char gap0_[12];
    int v3;
    __int128 v4;
    __int128 v5;
    __int128 v6;
    __int128 v7;
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
  } v3_;
  _BYTE v24[29];

  v0 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                        (_QWORD)CudaDriverData_1422118);
  if ((unsigned int)CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 1,
                                          0) == 0 &&
      (CudaDriverData_14328d0 & 1) == 0) {
    if ((unsigned int)CudaDriverStub_12db70(&v3_.v3, 256) != 0) {
      LOBYTE(v3_.v3) = 0;
    }
    fprintf_plt(*(_QWORD*)CudaDriverData_1421fd8[0], "%s: %s\n",
                (const char*)&v3_.v3,
                "Legacy debugger does not support the current OptiX launcher, "
                "the behavior of the rest of the debugging session is "
                "undefined.\n"
                "Please either set the OPTIX_FORCE_DEPRECATED_LAUNCHER "
                "environment variable to 1 to use the deprecated launcher or "
                "use the current debugger backend if possible.");
    CudaDriverData_14328d0 = 1;
  }
  v1 = CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 0, 1u);
  if (v1 == 3) {
    goto LABEL_6;
  }
  if (v1 == 2) {
    v3_.v21 = (__typeof__(v3_.v21)){0};
    v3_.v22 = (__typeof__(v3_.v22)){0};
    v3_.v23 = (__typeof__(v3_.v23)){0};
    memset(v24, 0, sizeof(v24));
    v3_.v20 = (__typeof__(v3_.v20)){0};
    v3_.v19 = (__typeof__(v3_.v19)){0};
    v3_.v18 = (__typeof__(v3_.v18)){0};
    v3_.v17 = (__typeof__(v3_.v17)){0};
    v3_.v16 = (__typeof__(v3_.v16)){0};
    v3_.v15 = (__typeof__(v3_.v15)){0};
    v3_.v14 = (__typeof__(v3_.v14)){0};
    v3_.v13 = (__typeof__(v3_.v13)){0};
    v3_.v12 = (__typeof__(v3_.v12)){0};
    v3_.v3 = 14;
    v3_.v4 = (__typeof__(v3_.v4)){0};
    v3_.v5 = (__typeof__(v3_.v5)){0};
    v3_.v6 = (__typeof__(v3_.v6)){0};
    v3_.v7 = (__typeof__(v3_.v7)){0};
    v3_.v8 = (__typeof__(v3_.v8)){0};
    v3_.v9 = (__typeof__(v3_.v9)){0};
    v3_.v10 = (__typeof__(v3_.v10)){0};
    v3_.v11 = (__typeof__(v3_.v11)){0};
    CudaDriverRoutine_7d4d0((__int64)&v3_.v3, 353);
    CudaDriverRoutine_83020((__int64)&CudaDriverData_1432900);
  LABEL_6:
    CudaDriverData_14328d8 = 4;
  }
  return CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v0);
}

__int64 cuda_driver_7e2a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void* v8;
  int v9;
  struct {
    char gap0_[12];
    int v11;
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
    __int128 v31;
  } v11_;
  _BYTE v32[29];

  v8 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                        (_QWORD)CudaDriverData_1422118);
  if ((unsigned int)CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 1,
                                          0) == 0) {
    CudaDriverRoutine_80be0(a1, a2, a3, a4);
  }
  v9 = CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 0, 1u);
  if (v9 == 3) {
    goto LABEL_6;
  }
  if (v9 == 2) {
    v11_.v29 = (__typeof__(v11_.v29)){0};
    v11_.v30 = (__typeof__(v11_.v30)){0};
    v11_.v31 = (__typeof__(v11_.v31)){0};
    memset(v32, 0, sizeof(v32));
    v11_.v28 = (__typeof__(v11_.v28)){0};
    v11_.v27 = (__typeof__(v11_.v27)){0};
    v11_.v26 = (__typeof__(v11_.v26)){0};
    v11_.v25 = (__typeof__(v11_.v25)){0};
    v11_.v24 = (__typeof__(v11_.v24)){0};
    v11_.v23 = (__typeof__(v11_.v23)){0};
    v11_.v22 = (__typeof__(v11_.v22)){0};
    v11_.v21 = (__typeof__(v11_.v21)){0};
    v11_.v20 = (__typeof__(v11_.v20)){0};
    v11_.v11 = 14;
    v11_.v12 = (__typeof__(v11_.v12)){0};
    v11_.v13 = (__typeof__(v11_.v13)){0};
    v11_.v14 = (__typeof__(v11_.v14)){0};
    v11_.v15 = (__typeof__(v11_.v15)){0};
    v11_.v16 = (__typeof__(v11_.v16)){0};
    v11_.v17 = (__typeof__(v11_.v17)){0};
    v11_.v18 = (__typeof__(v11_.v18)){0};
    v11_.v19 = (__typeof__(v11_.v19)){0};
    CudaDriverRoutine_7d4d0((__int64)&v11_.v11, 353);
    CudaDriverRoutine_83020((__int64)&CudaDriverData_1432900);
  LABEL_6:
    CudaDriverData_14328d8 = 4;
  }
  return CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v8);
}

__int64 cuda_driver_7e640()
{
  void* v0;
  __int64 i;
  __int64 v2;
  int v3;
  struct {
    char gap0_[12];
    int v5;
    __int128 v6;
    __int128 v7;
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
  } v5_;
  _BYTE v26[29];

  while (CudaDriverData_14328dc != 0)
    ;
  if (*(_DWORD*)CudaDriverData_1422010[0] <= 0x62u) {
    CudaDriverRoutine_817c0(2);
  }
  v0 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                        (_QWORD)CudaDriverData_1422118);
  if ((unsigned int)CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 1,
                                          0) == 0) {
    CudaDriverStub_107f90_alt1((char*)((_UNKNOWN*)0x1818LL) + (_QWORD)v0);
    for (i = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v0); i != 0;
         i = *(_QWORD*)(i + 16328)) {
      v2 = CudaDriverRoutine_98340(i);
      CudaDriverRoutine_1235f0(v2, 1);
    }
    CudaDriverStub_108070_alt1((char*)((_UNKNOWN*)0x1818LL) + (_QWORD)v0);
    CudaDriverData_14328d8 = 2;
    *(_DWORD*)CudaDriverData_1421ff0[0] = 0;
  }
  v3 = CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 0, 1u);
  if (v3 == 3) {
    goto LABEL_11;
  }
  if (v3 == 2) {
    v5_.v23 = (__typeof__(v5_.v23)){0};
    v5_.v24 = (__typeof__(v5_.v24)){0};
    v5_.v25 = (__typeof__(v5_.v25)){0};
    memset(v26, 0, sizeof(v26));
    v5_.v22 = (__typeof__(v5_.v22)){0};
    v5_.v21 = (__typeof__(v5_.v21)){0};
    v5_.v20 = (__typeof__(v5_.v20)){0};
    v5_.v19 = (__typeof__(v5_.v19)){0};
    v5_.v18 = (__typeof__(v5_.v18)){0};
    v5_.v17 = (__typeof__(v5_.v17)){0};
    v5_.v16 = (__typeof__(v5_.v16)){0};
    v5_.v15 = (__typeof__(v5_.v15)){0};
    v5_.v14 = (__typeof__(v5_.v14)){0};
    v5_.v5 = 14;
    v5_.v6 = (__typeof__(v5_.v6)){0};
    v5_.v7 = (__typeof__(v5_.v7)){0};
    v5_.v8 = (__typeof__(v5_.v8)){0};
    v5_.v9 = (__typeof__(v5_.v9)){0};
    v5_.v10 = (__typeof__(v5_.v10)){0};
    v5_.v11 = (__typeof__(v5_.v11)){0};
    v5_.v12 = (__typeof__(v5_.v12)){0};
    v5_.v13 = (__typeof__(v5_.v13)){0};
    CudaDriverRoutine_7d4d0((__int64)&v5_.v5, 353);
    CudaDriverRoutine_83020((__int64)&CudaDriverData_1432900);
  LABEL_11:
    CudaDriverData_14328d8 = 4;
  }
  CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v0);
  return 0;
}

bool cuda_driver_7e7d0(__int64 a1)
{
  int v1;
  _BOOL8 result;

  v1 = *(_DWORD*)(a1 + 15896);
  result = true;
  if (v1 == 0 && (CudaDriverData_14335e4 & 1) == 0) {
    return *(_DWORD*)CudaDriverData_1422038[0] != 0;
  }
  return result;
}

__int64 cuda_driver_7f130()
{
  void* v0;
  int v1;
  struct {
    char gap0_[12];
    int v3;
    __int128 v4;
    __int128 v5;
    __int128 v6;
    __int128 v7;
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
  } v3_;
  _BYTE v24[29];

  v0 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                        (_QWORD)CudaDriverData_1422118);
  if ((unsigned int)CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 1,
                                          0) == 0 &&
      (CudaDriverData_14328d1 & 1) == 0) {
    if ((unsigned int)CudaDriverStub_12db70(&v3_.v3, 256) != 0) {
      LOBYTE(v3_.v3) = 0;
    }
    fprintf_plt(*(_QWORD*)CudaDriverData_1421fd8[0], "%s: %s\n",
                (const char*)&v3_.v3,
                "Legacy debugger does not support green contexts. The behavior "
                "of the rest of the debugging session is undefined.\n");
    CudaDriverData_14328d1 = 1;
  }
  v1 = CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 0, 1u);
  if (v1 == 3) {
    goto LABEL_6;
  }
  if (v1 == 2) {
    v3_.v21 = (__typeof__(v3_.v21)){0};
    v3_.v22 = (__typeof__(v3_.v22)){0};
    v3_.v23 = (__typeof__(v3_.v23)){0};
    memset(v24, 0, sizeof(v24));
    v3_.v20 = (__typeof__(v3_.v20)){0};
    v3_.v19 = (__typeof__(v3_.v19)){0};
    v3_.v18 = (__typeof__(v3_.v18)){0};
    v3_.v17 = (__typeof__(v3_.v17)){0};
    v3_.v16 = (__typeof__(v3_.v16)){0};
    v3_.v15 = (__typeof__(v3_.v15)){0};
    v3_.v14 = (__typeof__(v3_.v14)){0};
    v3_.v13 = (__typeof__(v3_.v13)){0};
    v3_.v12 = (__typeof__(v3_.v12)){0};
    v3_.v3 = 14;
    v3_.v4 = (__typeof__(v3_.v4)){0};
    v3_.v5 = (__typeof__(v3_.v5)){0};
    v3_.v6 = (__typeof__(v3_.v6)){0};
    v3_.v7 = (__typeof__(v3_.v7)){0};
    v3_.v8 = (__typeof__(v3_.v8)){0};
    v3_.v9 = (__typeof__(v3_.v9)){0};
    v3_.v10 = (__typeof__(v3_.v10)){0};
    v3_.v11 = (__typeof__(v3_.v11)){0};
    CudaDriverRoutine_7d4d0((__int64)&v3_.v3, 353);
    CudaDriverRoutine_83020((__int64)&CudaDriverData_1432900);
  LABEL_6:
    CudaDriverData_14328d8 = 4;
  }
  return CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v0);
}

__int64 cuda_driver_7fc90(unsigned int a1, __int64 a2, int a3,
                          __int64 (*a4)(_DWORD*, void*))
{
  int v4;
  int v7;
  __int64 result;
  int v9;
  void* v10;
  int v11;
  int v12;
  _DWORD v13[5];
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
  _BYTE v33[29];

  v4 = 600;
  if (a3 == 0 || a4 == nullptr) {
    goto LABEL_8;
  }
  v7 = a3;
  *(_QWORD*)v13 = 0;
  result = a4(v13, &CudaDriverData_1131610);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(int*))((char*)((_UNKNOWN**)0x8LL) +
                                    *(_QWORD*)v13))(&v12);
    if ((_DWORD)result == 0) {
      a3 = v7;
      if (v12 >= 10010) {
        v4 = 600;
      }
      else {
        v4 = 34;
      }
    LABEL_8:
      if (a3 != 0) {
        v9 = v4;
      }
      else {
        v9 = 600;
      }
      if (a1 == 0) {
        return 0;
      }
      v10 = CudaDriverData_1422118;
      CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                            (_QWORD)CudaDriverData_1422118);
      if ((unsigned int)CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8,
                                              1, 0) == 0 &&
          (a1 != v9 || (*(_DWORD*)CudaDriverData_1422040[0] & 1) == 0)) {
        *(_QWORD*)CudaDriverData_1422048[0] = a1;
        *(_QWORD*)CudaDriverData_1422050[0] = strlen_plt(a2) + 1;
        *(_QWORD*)CudaDriverData_1422058[0] = a2;
        CudaDriverData_14301f0();
      }
      v11 = CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 0, 1u);
      if (v11 != 3) {
        if (v11 != 2) {
        LABEL_20:
          CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v10);
          return 0;
        }
        v30 = (__typeof__(v30)){0};
        v31 = (__typeof__(v31)){0};
        v32 = (__typeof__(v32)){0};
        memset(v33, 0, sizeof(v33));
        v29 = (__typeof__(v29)){0};
        v20 = (__typeof__(v20)){0};
        v19 = (__typeof__(v19)){0};
        v18 = (__typeof__(v18)){0};
        v17 = (__typeof__(v17)){0};
        v16 = (__typeof__(v16)){0};
        v15 = (__typeof__(v15)){0};
        v14 = (__typeof__(v14)){0};
        *(_OWORD*)&v13[1] = (__typeof__(*(_OWORD*)&v13[1])){0};
        v28 = (__typeof__(v28)){0};
        v27 = (__typeof__(v27)){0};
        v26 = (__typeof__(v26)){0};
        v25 = (__typeof__(v25)){0};
        v24 = (__typeof__(v24)){0};
        v23 = (__typeof__(v23)){0};
        v22 = (__typeof__(v22)){0};
        v21 = (__typeof__(v21)){0};
        v13[0] = 14;
        CudaDriverRoutine_7d4d0((__int64)v13, 353);
        CudaDriverRoutine_83020((__int64)&CudaDriverData_1432900);
      }
      CudaDriverData_14328d8 = 4;
      goto LABEL_20;
    }
  }
  return result;
}

__int64 cuda_driver_800f0(__int64 result, __int64 a2)
{
  __int64 v3;
  _DWORD** v4;
  int v5;
  __int64 v6;
  char v7;
  bool v8;
  unsigned int v9;
  unsigned int v10;
  _BOOL4 v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  int v22;

  v22 = 0;
  if (result != 0 && a2 != 0) {
    *(_DWORD*)(a2 + 44) = *(_DWORD*)((char*)((_UNKNOWN*)0xF90LL) +
                                     (_QWORD)CudaDriverData_1422118);
    if (*(_QWORD*)(result + 168) != 0) {
      v3 = *(_QWORD*)(result + 168);
    }
    else {
      v3 = result;
    }
    *(_DWORD*)(a2 + 48) = ***(_DWORD***)(v3 + 632);
    v4 = *(_DWORD***)(v3 + 632);
    v5 = (*v4)[5466];
    switch (v5) {
    case 4:
      v15 = result;
      ((void (*)(__int64, int*))v4[290])(v3, &v22);
      *(_DWORD*)(a2 + 40) = v22;
      v16 =
          !CudaDriverRoutine_1ec4a0(*(_QWORD*)(v3 + 632), (_QWORD*)(v3 + 240));
      result = v15;
      v17 = v16;
      *(_DWORD*)(a2 + 68) = v17;
      v18 = *(unsigned __int8*)(v15 + 96);
      v19 = v18 >> 2;
      v11 = (v18 & 4) != 0;
      if ((v19 & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_15;
    case 3:
      *(_DWORD*)(a2 + 40) = *(_DWORD*)(*(_QWORD*)(v3 + 232) + 20LL);
      *(_DWORD*)(a2 + 44) = *(_DWORD*)(*(_QWORD*)(v3 + 232) + 16LL);
      break;
    case 0:
      v6 = result;
      v7 = CudaDriverRoutine_1d9f90(*(_QWORD*)(v3 + 632));
      result = v6;
      if (v7 == 0 || (v8 = CudaDriverRoutine_1d8a80(v6), result = v6, !v8)) {
        *(_DWORD*)(a2 + 40) = **(_DWORD**)(**(_QWORD**)(v3 + 200) + 176LL);
        v9 = *(unsigned __int8*)(result + 96);
        v10 = v9 >> 2;
        v11 = (v9 & 4) != 0;
        if ((v10 & 1) != 0) {
          goto LABEL_20;
        }
        goto LABEL_15;
      }
      break;
    default:
      break;
    }
    v12 = *(unsigned __int8*)(result + 96);
    v13 = v12 >> 2;
    v11 = (v12 & 4) != 0;
    if ((v13 & 1) != 0) {
    LABEL_20:
      v14 = *(_QWORD*)(result + 112);
    LABEL_21:
      *(_QWORD*)a2 = *(_QWORD*)(*(_QWORD*)(result + 632) + 8LL);
      *(_QWORD*)(a2 + 8) = result;
      *(_QWORD*)(a2 + 16) = *(_QWORD*)(result + 168);
      *(_QWORD*)(a2 + 24) = *(_QWORD*)(result + 112);
      *(_QWORD*)(a2 + 32) = *(_QWORD*)(result + 128);
      *(_QWORD*)(a2 + 52) = *(_QWORD*)(result + 104);
      v20 = *(_DWORD*)(result + 240);
      *(_QWORD*)(a2 + 72) = v14;
      *(_DWORD*)(a2 + 60) = (v20 >> 26) & 0x1F;
      *(_DWORD*)(a2 + 64) = v11;
      *(_QWORD*)(a2 + 80) = *(_QWORD*)(result + 88);
      *(_DWORD*)(a2 + 88) = (*(_DWORD*)(result + 240) >> 9) & 0x3F;
      *(_DWORD*)(a2 + 92) = (*(_QWORD*)(result + 240) >> 54) & 0x1F;
      *(_DWORD*)(a2 + 96) = *(_DWORD*)(result + 240) & 7;
      *(_DWORD*)(a2 + 100) = *(_DWORD*)(result + 244) & 7;
      v21 = (*(_QWORD*)(result + 240) >> 35) & 0x1FLL;
      *(_DWORD*)(a2 + 104) = v21;
      *(_DWORD*)(a2 + 108) =
          (*(_QWORD*)(result + 240) & 0x800000000000000LL) != 0;
      *(_DWORD*)(a2 + 112) = (*(_QWORD*)(result + 240) >> 41) & 7;
      if ((_DWORD)v21 == 2) {
        *(_QWORD*)(a2 + 24) = *(_QWORD*)(result + 376);
        *(_QWORD*)(a2 + 52) = *(_QWORD*)(result + 376);
        *(_QWORD*)(a2 + 72) = *(_QWORD*)(result + 376);
        *(_QWORD*)(a2 + 80) = *(_QWORD*)(result + 376);
        *(_QWORD*)(a2 + 32) = *(_QWORD*)(result + 384);
      }
      return result;
    }
  LABEL_15:
    v14 = 0;
    goto LABEL_21;
  }
  return result;
}

__int64 cuda_driver_80ee0(__int64 a1, __int64 a2)
{
  void* v4;
  int v7;
  __int64 i;
  __int64 v10;
  __int64 v11;
  struct {
    char gap0_[12];
    int v12;
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
    __int128 v31;
    __int128 v32;
  } v12_;
  _BYTE v33[29];

  v4 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                        (_QWORD)CudaDriverData_1422118);
  if ((unsigned int)CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 1,
                                          0) == 0 &&
      a1 != 0 && a2 != 0) {
    v12_.v12 = 18;
    *(_QWORD*)&v12_.v13 = *(_QWORD*)(a2 + 24);
    *((_QWORD*)&v12_.v13 + 1) = a2;
    CudaDriverRoutine_7d4d0((__int64)&v12_.v12, 353);
    CudaDriverRoutine_7d5b0();
    for (i = *(_QWORD*)(a2 + 224); i != 0; i = *(_QWORD*)(i + 1144)) {
      v10 = *(_QWORD*)(i + 32);
      v12_.v12 = 16;
      v11 = *(_QWORD*)(v10 + 24);
      *(_QWORD*)&v12_.v14 = i;
      *(_QWORD*)&v12_.v13 = v11;
      *((_QWORD*)&v12_.v13 + 1) = v10;
      CudaDriverRoutine_7d4d0((__int64)&v12_.v12, 353);
      CudaDriverRoutine_7d5b0();
    }
    v12_.v12 = 17;
    *(_QWORD*)&v12_.v13 = *(_QWORD*)(a2 + 24);
    *((_QWORD*)&v12_.v13 + 1) = a2;
    CudaDriverRoutine_7d4d0((__int64)&v12_.v12, 353);
    CudaDriverRoutine_7d5b0();
  }
  v7 = CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 0, 1u);
  if (v7 == 3) {
    goto LABEL_12;
  }
  if (v7 == 2) {
    v12_.v30 = (__typeof__(v12_.v30)){0};
    v12_.v31 = (__typeof__(v12_.v31)){0};
    v12_.v32 = (__typeof__(v12_.v32)){0};
    memset(v33, 0, sizeof(v33));
    v12_.v29 = (__typeof__(v12_.v29)){0};
    v12_.v28 = (__typeof__(v12_.v28)){0};
    v12_.v27 = (__typeof__(v12_.v27)){0};
    v12_.v26 = (__typeof__(v12_.v26)){0};
    v12_.v25 = (__typeof__(v12_.v25)){0};
    v12_.v24 = (__typeof__(v12_.v24)){0};
    v12_.v23 = (__typeof__(v12_.v23)){0};
    v12_.v22 = (__typeof__(v12_.v22)){0};
    v12_.v21 = (__typeof__(v12_.v21)){0};
    v12_.v12 = 14;
    v12_.v13 = (__typeof__(v12_.v13)){0};
    v12_.v14 = (__typeof__(v12_.v14)){0};
    v12_.v15 = (__typeof__(v12_.v15)){0};
    v12_.v16 = (__typeof__(v12_.v16)){0};
    v12_.v17 = (__typeof__(v12_.v17)){0};
    v12_.v18 = (__typeof__(v12_.v18)){0};
    v12_.v19 = (__typeof__(v12_.v19)){0};
    v12_.v20 = (__typeof__(v12_.v20)){0};
    CudaDriverRoutine_7d4d0((__int64)&v12_.v12, 353);
    CudaDriverRoutine_83020((__int64)&CudaDriverData_1432900);
  LABEL_12:
    CudaDriverData_14328d8 = 4;
  }
  return CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v4);
}

__int64 cuda_driver_81090()
{
  return *(unsigned int*)CudaDriverData_1422020[0];
}

void cuda_driver_810a0() { *(_QWORD*)CudaDriverData_1422020[0] = 0; }

__int64 cuda_driver_815e0(const char* a1)
{
  __int64 result;
  char v3[4];
  char v4[256];

  if ((unsigned int)CudaDriverStub_12db70(v4, 256) != 0) {
    v4[0] = 0;
  }
  fprintf_plt(*(_QWORD*)CudaDriverData_1421fd8[0], "%s: %s\n", v4, a1);
  v3[0] = 0;
  *(_QWORD*)v4 = 1;
  CudaDriverRoutine_78230(1, v3, 1, v4);
  result = CudaDriverRoutine_78230(4, v3, 1, v4);
  *(_DWORD*)((char*)((_UNKNOWN*)0x1840LL) + (_QWORD)CudaDriverData_1422118) &=
      ~2u;
  return result;
}

__int64 cuda_driver_81f30()
{
  (*(void (**)(unsigned int))((char*)((char*)0x20LL) +
                              (_QWORD)CudaDriverData_1430208))(
      CudaDriverData_1430218);
  return CudaDriverRoutine_810c0(0);
}

__int64 cuda_driver_82e60(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  int v11;

  result = 4;
  if (a1 != 0 && a2 != 0 && a3 <= 0x7FFFFFFFFFFFFFFELL) {
    v7 = *(_DWORD*)a1 == 5 || *(_DWORD*)a1 == 3;
    if (v7 && (*(_BYTE*)(a1 + 305) & 1) == 0) {
      if (!cuda_debugger_api_7d1f0()) {
        *(_QWORD*)CudaDriverData_1422020[0] =
            cuda_debugger_api_7d280(4u, 0x493u, 0x1Cu, 0);
        CudaDriverData_14301f8();
      }
      return 28;
    }
    else if (a3 != 0) {
      v8 = 0;
      while (1) {
        v9 = (*(__int64 (**)(__int64, unsigned __int64, unsigned __int64))(
            a1 + 368))(a1, a2 + v8, a3 - v8);
        if (v9 < 0) {
          v11 = *(_DWORD*)__errno_location_plt(v9);
          v9 = 0;
          if (v11 != 4 && v11 != 105 && v11 != 11) {
            break;
          }
        }
        v8 += v9;
        if (v8 >= a3) {
          return 0;
        }
      }
      return 28;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_83490(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v7;
  __int64 v8;
  __int64 result;
  int* v10;
  int v11;
  int v12;
  int v13;

  v7 = a1 + 23375256;
  v8 = *(_QWORD*)(a1 + 24);
  if (v8 != 0) {
    CudaDriverRoutine_847c0(v8);
  }
  if (*(_DWORD*)v7 != 1) {
    return 0;
  }
  if ((unsigned int)(*(_DWORD*)(v7 + 1876) - 3) < 2) {
    return 0;
  }
  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    if (!CudaDriverRoutine_1a0620(result)) {
      return 0;
    }
    v10 = (int*)(v7 + 1876);
    result = (*(__int64 (**)(__int64, __int64))(v7 + 1096))(a1, v7 + 1876);
    if ((_DWORD)result != 0) {
      return result;
    }
    if (*v10 == 1) {
      *v10 = 0;
      result = CudaDriverRoutine_83de0((unsigned int*)a1, 0);
      if ((_DWORD)result == 0) {
        v12 = 1;
        *(_BYTE*)(a1 + 5) = 1;
        goto LABEL_18;
      }
    }
    else {
      if (*v10 != 2) {
        return 0;
      }
      result = CudaDriverRoutine_83600(a1, a3, a4 & 1);
      if ((_DWORD)result == 0) {
        result = (*(__int64 (**)(__int64, int*))(v7 + 1152))(a1, &v13);
        if ((_DWORD)result == 0) {
          v11 = v13;
          *(_BYTE*)(a1 + 5) = 1;
          if (v11 != 0) {
            v12 = 5;
            result = 0;
          LABEL_18:
            *v10 = v12;
            return result;
          }
          *(_DWORD*)(v7 + 1876) = 1;
          result = (*(__int64 (**)(__int64, _QWORD))(v7 + 1144))(a1, 0);
          if ((_DWORD)result == 0) {
            return 0;
          }
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_84a40(__int64 a1)
{
  int v1;
  unsigned int* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 (*v10)(__int64, _QWORD, _QWORD*);
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  char v21;
  unsigned __int64 v22;
  __int64 (*v23)(__int64, _QWORD, _QWORD*);
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  _BYTE* v28;
  _QWORD v29[2];
  int8x16_t v30;
  int8x16_t v31;
  _BYTE v32[4];
  _BYTE v33[4];
  _BYTE v34[4];
  _BYTE v35[16];
  _BYTE v36[8];

  v1 = *(unsigned __int8*)(a1 + 5);
  v34[0] = 0;
  v32[0] = 0;
  if (v1 != 1) {
    return 16;
  }
  v31 = (__typeof__(v31)){0};
  v30 = (__typeof__(v30)){0};
  v3 = (unsigned int*)(a1 + 23372880);
  v4 = CudaDriverRoutine_12e510(*(unsigned int*)(a1 + 23372880), 16);
  if (v4 == 0) {
    return 37;
  }
  v5 = v4;
  if (*v3 == 0) {
    goto LABEL_37;
  }
  v6 = (_QWORD*)(a1 + 1152);
  v7 = 0;
  v8 = (_QWORD*)v4;
  do {
    while (*((_DWORD*)v6 - 14) == 0) {
      *v8 = -1;
      v8[1] = -1;
      v8 += 2;
      v9 = *v3;
      ++v7;
      v6 += 11410;
      if (v7 >= v9) {
        goto LABEL_8;
      }
    }
    *v8 = ~*(v6 - 1);
    v8[1] = ~*v6;
    v9 = *v3;
    ++v7;
    v8 += 2;
    v6 += 11410;
  } while (v7 < v9);
LABEL_8:
  if ((_DWORD)v9 == 0) {
  LABEL_37:
    v11 = 0;
    goto LABEL_38;
  }
  v10 = *((__int64 (**)(__int64, _QWORD, _QWORD*))v3 + 399);
  v29[0] = 0;
  v29[1] = 0;
  v11 = v10(a1, 0, v29);
  if (v11 != 0) {
    goto LABEL_38;
  }
  v12 = a1 + 1096;
  v13 = 1256;
  LODWORD(v14) = 0;
  v15 = 0;
  v16 = 0;
  while (1) {
    v11 = cuda_driver_84ec0_alt1(a1, v14, v29, 1u, 1, v34, v32, &v31, &v30, v5);
    if (v11 != 0) {
      goto LABEL_38;
    }
    if (v32[0] == 1) {
      v15 = 1;
      *(int8x16_t*)(a1 + 1176 + 91280 * v16) =
          vandq_s8(v30, *(int8x16_t*)(a1 + 1176 + 91280 * v16));
    }
    if (v34[0] == 1) {
      break;
    }
    v22 = *v3;
    v14 = v16 + 1;
    if (v16 + 1 >= v22) {
      if ((v15 & 1) != 0) {
        goto LABEL_39;
      }
      goto LABEL_37;
    }
  LABEL_31:
    v23 = *((__int64 (**)(__int64, _QWORD, _QWORD*))v3 + 399);
    v29[0] = 0;
    v29[1] = 0;
    v11 = v23(a1, (unsigned int)v14, v29);
    v13 += 91280;
    v16 = v14;
    if (v11 != 0) {
      goto LABEL_38;
    }
  }
  v17 = v3[1];
  if ((_DWORD)v17 == 0) {
  LABEL_35:
    v11 = 1;
    goto LABEL_38;
  }
  v18 = v12 + 91280 * v16;
  v19 = 0;
  v20 = v13;
  while (1) {
    if (v19 > 0x3F) {
      v21 = 64 - v19;
      if ((unsigned int)v19 > 0x40) {
        v21 = 0;
      }
      if (((*(_QWORD*)(v18 + 56) >> v19 << v21) & 1) == 0) {
        goto LABEL_18;
      }
    }
    else if (((*(_QWORD*)(v18 + 48) >> v19) & 1) == 0) {
      goto LABEL_18;
    }
    v11 = (*((__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _BYTE*, _BYTE*,
                           _BYTE*))v3 +
             332))(a1, (unsigned int)v14, (unsigned int)v19,
                   *(_QWORD*)(a1 + v20), v36, v35, v33);
    if (v11 != 0) {
      goto LABEL_38;
    }
    if (v33[0] != 1) {
      break;
    }
    v17 = v3[1];
  LABEL_18:
    ++v19;
    v20 += 1424;
    if (v19 >= v17) {
      goto LABEL_35;
    }
  }
  v11 = CudaDriverRoutine_85210(a1, v14, v19, (__int64*)&v31, v5);
  if (v11 != 0) {
    goto LABEL_38;
  }
  v22 = *v3;
  v14 = v16 + 1;
  if (v16 + 1 < v22) {
    v12 = a1 + 1096;
    v15 = 1;
    goto LABEL_31;
  }
LABEL_39:
  if (v3[594] != 2 || (_DWORD)v22 == 0) {
  LABEL_44:
    v11 = (*((__int64 (**)(__int64, __int64, __int64))v3 + 406))(a1, 1, v5);
    if (v11 != 0) {
      goto LABEL_38;
    }
    v27 = *v3;
    if ((_DWORD)v27 != 0) {
      v28 = (_BYTE*)(a1 + 1229);
      while (*v28 != 1) {
        v28 += 91280;
        --v27;
        v11 = 0;
        if (v27 == 0) {
          goto LABEL_38;
        }
      }
      v11 = 41;
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  v26 = 0;
  while (1) {
    v11 = (*((__int64 (**)(__int64, _QWORD))v3 + 310))(a1, v26);
    if (v11 != 0) {
      break;
    }
    if (++v26 >= *v3) {
      goto LABEL_44;
    }
  }
LABEL_38:
  v25 = v11;
  CudaDriverRoutine_6b9d0(a1);
  CudaDriverRoutine_12e340(v5);
  return v25;
}

__int64 cuda_driver_84ec0(__int64 a1, unsigned int a2, __int64* a3,
                          unsigned int a4, char a5, _BYTE* a6, _BYTE* a7,
                          int8x16_t* a8, _QWORD* a9, __int64 a10)
{
  __int64 result;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  unsigned __int64 v22;
  _QWORD* v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int128 v30;
  __int64 v31;
  __int64* v32;
  unsigned int v33;
  __int64 v34;
  char v35;
  _BYTE* v36;
  char v37[4];
  __int128 v38;
  int8x16_t v39;
  __int64 v40[2];
  struct {
    __int64 v41;
    __int64 v42;
  } v41_;
  char v43[12];

  v37[0] = 0;
  result = (*(__int64 (**)(char*))(a1 + 23376624))(v37);
  if ((_DWORD)result == 0) {
    if (v37[0] == 1) {
      return cuda_driver_86100(a1, a2, a3, a4, a5 & 1, a6, a7, (__int64*)a8,
                               a9);
    }
    v35 = a5;
    v19 = 0;
    v20 = 0;
    v36 = a6;
    v43[0] = 0;
    v21 = (_DWORD*)(a1 + 23372884);
    v41_.v41 = 0;
    v41_.v42 = 0;
    v39 = (__typeof__(v39)){0};
    v38 = (__typeof__(v38)){0};
    if (a4 <= 1) {
      if (*v21 != 0) {
        v22 = 0;
        v19 = 0;
        v20 = 0;
        v33 = a2;
        v23 = (_QWORD*)(a1 + 91280LL * a2 + 1256);
        while (1) {
          if (v22 > 0x3F) {
            v24 = 64 - v22;
            if ((unsigned int)v22 > 0x40) {
              v24 = 0;
            }
            if ((((unsigned __int64)a3[1] >> v22 << v24) & 1) != 0) {
            LABEL_14:
              result = (*(__int64 (**)(_QWORD, _QWORD, char*))(a1 + 23375784))(
                  *(_QWORD*)(a1 + 24), *v23, v43);
              if ((_DWORD)result != 0) {
                return result;
              }
              v25 = (1LL << v22) | v19;
              v26 = v20 | (1LL << v22);
              if (v22 > 0x3F) {
                v26 = v20;
              }
              else {
                v25 = v19;
              }
              if (v43[0] == 1) {
                v19 = v25;
                v20 = v26;
              }
            }
          }
          else if ((((unsigned __int64)*a3 >> v22) & 1) != 0) {
            goto LABEL_14;
          }
          ++v22;
          v23 += 178;
          if (v22 >= (unsigned int)*v21) {
            a2 = v33;
            v41_.v42 = v19;
            goto LABEL_22;
          }
        }
      }
      v19 = 0;
      v20 = 0;
    LABEL_22:
      v41_.v41 = v20;
    }
    v27 = a3[1] & ~v19;
    v40[0] = *a3 & ~v20;
    v40[1] = v27;
    v28 = a1 + 91280LL * a2;
    v29 = *(_QWORD*)(v28 + 1152);
    v34 = *(_QWORD*)(v28 + 1144);
    result = cuda_driver_86100(a1, a2, v40, a4, v35 & 1, v36, a7,
                               (__int64*)&v39, &v38);
    if ((_DWORD)result == 0) {
      *a8 = v39;
      v30 = v38;
      *(_OWORD*)a9 = v38;
      if ((*v36 & 1) != 0 || (v20 | v19) == 0) {
        return 0;
      }
      result = CudaDriverRoutine_6b7b0(a1, 1);
      if ((_DWORD)result == 0) {
        result = (*(__int64 (**)(__int64))(a1 + 23376120))(a1);
        if ((_DWORD)result == 0) {
          result = cuda_driver_86100(a1, a2, &v41_.v41, a4, v35 & 1, v36, a7,
                                     (__int64*)a8, a9);
          if ((_DWORD)result == 0) {
            *a8 = vorrq_s8(v39, *a8);
            v31 = a9[1] | *((_QWORD*)&v30 + 1);
            *a9 |= v30;
            a9[1] = v31;
            if (*a7 == 1) {
              v32 = (__int64*)(a10 + 16LL * a2);
              *v32 = v20 | ~v34;
              v32[1] = v19 | ~v29;
            }
            result = CudaDriverRoutine_6b880(a1);
            if ((_DWORD)result == 0) {
              result = (*(__int64 (**)(__int64))(a1 + 23376120))(a1);
              if ((_DWORD)result == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_85bb0(unsigned int* a1, unsigned int a2, unsigned int a3,
                          unsigned int a4, unsigned __int8 a5, int8x16_t* a6)
{
  unsigned int v6;
  unsigned int* v7;
  int8x16_t* v9;
  int8x16_t* v10;
  int8x16_t* v11;
  unsigned __int32 v12;
  __int64 v13;
  __int64 v16;
  int v17;
  unsigned int* v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int* v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  unsigned int v32;
  __int64 v34;
  struct {
    __int64 v35;
    __int64 v36;
  } v35_;
  int8x16_t v37;
  _BYTE v38[4];
  char v39[4];
  char v40[4];
  char v41[4];
  __int64 v42;
  char v43[4];
  char v44[4];

  v6 = *a1;
  v44[0] = 0;
  v43[0] = 0;
  v42 = 0;
  v41[0] = 0;
  v39[0] = 0;
  v38[0] = 0;
  v34 = 0;
  if (v6 == 0) {
    v7 = a1 + 5843220;
    if (a2 >= a1[5843220]) {
      return 12;
    }
    else if (a3 < a1[5843221] &&
             (v9 = (int8x16_t*)&a1[22820 * a2 + 274], v10 = &v9[89 * a3],
              v12 = LANES128(v10[9]).n128_u32[0], v11 = v10 + 9, v12 != 0)) {
      if (*((_BYTE*)a1 + 5) == 1) {
        v13 = *((_QWORD*)a1 + 3);
        if (v13 != 0) {
          v37 = (__typeof__(v37)){0};
          v35_.v35 = 0;
          v35_.v36 = 0;
          if (a3 > 0x3F) {
            v35_.v36 = 1LL << a3;
          }
          else {
            v35_.v35 = 1LL << a3;
          }
          v16 = LANES128(v11[1]).n128_i64[0];
          v17 = a5 & (*CudaDriverData_14230c8 == 0);
          if (v17 != 1) {
            goto LABEL_21;
          }
          v18 = a1;
          v19 = a2;
          v20 = (*((__int64 (**)(void))a1 + 2922069))();
          if (v20 != 0) {
            return v20;
          }
          v20 = (*((__int64 (**)(unsigned int*, _QWORD, _QWORD, _BYTE*))v7 +
                   460))(v18, v19, a3, v38);
          if (v20 != 0) {
            return v20;
          }
          a1 = v18;
          a2 = v19;
          if ((v38[0] & 1) == 0) {
          LABEL_21:
            v21 = a2;
            v22 = a1;
            v20 = CudaDriverRoutine_19bc20(v16, v13, &v42, 978, v41);
            if (v20 != 0) {
              return v20;
            }
            v20 = CudaDriverRoutine_84dc0((__int64)v22, &v34);
            if (v20 != 0) {
              return v20;
            }
            v23 = v34;
            v24 = cuda_driver_84ec0((__int64)v22, v21, &v35_.v35, a4, 0, v44,
                                    v43, a6, &v37, v34);
            if (v24 != 0) {
              goto LABEL_25;
            }
            v26 = (__int64)v22;
            if (*((_BYTE*)v22 + 5) != 1) {
              v25 = 16;
              goto LABEL_27;
            }
            if (v43[0] == 1) {
              if (v7[594] == 2 && *v7 != 0) {
                v27 = 0;
                do {
                  v24 = (*((__int64 (**)(__int64, _QWORD))v7 + 310))(v26, v27);
                  if (v24 != 0) {
                    goto LABEL_25;
                  }
                  ++v27;
                  v26 = (__int64)v22;
                } while (v27 < *v7);
              }
              v24 = (*((__int64 (**)(__int64, __int64, __int64))v7 + 406))(
                  v26, 1, v23);
              if (v24 != 0) {
                goto LABEL_25;
              }
              if (LANES128(*(v9)).n128_u32[0] == 0) {
                v25 = 10;
                goto LABEL_26;
              }
              v9[5] = vandq_s8(v37, v9[5]);
              v28 = CudaDriverRoutine_6b9d0((__int64)v22);
              v26 = (__int64)v22;
              if (v28 != 0) {
                v25 = v28;
                goto LABEL_27;
              }
            }
            v29 = *(_QWORD*)(v26 + 24);
            if (v29 == 0) {
              v25 = 29;
              goto LABEL_27;
            }
            v30 = LANES128(v11[1]).n128_i64[0];
            if (v17 != 0) {
              v24 = (*(
                  (__int64 (**)(unsigned int*, _QWORD, int8x16_t*, char*))v7 +
                  459))(v22, v21, a6, v39);
              if (v24 != 0) {
                goto LABEL_25;
              }
              if ((v39[0] & 1) != 0) {
              LABEL_44:
                v25 = 41;
                goto LABEL_26;
              }
              v24 = (*((__int64 (**)(unsigned int*, _QWORD, _QWORD, _BYTE*))v7 +
                       460))(v22, v21, a3, v38);
              if (v24 != 0) {
                goto LABEL_25;
              }
              if ((v38[0] & 1) != 0) {
                goto LABEL_44;
              }
            }
            v24 = CudaDriverRoutine_19bcb0(v30, v29, &v42, 962, v40, 0);
            if (v24 != 0) {
              goto LABEL_25;
            }
            if (v40[0] == 1) {
              v31 = *(_DWORD*)(v42 + 64);
              if (v31 == 2 || (v31 & 0x3C0) != 0) {
              LABEL_55:
                v24 = CudaDriverRoutine_85210((__int64)v22, v21, a3,
                                              (__int64*)a6, v23);
                if (v24 == 0) {
                  goto LABEL_56;
                }
              LABEL_25:
                v25 = v24;
              LABEL_26:
                v26 = (__int64)v22;
              LABEL_27:
                CudaDriverRoutine_6b9d0(v26);
                CudaDriverRoutine_12e340(v23);
                return v25;
              }
            }
            else if (v44[0] == 1) {
              goto LABEL_55;
            }
          LABEL_56:
            if (v7[594] == 2 && *v7 != 0) {
              v32 = 0;
              while (1) {
                v24 = (*((__int64 (**)(unsigned int*, _QWORD))v7 + 310))(v22,
                                                                         v32);
                if (v24 != 0) {
                  break;
                }
                if (++v32 >= *v7) {
                  goto LABEL_61;
                }
              }
            }
            else {
            LABEL_61:
              v24 = (*((__int64 (**)(unsigned int*, __int64, __int64))v7 +
                       406))(v22, 1, v23);
            }
            goto LABEL_25;
          }
          return 41;
        }
        else {
          return 29;
        }
      }
      else {
        return 16;
      }
    }
    else {
      return 13;
    }
  }
  return v6;
}

__int64 cuda_driver_85fc0(unsigned int a1, int a2, char a3)
{
  unsigned int* v3;
  __int64 result;
  unsigned int* v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  struct {
    char gap0_[8];
    _BYTE v9[24];
    __int128 v10;
    __int128 v11;
  } v9_;

  v3 = *(unsigned int**)(CudaDriverData_14403e8 + 8LL * a1);
  result = *v3;
  if ((_DWORD)result == 0) {
    v5 = v3 + 5843220;
    if (v3[5843814] == 2) {
      return 0;
    }
    else {
      v6 = *v5;
      if (*v5 != 0) {
        v7 = 0;
        if ((a3 & 1) != 0) {
          while (1) {
            if (a2 == v7) {
              v8 = a2;
              result = (*((__int64 (**)(unsigned int*))v3 + 2921919))(v3);
              if ((_DWORD)result != 0) {
                return result;
              }
              if (v9_.v10 != 0 || v9_.v11 == 0) {
                return 0;
              }
              v6 = *v5;
              a2 = v8;
            }
            ++v7;
            result = 28;
            if (v7 >= v6) {
              return result;
            }
          }
        }
        do {
          result = (*((__int64 (**)(unsigned int*, _QWORD, _BYTE*))v3 +
                      2921919))(v3, v7, v9_.v9);
          if ((_DWORD)result != 0) {
            break;
          }
          if (v9_.v10 != 0) {
            return 0;
          }
          ++v7;
          result = 28;
        } while (v7 < *v5);
      }
      else {
        return 28;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
