#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* CudaDriverRoutine_1d93e0(__int64, _QWORD*);
_QWORD* CudaDriverRoutine_201580(_QWORD* result, _QWORD*, unsigned __int64);
_QWORD* CudaDriverRoutine_5f7d0(__int64, unsigned int, __int64);
__int64 CudaDriverRoutine_104cd0(__int64, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_113070(__int64);
__int64 CudaDriverRoutine_118090(__int64);
__int64 CudaDriverRoutine_11acc0(int**, unsigned __int64, _DWORD*, _QWORD*,
                                 _QWORD*, _QWORD*, _QWORD*);
__int64 CudaDriverRoutine_1218b0(__int64, __int64);
__int64 CudaDriverRoutine_121c60(__int64*);
__int64 CudaDriverRoutine_12dbe0(_QWORD*);
__int64 CudaDriverRoutine_12dd80(unsigned int*);
__int64 CudaDriverRoutine_12dde0(unsigned int*);
__int64 CudaDriverRoutine_12de40(unsigned int*);
__int64 CudaDriverRoutine_12dec0(unsigned int*);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64);
__int64 CudaDriverRoutine_1a2b00(__int64 result,
                                 __int64 (*)(_QWORD, _QWORD, __int64), __int64);
__int64 CudaDriverRoutine_1ba4f0(__int64 result, __int64);
__int64 CudaDriverRoutine_1ba520(__int64 result);
__int64 CudaDriverRoutine_1ba580(__int64);
__int64 CudaDriverRoutine_1ba7d0(__int64, __int64);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverRoutine_202960(__int64, __int64, __int64, __int64, __int64,
                                 char);
__int64 CudaDriverRoutine_203f30(__int64);
__int64 CudaDriverRoutine_205dd0(__int64, __int64, __int64);
__int64 CudaDriverRoutine_206060(__int64, __int64);
__int64 CudaDriverRoutine_206ed0(_QWORD*, __int64, _QWORD*, _QWORD*);
__int64 CudaDriverRoutine_20a620();
__int64 CudaDriverRoutine_20f580(__int64 result);
__int64 CudaDriverRoutine_214d50(int, unsigned int, int, _QWORD*, __int64);
__int64 CudaDriverRoutine_218740();
__int64 CudaDriverRoutine_54940(__int64);
__int64 CudaDriverRoutine_59730(__int64*, _QWORD*, unsigned int, unsigned int);
__int64 CudaDriverRoutine_59820(__int64, _QWORD*, unsigned int);
__int64 CudaDriverRoutine_599a0(__int64, __int64, char, char);
__int64 CudaDriverRoutine_5e6a0(__int64);
__int64 CudaDriverRoutine_5e790(__int64);
__int64 CudaDriverRoutine_5ef60(_QWORD*, int);
__int64 CudaDriverRoutine_980c0(__int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_98490(__int64, char);
__int64 CudaDriverRoutine_98650(__int64, char);
__int64 CudaDriverRoutine_99e40(__int64);
__int64 CudaDriverRoutine_d8860(__int64 result, __int64, _QWORD*, char);
__int64 CudaDriverRoutine_d9230(__int64*, __int64, __int64);
__int64 CudaDriverRoutine_df060(__int64*);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_107f90(char*);
__int64
CudaDriverStub_107f90_alt1(unsigned __int64) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_107f90_alt2(__int64) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_108070(char*);
__int64
CudaDriverStub_108070_alt1(unsigned __int64) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_108070_alt2(__int64) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_10e9d0();
__int64 CudaDriverStub_10e9f0();
__int64 CudaDriverStub_112b20(__int64, __int64*, unsigned int, __int64*,
                              __int64*);
__int64 CudaDriverStub_118070(__int64);
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_1223f0(_QWORD);
__int64 CudaDriverStub_12dca0(_QWORD);
__int64 CudaDriverStub_12dd60(__int64, __int64, __int64);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1db190(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1db9f0(__int64, __int64, __int64, __int64);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1dbfc0(_QWORD);
__int64 CudaDriverStub_4f840(_QWORD);
__int64 CudaDriverStub_8b280(_QWORD);
__int64 CudaDriverStub_c54e0(_QWORD, _QWORD);
__int64 ZSTD_initDStream_usingDDict(__int64);
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_1da1b0(__int64, unsigned __int64*, __int64, __int64**);
__int64 cuda_driver_5a060(__int64);
__int64 cuda_driver_5c2a0(__int64*);
__int64 cuda_driver_5d3e0(__int64, __int64);
__int64 cuda_driver_97bc0(__int64, __int64, unsigned int, int);
__int64 cuda_driver_9bad0(__int64*, __int64);
__int64 cuda_driver_9bd90(__int64);
__int64 cuda_driver_c3c20(__int64);
__int64 cuda_driver_misc_helpers_ded50(__int64, __int64*, unsigned int);
__int64 cudbgReportDriverApiError_plt(void);
__int64 cudbgReportDriverInternalError_plt(void);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 zstd_decompress_227ba0(_QWORD*);
__int64 zstd_decompress_227c10(unsigned int*);
__int64 zstd_decompress_227c40(_DWORD*);
bool CudaDriverRoutine_5a420(__int64, unsigned __int64, unsigned int);
bool CudaDriverRoutine_5adc0(__int64);
bool CudaDriverRoutine_98110(_BOOL8 result);
bool CudaDriverRoutine_9aa40(__int64);
bool cuda_driver_12ea30(int*);
double CudaDriverRoutine_99e50(__int64, unsigned __int64*);
extern _DWORD CudaDriverData_13b2ad8[31];
extern _DWORD CudaDriverData_14320f0[];
extern _QWORD CudaDriverData_141b990[31];
extern _QWORD CudaDriverData_141ba88[31];
extern _QWORD CudaDriverData_1422ba8;
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14320e0;
extern _UNKNOWN* CudaDriverData_1432ea8;
extern _UNKNOWN** CudaDriverData_1423090;
extern _UNKNOWN CudaDriverData_14347a8;
extern _UNKNOWN CudaDriverData_1440b18;
extern __int128 CudaDriverData_11153f0;
extern __int128 CudaDriverData_1115690;
extern __int128 CudaDriverData_1115720;
extern __int128 CudaDriverData_1115730;
extern __int128 CudaDriverData_1115d20;
extern __int64* CudaDriverData_14231e8;
extern __int64 CudaDriverData_1432120;
extern __int64 CudaDriverData_1432128;
extern __int64 CudaDriverData_1432eb0;
extern int CudaDriverData_14320e8;
extern int CudaDriverData_1432eb8;
extern int CudaDriverData_1434ac0;
extern int CudaDriverData_14358d0;
extern int CudaDriverData_14358e4;
extern unsigned int CudaDriverData_1131b68[8];
extern unsigned int CudaDriverData_14320f8[];
extern void (*CudaDriverData_1422020[18])();
extern void (*CudaDriverData_1422040[14])();
extern void (*CudaDriverData_1422048[13])();
extern void (*CudaDriverData_1422050[12])();
extern void (*CudaDriverData_1422058[11])();
extern void (*CudaDriverData_1422068[9])();
extern void (*CudaDriverData_1422070[8])();
extern void (*CudaDriverData_1422078[7])();
extern void (*CudaDriverData_1422080[6])();
extern void (*CudaDriverData_1422088[5])();
unsigned __int64 cuda_driver_108520(__int64);
unsigned __int64 cuda_driver_f0360(int);
void CudaDriverRoutine_4734();
void CudaDriverRoutine_4744();
void CudaDriverRoutine_4748();
void CudaDriverRoutine_47b0();
void CudaDriverRoutine_47c8();
void CudaDriverRoutine_4e50();
void CudaDriverRoutine_7218();
void CudaDriverRoutine_7228();
void CudaDriverRoutine_7230();
void CudaDriverRoutine_7370();
void CudaDriverRoutine_7378();
void CudaDriverRoutine_7540();
void cuda_driver_112c00(__int64, _DWORD*, __int64);
void cuda_driver_1febc0();
__int64 cuda_driver_1febe0();
void cuda_driver_1fec00();
bool cuda_driver_1ffe60(__int64 a1, __int64 a2);
__int64 cuda_driver_201b20(__int64* a1, __int64 a2, unsigned int a3);
__int64 cuda_driver_201ea0(__int64* a1, __int64 a2, unsigned int a3);
__int64 cuda_driver_2026e0(__int64 a1, __int64 a2);
__int64 cuda_driver_202770(_QWORD* a1, _QWORD* a2);
__int64 cuda_driver_202b60(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_203220(unsigned __int64 a1, __int64 a2, unsigned __int64 a3,
                           unsigned __int64 a4, unsigned __int64 a5);
unsigned __int64 cuda_driver_2033b0(__int64 a1);
__int64 cuda_driver_203470(__int64* a1);
__int64 cuda_driver_2036a0(unsigned __int64 a1, __int64 a2);
__int64 cuda_driver_203fd0(unsigned int** a1, unsigned int a2);
__int64 cuda_driver_204130(__int64 result, unsigned int a2);
__int64 cuda_driver_204330(__int64 a1);
__int64 cuda_driver_2043d0(__int64 result, int a2);
__int64 cuda_driver_204700(__int64 a1, _QWORD* a2, unsigned int a3);
__int64 cuda_driver_204be0(_QWORD* a1, int a2, __int64* a3);
void cuda_driver_205940(__int64 a1, __int64 a2, __int64* a3, unsigned int a4);
__int64 cuda_driver_206820(_QWORD* a1);
__int64 cuda_driver_206910(__int64* a1);
__int64 cuda_driver_206d30(__int64 a1);
__int64 cuda_driver_207250(__int64 result, int a2);
__int64 cuda_driver_207340(__int64 result, int a2);
__int64 cuda_driver_209a60(unsigned int* a1, unsigned int a2, __int64 a3,
                           __int64 a4);
__int64 cuda_driver_209e00(unsigned int a1);
__int64 cuda_driver_20a050(int a1, int a2, unsigned int a3, unsigned int a4);
__int64 cuda_driver_20a180(int a1, int a2, unsigned int a3);
__int64 cuda_driver_20a300(int a1, int a2);
__int64 cuda_driver_20b0a0(int a1, int a2, unsigned int a3);
__int64 cuda_driver_20b420(unsigned int a1, unsigned int a2, __int64 a3);
__int64 cuda_driver_20b460(__int64 result, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_20b5a0(__int64 a1);
__int64 cuda_driver_20be30(char a1);
_DWORD* cuda_driver_20c050(_DWORD* result, _QWORD* a2);
__int64 cuda_driver_20c0c0(__int64 a1);
__int64 cuda_driver_20c570(__int64 a1, int a2, int a3);
__int64 cuda_driver_20ced0(__int64 a1, _DWORD* a2);
__int64 cuda_driver_20cf30(__int64 a1, _DWORD* a2, __int64 a3);
__int64 cuda_driver_20d1c0(__int64 a1);
__int64 cuda_driver_20d660(_QWORD* a1, unsigned int a2, int a3, __int64 a4);
__int64 cuda_driver_20f1f0(__int64 a1, int8x8_t* a2);
__int64 cuda_driver_210400(__int64 a1);
__int64 cuda_driver_2106b0(__int64 a1);
__int64 cuda_driver_210700(__int64 a1);
__int64 cuda_driver_210e40(__int64 a1);
__int64 cuda_driver_210ed0(__int64 a1);
__int64 cuda_driver_211000(__int64 a1);
__int64 cuda_driver_214110(_DWORD* a1);
__int64 cuda_driver_2149f0(_DWORD* a1);
__int64 cuda_driver_214aa0(int a1, unsigned int a2, int a3, _QWORD* a4);
__int64 cuda_driver_215dd0(unsigned __int64 a1, __int64 a2);
__int64 cuda_driver_215f50(int* a1);
__int64 cuda_driver_215fa0(__int64 a1);
__int64 cuda_driver_2168a0(unsigned __int64 a1, __int64 a2);
__int64 cuda_driver_216a20(unsigned __int64 a1);
__int64 cuda_driver_216ae0(unsigned __int64 a1, __int64 a2, __int64 a3,
                           _QWORD* a4);
__int64 cuda_driver_216bc0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3,
                           unsigned __int64* a4);
__int64 cuda_driver_216f60(unsigned __int64 a1, char a2);
__int64 cuda_driver_217010(unsigned __int64 a1, bool* a2);
__int64 cuda_driver_2171f0(unsigned __int64 a1, char a2);
__int64 cuda_driver_2175d0(unsigned __int64 a1, _DWORD* a2);
__int64 cuda_driver_217e10(unsigned __int64 a1, _QWORD* a2);
__int64 cuda_driver_217ec0(unsigned __int64 a1, __int64 a2, __int64 a3,
                           _QWORD* a4, char a5);
__int64 cuda_driver_218220(unsigned __int64 a1, __int64 a2, unsigned int a3,
                           _QWORD* a4, _QWORD* a5);
__int64 cuda_driver_2184e0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3,
                           _QWORD* a4);
__int64 cuda_driver_21a100(int a1);
__int64 cuda_driver_21a730(__int64 result);
__int64 cuda_driver_21a770(__int64 result);
__int64 cuda_driver_21af90(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_21b240(__int64 result);
__int64 cuda_driver_21bd40(__int64 a1, _BOOL4* a2);
__int64 cuda_driver_21c6c0(__int64 (*a1)(__int64, unsigned __int64, _QWORD),
                           __int64 a2);

void cuda_driver_1febc0()
{
  *((_BYTE*)((_UNKNOWN*)0x10ACLL) + (_QWORD)CudaDriverData_1422118) = 1;
}

__int64 cuda_driver_1febe0()
{
  return *((unsigned __int8*)((_UNKNOWN*)0x10ACLL) +
           (_QWORD)CudaDriverData_1422118);
}

void cuda_driver_1fec00()
{
  *((_BYTE*)((_UNKNOWN*)0x10ACLL) + (_QWORD)CudaDriverData_1422118) = 0;
}

bool cuda_driver_1ffe60(__int64 a1, __int64 a2)
{
  int v3;
  int v4;
  int v7;

  if (a2 == 0) {
    return true;
  }
  if ((unsigned int)CudaDriverData_14358d0 >= 2 &&
      CudaDriverData_14358e4 == 0) {
    return false;
  }
  v3 = *(_DWORD*)(a1 + 32);
  __builtin_arm_dmb(0xDu);
  v4 = (4 * a2) | 2;
  if (v3 - v4 >= 0) {
    return true;
  }
  v7 = cuda_driver_204330(*(_QWORD*)(a1 + 24));
  __builtin_arm_dmb(0xEu);
  *(_DWORD*)(a1 + 32) = v7;
  return v7 - v4 >= 0;
}

__int64 cuda_driver_201b20(__int64* a1, __int64 a2, unsigned int a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 (*v11)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD);
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v17 = 0;
  v16 = 0;
  v15 = 0;
  v5 = CudaDriverStub_112b20(0, a1, 2u, &v16, &v17);
  if (v5 == 0) {
    if (*(_DWORD*)(*(_QWORD*)((char*)((char*)0x40LL) + v17) + 21864LL) == 1) {
      return 101;
    }
    else {
      v5 = 1;
      v6 = CudaDriverStub_1db9f0(*(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v17),
                                 a2, 1, (__int64)&v15);
      if (v6 != 0) {
        v7 = v6;
        v14 = 0;
        v8 = CudaDriverRoutine_5f7d0(
            *(_QWORD*)(*(__int64*)((char*)((__int64*)0x10LL) + v16) + 72), 0,
            v16);
        CudaDriverRoutine_205dd0((__int64)v8, v16, (__int64)&v14);
        v9 = v17;
        v10 = v14;
        v11 = *(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD,
                             _QWORD))(*(_QWORD*)((char*)((char*)0x40LL) + v17) +
                                      19112LL);
        v12 = CudaDriverStub_1db800(v7);
        v14 = v11(v10, 0, 0, v9, v15 + v12, a3, 0);
        CudaDriverRoutine_206060(v16, v14);
        return 0;
      }
    }
  }
  return v5;
}

__int64 cuda_driver_201ea0(__int64* a1, __int64 a2, unsigned int a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned int v9;
  __int64 v10;
  __int64 (*v11)(__int64, __int64, _QWORD, _QWORD);
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v17 = 0;
  v16 = 0;
  v15 = 0;
  v5 = CudaDriverStub_112b20(0, a1, 2u, &v16, &v17);
  if (v5 == 0) {
    if (*(_DWORD*)(*(_QWORD*)((char*)((char*)0x40LL) + v17) + 21864LL) == 1) {
      return 101;
    }
    v5 = 1;
    v6 = CudaDriverStub_1db9f0(*(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v17), a2,
                               1, (__int64)&v15);
    if (v6 == 0) {
      return v5;
    }
    v7 = v6;
    v14 = 0;
    v8 = CudaDriverRoutine_5f7d0(
        *(_QWORD*)(*(__int64*)((char*)((__int64*)0x10LL) + v16) + 72), 0, v16);
    CudaDriverRoutine_205dd0((__int64)v8, v16, (__int64)&v14);
    v9 = *((_DWORD*)v8 + 8);
    if (v9 != 0) {
      v10 = v14;
      if (v9 > 0xA) {
      LABEL_10:
        CudaDriverRoutine_206060(v16, v10);
        cuda_driver_5a060((__int64)v8);
        return 0;
      }
      v11 = *(__int64 (**)(__int64, __int64, _QWORD, _QWORD))(
          *(_QWORD*)((char*)((char*)0x40LL) + v17) + 19080LL);
    }
    else {
      v10 = v14;
      v11 = *(__int64 (**)(__int64, __int64, _QWORD, _QWORD))(
          *(_QWORD*)((char*)((char*)0x40LL) + v17) + 19048LL);
    }
    v12 = CudaDriverStub_1db800(v7);
    v10 = v11(v10, v15 + v12, a3, 0);
    v14 = v10;
    goto LABEL_10;
  }
  return v5;
}

__int64 cuda_driver_2026e0(__int64 a1, __int64 a2)
{
  __int64 result;
  void* v5;

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    v5 = CudaDriverData_1422118;
    CudaDriverStub_107f90((char*)&CudaDriverRoutine_7218 +
                          (_QWORD)CudaDriverData_1422118);
    *(_QWORD*)((char*)&CudaDriverRoutine_7228 + (_QWORD)v5) = a1;
    *(_QWORD*)((char*)&CudaDriverRoutine_7230 + (_QWORD)v5) = a2;
    CudaDriverStub_108070((char*)&CudaDriverRoutine_7218 + (_QWORD)v5);
    return 0;
  }
  return result;
}

