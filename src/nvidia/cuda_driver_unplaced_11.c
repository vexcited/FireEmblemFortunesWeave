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
_QWORD* CudaDriverRoutine_1dc5c0(_QWORD*, unsigned __int64, unsigned __int64,
                                 __int64, char);
_QWORD* CudaDriverRoutine_201560(_QWORD* result, int);
__int64 CudaDriverRoutine_1db1c0(__int64, __int64);
__int64 CudaDriverRoutine_1dbc20(__int64, unsigned __int64);
__int64 CudaDriverRoutine_1ffcc0(__int64 result);
__int64 CudaDriverRoutine_203600(__int64, _QWORD*);
__int64 CudaDriverRoutine_206200(__int64, __int64);
__int64 CudaDriverRoutine_2197c0(__int64 result, int*);
__int64 CudaDriverRoutine_b4840(_QWORD*, _QWORD*);
__int64 CudaDriverRoutine_ec740(__int64, __int64, __int64);
__int64 CudaDriverRoutine_f1f00(_QWORD*, _QWORD*);
__int64 CudaDriverStub_112b20_alt1(__int64, __int64, __int64, __int64,
                                   __int64) __asm__("CudaDriverStub_112b20");
__int64 CudaDriverStub_12dc90(_QWORD);
__int64 CudaDriverStub_203210(__int64, __int64, __int64, __int64, __int64);
__int64 cuda_driver_10a130(_DWORD*, _OWORD*, __int64, __int64, _BYTE*);
__int64 cuda_driver_1da1b0_alt1(__int64, __int64*, __int64,
                                _QWORD*) __asm__("cuda_driver_1da1b0");
__int64 cuda_driver_1dbe40(__int64, __int64, __int64);
__int64 cuda_driver_misc_helpers_ded50_alt1(__int64, __int64*, char) __asm__(
    "cuda_driver_misc_helpers_ded50");
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt_alt1(__int64, int, unsigned __int64) __asm__("memset_plt");
bool CudaDriverRoutine_9b460(_DWORD*);
extern _DWORD* CudaDriverData_14230c0;
extern _QWORD CudaDriverData_14230c0_alt1 __asm__("CudaDriverData_14230c0");
extern _UNKNOWN* CudaDriverData_14231e0;
extern _UNKNOWN* CudaDriverData_1432068;
extern __int128 CudaDriverData_11153a0;
extern __int64 CudaDriverData_1435cd8;
extern __int64 CudaDriverData_1435ce8;
extern int* CudaDriverData_1423078;
extern void (*CudaDriverData_1421fe8[25])();
extern void (*CudaDriverData_1421ff0[24])();
extern void (*CudaDriverData_1421ff8[23])();
extern void (*CudaDriverData_1422000[22])();
extern void (*CudaDriverData_1422008[21])();
extern void (*CudaDriverData_1422010[20])();
extern void (*CudaDriverData_1422018[19])();
extern void (*CudaDriverData_1422028[17])();
extern void (*CudaDriverData_1422030[16])();
extern void (*CudaDriverData_1422038[15])();
extern void (*CudaDriverData_1422060[10])();
extern void (*CudaDriverData_1422090[4])();
extern void (*CudaDriverData_1422098[3])();
void CudaDriverRoutine_743c();
void CudaDriverRoutine_7488();
__int64 cuda_driver_unplaced_11_1ff9c0(__int64 a1, int a2, __int64* a3);
__int64 cuda_driver_unplaced_11_2018b0(__int64 a1, _DWORD* a2, unsigned int a3);
__int64 cuda_driver_unplaced_11_201ff0(__int64 a1, unsigned int a2, _QWORD* a3);
_QWORD* cuda_driver_unplaced_11_2069f0(__int64 a1, __int64 a2, int a3);
__int64 cuda_driver_unplaced_11_20d8b0(__int64 a1, _DWORD* a2, _DWORD* a3);
__int64 cuda_driver_unplaced_11_20f670(__int64* a1);
__int64 cuda_driver_unplaced_11_20f9f0(__int64 a1);
__int64 cuda_driver_unplaced_11_210780(_DWORD* a1);
__int64 cuda_driver_2118f0(_DWORD* a1);
__int64 cuda_driver_211b60(unsigned int* a1);
__int64 cuda_driver_211c80(unsigned int* a1);
__int64 cuda_driver_211ec0(unsigned int* a1);
__int64 cuda_driver_211fb0(unsigned int* a1);
__int64 cuda_driver_212170(unsigned int* a1);
__int64 cuda_driver_212590(unsigned int* a1);
__int64 cuda_driver_212860(unsigned int* a1);
__int64 cuda_driver_212aa0(unsigned int* a1);
__int64 cuda_driver_212be0(unsigned int* a1);
__int64 cuda_driver_212ce0(unsigned int* a1);
__int64 cuda_driver_212de0(unsigned int* a1);
__int64 cuda_driver_212f20(unsigned int* a1);
__int64 cuda_driver_213060(unsigned int* a1);
__int64 cuda_driver_213160(unsigned int* a1);
__int64 cuda_driver_213360(unsigned int* a1);
__int64 cuda_driver_213430(unsigned int* a1);
__int64 cuda_driver_213610(unsigned int* a1);
__int64 cuda_driver_2136d0(unsigned int* a1);
__int64 cuda_driver_2137a0(unsigned int* a1);
__int64 cuda_driver_213880(unsigned int* a1);
__int64 cuda_driver_213960(unsigned int* a1);
__int64 cuda_driver_unplaced_11_2144e0(unsigned int* a1, int a2);
__int64 cuda_driver_unplaced_11_214750(unsigned int* a1, int a2);
__int64 cuda_driver_unplaced_11_216ce0(__int64 a1, unsigned int* a2);
__int64 cuda_driver_217370(__int64 a1, unsigned int* a2);
__int64 cuda_driver_unplaced_11_217d80(__int64 a1, _DWORD* a2);
__int64 cuda_driver_unplaced_11_2194c0(unsigned int a1, unsigned int a2,
                                       _DWORD* a3);
__int64 cuda_driver_unplaced_11_2196d0(__int64 a1, _DWORD* a2);
__int64 cuda_driver_21cce0(unsigned int* a1, __int64 a2);

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

__int64 cuda_driver_unplaced_11_1ff9c0(__int64 a1, int a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned int v10;
  void* v11;
  unsigned int v12;
  _BOOL4 v13;
  unsigned int v14;
  unsigned int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  struct {
    char gap0_[8];
    __int64 v31;
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
    __int64 v55;
  } v31_;
  __int64 v56;

  v56 = 0;
  *a3 = 0;
  v6 = CudaDriverStub_12e330(88);
  v7 = v6;
  if (v6 == 0) {
    v12 = 2;
  LABEL_15:
    CudaDriverRoutine_1ffcc0(v7);
    return v12;
  }
  *(_QWORD*)v6 = a1;
  *(_OWORD*)(v6 + 8) = (__typeof__(*(_OWORD*)(v6 + 8))){0};
  *(_OWORD*)(v6 + 72) = (__typeof__(*(_OWORD*)(v6 + 72))){0};
  *(_OWORD*)(v6 + 56) = (__typeof__(*(_OWORD*)(v6 + 56))){0};
  *(_OWORD*)(v6 + 40) = (__typeof__(*(_OWORD*)(v6 + 40))){0};
  *(_OWORD*)(v6 + 24) = (__typeof__(*(_OWORD*)(v6 + 24))){0};
  *(_DWORD*)(v6 + 16) = a2;
  if (a2 == 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 18424LL))(7);
    if (v8 != 0) {
      goto LABEL_5;
    }
  }
  else if (a2 == 1) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 18424LL))(8);
    if (v8 != 0) {
    LABEL_5:
      v9 = v8;
      if (v8 <= 0x800) {
        v10 = 0x200000 / (unsigned int)v8;
        *(_DWORD*)(v7 + 48) = 0x200000 / (unsigned int)v8;
        v11 = CudaDriverData_1422118;
        if (*((_BYTE*)&CudaDriverRoutine_743c + (_QWORD)CudaDriverData_1422118 +
              3) == 0) {
          goto LABEL_13;
        }
        goto LABEL_12;
      }
      v10 = 1024;
      *(_DWORD*)(v7 + 48) = 1024;
      v11 = CudaDriverData_1422118;
      if (*((_BYTE*)&CudaDriverRoutine_743c + (_QWORD)CudaDriverData_1422118 +
            3) != 0) {
      LABEL_12:
        *(_DWORD*)(v7 + 48) = v10 >> 3;
      }
    LABEL_13:
      v13 = CudaDriverRoutine_9b460(*(_DWORD**)(a1 + 64));
      v14 = CudaDriverStub_203210(a1, 0, 1, v13, v7 + 24);
      if (v14 != 0) {
      LABEL_14:
        v12 = v14;
        goto LABEL_15;
      }
      v16 = *(_DWORD*)(v7 + 48);
      *(_BYTE*)(v7 + 32) = 1;
      v17 = CudaDriverStub_12e330(200LL * v16);
      *(_QWORD*)(v7 + 40) = v17;
      if (v17 != 0) {
        memset_plt_alt1(v17, 0, 200LL * *(unsigned int*)(v7 + 48));
        v18 = *(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v11);
        v31_.v55 = 0;
        v31_.v48 = (__typeof__(v31_.v48)){0};
        v31_.v49 = (__typeof__(v31_.v49)){0};
        v31_.v50 = (__typeof__(v31_.v50)){0};
        v31_.v51 = (__typeof__(v31_.v51)){0};
        v31_.v54 = (__typeof__(v31_.v54)){0};
        v31_.v40 = (__typeof__(v31_.v40)){0};
        v31_.v41 = (__typeof__(v31_.v41)){0};
        v31_.v42 = (__typeof__(v31_.v42)){0};
        v31_.v43 = (__typeof__(v31_.v43)){0};
        v31_.v44 = (__typeof__(v31_.v44)){0};
        v31_.v45 = (__typeof__(v31_.v45)){0};
        v31_.v46 = (__typeof__(v31_.v46)){0};
        v31_.v47 = (__typeof__(v31_.v47)){0};
        v31_.v52 = (__typeof__(v31_.v52)){0};
        v31_.v53 = (__typeof__(v31_.v53)){0};
        v31_.v31 = 0x80011C001C02LL;
        v31_.v32 = (__typeof__(v31_.v32)){0};
        v31_.v33 = (__typeof__(v31_.v33)){0};
        v31_.v34 = (__typeof__(v31_.v34)){0};
        v31_.v35 = (__typeof__(v31_.v35)){0};
        v31_.v36 = (__typeof__(v31_.v36)){0};
        v31_.v37 = (__typeof__(v31_.v37)){0};
        v31_.v38 = (__typeof__(v31_.v38)){0};
        v31_.v39 = (__typeof__(v31_.v39)){0};
        if (v18 == 2) {
          *(_QWORD*)&v31_.v32 = 0x400000000LL;
        }
        if (*((_BYTE*)&CudaDriverRoutine_7488 + (_QWORD)v11) != 0) {
          v31_.v31 = 0x80011D001C0ALL;
        }
        v14 = cuda_driver_1da1b0_alt1(*(_QWORD*)(a1 + 80), &v31_.v31,
                                      v9 * *(unsigned int*)(v7 + 48), &v56);
        if (v14 != 0) {
          goto LABEL_14;
        }
        v19 = v56;
        *(_QWORD*)(v7 + 8) = v56;
        v20 = CudaDriverStub_1db800(v19);
        if (*(_DWORD*)(v7 + 48) != 0) {
          v21 = v20;
          v22 = 0;
          v23 = 0;
          while (1) {
            v24 = (__int64*)(*(_QWORD*)(v7 + 40) + v22);
            *v24 = v7;
            v24[1] = v21;
            v24[2] = v9;
            v14 = CudaDriverRoutine_203600(*(_QWORD*)(v7 + 24), v24 + 3);
            if (v14 != 0) {
              goto LABEL_14;
            }
            v25 = *(unsigned int*)(v7 + 48);
            ++v23;
            v22 += 200;
            v21 += v9;
            if (v23 >= v25) {
              v26 = 8 * v25;
              goto LABEL_29;
            }
          }
        }
        v26 = 0;
      LABEL_29:
        v27 = CudaDriverStub_12e330(v26);
        *(_QWORD*)(v7 + 56) = v27;
        if (v27 != 0) {
          if (*(_DWORD*)(v7 + 48) != 0) {
            v28 = 0;
            v29 = 0;
            do {
              v30 = *(_QWORD*)(v7 + 40) + v28;
              v28 += 200;
              *(_QWORD*)(*(_QWORD*)(v7 + 56) + 8 * v29++) = v30;
            } while (v29 < *(unsigned int*)(v7 + 48));
          }
          v12 = 0;
          *(_DWORD*)(v7 + 64) = 0;
          *a3 = v7;
          return v12;
        }
      }
      v12 = 0;
      goto LABEL_15;
    }
  }
  v12 = 1;
  goto LABEL_15;
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

