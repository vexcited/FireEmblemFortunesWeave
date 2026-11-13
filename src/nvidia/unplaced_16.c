#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BOOL8* nvidia_10f380(_BOOL8* result);
_QWORD* CudaDriverRoutine_122550(_QWORD* result);
_QWORD* CudaDriverRoutine_4d080(_QWORD* result);
__int64* CudaDriverRoutine_d5a10(__int64* result);
__int64 CudaDriverRoutine_101ff0(__int64);
__int64 CudaDriverRoutine_107f60(_QWORD*);
__int64 CudaDriverRoutine_108140(__int64 result, unsigned __int64*);
__int64 CudaDriverRoutine_108300(__int64 result, __int64);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_10a2a0(__int64, __int64, unsigned int*, unsigned int,
                                 __int64, _DWORD*, char*, _DWORD*, _DWORD*,
                                 _DWORD*);
__int64 CudaDriverRoutine_114270(unsigned int);
__int64 CudaDriverRoutine_119540(__int64);
__int64 CudaDriverRoutine_122070(__int64);
__int64 CudaDriverRoutine_123860(__int64*, __int64);
__int64 CudaDriverRoutine_127270(__int64);
__int64 CudaDriverRoutine_12df40(_DWORD*, void (*)(__int64, __int64));
__int64 CudaDriverRoutine_12e060(__int64*, unsigned int, _DWORD*, int,
                                 unsigned int);
__int64 CudaDriverRoutine_12e270(_QWORD*);
__int64 CudaDriverRoutine_12e300();
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_12eb10(__int64, ...);
__int64 CudaDriverRoutine_1309c0(__int64);
__int64 CudaDriverRoutine_131340(__int64);
__int64 CudaDriverRoutine_131400(__int64);
__int64 CudaDriverRoutine_15f20(__int64, unsigned int*);
__int64 CudaDriverRoutine_197480(__int64 result, __int64, unsigned int,
                                 unsigned int*, __int64, unsigned int, _QWORD*,
                                 unsigned int*);
__int64 CudaDriverRoutine_1a0d20(__int64*, __int64, __int64);
__int64 CudaDriverRoutine_1a11d0(__int64 result);
__int64 CudaDriverRoutine_1a2910(__int64);
__int64 CudaDriverRoutine_1a2c70(__int64);
__int64 CudaDriverRoutine_1a40e0(__int64 result);
__int64 CudaDriverRoutine_1d87a0(__int64*);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverRoutine_1dbb80(__int64 result, __int64);
__int64 CudaDriverRoutine_1dc000(__int64);
__int64 CudaDriverRoutine_1e9390(__int64 result);
__int64 CudaDriverRoutine_1ffe30(__int64);
__int64 CudaDriverRoutine_2045e0(_QWORD*);
__int64 CudaDriverRoutine_2077b0(__int64 result);
__int64 CudaDriverRoutine_20a850(__int64, unsigned __int64);
__int64 CudaDriverRoutine_259b50(_DWORD*);
__int64 CudaDriverRoutine_259c00(__int64, _QWORD*);
__int64 CudaDriverRoutine_36e0(__int64, unsigned int*);
__int64 CudaDriverRoutine_3750(unsigned int, char);
__int64 CudaDriverRoutine_4f770(__int64);
__int64 CudaDriverRoutine_4f780(const char*, __int64);
__int64 CudaDriverRoutine_4f850(__int64*);
__int64 CudaDriverRoutine_4f8c0(_QWORD*, _QWORD*);
__int64 CudaDriverRoutine_5f820(__int64 result, _BYTE*);
__int64 CudaDriverRoutine_634b0(__int64, int);
__int64 CudaDriverRoutine_77ce0(int, _DWORD*, char*, __int64*);
__int64 CudaDriverRoutine_78230(int, char*, char, _QWORD*);
__int64 CudaDriverRoutine_8b420(__int64 result, int, __int64, int);
__int64 CudaDriverRoutine_8b5e0(__int64, int, __int64);
__int64 CudaDriverRoutine_8bab0(__int64, __int64, int);
__int64 CudaDriverRoutine_928b0(__int64, _DWORD*, _DWORD*);
__int64 CudaDriverRoutine_92a90(__int64, __int64, __int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_98d00(_QWORD*, int);
__int64 CudaDriverRoutine_99f40(__int64, _DWORD*, int);
__int64 CudaDriverRoutine_bbd70(__int64 result, _QWORD*);
__int64 CudaDriverRoutine_bc6c0(__int64, unsigned int, unsigned int);
__int64 CudaDriverRoutine_bc6c0_alt1(__int64, int,
                                     char) __asm__("CudaDriverRoutine_bc6c0");
__int64 CudaDriverRoutine_bc770(__int64);
__int64 CudaDriverRoutine_d56a0(__int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_e4980(__int64, _DWORD**);
__int64 CudaDriverRoutine_ec740(__int64, __int64, __int64);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_ee330(__int64);
__int64 CudaDriverRoutine_ff020(__int64*, _QWORD*);
__int64 CudaDriverStub_102040(_QWORD);
__int64 CudaDriverStub_102350(__int64);
__int64 CudaDriverStub_102360(_QWORD);
__int64 CudaDriverStub_102370(_QWORD);
__int64 CudaDriverStub_107f90(__int64);
__int64
CudaDriverStub_107f90_alt1(unsigned int*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_107f90_alt2(_QWORD) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_108070(__int64);
__int64
CudaDriverStub_108070_alt1(unsigned int*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_108070_alt2(_QWORD*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_10f430(__int64, __int64);
__int64 CudaDriverStub_10f720(_QWORD);
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_12db70(_QWORD, _QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_12e550(_QWORD);
__int64 CudaDriverStub_1a0ee0(_QWORD, _QWORD);
__int64 CudaDriverStub_1db190(_QWORD);
__int64 CudaDriverStub_1db380(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_57450(_QWORD);
__int64 CudaDriverStub_640d0(__int64, __int64, unsigned __int64);
__int64 CudaDriverStub_78870();
__int64 CudaDriverStub_8b280(_QWORD);
__int64 CudaDriverStub_8e230(_QWORD);
__int64 CudaDriverStub_d2c10();
__int64 cuda_debugger_api_7d040();
__int64 cuda_driver_1017c0();
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_118980(__int64);
__int64 cuda_driver_1226c0(_DWORD*, unsigned int);
__int64 cuda_driver_131480(__int64*);
__int64 cuda_driver_1febe0();
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_4f8e0(__int64, __int64, __int64*);
__int64 cuda_driver_5e820(__int64, unsigned int);
__int64 cuda_driver_772c0(__int64);
__int64 cuda_driver_7d6e0(__int64, char, bool*, const char**);
__int64 cuda_driver_815e0(const char*);
__int64 cuda_driver_helpers_1b7080(__int64 result);
__int64 cuda_driver_misc_helpers_16340(_DWORD*, unsigned int);
__int64 cuda_driver_misc_helpers_788c0();
__int64 cuda_driver_misc_helpers_de3a0();
__int64 cuda_driver_misc_helpers_de3c0(__int64 result);
__int64 cuda_driver_unplaced_6_e4750(__int64, unsigned __int64*, int,
                                     const char*, const char*);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 strcat_plt(__int64, const char*);
__int64 strchr_plt(const char*, int);
__int64 zstd_decompress_223310(__int64 result, __int64);
bool CudaDriverRoutine_1dc850(__int64);
bool CudaDriverRoutine_1dc9c0(__int64);
bool CudaDriverRoutine_99700(_BOOL8 result);
bool CudaDriverRoutine_99720(__int64);
bool CudaDriverRoutine_bbdf0(__int64);
bool CudaDriverRoutine_bbe30(__int64);
bool CudaDriverRoutine_bbe70(__int64);
bool CudaDriverRoutine_d3240(__int64);
bool CudaDriverRoutine_e7cb0(__int64, __int64, unsigned int);
bool CudaDriverRoutine_f1f60(__int64, __int64, char);
bool CudaDriverStub_b9300(__int64);
bool cuda_debugger_api_7cff0();
bool cuda_driver_12ea30(int*);
bool cuda_driver_77230();
bool cuda_driver_predicates_1dc800(__int16);
bool cuda_driver_predicates_9ac80(__int64);
extern _BYTE CudaDriverData_4398[8];
extern _BYTE CudaDriverData_4c38[8];
extern _DWORD* CudaDriverData_14230b8;
extern _DWORD CudaDriverData_14328d4;
extern _QWORD CudaDriverData_1422bb0;
extern _QWORD CudaDriverData_143b960[2];
extern _UNKNOWN* CudaDriverData_1410010;
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_1432140;
extern _UNKNOWN* CudaDriverData_1432188;
extern _UNKNOWN CudaDriverData_14347a8;
extern _UNKNOWN CudaDriverData_1435f21;
extern _UNKNOWN CudaDriverData_1436538;
extern _UNKNOWN CudaDriverData_14395f8;
extern __int128 CudaDriverData_1115230;
extern __int128 CudaDriverData_1115240;
extern __int128 CudaDriverData_1115360;
extern __int128 CudaDriverData_1115380;
extern __int128 CudaDriverData_1115410;
extern __int128 CudaDriverData_1115420;
extern __int128 CudaDriverData_1115470;
extern __int128 CudaDriverData_1115480;
extern __int128 CudaDriverData_11154e0;
extern __int128 CudaDriverData_1115570;
extern __int128 CudaDriverData_1115580;
extern __int128 CudaDriverData_1115590;
extern __int128 CudaDriverData_1115610;
extern __int128 CudaDriverData_1115620;
extern __int128 CudaDriverData_1115630;
extern __int128 CudaDriverData_11156d0;
extern __int128 CudaDriverData_1115800;
extern __int128 CudaDriverData_1115810;
extern __int128 CudaDriverData_1115820;
extern __int128 CudaDriverData_1115920;
extern __int128 CudaDriverData_11159a0;
extern __int128 CudaDriverData_1115a00;
extern __int128 CudaDriverData_1115ae0;
extern __int128 CudaDriverData_1115af0;
extern __int128 CudaDriverData_1115ba0;
extern __int128 CudaDriverData_1115bb0;
extern __int128 CudaDriverData_1115bc0;
extern __int128 CudaDriverData_1115cc0;
extern __int128 CudaDriverData_1115ce0;
extern __int128 CudaDriverData_1115d70;
extern __int128 CudaDriverData_1115d80;
extern __int128 CudaDriverData_1115f70;
extern __int128 CudaDriverData_1116060;
extern __int128 CudaDriverData_1116100;
extern __int128 CudaDriverData_11161d0;
extern __int128 CudaDriverData_1116270;
extern __int128 CudaDriverData_1116280;
extern __int128 CudaDriverData_11162d0;
extern __int128 CudaDriverData_11162e0;
extern __int128 CudaDriverData_1116350;
extern __int64 (**CudaDriverData_1423278[2])();
extern __int64 (**CudaDriverData_1423280)();
extern __int64 (**CudaDriverData_1423288)(int, int, int, int, int, int, int,
                                          int, char);
extern __int64 (*CudaDriverData_1423290[3])();
extern __int64 (*CudaDriverData_1435d50)(__int64);
extern __int64 (*CudaDriverData_1435d58)(int*);
extern __int64 (*CudaDriverData_1435d68)(int*);
extern __int64 (*CudaDriverData_1435d70)(int*, char*);
extern __int64 (*CudaDriverData_1435da0)(__int64);
extern __int64 (*CudaDriverData_1435da8)(int*);
extern __int64 (*CudaDriverData_1435df0)(__int64);
extern __int64 (*CudaDriverData_1435df8)(int*);
extern __int64 (*CudaDriverData_1435e40)(__int64);
extern __int64 (*CudaDriverData_1435e48)(int*);
extern __int64 (*CudaDriverData_1435e90)(long double);
extern __int64 (*CudaDriverData_1435e98)(int*);
extern __int64 (*cuda_driver_misc_helpers_163d0_ptr[24])();
extern __int64 (*cuda_driver_misc_helpers_de250_ptr[])();
extern __int64 CudaDriverData_1435728;
extern __int64 CudaDriverData_1435cb8;
extern __int64 CudaDriverData_1435cc8;
extern __int64 CudaDriverData_1435d28;
extern __int64 CudaDriverData_1435d30;
extern __int64 CudaDriverData_1438b00;
extern __int64 CudaDriverData_1438ec0;
extern __int64 CudaDriverData_1438ec8;
extern __int64 CudaDriverData_143bb18;
extern __int64 CudaDriverData_143bb38;
extern __int64 CudaDriverData_143bb40;
extern __int64 CudaDriverData_143bbd8;
extern __int64 CudaDriverData_143bd38;
extern __int64 CudaDriverData_143bd80;
extern char CudaDriverData_1434ce4;
extern char CudaDriverData_1434ced[2617];
extern char CudaDriverData_1435726;
extern char CudaDriverData_1435727;
extern char CudaDriverData_1435d38;
extern char CudaDriverData_1435f10;
extern char CudaDriverData_1435f18;
extern char CudaDriverData_1435f20;
extern char CudaDriverData_1438c88;
extern char CudaDriverData_1439938;
extern char CudaDriverData_1439939;
extern int CudaDriverData_1434ac0;
extern int CudaDriverData_1435730;
extern int CudaDriverData_1435734;
extern int CudaDriverData_1435f14;
extern int CudaDriverData_1435f1c;
extern int CudaDriverData_1436534;
extern unsigned int CudaDriverData_1131ba8[8];
extern void (*CudaDriverData_1421fd8[27])();
extern void (*CudaDriverData_1421ff0[24])();
extern void (*CudaDriverData_1421ff8[23])();
float CudaDriverRoutine_12e2a0(_QWORD*);
int* cuda_driver_1312a0(int* result);
int fprintf_plt(__int64, const char*, ...);
int snprintf_plt(__int64, unsigned __int64, const char*, ...);
int sprintf_plt(__int64, const char*, ...);
int sscanf_plt(const char*, const char*, ...);
long double CudaDriverRoutine_8bf60();
typedef __int128 CudaDriverAlign_1436508 __attribute__((aligned(8)));
extern CudaDriverAlign_1436508 CudaDriverData_1436508;
typedef __int16 CudaDriverAlign_1436001 __attribute__((aligned(1)));
extern CudaDriverAlign_1436001 CudaDriverData_1436001;
typedef __int64 CudaDriverAlign_1434ce5 __attribute__((aligned(1)));
extern CudaDriverAlign_1434ce5 CudaDriverData_1434ce5;
unsigned __int64* CudaDriverRoutine_4d790(unsigned __int64* result,
                                          unsigned __int64);
unsigned __int64 CudaDriverRoutine_ef740(unsigned __int64 result, __int64,
                                         __int64);
unsigned __int64 strlen_plt(const char*);
void CudaDriverRoutine_12f760();
void CudaDriverRoutine_4198();
void CudaDriverRoutine_419c();
void CudaDriverRoutine_41a0();
void CudaDriverRoutine_41a4();
void CudaDriverRoutine_41b0();
void CudaDriverRoutine_4234();
void CudaDriverRoutine_4340();
void CudaDriverRoutine_4358();
void CudaDriverRoutine_4464();
void CudaDriverRoutine_4710();
void CudaDriverRoutine_4728();
void CudaDriverRoutine_474c();
void CudaDriverRoutine_4780();
void CudaDriverRoutine_4e48();
void CudaDriverRoutine_4e50();
void CudaDriverRoutine_5190();
void CudaDriverRoutine_5194();
void CudaDriverRoutine_71cc();
void CudaDriverRoutine_71d0();
void CudaDriverRoutine_7348();
void CudaDriverRoutine_743c();
void CudaDriverRoutine_7488();
void cuda_driver_ecfc0();
__int64 nvidia_1b0(unsigned __int64 a1);
__int64 nvidia_6d10(__int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, char a9);
__int64 nvidia_16d30(__int64 a1);
__int64 nvidia_1aab0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8, char a9);
__int64 nvidia_1be50(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5);
__int64 nvidia_5bbb0(__int64 a1);
__int64 nvidia_5bbc0(__int64 a1);
__int64 nvidia_5bbd0(__int64 a1);
__int64 nvidia_81310(__int64 a1);
__int64 nvidia_97290(__int64 a1, __int64 a2);
__int64 nvidia_972f0(__int64 a1, __int64 a2);
__int64 nvidia_98650(__int64 a1, char a2);
__int64 nvidia_99e40(__int64 a1);
__int64 nvidia_e1b60();
__int64 nvidia_e4ea0(__int64 a1, int* a2, __int64 a3, _DWORD** a4, char a5,
                     char a6, __int64 a7, __int64 a8, _BYTE* a9);
__int64 nvidia_eeec0(__int64 result, unsigned int* a2, int a3, __int64 a4);
__int64 nvidia_f22e0(unsigned int a1);
__int64 nvidia_f3ee0(unsigned int* a1);
__int64 nvidia_f5760(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                     char a5);
__int64 nvidia_10ef20(__int64 result, __int64 a2);
__int64 nvidia_1134b0(__int64 a1, char a2, __int64 a3);
__int64 nvidia_118090(__int64 a1);
__int64 nvidia_1236a0(_QWORD* a1);
__int64 nvidia_12f5b0(__int64 a1);
__int64 nvidia_12f6a0(__int64 a1);
__int64 nvidia_130a80(_QWORD* a1);
__int64 nvidia_19d940(__int64 a1);
__int64 nvidia_1acac0(__int64 a1, __int64 a2, __int64 a3);
_DWORD* nvidia_1ae490(_DWORD** a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5);
__int64 nvidia_1b6960(__int64 a1);
__int64 nvidia_1c2fb0(__int64 a1);
__int64 nvidia_1c2fc0(__int64 a1);
__int64 nvidia_1c3030(__int64 a1);
__int64 nvidia_1c3040(__int64 a1);
__int64 nvidia_1c3410(__int64 a1, unsigned int a2, unsigned int a3, int a4);
__int64 nvidia_1c80d0(__int64 a1, _QWORD* a2, __int64* a3);
__int64 nvidia_1cbda0(__int64 a1);
__int64 nvidia_1cbdc0(__int64 a1);
__int64 nvidia_1cc8f0(__int64 a1, __int64 a2);
__int64 nvidia_1cdd70(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                      __int64 a5);
__int64 nvidia_1d9f90(__int64 a1);
__int64 nvidia_1da010(__int64 a1);
__int64 nvidia_1e27d0(__int64* a1);
__int64 nvidia_1f76a0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5);
__int64 nvidia_1fd7a0(__int64 a1, __int64* a2, int a3);
__int64 nvidia_215db0(__int64 a1, __int64 a2);
__int64 nvidia_21fad0(__int64 a1);
__int64 nvidia_21faf0(__int64 a1);
__int64 nvidia_240470(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8, char a9);

__int64 nvidia_1b0(unsigned __int64 a1)
{
  if (a1 < (unsigned __int64)cuda_driver_misc_helpers_de250_ptr ||
      a1 >= (unsigned __int64)&CudaDriverData_1410010 || (a1 & 7) != 0) {
    __udf(0x8003u);
  }
  return ((__typeof__((*(__int64 (**)(void))a1)()) (*)())(
      *(__int64 (**)(void))a1))(a1);
}

__int64 nvidia_6d10(__int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, char a9)
{
  _QWORD* v9;
  __int64 v10;
  _QWORD* v16;
  __int64 v17;
  bool v18;
  _DWORD* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  void* v25;
  char v26;
  char v27;
  char v28;
  char v29;
  unsigned int v30;
  int v31;
  int v32;
  unsigned __int8* v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  char v42;
  __int64 v43;
  bool v44;
  __int64 result;
  _QWORD* v48;
  _QWORD* v49;
  _DWORD* v51;
  __int64 v52;
  struct {
    unsigned int v53;
    unsigned int v54;
  } v53_;
  struct {
    unsigned int v55;
    char gap76_[4];
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    char v61;
    char v62;
    char gap122_[6];
    __int64 v63;
    char gap136_[8];
    char v64;
    char gap145_[7];
    __int64* v65;
  } v55_;
  __int64 v66;

  v10 = *(_QWORD*)(a8 + 8);
  v9 = *(_QWORD**)(a8 + 16);
  v16 = *(_QWORD**)(a8 + 136);
  v17 = *(_QWORD*)(a3 + 64);
  v66 = *a1;
  v18 = CudaDriverRoutine_bbdf0(a4);
  v19 = v9 + 64;
  v48 = v9 + 64;
  if (!v18) {
    v19 = nullptr;
  }
  v51 = v19;
  if ((a9 & 2) != 0 || CudaDriverStub_b9300(a4)) {
    *(_DWORD*)(v10 + 100) = *(_DWORD*)(v10 + 100) & 0xDB8FFFFF | 0x4000000;
    *(_DWORD*)(v10 + 104) = CudaDriverStub_8e230(v16);
    if (*(_BYTE*)(a8 + 209) == 0) {
      goto LABEL_8;
    }
  }
  else {
    *(_DWORD*)(v10 + 100) &= ~0x20000000u;
    *(_DWORD*)(v10 + 104) = CudaDriverRoutine_1ffe30((__int64)v16);
    if (*(_BYTE*)(a8 + 209) == 0) {
      goto LABEL_8;
    }
  }
  v20 = *(_QWORD*)(a8 + 8);
  v21 = *(_DWORD*)(v20 + 64) | 0x11;
  *(_DWORD*)(v20 + 60) = *(_QWORD*)(v16[9] + 8LL) >> 8;
  *(_DWORD*)(v20 + 64) = v21;
  *(_DWORD*)(*(_QWORD*)(a8 + 8) + 64LL) =
      *(_DWORD*)(*(_QWORD*)(a8 + 8) + 64LL) & 0xFFFFFFF1 | 8;
  if (*(_BYTE*)(a8 + 210) != 0) {
    *(_DWORD*)(v10 + 16) |= 0x1000u;
  }
LABEL_8:
  v22 = CudaDriverStub_1223e0(v16[3]);
  *(_DWORD*)(v10 + 96) = v22;
  *(_BYTE*)(v10 + 100) = BYTE4(v22);
  if (CudaDriverStub_b9300(a4)) {
    v9[129] = CudaDriverRoutine_2045e0((_QWORD*)v16[3]);
    v9[153] = v16[1] + 1232LL;
    v9[156] = v16[1] + 1224LL;
  }
  v52 = a5;
  v49 = v9;
  if (a6 != 0 && (*(_BYTE*)(a6 + 60) & 1) != 0) {
    v23 = CudaDriverStub_1223e0(*(_QWORD*)(a6 + 40));
    v24 = *(_DWORD*)(v10 + 116);
    *(_DWORD*)(v10 + 120) = 0;
    *(_DWORD*)(v10 + 112) = v23;
    *(_DWORD*)(v10 + 116) = v24 & 0x1FFFFF00 | BYTE4(v23) | 0x800000;
    CudaDriverRoutine_2077b0(a6);
  }
  v25 = CudaDriverData_1422118;
  if (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118 + 3) !=
      0) {
    v26 = CudaDriverRoutine_3750(*(_DWORD*)(v10 + 612), *(_BYTE*)(a5 + 1228));
    v27 = CudaDriverRoutine_3750(*(_DWORD*)(v10 + 620), *(_BYTE*)(a5 + 1228));
    v28 = CudaDriverRoutine_3750(*(_DWORD*)(v10 + 616), *(_BYTE*)(v52 + 1228));
    if (*((_BYTE*)((_UNKNOWN*)0x1D40LL) + (_QWORD)v25) != 0) {
      v55_.v55 = *(_DWORD*)((char*)((_UNKNOWN*)0x1D44LL) + (_QWORD)v25);
      CudaDriverRoutine_36e0(v17, &v55_.v55);
      v26 = CudaDriverRoutine_3750(v55_.v55, *(_BYTE*)(v52 + 1228));
      v27 = CudaDriverRoutine_3750(v55_.v55, *(_BYTE*)(v52 + 1228));
      v28 = CudaDriverRoutine_3750(v55_.v55, *(_BYTE*)(v52 + 1228));
    }
    v29 = v28;
    *(_DWORD*)(v10 + 68) = *(_DWORD*)(v10 + 68) & 0x8103FFFF |
                           ((v27 & 0x3F) << 25) | ((v26 & 0x3F) << 18);
    *(_DWORD*)(v10 + 80) =
        *(_DWORD*)(v10 + 80) & 0xFF81FFFF | ((v28 & 0x3F) << 17);
    if (CudaDriverRoutine_bbdf0(a4)) {
      v51[17] =
          ((v27 & 0x3F) << 25) | ((v26 & 0x3F) << 18) | v51[17] & 0x8103FFFF;
      v51[20] = v51[20] & 0xFF81FFFF | ((v29 & 0x3F) << 17);
    }
  }
  v30 = *(unsigned __int8*)(a8 + 204);
  v31 = *(_DWORD*)(v10 + 16);
  *(_DWORD*)(v10 + 16) =
      v31 & 0xFFFFFFC0 |
      CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), v30) & 0x3F;
  if (CudaDriverRoutine_bbdf0(a4)) {
    v32 = v51[4];
    v51[4] =
        v32 & 0xFFFFFFC0 |
        (CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), v30) - 1) & 0x3F;
  }
  if (CudaDriverRoutine_99720(a3)) {
    v33 = (unsigned __int8*)CudaDriverRoutine_119540(v52);
    v34 = *(_DWORD*)(v10 + 224) & 0xFFFF00FF | (*v33 << 8);
    *(_DWORD*)(v10 + 224) = v34;
    v35 = v34 & 0xFFFFFF00 | v33[1];
    *(_DWORD*)(v10 + 224) = v35;
    *(_BYTE*)(v10 + 73) = v33[2];
    v36 = *(_DWORD*)(v10 + 64) & 0x807FFFFF | (v33[3] << 23);
    *(_DWORD*)(v10 + 64) = v36;
    v37 = v35 & 0xFFFFFF | (v33[4] << 24);
    *(_DWORD*)(v10 + 224) = v37;
    *(_DWORD*)(v10 + 224) = v37 & 0xFF00FFFF | (v33[5] << 16);
    *(_DWORD*)(v10 + 64) =
        v36 & 0x7FFFFFFF | (*(unsigned __int8*)(v52 + 80) << 31);
  }
  v38 = *(unsigned __int16*)(*(_QWORD*)(a3 + 64) + 17281LL);
  if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_1432188) != 0) {
    v39 = v38 >> 8;
    v55_.v55 = 88;
    v40 = *(_QWORD*)(a4 + 32);
    v41 = *(_QWORD*)(v40 + 24);
    v55_.v61 = v38;
    v42 = *(_BYTE*)(a8 + 205);
    v55_.v58 = a4;
    v55_.v59 = v10;
    v55_.v62 = v39;
    v55_.v63 = a8;
    v55_.v56 = v41;
    v55_.v57 = v40;
    v55_.v64 = v42;
    v55_.v65 = &v66;
    v55_.v60 = a7;
    cuda_driver_20b420(0xBu, 1u, (__int64)&v55_.v55);
  }
  if (*(_BYTE*)(*(_QWORD*)(a3 + 16104) + 3096LL) == 0 ||
      *(_BYTE*)(a8 + 196) == 0 || *(_BYTE*)(a8 + 197) != 0) {
    if (*(_QWORD*)(a4 + 832) != 0) {
      (*(void (**)(unsigned int*, __int64, _QWORD, __int64, __int64, __int64))(
          *(_QWORD*)(a3 + 64) + 19248LL))(&v55_.v55, a3, v16[1], v10, 228, 2);
      v53_.v53 = 12;
      v53_.v54 = 84;
      v43 = CudaDriverRoutine_197480(v66, a2, 1u, &v53_.v54, (__int64)&v55_.v55,
                                     0x108u, (_QWORD*)(a4 + 832), &v53_.v53);
    }
    else {
      v43 =
          (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64, __int64))(
              *(_QWORD*)(a3 + 64) + 19248LL))(v66, a3, v16[1], v10, 228, 2);
    }
    v66 = v43;
  }
  if (CudaDriverRoutine_bbdf0(a4)) {
    v66 = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64,
                          __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
        v66, a3, v16[1] + 512LL, v48, 228, 2);
  }
  v44 = CudaDriverStub_b9300(a4);
  result = v66;
  if (v44) {
    result = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64,
                             __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
        v66, a3, v16[1] + 1024LL, v49 + 128, 1024, 2);
  }
  *a1 = result;
  return result;
}