__int64 cuda_driver_202770(_QWORD* a1, _QWORD* a2)
{
  __int64 result;
  void* v5;

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    v5 = CudaDriverData_1422118;
    CudaDriverStub_107f90((char*)&CudaDriverRoutine_7218 +
                          (_QWORD)CudaDriverData_1422118);
    if (a1 != nullptr) {
      *a1 = *(_QWORD*)((char*)&CudaDriverRoutine_7228 + (_QWORD)v5);
    }
    if (a2 != nullptr) {
      *a2 = *(_QWORD*)((char*)&CudaDriverRoutine_7230 + (_QWORD)v5);
    }
    CudaDriverStub_108070((char*)&CudaDriverRoutine_7218 + (_QWORD)v5);
    return 0;
  }
  return result;
}

__int64 cuda_driver_202b60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6;
  __int64 v7;
  __int64 result;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int64 v12;
  _BOOL4 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  __int64 v21;

  v6 = CudaDriverStub_102e00(a4);
  v7 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 64LL);
  result = CudaDriverRoutine_11acc0((int**)(a1 + 40),
                                    (unsigned __int64)"reasonCodeBuffer", &v20,
                                    &v19, nullptr, &v21, nullptr);
  if ((_DWORD)result == 0) {
    if (v21 != 8) {
      return 1;
    }
    if ((*(_WORD*)(a1 + 36) & 0x80) == 0) {
      return 1;
    }
    if ((unsigned int)(v20 - 3) < 3) {
      return 1;
    }
    v9 = *(unsigned int*)(v7 + 11740);
    if (v19 < v9) {
      return 1;
    }
    result = 1;
    if (v19 + 8 > (unsigned int)(v9 + 2048)) {
      return result;
    }
    *(_QWORD*)(a3 + (unsigned int)v19 -
               *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 64LL) +
                                11740LL)) = v6;
    *(_BYTE*)(*(_QWORD*)(a1 + 24) + 15928LL) = 1;
    v10 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 64LL);
    v11 = *(_DWORD*)(v10 + 17024);
    result = CudaDriverRoutine_11acc0((int**)(a1 + 40),
                                      (unsigned __int64)"trtEntriesPerSm", &v20,
                                      &v19, nullptr, &v21, nullptr);
    if ((_DWORD)result != 0) {
      return result;
    }
    if (v21 != 4) {
      return 1;
    }
    if ((*(_WORD*)(a1 + 36) & 0x80) == 0) {
      return 1;
    }
    if ((unsigned int)(v20 - 3) < 3) {
      return 1;
    }
    v12 = *(unsigned int*)(v10 + 11740);
    if (v19 < v12) {
      return 1;
    }
    result = 1;
    if (v19 + 4 > (unsigned int)(v12 + 2048)) {
      return result;
    }
    *(_DWORD*)(a3 + (unsigned int)v19 -
               *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 64LL) +
                                11740LL)) = v11;
    *(_BYTE*)(*(_QWORD*)(a1 + 24) + 15928LL) = 1;
    v13 =
        *((_BYTE*)((_UNKNOWN*)0x17BCLL) + (_QWORD)CudaDriverData_1422118) != 0;
    v14 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 64LL);
    result = CudaDriverRoutine_11acc0((int**)(a1 + 40),
                                      (unsigned __int64)"debuggerAttached",
                                      &v20, &v19, nullptr, &v21, nullptr);
    if ((_DWORD)result != 0) {
      return result;
    }
    if (v21 != 4) {
      return 1;
    }
    if ((*(_WORD*)(a1 + 36) & 0x80) == 0) {
      return 1;
    }
    if ((unsigned int)(v20 - 3) < 3) {
      return 1;
    }
    v15 = *(unsigned int*)(v14 + 11740);
    if (v19 < v15) {
      return 1;
    }
    result = 1;
    if (v19 + 4 <= (unsigned int)(v15 + 2048)) {
      *(_DWORD*)(a3 + (unsigned int)v19 -
                 *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 64LL) +
                                  11740LL)) = v13;
      *(_BYTE*)(*(_QWORD*)(a1 + 24) + 15928LL) = 1;
      v16 = *(_QWORD*)(a1 + 24);
      if (*(_QWORD*)(v16 + 232) == 0) {
        return 0;
      }
      v17 = *(_QWORD*)(v16 + 64);
      if ((~*(_DWORD*)(v17 + 16976) & 0x60) != 0) {
        return 0;
      }
      v18 = (*(__int64 (**)(__int64))(v17 + 18424))(13);
      v21 =
          CudaDriverStub_1223f0(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 232LL)) + v18;
      result = CudaDriverRoutine_202960(a1, a3, (__int64)"cnpConstTrtBasePtr",
                                        (__int64)&v21, 8, 0);
      if ((_DWORD)result == 0) {
        v19 = (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 64LL) +
                                      18456LL))((void*)*(_QWORD*)(a1 + 24));
        result = CudaDriverRoutine_202960(a1, a3, (__int64)"blockIdxLmem",
                                          (__int64)&v19, 8, 0);
        if ((_DWORD)result == 0) {
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_203220(unsigned __int64 a1, __int64 a2, unsigned __int64 a3,
                           unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 v10;
  int32x4_t* v11;
  __int64 v12;
  __int64 i;
  unsigned int v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t* v18;
  __int64 v19;
  unsigned __int64 v21;

  CudaDriverStub_1dbf90(a2);
  CudaDriverRoutine_1db1b0(a2);
  CudaDriverStub_107f90_alt1(a1 + 16);
  *(_BYTE*)(a1 + 32) |= 1u;
  v10 = CudaDriverStub_12e330(49224);
  if (v10 == 0) {
    v14 = 2;
    goto LABEL_18;
  }
  v11 = (int32x4_t*)v10;
  memset_plt(v10 + 8, 0, 49216);
  LANES128(*(v11)).n128_u64[0] = a1;
  LANES128(v11[1]).n128_u64[1] = a2;
  LANES128(v11[3]).n128_u32[3] = 4096;
  *(_QWORD*)(a1 + 64) += 4096LL;
  v12 = LANES128(v11[3]).n128_u32[3];
  if ((_DWORD)v12 != 0) {
    if ((unsigned int)v12 < 8) {
      for (i = 0; i != v12; ++i) {
      LABEL_9:
        LANES128(v11[4]).n128_u32[i] = i;
      }
      goto LABEL_10;
    }
    LANES128(v15).n128_u64[0] = 0x400000004LL;
    LANES128(v15).n128_u64[1] = 0x400000004LL;
    LANES128(v16).n128_u64[0] = 0x800000008LL;
    LANES128(v16).n128_u64[1] = 0x800000008LL;
    i = (unsigned int)v12 & 0xFFFFFFF8;
    v17 = COERCE_AS(int32x4_t, CudaDriverData_1115690);
    v18 = v11 + 5;
    v19 = i;
    do {
      v19 -= 8;
      v18[-1] = v17;
      *v18 = vaddq_s32(v17, v15);
      v17 = vaddq_s32(v17, v16);
      v18 += 2;
    } while (v19 != 0);
    if (i != v12) {
      goto LABEL_9;
    }
  }
LABEL_10:
  if ((unsigned int)CudaDriverData_14358d0 >= 2 &&
      CudaDriverData_14358e4 == 0) {
    LANES128(v11[2]).n128_u64[0] = a3;
    LANES128(v11[2]).n128_u64[1] = a4;
    LANES128(v11[3]).n128_u64[0] = a5;
  }
  LANES128(v11[3]).n128_u8[8] = 0;
  LANES128(v11[1]).n128_u64[0] = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = v11;
  v21 = LANES128(v11[1]).n128_u64[0];
  v14 = 0;
  if (v21 != 0) {
    *(_QWORD*)(v21 + 8) = v11;
  }
LABEL_18:
  CudaDriverStub_108070_alt1(a1 + 16);
  return v14;
}

unsigned __int64 cuda_driver_2033b0(__int64 a1)
{
  unsigned int v2;
  __int64 v4;
  bool v5;
  _DWORD* v6;
  _DWORD* v7;
  unsigned __int64 v9;

  if ((unsigned int)CudaDriverData_14358d0 >= 2 &&
      CudaDriverData_14358e4 == 0) {
    v2 = *(_DWORD*)(a1 + 40);
    if (v2 <= 3 && v2 != 1 && *(_QWORD*)(*(_QWORD*)(a1 + 56) + 24LL) != 0) {
      v4 = a1;
      v5 = CudaDriverRoutine_5adc0(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 24LL));
      a1 = v4;
      if (!v5) {
        v6 = **(_DWORD***)(v4 + 56);
        __builtin_arm_dmb(0xFu);
        LODWORD(v6) = *v6;
        __builtin_arm_dmb(0xFu);
        v7 = *(_DWORD**)(v4 + 16);
        __builtin_arm_dmb(0xFu);
        *v7 = (_DWORD)v6;
        __builtin_arm_dmb(0xFu);
      }
    }
  }
  v9 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  __builtin_arm_dmb(0xDu);
  CudaDriverRoutine_99e50(*(_QWORD*)(***(_QWORD***)a1 + 64LL), &v9);
  return v9;
}

__int64 cuda_driver_203470(__int64* a1)
{
  void* v2;
  __int64 v3;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  _QWORD* v14;
  int v15;

  v2 = CudaDriverData_1422118;
  v3 = *a1;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) +
                 (_QWORD)CudaDriverData_1422118) == 0) {
    v5 = *(_QWORD*)(v3 + 48);
    v6 = *((_DWORD*)a1 + 10);
    if (v6 > 6) {
      goto LABEL_22;
    }
  }
  else {
    v5 = CudaDriverStub_1dbab0(*(_QWORD*)(v3 + 24));
    v6 = *((_DWORD*)a1 + 10);
    if (v6 > 6) {
      goto LABEL_22;
    }
  }
  if (((1 << v6) & 0x4C) != 0) {
    v7 = *((unsigned int*)a1 + 9);
    v9 = v5 + 16 * v7;
    a1[1] = v9;
    a1[2] = v9;
    goto LABEL_14;
  }
  if (((1 << v6) & 0x11) != 0) {
    v7 = *((unsigned int*)a1 + 9);
    v8 = v5 + 4 * v7;
    a1[1] = v8;
    a1[2] = v8;
    goto LABEL_14;
  }
  if (v6 == 1) {
    v7 = *((unsigned int*)a1 + 9);
    v10 = v5 + 8 * v7;
    a1[1] = v10;
    a1[2] = v10 + 4;
    goto LABEL_14;
  }
LABEL_22:
  LODWORD(v7) = *((_DWORD*)a1 + 9);
LABEL_14:
  v11 = *a1;
  *((_DWORD*)a1 + 8) =
      *(_DWORD*)(*(_QWORD*)*a1 + 44LL) + *(_DWORD*)(*(_QWORD*)*a1 + 40LL) * v7;
  result = CudaDriverStub_1db800(*(_QWORD*)(v11 + 24));
  a1[3] = result + *((unsigned int*)a1 + 8);
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v2) >= 2u &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v2) == 0) {
    v14 = (_QWORD*)*a1;
    a1[7] = *(_QWORD*)(*a1 + 32) + 32LL * *((unsigned int*)a1 + 9);
    v15 = *(_DWORD*)(*v14 + 72LL);
    *(_QWORD*)a1[7] = CudaDriverStub_1dbab0(v14[5]) +
                      (unsigned int)(*((_DWORD*)a1 + 9) * v15);
    result = CudaDriverStub_1db800(*(_QWORD*)(*a1 + 40));
    *(_QWORD*)(a1[7] + 8) = result + (unsigned int)(*((_DWORD*)a1 + 9) * v15);
    if (*((_DWORD*)a1 + 10) == 6) {
      result = CudaDriverRoutine_5ef60(*(_QWORD**)(**(_QWORD**)*a1 + 72LL), 11);
      *(_QWORD*)(a1[7] + 24) = result;
    }
  }
  return result;
}

