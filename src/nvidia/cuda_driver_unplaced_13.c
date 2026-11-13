#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_241910(_DWORD*, unsigned __int64, __int64);
_DWORD* CudaDriverRoutine_241990(_DWORD*, unsigned __int64, int);
__int64* FSE_initDState(__int64* result, __int64, unsigned __int16*);
__int64 BIT_initDStream(__int64, unsigned __int8*, __int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_110820(__int64, __int64, __int64, __int64, __int64,
                                 __int64, __int64);
__int64 CudaDriverRoutine_1174d0(__int64);
__int64 CudaDriverRoutine_121c60(__int64*);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_15fd0(__int64);
__int64 CudaDriverRoutine_1dba10(__int64, unsigned __int64);
__int64 CudaDriverRoutine_206060(__int64, __int64);
__int64 CudaDriverRoutine_22c0d0(unsigned int);
__int64 CudaDriverRoutine_239ba0(__int64);
__int64 CudaDriverRoutine_23bfe0(__int64);
__int64 CudaDriverRoutine_23c180(__int64, unsigned int*);
__int64 CudaDriverRoutine_23c4c0(_DWORD*, int);
__int64 CudaDriverRoutine_23d4a0(__int64 result, int);
__int64 CudaDriverRoutine_246fa0(__int64, unsigned int);
__int64 CudaDriverRoutine_246fe0(__int64);
__int64 CudaDriverRoutine_2475f0(__int64, unsigned int);
__int64 CudaDriverRoutine_247640(__int64);
__int64 CudaDriverRoutine_248280(_WORD*, __int64, unsigned int, unsigned int,
                                 __int64, unsigned __int64);
__int64 CudaDriverRoutine_25aba0(unsigned __int8*, _BYTE*, int, int, __int64,
                                 unsigned __int64);
__int64 CudaDriverRoutine_270();
__int64 CudaDriverRoutine_633b0(_DWORD*, double*);
__int64 CudaDriverRoutine_928b0(__int64, _DWORD*, _DWORD*);
__int64 CudaDriverRoutine_92a90(__int64, __int64, __int64);
__int64 CudaDriverRoutine_96f20(__int64, __int64, __int64, unsigned int,
                                __int64, __int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_9ab30(__int64, _BYTE*);
__int64 CudaDriverRoutine_bbd70(__int64 result, _QWORD*);
__int64 CudaDriverRoutine_bc3f0(__int64);
__int64 CudaDriverRoutine_bc770(__int64);
__int64 CudaDriverRoutine_df060(__int64*);
__int64 CudaDriverRoutine_e7e40(__int64);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_ee030(__int64, __int64, _QWORD*, __int128*);
__int64 CudaDriverRoutine_ee2a0(__int64, __int64);
__int64 CudaDriverRoutine_efe20(__int64, __int64, __int64, __int64,
                                unsigned int, unsigned int);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_112b20(__int64, __int64*, unsigned int, __int64*,
                              __int64*);
__int64 CudaDriverStub_112e30(_QWORD);
__int64 CudaDriverStub_121ff0(_QWORD);
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_12dca0(_QWORD);
__int64 CudaDriverStub_12e320(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1db1a0(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1dbfc0(_QWORD);
__int64 CudaDriverStub_57450(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_8e230(_QWORD);
__int64 cuda_Free_plt(_QWORD);
__int64 cuda_driver_194b20(int*, char);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_5a060(__int64);
__int64 cuda_driver_misc_helpers_18000();
__int64 cuda_driver_misc_helpers_4bb0(__int64 result);
__int64 cuda_driver_predicates_10f750(__int64, int, unsigned int, __int64,
                                      _DWORD*, __int64);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 puts_plt(_QWORD);
unsigned __int8 CudaDriverRoutine_12b530();
unsigned __int8 CudaDriverRoutine_bbdf0(__int64);
unsigned __int8 CudaDriverRoutine_bbe30(__int64);
unsigned __int8 CudaDriverRoutine_e7cb0(__int64, __int64, unsigned int);
unsigned __int8 CudaDriverStub_b9300(__int64);
extern _DWORD CudaDriverData_1130110[6];
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN CudaDriverData_13b62f0;
extern _UNKNOWN CudaDriverData_f00000;
extern __int128 CudaDriverData_11152b0;
extern __int128 CudaDriverData_1115360;
extern __int128 CudaDriverData_1115400;
extern __int128 CudaDriverData_1115460;
extern __int128 CudaDriverData_1115470;
extern __int128 CudaDriverData_1115480;
extern __int128 CudaDriverData_11154b0;
extern __int128 CudaDriverData_11154e0;
extern __int128 CudaDriverData_1115540;
extern __int128 CudaDriverData_1115550;
extern __int128 CudaDriverData_1115570;
extern __int128 CudaDriverData_1115610;
extern __int128 CudaDriverData_1115620;
extern __int128 CudaDriverData_11156d0;
extern __int128 CudaDriverData_1115710;
extern __int128 CudaDriverData_1115750;
extern __int128 CudaDriverData_1115760;
extern __int128 CudaDriverData_11157f0;
extern __int128 CudaDriverData_1115800;
extern __int128 CudaDriverData_1115810;
extern __int128 CudaDriverData_11158c0;
extern __int128 CudaDriverData_11158f0;
extern __int128 CudaDriverData_1115900;
extern __int128 CudaDriverData_1115980;
extern __int128 CudaDriverData_1115990;
extern __int128 CudaDriverData_1115a00;
extern __int128 CudaDriverData_1115b20;
extern __int128 CudaDriverData_1115bb0;
extern __int128 CudaDriverData_1115c80;
extern __int128 CudaDriverData_1115cc0;
extern __int128 CudaDriverData_1115da0;
extern __int128 CudaDriverData_1115f30;
extern __int128 CudaDriverData_1115f70;
extern __int128 CudaDriverData_1116060;
extern __int128 CudaDriverData_11160f0;
extern __int128 CudaDriverData_1116100;
extern __int128 CudaDriverData_11161c0;
extern __int128 CudaDriverData_1116240;
extern __int128 CudaDriverData_1116250;
extern __int128 CudaDriverData_1116270;
extern __int128 CudaDriverData_11162d0;
extern __int128 CudaDriverData_11162e0;
extern __int64 (*CudaDriverData_14252e8[20])();
extern int CudaDriverData_1131b48[8];
extern unsigned int CudaDriverData_1131be8[8];
extern unsigned int CudaDriverData_13b6270[32];
unsigned __int64* CudaDriverRoutine_ee010(unsigned __int64* result, char);
unsigned __int64 FSE_readNCount_bmi2(__int64, _DWORD*, _DWORD*, _DWORD*,
                                     unsigned __int64);
unsigned __int64 cuda_driver_108520(__int64);
void CudaDriverRoutine_205ee0(int, __int64, __int64*, _QWORD*, int);
void CudaDriverRoutine_4198();
void CudaDriverRoutine_43c8();
void CudaDriverRoutine_4464();
void CudaDriverRoutine_46fc();
void CudaDriverRoutine_743c();
void CudaDriverRoutine_7458();
void CudaDriverRoutine_7460();
void CudaDriverRoutine_7488();
__int64 cuda_driver_237cf0(_DWORD* a1);
__int64 cuda_driver_237f60(__int64 a1);
__int64 cuda_driver_2387e0(__int64 a1, _QWORD* a2);
__int64 cuda_driver_238930(__int64 a1, _QWORD* a2);
__int64 cuda_driver_238d30(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_238f60(__int64 a1, __int64 a2, __int64 a3);
long double cuda_driver_239100(__int64 a1, __int64 a2, unsigned int* a3,
                               __int64 a4);
_DWORD* cuda_driver_239740(__int64 a1, _DWORD** a2, __int64 a3);
__int64 cuda_driver_239e40(__int64 a1, unsigned int* a2, unsigned __int64* a3,
                           bool* a4);
__int64 cuda_driver_239f80(__int64 a1, int a2, int a3, unsigned int* a4,
                           unsigned __int64* a5, char* a6);
__int64 cuda_driver_23b0b0(__int64 a1);
__int64 cuda_driver_23be80(__int64 result, unsigned __int64 a2,
                           unsigned int a3);
__int64 cuda_driver_23c020(__int64 a1);
__int64 cuda_driver_23cce0(__int64 a1);
__int64 cuda_driver_23fc80(__int64 a1, double* a2);
__int64 cuda_driver_240040(int* a1);
double cuda_driver_2400f0(__int64 a1, __int64 a2, char a3);
__int64 cuda_driver_240a60(__int64 a1, __int64 a2, __int64 a3);
int8x8_t cuda_driver_241cc0(__int64 a1, int8x8_t* a2, __int64 a3);
__int64 cuda_driver_241f70(__int64* a1, __int64 a2, __int64 a3, char a4);
_DWORD* cuda_driver_242510(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                           unsigned __int64 a5, __int64 a6, unsigned int a7);
_DWORD* cuda_driver_243880(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           int a5);
__int64 cuda_driver_245460(__int64 a1, __int64 a2, __int64 a3, bool* a4);
__int64 cuda_driver_2455c0(__int64 a1, __int64 a2, int a3);
__int64 cuda_driver_2461c0(__int64 a1, _BYTE* a2);
__int64 cuda_driver_2463f0(__int64 a1, __int64 a2);
__int64 cuda_driver_246420(__int64 a1, __int64 a2, int a3);
void cuda_driver_2466a0();
__int64 cuda_driver_2468a0(__int64* a1, __int64* a2, __int64 a3, __int64 a4,
                           char a5);
__int64 cuda_driver_246ac0(unsigned int a1, unsigned int a2, __int64 a3);
__int64 cuda_driver_246bc0(__int64 a1, _QWORD* a2);
__int64 cuda_driver_246c80(__int64 result);
unsigned __int64 cuda_driver_246d20(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4);
unsigned __int64 cuda_driver_248870(_BYTE* a1, __int64 a2, _DWORD* a3,
                                    unsigned __int64 a4, unsigned int a5,
                                    __int64 a6, unsigned __int64 a7);
__int64 cuda_driver_259f40(unsigned __int8* a1, unsigned __int64 a2, int a3,
                           unsigned int a4);
__int64 cuda_driver_25a540(unsigned __int8* a1, __int64 a2, int a3,
                           unsigned int a4);
__int64 cuda_driver_25b940(unsigned __int8* a1, _BYTE* a2, int a3,
                           unsigned int a4, __int64 a5, int a6);
__int64 CudaDriverRoutine_8ab20(__int64, __int64, int, int);
__int64 CudaDriverRoutine_f8ed0(_DWORD*);
__int64 CudaDriverRoutine_f8f00(_DWORD*);
__int64 CudaDriverStub_5ab60(_QWORD, _QWORD);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memmove_plt_alt1(__int64, __int64,
                         unsigned __int64) __asm__("memmove_plt");
unsigned __int8 CudaDriverRoutine_86fe0(__int64);
__int64 cuda_driver_unplaced_13_2429c0(__int64* a1, __int64 a2, __int64 a3,
                                       __int64 a4, __int64 a5, __int64 a6,
                                       unsigned int a7);
__int64 cuda_driver_unplaced_13_25aba0(unsigned __int8* a1, unsigned __int64 a2,
                                       int a3, unsigned int a4, __int64 a5,
                                       unsigned __int64 a6);

__int64 cuda_driver_237cf0(_DWORD* a1)
{
  void* v3;

  if (a1 == nullptr) {
    return 1;
  }
  v3 = CudaDriverData_1422118;
  *a1 = *((unsigned __int8*)&CudaDriverRoutine_46fc +
          (_QWORD)CudaDriverData_1422118);
  *((_BYTE*)&CudaDriverRoutine_46fc + (_QWORD)v3) = 0;
  return 0;
}

__int64 cuda_driver_237f60(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  v4 = 0;
  result = CudaDriverRoutine_df060(&v4);
  if ((_DWORD)result == 0) {
    result = 1;
    if (a1 != 0) {
      *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
      *(_OWORD*)(a1 + 16) = (__typeof__(*(_OWORD*)(a1 + 16))){0};
      *(_DWORD*)a1 = 1;
      *(_DWORD*)(a1 + 8) = *(_DWORD*)((char*)((_UNKNOWN*)0xF90LL) +
                                      (_QWORD)CudaDriverData_1422118);
      v3 = v4;
      *(_DWORD*)(a1 + 12) =
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)((char*)((char*)0x40LL) + v4) +
                                19824LL) +
                     8LL);
      *(_DWORD*)(a1 + 16) =
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)((char*)((char*)0x40LL) + v3) +
                                19824LL) +
                     12LL);
      *(_DWORD*)(a1 + 20) =
          *(_DWORD*)(*(_QWORD*)((char*)((char*)0x40LL) + v3) + 14756LL);
      *(_DWORD*)(a1 + 24) =
          *(_DWORD*)(*(_QWORD*)((char*)((char*)0x40LL) + v3) + 14760LL);
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_2387e0(__int64 a1, _QWORD* a2)
{
  __int64 result;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;

  v14 = 0;
  result = CudaDriverRoutine_df060(&v14);
  if ((_DWORD)result == 0) {
    v5 = *(_DWORD*)(a1 + 32);
    if (v5 == 2) {
      v7 = *(_QWORD*)(a1 + 40);
      if (v7 == 0) {
        return 400;
      }
      v6 = *(_QWORD*)(v7 + 80);
      if (v6 == 0) {
        return 1;
      }
    }
    else {
      if (v5 != 1) {
        return 1;
      }
      v6 = CudaDriverRoutine_1dba10(
          *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v14), *(_QWORD*)(a1 + 40));
      if (v6 == 0) {
        return 1;
      }
    }
    *(_QWORD*)(a1 + 8) = CudaDriverStub_1dbf90(v6);
    *(_QWORD*)a1 = CudaDriverStub_1db800(v6);
    v8 = CudaDriverStub_1db1a0(v6);
    v9 = v14;
    *(_QWORD*)(a1 + 16) = v8;
    v10 = *(_QWORD*)((char*)((char*)0x40LL) + v9);
    v11 = CudaDriverStub_1dbfc0(v6);
    v12 = CudaDriverStub_1db1a0(v6);
    CudaDriverStub_1dbf90(v6);
    if (*(_DWORD*)(v10 + 21864) == 2) {
      v13 = *(_QWORD*)(v11 + 128);
      if (a2 != nullptr) {
        if (v12 < v13) {
          if (*(_QWORD*)(a1 + 24) != 0) {
            *a2 = *(_QWORD*)(*(_QWORD*)(v11 + 216) + 8LL);
            return 0;
          }
          return 1;
        }
        return 0;
      }
      else {
        *(_QWORD*)(a1 + 24) = v12 < v13;
        return 0;
      }
    }
    else {
      return 801;
    }
  }
  return result;
}

__int64 cuda_driver_238930(__int64 a1, _QWORD* a2)
{
  __int64 result;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;

  v14 = 0;
  result = CudaDriverRoutine_df060(&v14);
  if ((_DWORD)result == 0) {
    v5 = *(_DWORD*)(a1 + 40);
    if (v5 == 2) {
      v7 = *(_QWORD*)(a1 + 48);
      if (v7 == 0) {
        return 400;
      }
      v6 = *(_QWORD*)(v7 + 80);
      *(_QWORD*)(a1 + 24) = *(_QWORD*)(v7 + 96);
      if (v6 == 0) {
        return 1;
      }
    }
    else {
      if (v5 != 1) {
        return 1;
      }
      v6 = CudaDriverRoutine_1dba10(
          *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v14), *(_QWORD*)(a1 + 48));
      *(_QWORD*)(a1 + 24) = 0;
      if (v6 == 0) {
        return 1;
      }
    }
    *(_QWORD*)(a1 + 8) = CudaDriverStub_1dbf90(v6);
    *(_QWORD*)a1 = CudaDriverStub_1db800(v6);
    v8 = CudaDriverStub_1db1a0(v6);
    v9 = v14;
    *(_QWORD*)(a1 + 16) = v8;
    v10 = *(_QWORD*)((char*)((char*)0x40LL) + v9);
    v11 = CudaDriverStub_1dbfc0(v6);
    v12 = CudaDriverStub_1db1a0(v6);
    CudaDriverStub_1dbf90(v6);
    if (*(_DWORD*)(v10 + 21864) == 2) {
      v13 = *(_QWORD*)(v11 + 128);
      if (a2 != nullptr) {
        if (v12 < v13) {
          if (*(_QWORD*)(a1 + 32) != 0) {
            *a2 = *(_QWORD*)(*(_QWORD*)(v11 + 216) + 8LL);
            return 0;
          }
          return 1;
        }
        return 0;
      }
      else {
        *(_QWORD*)(a1 + 32) = v12 < v13;
        return 0;
      }
    }
    else {
      return 801;
    }
  }
  return result;
}

__int64 cuda_driver_238d30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = 1;
  v10 = 0;
  if (!__CFADD__(a2, a3) && a1 != 0 && a2 != 0 && a3 != 0 && a4 == 0) {
    v8 = a1;
    v9 = CudaDriverStub_12e320(1);
    if (((unsigned int)a2 & ((_DWORD)v9 - 1)) != 0) {
      return 1;
    }
    else if (((unsigned int)a3 &
              ((unsigned int)CudaDriverStub_12e320(v9) - 1)) != 0) {
      return 1;
    }
    else if (CudaDriverRoutine_12b530()) {
      result = CudaDriverRoutine_df060(&v10);
      if ((_DWORD)result == 0) {
        return CudaDriverRoutine_efe20(v10, v8, a2, a3, 1u, 0x80000000);
      }
    }
    else {
      return 801;
    }
  }
  return result;
}

__int64 cuda_driver_238f60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  int8x8_t* v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  unsigned int v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  unsigned __int64 v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  __int64 result;

  v3 = *(_QWORD*)(a3 + 8);
  v4 = *(_QWORD*)(a3 + 16);
  v5 = *(_OWORD*)(v3 + 96);
  v6 = *(_OWORD*)(v3 + 112);
  v7 = *(_OWORD*)(v3 + 80);
  v8 = (int8x8_t*)(v4 + 564);
  v9 = *(_QWORD*)(a1 + 64);
  v10 = (unsigned int)(*(_DWORD*)(a3 + 172) * *(_DWORD*)(a3 + 168) *
                           *(_DWORD*)(a3 + 176) +
                       31) >>
        5;
  v11 = *(_DWORD*)(v9 + 3756);
  LODWORD(v9) = *(_DWORD*)(v9 + 3768);
  *(_OWORD*)(v4 + 576) = *(_OWORD*)(v3 + 64);
  *(_OWORD*)(v4 + 592) = v7;
  *(_OWORD*)(v4 + 608) = v5;
  *(_OWORD*)(v4 + 624) = v6;
  v12 = *(_OWORD*)(v3 + 160);
  v13 = *(_OWORD*)(v3 + 176);
  v14 = *(_OWORD*)(v3 + 144);
  v15 = v11 / (unsigned int)v9;
  *(_OWORD*)(v4 + 640) = *(_OWORD*)(v3 + 128);
  *(_OWORD*)(v4 + 656) = v14;
  *(_OWORD*)(v4 + 672) = v12;
  *(_OWORD*)(v4 + 688) = v13;
  v16 = *(_OWORD*)(v3 + 224);
  v17 = *(_OWORD*)(v3 + 240);
  v18 = *(_OWORD*)(v3 + 208);
  *(_OWORD*)(v4 + 704) = *(_OWORD*)(v3 + 192);
  *(_OWORD*)(v4 + 720) = v18;
  *(_OWORD*)(v4 + 736) = v16;
  *(_OWORD*)(v4 + 752) = v17;
  v19 = *(_OWORD*)(v3 + 16);
  if (v10 <= v15) {
    LOWORD(v10) = v15;
  }
  v20 = *(_OWORD*)(v3 + 32);
  v21 = *(_OWORD*)(v3 + 48);
  *(_OWORD*)(v4 + 512) = *(_OWORD*)v3;
  *(_OWORD*)(v4 + 528) = v19;
  *(_OWORD*)(v4 + 544) = v20;
  *(_OWORD*)(v4 + 560) = v21;
  *(_DWORD*)(v4 + 560) = 0;
  v22 = LANES64_OF(vand_s8(COERCE_AS(int8x8_t, LANES64(*(v8)).n64_u64[0]),
                           COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL)))
            .n64_u64[0];
  v23 = *(_DWORD*)(v4 + 528) & 0xFFFFF2FF | 0x100;
  *(_DWORD*)(v4 + 516) = *(_DWORD*)(v4 + 516) & 0x80000000 | 0xFFFFF;
  v24 = *(_DWORD*)(v4 + 520);
  *(_DWORD*)(v4 + 528) = v23;
  LANES64(*(v8)).n64_u64[0] = v22;
  *(_DWORD*)(v4 + 520) = v24 & 0x80000000;
  v25 = *(_DWORD*)(v4 + 532) & 0xFE000000 | 0x100000;
  *(_DWORD*)(v4 + 532) = v25;
  *(_DWORD*)(v4 + 704) = *(_DWORD*)(*(_QWORD*)(a1 + 1064) + 408LL);
  *(_DWORD*)(v4 + 708) = *(_DWORD*)(v4 + 708) & 0xFFFE0000 |
                         *(_DWORD*)(*(_QWORD*)(a1 + 1064) + 412LL) & 0x1FFFF;
  *(_DWORD*)(v4 + 532) = v25 & 0x3F00000;
  v26 = (((_WORD)v10 << 6) + 16320) & 0x3FC0;
  *(_DWORD*)(v4 + 556) = v26 | *(_DWORD*)(v4 + 556) & 0xFFF40000 | 0x803F;
  *(_DWORD*)(v3 + 44) = v26 | *(_DWORD*)(v3 + 44) & 0xFFF74000 | 0x8803F;
  v27 = *(_QWORD*)(a3 + 40);
  *(_DWORD*)(v4 + 1072) = 0;
  *(_QWORD*)(v4 + 1088) = v27;
  *(_QWORD*)(v4 + 1040) = 0x200000000LL;
  *(_QWORD*)(v4 + 1168) = 0x100000001LL;
  result = CudaDriverRoutine_e7e40(a3);
  *(_DWORD*)(v4 + 1176) = result;
  *(_DWORD*)(v4 + 1180) = 1;
  return result;
}