__int64 nvidia_16d30(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned int v2;
  __int64 v3;
  void* v4;
  int v5;
  int64x2_t v6;
  __int16 v7;
  int v8;
  char v9;
  unsigned int v10;
  int v11;
  int v12;
  char v13;
  char v14;
  char v15;
  unsigned int v16;
  char v17;
  int v18;
  int v19;
  unsigned __int64 v20;
  int v21;
  __int16 v22;
  int v23;
  int v24;
  char v25;
  char v26;
  __int128 v27;
  int v28;
  int v29;
  char v30;
  unsigned __int64 v31;
  unsigned int v32;
  __int64 result;
  unsigned int v34;
  unsigned int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  char v43;

  *(_BYTE*)(a1 + 3744) = 0;
  v2 = 0;
  *(_DWORD*)(a1 + 4164) = 0x10000;
  *(_DWORD*)(a1 + 3736) = 2;
  *(_OWORD*)(a1 + 3756) = CudaDriverData_1115480;
  *(_OWORD*)(a1 + 3788) = CudaDriverData_1115800;
  v3 = a1 + 16836;
  *(_OWORD*)(a1 + 3772) = CudaDriverData_1115f70;
  *(_OWORD*)(a1 + 3804) = CudaDriverData_1115ae0;
  *(_OWORD*)(a1 + 3820) = CudaDriverData_1115810;
  *(_OWORD*)(a1 + 3836) = CudaDriverData_11156d0;
  *(_OWORD*)(a1 + 3852) = CudaDriverData_1115620;
  *(_OWORD*)(a1 + 3868) = CudaDriverData_1115570;
  *(_OWORD*)(a1 + 4148) = CudaDriverData_1116280;
  *(_OWORD*)(a1 + 3888) = CudaDriverData_1115230;
  *(_OWORD*)(a1 + 3904) = CudaDriverData_1115410;
  *(_OWORD*)(a1 + 3920) = CudaDriverData_1115ba0;
  *(_OWORD*)(a1 + 3936) = CudaDriverData_1115820;
  *(_OWORD*)(a1 + 3952) = CudaDriverData_1115580;
  *(_OWORD*)(a1 + 3968) = CudaDriverData_1116350;
  *(_OWORD*)(a1 + 3984) = CudaDriverData_1115d70;
  *(_OWORD*)(a1 + 4080) = CudaDriverData_1115240;
  *(_OWORD*)(a1 + 4000) = CudaDriverData_1115920;
  *(_OWORD*)(a1 + 4016) = CudaDriverData_1115590;
  *(_OWORD*)(a1 + 4032) = CudaDriverData_1115470;
  *(_OWORD*)(a1 + 4048) = CudaDriverData_11161d0;
  *(_OWORD*)(a1 + 4096) = CudaDriverData_1115d80;
  *(_OWORD*)(a1 + 4132) = CudaDriverData_1115bb0;
  *(_OWORD*)(a1 + 4064) = CudaDriverData_1115630;
  *(_QWORD*)(a1 + 4168) = 0x200000004LL;
  *(_QWORD*)(a1 + 4288) = 0x10000000000LL;
  *(_OWORD*)(a1 + 4192) = CudaDriverData_1116060;
  v4 = CudaDriverData_1422118;
  if ((*(_WORD*)((_BYTE*)((_UNKNOWN*)0x1884LL) +
                 (_QWORD)CudaDriverData_1422118) &
       1) != 0) {
    v5 = 128;
  }
  else {
    v5 = 256;
  }
  *(_DWORD*)(a1 + 4208) = v5;
  *(_QWORD*)(a1 + 17120) = 0x427A000000000010LL;
  *(_QWORD*)(a1 + 17128) = 0x1000000;
  *(_QWORD*)(a1 + 4216) = 0x8000000100LL;
  v6 = vdupq_n_s64(0x1000000u);
  v7 = *(_WORD*)(a1 + 16848);
  *(int64x2_t*)(a1 + 17136) = v6;
  *(int64x2_t*)(a1 + 17152) = v6;
  if ((v7 & 0x80) == 0) {
    PSEUDO_LOW_LANE128(v6, n128_u32, *(_DWORD*)(a1 + 4116));
    v2 = (unsigned int)((double)LANES128(v6).n128_u64[0] *
                        0x1.f400000000000p+5 / 0x1.9000000000000p+6);
  }
  *(_DWORD*)(a1 + 4120) = v2;
  *(_DWORD*)(a1 + 14764) = 2;
  *(_DWORD*)v3 = 0;
  *(_OWORD*)(a1 + 3384) = CudaDriverData_1115420;
  *(_OWORD*)(a1 + 3400) = CudaDriverData_1115af0;
  *(_DWORD*)(a1 + 14472) = 8;
  *(_WORD*)(a1 + 17080) = 257;
  *(_OWORD*)(a1 + 3416) = CudaDriverData_11159a0;
  *(_OWORD*)(a1 + 3432) = CudaDriverData_1115380;
  v8 = *(_DWORD*)(a1 + 16976);
  *(_OWORD*)(a1 + 3448) = CudaDriverData_1115bc0;
  *(_QWORD*)(a1 + 4224) = 0x7FFF00000000080LL;
  *(_OWORD*)(a1 + 11732) = CudaDriverData_1115a00;
  *(_OWORD*)(a1 + 11748) = CudaDriverData_1116270;
  *(_OWORD*)(a1 + 11764) = CudaDriverData_1116100;
  *(_OWORD*)(a1 + 11780) = CudaDriverData_1115610;
  *(_OWORD*)(a1 + 11700) = CudaDriverData_1115cc0;
  *(_OWORD*)(a1 + 11716) = CudaDriverData_1115360;
  v9 = *(_BYTE*)(a1 + 16856);
  *(_BYTE*)(a1 + 16840) = 1;
  v10 = v8 & 0xFFFFC412;
  *(_OWORD*)(a1 + 4368) = CudaDriverData_11162d0;
  *(_BYTE*)(a1 + 16856) = v9 | 1;
  v11 = *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v4);
  if (v11 != 0) {
    if (v11 == 1) {
      v12 = v10 | 0x3A2C;
    }
    else {
      v12 = v10 | 0x382C;
      *(_DWORD*)(a1 + 16976) = v12;
    }
  }
  else {
    v12 = v10 | 0x3B6C;
  }
  v13 = *(_BYTE*)(a1 + 16996);
  v14 = v13 | 6;
  v15 = v13 & 0xF9 | 2;
  if ((*(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 + (_QWORD)v4) & 0x1000) == 0) {
    v15 = v14;
  }
  v16 = (*(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 + (_QWORD)v4) & 0x1000) == 0;
  v17 = *(_BYTE*)(a1 + 17015);
  *(_BYTE*)(a1 + 16996) = v15;
  v18 = *((_BYTE*)((_UNKNOWN*)0x1884LL) + (_QWORD)v4 + 3) & 1;
  *(_BYTE*)(a1 + 17015) =
      v17 & 0xFE | *((_BYTE*)((_UNKNOWN*)0x1884LL) + (_QWORD)v4 + 3) & 1;
  v19 = *(_DWORD*)(a1 + 3768);
  v20 = LANES64_OF(vbsl_s8(vcltz_s32(vshl_n_s32(vdup_n_s32(v16), 0x1Fu)),
                           COERCE_AS(int8x8_t, 0x7F00000002LL),
                           COERCE_AS(int8x8_t, 1LL)))
            .n64_u64[0];
  v21 = *((unsigned __int8*)((_UNKNOWN*)0x1878LL) + (_QWORD)v4);
  *(_BYTE*)(a1 + 17014) = 0;
  *(_QWORD*)(a1 + 17000) = v20;
  *(_BYTE*)(a1 + 17013) = v21 == 0;
  *(_DWORD*)(a1 + 17024) = *(_DWORD*)(a1 + 3756);
  *(_DWORD*)(a1 + 17028) = v19;
  *(_DWORD*)(a1 + 17016) = 32;
  if ((*((_BYTE*)((_UNKNOWN*)0x1870LL) + (_QWORD)v4) & 1) != 0 &&
      *(_DWORD*)(a1 + 21864) != 4) {
    v22 = *(_WORD*)(a1 + 16848);
  }
  else {
    v22 = *(_WORD*)(a1 + 16848) | 8;
  }
  *(_BYTE*)(a1 + 17044) = 0;
  *(_BYTE*)(a1 + 17082) = 0;
  *(_WORD*)(a1 + 17060) = 0;
  *(_DWORD*)(a1 + 17056) = 0;
  *(_WORD*)(a1 + 16848) = v22 | 0x10;
  *(_DWORD*)(a1 + 17072) = 2048;
  if (v18 != 0) {
    v23 = 8;
  }
  else {
    v23 = 2;
  }
  *(_BYTE*)(a1 + 17062) = 1;
  *(_DWORD*)(a1 + 17020) = v23;
  *(_QWORD*)(a1 + 17036) = 0x2000000000LL;
  *(_DWORD*)(a1 + 17064) = 24;
  *(_WORD*)(a1 + 17098) = 257;
  *(_DWORD*)(a1 + 16976) = v12 | 0x4010;
  *(_QWORD*)(a1 + 17104) = 0x8000000270LL;
  v24 = *(_DWORD*)((char*)&CudaDriverRoutine_4464 + (_QWORD)v4);
  *(_DWORD*)(a1 + 3164) = 2;
  v25 = *(_BYTE*)(a1 + 17280);
  *(_BYTE*)(a1 + 17117) = 1;
  *(_BYTE*)(a1 + 17332) = 1;
  *(_QWORD*)(a1 + 17320) = 48;
  *(_OWORD*)(a1 + 17168) = CudaDriverData_11154e0;
  v26 = *(_BYTE*)(a1 + 17272);
  *(_DWORD*)(a1 + 17112) = v24;
  *(_BYTE*)(a1 + 17280) = v25 & 0xFE;
  *(_OWORD*)(a1 + 17184) = CudaDriverData_11162e0;
  *(_QWORD*)&v27 = 0x1000000010LL;
  *((_QWORD*)&v27 + 1) = 0x1000000010LL;
  *(_BYTE*)(a1 + 17272) = v26 & 0xFD;
  *(_OWORD*)(a1 + 4248) = v27;
  *(_DWORD*)(a1 + 4264) = 4;
  *(_WORD*)(a1 + 17281) = 1026;
  *(_DWORD*)(a1 + 14844) = cuda_driver_misc_helpers_16340((_DWORD*)a1, 0);
  *(_DWORD*)(a1 + 14848) = cuda_driver_misc_helpers_16340((_DWORD*)a1, 1u);
  *(_DWORD*)(a1 + 14852) = cuda_driver_misc_helpers_16340((_DWORD*)a1, 2u);
  v28 = cuda_driver_misc_helpers_16340((_DWORD*)a1, 3u);
  v29 = *(_DWORD*)(a1 + 3148);
  *(_DWORD*)(a1 + 14856) = v28;
  if ((unsigned int)(v29 - 45) <= 6) {
    *(_DWORD*)(a1 + 14472) = 3;
    *(_DWORD*)(a1 + 3756) = 48;
    *(_BYTE*)(v3 + 280) = 1;
    *(_DWORD*)(a1 + 3396) = 51125;
    *(_DWORD*)(a1 + 3768) = 16;
    *(_DWORD*)(a1 + 4152) = 102400;
    v30 = *(_BYTE*)(v3 + 436);
    *(_QWORD*)(a1 + 3384) = 0xC7B50000C7C0LL;
    HIDWORD(v31) = 6;
    *(_BYTE*)(v3 + 436) = v30 | 2;
    *(_QWORD*)(a1 + 3160) = 0x600000008LL;
    *(_DWORD*)(v3 + 288) = 1116307456;
    if ((*(_BYTE*)(v3 + 12) & 0x80) != 0) {
      v32 = 0;
    }
    else {
      {
        __typeof__(v31) z_ = (__typeof__(v31)){0};
        LODWORD(z_) = *(_DWORD*)(a1 + 4116);
        v31 = z_;
      }
      v32 = (unsigned int)((double)v31 * 0x1.1300000000000p+6 /
                           0x1.9000000000000p+6);
    }
    *(_DWORD*)(a1 + 4120) = v32;
    *(_BYTE*)(v3 + 444) &= ~1u;
    *(_WORD*)(v3 + 445) = 3;
    *(_QWORD*)(a1 + 17320) = 48;
  }
  result = 100;
  if (v29 > 47) {
    if (v29 > 49) {
      if (v29 != 50) {
        if (v29 != 51) {
          return result;
        }
        v41 = 0;
        *(_QWORD*)(a1 + 3488) = 0;
        *(_QWORD*)(a1 + 3504) = 0;
        *(_QWORD*)(a1 + 3496) = 0;
        *(_DWORD*)(a1 + 3724) = 6;
        *(_DWORD*)(a1 + 14472) = 2;
        *(_DWORD*)(a1 + 4172) = 1;
        *(_DWORD*)(a1 + 4180) = 1;
        *(_DWORD*)v3 = 1;
        *(_DWORD*)(a1 + 3732) = 6 * *(int*)(a1 + 3736);
        *(_QWORD*)(a1 + 3480) = 0x600000001LL;
        goto LABEL_48;
      }
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v36 = 0;
      *(_DWORD*)(a1 + 4172) = 1;
      *(_DWORD*)v3 = 1;
      v35 = 8;
      *(_DWORD*)(a1 + 3724) = 8;
      *(_DWORD*)(a1 + 4152) = 167936;
      v34 = 2;
      *(_DWORD*)(a1 + 3480) = 2;
      *(_DWORD*)(a1 + 4180) = 2;
      *(_DWORD*)(a1 + 14472) = 2;
    }
    else if (v29 == 48) {
      v34 = 3;
      v35 = 15;
      v38 = 0;
      v39 = 0;
      v36 = 0;
      v37 = 1;
      *(_DWORD*)(a1 + 3480) = 3;
      *(_DWORD*)(a1 + 3724) = 15;
      *(_DWORD*)(a1 + 4180) = 3;
    }
    else {
      v34 = 2;
      v35 = 10;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v36 = 0;
      *(_DWORD*)(a1 + 3480) = 2;
      *(_DWORD*)(a1 + 3724) = 10;
      *(_DWORD*)(a1 + 4180) = 2;
    }
  }
  else if (v29 > 45) {
    v34 = 6;
    if (v29 == 46) {
      v35 = 30;
      v40 = 5;
      v39 = 0;
      v36 = 0;
    }
    else {
      v35 = 24;
      v39 = 0;
      v36 = 0;
      v40 = 4;
    }
    *(_DWORD*)(a1 + 3480) = 6;
    *(_DWORD*)(a1 + 3724) = v35;
    *(_DWORD*)(a1 + 4180) = v40;
    v37 = 1;
    v38 = 1;
  }
  else if (v29 == 43) {
    v34 = 8;
    v35 = 64;
    v37 = 1;
    *(_DWORD*)(a1 + 4180) = 12;
    v38 = 1;
    v39 = 1;
    v36 = 1;
    *(_DWORD*)(a1 + 3480) = 8;
    *(_DWORD*)(a1 + 3724) = 64;
    *(_BYTE*)(v3 + 208) = 1;
    *(_DWORD*)(v3 + 212) = 16;
  }
  else {
    if (v29 != 45) {
      return result;
    }
    v34 = 7;
    v35 = 42;
    v36 = 0;
    v37 = 1;
    *(_DWORD*)(a1 + 3480) = 7;
    *(_DWORD*)(a1 + 3724) = 42;
    *(_DWORD*)(a1 + 4180) = 6;
    v38 = 1;
    v39 = 1;
  }
  v41 = v35 / v34;
  *(_DWORD*)(a1 + 3732) = *(int*)(a1 + 3736) * v35;
  *(_DWORD*)(a1 + 3484) = v41;
  *(_DWORD*)(a1 + 3488) = v41;
  if (v37 != 0) {
    *(_DWORD*)(a1 + 3492) = v41;
    if ((v38 & 1) == 0) {
      goto LABEL_45;
    }
  }
  else {
    *(_DWORD*)(a1 + 3492) = 0;
    if (v38 == 0) {
    LABEL_45:
      *(_DWORD*)(a1 + 3504) = 0;
      *(_QWORD*)(a1 + 3496) = 0;
      if (v39 != 0) {
        goto LABEL_46;
      }
    LABEL_58:
      *(_DWORD*)(a1 + 3508) = 0;
      if (v36 != 0) {
        goto LABEL_48;
      }
      goto LABEL_47;
    }
  }
  *(_DWORD*)(a1 + 3496) = v41;
  *(_DWORD*)(a1 + 3500) = v41;
  *(_DWORD*)(a1 + 3504) = v41;
  if ((v39 & 1) == 0) {
    goto LABEL_58;
  }
LABEL_46:
  *(_DWORD*)(a1 + 3508) = v41;
  if ((v36 & 1) == 0) {
  LABEL_47:
    v41 = 0;
  }
LABEL_48:
  *(_DWORD*)(a1 + 3512) = v41;
  *(_OWORD*)(a1 + 3516) = (__typeof__(*(_OWORD*)(a1 + 3516))){0};
  *(_OWORD*)(a1 + 3532) = (__typeof__(*(_OWORD*)(a1 + 3532))){0};
  if ((*((_BYTE*)&CudaDriverRoutine_419c + (_QWORD)v4) & 1) != 0) {
    *(_DWORD*)(a1 + 4148) =
        *(_DWORD*)((char*)&CudaDriverRoutine_41a0 + (_QWORD)v4);
  }
  v42 = *(_DWORD*)((char*)&CudaDriverRoutine_41a4 + (_QWORD)v4);
  if (v42 != 0) {
    *(_DWORD*)(a1 + 4160) = v42;
  }
  result = 0;
  *(_DWORD*)(a1 + 3884) = *(int*)(a1 + 4152) - *(int*)(a1 + 4148);
  *(_DWORD*)(a1 + 14752) = 0x200000;
  *(_DWORD*)(v3 + 140) |= 0x18000u;
  *(__int64 (**)(void))(a1 + 18360) = cuda_driver_misc_helpers_163d0_ptr[0];
  *(_BYTE*)(v3 + 152) |= 0x18u;
  v43 = *(_BYTE*)(v3 + 160) & 0xFE;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v4) == 0) {
    ++v43;
  }
  *(_BYTE*)(v3 + 160) = v43;
  *(_QWORD*)(a1 + 4280) = 0x2000000000000LL;
  *(_BYTE*)(v3 + 492) = 1;
  return result;
}

__int64 nvidia_1aab0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8, char a9)
{
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v16;
  _DWORD* v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  void* v24;
  char v25;
  int v26;
  char v27;
  char v28;
  unsigned int v29;
  int v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  char v36;
  _QWORD* v37;
  __int64 v38;
  _DWORD* v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  char v45;
  char v46;
  char v47;
  unsigned int v48;
  int v49;
  int v50;
  unsigned __int8* v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  unsigned int v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  char v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  bool v68;
  __int64 result;
  _DWORD* v70;
  _QWORD* v73;
  _QWORD* v74;
  struct {
    unsigned int v77;
    unsigned int v78;
  } v77_;
  struct {
    unsigned int v79;
    char gap76_[4];
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    char v85;
    char v86;
    char gap122_[6];
    __int64 v87;
    char gap136_[8];
    char v88;
    char gap145_[7];
    __int64* v89;
  } v79_;
  __int64 v90[2];

  v9 = *(_QWORD*)(a3 + 64);
  v11 = *(_QWORD*)(a8 + 8);
  v10 = *(_QWORD**)(a8 + 16);
  v16 = *(_QWORD**)(a8 + 136);
  v74 = v10;
  v73 = v10 + 64;
  if (*(_DWORD*)(v9 + 3384) == 50880) {
    v90[0] = *a1;
    if (CudaDriverRoutine_bbdf0(a4)) {
      v17 = v10 + 64;
    }
    else {
      v17 = nullptr;
    }
    v70 = v17;
    if ((a9 & 2) != 0 || CudaDriverStub_b9300(a4)) {
      *(_DWORD*)(v11 + 96) = *(_DWORD*)(v11 + 96) & 0xFB8FFFFF | 0x4000000;
      *(_DWORD*)(v11 + 100) = CudaDriverStub_8e230(v16);
      if (*(_BYTE*)(a8 + 209) == 0) {
        goto LABEL_10;
      }
    }
    else {
      *(_DWORD*)(v11 + 100) = CudaDriverRoutine_1ffe30((__int64)v16);
      if (*(_BYTE*)(a8 + 209) == 0) {
        goto LABEL_10;
      }
    }
    v18 = *(_QWORD*)(a8 + 8);
    v19 = *(_DWORD*)(v18 + 16);
    *(_DWORD*)(v18 + 60) = *(_QWORD*)(v16[9] + 8LL) >> 8;
    *(_DWORD*)(v18 + 16) = v19 | 0x22000;
    *(_DWORD*)(*(_QWORD*)(a8 + 8) + 16LL) =
        *(_DWORD*)(*(_QWORD*)(a8 + 8) + 16LL) & 0xFFFE3FFF | 0x10000;
    if (*(_BYTE*)(a8 + 210) != 0) {
      *(_DWORD*)(v11 + 16) |= 0x1000u;
    }
  LABEL_10:
    v20 = CudaDriverStub_1223e0(v16[3]);
    *(_DWORD*)(v11 + 92) = v20;
    *(_BYTE*)(v11 + 96) = BYTE4(v20);
    if (CudaDriverStub_b9300(a4)) {
      v10[129] = CudaDriverRoutine_2045e0((_QWORD*)v16[3]);
      v10[153] = v16[1] + 1232LL;
      v10[156] = v16[1] + 1224LL;
    }
    if (a6 != 0 && (*(_BYTE*)(a6 + 60) & 1) != 0) {
      v21 = CudaDriverStub_1223e0(*(_QWORD*)(a6 + 40));
      v22 = *(_DWORD*)(v11 + 16);
      *(_DWORD*)(v11 + 112) = 0;
      *(_DWORD*)(v11 + 16) = v22 | 0x800;
      v23 = *(_DWORD*)(v11 + 108) & 0x7FFFFF00 | BYTE4(v21);
      *(_DWORD*)(v11 + 104) = v21;
      *(_DWORD*)(v11 + 108) = v23;
      CudaDriverRoutine_2077b0(a6);
    }
    v24 = CudaDriverData_1422118;
    if (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118 +
          3) != 0) {
      v25 = CudaDriverRoutine_3750(*(_DWORD*)(v11 + 612), *(_BYTE*)(a5 + 1228));
      v26 = CudaDriverRoutine_3750(*(_DWORD*)(v11 + 620), *(_BYTE*)(a5 + 1228));
      v27 = CudaDriverRoutine_3750(*(_DWORD*)(v11 + 616), *(_BYTE*)(a5 + 1228));
      if (*((_BYTE*)((_UNKNOWN*)0x1D40LL) + (_QWORD)v24) != 0) {
        v79_.v79 = *(_DWORD*)((char*)((_UNKNOWN*)0x1D44LL) + (_QWORD)v24);
        CudaDriverRoutine_15f20(v9, &v79_.v79);
        v25 = CudaDriverRoutine_3750(v79_.v79, *(_BYTE*)(a5 + 1228));
        v26 = CudaDriverRoutine_3750(v79_.v79, *(_BYTE*)(a5 + 1228));
        v27 = CudaDriverRoutine_3750(v79_.v79, *(_BYTE*)(a5 + 1228));
      }
      v28 = v27;
      *(_DWORD*)(v11 + 68) = *(_DWORD*)(v11 + 68) & 0x3FFFF |
                             ((unsigned __int8)v26 << 25) |
                             ((v25 & 0x7F) << 18);
      *(_DWORD*)(v11 + 80) =
          *(_DWORD*)(v11 + 80) & 0xFF01FFFF | ((v27 & 0x7F) << 17);
      if (CudaDriverRoutine_bbdf0(a4)) {
        v70[17] = (v26 << 25) | ((v25 & 0x7F) << 18) | v70[17] & 0x3FFFF;
        v70[20] = v70[20] & 0xFF01FFFF | ((v28 & 0x7F) << 17);
      }
    }
    v29 = *(unsigned __int8*)(a8 + 204);
    v30 = *(_DWORD*)(v11 + 16);
    *(_DWORD*)(v11 + 16) =
        v30 & 0xFFFFFFC0 |
        CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), v29) & 0x3F;
    if (CudaDriverRoutine_bbdf0(a4)) {
      v31 = v70[4];
      v70[4] =
          v31 & 0xFFFFFFC0 |
          (CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), v29) - 1) & 0x3F;
    }
    v32 = *(unsigned __int16*)(*(_QWORD*)(a3 + 64) + 17281LL);
    if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_1432188) != 0) {
      v33 = v32 >> 8;
      v79_.v79 = 88;
      v34 = *(_QWORD*)(a4 + 32);
      v35 = *(_QWORD*)(v34 + 24);
      v79_.v85 = v32;
      v36 = *(_BYTE*)(a8 + 205);
      v79_.v82 = a4;
      v79_.v83 = v11;
      v79_.v86 = v33;
      v79_.v87 = a8;
      v79_.v80 = v35;
      v79_.v81 = v34;
      v79_.v88 = v36;
      v79_.v89 = v90;
      v79_.v84 = a7;
      cuda_driver_20b420(0xBu, 1u, (__int64)&v79_.v79);
    }
    v37 = v74;
    if (*(_BYTE*)(*(_QWORD*)(a3 + 16104) + 3096LL) == 0 ||
        *(_BYTE*)(a8 + 196) == 0 || *(_BYTE*)(a8 + 197) != 0) {
      if (*(_QWORD*)(a4 + 832) != 0) {
        (*(void (**)(unsigned int*, __int64, _QWORD, __int64, __int64,
                     __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
            &v79_.v79, a3, v16[1], v11, 200, 2);
        v77_.v77 = 12;
        v77_.v78 = 84;
        v38 = CudaDriverRoutine_197480(v90[0], a2, 1u, &v77_.v78,
                                       (__int64)&v79_.v79, 0xECu,
                                       (_QWORD*)(a4 + 832), &v77_.v77);
      }
      else {
        v38 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64,
                              __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
            v90[0], a3, v16[1], v11, 200, 2);
      }
      v90[0] = v38;
    }
    if (CudaDriverRoutine_bbdf0(a4)) {
      v62 = *(_QWORD*)(a3 + 64);
      v63 = v16[1];
      v64 = v90[0];
      v65 = a3;
      v66 = v73;
      v67 = 200;
    LABEL_64:
      v90[0] = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64,
                               __int64))(v62 + 19248))(v64, v65, v63 + 512, v66,
                                                       v67, 2);
      goto LABEL_65;
    }
    goto LABEL_65;
  }
  v90[0] = *a1;
  if (CudaDriverRoutine_bbdf0(a4)) {
    v39 = v10 + 64;
  }
  else {
    v39 = nullptr;
  }
  if ((a9 & 2) != 0 || CudaDriverStub_b9300(a4)) {
    *(_DWORD*)(v11 + 100) = *(_DWORD*)(v11 + 100) & 0xDB8FFFFF | 0x4000000;
    *(_DWORD*)(v11 + 104) = CudaDriverStub_8e230(v16);
    if (*(_BYTE*)(a8 + 209) == 0) {
      goto LABEL_37;
    }
  }
  else {
    *(_DWORD*)(v11 + 100) &= ~0x20000000u;
    *(_DWORD*)(v11 + 104) = CudaDriverRoutine_1ffe30((__int64)v16);
    if (*(_BYTE*)(a8 + 209) == 0) {
      goto LABEL_37;
    }
  }
  v40 = *(_QWORD*)(a8 + 8);
  v41 = *(_DWORD*)(v40 + 64) | 0x11;
  *(_DWORD*)(v40 + 60) = *(_QWORD*)(v16[9] + 8LL) >> 8;
  *(_DWORD*)(v40 + 64) = v41;
  *(_DWORD*)(*(_QWORD*)(a8 + 8) + 64LL) =
      *(_DWORD*)(*(_QWORD*)(a8 + 8) + 64LL) & 0xFFFFFFF1 | 8;
  if (*(_BYTE*)(a8 + 210) != 0) {
    *(_DWORD*)(v11 + 16) |= 0x1000u;
  }
