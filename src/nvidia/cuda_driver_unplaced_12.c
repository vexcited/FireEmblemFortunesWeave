#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_22f550(_DWORD*, unsigned __int64, __int64);
_DWORD* CudaDriverRoutine_22f5d0(_DWORD*, unsigned __int64, int);
_QWORD* CudaDriverRoutine_1dc5c0(__int64, unsigned __int64, unsigned __int64,
                                 __int64, char);
_QWORD* CudaDriverRoutine_208ba0(_QWORD* result, unsigned int, unsigned int,
                                 _QWORD*, _QWORD*);
__int64 CudaDriverRoutine_1052a0(__int64, __int64, unsigned __int64, char);
__int64 CudaDriverRoutine_106620(__int64, __int64*, _QWORD*);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_10a2a0(__int64, __int64, unsigned int*, unsigned int,
                                 __int64, _DWORD*, char*, _DWORD*, _DWORD*,
                                 _DWORD*);
__int64 CudaDriverRoutine_110820(__int64, __int64, __int64, __int64, __int64,
                                 __int64, __int64);
__int64 CudaDriverRoutine_11f370(__int64, unsigned int);
__int64 CudaDriverRoutine_11f790(__int64, unsigned int);
__int64 CudaDriverRoutine_11fa80(__int64);
__int64 CudaDriverRoutine_11fd60(__int64);
__int64 CudaDriverRoutine_127d00();
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_15fd0(__int64);
__int64 CudaDriverRoutine_197480(__int64 result, __int64, unsigned int,
                                 unsigned int*, __int64, unsigned int, _QWORD*,
                                 unsigned int*);
__int64 CudaDriverRoutine_1a1670(__int64, int);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64);
__int64 CudaDriverRoutine_1a2b00(__int64 result,
                                 __int64 (*)(_QWORD, _QWORD, __int64), __int64);
__int64 CudaDriverRoutine_1dba10(__int64, unsigned __int64);
__int64 CudaDriverRoutine_1ffe30(__int64);
__int64 CudaDriverRoutine_2045e0(_QWORD*);
__int64 CudaDriverRoutine_2077b0(__int64 result);
__int64 CudaDriverRoutine_222da0(__int64 result);
__int64 CudaDriverRoutine_229ac0(__int64);
__int64 CudaDriverRoutine_22bf00(__int64);
__int64 CudaDriverRoutine_22c0a0(__int64, int*);
__int64 CudaDriverRoutine_22c0d0(unsigned int);
__int64 CudaDriverRoutine_22c310(__int64, __int64);
__int64 CudaDriverRoutine_22c390(_DWORD*, unsigned int);
__int64 CudaDriverRoutine_22c420();
__int64 CudaDriverRoutine_22d3e0(__int64 result, int);
__int64 CudaDriverRoutine_237c20();
__int64 CudaDriverRoutine_270();
__int64 CudaDriverRoutine_4d0d0(__int64 result);
__int64 CudaDriverRoutine_4fe60(__int64, __int64);
__int64 CudaDriverRoutine_5f800(__int64 result, int);
__int64 CudaDriverRoutine_633b0(_DWORD*, double*);
__int64 CudaDriverRoutine_928b0(__int64, _DWORD*, _DWORD*);
__int64 CudaDriverRoutine_92a90(__int64, __int64, __int64);
__int64 CudaDriverRoutine_96f20(__int64, __int64, __int64, unsigned int,
                                __int64, __int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_99f40(__int64, _DWORD*, int);
__int64 CudaDriverRoutine_9ab30(__int64, _BYTE*);
__int64 CudaDriverRoutine_9afb0(unsigned int, _QWORD*);
__int64 CudaDriverRoutine_bbd70(__int64 result, _QWORD*);
__int64 CudaDriverRoutine_bc3f0(__int64);
__int64 CudaDriverRoutine_bc6c0(__int64, int, char);
__int64 CudaDriverRoutine_bc770(__int64);
__int64 CudaDriverRoutine_df060(__int64*);
__int64 CudaDriverRoutine_e37f0(__int64, _QWORD*);
__int64 CudaDriverRoutine_e3830(__int64, __int64, __int64, __int64, __int64,
                                __int64, _QWORD*);
__int64 CudaDriverRoutine_e4c90(_BYTE*, __int64, __int64, __int64);
__int64 CudaDriverRoutine_e7e40(__int64);
__int64 CudaDriverRoutine_ecea0(__int64, __int64, _BYTE*);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_ee030(__int64, __int64, _QWORD*, __int128*);
__int64 CudaDriverRoutine_ee2a0(__int64, __int64);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_10f720(_QWORD);
__int64 CudaDriverStub_112e30(_QWORD);
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_4f8b0(_QWORD, long double);
__int64 CudaDriverStub_8e230(_QWORD);
__int64 CudaDriverStub_9b050(_QWORD);
__int64 CudaDriverStub_e4960(__int64, _QWORD*, int);
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_194b20(int*, char);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_e4b80(__int64, __int64);
__int64 cuda_driver_helpers_1db920(__int64, unsigned __int64);
__int64 cuda_driver_misc_helpers_4bb0(__int64 result);
__int64 cuda_driver_predicates_10f750(__int64, int, unsigned int, __int64,
                                      _DWORD*, __int64);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 puts_plt(_QWORD);
__int64 strlen_plt(_QWORD);
unsigned __int8 CudaDriverRoutine_11f2f0(__int64);
unsigned __int8 CudaDriverRoutine_11f690(__int64*);
unsigned __int8 CudaDriverRoutine_11f6d0(__int64);
unsigned __int8 CudaDriverRoutine_985b0(int);
unsigned __int8 CudaDriverRoutine_bbdf0(__int64);
unsigned __int8 CudaDriverRoutine_bbe30(__int64);
unsigned __int8 CudaDriverRoutine_bbe70(__int64);
unsigned __int8 CudaDriverRoutine_e7cb0(__int64, __int64, unsigned int);
unsigned __int8 CudaDriverStub_985a0(__int64);
unsigned __int8 CudaDriverStub_b9300(__int64);
extern _DWORD CudaDriverData_1130110[6];
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_1432188;
extern _UNKNOWN CudaDriverData_f00000;
extern __int128 CudaDriverData_11152b0;
extern __int128 CudaDriverData_11152c0;
extern __int128 CudaDriverData_1115360;
extern __int128 CudaDriverData_1115400;
extern __int128 CudaDriverData_1115460;
extern __int128 CudaDriverData_1115470;
extern __int128 CudaDriverData_11154b0;
extern __int128 CudaDriverData_11154e0;
extern __int128 CudaDriverData_1115550;
extern __int128 CudaDriverData_1115570;
extern __int128 CudaDriverData_1115610;
extern __int128 CudaDriverData_1115620;
extern __int128 CudaDriverData_1115690;
extern __int128 CudaDriverData_11156d0;
extern __int128 CudaDriverData_1115710;
extern __int128 CudaDriverData_1115740;
extern __int128 CudaDriverData_1115760;
extern __int128 CudaDriverData_11157f0;
extern __int128 CudaDriverData_1115800;
extern __int128 CudaDriverData_1115810;
extern __int128 CudaDriverData_11158c0;
extern __int128 CudaDriverData_11158f0;
extern __int128 CudaDriverData_1115980;
extern __int128 CudaDriverData_1115990;
extern __int128 CudaDriverData_1115a00;
extern __int128 CudaDriverData_1115b20;
extern __int128 CudaDriverData_1115b60;
extern __int128 CudaDriverData_1115bb0;
extern __int128 CudaDriverData_1115c80;
extern __int128 CudaDriverData_1115cc0;
extern __int128 CudaDriverData_1115cd0;
extern __int128 CudaDriverData_1115d90;
extern __int128 CudaDriverData_1115da0;
extern __int128 CudaDriverData_1115f30;
extern __int128 CudaDriverData_1116030;
extern __int128 CudaDriverData_1116060;
extern __int128 CudaDriverData_1116100;
extern __int128 CudaDriverData_11161c0;
extern __int128 CudaDriverData_1116240;
extern __int128 CudaDriverData_1116250;
extern __int128 CudaDriverData_1116270;
extern __int128 CudaDriverData_11162d0;
extern __int128 CudaDriverData_11162e0;
extern __int64 (*CudaDriverData_14364f8)(_QWORD, _QWORD, _QWORD, _QWORD);
float cuda_driver_11f820(_BYTE*, float*);
long double CudaDriverRoutine_11f810(long double*, __int64);
long double cuda_driver_e4e00(__int64, char);
unsigned __int64* CudaDriverRoutine_ee010(unsigned __int64* result, char);
unsigned __int64 cuda_driver_108520(__int64);
void CudaDriverRoutine_4198();
void CudaDriverRoutine_41a8();
void CudaDriverRoutine_41ac();
void CudaDriverRoutine_41b0();
void CudaDriverRoutine_4358();
void CudaDriverRoutine_43c8();
void CudaDriverRoutine_4460();
void CudaDriverRoutine_4464();
void CudaDriverRoutine_4484();
void CudaDriverRoutine_46fc();
void CudaDriverRoutine_4728();
void CudaDriverRoutine_47f8();
void CudaDriverRoutine_5190();
void CudaDriverRoutine_71c8();
void CudaDriverRoutine_71cc();
void CudaDriverRoutine_71d0();
void CudaDriverRoutine_7370();
void CudaDriverRoutine_7378();
void CudaDriverRoutine_743c();
void CudaDriverRoutine_7458();
void CudaDriverRoutine_7460();
void CudaDriverRoutine_7478();
void CudaDriverRoutine_747c();
__int64 cuda_driver_21ebe0(_QWORD* a1, unsigned __int64 a2, float64x2_t* a3,
                           float64x2_t* a4);
__int64 cuda_driver_220a80(__int64 a1);
__int64 cuda_driver_220d00(__int64 a1);
__int64 cuda_driver_220d40(__int64 a1);
int (**cuda_driver_2226e0(int (**result)(_QWORD), __int64 a2))(_QWORD);
int (**cuda_driver_2227a0(int (**result)(_QWORD), __int64 a2))(_QWORD);
__int64 cuda_driver_2281f0();
__int64 cuda_driver_228210();
__int64 cuda_driver_228eb0(__int64 a1, __int64 a2, __int64 a3);
long double cuda_driver_229040(__int64 a1, __int64 a2, unsigned int* a3,
                               __int64 a4);
_DWORD* cuda_driver_229660(__int64 a1, _DWORD** a2, __int64 a3);
__int64 cuda_driver_229b00(__int64 a1, __int64 a2, unsigned int a3, int a4,
                           __int64 a5, __int64 a6, int* a7);
__int64 cuda_driver_229d60(__int64 a1, unsigned int* a2, unsigned __int64* a3,
                           bool* a4);
__int64 cuda_driver_229ea0(__int64 a1, int a2, int a3, unsigned int* a4,
                           unsigned __int64* a5, char* a6);
__int64 cuda_driver_22a080(__int64 a1);
__int64 cuda_driver_22afd0(__int64 a1);
__int64 cuda_driver_22bda0(__int64 result, unsigned __int64 a2,
                           unsigned int a3);
__int64 cuda_driver_22bf40(__int64 a1);
__int64 cuda_driver_22cbd0(__int64 a1);
__int64 cuda_driver_22d7a0(__int64 a1, double* a2);
__int64 cuda_driver_22db50(int* a1);
double cuda_driver_22dc00(__int64 a1, __int64 a2, char a3);
__int64 cuda_driver_22dc70(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5);
__int64 cuda_driver_22df80(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                           char a9);
__int64 cuda_driver_22e340(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                           _QWORD* a5, __int64 a6);
__int64 cuda_driver_22e580(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_22f3e0(__int64 result, __int64 a2, __int64 a3);
int8x8_t cuda_driver_22f900(__int64 a1, int8x8_t* a2, __int64 a3);
__int64 cuda_driver_22fbb0(__int64* a1, __int64 a2, __int64 a3, char a4);
_DWORD* cuda_driver_230150(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                           unsigned __int64 a5, __int64 a6, unsigned int a7);
_DWORD* cuda_driver_2314c0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           int a5);
__int64 cuda_driver_2330a0(__int64 a1, __int64 a2, __int64 a3, bool* a4);
__int64 cuda_driver_233200(__int64 a1, __int64 a2, int a3);
__int64 cuda_driver_233e00(__int64 a1, _BYTE* a2);
__int64 cuda_driver_234030(__int64 a1, __int64 a2);
__int64 cuda_driver_234060(__int64 a1, __int64 a2, int a3);
__int64 cuda_driver_234680(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                           int8x16_t* a5);
__int64 cuda_driver_235010(int a1);
__int64 cuda_driver_235200(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                           __int64 a5, int a6);
__int64 cuda_driver_235330(_DWORD* a1);
__int64 cuda_driver_2353a0();
void cuda_driver_2353f0();
__int64 cuda_driver_235540(int a1);
__int64 cuda_driver_2355a0(int a1);
bool cuda_driver_2355d0();
__int64 cuda_driver_235620(__int64 result);
__int64 cuda_driver_2358f0(int a1);
__int64 cuda_driver_235ac0(unsigned __int64 a1, unsigned __int64 a2,
                           unsigned __int64 a3, _QWORD* a4);
void cuda_driver_235bb0();
__int64 cuda_driver_235d40(int a1);
void cuda_driver_235d90();
void cuda_driver_235e40();
__int64 cuda_driver_235e60(__int64 result);
__int64 cuda_driver_235ea0();
void cuda_driver_235f00();
void cuda_driver_236210();
__int64 cuda_driver_236320(__int64 result);
__int64 cuda_driver_236610(unsigned int a1, unsigned int a2, _DWORD* a3);
__int64 cuda_driver_236b30(__int64 a1);
__int64 cuda_driver_236bb0(__int64 a1);
__int64 cuda_driver_236d70(__int64 result, __int64 a2);
__int64 cuda_driver_236f40(__int64 result);
__int64 cuda_driver_236fb0(__int64 result);
__int64 cuda_driver_236fe0(__int64 result);
__int64 cuda_driver_237010(__int64 result);
__int64 cuda_driver_237170(__int64 a1, __int64 a2);
__int64 cuda_driver_2372b0(__int64 a1);
__int64 cuda_driver_2373c0(unsigned int a1, __int64* a2, _QWORD* a3);
__int64 cuda_driver_237460(int a1, int a2);
__int64 cuda_driver_2374c0(__int64 result);
void cuda_driver_2375b0();
void cuda_driver_237670();
__int64 cuda_driver_237690(__int64 result);
__int64 cuda_driver_2376c0(_QWORD* a1);
__int64 cuda_driver_237830(char a1);
__int64 cuda_driver_2378e0(__int64 a1, __int64 a2);
__int64 cuda_driver_237ba0(char a1);
__int64 cuda_driver_237bc0(char a1);
__int64 cuda_driver_237be0(char a1);
__int64 cuda_driver_237c00(char a1);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverStub_1db7a0(__int64);
__int64 CudaDriverStub_1dbfb0(__int64);
__int64 CudaDriverStub_1dbfc0(_QWORD);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
unsigned __int8 CudaDriverRoutine_1ec4a0(__int64, _QWORD*);
__int64 cuda_driver_21f6b0(__int64 a1, unsigned __int64* a2);
__int64 cuda_driver_21f790(unsigned int* a1, __int64 a2, __int64 a3);

__int64 cuda_driver_21ebe0(_QWORD* a1, unsigned __int64 a2, float64x2_t* a3,
                           float64x2_t* a4)
{

#pragma clang fp contract(off)
  __int64 result;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  float64x2_t* v14;
  float64x2_t* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  bool v29;
  char v30;
  double* v32;
  float64x2_t* v33;
  float64x2_t* v34;
  unsigned __int64 v35;
  double* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned int v41;
  float64x2x2_t v42;
  float64x2x2_t v43;

  if (a1 == nullptr) {
    return 1;
  }
  if (a2 == 0) {
    return 0;
  }
  result = 1;
  if (a3 != nullptr && a4 != nullptr) {
    v9 = CudaDriverStub_12e330(16 * a2);
    if (v9 == 0) {
      return 2;
    }
    v10 = v9;
    v11 = a2;
    if (a2 >= 0xA) {
      v28 = v9 + 16 * a2;
      v12 = 0;
      v14 = a3;
      v15 = a4;
      v29 = v9 >= (unsigned __int64)&LANES128(*(a4)).n128_u64[a2] ||
            (unsigned __int64)a4 >= v28;
      v30 = !v29;
      v29 = (unsigned __int64)a3 >= v28;
      v13 = a1;
      if ((v29 || v9 >= (unsigned __int64)&LANES128(*(a3)).n128_u64[a2]) &&
          (v30 & 1) == 0) {
        v12 = a2 & 0xFFFFFFFFFFFFFFFCLL;
        v32 = (double*)(v9 + 32);
        v33 = a4 + 1;
        v34 = a3 + 1;
        v35 = a2 & 0xFFFFFFFFFFFFFFFCLL;
        do {
          v42.val[0] = v34[-1];
          v43.val[0] = *v34;
          v42.val[1] = v33[-1];
          v43.val[1] = *v33;
          v36 = v32 - 4;
          v35 -= 4LL;
          v33 += 2;
          v34 += 2;
          vst2q_f64(v32, v43);
          v32 += 8;
          vst2q_f64(v36, v42);
        } while (v35 != 0);
        if (a2 == v12) {
        LABEL_34:
          v37 = v13[61];
          if (v37 != 0) {
            CudaDriverRoutine_12e340(v37);
            v11 = a2;
            v13 = a1;
          }
          v38 = v13[3];
          v13[61] = v10;
          v13[62] = v11;
          v39 = (__int64)v13;
          v40 = v11;
          cuda_driver_108520(v38 + 24);
          v41 = CudaDriverRoutine_1052a0(v39, v10, v40, 2);
          CudaDriverRoutine_1085d0(*(_QWORD*)(v39 + 24) + 24LL);
          return v41;
        }
      }
    }
    else {
      v12 = 0;
      v13 = a1;
      v14 = a3;
      v15 = a4;
    }
    v16 = v12;
    v17 = ((_BYTE)a2 - (_BYTE)v12) & 7;
    if ((((_BYTE)a2 - (_BYTE)v12) & 7) != 0) {
      v18 = (__int64*)(v9 + 16 * v12 + 8);
      v16 = v12;
      do {
        --v17;
        *(v18 - 1) = LANES128(*(v14)).n128_i64[v16];
        v19 = LANES128(*(v15)).n128_i64[v16++];
        *v18 = v19;
        v18 += 2;
      } while (v17 != 0);
    }
    if (v12 - a2 <= 0xFFFFFFFFFFFFFFF8LL) {
      v20 = a2 - v16;
      v21 = v9 + 16 * v16;
      v22 = 8 * v16 + 32;
      v23 = (_QWORD*)(v21 + 64);
      v24 = (unsigned __int64*)((char*)LANES128(*(v15)).n128_u64 + v22);
      v25 = (unsigned __int64*)((char*)LANES128(*(v14)).n128_u64 + v22);
      do {
        v20 -= 8LL;
        *(v23 - 8) = *(v25 - 4);
        *(v23 - 7) = *(v24 - 4);
        *(v23 - 6) = *(v25 - 3);
        *(v23 - 5) = *(v24 - 3);
        *(v23 - 4) = *(v25 - 2);
        *(v23 - 3) = *(v24 - 2);
        *(v23 - 2) = *(v25 - 1);
        *(v23 - 1) = *(v24 - 1);
        *v23 = *v25;
        v23[1] = *v24;
        v23[2] = v25[1];
        v23[3] = v24[1];
        v23[4] = v25[2];
        v23[5] = v24[2];
        v26 = v25[3];
        v25 += 8;
        v23[6] = v26;
        v27 = v24[3];
        v24 += 8;
        v23[7] = v27;
        v23 += 16;
      } while (v20 != 0);
    }
    goto LABEL_34;
  }
  return result;
}

__int64 cuda_driver_21f6b0(__int64 a1, unsigned __int64* a2)
{
  unsigned int v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned __int64 v8;
  struct {
    char gap0_[8];
    unsigned __int64 v10;
    __int128 v11;
    __int128 v12;
  } v10_;

  v2 = 1;
  v10_.v11 = (__typeof__(v10_.v11)){0};
  v10_.v12 = (__typeof__(v10_.v12)){0};
  if (a1 == 0 || a2 == nullptr) {
    return v2;
  }
  v3 = *a2;
  if (*a2 == 0) {
    return 1;
  }
  v4 = *(_QWORD*)(a1 + 64);
  if (*(_DWORD*)(v4 + 21864) == 4) {
    v5 = *(_QWORD*)(v4 + 19824);
    v6 = *(_DWORD*)(*(_QWORD*)(v5 + 8) + 28LL);
    v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) + 8LL);
    DWORD2(v10_.v12) = *(_DWORD*)(v5 + 116);
    if (v3 >= 0x28) {
      v8 = 40;
    }
    else {
      v8 = v3;
    }
    v10_.v10 = v8;
    DWORD2(v10_.v11) = -1;
    DWORD3(v10_.v11) = v6;
    *(_QWORD*)&v10_.v12 = *(_QWORD*)(*(_QWORD*)(v7 + 33864) + 4LL);
    memcpy_plt((__int64)a2, (__int64)&v10_.v10, v8);
    return 0;
  }
  return 101;
}