__int64 cuda_driver_unplaced_11_2018b0(__int64 a1, _DWORD* a2, unsigned int a3)
{
  __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v13[34];
    __int128 v14;
    __int128 v15;
    __int128 v16;
    __int128 v17;
    __int128 v18;
    __int128 v19;
    __int128 v20;
  } v13_;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v24 = 0;
  v22 = 0;
  v23 = 0;
  if ((unsigned int)CudaDriverStub_112b20_alt1(0, a1, 2, (__int64)&v23,
                                               (__int64)&v24) != 0) {
    return 400;
  }
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v23 + 16) + 64LL) + 16988LL) & 1) == 0) {
    return 801;
  }
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)((char*)((char*)0x40LL) + v24) +
                                 18424LL))(29);
  v7 = CudaDriverRoutine_1dbc20(*(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v24),
                                (unsigned __int64)a2);
  if (v7 == 0) {
    return 713;
  }
  v8 = (_QWORD*)v7;
  CudaDriverStub_1dbab0(v7);
  if (CudaDriverStub_102e00(v8) >= v6) {
    v9 = CudaDriverRoutine_1dc5c0(
        v8, 0, v6 - 1, *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v24), 1);
    v21 = v9;
    if (v9 == nullptr) {
      memset(v13_.v13, 0, sizeof(v13_.v13));
      v13_.v14 = (__typeof__(v13_.v14)){0};
      v13_.v15 = (__typeof__(v13_.v15)){0};
      v13_.v16 = (__typeof__(v13_.v16)){0};
      v13_.v17 = (__typeof__(v13_.v17)){0};
      v13_.v18 = (__typeof__(v13_.v18)){0};
      v13_.v19 = (__typeof__(v13_.v19)){0};
      v13_.v20 = (__typeof__(v13_.v20)){0};
      CudaDriverRoutine_1db1c0((__int64)v8, (__int64)v13_.v13);
      v13_.v13[0] = v13_.v13[0] & 0xF03FFFF883FDFFFFLL | 0x11C020000LL;
      v13_.v13[1] |= 0x400026uLL;
      v13_.v14 = CudaDriverData_11153a0;
      v11 = *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v24);
      v12 = CudaDriverStub_1dbf90(v8);
      result = cuda_driver_1da1b0_alt1(v11, v13_.v13, v12, &v21);
      if ((_DWORD)result != 0) {
        return result;
      }
      v9 = v21;
    }
    v8 = v9;
  }
  v10 = CudaDriverStub_1db800(v8);
  result =
      CudaDriverRoutine_206200(*(_QWORD*)(*(_QWORD*)(v23 + 16) + 88LL), v23);
  if ((_DWORD)result != 0) {
    return result;
  }
  if ((int)(*a2 - a3) >= 0) {
    return 0;
  }
  result = (__int64)CudaDriverRoutine_5f7d0(
      *(_QWORD*)(*(_QWORD*)(v23 + 16) + 72LL), 0, v23);
  if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v23 + 16) + 64LL) + 21864LL) != 1) {
    CudaDriverRoutine_205dd0(result, v23, (__int64)&v22);
    v22 = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD,
                          _QWORD))(*(_QWORD*)((char*)((char*)0x40LL) + v24) +
                                   19112LL))(v22, 0, 0, v24, v10, a3, 0);
    CudaDriverRoutine_206060(v23, v22);
    return 0;
  }
  if ((int)(*a2 - a3) >= 0) {
    return 0;
  }
  do {
    CudaDriverStub_12dc90(result);
    result = 0;
  } while ((int)(*a2 - a3) < 0);
  return result;
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

__int64 cuda_driver_unplaced_11_201ff0(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 result;
  __int64 v6;
  _OWORD* v7;
  _OWORD* v8;
  unsigned int v9;
  char v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  _QWORD v14[4];
  _BYTE v15[4];
  unsigned int v16;
  struct {
    _QWORD v17[2];
    __int64 v18;
  } v17_;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  memset(v14, 0, sizeof(v14));
  if (a3 == nullptr) {
    return 1;
  }
  result = 1;
  if (a1 != 0 && a2 != 0 && (a2 & 7) == 0) {
    memcpy_plt((__int64)v14, a1, a2);
    v6 = v14[0];
    result = 1;
    if (v14[0] != 0 && LODWORD(v14[1]) == 3) {
      v15[0] = 0;
      v7 = (_OWORD*)CudaDriverStub_12e330(16);
      if (v7 != nullptr) {
        v8 = v7;
        result = cuda_driver_10a130(&v16, v7, v6,
                                    *(_QWORD*)((char*)((_UNKNOWN*)0x118LL) +
                                               (_QWORD)CudaDriverData_1422118),
                                    v15);
        if ((_DWORD)result == 0) {
          v9 = v16;
          v10 = v15[0];
          v20 = 0;
          v21 = 0;
          v19 = 0;
          v17_.v18 = 257;
          result = CudaDriverRoutine_121c60(&v21);
          if ((_DWORD)result == 0) {
            result = cuda_driver_misc_helpers_ded50_alt1(v21, nullptr, 0);
            if ((_DWORD)result == 0) {
              result = CudaDriverRoutine_b4840(&v19, CudaDriverData_14231e0);
              if ((_DWORD)result == 0) {
                BYTE2(v17_.v18) = v10;
                v17_.v17[0] = v8;
                v17_.v17[1] = 1120403456;
                result = (*(__int64 (**)(__int64*, _QWORD, _QWORD*))(v19 + 24))(
                    &v20, v9, v17_.v17);
                if ((_DWORD)result == 0) {
                  v12 = v20;
                  v11 = v21;
                  *(_DWORD*)(v20 + 16468) = 3;
                  result = CudaDriverRoutine_1218b0(v11, v12);
                  if ((_DWORD)result != 0) {
                    v13 = result;
                    cuda_driver_9bd90(v20);
                    return v13;
                  }
                  else {
                    *a3 = v20;
                  }
                }
              }
            }
          }
        }
      }
      else {
        return 999;
      }
    }
  }
  return result;
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

_QWORD* cuda_driver_unplaced_11_2069f0(__int64 a1, __int64 a2, int a3)
{
  *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
  *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
  *(_OWORD*)(a1 + 64) = (__typeof__(*(_OWORD*)(a1 + 64))){0};
  *(_OWORD*)(a1 + 80) = (__typeof__(*(_OWORD*)(a1 + 80))){0};
  *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
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
  *(_OWORD*)(a1 + 304) = (__typeof__(*(_OWORD*)(a1 + 304))){0};
  *(_OWORD*)(a1 + 320) = (__typeof__(*(_OWORD*)(a1 + 320))){0};
  *(_OWORD*)(a1 + 336) = (__typeof__(*(_OWORD*)(a1 + 336))){0};
  *(_OWORD*)(a1 + 352) = (__typeof__(*(_OWORD*)(a1 + 352))){0};
  *(_OWORD*)(a1 + 368) = (__typeof__(*(_OWORD*)(a1 + 368))){0};
  *(_OWORD*)(a1 + 384) = (__typeof__(*(_OWORD*)(a1 + 384))){0};
  *(_OWORD*)(a1 + 400) = (__typeof__(*(_OWORD*)(a1 + 400))){0};
  *(_OWORD*)(a1 + 16) = (__typeof__(*(_OWORD*)(a1 + 16))){0};
  memcpy_plt(a1 + 16, a2, 0x180u);
  return CudaDriverRoutine_201560((_QWORD*)a1, a3);
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

__int64 cuda_driver_unplaced_11_20d8b0(__int64 a1, _DWORD* a2, _DWORD* a3)
{
  __int64 v6;
  int v7;
  unsigned int v8;
  struct {
    unsigned __int64 v9;
    int v10;
    int v11;
    unsigned int v12;
  } v9_;

  if (a1 == 0) {
    return 201;
  }
  if (a2 == nullptr || a1 != *(_QWORD*)(*(_QWORD*)a2 + 8LL)) {
    return 1;
  }
  LODWORD(v6) = *a3;
  v7 = a2[10];
  if (*a3 >= 0x18u) {
    v6 = 24;
  }
  else {
    v6 = (unsigned int)v6;
  }
  v9_.v9 = __PAIR64__(a2[6], v6);
  v9_.v10 = a2[24];
  v9_.v11 = v7;
  v8 = a2[8];
  if (v8 >= 0xC) {
    v8 = 12;
  }
  v9_.v12 = v8;
  memcpy_plt((__int64)a3, (__int64)&v9_.v9, v6);
  return 0;
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

__int64 cuda_driver_unplaced_11_20f670(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  struct {
    _QWORD v17[7];
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
  } v17_;

  v17_.v18 = 0;
  v17_.v19 = 0;
  v17_.v20 = 0;
  if (a1 == nullptr || a1[1] == 0) {
    return 4;
  }
  v2 = CudaDriverRoutine_98340(a1[1]);
  v3 = CudaDriverStub_1223e0(*(_QWORD*)(v2 + 232));
  if (v3 == 0) {
    return 10;
  }
  v4 = v3;
  v17_.v17[0] = (*(__int64 (**)(__int64))(*(_QWORD*)(v2 + 64) + 18440LL))(v2);
  v17_.v17[1] = CudaDriverData_1435cd8;
  v17_.v17[2] = (*(__int64 (**)(__int64))(*(_QWORD*)(v2 + 64) + 18432LL))(v2);
  v17_.v17[3] = CudaDriverData_1435ce8;
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)(v2 + 64) + 18464LL))(v2);
  v6 = *(unsigned int*)(v2 + 1312);
  v17_.v17[4] = v5;
  v17_.v17[5] = v6;
  v17_.v17[6] = CudaDriverStub_1db800(v4);
  v7 = CudaDriverStub_1dbf90(v4);
  v8 = *(_QWORD*)(v2 + 1208);
  LODWORD(v17_.v18) = v7;
  v9 = *(_QWORD*)(v2 + 15848);
  v11 = *(_QWORD*)(v8 + 16);
  v10 = *(_QWORD*)(v8 + 24);
  v17_.v19 = v11;
  LODWORD(v17_.v20) = v10;
  v12 = CudaDriverStub_102e00(v9);
  v13 = a1[2];
  v17_.v21 = v12;
  v14 = a1[4];
  a1[3] = 88;
  if (v13 >= 0x58) {
    v15 = 88;
  }
  else {
    v15 = v13;
  }
  memcpy_plt(v14, (__int64)v17_.v17, v15);
  return 0;
}