__int64 cuda_driver_2036a0(unsigned __int64 a1, __int64 a2)
{
  void* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  int v22;
  bool v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  int32x4_t* v40;
  int32x4_t v41;
  int32x4_t v42;
  __int64 v43;
  __int64 v44;
  int32x4_t v45;
  int32x4_t* v46;
  __int64 v47;
  unsigned __int64 v49;
  unsigned int* v50;
  unsigned int* v51;
  unsigned int v52;
  unsigned int* v53;
  unsigned __int64 v54;
  int v55;
  unsigned int v56;
  int v58;
  int* v59;
  int v60;
  _DWORD** v61;
  __int64 v63;
  _DWORD* v64;
  unsigned int v65;
  __int64 v66;
  unsigned int v68;
  __int64 v69;
  __int64 v71[8];
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
  __int64* v92;
  __int64* v93;
  _QWORD v94[7];
  __int64 v95;

  v3 = CudaDriverData_1422118;
  while (1) {
    CudaDriverStub_107f90_alt1(a1 + 16);
    v4 = *(_QWORD*)(a1 + 64);
    if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
      if (v4 > 0x7FF) {
        goto LABEL_69;
      }
      v5 = *(_QWORD*)a1;
      v6 = *(_QWORD*)(a1 + 8);
      v92 = nullptr;
      v93 = nullptr;
      if (v5 != 0) {
        v5 = CudaDriverRoutine_98340(v5);
        v7 = v5;
        v8 = *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v3);
        v9 = *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v3);
        v10 = v8 >= 2 && v9 == 0;
        if (!v10) {
        LABEL_9:
          v11 = 0;
          v12 = 0;
          goto LABEL_24;
        }
      }
      else {
        v7 = 0;
        v8 = *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v3);
        v9 = *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v3);
        if (v8 < 2 || v9 != 0) {
          goto LABEL_9;
        }
      }
      v12 = CudaDriverRoutine_12e510(32, 4096);
      if (v12 == 0) {
        goto LABEL_109;
      }
      v14 = (unsigned __int64)*(unsigned int*)(a1 + 72) << 12;
      v75 = (__typeof__(v75)){0};
      v76 = (__typeof__(v76)){0};
      v77 = (__typeof__(v77)){0};
      v78 = (__typeof__(v78)){0};
      v91 = (__typeof__(v91)){0};
      memset(&v71[2], 0, 48);
      v72 = (__typeof__(v72)){0};
      v73 = (__typeof__(v73)){0};
      v74 = (__typeof__(v74)){0};
      v79 = (__typeof__(v79)){0};
      v80 = (__typeof__(v80)){0};
      v81 = (__typeof__(v81)){0};
      v82 = (__typeof__(v82)){0};
      v83 = (__typeof__(v83)){0};
      v84 = (__typeof__(v84)){0};
      v85 = (__typeof__(v85)){0};
      v86 = (__typeof__(v86)){0};
      v87 = (__typeof__(v87)){0};
      v88 = (__typeof__(v88)){0};
      v89 = (__typeof__(v89)){0};
      v90 = (__typeof__(v90)){0};
      HIDWORD(v89) = -1;
      if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)v3 + 2) & 1) != 0) {
        v15 = 0x11D000211LL;
      }
      else {
        v15 = 0x11D000219LL;
      }
      v71[0] = v15;
      v71[1] = 0x400040001LL;
      CudaDriverStub_108070_alt1(a1 + 16);
      v68 = cuda_driver_1da1b0(v6, (unsigned __int64*)v71, v14, &v92);
      CudaDriverStub_107f90_alt1(a1 + 16);
      if (v68 != 0) {
        goto LABEL_113;
      }
      v16 = CudaDriverStub_1dbab0(v92);
      v17 = CudaDriverStub_1dbf90(v92);
      memset_plt(v16, 0, v17);
      v18 = *(_QWORD*)(a1 + 48);
      v19 = CudaDriverStub_12e330(v18);
      if (v19 == 0) {
      LABEL_109:
        v68 = 2;
        goto LABEL_113;
      }
      v11 = v19;
      v5 = memset_plt(v19, 0, v18);
      v8 = *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v3);
      v9 = *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v3);
    LABEL_24:
      v20 = *((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)v3 + 2);
      v72 = (__typeof__(v72)){0};
      v73 = (__typeof__(v73)){0};
      memset(&v71[2], 0, 48);
      v74 = (__typeof__(v74)){0};
      v75 = (__typeof__(v75)){0};
      v76 = (__typeof__(v76)){0};
      v77 = (__typeof__(v77)){0};
      v78 = (__typeof__(v78)){0};
      v79 = (__typeof__(v79)){0};
      v80 = (__typeof__(v80)){0};
      v81 = (__typeof__(v81)){0};
      v82 = (__typeof__(v82)){0};
      v83 = (__typeof__(v83)){0};
      v84 = (__typeof__(v84)){0};
      v85 = (__typeof__(v85)){0};
      v86 = (__typeof__(v86)){0};
      v87 = (__typeof__(v87)){0};
      v88 = (__typeof__(v88)){0};
      v89 = (__typeof__(v89)){0};
      v90 = (__typeof__(v90)){0};
      v91 = (__typeof__(v91)){0};
      HIDWORD(v89) = -1;
      if ((v20 & 1) != 0) {
        v21 = 0x11D000011LL;
      }
      else {
        v21 = 0x11D000019LL;
      }
      v10 = v9 == 0;
      v22 = *(_DWORD*)(a1 + 36);
      v23 = v10 && v8 >= 2;
      v24 = 0x11C00000ALL;
      if (!v23) {
        v24 = v21;
      }
      v71[0] = v24;
      v71[1] = 262145;
      if (v22 == 4) {
        v25 = v24 | 0x2000;
      }
      else if ((unsigned __int8)CudaDriverStub_4f840(v5) != 0 ||
               CudaDriverRoutine_9aa40(**(_QWORD**)(a1 + 8))) {
        v25 = v71[0] & 0xFFFFFFFFFFFF81FFLL | 0x200;
      }
      else {
        v25 = v71[0] & 0xFFFFFFFFFFFF81FFLL | 0x2600;
      }
      v71[0] = v25 & 0xFFFFFFFFFFFFFE3FLL |
               ((unsigned __int64)((*(_BYTE*)(a1 + 32) & 2) != 0) << 7);
      CudaDriverStub_108070_alt1(a1 + 16);
      v68 = cuda_driver_1da1b0(v6, (unsigned __int64*)v71, *(_QWORD*)(a1 + 48),
                               &v93);
      CudaDriverStub_107f90_alt1(a1 + 16);
      if (v68 != 0) {
        goto LABEL_111;
      }
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v3) < 2u ||
          *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v3) != 0) {
        if ((*(_BYTE*)(a1 + 32) & 2) != 0 && *(_DWORD*)(a1 + 36) != 3) {
          CudaDriverStub_108070_alt1(a1 + 16);
          v35 = v93;
          v36 = CudaDriverStub_1dbf90(v93);
          v68 = CudaDriverRoutine_104cd0(v7, (__int64)v35, v36, 2u);
          CudaDriverStub_107f90_alt1(a1 + 16);
          if (v68 != 0) {
            goto LABEL_111;
          }
        }
        else {
          v33 = CudaDriverStub_1dbab0(v93);
          v34 = CudaDriverStub_1dbf90(v93);
          memset_plt(v33, 0, v34);
        }
      }
      else if (a1 != *(_QWORD*)(v7 + 1928) &&
               (*(_DWORD*)((char*)((_UNKNOWN*)0x112CLL) + (_QWORD)v3) != 1 ||
                *(_DWORD*)(a1 + 36) != 0)) {
        v69 = v12;
        v26 = CudaDriverRoutine_5ef60(*(_QWORD**)(v7 + 72), 11);
        v27 = CudaDriverStub_1db800(v93);
        v28 = CudaDriverStub_1dbf90(v93);
        CudaDriverStub_108070_alt1(a1 + 16);
        v95 = 0;
        v29 = *(_QWORD*)(*(_QWORD*)v26 + 8LL);
        CudaDriverRoutine_59820(v26, &v95, 0);
        v94[0] = v27;
        v94[1] = 0x100000000LL;
        v94[2] = v28;
        memset(&v94[3], 0, 24);
        v95 = (*(__int64 (**)(__int64, __int64, _QWORD*, _QWORD, _QWORD))(
            *(_QWORD*)(v29 + 64) + 19320LL))(v95, v29, v94, 0, 0);
        if (*(_BYTE*)(*(_QWORD*)v26 + 33736LL) != 0) {
          v30 = 64;
        }
        else {
          v30 = 0;
        }
        CudaDriverRoutine_599a0(v26, v95, 1, v30);
        v31 = *(_QWORD*)(v7 + 72);
        if (*(_BYTE*)v31 != 0) {
          v32 = cuda_driver_5d3e0(v31, *(_QWORD*)(v31 + 33712));
          if (v32 != 0) {
            v68 = v32;
            CudaDriverStub_107f90_alt1(a1 + 16);
            v12 = v69;
            if (v11 == 0) {
              goto LABEL_113;
            }
            goto LABEL_112;
          }
        }
        CudaDriverStub_107f90_alt1(a1 + 16);
        v12 = v69;
      }
      v37 = v92;
      v38 = v93;
      v39 = CudaDriverStub_12e330(49224);
      if (v39 == 0) {
        v68 = 2;
      LABEL_111:
        if (v11 == 0) {
        LABEL_113:
          if (v92 != nullptr) {
            CudaDriverStub_108070_alt1(a1 + 16);
            CudaDriverStub_1db190(&v92);
            CudaDriverStub_107f90_alt1(a1 + 16);
          }
          if (v93 != nullptr) {
            CudaDriverStub_108070_alt1(a1 + 16);
            CudaDriverStub_1db190(&v93);
            CudaDriverStub_107f90_alt1(a1 + 16);
          }
          if (v12 != 0) {
            CudaDriverRoutine_12e340(v12);
          }
          goto LABEL_107;
        }
      LABEL_112:
        CudaDriverRoutine_12e340(v11);
        goto LABEL_113;
      }
      v40 = (int32x4_t*)v39;
      memset_plt(v39 + 8, 0, 49216);
      LANES128(*(v40)).n128_u64[0] = a1;
      LANES128(v40[1]).n128_u64[1] = (unsigned __int64)v38;
      LANES128(v41).n128_u64[0] = 0x400000004LL;
      LANES128(v41).n128_u64[1] = 0x400000004LL;
      LANES128(v42).n128_u64[0] = 0x800000008LL;
      LANES128(v42).n128_u64[1] = 0x800000008LL;
      LANES128(v40[3]).n128_u32[3] = 4096;
      *(_QWORD*)(a1 + 64) += 4096LL;
      v43 = LANES128(v40[3]).n128_u32[3];
      if ((_DWORD)v43 == 0) {
        goto LABEL_61;
      }
      if ((unsigned int)v43 >= 8) {
        v45 = COERCE_AS(int32x4_t, CudaDriverData_1115690);
        v44 = (unsigned int)v43 & 0xFFFFFFF8;
        v46 = v40 + 5;
        v47 = v44;
        do {
          v47 -= 8;
          v46[-1] = v45;
          *v46 = vaddq_s32(v45, v41);
          v45 = vaddq_s32(v45, v42);
          v46 += 2;
        } while (v47 != 0);
        if (v44 == v43) {
        LABEL_61:
          if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v3) >= 2u &&
              *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v3) == 0) {
            LANES128(v40[2]).n128_u64[0] = v12;
            LANES128(v40[2]).n128_u64[1] = (unsigned __int64)v37;
            LANES128(v40[3]).n128_u64[0] = v11;
          }
          LANES128(v40[3]).n128_u8[8] = 1;
          LANES128(v40[1]).n128_u64[0] = *(_QWORD*)(a1 + 56);
          *(_QWORD*)(a1 + 56) = v40;
          v49 = LANES128(v40[1]).n128_u64[0];
          if (v49 != 0) {
            *(_QWORD*)(v49 + 8) = v40;
          }
          goto LABEL_69;
        }
      }
      else {
        v44 = 0;
      }
      do {
        LANES128(v40[4]).n128_u32[v44] = v44;
        ++v44;
      } while (v43 != v44);
      goto LABEL_61;
    }
    if (v4 == 0) {
      v68 = 2;
      goto LABEL_107;
    }
  LABEL_69:
    v50 = *(unsigned int**)(a1 + 56);
    if (v50 != nullptr) {
      break;
    }
  LABEL_99:
    CudaDriverStub_108070_alt1(a1 + 16);
    if (*(_BYTE*)(*(_QWORD*)(a1 + 8) + 161LL) == 0) {
      v65 = CudaDriverRoutine_98650(*(_QWORD*)a1, 1);
      if (v65 != 0) {
        return v65;
      }
      v68 = CudaDriverRoutine_5e6a0(*(_QWORD*)(*(_QWORD*)a1 + 72LL));
      if (v68 != 0) {
        return v68;
      }
    }
  }
  v51 = *(unsigned int**)(a1 + 56);
  do {
    v52 = v51[15];
    if (v52 != 0) {
      v51[15] = v52 - 1;
      --*(_QWORD*)(*(_QWORD*)v51 + 64LL);
      v56 = v51[v51[15] + 16];
      goto LABEL_106;
    }
    v51 = *((unsigned int**)v51 + 2);
  } while (v51 != nullptr);
  while (v50[4112] == 0) {
  LABEL_74:
    v50 = *((unsigned int**)v50 + 2);
    if (v50 == nullptr) {
      goto LABEL_99;
    }
  }
  v53 = v50 + 4113;
  v54 = 0;
  while (2) {
    v56 = *v53;
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v3) < 2u ||
        *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v3) != 0) {
      v55 = *(_DWORD*)(CudaDriverStub_1dbab0(*((_QWORD*)v50 + 3)) +
                       *(_DWORD*)(*(_QWORD*)v50 + 44LL) +
                       *(_DWORD*)(*(_QWORD*)v50 + 40LL) * v56);
      __builtin_arm_dmb(0xDu);
      if (v55 == v53[4096]) {
        break;
      }
      goto LABEL_78;
    }
    v71[0] = (__int64)v50;
    memset(&v71[5], 0, 24);
    memset(&v71[1], 0, 32);
    v58 = *(_DWORD*)(*(_QWORD*)v50 + 36LL);
    HIDWORD(v71[4]) = v56;
    LODWORD(v71[5]) = v58;
    cuda_driver_203470(v71);
    v59 = (int*)v71[2];
    v60 = 0;
    if (v71[2] != 0) {
      v61 = (_DWORD**)v71[7];
      if (v71[7] != 0) {
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v3) >= 2u &&
            *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v3) == 0 &&
            LODWORD(v71[5]) <= 3 && LODWORD(v71[5]) != 1) {
          v63 = *(_QWORD*)(v71[7] + 24);
          if (v63 != 0 && !CudaDriverRoutine_5adc0(v63)) {
            v64 = *v61;
            __builtin_arm_dmb(0xFu);
            LODWORD(v64) = *v64;
            __builtin_arm_dmb(0xFu);
            __builtin_arm_dmb(0xFu);
            *v59 = (int)v64;
            __builtin_arm_dmb(0xFu);
          }
        }
        v60 = *v59;
        __builtin_arm_dmb(0xDu);
      }
    }
    if (v60 != v53[4096]) {
    LABEL_78:
      ++v54;
      ++v53;
      if (v54 >= v50[4112]) {
        goto LABEL_74;
      }
      continue;
    }
    break;
  }
  --v50[4112];
  --*(_QWORD*)(*(_QWORD*)v50 + 64LL);
  v66 = v50[4112];
  *v53 = v50[v66 + 4113];
  v53[4096] = v50[v66 + 8209];
  v51 = v50;
LABEL_106:
  *(_QWORD*)a2 = v51;
  *(_DWORD*)(a2 + 36) = v56;
  cuda_driver_203470((__int64*)a2);
  v68 = 0;
LABEL_107:
  CudaDriverStub_108070_alt1(a1 + 16);
  return v68;
}

__int64 cuda_driver_203fd0(unsigned int** a1, unsigned int a2)
{
  __int64 v4;
  unsigned int** v5;
  unsigned int* v6;
  unsigned int v8;
  unsigned int** v10;
  bool v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  _DWORD* v15;
  unsigned int* v16;
  __int64 v17;
  unsigned int* v18;

  v4 = *(_QWORD*)*a1;
  CudaDriverStub_107f90_alt2(v4 + 16);
  v5 = a1;
  v6 = *a1;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) +
                 (_QWORD)CudaDriverData_1422118) == 0) {
    v8 = *((_DWORD*)v5 + 10);
    if (v8 <= 3 && v8 != 1 && *((_QWORD*)v5[7] + 3) != 0) {
      v10 = v5;
      v11 = CudaDriverRoutine_5adc0(*((_QWORD*)v5[7] + 3));
      v5 = v10;
      if (!v11) {
        v15 = *(_DWORD**)v10[7];
        __builtin_arm_dmb(0xFu);
        LODWORD(v15) = *v15;
        __builtin_arm_dmb(0xFu);
        v16 = v10[2];
        __builtin_arm_dmb(0xFu);
        *v16 = (unsigned int)v15;
        __builtin_arm_dmb(0xFu);
        LODWORD(v16) = *v10[2];
        __builtin_arm_dmb(0xDu);
        v13 = *((_DWORD*)v10 + 9);
        if ((_DWORD)v16 == a2) {
          goto LABEL_13;
        }
      LABEL_15:
        v17 = v6[4112];
        v18 = &v6[v17];
        v18[4113] = v13;
        v18[8209] = a2;
        v6[4112] = v17 + 1;
        goto LABEL_16;
      }
    }
  }
  v12 = *v5[2];
  __builtin_arm_dmb(0xDu);
  v13 = *((_DWORD*)v5 + 9);
  if (v12 != a2) {
    goto LABEL_15;
  }
LABEL_13:
  v14 = v6[15];
  v6[v14 + 16] = v13;
  v6[15] = v14 + 1;
LABEL_16:
  ++*(_QWORD*)(*(_QWORD*)v6 + 64LL);
  *(_OWORD*)v5 = (__typeof__(*(_OWORD*)v5)){0};
  *((_OWORD*)v5 + 1) = (__typeof__(*((_OWORD*)v5 + 1))){0};
  *((_OWORD*)v5 + 2) = (__typeof__(*((_OWORD*)v5 + 2))){0};
  *((_OWORD*)v5 + 3) = (__typeof__(*((_OWORD*)v5 + 3))){0};
  CudaDriverRoutine_12e340((__int64)v5);
  return CudaDriverStub_108070_alt2(v4 + 16);
}

__int64 cuda_driver_204130(__int64 result, unsigned int a2)
{
  __int64 v3;
  void* v4;
  unsigned int v6;
  _DWORD* v8;
  _DWORD* v9;
  int v10;
  unsigned int* v12;
  bool v13;
  int v14;
  bool v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  _DWORD* v20;
  _DWORD* v21;
  __int64 v22;
  unsigned int* v23;

  v3 = result;
  v4 = CudaDriverData_1422118;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) +
                 (_QWORD)CudaDriverData_1422118) == 0) {
    v6 = *(_DWORD*)(result + 40);
    if (v6 <= 3 && v6 != 1) {
      result = *(_QWORD*)(*(_QWORD*)(result + 56) + 24LL);
      if (result != 0) {
        result = CudaDriverRoutine_5adc0(result);
        if ((_BYTE)result == 0) {
          v8 = **(_DWORD***)(v3 + 56);
          __builtin_arm_dmb(0xFu);
          LODWORD(v8) = *v8;
          __builtin_arm_dmb(0xFu);
          v9 = *(_DWORD**)(v3 + 16);
          __builtin_arm_dmb(0xFu);
          *v9 = (_DWORD)v8;
          __builtin_arm_dmb(0xFu);
        }
      }
    }
  }
  v10 = **(_DWORD**)(v3 + 16);
  __builtin_arm_dmb(0xDu);
  if (v10 == a2) {
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v4) < 2u ||
        *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v4) != 0) {
      return result;
    }
  LABEL_39:
    *(_QWORD*)(*(_QWORD*)(v3 + 56) + 24LL) = 0;
    return result;
  }
  CudaDriverStub_107f90_alt2(**(_QWORD**)v3 + 16LL);
  v12 = *(unsigned int**)v3;
  v13 = *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v4) >= 2u &&
        *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v4) == 0;
  if (v13 && ((unsigned int)(v14 = *(_DWORD*)(v3 + 40)) <= 3 ? (v15 = v14 == 1)
                                                             : (v15 = true),
              !v15 && (v16 = *(_QWORD*)(*(_QWORD*)(v3 + 56) + 24LL)) != 0 &&
                  !CudaDriverRoutine_5adc0(v16))) {
    v20 = **(_DWORD***)(v3 + 56);
    __builtin_arm_dmb(0xFu);
    LODWORD(v20) = *v20;
    __builtin_arm_dmb(0xFu);
    v21 = *(_DWORD**)(v3 + 16);
    __builtin_arm_dmb(0xFu);
    *v21 = (_DWORD)v20;
    __builtin_arm_dmb(0xFu);
    LODWORD(v21) = **(_DWORD**)(v3 + 16);
    __builtin_arm_dmb(0xDu);
    v18 = *(_DWORD*)(v3 + 36);
    if ((_DWORD)v21 == a2) {
      goto LABEL_31;
    }
  }
  else {
    v17 = **(_DWORD**)(v3 + 16);
    __builtin_arm_dmb(0xDu);
    v18 = *(_DWORD*)(v3 + 36);
    if (v17 == a2) {
    LABEL_31:
      v19 = v12[15];
      v12[v19 + 16] = v18;
      v12[15] = v19 + 1;
      goto LABEL_34;
    }
  }
  v22 = v12[4112];
  v23 = &v12[v22];
  v23[4113] = v18;
  v23[8209] = a2;
  v12[4112] = v22 + 1;