__int64 cuda_driver_21f790(unsigned int* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  unsigned int* v6;
  __int64 v7;
  _QWORD* v8;
  unsigned int v9;
  __int64 v10;
  _QWORD* v11;
  int v12;
  __int64 v13;
  bool v14;
  unsigned int v15;
  unsigned __int64 v16;
  struct {
    __int128 v17;
    __int128 v18;
    __int128 v19;
  } v17_;

  result = 1;
  v17_.v18 = (__typeof__(v17_.v18)){0};
  v17_.v19 = (__typeof__(v17_.v19)){0};
  v17_.v17 = (__typeof__(v17_.v17)){0};
  if (a1 != nullptr && a2 != 0 && a3 != 0 && *a1 != 0) {
    v6 = a1;
    v7 = CudaDriverStub_1dbfc0(a3);
    if (v7 == 0) {
      return 1;
    }
    v8 = (_QWORD*)v7;
    v9 = CudaDriverRoutine_1db1b0(a3);
    v10 = CudaDriverRoutine_1db1b0(a3);
    if (v8[21] != 0) {
      v11 = (_QWORD*)v8[21];
    }
    else {
      v11 = v8;
    }
    (*(void (**)(_QWORD*, char*))(v8[79] + 2320LL))(v11, (char*)&v17_.v17 + 4);
    *((_QWORD*)&v17_.v17 + 1) = 0;
    if ((v9 & 0x78000000) == 0x8000000 ||
        (unsigned int)((v12 = (v9 >> 26) & 0x1F) - 9) >= 0xFFFFFFFE) {
      *((_QWORD*)&v17_.v17 + 1) = CudaDriverStub_1db7a0(a3);
      v13 = CudaDriverStub_102e00(a3);
    }
    else if ((v9 & 0x74000000) == 0x10000000 || v12 == 1) {
      *((_QWORD*)&v17_.v17 + 1) = CudaDriverStub_1db7a0(a3);
      v13 = CudaDriverStub_1db800(a3);
    }
    else {
      result = 1;
      if (v12 != 0 || (v10 & 0x7C0000000000000LL) != 0x3C0000000000000LL) {
        return result;
      }
      v13 = *(_QWORD*)(a3 + 216);
      *((_QWORD*)&v17_.v17 + 1) = v8[11];
    }
    *((_QWORD*)&v17_.v18 + 1) = v13;
    *(_QWORD*)&v17_.v19 = CudaDriverStub_1dbf90(a3);
    *(_QWORD*)&v17_.v18 = CudaDriverStub_1dbfb0(a3);
    v14 = CudaDriverRoutine_1ec4a0(v11[79], v11 + 30);
    v15 = *v6;
    DWORD2(v17_.v19) = !v14;
    if (v15 >= 0x30) {
      v16 = 48;
    }
    else {
      v16 = v15;
    }
    LODWORD(v17_.v17) = v16;
    memcpy_plt((__int64)v6, (__int64)&v17_.v17, v16);
    return 0;
  }
  return result;
}

__int64 cuda_driver_220a80(__int64 a1)
{
  if (a1 == 0) {
    return 999;
  }
  if (*(_DWORD*)a1 != 0) {
    return 201;
  }
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 20704LL))((void*)a1);
}

__int64 cuda_driver_220d00(__int64 a1)
{
  __int64 v1;

  if (a1 == 0) {
    return 999;
  }
  v1 = CudaDriverRoutine_98340(a1);
  return (*(__int64 (**)(void*))(*(_QWORD*)(v1 + 64) + 20720LL))((void*)v1);
}

__int64 cuda_driver_220d40(__int64 a1)
{
  if (a1 == 0) {
    return 999;
  }
  if (*(_DWORD*)a1 != 0) {
    return 201;
  }
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 20728LL))((void*)a1);
}

int (**cuda_driver_2226e0(int (**result)(_QWORD), __int64 a2))(_QWORD)
{
  int (**v3)(_QWORD);
  int (**v4)(_QWORD);
  _QWORD* v5;

  if (result != nullptr) {
    v3 = result;
    result =
        *((int (***)(_QWORD))v3[5] + (*result)(a2) % (unsigned __int64)v3[4]);
    if (result != nullptr) {
      result = (int (**)(_QWORD))CudaDriverRoutine_4d0d0((__int64)result);
      if (result != nullptr) {
        v4 = result;
        while (1) {
          v5 = (_QWORD*)CudaDriverRoutine_222da0((__int64)v4);
          if (((unsigned int (*)(_QWORD, __int64))v3[1])(*v5, a2) != 0) {
            break;
          }
          result = (int (**)(_QWORD))CudaDriverRoutine_4d0d0((__int64)v4);
          v4 = result;
          if (result == nullptr) {
            return result;
          }
        }
        return (int (**)(_QWORD))v5[1];
      }
    }
  }
  return result;
}

int (**cuda_driver_2227a0(int (**result)(_QWORD), __int64 a2))(_QWORD)
{
  int (**v3)(_QWORD);
  __int64 v4;
  _QWORD* v5;

  if (result != nullptr) {
    v3 = result;
    result =
        *((int (***)(_QWORD))v3[5] + (*result)(a2) % (unsigned __int64)v3[4]);
    if (result != nullptr) {
      result = (int (**)(_QWORD))CudaDriverRoutine_4d0d0((__int64)result);
      if (result != nullptr) {
        v4 = (__int64)result;
        while (1) {
          v5 = (_QWORD*)CudaDriverRoutine_222da0(v4);
          if (((unsigned int (*)(_QWORD, __int64))v3[1])(*v5, a2) != 0) {
            break;
          }
          result = (int (**)(_QWORD))CudaDriverRoutine_4d0d0(v4);
          v4 = (__int64)result;
          if (result == nullptr) {
            return result;
          }
        }
        return (int (**)(_QWORD))(((char*)0x0LL) + 1);
      }
    }
  }
  return result;
}

__int64 cuda_driver_2281f0()
{
  *((_BYTE*)((_UNKNOWN*)0x17BCLL) + (_QWORD)CudaDriverData_1422118) = 1;
  return 0;
}

__int64 cuda_driver_228210()
{
  return *((unsigned __int8*)((_UNKNOWN*)0x17BCLL) +
           (_QWORD)CudaDriverData_1422118);
}

__int64 cuda_driver_228eb0(__int64 a1, __int64 a2, __int64 a3)
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