__int64 cuda_driver_unplaced_11_20f9f0(__int64 a1)
{
  __int64 v1;
  unsigned int v3;
  unsigned int v4;
  __int64 (*v5)(__int64, __int64, _QWORD, _QWORD*, _BYTE*, _DWORD*);
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  unsigned int v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 (*v14)(__int64, _QWORD, _QWORD, _QWORD*);
  __int64 v15;
  __int64 (*v16)(__int64, _QWORD, _QWORD, __int128*);
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64 (*v26)(__int64, _QWORD, _QWORD, _QWORD*);
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  bool v32;
  unsigned int v33;
  unsigned int v34;
  __int64 (*v35)(__int64, _QWORD, _QWORD, _QWORD*);
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  _QWORD v41[4];
  __int128 v42;
  __int128 v43;
  __int128 v44;
  _QWORD v45[2];
  _BYTE v46[8];
  __int64 v47;
  _BYTE v48[4];
  _QWORD v49[2];
  _DWORD v50[4];
  _BYTE v51[16];
  _QWORD v52[2];
  struct {
    __int64 v53;
    int v54;
  } v53_;

  if (a1 == 0) {
    return 4;
  }
  v1 = *(_QWORD*)(a1 + 8);
  if (v1 == 0) {
    return 4;
  }
  if (*(_QWORD*)(a1 + 64) == 0) {
    if (*(_QWORD*)(a1 + 72) != 0) {
      goto LABEL_44;
    }
    return 4;
  }
  v3 = *(_DWORD*)(a1 + 24);
  v4 = *(_DWORD*)(a1 + 28);
  v5 = *(__int64 (**)(__int64, __int64, _QWORD, _QWORD*, _BYTE*, _DWORD*))(
      v1 + 3744);
  v6 = *(_QWORD*)(v1 + 4272);
  memset(v41, 0, sizeof(v41));
  v42 = (__typeof__(v42)){0};
  v43 = (__typeof__(v43)){0};
  v44 = (__typeof__(v44)){0};
  *(_OWORD*)v45 = (__typeof__(*(_OWORD*)v45)){0};
  v7 = v5(v1 + 16, v6, v3, v52, v51, v50);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  v7 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD*, _QWORD*))(v1 + 3488))(
      v1 + 16, *(_QWORD*)(v1 + 4272), v3, v52, v49);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  if (v4 > 0x3F) {
    v10 = v4 - 64;
    v11 = 64 - v4;
    if (v4 > 0x40) {
      v11 = 0;
    }
    v8 = v52[1] >> v10 << v11;
    if (v10 > 0xFFFFFFBE) {
      LOBYTE(v8) = 0;
    }
  }
  else {
    v8 = v52[0] >> v4;
  }
  v12 = *(_QWORD*)(v1 + 4272);
  BYTE13(v43) = v8 & 1;
  v7 = (*(__int64 (**)(__int64, _QWORD, _QWORD, char*))(v1 + 3880))(
      v12, v3, v4, (char*)&v43 + 8);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  v7 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int128*))(v1 + 3952))(
      *(_QWORD*)(v1 + 4272), v3, v4, &v43);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  v7 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, char*))(v1 + 3896))(
      *(_QWORD*)(v1 + 4272), v3, v4, (char*)&v42 + 12);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  v7 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, char*))(v1 + 3904))(
      *(_QWORD*)(v1 + 4272), v3, v4, (char*)&v42 + 8);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  v7 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD, __int64*))(v1 + 4056))(
      *(_QWORD*)(v1 + 4272), v3, v4, 0, &v53_.v53);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  v13 = *(_QWORD*)(v1 + 4272);
  LODWORD(v41[1]) = v53_.v54;
  v14 = *(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD*))(v1 + 3864);
  v41[0] = v53_.v53;
  v7 = v14(v13, v3, v4, &v41[3]);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  v7 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64*))(v1 + 3848))(
      *(_QWORD*)(v1 + 4272), v3, v4, &v53_.v53);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  v15 = *(_QWORD*)(v1 + 4272);
  HIDWORD(v41[2]) = v53_.v54;
  v16 = *(__int64 (**)(__int64, _QWORD, _QWORD, __int128*))(v1 + 3944);
  *(_QWORD*)((char*)&v41[1] + 4) = v53_.v53;
  v7 = v16(v15, v3, v4, &v42);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  v7 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int128*))(v1 + 3920))(
      *(_QWORD*)(v1 + 4272), v3, v4, &v44);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  if (v4 > 0x3F) {
    if (v4 - 64 > 0xFFFFFFBE) {
      LOBYTE(v17) = 0;
    }
    else {
      v18 = 64 - v4;
      if (v4 > 0x40) {
        v18 = 0;
      }
      v17 = v49[1] >> ((unsigned __int8)v4 - 64) << v18;
    }
  }
  else {
    v17 = v49[0] >> v4;
  }
  v19 = *(_QWORD*)(v1 + 4272);
  BYTE12(v43) = v17 & 1;
  v7 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _BYTE*))(v1 + 3936))(v19, v3,
                                                                     v4, v48);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  v20 = *(_QWORD*)(v1 + 4272);
  BYTE14(v43) = v48[0];
  v7 = (*(__int64 (**)(__int64, _QWORD, _QWORD, char*))(v1 + 3984))(
      v20, v3, v4, (char*)&v44 + 4);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  v7 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, char*))(v1 + 3976))(
      *(_QWORD*)(v1 + 4272), v3, v4, (char*)&v44 + 8);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  v7 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD*, char*))(v1 + 3832))(
      *(_QWORD*)(v1 + 4272), v3, v4, v45, (char*)v45 + 4);
  if ((_DWORD)v7 != 0) {
    goto LABEL_39;
  }
  if (*(_BYTE*)(v1 + 16) == 1) {
    v7 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD*))(v1 + 2936))(v1 + 16, 0, 0, LODWORD(v45[0]),
                                               0, 0, v45);
    if ((_DWORD)v7 != 0) {
      goto LABEL_39;
    }
  }
  v7 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                       __int64*, _BYTE*))(v1 + 4120))(8, 0, v3, LODWORD(v45[0]),
                                                      0, 0, &v47, v46);
  if ((_DWORD)v7 != 0 ||
      (LODWORD(v45[1]) = v47,
       (_DWORD)(v7 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD, _QWORD,
                                     _QWORD, __int64*, _BYTE*))(v1 + 4120))(
                    11, 1, v3, LODWORD(v45[0]), 0, 0, &v47, v46)) != 0)) {
  LABEL_39:
    result = CudaDriverRoutine_20f580(v7);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  else {
    HIDWORD(v45[1]) = v47;
  }
  v21 = *(_QWORD*)(a1 + 32);
  v22 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 40) = 96;
  if (v21 >= 0x60) {
    v23 = 96;
  }
  else {
    v23 = v21;
  }
  memcpy_plt(v22, (__int64)v41, v23);
  if (*(_QWORD*)(a1 + 72) == 0) {
    return 0;
  }