LABEL_34:
  ++*(_QWORD*)(*(_QWORD*)v12 + 64LL);
  CudaDriverStub_108070_alt2(**(_QWORD**)v3 + 16LL);
  result = cuda_driver_2036a0(**(_QWORD**)v3, v3);
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v4) >= 2u &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x113CLL) + (_QWORD)v4) == 0) {
    goto LABEL_39;
  }
  return result;
}

__int64 cuda_driver_204330(__int64 a1)
{
  unsigned int v2;
  __int64 v4;
  bool v5;
  _DWORD* v6;
  _DWORD* v7;
  __int64 result;

  if ((unsigned int)CudaDriverData_14358d0 >= 2 &&
      CudaDriverData_14358e4 == 0) {
    v2 = *(_DWORD*)(a1 + 40);
    if (v2 <= 3 && v2 != 1 && *(_QWORD*)(*(_QWORD*)(a1 + 56) + 24LL) != 0) {
      v4 = a1;
      v5 = CudaDriverRoutine_5adc0(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 24LL));
      a1 = v4;
      if (!v5) {
        v6 = **(_DWORD***)(v4 + 56);
        __builtin_arm_dmb(0xFu);
        LODWORD(v6) = *v6;
        __builtin_arm_dmb(0xFu);
        v7 = *(_DWORD**)(v4 + 16);
        __builtin_arm_dmb(0xFu);
        *v7 = (_DWORD)v6;
        __builtin_arm_dmb(0xFu);
      }
    }
  }
  result = **(unsigned int**)(a1 + 16);
  __builtin_arm_dmb(0xDu);
  return result;
}

__int64 cuda_driver_2043d0(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v5;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  char v13;
  __int64 v14[3];

  **(_DWORD**)(result + 16) = a2;
  if ((unsigned int)CudaDriverData_14358d0 >= 2 &&
      CudaDriverData_14358e4 == 0) {
    v5 = *(_DWORD*)(result + 40);
    if (v5 < 5 || v5 == 6) {
      v14[1] = v2;
      v14[2] = v3;
      v7 = result;
      v8 =
          CudaDriverRoutine_5ef60(*(_QWORD**)(***(_QWORD***)result + 72LL), 11);
      v9 = *(_DWORD**)(v7 + 16);
      v10 = *(_QWORD*)(v7 + 24);
      __builtin_arm_dmb(0xFu);
      v11 = (__int64*)v8;
      LODWORD(v7) = *v9;
      __builtin_arm_dmb(0xFu);
      v14[0] = 0;
      v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v8 + 8LL) + 64LL);
      CudaDriverRoutine_59820(v8, v14, 0);
      v14[0] = (*(__int64 (**)(__int64, __int64, _QWORD, __int64))(
          v12 + 19064))(v14[0], v10, (unsigned int)v7, 1);
      if (*(_BYTE*)(*v11 + 33736) != 0) {
        v13 = 64;
      }
      else {
        v13 = 0;
      }
      result = CudaDriverRoutine_599a0((__int64)v11, v14[0], 1, v13);
      if (*(_BYTE*)*v11 != 0) {
        return cuda_driver_5c2a0(v11);
      }
    }
  }
  return result;
}

__int64 cuda_driver_204700(__int64 a1, _QWORD* a2, unsigned int a3)
{
  _DWORD* v6;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  char v13;
  __int64 v14;

  CudaDriverStub_107f90_alt2(a1 + 1888);
  __builtin_arm_dmb(0xDu);
  v6 = (_DWORD*)a2[2];
  __builtin_arm_dmb(0xEu);
  *v6 = a3;
  CudaDriverRoutine_12dbe0((_QWORD*)(a1 + 1904));
  CudaDriverStub_108070_alt2(a1 + 1888);
  result = CudaDriverRoutine_5e790(*(_QWORD*)(a1 + 72));
  if ((unsigned int)CudaDriverData_14358d0 >= 2 &&
      CudaDriverData_14358e4 == 0) {
    v9 = a2[7];
    v14 = 0;
    v10 = a2[3];
    v11 = *(__int64**)(v9 + 24);
    v12 = *(_QWORD*)(*(_QWORD*)(*v11 + 8) + 64LL);
    CudaDriverRoutine_59820((__int64)v11, &v14, 0);
    v14 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64))(v12 + 19064))(
        v14, v10, a3, 1);
    if (*(_BYTE*)(*v11 + 33736) != 0) {
      v13 = 64;
    }
    else {
      v13 = 0;
    }
    result = CudaDriverRoutine_599a0((__int64)v11, v14, 1, v13);
    if (*(_BYTE*)*v11 != 0) {
      return cuda_driver_5c2a0(v11);
    }
  }
  return result;
}

__int64 cuda_driver_204be0(_QWORD* a1, int a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v7;
  float v8;
  __int64 v9;
  __int64 v10;
  float v11;
  unsigned int v12;
  struct {
    _QWORD v13[8];
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
    __int64 v26;
  } v13_;
  __int64 v27;
  __int64 v28;

  v27 = 0;
  v13_.v26 = 0;
  memset(v13_.v13, 0, sizeof(v13_.v13));
  v28 = 0;
  v13_.v14 = (__typeof__(v13_.v14)){0};
  v13_.v15 = (__typeof__(v13_.v15)){0};
  v13_.v16 = (__typeof__(v13_.v16)){0};
  v13_.v17 = (__typeof__(v13_.v17)){0};
  v13_.v18 = (__typeof__(v13_.v18)){0};
  v13_.v19 = (__typeof__(v13_.v19)){0};
  v13_.v20 = (__typeof__(v13_.v20)){0};
  v13_.v21 = (__typeof__(v13_.v21)){0};
  v13_.v22 = (__typeof__(v13_.v22)){0};
  v13_.v23 = (__typeof__(v13_.v23)){0};
  v13_.v24 = (__typeof__(v13_.v24)){0};
  v13_.v25 = (__typeof__(v13_.v25)){0};
  result = CudaDriverRoutine_121c60(&v28);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v28, nullptr, 0);
    if ((_DWORD)result == 0) {
      if (a1 == nullptr) {
        return 1;
      }
      result = 101;
      if (a2 < 0 || a2 >= CudaDriverData_1434ac0) {
        return result;
      }
      v7 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a2 + 35);
      if (*(_DWORD*)(v7 + 4204) == 0) {
        return 801;
      }
      if (a3 == nullptr) {
        return 1;
      }
      v8 = *((float*)a3 + 2);
      result = 1;
      if (v8 <= 0x1.9000000000000p+6f && v8 > 0x0.0p+0f &&
          vcvtms_u32_f32((float)(v8 * (float)*(unsigned int*)(v7 + 3724)) /
                         0x1.9000000000000p+6f) != 0) {
        v9 = v28;
        result =
            cuda_driver_97bc0((__int64)v13_.v13, v7, *((_DWORD*)a3 + 3), 1);
        if ((_DWORD)result == 0) {
          v10 = *a3;
          v11 = *((float*)a3 + 2);
          BYTE8(v13_.v24) = 1;
          *(_QWORD*)&v13_.v24 = v10;
          LODWORD(v13_.v23) = 3;
          HIDWORD(v13_.v13[2]) = 3020;
          LOBYTE(v10) = *((_BYTE*)a3 + 16);
          *((double*)&v13_.v23 + 1) = v11;
          BYTE2(v13_.v14) = v10;
          *(_WORD*)((char*)&v13_.v24 + 9) = *(_WORD*)((char*)a3 + 17);
          result = cuda_driver_9bad0(&v27, (__int64)v13_.v13);
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_1218b0(v9, v27);
            if ((_DWORD)result != 0) {
              v12 = result;
              cuda_driver_9bd90(v27);
              return v12;
            }
            else {
              *a1 = v27;
            }
          }
        }
      }
    }
  }
  return result;
}