long double cuda_driver_239100(__int64 a1, __int64 a2, unsigned int* a3,
                               __int64 a4)
{

#pragma clang fp contract(off)
  unsigned int v4;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  __int16 v13;
  unsigned __int64 v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
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
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  int8x16_t v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned int v40;
  unsigned __int64 v41;
  unsigned int v42;
  int8x16_t v43;
  unsigned int v44;
  unsigned __int64 v45;
  __int64 v46;
  int8x16_t v48;
  int8x16_t v49;
  __int128 v50;
  __int64 v51;
  _DWORD v52[8];
  struct {
    _QWORD v53[2];
    int8x16_t v54;
    int8x16_t v55;
    __int128 v56;
  } v53_;

  v4 = a3[5];
  v51 = 0;
  *(_OWORD*)v53_.v53 = (__typeof__(*(_OWORD*)v53_.v53)){0};
  v53_.v54 = (__typeof__(v53_.v54)){0};
  v53_.v55 = (__typeof__(v53_.v55)){0};
  v53_.v56 = (__typeof__(v53_.v56)){0};
  a3[5] = v4 & 0x3FFFFFF;
  v9 = a3[11] & 0xFFFCBFFF;
  memset(v52, 0, sizeof(v52));
  a3[11] = v9;
  CudaDriverRoutine_bbd70(a2, &v51);
  v10 = a3[17];
  v11 = HIDWORD(v51) & 0x1FFFF | (a3[49] >> 17 << 17);
  a3[48] = v51;
  a3[49] = v11;
  a3[11] |= 0x44000000u;
  v12 = a3[20];
  a3[29] = a3[29] & 0x7FFFFFF | 0x8000000;
  v13 = *(_DWORD*)(a2 + 392);
  a3[22] = 0;
  a3[20] = v12 & 0xFFFE00FF | ((v13 & 0x1FF) << 8);
  a3[21] = 0;
  *((_BYTE*)a3 + 72) = 34;
  *((_BYTE*)a3 + 127) =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3164LL) << 24) +
                     (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3160LL) << 28)) >>
      24;
  v14 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3888LL);
  v15 = ((unsigned __int64)(unsigned int)(v14 - 1) + 8448) / v14 * v14;
  v16 = v10 & 0xFFFC0000 | v15 & 0x3FFFF;
  a3[17] = v16;
  v17 = (CudaDriverRoutine_22c0d0(0x4000u) & 0x7F) << 18;
  a3[17] = v16 & 0xFE03FFFF | v17;
  v18 = v17 & 0x3FC0000 |
        ((unsigned int)CudaDriverRoutine_22c0d0(0x18000u) << 25) |
        v15 & 0x3FFFF;
  v19 = a3[20];
  a3[17] = v18;
  a3[20] =
      v19 & 0xFF01FFFF | ((CudaDriverRoutine_22c0d0(0x4000u) & 0x7F) << 17);
  v20 = CudaDriverStub_112e30(*(_QWORD*)(a1 + 96));
  CudaDriverRoutine_96f20(a1, a2, v20, 0, (__int64)v53_.v53, (__int64)v52);
  v21 = *(unsigned int**)(a1 + 64);
  if (v21[944] != 0) {
    v22 = 1075;
    v23 = 0;
    do {
      while (1) {
        v24 = v53_.v53[v23];
        if (v24 != 0) {
          break;
        }
        a3[(unsigned int)(v23 + 640) >> 5] &= ~(1 << v23);
        v21 = *(unsigned int**)(a1 + 64);
        ++v23;
        v22 += 64;
        if (v23 >= v21[944]) {
          goto LABEL_6;
        }
      }
      v25 = ((v52[v23] + v21[946] - 1) / v21[946] * v21[946]) << 15;
      a3[(unsigned int)(v23 + 640) >> 5] |= 1 << v23;
      a3[v22 >> 5] = v25 & 0xFFF80000 | a3[v22 >> 5] & 0x7FFFF;
      a3[(v22 - 19) >> 5] =
          HIDWORD(v24) & 0x1FFFF | (a3[(v22 - 19) >> 5] >> 17 << 17);
      a3[(v22 - 51) >> 5] = v24;
      v21 = *(unsigned int**)(a1 + 64);
      ++v23;
      v22 += 64;
    } while (v23 < v21[944]);
  }
LABEL_6:
  a3[(v21[2927] + 640) >> 5] |= 1 << v21[2927];
  v26 =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1075) >>
      5;
  a3[v26] = a3[v26] & 0x7FFFF | 0xE000000;
  v27 =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1056) >>
      5;
  a3[v27] =
      ((unsigned __int64)(a4 + 2048) >> 32) & 0x1FFFF | (a3[v27] >> 17 << 17);
  a3[(unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1024) >>
     5] = a4 + 2048;
  *((_WORD*)a3 + 37) = 32;
  LANES128(v28).n128_u64[0] = *((_QWORD*)a3 + 1);
  PSEUDO_LOW_LANE64(v29, n64_u64, *(_QWORD*)(a3 + 4));
  a3[19] = 65537;
  LOBYTE(v27) = *((_BYTE*)a3 + 123);
  a3[29] =
      *(_DWORD*)(a1 + 1276) & 0xFFFFFF | (*((unsigned __int8*)a3 + 119) << 24);
  v30 = *(_DWORD*)(a1 + 1280) & 0xFFFFFF | ((unsigned __int8)v27 << 24);
  v31 = a3[11];
  a3[30] = v30;
  v33 = *a3;
  v32 = a3[1];
  *(_QWORD*)(a3 + 11) = v31 & 0xFFF74000 | 0x88000;
  *a3 = v33 & 0x80000000;
  a3[1] = v32 & 0x80000000 | 0xFFFFF;
  a3[16] = a3[16] & 0xFFFC0380 | 0x401F;
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vand_s8(v29, COERCE_AS(int8x8_t, 0xFE000000FFFFF2C0LL));
  LANES128(v34).n128_u64[0] = 0x8000000080000000LL;
  LANES128(v34).n128_u64[1] = 0x8000000080000000LL;
  LANES128(v34).n128_u64[0] = LANES128_OF(vandq_s8(v28, v34)).n128_u64[0];
  LANES128(v34).n128_u64[1] =
      LANES128_OF(vorrq_s8(v28, COERCE_AS(int8x16_t, CudaDriverData_1115760)))
          .n128_u64[1];
  LANES128(v28).n128_u64[0] = *(_QWORD*)(a3 + 13);
  *(int8x16_t*)(a3 + 2) = v34;
  *(int8x8_t*)(a3 + 13) =
      vand_s8(COERCE_AS(int8x8_t, LANES128(v28).n128_u64[0]),
              COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL));
  v35 = CudaDriverRoutine_98340(a1);
  v36 = v51;
  v37 = v35;
  v38 = CudaDriverRoutine_23bfe0(v35);
  v39 = CudaDriverRoutine_239ba0(v37);
  v40 = v39;
  v41 = HIDWORD(v39);
  v42 = CudaDriverRoutine_15fd0(a2);
  PSEUDO_LOW_LANE128(v43, n128_u64, v53_.v56);
  v44 = v42;
  v45 = LANES128(v53_.v54).n128_u64[0];
  v49 = vextq_s8(v53_.v54, v53_.v55, 8u);
  v50 = *(_OWORD*)v53_.v53;
  v48 = vextq_s8(v53_.v55, v43, 8u);
  v46 = CudaDriverStub_1db800(*(_QWORD*)(v37 + 2232));
  *((_QWORD*)a3 + 259) = v38;
  a3[520] = v40;
  a3[521] = v41;
  a3[522] = v44;
  a3[523] = 0;
  *((_QWORD*)a3 + 263) = a4;
  *((_QWORD*)a3 + 290) = 0;
  *((_QWORD*)a3 + 291) = v45;
  *((_QWORD*)a3 + 292) = 0;
  *((_QWORD*)a3 + 293) = v46;
  *((_QWORD*)a3 + 1036) = v36;
  *((_QWORD*)a3 + 1039) = 0;
  *((_QWORD*)a3 + 258) = 0x100000001LL;
  *((int8x16_t*)a3 + 133) = v49;
  *((int8x16_t*)a3 + 134) = v48;
  *((_QWORD*)a3 + 262) = -4;
  *((_OWORD*)a3 + 132) = v50;
  *((_OWORD*)a3 + 128) = CudaDriverData_1115550;
  *(_OWORD*)(a3 + 2074) = (__typeof__(*(_OWORD*)(a3 + 2074))){0};
  *((_OWORD*)a3 + 135) = (__typeof__(*((_OWORD*)a3 + 135))){0};
  *((_OWORD*)a3 + 136) = (__typeof__(*((_OWORD*)a3 + 136))){0};
  *((_OWORD*)a3 + 137) = (__typeof__(*((_OWORD*)a3 + 137))){0};
  *((_OWORD*)a3 + 138) = (__typeof__(*((_OWORD*)a3 + 138))){0};
  *((_OWORD*)a3 + 139) = (__typeof__(*((_OWORD*)a3 + 139))){0};
  *((_OWORD*)a3 + 140) = (__typeof__(*((_OWORD*)a3 + 140))){0};
  *((_OWORD*)a3 + 141) = (__typeof__(*((_OWORD*)a3 + 141))){0};
  *((_OWORD*)a3 + 142) = (__typeof__(*((_OWORD*)a3 + 142))){0};
  *((_OWORD*)a3 + 143) = (__typeof__(*((_OWORD*)a3 + 143))){0};
  *((_OWORD*)a3 + 144) = (__typeof__(*((_OWORD*)a3 + 144))){0};
  *((_OWORD*)a3 + 149) = (__typeof__(*((_OWORD*)a3 + 149))){0};
  *((_OWORD*)a3 + 148) = (__typeof__(*((_OWORD*)a3 + 148))){0};
  *((_OWORD*)a3 + 147) = (__typeof__(*((_OWORD*)a3 + 147))){0};
  *((_QWORD*)a3 + 136) = a4 + 2048;
  return *(long double*)&CudaDriverData_1115550;
}

_DWORD* cuda_driver_239740(__int64 a1, _DWORD** a2, __int64 a3)
{
  _DWORD* v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  int v15;
  int v16;
  unsigned __int64 v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  unsigned int* v26;
  unsigned __int64 v27;
  unsigned int v28;
  unsigned __int64 i;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned __int8 v37;
  int v38;
  unsigned __int8 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  _DWORD* result;
  __int64 (*v47)(_DWORD*, __int64, _QWORD, _QWORD*, __int64, __int64);
  __int64 v48;
  _DWORD* v49;
  struct {
    _QWORD v50[2];
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
  } v50_;
  __int64 v66;
  _DWORD v67[8];
  _QWORD v68[10];

  v3 = *a2;
  memset(v67, 0, sizeof(v67));
  memset(v68, 0, 64);
  v7 = *(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072);
  v66 = 0;
  v8 = *(_QWORD*)(v7 + 392);
  v9 = *(_QWORD*)(a3 + 136);
  *(_OWORD*)v50_.v50 = (__typeof__(*(_OWORD*)v50_.v50)){0};
  v50_.v51 = (__typeof__(v50_.v51)){0};
  v50_.v52 = (__typeof__(v50_.v52)){0};
  v50_.v53 = (__typeof__(v50_.v53)){0};
  v10 = *(_QWORD*)(v9 + 192);
  v11 = *(_QWORD*)(a1 + 64);
  v50_.v54 = (__typeof__(v50_.v54)){0};
  v50_.v55 = (__typeof__(v50_.v55)){0};
  v12 = *(unsigned int*)(v11 + 11708);
  v50_.v56 = (__typeof__(v50_.v56)){0};
  v50_.v57 = (__typeof__(v50_.v57)){0};
  v50_.v58 = (__typeof__(v50_.v58)){0};
  v50_.v59 = (__typeof__(v50_.v59)){0};
  v50_.v60 = (__typeof__(v50_.v60)){0};
  v50_.v61 = (__typeof__(v50_.v61)){0};
  v13 = *(_QWORD*)(a3 + 8 * v12 + 40);
  v50_.v62 = (__typeof__(v50_.v62)){0};
  v50_.v63 = (__typeof__(v50_.v63)){0};
  v50_.v64 = (__typeof__(v50_.v64)){0};
  v50_.v65 = (__typeof__(v50_.v65)){0};
  *(_QWORD*)&v50_.v51 = 0x3C00000000001000LL;
  CudaDriverRoutine_bbd70(v8, &v66);
  DWORD2(v50_.v55) = 0;
  DWORD2(v50_.v54) = 34;
  *(_QWORD*)&v50_.v62 = v66 & 0x1FFFFFFFFFFFFLL;
  DWORD3(v50_.v52) = 1141047296;
  v14 = *(_DWORD**)(a1 + 64);
  DWORD1(v50_.v57) = 0x8000000;
  v15 = v14[791];
  v16 = v14[790];
  v17 = (unsigned int)v14[972];
  v18 = (v15 << 24) + (v16 << 28);
  v19 = *(_DWORD*)(v8 + 392);
  DWORD3(v50_.v57) = v18;
  v20 = (v19 & 0x1FF) << 8;
  v21 = ((unsigned __int64)(unsigned int)(v17 - 1) + 8448) / v17 * v17;
  v22 = (CudaDriverRoutine_22c0d0(0x4000u) & 0x7F) << 18;
  DWORD1(v50_.v54) = v22 & 0x3FC0000 |
                     ((unsigned int)CudaDriverRoutine_22c0d0(0x18000u) << 25) |
                     v21 & 0x3FFFF;
  v23 = v20 & 0x1FFFF | ((CudaDriverRoutine_22c0d0(0x4000u) & 0x7F) << 17);
  v24 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)&v50_.v55 = v23;
  v25 = CudaDriverStub_112e30(v24);
  CudaDriverRoutine_96f20(a1, v8, v25, 0, (__int64)v68, (__int64)v67);
  v26 = *(unsigned int**)(a1 + 64);
  v27 = v26[944];
  if ((_DWORD)v27 != 0) {
    v28 = 1075;
    for (i = 0; i < v27; ++i) {
      while (1) {
        v30 = v68[i];
        if (v30 != 0) {
          break;
        }
        *((_DWORD*)v50_.v50 + ((unsigned int)(i + 640) >> 5)) &= ~(1 << i);
        ++i;
        v28 += 64;
        if (i >= v27) {
          goto LABEL_6;
        }
      }
      v31 = ((v67[i] + v26[946] - 1) / v26[946] * v26[946]) << 15;
      *((_DWORD*)v50_.v50 + ((unsigned int)(i + 640) >> 5)) |= 1 << i;
      *((_DWORD*)v50_.v50 + (v28 >> 5)) =
          v31 & 0xFFF80000 | *((_DWORD*)v50_.v50 + (v28 >> 5)) & 0x7FFFF;
      *((_DWORD*)v50_.v50 + ((v28 - 19) >> 5)) =
          HIDWORD(v30) & 0x1FFFF |
          (*((_DWORD*)v50_.v50 + ((v28 - 19) >> 5)) >> 17 << 17);
      *((_DWORD*)v50_.v50 + ((v28 - 51) >> 5)) = v30;
      v28 += 64;
    }
  }
LABEL_6:
  v32 = v26[2927];
  v33 = v32 + 640;
  v34 = 1 << v32;
  v32 <<= 6;
  *((_DWORD*)v50_.v50 + (v33 >> 5)) |= v34;
  *((_DWORD*)v50_.v50 + ((v32 + 1075) >> 5)) =
      *((_DWORD*)v50_.v50 + ((v32 + 1075) >> 5)) & 0x7FFFF | 0xE000000;
  v35 = (v32 + 1056) >> 5;
  v36 = *((_DWORD*)v50_.v50 + v35);
  *((_DWORD*)v50_.v50 + ((v32 + 1024) >> 5)) = v13;
  *((_DWORD*)v50_.v50 + v35) = HIDWORD(v13) & 0x1FFFF | (v36 >> 17 << 17);
  WORD5(v50_.v54) = 1;
  DWORD3(v50_.v54) = 65537;
  v37 = BYTE7(v50_.v57);
  v38 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1276) & 0xFFFFFF | (v37 << 24);
  v39 = BYTE11(v50_.v57);
  DWORD1(v50_.v57) = v38;
  v40 = CudaDriverRoutine_98340(a1);
  v41 = v50_.v51;
  DWORD2(v50_.v57) = *(_DWORD*)(v40 + 1280) & 0xFFFFFF | (v39 << 24);
  v42 = CudaDriverStub_1223e0(*(_QWORD*)(v10 + 24));
  v43 = v50_.v56;
  v44 = v42;
  v45 = CudaDriverStub_8e230(v10);
  DWORD3(v50_.v55) = v44;
  LODWORD(v50_.v53) = 1;
  LODWORD(v50_.v56) = v43 & 0x7B8FFF00 | 0x84000000 | BYTE4(v44);
  DWORD1(v50_.v56) = v45;
  LODWORD(v50_.v51) = v41 & 0xFFFFF2C0 | 0x400;
  *(_QWORD*)((char*)&v50_.v53 + 4) =
      LANES64_OF(vand_s8(*(int8x8_t*)((char*)&v50_.v53 + 4),
                         COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL)))
          .n64_u64[0] |
      0x100000001LL;
  if (*(_BYTE*)(*(_QWORD*)(CudaDriverRoutine_98340(a1) + 16104) + 3096LL) !=
          0 &&
      *(_BYTE*)(a3 + 196) != 0) {
    result =
        CudaDriverRoutine_241910(v3, *(_QWORD*)(v10 + 8), (__int64)v50_.v50);
  }
  else {
    v47 = *(__int64 (**)(_DWORD*, __int64, _QWORD, _QWORD*, __int64, __int64))(
        *(_QWORD*)(a1 + 64) + 19248LL);
    v48 = CudaDriverRoutine_98340(a1);
    v49 = (_DWORD*)v47(v3, v48, *(_QWORD*)(v10 + 8), v50_.v50, 256, 2);
    result = CudaDriverRoutine_241990(v49, *(_QWORD*)(v10 + 8), 1);
  }
  *a2 = result;
  return result;
}

__int64 cuda_driver_239e40(__int64 a1, unsigned int* a2, unsigned __int64* a3,
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

__int64 cuda_driver_239f80(__int64 a1, int a2, int a3, unsigned int* a4,
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

__int64 cuda_driver_23b0b0(__int64 a1)
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
    v8 = 98;
  }
  else {
    v8 = 81;
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

__int64 cuda_driver_23be80(__int64 result, unsigned __int64 a2, unsigned int a3)
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

__int64 cuda_driver_23c020(__int64 a1)
{
  __int64 result;

  result = 67108288;
  if (*(_QWORD*)((char*)((_UNKNOWN*)0x1550LL) +
                 (_QWORD)CudaDriverData_1422118) != 0 &&
      *(_BYTE*)(*(_QWORD*)(a1 + 80) + 57LL) == 0) {
    return *(_QWORD*)((char*)((_UNKNOWN*)0x1528LL) +
                      (_QWORD)CudaDriverData_1422118) +
           16776640LL;
  }
  return result;
}

__int64 cuda_driver_23cce0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int64x2_t v4;
  unsigned int v5;
  int v6;
  void* v7;
  __int16 v8;
  int v9;
  int v10;
  int v11;
  char v12;
  int v13;
  __int64 (*v15)();

  *(_BYTE*)(a1 + 3744) = 0;
  *(_DWORD*)(a1 + 4120) = 0;
  v2 = a1 + 3384;
  v3 = a1 + 16836;
  *(_DWORD*)(a1 + 3736) = 2;
  *(_DWORD*)(a1 + 14764) = 2;
  *(_DWORD*)(a1 + 16836) = 0;
  *(_WORD*)(a1 + 17013) = 0;
  *(_OWORD*)(a1 + 3756) = CudaDriverData_1115480;
  *(_OWORD*)(a1 + 3788) = CudaDriverData_1115800;
  *(_OWORD*)(a1 + 3772) = CudaDriverData_1115f70;
  *(_OWORD*)(a1 + 3804) = CudaDriverData_11158f0;
  *(_OWORD*)(a1 + 3820) = CudaDriverData_1115810;
  *(_OWORD*)(a1 + 3836) = CudaDriverData_11156d0;
  *(_OWORD*)(a1 + 3852) = CudaDriverData_1115620;
  *(_OWORD*)(a1 + 3868) = CudaDriverData_1115570;
  *(_QWORD*)(a1 + 4152) = cuda_driver_misc_helpers_18000;
  *(_OWORD*)(a1 + 3884) = CudaDriverData_1115540;
  *(_OWORD*)(a1 + 3900) = CudaDriverData_1115c80;
  *(_OWORD*)(a1 + 3916) = CudaDriverData_1115b20;
  *(_OWORD*)(a1 + 3932) = CudaDriverData_1115710;
  *(_OWORD*)(a1 + 3948) = CudaDriverData_1115400;
  *(_OWORD*)(a1 + 3964) = CudaDriverData_1115980;
  *(_OWORD*)(a1 + 3980) = CudaDriverData_1116240;
  *(_OWORD*)(a1 + 4076) = CudaDriverData_11158c0;
  *(_OWORD*)(a1 + 3996) = CudaDriverData_1115460;
  *(_OWORD*)(a1 + 4012) = CudaDriverData_1116250;
  *(_OWORD*)(a1 + 4028) = CudaDriverData_11154b0;
  *(_DWORD*)(a1 + 4108) = 0x7FFFFFFF;
  *(_OWORD*)(a1 + 4044) = CudaDriverData_1115470;
  *(_OWORD*)(a1 + 4092) = CudaDriverData_1115990;
  *(_OWORD*)(a1 + 4132) = CudaDriverData_1115bb0;
  *(_QWORD*)(a1 + 17128) = 0x1000000;
  *(_OWORD*)(a1 + 4060) = CudaDriverData_11152b0;
  *(_QWORD*)(a1 + 4164) = 0x400010000LL;
  *(_QWORD*)(a1 + 4288) = 0x10000000000LL;
  *(_QWORD*)(a1 + 17120) = 16;
  *(_DWORD*)(a1 + 17016) = 16;
  *(_OWORD*)(a1 + 4192) = CudaDriverData_1116060;
  v4 = vdupq_n_s64(0x1000000u);
  *(int64x2_t*)(a1 + 17136) = v4;
  *(int64x2_t*)(a1 + 17152) = v4;
  *(_QWORD*)(a1 + 4224) = 128;
  *(_DWORD*)(a1 + 3400) = 50017;
  *(_OWORD*)(a1 + 3384) = CudaDriverData_11160f0;
  *(_DWORD*)(a1 + 14472) = 7;
  *(_WORD*)(a1 + 17080) = 257;
  *(_QWORD*)(a1 + 3408) = 0x100000000008CLL;
  *(_OWORD*)(a1 + 3428) = CudaDriverData_1115900;
  *(_QWORD*)(a1 + 3444) = 0x400000002LL;
  *(_QWORD*)(a1 + 3456) = 0x8000000020LL;
  *(_OWORD*)(a1 + 11732) = CudaDriverData_1115a00;
  *(_OWORD*)(a1 + 11748) = CudaDriverData_1116270;
  *(_OWORD*)(a1 + 11764) = CudaDriverData_1116100;
  *(_OWORD*)(a1 + 11780) = CudaDriverData_1115610;
  v5 = *(_DWORD*)(a1 + 16976) & 0xFFFFFFFE;
  *(_OWORD*)(a1 + 11700) = CudaDriverData_1115cc0;
  *(_OWORD*)(a1 + 11716) = CudaDriverData_1115360;
  v6 = v5 | 0x380C;
  *(_DWORD*)(a1 + 16976) = v6;
  *(_BYTE*)(a1 + 16856) |= 1u;
  *(_OWORD*)(a1 + 4368) = CudaDriverData_11162d0;
  *(_BYTE*)(a1 + 16840) = 1;
  *(_BYTE*)(a1 + 16996) = *(_BYTE*)(a1 + 16996) & 0xF9 | 2;
  *(_QWORD*)(a1 + 17000) = 1;
  *(_QWORD*)(a1 + 17024) = 0x2000000040LL;
  v7 = CudaDriverData_1422118;
  if ((*(_WORD*)((_BYTE*)((_UNKNOWN*)0x1870LL) +
                 (_QWORD)CudaDriverData_1422118) &
       1) != 0 &&
      *(_DWORD*)(a1 + 21864) != 4) {
    v8 = *(_WORD*)(a1 + 16848);
  }
  else {
    v8 = *(_WORD*)(a1 + 16848) | 8;
  }
  *(_BYTE*)(a1 + 17044) = 0;
  *(_BYTE*)(a1 + 17082) = 0;
  *(_WORD*)(a1 + 17060) = 0;
  *(_WORD*)(a1 + 16848) = v8 | 0x10;
  *(_DWORD*)(a1 + 17056) = 0;
  *(_DWORD*)(a1 + 17020) = 2;
  *(_BYTE*)(a1 + 17062) = 1;
  *(_DWORD*)(a1 + 17072) = 2048;
  *(_DWORD*)(a1 + 17064) = 24;
  *(_WORD*)(a1 + 17098) = 257;
  *(_DWORD*)(a1 + 16976) = v6 & 0xFFFFBC0E | 0x4370;
  *(_QWORD*)(a1 + 17036) = 0x2000000000LL;
  *(_QWORD*)(a1 + 17104) = CudaDriverRoutine_270;
  v9 = *(_DWORD*)((char*)&CudaDriverRoutine_4464 + (_QWORD)v7);
  *(_BYTE*)(a1 + 17332) = 1;
  *(_DWORD*)(a1 + 17112) = v9;
  LOBYTE(v9) = *(_BYTE*)(a1 + 17272);
  *(_OWORD*)(a1 + 17168) = CudaDriverData_11154e0;
  *(_BYTE*)(a1 + 17272) = v9 & 0xFD;
  LOBYTE(v9) = *(_BYTE*)(a1 + 17280);
  *(_OWORD*)(a1 + 17184) = CudaDriverData_11162e0;
  *(_BYTE*)(a1 + 17280) = v9 & 0xFE;
  *(_WORD*)(a1 + 17281) = 514;
  *(_QWORD*)(a1 + 17320) = 48;
  *(_DWORD*)(a1 + 14844) = CudaDriverRoutine_23c4c0((_DWORD*)a1, 0);
  *(_DWORD*)(a1 + 14848) = CudaDriverRoutine_23c4c0((_DWORD*)a1, 1);
  *(_DWORD*)(a1 + 14852) = CudaDriverRoutine_23c4c0((_DWORD*)a1, 2);
  v10 = CudaDriverRoutine_23c4c0((_DWORD*)a1, 3);
  v11 = *(_DWORD*)(a1 + 3148);
  *(_DWORD*)(a1 + 14856) = v10;
  if (v11 == 35) {
    *(_DWORD*)(a1 + 4172) = 2;
    *(_BYTE*)(v3 + 208) = 1;
    *(_DWORD*)(a1 + 4180) = 8;
    *(_DWORD*)(a1 + 3384) = 50112;
    *(_DWORD*)(v3 + 212) = 16;
    v13 = *(_DWORD*)(a1 + 3736);
    *(_DWORD*)(a1 + 3392) = 50031;
    *(_DWORD*)(a1 + 3724) = 42;
    *(_DWORD*)(a1 + 3732) = 42 * v13;
    *(_DWORD*)(a1 + 3504) = 7;
    *(_OWORD*)(v2 + 96) = CudaDriverData_1115750;
    *(_QWORD*)(a1 + 3496) = 0x700000007LL;
  LABEL_11:
    *(_DWORD*)(a1 + 14752) = 0x200000;
    *(_QWORD*)(a1 + 4280) = 0x2000000000000LL;
    v15 = CudaDriverData_14252e8[0];
    *(_BYTE*)(v3 + 492) = 0;
    *(_QWORD*)(a1 + 18360) = v15;
    *(_QWORD*)(a1 + 3540) = 0;
    *(_OWORD*)(a1 + 3508) = (__typeof__(*(_OWORD*)(a1 + 3508))){0};
    *(_OWORD*)(a1 + 3524) = (__typeof__(*(_OWORD*)(a1 + 3524))){0};
    *(_DWORD*)(v3 + 140) |= 0x18000u;
    *(_BYTE*)(v3 + 152) |= 0x18u;
    return 0;
  }
  if (v11 == 36) {
    *(_DWORD*)v3 = 1;
    *(_DWORD*)(a1 + 3480) = 1;
    *(_DWORD*)(a1 + 3724) = 4;
    *(_DWORD*)(a1 + 4180) = 1;
    *(_DWORD*)(a1 + 4224) = 16;
    *(_QWORD*)(a1 + 4168) = 0x200000002LL;
    if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)v7 + 2) == 0) {
      *(_DWORD*)(a1 + 3760) = 0x8000;
    }
    *(_DWORD*)(a1 + 14472) = 1;
    *(_DWORD*)(a1 + 3440) = 4;
    *(_DWORD*)(a1 + 3484) = 4;
    *(_DWORD*)(a1 + 3504) = 0;
    *(_DWORD*)(a1 + 3448) = 2;
    v12 = *(_BYTE*)(v3 + 5) | 1;
    *(_OWORD*)(a1 + 3488) = (__typeof__(*(_OWORD*)(a1 + 3488))){0};
    *(_BYTE*)(v3 + 5) = v12;
    *(_DWORD*)(v3 + 236) = 1000;
    *(_DWORD*)(a1 + 3732) = 4 * *(_DWORD*)(a1 + 3736);
    goto LABEL_11;
  }
  return 100;
}