LABEL_44:
  if (*(unsigned __int16*)(v1 + 10) > 6u) {
    v34 = *(_DWORD*)(a1 + 24);
    v33 = *(_DWORD*)(a1 + 28);
    v35 = *(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD*))(v1 + 4024);
    v36 = *(_QWORD*)(v1 + 4272);
    *(_QWORD*)&v42 = 0;
    memset(v41, 0, sizeof(v41));
    v37 = v35(v36, v34, v33, v41);
    if ((_DWORD)v37 != 0 ||
        (_DWORD)(v37 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, char*))(
                     v1 + 4032))(*(_QWORD*)(v1 + 4272), v34, v33,
                                 (char*)v41 + 4)) != 0 ||
        (_DWORD)(v37 =
                     (*(__int64 (**)(_QWORD, _QWORD, _QWORD, unsigned __int64))(
                         v1 + 4040))(*(_QWORD*)(v1 + 4272), v34, v33,
                                     (unsigned __int64)v41 | 0xC)) != 0 ||
        (_DWORD)(v37 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD, _QWORD,
                                       _QWORD, _QWORD*, _BYTE*))(v1 + 4120))(
                     20, 2, v34, 0, v33, 0, v52, v51)) != 0 ||
        (v38 = *(_QWORD*)(v1 + 4272), LODWORD(v41[1]) = v52[0],
         (_DWORD)(v37 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD*))(
                      v1 + 4048))(v38, v34, v33, &v41[2])) != 0)) {
    LABEL_54:
      result = CudaDriverRoutine_20f580(v37);
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_55;
    }
    if (*(_DWORD*)(v1 + 8) >= 0x90000u) {
      v37 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD*, _BYTE*))(v1 + 4120))(44, 2, v34, 0, v33, 0,
                                                          v52, v51);
      if ((_DWORD)v37 != 0) {
        goto LABEL_54;
      }
      LODWORD(v41[3]) = v52[0];
      v37 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD*, _BYTE*))(v1 + 4120))(45, 2, v34, 0, v33, 0,
                                                          v52, v51);
      if ((_DWORD)v37 != 0) {
        goto LABEL_54;
      }
      v40 = *(_QWORD*)(v1 + 4272);
      HIDWORD(v41[3]) = v52[0];
      v37 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _DWORD*, _QWORD*))(
          v1 + 3832))(v40, v34, v33, v50, v49);
      if ((_DWORD)v37 != 0) {
        goto LABEL_54;
      }
      v37 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD*, _BYTE*))(v1 + 4120))(47, 2, v34, 0, v33, 0,
                                                          v52, v51);
      if ((_DWORD)v37 != 0) {
        goto LABEL_54;
      }
      DWORD1(v42) = v52[0];
      v37 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD*, _BYTE*))(v1 + 4120))(46, 1, v34, v50[0],
                                                          v33, 0, v52, v51);
      if ((_DWORD)v37 != 0) {
        goto LABEL_54;
      }
      LODWORD(v42) = v52[0];
    }
  LABEL_55:
    v29 = *(_QWORD*)(a1 + 48);
    v30 = *(_QWORD*)(a1 + 72);
    v31 = 40;
    *(_QWORD*)(a1 + 56) = 40;
    v32 = v29 >= 0x28;
    goto LABEL_56;
  }
  v24 = *(_DWORD*)(a1 + 24);
  v25 = *(_DWORD*)(a1 + 28);
  v26 = *(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD*))(v1 + 3960);
  v27 = *(_QWORD*)(v1 + 4272);
  v41[0] = 0;
  v28 = v26(v27, v24, v25, v41);
  if ((_DWORD)v28 == 0 &&
          (_DWORD)(v28 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, char*))(
                       v1 + 3840))(*(_QWORD*)(v1 + 4272), v24, v25,
                                   (char*)v41 + 4)) == 0 ||
      (_DWORD)(result = CudaDriverRoutine_20f580(v28)) == 0) {
    v29 = *(_QWORD*)(a1 + 48);
    v30 = *(_QWORD*)(a1 + 72);
    v31 = 8;
    *(_QWORD*)(a1 + 56) = 8;
    v32 = v29 >= 8;
  LABEL_56:
    if (v32) {
      v39 = v31;
    }
    else {
      v39 = v29;
    }
    memcpy_plt(v30, (__int64)v41, v39);
    return 0;
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

__int64 cuda_driver_unplaced_11_210780(_DWORD* a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  int v9;
  _DWORD v11[18];

  v1 = *(_DWORD*)CudaDriverData_1421ff0[0];
  v11[0] = 72;
  v11[1] = v1;
  v2 = *(_DWORD*)CudaDriverData_1422000[0];
  v11[2] = *(_DWORD*)CudaDriverData_1422018[0];
  v11[3] = v2;
  v3 = *(_DWORD*)CudaDriverData_1422060[0];
  v11[4] = *CudaDriverData_1423078;
  v11[5] = v3;
  v4 = *(_DWORD*)CudaDriverData_1422008[0];
  v11[6] = *(_DWORD*)CudaDriverData_1422010[0];
  v11[7] = v4;
  v11[8] = *(_DWORD*)CudaDriverData_1422028[0];
  v11[9] = 0;
  v5 = *(_DWORD*)CudaDriverData_1422090[0];
  v11[10] = *(_DWORD*)CudaDriverData_1422038[0];
  v11[11] = v5;
  v6 = *(_DWORD*)CudaDriverData_1422030[0];
  v11[12] = *(_DWORD*)CudaDriverData_1421fe8[0];
  v11[13] = v6;
  v7 =
      *(_DWORD*)((char*)((_UNKNOWN*)0x17F0LL) + (_QWORD)CudaDriverData_1422118);
  v11[14] = *(_DWORD*)CudaDriverData_1421ff8[0];
  v11[15] = v7;
  if (*a1 >= 0x48u) {
    v8 = 72;
  }
  else {
    v8 = (unsigned int)*a1;
  }
  v9 = *(_DWORD*)CudaDriverData_1422098[0];
  v11[16] = *CudaDriverData_14230c0;
  v11[17] = v9;
  memcpy_plt((__int64)a1, (__int64)v11, v8);
  return 0;
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

__int64 cuda_driver_2118f0(_DWORD* a1)
{
  unsigned __int64 v1;
  _QWORD v3[17];

  v3[0] = 136;
  v3[1] = CudaDriverData_1421ff0[0];
  v3[2] = CudaDriverData_1422018[0];
  v3[3] = CudaDriverData_1422000[0];
  v3[4] = CudaDriverData_1423078;
  v3[5] = CudaDriverData_1422060[0];
  v3[6] = CudaDriverData_1422010[0];
  v3[7] = CudaDriverData_1422008[0];
  v3[8] = CudaDriverData_1422028[0];
  v3[9] = CudaDriverData_1422038[0];
  v3[10] = CudaDriverData_1422090[0];
  v3[11] = CudaDriverData_1421fe8[0];
  v3[12] = CudaDriverData_1422030[0];
  v3[13] = CudaDriverData_1421ff8[0];
  v3[14] = (char*)((_UNKNOWN*)0x17F0LL) + (_QWORD)CudaDriverData_1422118;
  v3[15] = CudaDriverData_14230c0_alt1;
  if (*a1 >= 0x88u) {
    v1 = 136;
  }
  else {
    v1 = (unsigned int)*a1;
  }
  v3[16] = CudaDriverData_1422098[0];
  memcpy_plt((__int64)a1, (__int64)v3, v1);
  return 0;
}

__int64 cuda_driver_211b60(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  unsigned int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  struct {
    __int128 v9;
    __int128 v10;
    __int64 v11;
    char gap40_[32];
    __int64 v12;
  } v9_;

  if (a1 != nullptr) {
    v1 = *a1;
    v9_.v11 = 0;
    v9_.v9 = (__typeof__(v9_.v9)){0};
    v9_.v10 = (__typeof__(v9_.v10)){0};
    if (v1 >= 0x28) {
      v3 = 40;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v9_.v9, (__int64)a1, v3);
    LODWORD(v9_.v9) = v3;
    if (*((_QWORD*)&v9_.v9 + 1) != 0) {
      if (**((_DWORD**)&v9_.v9 + 1) == 0) {
        v5 = *(_DWORD*)(*(_QWORD*)(*((_QWORD*)&v9_.v9 + 1) + 64LL) + 21864LL);
        switch (v5) {
        case 4:
          v6 = 2;
          break;
        case 1:
          v6 = 0;
          break;
        case 0:
          v6 = 1;
          break;
        default:
          v4 = 32;
          goto LABEL_19;
        }
        v9_.v12 = 0;
        v7 = (*((__int64 (**)(_QWORD))CudaDriverData_1423090[v6] + 2))(
            *((_QWORD*)&v9_.v9 + 1));
        v4 = CudaDriverRoutine_20f580(v7);
        if (v4 == 0) {
          *(_QWORD*)&v9_.v10 = v9_.v12;
        }
        goto LABEL_19;
      }
      v4 = 29;
    }
    else {
      v4 = 4;
    }
  LABEL_19:
    memcpy_plt((__int64)a1, (__int64)&v9_.v9, (unsigned int)v9_.v9);
    return v4;
  }
  return 4;
}

__int64 cuda_driver_211c80(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  unsigned int v4;
  int v5;
  __int64 v6;
  __int64 v8;
  unsigned int v9;
  struct {
    __int128 v10;
    __int128 v11;
    __int64 v12;
  } v10_;

  if (a1 != nullptr) {
    v1 = *a1;
    v10_.v12 = 0;
    v10_.v10 = (__typeof__(v10_.v10)){0};
    v10_.v11 = (__typeof__(v10_.v11)){0};
    if (v1 >= 0x28) {
      v3 = 40;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v10_.v10, (__int64)a1, v3);
    LODWORD(v10_.v10) = v3;
    if (*((_QWORD*)&v10_.v10 + 1) != 0) {
      if (**((_DWORD**)&v10_.v10 + 1) != 0) {
        v4 = 29;
        goto LABEL_15;
      }
      if ((_QWORD)v10_.v11 != 0) {
        v5 = *(_DWORD*)(*(_QWORD*)(*((_QWORD*)&v10_.v10 + 1) + 64LL) + 21864LL);
        switch (v5) {
        case 4:
          v6 = 2;
          break;
        case 1:
          v6 = 0;
          break;
        case 0:
          v6 = 1;
          break;
        default:
          v4 = 32;
          goto LABEL_15;
        }
        v8 = (*((__int64 (**)(void))CudaDriverData_1423090[v6] + 3))();
        v9 = CudaDriverRoutine_20f580(v8);
        v3 = (unsigned int)v10_.v10;
        v4 = v9;
      LABEL_15:
        memcpy_plt((__int64)a1, (__int64)&v10_.v10, v3);
        return v4;
      }
    }
    v4 = 4;
    goto LABEL_15;
  }
  return 4;
}

__int64 cuda_driver_211ec0(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64 (**v5)(_QWORD*, char*);
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  __int128 v10;
  struct {
    __int128 v11;
    __int128 v12;
    __int64 v13;
  } v11_;
  struct {
    _QWORD v14[2];
    __int64 v15;
  } v14_;

  if (a1 != nullptr) {
    v1 = *a1;
    v11_.v13 = 0;
    v11_.v11 = (__typeof__(v11_.v11)){0};
    v11_.v12 = (__typeof__(v11_.v12)){0};
    v10 = (__typeof__(v10)){0};
    if (v1 >= 0x38) {
      v3 = 56;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v10, (__int64)a1, v3);
    LODWORD(v10) = v3;
    v14_.v15 = 0;
    if (*((_QWORD*)&v10 + 1) != 0 && (_QWORD)v11_.v11 != 0) {
      v4 = *(_QWORD*)(*((_QWORD*)&v10 + 1) + 8LL);
      v14_.v14[0] = v11_.v11;
      v14_.v14[1] = v4;
      v5 = (__int64 (**)(_QWORD*,
                         char*))CudaDriverData_1423090[**((_DWORD**)&v10 + 1)];
      if (v1 >= 0x30) {
        v14_.v15 = *((_QWORD*)&v11_.v12 + 1);
      }
      v6 = v5[9](v14_.v14, (char*)&v11_.v11 + 8);
      v7 = CudaDriverRoutine_20f580(v6);
      v3 = (unsigned int)v10;
      v8 = v7;
    }
    else {
      v8 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&v10, v3);
  }
  else {
    return 4;
  }
  return v8;
}

__int64 cuda_driver_211fb0(unsigned int* a1)
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
    __int64 v11;
  } v9_;
  _QWORD v12[3];

  if (a1 != nullptr) {
    v1 = *a1;
    v9_.v11 = 0;
    v9_.v9 = (__typeof__(v9_.v9)){0};
    v9_.v10 = (__typeof__(v9_.v10)){0};
    if (v1 >= 0x28) {
      v3 = 40;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v9_.v9, (__int64)a1, v3);
    LODWORD(v9_.v9) = v3;
    if (*((_QWORD*)&v9_.v9 + 1) != 0 && (_QWORD)v9_.v10 != 0 &&
        DWORD1(v9_.v9) <= 2) {
      v4 = *(_QWORD*)(*((_QWORD*)&v9_.v9 + 1) + 8LL);
      v12[0] = v9_.v10;
      v12[1] = v4;
      v5 = (*((__int64 (**)(
                  _QWORD*))CudaDriverData_1423090[**((_DWORD**)&v9_.v9 + 1)] +
              19))(v12);
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

__int64 cuda_driver_212170(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  struct {
    __int128 v8;
    __int128 v9;
  } v8_;
  __int128 v10;
  _QWORD v11[3];
  _BYTE v12[4];

  if (a1 != nullptr) {
    v1 = *a1;
    v8_.v9 = (__typeof__(v8_.v9)){0};
    v10 = (__typeof__(v10)){0};
    v8_.v8 = (__typeof__(v8_.v8)){0};
    if (v1 >= 0x30) {
      v3 = 48;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v8_.v8, (__int64)a1, v3);
    LODWORD(v8_.v8) = v3;
    if (*((_QWORD*)&v8_.v8 + 1) != 0 && (_QWORD)v8_.v9 != 0) {
      v4 = *(_QWORD*)(*((_QWORD*)&v8_.v8 + 1) + 8LL);
      v11[0] = v8_.v9;
      v11[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, _BYTE*, __int128*))
                  CudaDriverData_1423090[**((_DWORD**)&v8_.v8 + 1)] +
              11))(v11, v12, &v10);
      v6 = CudaDriverRoutine_20f580(v5);
      if (v6 == 0) {
        DWORD2(v8_.v9) = v12[0];
      }
    }
    else {
      v6 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&v8_.v8, (unsigned int)v8_.v8);
  }
  else {
    return 4;
  }
  return v6;
}