void cuda_driver_205940(__int64 a1, __int64 a2, __int64* a3, unsigned int a4)
{
  __int64 v4;
  __int64 v9;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _BOOL4 v18;
  unsigned int v19;
  _BOOL4 v20;
  bool v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 (*v31)(__int64, __int64, __int64, __int64, __int64, __int64, _QWORD);
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  _BYTE v36[208];

  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = *(_QWORD*)(a2 + 16);
  v35 = *(_QWORD*)a1;
  v9 = a1;
  if (*(_BYTE*)(a1 + 37) == 0) {
    v9 = *(_QWORD*)(v35 + 48);
  }
  v33 = *(_QWORD*)(v4 + 88);
  CudaDriverStub_107f90_alt2(v9 + 8),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) >= 2u &&
      *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)CudaDriverData_1422118) == 0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a1 + 33816) + 8LL) + 64LL) +
                17329LL) != 0) {
    v11 = *(_DWORD*)(a1 + 34248);
    __builtin_arm_dmb(0xDu);
    if (v11 != 0) {
      do {
        CudaDriverStub_12dca0(100),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v12 = *(_DWORD*)(a1 + 34248);
        __builtin_arm_dmb(0xDu);
      } while (v12 != 0);
    }
  }
  v13 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 16)),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  ++*(_QWORD*)(v13 + 1320);
  v14 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 16)),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v15 = *(_QWORD*)(v14 + 1328);
  if ((a4 & 0x100) == 0) {
    *(_QWORD*)(v14 + 1328) = ++v15;
  }
  if ((*(_BYTE*)(a2 + 56) & 4) != 0 &&
      cuda_driver_12ea30(
          (int*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 104LL) + 576LL)) &&
      *(_QWORD*)(a2 + 744) < *(_QWORD*)(*(_QWORD*)(v4 + 104) + 744LL) &&
      (unsigned int)CudaDriverStub_118070(a2) == 0) {
    CudaDriverRoutine_118090(a2),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  CudaDriverRoutine_113070(a2),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v34 = a3;
  if ((*(_BYTE*)(a2 + 56) & 5) == 4 &&
      (v16 = *(_QWORD*)(*(_QWORD*)(v4 + 104) + 744LL),
       *(_QWORD*)(a1 + 33160) < v16)) {
    v17 = *(_QWORD*)(a2 + 744);
    *(_QWORD*)(a1 + 33160) = v15;
    v18 = v17 < v16;
    v19 = a4 & 0xFFFFFF7F;
    if ((*(_BYTE*)(a2 + 56) & 2) != 0) {
      goto LABEL_21;
    }
  }
  else {
    v18 = false;
    v19 = a4 & 0xFFFFFF7F;
    if ((*(_BYTE*)(a2 + 56) & 2) != 0) {
    LABEL_21:
      v20 = false;
      v21 = true;
      if (!v18) {
        goto LABEL_34;
      }
      goto LABEL_30;
    }
  }
  v22 = *(_QWORD*)(a1 + 33168);
  if (v22 < *(_QWORD*)(*(_QWORD*)(CudaDriverRoutine_98340(v4) + 96) + 744LL)) {
    v23 = *(_QWORD*)(a2 + 752);
    v21 =
        v23 >= *(_QWORD*)(*(_QWORD*)(CudaDriverRoutine_98340(v4) + 96) + 744LL),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (**(_DWORD**)(a2 + 16) != 1) {
      goto LABEL_26;
    }
  LABEL_29:
    v20 = *(_QWORD*)(a2 + 752) < *(_QWORD*)(*(_QWORD*)(v4 + 96) + 744LL);
    *(_QWORD*)(a2 + 752) = v15;
    *(_QWORD*)(a1 + 33168) = v15;
    if (!v18 && !v20) {
      goto LABEL_34;
    }
    goto LABEL_30;
  }
  v21 = true;
  if (**(_DWORD**)(a2 + 16) == 1) {
    goto LABEL_29;
  }
LABEL_26:
  v20 = false;
  *(_QWORD*)(a2 + 752) = v15;
  *(_QWORD*)(a1 + 33168) = v15;
  if (v18) {
  LABEL_30:
    if (v18) {
      CudaDriverRoutine_1ba4f0((__int64)v36, v35),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      CudaDriverStub_107f90_alt2(v33 + 88),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      CudaDriverRoutine_1ba7d0((__int64)v36, *(_QWORD*)(v33 + 24)),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      CudaDriverStub_108070_alt2(v33 + 88),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      CudaDriverRoutine_5a420(a1, (unsigned __int64)v36, v19),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      CudaDriverRoutine_1ba580((__int64)v36),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    if (v20) {
      CudaDriverRoutine_1ba4f0((__int64)v36, v35),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      CudaDriverStub_107f90_alt2(v33 + 88),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      CudaDriverRoutine_1ba7d0((__int64)v36, *(_QWORD*)(v33 + 48)),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      CudaDriverStub_108070_alt2(v33 + 88),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      CudaDriverRoutine_5a420(a1, (unsigned __int64)v36, v19),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      CudaDriverRoutine_1ba580((__int64)v36),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
LABEL_34:
  if (!v21) {
    CudaDriverRoutine_1ba4f0((__int64)v36, v35),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v24 = *(_QWORD*)(CudaDriverRoutine_98340(v4) + 88),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    CudaDriverStub_107f90_alt2(v24 + 88),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    CudaDriverRoutine_1ba7d0((__int64)v36, *(_QWORD*)(v24 + 48)),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    CudaDriverStub_108070_alt2(v24 + 88),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    CudaDriverRoutine_5a420(a1, (unsigned __int64)v36, v19),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    CudaDriverRoutine_1ba580((__int64)v36),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (a1 != *(_QWORD*)(a2 + 616 +
                       8LL * *(unsigned int*)(*(_QWORD*)(a1 + 33816) + 36LL))) {
    a4 = v19;
  }
  *(_BYTE*)(a2 + 608) = CudaDriverRoutine_5a420(a1, *(_QWORD*)(a2 + 584), a4),
                 v28 =
                     COERCE_AS(__typeof__(v28),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  do {
    v25 = *(_QWORD*)(a2 + 744);
    v26 = v25;
    atomic_compare_exchange_strong((atomic_ullong* volatile)(a2 + 744),
                                   (unsigned __int64*)&v26, v15);
  } while (v26 != v25);
  *(_QWORD*)(a1 + 33176) = a2;
  *(_QWORD*)(a1 + 33152) = *(_QWORD*)(a2 + 744);
  v27 = *(unsigned int*)(*(_QWORD*)(a1 + 33816) + 36LL);
  *(_DWORD*)(a2 + 736) = v27;
  *(_QWORD*)(a2 + 616 + 8 * v27) = a1;
  CudaDriverRoutine_59730((__int64*)a1, v34, 0x18000u, a4),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *(_QWORD*)(a2 + 1208) = a1;
  if ((a4 & 0x80) == 0 && *(_BYTE*)(a2 + 336) != 0) {
    cuda_driver_112c00(*v34, (_DWORD*)a1, a2),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    *v34 = v28;
  }
  if (*((_BYTE*)&CudaDriverRoutine_7540 + (_QWORD)CudaDriverData_1422118 + 3) !=
          0 &&
      *(_DWORD*)v4 != 1 &&
      (CudaDriverRoutine_98110(v4) || *(_BYTE*)(v4 + 16161) != 0)) {
    v29 = *(_QWORD*)(v4 + 17800);
    if (v29 != 0) {
      v30 = *v34;
      v31 = *(__int64 (**)(__int64, __int64, __int64, __int64, __int64, __int64,
                           _QWORD))(*(_QWORD*)(v4 + 64) + 19112LL),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v32 = CudaDriverStub_1223e0(v29),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      *v34 = v31(v30, a1, a1, v4, v32, 1, 0),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
}

__int64 cuda_driver_206820(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v9;

  v9 = 0;
  result = CudaDriverRoutine_df060(&v9);
  if ((_DWORD)result == 0) {
    v3 = v9;
    *a1 = 0;
    cuda_driver_108520(v3 + 24);
    CudaDriverStub_107f90_alt2(*(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v9) +
                               128LL);
    v4 = v9;
    v5 = *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v9);
    v6 = *(_QWORD**)(v5 + 2040);
    if (v6 != nullptr) {
      do {
        v7 = v6[30];
        if ((v7 & 0x700000007LL) == 0x200000002LL &&
            (v7 & 0x7C0000000000000LL) != 0) {
          *a1 += v6[16];
        }
        v6 = (_QWORD*)v6[1];
      } while (v6 != nullptr);
      v5 = *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v4);
    }
    CudaDriverStub_108070_alt2(v5 + 128);
    CudaDriverRoutine_1085d0(v9 + 24);
    return 0;
  }
  return result;
}

__int64 cuda_driver_206910(__int64* a1)
{
  __int64 result;
  __int64 v3;
  struct {
    char gap0_[8];
    __int64 v4;
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
    __int128 v24;
    __int128 v25;
    __int128 v26;
    __int128 v27;
    __int64 v28;
  } v4_;
  __int64 v29;

  v29 = 0;
  result = CudaDriverRoutine_df060(&v29);
  if ((_DWORD)result == 0) {
    v4_.v28 = 0;
    v4_.v22 = (__typeof__(v4_.v22)){0};
    v4_.v23 = (__typeof__(v4_.v23)){0};
    v4_.v24 = (__typeof__(v4_.v24)){0};
    v4_.v25 = (__typeof__(v4_.v25)){0};
    v4_.v21 = (__typeof__(v4_.v21)){0};
    v4_.v20 = (__typeof__(v4_.v20)){0};
    v4_.v19 = (__typeof__(v4_.v19)){0};
    v4_.v18 = (__typeof__(v4_.v18)){0};
    v4_.v17 = (__typeof__(v4_.v17)){0};
    v4_.v16 = (__typeof__(v4_.v16)){0};
    v4_.v15 = (__typeof__(v4_.v15)){0};
    v4_.v14 = (__typeof__(v4_.v14)){0};
    v4_.v13 = (__typeof__(v4_.v13)){0};
    v4_.v4 = 512;
    v4_.v26 = (__typeof__(v4_.v26)){0};
    v4_.v27 = (__typeof__(v4_.v27)){0};
    v4_.v5 = (__typeof__(v4_.v5)){0};
    v4_.v6 = (__typeof__(v4_.v6)){0};
    v4_.v7 = (__typeof__(v4_.v7)){0};
    v4_.v8 = (__typeof__(v4_.v8)){0};
    v4_.v9 = (__typeof__(v4_.v9)){0};
    v4_.v10 = (__typeof__(v4_.v10)){0};
    v4_.v11 = (__typeof__(v4_.v11)){0};
    v4_.v12 = (__typeof__(v4_.v12)){0};
    v3 = (*(__int64 (**)(_QWORD, __int64*))(
        *(_QWORD*)((char*)((char*)0x40LL) + v29) + 19432LL))(
        *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v29), &v4_.v4);
    *a1 = v3;
    return 0;
  }
  return result;
}

__int64 cuda_driver_206d30(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 result;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;

  v1 = *(_QWORD**)(a1 + 72);
  v3 = CudaDriverRoutine_1d93e0(v1[79], v1 + 30);
  v5 = *(_QWORD*)(a1 + 480);
  v4 = *(_QWORD**)(a1 + 488);
  v6 = (__int64*)(a1 + 480);
  if (v1[18] == a1 + 480) {
    v1[18] = v4;
    if (v4 == nullptr) {
      goto LABEL_7;
    }
    v7 = 0;
  }
  else {
    *(_QWORD*)(v5 + 8) = v4;
    if (v4 == nullptr) {
      goto LABEL_7;
    }
    v7 = *v6;
  }
  *v4 = v7;
LABEL_7:
  v9 = (_QWORD*)(a1 + 80);
  v8 = *(_QWORD*)(a1 + 80);
  v10 = *(_QWORD*)(a1 + 88);
  *v6 = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_OWORD*)(a1 + 16) = (__typeof__(*(_OWORD*)(a1 + 16))){0};
  *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
  *(_OWORD*)(a1 + 64) = (__typeof__(*(_OWORD*)(a1 + 64))){0};
  *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
  *(_OWORD*)(a1 + 80) = (__typeof__(*(_OWORD*)(a1 + 80))){0};
  *(_QWORD*)a1 = v1;
  *(_QWORD*)(a1 + 8) = v8;
  *(_QWORD*)(a1 + 64) = v10;
  *(_QWORD*)(a1 + 72) = v3;
  CudaDriverRoutine_201580(v3, (_QWORD*)(a1 + 16), v10);
  if (v5 != 0) {
    *(_QWORD*)(a1 + 80) = v5;
    v11 = *(_QWORD**)(v5 + 8);
    *(_QWORD*)(a1 + 88) = v11;
    if (v11 != nullptr) {
      *v11 = v9;
    }
    *(_QWORD*)(v5 + 8) = v9;
  }
  else {
    *(_QWORD*)(a1 + 88) = v1[18];
    v1[18] = v9;
    v12 = *(_QWORD**)(a1 + 88);
    if (v12 != nullptr) {
      *v12 = v9;
    }
  }
  v14 = *(_QWORD**)(a1 + 72);
  result = *(_QWORD*)(a1 + 80);
  if (result == 0 || *(_BYTE*)(result + 16) != 0) {
    v15 = *(_QWORD*)(a1 + 88);
    if (v15 == 0) {
      return result;
    }
    goto LABEL_16;
  }
  result = CudaDriverRoutine_206ed0((_QWORD*)result, (__int64)v1,
                                    *(_QWORD**)(a1 + 72), &v16);
  if ((_DWORD)result == 0) {
    v9 = v16;
    v15 = v16[1];
    if (v15 != 0) {
    LABEL_16:
      if (*(_BYTE*)(v15 + 16) == 0) {
        return CudaDriverRoutine_206ed0(v9, (__int64)v1, v14, &v16);
      }
    }
  }
  return result;
}

__int64 cuda_driver_207250(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  void (*v4)(__int64, _QWORD, __int64*);
  int v5;
  __int64 v6;
  void (*v8)(__int64, _QWORD, __int64*);
  __int64 v9;

  if ((*(_BYTE*)(result + 60) & 1) != 0) {
    v2 = result;
    if (a2 == 4) {
      if ((*(_BYTE*)(result + 60) & 2) != 0) {
        return result;
      }
      v9 = 0;
      v3 = *(_QWORD*)(result + 16);
      v4 = *(void (**)(__int64, _QWORD, __int64*))(
          (char*)((_UNKNOWN*)0x1110LL) + (_QWORD)CudaDriverData_1422118);
      if (v4 != nullptr) {
        v4(v3,
           *(_QWORD*)((char*)((_UNKNOWN*)0x1118LL) +
                      (_QWORD)CudaDriverData_1422118),
           &v9);
        result = v9;
        v5 = *(unsigned __int8*)(v2 + 60);
        if ((~v5 & 0x28) == 0) {
          return result;
        }
      }
      else {
        result = CudaDriverRoutine_99e40(*(_QWORD*)(v3 + 64));
        v5 = *(unsigned __int8*)(v2 + 60);
        if ((~v5 & 0x28) == 0) {
          return result;
        }
      }
      *(_QWORD*)(v2 + 8) = result;
      *(_BYTE*)(v2 + 60) = v5 | 0x20;
      return result;
    }
    v9 = 0;
    v6 = *(_QWORD*)(result + 16);
    v8 = *(void (**)(__int64, _QWORD, __int64*))(
        (char*)((_UNKNOWN*)0x1110LL) + (_QWORD)CudaDriverData_1422118);
    if (v8 != nullptr) {
      v8(v6,
         *(_QWORD*)((char*)((_UNKNOWN*)0x1118LL) +
                    (_QWORD)CudaDriverData_1422118),
         &v9);
      result = v9;
      if (a2 != 1) {
        return result;
      }
    }
    else {
      result = CudaDriverRoutine_99e40(*(_QWORD*)(v6 + 64));
      if (a2 != 1) {
        return result;
      }
    }
    *(_QWORD*)v2 = result;
  }
  return result;
}

__int64 cuda_driver_207340(__int64 result, int a2)
{
  __int64 v3;
  int v4;
  __int64 v5;
  void* v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 (*v14)(__int64, _QWORD, __int64*);
  __int64 v15;

  if (result != 0) {
    v3 = result;
    v4 = 0;
    v5 = 0;
    v6 = CudaDriverData_1422118;
    while (1) {
      v8 = *(_QWORD*)(v3 + 48);
      v9 = *(unsigned __int8*)(v3 + 60);
      *(_QWORD*)(v3 + 48) = 0;
      if ((v9 & 1) == 0) {
        goto LABEL_5;
      }
      if (a2 == 4) {
        if ((v9 & 2 | v4) != 0) {
          if ((~v9 & 0x28) != 0) {
            goto LABEL_26;
          }
          goto LABEL_5;
        }
      }
      else if (v4 != 0) {
        goto LABEL_23;
      }
      v13 = *(_QWORD*)(v3 + 16);
      v14 = *(__int64 (**)(__int64, _QWORD, __int64*))(
          (char*)((_UNKNOWN*)0x1110LL) + (_QWORD)v6);
      v15 = 0;
      if (v14 == nullptr) {
        result = CudaDriverRoutine_99e40(*(_QWORD*)(v13 + 64));
        v5 = result;
        if (a2 == 1) {
        LABEL_3:
          *(_QWORD*)v3 = v5;
        LABEL_4:
          v4 = 1;
          goto LABEL_5;
        }
        goto LABEL_24;
      }
      result =
          v14(v13, *(_QWORD*)((char*)((_UNKNOWN*)0x1118LL) + (_QWORD)v6), &v15);
      v5 = v15;
    LABEL_23:
      if (a2 == 1) {
        goto LABEL_3;
      }
    LABEL_24:
      if (a2 != 4) {
        goto LABEL_4;
      }
      v9 = *(unsigned __int8*)(v3 + 60);
      v4 = 1;
      if ((~v9 & 0x28) != 0) {
      LABEL_26:
        *(_QWORD*)(v3 + 8) = v5;
        *(_BYTE*)(v3 + 60) = v9 | 0x20;
      }
    LABEL_5:
      v7 = *(_DWORD*)(v3 + 56) - 1;
      *(_DWORD*)(v3 + 56) = v7;
      if (v7 != 0) {
        v3 = v8;
        if (v8 == 0) {
          return result;
        }
      }
      else {
        v10 = *(_QWORD*)(v3 + 40);
        if (v10 != 0) {
          CudaDriverRoutine_203f30(v10);
        }
        v11 = *(_QWORD*)(v3 + 32);
        if (v11 != 0) {
          CudaDriverRoutine_203f30(v11);
        }
        v12 = *(_QWORD*)(v3 + 24);
        if (v12 != 0) {
          CudaDriverRoutine_1ba520(v12);
        }
        *(_OWORD*)v3 = (__typeof__(*(_OWORD*)v3)){0};
        *(_OWORD*)(v3 + 16) = (__typeof__(*(_OWORD*)(v3 + 16))){0};
        *(_OWORD*)(v3 + 32) = (__typeof__(*(_OWORD*)(v3 + 32))){0};
        *(_OWORD*)(v3 + 48) = (__typeof__(*(_OWORD*)(v3 + 48))){0};
        result = CudaDriverRoutine_12e340(v3);
        v3 = v8;
        if (v8 == 0) {
          return result;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_209a60(unsigned int* a1, unsigned int a2, __int64 a3,
                           __int64 a4)
{
  unsigned int v4;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  int v19;
  int v20;
  bool v21;
  int v22;
  int v23;
  unsigned int v24;
  _QWORD* v25;
  bool v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  char* v35;
  __int64 v36;
  void (*v37)(__int64);

  v4 = 1;
  if (a1 == nullptr || a2 - 4 < 0xFFFFFFFD) {
    return v4;
  }
  v7 = 0;
  *a1 = 0;
  do {
    if (v7 == 0) {
      goto LABEL_4;
    }
    v8 = CudaDriverData_13b2ad8[v7];
    v9 = CudaDriverData_141b990[v7];
    if (v8 <= 1) {
      v10 = 1;
    }
    else {
      v10 = CudaDriverData_13b2ad8[v7];
    }
    v11 = v10 & 7;
    if (v7 == 2) {
      if (v8 < 8) {
        v12 = 0;
        if (v11 == 0) {
          goto LABEL_4;
        }
      LABEL_31:
        v24 = v12 - 17;
        v25 = (_QWORD*)(v9 + 16 * v12 + 8);
        do {
          v26 = v24++ >= 3;
          if (v26) {
            v27 = 1;
          }
          else {
            v27 = 2;
          }
          if (v26) {
            v28 = 2;
          }
          else {
            v28 = 1;
          }
          --v11;
          *((_DWORD*)v25 - 2) = v27;
          *((_DWORD*)v25 - 1) = v28;
          *v25 = 3;
          v25 += 2;
        } while (v11 != 0);
        goto LABEL_4;
      }
      v14 = v9 + 64;
      v15 = -15;
      v16 = 0;
      v17 = -(__int64)(v10 & 0xFFFFFFF8);
      do {
        v18 = v16 == -16;
        *(_DWORD*)(v14 - 64) = 1;
        *(_DWORD*)(v14 - 60) = 2;
        v16 -= 8;
        if (v18) {
          v19 = 2;
        }
        else {
          v19 = 1;
        }
        if (v18) {
          v20 = 1;
        }
        else {
          v20 = 2;
        }
        v21 = v15 >= 3;
        *(_QWORD*)(v14 - 56) = 3;
        v15 += 8;
        if (v21) {
          v22 = 1;
        }
        else {
          v22 = 2;
        }
        if (v21) {
          v23 = 2;
        }
        else {
          v23 = 1;
        }
        *(_DWORD*)(v14 - 48) = v19;
        *(_DWORD*)(v14 - 44) = v20;
        *(_QWORD*)(v14 - 40) = 3;
        *(_DWORD*)(v14 - 32) = v22;
        *(_DWORD*)(v14 - 28) = v23;
        *(_QWORD*)(v14 - 24) = 3;
        *(_DWORD*)(v14 - 16) = v19;
        *(_DWORD*)(v14 - 12) = v20;
        *(_QWORD*)(v14 - 8) = 3;
        *(_DWORD*)v14 = 1;
        *(_DWORD*)(v14 + 4) = 2;
        *(_QWORD*)(v14 + 8) = 3;
        *(_DWORD*)(v14 + 16) = 1;
        *(_DWORD*)(v14 + 20) = 2;
        *(_QWORD*)(v14 + 24) = 3;
        *(_DWORD*)(v14 + 32) = 1;
        *(_DWORD*)(v14 + 36) = 2;
        *(_QWORD*)(v14 + 40) = 3;
        *(_DWORD*)(v14 + 48) = 1;
        *(_DWORD*)(v14 + 52) = 2;
        *(_QWORD*)(v14 + 56) = 3;
        v14 += 128;
      } while (v17 != v16);
      v12 = -v16;
      if (v11 != 0) {
        goto LABEL_31;
      }
    }
    else {
      if (v8 < 8) {
        v13 = 0;
        if ((v10 & 7) == 0) {
          goto LABEL_4;
        }
      LABEL_43:
        v32 = (_QWORD*)(v9 + 16 * v13 + 8);
        do {
          *((_DWORD*)v32 - 2) = 1;
          *((_DWORD*)v32 - 1) = 2;
          --v11;
          *v32 = 3;
          v32 += 2;
        } while (v11 != 0);
        goto LABEL_4;
      }
      v29 = v9 + 64;
      v30 = 0;
      v31 = -(__int64)(v10 & 0xFFFFFFF8);
      do {
        *(_DWORD*)(v29 - 64) = 1;
        *(_DWORD*)(v29 - 60) = 2;
        v30 -= 8;
        *(_QWORD*)(v29 - 56) = 3;
        *(_DWORD*)(v29 - 48) = 1;
        *(_DWORD*)(v29 - 44) = 2;
        *(_QWORD*)(v29 - 40) = 3;
        *(_DWORD*)(v29 - 32) = 1;
        *(_DWORD*)(v29 - 28) = 2;
        *(_QWORD*)(v29 - 24) = 3;
        *(_DWORD*)(v29 - 16) = 1;
        *(_DWORD*)(v29 - 12) = 2;
        *(_QWORD*)(v29 - 8) = 3;
        *(_DWORD*)v29 = 1;
        *(_DWORD*)(v29 + 4) = 2;
        *(_QWORD*)(v29 + 8) = 3;
        *(_DWORD*)(v29 + 16) = 1;
        *(_DWORD*)(v29 + 20) = 2;
        *(_QWORD*)(v29 + 24) = 3;
        *(_DWORD*)(v29 + 32) = 1;
        *(_DWORD*)(v29 + 36) = 2;
        *(_QWORD*)(v29 + 40) = 3;
        *(_DWORD*)(v29 + 48) = 1;
        *(_DWORD*)(v29 + 52) = 2;
        *(_QWORD*)(v29 + 56) = 3;
        v29 += 128;
      } while (v31 != v30);
      v13 = -v30;
      if (v11 != 0) {
        goto LABEL_43;
      }
    }
  LABEL_4:
    ++v7;
  } while (v7 != 31);
  zstd_decompress_227c40(CudaDriverData_14320f0);
  v35 = (char*)&CudaDriverData_1440b18 + 32 * a2;
  if (CudaDriverStub_12dd60((__int64)(&CudaDriverData_14320e0 + a2 + 4),
                            (__int64)v35, 0) != 0) {
    v4 = 210;
  }
  else if ((unsigned int)CudaDriverRoutine_12de40(CudaDriverData_14320f8) !=
               1 ||
           (v4 = (*(__int64 (**)(_DWORD*, void*, __int64))(
                (char*)((__int64*)0x18LL) + (_QWORD)CudaDriverData_14320e0))(
                &CudaDriverData_14320e8, CudaDriverRoutine_20a620, 0)) == 0) {
    zstd_decompress_227c40((_DWORD*)v35 + 6);
    *((_DWORD*)v35 + 4) = a2;
    *((_QWORD*)v35 + 1) = a4;
    *(_QWORD*)v35 = a3;
    *((_DWORD*)v35 + 5) = 1;
    ZSTD_initDStream_usingDDict((__int64)(v35 + 24));
    v4 = 0;
  }
  ZSTD_initDStream_usingDDict((__int64)CudaDriverData_14320f0);
  v36 = CudaDriverData_1432120;
  if (CudaDriverData_1432120 != 0 &&
      (v37 = (void (*)(__int64))CudaDriverStub_12dd60(
           (__int64)&CudaDriverData_1432120, 0, CudaDriverData_1432120)) ==
          (void (*)(__int64))v36) {
    v37(CudaDriverData_1432128);
    if (v4 == 0) {
    LABEL_54:
      *a1 = a2;
    }
  }
  else if (v4 == 0) {
    goto LABEL_54;
  }
  return v4;
}

__int64 cuda_driver_209e00(unsigned int a1)
{
  _UNKNOWN** v1;
  __int64 v2;
  _DWORD* v3;
  _DWORD* v4;
  char v5;
  __int64 v6;
  char* v7;
  unsigned int v8;
  __int64 v9;
  void (*v10)(__int64);
  __int64 v12;
  int v13;
  unsigned int v14;
  unsigned int* v15;
  __int64 v16;
  __int64 v17;

  if (a1 - 4 < 0xFFFFFFFD) {
    return 1;
  }
  v1 = &CudaDriverData_14320e0 + a1;
  v4 = v1[4];
  v2 = (__int64)(v1 + 4);
  v3 = v4;
  if (v4 == nullptr) {
    return 1;
  }
  v5 = a1;
  v6 = a1;
  zstd_decompress_227c40(CudaDriverData_14320f0);
  v7 = (char*)&CudaDriverData_1440b18 + 32 * v6;
  v8 = 1;
  if ((char*)CudaDriverStub_12dd60(v2, 0, (__int64)v7) == v7) {
    zstd_decompress_227c40(v3 + 6);
    v12 = 0;
    v3[5] = 0;
    *(_QWORD*)v3 = 0;
    *((_QWORD*)v3 + 1) = 0;
    v13 = ~(1 << v5);
    do {
      if (v12 != 0) {
        v14 = CudaDriverData_13b2ad8[v12];
        v15 = (unsigned int*)CudaDriverData_141ba88[v12];
        v16 = 0;
        if (v14 <= 1) {
          v17 = 1;
        }
        else {
          v17 = v14;
        }
        do {
          if (((unsigned int)CudaDriverRoutine_12dd80(v15) & v13) == 0) {
            (*(void (**)(int, int, unsigned int, unsigned int))(
                (char*)((__int64*)0x30LL) + (_QWORD)CudaDriverData_14320e0))(
                0, CudaDriverData_14320e8, v12, v16);
          }
          ++v16;
          ++v15;
        } while (v17 != v16);
      }
      ++v12;
    } while (v12 != 31);
    ZSTD_initDStream_usingDDict((__int64)(v3 + 6));
    if ((unsigned int)CudaDriverRoutine_12dec0(CudaDriverData_14320f8) != 0) {
      v8 = 0;
      ZSTD_initDStream_usingDDict((__int64)CudaDriverData_14320f0);
      v9 = CudaDriverData_1432120;
      if (CudaDriverData_1432120 == 0) {
        return v8;
      }
    }
    else {
      v8 = (*(__int64 (**)(int))((char*)((char*)0x20LL) +
                                 (_QWORD)CudaDriverData_14320e0))(
          CudaDriverData_14320e8);
      CudaDriverData_14320e8 = 0;
      ZSTD_initDStream_usingDDict((__int64)CudaDriverData_14320f0);
      v9 = CudaDriverData_1432120;
      if (CudaDriverData_1432120 == 0) {
        return v8;
      }
    }
  }
  else {
    ZSTD_initDStream_usingDDict((__int64)CudaDriverData_14320f0);
    v9 = CudaDriverData_1432120;
    if (CudaDriverData_1432120 == 0) {
      return v8;
    }
  }
  v10 = (void (*)(__int64))CudaDriverStub_12dd60(
      (__int64)&CudaDriverData_1432120, 0, v9);
  if (v10 == (void (*)(__int64))v9) {
    v10(CudaDriverData_1432128);
  }
  return v8;
}

__int64 cuda_driver_20a050(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4;
  int v6;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  unsigned int v17;

  if (a3 > 0x1E) {
    return 1;
  }
  v4 = 1;
  if ((unsigned int)(a2 - 4) < 0xFFFFFFFD || a4 >= CudaDriverData_13b2ad8[a3]) {
    return v4;
  }
  v6 = 1 << a2;
  if (a1 != 0) {
    v10 = CudaDriverRoutine_12dde0(
        (unsigned int*)(CudaDriverData_141ba88[a3] + 4LL * a4));
    v11 = a1;
    v12 = a3;
    if (v10 != 0) {
      return 0;
    }
  }
  else {
    v13 = v6;
    v14 = CudaDriverRoutine_12dd80(
        (unsigned int*)(CudaDriverData_141ba88[a3] + 4LL * a4));
    v11 = 0;
    v4 = 0;
    v15 = (v14 & ~v13) == 0;
    v12 = a3;
    if (!v15) {
      return v4;
    }
  }
  v16 = v11;
  zstd_decompress_227ba0(CudaDriverData_14320f0);
  v17 = (*(__int64 (**)(int, int, unsigned int, unsigned int))(
      (char*)((__int64*)0x30LL) + (_QWORD)CudaDriverData_14320e0))(
      v16, CudaDriverData_14320e8, v12, a4);
  zstd_decompress_227c10(CudaDriverData_14320f0);
  return v17;
}

__int64 cuda_driver_20a180(int a1, int a2, unsigned int a3)
{
  unsigned int v6;
  unsigned int* v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  unsigned int v13;

  if (a3 > 0x1E || (unsigned int)(a2 - 4) < 0xFFFFFFFD) {
    return 1;
  }
  if (a3 == 0) {
    return 0;
  }
  v6 = CudaDriverData_13b2ad8[a3];
  v7 = (unsigned int*)CudaDriverData_141ba88[a3];
  if (v6 <= 1) {
    v8 = 1;
  }
  else {
    v8 = v6;
  }
  if (a1 != 0) {
    v9 = 0;
    while (1) {
      if ((unsigned int)CudaDriverRoutine_12dde0(v7) == 0) {
        zstd_decompress_227ba0(CudaDriverData_14320f0);
        v10 = (*(__int64 (**)(int, int, unsigned int, unsigned int))(
            (char*)((__int64*)0x30LL) + (_QWORD)CudaDriverData_14320e0))(
            a1, CudaDriverData_14320e8, a3, v9);
        zstd_decompress_227c10(CudaDriverData_14320f0);
        if (v10 != 0) {
          break;
        }
      }
      ++v9;
      ++v7;
      if (v8 == v9) {
        return 0;
      }
    }
    return v10;
  }
  else {
    v11 = ~(1 << a2);
    v12 = 0;
    while (1) {
      if (((unsigned int)CudaDriverRoutine_12dd80(v7) & v11) == 0) {
        zstd_decompress_227ba0(CudaDriverData_14320f0);
        v13 = (*(__int64 (**)(int, int, unsigned int, unsigned int))(
            (char*)((__int64*)0x30LL) + (_QWORD)CudaDriverData_14320e0))(
            0, CudaDriverData_14320e8, a3, v12);
        zstd_decompress_227c10(CudaDriverData_14320f0);
        if (v13 != 0) {
          break;
        }
      }
      ++v12;
      ++v7;
      if (v8 == v12) {
        return 0;
      }
    }
    return v13;
  }
}

__int64 cuda_driver_20a300(int a1, int a2)
{
  unsigned int v2;
  __int64 v4;
  unsigned int v5;
  unsigned int* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned int v11;
  unsigned int* v12;
  __int64 v13;
  __int64 v14;

  v2 = 1;
  if ((unsigned int)(a2 - 4) >= 0xFFFFFFFD) {
    if (a1 != 0) {
      v4 = 0;
      while (v4 == 0) {
      LABEL_4:
        if (++v4 == 31) {
          return 0;
        }
      }
      v5 = CudaDriverData_13b2ad8[v4];
      v6 = (unsigned int*)CudaDriverData_141ba88[v4];
      v7 = 0;
      if (v5 <= 1) {
        v8 = 1;
      }
      else {
        v8 = v5;
      }
      while (1) {
        if ((unsigned int)CudaDriverRoutine_12dde0(v6) == 0) {
          zstd_decompress_227ba0(CudaDriverData_14320f0);
          v2 = (*(__int64 (**)(int, int, unsigned int, unsigned int))(
              (char*)((__int64*)0x30LL) + (_QWORD)CudaDriverData_14320e0))(
              a1, CudaDriverData_14320e8, v4, v7);
          zstd_decompress_227c10(CudaDriverData_14320f0);
          if (v2 != 0) {
            break;
          }
        }
        ++v7;
        ++v6;
        if (v8 == v7) {
          goto LABEL_4;
        }
      }
    }
    else {
      v9 = ~(1 << a2);
      v10 = 0;
      while (v10 == 0) {
      LABEL_14:
        ++v10;
        v2 = 0;
        if (v10 == 31) {
          return v2;
        }
      }
      v11 = CudaDriverData_13b2ad8[v10];
      v12 = (unsigned int*)CudaDriverData_141ba88[v10];
      v13 = 0;
      if (v11 <= 1) {
        v14 = 1;
      }
      else {
        v14 = v11;
      }
      while (1) {
        if (((unsigned int)CudaDriverRoutine_12dd80(v12) & v9) == 0) {
          zstd_decompress_227ba0(CudaDriverData_14320f0);
          v2 = (*(__int64 (**)(int, int, unsigned int, unsigned int))(
              (char*)((__int64*)0x30LL) + (_QWORD)CudaDriverData_14320e0))(
              0, CudaDriverData_14320e8, v10, v13);
          zstd_decompress_227c10(CudaDriverData_14320f0);
          if (v2 != 0) {
            break;
          }
        }
        ++v13;
        ++v12;
        if (v14 == v13) {
          goto LABEL_14;
        }
      }
    }
  }
  return v2;
}

__int64 cuda_driver_20b0a0(int a1, int a2, unsigned int a3)
{
  bool v4;
  __int64 result;
  int v6;
  void* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 i;
  __int64 v16;
  __int64 v17;
  unsigned int v18;

  if (a2 != 1) {
    return 400;
  }
  if (a3 > 0xA) {
    return 1;
  }
  v4 = a1 == 0;
  result = 0;
  v6 = v4;
  *(_DWORD*)(CudaDriverData_1422ba8 + 4LL * a3) = v6;
  v7 = CudaDriverData_1422118;
  if ((vmaxvq_u32(vtstq_s32(
           *(int32x4_t*)((char*)&CudaDriverRoutine_4734 + (_QWORD)v7),
           *(int32x4_t*)((char*)&CudaDriverRoutine_4734 + (_QWORD)v7))) &
           1 |
       (*(_DWORD*)((char*)&CudaDriverRoutine_4744 +
                   (_QWORD)CudaDriverData_1422118) != 0) |
       (*(_DWORD*)((char*)&CudaDriverRoutine_4748 +
                   (_QWORD)CudaDriverData_1422118) != 0)) != 0 &&
      a1 == 0) {
    CudaDriverStub_10e9d0();
    CudaDriverStub_107f90((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v7);
    v8 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v7);
    if (v8 == 0) {
      goto LABEL_21;
    }
    v9 = 0;
    v10 = 0;
    do {
      v8 = *(_QWORD*)(v8 + 16328);
      ++v10;
      v9 += 8;
    } while (v8 != 0);
    if (v10 != 0) {
      v11 = CudaDriverStub_12e330(v9);
      if (v11 == 0) {
        CudaDriverStub_108070((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v7);
        v18 = 2;
        goto LABEL_23;
      }
      v12 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v7);
      v13 = v11;
      if (v12 != 0) {
        v14 = (_QWORD*)v11;
        do {
          *v14++ = v12;
          v12 = *(_QWORD*)(v12 + 16328);
        } while (v12 != 0);
      }
      CudaDriverStub_108070((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v7);
      for (i = 0; i != v10; ++i) {
        v16 = CudaDriverRoutine_98340(*(_QWORD*)(v13 + 8 * i));
        cuda_driver_108520(v16 + 24);
        v17 = CudaDriverRoutine_98340(*(_QWORD*)(v13 + 8 * i));
        CudaDriverRoutine_1085d0(v17 + 24);
      }
      CudaDriverRoutine_12e340(v13);
    }
    else {
    LABEL_21:
      CudaDriverStub_108070((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v7);
    }
    v18 = 0;
  LABEL_23:
    CudaDriverStub_10e9f0();
    return v18;
  }
  return result;
}

__int64 cuda_driver_20b420(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 result;
  __int64 (*v8)(__int64, __int64, __int64, __int64);

  v4 = a2;
  v5 = a1;
  v6 = CudaDriverData_1432eb8;
  __builtin_arm_dmb(0xDu);
  result = CudaDriverData_1432eb0;
  v8 = (__int64 (*)(__int64, __int64, __int64, __int64))CudaDriverData_1432ea8;
  __builtin_arm_dmb(0xDu);
  if (v8 != nullptr && v6 == CudaDriverData_1432eb8) {
    return v8(result, v5, v4, a3);
  }
  return result;
}

__int64 cuda_driver_20b460(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  int v8;
  __int64 (*v9)(__int64, __int64, __int64);

  v4 = *(__int64**)(*(_QWORD*)(a4 + 56) + 8LL);
  v6 = *v4;
  v5 = v4[1];
  if (v6 == *CudaDriverData_14231e8 && v5 == CudaDriverData_14231e8[1]) {
    return result;
  }
  if ((_DWORD)result == 3) {
    switch ((_DWORD)a2) {
    case 0xD:
      if ((unsigned int)(a3 - 1) >= 4) {
        a3 = 0;
      }
      else {
        a3 = (unsigned int)(a3 + 17);
      }
      goto LABEL_17;
    case 8:
      if ((unsigned int)(a3 - 1) < 8) {
        a3 = CudaDriverData_1131b68[(unsigned int)(a3 - 1)];
      LABEL_17:
        a2 = 21;
        goto LABEL_18;
      }
      break;
    case 2:
      a2 = 21;
      switch ((int)a3) {
      case 1:
      case 2:
      case 3:
        goto LABEL_18;
      case 7:
        a3 = 4;
        break;
      case 8:
        a3 = 5;
        break;
      case 9:
        a3 = 6;
        break;
      case 10:
        a3 = 7;
        break;
      case 17:
        a3 = 8;
        break;
      case 18:
        a3 = 9;
        break;
      case 19:
        a3 = 10;
        break;
      case 20:
        a3 = 11;
        break;
      case 22:
        a3 = 12;
        break;
      case 33:
        a3 = 13;
        break;
      default:
        goto LABEL_13;
      }
      goto LABEL_18;
    default:
      break;
    }
  LABEL_13:
    a3 = 0;
    goto LABEL_17;
  }
LABEL_18:
  v8 = CudaDriverData_1432eb8;
  __builtin_arm_dmb(0xDu);
  result = CudaDriverData_1432eb0;
  v9 = (__int64 (*)(__int64, __int64, __int64))CudaDriverData_1432ea8;
  __builtin_arm_dmb(0xDu);
  if (v9 != nullptr && v8 == CudaDriverData_1432eb8) {
    return v9(result, a2, a3);
  }
  return result;
}

__int64 cuda_driver_20b5a0(__int64 a1)
{
  _DWORD* v1;
  void* v3;
  __int64 i;
  _DWORD* v5;

  if (a1 != 0) {
    if (*(_DWORD*)(a1 + 188) != 3 &&
        (v1 = *(_DWORD**)(a1 + 16448)) != nullptr && *v1 == 208 && v1[1] == 2) {
      CudaDriverRoutine_54940((__int64)v1);
      return 0;
    }
    else {
      return 201;
    }
  }
  else {
    v3 = CudaDriverData_1422118;
    CudaDriverStub_107f90((char*)((_UNKNOWN*)0x17C8LL) +
                          (_QWORD)CudaDriverData_1422118);
    for (i = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v3); i != 0;
         i = *(_QWORD*)(i + 16328)) {
      if (*(_DWORD*)(i + 188) != 3) {
        v5 = *(_DWORD**)(i + 16448);
        if (v5 != nullptr && *v5 == 208 && v5[1] == 2) {
          CudaDriverRoutine_54940((__int64)v5);
        }
      }
    }
    CudaDriverStub_108070((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v3);
    return 0;
  }
}

__int64 cuda_driver_20be30(char a1)
{
  *((_BYTE*)((_UNKNOWN*)0x147CLL) + (_QWORD)CudaDriverData_1422118) = a1;
  return 0;
}

_DWORD* cuda_driver_20c050(_DWORD* result, _QWORD* a2)
{
  __int64 v2;

  if (a2 == nullptr) {
    return (_DWORD*)(((_UNKNOWN*)0x3E4LL) + 3);
  }
  *a2 = 0;
  if (result != nullptr) {
    if (*result > 1u) {
      return nullptr;
    }
    else {
      v2 = (unsigned int)result[14];
      result = nullptr;
      *a2 = v2;
    }
  }
  return result;
}

__int64 cuda_driver_20c0c0(__int64 a1)
{
  if (a1 == 0) {
    return 201;
  }
  if (*((_BYTE*)((_UNKNOWN*)0x1120LL) + (_QWORD)CudaDriverData_1422118) != 0) {
    return CudaDriverRoutine_98490(a1, 1);
  }
  return CudaDriverRoutine_980c0(a1);
}

__int64 cuda_driver_20c570(__int64 a1, int a2, int a3)
{
  __int64 v5;

  if (a1 == 0) {
    return 201;
  }
  v5 = CudaDriverRoutine_98340(a1);
  if (a2 == 1 && (a3 == 1 || a3 == 2)) {
    return (*(__int64 (**)(void*))(*(_QWORD*)(v5 + 64) + 20680LL))((void*)v5);
  }
  else {
    return 1;
  }
}

__int64 cuda_driver_20ced0(__int64 a1, _DWORD* a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int8 v6;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v5 = CudaDriverRoutine_98340(a1);
    result = (*(__int64 (**)(void*))(*(_QWORD*)(v5 + 64) + 20536LL))(
        *(void**)(v5 + 64));
    *a2 = v6;
  }
  return result;
}

__int64 cuda_driver_20cf30(__int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v3;

  if (a1 == 0 || a2 == nullptr || a3 == 0 || *a2 == 0) {
    return 1;
  }
  v3 = CudaDriverRoutine_98340(a1);
  return (*(__int64 (**)(void*))(*(_QWORD*)(v3 + 64) + 20544LL))(
      *(void**)(v3 + 64));
}

__int64 cuda_driver_20d1c0(__int64 a1)
{
  __int64 v1;

  v1 = CudaDriverRoutine_98340(a1);
  return (*(__int64 (**)(void*))(*(_QWORD*)(v1 + 64) + 21288LL))((void*)v1);
}

__int64 cuda_driver_20d660(_QWORD* a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 result;
  _QWORD* v9;
  int32x2_t v10;
  unsigned int v11;
  _BYTE v12[20];
  int v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;

  result = 101;
  v16 = 0;
  v17 = 0;
  if ((a3 & 0x80000000) == 0 && a3 < CudaDriverData_1434ac0) {
    result = 1;
    if (a1 != nullptr && a4 != 0) {
      v9 = a1;
      result = CudaDriverRoutine_121c60(&v17);
      if ((_DWORD)result == 0) {
        result = cuda_driver_97bc0(
            (__int64)v12,
            *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a3 + 35), a2, 1);
        if ((_DWORD)result == 0) {
          PSEUDO_LOW_LANE64(v10, n64_u64, *(unsigned __int64*)a4);
          v13 = 3020;
          v15 = *(_DWORD*)(a4 + 8);
          v14 = LANES64_OF(vrev64_s32(v10)).n64_u64[0];
          result = cuda_driver_9bad0(&v16, (__int64)v12);
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_1218b0(v17, v16);
            if ((_DWORD)result != 0) {
              v11 = result;
              cuda_driver_9bd90(v16);
              return v11;
            }
            else {
              *v9 = v16;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_20f1f0(__int64 a1, int8x8_t* a2)
{
  __int64 result;
  unsigned int v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  int64x2_t v9;
  int8x16_t v10;
  int8x8_t v11;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v4 = LANES64(*(a2)).n64_u32[0];
    if (LANES64(*(a2)).n64_u32[0] >= 0x10) {
      v7 = a1 + 240;
      v5 = *(_QWORD*)(a1 + 240);
      v6 = *(_QWORD*)(v7 + 8);
      v8 = ((unsigned int)v5 >> 9) & 0x3F;
      v9 = vdupq_n_s64(v5);
      if (v8 >= 0x13) {
        v8 = 0x7FFFFFFF;
      }
      LANES64(*(a2)).n64_u32[1] = v8;
      LANES64(a2[1]).n64_u64[0] =
          LANES64_OF(
              vand_s8(vmovn_s64(vceqq_s64(
                          vandq_s8(
                              v9, COERCE_AS(int8x16_t, CudaDriverData_11153f0)),
                          COERCE_AS(int64x2_t, CudaDriverData_1115720))),
                      COERCE_AS(int8x8_t, 0x100000001LL)))
              .n64_u64[0];
      if (v4 < 0x18) {
        return 0;
      }
      v10 =
          vceqq_s64(vandq_s8(v9, COERCE_AS(int8x16_t, CudaDriverData_1115730)),
                    COERCE_AS(int64x2_t, CudaDriverData_1115d20));
      LANES64(v11).n64_u32[0] = LANES64_OF(vmovn_s64(vmvnq_s8(v10))).n64_u32[0];
      LANES64(v11).n64_u32[1] = LANES64_OF(vmovn_s64(v10)).n64_u32[1];
      LANES64(a2[2]).n64_u64[0] =
          LANES64_OF(vand_s8(v11, COERCE_AS(int8x8_t, 0x100000001LL)))
              .n64_u64[0];
      if (v4 < 0x1C) {
        return 0;
      }
      LANES64(a2[3]).n64_u32[0] = (v6 & 0x100000) != 0;
      if (v4 == 28) {
        return 0;
      }
      else {
        LANES64(*(a2)).n64_u32[0] = 28;
        return 0;
      }
    }
  }
  return result;
}

__int64 cuda_driver_210400(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 result;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned __int64 v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char v34;
  unsigned __int64 v35;
  unsigned int v36;
  _QWORD v37[4];
  __int64 v38;
  _QWORD v39[2];

  memset_plt(v37, 0, 4096);
  if (a1 == 0) {
    return 4;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0) {
    return 4;
  }
  v3 = *(_QWORD*)(a1 + 16);
  if (v3 == 0) {
    return 4;
  }
  v4 = *(_DWORD*)(v2 + 24);
  if (v4 == 0) {
    v7 = 1;
    goto LABEL_15;
  }
  v5 = v4 & 3;
  if (v4 < 4) {
    v6 = 0;
    v7 = 1;
    if ((v4 & 3) == 0) {
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v9 = (__int64*)(v3 + 64);
  v7 = 1;
  v10 = 0;
  v11 = -(__int64)(v4 & 0xFFFFFFFC);
  v12 = &v38;
  do {
    v13 = *(v9 - 8);
    v14 = *(v9 - 7);
    v15 = *(v9 - 4);
    v16 = *(v9 - 3);
    v10 -= 4;
    *(v12 - 4) = v13;
    *(v12 - 3) = v14;
    v18 = *v9;
    v17 = v9[1];
    v19 = v9[4];
    v20 = v9[5];
    *(v12 - 2) = v15;
    *(v12 - 1) = v16;
    *v12 = v18;
    v12[1] = v17;
    v12[2] = v19;
    v12[3] = v20;
    v12 += 8;
    v9 += 16;
    v7 &= (v19 | v20 | v18 | v17 | v15 | v16 | v13 | v14) == 0;
  } while (v11 != v10);
  v6 = -v10;
  if (v5 != 0) {
  LABEL_13:
    v21 = (__int64*)(v3 + 32 * v6 + 8);
    v22 = &v37[2 * v6 + 1];
    do {
      v23 = *(v21 - 1);
      v24 = *v21;
      v21 += 4;
      *(v22 - 1) = v23;
      *v22 = v24;
      v22 += 2;
      --v5;
      v7 &= (v23 | v24) == 0;
    } while (v5 != 0);
  }
LABEL_15:
  v25 = (*(__int64 (**)(_QWORD, _QWORD))(v2 + 4080))(*(_QWORD*)(v2 + 4272), 0);
  if ((_DWORD)v25 == 0) {
    v26 = *(_DWORD*)(v2 + 24);
    if (v26 == 0) {
      return 0;
    }
    if ((v7 & 1) == 0) {
      v29 = 0;
      while (1) {
        v25 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD*))(v2 + 3256))(
            v2 + 16, *(_QWORD*)(v2 + 4272), (unsigned int)v29, v39);
        if ((_DWORD)v25 != 0) {
          return CudaDriverRoutine_20f580(v25);
        }
        if (*(_DWORD*)(v2 + 28) != 0) {
          v30 = &v37[2 * v29];
          v31 = 0;
          v32 = v39[0] & ~*v30;
          v33 = v39[1] & ~v30[1];
          do {
            v34 = 64 - v31;
            if ((unsigned int)v31 > 0x40) {
              v34 = 0;
            }
            v35 = v33 >> v31 << v34;
            if (v31 <= 0x3F) {
              v35 = v32 >> v31;
            }
            v25 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, unsigned __int64))(
                v2 + 4104))(*(_QWORD*)(v2 + 4272), (unsigned int)v29,
                            (unsigned int)v31, v35 & 1);
            if ((_DWORD)v25 != 0) {
              return CudaDriverRoutine_20f580(v25);
            }
          } while (++v31 < *(unsigned int*)(v2 + 28));
        }
        ++v29;
        result = 0;
        if (v29 >= *(unsigned int*)(v2 + 24)) {
          return result;
        }
      }
    }
    if (*(_DWORD*)(v2 + 28) == 0) {
      return 0;
    }
    v27 = 1;
    v28 = 0;
    while (v27 == 0) {
    LABEL_35:
      ++v28;
      result = 0;
      if (v28 >= v26) {
        return result;
      }
    }
    v36 = 0;
    while (1) {
      v25 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD))(v2 + 4104))(
          *(_QWORD*)(v2 + 4272), v28, v36, 0);
      if ((_DWORD)v25 != 0) {
        break;
      }
      v27 = *(_DWORD*)(v2 + 28);
      if (++v36 >= v27) {
        v26 = *(_DWORD*)(v2 + 24);
        goto LABEL_35;
      }
    }
  }
  return CudaDriverRoutine_20f580(v25);
}

__int64 cuda_driver_2106b0(__int64 a1)
{
  if (a1 == 0 || *(_QWORD*)(a1 + 24) == 0) {
    return 4;
  }
  if ((*(unsigned int (**)(_QWORD, __int64))(
          (char*)((_UNKNOWN*)0xE0LL) +
          *(__int64*)((char*)((__int64*)0x10LL) +
                      (_QWORD)CudaDriverData_1423090)))(*(_QWORD*)(a1 + 24),
                                                        a1 + 32) != 0) {
    return 10;
  }
  return 0;
}

__int64 cuda_driver_210700(__int64 a1)
{
  __int64 result;
  __int64 v3;

  v3 = 0;
  if (a1 == 0 || *(int*)(a1 + 4) < 1) {
    return 4;
  }
  result = (*(__int64 (**)(__int64*))(
      (char*)((_UNKNOWN*)0xE8LL) +
      *(__int64*)((char*)((__int64*)0x10LL) + (_QWORD)CudaDriverData_1423090)))(
      &v3);
  if ((_DWORD)result != 0) {
    return 10;
  }
  *(_QWORD*)(a1 + 8) = v3;
  return result;
}

__int64 cuda_driver_210e40(__int64 a1)
{
  void* v2;
  int v3;

  if (a1 == 0) {
    return 4;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    return 4;
  }
  v2 = CudaDriverData_1422118;
  CudaDriverStub_107f90((char*)((_UNKNOWN*)0x1818LL) +
                        (_QWORD)CudaDriverData_1422118);
  v3 = (*(__int64 (**)(_QWORD))(a1 + 8))(*(_QWORD*)(a1 + 16));
  CudaDriverStub_108070((char*)((_UNKNOWN*)0x1818LL) + (_QWORD)v2);
  return v3 == 0;
}

__int64 cuda_driver_210ed0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (a1 == 0) {
    return 4;
  }
  v1 = *(_QWORD*)(a1 + 8);
  if (v1 == 0 || *(_DWORD*)a1 >= 0x38u &&
                     (*(_QWORD*)(a1 + 40) == 0 || *(_QWORD*)(a1 + 48) == 0)) {
    return 4;
  }
  if ((*(_DWORD*)(a1 + 4) & *(_DWORD*)CudaDriverData_1422040[0] & 1) != 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 24);
  v5 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)CudaDriverData_1422048[0] = v3;
  *(_QWORD*)CudaDriverData_1422050[0] = strlen_plt(v5) + 1;
  *(_QWORD*)CudaDriverData_1422058[0] = v1;
  if (*(_DWORD*)a1 >= 0x38u) {
    v6 = *(_QWORD*)(a1 + 40);
    *(_DWORD*)CudaDriverData_1422068[0] = *(_DWORD*)(a1 + 32);
    *(_QWORD*)CudaDriverData_1422070[0] = strlen_plt(v6) + 1;
    *(_QWORD*)CudaDriverData_1422078[0] = v6;
    v7 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)CudaDriverData_1422080[0] = strlen_plt(v7) + 1;
    *(_QWORD*)CudaDriverData_1422088[0] = v7;
  }
  cudbgReportDriverApiError_plt();
  return 0;
}

__int64 cuda_driver_211000(__int64 a1)
{
  __int64 v1;

  if (a1 == 0) {
    return 4;
  }
  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)CudaDriverData_1422020[0] = v1;
  if (v1 != 0) {
    cudbgReportDriverInternalError_plt();
  }
  return 0;
}

__int64 cuda_driver_214110(_DWORD* a1)
{
  if (a1 == nullptr) {
    return 1;
  }
  *a1 =
      *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)CudaDriverData_1422118);
  return 0;
}