__int64 cuda_driver_23fc80(__int64 a1, double* a2)
{

#pragma clang fp contract(off)
  __int64 result;
  unsigned __int64 v5;
  void* v6;
  unsigned __int64 v7;
  __int64 v8;
  bool v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _DWORD* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  unsigned int v23;
  __int128 v24;
  __int64 v25;
  _BYTE v26[4];
  int v27;

  v26[0] = 0;
  *(_OWORD*)(a1 + 15992) = CudaDriverData_1115f30;
  result = CudaDriverRoutine_9ab30(*(_QWORD*)(a1 + 64), v26);
  if ((_DWORD)result != 0) {
    return result;
  }
  v5 = 512;
  if (v26[0] == 0) {
    v5 = 1024;
  }
  *(_QWORD*)(a1 + 16008) = v5;
  v6 = CudaDriverData_1422118;
  if (*((_BYTE*)&CudaDriverRoutine_7458 + (_QWORD)CudaDriverData_1422118) !=
      0) {
    v7 = vcvtmd_u64_f64(*(double*)((char*)&CudaDriverRoutine_7460 +
                                   (_QWORD)CudaDriverData_1422118) *
                        0x1.0000000000000p+5);
    if (v5 >= v7) {
      v5 = v7;
    }
    *(_QWORD*)(a1 + 16008) = v5;
  }
  v8 = *(_QWORD*)(a1 + 64);
  *(_DWORD*)(a1 + 1312) = 0;
  v9 = false;
  *(_QWORD*)(a1 + 16016) = 0x800000;
  *(_QWORD*)(a1 + 16048) = 64;
  *(_OWORD*)(a1 + 16032) = CudaDriverData_1115da0;
  v10 = (*(_DWORD*)(v8 + 3756) * *(_DWORD*)(v8 + 3732)) << 10;
  if (v10 <= 0x100000) {
    v11 = 0x100000;
  }
  else {
    v11 = v10;
  }
  *(_QWORD*)(a1 + 16024) = v11;
  if (*(_DWORD*)(v8 + 14744) == 0) {
    v9 = (*(_WORD*)(v8 + 16848) & 0x800) == 0;
  }
  *(_BYTE*)(a1 + 16316) = *(_BYTE*)(a1 + 16316) & 0xFE | v9;
  v12 = CudaDriverStub_12e330(3112);
  if (v12 == 0) {
    result = 2;
  LABEL_21:
    v21 = *(__int64**)(a1 + 16104);
    if (v21 == nullptr) {
      return result;
    }
    goto LABEL_24;
  }
  v13 = v12;
  memset_plt(v12, 0, 3112);
  v14 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 16104) = v13;
  v15 = CudaDriverStub_12e330(*(unsigned int*)(v14 + 3808));
  *(_QWORD*)v13 = v15;
  if (v15 != 0) {
    v16 = *(_DWORD**)(a1 + 64);
    v25 = 0;
    v17 = (unsigned int)(16 * v16[939] * v16[981] * v16[933]);
    CudaDriverRoutine_ee010((unsigned __int64*)&v24, 0);
    *(_QWORD*)&v24 = v24 & 0xFFFFFFF883FFFFFFLL | 0x11C000000LL;
    result = CudaDriverRoutine_ee030(a1, v17, &v25, &v24);
    if ((_DWORD)result == 0) {
      *(_QWORD*)(v13 + 8) = v25;
      *(_QWORD*)(v13 + 16) = v17;
      *(_BYTE*)(v13 + 3096) = *(_BYTE*)(*(_QWORD*)(a1 + 64) + 17332LL);
      v18 = CudaDriverRoutine_633b0(*(_DWORD**)(a1 + 64), a2);
      v19 = *(_QWORD*)(a1 + 64);
      *(_DWORD*)(a1 + 160) = v18;
      *(_DWORD*)(a1 + 164) = *(_DWORD*)(v19 + 3736) * v18;
      if (*((_BYTE*)&CudaDriverRoutine_43c8 + (_QWORD)v6) != 0) {
        LODWORD(v24) = 4294824;
        LODWORD(v25) = -1073741824;
        v27 = -1073741824;
        v20 = CudaDriverRoutine_98340(a1);
        if ((unsigned int)CudaDriverRoutine_110820(v20, 2, 1, (__int64)&v24,
                                                   (__int64)&v25, (__int64)&v27,
                                                   0) != 0) {
          puts_plt(
              "cuiPriRegWriteMasked32 failed to disable membar optimization");
        }
      }
      return 0;
    }
    goto LABEL_21;
  }
  result = 2;
  v21 = *(__int64**)(a1 + 16104);
  if (v21 == nullptr) {
    return result;
  }
LABEL_24:
  v22 = v21[1];
  v23 = result;
  if (v22 != 0) {
    CudaDriverRoutine_ee2a0(a1, v22);
  }
  if (*v21 != 0) {
    CudaDriverRoutine_12e340(*v21);
  }
  memset_plt(v21, 0, 3112);
  CudaDriverRoutine_12e340((__int64)v21);
  *(_QWORD*)(a1 + 16104) = 0;
  return v23;
}

__int64 cuda_driver_240040(int* a1)
{
  return cuda_driver_194b20(
      a1, *((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118));
}

double cuda_driver_2400f0(__int64 a1, __int64 a2, char a3)
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
  *(_DWORD*)(a1 + 4) = HIDWORD(v5) & 0x1FFFF;
  *(_QWORD*)(a1 + 12) = 0x200180C000000000LL;
  return 0x1.180c000000000p-511;
}

__int64 cuda_driver_240a60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  bool v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  bool v27;
  unsigned int v28;
  void* v29;
  char v30;
  int v31;
  char v32;
  unsigned int v33;
  unsigned __int16 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned int v42;
  unsigned __int8 v43;
  int v44;
  unsigned __int8 v45;
  int v46;
  int v47;
  unsigned __int8 v48;
  int v49;
  unsigned int v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v55;
  unsigned int v56;
  __int64 v57;
  int v58;
  int v59;
  unsigned int v60;
  __int64 v61;

  v3 = *(_QWORD*)(a3 + 8);
  v4 = *(_QWORD*)(a3 + 16);
  v61 = 0;
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
    if (CudaDriverStub_b9300(a2)) {
      memset_plt(*(_QWORD*)(a3 + 16), 0, 2048);
    }
  }
  if (*(_BYTE*)(a3 + 198) != 0) {
    *(_DWORD*)(v3 + 16) |= 0x1000u;
  }
  v8 = *(_DWORD*)(v3 + 20) & 0x83FFFFFF | 0x3C000000;
  v9 = *(_DWORD*)(v3 + 20) & 0x3FFFFFF | 0xBC000000;
  *(_DWORD*)(v3 + 20) = v8;
  v10 = v8 & 0x3FFFFFFF;
  if (*(_BYTE*)(a3 + 207) == 0) {
    v9 = v10;
  }
  *(_DWORD*)(v3 + 20) = v9;
  if (*(_BYTE*)(a3 + 206) == 0) {
    v11 = *(_DWORD*)(v3 + 44);
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 64) + 17097LL) & 1) != 0) {
      *(_DWORD*)(v3 + 44) = v11 | 0x34000;
      if (!CudaDriverRoutine_bbe30(a2)) {
        goto LABEL_69;
      }
    }
    else {
      *(_DWORD*)(v3 + 44) = v11 & 0xFFFCBFFF | 0x10000;
      if (!CudaDriverRoutine_bbe30(a2)) {
        goto LABEL_69;
      }
    }
  LABEL_13:
    v12 = CudaDriverRoutine_98340(a1);
    v13 = *(_DWORD*)(v3 + 196);
    *(_DWORD*)(v3 + 192) = *(_QWORD*)(v12 + 2392);
    v14 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2396);
  LABEL_14:
    *(_DWORD*)(v3 + 196) = v13 & 0xFFFE0000 | v14 & 0x1FFFF;
    goto LABEL_15;
  }
  *(_DWORD*)(v3 + 44) = *(_DWORD*)(v3 + 44) & 0xFFFCBFFF | 0x30000;
  if (CudaDriverRoutine_bbe30(a2)) {
    goto LABEL_13;
  }
LABEL_69:
  if ((*(_WORD*)(a2 + 977) & 8) != 0) {
    CudaDriverRoutine_928b0(a2, &v60, &v59);
    v56 = *(_DWORD*)(v3 + 196) & 0xFFFE0000 | v59 & 0x1FFFF;
    *(_DWORD*)(v3 + 192) = v60;
    *(_DWORD*)(v3 + 196) = v56;
  }
  else {
    if (*(_BYTE*)(a3 + 204) != 0 && *(_BYTE*)(a3 + 205) != 0) {
      CudaDriverRoutine_98340(a1);
      v55 = CudaDriverRoutine_98340(a1);
      v13 = *(_DWORD*)(v3 + 196);
      *(_DWORD*)(v3 + 192) = *(_QWORD*)(v55 + 2408);
      v14 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2412);
      goto LABEL_14;
    }
    if (*(_DWORD*)(a2 + 404) != 0) {
      v57 = CudaDriverRoutine_98340(a1);
      v13 = *(_DWORD*)(v3 + 196);
      *(_DWORD*)(v3 + 192) = *(_QWORD*)(v57 + 2424);
      v14 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2428);
      goto LABEL_14;
    }
    CudaDriverRoutine_bbd70(a2, &v61);
    v58 = HIDWORD(v61) & 0x1FFFF | (*(_DWORD*)(v3 + 196) >> 17 << 17);
    *(_DWORD*)(v3 + 192) = v61;
    *(_DWORD*)(v3 + 196) = v58;
  }
LABEL_15:
  v15 = *(_DWORD*)(v3 + 44);
  *(_DWORD*)(v3 + 44) = v15 | 0x4000000;
  v16 = *(_DWORD*)(*(_QWORD*)(a2 + 32) + 276LL);
  if (v16 != 0) {
    if (v16 == 2) {
      v17 = v15 & 0xBBFFFFFF | 0x4000000;
    }
    else {
      if (v16 != 1) {
        return 0;
      }
      v17 = v15 | 0x44000000;
    }
    *(_DWORD*)(v3 + 44) = v17;
  }
  v18 = *(_DWORD*)(v3 + 608);
  v19 = *(_DWORD*)(v3 + 612);
  v20 = *(_DWORD*)(v3 + 616);
  v21 = *(_DWORD*)(v3 + 620);
  *(_DWORD*)(v3 + 48) = *(_DWORD*)(a3 + 156);
  *(_WORD*)(v3 + 52) = *(_DWORD*)(a3 + 160);
  *(_WORD*)(v3 + 56) = *(_DWORD*)(a3 + 164);
  v22 = CudaDriverRoutine_bbdf0(a2);
  if (v18 <= 0x100) {
    v23 = 256;
  }
  else {
    v23 = v18;
  }
  if (v19 <= 0x2000) {
    v24 = 0x2000;
  }
  else {
    v24 = v19;
  }
  if (v21 <= 0x2000) {
    v25 = 0x2000;
  }
  else {
    v25 = v21;
  }
  if (v20 <= 0x2000) {
    v26 = 0x2000;
  }
  else {
    v26 = v20;
  }
  v27 = !v22;
  if (v22) {
    v20 = v26;
    v28 = v24;
  }
  else {
    v28 = v19;
  }
  if (v27) {
    v23 = v18;
  }
  else {
    v21 = v25;
  }
  v29 = CudaDriverData_1422118;
  if (v23 > *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3880LL)) {
    v23 = (v23 + 0x7FFF) & 0x38000;
  }
  if (*((_BYTE*)((_UNKNOWN*)0x1D40LL) + (_QWORD)CudaDriverData_1422118) != 0) {
    v23 = *(_DWORD*)((char*)((_UNKNOWN*)0x1D48LL) +
                     (_QWORD)CudaDriverData_1422118);
  }
  *(_DWORD*)(v3 + 68) = *(_DWORD*)(v3 + 68) & 0xFFFC0000 | v23 & 0x3FFFF;
  if (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)v29 + 3) == 0) {
    *(_DWORD*)(v3 + 68) = v23 & 0x3FFFF;
    v33 = *(_DWORD*)(v3 + 80) & 0xFF01FFFF;
    goto LABEL_51;
  }
  if (v28 == -1) {
    v30 = 0;
    if (v21 != -1) {
    LABEL_46:
      v31 = CudaDriverRoutine_22c0d0(v21);
      if (v20 != -1) {
        goto LABEL_47;
      }
    LABEL_76:
      v32 = 0;
      if (*((_BYTE*)((_UNKNOWN*)0x1D40LL) + (_QWORD)v29) == 0) {
        goto LABEL_49;
      }
      goto LABEL_48;
    }
  }
  else {
    v30 = CudaDriverRoutine_22c0d0(v28);
    if (v21 != -1) {
      goto LABEL_46;
    }
  }
  v31 = 0;
  if (v20 == -1) {
    goto LABEL_76;
  }
LABEL_47:
  v32 = CudaDriverRoutine_22c0d0(v20);
  if (*((_BYTE*)((_UNKNOWN*)0x1D40LL) + (_QWORD)v29) != 0) {
  LABEL_48:
    v60 = *(_DWORD*)((char*)((_UNKNOWN*)0x1D44LL) + (_QWORD)v29);
    CudaDriverRoutine_23c180(0, &v60);
    v30 = CudaDriverRoutine_22c0d0(v60);
    v31 = CudaDriverRoutine_22c0d0(v60);
    v32 = CudaDriverRoutine_22c0d0(v60);
  }
LABEL_49:
  *(_DWORD*)(v3 + 68) =
      *(_DWORD*)(v3 + 68) & 0x3FFFF | ((v30 & 0x7F) << 18) | (v31 << 25);
  v33 = *(_DWORD*)(v3 + 80) & 0xFF01FFFF | ((v32 & 0x7F) << 17);
LABEL_51:
  *(_DWORD*)(v3 + 80) = v33;
  *(_WORD*)(v3 + 74) = *(_WORD*)(a3 + 168);
  v34 = *(_DWORD*)(a3 + 172);
  *(_WORD*)(v3 + 76) = v34;
  *(_DWORD*)(v3 + 76) = v34 | ((unsigned __int16)*(_DWORD*)(a3 + 176) << 16);
  v35 = *(_QWORD*)(a1 + 64);
  if (*(_DWORD*)(v35 + 3776) != 0) {
    v36 = 1075;
    v37 = 640;
    v38 = 104;
    v39 = 40;
    do {
      v41 = (unsigned int)v37 >> 5;
      if (*(_QWORD*)(a3 + v39) != 0) {
        v42 =
            ((unsigned int)(*(_DWORD*)(a3 + v38) + *(_DWORD*)(v35 + 3784) - 1) /
             *(_DWORD*)(v35 + 3784) * *(_DWORD*)(v35 + 3784))
            << 15;
        *(_DWORD*)(v3 + 4 * v41) |= 1 << (v37 + 0x80);
        *(_DWORD*)(v3 + 4LL * (v36 >> 5)) =
            v42 & 0xFFF80000 | *(_DWORD*)(v3 + 4LL * (v36 >> 5)) & 0x7FFFF;
        *(_DWORD*)(v3 + 4LL * ((v36 - 19) >> 5)) =
            *(_DWORD*)(v3 + 4LL * ((v36 - 19) >> 5)) & 0xFFFE0000 |
            *(_DWORD*)(a3 + v39 + 4) & 0x1FFFF;
        *(_DWORD*)(v3 + 4LL * ((v36 - 51) >> 5)) = *(_QWORD*)(a3 + v39);
        if (CudaDriverRoutine_e7cb0(a1, a3, v37 - 640)) {
          *(_DWORD*)(v3 + 4LL * ((v36 - 1) >> 5)) |= 0x40000u;
        }
      }
      else {
        *(_DWORD*)(v3 + 4 * v41) &= ~(1 << (v37 + 0x80));
      }
      v35 = *(_QWORD*)(a1 + 64);
      v40 = v37 - 639;
      ++v37;
      v36 += 64;
      v38 += 4;
      v39 += 8;
    } while (v40 < *(unsigned int*)(v35 + 3776));
  }
  v43 = *(_BYTE*)(v3 + 119);
  v44 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1276) & 0xFFFFFF | (v43 << 24);
  v45 = *(_BYTE*)(v3 + 123);
  *(_DWORD*)(v3 + 116) = v44;
  v46 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1280) & 0xFFFFFF | (v45 << 24);
  v47 = *(_DWORD*)(v3 + 116);
  *(_DWORD*)(v3 + 120) = v46;
  v48 = CudaDriverRoutine_bc770(a2);
  v49 = *(_DWORD*)(v3 + 80);
  *(_DWORD*)(v3 + 116) = v47 & 0x7FFFFFF | (v48 << 27);
  v50 = v49 & 0xFFFE00FF;
  if (*(_DWORD*)(a2 + 392) != 0) {
    v51 = (*(_DWORD*)(a2 + 392) & 0x1FF) << 8;
  }
  else {
    v51 = 768;
  }
  *(_DWORD*)(v3 + 80) = v51 | v50;
  if (*(_BYTE*)(a3 + 376) != 0) {
    *(_DWORD*)(v3 + 84) = *(_DWORD*)(a3 + 380);
    *(_DWORD*)(v3 + 88) = *(_DWORD*)(a3 + 384);
    if (CudaDriverRoutine_bbdf0(a2)) {
      *(_DWORD*)(v4 + 596) = *(_DWORD*)(a3 + 380);
      *(_DWORD*)(v4 + 600) = *(_DWORD*)(a3 + 384);
    }
  }
  v52 = *(_DWORD*)(v3 + 16);
  *(_DWORD*)(v3 + 16) = v52 | 0x40;
  if (*(_BYTE*)(a3 + 203) == 0) {
    *(_DWORD*)(v3 + 16) = v52 | 0x440;
    *(_DWORD*)(v3 + 96) |= 0x80000000;
  }
  *(_BYTE*)(v3 + 72) = 34;
  *(_BYTE*)(v3 + 127) =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3164LL) << 24) +
                     (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3160LL) << 28)) >>
      24;
  v53 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_92a90(v53, a2, a3);
  return 0;
}

int8x8_t cuda_driver_241cc0(__int64 a1, int8x8_t* a2, __int64 a3)
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

__int64 cuda_driver_241f70(__int64* a1, __int64 a2, __int64 a3, char a4)
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
  v10 = *(_BYTE*)(*(_QWORD*)(v8 + 16104) + 3096LL);
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

_DWORD* cuda_driver_242510(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
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
    a1[1] = HIDWORD(a4) & 0x1FFFF;
    a1[2] = a4;
    a1[3] = HIDWORD(a3) & 0x1FFFF;
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
      a1 = (_DWORD*)CudaDriverRoutine_23d4a0((__int64)a1, a7);
    }
    a3 += v15;
    a4 += v15;
    v14 -= v15;
  } while (v14 != 0);
  return a1;
}