LABEL_37:
  v42 = CudaDriverStub_1223e0(v16[3]);
  *(_DWORD*)(v11 + 96) = v42;
  *(_BYTE*)(v11 + 100) = BYTE4(v42);
  if (CudaDriverStub_b9300(a4)) {
    v10[129] = CudaDriverRoutine_2045e0((_QWORD*)v16[3]);
    v10[153] = v16[1] + 1232LL;
    v10[156] = v16[1] + 1224LL;
  }
  if (a6 != 0 && (*(_BYTE*)(a6 + 60) & 1) != 0) {
    v43 = CudaDriverStub_1223e0(*(_QWORD*)(a6 + 40));
    v44 = *(_DWORD*)(v11 + 116);
    *(_DWORD*)(v11 + 120) = 0;
    *(_DWORD*)(v11 + 112) = v43;
    *(_DWORD*)(v11 + 116) = v44 & 0x1FFFFF00 | BYTE4(v43) | 0x800000;
    CudaDriverRoutine_2077b0(a6);
  }
  if (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118 + 3) !=
      0) {
    v45 = CudaDriverRoutine_3750(*(_DWORD*)(v11 + 612), *(_BYTE*)(a5 + 1228));
    v46 = CudaDriverRoutine_3750(*(_DWORD*)(v11 + 620), *(_BYTE*)(a5 + 1228));
    v47 = CudaDriverRoutine_3750(*(_DWORD*)(v11 + 616), *(_BYTE*)(a5 + 1228));
    *(_DWORD*)(v11 + 68) = *(_DWORD*)(v11 + 68) & 0x8103FFFF |
                           ((v45 & 0x3F) << 18) | ((v46 & 0x3F) << 25);
    *(_DWORD*)(v11 + 80) =
        *(_DWORD*)(v11 + 80) & 0xFF81FFFF | ((v47 & 0x3F) << 17);
    if (CudaDriverRoutine_bbdf0(a4)) {
      v39[17] =
          ((v45 & 0x3F) << 18) | ((v46 & 0x3F) << 25) | v39[17] & 0x8103FFFF;
      v39[20] = v39[20] & 0xFF81FFFF | ((v47 & 0x3F) << 17);
    }
  }
  v48 = *(unsigned __int8*)(a8 + 204);
  v49 = *(_DWORD*)(v11 + 16);
  *(_DWORD*)(v11 + 16) =
      v49 & 0xFFFFFFC0 |
      CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), v48) & 0x3F;
  if (CudaDriverRoutine_bbdf0(a4)) {
    v50 = v39[4];
    v39[4] =
        v50 & 0xFFFFFFC0 |
        (CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), v48) - 1) & 0x3F;
  }
  if (CudaDriverRoutine_99720(a3)) {
    v51 = (unsigned __int8*)CudaDriverRoutine_119540(a5);
    v52 = *(_DWORD*)(v11 + 224) & 0xFFFF00FF | (*v51 << 8);
    *(_DWORD*)(v11 + 224) = v52;
    v53 = v52 & 0xFFFFFF00 | v51[1];
    *(_DWORD*)(v11 + 224) = v53;
    *(_BYTE*)(v11 + 73) = v51[2];
    v54 = *(_DWORD*)(v11 + 64) & 0x807FFFFF | (v51[3] << 23);
    *(_DWORD*)(v11 + 64) = v54;
    v55 = v53 & 0xFFFFFF | (v51[4] << 24);
    *(_DWORD*)(v11 + 224) = v55;
    *(_DWORD*)(v11 + 224) = v55 & 0xFF00FFFF | (v51[5] << 16);
    *(_DWORD*)(v11 + 64) =
        v54 & 0x7FFFFFFF | (*(unsigned __int8*)(a5 + 80) << 31);
  }
  v56 = *(unsigned __int16*)(*(_QWORD*)(a3 + 64) + 17281LL);
  v37 = v74;
  if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_1432188) != 0) {
    v57 = v56 >> 8;
    v79_.v79 = 88;
    v58 = *(_QWORD*)(a4 + 32);
    v59 = *(_QWORD*)(v58 + 24);
    v79_.v85 = v56;
    v60 = *(_BYTE*)(a8 + 205);
    v79_.v82 = a4;
    v79_.v83 = v11;
    v79_.v86 = v57;
    v79_.v87 = a8;
    v79_.v80 = v59;
    v79_.v81 = v58;
    v79_.v88 = v60;
    v79_.v89 = v90;
    v79_.v84 = a7;
    cuda_driver_20b420(0xBu, 1u, (__int64)&v79_.v79);
  }
  if (*(_BYTE*)(*(_QWORD*)(a3 + 16104) + 3096LL) == 0 ||
      *(_BYTE*)(a8 + 196) == 0 || *(_BYTE*)(a8 + 197) != 0) {
    if (*(_QWORD*)(a4 + 832) != 0) {
      (*(void (**)(unsigned int*, __int64, _QWORD, __int64, __int64, __int64))(
          *(_QWORD*)(a3 + 64) + 19248LL))(&v79_.v79, a3, v16[1], v11, 228, 2);
      v77_.v77 = 12;
      v77_.v78 = 84;
      v61 = CudaDriverRoutine_197480(v90[0], a2, 1u, &v77_.v78,
                                     (__int64)&v79_.v79, 0x108u,
                                     (_QWORD*)(a4 + 832), &v77_.v77);
    }
    else {
      v61 =
          (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64, __int64))(
              *(_QWORD*)(a3 + 64) + 19248LL))(v90[0], a3, v16[1], v11, 228, 2);
    }
    v90[0] = v61;
  }
  if (CudaDriverRoutine_bbdf0(a4)) {
    v62 = *(_QWORD*)(a3 + 64);
    v63 = v16[1];
    v64 = v90[0];
    v67 = 228;
    v65 = a3;
    v66 = v73;
    goto LABEL_64;
  }
LABEL_65:
  v68 = CudaDriverStub_b9300(a4);
  result = v90[0];
  if (v68) {
    result = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64,
                             __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
        v90[0], a3, v16[1] + 1024LL, v37 + 128, 1024, 2);
  }
  *a1 = result;
  return result;
}

__int64 nvidia_1be50(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v11;
  __int64 v12;
  __int16 v13;
  char v14;
  __int64 v15;
  _DWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  struct {
    unsigned int v25;
    unsigned int v26;
  } v25_;
  _DWORD v27[2];
  struct {
    _QWORD v28[6];
    __int16 v29;
    char gap66_[6];
    __int64* v30;
    char gap80_[8];
    char v31;
    char gap89_[7];
    __int64 v32;
  } v28_;
  _DWORD* v33;

  v5 = *(_QWORD*)(a5 + 8);
  v6 = *(_QWORD*)(a5 + 136);
  v33 = (_DWORD*)*a1;
  v11 = *(_QWORD*)(a3 + 32);
  v12 = *(_QWORD*)(v11 + 24);
  v13 = *(_WORD*)(*(_QWORD*)(v12 + 64) + 17281LL);
  v14 = *(_BYTE*)(*(_QWORD*)(v12 + 16104) + 3096LL);
  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                 *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) +
                            (_QWORD)CudaDriverData_14225e0)) != 0) {
    v28_.v28[0] = *(_QWORD*)(v11 + 24);
    v28_.v28[1] = v11;
    v28_.v28[2] = a3;
    v28_.v28[3] = v5;
    v15 = *(_QWORD*)(v6 + 8);
    v27[0] = 104;
    v28_.v31 = v14;
    v28_.v29 = v13;
    v28_.v32 = a5;
    v28_.v28[4] = v15;
    v28_.v30 = (__int64*)&v33;
    cuda_driver_20b420(0xBu, 2u, (__int64)v27);
  }
  if (CudaDriverStub_b9300(a3) && CudaDriverRoutine_bbdf0(a3)) {
    v16 = v33;
    v17 = (unsigned __int64)(*(_QWORD*)(v6 + 8) + 512LL) >> 8;
    *((_QWORD*)v33 + 1) = 0x3200120B0LL;
    *(_DWORD*)v16 = 536944813;
    v16[1] = v17;
    v33 = v16 + 4;
  }
  if (*(_BYTE*)(*(_QWORD*)(v12 + 16104) + 3096LL) != 0 &&
      *(_BYTE*)(a5 + 197) == 0) {
    if (*(_QWORD*)(a3 + 832) != 0) {
      v21 = *(_QWORD*)(v6 + 8);
      v27[0] = 541204678;
      v27[1] = v21 >> 40;
      LODWORD(v28_.v28[0]) = v21 >> 8;
      CudaDriverStub_640d0((__int64)v28_.v28 + 4, v5, 0x100u);
      v25_.v25 = 12;
      v25_.v26 = 64;
      result = CudaDriverRoutine_197480((__int64)v33, a2, 1u, &v25_.v26,
                                        (__int64)v27, 0x110u,
                                        (_QWORD*)(a3 + 832), &v25_.v25);
    }
    else {
      v22 = (__int64)v33;
      v23 = *(_QWORD*)(v6 + 8);
      v24 = (__int64)(v33 + 3);
      *(_DWORD*)v33 = 541204678;
      *(_DWORD*)(v22 + 4) = v23 >> 40;
      *(_DWORD*)(v22 + 8) = v23 >> 8;
      CudaDriverStub_640d0(v24, v5, 0x100u);
      result = v22 + 268;
    }
  }
  else {
    v18 = (__int64)v33;
    v19 = *(_QWORD*)(v6 + 8) >> 8;
    result = (__int64)(v33 + 4);
    *(_DWORD*)v33 = 536944813;
    *(_DWORD*)(v18 + 4) = v19;
    *(_QWORD*)(v18 + 8) = 0x3200120B0LL;
  }
  *a1 = result;
  return result;
}

__int64 nvidia_5bbb0(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 33968))()) (*)())(
      *(__int64 (**)(void))(a1 + 33968)))(a1);
}

__int64 nvidia_5bbc0(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 33976))()) (*)())(
      *(__int64 (**)(void))(a1 + 33976)))(a1);
}

__int64 nvidia_5bbd0(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 33984))()) (*)())(
      *(__int64 (**)(void))(a1 + 33984)))(a1);
}

__int64 nvidia_81310(__int64 a1)
{
  __int64 v1;
  int v2;
  void* v3;
  __int64 result;
  int v6;
  char* v7;
  int v8;
  char* v9;
  char* v10;
  char v11[64];
  char v12[1024];
  char* v13;
  char v14[256];
  struct {
    bool v15;
    char gap1385_[3];
    char v16[4];
  } v15_;

  v1 = *(_QWORD*)(a1 + 64);
  v13 = nullptr;
  v2 = cuda_driver_7d6e0(v1, 0, &v15_.v15, &v13);
  v3 = CudaDriverData_1422118;
  if (v15_.v15 && v2 == 0) {
    result = ((__int64 (*)())cuda_driver_77230)();
    v6 = *(_DWORD*)((char*)((_UNKNOWN*)0x1840LL) + (_QWORD)v3);
    if ((result & 1) == 0) {
    LABEL_15:
      if ((v6 & 2) == 0) {
        return result;
      }
      if ((unsigned int)CudaDriverStub_12db70(v12, 256) != 0) {
        v12[0] = 0;
      }
      fprintf_plt(*(_QWORD*)CudaDriverData_1421fd8[0], "%s: %s\n", v12,
                  "Late attaching to CUDA application is not supported on this "
                  "platform. Disabling CUDA attach on exception(CUDA_DE"
                  "VICE_WAITS_ON_EXCEPTION).");
      goto LABEL_26;
    }
  }
  else {
    v7 = v13;
    v8 = CudaDriverStub_12db70(v12, 256);
    if (v8 != 0) {
      v12[0] = 0;
    }
    fprintf_plt(*(_QWORD*)CudaDriverData_1421fd8[0], "%s: %s\n", v12, v7);
    v14[0] = 0;
    *(_QWORD*)v12 = 1;
    CudaDriverRoutine_78230(1, v14, 1, v12);
    CudaDriverRoutine_78230(4, v14, 1, v12);
    *(_DWORD*)((char*)((_UNKNOWN*)0x1840LL) + (_QWORD)v3) &= ~2u;
    result = ((__int64 (*)())cuda_driver_77230)();
    v6 = *(_DWORD*)((char*)((_UNKNOWN*)0x1840LL) + (_QWORD)v3);
    if ((result & 1) == 0) {
      goto LABEL_15;
    }
  }
  if ((v6 & 2) != 0) {
    if ((unsigned int)CudaDriverStub_12db70(v12, 256) != 0) {
      v12[0] = 0;
    }
    fprintf_plt(
        *(_QWORD*)CudaDriverData_1421fd8[0], "%s: %s\n", v12,
        "CUDA coredump is not supported with CUDA attach on "
        "exception(CUDA_DEVICE_WAITS_ON_EXCEPTION). Disabling coredump a"
        "nd attach on exception.");
    goto LABEL_26;
  }
  result = CudaDriverRoutine_12df40(
      &CudaDriverData_14328d4,
      (void (*)(__int64, __int64))cuda_debugger_api_7d040);
  if ((*(_DWORD*)CudaDriverData_1421ff0[0] |
       *(_DWORD*)CudaDriverData_1421ff8[0]) != 0) {
    if ((unsigned int)CudaDriverStub_12db70(v12, 256) != 0) {
      v12[0] = 0;
    }
    fprintf_plt(*(_QWORD*)CudaDriverData_1421fd8[0], "%s: %s\n", v12,
                "CUDA coredump is not supported with other CUDA debugging "
                "tools. Disabling coredump.");
  LABEL_26:
    v14[0] = 0;
    *(_QWORD*)v12 = 1;
    CudaDriverRoutine_78230(1, v14, 1, v12);
    v9 = v14;
    v10 = v12;
  LABEL_30:
    result = CudaDriverRoutine_78230(4, v9, 1, v10);
    *(_DWORD*)((char*)((_UNKNOWN*)0x1840LL) + (_QWORD)v3) &= ~2u;
    return result;
  }
  if (*CudaDriverData_14230b8 != 0) {
    CudaDriverRoutine_20a850((__int64)v11, 0x40u);
    snprintf_plt((__int64)v12, 0x400u,
                 "CUDA coredump is not supported with other developer tools "
                 "(name of tool in use: '%s'). Disabling coredump.",
                 v11);
    if ((unsigned int)CudaDriverStub_12db70(v14, 256) != 0) {
      v14[0] = 0;
    }
    fprintf_plt(*(_QWORD*)CudaDriverData_1421fd8[0], "%s: %s\n", v14, v12);
    v15_.v16[0] = 0;
    *(_QWORD*)v14 = 1;
    CudaDriverRoutine_78230(1, v15_.v16, 1, v14);
    v9 = v15_.v16;
    v10 = v14;
    goto LABEL_30;
  }
  if (*((_BYTE*)&CudaDriverRoutine_7348 + (_QWORD)v3) != 0) {
    return cuda_driver_815e0("CUDA coredump is not supported with CUDA "
                             "checkpoint. Disabling coredump.");
  }
  return result;
}

__int64 nvidia_97290(__int64 a1, __int64 a2)
{
  return ((__typeof__((**(__int64 (***)(void))(a2 + 21896))()) (*)())(
      **(__int64 (***)(void))(a2 + 21896)))(a1);
}

__int64 nvidia_972f0(__int64 a1, __int64 a2)
{
  return ((__typeof__((*(__int64 (**)(void))(**(_QWORD**)a2 + 48LL))()) (*)())(
      *(__int64 (**)(void))(**(_QWORD**)a2 + 48LL)))(a1);
}

__int64 nvidia_98650(__int64 a1, char a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  bool v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v16;
  __int64 v17;
  struct {
    _BYTE v18[4];
    _BYTE v19[4];
  } v18_;

  if (a2 == 0) {
    goto LABEL_12;
  }
  v3 = *(_QWORD*)(a1 + 72);
  v18_.v19[0] = 0;
  CudaDriverRoutine_5f820(v3, v18_.v19);
  if (v18_.v19[0] != 0) {
    v4 = *(_QWORD*)(a1 + 64);
    if (*(_DWORD*)(v4 + 17084) == 0 && *(_BYTE*)(v4 + 17092) == 0 ||
        (*(unsigned int (**)(__int64))(v4 + 20952))(a1) == 0) {
      goto LABEL_12;
    }
  LABEL_14:
    CudaDriverStub_107f90(a1 + 15936);
    v8 = cuda_driver_misc_helpers_de3a0();
    if (v8 != 0) {
      if (v8 == 214) {
        goto LABEL_31;
      }
    }
    else {
      __builtin_arm_dmb(0xFu);
      v9 = *(_DWORD*)(a1 + 15952);
      __builtin_arm_dmb(0xFu);
      if (v9 == 214) {
        goto LABEL_31;
      }
    }
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 20776LL))(a1);
    if (v10 != 0) {
      v11 = v10;
      if ((unsigned int)cuda_driver_misc_helpers_de3a0() == 0) {
        __builtin_arm_dmb(0xFu);
        __builtin_arm_dmb(0xFu);
      }
      __builtin_arm_dmb(0xFu);
      *(_DWORD*)(a1 + 15952) = v11;
      __builtin_arm_dmb(0xFu);
      if (*((_BYTE*)&CudaDriverRoutine_7488 + (_QWORD)CudaDriverData_1422118) !=
          0) {
        CudaDriverRoutine_98d00((_QWORD*)a1, v11);
      }
      if ((unsigned int)cuda_driver_misc_helpers_de3a0() == 0) {
        v12 = v11 == 810 || v11 == 710;
        if (!v12 || *(_QWORD*)(a1 + 16136) == 0) {
          cuda_driver_misc_helpers_de3c0(v11);
        }
      }
    }
  LABEL_31:
    v13 = cuda_driver_misc_helpers_de3a0();
    if (v13 == 0) {
      __builtin_arm_dmb(0xFu);
      v14 = *(_DWORD*)(a1 + 15952);
      __builtin_arm_dmb(0xFu);
      if (v14 != 0) {
        goto LABEL_34;
      }
      v16 = *(_QWORD*)(a1 + 72);
      if (v16 == 0 || (v13 = cuda_driver_5e820(v16, 0)) == 0) {
        v13 = cuda_driver_helpers_1b7080(*(_QWORD*)(a1 + 216));
      }
    }
    v14 = v13;
  LABEL_34:
    CudaDriverStub_108070(a1 + 15936);
    return v14;
  }
  v5 = *(_QWORD*)(a1 + 64);
  v18_.v18[0] = 0;
  if ((*(unsigned int (**)(__int64, _BYTE*))(v5 + 20784))(a1, v18_.v18) != 0 ||
      v18_.v18[0] != 0) {
    goto LABEL_14;
  }
LABEL_12:
  if ((unsigned int)cuda_driver_misc_helpers_de3a0() != 0) {
    goto LABEL_14;
  }
  __builtin_arm_dmb(0xFu);
  v7 = *(_DWORD*)(a1 + 15952);
  __builtin_arm_dmb(0xFu);
  if (v7 != 0) {
    goto LABEL_14;
  }
  v17 = *(_QWORD*)(a1 + 72);
  if (v17 != 0 && (unsigned int)cuda_driver_5e820(v17, 1u) != 0) {
    goto LABEL_14;
  }
  if ((unsigned int)cuda_driver_helpers_1b7080(*(_QWORD*)(a1 + 216)) != 0) {
    goto LABEL_14;
  }
  return 0;
}

__int64 nvidia_99e40(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 21192))()) (*)())(
      *(__int64 (**)(void))(a1 + 21192)))(a1);
}

__int64 nvidia_e1b60()
{

#pragma clang fp contract(off)
  long double v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;

  v3 = CudaDriverRoutine_8bf60();
  if (CudaDriverData_143bb18 != 0) {
    CudaDriverRoutine_1a2910(CudaDriverData_143bb18);
    CudaDriverData_143bb18 = 0;
  }
  while (1) {
    v4 = (__int64*)CudaDriverData_143bb38;
    if (CudaDriverData_143bb38 == 0) {
      break;
    }
    v5 = (_QWORD*)(CudaDriverData_143bb38 + 8);
    v6 = *(_QWORD*)(CudaDriverData_143bb38 + 8);
    CudaDriverData_143bb38 = v6;
    if (v6 != 0) {
      *(_QWORD*)(v6 + 16) = 0;
    }
    *v5 = 0;
    v4[2] = 0;
    CudaDriverRoutine_d5a10(v4);
  }
  while (1) {
    v7 = (__int64*)CudaDriverData_143bb40;
    if (CudaDriverData_143bb40 == 0) {
      break;
    }
    v8 = (_QWORD*)(CudaDriverData_143bb40 + 8);
    v9 = *(_QWORD*)(CudaDriverData_143bb40 + 8);
    CudaDriverData_143bb40 = v9;
    if (v9 != 0) {
      *(_QWORD*)(v9 + 16) = 0;
    }
    *v8 = 0;
    v7[2] = 0;
    CudaDriverRoutine_d5a10(v7);
  }
  if (CudaDriverData_1435cb8 != 0) {
    CudaDriverRoutine_1a40e0(CudaDriverData_1435cb8);
    CudaDriverData_1435cb8 = 0;
  }
  if (CudaDriverData_1439938 != 0) {
    cuda_driver_1017c0();
  }
  if (CudaDriverData_1439939 != 0) {
    CudaDriverStub_d2c10();
  }
  if (CudaDriverData_1435cc8 != 0) {
    cuda_driver_131480(&CudaDriverData_1435cc8);
  }
  if (CudaDriverData_1435d38 != 0) {
    v10 = CudaDriverData_1435e90(v3);
    v11 = CudaDriverData_1435e40(v10);
    v12 = CudaDriverData_1435da0(v11);
    v13 = CudaDriverData_1435d50(v12);
    CudaDriverData_1435df0(v13);
  }
  if (CudaDriverData_1435d30 != 0) {
    CudaDriverRoutine_1a11d0(CudaDriverData_1435d30);
    CudaDriverData_1435d30 = 0;
  }
  if (CudaDriverData_1435d28 != 0) {
    CudaDriverRoutine_12e340(CudaDriverData_1435d28);
    CudaDriverData_1435d28 = 0;
  }
  if (CudaDriverData_1438ec0 != 0) {
    CudaDriverRoutine_1a2c70(CudaDriverData_1438ec0);
    CudaDriverData_1438ec0 = 0;
  }
  v14 = CudaDriverData_1438ec8;
  if (CudaDriverData_1438ec8 != 0) {
    v14 = CudaDriverRoutine_1a2c70(CudaDriverData_1438ec8);
    CudaDriverData_1438ec8 = 0;
  }
  if ((CudaDriverData_1436001 & 0x200) != 0) {
    CudaDriverStub_57450(v14);
  }
  cuda_driver_ecfc0();
  CudaDriverRoutine_107f60(&CudaDriverData_1436508);
  CudaDriverRoutine_107f60(CudaDriverData_143b960);
  result = CudaDriverData_1438b00;
  if (CudaDriverData_1438b00 != 0) {
    return CudaDriverRoutine_4f850((__int64*)CudaDriverData_1438b00);
  }
  return result;
}

__int64 nvidia_e4ea0(__int64 a1, int* a2, __int64 a3, _DWORD** a4, char a5,
                     char a6, __int64 a7, __int64 a8, _BYTE* a9)
{

#pragma clang fp contract(off)
  __int64 v13;
  void* v14;
  unsigned int v15;
  unsigned int v16;
  bool v17;
  int v18;
  unsigned __int64* v20;
  __int64 v22;
  int v23;
  int v25;
  _BOOL4 v27;
  int v28;
  _BOOL4 v29;
  int v30;
  unsigned int v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  char* v35;
  int v36;
  int v37;
  __int64 v38;
  int v39;
  int v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  float v44;
  __int64 v45;
  unsigned int v46;
  void* v47;
  int v48;
  __int64 v49;
  __int64* v50;
  int v52;
  __int64 v53;
  __int64 v54;
  _DWORD* v55;
  void* v56;
  int v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  char* v61;
  _DWORD* v63;
  struct {
    unsigned __int64 v64;
    __int64 v65;
  } v64_;
  _QWORD* v66;
  struct {
    __int128 v67;
    __int64 v68;
    _DWORD* v69;
    char* v70;
    __int64 v71;
    _QWORD* v72;
  } v67_;

  v13 = a1;
  v14 = CudaDriverData_1422118;
  if ((*((_BYTE*)&CudaDriverRoutine_4728 + (_QWORD)CudaDriverData_1422118) &
       8) != 0) {
    v18 = *((_DWORD*)a4 + 2);
    v20 = &v64_.v64;
    v67_.v67 = CudaDriverData_1115ce0;
    LODWORD(v64_.v64) = v18 / 10;
    HIDWORD(v64_.v64) = v18 % 10;
    do {
      *((_DWORD*)a4 + 2) = *((_DWORD*)v20 + 1) + 10 * *(int*)v20;
      v16 = CudaDriverRoutine_e4980(a3, a4);
      if (v16 == 0 && *((_DWORD*)a4 + 20) == 2) {
        break;
      }
      v20 = (unsigned __int64*)CudaDriverRoutine_8bab0((__int64)v20,
                                                       (__int64)&v67_.v67, 1);
    } while (v20 != nullptr);
    *((_DWORD*)a4 + 2) = v18;
    v13 = a1;
    v14 = &CudaDriverData_14347a8;
    if (a4[3] == nullptr || v16 != 0) {
      goto LABEL_85;
    }
  }
  else {
    v15 = CudaDriverRoutine_e4980(a3, a4);
    v16 = v15;
    v17 = a4[3] != nullptr && v15 == 0;
    if (!v17) {
      goto LABEL_85;
    }
  }
  v22 = *(_QWORD*)((char*)&CudaDriverRoutine_4358 + (_QWORD)v14);
  v64_.v65 = 0;
  v66 = nullptr;
  v64_.v64 = 0;
  if (v22 != 0) {
    v23 = *(unsigned __int8*)(v22 + 28);
    v25 = a5 != 0 && v23 != 0;
    if (*((_BYTE*)a4 + 64) != 0) {
      goto LABEL_24;
    }
  }
  else {
    v25 = 0;
    if (*((_BYTE*)a4 + 64) != 0) {
    LABEL_24:
      v27 = *((_BYTE*)&CudaDriverRoutine_5190 + (_QWORD)v14 + 2) != 0 &&
            (*((_BYTE*)&CudaDriverRoutine_71cc + (_QWORD)v14 + 3) != 0 ||
             *((_BYTE*)&CudaDriverRoutine_71d0 + (_QWORD)v14) == 0);
      v17 = v25 == 0;
      v25 = (unsigned __int8)(v25 & *((_BYTE*)&CudaDriverRoutine_5190 +
                                      (_QWORD)v14 + 2));
      v28 = 2;
      v30 = !v17 && v27;
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x54LL) +
                     (_QWORD)CudaDriverData_1432140) != 0) {
        goto LABEL_42;
      }
    LABEL_35:
      v31 = CudaDriverRoutine_259b50(*a4);
      if (v31 == 0) {
        goto LABEL_46;
      }
    LABEL_48:
      if (v31 >= 9) {
        v16 = 999;
      }
      else {
        v16 = CudaDriverData_1131ba8[v31 - 1];
      }
      goto LABEL_85;
    }
  }
  v28 = 0;
  v29 = (*((_BYTE*)&CudaDriverRoutine_4234 + (_QWORD)v14) & 8) == 0;
  if (*((_BYTE*)&CudaDriverRoutine_4340 + (_QWORD)v14) == 0) {
    v29 = true;
  }
  v30 = v25 & v29;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x54LL) + (_QWORD)CudaDriverData_1432140) ==
      0) {
    goto LABEL_35;
  }