__int64 cuda_driver_2149f0(_DWORD* a1)
{
  if (a1 == nullptr) {
    return 999;
  }
  *a1 =
      *(_DWORD*)((char*)((_UNKNOWN*)0x520LL) + (_QWORD)CudaDriverData_1422118);
  return 0;
}

__int64 cuda_driver_214aa0(int a1, unsigned int a2, int a3, _QWORD* a4)
{
  int v5;
  bool v6;
  int v7;

  v5 = *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)CudaDriverData_1422118);
  v6 = __OFSUB__(a1, v5);
  v7 = a1 - v5;
  if (v7 < 0 != v6 || a1 >= *(_DWORD*)((char*)((_UNKNOWN*)0x520LL) +
                                       (_QWORD)CudaDriverData_1422118) +
                                v5) {
    return 101;
  }
  if (*((_QWORD*)CudaDriverData_1422118 + (unsigned int)v7 + 100) != 0) {
    return CudaDriverRoutine_214d50(v7, a2, a3, a4,
                                    (__int64)CudaDriverData_1422118 + 800);
  }
  return 999;
}

__int64 cuda_driver_215dd0(unsigned __int64 a1, __int64 a2)
{
  void* v4;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a1 == 0) {
    return 1;
  }
  v4 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                     (_QWORD)CudaDriverData_1422118);
  v6 = CudaDriverRoutine_1a2980(
      *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v4), a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v4);
  if (v6 != 0 || (v6 = a1, *(_DWORD*)(a1 + 4) == 2)) {
    if (*(_BYTE*)(v6 + 415) != 0 || *(_BYTE*)(v6 + 416) != 0) {
      v7 = *(_QWORD**)(v6 + 424);
      if (v7 != nullptr) {
        if (*(_QWORD*)(v6 + 456) == 0) {
        LABEL_10:
          *v7 = a2;
          return 0;
        }
        v8 = *(_QWORD*)(v6 + 448);
        if (v8 != 0) {
          v9 = CudaDriverRoutine_98340(*(_QWORD*)(v8 + 1200));
          cuda_driver_108520(v9 + 24);
          CudaDriverStub_1db190(v6 + 456);
          v10 = *(_QWORD*)(v6 + 448);
          *(_QWORD*)(v6 + 456) = 0;
          *(_QWORD*)(v6 + 464) = 0;
          v11 = CudaDriverRoutine_98340(*(_QWORD*)(v10 + 1200));
          CudaDriverRoutine_1085d0(v11 + 24);
          v7 = *(_QWORD**)(v6 + 424);
          goto LABEL_10;
        }
      }
    }
  }
  return 1;
}