__int64 cuda_driver_unplaced_13_2429c0(__int64* a1, __int64 a2, __int64 a3,
                                       __int64 a4, __int64 a5, __int64 a6,
                                       unsigned int a7)
{
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _DWORD* v12;
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
  int v47;
  int v48;
  __int64 v49;
  char v50;
  unsigned __int64 v51;
  char v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned int v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  _DWORD* v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  unsigned int v80;
  int v81;
  _DWORD* v82;
  unsigned __int64 v83;
  _DWORD* v84;
  int v85;
  unsigned int v86;
  unsigned int v87;
  unsigned int v88;
  int v89;
  _BOOL4 v90;
  int v91;
  __int64 v92;
  unsigned int v93;
  unsigned int v94;
  int v95;
  unsigned int v96;
  __int64 v97;
  unsigned __int64 v98;
  int v99;
  _DWORD* v100;
  __int64 v101;
  _DWORD* v102;
  int v103;
  unsigned int v104;
  unsigned int v105;
  int v106;
  _BOOL4 v107;
  int v108;
  __int64 v109;
  unsigned int v110;
  unsigned int v111;
  int v112;
  unsigned int v113;
  _DWORD* v114;
  int v115;
  unsigned int v116;
  int v117;
  int v118;
  int v119;
  unsigned __int64 v120;
  unsigned int v121;
  __int64 v122;
  _BOOL4 v123;
  _BOOL4 v124;
  _DWORD* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  _DWORD* v129;
  bool v130;
  bool v131;
  __int64 v132;
  _DWORD* v133;
  __int64 v134;
  unsigned __int64 v135;
  _BOOL4 v137;
  int v138;
  int v139;
  int v140;
  int v142;
  char v143;
  char v144;
  __int64 v145;
  __int64 v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  __int64 v150;
  unsigned __int64 v151;
  int v154;
  __int64 v155;
  unsigned __int64 v156;
  unsigned __int64 v157;
  unsigned __int64 v158;
  char v159;
  char v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  unsigned __int64 v168;
  unsigned int v169;
  unsigned int v170;
  __int64 v172;
  int v173;
  __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  struct {
    _DWORD* v179;
    __int64 v180;
    char gap264_[160];
    unsigned __int64 v181;
    unsigned __int64 v182;
    unsigned __int64 v183;
  } v179_;
  struct {
    int v184;
    char gap452_[4];
    __int64 v185;
    char gap464_[160];
    unsigned __int64 v186;
    unsigned __int64 v187;
    unsigned __int64 v188;
    unsigned int v189;
    char gap652_[4];
    unsigned __int64 v190;
    unsigned __int64 v191;
    int v192;
    int v193;
    int v194;
    int v195;
    char gap688_[8];
    int v196;
    int v197;
    unsigned __int8 v198;
    unsigned __int8 v199;
    unsigned __int8 v200;
    unsigned __int8 v201;
    char v202;
  } v184_;
  _DWORD* v203;

  if (*(_DWORD*)(a6 + 404) == 0 &&
      (*(_DWORD*)a6 == 0 ||
       (unsigned __int64)CudaDriverRoutine_f8f00((_DWORD*)a6) >> 31 == 0)) {
    v8 = (_DWORD*)(a6 + 200);
    if (*(_DWORD*)(a6 + 200) == 0 ||
        (unsigned __int64)CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) >> 31 ==
            0) {
      memcpy_plt((__int64)&v179_.v179, a6, 0x1D8u);
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
        v146 = CudaDriverRoutine_f8f00((_DWORD*)a6) * v10;
        v150 = -1;
        v164 = -1;
        if (*v8 != 0) {
        LABEL_54:
          v57 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200));
          if (CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200)) != 0) {
            v60 = CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200));
          }
          else {
            v60 = 1;
          }
          v61 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) * v60;
          v51 = 1;
          v53 = 1;
          v145 = v61;
          v149 = -1;
          v163 = -1;
          v59 = *(_QWORD*)(a6 + 416);
          if (v59 == 0) {
            return 0;
          }
          goto LABEL_58;
        }
      }
      else {
        v34 = *(_QWORD*)(a6 + 8);
        v35 = *(_DWORD*)(v34 + 44);
        v36 = *(_DWORD*)(v34 + 48);
        v37 = *(unsigned int*)(v34 + 52);
        v38 = v35 + *(_DWORD*)(v34 + 40);
        LOBYTE(v35) = v35 + 3;
        v39 = 1LL << v36;
        v40 = v38 + v36;
        v41 = 1LL << v35;
        v42 = 512LL << v40;
        v43 = *(_DWORD*)(v34 + 56);
        v44 = (0x4000000uLL >> v40) / (unsigned int)v37;
        v9 = v42 * v37;
        v164 = v44 << v35;
        if ((unsigned int)v44 < v43) {
          v45 = 1;
        }
        else {
          v45 = (unsigned int)v44 / v43;
        }
        v150 = v45 << v36;
        if (CudaDriverRoutine_86fe0(v34)) {
          v146 = *(_QWORD*)(v34 + 136);
          if (*v8 != 0) {
            goto LABEL_54;
          }
        }
        else {
          v146 = v9 * *(unsigned int*)(v34 + 56);
          if (*v8 != 0) {
            goto LABEL_54;
          }
        }
      }
      v46 = *(_QWORD*)(a6 + 208);
      v47 = *(_DWORD*)(v46 + 44);
      v48 = *(_DWORD*)(v46 + 48);
      v49 = *(unsigned int*)(v46 + 52);
      v50 = v47 + *(_DWORD*)(v46 + 40);
      LOBYTE(v47) = v47 + 3;
      v51 = 1LL << v48;
      v52 = v50 + v48;
      v53 = 1LL << v47;
      v54 = 512LL << v52;
      v55 = *(_DWORD*)(v46 + 56);
      v56 = (0x4000000uLL >> v52) / (unsigned int)v49;
      v57 = v54 * v49;
      v163 = v56 << v47;
      if ((unsigned int)v56 < v55) {
        v58 = 1;
      }
      else {
        v58 = (unsigned int)v56 / v55;
      }
      v149 = v58 << v48;
      if (CudaDriverRoutine_86fe0(v46)) {
        v145 = *(_QWORD*)(v46 + 136);
        v59 = *(_QWORD*)(a6 + 416);
        if (v59 == 0) {
          return 0;
        }
      }
      else {
        v145 = v57 * *(unsigned int*)(v46 + 56);
        v59 = *(_QWORD*)(a6 + 416);
        if (v59 == 0) {
          return 0;
        }
      }
    LABEL_58:
      v62 = *(_QWORD*)(a6 + 408);
      if (v62 == 0) {
        return 0;
      }
      v63 = 0;
      v161 = v57;
      v162 = v9;
      v143 = __clz(__rbit64(v51));
      v144 = __clz(__rbit64(v39));
      v147 = v51 - 1;
      v148 = v39 - 1;
      v159 = __clz(__rbit64(v53));
      v160 = __clz(__rbit64(v41));
      v157 = v53 - 1;
      v158 = v41 - 1;
      while (1) {
        v64 = *(_QWORD*)(a6 + 192) + v63;
        v65 = *(_QWORD*)(a6 + 392) + v63;
        v179_.v183 = v64 & v148;
        v66 = v150 - (v64 & v148);
        v184_.v188 = v65 & v147;
        if (v66 >= v149 - (v65 & v147)) {
          v66 = v149 - (v65 & v147);
        }
        if (v59 - v63 < v66) {
          v66 = v59 - v63;
        }
        v184_.v191 = v66;
        if (v62 != 0) {
          break;
        }
      LABEL_61:
        v63 += v66;
        if (v63 >= v59) {
          return 0;
        }
      }
      v151 = v63;
      v67 = 0;
      v166 = a5 + (v64 >> v144) * v146;
      v165 = a4 + (v65 >> v143) * v145;
      v68 = (_DWORD*)*a1;
      while (1) {
        v71 = *(_QWORD*)(a6 + 184);
        v72 = v62 - v67;
        v203 = v68;
        v73 = v71 + v67;
        v74 = *(_QWORD*)(a6 + 384) + v67;
        v179_.v182 = (v71 + v67) & v158;
        v75 = v164 - v179_.v182;
        v184_.v187 = v74 & v157;
        if (v164 - v179_.v182 >= v163 - (v74 & v157)) {
          v75 = v163 - (v74 & v157);
        }
        if (v72 >= v75) {
          v72 = v75;
        }
        v184_.v190 = v72;
        v173 = v184_.v201;
        if ((_DWORD)v179_.v179 != 0) {
          v76 = CudaDriverRoutine_f8f00(&v179_.v179);
          v175 = v67;
          v177 = CudaDriverRoutine_f8ed0(&v179_.v179) * v76;
          if (v184_.v184 != 0) {
            goto LABEL_76;
          }
        }
        else {
          v175 = v67;
          v177 = *(_QWORD*)(v179_.v180 + 136);
          if (v184_.v184 != 0) {
          LABEL_76:
            v77 = CudaDriverRoutine_f8f00(&v184_.v184);
            v78 = CudaDriverRoutine_f8ed0(&v184_.v184) * v77;
            v79 = v166 + (v73 >> v160) * v9;
            if ((_DWORD)v179_.v179 != 0) {
              goto LABEL_77;
            }
            goto LABEL_80;
          }
        }
        v78 = *(_QWORD*)(v184_.v185 + 136);
        v79 = v166 + (v73 >> v160) * v9;
        if ((_DWORD)v179_.v179 != 0) {
        LABEL_77:
          CudaDriverRoutine_f8f00(&v179_.v179);
          *v68 = 536969476;
          v80 = 1;
          v81 = CudaDriverRoutine_f8f00(&v179_.v179);
          v82 = v68;
          v83 = v79;
          goto LABEL_99;
        }
      LABEL_80:
        v84 = (_DWORD*)v179_.v180;
        if ((*(_BYTE*)(v179_.v180 + 32) & 0x40) != 0) {
          v85 = *(_DWORD*)(v179_.v180 + 52) << 6;
          v86 = v179_.v181;
          if (v184_.v201 != 0) {
          LABEL_82:
            v87 = *(_DWORD*)(v179_.v180 + 108);
            v85 = *(_DWORD*)(v179_.v180 + 12);
            v86 /= v87;
            goto LABEL_85;
          }
        }
        else {
          v85 = *(_DWORD*)(v179_.v180 + 112);
          v86 = v179_.v181;
          if (v184_.v201 != 0) {
            goto LABEL_82;
          }
        }
        v87 = 1;
      LABEL_85:
        v169 = v87;
        v88 = (unsigned int)(*(_DWORD*)(v179_.v180 + 16) +
                             *(_DWORD*)(v179_.v180 + 152) - 1) /
              *(_DWORD*)(v179_.v180 + 152);
        v89 = *(_BYTE*)(v179_.v180 + 40) & 0xF |
              (unsigned __int8)(16 * (*(_DWORD*)(v179_.v180 + 44) & 0xF)) |
              ((*(_DWORD*)(v179_.v180 + 48) & 0xF) << 8) | 0x1000;
        v90 = CudaDriverRoutine_86fe0(v179_.v180);
        if (v88 <= 1) {
          v91 = 1;
        }
        else {
          v91 = v88;
        }
        if (v90) {
          v68[2] = v85;
          v68[3] = v91;
          v92 = 6;
          v68[4] = 1;
          v68[5] = 0;
          *v68 = 537231818;
          v68[1] = v89;
          if (v179_.v181 >= 0x10000) {
            goto LABEL_90;
          }
        }
        else {
          v68[2] = v85;
          v68[3] = v91;
          v92 = 5;
          *v68 = 537166282;
          v68[1] = v89;
          v96 = v84[5];
          if (v96 <= 1) {
            v96 = 1;
          }
          v68[4] = v96;
          if (v179_.v181 >= 0x10000) {
          LABEL_90:
            if (v184_.v201 != 0) {
              v93 = v84[27];
              v86 *= v93;
              v94 = v86 & ~(-1 << (v84[10] + 6));
              v95 = v94 / v93;
            }
            else {
              v94 = v86 & ~(-1 << (v84[10] + 6));
              v93 = v84[27];
              LOWORD(v95) = v94;
            }
            v97 = CudaDriverRoutine_8ab20((__int64)v84, v79, (v86 - v94) / v93,
                                          0);
            LOWORD(v86) = v95;
            v83 = v97;
            goto LABEL_98;
          }
        }
        v83 = v79;
      LABEL_98:
        v82 = &v68[v92];
        v80 = v169;
        v68[v92] = 536969679;
        v81 = (unsigned __int16)v86 | ((unsigned __int16)v179_.v182 << 16);
      LABEL_99:
        v82[1] = v81;
        v98 = v165 + (v74 >> v159) * v161;
        if (v184_.v184 != 0) {
          CudaDriverRoutine_f8f00(&v184_.v184);
          v82[2] = 536969477;
          v99 = CudaDriverRoutine_f8f00(&v184_.v184);
          v100 = v82 + 4;
          v82[3] = v99;
          v101 = v98;
          goto LABEL_120;
        }
        v102 = (_DWORD*)v184_.v185;
        if ((*(_BYTE*)(v184_.v185 + 32) & 0x40) != 0) {
          v103 = *(_DWORD*)(v184_.v185 + 52) << 6;
          v104 = v184_.v186;
          v156 = v83;
          if (v184_.v201 != 0) {
          LABEL_103:
            v104 /= *(_DWORD*)(v184_.v185 + 108);
            v154 = *(_DWORD*)(v184_.v185 + 12);
            v170 = *(_DWORD*)(v184_.v185 + 108);
            goto LABEL_106;
          }
        }
        else {
          v103 = *(_DWORD*)(v184_.v185 + 112);
          v104 = v184_.v186;
          v156 = v83;
          if (v184_.v201 != 0) {
            goto LABEL_103;
          }
        }
        v154 = v103;
        v170 = v80;
      LABEL_106:
        v105 = (unsigned int)(*(_DWORD*)(v184_.v185 + 16) +
                              *(_DWORD*)(v184_.v185 + 152) - 1) /
               *(_DWORD*)(v184_.v185 + 152);
        v106 = *(_BYTE*)(v184_.v185 + 40) & 0xF |
               (unsigned __int8)(16 * (*(_DWORD*)(v184_.v185 + 44) & 0xF)) |
               ((*(_DWORD*)(v184_.v185 + 48) & 0xF) << 8) | 0x1000;
        v107 = CudaDriverRoutine_86fe0(v184_.v185);
        if (v105 <= 1) {
          v108 = 1;
        }
        else {
          v108 = v105;
        }
        if (v107) {
          v82[2] = 537231811;
          v82[3] = v106;
          v82[4] = v154;
          v82[5] = v108;
          v109 = 32;
          v82[6] = 1;
          v82[7] = 0;
          v80 = v170;
          v83 = v156;
          if (v184_.v186 >= 0x10000) {
            goto LABEL_111;
          }
        }
        else {
          v82[2] = 537166275;
          v82[3] = v106;
          v82[4] = v154;
          v82[5] = v108;
          v109 = 28;
          v113 = v102[5];
          if (v113 <= 1) {
            v113 = 1;
          }
          v82[6] = v113;
          v80 = v170;
          v83 = v156;
          if (v184_.v186 >= 0x10000) {
          LABEL_111:
            v155 = v109;
            if (v184_.v201 != 0) {
              v110 = v102[27];
              v104 *= v110;
              v111 = v104 & ~(-1 << (v102[10] + 6));
              v112 = v111 / v110;
            }
            else {
              v111 = v104 & ~(-1 << (v102[10] + 6));
              v110 = v102[27];
              LOWORD(v112) = v111;
            }
            v101 = CudaDriverRoutine_8ab20((__int64)v102, v98,
                                           (v104 - v111) / v110, 0);
            LOWORD(v104) = v112;
            v80 = v170;
            v109 = v155;
            goto LABEL_119;
          }
        }
        v101 = v98;
      LABEL_119:
        v114 = (_DWORD*)((char*)v82 + v109);
        *v114 = 536969672;
        v114[1] = (unsigned __int16)v104 | ((unsigned __int16)v184_.v187 << 16);
        v100 = (_DWORD*)((char*)v82 + v109 + 8);
      LABEL_120:
        *v100 = 537035014;
        v100[1] = v184_.v189 / v80;
        v100[2] = v184_.v190;
        v100[3] = 537166080;
        v100[4] = HIDWORD(v83) & 0x1FFFF;
        v100[5] = v83;
        v100[6] = HIDWORD(v101) & 0x1FFFF;
        v100[7] = v101;
        if (v184_.v201 != 0) {
          v115 = v184_.v192 & 7 | (unsigned __int8)(16 * (v184_.v193 & 7)) |
                 ((v184_.v194 & 7) << 8) | ((v184_.v195 & 7) << 12) |
                 ((v184_.v200 << 16) - 0x10000) & 0x30000 |
                 ((v184_.v198 << 20) - 0x100000) & 0x300000 |
                 ((v184_.v199 << 24) - 0x1000000) & 0x3000000;
          v100[8] = 537100736;
          v100[9] = v184_.v196;
          v100[10] = v184_.v197;
          v100[11] = v115;
          v69 = (__int64)(v100 + 12);
        }
        else {
          v69 = (__int64)(v100 + 8);
        }
        v116 = a7;
        v203 = (_DWORD*)v69;
        if ((_DWORD)v179_.v179 != 0) {
          v117 = 128;
        }
        else {
          v117 = 0;
        }
        if (v184_.v184 != 0) {
          v117 |= 0x100u;
        }
        v118 = v117 | 0x400;
        if (v173 == 0) {
          v118 = v117;
        }
        v70 = v184_.v190;
        if (v184_.v190 <= 1) {
          v119 = v118;
        }
        else {
          v119 = v118 | 0x200;
        }
        if (v184_.v191 != 0) {
          v120 = 0;
          v121 = 0;
          while (1) {
            v122 = (__int64)v203;
            if ((_DWORD)v179_.v179 != 0) {
              v123 = true;
              if (v184_.v184 != 0) {
                goto LABEL_139;
              }
            }
            else {
              v130 = CudaDriverRoutine_86fe0(v179_.v180);
              v116 = a7;
              v123 = v130;
              if (v184_.v184 != 0) {
              LABEL_139:
                v124 = true;
                v125 = v203;
                v126 = HIDWORD(v79) & 0x1FFFF;
                v127 = HIDWORD(v98) & 0x1FFFF;
                if (!v123) {
                  goto LABEL_143;
                }
                goto LABEL_140;
              }
            }
            v131 = CudaDriverRoutine_86fe0(v184_.v185);
            v116 = a7;
            v124 = v131;
            v125 = v203;
            v126 = HIDWORD(v79) & 0x1FFFF;
            v127 = HIDWORD(v98) & 0x1FFFF;
            if (!v123 || !v124) {
            LABEL_143:
              if (v123) {
                *v125 = 537035008;
                v203[1] = v126;
                v132 = (__int64)v203;
                v203[2] = v79;
                v133 = (_DWORD*)(v132 + 12);
                v79 += v177;
                v203 = v133;
                if (!v124) {
                  goto LABEL_145;
                }
              LABEL_147:
                *v133 = 537035010;
                v133[1] = v127;
                v134 = (__int64)v203;
                v203[2] = v98;
                v129 = (_DWORD*)(v134 + 12);
                v98 += v78;
              }
              else {
                *v125 = 536969678;
                v203[1] = v121 + v179_.v183;
                v133 = v203 + 2;
                v203 += 2;
                if (v124) {
                  goto LABEL_147;
                }
              LABEL_145:
                *v133 = 536969671;
                v133[1] = v121 + v184_.v188;
                v129 = v203 + 2;
              }
              v203 = v129;
              goto LABEL_149;
            }
          LABEL_140:
            *v125 = 537166080;
            v203[1] = v126;
            v128 = (__int64)v203;
            v203[2] = v79;
            *(_DWORD*)(v128 + 12) = v127;
            *(_DWORD*)(v128 + 16) = v98;
            v129 = (_DWORD*)(v128 + 20);
            v98 += v78;
            v203 = v129;
            v79 += v177;
          LABEL_149:
            v135 = v122 - (_QWORD)v68 - 32688;
            v137 = v135 < 0xFFFFFFFFFFFF8000LL || v184_.v191 - 1 == v120;
            if (v116 != 0 || !v137 ||
                (*((_BYTE*)&CudaDriverRoutine_4198 +
                   (_QWORD)CudaDriverData_1422118) &
                 1) != 0) {
              v138 = 0;
            }
            else {
              v138 = 4;
            }
            v139 = v138 | v119;
            if (v184_.v202 != 0) {
              v140 = 2;
            }
            else {
              v140 = 1;
            }
            if ((v121 & 7) == 0) {
              v140 = 2;
            }
            *v129 = 536969408;
            v129[1] = v139 | v140;
            v66 = v184_.v191;
            v203 += 2;
            if (v135 < 0xFFFFFFFFFFFF8000LL || v184_.v191 - 1 == v120) {
              v142 = v116;
              if ((unsigned __int8)cuda_driver_misc_helpers_4bb0(v116) != 0) {
                v203 = (_DWORD*)CudaDriverRoutine_23d4a0((__int64)v203, v142);
              }
              v66 = v184_.v191;
              if (v135 >= 0xFFFFFFFFFFFF8000LL) {
                v116 = a7;
              }
              else {
                v116 = a7;
                if (v184_.v191 - 1 > v120) {
                  CudaDriverStub_5ab60(a3, &v203);
                  v116 = a7;
                  v68 = v203;
                  v66 = v184_.v191;
                }
              }
            }
            v120 = ++v121;
            if (v66 <= v121) {
              v69 = (__int64)v203;
              v70 = v184_.v190;
              goto LABEL_69;
            }
          }
        }
        v66 = 0;
      LABEL_69:
        v9 = v162;
        v68 = (_DWORD*)v69;
        v67 = v70 + v175;
        *a1 = v69;
        v62 = *(_QWORD*)(a6 + 408);
        if (v67 >= v62) {
          v59 = *(_QWORD*)(a6 + 416);
          v63 = v151;
          goto LABEL_61;
        }
      }
    }
  }
  v11 = *(_QWORD*)(a6 + 416);
  v12 = (_DWORD*)*a1;
  v179_.v179 = (_DWORD*)*a1;
  if (v11 == 0) {
    goto LABEL_39;
  }
  v168 = 0;
  do {
    v13 = CudaDriverRoutine_f8f00((_DWORD*)a6);
    v14 = CudaDriverRoutine_f8ed0((_DWORD*)a6);
    v15 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200));
    v16 = CudaDriverRoutine_f8ed0((_DWORD*)(a6 + 200));
    if (*(_QWORD*)(a6 + 408) != 0) {
      v17 = 0;
      v18 = a4 + v15 * v168 * v16;
      v19 = a5 + v13 * v168 * v14;
      do {
        v176 = v17;
        if ((v17 | v168) != 0) {
          CudaDriverStub_5ab60(a3, &v179_.v179);
        }
        v20 = v179_.v179;
        v21 = *(_QWORD*)(a6 + 400);
        v22 = *(unsigned __int8*)(a6 + 459);
        v172 = v19;
        v174 = v18;
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
          }
          else {
            v25 = v24;
          }
          v20[6] = v25;
          *v20 = 537166080;
          v20[1] = HIDWORD(v19) & 0x1FFFF;
          v20[2] = v19;
          v20[3] = HIDWORD(v18) & 0x1FFFF;
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
          *v29 = 536969408;
          v29[1] = v31 | v32;
          if (v26 == 0 &&
              (unsigned __int8)cuda_driver_misc_helpers_4bb0(a7) != 0) {
            v20 = (_DWORD*)CudaDriverRoutine_23d4a0((__int64)v20, a7);
          }
          v18 += v24;
          v19 += v24;
          v23 -= v24;
        } while (v23 != 0);
        v179_.v179 = v20;
        v19 = CudaDriverRoutine_f8f00((_DWORD*)a6) + v172;
        v18 = CudaDriverRoutine_f8f00((_DWORD*)(a6 + 200)) + v174;
        v17 = v176 + 1;
      } while ((unsigned __int64)(v176 + 1) < *(_QWORD*)(a6 + 408));
    }
    ++v168;
  } while (v168 < *(_QWORD*)(a6 + 416));
  v12 = v179_.v179;