long double cuda_driver_229040(__int64 a1, __int64 a2, unsigned int* a3,
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

  v4 = a3[5];
  v50 = 0;
  *(_OWORD*)v52_.v52 = (__typeof__(*(_OWORD*)v52_.v52)){0};
  v52_.v53 = (__typeof__(v52_.v53)){0};
  v52_.v54 = (__typeof__(v52_.v54)){0};
  v52_.v55 = (__typeof__(v52_.v55)){0};
  a3[5] = v4 & 0x3FFFFFF;
  v9 = a3[11] & 0xFFFCBFFF;
  memset(v51, 0, sizeof(v51));
  a3[11] = v9;
  CudaDriverRoutine_bbd70(a2, &v50);
  v10 = a3[17];
  v11 = HIDWORD(v50) & 0x1FFFF | (a3[49] >> 17 << 17);
  a3[48] = v50;
  a3[49] = v11;
  a3[11] |= 0x44000000u;
  v12 = a3[20];
  a3[29] = a3[29] & 0x7FFFFFF | 0x8000000;
  v13 = *(_DWORD*)(a2 + 392);
  a3[22] = 0;
  a3[20] = v12 & 0xFFFE00FF | ((v13 & 0x1FF) << 8);
  a3[21] = 0;
  *((_BYTE*)a3 + 72) = 35;
  *((_BYTE*)a3 + 127) =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3164LL) << 24) +
                     (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3160LL) << 28)) >>
      24;
  v14 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3888LL);
  v15 = ((unsigned __int64)(unsigned int)(v14 - 1) + 8448) / v14 * v14;
  v16 = v10 & 0xFFFC0000 | v15 & 0x3FFFF;
  a3[17] = v16;
  v17 = (CudaDriverRoutine_22c0d0(0x8000u) & 0x7F) << 18;
  a3[17] = v16 & 0xFE03FFFF | v17;
  v18 = v17 & 0x3FC0000 |
        ((unsigned int)CudaDriverRoutine_22c0d0(0x10000u) << 25) |
        v15 & 0x3FFFF;
  v19 = a3[20];
  a3[17] = v18;
  a3[20] =
      v19 & 0xFF01FFFF | ((CudaDriverRoutine_22c0d0(0x8000u) & 0x7F) << 17);
  v20 = CudaDriverStub_112e30(*(_QWORD*)(a1 + 96));
  CudaDriverRoutine_96f20(a1, a2, v20, 0, (__int64)v52_.v52, (__int64)v51);
  v21 = *(unsigned int**)(a1 + 64);
  if (v21[944] != 0) {
    v22 = 1075;
    v23 = 0;
    do {
      while (1) {
        v24 = v52_.v52[v23];
        if (v24 != 0) {
          break;
        }
        a3[(unsigned int)(v23 + 640) >> 5] &= ~(1 << (v23 & 0x1F));
        v21 = *(unsigned int**)(a1 + 64);
        ++v23;
        v22 += 64;
        if (v23 >= v21[944]) {
          goto LABEL_6;
        }
      }
      v25 = ((v51[v23] + v21[946] - 1) / v21[946] * v21[946]) << 15;
      a3[(unsigned int)(v23 + 640) >> 5] |= 1 << (v23 & 0x1F);
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
  a3[(v21[2927] + 640) >> 5] |= 1 << (v21[2927] & 0x1F);
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
  a3[16] = (a3[16] & 0xFF8003FF | 0x88000) + 770048;
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
  v36 = v50;
  v37 = v35;
  v38 = CudaDriverRoutine_22bf00(v35);
  v39 = CudaDriverRoutine_229ac0(v37);
  v40 = v39;
  v41 = HIDWORD(v39);
  v42 = CudaDriverRoutine_15fd0(a2);
  PSEUDO_LOW_LANE128(v43, n128_u64, v52_.v55);
  v44 = v42;
  v48 = vextq_s8(v52_.v53, v52_.v54, 8u);
  v49 = *(_OWORD*)v52_.v52;
  v47 = vextq_s8(v52_.v54, v43, 8u);
  v45 = CudaDriverStub_1db800(*(_QWORD*)(v37 + 2232));
  *((_QWORD*)a3 + 259) = v38;
  a3[520] = v40;
  a3[521] = v41;
  a3[522] = v44;
  a3[523] = 0;
  *((_QWORD*)a3 + 263) = a4;
  *((_QWORD*)a3 + 292) = 0;
  *((_QWORD*)a3 + 293) = v45;
  *((_QWORD*)a3 + 1036) = v36;
  *((_QWORD*)a3 + 1039) = 0;
  *((_QWORD*)a3 + 136) = a4 + 2048;
  *((_QWORD*)a3 + 258) = 0x100000001LL;
  *((int8x16_t*)a3 + 133) = v48;
  *((int8x16_t*)a3 + 134) = v47;
  *((_QWORD*)a3 + 262) = -4;
  *((_OWORD*)a3 + 132) = v49;
  *((_OWORD*)a3 + 128) = CudaDriverData_1115550;
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
  *((_OWORD*)a3 + 145) = (__typeof__(*((_OWORD*)a3 + 145))){0};
  *((_OWORD*)a3 + 149) = (__typeof__(*((_OWORD*)a3 + 149))){0};
  *((_OWORD*)a3 + 148) = (__typeof__(*((_OWORD*)a3 + 148))){0};
  *((_OWORD*)a3 + 147) = (__typeof__(*((_OWORD*)a3 + 147))){0};
  *(_OWORD*)(a3 + 2074) = (__typeof__(*(_OWORD*)(a3 + 2074))){0};
  return *(long double*)&CudaDriverData_1115550;
}

_DWORD* cuda_driver_229660(__int64 a1, _DWORD** a2, __int64 a3)
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
  DWORD2(v50_.v54) = 35;
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
  v22 = (CudaDriverRoutine_22c0d0(0x8000u) & 0x7F) << 18;
  DWORD1(v50_.v54) = v22 & 0x3FC0000 |
                     ((unsigned int)CudaDriverRoutine_22c0d0(0x10000u) << 25) |
                     v21 & 0x3FFFF;
  v23 = v20 & 0x1FFFF | ((CudaDriverRoutine_22c0d0(0x8000u) & 0x7F) << 17);
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
        CudaDriverRoutine_22f550(v3, *(_QWORD*)(v10 + 8), (__int64)v50_.v50);
  }
  else {
    v47 = *(__int64 (**)(_DWORD*, __int64, _QWORD, _QWORD*, __int64, __int64))(
        *(_QWORD*)(a1 + 64) + 19248LL);
    v48 = CudaDriverRoutine_98340(a1);
    v49 = (_DWORD*)v47(v3, v48, *(_QWORD*)(v10 + 8), v50_.v50, 256, 2);
    result = CudaDriverRoutine_22f5d0(v49, *(_QWORD*)(v10 + 8), 1);
  }
  *a2 = result;
  return result;
}

__int64 cuda_driver_229b00(__int64 a1, __int64 a2, unsigned int a3, int a4,
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
      v18 = *(_DWORD*)(a2 + 72);
    LABEL_18:
      v20 = (v18 + 15) & 0xFFFFFFF0;
      v19 = 1;
      *(_DWORD*)(a6 + 28) = v20;
      goto LABEL_24;
    }
    v18 = *(_DWORD*)(a2 + 72);
    if (*(_DWORD*)(a5 + 28) < v18) {
      goto LABEL_18;
    }
    if (*(_DWORD*)(a5 + 32) == ((v16 + (_DWORD)v12 + 15) & 0xFFFFFFF0)) {
    LABEL_23:
      v19 = 3;
    LABEL_24:
      *a7 = v19;
      v21 = *(_DWORD*)(a6 + 28);
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
  v21 = *(_DWORD*)(a6 + 28);
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
    v26 = *(_QWORD*)(a1 + 64);
    v27 = (*(_DWORD*)(v26 + 3924) * (v25 + v21) + 511) & 0xFFFFFE00;
    v28 = *(unsigned int*)(v26 + 3756) * (unsigned __int64)v27 + 0x7FFF;
    v29 = *(unsigned int*)(a1 + 164);
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
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Requested stack size exceeds limit\n");
    return 1;
  }
}