__int64 cuda_driver_215f50(int* a1)
{
  __int64 result;
  int v3;
  bool v4;
  int v5;
  int v6;
  int v7;

  result = 1;
  if (a1 != nullptr) {
    v3 = *(_DWORD*)((char*)((_UNKNOWN*)0xFCLL) +
                    (_QWORD)CudaDriverData_1422118 + 4);
    v4 = v3 == 840743424;
    v5 = v3 - 11255808;
    if (v4) {
      v6 = 1;
    }
    else {
      v6 = 2;
    }
    result = 0;
    if (v5 == 291) {
      v7 = 0;
    }
    else {
      v7 = v6;
    }
    *a1 = v7;
  }
  return result;
}

__int64 cuda_driver_215fa0(__int64 a1)
{
  void* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v16[3];

  if (a1 == 0) {
    return 1;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    return 1;
  }
  CudaDriverStub_10e9d0();
  v2 = CudaDriverData_1422118;
  CudaDriverStub_107f90((char*)((_UNKNOWN*)0x17C8LL) +
                        (_QWORD)CudaDriverData_1422118);
  v3 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v2);
  if (v3 == 0) {
    goto LABEL_19;
  }
  v4 = 8;
  v5 = 0;
  do {
    v3 = *(_QWORD*)(v3 + 16328);
    v4 += 8;
    --v5;
  } while (v3 != 0);
  if (v5 != 0 && (v6 = CudaDriverStub_12e330(v4)) != 0) {
    v7 = (__int64*)v6;
    memset_plt(v6, 0, v4);
    v8 = *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)v2);
    if (v8 != 0) {
      v9 = v7;
      do {
        *v9++ = v8;
        v8 = *(_QWORD*)(v8 + 16328);
      } while (v8 != 0);
    }
    CudaDriverStub_108070((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v2);
    v10 = *v7;
    if (*v7 != 0) {
      v11 = v7 + 1;
      do {
        v16[1] = v10;
        v16[2] = 0;
        v16[0] = 24;
        if (*(_DWORD*)v10 == 0) {
          v14 = CudaDriverRoutine_98340(v10);
          cuda_driver_108520(v14 + 24);
          if (*(_BYTE*)(v10 + 184) == 0) {
            (*(void (**)(_QWORD, _QWORD*))(a1 + 8))(*(_QWORD*)(a1 + 16), v16);
          }
          v12 = CudaDriverRoutine_98340(v10);
          CudaDriverRoutine_1085d0(v12 + 24);
        }
        v13 = *v11++;
        v10 = v13;
      } while (v13 != 0);
    }
    CudaDriverRoutine_12e340((__int64)v7);
  }
  else {
  LABEL_19:
    CudaDriverStub_108070((char*)((_UNKNOWN*)0x17C8LL) + (_QWORD)v2);
  }
  CudaDriverStub_10e9f0();
  return 0;
}