LABEL_42:
  LODWORD(v63) = 0;
  *((_QWORD*)&v67_.v67 + 1) = 0;
  v67_.v68 = a3;
  LODWORD(v67_.v67) = 56;
  v67_.v69 = a4[5];
  v32 = CudaDriverStub_12e330(512);
  v67_.v70 = (const char*)v32;
  if (v32 == 0) {
    v16 = 2;
    goto LABEL_85;
  }
  v67_.v71 = 511;
  v67_.v72 = &v63;
  *(_OWORD*)v32 = (__typeof__(*(_OWORD*)v32)){0};
  *(_OWORD*)(v32 + 16) = (__typeof__(*(_OWORD*)(v32 + 16))){0};
  *(_OWORD*)(v32 + 32) = (__typeof__(*(_OWORD*)(v32 + 32))){0};
  *(_OWORD*)(v32 + 48) = (__typeof__(*(_OWORD*)(v32 + 48))){0};
  *(_OWORD*)(v32 + 64) = (__typeof__(*(_OWORD*)(v32 + 64))){0};
  *(_OWORD*)(v32 + 80) = (__typeof__(*(_OWORD*)(v32 + 80))){0};
  *(_OWORD*)(v32 + 96) = (__typeof__(*(_OWORD*)(v32 + 96))){0};
  *(_OWORD*)(v32 + 112) = (__typeof__(*(_OWORD*)(v32 + 112))){0};
  *(_OWORD*)(v32 + 128) = (__typeof__(*(_OWORD*)(v32 + 128))){0};
  *(_OWORD*)(v32 + 144) = (__typeof__(*(_OWORD*)(v32 + 144))){0};
  *(_OWORD*)(v32 + 160) = (__typeof__(*(_OWORD*)(v32 + 160))){0};
  *(_OWORD*)(v32 + 176) = (__typeof__(*(_OWORD*)(v32 + 176))){0};
  *(_OWORD*)(v32 + 192) = (__typeof__(*(_OWORD*)(v32 + 192))){0};
  *(_OWORD*)(v32 + 208) = (__typeof__(*(_OWORD*)(v32 + 208))){0};
  *(_OWORD*)(v32 + 224) = (__typeof__(*(_OWORD*)(v32 + 224))){0};
  *(_OWORD*)(v32 + 240) = (__typeof__(*(_OWORD*)(v32 + 240))){0};
  *(_OWORD*)(v32 + 256) = (__typeof__(*(_OWORD*)(v32 + 256))){0};
  *(_OWORD*)(v32 + 272) = (__typeof__(*(_OWORD*)(v32 + 272))){0};
  *(_OWORD*)(v32 + 288) = (__typeof__(*(_OWORD*)(v32 + 288))){0};
  *(_OWORD*)(v32 + 304) = (__typeof__(*(_OWORD*)(v32 + 304))){0};
  *(_OWORD*)(v32 + 320) = (__typeof__(*(_OWORD*)(v32 + 320))){0};
  *(_OWORD*)(v32 + 336) = (__typeof__(*(_OWORD*)(v32 + 336))){0};
  *(_OWORD*)(v32 + 352) = (__typeof__(*(_OWORD*)(v32 + 352))){0};
  *(_OWORD*)(v32 + 368) = (__typeof__(*(_OWORD*)(v32 + 368))){0};
  *(_OWORD*)(v32 + 384) = (__typeof__(*(_OWORD*)(v32 + 384))){0};
  *(_OWORD*)(v32 + 400) = (__typeof__(*(_OWORD*)(v32 + 400))){0};
  *(_OWORD*)(v32 + 416) = (__typeof__(*(_OWORD*)(v32 + 416))){0};
  *(_OWORD*)(v32 + 432) = (__typeof__(*(_OWORD*)(v32 + 432))){0};
  *(_OWORD*)(v32 + 448) = (__typeof__(*(_OWORD*)(v32 + 448))){0};
  *(_OWORD*)(v32 + 464) = (__typeof__(*(_OWORD*)(v32 + 464))){0};
  *(_OWORD*)(v32 + 480) = (__typeof__(*(_OWORD*)(v32 + 480))){0};
  *(_OWORD*)(v32 + 496) = (__typeof__(*(_OWORD*)(v32 + 496))){0};
  cuda_driver_20b420(2u, 0x15u, (__int64)&v67_.v67);
  strlen_plt(v67_.v70);
  v33 = (const char*)a4[5];
  if ((_DWORD)v63 != 0) {
    *v33 = 0;
    v34 = CudaDriverStub_12e550(a4[5]);
    v35 = v67_.v70;
    a4[5] = (_DWORD*)v34;
    if (v34 != 0) {
      goto LABEL_45;
    }
  LABEL_53:
    CudaDriverRoutine_12e340((__int64)v35);
    v16 = 2;
    goto LABEL_85;
  }
  strlen_plt(v33);
  v34 = CudaDriverStub_12e550(v33);
  v35 = v67_.v70;
  a4[5] = (_DWORD*)v34;
  if (v34 == 0) {
    goto LABEL_53;
  }
LABEL_45:
  strcat_plt(v34, v35);
  CudaDriverRoutine_12e340((__int64)v67_.v70);
  v31 = CudaDriverRoutine_259b50(*a4);
  if (v31 != 0) {
    goto LABEL_48;
  }
LABEL_46:
  if (*((_BYTE*)a4 + 20) != 0) {
    v31 = CudaDriverRoutine_259b50(*a4);
    if (v31 != 0) {
      goto LABEL_48;
    }
  }
  if ((_BYTE)v30 != 0) {
    v36 = 1;
  }
  else {
    v36 = v25;
  }
  if (v36 != 1 ||
      (unsigned int)cuda_driver_unplaced_6_e4750(
          (__int64)a4, &v64_.v64, v28, "HOST64", "Jan 30 202605:40:13") != 0 ||
      v30 == 0) {
    goto LABEL_121;
  }
  v37 = *a2;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0xFCLL) + (_QWORD)CudaDriverData_1432140 +
                 4) != 0) {
    LODWORD(v67_.v67) = 32;
    DWORD1(v67_.v67) = v37;
    v38 = *(_QWORD*)((char*)&CudaDriverRoutine_4358 + (_QWORD)v14);
    *((_QWORD*)&v67_.v67 + 1) = 0x100000001LL;
    v67_.v69 = *(_DWORD**)(v38 + 16);
    v67_.v68 = CudaDriverRoutine_4f770((__int64)&v64_.v64);
    cuda_driver_20b420(2u, 0x40u, (__int64)&v67_.v67);
  }
  if ((unsigned int)cuda_driver_4f8e0(
          *(_QWORD*)((char*)&CudaDriverRoutine_4358 + (_QWORD)v14),
          (__int64)&v64_.v64, (__int64*)&v66) == 0) {
    v54 = CudaDriverRoutine_4f8c0(v66, &v63);
    v55 = v63;
    v56 = CudaDriverData_1432140;
    a4[9] = (_DWORD*)v54;
    a4[11] = v55;
    *((_DWORD*)a4 + 20) = 2;
    *((_BYTE*)a4 + 96) = 1;
    v57 = *a2;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x104LL) + (_QWORD)v56) != 0) {
      LODWORD(v67_.v67) = 40;
      DWORD1(v67_.v67) = v57;
      v58 = *(_QWORD*)((char*)&CudaDriverRoutine_4358 + (_QWORD)v14);
      *((_QWORD*)&v67_.v67 + 1) = 0x100000001LL;
      v67_.v69 = *(_DWORD**)(v58 + 16);
      v59 = *(const char**)v58;
      v60 = CudaDriverRoutine_4f770((__int64)&v64_.v64);
      v61 = (const char*)CudaDriverRoutine_4f780(v59, v60);
      v67_.v68 = CudaDriverRoutine_4f770((__int64)&v64_.v64);
      v67_.v70 = v61;
      cuda_driver_20b420(2u, 0x41u, (__int64)&v67_.v67);
      if (v67_.v70 != nullptr) {
        CudaDriverRoutine_12e340((__int64)v67_.v70);
      }
    }
    CudaDriverRoutine_12e340((__int64)v66);
    v16 = 0;
    v49 = v64_.v65;
    if (v64_.v65 != 0) {
      goto LABEL_84;
    }
  }
  else {
  LABEL_121:
    if (*((_BYTE*)a4 + 64) != 0) {
      v39 = *(_DWORD*)((char*)&CudaDriverRoutine_5194 + (_QWORD)v14);
      if (v39 != 0) {
        sprintf_plt((__int64)&v67_.v67, "-threads=%d", v39);
        CudaDriverRoutine_259b50(*a4);
      }
    }
    v40 = *a2;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0xF8LL) +
                   (_QWORD)CudaDriverData_1432140) != 0) {
      LODWORD(v67_.v67) = 32;
      DWORD1(v67_.v67) = v40;
      *((_QWORD*)&v67_.v67 + 1) = 0x300000001LL;
      v67_.v68 = CudaDriverRoutine_4f770((__int64)&v64_.v64);
      LODWORD(v67_.v69) = a6 != 0;
      cuda_driver_20b420(2u, 0x3Eu, (__int64)&v67_.v67);
    }
    if ((*((_BYTE*)&CudaDriverRoutine_474c + (_QWORD)v14) & 1) != 0) {
      v41 = CudaDriverData_143bd38;
    }
    else {
      v41 = v13;
    }
    *(_BYTE*)(v41 + 48) |= 3u;
    v42 = *(_QWORD*)(v41 + 32);
    if (v42 != 0) {
      v43 = *(_DWORD*)(v41 + 44);
      if (v43 < *(_DWORD*)(v41 + 40)) {
        *(_QWORD*)(v42 + 24LL * v43) = "";
        *(_DWORD*)(*(_QWORD*)(v41 + 32) + 24LL * *(unsigned int*)(v41 + 44) +
                   8) = 0;
        *(_BYTE*)(v41 + 48) |= 2u;
      }
    }
    CudaDriverRoutine_12e270((_QWORD*)(v41 + 56));
    v44 = 0x0.0p+0f;
    if ((*((_BYTE*)&CudaDriverRoutine_474c + (_QWORD)v14) & 1) != 0) {
      v13 = CudaDriverData_143bd38;
    }
    if ((*(_BYTE*)(v13 + 48) & 2) != 0) {
      v44 = CudaDriverRoutine_12e2a0((_QWORD*)(v13 + 56));
      *(float*)(v13 + 64) = v44 + *(float*)(v13 + 64);
    }
    v45 = *(_QWORD*)(v13 + 32);
    if (v45 != 0) {
      v46 = *(_DWORD*)(v13 + 44);
      if (v46 < *(_DWORD*)(v13 + 40)) {
        *(float*)(v45 + 24LL * v46 + 12) = v44;
        *(_DWORD*)(*(_QWORD*)(v13 + 32) + 24LL * *(unsigned int*)(v13 + 44) +
                   16) = *(_DWORD*)(v13 + 28);
        *(_DWORD*)(*(_QWORD*)(v13 + 32) + 24LL * *(unsigned int*)(v13 + 44) +
                   20) = *(_DWORD*)(v13 + 12);
      }
    }
    v47 = CudaDriverData_1432140;
    ++*(_DWORD*)(v13 + 44);
    *(_BYTE*)(v13 + 48) &= ~1u;
    v48 = *a2;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0xFCLL) + (_QWORD)v47) != 0) {
      LODWORD(v67_.v67) = 32;
      DWORD1(v67_.v67) = v48;
      *((_QWORD*)&v67_.v67 + 1) = 0x300000001LL;
      v67_.v68 = CudaDriverRoutine_4f770((__int64)&v64_.v64);
      LODWORD(v67_.v69) = a6 != 0;
      cuda_driver_20b420(2u, 0x3Fu, (__int64)&v67_.v67);
    }
    v16 = 221;
    v49 = v64_.v65;
    if (v64_.v65 != 0) {
    LABEL_84:
      CudaDriverRoutine_12e340(v49);
    }
  }
LABEL_85:
  if (a9 != nullptr) {
    *a9 = 0;
  }
  if (v16 != 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"No device code available for GPU ISA %d\n",
        *((_DWORD*)a4 + 2));
    return v16;
  }
  v50 = (__int64*)(a4 + 14);
  if (a4[14] == nullptr) {
    v52 = CudaDriverRoutine_259c00((__int64)*a4, a4 + 14);
    if (v52 > 3) {
      if (v52 > 6) {
        if (v52 == 7) {
          return 222;
        }
        if (v52 == 8) {
          return 225;
        }
      }
      else {
        if (v52 == 4) {
          return 218;
        }
        if (v52 == 6) {
          return 221;
        }
      }
    }
    else {
      if ((unsigned int)(v52 - 1) < 2) {
        return 200;
      }
      if (v52 == 0) {
        if (*v50 == 0) {
          v53 = CudaDriverRoutine_12eb10((__int64)"cuModuleLoadDataEx");
          *v50 = v53;
          if (v53 == 0) {
            return 2;
          }
          *((_BYTE*)a4 + 120) = 1;
        }
        goto LABEL_90;
      }
      if (v52 == 3) {
        return 209;
      }
    }
    return 999;
  }
LABEL_90:
  if (a4[9] != nullptr) {
    return 0;
  }
  else {
    return 209;
  }
}

__int64 nvidia_eeec0(__int64 result, unsigned int* a2, int a3, __int64 a4)
{
  __int64 v7;
  __int64 v8;
  char v9;
  _BOOL4 v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  int v14;
  char v15;
  int v16;

  v7 = result;
  if (result != 0) {
    result = CudaDriverRoutine_1db1b0(result);
    v8 = result;
    *(_DWORD*)a4 = 88;
    if (a2 != nullptr) {
      v9 = 3;
    }
    else {
      result = ((__int64 (*)(__int16))cuda_driver_predicates_1dc800)(result);
      if ((v8 & 7) == 1) {
        v9 = 1;
      }
      else {
        v9 = 2;
      }
      if ((_BYTE)result != 0) {
        v9 = 4;
      }
    }
    v10 = (v8 & 0x7C0000000000000LL) == 0;
    *(_BYTE*)(a4 + 4) = v9;
    v11 = ((unsigned int)v8 >> 26) & 0x1F;
    if (v11 > 8) {
      goto LABEL_33;
    }
  }
  else {
    *(_DWORD*)a4 = 88;
    if (a2 != nullptr) {
      v10 = false;
      LODWORD(v8) = 0;
      *(_BYTE*)(a4 + 4) = 3;
      LOBYTE(v11) = 0;
    }
    else {
      result = ((__int64 (*)(__int16))cuda_driver_predicates_1dc800)(0);
      v10 = false;
      LODWORD(v8) = 0;
      if ((_BYTE)result != 0) {
        v15 = 4;
      }
      else {
        v15 = 2;
      }
      *(_BYTE*)(a4 + 4) = v15;
      LOBYTE(v11) = 0;
    }
  }
  if (((1 << v11) & 0x18C) != 0) {
    v12 = ((v8 & 0x400000) != 0) | 2;
    if ((v8 & 0x38) == 0x18) {
      v12 = ((v8 & 0x400000) != 0) | 6;
    }
    *(_DWORD*)(a4 + 8) = v12;
    if (a2 != nullptr) {
      goto LABEL_16;
    }
    goto LABEL_36;
  }
LABEL_33:
  v16 = (v8 & 0x400000) != 0;
  if ((v8 & 0x38) == 0x18) {
    v16 |= 4u;
  }
  *(_DWORD*)(a4 + 8) = v16;
  if (a2 != nullptr) {
  LABEL_16:
    *(_BYTE*)(a4 + 5) = 2;
    *(_DWORD*)(a4 + 12) = a2[26];
    *(_QWORD*)(a4 + 16) = a2[3];
    LODWORD(v13) = a2[4];
    if ((unsigned int)v13 <= 1) {
      v13 = 1;
    }
    else {
      v13 = (unsigned int)v13;
    }
    *(_QWORD*)(a4 + 24) = v13;
    LODWORD(v13) = a2[5];
    if ((unsigned int)v13 <= 1) {
      v13 = 1;
    }
    else {
      v13 = (unsigned int)v13;
    }
    *(_QWORD*)(a4 + 32) = v13;
    *(_DWORD*)(a4 + 40) = a2[6];
    *(_DWORD*)(a4 + 44) = a2[7];
    *(_DWORD*)(a4 + 48) = v10;
    *(_DWORD*)(a4 + 56) = a3 == 3;
    if (v7 != 0) {
      goto LABEL_23;
    }
  LABEL_37:
    *(_DWORD*)(a4 + 64) = 0;
    *(_DWORD*)(a4 + 72) = a3;
    v14 = 1;
    goto LABEL_38;
  }
LABEL_36:
  *(_BYTE*)(a4 + 5) = 1;
  *(_DWORD*)(a4 + 12) = 1;
  result = CudaDriverStub_1dbf90(v7);
  *(_QWORD*)(a4 + 16) = result;
  *(int64x2_t*)(a4 + 24) = vdupq_n_s64(1u);
  *(_DWORD*)(a4 + 48) = v10;
  *(_DWORD*)(a4 + 56) = a3 == 3;
  if (v7 == 0) {
    goto LABEL_37;
  }
LABEL_23:
  result = ((__int64 (*)(__int16))cuda_driver_predicates_1dc800)(v8);
  *(_DWORD*)(a4 + 72) = a3;
  *(_DWORD*)(a4 + 64) = (unsigned __int8)result != 0;
  *(_DWORD*)(a4 + 80) = 1;
  if ((_BYTE)result == 0) {
    return result;
  }
  result = CudaDriverRoutine_127270(v7);
  if (result == 3) {
    v14 = 3;
  }
  else {
    v14 = 2;
  }
  if (result == 2) {
    v14 = 1;
  }
LABEL_38:
  *(_DWORD*)(a4 + 80) = v14;
  return result;
}

__int64 nvidia_f22e0(unsigned int a1)
{
  unsigned int** v2;
  __int64 result;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned int v22;
  __int64 v23;
  unsigned __int64 v24;
  bool v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  unsigned __int64 v32;
  _QWORD* v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 i;
  _DWORD* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  char* v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  unsigned int* v63;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  _QWORD v68[2];
  _QWORD v69[30];
  __int64 v70[5];
  struct {
    _DWORD v71[2];
    __int64 v72;
    __int64 v73;
    __int64* v74;
  } v71_;

  v2 = (unsigned int**)CudaDriverData_1422118;
  result = ((__int64 (*)(int*))cuda_driver_12ea30)(
      (int*)((char*)&CudaDriverRoutine_4e48 + (_QWORD)CudaDriverData_1422118));
  if ((_DWORD)result != 0) {
    v4 = a1;
    nvidia_f3ee0(v2[a1 + 35]);
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
    v5 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_4780 + (_QWORD)v2);
    result =
        CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
    *(_OWORD*)v68 = (__typeof__(*(_OWORD*)v68)){0};
    memset(v69, 0, sizeof(v69));
    if (v5 != 0) {
      v6 = a1 - 5LL;
      v7 = a1 - 1LL;
      v8 = 0;
      v61 = (int)a1;
      v56 = v5;
      v9 = a1 - 4LL;
      v10 = a1 - 3LL;
      while (1) {
        v58 = v8;
        v11 = *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v2] + 616 * v8;
        CudaDriverStub_107f90(v11 + 32);
        v57 = v11;
        v59 = v11 + 48;
        v12 = *(__int64**)(v11 + 48 + 8 * v4);
        if (v12 != nullptr) {
          break;
        }
      LABEL_4:
        result = CudaDriverStub_108070(v57 + 32);
        v8 = v58 + 1;
        if (v58 + 1 == v56) {
          goto LABEL_81;
        }
      }
      while (1) {
        v13 = (__int64*)v12[11];
        v65 = v12;
        CudaDriverStub_107f90(v12);
        v14 = (__int64)v65;
        v15 = v65[2];
        if (v65[3] != 0) {
          v16 = v65[4];
          CudaDriverStub_108070(v65);
          if (v16 == 0) {
            goto LABEL_80;
          }
          goto LABEL_7;
        }
        v17 = v65[5];
        v62 = v13;
        v63 = v2[v61 + 2514];
        if (v17 != 0) {
          v60 = v65[2];
          v18 = *(unsigned int*)(v17 + 4);
          cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
          if ((_DWORD)v18 != 0) {
            v19 = 0;
            v66 = v17;
            v64 = 16 * v18;
            do {
              v20 = *(_QWORD*)(v17 + 8) + v19;
              v21 = *(_QWORD*)v20;
              v22 = *(_DWORD*)(v20 + 8);
              cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v2] +
                                 616LL * v22);
              v23 = CudaDriverRoutine_114270(v22);
              if (v23 != 0) {
                v24 = cuda_driver_118980(v23);
                CudaDriverRoutine_1085b0(*(_QWORD*)&CudaDriverData_4c38[(
                                             _QWORD)CudaDriverData_1422118] +
                                         616LL * v22);
                v25 = v24 >= v21;
                v2 = (unsigned int**)&CudaDriverData_14347a8;
                if (!v25) {
                  CudaDriverRoutine_1085b0((__int64)&CudaDriverData_14395f8);
                  v14 = (__int64)v65;
                  v13 = v62;
                  v26 = v65[4];
                  CudaDriverStub_108070(v65);
                  if (v26 == 0) {
                    goto LABEL_80;
                  }
                  goto LABEL_7;
                }
              }
              else {
                CudaDriverRoutine_1085b0(
                    *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v2] + 616LL * v22);
              }
              v17 = v66;
              v19 += 16;
            } while (v64 != v19);
          }
          CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 +
                                   (_QWORD)v2);
          v15 = v60;
        }
        CudaDriverStub_107f90(*((_QWORD*)v63 + 11));
        v27 = *(_QWORD*)(v15 + 32);
        v65[5] = 0;
        if (v27 != 0) {
          break;
        }
      LABEL_22:
        CudaDriverStub_108070(*((_QWORD*)v63 + 11));
        v28 = *(_QWORD*)(v65[2] + 128);
        if (*(__int64**)(v59 + 8 * v61) == v65) {
          v29 = v65[11];
          v13 = v62;
          *(_QWORD*)(v59 + 8 * v61) = v29;
          if (v29 != 0) {
            v30 = 0;
            goto LABEL_76;
          }
        }
        else {
          v29 = v65[11];
          v13 = v62;
          *(_QWORD*)(v65[10] + 88) = v29;
          if (v29 != 0) {
            v30 = v65[10];
          LABEL_76:
            *(_QWORD*)(v29 + 80) = v30;
          }
        }
        v44 = v65[2];
        v65[10] = 0;
        v65[11] = 0;
        v45 = *(_QWORD*)(v44 + 632);
        CudaDriverStub_107f90(v45 + 128);
        v46 = v65[2];
        if (*(_DWORD*)((char*)((_UNKNOWN*)0xE8LL) +
                       *(__int64*)((char*)((__int64*)0x10LL) +
                                   (_QWORD)CudaDriverData_14225e0)) != 0) {
          v71_.v72 = v65[2];
          v47 = *(_QWORD*)(v46 + 128);
          v48 = *(_QWORD*)(v46 + 240);
          v49 = *(_QWORD*)(v46 + 248);
          v71_.v71[0] = 32;
          v71_.v71[1] = ***(_DWORD***)(v46 + 632);
          v71_.v73 = v47;
          v71_.v74 = v70;
          CudaDriverRoutine_ef740(v48, v49, (__int64)v70);
          cuda_driver_20b420(2u, 0x3Au, (__int64)v71_.v71);
        }
        CudaDriverRoutine_1d87a0(v65 + 2);
        CudaDriverStub_108070(v45 + 128);
        v14 = (__int64)v65;
        v50 = v65[4];
        v65[2] = 0;
        v65[4] = v50 - 1;
        atomic_fetch_add((atomic_ullong* volatile)(*(_QWORD*)v45 + 16960LL),
                         -v28);
        v2 = (unsigned int**)CudaDriverData_1422118;
        v51 = v65[4];
        CudaDriverStub_108070(v65);
        if (v51 == 0) {
        LABEL_80:
          CudaDriverRoutine_12e340(v14);
        }
      LABEL_7:
        v12 = v13;
        if (v13 == nullptr) {
          goto LABEL_4;
        }
      }
    LABEL_26:
      v31 = *(_QWORD**)(v27 + 696);
      v32 = v31[6];
      v67 = *(_QWORD*)(v27 + 32);
      while (1) {
        v33 = (_QWORD*)v31[2];
        if (v33 == nullptr) {
          v38 = *v31;
          v31[1] = 0;
          v31[6] = 0;
          if (v38 != 0 && *(_BYTE*)(v38 + 688) != 0 &&
              atomic_fetch_add((atomic_uint* volatile)(v31[3] + 56LL),
                               0xFFFFFFFF) == 1) {
            atomic_fetch_add(
                (atomic_ullong* volatile)(**(_QWORD**)(*v31 + 632LL) + 16944LL),
                -*(_QWORD*)(*v31 + 128LL));
          }
          v39 = *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                           (_QWORD)CudaDriverData_1422118);
          if (v39 >= 1) {
            if ((unsigned int)v39 >= 8) {
              v42 = v69;
              v40 = 0;
              do {
                v43 = v32 >> v40;
                if (v4 != v40 && (v43 & 1) != 0) {
                  ++*(v42 - 4);
                }
                if (v7 != v40 && (v43 & 2) != 0) {
                  ++*(v42 - 3);
                }
                if (v4 - 2 != v40 && (v43 & 4) != 0) {
                  ++*(v42 - 2);
                }
                if (v10 != v40 && (v43 & 8) != 0) {
                  ++*(v42 - 1);
                }
                if (v9 != v40 && (v43 & 0x10) != 0) {
                  ++*(_DWORD*)v42;
                }
                if (v6 != v40 && (v43 & 0x20) != 0) {
                  ++v42[1];
                }
                if (v4 - 6 != v40 && (v43 & 0x40) != 0) {
                  ++v42[2];
                }
                if (v4 - 7 != v40 && (v43 & 0x80) != 0) {
                  ++v42[3];
                }
                v40 += 8;
                v42 += 8;
              } while ((v39 & 0x7FFFFFF8) != v40);
            }
            else {
              v40 = 0;
            }
            for (i = v39 & 7; i != 0; --i) {
              if (v4 != v40 && ((v32 >> v40) & 1) != 0) {
                ++*((_DWORD*)v68 + v40);
              }
              ++v40;
            }
          }
          v27 = v67;
          *v31 = 0;
          if (v67 == 0) {
            goto LABEL_22;
          }
          goto LABEL_26;
        }
        v34 = v33[79];
        CudaDriverStub_107f90(v34 + 128);
        v35 = (_QWORD*)v31[2];
        v70[0] = (__int64)v33;
        if (v35 == v33) {
          v36 = v33[85];
          v31[2] = v36;
          if (v36 != 0) {
            v37 = 0;
            goto LABEL_27;
          }
        }
        else {
          v36 = v33[85];
          *(_QWORD*)(v33[84] + 680LL) = v36;
          if (v36 != 0) {
            v37 = v33[84];
          LABEL_27:
            *(_QWORD*)(v36 + 672) = v37;
          }
        }
        *((_OWORD*)v33 + 42) = (__typeof__(*((_OWORD*)v33 + 42))){0};
        CudaDriverRoutine_1d87a0(v70);
        CudaDriverStub_108070(v34 + 128);
      }
    }
  LABEL_81:
    v52 = *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v2);
    if (v52 >= 1) {
      v53 = 0;
      v54 = (char*)CudaDriverData_1422118 + 280;
      do {
        if (v53 != v4) {
          v55 = *((_DWORD*)v68 + v53);
          if (v55 != 0) {
            do {
              result = CudaDriverRoutine_ff020(
                  *(__int64**)(*(_QWORD*)&v54[8 * v53] + 16928LL),
                  *(_QWORD**)(*(_QWORD*)&v54[8 * v4] + 16928LL));
              --v55;
            } while (v55 != 0);
            v52 = CudaDriverData_1434ac0;
          }
        }
        ++v53;
      } while (v53 < v52);
    }
  }
  return result;
}