LABEL_39:
  *a1 = (__int64)v12;
  return 0;
}

_DWORD* cuda_driver_243880(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
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
      result[1] = HIDWORD(v7) & 0x1FFFF;
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
        result[1] = HIDWORD(v7) & 0x1FFFF;
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

__int64 cuda_driver_245460(__int64 a1, __int64 a2, __int64 a3, bool* a4)
{
  __int64 result;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  void* v12;
  bool v13;
  unsigned __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int8* v19;
  char v20;
  unsigned __int64 v21;
  int v22;

  result = CudaDriverStub_1dbab0(a3);
  if (result != 0) {
    v8 = *(_QWORD*)(a1 + 64);
    v9 = *(unsigned int*)(v8 + 3732);
    if ((_DWORD)v9 != 0) {
      v10 = (unsigned __int8*)(result + 628);
      v11 = 0;
      result = 0;
      v12 = CudaDriverData_1422118;
      v13 = true;
      do {
        v14 = (unsigned __int64*)(a2 + 320 * v11);
        v15 = *v14;
        v16 = v14[1];
        if ((v15 | v16) != 0) {
          v17 = *(unsigned int*)(v8 + 3756);
          if ((_DWORD)v17 != 0) {
            v18 = 0;
            v19 = v10;
            do {
              v20 = 64 - v18;
              if ((unsigned int)v18 > 0x40) {
                v20 = 0;
              }
              v21 = v16 >> v18 << v20;
              if (v18 <= 0x3F) {
                v21 = v15 >> v18;
              }
              if ((v21 & 1) != 0) {
                v22 = *v19;
                if ((v22 | *((_DWORD*)v19 - 8) & 0x280) != 0) {
                  result = 1;
                }
                else {
                  result = (unsigned int)result;
                }
                v13 = v13 && (_DWORD)result != 0 &&
                      *((_DWORD*)v19 - 8) == 512 && v22 == 23;
                *((_BYTE*)&CudaDriverRoutine_46fc + (_QWORD)v12) = v22 == 14;
                v17 = *(unsigned int*)(v8 + 3756);
              }
              ++v18;
              v19 += 664;
            } while (v18 < v17);
            v9 = *(unsigned int*)(v8 + 3732);
          }
        }
        ++v11;
        v10 += 42496;
      } while (v11 < v9);
    }
    else {
      result = 0;
      v13 = true;
    }
    if (a4 != nullptr) {
      *a4 = v13;
    }
  }
  return result;
}

__int64 cuda_driver_2455c0(__int64 a1, __int64 a2, int a3)
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
    v7 = (_BYTE*)(v5 + 677);
    v8 = 0;
    do {
      if (*(_DWORD*)(v6 + 3756) != 0) {
        v9 = 0;
        v10 = v7;
        do {
          *v10 = 0;
          ++v9;
          v10 += 664;
          v6 = *(_QWORD*)(a1 + 64);
        } while (v9 < *(unsigned int*)(v6 + 3756));
      }
      ++v8;
      v7 += 42496;
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

__int64 cuda_driver_2461c0(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  _DWORD* v12;
  int v13;
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
    v6 = *(_QWORD*)(a1 + 16104);
    if ((unsigned int)v4 >= 8 && (unsigned __int64)&v23[-6] - v6 >= 0x20) {
      v7 = (unsigned int)v4 & 0xFFFFFFF8;
      v14 = (int32x4_t*)&v24;
      v15 = (int32x4_t*)(v6 + 40);
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
        v23[v9] = *(_DWORD*)(v6 + 24 + 4 * v9) + 5260556;
        ++v9;
      } while (v8 != 0);
    }
    if ((unsigned __int64)(v7 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      v10 = v4 - v9;
      v11 = (int*)(v6 + 4 * v9 + 52);
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

__int64 cuda_driver_2463f0(__int64 a1, __int64 a2)
{
  *(_DWORD*)(CudaDriverStub_1dbab0(a2) + 4) = 0;
  __builtin_arm_dmb(0xFu);
  return 0;
}

__int64 cuda_driver_246420(__int64 a1, __int64 a2, int a3)
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

void cuda_driver_2466a0()
{
  *(_DWORD*)((char*)((_UNKNOWN*)0x1854LL) + (_QWORD)CudaDriverData_1422118) = 1;
}

__int64 cuda_driver_2468a0(__int64* a1, __int64* a2, __int64 a3, __int64 a4,
                           char a5)
{
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v5 = *a2;
  v23 = a3;
  v21 = 0;
  v22 = a4;
  v19 = 0;
  v20 = 0;
  v18 = v5;
  result = CudaDriverStub_112b20(0, a1, 2u, &v21, &v20);
  if ((_DWORD)result == 0) {
    v8 = CudaDriverRoutine_98340(v20);
    cuda_driver_108520(v8 + 24);
    CudaDriverRoutine_205ee0(0, v21, &v19, nullptr, 2);
    v9 = v19;
    if ((a5 & 1) != 0) {
      v9 = (*(__int64 (**)(__int64))(*(_QWORD*)(v20 + 64) + 19184LL))(v19);
      v19 = v9;
    }
    CudaDriverRoutine_206060(v21, v9);
    v10 = CudaDriverRoutine_1174d0(v21);
    cuda_driver_5a060(v10);
    v11 = v10;
    if (*(_BYTE*)(v10 + 37) == 0) {
      v11 = *(_QWORD*)(*(_QWORD*)v10 + 48LL);
    }
    CudaDriverStub_107f90(v11 + 8);
    if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                   (_QWORD)CudaDriverData_1422118) >= 2u &&
        *((_BYTE*)((_UNKNOWN*)0x1158LL) + (_QWORD)CudaDriverData_1422118) ==
            0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(**(_QWORD**)(v10 + 33816) + 8LL) +
                             64LL) +
                  17329LL) != 0) {
      v13 = *(_DWORD*)(v10 + 34248);
      __builtin_arm_dmb(0xDu);
      if (v13 != 0) {
        do {
          CudaDriverStub_12dca0(100);
          v14 = *(_DWORD*)(v10 + 34248);
          __builtin_arm_dmb(0xDu);
        } while (v14 != 0);
      }
    }
    (*(void (**)(__int64, __int64, __int64*, __int64*))(v10 + 34128))(
        v10, 1, &v18, &v23);
    v15 = (*(__int64 (**)(__int64, __int64, __int64*, __int64*))(v10 + 34136))(
        v10, 1, &v18, &v22);
    if (*(_BYTE*)(v10 + 37) == 0) {
      v10 = *(_QWORD*)(*(_QWORD*)v10 + 48LL);
    }
    CudaDriverStub_108070(v10 + 8);
    CudaDriverRoutine_205ee0(0, v21, &v19, nullptr, 2);
    v16 = v19;
    if ((a5 & 1) != 0) {
      v16 = (*(__int64 (**)(__int64))(*(_QWORD*)(v20 + 64) + 19176LL))(v19);
      v19 = v16;
    }
    CudaDriverRoutine_206060(v21, v16);
    v17 = CudaDriverRoutine_98340(v20);
    CudaDriverRoutine_1085d0(v17 + 24);
    return v15;
  }
  return result;
}

__int64 cuda_driver_246ac0(unsigned int a1, unsigned int a2, __int64 a3)
{
  memset_plt(a3, 0, a2);
  if (a1 >= *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                       (_QWORD)CudaDriverData_1422118)) {
    return 101;
  }
  else {
    return 801;
  }
}

__int64 cuda_driver_246bc0(__int64 a1, _QWORD* a2)
{
  __int64 result;
  _QWORD* v5;
  __int64 v6;

  v6 = 0;
  result = CudaDriverRoutine_121c60(&v6);
  if ((_DWORD)result == 0) {
    v5 = (_QWORD*)CudaDriverStub_121ff0(v6);
    if (a2 != nullptr) {
      *a2 = *v5;
    }
    *v5 = a1;
    *((_BYTE*)&CudaDriverRoutine_7488 + (_QWORD)CudaDriverData_1422118) |= 2u;
    return 0;
  }
  return result;
}

__int64 cuda_driver_246c80(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (result != 0) {
    v1 = result;
    v2 = *(_QWORD*)(result + 24);
    if (v2 != 0) {
      cuda_Free_plt(v2);
    }
    v3 = *(_QWORD*)(v1 + 56);
    if (v3 != 0) {
      cuda_Free_plt(v3);
    }
    v4 = *(_QWORD*)(v1 + 128);
    if (v4 != 0) {
      cuda_Free_plt(v4);
    }
    return cuda_Free_plt(v1);
  }
  return result;
}

unsigned __int64 cuda_driver_246d20(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4)
{
  unsigned __int64 v5;
  __int64 v6;
  int v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  _DWORD* v16;
  int v17;
  bool v18;
  bool v19;
  unsigned int v20;
  __int64 v21;
  int v22;
  bool v23;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;

  if (a1 == 0) {
    return 0;
  }
  if (*(_BYTE*)(a1 + 4) != 2) {
    v5 = CudaDriverStub_57450(a1, a2, a3, a4);
    if (v5 != 0) {
      CudaDriverRoutine_246fe0(a1);
      CudaDriverRoutine_246fe0(a1);
      v8 = *(_DWORD*)(v5 + 32);
      v9 = CudaDriverRoutine_246fe0(a1);
      v10 = *(_DWORD*)(v5 + 28);
      if (v10 <= *(_DWORD*)(v5 + 32)) {
        v5 = v8 + v9 * (unsigned int)*(unsigned __int16*)(v5 + 46);
        if ((unsigned int)CudaDriverRoutine_246fe0(a1) == 0) {
          return v5;
        }
      }
      else {
        v5 =
            v10 + *(unsigned __int16*)(v5 + 42) * *(unsigned __int16*)(v5 + 44);
        if ((unsigned int)CudaDriverRoutine_246fe0(a1) == 0) {
          return v5;
        }
      }
      v15 = 0;
      do {
        v16 = (_DWORD*)CudaDriverRoutine_246fa0(a1, v15);
        if (v16 != nullptr) {
          v17 = v16[1];
          v18 = (unsigned int)(v17 - 1879048199) > 0xE ||
                ((1 << (v17 - 7)) & 0x400D) == 0;
          v19 = !v18 || v17 == 8;
          if (!v19 && v5 <= (unsigned int)(v16[5] + v16[4])) {
            v5 = (unsigned int)(v16[5] + v16[4]);
          }
        }
        ++v15;
      } while (v15 < (unsigned int)CudaDriverRoutine_246fe0(a1));
    }
    return v5;
  }
  v5 = CudaDriverStub_57450(a1, a2, a3, a4);
  if (v5 == 0) {
    return v5;
  }
  CudaDriverRoutine_247640(a1);
  v6 = *(_QWORD*)(v5 + 40);
  if (__CFADD__(v6, (unsigned int)CudaDriverRoutine_247640(a1) *
                        *(unsigned __int16*)(v5 + 58))) {
    return 0;
  }
  v11 = *(_QWORD*)(v5 + 40);
  v12 = CudaDriverRoutine_247640(a1);
  v13 = *(_QWORD*)(v5 + 32);
  if (v13 > *(_QWORD*)(v5 + 40)) {
    v14 = *(unsigned __int16*)(v5 + 54) *
          (unsigned __int64)*(unsigned __int16*)(v5 + 56);
    if (!__CFADD__(v13, v14)) {
      v5 = v14 + v13;
      if ((unsigned int)CudaDriverRoutine_247640(a1) == 0) {
        return v5;
      }
    LABEL_31:
      v20 = 0;
      while (1) {
        v21 = CudaDriverRoutine_2475f0(a1, v20);
        if (v21 != 0) {
          v22 = *(_DWORD*)(v21 + 4);
          v23 = (unsigned int)(v22 - 1879048199) > 0xE ||
                ((1 << (v22 - 7)) & 0x400D) == 0;
          if (v23 && v22 != 8) {
            v25 = *(_QWORD*)(v21 + 24);
            v26 = *(_QWORD*)(v21 + 32);
            if (__CFADD__(v25, v26)) {
              return 0;
            }
            v27 = v26 + v25;
            if (v27 > v5) {
              v5 = v27;
            }
          }
        }
        if (++v20 >= (unsigned int)CudaDriverRoutine_247640(a1)) {
          return v5;
        }
      }
    }
    return 0;
  }
  v5 = v11 + v12 * (unsigned int)*(unsigned __int16*)(v5 + 58);
  if ((unsigned int)CudaDriverRoutine_247640(a1) != 0) {
    goto LABEL_31;
  }
  return v5;
}