__int64 cuda_driver_2168a0(unsigned __int64 a1, __int64 a2)
{
  void* v4;
  __int64 v6;

  if (a1 != 0 &&
      ((v4 = CudaDriverData_1422118,
        cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                           (_QWORD)CudaDriverData_1422118),
        v6 = CudaDriverRoutine_1a2980(
            *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v4), a1),
        CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v4),
        v6 != 0) ||
       (v6 = a1, *(_DWORD*)(a1 + 4) == 2))) {
    return CudaDriverStub_c54e0(v6, a2);
  }
  else {
    return 1;
  }
}

__int64 cuda_driver_216a20(unsigned __int64 a1)
{
  void* v2;
  __int64 v4;

  if (a1 == 0) {
    return 1;
  }
  v2 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                     (_QWORD)CudaDriverData_1422118);
  v4 = CudaDriverRoutine_1a2980(
      *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v2), a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v2);
  if (v4 == 0) {
    v4 = a1;
    if (*(_DWORD*)(a1 + 4) != 2) {
      return 1;
    }
  }
  cuda_driver_c3c20(v4);
  return 0;
}

__int64 cuda_driver_216ae0(unsigned __int64 a1, __int64 a2, __int64 a3,
                           _QWORD* a4)
{
  __int64 result;
  bool v7;
  void* v11;
  __int64 v13;
  __int64 v14;
  _QWORD v15[3];

  result = 1;
  v7 = a2 != 0 && a3 == 0;
  if (a1 != 0 && !v7 && a4 != nullptr) {
    v11 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                       (_QWORD)CudaDriverData_1422118);
    v13 = CudaDriverRoutine_1a2980(
        *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v11), a1);
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v11);
    if (v13 != 0 || (v13 = a1, *(_DWORD*)(a1 + 4) == 2)) {
      v14 = *(_QWORD*)(v13 + 376);
      v15[0] = 0;
      v15[1] = a2;
      v15[2] = a3;
      CudaDriverRoutine_1a2b00(
          v14, (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_218740,
          (__int64)v15);
      result = 0;
      *a4 = v15[0];
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 cuda_driver_216bc0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3,
                           unsigned __int64* a4)
{
  __int64 result;
  bool v7;
  void* v11;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;

  result = 1;
  v7 = a2 != 0 && a3 == 0;
  if (a1 != 0 && !v7 && a4 != nullptr) {
    v11 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                       (_QWORD)CudaDriverData_1422118);
    v13 = CudaDriverRoutine_1a2980(
        *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v11), a1);
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v11);
    if (v13 != 0 || (v13 = a1, *(_DWORD*)(a1 + 4) == 2)) {
      v14 = *(_QWORD*)(v13 + 384);
      if (v14 != 0) {
        v15 = 0;
        do {
          if (v15 < a2) {
            *(_QWORD*)(a3 + 8 * v15) = v14;
          }
          v14 = *(_QWORD*)(v14 + 960);
          ++v15;
        } while (v14 != 0);
      }
      else {
        v15 = 0;
      }
      result = 0;
      *a4 = v15;
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 cuda_driver_216f60(unsigned __int64 a1, char a2)
{
  void* v4;
  __int64 v6;

  if (a1 == 0) {
    return 1;
  }
  v4 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                     (_QWORD)CudaDriverData_1422118);
  v6 = CudaDriverRoutine_1a2980(
      *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v4), a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v4);
  if (v6 == 0) {
    v6 = a1;
    if (*(_DWORD*)(a1 + 4) != 2) {
      return 1;
    }
  }
  *(_BYTE*)(v6 + 413) = a2 == 0;
  return 0;
}

__int64 cuda_driver_217010(unsigned __int64 a1, bool* a2)
{
  void* v4;
  __int64 v6;
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  v4 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                     (_QWORD)CudaDriverData_1422118);
  v6 = CudaDriverRoutine_1a2980(
      *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v4), a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v4);
  if (v6 == 0) {
    if (*(_DWORD*)(a1 + 4) == 2) {
      v6 = a1;
    }
    else {
      v6 = 0;
    }
  }
  result = 1;
  if (a2 != nullptr && v6 != 0) {
    result = 0;
    *a2 = *(_BYTE*)(v6 + 413) == 0;
  }
  return result;
}

__int64 cuda_driver_2171f0(unsigned __int64 a1, char a2)
{
  void* v4;
  __int64 v6;

  if (a1 == 0) {
    return 1;
  }
  v4 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                     (_QWORD)CudaDriverData_1422118);
  v6 = CudaDriverRoutine_1a2980(
      *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v4), a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v4);
  if (v6 == 0) {
    v6 = a1;
    if (*(_DWORD*)(a1 + 4) != 2) {
      return 1;
    }
  }
  *(_BYTE*)(v6 + 411) = a2 == 0;
  return 0;
}

__int64 cuda_driver_2175d0(unsigned __int64 a1, _DWORD* a2)
{
  void* v4;
  __int64 v6;
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  v4 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                     (_QWORD)CudaDriverData_1422118);
  v6 = CudaDriverRoutine_1a2980(
      *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v4), a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v4);
  if (v6 == 0) {
    if (*(_DWORD*)(a1 + 4) == 2) {
      v6 = a1;
    }
    else {
      v6 = 0;
    }
  }
  result = 1;
  if (a2 != nullptr && v6 != 0) {
    result = 0;
    *a2 = *(_DWORD*)(v6 + 288);
  }
  return result;
}

__int64 cuda_driver_217e10(unsigned __int64 a1, _QWORD* a2)
{
  __int64 result;
  void* v5;
  unsigned int* v7;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v5 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                       (_QWORD)CudaDriverData_1422118);
    v7 = (unsigned int*)CudaDriverRoutine_1a2980(
        *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v5), a1);
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v5);
    if (v7 != nullptr || (v7 = (unsigned int*)a1, *(_DWORD*)(a1 + 4) == 2)) {
      result = 0;
      *a2 = *v7;
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 cuda_driver_217ec0(unsigned __int64 a1, __int64 a2, __int64 a3,
                           _QWORD* a4, char a5)
{
  __int64 v6;
  void* v10;
  unsigned __int64 v11;
  __int64 v13;

  if (a4 == nullptr || a2 != 0 && a3 == 0) {
    return 1;
  }
  *a4 = a2;
  if (a2 != 0) {
    v6 = a3;
  }
  else {
    v6 = 0;
  }
  if (a1 == 0) {
    return 1;
  }
  v10 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                     (_QWORD)CudaDriverData_1422118);
  v11 = a1;
  v13 = CudaDriverRoutine_1a2980(
      *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v10), a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v10);
  if (v13 == 0) {
    v13 = v11;
    if (*(_DWORD*)(v11 + 4) != 2) {
      return 1;
    }
  }
  CudaDriverRoutine_d8860(v13, v6, a4, a5 != 0);
  return 0;
}

__int64 cuda_driver_218220(unsigned __int64 a1, __int64 a2, unsigned int a3,
                           _QWORD* a4, _QWORD* a5)
{
  __int64 result;
  void* v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  _QWORD* v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;

  result = 1;
  if (a1 != 0 && a2 != 0 && a4 != nullptr && a5 != nullptr &&
      *(_DWORD*)(a2 + 4) == 0) {
    v11 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                       (_QWORD)CudaDriverData_1422118);
    v13 = CudaDriverRoutine_1a2980(
        *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v11), a1);
    CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v11);
    if (v13 == 0) {
      v13 = a1;
      if (*(_DWORD*)(a1 + 4) != 2) {
        return 1;
      }
    }
    v14 = *(_QWORD*)(a2 + 24);
    v15 = a2;
    v16 = a4;
    if (v14 == v13) {
      v18 = a5;
      v19 = a3;
    }
    else {
      v17 = *(_DWORD*)(v14 + 4);
      if (v17 == 3) {
        v15 = *(_QWORD*)(a2 + 1112);
        v18 = a5;
        v19 = a3;
        if (v15 == 0) {
          return 1;
        }
      }
      else {
        if (v17 != 1) {
          return 1;
        }
        v21 = 0;
        if ((unsigned int)CudaDriverRoutine_d9230(&v21, a2, v13) != 0) {
          return 1;
        }
        v15 = v21;
        v18 = a5;
        v19 = a3;
        v16 = a4;
        if (v21 == 0) {
          return 1;
        }
      }
    }
    if (v19 < *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v15 + 1200) + 64LL) + 3776LL)) {
      v20 = 24LL * v19;
      *v16 = *(_QWORD*)(*(_QWORD*)(v15 + 776) + v20);
      *v18 = *(unsigned int*)(*(_QWORD*)(v15 + 776) + v20 + 8);
      return 0;
    }
    return 1;
  }
  return result;
}

__int64 cuda_driver_2184e0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3,
                           _QWORD* a4)
{
  void* v8;
  __int64 v10;
  __int64 result;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (a1 == 0) {
    return 1;
  }
  v8 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                     (_QWORD)CudaDriverData_1422118);
  v10 = CudaDriverRoutine_1a2980(
      *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v8), a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v8);
  if (v10 == 0) {
    if (*(_DWORD*)(a1 + 4) == 2) {
      v10 = a1;
    }
    else {
      v10 = 0;
    }
  }
  result = 1;
  if (a4 != nullptr && v10 != 0 && (a2 == 0 || a3 != 0)) {
    if (a2 != 0) {
      memset_plt(a3, 0, 8 * a2);
      v12 = *(_QWORD*)(v10 + 352);
      if (v12 != 0) {
        v13 = 0;
        do {
          v14 = v13;
          if (a2 <= v13) {
            break;
          }
          ++v13;
          *(_QWORD*)(a3 + 8 * v14) = *(_QWORD*)(v12 + 8);
          v12 = *(_QWORD*)(v12 + 24);
        } while (v12 != 0);
        v12 = v13;
      }
      *a4 = v12;
      return 0;
    }
    else {
      *a4 = 0;
      v15 = *(_QWORD*)(v10 + 352);
      if (v15 != 0) {
        v16 = 1;
        do {
          *a4 = v16++;
          v15 = *(_QWORD*)(v15 + 24);
        } while (v15 != 0);
      }
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_21a100(int a1)
{
  bool v1;
  __int64 result;
  char v3;

  v1 = a1 == 0;
  result = 0;
  v3 = !v1;
  *((_BYTE*)((_UNKNOWN*)0x1120LL) + (_QWORD)CudaDriverData_1422118 + 2) = v3;
  return result;
}

__int64 cuda_driver_21a730(__int64 result)
{
  *((_BYTE*)((_UNKNOWN*)0x10F8LL) + (_QWORD)CudaDriverData_1422118) =
      (_DWORD)result != 0;
  return result;
}

__int64 cuda_driver_21a770(__int64 result)
{
  *((_BYTE*)((_UNKNOWN*)0x10F8LL) + (_QWORD)CudaDriverData_1422118 + 2) =
      (_DWORD)result != 0;
  return result;
}

__int64 cuda_driver_21af90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;

  if (a1 == 0 || a3 == 0) {
    return 1;
  }
  v3 = CudaDriverRoutine_98340(a1);
  return (*(__int64 (**)(void*))(*(_QWORD*)(v3 + 64) + 18808LL))((void*)v3);
}

__int64 cuda_driver_21b240(__int64 result)
{
  *((_BYTE*)((_UNKNOWN*)0x10FCLL) + (_QWORD)CudaDriverData_1422118) =
      (_DWORD)result != 0;
  return result;
}

__int64 cuda_driver_21bd40(__int64 a1, _BOOL4* a2)
{
  __int64 result;
  char v5;
  _BOOL4 v6;
  __int64 v7;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = false;
    if ((CudaDriverRoutine_1db1b0(a1) & 0x7C0000000000000LL) !=
        0x3C0000000000000LL) {
      CudaDriverRoutine_1db1b0(a1),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v6 = (v5 & 2) != 0;
    LABEL_9:
      *a2 = v6;
      return 0;
    }
    result = CudaDriverStub_1dbfc0(a1),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (result != 0) {
      while ((*(_BYTE*)(result + 244) & 0xF8) != 0) {
        result = *(_QWORD*)(result + 416);
        if (result == 0) {
          return result;
        }
      }
      result = *(_QWORD*)(result + 624);
      if (result != 0) {
        if (*(_QWORD*)(result + 8) != 0) {
          v7 = CudaDriverStub_1db800(result),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v6 = v7 != CudaDriverStub_1db800(a1),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          goto LABEL_9;
        }
        return 0;
      }
    }
  }
  return result;
}

__int64 cuda_driver_21c6c0(__int64 (*a1)(__int64, unsigned __int64, _QWORD),
                           __int64 a2)
{
  void* v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  int i;
  __int64 v9;
  unsigned __int64 v10;
  int v11;

  v4 = CudaDriverData_1422118;
  cuda_driver_1084c0((__int64)&CudaDriverRoutine_4e50 +
                     (_QWORD)CudaDriverData_1422118);
  v5 = CudaDriverStub_8b280((char*)&CudaDriverRoutine_47b0 + (_QWORD)v4);
  v6 = a1(a2, 0, v5);
  if (v6 == 0) {
    if (v5 != 0) {
      v7 = 1;
      for (i = 0;; ++i) {
        v9 = v7 - 1;
        if (cuda_driver_f0360(v7 - 1) == 0) {
          goto LABEL_5;
        }
        CudaDriverStub_107f90_alt2(
            *(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v4) +
            16LL * (unsigned int)v9);
        v10 = cuda_driver_f0360(v9);
        if (v10 == 0 || *(_BYTE*)(v10 + 124) != 0) {
          break;
        }
        v11 = a1(a2, v10 + 176, v7 - 1);
        CudaDriverStub_108070_alt2(
            *(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v4) + 16 * v9);
        v6 = 0;
        if (v11 != 0 || v7 >= v5) {
          goto LABEL_14;
        }
      LABEL_6:
        ++v7;
      }
      CudaDriverStub_108070_alt2(
          *(_QWORD*)((char*)&CudaDriverRoutine_47c8 + (_QWORD)v4) + 16 * v9);
    LABEL_5:
      if (v7 >= v5) {
        goto LABEL_13;
      }
      goto LABEL_6;
    }
  LABEL_13:
    v6 = 0;
  }
LABEL_14:
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_4e50 + (_QWORD)v4);
  return v6;
}

#pragma GCC visibility pop