__int64 cuda_driver_229d60(__int64 a1, unsigned int* a2, unsigned __int64* a3,
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

__int64 cuda_driver_229ea0(__int64 a1, int a2, int a3, unsigned int* a4,
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

__int64 cuda_driver_22a080(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  int v3;
  __int64* v4;
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
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  char v28;
  unsigned int v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  __int16 v35;
  int v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  int v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  bool v53;
  unsigned int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  unsigned int v59;
  int v60;
  char v61;
  unsigned int v62;
  unsigned int v63;
  int v64;
  unsigned int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  int v73;
  int v74;
  __int64 v75;
  float v76;
  int v77;
  int v78;
  int v79;
  int v80;
  float v81;
  _BOOL4 v82;
  bool v83;
  double v84;
  int v85;
  int v86;
  unsigned int v87;
  float v88;
  _BOOL4 v89;
  bool v90;
  __int16 v91;
  float v92;
  int v93;
  int v94;
  int v95;
  int v96;
  unsigned int v98;
  __int64 v99;
  __int64* v103;
  int v104;
  int v105;
  long double v107;
  _BYTE v108[4];

  v1 = *(_DWORD*)(a1 + 40);
  *(_OWORD*)(a1 + 336) = (__typeof__(*(_OWORD*)(a1 + 336))){0};
  *(_OWORD*)(a1 + 352) = (__typeof__(*(_OWORD*)(a1 + 352))){0};
  *(_OWORD*)(a1 + 368) = (__typeof__(*(_OWORD*)(a1 + 368))){0};
  *(_OWORD*)(a1 + 384) = (__typeof__(*(_OWORD*)(a1 + 384))){0};
  if (v1 == 1) {
    if (*(_DWORD*)(a1 + 120) != 0) {
      v3 = 1;
    }
    else {
      v3 = 2;
    }
    v4 = (__int64*)(a1 + 8);
    if (!CudaDriverStub_985a0(*(_QWORD*)(a1 + 8))) {
      goto LABEL_11;
    }
  LABEL_8:
    if (*(_DWORD*)(a1 + 40) == 2 && *(_BYTE*)(a1 + 920) != 0) {
      v3 = 1;
    }
    goto LABEL_11;
  }
  v3 = 0;
  v4 = (__int64*)(a1 + 8);
  if (CudaDriverStub_985a0(*(_QWORD*)(a1 + 8))) {
    goto LABEL_8;
  }
LABEL_11:
  v5 = CudaDriverRoutine_11fa80(a1);
  v6 = 1;
  v7 = 29;
  switch (v5) {
  case 0:
    v7 = 28;
    goto LABEL_34;
  case 3:
    v7 = 20;
    goto LABEL_34;
  case 6:
    v7 = 21;
    goto LABEL_34;
  case 47:
    v7 = 34;
    goto LABEL_34;
  case 48:
    v7 = 35;
    goto LABEL_34;
  case 54:
    v7 = 9;
    goto LABEL_34;
  case 69:
    v7 = 1;
    goto LABEL_34;
  case 76:
    v7 = 3;
    goto LABEL_34;
  case 80:
    v7 = 4;
    goto LABEL_34;
  case 88:
    v7 = 8;
    goto LABEL_34;
  case 93:
    v7 = 12;
    goto LABEL_34;
  case 97:
    v7 = 15;
    goto LABEL_34;
  case 103:
    v7 = 24;
    goto LABEL_34;
  case 107:
    v7 = 27;
    goto LABEL_34;
  case 113:
    goto LABEL_34;
  case 119:
    v7 = 36;
    goto LABEL_34;
  case 121:
    v7 = 37;
    goto LABEL_34;
  case 123:
    v7 = 38;
    goto LABEL_34;
  case 125:
    v7 = 39;
    goto LABEL_34;
  case 127:
    v7 = 40;
    goto LABEL_34;
  case 130:
    v7 = 17;
    goto LABEL_34;
  case 131:
    v7 = 16;
    goto LABEL_34;
  case 132:
    v7 = 23;
  LABEL_34:
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
    LABEL_50:
      *(_DWORD*)(a1 + 336) = v12 & 0xFFF8007F | ((v13 & 0xFFF) << 7);
      v10 = CudaDriverRoutine_11f370(a1, 0);
      if (v10 <= 2) {
        goto LABEL_39;
      }
      goto LABEL_51;
    }
    if (v9 == 3) {
      v12 = *v8;
      v13 = 2340;
      goto LABEL_50;
    }
    if (v9 == 4) {
      v12 = *v8;
      v13 = 1755;
      goto LABEL_50;
    }
    if (v9 != 5) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 | 0x7FF80;
    v10 = CudaDriverRoutine_11f370(a1, 0);
    if (v10 <= 2) {
    LABEL_39:
      if (v10 != 0) {
        if (v10 == 1) {
          *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x100000;
          v11 = CudaDriverRoutine_11f370(a1, 1u);
          if (v11 <= 2) {
            goto LABEL_73;
          }
        }
        else {
          if (v10 != 2) {
            return v6;
          }
          *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x180000;
          v11 = CudaDriverRoutine_11f370(a1, 1u);
          if (v11 <= 2) {
            goto LABEL_73;
          }
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_73;
        }
      }
    LABEL_64:
      if (v11 > 4) {
        if (v11 == 5) {
          *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x1800000;
          v14 = CudaDriverRoutine_11f370(a1, 2u);
          if (v14 <= 2) {
            goto LABEL_92;
          }
        }
        else {
          if (v11 != 6) {
            return v6;
          }
          *(_DWORD*)(a1 + 336) = *v8 | 0x1C00000;
          v14 = CudaDriverRoutine_11f370(a1, 2u);
          if (v14 <= 2) {
            goto LABEL_92;
          }
        }
      }
      else if (v11 == 3) {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x1000000;
        v14 = CudaDriverRoutine_11f370(a1, 2u);
        if (v14 <= 2) {
          goto LABEL_92;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x1400000;
        v14 = CudaDriverRoutine_11f370(a1, 2u);
        if (v14 <= 2) {
          goto LABEL_92;
        }
      }
    LABEL_83:
      if (v14 > 4) {
        if (v14 == 5) {
          *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0xC000000;
          v15 = CudaDriverRoutine_11f370(a1, 3u);
          if (v15 <= 2) {
            goto LABEL_111;
          }
        }
        else {
          if (v14 != 6) {
            return v6;
          }
          *(_DWORD*)(a1 + 336) = *v8 | 0xE000000;
          v15 = CudaDriverRoutine_11f370(a1, 3u);
          if (v15 <= 2) {
            goto LABEL_111;
          }
        }
      }
      else if (v14 == 3) {
        *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0x8000000;
        v15 = CudaDriverRoutine_11f370(a1, 3u);
        if (v15 <= 2) {
          goto LABEL_111;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0xA000000;
        v15 = CudaDriverRoutine_11f370(a1, 3u);
        if (v15 <= 2) {
          goto LABEL_111;
        }
      }
    LABEL_102:
      if (v15 > 4) {
        if (v15 == 5) {
          v16 = *v8 & 0x8FFFFFFF | 0x60000000;
          v17 = *(_DWORD*)(a1 + 328);
          *(_DWORD*)(a1 + 336) = v16;
          if ((v17 & 8) == 0) {
            goto LABEL_122;
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
            goto LABEL_122;
          }
        }
      }
      else if (v15 == 3) {
        v16 = *v8 & 0x8FFFFFFF | 0x40000000;
        v17 = *(_DWORD*)(a1 + 328);
        *(_DWORD*)(a1 + 336) = v16;
        if ((v17 & 8) == 0) {
          goto LABEL_122;
        }
      }
      else {
        v16 = *v8 & 0x8FFFFFFF | 0x50000000;
        v17 = *(_DWORD*)(a1 + 328);
        *(_DWORD*)(a1 + 336) = v16;
        if ((v17 & 8) == 0) {
          goto LABEL_122;
        }
      }
    LABEL_121:
      *v8 = v16 | 0x80000000;
      goto LABEL_122;
    }
  LABEL_51:
    if (v10 <= 4) {
      if (v10 == 3) {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x200000;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_73;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x280000;
        v11 = CudaDriverRoutine_11f370(a1, 1u);
        if (v11 <= 2) {
          goto LABEL_73;
        }
      }
      goto LABEL_64;
    }
    if (v10 == 5) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xFFC7FFFF | 0x300000;
      v11 = CudaDriverRoutine_11f370(a1, 1u);
      if (v11 <= 2) {
        goto LABEL_73;
      }
      goto LABEL_64;
    }
    if (v10 != 6) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 | 0x380000;
    v11 = CudaDriverRoutine_11f370(a1, 1u);
    if (v11 > 2) {
      goto LABEL_64;
    }
  LABEL_73:
    if (v11 == 0) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF;
      v14 = CudaDriverRoutine_11f370(a1, 2u);
      if (v14 <= 2) {
        goto LABEL_92;
      }
      goto LABEL_83;
    }
    if (v11 == 1) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0x800000;
      v14 = CudaDriverRoutine_11f370(a1, 2u);
      if (v14 <= 2) {
        goto LABEL_92;
      }
      goto LABEL_83;
    }
    if (v11 != 2) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 & 0xFE3FFFFF | 0xC00000;
    v14 = CudaDriverRoutine_11f370(a1, 2u);
    if (v14 > 2) {
      goto LABEL_83;
    }
  LABEL_92:
    if (v14 == 0) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF;
      v15 = CudaDriverRoutine_11f370(a1, 3u);
      if (v15 <= 2) {
        goto LABEL_111;
      }
      goto LABEL_102;
    }
    if (v14 == 1) {
      *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0x4000000;
      v15 = CudaDriverRoutine_11f370(a1, 3u);
      if (v15 <= 2) {
        goto LABEL_111;
      }
      goto LABEL_102;
    }
    if (v14 != 2) {
      return v6;
    }
    *(_DWORD*)(a1 + 336) = *v8 & 0xF1FFFFFF | 0x6000000;
    v15 = CudaDriverRoutine_11f370(a1, 3u);
    if (v15 > 2) {
      goto LABEL_102;
    }
  LABEL_111:
    if (v15 == 0) {
      v16 = *v8 & 0x8FFFFFFF;
      v17 = *(_DWORD*)(a1 + 328);
      *(_DWORD*)(a1 + 336) = v16;
      if ((v17 & 8) == 0) {
        goto LABEL_122;
      }
      goto LABEL_121;
    }
    if (v15 == 1) {
      v16 = *v8 & 0x8FFFFFFF | 0x20000000;
      v17 = *(_DWORD*)(a1 + 328);
      *(_DWORD*)(a1 + 336) = v16;
      if ((v17 & 8) == 0) {
        goto LABEL_122;
      }
      goto LABEL_121;
    }
    if (v15 != 2) {
      return v6;
    }
    v16 = *v8 & 0x8FFFFFFF | 0x30000000;
    v17 = *(_DWORD*)(a1 + 328);
    *(_DWORD*)(a1 + 336) = v16;
    if ((v17 & 8) != 0) {
      goto LABEL_121;
    }
  LABEL_122:
    if (v3 != 0) {
      if (v3 != 1) {
        v37 = *(_QWORD*)(a1 + 128);
        v28 = 1;
        v38 = *(_DWORD*)(a1 + 344) & 0xE11E0000;
        *(_DWORD*)(a1 + 340) = v37;
        *(_DWORD*)(a1 + 344) = HIDWORD(v37) & 0x1FFFF | v38 | 0x1E000000;
        LODWORD(v37) = *(_DWORD*)(a1 + 104) - 1;
        *(_WORD*)(a1 + 348) = WORD1(v37);
        v29 = *(_DWORD*)(a1 + 352) & 0xF87F0000 | (unsigned __int16)v37 |
              0x3000000;
        *(_DWORD*)(a1 + 352) = v29;
        if ((v17 & 0x10) == 0) {
          goto LABEL_172;
        }
      LABEL_171:
        *(_DWORD*)(a1 + 352) = v29 | 0x400000;
        goto LABEL_172;
      }
      v18 = 0x400000;
      v19 = -32;
      v20 = 31;
    }
    else {
      v18 = 6291456;
      v19 = -512;
      v20 = 511;
    }
    v21 = *(_DWORD*)(a1 + 132);
    *(_DWORD*)(a1 + 340) =
        *(_DWORD*)(a1 + 340) & v20 | v19 & *(_DWORD*)(a1 + 128);
    v22 = v21 & 0x1FFFF | *(_DWORD*)(a1 + 344) & 0xE11E0000 | v18;
    v23 = *(_DWORD*)(a1 + 348);
    *(_DWORD*)(a1 + 344) = v22 | 0x1E000000;
    v24 = v23 | 0x10000;
    *(_DWORD*)(a1 + 348) = v24;
    if (v3 != 1) {
      v30 = *(_QWORD*)(a1 + 64);
      v31 = v24 & 0xFFFFFFF8 | *(_DWORD*)(v30 + 40) & 7;
      *(_DWORD*)(a1 + 348) = v31;
      v32 = v31 & 0xFFFFFFC7 | (8 * (*(_DWORD*)(v30 + 44) & 7));
      *(_DWORD*)(a1 + 348) = v32;
      v33 = v32 & 0xFFFFFE3F | ((*(_DWORD*)(v30 + 48) & 7) << 6);
      *(_DWORD*)(a1 + 348) = v33;
      if ((*(_BYTE*)(v30 + 32) & 0x40) != 0) {
        v34 = *(_DWORD*)(v30 + 144);
        if (v34 < 2) {
          v36 = 0;
        }
        else {
          v35 = 0;
          do {
            v35 += 1024;
            v83 = v34 > 3;
            v34 >>= 1;
          } while (v83);
          v36 = v35 & 0x1C00;
        }
        v33 = v36 | v33 & 0xFFFFE3FF;
        *(_DWORD*)(a1 + 348) = v33;
      }
      v39 = *(_QWORD*)(a1 + 88);
      if (v39 != 0) {
        v33 =
            (v33 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v39 + 40) << 28)) -
            0x10000000;
      }
      v40 = *(_DWORD*)(a1 + 104);
      v41 = *(_DWORD*)(a1 + 108);
      *(_DWORD*)(a1 + 348) = v33 | 0x60000;
      v42 = *(_DWORD*)(a1 + 352) & 0xFFF80000 | (v40 - 1) & 0x1FFFF;
      v43 = (4 * v41 + 524284) & 0x40000;
      if (v41 == 0) {
        v43 = 0;
      }
      v44 = v43 | v42;
      v45 = *(_DWORD*)(a1 + 112);
      if (v45 != 0) {
        v46 = (8 * v45 + 262136) & 0x20000;
      }
      else {
        v46 = 0;
      }
      v47 = v44 | v46;
      *(_DWORD*)(a1 + 352) = v47;
      v48 = *(_DWORD*)(v30 + 8);
      if (v48 > 3) {
        v49 = v47 & 0xF87FFFFF | 0x4000000;
        v50 = v47 & 0xF87FFFFF | 0x1800000;
        v51 = v47 & 0xF87FFFFF | 0x2000000;
        if (v48 != 7) {
          v49 = v47;
        }
        if (v48 != 6) {
          v50 = v49;
        }
        if (v48 == 5) {
          v47 = v47 & 0xF87FFFFF | 0x2800000;
        }
        if (v48 == 4) {
          v47 = v51;
        }
        if (v48 <= 5) {
          v52 = v47;
        }
        else {
          v52 = v50;
        }
        goto LABEL_170;
      }
      if (v48 == 1) {
        if (!CudaDriverRoutine_11f690((__int64*)a1)) {
          v52 = *(_DWORD*)(a1 + 352) & 0xF87FFFFF;
          goto LABEL_170;
        }
      }
      else if (v48 != 2) {
        v53 = v48 == 3;
        v52 = v47 & 0xF87FFFFF | 0x1000000;
        if (!v53) {
          v52 = v47;
        }
      LABEL_170:
        v29 = v52 | 0xE0000000;
        v55 = *(_DWORD*)(a1 + 328);
        v28 = 0;
        *(_DWORD*)(a1 + 352) = v29;
        if ((v55 & 0x10) == 0) {
          goto LABEL_172;
        }
        goto LABEL_171;
      }
      v54 = *(_DWORD*)(a1 + 352) & 0xF87FFFFF;
      if (*(_DWORD*)(a1 + 120) != 0) {
        v52 = v54 | 0x3800000;
      }
      else {
        v52 = v54 | 0x800000;
      }
      goto LABEL_170;
    }
    v25 = *(_DWORD*)(a1 + 116);
    v26 = *(_QWORD*)(a1 + 88);
    v27 = v24 & 0xFFFF0000 | (unsigned __int16)(v25 >> 5);
    *(_DWORD*)(a1 + 348) = v27;
    if (v26 != 0) {
      v27 = (v27 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v26 + 40) << 28)) -
            0x10000000;
    }
    v28 = 0;
    *(_DWORD*)(a1 + 348) = v27 | 0x60000;
    v29 = *(_DWORD*)(a1 + 352) & 0x187C0000 |
          (*(_DWORD*)(a1 + 104) - 1) & 0x1FFFF | (v25 >> 4) & 0x20000 |
          0xE3800000;
    *(_DWORD*)(a1 + 352) = v29;
    if ((v17 & 0x10) != 0) {
      goto LABEL_171;
    }
  LABEL_172:
    if ((v28 & 1) == 0) {
      v56 = *(_DWORD*)(a1 + 108);
      v57 = *(_DWORD*)(a1 + 112);
      v53 = v56 == 0;
      v58 = (unsigned __int16)(v56 - 1);
      if (v53) {
        v58 = 0;
      }
      v59 = v58 | *(_DWORD*)(a1 + 356) & 0xC0000000;
      v60 = ((v57 << 16) + 1073676288) & 0x3FFF0000;
      if (v57 == 0) {
        v60 = 0;
      }
      *(_DWORD*)(a1 + 356) = v60 | v59;
      if (CudaDriverRoutine_11f6d0(a1)) {
        *(_DWORD*)(a1 + 356) |= 0x80000000;
      }
      v61 = *(_BYTE*)(a1 + 328);
      v62 = *(_DWORD*)(a1 + 360) & 0xF87FFFFF | 0x3000000;
      *(_DWORD*)(a1 + 360) = v62;
      if ((v61 & 0x20) == 0) {
        v63 = *(_DWORD*)(a1 + 296);
        if (v63 > 7) {
          v65 = v62 & 0xFB7FFFC1 | 0x10;
        }
        else {
          v64 = 1 << v63;
          if ((v64 & 0xF0) != 0) {
            v65 = v62 & 0xFB7FFFC1 | 0xC;
          }
          else if ((v64 & 3) != 0) {
            v65 = v62 & 0xFB7FFFC1;
          }
          else {
            v65 = v62 & 0xFB7FFFC1 | 8;
          }
        }
        *(_DWORD*)(a1 + 360) = v65;
      }
    }
    if (*(_QWORD*)(a1 + 88) != 0) {
      *(_DWORD*)(a1 + 364) = *(_DWORD*)(a1 + 364) & 0xFFFFFF00 |
                             *(_DWORD*)(a1 + 136) & 0xF |
                             (16 * (*(_DWORD*)(a1 + 140) & 0xF));
    }
    v66 = CudaDriverRoutine_11f790(a1, 0);
    v6 = 1;
    if (v66 > 2) {
      if ((unsigned int)(v66 - 3) >= 2) {
        return v6;
      }
    }
    else {
      switch (v66) {
      case 0:
        goto LABEL_199;
      case 1:
        v66 = 2;
        break;
      case 2:
        v66 = 1;
        break;
      default:
        return v6;
      }
    }
    *(_DWORD*)(a1 + 368) |= v66;
  LABEL_199:
    v67 = CudaDriverRoutine_11f790(a1, 1u);
    if (v67 <= 1) {
      if (v67 == 0) {
        goto LABEL_210;
      }
      if (v67 != 1) {
        return v6;
      }
      v68 = 16;
    }
    else {
      switch (v67) {
      case 4:
        v68 = 32;
        break;
      case 3:
        v68 = 24;
        break;
      case 2:
        v68 = 8;
        break;
      default:
        return v6;
      }
    }
    *(_DWORD*)(a1 + 368) |= v68;
  LABEL_210:
    v69 = CudaDriverRoutine_11f790(a1, 2u);
    if (v69 <= 1) {
      if (v69 != 0) {
        if (v69 != 1) {
          return v6;
        }
        v70 = *(_DWORD*)(a1 + 368) | 0x80;
      }
      else {
        v70 = *(_DWORD*)(a1 + 368);
      }
    LABEL_221:
      *(_DWORD*)(a1 + 368) = v70 | 0x2000;
      v71 = *(_DWORD*)(a1 + 296);
      v72 = 1056768;
      if ((int)v71 > 5) {
        if (v71 <= 0xF) {
          if (((1 << v71) & 0xF000) != 0) {
            v72 = 6299648;
            goto LABEL_236;
          }
          if (((1 << v71) & 0x300) != 0) {
            v72 = 4202496;
            goto LABEL_236;
          }
          if (((1 << v71) & 0xC00) != 0) {
            v72 = 5251072;
            goto LABEL_236;
          }
        }
        if (v71 - 6 < 2) {
          v72 = 3153920;
          goto LABEL_236;
        }
      }
      else {
        if (v71 < 2) {
          goto LABEL_237;
        }
        if (v71 - 2 < 2) {
        LABEL_236:
          *(_DWORD*)(a1 + 368) = v70 | v72;
        LABEL_237:
          if (*(_DWORD*)(a1 + 276) == 1) {
            v73 = 34;
          }
          else {
            v73 = 17;
          }
          v74 = *(_DWORD*)(a1 + 372) | v73;
          v75 = *(_QWORD*)(a1 + 88);
          if (v75 != 0) {
            v76 = 0x0.0p+0f;
            if (*(_DWORD*)(a1 + 280) == 1) {
              v77 = 192;
            }
            else {
              v77 = 128;
            }
            v78 = v74 | v77;
            if ((v28 & 1) == 0 && (*(_BYTE*)(a1 + 328) & 0x20) == 0) {
              if (v71 > 7) {
                v76 = -0x1.0000000000000p-2f;
                v78 |= 0x20000000u;
              }
              else {
                v79 = 1 << v71;
                if ((v79 & 0xF0) != 0) {
                  v78 |= 0x18000000u;
                  v76 = -0x1.b6db6e0000000p-3f;
                }
                else if ((v79 & 3) != 0) {
                  v76 = -0x0.0p+0f;
                }
                else {
                  v78 |= 0x10000000u;
                  v76 = -0x1.5555560000000p-3f;
                }
              }
            }
            v81 = v76 + *(float*)(a1 + 284);
            v82 = v81 >= 0x1.e000000000000p+3f;
            v83 = v81 <= -0x1.e000000000000p+3f;
            v84 = v81;
            v85 = !v83 || v82;
            if (v83) {
              v82 = true;
            }
            if (v85 != 0) {
              v86 = 3840;
            }
            else {
              v86 = 4352;
            }
            v87 = vcvtd_n_s32_f64(v84, 8u) & 0x1FFF;
            if (!v82) {
              v86 = v87;
            }
            v80 = v78 | (v86 << 12);
            *(_DWORD*)(a1 + 372) = v80;
            if ((v28 & 1) != 0) {
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
                goto LABEL_268;
              }
            }
            else {
              *(_DWORD*)(a1 + 360) =
                  *(_DWORD*)(a1 + 360) & 0xFFF8003F | ((v86 & 0x1FFF) << 6);
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              LABEL_268:
                if (v75 == 0) {
                  goto LABEL_269;
                }
                goto LABEL_273;
              }
            }
          }
          else {
            v80 = v74 | 0x40;
            *(_DWORD*)(a1 + 372) = v74 | 0x40;
            if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              goto LABEL_268;
            }
          }
          *(_DWORD*)(a1 + 372) = v80 | 0x300;
          if (v75 == 0) {
          LABEL_269:
            if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) != 3) {
            LABEL_295:
              if ((unsigned int)CudaDriverRoutine_11f790(a1, 1u) != 3 &&
                  (unsigned int)CudaDriverRoutine_11f790(a1, 2u) != 3) {
                return 0;
              }
            }
          LABEL_297:
            CudaDriverRoutine_11f810(&v107, a1);
            v99 = *(_QWORD*)&v107;
            *(_DWORD*)(a1 + 392) = DWORD2(v107);
            *(_QWORD*)(a1 + 384) = v99;
            if (CudaDriverRoutine_11f2f0(a1)) {
              if (*(_QWORD*)a1 != 0) {
                v103 = (__int64*)(*(_QWORD*)a1 + 24LL);
              }
              else {
                v103 = v4;
              }
              if (!CudaDriverStub_985a0(*v103)) {
                goto LABEL_305;
              }
              v104 = *(_DWORD*)(a1 + 396) | 1;
            }
            else {
              v104 = DWORD3(v107);
            }
            *(_DWORD*)(a1 + 396) = v104;
          LABEL_305:
            if ((*(_BYTE*)(a1 + 328) & 0x10) != 0) {
              cuda_driver_11f820(v108, (float*)&v107);
              v105 = v108[2];
              *(_DWORD*)(a1 + 376) |= v108[0] << 24;
              *(_DWORD*)(a1 + 380) = (v108[1] << 12) | (v105 << 20);
            }
            return 0;
          }
        LABEL_273:
          v88 = *(float*)(a1 + 288);
          v89 = v88 >= 0x1.e000000000000p+3f;
          v90 = v88 <= 0x0.0p+0f;
          v91 = vcvtd_n_s32_f64(v88, 8u);
          v92 = *(float*)(a1 + 292);
          v93 = !v90 || v89;
          if (v90) {
            v89 = true;
          }
          if (v93 != 0) {
            v94 = 3840;
          }
          else {
            v94 = 0;
          }
          v95 = v91 & 0xFFF;
          if (v89) {
            v96 = v94;
          }
          else {
            v96 = v95;
          }
          if (v92 <= 0x0.0p+0f && v92 < 0x1.e000000000000p+3f) {
            v98 = 0;
          }
          else {
            v98 = 15728640;
          }
          if (v92 < 0x1.e000000000000p+3f && v92 > 0x0.0p+0f) {
            v98 = (vcvtd_n_s32_f64(v92, 8u) & 0xFFF) << 12;
          }
          *(_DWORD*)(a1 + 376) |= v98 | v96;
          if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) == 3) {
            goto LABEL_297;
          }
          goto LABEL_295;
        }
        if (v71 - 4 < 2) {
          v72 = 2105344;
          goto LABEL_236;
        }
      }
      v72 = 7348224;
      goto LABEL_236;
    }
    switch (v69) {
    case 2:
      v70 = *(_DWORD*)(a1 + 368) | 0x40;
      goto LABEL_221;
    case 3:
      v70 = *(_DWORD*)(a1 + 368) | 0xC0;
      goto LABEL_221;
    case 4:
      v70 = *(_DWORD*)(a1 + 368) | 0x100;
      goto LABEL_221;
    default:
      break;
    }
    return v6;
  default:
    return v6;
  }
}