__int64 cuda_driver_212590(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  _DWORD* v7;
  struct {
    __int128 v9;
    __int128 v10;
  } v9_;
  struct {
    __int128 v11;
    __int64 v12;
  } v11_;
  __int128 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  _QWORD v19[3];

  if (a1 != nullptr) {
    v1 = *a1;
    v11_.v12 = 0;
    v9_.v10 = (__typeof__(v9_.v10)){0};
    v11_.v11 = (__typeof__(v11_.v11)){0};
    v9_.v9 = (__typeof__(v9_.v9)){0};
    if (v1 >= 0x38) {
      v3 = 56;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v9_.v9, (__int64)a1, v3);
    LODWORD(v9_.v9) = v3;
    if (*((_QWORD*)&v9_.v9 + 1) != 0 && (_QWORD)v9_.v10 != 0 &&
        *((_QWORD*)&v9_.v10 + 1) != 0) {
      v4 = *(_QWORD*)(*((_QWORD*)&v9_.v9 + 1) + 8LL);
      v19[0] = v9_.v10;
      v19[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, _QWORD, __int128*, char*))
                  CudaDriverData_1423090[**((_DWORD**)&v9_.v9 + 1)] +
              25))(v19, DWORD1(v9_.v9), &v13, (char*)&v11_.v11 + 8);
      v6 = CudaDriverRoutine_20f580(v5);
      if (v6 == 0) {
        *(_OWORD*)(*((_QWORD*)&v9_.v10 + 1) + 4LL) = v13;
        *(_DWORD*)(*((_QWORD*)&v9_.v10 + 1) + 20LL) = v14;
        *(_QWORD*)(*((_QWORD*)&v9_.v10 + 1) + 24LL) = v15;
        v7 = *((_DWORD**)&v9_.v10 + 1);
        *(_QWORD*)(*((_QWORD*)&v9_.v10 + 1) + 32LL) = v16;
        v6 = 0;
        if (*v7 >= 0x30u) {
          v7[10] = v17;
          v7[11] = v18;
        }
      }
    }
    else {
      v6 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&v9_.v9, (unsigned int)v9_.v9);
  }
  else {
    return 4;
  }
  return v6;
}

__int64 cuda_driver_212860(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  unsigned int* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
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
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int128 v26;
    __int128 v27;
    __int128 v28;
    __int128 v29;
  } v26_;
  __int128 v30;
  unsigned int v31;
  _QWORD v32[3];

  if (a1 != nullptr) {
    v1 = *a1;
    v26_.v27 = (__typeof__(v26_.v27)){0};
    v26_.v28 = (__typeof__(v26_.v28)){0};
    v26_.v29 = (__typeof__(v26_.v29)){0};
    v30 = (__typeof__(v30)){0};
    v26_.v26 = (__typeof__(v26_.v26)){0};
    if (v1 >= 0x50) {
      v3 = 80;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v26_.v26, (__int64)a1, v3);
    v4 = *((unsigned int**)&v26_.v26 + 1);
    LODWORD(v26_.v26) = v3;
    if (*((_QWORD*)&v26_.v26 + 1) != 0 &&
        (v5 = v26_.v27, (_QWORD)v26_.v27 != 0) &&
        (v7 = *((_QWORD*)&v26_.v27 + 1), v6 = v26_.v28,
         (unsigned __int64)v26_.v28 > *((_QWORD*)&v26_.v27 + 1)) &&
        ((v8 = DWORD2(v26_.v28), DWORD2(v26_.v28) == 0) ||
         (_QWORD)v26_.v29 != 0)) {
      v11 = CudaDriverStub_12e330(16LL * DWORD2(v26_.v28));
      v12 = *((_QWORD*)v4 + 1);
      v13 = v11;
      v32[0] = v5;
      v32[1] = v12;
      v14 = (*(
          (__int64 (**)(_QWORD*, __int64, __int64, __int64, _QWORD,
                        unsigned int*, __int128*))CudaDriverData_1423090[*v4] +
          27))(v32, v7, v6, v11, v8, &v31, &v30);
      v9 = CudaDriverRoutine_20f580(v14);
      if (v9 == 0) {
        HIDWORD(v26_.v28) = v31;
        v15 = v31 >= DWORD2(v26_.v28) ? DWORD2(v26_.v28) : v31;
        if ((_DWORD)v15 != 0) {
          v16 = v15 & 3;
          if ((unsigned int)v15 >= 4) {
            v18 = v13 + 32;
            v19 = 0;
            v17 = 0;
            v20 = (16 * v15) & 0xFFFFFFFC0LL;
            do {
              v17 += 4;
              *(_QWORD*)(v26_.v29 + v19) = *(_QWORD*)(v13 + v19);
              *(_QWORD*)(v26_.v29 + v19 + 8) = *(_QWORD*)(v18 + v19 - 24);
              *(_QWORD*)(v26_.v29 + v19 + 16) = *(_QWORD*)(v18 + v19 - 16);
              *(_QWORD*)(v26_.v29 + v19 + 24) = *(_QWORD*)(v18 + v19 - 8);
              *(_QWORD*)(v26_.v29 + v19 + 32) = *(_QWORD*)(v18 + v19);
              *(_QWORD*)(v26_.v29 + v19 + 40) = *(_QWORD*)(v18 + v19 + 8);
              *(_QWORD*)(v26_.v29 + v19 + 48) = *(_QWORD*)(v18 + v19 + 16);
              v21 = *(_QWORD*)(v18 + v19 + 24);
              v22 = v26_.v29 + v19;
              v19 += 64;
              *(_QWORD*)(v22 + 56) = v21;
            } while (v20 != v19);
          }
          else {
            v17 = 0;
          }
          if (v16 != 0) {
            v23 = 16 * v17;
            do {
              --v16;
              *(_QWORD*)(v26_.v29 + v23) = *(_QWORD*)(v13 + v23);
              v24 = *(_QWORD*)(v13 + v23 + 8);
              v25 = v26_.v29 + v23;
              v23 += 16;
              *(_QWORD*)(v25 + 8) = v24;
            } while (v16 != 0);
          }
        }
      }
      CudaDriverRoutine_12e340(v13);
      v3 = (unsigned int)v26_.v26;
    }
    else {
      v9 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&v26_.v26, v3);
  }
  else {
    return 4;
  }
  return v9;
}

__int64 cuda_driver_212aa0(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  unsigned int* v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  _QWORD* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  struct {
    __int128 v17;
    __int128 v18;
    __int128 v19;
    __int128 v20;
  } v17_;
  _BYTE v21[16];
  __int64 v22;
  _QWORD v23[3];

  if (a1 == nullptr) {
    return 4;
  }
  v1 = *a1;
  v17_.v17 = (__typeof__(v17_.v17)){0};
  v17_.v18 = (__typeof__(v17_.v18)){0};
  v17_.v19 = (__typeof__(v17_.v19)){0};
  v17_.v20 = (__typeof__(v17_.v20)){0};
  if (v1 >= 0x40) {
    v3 = 64;
  }
  else {
    v3 = v1;
  }
  memcpy_plt((__int64)&v17_.v17, (__int64)a1, v3);
  v4 = *((unsigned int**)&v17_.v17 + 1);
  LODWORD(v17_.v17) = v3;
  if (*((_QWORD*)&v17_.v17 + 1) != 0) {
    v5 = v17_.v18;
    if ((_QWORD)v17_.v18 != 0 && (_QWORD)v17_.v19 != 0 &&
        HIDWORD(v17_.v18) != 0) {
      if (DWORD2(v17_.v18) == 1) {
        v6 = 1;
      LABEL_14:
        v8 = (_QWORD*)(v17_.v19 + 8);
        v9 = HIDWORD(v17_.v18);
        v10 = &v22;
        while (*v8 != 0) {
          v11 = v8[1];
          if (v11 == 0) {
            break;
          }
          v12 = *((_DWORD*)v8 - 1);
          if (v12 == 0) {
            break;
          }
          *(v10 - 2) = *v8;
          *(v10 - 1) = v11;
          --v9;
          *(_DWORD*)v10 = v12;
          v10 += 3;
          v8 += 4;
          if (v9 == 0) {
            v13 = *((_QWORD*)v4 + 1);
            v23[0] = v5;
            v23[1] = v13;
            v14 = (*((__int64 (**)(_QWORD*, __int64,
                                   _BYTE*))CudaDriverData_1423090[*v4] +
                     14))(v23, v6, v21);
            v15 = CudaDriverRoutine_20f580(v14);
            v3 = (unsigned int)v17_.v17;
            v7 = v15;
            goto LABEL_21;
          }
        }
        goto LABEL_20;
      }
      if (DWORD2(v17_.v18) == 2) {
        v6 = 0;
        goto LABEL_14;
      }
    }
  }
LABEL_20:
  v7 = 4;
LABEL_21:
  memcpy_plt((__int64)a1, (__int64)&v17_.v17, v3);
  return v7;
}