unsigned __int64 cuda_driver_248870(_BYTE* a1, __int64 a2, _DWORD* a3,
                                    unsigned __int64 a4, unsigned int a5,
                                    __int64 a6, unsigned __int64 a7)
{
  unsigned __int64 result;
  unsigned __int64 v15;
  unsigned __int16* v16;
  unsigned __int64 v17;
  int v18;
  _BYTE* v19;
  unsigned __int8* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned int v23;
  unsigned __int64* v24;
  unsigned __int64 v25;
  _BYTE* v26;
  unsigned __int64* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64* v36;
  unsigned __int64 v37;
  _BYTE* v38;
  __int64* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47;
  unsigned __int16* v48;
  unsigned __int16* v49;
  __int64 v50;
  char v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  char v56;
  __int64 v57;
  unsigned __int16* v58;
  int v59;
  __int64 v60;
  __int64 v61;
  char v62;
  __int64 v63;
  unsigned __int64 v64;
  int v65;
  __int64 v66;
  unsigned __int16* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  _BYTE* j;
  _BYTE* v73;
  unsigned __int16* v74;
  __int64 v75;
  char v76;
  __int64 v77;
  unsigned int v78;
  __int64 v79;
  __int64 v80;
  int v81;
  unsigned __int64 v82;
  unsigned __int16* v83;
  __int64 v84;
  char v85;
  __int64 v86;
  __int64 v87;
  unsigned int v88;
  __int64 v89;
  __int64 v90;
  bool v91;
  char v92;
  __int64 v93;
  unsigned __int16* v94;
  unsigned __int64 v95;
  __int64 v96;
  char v97;
  int v98;
  unsigned int v99;
  unsigned __int16* v100;
  __int64 v101;
  char v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  int v105;
  unsigned int v106;
  unsigned __int16* v107;
  unsigned __int64 v108;
  __int64 v109;
  char v110;
  unsigned int v111;
  unsigned __int64 v112;
  unsigned __int16* v113;
  __int64 v114;
  char v115;
  unsigned __int64 v116;
  _BYTE* i;
  __int64 v118;
  _BYTE* v119;
  unsigned __int16* v120;
  int v121;
  __int64 v122;
  char v123;
  unsigned int v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int16* v128;
  int v129;
  __int64 v130;
  char v131;
  __int64 v132;
  _BYTE* v133;
  struct {
    __int64 v134;
    __int64 v135;
  } v134_;
  struct {
    __int64 v136;
    __int64 v137;
  } v136_;
  struct {
    __int64 v138;
    unsigned int v139;
    char gap52_[4];
    unsigned __int64 v140;
    char* v141;
    unsigned __int8* v142;
  } v138_;
  unsigned int v143;
  unsigned int v144;

  v143 = 255;
  if (a7 < 0x200) {
    return -1;
  }
  result = FSE_readNCount_bmi2(a6, &v143, &v144, a3, a4);
  if (result <= 0xFFFFFFFFFFFFFF88LL) {
    if (v144 > a5 ||
        (((1LL << v144) + 4LL * (1 << v144) + 2LL * (v143 + 1) + 19) &
         0xFFFFFFFFFFFFFFFCLL) +
                516 >
            a7) {
      return -44;
    }
    v15 = a7;
    v16 = (unsigned __int16*)(a6 + 512);
    v17 = result;
    result = CudaDriverRoutine_248280((_WORD*)(a6 + 512), a6, v143, v144,
                                      a6 + 512 + 4LL * (1 << v144) + 4,
                                      v15 - (4LL * (1 << v144) + 4) - 512);
    if (result <= 0xFFFFFFFFFFFFFF88LL) {
      v18 = *(unsigned __int16*)(a6 + 514);
      v19 = &a1[a2];
      v20 = (unsigned __int8*)a3 + v17;
      result = a4 - v17;
      v21 = (unsigned __int64)(v19 - 3);
      if (v18 != 0) {
        if (result == 0) {
          return -72;
        }
        v138_.v141 = (char*)a3 + v17;
        v138_.v142 = v20 + 8;
        if (result >= 8) {
          v22 = *(_QWORD*)((char*)a3 + a4 - 8);
          v138_.v140 = (unsigned __int64)a3 + a4 - 8;
          v138_.v138 = v22;
          if (HIBYTE(v22) == 0) {
            return -1;
          }
          v138_.v139 = 8 - (__clz(HIBYTE(v22)) ^ 0x1F);
          if (result > 0xFFFFFFFFFFFFFF88LL) {
            return result;
          }
        LABEL_40:
          FSE_initDState(&v136_.v136, (__int64)&v138_.v138, v16);
          FSE_initDState(&v134_.v134, (__int64)&v138_.v138, v16);
          v35 = v138_.v139;
          if (v138_.v139 <= 0x40) {
            v36 = (__int64*)v138_.v140;
            v37 = (unsigned __int64)v138_.v142;
            v38 = a1;
            if (v138_.v140 >= (unsigned __int64)v138_.v142) {
              v36 =
                  (__int64*)(v138_.v140 - ((unsigned __int64)v138_.v139 >> 3));
              v39 = (__int64*)v138_.v141;
              v35 = v138_.v139 & 7;
              v45 = *v36;
              v138_.v140 = (unsigned __int64)v36;
              v138_.v138 = v45;
            }
            else {
              v39 = (__int64*)v138_.v141;
              if ((char*)v138_.v140 != v138_.v141) {
                v40 = (unsigned __int64)v138_.v139 >> 3;
                v42 = v134_.v134;
                v41 = v134_.v135;
                if (v138_.v140 - v40 >= (unsigned __int64)v138_.v141) {
                  v40 = (unsigned int)v40;
                }
                else {
                  v40 = (unsigned int)(v138_.v140 - (_DWORD)v138_.v141);
                }
                v36 = (__int64*)(v138_.v140 - v40);
                v35 = v138_.v139 - 8 * v40;
                v44 = v136_.v136;
                v43 = v136_.v137;
                v45 = *v36;
                v138_.v140 = (unsigned __int64)v36;
                v138_.v138 = v45;
                if (v35 <= 0x40) {
                  do {
                  LABEL_90:
                    if ((unsigned __int64)v36 >= v37) {
                      v93 = v35 >> 3;
                      v35 &= 7u;
                      v92 = 1;
                      v36 = (__int64*)((char*)v36 - v93);
                    }
                    else {
                      if (v36 == v39) {
                        goto LABEL_104;
                      }
                      v90 = v35 >> 3;
                      v91 = (__int64*)((char*)v36 - v90) >= v39;
                      if ((__int64*)((char*)v36 - v90) < v39) {
                        v90 = (unsigned int)((_DWORD)v36 - (_DWORD)v39);
                      }
                      else {
                        v90 = (unsigned int)v90;
                      }
                      v92 = v91;
                      v36 = (__int64*)((char*)v36 - v90);
                      v35 -= 8 * v90;
                    }
                    v138_.v140 = (unsigned __int64)v36;
                    v138_.v139 = v35;
                    v45 = *v36;
                    v138_.v138 = *v36;
                    if ((unsigned __int64)v38 >= v21 || (v92 & 1) == 0) {
                      goto LABEL_104;
                    }
                    v94 = (unsigned __int16*)(v43 + 4 * v44);
                    v95 = v45 << v35;
                    v96 = *v94;
                    v97 = *((_BYTE*)v94 + 2);
                    LODWORD(v94) = *((unsigned __int8*)v94 + 3);
                    v98 = -(int)v94;
                    v99 = v35 + (_DWORD)v94;
                    *v38 = v97;
                    v100 = (unsigned __int16*)(v41 + 4 * v42);
                    v101 = *v100;
                    v102 = *((_BYTE*)v100 + 2);
                    LODWORD(v100) = *((unsigned __int8*)v100 + 3);
                    v103 = v95 >> v98;
                    v104 = v45 << v99;
                    v105 = -(int)v100;
                    v106 = v99 + (_DWORD)v100;
                    v38[1] = v102;
                    v107 = (unsigned __int16*)(v43 + 4 * v103 + 4 * v96);
                    v108 = v45 << v106;
                    v109 = *v107;
                    v110 = *((_BYTE*)v107 + 2);
                    LODWORD(v107) = *((unsigned __int8*)v107 + 3);
                    v111 = v106 + (_DWORD)v107;
                    v38[2] = v110;
                    v44 = (v108 >> (-(char)v107 & 63)) + v109;
                    v112 = v45 << v111;
                    v113 = (unsigned __int16*)(v41 + 4 * (v104 >> v105) +
                                               4 * v101);
                    v114 = *v113;
                    v115 = *((_BYTE*)v113 + 2);
                    LODWORD(v113) = *((unsigned __int8*)v113 + 3);
                    v35 = v111 + (_DWORD)v113;
                    v38[3] = v115;
                    v38 += 4;
                    v138_.v139 = v35;
                    v42 = (v112 >> (-(char)v113 & 63)) + v114;
                  } while (v35 <= 0x40);
                  v36 = (__int64*)&CudaDriverData_13b62f0;
                }
                else {
                  v36 = (__int64*)&CudaDriverData_13b62f0;
                }
              LABEL_104:
                v116 = (unsigned __int64)(v19 - 2);
                v136_.v136 = v44;
                v134_.v134 = v42;
                if (v38 > v19 - 2) {
                  return -70;
                }
                for (i = v38 + 1;; i += 2) {
                  v120 = (unsigned __int16*)(v43 + 4 * v44);
                  v121 = *((unsigned __int8*)v120 + 3);
                  v122 = *v120;
                  v123 = *((_BYTE*)v120 + 2);
                  v124 = v35 + v121;
                  *(i - 1) = v123;
                  if (v35 + v121 > 0x40) {
                    *i = *(_BYTE*)(v41 + 4 * v42 + 2);
                    return i + 1 - a1;
                  }
                  if ((unsigned __int64)v36 >= v37) {
                    v127 = v124 >> 3;
                    v124 &= 7u;
                    v36 = (__int64*)((char*)v36 - v127);
                    v138_.v140 = (unsigned __int64)v36;
                    v138_.v139 = v124;
                    v126 = *v36;
                    v138_.v138 = *v36;
                    if ((unsigned __int64)i > v116) {
                      return -70;
                    }
                  }
                  else if (v36 == v39) {
                    v126 = v45;
                    if ((unsigned __int64)i > v116) {
                      return -70;
                    }
                  }
                  else {
                    v125 = v124 >> 3;
                    if ((__int64*)((char*)v36 - v125) >= v39) {
                      v125 = (unsigned int)v125;
                    }
                    else {
                      v125 = (unsigned int)((_DWORD)v36 - (_DWORD)v39);
                    }
                    v36 = (__int64*)((char*)v36 - v125);
                    v124 -= 8 * v125;
                    v138_.v140 = (unsigned __int64)v36;
                    v138_.v139 = v124;
                    v126 = *v36;
                    v138_.v138 = *v36;
                    if ((unsigned __int64)i > v116) {
                      return -70;
                    }
                  }
                  v44 = ((unsigned __int64)(v45 << v35) >> (-(char)v121 & 63)) +
                        v122;
                  v128 = (unsigned __int16*)(v41 + 4 * v42);
                  v129 = *((unsigned __int8*)v128 + 3);
                  v130 = *v128;
                  v131 = *((_BYTE*)v128 + 2);
                  v35 = v124 + v129;
                  v138_.v139 = v124 + v129;
                  *i = v131;
                  if (v124 + v129 > 0x40) {
                    i[1] = *(_BYTE*)(v43 + 4 * v44 + 2);
                    return i + 2 - a1;
                  }
                  if ((unsigned __int64)v36 >= v37) {
                    v118 = v35 >> 3;
                    v35 &= 7u;
                    v36 = (__int64*)((char*)v36 - v118);
                  }
                  else {
                    if (v36 == v39) {
                      v45 = v126;
                      goto LABEL_109;
                    }
                    v132 = v35 >> 3;
                    if ((__int64*)((char*)v36 - v132) >= v39) {
                      v132 = (unsigned int)v132;
                    }
                    else {
                      v132 = (unsigned int)((_DWORD)v36 - (_DWORD)v39);
                    }
                    v36 = (__int64*)((char*)v36 - v132);
                    v35 -= 8 * v132;
                  }
                  v138_.v140 = (unsigned __int64)v36;
                  v138_.v139 = v35;
                  v45 = *v36;
                  v138_.v138 = *v36;
                LABEL_109:
                  v42 =
                      ((unsigned __int64)(v126 << v124) >> (-(char)v129 & 63)) +
                      v130;
                  v119 = i + 1;
                  if ((unsigned __int64)v119 > v116) {
                    return -70;
                  }
                }
              }
              v45 = v138_.v138;
              v39 = (__int64*)v138_.v140;
            }
            v44 = v136_.v136;
            v43 = v136_.v137;
            v42 = v134_.v134;
            v41 = v134_.v135;
            goto LABEL_90;
          }
          return -20;
        }
        v34 = *v20;
        v138_.v140 = (unsigned __int64)a3 + v17;
        v138_.v138 = v34;
        if ((__int64)result > 4) {
          if (result != 5) {
            if (result != 6) {
              v34 |= (unsigned __int64)v20[6] << 48;
            }
            v34 += (unsigned __int64)v20[5] << 40;
          }
          v34 += (unsigned __int64)v20[4] << 32;
        }
        else {
          if (result == 2) {
          LABEL_37:
            v138_.v138 = v34 + ((unsigned __int64)v20[1] << 8);
          LABEL_38:
            if (*((_BYTE*)a3 + a4 - 1) == 0) {
              return -20;
            }
            v138_.v139 =
                __clz(*((unsigned __int8*)a3 + a4 - 1)) - 8 * result + 41;
            goto LABEL_40;
          }
          if (result == 3) {
          LABEL_36:
            v34 += (unsigned __int64)v20[2] << 16;
            goto LABEL_37;
          }
          if (result != 4) {
            goto LABEL_38;
          }
        }
        v34 += (unsigned __int64)v20[3] << 24;
        goto LABEL_36;
      }
      result = BIT_initDStream((__int64)&v138_.v138, v20, a4 - v17);
      if (result > 0xFFFFFFFFFFFFFF88LL) {
        return result;
      }
      FSE_initDState(&v136_.v136, (__int64)&v138_.v138, v16);
      FSE_initDState(&v134_.v134, (__int64)&v138_.v138, v16);
      v23 = v138_.v139;
      if (v138_.v139 > 0x40) {
        return -20;
      }
      v24 = (unsigned __int64*)v138_.v140;
      v25 = (unsigned __int64)v138_.v142;
      v26 = a1;
      if (v138_.v140 >= (unsigned __int64)v138_.v142) {
        v24 = (unsigned __int64*)(v138_.v140 -
                                  ((unsigned __int64)v138_.v139 >> 3));
        v27 = (unsigned __int64*)v138_.v141;
        v23 = v138_.v139 & 7;
        v138_.v139 = v23;
        v33 = *v24;
        v138_.v140 = (unsigned __int64)v24;
        v138_.v138 = v33;
      }
      else {
        v27 = (unsigned __int64*)v138_.v141;
        if ((char*)v138_.v140 != v138_.v141) {
          v28 = (unsigned __int64)v138_.v139 >> 3;
          v30 = v134_.v134;
          v29 = v134_.v135;
          if (v138_.v140 - v28 >= (unsigned __int64)v138_.v141) {
            v28 = (unsigned int)v28;
          }
          else {
            v28 = (unsigned int)(v138_.v140 - (_DWORD)v138_.v141);
          }
          v24 = (unsigned __int64*)(v138_.v140 - v28);
          v23 = v138_.v139 - 8 * v28;
          v32 = v136_.v136;
          v31 = v136_.v137;
          v33 = *v24;
          v138_.v140 = (unsigned __int64)v24;
          v138_.v139 = v23;
          v138_.v138 = v33;
          if (v23 <= 0x40) {
            do {
            LABEL_53:
              if ((unsigned __int64)v24 >= v25) {
                LODWORD(v46) = v23 >> 3;
                v23 &= 7u;
                v47 = 1;
              }
              else {
                if (v24 == v27) {
                  goto LABEL_64;
                }
                v46 = v23 >> 3;
                if ((unsigned __int64*)((char*)v24 - v46) >= v27) {
                  v47 = 1;
                }
                else {
                  LODWORD(v46) = (_DWORD)v24 - (_DWORD)v27;
                  v47 = 0;
                }
                v23 -= 8 * v46;
              }
              v24 = (unsigned __int64*)((char*)v24 - (unsigned int)v46);
              v33 = *v24;
              if ((unsigned __int64)v26 >= v21 || (v47 & 1) == 0) {
                goto LABEL_64;
              }
              v48 = (unsigned __int16*)(v31 + 4 * v32);
              v49 = (unsigned __int16*)(v29 + 4 * v30);
              v50 = *v48;
              v51 = *((_BYTE*)v48 + 2);
              v52 = *((unsigned __int8*)v48 + 3);
              v53 = v23 + v52;
              v54 = CudaDriverData_13b6270[v52];
              *v26 = v51;
              v55 = *v49;
              v56 = *((_BYTE*)v49 + 2);
              v57 = *((unsigned __int8*)v49 + 3);
              v58 = (unsigned __int16*)(v31 +
                                        4 * ((v33 >> (-(char)v53 & 63)) & v54) +
                                        4 * v50);
              v59 = v53 + v57;
              v60 = CudaDriverData_13b6270[v57];
              v26[1] = v56;
              v61 = *v58;
              v62 = *((_BYTE*)v58 + 2);
              v63 = *((unsigned __int8*)v58 + 3);
              v64 = (v33 >> (-(char)v59 & 63)) & v60;
              v65 = v59 + v63;
              v66 = CudaDriverData_13b6270[v63];
              v26[2] = v62;
              v67 = (unsigned __int16*)(v29 + 4 * v64 + 4 * v55);
              LOBYTE(v55) = *((_BYTE*)v67 + 2);
              v32 = ((v33 >> (-(char)v65 & 63)) & v66) + v61;
              v68 = *v67;
              v69 = *((unsigned __int8*)v67 + 3);
              v23 = v65 + v69;
              v70 = CudaDriverData_13b6270[v69];
              v26[3] = v55;
              v26 += 4;
              v30 = ((v33 >> (-(char)v23 & 63)) & v70) + v68;
            } while (v23 <= 0x40);
            v24 = (unsigned __int64*)&CudaDriverData_13b62f0;
          }
          else {
            v24 = (unsigned __int64*)&CudaDriverData_13b62f0;
          }
        LABEL_64:
          v71 = (unsigned __int64)(v19 - 2);
          v138_.v140 = (unsigned __int64)v24;
          v138_.v139 = v23;
          v138_.v138 = v33;
          v136_.v136 = v32;
          v134_.v134 = v30;
          if (v26 > v19 - 2) {
            return -70;
          }
          for (j = v26 + 1;; j += 2) {
            v74 = (unsigned __int16*)(v31 + 4 * v32);
            v75 = *v74;
            v76 = *((_BYTE*)v74 + 2);
            v77 = *((unsigned __int8*)v74 + 3);
            v78 = v23 + v77;
            v79 = CudaDriverData_13b6270[v77];
            *(j - 1) = v76;
            if (v78 > 0x40) {
              *j = *(_BYTE*)(v29 + 4 * v30 + 2);
              v133 = j + 1;
              return v133 - a1;
            }
            if ((unsigned __int64)v24 >= v25) {
              v81 = v78 & 7;
              v24 = (unsigned __int64*)((char*)v24 - (v78 >> 3));
              v82 = *v24;
              if ((unsigned __int64)j > v71) {
                return -70;
              }
            }
            else if (v24 == v27) {
              v81 = v78;
              v82 = v33;
              if ((unsigned __int64)j > v71) {
                return -70;
              }
            }
            else {
              v80 = v78 >> 3;
              if ((unsigned __int64*)((char*)v24 - v80) >= v27) {
                v80 = (unsigned int)v80;
              }
              else {
                v80 = (unsigned int)((_DWORD)v24 - (_DWORD)v27);
              }
              v24 = (unsigned __int64*)((char*)v24 - v80);
              v81 = v78 - 8 * v80;
              v82 = *v24;
              if ((unsigned __int64)j > v71) {
                return -70;
              }
            }
            v32 = ((v33 >> (-(char)v78 & 63)) & v79) + v75;
            v83 = (unsigned __int16*)(v29 + 4 * v30);
            v84 = *v83;
            v85 = *((_BYTE*)v83 + 2);
            v86 = *((unsigned __int8*)v83 + 3);
            v87 = CudaDriverData_13b6270[v86];
            v88 = v81 + v86;
            *j = v85;
            if (v88 > 0x40) {
              j[1] = *(_BYTE*)(v31 + 4 * v32 + 2);
              v133 = j + 2;
              return v133 - a1;
            }
            if ((unsigned __int64)v24 >= v25) {
              v23 = v88 & 7;
              v24 = (unsigned __int64*)((char*)v24 - (v88 >> 3));
            }
            else {
              if (v24 == v27) {
                v23 = v88;
                v33 = v82;
                goto LABEL_68;
              }
              v89 = v88 >> 3;
              if ((unsigned __int64*)((char*)v24 - v89) >= v27) {
                v89 = (unsigned int)v89;
              }
              else {
                v89 = (unsigned int)((_DWORD)v24 - (_DWORD)v27);
              }
              v24 = (unsigned __int64*)((char*)v24 - v89);
              v23 = v88 - 8 * v89;
            }
            v33 = *v24;
          LABEL_68:
            v30 = ((v82 >> (-(char)v88 & 63)) & v87) + v84;
            v73 = j + 1;
            if ((unsigned __int64)v73 > v71) {
              return -70;
            }
          }
        }
        v33 = v138_.v138;
        v27 = (unsigned __int64*)v138_.v140;
      }
      v32 = v136_.v136;
      v31 = v136_.v137;
      v30 = v134_.v134;
      v29 = v134_.v135;
      goto LABEL_53;
    }
  }
  return result;
}

__int64 cuda_driver_259f40(unsigned __int8* a1, unsigned __int64 a2, int a3,
                           unsigned int a4)
{
  unsigned int v4;
  unsigned __int16* v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  __int64 v18;
  bool v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  _QWORD* v28;
  _OWORD* v29;
  __int128* v30;
  __int64 v31;
  __int128 v32;
  __int128 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v39;
  __int64 v40;
  bool v41;
  bool v42;
  _QWORD* v43;
  __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  _QWORD* v50;
  __int64* v51;
  __int64 v52;
  _OWORD* v53;
  __int64 v54;
  __int128* v55;
  __int64 v56;
  __int128 v57;
  __int128 v58;
  __int64 v59;
  __int64 v60;
  _DWORD* v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64* v64;
  _QWORD* v65;
  char* v67;
  _OWORD* v68;
  __int128* v69;
  __int64 v70;
  __int64 v71;
  __int128 v72;
  __int128 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  _BYTE* v78;
  unsigned __int64 v79;
  _OWORD* v80;
  unsigned __int64 v81;
  __int128* v82;
  __int128 v83;
  __int128 v84;
  unsigned __int64 v85;
  char* v86;
  _QWORD* v87;
  char* v88;
  __int64 v89;
  char v90;
  int v92;

  v4 = -1;
  if (a1 == nullptr || (a4 & 0x80000000) != 0) {
    return v4;
  }
  if (a4 == 0) {
    if (a3 == 1) {
      if (*a1 != 0) {
        return (unsigned int)-1;
      }
      else {
        return 0;
      }
    }
    return v4;
  }
  if (a3 == 0) {
    return v4;
  }
  v5 = (unsigned __int16*)&a1[a3];
  v6 = a2 + a4;
  v7 = a1;
  v8 = a2;
  v9 = (unsigned __int64)v5 - 15;
  v10 = v6 - 12;
  v11 = (unsigned __int64)(v5 - 4);
  v12 = (unsigned __int64)(v5 - 2);
  v13 = v6 - 7;
  while (1) {
    v15 = v7 + 1;
    v14 = *v7;
    v16 = v14 >> 4;
    if ((unsigned int)(v14 >> 4) == 15) {
      break;
    }
    if (v15 >= (unsigned __int8*)v5 - 16 || v8 > v6 - 32) {
      ++v7;
      v21 = v8 + v16;
      v22 = &v15[v16];
      if (v8 + v16 > v10 || (unsigned __int64)v22 > v11) {
        goto LABEL_121;
      }
    LABEL_24:
      v24 = v16 + v8;
      if (v24 <= v8 + 8) {
        v24 = v8 + 8;
      }
      v25 = v24 + ~v8;
      if (v25 < 0x18 || v8 - (unsigned __int64)v7 < 0x20) {
        v27 = v7;
        v28 = (_QWORD*)v8;
        do {
        LABEL_44:
          v39 = *(_QWORD*)v27;
          v27 += 8;
          *v28++ = v39;
        } while ((unsigned __int64)v28 < v21);
        goto LABEL_45;
      }
      v26 = (v25 >> 3) + 1;
      v27 = &v7[8 * (v26 & 0x3FFFFFFFFFFFFFFCLL)];
      v28 = (_QWORD*)(v8 + 8 * (v26 & 0x3FFFFFFFFFFFFFFCLL));
      v29 = (_OWORD*)(v8 + 16);
      v30 = (__int128*)(v7 + 16);
      v31 = v26 & 0x3FFFFFFFFFFFFFFCLL;
      do {
        v32 = *(v30 - 1);
        v33 = *v30;
        v30 += 2;
        v31 -= 4;
        *(v29 - 1) = v32;
        *v29 = v33;
        v29 += 2;
      } while (v31 != 0);
      if (v26 != (v26 & 0x3FFFFFFFFFFFFFFCLL)) {
        goto LABEL_44;
      }
    LABEL_45:
      v35 = *(unsigned __int16*)v22;
      v34 = v14 & 0xF;
      v7 = v22 + 2;
      v36 = v21 - v35;
      if (v34 == 15) {
      LABEL_46:
        v15 = v7 + 1;
        if ((unsigned __int64)(v7 + 1) > v12) {
        LABEL_128:
          LODWORD(v7) = (_DWORD)v15;
          return (unsigned int)(~(_DWORD)v7 + (_DWORD)a1);
        }
        v40 = *v7;
        if (v40 == 255) {
          while (1) {
            v7 = v15 + 1;
            if ((unsigned __int64)(v15 + 1) > v12) {
              return (unsigned int)(~(_DWORD)v7 + (_DWORD)a1);
            }
            v60 = *v15++;
            v40 += v60;
            if (v60 != 255) {
              goto LABEL_49;
            }
          }
        }
        ++v7;
      LABEL_49:
        v41 = __CFADD__(v21, v40 + 15);
        v42 = v40 == -1;
        if (v40 == -1) {
          v34 = 15;
        }
        else {
          v34 = v40 + 15;
        }
        if (v42 || v41) {
          return (unsigned int)(~(_DWORD)v7 + (_DWORD)a1);
        }
      }
    LABEL_57:
      if (v36 < a2) {
        return (unsigned int)(~(_DWORD)v7 + (_DWORD)a1);
      }
      if (v35 <= 7) {
        *(_DWORD*)v21 = 0;
        *(_BYTE*)v21 = *(_BYTE*)v36;
        *(_BYTE*)(v21 + 1) = *(_BYTE*)(v36 + 1);
        *(_BYTE*)(v21 + 2) = *(_BYTE*)(v36 + 2);
        *(_BYTE*)(v21 + 3) = *(_BYTE*)(v36 + 3);
        v61 = (_DWORD*)(v36 + CudaDriverData_1131be8[v35]);
        *(_DWORD*)(v21 + 4) = *v61;
        v43 = (_QWORD*)((char*)v61 - CudaDriverData_1131b48[v35]);
        v45 = v34 + 4;
        v46 = (_QWORD*)(v21 + 8);
        v8 = v21 + v34 + 4;
        if (v8 <= v10) {
          goto LABEL_60;
        }
      LABEL_81:
        if (v8 > v6 - 5) {
          return (unsigned int)(~(_DWORD)v7 + (_DWORD)a1);
        }
        if ((unsigned __int64)v46 < v13) {
          v62 = v21 + 16;
          if (v13 > v21 + 16) {
            v62 = v6 - 7;
          }
          v63 = v62 - v21 - 9;
          if (v63 >= 0x18) {
            v65 = v46;
            v64 = v43;
            if (v21 - (unsigned __int64)v43 + 8 >= 0x20) {
              v68 = (_OWORD*)(v21 + 24);
              v69 = (__int128*)(v43 + 2);
              v70 = (v63 >> 3) + 1;
              v64 = &v43[v70 & 0x3FFFFFFFFFFFFFFCLL];
              v65 = &v46[v70 & 0x3FFFFFFFFFFFFFFCLL];
              v71 = v70 & 0x3FFFFFFFFFFFFFFCLL;
              do {
                v72 = *(v69 - 1);
                v73 = *v69;
                v69 += 2;
                v71 -= 4;
                *(v68 - 1) = v72;
                *v68 = v73;
                v68 += 2;
              } while (v71 != 0);
              if (v70 == (v70 & 0x3FFFFFFFFFFFFFFCLL)) {
                goto LABEL_99;
              }
            }
          }
          else {
            v64 = v43;
            v65 = v46;
          }
          do {
            v74 = *v64++;
            *v65++ = v74;
          } while ((unsigned __int64)v65 < v13);
        LABEL_99:
          v67 = (char*)v43 + v13 - (_QWORD)v46;
          v46 = (_QWORD*)(v6 - 7);
          goto LABEL_100;
        }
        v67 = (char*)v43;
      LABEL_100:
        if ((unsigned __int64)v46 < v8) {
          v75 = v34 + v21;
          if (v13 <= v21 + 8) {
            v76 = v21 + 8;
          }
          else {
            v76 = v6 - 7;
          }
          v77 = v75 - v76 + 4;
          if (v77 < 8) {
            v78 = v46;
            goto LABEL_119;
          }
          if (v21 - (unsigned __int64)v43 + 8 < 0x20) {
            v78 = v46;
            goto LABEL_119;
          }
          if (v77 >= 0x20) {
            v79 = v77 & 0xFFFFFFFFFFFFFFE0LL;
            v80 = v46 + 2;
            v81 = v77 & 0xFFFFFFFFFFFFFFE0LL;
            v82 = (__int128*)((char*)v43 + v76 - v21 + 8);
            do {
              v83 = *(v82 - 1);
              v84 = *v82;
              v81 -= 32LL;
              v82 += 2;
              *(v80 - 1) = v83;
              *v80 = v84;
              v80 += 2;
            } while (v81 != 0);
            if (v77 != v79) {
              if ((v77 & 0x18) == 0) {
                v78 = (char*)v46 + v79;
                v67 += v79;
                goto LABEL_119;
              }
              goto LABEL_114;
            }
          }
          else {
            v79 = 0;
          LABEL_114:
            v78 = (char*)v46 + (v77 & 0xFFFFFFFFFFFFFFF8LL);
            v67 += v77 & 0xFFFFFFFFFFFFFFF8LL;
            v85 = v79 - (v77 & 0xFFFFFFFFFFFFFFF8LL);
            v86 = (char*)v43 + v79 + v76 - v21;
            v87 = (_QWORD*)((char*)v46 + v79);
            v88 = v86 - 8;
            do {
              v89 = *(_QWORD*)v88;
              v88 += 8;
              v85 += 8LL;
              *v87++ = v89;
            } while (v85 != 0);
            if (v77 != (v77 & 0xFFFFFFFFFFFFFFF8LL)) {
              do {
              LABEL_119:
                v90 = *v67++;
                *v78++ = v90;
              } while ((unsigned __int64)v78 < v8);
            }
          }
        }
      }
      else {
        v44 = *(_QWORD*)v36;
        v43 = (_QWORD*)(v36 + 8);
        *(_QWORD*)v21 = v44;
        v45 = v34 + 4;
        v46 = (_QWORD*)(v21 + 8);
        v8 = v21 + v34 + 4;
        if (v8 > v10) {
          goto LABEL_81;
        }
      LABEL_60:
        *v46 = *v43;
        if (v45 >= 0x11) {
          v47 = (_QWORD*)(v21 + 16);
          v48 = v34 + v21 + 4;
          if (v48 <= v21 + 24) {
            v48 = v21 + 24;
          }
          v49 = v48 - v21 - 17;
          if (v49 < 0x18 || v21 - (unsigned __int64)v43 + 8 < 0x20) {
            v50 = v43;
            goto LABEL_66;
          }
          v53 = (_OWORD*)(v21 + 32);
          v54 = (v49 >> 3) + 1;
          v50 = &v43[v54 & 0x3FFFFFFFFFFFFFFCLL];
          v47 += v54 & 0x3FFFFFFFFFFFFFFCLL;
          v55 = (__int128*)(v43 + 3);
          v56 = v54 & 0x3FFFFFFFFFFFFFFCLL;
          do {
            v57 = *(v55 - 1);
            v58 = *v55;
            v55 += 2;
            v56 -= 4;
            *(v53 - 1) = v57;
            *v53 = v58;
            v53 += 2;
          } while (v56 != 0);
          if (v54 != (v54 & 0x3FFFFFFFFFFFFFFCLL)) {
          LABEL_66:
            v51 = v50 + 1;
            do {
              v52 = *v51++;
              *v47++ = v52;
            } while ((unsigned __int64)v47 < v8);
          }
        }
      }
    }
    else {
      v21 = v8 + v16;
      v34 = v14 & 0xF;
      *(_OWORD*)v8 = *(_OWORD*)v15;
      v7 = &v15[v16 + 2];
      v35 = *(unsigned __int16*)&v15[v16];
      v36 = v21 - v35;
      if ((_DWORD)v34 == 15 || (unsigned int)v35 < 8 || v36 < a2) {
        if (v34 == 15) {
          goto LABEL_46;
        }
        goto LABEL_57;
      }
      *(_QWORD*)v21 = *(_QWORD*)v36;
      *(_QWORD*)(v21 + 8) = *(_QWORD*)(v36 + 8);
      *(_WORD*)(v21 + 16) = *(_WORD*)(v36 + 16);
      v8 = v21 + v34 + 4;
    }
  }
  if ((unsigned __int64)v15 >= v9) {
    goto LABEL_128;
  }
  v17 = v7 + 2;
  if ((unsigned __int64)(v7 + 2) > v9) {
    LODWORD(v7) = (_DWORD)v7 + 2;
    return (unsigned int)(~(_DWORD)v7 + (_DWORD)a1);
  }
  v18 = *v15;
  if (v18 == 255) {
    while (1) {
      v7 = v17 + 1;
      if ((unsigned __int64)(v17 + 1) > v9) {
        return (unsigned int)(~(_DWORD)v7 + (_DWORD)a1);
      }
      v59 = *v17++;
      v18 += v59;
      if (v59 != 255) {
        if (v18 != -1) {
          goto LABEL_12;
        }
        return (unsigned int)(~(_DWORD)v7 + (_DWORD)a1);
      }
    }
  }
  v7 += 2;
LABEL_12:
  v16 = v18 + 15;
  v19 = __CFADD__(v8, v16);
  v20 = __CFADD__(v7, v16);
  if (!v19 && !v20) {
    v21 = v8 + v16;
    v22 = &v7[v16];
    if (v8 + v16 <= v10 && (unsigned __int64)v22 <= v11) {
      goto LABEL_24;
    }
  LABEL_121:
    if (v22 == (unsigned __int8*)v5 && v21 <= v6) {
      v92 = a2;
      memmove_plt(v8, v7, v16);
      return (unsigned int)(v21 - v92);
    }
  }
  return (unsigned int)(~(_DWORD)v7 + (_DWORD)a1);
}