__int64 nvidia_f3ee0(unsigned int* a1)
{
  void* v2;
  __int64 result;
  __int64* v4;
  __int64* v5;
  __int64** v6;
  __int64 v7;
  unsigned __int64 i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 j;
  __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64** v19;
  unsigned int* v20;
  unsigned int* v21;
  __int64* v22;
  __int64** v23;
  __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;

  v2 = CudaDriverData_1422118;
  result = ((__int64 (*)(int*))cuda_driver_12ea30)(
      (int*)CudaDriverData_1422118 + *a1 + 5156);
  if ((_DWORD)result != 0) {
    CudaDriverStub_107f90_alt1(a1 + 5488);
    v4 = *((__int64**)a1 + 2742);
    v5 = *((__int64**)a1 + 2743);
    *((_QWORD*)a1 + 2742) = 0;
    *((_QWORD*)a1 + 2743) = a1 + 5484;
    v25 = v4;
    result = CudaDriverStub_108070_alt1(a1 + 5488);
    if (v4 != nullptr) {
      v20 = a1 + 5484;
      v21 = a1;
      v6 = &v25;
      v22 = v5;
      do {
      LABEL_7:
        v23 = v6;
        v26 = 0;
        v27 = 0;
        CudaDriverRoutine_d56a0((__int64)v4, (__int64)&v27, &v26);
        CudaDriverStub_102350(*v4);
        v7 = CudaDriverStub_102370(*v4);
        v24 = *(_QWORD*)(CudaDriverStub_102040(v7) + 24);
        CudaDriverStub_102360(*v4);
        for (i = v27; i <= v26; ++i) {
          v9 = *(_QWORD*)(v24 + 80) + 80 * i;
          v10 = *(unsigned int*)(v9 + 60);
          cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
          if ((_DWORD)v10 != 0) {
            v11 = 16 * v10;
            for (j = 0; v11 != j; j += 16) {
              v13 = *(_QWORD*)(v9 + 64) + j;
              v14 = *(_QWORD*)v13;
              v15 = *(_DWORD*)(v13 + 8);
              cuda_driver_1084c0(*(_QWORD*)&CudaDriverData_4c38[(_QWORD)v2] +
                                 616LL * v15);
              v16 = CudaDriverRoutine_114270(v15);
              if (v16 != 0) {
                v17 = cuda_driver_118980(v16);
                CudaDriverRoutine_1085b0(
                    *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v2] + 616LL * v15);
                if (v17 < v14) {
                  result = CudaDriverRoutine_1085b0(
                      (__int64)&CudaDriverRoutine_4e50 + (_QWORD)v2);
                  v6 = v23;
                  if (*v23 != nullptr) {
                    v6 = (__int64**)(*v23 + 2);
                  }
                  v4 = *v6;
                  if (*v6 == nullptr) {
                    goto LABEL_24;
                  }
                  goto LABEL_7;
                }
              }
              else {
                CudaDriverRoutine_1085b0(
                    *(_QWORD*)&CudaDriverData_4c38[(_QWORD)v2] + 616LL * v15);
              }
            }
          }
          CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 +
                                   (_QWORD)v2);
        }
        v6 = v23;
        v18 = *v23;
        if (*v23 != nullptr) {
          v19 = (__int64**)v22;
          *v23 = (__int64*)v18[2];
          if (v18 + 2 == v22) {
            v19 = v23;
          }
          v22 = (__int64*)v19;
        }
        CudaDriverStub_102350(*v4);
        CudaDriverRoutine_f1f60(*v4, -1, 0);
        CudaDriverStub_102360(*v4);
        CudaDriverRoutine_101ff0(*v4);
        CudaDriverRoutine_4d080((_QWORD*)v4[1]);
        result = CudaDriverRoutine_12e340((__int64)v4);
        if (*v23 != nullptr) {
          v6 = (__int64**)(*v23 + 2);
        }
        v4 = *v6;
      } while (*v6 != nullptr);
    LABEL_24:
      if (v25 != nullptr) {
        CudaDriverStub_107f90_alt1(v21 + 5488);
        *v22 = *((_QWORD*)v21 + 2742);
        *((_QWORD*)v21 + 2742) = v25;
        if (v20 == *((unsigned int**)v21 + 2743)) {
          *((_QWORD*)v21 + 2743) = v22;
        }
        return CudaDriverStub_108070_alt1(v21 + 5488);
      }
    }
  }
  return result;
}

__int64 nvidia_f5760(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                     char a5)
{
  __int64 v6;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v29;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33[2];

  v6 = 8LL * a2;
  v8 = *(_QWORD*)(a1 + v6);
  v9 = *(_DWORD*)(a3 + 348);
  v32 = 0;
  v10 = *(_QWORD*)&CudaDriverData_4c38[(_QWORD)CudaDriverData_1422118];
  v31 = 0;
  v11 = *(_QWORD*)((char*)CudaDriverData_1422118 + v6 + 20112);
  result = CudaDriverRoutine_d56a0(v8, (__int64)&v32, &v31);
  v13 = v32;
  if (v32 <= v31) {
    v14 = v10 + 616LL * v9 + 32;
    v29 = v10 + 616LL * v9 + 48;
    do {
      result = ((__int64 (*)(__int64))CudaDriverRoutine_d3240)(
          *(_QWORD*)(a1 + 8LL * a2));
      if ((_BYTE)result == 0) {
        goto LABEL_4;
      }
      result = (__int64)CudaDriverRoutine_4d790(
          *(unsigned __int64**)(*(_QWORD*)(a1 + 8LL * a2) + 8LL), v13);
      if ((_BYTE)result == 0) {
        goto LABEL_4;
      }
      v15 = *(_QWORD*)(v11 + 80) + 80 * v13;
      v16 = *(_QWORD**)(v15 + 24);
      v17 = v16[6];
      if (v17 == v14) {
        CudaDriverStub_107f90_alt2(*(_QWORD*)(v15 + 24));
        if (a5 == 0) {
          goto LABEL_12;
        }
        goto LABEL_20;
      }
      v33[0] = v16[6];
      v33[1] = v14;
      CudaDriverRoutine_108140(2, v33);
      CudaDriverStub_107f90_alt2(v16);
      v18 = ***(unsigned int***)(v16[2] + 632LL);
      if (*(_QWORD**)(v17 + 16 + 8 * v18) == v16) {
        v19 = v16[11];
        *(_QWORD*)(v17 + 16 + 8 * v18) = v19;
        if (v19 == 0) {
          goto LABEL_17;
        }
        v20 = 0;
      }
      else {
        v19 = v16[11];
        *(_QWORD*)(v16[10] + 88LL) = v19;
        if (v19 == 0) {
          goto LABEL_17;
        }
        v20 = v16[10];
      }
      *(_QWORD*)(v19 + 80) = v20;
    LABEL_17:
      v16[10] = 0;
      v16[11] = 0;
      v16[6] = v14;
      v16[11] = *(_QWORD*)(v29 + 8 * v18);
      *(_QWORD*)(v29 + 8 * v18) = v16;
      v22 = v16[11];
      if (v22 != 0) {
        *(_QWORD*)(v22 + 80) = v16;
      }
      v33[0] = v17;
      v33[1] = v14;
      CudaDriverRoutine_108300(2, (__int64)v33);
      if (a5 == 0) {
      LABEL_12:
        v21 = v16[3] - 1LL;
        v16[3] = v21;
        if (v21 != 0) {
          goto LABEL_26;
        }
        goto LABEL_28;
      }
    LABEL_20:
      if (*(_DWORD*)(v15 + 60) != 0) {
        v23 = 8;
        v24 = 0;
        do {
          ++v24;
          *(_DWORD*)(*(_QWORD*)(v15 + 64) + v23) = -1;
          v23 += 16;
        } while (v24 < *(unsigned int*)(v15 + 60));
      }
      *(_DWORD*)(v15 + 60) = 0;
      if (v9 != -1) {
        **(_QWORD**)(v15 + 64) = a4;
        *(_DWORD*)(*(_QWORD*)(v15 + 64) + 8LL) = v9;
        *(_DWORD*)(v15 + 60) = 1;
      }
      v16[5] = v15 + 56;
      --v16[3];
      v25 = *(int*)(*(_QWORD*)(v11 + 80) + 80 * v13 + 76);
      v16[3] = v25;
      if (v25 != 0) {
      LABEL_26:
        v26 = v16[4];
        result = CudaDriverStub_108070_alt2(v16);
        if (v26 == 0) {
          goto LABEL_29;
        }
        goto LABEL_4;
      }
    LABEL_28:
      v16[8] = 0;
      v27 = v16[4];
      result = CudaDriverStub_108070_alt2(v16);
      if (v27 == 0) {
      LABEL_29:
        result = CudaDriverRoutine_12e340((__int64)v16);
      }
    LABEL_4:
      ++v13;
    } while (v13 <= v31);
  }
  return result;
}

__int64 nvidia_10ef20(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  void* v5;
  void* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(CudaDriverData_143bd80 + 24);
  if (v2 != 0) {
    v4 = (__int64*)result;
    if (result != 0) {
      v5 = CudaDriverData_1422118;
      do {
        v7 = *(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v5);
        v11 = 0;
        if (v7 != 1 || ((result = CudaDriverRoutine_1db1b0(v2)) &
                        0x700000000LL) != 0x100000000LL) {
          result = ((__int64 (*)(__int64))CudaDriverRoutine_1dc850)(v2),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((_BYTE)result != 0) {
            result = ((__int64 (*)(__int64))CudaDriverRoutine_1dc9c0)(v2),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((_BYTE)result == 0) {
              result = CudaDriverRoutine_1dc000(v2),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (a2 == result) {
                result = CudaDriverRoutine_1dbb80(v2, (__int64)v4),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v11 = result;
                if (result != 0) {
                  CudaDriverRoutine_ee330(result),
                      v10 = COERCE_AS(
                          __typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v8 = *v4;
                  v9 = v11;
                  if (!cuda_driver_predicates_9ac80(*v4) ||
                      *((_BYTE*)&CudaDriverRoutine_4710 + (_QWORD)v5) != 0 ||
                      v9 != 0 && (CudaDriverRoutine_1db1b0(v9),
                                  (v10 & 0x40000) != 0) ||
                      *(_DWORD*)(v8 + 21864) != 0) {
                    result = CudaDriverStub_1db190(&v11),
                    v10 = COERCE_AS(
                        __typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  else {
                    result = CudaDriverStub_1db380(&v11),
                    v10 = COERCE_AS(
                        __typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                }
              }
            }
          }
        }
        v2 = *(_QWORD*)(v2 + 344);
      } while (v2 != 0);
    }
    else {
      v6 = CudaDriverData_1422118;
      do {
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v6) != 1 ||
            ((result = CudaDriverRoutine_1db1b0(v2)) & 0x700000000LL) !=
                0x100000000LL) {
          result = ((__int64 (*)(__int64))CudaDriverRoutine_1dc850)(v2),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((_BYTE)result != 0) {
            result = ((__int64 (*)(__int64))CudaDriverRoutine_1dc9c0)(v2),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((_BYTE)result == 0) {
              result = CudaDriverRoutine_1dc000(v2),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (a2 == result) {
                result = CudaDriverRoutine_1dbb80(v2, 0),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
          }
        }
        v2 = *(_QWORD*)(v2 + 344);
      } while (v2 != 0);
    }
  }
  return result;
}

__int64 nvidia_1134b0(__int64 a1, char a2, __int64 a3)
{
  __int64 result;
  void* v7;
  unsigned int v8;

  result = ((__int64 (*)(int*))cuda_driver_12ea30)((int*)(a1 + 576));
  if ((_DWORD)result != 0) {
    if (a2 != 0) {
      return CudaDriverRoutine_8b5e0((__int64)&CudaDriverRoutine_4780 +
                                         (_QWORD)CudaDriverData_1422118,
                                     *(_DWORD*)(a1 + 348), a3);
    }
    else {
      v7 = CudaDriverData_1422118;
      cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                         (_QWORD)CudaDriverData_1422118);
      v8 =
          CudaDriverRoutine_8b5e0((__int64)&CudaDriverRoutine_4780 + (_QWORD)v7,
                                  *(_DWORD*)(a1 + 348), a3);
      CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v7);
      return v8;
    }
  }
  return result;
}

__int64 nvidia_118090(__int64 a1)
{
  __int64 result;
  void* v3;

  cuda_driver_12ea30((int*)(a1 + 576));
  result = ((__int64 (*)(int*))cuda_driver_12ea30)(
      (int*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 104LL) + 576LL));
  if ((_DWORD)result != 0) {
    v3 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                       (_QWORD)CudaDriverData_1422118);
    CudaDriverRoutine_8b420(
        (__int64)&CudaDriverRoutine_4780 + (_QWORD)v3, *(_DWORD*)(a1 + 348),
        (__int64)&CudaDriverRoutine_4780 + (_QWORD)v3,
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 104LL) + 348LL));
    return CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 +
                                    (_QWORD)v3);
  }
  return result;
}

__int64 nvidia_1236a0(_QWORD* a1)
{
  _BYTE* v2;
  __int64 v3;
  __int64 v4;
  _BOOL8* v5;
  __int64 result;
  unsigned int v7;
  unsigned int v8;
  struct {
    __int64 v9;
    char gap8_[4];
    int v10;
  } v9_;

  if (a1 == nullptr) {
    return 1;
  }
  v2 = (char*)a1 + 15907;
  if (CudaDriverRoutine_99700((_BOOL8)a1) && v2[256] == 0 || v2[466] != 0) {
    if (*((_BYTE*)&CudaDriverRoutine_743c + (_QWORD)CudaDriverData_1422118) !=
        0) {
      v3 = CudaDriverRoutine_12e510(1, 48);
      if (v3 == 0) {
        return 2;
      }
      *(_QWORD*)v3 = a1;
      *(_DWORD*)(v3 + 8) = 1;
      *(_DWORD*)(v3 + 40) = 0;
      v4 = a1[9];
      v5 = (_BOOL8*)v3;
      result = CudaDriverStub_10f430(v3, v4);
      if ((_DWORD)result != 0) {
        v7 = result;
        nvidia_10f380(v5);
        return v7;
      }
      return result;
    }
    return 0;
  }
  result = CudaDriverRoutine_123860(a1 + 29, (__int64)a1);
  if ((_DWORD)result != 0) {
    return result;
  }
  if ((unsigned __int8)CudaDriverRoutine_122070((__int64)a1) == 0) {
    return 0;
  }
  if (*((_BYTE*)((_UNKNOWN*)0x17BCLL) + (_QWORD)CudaDriverData_1422118) != 0) {
    v8 = 2;
  }
  else if (*v2 != 0 || cuda_debugger_api_7cff0() &&
                           (unsigned int)CudaDriverStub_10f720(a1[151]) == 2) {
    v8 = 4;
  }
  else {
    v8 = 0;
  }
  result = cuda_driver_1226c0((_DWORD*)a1[29], v8);
  if ((_DWORD)result == 0) {
    v9_.v9 = 1;
    CudaDriverRoutine_77ce0(1, &v9_.v10, (char*)&v9_.v10 + 3, &v9_.v9);
    if ((_BYTE)v9_.v10 == 0 && v2[573] != 0) {
      cuda_driver_misc_helpers_788c0();
      CudaDriverStub_78870();
    }
    return 0;
  }
  if ((_DWORD)result == 801) {
    CudaDriverRoutine_122550((_QWORD*)a1[29]);
    a1[29] = 0;
    return 0;
  }
  return result;
}

__int64 nvidia_12f5b0(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 21584))()) (*)())(
      *(__int64 (**)(void))(a1 + 21584)))(a1);
}

__int64 nvidia_12f6a0(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 20616))()) (*)())(
      *(__int64 (**)(void))(a1 + 20616)))(a1);
}

__int64 nvidia_130a80(_QWORD* a1)
{
  __int64 v2;
  int* v3;
  int v4;
  int v5;
  __int64 v13;
  int* v14;
  __int64 v15;
  unsigned __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  _BOOL4 v21;
  unsigned __int64 v22;
  unsigned int v23;
  unsigned __int64 v24;
  char* v25;
  int v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  bool v38;
  __int64 v39;
  unsigned int v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  unsigned int v45;
  unsigned int v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned int v50;
  char* v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  struct {
    _DWORD v61[4];
    unsigned __int8 v62;
  } v61_;
  struct {
    __int64 v63;
    char gap608_[4];
    int v64[3];
  } v63_;

  v2 = CudaDriverStub_12e330(728);
  v63_.v63 = v2;
  if (v2 == 0) {
    return 2;
  }
  v3 = (int*)v2;
  memset_plt(v2, 0, 0x2D8u);
  if (CudaDriverData_1435727 == 0) {
    v4 = CudaDriverRoutine_12e300();
    CudaDriverData_1434ce4 = v4 == 0;
    if (v4 != 0) {
      CudaDriverData_1435726 = 0;
    }
    else if (CudaDriverData_1434ce5 == 0x2D5550472D47494DLL) {
      CudaDriverData_1435726 = 0;
      v61_.v61[0] = 0;
      v63_.v64[0] = 0;
      if (sscanf_plt(CudaDriverData_1434ced, "%*[^/]/%u/%u", v61_.v61,
                     v63_.v64) >= 1) {
        CudaDriverData_1435f10 = 1;
        CudaDriverData_1435f14 = v61_.v61[0];
        CudaDriverData_1435f18 = 1;
        CudaDriverData_1435f1c = v63_.v64[0];
      }
    }
    else if ((_DWORD)CudaDriverData_1434ce5 == 760565831) {
      CudaDriverData_1435726 = 1;
    }
    else {
      CudaDriverData_1435726 = (_DWORD)CudaDriverData_1434ce5 == 759646541;
      if ((_DWORD)CudaDriverData_1434ce5 == 759646541 &&
          sscanf_plt((const char*)&CudaDriverData_1434ce5, "%[^,]",
                     &CudaDriverData_1435f21) >= 1) {
        CudaDriverData_1435f20 = 1;
      }
    }
  }
  v5 = CudaDriverData_1435df8(v3);
  if (v5 != 100 && v5 != 0) {
    goto LABEL_63;
  }
  v5 = CudaDriverData_1435d58(v3);
  if (v5 != 100 && v5 != 0) {
    goto LABEL_63;
  }
  v5 = CudaDriverData_1435da8(v3);
  if (v5 != 100 && v5 != 0) {
    goto LABEL_63;
  }
  v5 = CudaDriverData_1435e48(v3);
  if (v5 != 100 && v5 != 0) {
    goto LABEL_63;
  }
  v5 = CudaDriverData_1435e98(v3);
  if (v5 != 100 && v5 != 0) {
    goto LABEL_63;
  }
  v13 = *((_QWORD*)v3 + 89);
  if (v13 == 0) {
    v5 = 100;
    goto LABEL_63;
  }
  if ((CudaDriverData_1436001 & 1) != 0) {
    v21 = (CudaDriverData_1436001 & 2) == 0;
    do {
      if (*(_DWORD*)(v13 + 21864) != 1 &&
          (*(_WORD*)(v13 + 16848) & 0x100) == 0) {
        v5 = CudaDriverRoutine_634b0(v13, v21);
        if ((CudaDriverData_1436001 & 1) == 0 && v5 != 0) {
          goto LABEL_63;
        }
      }
      v13 = *(_QWORD*)(v13 + 22000);
    } while (v13 != 0);
  }
  cuda_driver_1312a0(v3);
  if (*v3 >= 1) {
    v14 = v3 + 2;
    v15 = 0;
    while (CudaDriverData_1434ac0 == 0) {
      v19 = 0;
      v18 = 0;
    LABEL_43:
      *(_DWORD*)(*(_QWORD*)&v14[2 * v15] + 17084LL) = v19;
      *(_DWORD*)(*(_QWORD*)&v14[2 * v15] + 17088LL) = v18;
      memset_plt((__int64)v61_.v61, 0, 0x250u);
      v5 = CudaDriverRoutine_ec740(*(_QWORD*)&v14[2 * v15], 0,
                                   (__int64)v61_.v61);
      if (v5 != 0) {
        goto LABEL_63;
      }
      *(_BYTE*)(*(_QWORD*)&v14[2 * v15] + 17092LL) = (v61_.v61[0] & 0x20) != 0;
      v20 = *(_QWORD*)&v14[2 * v15];
      if (*(_BYTE*)(v20 + 17092) == 0 && *(_DWORD*)(v20 + 17084) == 0) {
        *(_DWORD*)(v20 + 3436) = 0;
      }
      if (++v15 >= *v3) {
        goto LABEL_60;
      }
    }
    v17 = 0;
    v18 = 0;
    v19 = 0;
    while (1) {
      memset_plt((__int64)v61_.v61, 0, 0x250u);
      v5 = CudaDriverRoutine_ec740(*(_QWORD*)&v14[2 * v15],
                                   *(_QWORD*)&v14[2 * v17], (__int64)v61_.v61);
      if (v5 != 0) {
        goto LABEL_63;
      }
      ++v17;
      v19 += (v61_.v61[0] & 0x20) != 0;
      v18 += v61_.v62 & ((int)(v61_.v61[0] << 26) >> 31);
      if (v17 >= (unsigned int)CudaDriverData_1434ac0) {
        goto LABEL_43;
      }
    }
  }
LABEL_60:
  v5 = CudaDriverRoutine_131340((__int64)v3);
  if (v5 != 0 ||
      (CudaDriverRoutine_12f760(),
       (v5 = CudaDriverRoutine_131400((__int64)v3)) != 0) ||
      (v5 = CudaDriverRoutine_1309c0((__int64)v3)) != 0) {
  LABEL_63:
    v22 = (unsigned int)CudaDriverData_1436534;
    v23 = v5;
    if (CudaDriverData_1436534 != 0) {
      v24 = 0;
      v25 = (char*)&CudaDriverData_1436538;
      do {
        if (v25[12] != 0) {
          CudaDriverData_1435d70(v3, v25);
          v22 = (unsigned int)CudaDriverData_1436534;
        }
        v25 += 144;
        ++v24;
      } while (v24 < v22);
    }
    cuda_driver_131480(&v63_.v63);
    return v23;
  }
  v26 = *v3;
  if ((CudaDriverData_1438c88 & 6) == 4) {
    if (v26 >= 1) {
      v27 = (__int64*)(v3 + 2);
      v28 = (unsigned int)*v3;
      while (1) {
        v30 = *v27++;
        v29 = v30;
        if ((*(_WORD*)(v30 + 16848) & 0x600) == 0 &&
            *(_BYTE*)(v29 + 3368) == 0) {
          break;
        }
        if (--v28 == 0) {
          goto LABEL_76;
        }
      }
      v5 = 804;
      goto LABEL_63;
    }
  }
  else {
  LABEL_76:
    if (v26 >= 1) {
      v31 = 0;
      do {
        *(_DWORD*)(*(_QWORD*)&v3[2 * v31 + 2] + 16984LL) = v31;
        ++v31;
        v32 = *v3;
      } while (v31 < v32);
      if ((int)v32 >= 1) {
        v33 = v3 + 2;
        v34 = 2;
        v35 = 0;
        do {
          v36 = v35 + 1;
          if ((*(_BYTE*)(*(_QWORD*)&v33[2 * v35] + 16978LL) & 2) != 0 &&
              v36 < (int)v32) {
            v37 = v34;
            do {
              if (*(_DWORD*)(*(_QWORD*)&v3[2 * v37] + 16980LL) ==
                  *(_DWORD*)(*(_QWORD*)&v33[2 * v35] + 16980LL)) {
                *(_DWORD*)(*(_QWORD*)&v3[2 * v37] + 16984LL) =
                    *(_DWORD*)(*(_QWORD*)&v33[2 * v35] + 16984LL);
                LODWORD(v32) = *v3;
              }
              v38 = (int)v32 <= (int)v37++;
            } while (!v38);
          }
          ++v34;
          ++v35;
        } while (v36 < (int)v32);
      }
    }
  }
  CudaDriverData_143bbd8 = -1;
  CudaDriverData_1435728 = -1;
  LODWORD(v39) = *v3;
  if (*v3 >= 1) {
    v40 = -1;
    v41 = -1;
    v42 = 1;
    v43 = -1;
    while (1) {
      v44 = *(_QWORD*)&v3[2 * v42];
      v45 = *(_DWORD*)(v44 + 3152);
      if (v43 > v45) {
        break;
      }
      if (v43 == v45) {
        v46 = v43;
        if (v40 > *(_DWORD*)(v44 + 3156)) {
          break;
        }
      }
      else {
        v46 = *(_DWORD*)(v44 + 3152);
      }
    LABEL_97:
      if (CudaDriverData_1435730 < v46 ||
          CudaDriverData_1435730 == v46 &&
              (unsigned int)CudaDriverData_1435734 < *(_DWORD*)(v44 + 3156)) {
        CudaDriverData_1435730 = v46;
        CudaDriverData_1435734 = *(_DWORD*)(*(_QWORD*)&v3[2 * v42] + 3156LL);
        v44 = *(_QWORD*)&v3[2 * v42];
      }
      v47 = *(_QWORD*)(v44 + 4280);
      if (v41 > v47) {
        CudaDriverData_143bbd8 = v47;
        v41 = v47;
      }
      v39 = *v3;
      v38 = v42++ < v39;
      if (!v38) {
        goto LABEL_103;
      }
    }
    LODWORD(CudaDriverData_1435728) = *(_DWORD*)(v44 + 3152);
    v43 = v45;
    v40 = *(_DWORD*)(*(_QWORD*)&v3[2 * v42] + 3156LL);
    HIDWORD(CudaDriverData_1435728) = v40;
    v44 = *(_QWORD*)&v3[2 * v42];
    v46 = *(_DWORD*)(v44 + 3152);
    goto LABEL_97;
  }
LABEL_103:
  v48 = (unsigned int)CudaDriverData_1436534;
  if (CudaDriverData_1436534 != 0) {
    v49 = 0;
    do {
      v50 = *((_DWORD*)&CudaDriverData_14347a8 + 36 * v49 + 1892);
      if (v50 != 0 && *((_QWORD*)v3 + 89) != 0) {
        v51 = (char*)&CudaDriverData_14347a8 + 144 * v49 + 7584;
        if (v50 >= 4) {
          v52 = 0;
          v53 = 0;
          do {
            v56 = *((_QWORD*)v3 + 89);
            while (*(_DWORD*)(v56 + 21868) != *(_DWORD*)&v51[4 * v52] ||
                   *(_BYTE*)(v56 + 4) != 0 || *(_DWORD*)(v56 + 21864) != 0) {
              v56 = *(_QWORD*)(v56 + 22000);
              if (v56 == 0) {
                goto LABEL_131;
              }
            }
            ++v53;
          LABEL_131:
            v57 = *((_QWORD*)v3 + 89);
            while (*(_DWORD*)(v57 + 21868) != *(_DWORD*)&v51[4 * v52 + 4] ||
                   *(_BYTE*)(v57 + 4) != 0 || *(_DWORD*)(v57 + 21864) != 0) {
              v57 = *(_QWORD*)(v57 + 22000);
              if (v57 == 0) {
                goto LABEL_137;
              }
            }
            ++v53;
          LABEL_137:
            v58 = *((_QWORD*)v3 + 89);
            while (*(_DWORD*)(v58 + 21868) != *(_DWORD*)&v51[4 * v52 + 8] ||
                   *(_BYTE*)(v58 + 4) != 0 || *(_DWORD*)(v58 + 21864) != 0) {
              v58 = *(_QWORD*)(v58 + 22000);
              if (v58 == 0) {
                goto LABEL_143;
              }
            }
            ++v53;
          LABEL_143:
            v59 = *((_QWORD*)v3 + 89);
            while (*(_DWORD*)(v59 + 21868) != *(_DWORD*)&v51[4 * v52 + 12] ||
                   *(_BYTE*)(v59 + 4) != 0 || *(_DWORD*)(v59 + 21864) != 0) {
              v59 = *(_QWORD*)(v59 + 22000);
              if (v59 == 0) {
                goto LABEL_124;
              }
            }
            ++v53;
          LABEL_124:
            v52 += 4;
          } while (v52 != (v50 & 0xFFFFFFFC));
        }
        else {
          v52 = 0;
          v53 = 0;
        }
        if ((v50 & 3) != 0) {
          v54 = 0;
          do {
            v55 = *((_QWORD*)v3 + 89);
            while (*(_DWORD*)(v55 + 21868) != *(_DWORD*)&v51[4 * v52] ||
                   *(_BYTE*)(v55 + 4) != 0 || *(_DWORD*)(v55 + 21864) != 0) {
              v55 = *(_QWORD*)(v55 + 22000);
              if (v55 == 0) {
                goto LABEL_112;
              }
            }
            ++v53;
          LABEL_112:
            ++v52;
            ++v54;
          } while (v54 != (v50 & 3));
        }
      }
      else {
        v53 = 0;
      }
      if (v53 == v50) {
        v5 = CudaDriverData_1435d68(v3);
        if (v5 != 0) {
          goto LABEL_63;
        }
        v48 = (unsigned int)CudaDriverData_1436534;
      }
      ++v49;
    } while (v49 < v48);
    LODWORD(v39) = *v3;
  }
  if ((int)v39 >= 1) {
    v60 = 1;
    do {
      nvidia_12f6a0(*(_QWORD*)&v3[2 * v60]);
      v38 = v60++ < *v3;
    } while (v38);
  }
  *a1 = v3;
  return 0;
}