__int64 cuda_driver_22afd0(__int64 a1)
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

__int64 cuda_driver_22bda0(__int64 result, unsigned __int64 a2, unsigned int a3)
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

__int64 cuda_driver_22bf40(__int64 a1)
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

__int64 cuda_driver_22cbd0(__int64 a1)
{
  __int64 v2;
  int64x2_t v3;
  unsigned int v4;
  int v5;
  void* v6;
  int v7;
  int v8;
  __int16 v9;
  int v10;
  int v11;
  int v12;
  __int64 result;
  unsigned int v14;
  unsigned int v15;
  char v16;
  char v17;
  int v18;

  *(_BYTE*)(a1 + 3744) = 0;
  *(_DWORD*)(a1 + 4120) = 0;
  *(_DWORD*)(a1 + 4228) = 0;
  *(_DWORD*)(a1 + 4164) = 0x10000;
  *(_DWORD*)(a1 + 3736) = 2;
  *(_DWORD*)(a1 + 14764) = 2;
  v2 = a1 + 16836;
  *(_DWORD*)(a1 + 16836) = 0;
  *(_OWORD*)(a1 + 3756) = CudaDriverData_1115740;
  *(_OWORD*)(a1 + 3772) = CudaDriverData_1115b60;
  *(_OWORD*)(a1 + 3788) = CudaDriverData_1115800;
  *(_OWORD*)(a1 + 3804) = CudaDriverData_11158f0;
  *(_OWORD*)(a1 + 3820) = CudaDriverData_1115810;
  *(_OWORD*)(a1 + 3836) = CudaDriverData_11156d0;
  *(_OWORD*)(a1 + 3852) = CudaDriverData_1115620;
  *(_OWORD*)(a1 + 3868) = CudaDriverData_1115570;
  *(_QWORD*)(a1 + 4152) = 0x800000010000LL;
  *(_OWORD*)(a1 + 3884) = CudaDriverData_1116030;
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
  *(_QWORD*)(a1 + 17128) = 0x1000000;
  *(_OWORD*)(a1 + 4092) = CudaDriverData_1115990;
  *(_OWORD*)(a1 + 4132) = CudaDriverData_1115bb0;
  *(_DWORD*)(a1 + 4168) = 4;
  *(_DWORD*)(a1 + 3448) = 4;
  *(_OWORD*)(a1 + 4060) = CudaDriverData_11152b0;
  *(_QWORD*)(a1 + 4288) = 0x10000000000LL;
  *(_DWORD*)(a1 + 4208) = 128;
  *(_OWORD*)(a1 + 4192) = CudaDriverData_1116060;
  *(_QWORD*)(a1 + 17120) = 16;
  *(_QWORD*)(a1 + 4216) = 0x8000000100LL;
  v3 = vdupq_n_s64(0x1000000u);
  *(int64x2_t*)(a1 + 17136) = v3;
  *(int64x2_t*)(a1 + 17152) = v3;
  *(_OWORD*)(a1 + 3384) = CudaDriverData_11152c0;
  *(_DWORD*)(a1 + 3400) = 50273;
  *(_DWORD*)(a1 + 14472) = 3;
  *(_OWORD*)(a1 + 3408) = CudaDriverData_1115d90;
  *(_WORD*)(a1 + 17080) = 257;
  *(_OWORD*)(a1 + 3424) = CudaDriverData_1115cd0;
  *(_QWORD*)(a1 + 3440) = 0x200000008LL;
  *(_QWORD*)(a1 + 3456) = 0x8000000020LL;
  *(_OWORD*)(a1 + 11732) = CudaDriverData_1115a00;
  *(_OWORD*)(a1 + 11748) = CudaDriverData_1116270;
  *(_OWORD*)(a1 + 11764) = CudaDriverData_1116100;
  *(_OWORD*)(a1 + 11780) = CudaDriverData_1115610;
  v4 = *(_DWORD*)(a1 + 16976) & 0xFFFFFFFE;
  *(_OWORD*)(a1 + 11700) = CudaDriverData_1115cc0;
  *(_OWORD*)(a1 + 11716) = CudaDriverData_1115360;
  v5 = v4 | 0x380C;
  *(_DWORD*)(a1 + 16976) = v4 | 0x380C;
  *(_BYTE*)(a1 + 16856) |= 1u;
  *(_OWORD*)(a1 + 4368) = CudaDriverData_11162d0;
  *(_BYTE*)(a1 + 16840) = 1;
  *(_BYTE*)(a1 + 16996) = *(_BYTE*)(a1 + 16996) & 0xF9 | 2;
  *(_QWORD*)(a1 + 17000) = 1;
  v6 = CudaDriverData_1422118;
  v7 = *(_DWORD*)(a1 + 3768);
  v8 = *((unsigned __int8*)((_UNKNOWN*)0x1878LL) +
         (_QWORD)CudaDriverData_1422118);
  *(_BYTE*)(a1 + 17014) = 0;
  *(_DWORD*)(a1 + 17016) = 16;
  *(_BYTE*)(a1 + 17013) = v8 == 0;
  *(_DWORD*)(a1 + 17024) = *(_DWORD*)(a1 + 3756);
  *(_DWORD*)(a1 + 17028) = v7;
  if ((*((_BYTE*)((_UNKNOWN*)0x1870LL) + (_QWORD)v6) & 1) != 0 &&
      *(_DWORD*)(a1 + 21864) != 4) {
    v9 = *(_WORD*)(a1 + 16848);
  }
  else {
    v9 = *(_WORD*)(a1 + 16848) | 8;
  }
  *(_BYTE*)(a1 + 17044) = 0;
  *(_BYTE*)(a1 + 17082) = 0;
  *(_WORD*)(a1 + 17060) = 0;
  *(_DWORD*)(a1 + 17056) = 0;
  *(_WORD*)(a1 + 16848) = v9 | 0x10;
  *(_DWORD*)(a1 + 17020) = 2;
  *(_DWORD*)(a1 + 17072) = 2048;
  *(_DWORD*)(a1 + 17064) = 24;
  *(_WORD*)(a1 + 17098) = 257;
  *(_QWORD*)(a1 + 17036) = 0x2000000000LL;
  *(_DWORD*)(a1 + 16976) = v5 & 0xFFFFBC0E | 0x4370;
  *(_QWORD*)(a1 + 17104) = CudaDriverRoutine_270;
  *(_BYTE*)(a1 + 17062) = 1;
  v10 = *(_DWORD*)((char*)&CudaDriverRoutine_4464 + (_QWORD)v6);
  *(_BYTE*)(a1 + 17332) = 1;
  *(_OWORD*)(a1 + 17168) = CudaDriverData_11154e0;
  *(_DWORD*)(a1 + 17112) = v10;
  LOBYTE(v10) = *(_BYTE*)(a1 + 17272) & 0xFD;
  *(_OWORD*)(a1 + 17184) = CudaDriverData_11162e0;
  *(_BYTE*)(a1 + 17272) = v10;
  *(_BYTE*)(a1 + 17280) &= ~1u;
  *(_WORD*)(a1 + 17281) = 770;
  *(_QWORD*)(a1 + 17320) = 48;
  *(_DWORD*)(a1 + 14844) = CudaDriverRoutine_22c390((_DWORD*)a1, 0);
  *(_DWORD*)(a1 + 14848) = CudaDriverRoutine_22c390((_DWORD*)a1, 1u);
  *(_DWORD*)(a1 + 14852) = CudaDriverRoutine_22c390((_DWORD*)a1, 2u);
  v11 = CudaDriverRoutine_22c390((_DWORD*)a1, 3u);
  v12 = *(_DWORD*)(a1 + 3148);
  *(_DWORD*)(a1 + 14856) = v11;
  result = 100;
  if (v12 <= 39) {
    if (v12 == 38) {
      v14 = 6;
      v15 = 36;
      v17 = 0;
      *(_DWORD*)(a1 + 3480) = 6;
      *(_DWORD*)(a1 + 3724) = 36;
      *(_DWORD*)(a1 + 4172) = 2;
      *(_DWORD*)(a1 + 4180) = 6;
    }
    else {
      if (v12 != 39) {
        return result;
      }
      v14 = 6;
      v15 = 24;
      v17 = 0;
      *(_DWORD*)(a1 + 4172) = 2;
      *(_DWORD*)(a1 + 3480) = 6;
      *(_DWORD*)(a1 + 3724) = 24;
      *(_DWORD*)(a1 + 4180) = 4;
    }
    *(_DWORD*)(a1 + 4224) = 128;
    v16 = 1;
    goto LABEL_17;
  }
  switch (v12) {
  case '(':
    v14 = 3;
    v15 = 12;
    v17 = 0;
    v16 = 0;
    *(_DWORD*)(a1 + 4172) = 2;
    *(_DWORD*)(a1 + 3480) = 3;
    *(_DWORD*)(a1 + 3724) = 12;
    *(_DWORD*)(a1 + 4180) = 4;
    *(_DWORD*)(a1 + 4224) = 128;
  LABEL_17:
    *(_WORD*)(v2 + 280) = 257;
    break;
  case ')':
    v14 = 3;
    v15 = 12;
    v17 = 0;
    v16 = 0;
    *(_DWORD*)(a1 + 4172) = 2;
    *(_DWORD*)(a1 + 3480) = 3;
    *(_DWORD*)(a1 + 3724) = 12;
    *(_DWORD*)(a1 + 4180) = 3;
    *(_DWORD*)(a1 + 3164) = 3;
    *(_DWORD*)(a1 + 4224) = 128;
    break;
  case '*':
    v14 = 2;
    v15 = 8;
    v16 = 0;
    *(_DWORD*)(a1 + 3480) = 2;
    *(_DWORD*)(a1 + 3724) = 8;
    *(_DWORD*)(a1 + 4172) = 2;
    *(_DWORD*)(a1 + 4180) = 2;
    *(_DWORD*)(a1 + 4224) = 128;
    v17 = 1;
    *(_DWORD*)(a1 + 3164) = 3;
    break;
  default:
    return result;
  }
  v18 = v15 / v14;
  *(_DWORD*)(a1 + 3732) = *(_DWORD*)(a1 + 3736) * v15;
  *(_DWORD*)(a1 + 3484) = v18;
  *(_DWORD*)(a1 + 3488) = v18;
  if ((v17 & 1) == 0) {
    *(_DWORD*)(a1 + 3492) = v18;
    if ((v16 & 1) == 0) {
      goto LABEL_20;
    }
  LABEL_22:
    *(_DWORD*)(a1 + 3496) = v18;
    *(_DWORD*)(a1 + 3500) = v18;
    goto LABEL_23;
  }
  *(_DWORD*)(a1 + 3492) = 0;
  if ((v16 & 1) != 0) {
    goto LABEL_22;
  }
LABEL_20:
  v18 = 0;
  *(_QWORD*)(a1 + 3496) = 0;
LABEL_23:
  *(_DWORD*)(a1 + 3504) = v18;
  *(_DWORD*)(a1 + 14752) = 0x200000;
  *(_QWORD*)(a1 + 4280) = 0x2000000000000LL;
  *(_QWORD*)(a1 + 18360) = CudaDriverRoutine_22c420;
  *(_OWORD*)(a1 + 3508) = (__typeof__(*(_OWORD*)(a1 + 3508))){0};
  *(_OWORD*)(a1 + 3524) = (__typeof__(*(_OWORD*)(a1 + 3524))){0};
  *(_QWORD*)(a1 + 3540) = 0;
  *(_DWORD*)(v2 + 140) |= 0x18000u;
  *(_BYTE*)(v2 + 152) |= 0x18u;
  *(_BYTE*)(v2 + 492) = *(_BYTE*)(v2 + 280);
  return 0;
}