__int64 cuda_driver_212be0(unsigned int* a1)
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
    __int128 v11;
  } v9_;
  __int128 v12;
  struct {
    _QWORD v13[2];
    int v14;
  } v13_;
  _QWORD v15[3];

  if (a1 != nullptr) {
    v1 = *a1;
    v9_.v9 = (__typeof__(v9_.v9)){0};
    v9_.v10 = (__typeof__(v9_.v10)){0};
    v9_.v11 = (__typeof__(v9_.v11)){0};
    v12 = (__typeof__(v12)){0};
    if (v1 >= 0x40) {
      v3 = 64;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v9_.v9, (__int64)a1, v3);
    LODWORD(v9_.v9) = v3;
    if (*((_QWORD*)&v9_.v9 + 1) != 0 && (_QWORD)v9_.v10 != 0 &&
        *((_QWORD*)&v9_.v10 + 1) != 0 && (_QWORD)v9_.v11 != 0 &&
        DWORD1(v9_.v9) != 0) {
      v13_.v13[0] = *((_QWORD*)&v9_.v10 + 1);
      v13_.v13[1] = v9_.v11;
      v13_.v14 = DWORD1(v9_.v9);
      v4 = *(_QWORD*)(*((_QWORD*)&v9_.v9 + 1) + 8LL);
      v15[0] = v9_.v10;
      v15[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, __int64, _QWORD*, __int64, __int128*))
                  CudaDriverData_1423090[**((_DWORD**)&v9_.v9 + 1)] +
              14))(v15, 1, v13_.v13, 1, &v12);
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

__int64 cuda_driver_212ce0(unsigned int* a1)
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
    __int128 v11;
  } v9_;
  __int128 v12;
  struct {
    _QWORD v13[2];
    int v14;
  } v13_;
  _QWORD v15[3];

  if (a1 != nullptr) {
    v1 = *a1;
    v9_.v9 = (__typeof__(v9_.v9)){0};
    v9_.v10 = (__typeof__(v9_.v10)){0};
    v9_.v11 = (__typeof__(v9_.v11)){0};
    v12 = (__typeof__(v12)){0};
    if (v1 >= 0x40) {
      v3 = 64;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v9_.v9, (__int64)a1, v3);
    LODWORD(v9_.v9) = v3;
    if (*((_QWORD*)&v9_.v9 + 1) != 0 && (_QWORD)v9_.v10 != 0 &&
        *((_QWORD*)&v9_.v10 + 1) != 0 && (_QWORD)v9_.v11 != 0 &&
        DWORD1(v9_.v9) != 0) {
      v13_.v13[0] = *((_QWORD*)&v9_.v10 + 1);
      v13_.v13[1] = v9_.v11;
      v13_.v14 = DWORD1(v9_.v9);
      v4 = *(_QWORD*)(*((_QWORD*)&v9_.v9 + 1) + 8LL);
      v15[0] = v9_.v10;
      v15[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, _QWORD, _QWORD*, __int64, __int128*))
                  CudaDriverData_1423090[**((_DWORD**)&v9_.v9 + 1)] +
              14))(v15, 0, v13_.v13, 1, &v12);
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

__int64 cuda_driver_212de0(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v11;
  unsigned int v12;
  struct {
    __int128 v13;
    __int128 v14;
    __int128 v15;
    __int128 v16;
    __int128 v17;
  } v13_;
  _QWORD v18[3];

  if (a1 == nullptr) {
    return 4;
  }
  v1 = *a1;
  v13_.v14 = (__typeof__(v13_.v14)){0};
  v13_.v15 = (__typeof__(v13_.v15)){0};
  v13_.v16 = (__typeof__(v13_.v16)){0};
  v13_.v17 = (__typeof__(v13_.v17)){0};
  v13_.v13 = (__typeof__(v13_.v13)){0};
  if (v1 >= 0x50) {
    v3 = 80;
  }
  else {
    v3 = v1;
  }
  memcpy_plt((__int64)&v13_.v13, (__int64)a1, v3);
  LODWORD(v13_.v13) = v3;
  if (*((_QWORD*)&v13_.v13 + 1) != 0 && (_QWORD)v13_.v14 != 0 &&
      (v4 = DWORD1(v13_.v13), (DWORD1(v13_.v13) | DWORD2(v13_.v16)) != 0) &&
      *((_QWORD*)&v13_.v15 + 1) != 0 && DWORD2(v13_.v14) != 0) {
    v5 = *(_QWORD*)(*((_QWORD*)&v13_.v13 + 1) + 8LL);
    v18[0] = v13_.v14;
    v18[1] = v5;
    v6 = (unsigned int)**((_DWORD**)&v13_.v13 + 1);
    v7 = (__int64)*(&CudaDriverData_1432068 + v6);
    if ((_DWORD)v6 == 1) {
      v8 = 0;
    }
    else {
      if ((_DWORD)v6 != 2) {
        v9 = 45;
        goto LABEL_17;
      }
      if (HIDWORD(v13_.v16) != 0) {
        v8 = 0x100000000LL;
      }
      else {
        v8 = 0;
      }
      v4 = DWORD2(v13_.v16);
    }
    v11 = (*(__int64 (**)(_QWORD*, __int64, __int64, _QWORD))(v7 + 120))(
        v18, 1, v8 | v4, v13_.v15);
    v12 = CudaDriverRoutine_20f580(v11);
    v3 = (unsigned int)v13_.v13;
    v9 = v12;
  }
  else {
    v9 = 4;
  }
LABEL_17:
  memcpy_plt((__int64)a1, (__int64)&v13_.v13, v3);
  return v9;
}

__int64 cuda_driver_212f20(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v11;
  unsigned int v12;
  struct {
    __int128 v13;
    __int128 v14;
    __int128 v15;
    __int128 v16;
    __int128 v17;
  } v13_;
  _QWORD v18[3];

  if (a1 == nullptr) {
    return 4;
  }
  v1 = *a1;
  v13_.v14 = (__typeof__(v13_.v14)){0};
  v13_.v15 = (__typeof__(v13_.v15)){0};
  v13_.v16 = (__typeof__(v13_.v16)){0};
  v13_.v17 = (__typeof__(v13_.v17)){0};
  v13_.v13 = (__typeof__(v13_.v13)){0};
  if (v1 >= 0x50) {
    v3 = 80;
  }
  else {
    v3 = v1;
  }
  memcpy_plt((__int64)&v13_.v13, (__int64)a1, v3);
  LODWORD(v13_.v13) = v3;
  if (*((_QWORD*)&v13_.v13 + 1) != 0 && (_QWORD)v13_.v14 != 0 &&
      (v4 = DWORD1(v13_.v13), (DWORD1(v13_.v13) | DWORD2(v13_.v16)) != 0) &&
      *((_QWORD*)&v13_.v15 + 1) != 0 && (_DWORD)v13_.v15 != 0) {
    v5 = *(_QWORD*)(*((_QWORD*)&v13_.v13 + 1) + 8LL);
    v18[0] = v13_.v14;
    v18[1] = v5;
    v6 = (unsigned int)**((_DWORD**)&v13_.v13 + 1);
    v7 = (__int64)*(&CudaDriverData_1432068 + v6);
    if ((_DWORD)v6 == 1) {
      v8 = 0;
    }
    else {
      if ((_DWORD)v6 != 2) {
        v9 = 45;
        goto LABEL_17;
      }
      if (HIDWORD(v13_.v16) != 0) {
        v8 = 0x100000000LL;
      }
      else {
        v8 = 0;
      }
      v4 = DWORD2(v13_.v16);
    }
    v11 = (*(__int64 (**)(_QWORD*, _QWORD, __int64, _QWORD))(v7 + 120))(
        v18, 0, v8 | v4, *((_QWORD*)&v13_.v14 + 1));
    v12 = CudaDriverRoutine_20f580(v11);
    v3 = (unsigned int)v13_.v13;
    v9 = v12;
  }
  else {
    v9 = 4;
  }
LABEL_17:
  memcpy_plt((__int64)a1, (__int64)&v13_.v13, v3);
  return v9;
}

__int64 cuda_driver_213060(unsigned int* a1)
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
    __int128 v11;
    __int128 v12;
  } v9_;
  _QWORD v13[3];

  if (a1 != nullptr) {
    v1 = *a1;
    v9_.v9 = (__typeof__(v9_.v9)){0};
    v9_.v10 = (__typeof__(v9_.v10)){0};
    v9_.v11 = (__typeof__(v9_.v11)){0};
    v9_.v12 = (__typeof__(v9_.v12)){0};
    if (v1 >= 0x40) {
      v3 = 64;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v9_.v9, (__int64)a1, v3);
    LODWORD(v9_.v9) = v3;
    if (*((_QWORD*)&v9_.v9 + 1) != 0 && (_QWORD)v9_.v10 != 0 &&
        *((_QWORD*)&v9_.v10 + 1) != 0 && *((_QWORD*)&v9_.v11 + 1) != 0 &&
        (_QWORD)v9_.v11 != 0 && DWORD1(v9_.v9) != 0) {
      v4 = *(_QWORD*)(*((_QWORD*)&v9_.v9 + 1) + 8LL);
      v13[0] = v9_.v10;
      v13[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, __int64))
                  CudaDriverData_1423090[**((_DWORD**)&v9_.v9 + 1)] +
              18))(v13, 1);
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

__int64 cuda_driver_213160(unsigned int* a1)
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
    __int128 v11;
    __int128 v12;
  } v9_;
  _QWORD v13[3];

  if (a1 != nullptr) {
    v1 = *a1;
    v9_.v9 = (__typeof__(v9_.v9)){0};
    v9_.v10 = (__typeof__(v9_.v10)){0};
    v9_.v11 = (__typeof__(v9_.v11)){0};
    v9_.v12 = (__typeof__(v9_.v12)){0};
    if (v1 >= 0x40) {
      v3 = 64;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v9_.v9, (__int64)a1, v3);
    LODWORD(v9_.v9) = v3;
    if (*((_QWORD*)&v9_.v9 + 1) != 0 && (_QWORD)v9_.v10 != 0 &&
        *((_QWORD*)&v9_.v10 + 1) != 0 && *((_QWORD*)&v9_.v11 + 1) != 0 &&
        (_QWORD)v9_.v11 != 0 && DWORD1(v9_.v9) != 0) {
      v4 = *(_QWORD*)(*((_QWORD*)&v9_.v9 + 1) + 8LL);
      v13[0] = v9_.v10;
      v13[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, _QWORD))
                  CudaDriverData_1423090[**((_DWORD**)&v9_.v9 + 1)] +
              18))(v13, 0);
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