__int64 nvidia_19d940(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 23375672))()) (*)())(
      *(__int64 (**)(void))(a1 + 23375672)))(a1);
}

__int64 nvidia_1acac0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  _DWORD* v4;
  unsigned int v7;
  int v8;
  int v9;
  unsigned __int16 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  _DWORD* v24;
  _DWORD* v25;
  __int64 v26;
  void* v27;
  int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  int v37;
  unsigned int v38;
  __int64 v39;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned int v44;
  __int64 v45;
  unsigned int v46;
  unsigned int v47;
  uint32x2_t v48;
  __int64 v49;
  void* v50;
  unsigned int v51;
  unsigned __int16 v52;
  __int64 v53;
  unsigned int v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned int v57;
  int v58;
  int v59;
  unsigned __int64 v60;
  unsigned int v61;
  bool v62;
  unsigned __int64 v63;
  unsigned __int8 v64;
  __int64 v65;
  int v66;
  unsigned __int8 v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  _DWORD* v73;
  _DWORD* v74;
  _DWORD* v75;
  int v76;
  unsigned int v77;
  _DWORD* v78;
  _DWORD* v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  __int64 v85;
  __int64 v86;
  unsigned int v87;
  unsigned int v88;
  __int64 v89;
  unsigned int v90;
  unsigned int v91;
  __int64 v92;
  unsigned int v93;
  int v94;
  _DWORD* v95;
  int v96;
  int v97;
  int v98;
  int v99;
  __int64 v100;
  _DWORD* v102;
  __int64 v103;
  struct {
    _DWORD v105[11];
    int v106;
  } v105_;
  __int64 v107;

  v3 = *(_QWORD*)(a3 + 8);
  v4 = *(_DWORD**)(a3 + 16);
  v107 = 0;
  CudaDriverRoutine_bbdf0(a2);
  if (*(_BYTE*)(a3 + 201) == 0) {
    *(_OWORD*)v3 = (__typeof__(*(_OWORD*)v3)){0};
    *(_OWORD*)(v3 + 16) = (__typeof__(*(_OWORD*)(v3 + 16))){0};
    *(_OWORD*)(v3 + 32) = (__typeof__(*(_OWORD*)(v3 + 32))){0};
    *(_OWORD*)(v3 + 48) = (__typeof__(*(_OWORD*)(v3 + 48))){0};
    *(_OWORD*)(v3 + 64) = (__typeof__(*(_OWORD*)(v3 + 64))){0};
    *(_OWORD*)(v3 + 80) = (__typeof__(*(_OWORD*)(v3 + 80))){0};
    *(_OWORD*)(v3 + 96) = (__typeof__(*(_OWORD*)(v3 + 96))){0};
    *(_OWORD*)(v3 + 112) = (__typeof__(*(_OWORD*)(v3 + 112))){0};
    *(_OWORD*)(v3 + 128) = (__typeof__(*(_OWORD*)(v3 + 128))){0};
    *(_OWORD*)(v3 + 144) = (__typeof__(*(_OWORD*)(v3 + 144))){0};
    *(_OWORD*)(v3 + 160) = (__typeof__(*(_OWORD*)(v3 + 160))){0};
    *(_OWORD*)(v3 + 176) = (__typeof__(*(_OWORD*)(v3 + 176))){0};
    *(_OWORD*)(v3 + 192) = (__typeof__(*(_OWORD*)(v3 + 192))){0};
    *(_OWORD*)(v3 + 208) = (__typeof__(*(_OWORD*)(v3 + 208))){0};
    *(_OWORD*)(v3 + 224) = (__typeof__(*(_OWORD*)(v3 + 224))){0};
    *(_OWORD*)(v3 + 240) = (__typeof__(*(_OWORD*)(v3 + 240))){0};
    *(_OWORD*)(v3 + 256) = (__typeof__(*(_OWORD*)(v3 + 256))){0};
    *(_OWORD*)(v3 + 272) = (__typeof__(*(_OWORD*)(v3 + 272))){0};
    *(_OWORD*)(v3 + 288) = (__typeof__(*(_OWORD*)(v3 + 288))){0};
    *(_OWORD*)(v3 + 304) = (__typeof__(*(_OWORD*)(v3 + 304))){0};
    *(_OWORD*)(v3 + 320) = (__typeof__(*(_OWORD*)(v3 + 320))){0};
    *(_OWORD*)(v3 + 336) = (__typeof__(*(_OWORD*)(v3 + 336))){0};
    *(_OWORD*)(v3 + 352) = (__typeof__(*(_OWORD*)(v3 + 352))){0};
    *(_OWORD*)(v3 + 368) = (__typeof__(*(_OWORD*)(v3 + 368))){0};
    if (CudaDriverStub_b9300(a2)) {
      memset_plt(*(_QWORD*)(a3 + 16), 0, 0x800u);
    }
  }
  v7 = *(_DWORD*)v3 & 0xFC7FFFFF;
  *(_DWORD*)v3 = v7 | 0x1000000;
  *(_DWORD*)(v3 + 128) = *(_DWORD*)(a3 + 156);
  v8 = *(unsigned __int16*)(v3 + 134) << 16;
  *(_WORD*)(v3 + 132) = *(_DWORD*)(a3 + 160);
  v9 = *(unsigned __int16*)(v3 + 138) << 16;
  *(_WORD*)(v3 + 136) = *(_DWORD*)(a3 + 164);
  if (*(_BYTE*)(a3 + 204) != 0) {
    *(_DWORD*)v3 = v7 | 0x2000000;
    *(_DWORD*)(v3 + 128) = 1;
    *(_DWORD*)(v3 + 132) = v8 | 1;
    *(_DWORD*)(v3 + 136) = v9 | 1;
    v10 = *(_DWORD*)(a3 + 156);
    *(_WORD*)(v3 + 276) = v10;
    *(_DWORD*)(v3 + 276) = v10 | ((unsigned __int16)*(_DWORD*)(a3 + 160) << 16);
    *(_WORD*)(v3 + 280) = *(_DWORD*)(a3 + 164);
  }
  v11 = *(_DWORD*)(a3 + 180);
  if (v11 != 0) {
    v12 = v7 | 0x1800000;
    v14 = *(_DWORD*)(a3 + 184);
    v13 = *(_DWORD*)(a3 + 188);
    *(_DWORD*)v3 = v7 | 0x1800000;
    if (*(_BYTE*)(a3 + 204) != 0) {
      v12 = v7 | 0x2800000;
      *(_DWORD*)v3 = v7 | 0x2800000;
      *(_DWORD*)(v3 + 136) = v9 | 1;
      *(_DWORD*)(v3 + 128) = 1;
      *(_DWORD*)(v3 + 132) = v8 | 1;
      v15 = *(_DWORD*)(a3 + 156) / *(_DWORD*)(a3 + 180);
      *(_WORD*)(v3 + 276) = v15;
      *(_DWORD*)(v3 + 276) =
          (unsigned __int16)v15 |
          ((unsigned __int16)(*(_DWORD*)(a3 + 160) / *(_DWORD*)(a3 + 184))
           << 16);
      *(_WORD*)(v3 + 280) = *(_DWORD*)(a3 + 164) / *(_DWORD*)(a3 + 188);
    }
    else {
      *(_DWORD*)(v3 + 128) = *(_DWORD*)(a3 + 156) / *(_DWORD*)(a3 + 180);
      *(_DWORD*)(v3 + 132) =
          (unsigned __int16)(*(_DWORD*)(a3 + 160) / *(_DWORD*)(a3 + 184)) | v8;
      *(_DWORD*)(v3 + 136) =
          (unsigned __int16)(*(_DWORD*)(a3 + 164) / *(_DWORD*)(a3 + 188)) | v9;
    }
    v16 = *(_DWORD*)(v3 + 268) & 0xFFFFFFC0 | *(_DWORD*)(a3 + 180) & 0x3F;
    *(_DWORD*)(v3 + 268) = v16;
    v17 = v16 & 0xFFFFC0FF | ((*(_DWORD*)(a3 + 184) & 0x3F) << 8);
    *(_DWORD*)(v3 + 268) = v17;
    *(_DWORD*)(v3 + 268) =
        v17 & 0xFFC0FFFF | ((*(_DWORD*)(a3 + 188) & 0x3F) << 16);
    v18 = *(_DWORD*)(v3 + 272);
    if (*(_DWORD*)(a3 + 192) == 2) {
      v19 = v18 & 0x7FFFFFFF;
      v20 = v14 * v11;
      v21 = *(_DWORD*)(v3 + 928);
      *(_DWORD*)(v3 + 272) = v19;
      if (v21 != 1) {
      LABEL_15:
        v22 = v20 * v13;
        v23 = *(_DWORD*)(a3 + 192);
        if (v23 == 1) {
          if (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3736LL) >= v22) {
            goto LABEL_37;
          }
        }
        else if (v23 != 2 ||
                 v21 >= (v22 + *(int*)(*(_QWORD*)(a1 + 64) + 3736LL) - 1) /
                            *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3736LL)) {
          goto LABEL_37;
        }
        *(_DWORD*)v3 = v12 | 0x80000000;
        v24 = *(_DWORD**)(CudaDriverRoutine_98340(a1) + 16104);
        v25 = *(_DWORD**)(CudaDriverRoutine_98340(a1) + 16104);
        v26 = CudaDriverRoutine_98340(a1);
        v27 = CudaDriverData_1422118;
        if (*(_QWORD*)(v26 + 1072) == 0 || (*((_BYTE*)&CudaDriverRoutine_7488 +
                                              (_QWORD)CudaDriverData_1422118) &
                                            1) != 0) {
          *(_DWORD*)(v3 + 304) = v24[1118];
          if (*(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072) == 0) {
            goto LABEL_28;
          }
        }
        else {
          *(_DWORD*)(v3 + 304) = v25[1122] & v24[1118];
          if (*(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072) == 0) {
            goto LABEL_28;
          }
        }
        if ((*((_BYTE*)&CudaDriverRoutine_7488 + (_QWORD)v27) & 1) == 0) {
          *(_DWORD*)(v3 + 308) = v25[1123] & v24[1119];
          if (*(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072) == 0) {
            goto LABEL_32;
          }
          goto LABEL_29;
        }
      LABEL_28:
        *(_DWORD*)(v3 + 308) = v24[1119];
        if (*(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072) != 0) {
        LABEL_29:
          if ((*((_BYTE*)&CudaDriverRoutine_7488 + (_QWORD)v27) & 1) == 0) {
            *(_DWORD*)(v3 + 312) = v25[1124] & v24[1120];
            if (*(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072) != 0) {
            LABEL_33:
              if ((*((_BYTE*)&CudaDriverRoutine_7488 + (_QWORD)v27) & 1) == 0) {
                v28 = v25[1125] & v24[1121];
              LABEL_36:
                *(_DWORD*)(v3 + 316) = v28;
                goto LABEL_37;
              }
            }
          LABEL_35:
            v28 = v24[1121];
            goto LABEL_36;
          }
        }
      LABEL_32:
        *(_DWORD*)(v3 + 312) = v24[1120];
        if (*(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072) == 0) {
          goto LABEL_35;
        }
        goto LABEL_33;
      }
    }
    else {
      v19 = v18 | 0x80000000;
      v20 = v14 * v11;
      v21 = *(_DWORD*)(v3 + 928);
      *(_DWORD*)(v3 + 272) = v19;
      if (v21 != 1) {
        goto LABEL_15;
      }
    }
    *(_DWORD*)(v3 + 272) = v19 & 0x7FFFFFFF;
    goto LABEL_15;
  }
LABEL_37:
  if (*(_BYTE*)(a3 + 225) != 0) {
    v29 = 0x40000000;
  }
  else {
    v29 = 0;
  }
  v30 = *(_DWORD*)(v3 + 140) & 0xBFFFFFFF | v29;
  *(_DWORD*)(v3 + 140) = v30;
  if (*(_BYTE*)(a3 + 224) != 0) {
    v31 = 0x80000000;
  }
  else {
    v31 = 0;
  }
  v32 = v31 & 0x80000000 | v30 & 0x7FFFFFFF;
  *(_DWORD*)(v3 + 140) = v32;
  if (*(_BYTE*)(a3 + 198) != 0) {
    *(_DWORD*)v3 |= 0x40000000u;
  }
  v33 = *(_DWORD*)(v3 + 44);
  if (*(_BYTE*)(a3 + 199) != 0) {
    v33 |= 0x4000000u;
    *(_DWORD*)(v3 + 44) = v33;
  }
  v34 = v33 & 0xF7FFFFFF;
  if (*(_BYTE*)(a3 + 202) != 0) {
    v35 = 0x8000000;
  }
  else {
    v35 = 0;
  }
  v36 = v35 | v34;
  v37 = *(_DWORD*)(v3 + 72);
  *(_DWORD*)(v3 + 44) = v36;
  *(_DWORD*)(v3 + 72) = v37 & 0x3FFFFFF | 0x3C000000;
  if (*(_BYTE*)(a3 + 207) != 0) {
    *(_DWORD*)(v3 + 72) = v37 & 0x3FFFFFF | 0xBC000000;
  }
  if ((*(_WORD*)(a2 + 977) & 0x1000) != 0) {
    v38 = v32 & 0xFFFCFFFF;
  }
  else if (*(_BYTE*)(a3 + 206) == 0 ||
           *(_DWORD*)&CudaDriverData_4398[(_QWORD)CudaDriverData_1422118 + 4] !=
               0) {
    v38 = v32 & 0xFFFCFFFF | 0x10000;
  }
  else {
    v38 = v32 | 0x30000;
    v36 |= 0x40000000u;
  }
  *(_DWORD*)(v3 + 140) = v38;
  *(_DWORD*)(v3 + 40) &= 0xFFF7FFF7;
  *(_DWORD*)(v3 + 44) = v36 & 0xFFFFFFF7;
  if (CudaDriverRoutine_bbe30(a2)) {
    v39 = CudaDriverRoutine_98340(a1);
    v40 = *(_DWORD*)(v3 + 156);
    *(_DWORD*)(v3 + 152) = *(_QWORD*)(v39 + 2392);
    v41 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2396);
  LABEL_60:
    *(_DWORD*)(v3 + 156) = v40 & 0xFE000000 | v41 & 0x1FFFFFF;
    goto LABEL_61;
  }
  if ((*(_WORD*)(a2 + 977) & 8) != 0) {
    CudaDriverRoutine_928b0(a2, v105_.v105, &v105_.v106);
    v84 = *(_DWORD*)(v3 + 156) & 0xFE000000 | v105_.v106 & 0x1FFFFFF;
    *(_DWORD*)(v3 + 152) = v105_.v105[0];
    *(_DWORD*)(v3 + 156) = v84;
  }
  else {
    if ((*(_BYTE*)(a2 + 864) & 1) != 0) {
      v85 = CudaDriverRoutine_98340(a1);
      v40 = *(_DWORD*)(v3 + 156);
      *(_DWORD*)(v3 + 152) = *(_QWORD*)(v85 + 2424);
      v41 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2428);
      goto LABEL_60;
    }
    if (*(_BYTE*)(a3 + 204) != 0 && *(_BYTE*)(a3 + 205) != 0) {
      v45 = CudaDriverRoutine_98340(a1);
      v40 = *(_DWORD*)(v3 + 156);
      *(_DWORD*)(v3 + 152) = *(_QWORD*)(v45 + 2408);
      v41 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2412);
      goto LABEL_60;
    }
    CudaDriverRoutine_bbd70(a2, &v107);
    v94 = HIDWORD(v107) & 0x1FFFFFF | (*(_DWORD*)(v3 + 156) >> 25 << 25);
    *(_DWORD*)(v3 + 152) = v107;
    *(_DWORD*)(v3 + 156) = v94;
  }
LABEL_61:
  v42 = *(_DWORD*)(v3 + 68);
  *(_DWORD*)(v3 + 68) = v42 | 0x1000000;
  v43 = *(_DWORD*)(*(_QWORD*)(a2 + 32) + 276LL);
  if (v43 != 0) {
    if (v43 == 2) {
      v44 = v42 & 0xFCFFFFFF | 0x1000000;
    }
    else {
      if (v43 != 1) {
        return 0;
      }
      v44 = v42 | 0x3000000;
    }
    *(_DWORD*)(v3 + 68) = v44;
  }
  v46 = *(_DWORD*)(v3 + 912);
  v47 = *(_DWORD*)(v3 + 924);
  PSEUDO_LOW_LANE64(v48, n64_u64, *(unsigned __int64*)(v3 + 916));
  if (CudaDriverRoutine_bbdf0(a2)) {
    if (v46 <= 0x100) {
      v46 = 256;
    }
    if (v47 <= 0x8000) {
      v47 = 0x8000;
    }
    LANES64(v48).n64_u64[0] =
        LANES64_OF(vmax_u32(v48, COERCE_AS(uint32x2_t, 0x800000008000LL)))
            .n64_u64[0];
  }
  v103 = a2;
  v49 = a1;
  v50 = CudaDriverData_1422118;
  v102 = v4;
  if (*((_BYTE*)((_UNKNOWN*)0x1D40LL) + (_QWORD)CudaDriverData_1422118) != 0) {
    v51 = *(_DWORD*)((char*)((_UNKNOWN*)0x1D48LL) +
                     (_QWORD)CudaDriverData_1422118);
  }
  else {
    v51 = v46;
  }
  *(_DWORD*)(v3 + 72) =
      *(_DWORD*)(v3 + 72) & 0xFC0000FF | ((v51 & 0x3FFFF) << 8);
  if (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)v50 + 3) != 0) {
    *(_DWORD*)(v3 + 924) = v47;
    *(uint32x2_t*)(v3 + 916) = v48;
  }
  else {
    *(_DWORD*)(v3 + 76) &= 0xFFF80000;
  }
  v52 = *(_DWORD*)(a3 + 168);
  *(_WORD*)(v3 + 144) = v52;
  *(_DWORD*)(v3 + 144) = v52 | ((unsigned __int16)*(_DWORD*)(a3 + 172) << 16);
  *(_WORD*)(v3 + 148) = *(_DWORD*)(a3 + 176);
  v53 = *(_QWORD*)(a1 + 64);
  if (*(_DWORD*)(v53 + 3776) != 0) {
    v54 = 1536;
    v55 = 104;
    v56 = 0;
    do {
      v60 = a3 + 8 * v56;
      if (*(_QWORD*)(v60 + 40) != 0) {
        v61 = (unsigned int)(*(int*)(a3 + v55) + *(int*)(v53 + 3784) - 1) /
              *(_DWORD*)(v53 + 3784) * *(int*)(v53 + 3784);
        v62 = CudaDriverRoutine_e7cb0(v49, a3, v56);
        v63 = *(_QWORD*)(v60 + 40);
        *(_DWORD*)(v3 + 4LL * ((unsigned int)(v55 + 312) >> 5)) |=
            1 << ((v55 - 104) & 0x1C);
        *(_DWORD*)(v3 + 4LL * ((v54 + 51) >> 5)) =
            (v61 << 15) & 0xFFF80000 |
            *(_DWORD*)(v3 + 4LL * ((v54 + 51) >> 5)) & 0x7FFFF;
        *(_DWORD*)(v3 + 4LL * ((v54 + 32) >> 5)) =
            (v63 >> 38) & 0x7FFFF |
            (*(_DWORD*)(v3 + 4LL * ((v54 + 32) >> 5)) >> 19 << 19);
        *(_DWORD*)(v3 + 4LL * (v54 >> 5)) = v63 >> 6;
        if (v62) {
          if (*((_BYTE*)((_UNKNOWN*)0x1164LL) +
                (_QWORD)CudaDriverData_1422118) != 0) {
            *(_DWORD*)(v3 + 4LL * ((unsigned int)(v55 + 315) >> 5)) |=
                1 << (v55 + 59);
          }
          else {
            *(_DWORD*)(v3 + 72) |= 0x80000000;
          }
        }
        v49 = a1;
        v57 = (unsigned int)(v55 + 313) >> 5;
        v58 = *(_DWORD*)(v3 + 4LL * v57);
        v59 = 3 << ((v55 + 57) & 0x1D);
      }
      else {
        v57 = (unsigned int)(v55 + 312) >> 5;
        v58 = *(_DWORD*)(v3 + 4LL * v57);
        v59 = 1 << ((v55 - 104) & 0x1C);
      }
      *(_DWORD*)(v3 + 4LL * v57) = v58 & ~v59;
      v53 = *(_QWORD*)(v49 + 64);
      ++v56;
      v55 += 4;
      v54 += 64;
    } while (v56 < *(unsigned int*)(v53 + 3776));
  }
  v64 = *(_BYTE*)(v3 + 67);
  v65 = v49;
  v66 =
      *(_DWORD*)(CudaDriverRoutine_98340(v49) + 1276) & 0xFFFFFF | (v64 << 24);
  v67 = *(_BYTE*)(v3 + 71);
  *(_DWORD*)(v3 + 64) = v66;
  v68 =
      *(_DWORD*)(CudaDriverRoutine_98340(v65) + 1280) & 0xFFFFFF | (v67 << 24);
  v69 = *(_DWORD*)(v3 + 148);
  *(_DWORD*)(v3 + 68) = v68;
  v70 =
      v69 & 0x7FFFFFF | ((unsigned __int8)CudaDriverRoutine_bc770(v103) << 27);
  *(_DWORD*)(v3 + 148) = v70;
  if (*(_DWORD*)(v103 + 392) != 0) {
    v71 = (*(_DWORD*)(v103 + 392) & 0x1FF) << 16;
  }
  else {
    v71 = 196608;
  }
  *(_DWORD*)(v3 + 148) = v71 | v70 & 0xFE00FFFF;
  if (*(_BYTE*)(a3 + 376) != 0) {
    v72 = *(unsigned __int8*)(a3 + 377);
    v73 = (_DWORD*)(a3 + 380);
    memset(v105_.v105, 0, 32);
    if (v72 != 0) {
      v74 = *(_DWORD**)(CudaDriverRoutine_98340(a1) + 64);
      v75 = v102;
      v76 = v74[1097];
      if (v76 == 0) {
        goto LABEL_106;
      }
      v77 = v74[929];
      v78 = v74 + 2140;
      v79 = v74 + 2396;
      if (v76 == 1) {
        v80 = 0;
      }
      else {
        v86 = 2;
        v80 = 0;
        do {
          v88 = v73[v80 >> 5];
          if (((v88 >> (v80 & 0x1E)) & 1) != 0) {
            v89 = (4LL * (unsigned int)(v86 - 2)) & 0x3FFFFFFF0LL;
            v90 = *(_DWORD*)((char*)v78 + v89);
            if (v90 >= v77) {
              v91 = v90 - v77 + v74[928];
            }
            else {
              v91 = *(int*)((char*)v79 + v89) + v74[938] * v90;
            }
            v105_.v105[v91 >> 5] |= 1 << v91;
          }
          if (((v88 >> (v80 + 1)) & 1) != 0) {
            v92 = (4 * v86) & 0x3FFFFFFF8LL;
            v93 = *(_DWORD*)((char*)v78 + v92);
            if (v93 < v77) {
              v87 = *(int*)((char*)v79 + v92) + v74[938] * v93;
            }
            else {
              v87 = v93 - v77 + v74[928];
            }
            v105_.v105[v87 >> 5] |= 1 << v87;
          }
          v80 += 2LL;
          v86 += 4;
        } while ((v76 & 0xFFFFFFFE) != v80);
      }
      if ((v76 & 1) != 0 && ((v73[v80 >> 5] >> v80) & 1) != 0) {
        v81 = 2 * (v80 & 0x7FFFFFFF);
        v82 = v78[v81];
        if (v82 >= v77) {
          v83 = v82 - v77 + v74[928];
        }
        else {
          v83 = v79[v81] + v74[938] * v82;
        }
        v73 = v105_.v105;
        v105_.v105[v83 >> 5] |= 1 << v83;
        if (*(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072) != 0) {
        LABEL_127:
          if ((*((_BYTE*)&CudaDriverRoutine_7488 +
                 (_QWORD)CudaDriverData_1422118) &
               1) == 0) {
            v95 = *(_DWORD**)(CudaDriverRoutine_98340(a1) + 16104);
            v96 = v73[1];
            *(_DWORD*)v73 &= v95[1122];
            v97 = v96 & v95[1123];
            v98 = v73[2];
            v99 = v73[3];
            v73[1] = v97;
            v73[2] = v98 & v95[1124];
            v73[3] = v99 & v95[1125];
          }
        }
      }
      else {
      LABEL_106:
        v73 = v105_.v105;
        if (*(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072) != 0) {
          goto LABEL_127;
        }
      }
    }
    else {
      v75 = v102;
      if (*(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072) != 0) {
        goto LABEL_127;
      }
    }
    *(_DWORD*)v3 |= 0x80000000;
    *(_DWORD*)(v3 + 304) = *(_DWORD*)v73;
    *(_DWORD*)(v3 + 308) = v73[1];
    *(_DWORD*)(v3 + 312) = v73[2];
    *(_DWORD*)(v3 + 316) = v73[3];
    if (CudaDriverRoutine_bbdf0(v103)) {
      v75[128] |= 0x80000000;
      v75[204] = *(_DWORD*)v73;
      v75[205] = v73[1];
      v75[206] = v73[2];
      v75[207] = v73[3];
    }
  }
  if (*(_BYTE*)(a3 + 203) == 0) {
    *(_DWORD*)(v3 + 40) = *(_DWORD*)(v3 + 40) & 0xFFFFFFF8 | 3;
  }
  *(_BYTE*)(v3 + 72) = 64;
  *(_BYTE*)(v3 + 67) =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3164LL) << 24) +
                     (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3160LL) << 28)) >>
      24;
  v100 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_92a90(v100, v103, a3);
  return 0;
}

_DWORD* nvidia_1ae490(_DWORD** a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v11;
  __int64 v12;
  char v13;
  __int16 v14;
  __int64 v15;
  _DWORD* v16;
  unsigned __int64 v17;
  _DWORD* result;
  __int64 v19;
  struct {
    unsigned int v20;
    unsigned int v21;
  } v20_;
  struct {
    int v22;
    char gap12_[4];
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    char gap56_[8];
    __int16 v28;
    char gap66_[6];
    _DWORD** v29;
    char gap80_[8];
    char v30;
    char gap89_[7];
    __int64 v31;
  } v22_;
  _DWORD* v32;

  v5 = *(_QWORD*)(a5 + 8);
  v6 = *(_QWORD*)(a5 + 136);
  v32 = *a1;
  v11 = *(_QWORD*)(a3 + 32);
  v12 = *(_QWORD*)(v11 + 24);
  v13 = *(_BYTE*)(*(_QWORD*)(v12 + 16104) + 4508LL);
  v14 = *(_WORD*)(*(_QWORD*)(v12 + 64) + 17281LL);
  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)CudaDriverData_1432188) !=
      0) {
    v22_.v23 = *(_QWORD*)(v11 + 24);
    v22_.v24 = v11;
    v22_.v25 = a3;
    v22_.v26 = v5;
    v15 = *(_QWORD*)(v6 + 8);
    v22_.v22 = 104;
    v22_.v30 = v13;
    v22_.v28 = v14;
    v22_.v31 = a5;
    v22_.v27 = v15;
    v22_.v29 = &v32;
    cuda_driver_20b420(0xBu, 2u, (__int64)&v22_.v22);
  }
  if (CudaDriverStub_b9300(a3) && CudaDriverRoutine_bbdf0(a3)) {
    v16 = v32;
    v17 = (unsigned __int64)(*(_QWORD*)(v6 + 8) + 512LL) >> 8;
    *(_DWORD*)v32 = 536944813;
    v16[1] = v17;
    *((_QWORD*)v16 + 1) = 0x3200120B0LL;
    v32 = v16 + 4;
  }
  if (*(_BYTE*)(*(_QWORD*)(v12 + 16104) + 4508LL) == 0) {
    result = v32;
    goto LABEL_11;
  }
  result = v32;
  if (*(_BYTE*)(a5 + 197) != 0) {
  LABEL_11:
    v19 = *(_QWORD*)(v6 + 8) >> 8;
    *(_DWORD*)result = 536944813;
    result[1] = v19;
    *((_QWORD*)result + 1) = 0xA200120B0LL;
    result += 4;
    goto LABEL_12;
  }
  if (*(_QWORD*)(a3 + 832) != 0) {
    v20_.v20 = 12;
    v20_.v21 = 144;
    result = (_DWORD*)CudaDriverRoutine_197480((__int64)v32, a2, 1u, &v20_.v21,
                                               (__int64)&v22_.v22, 0x190u,
                                               (_QWORD*)(a3 + 832), &v20_.v20);
  }