__int64 cuda_driver_22d7a0(__int64 a1, double* a2)
{

#pragma clang fp contract(off)
  __int64 result;
  unsigned __int64 v5;
  void* v6;
  unsigned __int64 v7;
  _DWORD* v8;
  __int64 v9;
  bool v10;
  char v11;
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
  *(_DWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 16016) = 0x800000;
  *(_QWORD*)(a1 + 16048) = 64;
  v8 = *(_DWORD**)(a1 + 64);
  *(_OWORD*)(a1 + 16032) = CudaDriverData_1115da0;
  LODWORD(v9) = (v8[939] * v8[933]) << 10;
  if ((unsigned int)v9 <= 0x100000) {
    v9 = 0x100000;
  }
  else {
    v9 = (unsigned int)v9;
  }
  *(_QWORD*)(a1 + 16024) = v9;
  v10 = v8[3686] == 0;
  v11 = *(_BYTE*)(a1 + 16316) & 0xFE;
  if (v10) {
    ++v11;
  }
  *(_BYTE*)(a1 + 16316) = v11;
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

__int64 cuda_driver_22db50(int* a1)
{
  return cuda_driver_194b20(
      a1, *((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118));
}

double cuda_driver_22dc00(__int64 a1, __int64 a2, char a3)
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

__int64 cuda_driver_22dc70(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5)
{
  _DWORD* v5;
  int v11;
  __int64 result;
  unsigned int v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  int v25;
  bool v26;
  __int64 v27;
  int v28;
  __int64 v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  char v38[4];
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  __int64 v43;
  struct {
    unsigned int v44;
    char gap76_[4];
    __int64 v45;
    __int64 v46;
    __int64 v47;
    char gap104_[4];
    unsigned int v48;
    int v49;
    int v50;
    int v51;
    int v52;
    int v53;
    int v54;
    int v55;
    char gap140_[4];
    __int64 v56;
    __int64 v57;
    int v58;
    int v59;
    int v60;
    char gap172_[4];
    __int64 v61;
    char gap184_[8];
    int v62;
  } v44_;

  v5 = *(_DWORD**)a4;
  v39 = 0;
  v38[0] = 0;
  *(_QWORD*)(a4 + 8) = v5;
  *(_QWORD*)(a4 + 24) = v5 + 64;
  v5[152] = -1;
  v11 = CudaDriverRoutine_99f40(*(_QWORD*)(a1 + 64), (_DWORD*)(a5 + 16),
                                *(_DWORD*)(a4 + 288));
  result = CudaDriverRoutine_10a2a0(
      a1, a2, (unsigned int*)a5,
      *(_DWORD*)(a4 + 172) * *(_DWORD*)(a4 + 168) * *(_DWORD*)(a4 + 176),
      *(unsigned int*)(a4 + 288), &v39, v38, (_DWORD*)&v37 + 1, &v37, nullptr);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (v39 == 0) {
    return 701;
  }
  v13 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3800LL) + *(_DWORD*)(a4 + 276);
  if (v13 > *(_DWORD*)(a2 + 232) && CudaDriverRoutine_bbe70(a2) &&
      v13 - *(_DWORD*)(a2 + 232) > 0x20) {
    return 701;
  }
  v5[152] = v11;
  v36 = a3;
  v14 = *(unsigned __int8*)(a5 + 8);
  v15 = *(_DWORD*)(a5 + 44);
  v16 = CudaDriverRoutine_98340(a1);
  v17 = *(_DWORD*)a5;
  v18 = *(_DWORD*)(v16 + 16092);
  v19 = HIDWORD(v37);
  v44_.v44 = v15;
  v43 = v37;
  if (v17 != 0) {
    v20 = v17;
  }
  else {
    v20 = v18;
  }
  v40 = 0x8000;
  if (CudaDriverData_14364f8 == nullptr) {
    if (v14 != 0) {
      CudaDriverRoutine_22c0a0(0, (int*)&v43);
      CudaDriverRoutine_22c0a0(0, (int*)&v44_.v44);
      v21 = v44_.v44;
      v24 = v36;
      if (v44_.v44 > v19) {
        if (v44_.v44 >= (unsigned int)v43) {
          v22 = v43;
        }
        else {
          v22 = v44_.v44;
        }
        v23 = v44_.v44;
        goto LABEL_30;
      }
      v41 = v19;
      CudaDriverRoutine_22c0a0(0, (int*)&v41);
      v21 = v41;
    }
    else {
      v24 = v36;
      if (v20 == 0) {
        CudaDriverRoutine_22c0a0(0, (int*)&v43);
        v23 = v43;
        v21 = 0x10000;
        v22 = v43;
        goto LABEL_30;
      }
      CudaDriverRoutine_22c0a0(0, (int*)&v43 + 1);
      if (v20 == 3) {
        v21 = HIDWORD(v43);
        v25 = 0x10000;
        v26 = HIDWORD(v43) > 0x10000;
      }
      else {
        if (v20 != 2) {
          if (v20 == 1) {
            v21 = 0x10000;
            v23 = 0x10000;
            v22 = 0x10000;
          }
          else {
            v21 = 0x8000;
            v23 = 0x8000;
            v22 = 0x8000;
          }
          goto LABEL_30;
        }
        v21 = HIDWORD(v43);
        v25 = 0x8000;
        v26 = HIDWORD(v43) > 0x8000;
      }
      if (!v26) {
        v21 = v25;
      }
    }
    v23 = v21;
    v22 = v21;
    goto LABEL_30;
  }
  CudaDriverData_14364f8((unsigned int)v37, &v42, &v40, &v41);
  v21 = v41;
  v22 = v42;
  v23 = v40;
  v24 = v36;
LABEL_30:
  v5[153] = v22;
  v5[154] = v23;
  v5[155] = v21;
  v27 = CudaDriverRoutine_98340(a1);
  v28 = *(_DWORD*)(a4 + 288);
  if (*(_DWORD*)((char*)((char*)0x20LL) +
                 *(__int64*)((char*)((__int64*)0x18LL) +
                             (_QWORD)CudaDriverData_14225e0)) != 0) {
    v29 = *(_QWORD*)(a2 + 32);
    v30 = *(_DWORD*)a5;
    v31 = *(_DWORD*)(a5 + 36);
    v44_.v44 = 128;
    v44_.v46 = v29;
    v44_.v47 = a2;
    v33 = *(_DWORD*)(a5 + 12);
    v32 = *(_DWORD*)(a5 + 16);
    v44_.v45 = v27;
    v44_.v52 = 0;
    v44_.v53 = v11;
    v44_.v54 = v31;
    v44_.v55 = v31;
    v44_.v56 = v24;
    v44_.v57 = 0x100000001LL;
    v44_.v61 = a4;
    v44_.v50 = v32;
    v44_.v51 = v28;
    v34 = *(_DWORD*)(v27 + 16092);
    v35 = *(_DWORD*)(a2 + 392);
    if (v30 != 0) {
      v34 = v30;
    }
    v44_.v48 = v34;
    v44_.v49 = v35;
    v44_.v58 = *(unsigned __int8*)(a5 + 8);
    v44_.v59 = v33;
    v44_.v60 = v5[154];
    v44_.v62 = *(_DWORD*)(a5 + 28);
    cuda_driver_20b420(3u, 8u, (__int64)&v44_.v44);
  }
  return 0;
}

__int64 cuda_driver_22df80(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                           char a9)
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
  unsigned int v36;
  unsigned int v37;
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
           CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), v22) & 0x3F;
  if (CudaDriverRoutine_bbdf0(a4)) {
    v24 = *((_DWORD*)v16 + 4);
    *((_DWORD*)v16 + 4) =
        v24 & 0xFFFFFFC0 |
        (CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), v22) - 1) & 0x3F;
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
      v36 = 12;
      v37 = 84;
      v30 = CudaDriverRoutine_197480(v49, a2, 1u, &v37, (__int64)&v38_.v38,
                                     0xECu, (_QWORD*)(a4 + 832), &v36);
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

__int64 cuda_driver_22e340(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                           _QWORD* a5, __int64 a6)
{
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;

  v12 = CudaDriverRoutine_98340(a1);
  v13 = CudaDriverRoutine_22bf00(v12);
  v14 = CudaDriverRoutine_229ac0(v12);
  *(_QWORD*)(a6 + 24) = v13;
  *(_QWORD*)(a6 + 32) = v14;
  *(_DWORD*)a6 = *(_DWORD*)(a4 + 168);
  *(_DWORD*)(a6 + 4) = *(_DWORD*)(a4 + 172);
  *(_DWORD*)(a6 + 8) = *(_DWORD*)(a4 + 176);
  *(_DWORD*)(a6 + 12) = *(_DWORD*)(a4 + 144);
  *(_DWORD*)(a6 + 16) = *(_DWORD*)(a4 + 148);
  *(_DWORD*)(a6 + 20) = *(_DWORD*)(a4 + 152);
  if (*(_BYTE*)(a4 + 352) != 0) {
    *(_DWORD*)(a6 + 40) =
        0x1000000 - (*(_DWORD*)(a4 + 356) + *(_DWORD*)(a4 + 360));
    *(_QWORD*)(a6 + 48) = a3;
    v15 = *(_QWORD*)(a4 + 136);
    if (v15 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  *(_DWORD*)(a6 + 40) = CudaDriverRoutine_15fd0(a2);
  *(_QWORD*)(a6 + 48) = a3;
  v15 = *(_QWORD*)(a4 + 136);
  if (v15 != 0) {
  LABEL_3:
    *(_QWORD*)(a6 + 56) = *(_QWORD*)(v15 + 8);
  }
LABEL_4:
  if (CudaDriverRoutine_985b0(*(_DWORD*)(*(_QWORD*)(a2 + 32) + 32LL))) {
    v16 = *(_OWORD*)(a2 + 688);
    v17 = *(_OWORD*)(a2 + 704);
    v18 = *(_OWORD*)(a2 + 720);
    *(_OWORD*)(a6 + 184) = *(_OWORD*)(a2 + 736);
    *(_OWORD*)(a6 + 168) = v18;
    *(_OWORD*)(a6 + 152) = v17;
    *(_OWORD*)(a6 + 136) = v16;
    v19 = *(_OWORD*)(a2 + 752);
    v20 = *(_OWORD*)(a2 + 768);
    v21 = *(_OWORD*)(a2 + 784);
    *(_OWORD*)(a6 + 248) = *(_OWORD*)(a2 + 800);
    *(_OWORD*)(a6 + 232) = v21;
    *(_OWORD*)(a6 + 216) = v20;
    *(_OWORD*)(a6 + 200) = v19;
    CudaDriverRoutine_208ba0(*(_QWORD**)(v12 + 2112), 0, 0, (_QWORD*)(a6 + 112),
                             (_QWORD*)(a6 + 128));
  }
  else {
    *(_QWORD*)(a6 + 112) = 0;
    *(_QWORD*)(a6 + 128) = 0;
  }
  *(_QWORD*)(a6 + 120) = 0;
  *(_QWORD*)(a6 + 64) = *a5;
  *(_QWORD*)(a6 + 72) = a5[1];
  *(_QWORD*)(a6 + 80) = a5[3];
  *(_QWORD*)(a6 + 88) = a5[4];
  *(_QWORD*)(a6 + 96) = a5[5];
  v22 = a5[6];
  *(_DWORD*)(a6 + 264) = 0;
  *(_QWORD*)(a6 + 104) = v22;
  *(_DWORD*)(a6 + 268) = *(_DWORD*)(v12 + 164);
  LODWORD(v22) = *(_DWORD*)(a4 + 288);
  *(_DWORD*)(a6 + 272) = 0;
  *(_DWORD*)(a6 + 44) = v22;
  v23 = CudaDriverRoutine_22c310(v12, a2);
  v24 = *(_DWORD*)(a2 + 632);
  *(_QWORD*)(a6 + 288) = 0;
  *(_DWORD*)(a6 + 276) = v24 + v23;
  *(_QWORD*)(a6 + 296) = CudaDriverStub_1db800(*(_QWORD*)(v12 + 2232));
  if (*(_BYTE*)(a4 + 204) != 0 && *(_BYTE*)(a4 + 205) != 0) {
    v25 = *(_QWORD*)(a2 + 104);
  }
  else {
    v25 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
        *(_QWORD*)(a2 + 96));
  }
  *(_QWORD*)(a6 + 304) = v25;
  *(_DWORD*)(a6 + 312) = *(_DWORD*)(a4 + 288) + *(_DWORD*)(a2 + 128) +
                         *(_DWORD*)(a2 + 136) + *(_DWORD*)(a2 + 140);
  return 0;
}

__int64 cuda_driver_22e580(__int64 a1, __int64 a2, __int64 a3)
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
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  unsigned __int16 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned int v37;
  unsigned __int8 v38;
  int v39;
  unsigned __int8 v40;
  int v41;
  int v42;
  unsigned __int8 v43;
  int v44;
  unsigned int v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v50;
  int v51;
  int v52;
  int v53;
  __int64 v54;

  v3 = *(_QWORD*)(a3 + 8);
  v4 = *(_QWORD*)(a3 + 16);
  v54 = 0;
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
        goto LABEL_40;
      }
    }
    else {
      *(_DWORD*)(v3 + 44) = v11 & 0xFFFCBFFF | 0x10000;
      if (!CudaDriverRoutine_bbe30(a2)) {
        goto LABEL_40;
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
LABEL_40:
  if ((*(_WORD*)(a2 + 977) & 8) != 0) {
    CudaDriverRoutine_928b0(a2, &v53, &v52);
    v28 = *(_DWORD*)(v3 + 196) & 0xFFFE0000 | v52 & 0x1FFFF;
    *(_DWORD*)(v3 + 192) = v53;
    *(_DWORD*)(v3 + 196) = v28;
  }
  else {
    if (*(_BYTE*)(a3 + 204) != 0 && *(_BYTE*)(a3 + 205) != 0) {
      v27 = CudaDriverRoutine_98340(a1);
      v13 = *(_DWORD*)(v3 + 196);
      *(_DWORD*)(v3 + 192) = *(_QWORD*)(v27 + 2408);
      v14 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2412);
      goto LABEL_14;
    }
    if (*(_DWORD*)(a2 + 404) != 0) {
      v50 = CudaDriverRoutine_98340(a1);
      v13 = *(_DWORD*)(v3 + 196);
      *(_DWORD*)(v3 + 192) = *(_QWORD*)(v50 + 2424);
      v14 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2428);
      goto LABEL_14;
    }
    CudaDriverRoutine_bbd70(a2, &v54);
    v51 = HIDWORD(v54) & 0x1FFFF | (*(_DWORD*)(v3 + 196) >> 17 << 17);
    *(_DWORD*)(v3 + 192) = v54;
    *(_DWORD*)(v3 + 196) = v51;
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
  if (CudaDriverRoutine_bbdf0(a2)) {
    if (v18 <= 0x100) {
      v18 = 256;
    }
    if (v19 <= 0x8000) {
      v19 = 0x8000;
    }
    if (v21 <= 0x8000) {
      v21 = 0x8000;
    }
    if (v20 <= 0x8000) {
      v20 = 0x8000;
    }
  }
  if (v18 <= *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3880LL)) {
    v22 = v18 & 0x3FFFF;
  }
  else {
    v22 = (v18 + 0x7FFF) & 0x38000;
  }
  *(_DWORD*)(v3 + 68) = *(_DWORD*)(v3 + 68) & 0xFFFC0000 | v22;
  if (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118 + 3) !=
      0) {
    if (v19 == -1) {
      v23 = 0;
      if (v21 != -1) {
      LABEL_36:
        v24 = (unsigned int)CudaDriverRoutine_22c0d0(v21) << 25;
        if (v20 != -1) {
        LABEL_37:
          v25 = (CudaDriverRoutine_22c0d0(v20) & 0x7F) << 17;
        LABEL_48:
          *(_DWORD*)(v3 + 68) = v24 | v23 | *(_DWORD*)(v3 + 68) & 0x3FFFF;
          v26 = *(_DWORD*)(v3 + 80) & 0xFF01FFFF | v25;
          goto LABEL_49;
        }
      LABEL_47:
        v25 = 0;
        goto LABEL_48;
      }
    }
    else {
      v23 = (CudaDriverRoutine_22c0d0(v19) & 0x7F) << 18;
      if (v21 != -1) {
        goto LABEL_36;
      }
    }
    v24 = 0;
    if (v20 != -1) {
      goto LABEL_37;
    }
    goto LABEL_47;
  }
  *(_DWORD*)(v3 + 68) = v22;
  v26 = *(_DWORD*)(v3 + 80) & 0xFF01FFFF;