__int64 cuda_driver_25a540(unsigned __int8* a1, __int64 a2, int a3,
                           unsigned int a4)
{
  __int64 v4;
  unsigned __int16* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  unsigned __int8* v26;
  __int64 v27;
  bool v28;
  bool v29;
  unsigned __int8* v30;
  unsigned __int64 v31;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int8* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v40;
  _OWORD* v41;
  __int64 v42;
  __int128* v43;
  __int64 v44;
  __int128 v45;
  __int128 v46;
  __int64 v47;
  __int64 v48;
  bool v49;
  _BYTE* v50;
  _QWORD* v51;
  __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  unsigned __int64 v55;
  _QWORD* v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  _QWORD* v59;
  __int64* v60;
  __int64 v61;
  _OWORD* v62;
  __int64 v63;
  __int128* v64;
  __int64 v65;
  __int128 v66;
  __int128 v67;
  __int64 v68;
  __int64 v69;
  _DWORD* v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64* v73;
  _OWORD* v75;
  __int128* v76;
  __int64 v77;
  __int128 v78;
  __int128 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  _BYTE* v85;
  char* v86;
  char v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  __int128* v90;
  _OWORD* v91;
  unsigned __int64 v92;
  __int128 v93;
  __int128 v94;
  unsigned __int64 v95;
  __int64* v96;
  _QWORD* v97;
  __int64 v98;
  __int64 v101;
  unsigned __int64 v102;

  LODWORD(v4) = -1;
  if (a1 == nullptr || (a4 & 0x80000000) != 0) {
    return (unsigned int)v4;
  }
  if (a4 == 0) {
    if (a3 == 1) {
      if (*a1 != 0) {
        LODWORD(v4) = -1;
      }
      else {
        LODWORD(v4) = 0;
      }
      return (unsigned int)v4;
    }
  LABEL_131:
    LODWORD(v4) = -1;
    return (unsigned int)v4;
  }
  if (a3 == 0) {
    goto LABEL_131;
  }
  v5 = (unsigned __int16*)&a1[a3];
  v6 = a4;
  v7 = a2 + a4;
  v8 = 0;
  v9 = a2 + 8;
  v10 = a2 + 4;
  v11 = a2 + 16;
  v12 = a2 + 24;
  v13 = v7 - 32;
  v14 = v7 - 12;
  v15 = (_QWORD*)(v7 - 7);
  v102 = v7 - 5;
  v16 = a1;
  v17 = (unsigned __int64)v5 - 15;
  v18 = (unsigned __int64)(v5 - 4);
  v19 = (unsigned __int64)(v5 - 2);
  v20 = v7 - 7;
  while (1) {
    while (1) {
      v22 = v16 + 1;
      v23 = *v16;
      v24 = (_QWORD*)(a2 + v8);
      v25 = v23 >> 4;
      if ((unsigned int)(v23 >> 4) != 15) {
        break;
      }
      if ((unsigned __int64)v22 >= v17) {
        goto LABEL_125;
      }
      v26 = v16 + 2;
      if ((unsigned __int64)(v16 + 2) > v17) {
        LODWORD(v16) = (_DWORD)v16 + 2;
        goto LABEL_122;
      }
      v27 = *v22;
      if (v27 == 255) {
        while (1) {
          v16 = v26 + 1;
          if ((unsigned __int64)(v26 + 1) > v17) {
            goto LABEL_122;
          }
          v68 = *v26++;
          v27 += v68;
          if (v68 != 255) {
            if (v27 != -1) {
              goto LABEL_12;
            }
            goto LABEL_122;
          }
        }
      }
      v16 += 2;
    LABEL_12:
      v25 = v27 + 15;
      v28 = __CFADD__(v24, v25);
      v29 = __CFADD__(v16, v25);
      if (v28 || v29) {
        goto LABEL_122;
      }
      v4 = v25 + v8;
      v30 = &v16[v25];
      v31 = a2 + v25 + v8;
      if (v31 > v14 || (unsigned __int64)v30 > v18) {
        goto LABEL_118;
      }
    LABEL_24:
      v33 = v25 + a2 + v8;
      if (v33 <= v9 + v8) {
        v33 = v9 + v8;
      }
      v34 = v33 + ~a2 - v8;
      if (v34 < 0x18) {
        v35 = v16;
        goto LABEL_41;
      }
      if ((unsigned __int64)(v8 + a2 - (_QWORD)v16) < 0x20) {
        v35 = v16;
        do {
        LABEL_41:
          v47 = *(_QWORD*)v35;
          v35 += 8;
          *v24++ = v47;
        } while ((unsigned __int64)v24 < v31);
        goto LABEL_42;
      }
      v41 = (_OWORD*)(v11 + v8);
      v42 = (v34 >> 3) + 1;
      v35 = &v16[8 * (v42 & 0x3FFFFFFFFFFFFFFCLL)];
      v24 += v42 & 0x3FFFFFFFFFFFFFFCLL;
      v43 = (__int128*)(v16 + 16);
      v44 = v42 & 0x3FFFFFFFFFFFFFFCLL;
      do {
        v45 = *(v43 - 1);
        v46 = *v43;
        v43 += 2;
        v44 -= 4;
        *(v41 - 1) = v45;
        *v41 = v46;
        v41 += 2;
      } while (v44 != 0);
      if (v42 != (v42 & 0x3FFFFFFFFFFFFFFCLL)) {
        goto LABEL_41;
      }
    LABEL_42:
      v37 = *(unsigned __int16*)v30;
      v36 = v23 & 0xF;
      v16 = v30 + 2;
      v38 = v4 - v37;
      v40 = a2 + v4;
      if (v36 == 15) {
      LABEL_43:
        v22 = v16 + 1;
        if ((unsigned __int64)(v16 + 1) > v19) {
        LABEL_125:
          LODWORD(v16) = (_DWORD)v22;
        LABEL_122:
          LODWORD(v4) = ~(_DWORD)v16 + (_DWORD)a1;
          return (unsigned int)v4;
        }
        v48 = *v16;
        if (v48 == 255) {
          while (1) {
            v16 = v22 + 1;
            if ((unsigned __int64)(v22 + 1) > v19) {
              goto LABEL_122;
            }
            v69 = *v22++;
            v48 += v69;
            if (v69 != 255) {
              goto LABEL_46;
            }
          }
        }
        ++v16;
      LABEL_46:
        v49 = __CFADD__(v40, v48 + 15);
        if (v48 == -1) {
          v36 = 15;
        }
        else {
          v36 = v48 + 15;
        }
        if (v48 == -1 || v49) {
          goto LABEL_122;
        }
      }
    LABEL_54:
      if (v38 < -65536) {
        goto LABEL_122;
      }
      v50 = (_BYTE*)(a2 + v38);
      if (v37 <= 7) {
        *(_DWORD*)v40 = 0;
        *(_BYTE*)v40 = *v50;
        *(_BYTE*)(v40 + 1) = v50[1];
        *(_BYTE*)(v40 + 2) = v50[2];
        *(_BYTE*)(v40 + 3) = v50[3];
        v70 = &v50[CudaDriverData_1131be8[v37]];
        *(_DWORD*)(v40 + 4) = *v70;
        v51 = (_QWORD*)((char*)v70 - CudaDriverData_1131b48[v37]);
        v53 = v36 + 4;
        v54 = (_QWORD*)(v40 + 8);
        v8 = v36 + 4 + v4;
        v55 = a2 + v8;
        if (a2 + v8 <= v14) {
          goto LABEL_57;
        }
      LABEL_78:
        if (v55 > v102) {
          goto LABEL_122;
        }
        if (v54 >= v15) {
          goto LABEL_96;
        }
        v71 = v11 + v4;
        if (v20 > v11 + v4) {
          v71 = v20;
        }
        v72 = v71 - (v4 + a2) - 9;
        if (v72 >= 0x18) {
          v73 = v51;
          if ((unsigned __int64)(v9 + v4 - (_QWORD)v51) >= 0x20) {
            v75 = (_OWORD*)(v12 + v4);
            v76 = (__int128*)(v51 + 2);
            v101 = (v72 >> 3) + 1;
            v77 = v101 & 0x3FFFFFFFFFFFFFFCLL;
            v73 = &v51[v101 & 0x3FFFFFFFFFFFFFFCLL];
            v54 += v101 & 0x3FFFFFFFFFFFFFFCLL;
            do {
              v78 = *(v76 - 1);
              v79 = *v76;
              v76 += 2;
              v77 -= 4;
              *(v75 - 1) = v78;
              *v75 = v79;
              v75 += 2;
            } while (v77 != 0);
            if (v101 == (v101 & 0x3FFFFFFFFFFFFFFCLL)) {
              goto LABEL_95;
            }
          }
        }
        else {
          v73 = v51;
        }
        do {
          v80 = *v73++;
          *v54++ = v80;
        } while (v54 < v15);
      LABEL_95:
        v54 = v15;
        v51 = (_QWORD*)((char*)v51 + v6 - v4 - 15);
      LABEL_96:
        if ((unsigned __int64)v54 < v55) {
          v81 = v10 + v36 + v4;
          v82 = v9 + v4;
          if (v20 <= v9 + v4) {
            v83 = v9 + v4;
          }
          else {
            v83 = v20;
          }
          v84 = v81 - v83;
          if (v84 < 8) {
            goto LABEL_104;
          }
          if (v20 > v82) {
            v82 = v20;
          }
          if (v82 - (unsigned __int64)v51 < 0x20) {
          LABEL_104:
            v85 = v54;
            v86 = (char*)v51;
            goto LABEL_105;
          }
          if (v84 >= 0x20) {
            v89 = v84 & 0xFFFFFFFFFFFFFFE0LL;
            v90 = (__int128*)(v51 + 2);
            v91 = v54 + 2;
            v92 = v84 & 0xFFFFFFFFFFFFFFE0LL;
            do {
              v93 = *(v90 - 1);
              v94 = *v90;
              v89 -= 32LL;
              v90 += 2;
              *(v91 - 1) = v93;
              *v91 = v94;
              v91 += 2;
            } while (v89 != 0);
            if (v84 != v92) {
              v88 = v84 & 0xFFFFFFFFFFFFFFE0LL;
              if ((v84 & 0x18) == 0) {
                v85 = (char*)v54 + v92;
                v86 = (char*)v51 + v88;
                goto LABEL_105;
              }
              goto LABEL_113;
            }
          }
          else {
            v88 = 0;
          LABEL_113:
            v85 = (char*)v54 + (v84 & 0xFFFFFFFFFFFFFFF8LL);
            v86 = (char*)v51 + (v84 & 0xFFFFFFFFFFFFFFF8LL);
            v95 = v88 - (v84 & 0xFFFFFFFFFFFFFFF8LL);
            v96 = (_QWORD*)((char*)v51 + v88);
            v97 = (_QWORD*)((char*)v54 + v88);
            do {
              v98 = *v96++;
              v95 += 8LL;
              *v97++ = v98;
            } while (v95 != 0);
            if (v84 != (v84 & 0xFFFFFFFFFFFFFFF8LL)) {
              do {
              LABEL_105:
                v87 = *v86++;
                *v85++ = v87;
              } while ((unsigned __int64)v85 < v55);
            }
          }
        }
      }
      else {
        v52 = *(_QWORD*)v50;
        v51 = v50 + 8;
        *(_QWORD*)v40 = v52;
        v53 = v36 + 4;
        v54 = (_QWORD*)(v40 + 8);
        v8 = v36 + 4 + v4;
        v55 = a2 + v8;
        if (a2 + v8 > v14) {
          goto LABEL_78;
        }
      LABEL_57:
        *v54 = *v51;
        if (v53 >= 0x11) {
          v56 = (_QWORD*)(v40 + 16);
          v57 = v10 + v36 + v4;
          if (v57 <= v12 + v4) {
            v57 = v12 + v4;
          }
          v58 = v57 - (v4 + a2) - 17;
          if (v58 < 0x18 || (unsigned __int64)(v9 + v4 - (_QWORD)v51) < 0x20) {
            v59 = v51;
            goto LABEL_63;
          }
          v62 = (_OWORD*)(a2 + 32 + v4);
          v63 = (v58 >> 3) + 1;
          v59 = &v51[v63 & 0x3FFFFFFFFFFFFFFCLL];
          v56 += v63 & 0x3FFFFFFFFFFFFFFCLL;
          v64 = (__int128*)(v51 + 3);
          v65 = v63 & 0x3FFFFFFFFFFFFFFCLL;
          do {
            v66 = *(v64 - 1);
            v67 = *v64;
            v64 += 2;
            v65 -= 4;
            *(v62 - 1) = v66;
            *v62 = v67;
            v62 += 2;
          } while (v65 != 0);
          if (v63 != (v63 & 0x3FFFFFFFFFFFFFFCLL)) {
          LABEL_63:
            v60 = v59 + 1;
            do {
              v61 = *v60++;
              *v56++ = v61;
            } while ((unsigned __int64)v56 < v55);
          }
        }
      }
    }
    if (v22 >= (unsigned __int8*)v5 - 16 || (unsigned __int64)v24 > v13) {
      break;
    }
    v36 = v23 & 0xF;
    v4 = v8 + v25;
    *(_OWORD*)v24 = *(_OWORD*)v22;
    v16 = &v22[v25 + 2];
    v37 = *(unsigned __int16*)&v22[v25];
    v38 = v8 + v25 - v37;
    if ((_DWORD)v36 == 15 || (unsigned int)v37 < 8) {
      v40 = a2 + v4;
      if (v36 == 15) {
        goto LABEL_43;
      }
      goto LABEL_54;
    }
    v21 = a2 + v4;
    *(_QWORD*)v21 = *(_QWORD*)(a2 + v38);
    *(_QWORD*)(v21 + 8) = *(_QWORD*)(a2 + v38 + 8);
    *(_WORD*)(v21 + 16) = *(_WORD*)(a2 + v38 + 16);
    v8 = v36 + v4 + 4;
  }
  ++v16;
  v4 = v25 + v8;
  v30 = &v22[v25];
  v31 = a2 + v25 + v8;
  if (v31 <= v14 && (unsigned __int64)v30 <= v18) {
    goto LABEL_24;
  }
LABEL_118:
  if (v30 != (unsigned __int8*)v5 || v4 > v6) {
    goto LABEL_122;
  }
  memmove_plt(a2 + v8, v16, v25);
  return (unsigned int)v4;
}