LABEL_12:
  *a1 = result;
  return result;
}

__int64 nvidia_1b6960(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (*v17)(int*);
  __int64 (*v18)(int*);
  __int64 v19;
  __int64 v20;
  float v21;
  int* v22;
  __int64 i;
  __int64 v24;
  __int64 (*v25)(int*);
  __int64 v26;
  __int64 v27;
  __int64 (*v28)(int*);
  __int64 v29;
  struct {
    int v30;
    char gap4_[4];
    __int64 v31;
  } v30_;
  __int64 v32;

  v2 = 0;
  LODWORD(v3) = 0;
  v32 = 0;
  while (1) {
    CudaDriverStub_107f90(a1 + 48);
    if (*(_BYTE*)(a1 + 160) == 0) {
      v9 = *(_DWORD*)(a1 + 88);
      if (v2 != v9) {
        CudaDriverRoutine_12e270(&v32);
        v2 = v9;
        LODWORD(v3) = v9;
      }
      goto LABEL_20;
    }
    v4 = *(_QWORD*)(a1 + 152);
    if (v4 == 0) {
      v2 = -1;
      LODWORD(v3) = -1;
    LABEL_20:
      CudaDriverStub_108070(a1 + 48);
      goto LABEL_21;
    }
    v3 = 0;
    do {
      v5 = *(_QWORD*)(v4 + 48);
      v6 = **(_DWORD**)(v4 + 24);
      __builtin_arm_dmb(0xDu);
      if (v6 - *(int*)(v4 + 32) >= 0) {
        *(_DWORD*)(v4 + 32) = v6;
        *(_QWORD*)(v4 + 56) = v3;
        if (*(_QWORD*)(a1 + 152) == v4) {
          v7 = *(_QWORD*)(v4 + 48);
          *(_QWORD*)(a1 + 152) = v7;
          if (v7 == 0) {
            goto LABEL_6;
          }
          v8 = 0;
        }
        else {
          v7 = *(_QWORD*)(v4 + 48);
          *(_QWORD*)(*(_QWORD*)(v4 + 40) + 48LL) = v7;
          if (v7 == 0) {
            goto LABEL_6;
          }
          v8 = *(_QWORD*)(v4 + 40);
        }
        *(_QWORD*)(v7 + 40) = v8;
      LABEL_6:
        *(_BYTE*)(v4 + 36) = 0;
        v3 = v4;
        *(_QWORD*)(v4 + 40) = 0;
        *(_QWORD*)(v4 + 48) = 0;
      }
      v4 = v5;
    } while (v5 != 0);
    CudaDriverStub_108070(a1 + 48);
    for (; v3 != 0; v3 = *(_QWORD*)(v3 + 56)) {
      (*(void (**)(_QWORD, _QWORD))(v3 + 8))(*(_QWORD*)(v3 + 16),
                                             *(unsigned int*)(v3 + 32));
    }
    v2 = -1;
  LABEL_21:
    result = CudaDriverRoutine_12e060(
        *(__int64**)(a1 + 96), *(_DWORD*)(a1 + 112), *(_DWORD**)(a1 + 104),
        *(_DWORD*)(a1 + 112), v3);
    if ((_DWORD)result == -1) {
      break;
    }
    if (*(_DWORD*)(a1 + 84) != 0) {
      return result;
    }
    if ((int)result < 1) {
      v27 = *(_QWORD*)(a1 + 144);
      if (v27 == 0) {
      LABEL_46:
        CudaDriverRoutine_12e270(&v32);
        LODWORD(v3) = v2;
        continue;
      }
      while (1) {
        v28 = *(__int64 (**)(int*))v27;
        v29 = *(_QWORD*)(v27 + 8);
        v30_.v30 = 2;
        v30_.v31 = v29;
        result = v28(&v30_.v30);
        if ((_DWORD)result != 0) {
          goto LABEL_48;
        }
        v27 = *(_QWORD*)(v27 + 80);
        if (v27 == 0) {
          goto LABEL_46;
        }
      }
    }
    v11 = 4LL * (unsigned int)result;
    v12 = 0;
    v13 = 0;
    v14 = (unsigned int)result;
    do {
      v15 = *(_QWORD*)(*(_QWORD*)(a1 + 120) +
                       8LL * *(int*)(*(_QWORD*)(a1 + 104) + v12));
      if (*(_BYTE*)(v15 + 16) != 0) {
        v13 = *(_QWORD*)(*(_QWORD*)(a1 + 120) +
                         8LL * *(int*)(*(_QWORD*)(a1 + 104) + v12));
      }
      else {
        v17 = *(__int64 (**)(int*))v15;
        v16 = *(_QWORD*)(v15 + 8);
        v30_.v30 = 0;
        v30_.v31 = v16;
        result = v17(&v30_.v30);
        if ((_DWORD)result != 0) {
          goto LABEL_48;
        }
      }
      v12 += 4;
    } while (v11 != v12);
    if (v13 != 0) {
      v18 = *(__int64 (**)(int*))v13;
      v19 = *(_QWORD*)(v13 + 8);
      v30_.v30 = 0;
      v30_.v31 = v19;
      result = v18(&v30_.v30);
      if ((_DWORD)result != 0) {
        goto LABEL_48;
      }
    }
    v20 = *(_QWORD*)(a1 + 136);
    if (v20 != 0) {
    LABEL_38:
      v22 = *(int**)(a1 + 104);
      for (i = v14; i != 0; --i) {
        v24 = *v22++;
        if (v20 == *(_QWORD*)(*(_QWORD*)(a1 + 120) + 8 * v24)) {
        LABEL_37:
          v20 = *(_QWORD*)(v20 + 64);
          if (v20 == 0) {
            goto LABEL_33;
          }
          goto LABEL_38;
        }
      }
      v25 = *(__int64 (**)(int*))v20;
      v26 = *(_QWORD*)(v20 + 8);
      v30_.v30 = 1;
      v30_.v31 = v26;
      result = v25(&v30_.v30);
      if ((_DWORD)result == 0) {
        goto LABEL_37;
      }
      goto LABEL_48;
    }
  LABEL_33:
    if (v2 != -1) {
      v21 = CudaDriverRoutine_12e2a0(&v32);
      if (v2 >= (unsigned int)v21) {
        LODWORD(v3) = v2 - (unsigned int)v21;
      }
      else {
        LODWORD(v3) = 0;
      }
    }
  }
  result = 304;
LABEL_48:
  *(_DWORD*)(a1 + 8) = result;
  return result;
}

__int64 nvidia_1c2fb0(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 23375712))()) (*)())(
      *(__int64 (**)(void))(a1 + 23375712)))(a1);
}

__int64 nvidia_1c2fc0(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 23375728))()) (*)())(
      *(__int64 (**)(void))(a1 + 23375728)))(a1);
}

__int64 nvidia_1c3030(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 23375888))()) (*)())(
      *(__int64 (**)(void))(a1 + 23375888)))(a1);
}

__int64 nvidia_1c3040(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 23375904))()) (*)())(
      *(__int64 (**)(void))(a1 + 23375904)))(a1);
}

__int64 nvidia_1c3410(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;

  v4 = a1 + 91280LL * a2 + 1424LL * a3;
  v5 = *(unsigned int*)(v4 + 1728);
  v6 = *(_QWORD*)(v4 + 1696);
  v7 = *(_DWORD*)(v6 + 4 * v5);
  *(_DWORD*)(v6 + 4 * v5) = a4;
  *(_BYTE*)(*(_QWORD*)(v4 + 1720) + v5) += v7 - a4 - BYTE1(a4) + BYTE1(v7) -
                                           BYTE2(a4) + BYTE2(v7) - HIBYTE(a4) +
                                           HIBYTE(v7);
  v8 = *(_QWORD*)(v4 + 1688) + (unsigned int)(16 * v5);
  *(_BYTE*)(v8 + 9) = *(_BYTE*)(*(_QWORD*)(v4 + 1720) + v5);
  *(_DWORD*)v8 = *(_DWORD*)(*(_QWORD*)(v4 + 1696) + 4 * v5);
  return ((__typeof__((*(__int64 (**)(void))(a1 + 23375472))()) (*)())(
      *(__int64 (**)(void))(a1 + 23375472)))(a1);
}

__int64 nvidia_1c80d0(__int64 a1, _QWORD* a2, __int64* a3)
{
  __int64 v4;
  __int64 v7;
  __int64 (**v8)(__int64, _QWORD, _QWORD, _QWORD);
  unsigned int (*v9)(__int64, _QWORD, _QWORD, _QWORD, __int64, __int64*,
                     __int64);
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 (*v13)(__int64, _QWORD, _QWORD, _QWORD, __int64, __int64*, __int64);
  __int64 v14;
  __int64 v15;
  __int64 (*v16)(__int64, _QWORD, _QWORD, _QWORD, __int64, __int64*, __int64);
  __int64 (*v17)(__int64, _QWORD, _QWORD, _QWORD, __int64, __int64*, __int64);
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  int v23;
  int8x8_t v24;
  int8x8_t v25;
  unsigned __int16 v26;
  struct {
    __int64 v27;
    __int64 v28;
    char gap56_[4];
    int v29;
    __int64 v30;
  } v27_;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  struct {
    __int64 v36;
    __int64 v37;
  } v36_;

  v4 = a2[8];
  v27_.v27 = 0;
  v27_.v28 = 0;
  if (v4 != 0) {
    v7 = CudaDriverStub_1a0ee0(a1, v4);
    *a3 = v7;
    if (v7 != 0) {
      return 0;
    }
  }
  v8 = (__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(a1 + 23375768);
  v9 = *(unsigned int (**)(__int64, _QWORD, _QWORD, _QWORD, __int64, __int64*,
                           __int64))(a1 + 23375768);
  v10 = *(_QWORD*)(*(_QWORD*)(a2[1] + 72LL) + 16LL);
  v11 = a2[7] + 1032LL;
  v36_.v36 = a2[7];
  if (v9(v10, 0, 0, 0, v11, &v27_.v27, 16) != 0) {
    return 0;
  }
  if (HIDWORD(v27_.v28) == 2) {
    return 21;
  }
  result = ((__int64 (*)(__int64, _QWORD, _QWORD, _QWORD, __int64, __int64*,
                         __int64))*v8)(v10, 0, 0, 0, v27_.v27, &v36_.v36, 8);
  if ((_DWORD)result == 0) {
    result =
        ((__int64 (*)(__int64, _QWORD, _QWORD, _QWORD, __int64, __int64*,
                      __int64))*v8)(v10, 0, 0, 0, v36_.v36 + 1088, &v35, 8);
    if ((_DWORD)result == 0) {
      result = (*(__int64 (**)(__int64, __int64*))(a1 + 23376296))(a1, &v34);
      if ((_DWORD)result == 0) {
        v13 = (__int64 (*)(__int64, _QWORD, _QWORD, _QWORD, __int64, __int64*,
                           __int64))*v8;
        v34 += v35;
        result =
            ((__int64 (*)(__int64, _QWORD, _QWORD, _QWORD))v13)(v10, 0, 0, 0);
        if ((_DWORD)result == 0) {
          v14 = v27_.v30;
          a2[8] = v27_.v30;
          v15 = CudaDriverStub_1a0ee0(a1, v14);
          *a3 = v15;
          if (v15 != 0) {
            return 0;
          }
          result = (*(__int64 (**)(__int64, __int64*, int*))(a1 + 23376304))(
              a1, &v32, &v27_.v29);
          if ((_DWORD)result == 0) {
            v16 = (__int64 (*)(__int64, _QWORD, _QWORD, _QWORD, __int64,
                               __int64*, __int64))*v8;
            v32 += v35;
            result = ((__int64 (*)(__int64, _QWORD, _QWORD, _QWORD))v16)(v10, 0,
                                                                         0, 0);
            if ((_DWORD)result == 0) {
              result = (*(__int64 (**)(__int64, __int64*, int*))(
                  a1 + 23376312))(a1, &v31, &v27_.v29);
              if ((_DWORD)result == 0) {
                v17 = (__int64 (*)(__int64, _QWORD, _QWORD, _QWORD, __int64,
                                   __int64*, __int64))*v8;
                v31 += v35;
                result = ((__int64 (*)(__int64, _QWORD, _QWORD, _QWORD))v17)(
                    v10, 0, 0, 0);
                if ((_DWORD)result == 0) {
                  result = (*(__int64 (**)(__int64, __int64*, int*))(
                      a1 + 23376320))(a1, &v33, &v27_.v29);
                  if ((_DWORD)result == 0) {
                    v33 += v35;
                    if (v27_.v29 == 4) {
                      result = (*v8)(v10, 0, 0, 0);
                      if ((_DWORD)result != 0) {
                        return result;
                      }
                      v18 = v22;
                      v36_.v37 = v22;
                    }
                    else {
                      result = (*v8)(v10, 0, 0, 0);
                      if ((_DWORD)result != 0) {
                        return result;
                      }
                      v18 = v36_.v37;
                    }
                    v19 = zstd_decompress_223310(*(_QWORD*)(v10 + 128), v18);
                    if (v19 != 0) {
                      result = CudaDriverRoutine_1a0d20(a3, v19, v27_.v30);
                      if ((_DWORD)result == 0) {
                        v20 = *a3;
                        *(_DWORD*)(v20 + 24) = v23;
                        *(int8x8_t*)(v20 + 28) =
                            vand_s8(v24, COERCE_AS(int8x8_t, 0xFFFF0000FFFFLL));
                        v21 = *a3;
                        *(int8x8_t*)(v21 + 36) =
                            vand_s8(v25, COERCE_AS(int8x8_t, 0xFFFF0000FFFFLL));
                        *(_DWORD*)(v21 + 44) = v26;
                        *(_DWORD*)(*a3 + 48) = 0;
                        *(_QWORD*)(*a3 + 56) = v36_.v36;
                      }
                    }
                    else {
                      return 3;
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

__int64 nvidia_1cbda0(__int64 a1)
{
  return ((__typeof__((
      *(__int64 (**)(void))(*(_QWORD*)(a1 + 32306416) + 136LL))()) (*)())(
      *(__int64 (**)(void))(*(_QWORD*)(a1 + 32306416) + 136LL)))(a1);
}

__int64 nvidia_1cbdc0(__int64 a1)
{
  return ((__typeof__((
      *(__int64 (**)(void))(*(_QWORD*)(a1 + 32306416) + 128LL))()) (*)())(
      *(__int64 (**)(void))(*(_QWORD*)(a1 + 32306416) + 128LL)))(a1);
}

__int64 nvidia_1cc8f0(__int64 a1, __int64 a2)
{
  if (a2 != 0) {
    return ((__typeof__((
        *(__int64 (**)(void))(*(_QWORD*)(a1 + 32306416) + 8LL))()) (*)())(
        *(__int64 (**)(void))(*(_QWORD*)(a1 + 32306416) + 8LL)))(a1);
  }
  else {
    return 4;
  }
}

__int64 nvidia_1cdd70(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                      __int64 a5)
{
  __int64 v5;
  int v11;
  __int64 result;
  unsigned int v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  _BOOL4 v17;
  __int64 v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  int v25;
  struct {
    char v26[4];
    int v27;
  } v26_;
  struct {
    int v28;
    char gap36_[4];
    __int64 v29;
    __int64 v30;
    __int64 v31;
    char gap64_[4];
    unsigned int v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;
    int v38;
    int v39;
    char gap100_[4];
    __int64 v40;
    _BOOL4 v41;
    _BOOL4 v42;
    int v43;
    int v44;
    int v45;
    char gap132_[4];
    __int64* v46;
    char gap144_[8];
    int v47;
  } v28_;

  v5 = *a4;
  v26_.v27 = 0;
  v26_.v26[0] = 0;
  a4[1] = v5;
  a4[3] = v5 + 256;
  *(_DWORD*)(v5 + 576) = -1;
  v11 = CudaDriverRoutine_99f40(*(_QWORD*)(a1 + 64), (_DWORD*)(a5 + 16),
                                *((_DWORD*)a4 + 72));
  result = CudaDriverRoutine_10a2a0(
      a1, a2, (unsigned int*)a5,
      *((_DWORD*)a4 + 43) * *((_DWORD*)a4 + 42) * *((_DWORD*)a4 + 44),
      *((unsigned int*)a4 + 72), &v26_.v27, v26_.v26, nullptr, &v25, nullptr);
  if ((_DWORD)result == 0) {
    if (v26_.v27 == 0) {
      return 701;
    }
    v13 = *(int*)(*(_QWORD*)(a1 + 64) + 3800LL) + *((_DWORD*)a4 + 69);
    if (v13 > *(_DWORD*)(a2 + 232) && CudaDriverRoutine_bbe70(a2) &&
        v13 - *(int*)(a2 + 232) > 0x18) {
      return 701;
    }
    else {
      *(_DWORD*)(v5 + 576) = v11;
      v14 = CudaDriverRoutine_98340(a1);
      v15 = *((_DWORD*)a4 + 72);
      if (*(_DWORD*)((char*)((char*)0x20LL) +
                     *(__int64*)((char*)((__int64*)0x18LL) +
                                 (_QWORD)CudaDriverData_14225e0)) != 0) {
        v16 = *(_DWORD*)a5;
        v17 = false;
        v28_.v31 = a2;
        v28_.v36 = 0;
        v28_.v37 = v11;
        v28_.v28 = 128;
        v18 = *(_QWORD*)(a2 + 32);
        v28_.v29 = v14;
        v28_.v30 = v18;
        v19 = *(_DWORD*)(v14 + 16092);
        if (v16 != 0) {
          v19 = v16;
        }
        v20 = *(_DWORD*)(a2 + 392);
        v28_.v32 = v19;
        v28_.v33 = v20;
        v28_.v34 = *(_DWORD*)(a5 + 16);
        v28_.v35 = v15;
        v21 = *(_QWORD*)(v14 + 64);
        v28_.v40 = a3;
        v22 = *(_DWORD*)(v21 + 3880);
        LODWORD(v21) = *(_DWORD*)(v21 + 3384);
        v28_.v38 = v22;
        v28_.v39 = v22;
        if ((_DWORD)v21 == 45504) {
          v17 = (*(_WORD*)(a2 + 977) & 0x40) != 0;
        }
        v28_.v45 = v25;
        v23 = *(_DWORD*)(a5 + 28);
        v28_.v46 = a4;
        v28_.v47 = v23;
        v28_.v41 = v17;
        v28_.v42 = v26_.v26[0] != 0;
        v24 = *(_DWORD*)(a5 + 12);
        v28_.v43 = *(unsigned __int8*)(a5 + 8);
        v28_.v44 = v24;
        cuda_driver_20b420(3u, 8u, (__int64)&v28_.v28);
      }
      return 0;
    }
  }
  return result;
}

__int64 nvidia_1d9f90(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 2304))()) (*)())(
      *(__int64 (**)(void))(a1 + 2304)))(a1);
}

__int64 nvidia_1da010(__int64 a1)
{
  return ((__typeof__((*(__int64 (**)(void))(a1 + 2216))()) (*)())(
      *(__int64 (**)(void))(a1 + 2216)))(a1);
}

__int64 nvidia_1e27d0(__int64* a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;

  v16 = 0;
  v14 = 16;
  v11 = 20;
  *(_DWORD*)(a1[4233] + 8) = -1;
  if (*((_DWORD*)a1 + 8) != 0) {
    return 1;
  }
  v2 = a1[4233];
  v4 = *(_QWORD*)(v2 + 32);
  v12 = v2 + 96;
  v13 = v4;
  v5 = CudaDriverData_1422bb0;
  v6 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x1B4LL) +
                              CudaDriverData_1422bb0 + 4))(&v11);
  if ((_DWORD)v6 != 0 && (unsigned int)CudaDriverRoutine_1e9390(v6) != 0) {
    *(_QWORD*)(a1[4233] + 96) = 0;
    return 0;
  }
  else {
    v15 = *(_QWORD*)(a1[4233] + 96);
    v7 = (*(__int64 (**)(int*))((char*)((char*)0x1B0LL) + v5))(&v14);
    if ((_DWORD)v7 != 0) {
      LODWORD(v7) = CudaDriverRoutine_1e9390(v7);
    }
    *(_DWORD*)(a1[4233] + 8) = v16;
    if (*(_DWORD*)(a1[4233] + 8) == -1) {
      return 999;
    }
    else {
      v8 = v7;
      v19 = 1;
      v9 = *a1;
      v17 = 20;
      v10 = *(_QWORD*)(v9 + 8);
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 19824LL) +
                               96LL) +
                    4LL) != 0 &&
          (cuda_debugger_api_7cff0() || (cuda_driver_772c0(v10) & 1) != 0 ||
           (unsigned __int8)cuda_driver_1febe0() != 0)) {
        v18 = *(_QWORD*)(a1[4233] + 32);
        v20 = -1;
        (*(void (**)(int*))((char*)((_UNKNOWN*)0x290LL) + v5))(&v17);
      }
      return v8;
    }
  }
}

__int64 nvidia_1f76a0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v11;
  __int64 v12;
  __int16 v13;
  char v14;
  __int64 v15;
  _DWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  struct {
    unsigned int v25;
    unsigned int v26;
  } v25_;
  _DWORD v27[2];
  struct {
    _QWORD v28[6];
    __int16 v29;
    char gap66_[6];
    __int64* v30;
    char gap80_[8];
    char v31;
    char gap89_[7];
    __int64 v32;
  } v28_;
  _DWORD* v33;

  v5 = *(_QWORD*)(a5 + 8);
  v6 = *(_QWORD*)(a5 + 136);
  v33 = (_DWORD*)*a1;
  v11 = *(_QWORD*)(a3 + 32);
  v12 = *(_QWORD*)(v11 + 24);
  v13 = *(_WORD*)(*(_QWORD*)(v12 + 64) + 17281LL);
  v14 = *(_BYTE*)(*(_QWORD*)(v12 + 16104) + 2072LL);
  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                 *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) +
                            (_QWORD)CudaDriverData_14225e0)) != 0) {
    v28_.v28[0] = *(_QWORD*)(v11 + 24);
    v28_.v28[1] = v11;
    v28_.v28[2] = a3;
    v28_.v28[3] = v5;
    v15 = *(_QWORD*)(v6 + 8);
    v27[0] = 104;
    v28_.v31 = v14;
    v28_.v29 = v13;
    v28_.v32 = a5;
    v28_.v28[4] = v15;
    v28_.v30 = (__int64*)&v33;
    cuda_driver_20b420(0xBu, 2u, (__int64)v27);
  }
  if (CudaDriverStub_b9300(a3) && CudaDriverRoutine_bbdf0(a3)) {
    v16 = v33;
    v17 = (unsigned __int64)(*(_QWORD*)(v6 + 8) + 512LL) >> 8;
    *((_QWORD*)v33 + 1) = 0x3200120AFLL;
    *(_DWORD*)v16 = 536944813;
    v16[1] = v17;
    v33 = v16 + 4;
  }
  if (*(_BYTE*)(*(_QWORD*)(v12 + 16104) + 2072LL) != 0 &&
      *(_BYTE*)(a5 + 197) == 0) {
    if (*(_QWORD*)(a3 + 832) != 0) {
      v21 = *(_QWORD*)(v6 + 8);
      v27[0] = 541204678;
      v27[1] = v21 >> 40;
      LODWORD(v28_.v28[0]) = v21 >> 8;
      CudaDriverStub_640d0((__int64)v28_.v28 + 4, v5, 0x100u);
      v25_.v25 = 12;
      v25_.v26 = 64;
      result = CudaDriverRoutine_197480((__int64)v33, a2, 1u, &v25_.v26,
                                        (__int64)v27, 0x110u,
                                        (_QWORD*)(a3 + 832), &v25_.v25);
    }
    else {
      v22 = (__int64)v33;
      v23 = *(_QWORD*)(v6 + 8);
      v24 = (__int64)(v33 + 3);
      *(_DWORD*)v33 = 541204678;
      *(_DWORD*)(v22 + 4) = v23 >> 40;
      *(_DWORD*)(v22 + 8) = v23 >> 8;
      CudaDriverStub_640d0(v24, v5, 0x100u);
      result = v22 + 268;
    }
  }
  else {
    v18 = (__int64)v33;
    v19 = *(_QWORD*)(v6 + 8) >> 8;
    result = (__int64)(v33 + 4);
    *(_DWORD*)v33 = 536944813;
    *(_DWORD*)(v18 + 4) = v19;
    *(_QWORD*)(v18 + 8) = 0x3200120AFLL;
  }
  *a1 = result;
  return result;
}