LABEL_49:
  *(_DWORD*)(v3 + 80) = v26;
  *(_WORD*)(v3 + 74) = *(_WORD*)(a3 + 168);
  v29 = *(_DWORD*)(a3 + 172);
  *(_WORD*)(v3 + 76) = v29;
  *(_DWORD*)(v3 + 76) = v29 | ((unsigned __int16)*(_DWORD*)(a3 + 176) << 16);
  v30 = *(_QWORD*)(a1 + 64);
  if (*(_DWORD*)(v30 + 3776) != 0) {
    v31 = 1075;
    v32 = 640;
    v33 = 104;
    v34 = 40;
    do {
      v36 = (unsigned int)v32 >> 5;
      if (*(_QWORD*)(a3 + v34) != 0) {
        v37 =
            ((unsigned int)(*(_DWORD*)(a3 + v33) + *(_DWORD*)(v30 + 3784) - 1) /
             *(_DWORD*)(v30 + 3784) * *(_DWORD*)(v30 + 3784))
            << 15;
        *(_DWORD*)(v3 + 4 * v36) |= 1 << (v32 + 0x80);
        *(_DWORD*)(v3 + 4LL * (v31 >> 5)) =
            v37 & 0xFFF80000 | *(_DWORD*)(v3 + 4LL * (v31 >> 5)) & 0x7FFFF;
        *(_DWORD*)(v3 + 4LL * ((v31 - 19) >> 5)) =
            *(_DWORD*)(v3 + 4LL * ((v31 - 19) >> 5)) & 0xFFFE0000 |
            *(_DWORD*)(a3 + v34 + 4) & 0x1FFFF;
        *(_DWORD*)(v3 + 4LL * ((v31 - 51) >> 5)) = *(_QWORD*)(a3 + v34);
        if (CudaDriverRoutine_e7cb0(a1, a3, v32 - 640)) {
          *(_DWORD*)(v3 + 4LL * ((v31 - 1) >> 5)) |= 0x40000u;
        }
      }
      else {
        *(_DWORD*)(v3 + 4 * v36) &= ~(1 << (v32 + 0x80));
      }
      v30 = *(_QWORD*)(a1 + 64);
      v35 = v32 - 639;
      ++v32;
      v31 += 64;
      v33 += 4;
      v34 += 8;
    } while (v35 < *(unsigned int*)(v30 + 3776));
  }
  v38 = *(_BYTE*)(v3 + 119);
  v39 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1276) & 0xFFFFFF | (v38 << 24);
  v40 = *(_BYTE*)(v3 + 123);
  *(_DWORD*)(v3 + 116) = v39;
  v41 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1280) & 0xFFFFFF | (v40 << 24);
  v42 = *(_DWORD*)(v3 + 116);
  *(_DWORD*)(v3 + 120) = v41;
  v43 = CudaDriverRoutine_bc770(a2);
  v44 = *(_DWORD*)(v3 + 80);
  *(_DWORD*)(v3 + 116) = v42 & 0x7FFFFFF | (v43 << 27);
  v45 = v44 & 0xFFFE00FF;
  if (*(_DWORD*)(a2 + 392) != 0) {
    v46 = (*(_DWORD*)(a2 + 392) & 0x1FF) << 8;
  }
  else {
    v46 = 768;
  }
  *(_DWORD*)(v3 + 80) = v46 | v45;
  if (*(_BYTE*)(a3 + 376) != 0) {
    *(_DWORD*)(v3 + 84) = *(_DWORD*)(a3 + 380);
    *(_DWORD*)(v3 + 88) = *(_DWORD*)(a3 + 384);
    if (CudaDriverRoutine_bbdf0(a2)) {
      *(_DWORD*)(v4 + 596) = *(_DWORD*)(a3 + 380);
      *(_DWORD*)(v4 + 600) = *(_DWORD*)(a3 + 384);
    }
  }
  v47 = *(_DWORD*)(v3 + 16);
  *(_DWORD*)(v3 + 16) = v47 | 0x40;
  if (*(_BYTE*)(a3 + 203) == 0) {
    *(_DWORD*)(v3 + 16) = v47 | 0x440;
    *(_DWORD*)(v3 + 96) |= 0x80000000;
  }
  *(_BYTE*)(v3 + 72) = 35;
  *(_BYTE*)(v3 + 127) =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3164LL) << 24) +
                     (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3160LL) << 28)) >>
      24;
  v48 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_92a90(v48, a2, a3);
  return 0;
}

__int64 cuda_driver_22f3e0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v5;
  void* v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  _DWORD* v15;
  unsigned int v16;
  unsigned int v17;
  __int16 v18;
  unsigned __int64 v19;

  v19 = 0;
  if ((*(_WORD*)(a2 + 977) & 0x1000) == 0) {
    v3 = *(_QWORD*)(a3 + 8);
    v5 = (_QWORD*)result;
    v6 = CudaDriverData_1422118;
    if ((*((_BYTE*)&CudaDriverRoutine_4460 + (_QWORD)CudaDriverData_1422118) &
         8) != 0) {
      if (CudaDriverRoutine_bbe30(a2)) {
        v7 = v5[299];
        v19 = v7;
      }
      else {
        CudaDriverRoutine_bbd70(a2, &v19);
        v7 = v19;
      }
    }
    else {
      v7 = CudaDriverStub_1db800(*(_QWORD*)(a2 + 96));
      v19 = v7;
    }
    *(_DWORD*)(v3 + 32) = v7 >> 8;
    *(_DWORD*)(v3 + 124) =
        (v7 >> 40) & 0x1FF | (*(_DWORD*)(v3 + 124) >> 9 << 9);
    v8 = *(_QWORD*)(a2 + 96);
    if (v7 < CudaDriverStub_1db800(v8) ||
        (v9 = v19,
         (v10 = v9 - CudaDriverStub_1db800(v8)) >= CudaDriverStub_1dbf90(v8))) {
      v8 = cuda_driver_helpers_1db920(v5[10], v19);
    }
    v11 = CudaDriverStub_1dbf90(v8);
    v12 = v19;
    v13 = v11;
    result = CudaDriverStub_1db800(v8);
    v14 = v13 - v12 + result;
    v15 = (_DWORD*)v5[8];
    if (v15[1033] + *(_DWORD*)(a2 + 64) < v14) {
      v14 = v15[1033] + *(_DWORD*)(a2 + 64);
    }
    v16 = v14 / v15[1054];
    v17 = *(_DWORD*)((char*)((_UNKNOWN*)0x187CLL) + (_QWORD)v6);
    if (v17 == 0) {
      v17 = v15[1052];
    }
    if (v17 >= v16) {
      v18 = v16;
    }
    else {
      v18 = v17;
    }
    *(_DWORD*)(v3 + 124) =
        *(_DWORD*)(v3 + 124) & 0xFFFC01FF | ((v18 & 0x1FF) << 9);
  }
  return result;
}

int8x8_t cuda_driver_22f900(__int64 a1, int8x8_t* a2, __int64 a3)
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

__int64 cuda_driver_22fbb0(__int64* a1, __int64 a2, __int64 a3, char a4)
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

_DWORD* cuda_driver_230150(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
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
      a1 = (_DWORD*)CudaDriverRoutine_22d3e0((__int64)a1, a7);
    }
    a3 += v15;
    a4 += v15;
    v14 -= v15;
  } while (v14 != 0);
  return a1;
}

_DWORD* cuda_driver_2314c0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
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

__int64 cuda_driver_2330a0(__int64 a1, __int64 a2, __int64 a3, bool* a4)
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
        v10 += 21248;
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

__int64 cuda_driver_233200(__int64 a1, __int64 a2, int a3)
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
      v7 += 21248;
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

__int64 cuda_driver_233e00(__int64 a1, _BYTE* a2)
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

__int64 cuda_driver_234030(__int64 a1, __int64 a2)
{
  *(_DWORD*)(CudaDriverStub_1dbab0(a2) + 4) = 0;
  __builtin_arm_dmb(0xFu);
  return 0;
}

__int64 cuda_driver_234060(__int64 a1, __int64 a2, int a3)
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

__int64 cuda_driver_234680(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                           int8x16_t* a5)
{
  __int64 result;
  unsigned int v9;
  __int64 v10;
  int32x4_t v11;
  int8x16_t v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  int8x16_t* v16;
  __int64 v17;
  uint32x4_t v18;
  uint32x4_t v19;
  unsigned int v20;

  v20 = 0;
  if (a5 == nullptr) {
    return 4;
  }
  if (a4 > *(_DWORD*)(a1 + 23372908)) {
    return 4;
  }
  result = (*(__int64 (**)(_QWORD, __int64, __int64, unsigned int*))(
      a1 + 23377048))(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 616LL), a2, a3, &v20);
  if ((_DWORD)result == 0) {
    if (a4 != 0) {
      v9 = v20;
      if (a4 >= 8) {
        LANES128(v11).n128_u64[0] = 0x300000003LL;
        LANES128(v11).n128_u64[1] = 0x300000003LL;
        LANES128(v12).n128_u64[0] = 0x100000001LL;
        LANES128(v12).n128_u64[1] = 0x100000001LL;
        v13 = vdupq_n_s32(v20);
        v10 = a4 & 0xFFFFFFF8;
        v14 = COERCE_AS(int32x4_t, CudaDriverData_1115690);
        LANES128(v15).n128_u64[0] = 0x800000008LL;
        LANES128(v15).n128_u64[1] = 0x800000008LL;
        v16 = a5 + 1;
        v17 = v10;
        do {
          v18 = vnegq_s32(v14);
          v19 = vsubq_s32(v11, v14);
          v17 -= 8;
          v14 = vaddq_s32(v14, v15);
          v16[-1] = vandq_s8(vshlq_u32(v13, v18), v12);
          *v16 = vandq_s8(vshlq_u32(v13, v19), v12);
          v16 += 2;
        } while (v17 != 0);
        if (v10 == a4) {
          goto LABEL_14;
        }
      }
      else {
        v10 = 0;
      }
      do {
        LANES128(*(a5)).n128_u32[v10] = (v9 >> v10) & 1;
        ++v10;
      } while (a4 != v10);
    }
  LABEL_14:
    result = 0;
    if (a4 == *(_DWORD*)(a1 + 23372908)) {
      LANES128(*(a5)).n128_u32[a4 - 1] = 1;
    }
  }
  return result;
}

__int64 cuda_driver_235010(int a1)
{
  __int64 result;
  __int64 v3;

  v3 = 0;
  result = CudaDriverRoutine_df060(&v3);
  if ((_DWORD)result == 0) {
    CudaDriverRoutine_5f800(*(_QWORD*)((char*)((_UNKNOWN*)0x48LL) + v3), a1);
    return 0;
  }
  return result;
}

__int64 cuda_driver_235200(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                           __int64 a5, int a6)
{

#pragma clang fp contract(off)
  void* v6;
  unsigned int v9;
  unsigned int v10;
  long double v11;
  _QWORD v13[2];
  struct {
    _QWORD v14[4];
    __int128 v15;
    __int128 v16;
    __int128 v17;
    __int128 v18;
    __int128 v19;
    __int128 v20;
  } v14_;
  __int64 v21;
  _BYTE v22[56];
  __int64 v23;

  v21 = 0;
  v13[0] = 0;
  v13[1] = 0;
  memset(v14_.v14, 0, sizeof(v14_.v14));
  v14_.v15 = (__typeof__(v14_.v15)){0};
  v14_.v16 = (__typeof__(v14_.v16)){0};
  v14_.v17 = (__typeof__(v14_.v17)){0};
  v14_.v18 = (__typeof__(v14_.v18)){0};
  v14_.v19 = (__typeof__(v14_.v19)){0};
  v14_.v20 = (__typeof__(v14_.v20)){0};
  v6 = CudaDriverData_1422118;
  if (*(_QWORD*)((char*)&CudaDriverRoutine_4358 +
                 (_QWORD)CudaDriverData_1422118) != 0) {
    v9 = CudaDriverRoutine_e3830(*(_QWORD*)(a1 + 64), a4, a5, a3, a6 != 0,
                                 (__int64)v22, &v21);
    if (v9 == 0) {
      v9 = CudaDriverRoutine_e4c90(*(_BYTE**)(a1 + 64), v21, (__int64)&v23,
                                   (__int64)v14_.v14);
      if (v9 == 0) {
        v14_.v14[3] = a2;
        LOBYTE(v14_.v16) = 0;
        *(_QWORD*)&v14_.v15 = strlen_plt(a2) + 1;
        v9 = CudaDriverStub_e4960((__int64)v14_.v14, v13, 0);
        if (v9 == 0) {
          v9 = CudaDriverRoutine_4fe60(
              *(_QWORD*)((char*)&CudaDriverRoutine_4358 + (_QWORD)v6),
              (__int64)v13);
        }
      }
    }
    v10 = v9;
  }
  else {
    v10 = 3;
  }
  CudaDriverRoutine_12e340(v21);
  v11 = cuda_driver_e4e00((__int64)v14_.v14, 1);
  CudaDriverStub_4f8b0(v13, v11);
  return v10;
}

__int64 cuda_driver_235330(_DWORD* a1)
{
  __int64 result;
  __int64 v3;

  v3 = 0;
  result = CudaDriverRoutine_df060(&v3);
  if ((_DWORD)result == 0) {
    *a1 = *(_QWORD*)((char*)((_UNKNOWN*)0x428LL) + v3) != 0 ||
          *(_QWORD*)((char*)((_UNKNOWN*)0x430LL) + v3) != 0;
  }
  return result;
}

__int64 cuda_driver_2353a0()
{
  int v0;
  __int64 result;
  __int64 v2;

  v2 = 0;
  v0 = CudaDriverRoutine_df060(&v2);
  result = 0;
  if (v0 == 0) {
    return *(_QWORD*)((char*)((_UNKNOWN*)0x3C0LL) + v2);
  }
  return result;
}