__int64 cuda_driver_unplaced_13_25aba0(unsigned __int8* a1, unsigned __int64 a2,
                                       int a3, unsigned int a4, __int64 a5,
                                       unsigned __int64 a6)
{
  __int64 result;
  __int64 v8;
  unsigned __int16* v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  __int64 v18;
  bool v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int16* v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _OWORD* v26;
  __int128* v27;
  __int64 v28;
  unsigned __int8* v29;
  _QWORD* v30;
  __int64 v31;
  __int128 v32;
  __int128 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v39;
  __int64 v40;
  bool v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int128* v49;
  unsigned __int64 v50;
  _OWORD* v51;
  __int128 v52;
  __int128 v53;
  _QWORD* v54;
  __int64 v55;
  _QWORD* v56;
  _QWORD* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  _QWORD* v60;
  __int64* v61;
  __int64 v62;
  _OWORD* v63;
  __int128* v64;
  __int64 v65;
  __int64 v66;
  __int128 v67;
  __int128 v68;
  char v69;
  __int64 v70;
  __int64 v71;
  _DWORD* v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64* v76;
  _QWORD* v77;
  char* v78;
  _OWORD* v79;
  __int128* v80;
  __int64 v81;
  __int64 v82;
  __int128 v83;
  __int128 v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  _BYTE* v88;
  unsigned __int64 v89;
  _OWORD* v90;
  unsigned __int64 v91;
  __int128* v92;
  __int128 v93;
  __int128 v94;
  unsigned __int64 v95;
  _QWORD* v96;
  __int64* v97;
  __int64 v98;
  char v99;
  unsigned __int64 v101;
  int v102;
  unsigned __int64 v103;
  unsigned __int16* v104;
  __int128* v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;

  result = 0xFFFFFFFFLL;
  if (a1 == nullptr || (a4 & 0x80000000) != 0) {
    return result;
  }
  v8 = a5 + a6;
  if (a5 == 0) {
    v8 = 0;
  }
  v108 = v8;
  if (a4 == 0) {
    if (a3 == 1) {
      if (*a1 != 0) {
        return 0xFFFFFFFFLL;
      }
      else {
        return 0;
      }
    }
    return result;
  }
  if (a3 == 0) {
    return result;
  }
  v9 = (unsigned __int16*)&a1[a3];
  v102 = (int)a1;
  v103 = a2 + a4;
  v11 = a2;
  v107 = a6;
  v12 = (unsigned __int64)v9 - 15;
  v104 = v9;
  v13 = v103 - 12;
  v112 = (unsigned __int64)(v9 - 8);
  v110 = (unsigned __int64)(v9 - 2);
  v111 = (unsigned __int64)(v9 - 4);
  v101 = v103 - 7;
  v109 = v103 - 5;
  v105 = (__int128*)(a2 + 16);
  v106 = a2 + 1;
  while (1) {
    v15 = a1 + 1;
    v14 = *a1;
    v16 = v14 >> 4;
    if ((unsigned int)(v14 >> 4) == 15) {
      break;
    }
    if ((unsigned __int64)v15 >= v112 || v11 > v103 - 32) {
      ++a1;
      v21 = v11 + v16;
      v22 = (unsigned __int16*)&a1[v16];
      if (v11 + v16 > v13 || (unsigned __int64)v22 > v111) {
        goto LABEL_141;
      }
    LABEL_26:
      v24 = v16 + v11;
      if (v16 + v11 <= v11 + 8) {
        v24 = v11 + 8;
      }
      v25 = v24 + ~v11;
      if (v25 < 0x18 || v11 - (unsigned __int64)a1 < 0x20) {
        v29 = a1;
        v30 = (_QWORD*)v11;
        do {
        LABEL_46:
          v39 = *(_QWORD*)v29;
          v29 += 8;
          *v30++ = v39;
        } while ((unsigned __int64)v30 < v21);
        goto LABEL_47;
      }
      v26 = (_OWORD*)(v11 + 16);
      v27 = (__int128*)(a1 + 16);
      v28 = (v25 >> 3) + 1;
      v29 = &a1[8 * (v28 & 0x3FFFFFFFFFFFFFFCLL)];
      v30 = (_QWORD*)(v11 + 8 * (v28 & 0x3FFFFFFFFFFFFFFCLL));
      v31 = v28 & 0x3FFFFFFFFFFFFFFCLL;
      do {
        v32 = *(v27 - 1);
        v33 = *v27;
        v27 += 2;
        v31 -= 4;
        *(v26 - 1) = v32;
        *v26 = v33;
        v26 += 2;
      } while (v31 != 0);
      if (v28 != (v28 & 0x3FFFFFFFFFFFFFFCLL)) {
        goto LABEL_46;
      }
    LABEL_47:
      v35 = *v22;
      v34 = v14 & 0xF;
      a1 = (unsigned __int8*)(v22 + 1);
      v36 = v21 - v35;
      if (v34 == 15) {
      LABEL_48:
        v17 = a1 + 1;
        if ((unsigned __int64)(a1 + 1) > v110) {
        LABEL_148:
          LODWORD(a1) = (_DWORD)v17;
          return (unsigned int)(~(_DWORD)a1 + v102);
        }
        v40 = *a1;
        if (v40 == 255) {
          while (1) {
            a1 = v17 + 1;
            if ((unsigned __int64)(v17 + 1) > v110) {
              return (unsigned int)(~(_DWORD)a1 + v102);
            }
            v71 = *v17++;
            v40 += v71;
            if (v71 != 255) {
              goto LABEL_51;
            }
          }
        }
        ++a1;
      LABEL_51:
        v41 = __CFADD__(v21, v40 + 15);
        if (v40 == -1) {
          v34 = 15;
        }
        else {
          v34 = v40 + 15;
        }
        if (v40 == -1 || v41) {
          return (unsigned int)(~(_DWORD)a1 + v102);
        }
      }
    LABEL_59:
      if (a6 >> 16 == 0 && v36 + a6 < a2) {
        return (unsigned int)(~(_DWORD)a1 + v102);
      }
      v42 = v34 + 4;
      v43 = v21 + v34 + 4;
      if (v36 >= a2) {
        if (v35 <= 7) {
          *(_DWORD*)v21 = 0;
          *(_BYTE*)v21 = *(_BYTE*)v36;
          *(_BYTE*)(v21 + 1) = *(_BYTE*)(v36 + 1);
          *(_BYTE*)(v21 + 2) = *(_BYTE*)(v36 + 2);
          *(_BYTE*)(v21 + 3) = *(_BYTE*)(v36 + 3);
          v73 = (_DWORD*)(v36 + CudaDriverData_1131be8[v35]);
          *(_DWORD*)(v21 + 4) = *v73;
          v54 = (_QWORD*)((char*)v73 - CudaDriverData_1131b48[v35]);
          v56 = (_QWORD*)(v21 + 8);
          if (v43 <= v13) {
            goto LABEL_75;
          }
        LABEL_108:
          if (v43 > v109) {
            return (unsigned int)(~(_DWORD)a1 + v102);
          }
          if ((unsigned __int64)v56 < v101) {
            v74 = v21 + 16;
            if (v101 > v21 + 16) {
              v74 = v103 - 7;
            }
            v75 = v74 - v21 - 9;
            if (v75 >= 0x18) {
              v77 = v56;
              v76 = v54;
              if (v21 - (unsigned __int64)v54 + 8 >= 0x20) {
                v79 = (_OWORD*)(v21 + 24);
                v80 = (__int128*)(v54 + 2);
                v81 = (v75 >> 3) + 1;
                v76 = &v54[v81 & 0x3FFFFFFFFFFFFFFCLL];
                v77 = &v56[v81 & 0x3FFFFFFFFFFFFFFCLL];
                v82 = v81 & 0x3FFFFFFFFFFFFFFCLL;
                do {
                  v83 = *(v80 - 1);
                  v84 = *v80;
                  v80 += 2;
                  v82 -= 4;
                  *(v79 - 1) = v83;
                  *v79 = v84;
                  v79 += 2;
                } while (v82 != 0);
                if (v81 == (v81 & 0x3FFFFFFFFFFFFFFCLL)) {
                  goto LABEL_120;
                }
              }
            }
            else {
              v76 = v54;
              v77 = v56;
            }
            do {
              v85 = *v76++;
              *v77++ = v85;
            } while ((unsigned __int64)v77 < v101);
          LABEL_120:
            v78 = (char*)v54 + v101 - (_QWORD)v56;
            v56 = (_QWORD*)(v103 - 7);
            goto LABEL_121;
          }
          v78 = (char*)v54;
        LABEL_121:
          v11 = v21 + v34 + 4;
          if ((unsigned __int64)v56 < v43) {
            v86 = v103 - 7;
            if (v101 <= v21 + 8) {
              v86 = v21 + 8;
            }
            v87 = v34 + v21 - v86 + 4;
            if (v87 < 8) {
              v88 = v56;
              goto LABEL_139;
            }
            if (v21 - (unsigned __int64)v54 + 8 < 0x20) {
              v88 = v56;
              goto LABEL_139;
            }
            if (v87 < 0x20) {
              v89 = 0;
              goto LABEL_134;
            }
            v89 = v87 & 0xFFFFFFFFFFFFFFE0LL;
            v90 = v56 + 2;
            v91 = v87 & 0xFFFFFFFFFFFFFFE0LL;
            v92 = (__int128*)((char*)v54 + v86 - v21 + 8);
            do {
              v93 = *(v92 - 1);
              v94 = *v92;
              v91 -= 32LL;
              v92 += 2;
              *(v90 - 1) = v93;
              *v90 = v94;
              v90 += 2;
            } while (v91 != 0);
            v11 = v21 + v34 + 4;
            if (v87 != v89) {
              if ((v87 & 0x18) != 0) {
              LABEL_134:
                v88 = (char*)v56 + (v87 & 0xFFFFFFFFFFFFFFF8LL);
                v78 += v87 & 0xFFFFFFFFFFFFFFF8LL;
                v95 = v89 - (v87 & 0xFFFFFFFFFFFFFFF8LL);
                v96 = (_QWORD*)((char*)v56 + v89);
                v97 = (_QWORD*)((char*)v54 + v89 + v86 - v21 - 8);
                do {
                  v98 = *v97++;
                  v95 += 8LL;
                  *v96++ = v98;
                } while (v95 != 0);
                v11 = v21 + v34 + 4;
                if (v87 != (v87 & 0xFFFFFFFFFFFFFFF8LL)) {
                  goto LABEL_139;
                }
              }
              else {
                v88 = (char*)v56 + v89;
                v78 += v89;
                do {
                LABEL_139:
                  v99 = *v78++;
                  *v88++ = v99;
                } while ((unsigned __int64)v88 < v43);
                v11 = v21 + v34 + 4;
              }
            }
          }
        }
        else {
          v55 = *(_QWORD*)v36;
          v54 = (_QWORD*)(v36 + 8);
          *(_QWORD*)v21 = v55;
          v56 = (_QWORD*)(v21 + 8);
          if (v43 > v13) {
            goto LABEL_108;
          }
        LABEL_75:
          v11 = v21 + v34 + 4;
          *v56 = *v54;
          if (v42 >= 0x11) {
            v57 = (_QWORD*)(v21 + 16);
            v58 = v34 + v21 + 4;
            if (v58 <= v21 + 24) {
              v58 = v21 + 24;
            }
            v59 = v58 - v21 - 17;
            if (v59 < 0x18 || v21 - (unsigned __int64)v54 + 8 < 0x20) {
              v60 = v54;
              goto LABEL_81;
            }
            v63 = (_OWORD*)(v21 + 32);
            v64 = (__int128*)(v54 + 3);
            v65 = (v59 >> 3) + 1;
            v60 = &v54[v65 & 0x3FFFFFFFFFFFFFFCLL];
            v57 += v65 & 0x3FFFFFFFFFFFFFFCLL;
            v66 = v65 & 0x3FFFFFFFFFFFFFFCLL;
            do {
              v67 = *(v64 - 1);
              v68 = *v64;
              v64 += 2;
              v66 -= 4;
              *(v63 - 1) = v67;
              *v63 = v68;
              v63 += 2;
            } while (v66 != 0);
            v11 = v21 + v34 + 4;
            if (v65 != (v65 & 0x3FFFFFFFFFFFFFFCLL)) {
            LABEL_81:
              v61 = v60 + 1;
              do {
                v62 = *v61++;
                *v57++ = v62;
              } while ((unsigned __int64)v57 < v43);
              v11 = v21 + v34 + 4;
            }
          }
        }
      }
      else {
        if (v43 > v109) {
          return (unsigned int)(~(_DWORD)a1 + v102);
        }
        v44 = a2 - v36;
        v45 = v42 - (a2 - v36);
        if (v42 <= a2 - v36) {
          memmove_plt_alt1(v21, v108 - v44, v42);
          goto LABEL_86;
        }
        memcpy_plt(v21, v108 - v44, a2 - v36);
        v11 = v21 + v44;
        if (v45 <= v21 - v36) {
          memcpy_plt(v11, a2, v45);
        LABEL_86:
          a6 = v107;
          v11 = v21 + v34 + 4;
        }
        else {
          v46 = v106 + v21 - v36;
          if (v46 <= v34 + v21 + 4) {
            v46 = v34 + v21 + 4;
          }
          v47 = v46 + v36 - (a2 + v21);
          v48 = (char*)a2;
          if (v47 < 0x20) {
            a6 = v107;
            goto LABEL_92;
          }
          a6 = v107;
          if (v21 - v36 < 0x20) {
            goto LABEL_156;
          }
          v49 = v105;
          v11 += v47 & 0xFFFFFFFFFFFFFFE0LL;
          v48 = (char*)(a2 + (v47 & 0xFFFFFFFFFFFFFFE0LL));
          v50 = v47 & 0xFFFFFFFFFFFFFFE0LL;
          v51 = (__int128*)((char*)v105 + v21 - v36);
          do {
            v52 = *(v49 - 1);
            v53 = *v49;
            v50 -= 32LL;
            v49 += 2;
            *(v51 - 1) = v52;
            *v51 = v53;
            v51 += 2;
          } while (v50 != 0);
          if (v47 != (v47 & 0xFFFFFFFFFFFFFFE0LL)) {
          LABEL_156:
            do {
            LABEL_92:
              v69 = *v48++;
              *(_BYTE*)v11++ = v69;
            } while (v11 < v43);
          }
        }
      }
    }
    else {
      v34 = v14 & 0xF;
      v21 = v11 + v16;
      *(_OWORD*)v11 = *(_OWORD*)v15;
      a1 = &v15[v16 + 2];
      v35 = *(unsigned __int16*)&v15[v16];
      v36 = v11 + v16 - v35;
      if ((v14 & 0xF) == 0xF || (unsigned int)v35 < 8 || v36 < a2) {
        if (v34 == 15) {
          goto LABEL_48;
        }
        goto LABEL_59;
      }
      *(_QWORD*)v21 = *(_QWORD*)v36;
      *(_QWORD*)(v21 + 8) = *(_QWORD*)(v36 + 8);
      *(_WORD*)(v21 + 16) = *(_WORD*)(v36 + 16);
      v11 = v21 + v34 + 4;
    }
  }
  if ((unsigned __int64)v15 >= v12) {
    LODWORD(a1) = (_DWORD)a1 + 1;
    return (unsigned int)(~(_DWORD)a1 + v102);
  }
  v17 = a1 + 2;
  if ((unsigned __int64)(a1 + 2) > v12) {
    goto LABEL_148;
  }
  v18 = *v15;
  if (v18 == 255) {
    while (1) {
      a1 = v17 + 1;
      if ((unsigned __int64)(v17 + 1) > v12) {
        return (unsigned int)(~(_DWORD)a1 + v102);
      }
      v70 = *v17++;
      v18 += v70;
      if (v70 != 255) {
        if (v18 != -1) {
          goto LABEL_14;
        }
        return (unsigned int)(~(_DWORD)a1 + v102);
      }
    }
  }
  a1 += 2;
LABEL_14:
  v16 = v18 + 15;
  v19 = __CFADD__(v11, v18 + 15);
  v20 = __CFADD__(a1, v16);
  if (v19 || v20) {
    return (unsigned int)(~(_DWORD)a1 + v102);
  }
  v21 = v11 + v16;
  v22 = (unsigned __int16*)&a1[v16];
  if (v11 + v16 <= v13 && (unsigned __int64)v22 <= v111) {
    goto LABEL_26;
  }
LABEL_141:
  if (v22 == v104 && v21 <= v103) {
    memmove_plt_alt1(v11, (__int64)a1, v16);
    return (unsigned int)(v21 - a2);
  }
  return (unsigned int)(~(_DWORD)a1 + v102);
}

__int64 cuda_driver_25b940(unsigned __int8* a1, _BYTE* a2, int a3,
                           unsigned int a4, __int64 a5, int a6)
{
  unsigned int v6;
  unsigned __int16* v7;
  _BYTE* v8;
  _BYTE* v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  unsigned __int8* v20;
  __int64 v21;
  bool v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int8* v30;
  _QWORD* v31;
  _OWORD* v32;
  __int128* v33;
  __int64 v34;
  __int128 v35;
  __int128 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v42;
  __int64 v43;
  bool v44;
  bool v45;
  _QWORD* v46;
  __int64 v47;
  unsigned __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  __int64* v54;
  __int64 v55;
  _OWORD* v56;
  __int64 v57;
  __int128* v58;
  __int64 v59;
  __int128 v60;
  __int128 v61;
  __int64 v62;
  __int64 v63;
  _DWORD* v64;
  _BYTE* v65;
  unsigned __int64 v66;
  __int64* v67;
  _QWORD* v68;
  char* v70;
  _OWORD* v71;
  __int128* v72;
  __int64 v73;
  __int64 v74;
  __int128 v75;
  __int128 v76;
  __int64 v77;
  unsigned __int64 v78;
  _BYTE* v79;
  unsigned __int64 v80;
  _BYTE* v81;
  unsigned __int64 v82;
  _OWORD* v83;
  unsigned __int64 v84;
  __int128* v85;
  __int128 v86;
  __int128 v87;
  unsigned __int64 v88;
  char* v89;
  _QWORD* v90;
  char* v91;
  __int64 v92;
  char v93;
  int v95;

  if (a6 == 0) {
    return cuda_driver_259f40(a1, (unsigned __int64)a2, a3, a4);
  }
  if ((_BYTE*)(a5 + a6) != a2) {
    return CudaDriverRoutine_25aba0(a1, a2, a3, a4, a5, a6);
  }
  if (a6 >= 0xFFFF) {
    return cuda_driver_25a540(a1, (__int64)a2, a3, a4);
  }
  v6 = -1;
  if (a1 == nullptr || (a4 & 0x80000000) != 0) {
    return v6;
  }
  if (a4 == 0) {
    if (a3 == 1) {
      if (*a1 != 0) {
        return (unsigned int)-1;
      }
      else {
        return 0;
      }
    }
    return v6;
  }
  if (a3 == 0) {
    return v6;
  }
  v7 = (unsigned __int16*)&a1[a3];
  v8 = &a2[a4];
  v9 = &a2[-a6];
  v10 = a1;
  v11 = (unsigned __int64)a2;
  v12 = (unsigned __int64)v7 - 15;
  v13 = (unsigned __int64)(v8 - 12);
  v14 = (unsigned __int64)(v7 - 4);
  v15 = (unsigned __int64)(v7 - 2);
  v16 = (unsigned __int64)(v8 - 7);
  while (1) {
    v18 = v10 + 1;
    v17 = *v10;
    v19 = v17 >> 4;
    if ((unsigned int)(v17 >> 4) == 15) {
      break;
    }
    if (v18 >= (unsigned __int8*)v7 - 16 || v11 > (unsigned __int64)(v8 - 32)) {
      ++v10;
      v24 = v11 + v19;
      v25 = &v18[v19];
      if (v11 + v19 > v13 || (unsigned __int64)v25 > v14) {
        goto LABEL_127;
      }
    LABEL_30:
      v27 = v19 + v11;
      if (v27 <= v11 + 8) {
        v27 = v11 + 8;
      }
      v28 = v27 + ~v11;
      if (v28 < 0x18 || v11 - (unsigned __int64)v10 < 0x20) {
        v30 = v10;
        v31 = (_QWORD*)v11;
        do {
        LABEL_50:
          v42 = *(_QWORD*)v30;
          v30 += 8;
          *v31++ = v42;
        } while ((unsigned __int64)v31 < v24);
        goto LABEL_51;
      }
      v29 = (v28 >> 3) + 1;
      v30 = &v10[8 * (v29 & 0x3FFFFFFFFFFFFFFCLL)];
      v31 = (_QWORD*)(v11 + 8 * (v29 & 0x3FFFFFFFFFFFFFFCLL));
      v32 = (_OWORD*)(v11 + 16);
      v33 = (__int128*)(v10 + 16);
      v34 = v29 & 0x3FFFFFFFFFFFFFFCLL;
      do {
        v35 = *(v33 - 1);
        v36 = *v33;
        v33 += 2;
        v34 -= 4;
        *(v32 - 1) = v35;
        *v32 = v36;
        v32 += 2;
      } while (v34 != 0);
      if (v29 != (v29 & 0x3FFFFFFFFFFFFFFCLL)) {
        goto LABEL_50;
      }
    LABEL_51:
      v38 = *(unsigned __int16*)v25;
      v37 = v17 & 0xF;
      v10 = v25 + 2;
      v39 = v24 - v38;
      if (v37 == 15) {
      LABEL_52:
        v18 = v10 + 1;
        if ((unsigned __int64)(v10 + 1) > v15) {
        LABEL_134:
          LODWORD(v10) = (_DWORD)v18;
          return (unsigned int)(~(_DWORD)v10 + (_DWORD)a1);
        }
        v43 = *v10;
        if (v43 == 255) {
          while (1) {
            v10 = v18 + 1;
            if ((unsigned __int64)(v18 + 1) > v15) {
              return (unsigned int)(~(_DWORD)v10 + (_DWORD)a1);
            }
            v63 = *v18++;
            v43 += v63;
            if (v63 != 255) {
              goto LABEL_55;
            }
          }
        }
        ++v10;
      LABEL_55:
        v44 = __CFADD__(v24, v43 + 15);
        v45 = v43 == -1;
        if (v43 == -1) {
          v37 = 15;
        }
        else {
          v37 = v43 + 15;
        }
        if (v45 || v44) {
          return (unsigned int)(~(_DWORD)v10 + (_DWORD)a1);
        }
      }
    LABEL_63:
      if (v39 < (unsigned __int64)v9) {
        return (unsigned int)(~(_DWORD)v10 + (_DWORD)a1);
      }
      if (v38 <= 7) {
        *(_DWORD*)v24 = 0;
        *(_BYTE*)v24 = *(_BYTE*)v39;
        *(_BYTE*)(v24 + 1) = *(_BYTE*)(v39 + 1);
        *(_BYTE*)(v24 + 2) = *(_BYTE*)(v39 + 2);
        *(_BYTE*)(v24 + 3) = *(_BYTE*)(v39 + 3);
        v64 = (_DWORD*)(v39 + CudaDriverData_1131be8[v38]);
        *(_DWORD*)(v24 + 4) = *v64;
        v46 = (_QWORD*)((char*)v64 - CudaDriverData_1131b48[v38]);
        v48 = v37 + 4;
        v49 = (_QWORD*)(v24 + 8);
        v11 = v24 + v37 + 4;
        if (v11 <= v13) {
          goto LABEL_66;
        }
      LABEL_87:
        if (v11 > (unsigned __int64)(v8 - 5)) {
          return (unsigned int)(~(_DWORD)v10 + (_DWORD)a1);
        }
        if ((unsigned __int64)v49 < v16) {
          v65 = (_BYTE*)(v24 + 16);
          if (v16 > v24 + 16) {
            v65 = v8 - 7;
          }
          v66 = (unsigned __int64)&v65[-v24 - 9];
          if (v66 >= 0x18) {
            v68 = v49;
            v67 = v46;
            if (v24 - (unsigned __int64)v46 + 8 >= 0x20) {
              v71 = (_OWORD*)(v24 + 24);
              v72 = (__int128*)(v46 + 2);
              v73 = (v66 >> 3) + 1;
              v67 = &v46[v73 & 0x3FFFFFFFFFFFFFFCLL];
              v68 = &v49[v73 & 0x3FFFFFFFFFFFFFFCLL];
              v74 = v73 & 0x3FFFFFFFFFFFFFFCLL;
              do {
                v75 = *(v72 - 1);
                v76 = *v72;
                v72 += 2;
                v74 -= 4;
                *(v71 - 1) = v75;
                *v71 = v76;
                v71 += 2;
              } while (v74 != 0);
              if (v73 == (v73 & 0x3FFFFFFFFFFFFFFCLL)) {
                goto LABEL_105;
              }
            }
          }
          else {
            v67 = v46;
            v68 = v49;
          }
          do {
            v77 = *v67++;
            *v68++ = v77;
          } while ((unsigned __int64)v68 < v16);
        LABEL_105:
          v70 = (char*)v46 + v16 - (_QWORD)v49;
          v49 = v8 - 7;
          goto LABEL_106;
        }
        v70 = (char*)v46;
      LABEL_106:
        if ((unsigned __int64)v49 < v11) {
          v78 = v37 + v24;
          if (v16 <= v24 + 8) {
            v79 = (_BYTE*)(v24 + 8);
          }
          else {
            v79 = v8 - 7;
          }
          v80 = v78 - (_QWORD)v79 + 4;
          if (v80 < 8) {
            v81 = v49;
            goto LABEL_125;
          }
          if (v24 - (unsigned __int64)v46 + 8 < 0x20) {
            v81 = v49;
            goto LABEL_125;
          }
          if (v80 >= 0x20) {
            v82 = v80 & 0xFFFFFFFFFFFFFFE0LL;
            v83 = v49 + 2;
            v84 = v80 & 0xFFFFFFFFFFFFFFE0LL;
            v85 = (__int128*)&v79[(_QWORD)v46 - v24 + 8];
            do {
              v86 = *(v85 - 1);
              v87 = *v85;
              v84 -= 32LL;
              v85 += 2;
              *(v83 - 1) = v86;
              *v83 = v87;
              v83 += 2;
            } while (v84 != 0);
            if (v80 != v82) {
              if ((v80 & 0x18) == 0) {
                v81 = (char*)v49 + v82;
                v70 += v82;
                goto LABEL_125;
              }
              goto LABEL_120;
            }
          }
          else {
            v82 = 0;
          LABEL_120:
            v81 = (char*)v49 + (v80 & 0xFFFFFFFFFFFFFFF8LL);
            v70 += v80 & 0xFFFFFFFFFFFFFFF8LL;
            v88 = v82 - (v80 & 0xFFFFFFFFFFFFFFF8LL);
            v89 = &v79[v82 - v24 + (_QWORD)v46];
            v90 = (_QWORD*)((char*)v49 + v82);
            v91 = v89 - 8;
            do {
              v92 = *(_QWORD*)v91;
              v91 += 8;
              v88 += 8LL;
              *v90++ = v92;
            } while (v88 != 0);
            if (v80 != (v80 & 0xFFFFFFFFFFFFFFF8LL)) {
              do {
              LABEL_125:
                v93 = *v70++;
                *v81++ = v93;
              } while ((unsigned __int64)v81 < v11);
            }
          }
        }
      }
      else {
        v47 = *(_QWORD*)v39;
        v46 = (_QWORD*)(v39 + 8);
        *(_QWORD*)v24 = v47;
        v48 = v37 + 4;
        v49 = (_QWORD*)(v24 + 8);
        v11 = v24 + v37 + 4;
        if (v11 > v13) {
          goto LABEL_87;
        }
      LABEL_66:
        *v49 = *v46;
        if (v48 >= 0x11) {
          v50 = (_QWORD*)(v24 + 16);
          v51 = v37 + v24 + 4;
          if (v51 <= v24 + 24) {
            v51 = v24 + 24;
          }
          v52 = v51 - v24 - 17;
          if (v52 < 0x18 || v24 - (unsigned __int64)v46 + 8 < 0x20) {
            v53 = v46;
            goto LABEL_72;
          }
          v56 = (_OWORD*)(v24 + 32);
          v57 = (v52 >> 3) + 1;
          v53 = &v46[v57 & 0x3FFFFFFFFFFFFFFCLL];
          v50 += v57 & 0x3FFFFFFFFFFFFFFCLL;
          v58 = (__int128*)(v46 + 3);
          v59 = v57 & 0x3FFFFFFFFFFFFFFCLL;
          do {
            v60 = *(v58 - 1);
            v61 = *v58;
            v58 += 2;
            v59 -= 4;
            *(v56 - 1) = v60;
            *v56 = v61;
            v56 += 2;
          } while (v59 != 0);
          if (v57 != (v57 & 0x3FFFFFFFFFFFFFFCLL)) {
          LABEL_72:
            v54 = v53 + 1;
            do {
              v55 = *v54++;
              *v50++ = v55;
            } while ((unsigned __int64)v50 < v11);
          }
        }
      }
    }
    else {
      v24 = v11 + v19;
      v37 = v17 & 0xF;
      *(_OWORD*)v11 = *(_OWORD*)v18;
      v10 = &v18[v19 + 2];
      v38 = *(unsigned __int16*)&v18[v19];
      v39 = v24 - v38;
      if ((_DWORD)v37 == 15 || (unsigned int)v38 < 8 ||
          v39 < (unsigned __int64)v9) {
        if (v37 == 15) {
          goto LABEL_52;
        }
        goto LABEL_63;
      }
      *(_QWORD*)v24 = *(_QWORD*)v39;
      *(_QWORD*)(v24 + 8) = *(_QWORD*)(v39 + 8);
      *(_WORD*)(v24 + 16) = *(_WORD*)(v39 + 16);
      v11 = v24 + v37 + 4;
    }
  }
  if ((unsigned __int64)v18 >= v12) {
    goto LABEL_134;
  }
  v20 = v10 + 2;
  if ((unsigned __int64)(v10 + 2) > v12) {
    LODWORD(v10) = (_DWORD)v10 + 2;
    return (unsigned int)(~(_DWORD)v10 + (_DWORD)a1);
  }
  v21 = *v18;
  if (v21 == 255) {
    while (1) {
      v10 = v20 + 1;
      if ((unsigned __int64)(v20 + 1) > v12) {
        return (unsigned int)(~(_DWORD)v10 + (_DWORD)a1);
      }
      v62 = *v20++;
      v21 += v62;
      if (v62 != 255) {
        if (v21 != -1) {
          goto LABEL_18;
        }
        return (unsigned int)(~(_DWORD)v10 + (_DWORD)a1);
      }
    }
  }
  v10 += 2;
LABEL_18:
  v19 = v21 + 15;
  v22 = __CFADD__(v11, v19);
  v23 = __CFADD__(v10, v19);
  if (!v22 && !v23) {
    v24 = v11 + v19;
    v25 = &v10[v19];
    if (v11 + v19 <= v13 && (unsigned __int64)v25 <= v14) {
      goto LABEL_30;
    }
  LABEL_127:
    if (v25 == (unsigned __int8*)v7 && v24 <= (unsigned __int64)v8) {
      v95 = (int)a2;
      memmove_plt(v11, v10, v19);
      return (unsigned int)(v24 - v95);
    }
  }
  return (unsigned int)(~(_DWORD)v10 + (_DWORD)a1);
}

#pragma GCC visibility pop