__int64 nvidia_1fd7a0(__int64 a1, __int64* a2, int a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  _OWORD* v17;
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
  unsigned int v30;
  unsigned __int64 v31;
  __int64 v32;
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
  __int64 (**v46)();
  __int64 v47;
  __int64 v48;
  unsigned int* v49;
  char* v50;
  char* v51;
  __int64 v52;
  unsigned int v53;
  char* v54;
  char* v55;
  unsigned int v56;
  int v57;
  int v58;
  int v59;
  char* v60;
  int v61;
  unsigned int v62;
  int v63;
  int v64;
  char v65;
  __int64 v66;
  int v67;
  int v68;
  bool v69;
  unsigned int v70;
  unsigned __int8* v71;
  int v72;
  char* v73;
  __int64 v74;
  char* v75;
  char v76;
  char v77;
  unsigned __int64 v78;
  char v79;
  float* v80;
  char v81;
  char v82;
  char v83;
  char v84;
  __int64 v85;
  void (*v86)(__int64, char*, ...);
  double v87;
  void (*v88)(__int64, char*, ...);
  double v89;
  void (*v90)(__int64, char*, ...);
  int v91;
  char* v92;
  double v93;
  unsigned __int8* v94;
  int v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  void (*v100)(__int64, char*, ...);
  int v101;
  int v102;
  void (*v103)(__int64, char*, ...);
  int v104;
  void (*v105)(__int64, char*, ...);
  void (*v106)(__int64, char*, ...);
  __int64 v107;
  int v108;
  int v109;
  unsigned int v110;
  int v111;
  __int64 (*v112)();
  void (*v113)(__int64);
  __int64 v114;
  void (*v115)(__int64);
  __int64 v116;
  __int64 v117;
  void (*v118)(__int64);
  unsigned __int64 v119;
  __int64 v120;
  unsigned int v121;
  unsigned int v122;
  unsigned int v123;
  char v124;
  char v125;
  int v126;
  char v127;
  __int64 v128;
  char v129;
  int v130;
  int v131;
  char v132;
  unsigned int v133;
  unsigned int* v134;
  char* v135;
  char v136;
  char v137;
  unsigned int* v138;
  double* v139;
  char* v140;
  unsigned __int64 v141;
  __int64 v142;
  int v143;
  char* v144;
  __int64 v145;
  struct {
    _QWORD v146[2];
    int v147;
  } v146_;

  if (a2 == nullptr) {
    return 0;
  }
  v3 = *a2;
  if (*a2 == 0) {
    return 0;
  }
  if (*(_QWORD*)(v3 + 8) == 0 || *(_QWORD*)(v3 + 64) == 0) {
    return 0xFFFFFFFFLL;
  }
  CudaDriverStub_107f90(v3 + 88);
  if (*(_DWORD*)(v3 + 52) != 0) {
    CudaDriverStub_108070(v3 + 88);
    return 0;
  }
  v6 = 8;
  if (a3 != 0) {
    v6 = 0;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + v6);
  v8 = *(unsigned int*)(v3 + 56);
  if (v7 - *(_QWORD*)(v3 + 24) > v8) {
    *(_QWORD*)(v3 + 24) = v7 - v8;
  }
  v9 = 0;
  v119 = v7;
  v120 = v3;
LABEL_15:
  v10 = *(_QWORD*)(v3 + 24);
  v121 = v9;
  if (v10 < v7) {
    v11 = *(unsigned int*)(v3 + 56);
    v12 = *(_QWORD*)(v3 + 64);
    do {
      v13 = v12 + v10 % v11;
      if (*(_QWORD*)v13 == 0x136EFCAF420LL &&
          (v14 = *(_QWORD*)(v13 + 24)) > *(_QWORD*)(v3 + 32) &&
          v14 % v11 == v10 % v11) {
        *(_QWORD*)(v3 + 32) = v14;
        v15 = *(_DWORD*)(v13 + 12);
        if (v15 == 0 || (unsigned __int8)*(_DWORD*)(v13 + 12) != 0) {
        LABEL_209:
          v121 = 0;
          *(_DWORD*)(v3 + 52) = 1;
          goto LABEL_210;
        }
        v17 = *(_OWORD**)(v3 + 40);
        if (*(_DWORD*)(v3 + 48) < v15) {
          *(_DWORD*)(v3 + 48) = 2 * v15;
          CudaDriverRoutine_12e340((__int64)v17);
          v17 = (_OWORD*)CudaDriverStub_12e330(*(unsigned int*)(v3 + 48));
          v7 = v119;
          v9 = v121;
          *(_QWORD*)(v3 + 40) = v17;
          if (v17 == nullptr) {
            *(_DWORD*)(v3 + 48) = 0;
            goto LABEL_209;
          }
        }
        v18 = *(_OWORD*)(v13 + 16);
        v19 = *(_OWORD*)(v13 + 32);
        v20 = *(_OWORD*)(v13 + 48);
        *v17 = *(_OWORD*)v13;
        v17[1] = v18;
        v17[2] = v19;
        v17[3] = v20;
        v21 = *(_OWORD*)(v13 + 80);
        v22 = *(_OWORD*)(v13 + 96);
        v23 = *(_OWORD*)(v13 + 112);
        v17[4] = *(_OWORD*)(v13 + 64);
        v17[5] = v21;
        v17[6] = v22;
        v17[7] = v23;
        v24 = *(_OWORD*)(v13 + 144);
        v25 = *(_OWORD*)(v13 + 160);
        v26 = *(_OWORD*)(v13 + 176);
        v17[8] = *(_OWORD*)(v13 + 128);
        v17[9] = v24;
        v17[10] = v25;
        v17[11] = v26;
        v27 = *(_OWORD*)(v13 + 208);
        v28 = *(_OWORD*)(v13 + 224);
        v29 = *(_OWORD*)(v13 + 240);
        v17[12] = *(_OWORD*)(v13 + 192);
        v17[13] = v27;
        v17[14] = v28;
        v17[15] = v29;
        v10 = *(_QWORD*)(v3 + 24) + 256LL;
        *(_QWORD*)(v3 + 24) = v10;
        if (*(_DWORD*)(v13 + 12) < 0x101u) {
        LABEL_37:
          v45 = *(_QWORD*)(v13 + 32);
          if (v45 == 1) {
            v46 = CudaDriverData_1423278[0];
            goto LABEL_41;
          }
          if (v45 != 0) {
            v145 = *(_QWORD*)(v13 + 32);
            v47 = *(_QWORD*)(v3 + 40);
            if ((*(_QWORD*)v47 & 0x7FFFFFFFFFFFFFFFLL) != 0x136EFCAF420LL) {
              goto LABEL_209;
            }
          }
          else {
            v46 = CudaDriverData_1423280;
          LABEL_41:
            v145 = (*v46)();
            v47 = *(_QWORD*)(v3 + 40);
            if ((*(_QWORD*)v47 & 0x7FFFFFFFFFFFFFFFLL) != 0x136EFCAF420LL) {
              goto LABEL_209;
            }
          }
          v48 = *(unsigned int*)(v47 + 8);
          v128 = v47;
          v49 = (unsigned int*)(v47 + 40);
          v123 = 0;
          v50 = (const char*)&v49[2 * v48];
          v134 = v49;
          v138 = v49;
          while (2) {
            v51 = v50;
            while (2) {
              v52 = strchr_plt(v51, 37);
              if (v52 == 0) {
                goto LABEL_202;
              }
              v135 = v51;
            LABEL_48:
              v146_.v146[0] = 0;
              v146_.v146[1] = 0;
              v146_.v147 = 0;
              v53 = *(unsigned __int8*)(v52 + 1);
              if (v53 == 37) {
                *(_BYTE*)(v52 + 1) = 0;
                v107 = v52;
                ((void (*)(__int64, const char*, ...))*CudaDriverData_1423288)(
                    v145, "%s", v51);
                v51 = (const char*)(v107 + 2);
                v108 = *(unsigned __int8*)(v107 + 2);
                v3 = v120;
                *(_BYTE*)(v107 + 1) = 37;
                if (v108 != 0) {
                  continue;
                }
              LABEL_202:
                v50 = v51;
                goto LABEL_203;
              }
              break;
            }
            v54 = (const char*)(v52 + 2);
            v55 = (const char*)v52;
            if (v53 <= 0x30) {
              do {
                if (((1LL << v53) & 0x1280900000000LL) == 0) {
                  break;
                }
                v56 = *(unsigned __int8*)v54++;
                v53 = v56;
                ++v55;
              } while (v56 <= 0x30);
            }
            if (v53 == 42) {
              v57 = *(unsigned __int8*)v54;
              v126 = 1;
              v55 = v54;
              if (v57 != 46) {
                goto LABEL_58;
              }
              do {
              LABEL_57:
                v59 = *(unsigned __int8*)++v55;
                v57 = v59;
              } while ((unsigned int)(v59 - 48) < 0xA);
            }
            else {
              do {
                v58 = *(unsigned __int8*)++v55;
                v57 = v58;
              } while ((unsigned int)(v58 - 48) < 0xA);
              v126 = 0;
              if (v57 == 46) {
                goto LABEL_57;
              }
            }
          LABEL_58:
            v60 = v55 + 1;
            if (v57 != 118) {
              if (v57 == 108) {
                v61 = *((unsigned __int8*)v55 + 1);
                if (v61 != 108) {
                  v50 = v55 + 2;
                  v62 = 0;
                  v137 = 0;
                  v65 = 1;
                  v124 = 1;
                  v125 = 1;
                  goto LABEL_104;
                }
                v61 = *((unsigned __int8*)v55 + 2);
                v50 = v55 + 3;
                v62 = 0;
                v65 = 0;
              }
              else {
                if (v57 != 104) {
                  v62 = 0;
                  v61 = v57;
                  v65 = 1;
                  v50 = v55 + 1;
                  v124 = 1;
                  v125 = 1;
                  v137 = 1;
                  goto LABEL_104;
                }
                v61 = *((unsigned __int8*)v55 + 1);
                if (v61 == 104) {
                  v61 = *((unsigned __int8*)v55 + 2);
                  v62 = 0;
                  v50 = v55 + 3;
                }
                else {
                  v50 = v55 + 2;
                  v62 = 0;
                }
                v65 = 1;
              }
              v124 = 1;
              v125 = 1;
              v137 = 1;
              goto LABEL_104;
            }
            v61 = *((unsigned __int8*)v55 + 1);
            v50 = v55 + 2;
            if ((unsigned int)(v61 - 48) > 9) {
              v62 = 0;
              if (v61 != 104) {
                goto LABEL_67;
              }
            }
            else {
              v62 = 0;
              do {
                v63 = v61 + 10 * v62;
                v64 = *(unsigned __int8*)v50++;
                v61 = v64;
                v62 = v63 - 48;
              } while ((unsigned int)(v64 - 48) < 0xA);
              v60 = v50 - 1;
              if (v61 != 104) {
              LABEL_67:
                if (v61 == 108) {
                  v61 = *(unsigned __int8*)v50;
                  v50 = v60 + 2;
                  v137 = 0;
                  v124 = 1;
                  v125 = 1;
                  goto LABEL_84;
                }
              LABEL_73:
                v125 = 1;
              LABEL_82:
                v124 = 1;
                goto LABEL_83;
              }
            }
            v61 = *(unsigned __int8*)v50;
            if (v61 == 104) {
              v61 = *((unsigned __int8*)v60 + 2);
              v50 = v60 + 3;
              v125 = 0;
              goto LABEL_82;
            }
            if (v61 == 108) {
              v61 = *((unsigned __int8*)v60 + 2);
              v50 = v60 + 3;
              goto LABEL_73;
            }
            v50 = v60 + 2;
            v124 = 0;
            v125 = 1;
          LABEL_83:
            v137 = 1;
          LABEL_84:
            v66 = v52 + 1;
            v67 = 0;
            v68 = 0;
            while (1) {
            LABEL_90:
              while (1) {
                v70 = *(unsigned __int8*)(v52 + v67);
                if (v70 != 118) {
                  break;
                }
                v71 = (unsigned __int8*)(v66 + v67);
                do {
                  v72 = *v71++;
                  ++v67;
                } while ((unsigned int)(v72 - 48) < 0xA);
              }
              v69 = v70 > 0x2E || ((1LL << v70) & 0x442800000000LL) == 0;
              if (!v69 || v70 - 48 < 0xA) {
                goto LABEL_89;
              }
              if (*(unsigned __int8*)(v52 + v67) <= 0x67u) {
                break;
              }
              if (v70 == 108) {
                goto LABEL_89;
              }
              if (v70 != 104) {
                goto LABEL_103;
              }
              if (*(_BYTE*)(v66 + v67) != 108) {
                goto LABEL_89;
              }
              v67 += 2;
            }
            if (v70 == 43 || v70 == 45) {
            LABEL_89:
              *((_BYTE*)v146_.v146 + v68++) = v70;
              ++v67;
              goto LABEL_90;
            }
          LABEL_103:
            v73 = (char*)v146_.v146 + v68;
            v65 = 1;
            *v73 = v70;
            v73[1] = 0;
          LABEL_104:
            v122 = v62;
            if (v62 <= 1) {
              v74 = 1;
            }
            else {
              v74 = v62;
            }
            v142 = v74;
            v141 = (unsigned int)(v74 - 1);
            if ((int)v74 < 1) {
              goto LABEL_187;
            }
            v75 = v51;
            v76 = 0;
            v77 = 0;
            v78 = 0;
            v130 = 0;
            v143 = v61;
            if (v61 == 112) {
              v79 = 0;
            }
            else {
              v79 = v65;
            }
            v144 = (char*)v50;
            if (v57 == 118) {
              v75 = (const char*)v146_.v146;
            }
            v136 = v79;
            v140 = v75;
            v133 = v126 + v123;
            v80 = (float*)&v134[2 * v126 + 2 * v123];
            v81 = v125;
            v139 = (double*)v80;
            if (v57 != 118) {
              v81 = 1;
            }
            v129 = v81;
            v82 = v124;
            if (v57 != 118) {
              v82 = 1;
            }
            v127 = v82;
            while (2) {
              v83 = v143 - 65;
              if ((unsigned int)(v143 - 65) > 0x37) {
                goto LABEL_158;
              }
              if (((1LL << v83) & 0x7100000071LL) != 0) {
                v84 = *v50;
                *v50 = 0;
                if (v57 == 118) {
                  if ((v137 & 1) != 0) {
                    v87 = *v80;
                    v88 = (void (*)(__int64, const char*,
                                    ...))*CudaDriverData_1423288;
                    if (v53 == 42) {
                      goto LABEL_130;
                    }
                  }
                  else {
                    v87 = *(double*)v80;
                    v88 = (void (*)(__int64, const char*,
                                    ...))*CudaDriverData_1423288;
                    if (v53 == 42) {
                      goto LABEL_130;
                    }
                  }
                }
                else {
                  v87 = *v139;
                  v88 = (void (*)(__int64, const char*,
                                  ...))*CudaDriverData_1423288;
                  if (v53 == 42) {
                  LABEL_130:
                    v88(v145, v140, *v138, v87);
                    goto LABEL_167;
                  }
                }
                v88(v145, v140, v87);
                goto LABEL_167;
              }
              if (((1LL << v83) & 0x90C10C00800000LL) == 0) {
                if (((1LL << v83) & 0x4000000040000LL) != 0) {
                  v91 = *(unsigned __int8*)v50;
                  *v50 = 0;
                  v92 = (char*)v50;
                  v131 = v91;
                  v93 = *v139;
                  if ((unsigned __int8)*(_QWORD*)v139 == 0) {
                    *(_QWORD*)&v93 |= 8uLL;
                  }
                  v94 = (unsigned __int8*)(v128 + *(_QWORD*)&v93 -
                                           8LL * (*(_QWORD*)&v93 >> 8));
                  v95 = *v94;
                  v96 = -4;
                  if (v143 == 115) {
                    v96 = -1;
                    v97 = (unsigned __int64)(v94 + 1);
                  }
                  else {
                    v97 = (unsigned __int64)(v94 + 4);
                  }
                  v98 = v96 & v97;
                  if (v95 != 0) {
                    v99 = 0;
                  }
                  else {
                    v99 = v98;
                  }
                  v100 = (void (*)(__int64, const char*,
                                   ...))*CudaDriverData_1423288;
                  if (v53 == 42) {
                    v100(v145, v135, *v138, v99);
                  }
                  else {
                    v100(v145, v135, v99);
                  }
                  v50 = v92;
                  *v92 = v131;
                  v143 = v131;
                  if (v57 != 118) {
                    goto LABEL_118;
                  }
                }
                else {
                LABEL_158:
                  v102 = v130;
                  if (v57 != 118) {
                    v102 = 1;
                  }
                  v130 = v102;
                  if (v57 != 118) {
                    goto LABEL_118;
                  }
                }
              LABEL_168:
                if (v78 < v141) {
                  ((void (*)(__int64, const char*,
                             ...))*CudaDriverData_1423288)(v145, ",", v50);
                  v50 = v144;
                }
                goto LABEL_118;
              }
              v84 = *v50;
              *v50 = 0;
              if ((v136 & 1) == 0) {
                v89 = *v139;
                v90 = (void (*)(__int64, const char*,
                                ...))*CudaDriverData_1423288;
                if (v53 == 42) {
                  v90(v145, v135, *v138, *(_QWORD*)&v89);
                }
                else {
                  v90(v145, v135, *(_QWORD*)&v89);
                }
                goto LABEL_167;
              }
              if ((v137 & 1) == 0) {
                if (v57 == 118) {
                  v101 = v78;
                }
                else {
                  v101 = 0;
                }
                v85 = *(_QWORD*)&v134[2 * v101 + 2 * v133];
                v86 = (void (*)(__int64, const char*,
                                ...))*CudaDriverData_1423288;
                if (v53 == 42) {
                LABEL_127:
                  v86(v145, v140, *v138, v85);
                }
                else {
                  v86(v145, v140, v85);
                }
              LABEL_167:
                v50 = v144;
                *v144 = v84;
                if (v57 != 118) {
                  goto LABEL_118;
                }
                goto LABEL_168;
              }
              if ((v129 & 1) != 0) {
                if ((v127 & 1) != 0) {
                  v85 = *(unsigned int*)v80;
                  v86 = (void (*)(__int64, const char*,
                                  ...))*CudaDriverData_1423288;
                  if (v53 == 42) {
                    goto LABEL_127;
                  }
                  v86(v145, v140, (unsigned int)v85);
                  goto LABEL_167;
                }
                v132 = v84;
                v104 = (int)(v134[2 * v133 + 2 * ((unsigned int)v78 >> 1)] &
                             (0xFFFF << (v77 & 0x10))) >>
                       (v77 & 0x10);
                v105 = (void (*)(__int64, const char*,
                                 ...))*CudaDriverData_1423288;
                if (v53 == 42) {
                  v105(v145, (const char*)v146_.v146, *v138,
                       (unsigned int)(__int16)v104);
                }
                else {
                  v105(v145, (const char*)v146_.v146,
                       (unsigned int)(__int16)v104);
                }
              }
              else {
                if ((unsigned int)(v143 - 88) <= 0x20 &&
                    ((1LL << ((unsigned __int8)v143 - 88)) & 0x120800001LL) !=
                        0) {
                  v103 = (void (*)(__int64, const char*,
                                   ...))*CudaDriverData_1423288;
                  if (v53 == 42) {
                    v103(v145, (const char*)v146_.v146, *v138,
                         (unsigned __int8)(v134[2 * v133 +
                                                2 * ((unsigned int)v78 >> 2)] >>
                                           (v76 & 0x18)));
                  }
                  else {
                    v103(v145, (const char*)v146_.v146,
                         (unsigned __int8)(v134[2 * v133 +
                                                2 * ((unsigned int)v78 >> 2)] >>
                                           (v76 & 0x18)));
                  }
                  goto LABEL_167;
                }
                v132 = v84;
                v106 = (void (*)(__int64, const char*,
                                 ...))*CudaDriverData_1423288;
                if (v53 == 42) {
                  v106(v145, (const char*)v146_.v146, *v138,
                       (unsigned __int8)((int)(v134[2 * v133 +
                                                    2 * ((unsigned int)v78 >>
                                                         2)] &
                                               (255 << (v76 & 0x18))) >>
                                         (v76 & 0x18)));
                }
                else {
                  v106(v145, (const char*)v146_.v146,
                       (unsigned __int8)((int)(v134[2 * v133 +
                                                    2 * ((unsigned int)v78 >>
                                                         2)] &
                                               (255 << (v76 & 0x18))) >>
                                         (v76 & 0x18)));
                }
              }
              v50 = v144;
              *v144 = v132;
              if (v57 == 118) {
                goto LABEL_168;
              }
            LABEL_118:
              ++v78;
              v80 += 2;
              v77 += 16;
              v76 += 8;
              if (v142 != v78) {
                continue;
              }
              break;
            }
            v51 = v135;
            if (v57 != 118 && v130 != 0) {
              v52 = strchr_plt(v50, 37);
              if (v52 == 0) {
                v3 = v120;
                goto LABEL_202;
              }
              goto LABEL_48;
            }
          LABEL_187:
            if (v57 == 118) {
              v3 = v120;
              if ((v125 & 1) != 0) {
                if ((v124 & 1) != 0) {
                  v109 = v142 + v126;
                }
                else {
                  if (v122 == 3) {
                    v111 = 2;
                  }
                  else {
                    v111 = (int)v142 / 2;
                  }
                  v109 = v111 + v126;
                }
              }
              else {
                if ((int)v142 <= 4) {
                  v110 = 4;
                }
                else {
                  v110 = v142;
                }
                v109 = v126 + (v110 >> 2);
              }
            }
            else {
              v3 = v120;
              v109 = v126 + 1;
            }
            v123 += v109;
            v138 = &v134[2 * v123];
            if (v123 < 0x40) {
              continue;
            }
            break;
          }
        LABEL_203:
          ((void (*)(__int64, const char*, ...))*CudaDriverData_1423288)(
              v145, "%s", v50);
          v7 = v119;
          v9 = v121 + 1;
          if ((v123 & 0x80000000) != 0) {
            goto LABEL_209;
          }
          goto LABEL_15;
        }
        v30 = 256;
        v31 = v13;
        v32 = *(_QWORD*)(v3 + 40) + 256LL;
        while (1) {
          v12 = *(_QWORD*)(v3 + 64);
          v11 = *(unsigned int*)(v3 + 56);
          for (v31 += 256LL; v31 >= v12 + v11; v31 -= v11)
            ;
          if (*(_QWORD*)v31 != 0x80000136EFCAF420LL) {
            break;
          }
          v33 = *(_OWORD*)(v31 + 24);
          v34 = *(_OWORD*)(v31 + 40);
          v30 += 256;
          v35 = *(_OWORD*)(v31 + 56);
          *(_OWORD*)v32 = *(_OWORD*)(v31 + 8);
          *(_OWORD*)(v32 + 16) = v33;
          *(_OWORD*)(v32 + 32) = v34;
          *(_OWORD*)(v32 + 48) = v35;
          v36 = *(_OWORD*)(v31 + 88);
          v37 = *(_OWORD*)(v31 + 104);
          v38 = *(_OWORD*)(v31 + 120);
          *(_OWORD*)(v32 + 64) = *(_OWORD*)(v31 + 72);
          *(_OWORD*)(v32 + 80) = v36;
          *(_OWORD*)(v32 + 96) = v37;
          *(_OWORD*)(v32 + 112) = v38;
          v39 = *(_OWORD*)(v31 + 152);
          v40 = *(_OWORD*)(v31 + 168);
          v41 = *(_OWORD*)(v31 + 184);
          *(_OWORD*)(v32 + 128) = *(_OWORD*)(v31 + 136);
          *(_OWORD*)(v32 + 144) = v39;
          *(_OWORD*)(v32 + 160) = v40;
          *(_OWORD*)(v32 + 176) = v41;
          v42 = *(_OWORD*)(v31 + 200);
          v43 = *(_OWORD*)(v31 + 216);
          v44 = *(_OWORD*)(v31 + 232);
          *(_QWORD*)(v32 + 240) = *(_QWORD*)(v31 + 248);
          *(_OWORD*)(v32 + 208) = v43;
          *(_OWORD*)(v32 + 224) = v44;
          *(_OWORD*)(v32 + 192) = v42;
          v32 += 248;
          v10 = *(_QWORD*)(v3 + 24) + 256LL;
          *(_QWORD*)(v3 + 24) = v10;
          if (v30 >= *(_DWORD*)(v13 + 12)) {
            goto LABEL_37;
          }
        }
      }
      else {
        v10 += 256LL;
        *(_QWORD*)(v3 + 24) = v10;
      }
    } while (v10 < v7);
  }
  if (v9 != 0) {
    v112 = CudaDriverData_1423290[0];
    v113 = *(void (**)(__int64))CudaDriverData_1423290[0];
    v114 = ((__int64 (*)(__int64))*CudaDriverData_1423280)(
        (__int64)&CudaDriverData_1423280);
    v113(v114);
    v115 = *(void (**)(__int64))v112;
    v116 = (*CudaDriverData_1423278[0])();
    v115(v116);
  }
  else {
    v121 = 0;
  }
LABEL_210:
  v117 = CudaDriverStub_108070(v3 + 88);
  v118 = *(void (**)(__int64))((char*)((_UNKNOWN*)0x1D38LL) +
                               (_QWORD)CudaDriverData_1422118);
  if (v118 != nullptr) {
    v118(v117);
  }
  return v121;
}

__int64 nvidia_215db0(__int64 a1, __int64 a2)
{
  if (a2 != 0) {
    return ((__typeof__((
        *(__int64 (**)(void))(*(_QWORD*)(a2 + 64) + 18512LL))()) (*)())(
        *(__int64 (**)(void))(*(_QWORD*)(a2 + 64) + 18512LL)))(a1);
  }
  else {
    return 1;
  }
}

__int64 nvidia_21fad0(__int64 a1)
{
  __int64 v1;

  if (a1 != 0 && (v1 = *(_QWORD*)(a1 + 64)) != 0) {
    return ((__typeof__((*(__int64 (**)(void))(v1 + 20688))()) (*)())(
        *(__int64 (**)(void))(v1 + 20688)))(a1);
  }
  else {
    return 999;
  }
}

__int64 nvidia_21faf0(__int64 a1)
{
  __int64 v1;

  if (a1 != 0 && (v1 = *(_QWORD*)(a1 + 64)) != 0) {
    return ((__typeof__((*(__int64 (**)(void))(v1 + 20688))()) (*)())(
        *(__int64 (**)(void))(v1 + 20688)))(a1);
  }
  else {
    return 999;
  }
}

__int64 nvidia_240470(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8, char a9)
{
  _QWORD* v9;
  _DWORD* v10;
  __int64 v15;
  _QWORD* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  char v22;
  int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  bool v31;
  __int64 result;
  struct {
    unsigned int v36;
    unsigned int v37;
  } v36_;
  struct {
    int v38;
    char gap36_[4];
    __int64 v39;
    __int64 v40;
    __int64 v41;
    _DWORD* v42;
    __int64 v43;
    char v44;
    char v45;
    char gap82_[6];
    __int64 v46;
    char gap96_[8];
    char v47;
    char gap105_[7];
    __int64* v48;
  } v38_;
  __int64 v49;

  v10 = *(_DWORD**)(a8 + 8);
  v9 = *(_QWORD**)(a8 + 16);
  v15 = *(_QWORD*)(a8 + 136);
  v49 = *a1;
  if (CudaDriverRoutine_bbdf0(a4)) {
    v16 = v9 + 64;
  }
  else {
    v16 = nullptr;
  }
  if ((a9 & 2) != 0 || CudaDriverStub_b9300(a4)) {
    v10[24] = v10[24] & 0xFB8FFFFF | 0x4000000;
    v17 = CudaDriverStub_8e230(v15);
  }
  else {
    v17 = CudaDriverRoutine_1ffe30(v15);
  }
  v10[25] = v17;
  v18 = CudaDriverStub_1223e0(*(_QWORD*)(v15 + 24));
  v10[23] = v18;
  *((_BYTE*)v10 + 96) = BYTE4(v18);
  if (CudaDriverStub_b9300(a4)) {
    v9[129] = CudaDriverRoutine_2045e0(*(_QWORD**)(v15 + 24));
    v9[153] = *(_QWORD*)(v15 + 8) + 1232LL;
    v9[156] = *(_QWORD*)(v15 + 8) + 1224LL;
  }
  if (a6 != 0 && (*(_BYTE*)(a6 + 60) & 1) != 0) {
    v19 = CudaDriverStub_1223e0(*(_QWORD*)(a6 + 40));
    v20 = v10[4];
    v10[28] = 0;
    v10[4] = v20 | 0x800;
    v21 = v10[27] & 0x7FFFFF00 | BYTE4(v19);
    v10[26] = v19;
    v10[27] = v21;
    CudaDriverRoutine_2077b0(a6);
  }
  v22 = *(_BYTE*)(a8 + 204);
  v23 = v10[4];
  v10[4] = v23 & 0xFFFFFFC0 |
           CudaDriverRoutine_bc6c0_alt1(a4, *(_DWORD*)(a8 + 436), v22) & 0x3F;
  if (CudaDriverRoutine_bbdf0(a4)) {
    v24 = *((_DWORD*)v16 + 4);
    *((_DWORD*)v16 + 4) =
        v24 & 0xFFFFFFC0 |
        (CudaDriverRoutine_bc6c0_alt1(a4, *(_DWORD*)(a8 + 436), v22) - 1) &
            0x3F;
  }
  v25 = *(unsigned __int16*)(*(_QWORD*)(a3 + 64) + 17281LL);
  if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_1432188) != 0) {
    v26 = v25 >> 8;
    v38_.v38 = 88;
    v27 = *(_QWORD*)(a4 + 32);
    v28 = *(_QWORD*)(v27 + 24);
    v38_.v44 = v25;
    v29 = *(_BYTE*)(a8 + 205);
    v38_.v41 = a4;
    v38_.v42 = v10;
    v38_.v45 = v26;
    v38_.v46 = a8;
    v38_.v39 = v28;
    v38_.v40 = v27;
    v38_.v47 = v29;
    v38_.v48 = &v49;
    v38_.v43 = a7;
    cuda_driver_20b420(0xBu, 1u, (__int64)&v38_.v38);
  }
  if (*(_BYTE*)(*(_QWORD*)(a3 + 16104) + 3096LL) == 0 ||
      *(_BYTE*)(a8 + 196) == 0 || *(_BYTE*)(a8 + 197) != 0) {
    if (*(_QWORD*)(a4 + 832) != 0) {
      (*(void (**)(int*, __int64, _QWORD, _DWORD*, __int64, __int64))(
          *(_QWORD*)(a3 + 64) + 19248LL))(&v38_.v38, a3, *(_QWORD*)(v15 + 8),
                                          v10, 200, 2);
      v36_.v36 = 12;
      v36_.v37 = 84;
      v30 = CudaDriverRoutine_197480(v49, a2, 1u, &v36_.v37, (__int64)&v38_.v38,
                                     0xECu, (_QWORD*)(a4 + 832), &v36_.v36);
    }
    else {
      v30 = (*(__int64 (**)(__int64, __int64, _QWORD, _DWORD*, __int64,
                            __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
          v49, a3, *(_QWORD*)(v15 + 8), v10, 200, 2);
    }
    v49 = v30;
  }
  if (CudaDriverRoutine_bbdf0(a4)) {
    v49 = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64,
                          __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
        v49, a3, *(_QWORD*)(v15 + 8) + 512LL, v9 + 64, 200, 2);
  }
  v31 = CudaDriverStub_b9300(a4);
  result = v49;
  if (v31) {
    result = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64,
                             __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
        v49, a3, *(_QWORD*)(v15 + 8) + 1024LL, v9 + 128, 1024, 2);
  }
  *a1 = result;
  return result;
}

#pragma GCC visibility pop