void cuda_driver_2353f0()
{
  *((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118) = 1;
}

__int64 cuda_driver_235540(int a1)
{
  __int64 result;
  char v2;

  if (a1 == 0) {
    v2 = 0;
  LABEL_6:
    *((_BYTE*)((_UNKNOWN*)0x1D88LL) + (_QWORD)CudaDriverData_1422118) =
        *((_BYTE*)((_UNKNOWN*)0x1D88LL) + (_QWORD)CudaDriverData_1422118) &
            0xFD |
        v2;
    return 0;
  }
  result = CudaDriverRoutine_127d00();
  if ((_DWORD)result == 0) {
    v2 = 2;
    goto LABEL_6;
  }
  return result;
}

__int64 cuda_driver_2355a0(int a1)
{
  bool v1;
  __int64 result;
  char v3;

  v1 = a1 == 0;
  result = 0;
  v3 = *((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118) &
       0xFE;
  if (!v1) {
    ++v3;
  }
  *((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118) = v3;
  return result;
}

bool cuda_driver_2355d0()
{
  __int64 v1;

  v1 = 0;
  return (unsigned int)CudaDriverRoutine_df060(&v1) == 0 &&
         (unsigned int)CudaDriverStub_10f720(
             *(_QWORD*)((char*)((_UNKNOWN*)0x4B8LL) + v1)) == 2;
}

__int64 cuda_driver_235620(__int64 result)
{
  *((_BYTE*)((_UNKNOWN*)0x17DCLL) + (_QWORD)CudaDriverData_1422118) =
      (_DWORD)result == 0;
  return result;
}

__int64 cuda_driver_2358f0(int a1)
{
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    CudaDriverRoutine_1a1670(
        *(_QWORD*)&(*(_BYTE(*)[8])0x1588LL)[(_QWORD)CudaDriverData_1422118],
        a1);
    return 0;
  }
  return result;
}

__int64 cuda_driver_235ac0(unsigned __int64 a1, unsigned __int64 a2,
                           unsigned __int64 a3, _QWORD* a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v14 = 0;
  *a4 = 0;
  result = CudaDriverRoutine_df060(&v14);
  if ((_DWORD)result == 0) {
    v9 = CudaDriverRoutine_1dba10(*(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v14),
                                  a1);
    if (v9 != 0) {
      v10 = v9;
      result = (__int64)CudaDriverRoutine_1dc5c0(
          v9, a2, a3, *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + v14), 1);
      if (result != 0) {
        v11 = result;
        v12 = CudaDriverStub_102e00(v10);
        v13 = CudaDriverStub_102e00(v11);
        *a4 = a1 - v12 + v13;
        return 0;
      }
    }
    else {
      return 1;
    }
  }
  return result;
}

void cuda_driver_235bb0()
{
  *((_BYTE*)((_UNKNOWN*)0x1208LL) + (_QWORD)CudaDriverData_1422118) |= 1u;
}

__int64 cuda_driver_235d40(int a1)
{
  void* v1;

  v1 = CudaDriverData_1422118;
  *((_BYTE*)&CudaDriverRoutine_41a8 + (_QWORD)CudaDriverData_1422118) |= 4u;
  *(_DWORD*)((char*)&CudaDriverRoutine_41ac + (_QWORD)v1) = a1;
  return 0;
}

void cuda_driver_235d90()
{
  *((_BYTE*)&CudaDriverRoutine_41a8 + (_QWORD)CudaDriverData_1422118) |= 2u;
}

void cuda_driver_235e40()
{
  *(_WORD*)((char*)&CudaDriverRoutine_4484 + (_QWORD)CudaDriverData_1422118) |=
      4u;
}

__int64 cuda_driver_235e60(__int64 result)
{
  __int16 v1;

  if ((_DWORD)result != 0) {
    v1 = 0;
  }
  else {
    v1 = 32;
  }
  *(_WORD*)((char*)&CudaDriverRoutine_4484 + (_QWORD)CudaDriverData_1422118) =
      *(_WORD*)((_BYTE*)&CudaDriverRoutine_4484 +
                (_QWORD)CudaDriverData_1422118) &
          0xFFDF |
      v1;
  return result;
}

__int64 cuda_driver_235ea0()
{
  void* v0;
  __int64 i;

  v0 = CudaDriverData_1422118;
  *((_BYTE*)((_UNKNOWN*)0x1D88LL) + (_QWORD)CudaDriverData_1422118) |= 4u;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0xFCLL) + (_QWORD)v0 + 4) == 11256099) {
    for (i = *(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1520LL) + (_QWORD)v0) +
                        712LL);
         i != 0; i = *(_QWORD*)(i + 22000)) {
      *(_BYTE*)(i + 16988) |= 4u;
    }
  }
  return 0;
}

void cuda_driver_235f00()
{
  *(_WORD*)((char*)&CudaDriverRoutine_4484 + (_QWORD)CudaDriverData_1422118) |=
      8u;
}

void cuda_driver_236210()
{
  *((_BYTE*)((_UNKNOWN*)0x11F8LL) + (_QWORD)CudaDriverData_1422118) |= 2u;
}

__int64 cuda_driver_236320(__int64 result)
{
  *((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118) =
      *((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118) &
          0xFD |
      (2 * (result & 1));
  return result;
}

__int64 cuda_driver_236610(unsigned int a1, unsigned int a2, _DWORD* a3)
{
  __int64 result;
  int v5;
  char v7;

  v7 = 0;
  if (a3 == nullptr) {
    return 1;
  }
  if ((a1 & 0x80000000) != 0) {
    return 101;
  }
  result = 101;
  v5 = *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)CudaDriverData_1422118);
  if ((int)a2 < v5 && (a2 & 0x80000000) == 0 && (int)a1 < v5) {
    result = CudaDriverRoutine_ecea0(
        *((_QWORD*)CudaDriverData_1422118 + a1 + 35),
        *((_QWORD*)CudaDriverData_1422118 + a2 + 35), &v7);
    if ((_DWORD)result == 0) {
      *a3 = v7 == 1;
    }
  }
  return result;
}

__int64 cuda_driver_236b30(__int64 a1)
{
  __int64 result;

  if (a1 == 0) {
    return 201;
  }
  result =
      (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) +
                              104LL))(*(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
  if ((_DWORD)result == 0) {
    return (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) +
                                   120LL))(
        *(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
  }
  return result;
}

__int64 cuda_driver_236bb0(__int64 a1)
{
  if (a1 != 0) {
    return (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) +
                                   104LL))(
        *(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
  }
  else {
    return 201;
  }
}

__int64 cuda_driver_236d70(__int64 result, __int64 a2)
{
  unsigned __int64 v2;
  void* v4;
  __int64 v6;

  if (result != 0) {
    v2 = result;
    v4 = CudaDriverData_1422118;
    cuda_driver_1084c0((__int64)&CudaDriverRoutine_7378 +
                       (_QWORD)CudaDriverData_1422118);
    v6 = CudaDriverRoutine_1a2980(
        *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v4), v2);
    result =
        CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v4);
    if (v6 != 0) {
      return CudaDriverRoutine_1a2b00(
          *(_QWORD*)(v6 + 376),
          (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_237c20, a2);
    }
    v6 = v2;
    if (*(_DWORD*)(v2 + 4) == 2) {
      return CudaDriverRoutine_1a2b00(
          *(_QWORD*)(v6 + 376),
          (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_237c20, a2);
    }
  }
  return result;
}

__int64 cuda_driver_236f40(__int64 result)
{
  *(_WORD*)((char*)&CudaDriverRoutine_41b0 + (_QWORD)CudaDriverData_1422118) =
      *(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 +
                (_QWORD)CudaDriverData_1422118) &
          0xFFEF |
      (16 * (result & 1));
  return result;
}

__int64 cuda_driver_236fb0(__int64 result)
{
  *(_WORD*)((char*)&CudaDriverRoutine_41b0 + (_QWORD)CudaDriverData_1422118) =
      *(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 +
                (_QWORD)CudaDriverData_1422118) &
          0xFFFB |
      (4 * (result & 1));
  return result;
}

__int64 cuda_driver_236fe0(__int64 result)
{
  *(_WORD*)((char*)&CudaDriverRoutine_41b0 + (_QWORD)CudaDriverData_1422118) =
      *(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 +
                (_QWORD)CudaDriverData_1422118) &
          0xFFDF |
      (32 * (result & 1));
  return result;
}

__int64 cuda_driver_237010(__int64 result)
{
  void* v1;
  char v2;

  v1 = CudaDriverData_1422118;
  v2 = *((_BYTE*)((_UNKNOWN*)0x1848LL) + (_QWORD)CudaDriverData_1422118);
  *(_DWORD*)((char*)((_UNKNOWN*)0x184CLL) + (_QWORD)CudaDriverData_1422118) =
      result;
  *((_BYTE*)((_UNKNOWN*)0x1848LL) + (_QWORD)v1) = v2 | 1;
  return result;
}

__int64 cuda_driver_237170(__int64 a1, __int64 a2)
{
  if (a1 != 0 && a2 != 0) {
    return (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) +
                                   144LL))(
        *(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
  }
  else {
    return 1;
  }
}

__int64 cuda_driver_2372b0(__int64 a1)
{
  __int64 v1;

  v1 = CudaDriverRoutine_98340(a1);
  return (*(__int64 (**)(void*))(*(_QWORD*)(v1 + 64) + 21544LL))((void*)v1);
}

__int64 cuda_driver_2373c0(unsigned int a1, __int64* a2, _QWORD* a3)
{
  __int64 result;
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  v8 = 0;
  result = CudaDriverRoutine_9afb0(a1, &v8);
  if ((_DWORD)result == 0) {
    if (a2 != nullptr) {
      v6 = (*(__int64 (**)(__int64))((char*)&CudaDriverRoutine_47f8 + v8))(30);
      result = 0;
      *a2 = v6;
    }
    if (a3 != nullptr) {
      v7 = result;
      *a3 = (*(__int64 (**)(__int64))((char*)&CudaDriverRoutine_47f8 + v8))(29);
      return v7;
    }
  }
  return result;
}

__int64 cuda_driver_237460(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  void* v6;

  v2 = ~(a2 | a1);
  v4 = ~((a2 | a1) >> 31);
  v3 = a1 & v4;
  v6 = CudaDriverData_1422118;
  *((_BYTE*)((_UNKNOWN*)0x1D40LL) + (_QWORD)CudaDriverData_1422118) = v2 < 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x1D44LL) + (_QWORD)v6) = v3;
  *(_DWORD*)((char*)((_UNKNOWN*)0x1D48LL) + (_QWORD)v6) = a2 & v4;
  return 0;
}

__int64 cuda_driver_2374c0(__int64 result)
{
  char v1;

  if ((_DWORD)result != 0) {
    v1 = 0;
  }
  else {
    v1 = 4;
  }
  *((_BYTE*)&CudaDriverRoutine_4728 + (_QWORD)CudaDriverData_1422118) =
      *((_BYTE*)&CudaDriverRoutine_4728 + (_QWORD)CudaDriverData_1422118) &
          0xFB |
      v1;
  return result;
}

void cuda_driver_2375b0()
{
  *((_BYTE*)((_UNKNOWN*)0x11F8LL) + (_QWORD)CudaDriverData_1422118) |= 4u;
}

void cuda_driver_237670()
{
  *((_BYTE*)&CudaDriverRoutine_7478 + (_QWORD)CudaDriverData_1422118) |= 1u;
}

__int64 cuda_driver_237690(__int64 result)
{
  *((_BYTE*)&CudaDriverRoutine_71c8 + (_QWORD)CudaDriverData_1422118 + 3) =
      (_DWORD)result == 0;
  return result;
}

__int64 cuda_driver_2376c0(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;

  v2 = CudaDriverData_1422118;
  v3 =
      *(_QWORD*)((char*)((_UNKNOWN*)0x17C0LL) + (_QWORD)CudaDriverData_1422118);
  if (v3 != 0) {
    v4 = 0;
    do {
      v6 = *(_QWORD*)(v3 + 80);
      CudaDriverStub_107f90(v6 + 128);
      v7 = *(_QWORD**)(v6 + 2040);
      if (v7 != nullptr) {
        v5 = 0;
        do {
          if (v7[21] == 0 && (v7[30] & 7LL) == 2) {
            v5 += v7[16];
          }
          v7 = (_QWORD*)v7[1];
        } while (v7 != nullptr);
      }
      else {
        v5 = 0;
      }
      CudaDriverStub_108070(v6 + 128);
      v3 = *(_QWORD*)(v3 + 16328);
      v4 += v5;
    } while (v3 != 0);
  }
  else {
    v4 = 0;
  }
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v2) != 0) {
    v8 = 0;
    do {
      v10 = CudaDriverStub_9b050(v2[v8 + 35]);
      if (v10 != 0) {
        v11 = v10;
        CudaDriverStub_107f90(v10 + 128);
        v12 = *(_QWORD**)(v11 + 2040);
        if (v12 != nullptr) {
          v9 = 0;
          do {
            if (v12[21] == 0 && (v12[30] & 7LL) == 2) {
              v9 += v12[16];
            }
            v12 = (_QWORD*)v12[1];
          } while (v12 != nullptr);
        }
        else {
          v9 = 0;
        }
        CudaDriverStub_108070(v11 + 128);
        v4 += v9;
      }
      ++v8;
    } while (v8 < *(unsigned int*)((char*)((_UNKNOWN*)0x318LL) + (_QWORD)v2));
  }
  *a1 = v4;
  return 0;
}

__int64 cuda_driver_237830(char a1)
{
  char v1;

  v1 = 8 * (a1 & 1);
  *((_BYTE*)&CudaDriverRoutine_747c + (_QWORD)CudaDriverData_1422118) =
      *((_BYTE*)&CudaDriverRoutine_747c + (_QWORD)CudaDriverData_1422118) &
          0xF7 |
      v1;
  return 0;
}

__int64 cuda_driver_2378e0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  void* v2;
  unsigned int v5;
  unsigned int v6;
  long double v7;
  __int64 v9;
  _QWORD v10[2];
  _QWORD v11[16];
  _BYTE v12[56];
  __int64 v13;
  __int64 v14;

  v10[0] = 0;
  v10[1] = 0;
  v14 = 0;
  memset(v11, 0, sizeof(v11));
  v9 = 0;
  v2 = CudaDriverData_1422118;
  if (*(_QWORD*)((char*)&CudaDriverRoutine_4358 +
                 (_QWORD)CudaDriverData_1422118) != 0) {
    v5 = CudaDriverRoutine_e37f0((__int64)v12, &v9);
    if (v5 == 0) {
      v5 = CudaDriverRoutine_106620(a2, &v14, nullptr);
      if (v5 == 0) {
        v5 = CudaDriverRoutine_e4c90(*(_BYTE**)(a1 + 64), v9, (__int64)&v13,
                                     (__int64)v11);
        if (v5 == 0) {
          v5 = cuda_driver_e4b80(v14, (__int64)v11);
          if (v5 == 0) {
            v5 = CudaDriverStub_e4960((__int64)v11, v10, 2);
            if (v5 == 0) {
              v5 = CudaDriverRoutine_4fe60(
                  *(_QWORD*)((char*)&CudaDriverRoutine_4358 + (_QWORD)v2),
                  (__int64)v10);
            }
          }
        }
      }
    }
    v6 = v5;
  }
  else {
    v6 = 3;
  }
  v7 = cuda_driver_e4e00((__int64)v11, 1);
  CudaDriverStub_4f8b0(v10, v7);
  CudaDriverRoutine_12e340(v14);
  CudaDriverRoutine_12e340(v9);
  return v6;
}

__int64 cuda_driver_237ba0(char a1)
{
  *((_BYTE*)&CudaDriverRoutine_71d0 + (_QWORD)CudaDriverData_1422118) = a1;
  return 0;
}

__int64 cuda_driver_237bc0(char a1)
{
  *((_BYTE*)&CudaDriverRoutine_71cc + (_QWORD)CudaDriverData_1422118 + 2) = a1;
  return 0;
}

__int64 cuda_driver_237be0(char a1)
{
  *((_BYTE*)&CudaDriverRoutine_71cc + (_QWORD)CudaDriverData_1422118 + 3) = a1;
  return 0;
}

__int64 cuda_driver_237c00(char a1)
{
  *((_BYTE*)&CudaDriverRoutine_5190 + (_QWORD)CudaDriverData_1422118 + 3) = a1;
  return 0;
}

#pragma GCC visibility pop