__int64 cuda_driver_213360(unsigned int* a1)
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
    v1 = *a1;
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
      v4 = *(_QWORD*)(*((_QWORD*)&v9 + 1) + 8LL);
      v12[0] = v10_.v10;
      v12[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, char*))
                  CudaDriverData_1423090[**((_DWORD**)&v9 + 1)] +
              5))(v12, (char*)&v10_.v10 + 8);
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

__int64 cuda_driver_213430(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  unsigned int v5;
  struct {
    __int128 v7;
    __int128 v8;
  } v7_;
  struct {
    __int128 v9;
    __int64 v10;
  } v9_;
  __int64 v11;
  int v12;

  if (a1 != nullptr) {
    v1 = *a1;
    v9_.v10 = 0;
    v7_.v8 = (__typeof__(v7_.v8)){0};
    v9_.v9 = (__typeof__(v9_.v9)){0};
    v7_.v7 = (__typeof__(v7_.v7)){0};
    if (v1 >= 0x38) {
      v3 = 56;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v7_.v7, (__int64)a1, v3);
    LODWORD(v7_.v7) = v3;
    if (*((_QWORD*)&v7_.v7 + 1) != 0 && DWORD2(v7_.v8) != 0 &&
        HIDWORD(v7_.v8) != 0) {
      if (**((_DWORD**)&v7_.v7 + 1) == 1) {
        v11 = *((_QWORD*)&v7_.v8 + 1);
        v4 = (*(__int64 (**)(_QWORD, __int64*, char*))(
            *(char**)((char*)((_UNKNOWN**)0x8LL) +
                      (_QWORD)CudaDriverData_1423090) +
            (unsigned __int64)((__int64*)0x30LL)))(
            *(_QWORD*)(*((_QWORD*)&v7_.v7 + 1) + 8LL), &v11,
            (char*)&v9_.v9 + 8);
        v5 = CudaDriverRoutine_20f580(v4);
        if (v5 == 0) {
          DWORD1(v9_.v9) = v12;
        }
      }
      else {
        v5 = 45;
      }
    }
    else {
      v5 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&v7_.v7, (unsigned int)v7_.v7);
  }
  else {
    return 4;
  }
  return v5;
}

__int64 cuda_driver_213610(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int128 v8;
  struct {
    __int128 v9;
    __int64 v10;
  } v9_;

  if (a1 != nullptr) {
    v1 = *a1;
    v9_.v10 = 0;
    v8 = (__typeof__(v8)){0};
    v9_.v9 = (__typeof__(v9_.v9)){0};
    if (v1 >= 0x28) {
      v3 = 40;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v8, (__int64)a1, v3);
    LODWORD(v8) = v3;
    if (*((_QWORD*)&v8 + 1) != 0) {
      v4 = (*((__int64 (**)(
                  _QWORD, char*))CudaDriverData_1423090[**((_DWORD**)&v8 + 1)] +
              1))(*(_QWORD*)(*((_QWORD*)&v8 + 1) + 8LL), (char*)&v9_.v9 + 8);
      v5 = CudaDriverRoutine_20f580(v4);
      v3 = (unsigned int)v8;
      v6 = v5;
    }
    else {
      v6 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&v8, v3);
  }
  else {
    return 4;
  }
  return v6;
}

__int64 cuda_driver_2136d0(unsigned int* a1)
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
    v1 = *a1;
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
    if (*((_QWORD*)&v9_.v9 + 1) != 0 && *((_QWORD*)&v9_.v10 + 1) != 0) {
      v4 = *(_QWORD*)(*((_QWORD*)&v9_.v9 + 1) + 8LL);
      v12[0] = *((_QWORD*)&v9_.v10 + 1);
      v12[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, __int128*))
                  CudaDriverData_1423090[**((_DWORD**)&v9_.v9 + 1)] +
              10))(v12, &v11);
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

__int64 cuda_driver_2137a0(unsigned int* a1)
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
  struct {
    __int128 v11;
    __int64 v12;
  } v11_;
  _QWORD v13[3];

  if (a1 != nullptr) {
    v1 = *a1;
    v11_.v12 = 0;
    v9_.v10 = (__typeof__(v9_.v10)){0};
    v11_.v11 = (__typeof__(v11_.v11)){0};
    v9_.v9 = (__typeof__(v9_.v9)){0};
    if (v1 >= 0x38) {
      v3 = 56;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v9_.v9, (__int64)a1, v3);
    LODWORD(v9_.v9) = v3;
    if (*((_QWORD*)&v9_.v9 + 1) != 0 && *((_QWORD*)&v9_.v10 + 1) != 0) {
      v4 = *(_QWORD*)(*((_QWORD*)&v9_.v9 + 1) + 8LL);
      v13[0] = *((_QWORD*)&v9_.v10 + 1);
      v13[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, _QWORD, _QWORD, char*))
                  CudaDriverData_1423090[**((_DWORD**)&v9_.v9 + 1)] +
              21))(v13, (unsigned int)v11_.v11, DWORD1(v9_.v9),
                   (char*)&v11_.v11 + 8);
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

__int64 cuda_driver_213880(unsigned int* a1)
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
  struct {
    __int128 v11;
    __int64 v12;
  } v11_;
  _QWORD v13[3];

  if (a1 != nullptr) {
    v1 = *a1;
    v11_.v12 = 0;
    v9_.v10 = (__typeof__(v9_.v10)){0};
    v11_.v11 = (__typeof__(v11_.v11)){0};
    v9_.v9 = (__typeof__(v9_.v9)){0};
    if (v1 >= 0x38) {
      v3 = 56;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v9_.v9, (__int64)a1, v3);
    LODWORD(v9_.v9) = v3;
    if (*((_QWORD*)&v9_.v9 + 1) != 0 && *((_QWORD*)&v9_.v10 + 1) != 0) {
      v4 = *(_QWORD*)(*((_QWORD*)&v9_.v9 + 1) + 8LL);
      v13[0] = *((_QWORD*)&v9_.v10 + 1);
      v13[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, _QWORD, _QWORD, char*))
                  CudaDriverData_1423090[**((_DWORD**)&v9_.v9 + 1)] +
              22))(v13, (unsigned int)v11_.v11, DWORD1(v9_.v9),
                   (char*)&v11_.v11 + 8);
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

__int64 cuda_driver_213960(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  struct {
    __int128 v8;
    __int128 v9;
  } v8_;
  struct {
    __int128 v10;
    __int64 v11;
  } v10_;
  _QWORD v12[3];
  _BYTE v13[4];

  if (a1 != nullptr) {
    v1 = *a1;
    v10_.v11 = 0;
    v8_.v9 = (__typeof__(v8_.v9)){0};
    v10_.v10 = (__typeof__(v10_.v10)){0};
    v8_.v8 = (__typeof__(v8_.v8)){0};
    if (v1 >= 0x38) {
      v3 = 56;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v8_.v8, (__int64)a1, v3);
    LODWORD(v8_.v8) = v3;
    if (*((_QWORD*)&v8_.v8 + 1) != 0 && *((_QWORD*)&v8_.v9 + 1) != 0) {
      v4 = *(_QWORD*)(*((_QWORD*)&v8_.v8 + 1) + 8LL);
      v12[0] = *((_QWORD*)&v8_.v9 + 1);
      v12[1] = v4;
      v5 = (*((__int64 (**)(_QWORD*, _QWORD, _BYTE*, char*))
                  CudaDriverData_1423090[**((_DWORD**)&v8_.v8 + 1)] +
              24))(v12, DWORD1(v8_.v8), v13, (char*)&v10_.v10 + 8);
      v6 = CudaDriverRoutine_20f580(v5);
      if (v6 == 0) {
        LODWORD(v10_.v10) = ~v13[0] & 0x1F;
      }
    }
    else {
      v6 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&v8_.v8, (unsigned int)v8_.v8);
  }
  else {
    return 4;
  }
  return v6;
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

__int64 cuda_driver_unplaced_11_2144e0(unsigned int* a1, int a2)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int128 v6;
  unsigned __int64 v7;
  struct {
    char gap0_[8];
    __int64 v8;
    __int128 v9;
  } v8_;

  v8_.v8 = 0;
  if (a1 == nullptr) {
    return 1;
  }
  v2 = *a1;
  if (*a1 == 0) {
    return 1;
  }
  v3 = 101;
  if (a2 < 0 || a2 >= CudaDriverData_1434ac0) {
    return v3;
  }
  v4 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a2 + 35);
  if (v4 == 0) {
    return 1;
  }
  if (*(_DWORD*)(v4 + 21864) != 0) {
    return 1;
  }
  v6 = *(_OWORD*)(v4 + 3232);
  if (v2 >= 0x18) {
    v7 = 24;
  }
  else {
    v7 = v2;
  }
  LODWORD(v8_.v8) = v7;
  v8_.v9 = v6;
  memcpy_plt((__int64)a1, (__int64)&v8_.v8, v7);
  return 0;
}

__int64 cuda_driver_unplaced_11_214750(unsigned int* a1, int a2)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  unsigned __int64 v5;
  __int16 v6;
  __int64 v7;
  struct {
    char gap0_[8];
    _BYTE v9[20];
    int v10;
    __int128 v11;
  } v9_;

  *(_OWORD*)&v9_.v9[4] = (__typeof__(*(_OWORD*)&v9_.v9[4])){0};
  v9_.v10 = 0;
  if (a1 == nullptr) {
    return 1;
  }
  v2 = *a1;
  if (*a1 == 0) {
    return 1;
  }
  v3 = 101;
  if ((a2 & 0x80000000) == 0 && a2 < CudaDriverData_1434ac0) {
    v4 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a2 + 35);
    if (v2 >= 0x28) {
      v5 = 40;
    }
    else {
      v5 = v2;
    }
    *(_DWORD*)v9_.v9 = v5;
    v6 = *(_WORD*)(v4 + 16848);
    v9_.v9[4] = (v6 & 0x80) != 0;
    v7 = *(_QWORD*)(v4 + 19824);
    v9_.v9[16] = (v6 & 0x100) != 0;
    *(_QWORD*)&v9_.v9[8] = *(_QWORD*)(v7 + 32);
    v9_.v11 = *(_OWORD*)(v4 + 3111);
    memcpy_plt((__int64)a1, (__int64)v9_.v9, v5);
    return 0;
  }
  return v3;
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

__int64 cuda_driver_unplaced_11_216ce0(__int64 a1, unsigned int* a2)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  __int64 (*v17)(__int64);
  __int64 v18;
  struct {
    __int128 v20;
    __int128 v21;
    __int128 v22;
    __int128 v23;
    __int128 v24;
    __int64 v25;
  } v20_;

  v2 = 1;
  if (a1 != 0 && a2 != nullptr && *(_DWORD*)(a1 + 4) == 0) {
    v3 = *a2;
    v4 = *(_QWORD*)(a1 + 24);
    v20_.v21 = (__typeof__(v20_.v21)){0};
    v20_.v22 = (__typeof__(v20_.v22)){0};
    v20_.v23 = (__typeof__(v20_.v23)){0};
    v20_.v24 = (__typeof__(v20_.v24)){0};
    v20_.v20 = (__typeof__(v20_.v20)){0};
    if (v3 >= 0x58) {
      v5 = 88;
    }
    else {
      v5 = v3;
    }
    v6 = *(_QWORD*)(a1 + 1208);
    v7 = *(_DWORD*)(v4 + 4);
    LODWORD(v20_.v20) = v5;
    if (v7 == 2) {
      v8 = *(_QWORD*)(v4 + 304);
      if (v8 != 0) {
        v9 = *(_QWORD*)(v4 + 312);
        if (v9 != 0 && v6 == v8 && *(_QWORD*)(v8 + 16) == *(_QWORD*)(v9 + 16)) {
          v6 = v9;
        }
      }
    }
    v11 = *(_QWORD*)(a1 + 176);
    *((_QWORD*)&v20_.v20 + 1) = v6;
    *(_QWORD*)&v20_.v21 = v11;
    v12 = *(_QWORD*)(a1 + 1200);
    v13 = *(_QWORD*)(a1 + 32);
    *((_QWORD*)&v20_.v21 + 1) = v12;
    *(_QWORD*)&v20_.v22 = v13;
    if (v13 != 0) {
      *((_QWORD*)&v20_.v22 + 1) = *(_QWORD*)(v13 + 32);
    }
    v14 = *(_QWORD*)(a1 + 752);
    *(_QWORD*)&v20_.v23 = a1 + 184;
    if (v14 != 0) {
      v16 = a1;
      v17 = *(__int64 (**)(__int64))(*(_QWORD*)(v12 + 64) + 19816LL);
      *((_QWORD*)&v20_.v23 + 1) = *(_QWORD*)(v14 + 8);
      v18 = v17(a1 + 184);
      a1 = v16;
      *((_QWORD*)&v20_.v24 + 1) = v18;
    }
    LOWORD(v20_.v24) = *(unsigned __int8*)(a1 + 672);
    WORD1(v20_.v24) = *(unsigned __int8*)(a1 + 673);
    v20_.v25 = *(_QWORD*)(a1 + 1216);
    BYTE4(v20_.v24) = *(_BYTE*)(a1 + 389);
    memcpy_plt((__int64)a2, (__int64)&v20_.v20, v5);
    return 0;
  }
  return v2;
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

__int64 cuda_driver_217370(__int64 a1, unsigned int* a2)
{
  int v4;
  __int64 v5;
  unsigned int v7;
  unsigned __int64 v8;
  __int64 v9;
  int v10;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v14[4];
    __int64 v15;
  } v14_;

  if (a1 == 0) {
    return 1;
  }
  v4 = *(_DWORD*)(a1 + 4);
  if (v4 != 2) {
    if (v4 == 0) {
      v5 = *(_QWORD*)(a1 + 800);
      if (v5 != 0) {
        if (a2 == nullptr || *(_DWORD*)(v5 + 8) != 2) {
          return 1;
        }
        goto LABEL_9;
      }
    }
    return 1;
  }
  if (a2 == nullptr) {
    return 1;
  }
LABEL_9:
  v7 = *a2;
  memset(v14_.v14, 0, sizeof(v14_.v14));
  if (v7 >= 0x28) {
    v8 = 40;
  }
  else {
    v8 = v7;
  }
  LODWORD(v14_.v14[0]) = v8;
  if (v4 == 2) {
    v9 = a1 + 40;
  }
  else {
    v9 = *(_QWORD*)(a1 + 800) + 24LL;
  }
  v10 = *(_DWORD*)(v9 + 8);
  v12 = *(_QWORD*)(v9 + 16) * *(unsigned int*)(v9 + 12);
  v13 = *(_QWORD*)(v9 + 32);
  HIDWORD(v14_.v14[2]) = *(_DWORD*)(v9 + 12);
  LODWORD(v14_.v14[3]) = v10;
  v14_.v15 = v12 * v13;
  v14_.v14[1] = cuda_driver_1dbe40(0, *(_QWORD*)v9, 0);
  LOBYTE(v14_.v14[2]) = 1;
  memcpy_plt((__int64)a2, (__int64)v14_.v14, v8);
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

__int64 cuda_driver_unplaced_11_217d80(__int64 a1, _DWORD* a2)
{
  unsigned int v4;
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  struct {
    _QWORD v10[2];
    int v11;
    int v12;
    __int64 v13;
  } v10_;

  v4 = 1;
  if (a1 == 0 || a2 == nullptr) {
    return v4;
  }
  if (*(_DWORD*)(a1 + 4) == 12) {
    if (*a2 >= 0x20u) {
      v5 = 32;
    }
    else {
      v5 = (unsigned int)*a2;
    }
    v6 = *(_QWORD*)(a1 + 32);
    v7 = *(_DWORD*)(a1 + 40);
    v10_.v10[0] = 0;
    v10_.v10[1] = v6;
    v8 = *(_QWORD*)(a1 + 48);
    LODWORD(v10_.v10[0]) = v5;
    v10_.v13 = v8;
    v10_.v11 = *(_DWORD*)(a1 + 56);
    v10_.v12 = v7;
    memcpy_plt((__int64)a2, (__int64)v10_.v10, v5);
    return 0;
  }
  return 1;
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

__int64 cuda_driver_unplaced_11_2194c0(unsigned int a1, unsigned int a2,
                                       _DWORD* a3)
{
  __int64 result;
  int v7;
  unsigned __int64 v8;
  struct {
    _DWORD v9[8];
    __int128 v10;
    __int128 v11;
    __int128 v12;
  } v9_;
  int v13[148];

  memset_plt_alt1((__int64)v13, 0, 0x250u);
  memset(v9_.v9, 0, sizeof(v9_.v9));
  v9_.v10 = (__typeof__(v9_.v10)){0};
  v9_.v11 = (__typeof__(v9_.v11)){0};
  v9_.v12 = (__typeof__(v9_.v12)){0};
  if (a3 == nullptr || *a3 == 0) {
    return 1;
  }
  if ((a1 & 0x80000000) != 0) {
    return 101;
  }
  result = 101;
  v7 = *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)CudaDriverData_1422118);
  if ((int)a1 < v7 && (a2 & 0x80000000) == 0 && (int)a2 < v7) {
    result = CudaDriverRoutine_ec740(
        *((_QWORD*)CudaDriverData_1422118 + a1 + 35),
        *((_QWORD*)CudaDriverData_1422118 + a2 + 35), (__int64)v13);
    if ((_DWORD)result == 0) {
      CudaDriverRoutine_2197c0((__int64)v9_.v9, v13);
      v8 = (unsigned int)*a3;
      *(_QWORD*)&v9_.v10 = __PAIR64__(a2, a1);
      v9_.v9[0] = v8;
      memcpy_plt((__int64)a3, (__int64)v9_.v9, v8);
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_unplaced_11_2196d0(__int64 a1, _DWORD* a2)
{
  unsigned int v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[6];
  struct {
    _BYTE v10[584];
    int v11;
  } v10_;

  v2 = 1;
  memset(v9, 0, 40);
  if (a2 != nullptr && a1 != 0 && *a2 != 0) {
    v2 = CudaDriverRoutine_ec740(*(_QWORD*)(a1 + 64), 0, (__int64)v10_.v10);
    if (v2 == 0) {
      if (v10_.v11 == 64 &&
          (*(_BYTE*)(*(_QWORD*)(a1 + 64) + 17100LL) & 1) != 0) {
        v5 = *(_QWORD*)(*(_QWORD*)(CudaDriverRoutine_5ef60(*(_QWORD**)(a1 + 72),
                                                           0) +
                                   33824) +
                        80LL);
        *(_OWORD*)&v9[1] = *(_OWORD*)(v5 + 24);
        v6 = *(_QWORD*)(v5 + 40);
        v7 = *(_QWORD*)(v5 + 48);
        v9[3] = v6;
        v9[4] = v7;
      }
      else {
        memset(&v9[1], 0, 32);
      }
      memcpy_plt((__int64)a2, (__int64)v9, (unsigned int)*a2);
      return 0;
    }
  }
  return v2;
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

__int64 cuda_driver_21cce0(unsigned int* a1, __int64 a2)
{
  unsigned int v2;
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned int* v6;
  __int64 v7;
  __int64 v9;
  _DWORD* v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  _OWORD v14[8];
  struct {
    __int128 v15;
    __int128 v16;
  } v15_;
  struct {
    _QWORD v17[4];
    __int128 v18;
    __int64 v19;
  } v17_;

  if (a1 == nullptr) {
    return 1;
  }
  v2 = *a1;
  v3 = *(__int64**)(a2 + 96);
  v17_.v19 = 0;
  v15_.v16 = (__typeof__(v15_.v16)){0};
  memset(v17_.v17, 0, sizeof(v17_.v17));
  v17_.v18 = (__typeof__(v17_.v18)){0};
  if (v2 >= 0x58) {
    v4 = 88;
  }
  else {
    v4 = v2;
  }
  v15_.v15 = (__typeof__(v15_.v15)){0};
  LODWORD(v15_.v15) = v4;
  if (v3 != nullptr) {
    v5 = *v3;
    if (*v3 != 0) {
      v6 = a1;
      CudaDriverRoutine_f1f00(v3, v14);
      a1 = v6;
      *((_QWORD*)&v15_.v15 + 1) = *(_QWORD*)(v5 + 64);
      LODWORD(v15_.v16) = 1;
      v7 = *(_QWORD*)(v5 + 80);
      *(_OWORD*)v17_.v17 = v14[0];
      *((_QWORD*)&v15_.v16 + 1) = v7;
      v17_.v19 = v3[9];
      LOBYTE(v17_.v18) = *((_BYTE*)v3 + 125);
    LABEL_11:
      memcpy_plt((__int64)a1, (__int64)&v15_.v15, v4);
      return 0;
    }
  }
  else {
    v9 = *(_QWORD*)(a2 + 104);
    if (v9 != 0) {
      v10 = *(_DWORD**)(v9 + 104);
      v11 = *(_OWORD*)(v9 + 72);
      *((_QWORD*)&v15_.v15 + 1) = *(_QWORD*)(v9 + 128);
      LODWORD(v10) = *v10;
      LODWORD(v15_.v16) = 2;
      v12 = *(unsigned int*)(v9 + 144);
      v13 = *(_QWORD*)(v9 + 88);
      *(_OWORD*)&v17_.v17[1] = v11;
      DWORD2(v15_.v16) = (_DWORD)v10;
      v17_.v17[0] = v12;
      v17_.v17[3] = v13;
      goto LABEL_11;
    }
  }
  return 999;
}

#pragma GCC visibility pop
