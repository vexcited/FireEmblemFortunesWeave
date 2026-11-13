#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_19180(_DWORD*, unsigned __int64, __int64);
_DWORD* CudaDriverRoutine_5ab0(_DWORD*, unsigned __int64, __int64);
_DWORD* cuda_driver_misc_helpers_19130(_DWORD*, unsigned __int64, unsigned int);
_DWORD* cuda_driver_misc_helpers_5a60(_DWORD*, unsigned __int64, unsigned int);
__int64 CudaDriverRoutine_10480(_QWORD*, __int64, __int64);
__int64 CudaDriverRoutine_1059a0(__int64, _QWORD*, __int64, int, __int64,
                                 __int64, char);
__int64 CudaDriverRoutine_1090(__int64);
__int64 CudaDriverRoutine_11de00(__int64);
__int64 CudaDriverRoutine_11f370(__int64, unsigned int);
__int64 CudaDriverRoutine_11f790(__int64, unsigned int);
__int64 CudaDriverRoutine_11fa80(__int64);
__int64 CudaDriverRoutine_11fd60(__int64);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_13b30(__int64);
__int64 CudaDriverRoutine_15d80(__int64);
__int64 CudaDriverRoutine_15fd0(__int64);
__int64 CudaDriverRoutine_197480(__int64 result, __int64, unsigned int,
                                 unsigned int*, __int64, unsigned int, _QWORD*,
                                 unsigned int*);
__int64 CudaDriverRoutine_19a660(__int64, __int64*, __int64, __int64);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverRoutine_3540(__int64);
__int64 CudaDriverRoutine_3750(unsigned int, char);
__int64 CudaDriverRoutine_3770(__int64);
__int64 CudaDriverRoutine_928b0(__int64, _DWORD*, _DWORD*);
__int64 CudaDriverRoutine_92a90(__int64, __int64, __int64);
__int64 CudaDriverRoutine_96f20(__int64, __int64, __int64, unsigned int,
                                __int64, __int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_bbd70(__int64 result, _QWORD*);
__int64 CudaDriverRoutine_bc3f0(__int64);
__int64 CudaDriverRoutine_bc770(__int64);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_112e30(_QWORD);
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1dc330(_QWORD);
__int64 CudaDriverStub_640d0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_8e230(_QWORD);
__int64 cuda_driver_1394c0(__int64, __int64*, __int64, __int64);
__int64 cuda_driver_1da1b0(__int64, __int64*, __int64, _QWORD*);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_8c000(__int64, int, int);
__int64 cuda_driver_checks_bae90(__int64, __int64, __int64*);
__int64 cuda_driver_helpers_1db920(__int64, unsigned __int64);
__int64 cuda_driver_misc_helpers_17fc0(__int64 result, int);
__int64 cuda_driver_misc_helpers_4bb0(__int64 result);
__int64 cuda_driver_misc_helpers_4be0(__int64 result, int);
__int64 cuda_driver_predicates_10f750(__int64, int, unsigned int, __int64,
                                      _DWORD*, __int64);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
unsigned __int8 CudaDriverRoutine_11f2f0(__int64);
unsigned __int8 CudaDriverRoutine_11f690(__int64*);
unsigned __int8 CudaDriverRoutine_11f6d0(__int64);
unsigned __int8 CudaDriverRoutine_1dc6f0(__int64);
unsigned __int8 CudaDriverRoutine_bbdf0(__int64);
unsigned __int8 CudaDriverRoutine_bbe30(__int64);
unsigned __int8 CudaDriverRoutine_e7cb0(__int64, __int64, unsigned int);
unsigned __int8 CudaDriverStub_985a0(__int64);
unsigned __int8 CudaDriverStub_b9300(__int64);
unsigned __int8 cuda_driver_9b4d0(__int64, int);
extern _DWORD CudaDriverData_1130110[6];
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN CudaDriverData_f00000;
extern __int128 CudaDriverData_1115550;
extern __int128 CudaDriverData_11155a0;
extern __int128 CudaDriverData_1115760;
extern __int128 CudaDriverData_11157f0;
extern __int128 CudaDriverData_11161c0;
float cuda_driver_11f820(_BYTE*, float*);
long double CudaDriverRoutine_11f810(long double*, __int64);
void CudaDriverRoutine_4198();
void CudaDriverRoutine_41c0();
void CudaDriverRoutine_41c8();
void CudaDriverRoutine_4360();
void CudaDriverRoutine_436c();
void CudaDriverRoutine_4374();
void CudaDriverRoutine_437c();
void CudaDriverRoutine_4380();
void CudaDriverRoutine_4384();
void CudaDriverRoutine_4388();
void CudaDriverRoutine_438c();
void CudaDriverRoutine_4394();
void CudaDriverRoutine_43a4();
void CudaDriverRoutine_43ac();
void CudaDriverRoutine_43b4();
void CudaDriverRoutine_43c0();
void CudaDriverRoutine_43c4();
void CudaDriverRoutine_4460();
void CudaDriverRoutine_46fc();
void CudaDriverRoutine_743c();
void CudaDriverRoutine_747c();
void CudaDriverStub_10fdf0();
long double cuda_driver_580(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
_DWORD* cuda_driver_bc0(__int64 a1, _DWORD** a2, __int64 a3);
__int64 cuda_driver_10d0(__int64 a1, __int64 a2, unsigned int a3, int a4,
                         __int64 a5, __int64 a6, int* a7);
__int64 cuda_driver_1330(__int64 a1, unsigned int* a2, unsigned __int64* a3,
                         bool* a4);
__int64 cuda_driver_1470(__int64 a1, int a2, int a3, unsigned int* a4,
                         unsigned __int64* a5, char* a6);
__int64 cuda_driver_1640(__int64 a1);
__int64 cuda_driver_2590(__int64 a1);
__int64 cuda_driver_33e0(__int64 result, unsigned __int64 a2, unsigned int a3);
__int64 cuda_driver_3580(__int64 a1);
__int64 cuda_driver_5ee0(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_7410(__int64 result, __int64 a2, __int64 a3,
                         unsigned __int8 a4, char a5);
__int64 cuda_driver_77a0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5);
int8x8_t cuda_driver_7a60(__int64 a1, int8x8_t* a2, __int64 a3);
__int64 cuda_driver_7d10(__int64* a1, __int64 a2, __int64 a3, char a4);
__int64 cuda_driver_9060(__int64 a1, _QWORD* a2);
bool cuda_driver_9b60(__int64 a1, __int64 a2);
bool cuda_driver_9b90(__int64 a1, __int64 a2);
bool cuda_driver_9bc0();
bool cuda_driver_9c20(__int64 a1, __int64 a2);
bool cuda_driver_9c60(__int64 a1, __int64 a2);
bool cuda_driver_9ca0(__int64 a1, __int64 a2);
bool cuda_driver_9ce0();
bool cuda_driver_9d00(__int64 a1, __int64 a2, _WORD* a3);
bool cuda_driver_9d50(__int64 a1, __int64 a2);
bool cuda_driver_9d80(__int64 a1, __int64 a2, _WORD* a3);
bool cuda_driver_9dd0(__int64 a1, __int64 a2);
bool cuda_driver_9e00(__int64 a1, __int64 a2, _WORD* a3);
bool cuda_driver_9e50(__int64 a1, __int64 a2);
bool cuda_driver_9e80(__int64 a1, __int64 a2, _WORD* a3);
bool cuda_driver_9ec0(__int64 a1, __int64 a2, _WORD* a3);
bool cuda_driver_9f10(__int64 a1, __int64 a2, _WORD* a3);
bool cuda_driver_9f60(__int64 a1, __int64 a2, _WORD* a3);
bool cuda_driver_9fa0(__int64 a1, __int64 a2);
bool cuda_driver_9fd0(__int64 a1, __int64 a2, _WORD* a3);
bool cuda_driver_a0f0(__int64 a1, __int64 a2);
bool cuda_driver_a170(__int64 a1, __int64 a2);
__int64 cuda_driver_a9f0(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_cea0(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_d620(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_d680(__int64 a1, __int64 a2, __int64 a3);
_DWORD* cuda_driver_e320(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                         unsigned __int64 a5, __int64 a6, unsigned int a7);
_DWORD* cuda_driver_f6a0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                         int a5);
__int64 cuda_driver_11140(__int64 a1, __int64 a2, __int64 a3, bool* a4);
__int64 cuda_driver_112a0(__int64 a1, __int64 a2, int a3);
void cuda_driver_11b00(__int64 a1, _QWORD* a2);
__int64 cuda_driver_11ea0(__int64 a1, _BYTE* a2);
__int64 cuda_driver_120d0(__int64 a1, __int64 a2);
__int64 cuda_driver_12100(__int64 a1, __int64 a2, int a3);
long double cuda_driver_12bc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
_DWORD* cuda_driver_13280(__int64 a1, _DWORD** a2, __int64 a3);
_DWORD* cuda_driver_13660(__int64 a1, _DWORD** a2, __int64 a3);
__int64 cuda_driver_13b70(__int64 a1, __int64 a2, unsigned int a3, int a4,
                          __int64 a5, __int64 a6, int* a7);
__int64 cuda_driver_13dd0(__int64 a1, unsigned int* a2, unsigned __int64* a3,
                          bool* a4);
__int64 cuda_driver_13f10(__int64 a1, int a2, int a3, unsigned int* a4,
                          unsigned __int64* a5, char* a6);
__int64 cuda_driver_15030(__int64 a1);
__int64 cuda_driver_15c20(__int64 result, unsigned __int64 a2, unsigned int a3);
__int64 cuda_driver_15dc0(__int64 a1);
__int64 cuda_driver_191d0(__int64 a1, _DWORD** a2, __int64 a3);
__int64 cuda_driver_19720(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_1b720(__int64 result, __int64 a2, __int64 a3,
                          unsigned __int8 a4, char a5, char a6);
__int64 cuda_driver_1b870(__int64 result, __int64 a2, __int64 a3,
                          unsigned __int8 a4, char a5, char a6);
__int64 cuda_driver_1b9c0(__int64 result, __int64 a2, __int64 a3, char a4);
int8x8_t cuda_driver_1c100(__int64 a1, int8x8_t* a2, __int64 a3);
__int64 cuda_driver_1c3b0(__int64* a1, __int64 a2, __int64 a3, char a4);
__int64 cuda_driver_1cbc0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, unsigned int a6);
_DWORD* cuda_driver_1ce20(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                          unsigned __int64 a5, __int64 a6, char a7,
                          unsigned int a8);
_DWORD* cuda_driver_1e000(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                          int a5);
__int64 cuda_driver_1e1c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 cuda_driver_20440(__int64 a1, __int64 a2, __int64 a3, bool* a4);
__int64 cuda_driver_205a0(__int64 a1, __int64 a2, int a3);
void cuda_driver_20e00(__int64 a1, _QWORD* a2);
__int64 cuda_driver_211a0(__int64 a1, _BYTE* a2);
__int64 cuda_driver_213d0(__int64 a1, __int64 a2);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64, __int64);
__int64 CudaDriverRoutine_7fa50(__int64, int, __int64, __int64, int, __int64,
                                char, __int64, unsigned int, int);
__int64 CudaDriverRoutine_8ab20(__int64, __int64, int, int);
__int64 CudaDriverRoutine_ba080(__int64, __int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_f60f0(__int64, __int64, __int64, __int64, __int64,
                                __int64, unsigned int, __int64, unsigned int);
__int64 CudaDriverRoutine_f6230(__int64, __int64, __int64, __int64, __int64,
                                __int64, unsigned int, __int64);
__int64 CudaDriverRoutine_f8ed0(_DWORD*);
__int64 CudaDriverRoutine_f8f00(_DWORD*);
__int64 CudaDriverStub_1a2960(__int64, __int64, __int64);
__int64 CudaDriverStub_5ab60(_QWORD, _QWORD);
__int64
CudaDriverStub_640d0_alt1(__int64, __int64,
                          unsigned __int64) __asm__("CudaDriverStub_640d0");
__int64 CudaDriverStub_b9660(__int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
unsigned __int8 CudaDriverRoutine_1dd060(__int64);
unsigned __int8 CudaDriverRoutine_86fe0(__int64);
unsigned __int8 cuda_debugger_api_7cff0();
extern _BYTE CudaDriverData_4398[8];
extern _UNKNOWN CudaDriverData_1432130;
extern int CudaDriverData_14358d0;
void CudaDriverRoutine_4368();
void CudaDriverRoutine_4378();
void CudaDriverRoutine_43b8();
__int64 cuda_driver_unplaced_a650(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_unplaced_b260(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_unplaced_b660(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_unplaced_c280(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_unplaced_d300(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_1c980(_DWORD* a1, __int64 a2, __int64 a3,
                          unsigned __int64 a4, __int64 a5, unsigned int a6);
__int64 cuda_driver_unplaced_1d140(__int64* a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   unsigned int a7);

long double cuda_driver_580(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  int v16;
  int v17;
  __int64 v18;
  unsigned int* v19;
  unsigned int v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  int8x16_t v26;
  int8x8_t v27;
  int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int8x16_t v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  int v38;
  unsigned __int64 v39;
  int v40;
  int8x16_t v41;
  int v42;
  __int64 v43;
  int8x16_t v45;
  int8x16_t v46;
  __int128 v47;
  __int64 v48;
  _DWORD v49[8];
  struct {
    _QWORD v50[2];
    int8x16_t v51;
    int8x16_t v52;
    __int128 v53;
  } v50_;

  v4 = *(_DWORD*)(a3 + 20);
  v48 = 0;
  *(_OWORD*)v50_.v50 = (__typeof__(*(_OWORD*)v50_.v50)){0};
  v50_.v51 = (__typeof__(v50_.v51)){0};
  v50_.v52 = (__typeof__(v50_.v52)){0};
  v50_.v53 = (__typeof__(v50_.v53)){0};
  *(_DWORD*)(a3 + 20) = v4 & 0x3FFFFFF;
  v9 = *(_DWORD*)(a3 + 44) & 0xFFFCFFFF;
  memset(v49, 0, sizeof(v49));
  *(_DWORD*)(a3 + 44) = v9;
  *(_DWORD*)(a3 + 100) &= ~0x80000u;
  *(_DWORD*)(a3 + 116) &= ~0x80000u;
  *(_DWORD*)(a3 + 212) &= ~0x80000u;
  CudaDriverRoutine_bbd70(a2, &v48);
  v10 = *(_DWORD*)(a3 + 68);
  v11 = HIDWORD(v48) & 0x1FFFF | (*(_DWORD*)(a3 + 196) >> 17 << 17);
  *(_DWORD*)(a3 + 192) = v48;
  *(_DWORD*)(a3 + 196) = v11;
  *(_DWORD*)(a3 + 44) |= 0x44000000u;
  v12 = *(_DWORD*)(a3 + 80);
  *(_DWORD*)(a3 + 92) = *(_DWORD*)(a3 + 92) & 0x7FFFFFF | 0x8000000;
  v13 = *(_DWORD*)(a2 + 392);
  *(_DWORD*)(a3 + 88) = 0;
  *(_DWORD*)(a3 + 80) = v12 & 0xFFFE00FF | ((v13 & 0x1FF) << 8);
  *(_DWORD*)(a3 + 84) = 0;
  *(_BYTE*)(a3 + 72) = 48;
  *(_BYTE*)(a3 + 207) = -122;
  v14 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3888LL);
  v15 = v10 & 0xFFFC0000 |
        (((unsigned __int64)(unsigned int)(v14 - 1) + 8448) / v14 * v14) &
            0x3FFFF;
  *(_DWORD*)(a3 + 68) = v15;
  v16 = v15 & 0xFF03FFFF | ((CudaDriverRoutine_3750(0x4000u, 0) & 0x3F) << 18);
  *(_DWORD*)(a3 + 68) = v16;
  *(_DWORD*)(a3 + 68) =
      v16 & 0x81FFFFFF | ((CudaDriverRoutine_3750(0x19000u, 0) & 0x3F) << 25);
  v17 = *(_DWORD*)(a3 + 80);
  *(_DWORD*)(a3 + 80) =
      v17 & 0xFF81FFFF | ((CudaDriverRoutine_3750(0x4000u, 0) & 0x3F) << 17);
  v18 = CudaDriverStub_112e30(*(_QWORD*)(a1 + 96));
  CudaDriverRoutine_96f20(a1, a2, v18, 0, (__int64)v50_.v50, (__int64)v49);
  v19 = *(unsigned int**)(a1 + 64);
  if (v19[944] != 0) {
    v20 = 1075;
    v21 = 0;
    do {
      while (1) {
        v22 = v50_.v50[v21];
        if (v22 != 0) {
          break;
        }
        *(_DWORD*)(a3 + 4LL * ((unsigned int)(v21 + 640) >> 5)) &= ~(1 << v21);
        v19 = *(unsigned int**)(a1 + 64);
        ++v21;
        v20 += 64;
        if (v21 >= v19[944]) {
          goto LABEL_6;
        }
      }
      v23 = ((v49[v21] + v19[946] - 1) / v19[946] * v19[946]) << 15;
      *(_DWORD*)(a3 + 4LL * ((unsigned int)(v21 + 640) >> 5)) |= 1 << v21;
      *(_DWORD*)(a3 + 4LL * (v20 >> 5)) =
          v23 & 0xFFF80000 | *(_DWORD*)(a3 + 4LL * (v20 >> 5)) & 0x7FFFF;
      *(_DWORD*)(a3 + 4LL * ((v20 - 19) >> 5)) =
          HIDWORD(v22) & 0x1FFFF |
          (*(_DWORD*)(a3 + 4LL * ((v20 - 19) >> 5)) >> 17 << 17);
      *(_DWORD*)(a3 + 4LL * ((v20 - 51) >> 5)) = v22;
      v19 = *(unsigned int**)(a1 + 64);
      ++v21;
      v20 += 64;
    } while (v21 < v19[944]);
  }
LABEL_6:
  *(_DWORD*)(a3 + 4LL * ((v19[2927] + 640) >> 5)) |= 1 << v19[2927];
  v24 =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1075) >>
      5;
  *(_DWORD*)(a3 + 4LL * v24) = *(_DWORD*)(a3 + 4LL * v24) & 0x7FFFF | 0xE000000;
  v25 =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1056) >>
      5;
  *(_DWORD*)(a3 + 4LL * v25) = ((unsigned __int64)(a4 + 2048) >> 32) & 0x1FFFF |
                               (*(_DWORD*)(a3 + 4LL * v25) >> 17 << 17);
  *(_DWORD*)(a3 +
             4LL * ((unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL)
                                    << 6) +
                                   1024) >>
                    5)) = a4 + 2048;
  *(_WORD*)(a3 + 74) = 32;
  LANES128(v26).n128_u64[0] = *(_QWORD*)(a3 + 8);
  PSEUDO_LOW_LANE64(v27, n64_u64, *(unsigned __int64*)(a3 + 16));
  *(_DWORD*)(a3 + 76) = 65537;
  LOBYTE(v25) = *(_BYTE*)(a3 + 203);
  *(_DWORD*)(a3 + 92) =
      *(_DWORD*)(a1 + 1276) & 0xFFFFFF | (*(unsigned __int8*)(a3 + 95) << 24);
  v28 = *(_DWORD*)(a1 + 1280) & 0xFFFFFF | ((unsigned __int8)v25 << 24);
  v29 = *(_DWORD*)(a3 + 44);
  *(_DWORD*)(a3 + 200) = v28;
  v30 = *(_DWORD*)(a3 + 100) & 0xFF7FFFFF;
  *(_QWORD*)(a3 + 44) = (v29 & 0xFFF74000) + 557056;
  *(_DWORD*)(a3 + 100) = v30;
  *(_DWORD*)(a3 + 116) &= ~0x800000u;
  v31 = *(_DWORD*)(a3 + 4) & 0x80000000 | 0xFFFFF;
  *(_DWORD*)a3 &= 0x80000000;
  *(_DWORD*)(a3 + 4) = v31;
  *(_DWORD*)(a3 + 64) = (*(_DWORD*)(a3 + 64) & 0xFF8003FF) + 1327104;
  *(int8x8_t*)&LANES128(v26).n128_i8[8] =
      vand_s8(v27, COERCE_AS(int8x8_t, 0xFE000000FFFFFEC0LL));
  LANES128(v32).n128_u64[0] = 0x8000000080000000LL;
  LANES128(v32).n128_u64[1] = 0x8000000080000000LL;
  LANES128(v32).n128_u64[0] = LANES128_OF(vandq_s8(v26, v32)).n128_u64[0];
  LANES128(v32).n128_u64[1] =
      LANES128_OF(vorrq_s8(v26, COERCE_AS(int8x16_t, CudaDriverData_1115760)))
          .n128_u64[1];
  LANES128(v26).n128_u64[0] = *(_QWORD*)(a3 + 52);
  *(int8x16_t*)(a3 + 8) = v32;
  *(int8x8_t*)(a3 + 52) =
      vand_s8(COERCE_AS(int8x8_t, LANES128(v26).n128_u64[0]),
              COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL));
  v33 = CudaDriverRoutine_98340(a1);
  v34 = v48;
  v35 = v33;
  v36 = CudaDriverRoutine_3540(v33);
  v37 = CudaDriverRoutine_1090(v35);
  v38 = v37;
  v39 = HIDWORD(v37);
  v40 = CudaDriverRoutine_3770(a2);
  PSEUDO_LOW_LANE128(v41, n128_u64, v50_.v53);
  v42 = v40;
  v46 = vextq_s8(v50_.v51, v50_.v52, 8u);
  v47 = *(_OWORD*)v50_.v50;
  v45 = vextq_s8(v50_.v52, v41, 8u);
  v43 = CudaDriverStub_1db800(*(_QWORD*)(v35 + 2232));
  *(_QWORD*)(a3 + 2072) = v36;
  *(_DWORD*)(a3 + 2080) = v38;
  *(_DWORD*)(a3 + 2084) = v39;
  *(_DWORD*)(a3 + 2088) = v42;
  *(_DWORD*)(a3 + 2092) = 0;
  *(_QWORD*)(a3 + 2104) = a4;
  *(_QWORD*)(a3 + 2352) = 0;
  *(_QWORD*)(a3 + 2360) = v43;
  *(_QWORD*)(a3 + 8288) = v34;
  *(_QWORD*)(a3 + 8312) = 0;
  *(_QWORD*)(a3 + 1088) = a4 + 2048;
  *(_QWORD*)(a3 + 2064) = 0x100000001LL;
  *(int8x16_t*)(a3 + 2128) = v46;
  *(int8x16_t*)(a3 + 2144) = v45;
  *(_QWORD*)(a3 + 2096) = -4;
  *(_OWORD*)(a3 + 2112) = v47;
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

_DWORD* cuda_driver_bc0(__int64 a1, _DWORD** a2, __int64 a3)
{
  _DWORD* v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int16 v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  unsigned int* v22;
  unsigned int v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned __int8 v29;
  int v30;
  unsigned __int8 v31;
  int v32;
  __int64 v33;
  int v34;
  _DWORD* result;
  __int64 (*v36)(_DWORD*, __int64, _QWORD, _QWORD*, __int64, __int64);
  __int64 v37;
  _DWORD* v38;
  struct {
    _QWORD v39[2];
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
  } v39_;
  __int64 v55;
  _DWORD v56[8];
  _QWORD v57[8];

  v3 = *a2;
  memset(v56, 0, sizeof(v56));
  memset(v57, 0, sizeof(v57));
  v7 = *(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072);
  v55 = 0;
  v8 = *(_QWORD*)(v7 + 392);
  v9 = *(_QWORD*)(a3 + 136);
  *(_OWORD*)v39_.v39 = (__typeof__(*(_OWORD*)v39_.v39)){0};
  v39_.v40 = (__typeof__(v39_.v40)){0};
  v39_.v41 = (__typeof__(v39_.v41)){0};
  v39_.v42 = (__typeof__(v39_.v42)){0};
  v10 = *(_QWORD*)(v9 + 192);
  v11 = *(_QWORD*)(a1 + 64);
  v39_.v43 = (__typeof__(v39_.v43)){0};
  v39_.v44 = (__typeof__(v39_.v44)){0};
  v12 = *(unsigned int*)(v11 + 11708);
  v39_.v45 = (__typeof__(v39_.v45)){0};
  v39_.v46 = (__typeof__(v39_.v46)){0};
  v39_.v47 = (__typeof__(v39_.v47)){0};
  v39_.v48 = (__typeof__(v39_.v48)){0};
  v39_.v49 = (__typeof__(v39_.v49)){0};
  v39_.v50 = (__typeof__(v39_.v50)){0};
  v13 = *(_QWORD*)(a3 + 8 * v12 + 40);
  DWORD1(v39_.v46) = 0;
  v39_.v51 = (__typeof__(v39_.v51)){0};
  v39_.v52 = (__typeof__(v39_.v52)){0};
  v39_.v53 = (__typeof__(v39_.v53)){0};
  v39_.v54 = (__typeof__(v39_.v54)){0};
  *(_QWORD*)&v39_.v40 = 0x3C00000000001000LL;
  CudaDriverRoutine_bbd70(v8, &v55);
  *(_QWORD*)&v39_.v51 = v55 & 0x1FFFFFFFFFFFFLL;
  HIDWORD(v39_.v41) = 1141047296;
  v14 = *(_DWORD*)(v8 + 392);
  HIDWORD(v39_.v44) = 0x8000000;
  v15 = (v14 & 0x1FF) << 8;
  BYTE8(v39_.v43) = 48;
  HIBYTE(v39_.v51) = -122;
  v16 = *(_QWORD*)(a1 + 64);
  LODWORD(v39_.v44) = v15;
  *(_QWORD*)((char*)&v39_.v44 + 4) = 0;
  v17 = (((unsigned __int64)(unsigned int)(*(_DWORD*)(v16 + 3888) - 1) + 8448) /
         *(unsigned int*)(v16 + 3888) * *(_DWORD*)(v16 + 3888)) &
        0x3FFFF;
  v18 = v17 | ((CudaDriverRoutine_3750(0x4000u, 0) & 0x3F) << 18);
  DWORD1(v39_.v43) = v18 | ((CudaDriverRoutine_3750(0x19000u, 0) & 0x3F) << 25);
  v19 = v39_.v44 & 0xFF81FFFF |
        ((CudaDriverRoutine_3750(0x4000u, 0) & 0x3F) << 17);
  v20 = *(_QWORD*)(a1 + 96);
  LODWORD(v39_.v44) = v19;
  v21 = CudaDriverStub_112e30(v20);
  CudaDriverRoutine_96f20(a1, v8, v21, 0, (__int64)v57, (__int64)v56);
  v22 = *(unsigned int**)(a1 + 64);
  if (v22[944] != 0) {
    v23 = 1075;
    v24 = 0;
    do {
      while (1) {
        v25 = v57[v24];
        if (v25 != 0) {
          break;
        }
        *((_DWORD*)v39_.v39 + ((unsigned int)(v24 + 640) >> 5)) &= ~(1 << v24);
        ++v24;
        v23 += 64;
        if (v24 >= v22[944]) {
          goto LABEL_6;
        }
      }
      v26 = ((v56[v24] + v22[946] - 1) / v22[946] * v22[946]) << 15;
      *((_DWORD*)v39_.v39 + ((unsigned int)(v24 + 640) >> 5)) |= 1 << v24;
      *((_DWORD*)v39_.v39 + (v23 >> 5)) =
          v26 & 0xFFF80000 | *((_DWORD*)v39_.v39 + (v23 >> 5)) & 0x7FFFF;
      *((_DWORD*)v39_.v39 + ((v23 - 19) >> 5)) =
          HIDWORD(v25) & 0x1FFFF |
          (*((_DWORD*)v39_.v39 + ((v23 - 19) >> 5)) >> 17 << 17);
      *((_DWORD*)v39_.v39 + ((v23 - 51) >> 5)) = v25;
      ++v24;
      v23 += 64;
    } while (v24 < v22[944]);
  }
LABEL_6:
  *((_DWORD*)v39_.v39 + ((v22[2927] + 640) >> 5)) |= 1 << v22[2927];
  v27 = ((v22[2927] << 6) + 1075) >> 5;
  *((_DWORD*)v39_.v39 + v27) = *((_DWORD*)v39_.v39 + v27) & 0x7FFFF | 0xE000000;
  v28 = ((v22[2927] << 6) + 1056) >> 5;
  *((_DWORD*)v39_.v39 + v28) =
      HIDWORD(v13) & 0x1FFFF | (*((_DWORD*)v39_.v39 + v28) >> 17 << 17);
  *((_DWORD*)v39_.v39 + (((v22[2927] << 6) + 1024) >> 5)) = v13;
  WORD5(v39_.v43) = 1;
  v29 = HIBYTE(v39_.v44);
  HIDWORD(v39_.v43) = 65537;
  v30 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1276) & 0xFFFFFF | (v29 << 24);
  v31 = BYTE11(v39_.v51);
  HIDWORD(v39_.v44) = v30;
  v32 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1280) & 0xFFFFFF | (v31 << 24);
  LODWORD(v39_.v40) = v39_.v40 & 0xFFFFFFC0;
  DWORD2(v39_.v51) = v32;
  v33 = CudaDriverStub_1223e0(*(_QWORD*)(v10 + 24));
  DWORD1(v39_.v45) = DWORD1(v39_.v45) & 0x1B0FFFFF | 0x44800000;
  v34 = CudaDriverStub_8e230(v10);
  LODWORD(v39_.v45) = v33;
  DWORD2(v39_.v45) = v34;
  BYTE4(v39_.v45) = BYTE4(v33);
  LODWORD(v39_.v42) = 1;
  DWORD1(v39_.v46) &= ~0x800000u;
  LODWORD(v39_.v40) = v39_.v40 & 0xFFFFFEFF;
  *(_QWORD*)((char*)&v39_.v42 + 4) =
      LANES64_OF(vand_s8(*(int8x8_t*)((char*)&v39_.v42 + 4),
                         COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL)))
          .n64_u64[0] |
      0x100000001LL;
  if (*(_BYTE*)(*(_QWORD*)(CudaDriverRoutine_98340(a1) + 16104) + 3096LL) !=
          0 &&
      *(_BYTE*)(a3 + 196) != 0) {
    result = CudaDriverRoutine_5ab0(v3, *(_QWORD*)(v10 + 8), (__int64)v39_.v39);
  }
  else {
    v36 = *(__int64 (**)(_DWORD*, __int64, _QWORD, _QWORD*, __int64, __int64))(
        *(_QWORD*)(a1 + 64) + 19248LL);
    v37 = CudaDriverRoutine_98340(a1);
    v38 = (_DWORD*)v36(v3, v37, *(_QWORD*)(v10 + 8), v39_.v39, 256, 2);
    result = cuda_driver_misc_helpers_5a60(v38, *(_QWORD*)(v10 + 8), 1u);
  }
  *a2 = result;
  return result;
}

__int64 cuda_driver_10d0(__int64 a1, __int64 a2, unsigned int a3, int a4,
                         __int64 a5, __int64 a6, int* a7)
{
  unsigned __int64 v12;
  void* v13;
  int v14;
  int v15;
  unsigned int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v22;
  int v23;
  unsigned int v24;
  _DWORD* v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;

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
  v15 = v14 + a4;
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
    if (*(_BYTE*)(a1 + 1301) != 0) {
      v17 = *(_DWORD*)(a2 + 72);
    LABEL_15:
      v19 = (v17 + 15) & 0xFFFFFFF0;
      v18 = 1;
      *(_DWORD*)(a6 + 28) = v19;
      goto LABEL_21;
    }
    v17 = *(_DWORD*)(a2 + 72);
    if (*(_DWORD*)(a5 + 28) < v17) {
      goto LABEL_15;
    }
    if (*(_DWORD*)(a5 + 32) == ((v15 + (_DWORD)v12 + 15) & 0xFFFFFFF0)) {
    LABEL_20:
      v18 = 3;
    LABEL_21:
      *a7 = v18;
      v20 = *(_DWORD*)(a6 + 28);
      if (v20 <= 0x80000) {
        goto LABEL_22;
      }
      return 999;
    }
  }
  else {
    if (*(_DWORD*)(a5 + 28) > 0x3FFu) {
      v18 = 2;
      *(_DWORD*)(a6 + 28) = 0;
      goto LABEL_21;
    }
    if (*(_DWORD*)(a5 + 32) == ((v15 + a3 + 15) & 0xFFFFFFF0)) {
      goto LABEL_20;
    }
  }
  v20 = *(_DWORD*)(a6 + 28);
  if (v20 > 0x80000) {
    return 999;
  }
LABEL_22:
  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c + (_QWORD)v13 + 2)) != 0) {
    v22 = 64;
  }
  else {
    v22 = 576;
  }
  v23 = a4 + v12 + v22 + 15;
  v24 = v23 & 0xFFFFFFF0;
  if ((v23 & 0xFFFFFFF0) <= 0x80000) {
    v25 = *(_DWORD**)(a1 + 64);
    v26 = v25[981] * (v24 + v20) + 511;
    v27 = v25[939];
    LODWORD(v25) = v25[935];
    v26 &= 0xFFFFFE00;
    v28 = *(_DWORD*)(a1 + 160);
    *(_DWORD*)(a6 + 32) = v24;
    *(_DWORD*)(a6 + 36) = v26;
    *(_DWORD*)(a6 + 20) =
        ((((v23 | 0xF) + v20) >> 4 << 9) + 33791) & 0xFFFFFE00;
    *(_DWORD*)(a6 + 24) = a4;
    *(_DWORD*)(a6 + 16) = v24 - v15;
    *(_QWORD*)(a6 + 8) =
        (unsigned int)v25 * (unsigned __int64)v28 *
        ((v27 * (unsigned __int64)v26 + 0x7FFF) & 0xFFFFFFFFFFFF8000LL);
    return 0;
  }
  else {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Requested stack size exceeds limit\n");
    return 1;
  }
}

__int64 cuda_driver_1330(__int64 a1, unsigned int* a2, unsigned __int64* a3,
                         bool* a4)
{
  unsigned int v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned __int64 v14;
  unsigned int v15;
  bool v17;

  v8 = (*(_DWORD*)(a1 + 72) + 15) & 0xFFFFFFF0;
  v9 = CudaDriverRoutine_bc3f0(a1);
  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL);
  if ((*(unsigned __int8*)(v10 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c +
         (_QWORD)CudaDriverData_1422118 + 2)) != 0) {
    v12 = 64;
  }
  else {
    v12 = 576;
  }
  v11 = v9 + *(_DWORD*)(v10 + 1312);
  v13 = (v11 + v12 + 15) & 0xFFFFFFF0;
  if (v13 > 0x80000) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Requested stack size exceeds limit\n");
    v14 = 0;
    v15 = 0;
    if (a2 == nullptr) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v14 = *(unsigned int*)(*(_QWORD*)(v10 + 64) + 3740LL) *
        (unsigned __int64)*(unsigned int*)(v10 + 160) *
        ((*(unsigned int*)(*(_QWORD*)(v10 + 64) + 3756LL) *
              (unsigned __int64)((*(_DWORD*)(*(_QWORD*)(v10 + 64) + 3924LL) *
                                      (v13 + v8) +
                                  511) &
                                 0xFFFFFE00) +
          0x7FFF) &
         0xFFFFFFFFFFFF8000LL);
  v15 = (v11 + v12 + 15) & 0xFFFFFFF0;
  if (a2 != nullptr) {
  LABEL_8:
    *a2 = v15;
  }
LABEL_9:
  if (a3 != nullptr) {
    *a3 = v14;
  }
  if (a4 != nullptr) {
    v17 = v8 < 0x80001 && v13 < 0x80001;
    *a4 = v17;
  }
  return 0;
}

__int64 cuda_driver_1470(__int64 a1, int a2, int a3, unsigned int* a4,
                         unsigned __int64* a5, char* a6)
{
  int v9;
  unsigned int v10;
  unsigned __int64 v11;
  char v12;

  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c +
         (_QWORD)CudaDriverData_1422118 + 2)) != 0) {
    v9 = 64;
  }
  else {
    v9 = 576;
  }
  v10 = (a3 + *(_DWORD*)(a1 + 1312) + v9 + 15) & 0xFFFFFFF0;
  if (v10 <= 0x80000) {
    v11 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3740LL) *
          (unsigned __int64)*(unsigned int*)(a1 + 160) *
          ((*(unsigned int*)(*(_QWORD*)(a1 + 64) + 3756LL) *
                (unsigned __int64)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3924LL) *
                                        (v10 + a2) +
                                    511) &
                                   0xFFFFFE00) +
            0x7FFF) &
           0xFFFFFFFFFFFF8000LL);
    v12 = 1;
    if (a4 == nullptr) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                          (__int64)"Requested stack size exceeds limit\n");
  v11 = 0;
  v10 = 0;
  v12 = 0;
  if (a4 != nullptr) {
  LABEL_8:
    *a4 = v10;
  }
LABEL_9:
  if (a5 != nullptr) {
    *a5 = v11;
  }
  if (a6 != nullptr) {
    *a6 = v12;
  }
  return 0;
}

__int64 cuda_driver_1640(__int64 a1)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int* v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  __int16 v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  char v29;
  unsigned int v30;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  __int16 v36;
  int v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  int v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  bool v54;
  unsigned int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  unsigned int v60;
  int v61;
  char v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  unsigned int v72;
  int v73;
  int v74;
  int v75;
  __int64 v76;
  float v77;
  int v78;
  int v79;
  int v80;
  int v81;
  float v82;
  _BOOL4 v83;
  bool v84;
  double v85;
  int v86;
  int v87;
  unsigned int v88;
  float v89;
  _BOOL4 v90;
  bool v91;
  __int16 v92;
  float v93;
  int v94;
  int v95;
  int v96;
  int v97;
  unsigned int v99;
  __int64 v100;
  __int64* v104;
  int v105;
  int v106;
  long double v107;
  _BYTE v108[4];

  if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) != 0) {
    return CudaDriverRoutine_11de00(a1);
  }
  v3 = *(_DWORD*)(a1 + 40);
  *(_OWORD*)(a1 + 336) = (__typeof__(*(_OWORD*)(a1 + 336))){0};
  *(_OWORD*)(a1 + 352) = (__typeof__(*(_OWORD*)(a1 + 352))){0};
  *(_OWORD*)(a1 + 368) = (__typeof__(*(_OWORD*)(a1 + 368))){0};
  *(_OWORD*)(a1 + 384) = (__typeof__(*(_OWORD*)(a1 + 384))){0};
  if (v3 == 1) {
    if (*(_DWORD*)(a1 + 120) != 0) {
      v4 = 1;
    }
    else {
      v4 = 2;
    }
    v5 = (__int64*)(a1 + 8);
    if (!CudaDriverStub_985a0(*(_QWORD*)(a1 + 8))) {
      goto LABEL_13;
    }
  LABEL_10:
    if (*(_DWORD*)(a1 + 40) == 2 && *(_BYTE*)(a1 + 920) != 0) {
      v4 = 1;
    }
    goto LABEL_13;
  }
  v4 = 0;
  v5 = (__int64*)(a1 + 8);
  if (CudaDriverStub_985a0(*(_QWORD*)(a1 + 8))) {
    goto LABEL_10;
  }
LABEL_13:
  v6 = CudaDriverRoutine_11fa80(a1);
  v7 = 1;
  v8 = 29;
  switch (v6) {
  case 0:
    v8 = 28;
    goto LABEL_36;
  case 3:
    v8 = 20;
    goto LABEL_36;
  case 6:
    v8 = 21;
    goto LABEL_36;
  case 47:
    v8 = 34;
    goto LABEL_36;
  case 48:
    v8 = 35;
    goto LABEL_36;
  case 54:
    v8 = 9;
    goto LABEL_36;
  case 69:
    v8 = 1;
    goto LABEL_36;
  case 76:
    v8 = 3;
    goto LABEL_36;
  case 80:
    v8 = 4;
    goto LABEL_36;
  case 88:
    v8 = 8;
    goto LABEL_36;
  case 93:
    v8 = 12;
    goto LABEL_36;
  case 97:
    v8 = 15;
    goto LABEL_36;
  case 103:
    v8 = 24;
    goto LABEL_36;
  case 107:
    v8 = 27;
    goto LABEL_36;
  case 113:
    goto LABEL_36;
  case 119:
    v8 = 36;
    goto LABEL_36;
  case 121:
    v8 = 37;
    goto LABEL_36;
  case 123:
    v8 = 38;
    goto LABEL_36;
  case 125:
    v8 = 39;
    goto LABEL_36;
  case 127:
    v8 = 40;
    goto LABEL_36;
  case 130:
    v8 = 17;
    goto LABEL_36;
  case 131:
    v8 = 16;
    goto LABEL_36;
  case 132:
    v8 = 23;
  LABEL_36:
    v9 = (unsigned int*)(a1 + 336);
    *(_DWORD*)(a1 + 336) = *(_DWORD*)(a1 + 336) & 0xFFFFFF80 | v8;
    v10 = CudaDriverRoutine_11fd60(a1);
    if (v10 <= 2) {
      if (v10 == 1) {
        v13 = *v9;
        v14 = 1170;
      }
      else {
        if (v10 != 2) {
          return v7;
        }
        v13 = *v9;
        v14 = 585;
      }
    LABEL_52:
      *(_DWORD*)(a1 + 336) = v13 & 0xFFF8007F | ((v14 & 0xFFF) << 7);
      v11 = CudaDriverRoutine_11f370(a1, 0);
      if (v11 <= 2) {
        goto LABEL_41;
      }
      goto LABEL_53;
    }
    if (v10 == 3) {
      v13 = *v9;
      v14 = 2340;
      goto LABEL_52;
    }
    if (v10 == 4) {
      v13 = *v9;
      v14 = 1755;
      goto LABEL_52;
    }
    if (v10 != 5) {
      return v7;
    }
    *(_DWORD*)(a1 + 336) = *v9 | 0x7FF80;
    v11 = CudaDriverRoutine_11f370(a1, 0);
    if (v11 <= 2) {
    LABEL_41:
      if (v11 != 0) {
        if (v11 == 1) {
          *(_DWORD*)(a1 + 336) = *v9 & 0xFFC7FFFF | 0x100000;
          v12 = CudaDriverRoutine_11f370(a1, 1u);
          if (v12 <= 2) {
            goto LABEL_75;
          }
        }
        else {
          if (v11 != 2) {
            return v7;
          }
          *(_DWORD*)(a1 + 336) = *v9 & 0xFFC7FFFF | 0x180000;
          v12 = CudaDriverRoutine_11f370(a1, 1u);
          if (v12 <= 2) {
            goto LABEL_75;
          }
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v9 & 0xFFC7FFFF;
        v12 = CudaDriverRoutine_11f370(a1, 1u);
        if (v12 <= 2) {
          goto LABEL_75;
        }
      }
    LABEL_66:
      if (v12 > 4) {
        if (v12 == 5) {
          *(_DWORD*)(a1 + 336) = *v9 & 0xFE3FFFFF | 0x1800000;
          v15 = CudaDriverRoutine_11f370(a1, 2u);
          if (v15 <= 2) {
            goto LABEL_94;
          }
        }
        else {
          if (v12 != 6) {
            return v7;
          }
          *(_DWORD*)(a1 + 336) = *v9 | 0x1C00000;
          v15 = CudaDriverRoutine_11f370(a1, 2u);
          if (v15 <= 2) {
            goto LABEL_94;
          }
        }
      }
      else if (v12 == 3) {
        *(_DWORD*)(a1 + 336) = *v9 & 0xFE3FFFFF | 0x1000000;
        v15 = CudaDriverRoutine_11f370(a1, 2u);
        if (v15 <= 2) {
          goto LABEL_94;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v9 & 0xFE3FFFFF | 0x1400000;
        v15 = CudaDriverRoutine_11f370(a1, 2u);
        if (v15 <= 2) {
          goto LABEL_94;
        }
      }
    LABEL_85:
      if (v15 > 4) {
        if (v15 == 5) {
          *(_DWORD*)(a1 + 336) = *v9 & 0xF1FFFFFF | 0xC000000;
          v16 = CudaDriverRoutine_11f370(a1, 3u);
          if (v16 <= 2) {
            goto LABEL_111;
          }
        }
        else {
          if (v15 != 6) {
            return v7;
          }
          *(_DWORD*)(a1 + 336) = *v9 | 0xE000000;
          v16 = CudaDriverRoutine_11f370(a1, 3u);
          if (v16 <= 2) {
            goto LABEL_111;
          }
        }
      }
      else if (v15 == 3) {
        *(_DWORD*)(a1 + 336) = *v9 & 0xF1FFFFFF | 0x8000000;
        v16 = CudaDriverRoutine_11f370(a1, 3u);
        if (v16 <= 2) {
          goto LABEL_111;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v9 & 0xF1FFFFFF | 0xA000000;
        v16 = CudaDriverRoutine_11f370(a1, 3u);
        if (v16 <= 2) {
          goto LABEL_111;
        }
      }
    LABEL_104:
      if (v16 > 4) {
        if (v16 == 5) {
          v17 = *v9 & 0x8FFFFFFF | 0x60000000;
        }
        else {
          if (v16 != 6) {
            return v7;
          }
          v17 = *v9 | 0x70000000;
        }
      }
      else if (v16 == 3) {
        v17 = *v9 & 0x8FFFFFFF | 0x40000000;
      }
      else {
        v17 = *v9 & 0x8FFFFFFF | 0x50000000;
      }
      goto LABEL_119;
    }
  LABEL_53:
    if (v11 <= 4) {
      if (v11 == 3) {
        *(_DWORD*)(a1 + 336) = *v9 & 0xFFC7FFFF | 0x200000;
        v12 = CudaDriverRoutine_11f370(a1, 1u);
        if (v12 <= 2) {
          goto LABEL_75;
        }
      }
      else {
        *(_DWORD*)(a1 + 336) = *v9 & 0xFFC7FFFF | 0x280000;
        v12 = CudaDriverRoutine_11f370(a1, 1u);
        if (v12 <= 2) {
          goto LABEL_75;
        }
      }
      goto LABEL_66;
    }
    if (v11 == 5) {
      *(_DWORD*)(a1 + 336) = *v9 & 0xFFC7FFFF | 0x300000;
      v12 = CudaDriverRoutine_11f370(a1, 1u);
      if (v12 <= 2) {
        goto LABEL_75;
      }
      goto LABEL_66;
    }
    if (v11 != 6) {
      return v7;
    }
    *(_DWORD*)(a1 + 336) = *v9 | 0x380000;
    v12 = CudaDriverRoutine_11f370(a1, 1u);
    if (v12 > 2) {
      goto LABEL_66;
    }
  LABEL_75:
    if (v12 == 0) {
      *(_DWORD*)(a1 + 336) = *v9 & 0xFE3FFFFF;
      v15 = CudaDriverRoutine_11f370(a1, 2u);
      if (v15 <= 2) {
        goto LABEL_94;
      }
      goto LABEL_85;
    }
    if (v12 == 1) {
      *(_DWORD*)(a1 + 336) = *v9 & 0xFE3FFFFF | 0x800000;
      v15 = CudaDriverRoutine_11f370(a1, 2u);
      if (v15 <= 2) {
        goto LABEL_94;
      }
      goto LABEL_85;
    }
    if (v12 != 2) {
      return v7;
    }
    *(_DWORD*)(a1 + 336) = *v9 & 0xFE3FFFFF | 0xC00000;
    v15 = CudaDriverRoutine_11f370(a1, 2u);
    if (v15 > 2) {
      goto LABEL_85;
    }
  LABEL_94:
    if (v15 == 0) {
      *(_DWORD*)(a1 + 336) = *v9 & 0xF1FFFFFF;
      v16 = CudaDriverRoutine_11f370(a1, 3u);
      if (v16 <= 2) {
        goto LABEL_111;
      }
      goto LABEL_104;
    }
    if (v15 == 1) {
      *(_DWORD*)(a1 + 336) = *v9 & 0xF1FFFFFF | 0x4000000;
      v16 = CudaDriverRoutine_11f370(a1, 3u);
      if (v16 <= 2) {
        goto LABEL_111;
      }
      goto LABEL_104;
    }
    if (v15 != 2) {
      return v7;
    }
    *(_DWORD*)(a1 + 336) = *v9 & 0xF1FFFFFF | 0x6000000;
    v16 = CudaDriverRoutine_11f370(a1, 3u);
    if (v16 > 2) {
      goto LABEL_104;
    }
  LABEL_111:
    if (v16 != 0) {
      if (v16 == 1) {
        v17 = *v9 & 0x8FFFFFFF | 0x20000000;
      }
      else {
        if (v16 != 2) {
          return v7;
        }
        v17 = *v9 & 0x8FFFFFFF | 0x30000000;
      }
    }
    else {
      v17 = *v9 & 0x8FFFFFFF;
    }
  LABEL_119:
    v18 = *(_DWORD*)(a1 + 328);
    *(_DWORD*)(a1 + 336) = v17;
    if ((v18 & 8) != 0) {
      *v9 = v17 | 0x80000000;
    }
    if (v4 != 0) {
      if (v4 != 1) {
        v38 = *(_QWORD*)(a1 + 128);
        v29 = 1;
        v39 = *(_DWORD*)(a1 + 344) & 0xE11E0000;
        *(_DWORD*)(a1 + 340) = v38;
        *(_DWORD*)(a1 + 344) = HIDWORD(v38) & 0x1FFFF | v39 | 0x1E000000;
        LODWORD(v38) = *(_DWORD*)(a1 + 104) - 1;
        *(_WORD*)(a1 + 348) = WORD1(v38);
        v30 = *(_DWORD*)(a1 + 352) & 0xF87F0000 | (unsigned __int16)v38 |
              0x3000000;
        *(_DWORD*)(a1 + 352) = v30;
        if ((v18 & 0x10) == 0) {
          goto LABEL_169;
        }
      LABEL_168:
        *(_DWORD*)(a1 + 352) = v30 | 0x400000;
        goto LABEL_169;
      }
      v19 = 0x400000;
      v20 = -32;
      v21 = 31;
    }
    else {
      v19 = 6291456;
      v20 = -512;
      v21 = 511;
    }
    v22 = *(_DWORD*)(a1 + 132);
    *(_DWORD*)(a1 + 340) =
        *(_DWORD*)(a1 + 340) & v21 | v20 & *(_DWORD*)(a1 + 128);
    v23 = v22 & 0x1FFFF | *(_DWORD*)(a1 + 344) & 0xE11E0000 | v19;
    v24 = *(_DWORD*)(a1 + 348);
    *(_DWORD*)(a1 + 344) = v23 | 0x1E000000;
    v25 = v24 | 0x10000;
    *(_DWORD*)(a1 + 348) = v25;
    if (v4 != 1) {
      v31 = *(_QWORD*)(a1 + 64);
      v32 = v25 & 0xFFFFFFF8 | *(_DWORD*)(v31 + 40) & 7;
      *(_DWORD*)(a1 + 348) = v32;
      v33 = v32 & 0xFFFFFFC7 | (8 * (*(_DWORD*)(v31 + 44) & 7));
      *(_DWORD*)(a1 + 348) = v33;
      v34 = v33 & 0xFFFFFE3F | ((*(_DWORD*)(v31 + 48) & 7) << 6);
      *(_DWORD*)(a1 + 348) = v34;
      if ((*(_BYTE*)(v31 + 32) & 0x40) != 0) {
        v35 = *(_DWORD*)(v31 + 144);
        if (v35 < 2) {
          v37 = 0;
        }
        else {
          v36 = 0;
          do {
            v36 += 1024;
            v84 = v35 > 3;
            v35 >>= 1;
          } while (v84);
          v37 = v36 & 0x1C00;
        }
        v34 = v37 | v34 & 0xFFFFE3FF;
        *(_DWORD*)(a1 + 348) = v34;
      }
      v40 = *(_QWORD*)(a1 + 88);
      if (v40 != 0) {
        v34 =
            (v34 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v40 + 40) << 28)) -
            0x10000000;
      }
      v41 = *(_DWORD*)(a1 + 104);
      v42 = *(_DWORD*)(a1 + 108);
      *(_DWORD*)(a1 + 348) = v34 | 0x60000;
      v43 = *(_DWORD*)(a1 + 352) & 0xFFF80000 | (v41 - 1) & 0x1FFFF;
      v44 = (4 * v42 + 524284) & 0x40000;
      if (v42 == 0) {
        v44 = 0;
      }
      v45 = v44 | v43;
      v46 = *(_DWORD*)(a1 + 112);
      if (v46 != 0) {
        v47 = (8 * v46 + 262136) & 0x20000;
      }
      else {
        v47 = 0;
      }
      v48 = v45 | v47;
      *(_DWORD*)(a1 + 352) = v48;
      v49 = *(_DWORD*)(v31 + 8);
      if (v49 > 3) {
        v50 = v48 & 0xF87FFFFF | 0x4000000;
        v51 = v48 & 0xF87FFFFF | 0x1800000;
        v52 = v48 & 0xF87FFFFF | 0x2000000;
        if (v49 != 7) {
          v50 = v48;
        }
        if (v49 != 6) {
          v51 = v50;
        }
        if (v49 == 5) {
          v48 = v48 & 0xF87FFFFF | 0x2800000;
        }
        if (v49 == 4) {
          v48 = v52;
        }
        if (v49 <= 5) {
          v53 = v48;
        }
        else {
          v53 = v51;
        }
        goto LABEL_167;
      }
      if (v49 == 1) {
        if (!CudaDriverRoutine_11f690((__int64*)a1)) {
          v53 = *(_DWORD*)(a1 + 352) & 0xF87FFFFF;
          goto LABEL_167;
        }
      }
      else if (v49 != 2) {
        v54 = v49 == 3;
        v53 = v48 & 0xF87FFFFF | 0x1000000;
        if (!v54) {
          v53 = v48;
        }
      LABEL_167:
        v30 = v53 | 0xE0000000;
        v56 = *(_DWORD*)(a1 + 328);
        v29 = 0;
        *(_DWORD*)(a1 + 352) = v30;
        if ((v56 & 0x10) == 0) {
          goto LABEL_169;
        }
        goto LABEL_168;
      }
      v55 = *(_DWORD*)(a1 + 352) & 0xF87FFFFF;
      if (*(_DWORD*)(a1 + 120) != 0) {
        v53 = v55 | 0x3800000;
      }
      else {
        v53 = v55 | 0x800000;
      }
      goto LABEL_167;
    }
    v26 = *(_DWORD*)(a1 + 116);
    v27 = *(_QWORD*)(a1 + 88);
    v28 = v25 & 0xFFFF0000 | (unsigned __int16)(v26 >> 5);
    *(_DWORD*)(a1 + 348) = v28;
    if (v27 != 0) {
      v28 = (v28 & 0xFFFFFFF | ((unsigned __int8)*(_DWORD*)(v27 + 40) << 28)) -
            0x10000000;
    }
    v29 = 0;
    *(_DWORD*)(a1 + 348) = v28 | 0x60000;
    v30 = *(_DWORD*)(a1 + 352) & 0x187C0000 |
          (*(_DWORD*)(a1 + 104) - 1) & 0x1FFFF | (v26 >> 4) & 0x20000 |
          0xE3800000;
    *(_DWORD*)(a1 + 352) = v30;
    if ((v18 & 0x10) != 0) {
      goto LABEL_168;
    }
  LABEL_169:
    if ((v29 & 1) == 0) {
      v57 = *(_DWORD*)(a1 + 108);
      v58 = *(_DWORD*)(a1 + 112);
      v54 = v57 == 0;
      v59 = (unsigned __int16)(v57 - 1);
      if (v54) {
        v59 = 0;
      }
      v60 = v59 | *(_DWORD*)(a1 + 356) & 0xC0000000;
      v61 = ((v58 << 16) + 1073676288) & 0x3FFF0000;
      if (v58 == 0) {
        v61 = 0;
      }
      *(_DWORD*)(a1 + 356) = v61 | v60;
      if (CudaDriverRoutine_11f6d0(a1)) {
        *(_DWORD*)(a1 + 356) |= 0x80000000;
      }
      v62 = *(_BYTE*)(a1 + 328);
      v63 = *(_DWORD*)(a1 + 360) & 0xF87FFFFF | 0x3000000;
      *(_DWORD*)(a1 + 360) = v63;
      if ((v62 & 0x20) != 0) {
        v64 = *(_DWORD*)(a1 + 296);
        if (v64 > 7) {
          v66 = v63 & 0xFB7FFFC1 | 0x10;
        }
        else {
          v65 = 1 << v64;
          if ((v65 & 0xF0) != 0) {
            v66 = v63 & 0xFB7FFFC1 | 0xC;
          }
          else if ((v65 & 3) != 0) {
            v66 = v63 & 0xFB7FFFC1;
          }
          else {
            v66 = v63 & 0xFB7FFFC1 | 8;
          }
        }
        *(_DWORD*)(a1 + 360) = v66;
      }
    }
    if (*(_QWORD*)(a1 + 88) != 0) {
      *(_DWORD*)(a1 + 364) = *(_DWORD*)(a1 + 364) & 0xFFFFFF00 |
                             *(_DWORD*)(a1 + 136) & 0xF |
                             (16 * (*(_DWORD*)(a1 + 140) & 0xF));
    }
    v67 = CudaDriverRoutine_11f790(a1, 0);
    v7 = 1;
    if (v67 > 2) {
      if ((unsigned int)(v67 - 3) >= 2) {
        return v7;
      }
    }
    else {
      switch (v67) {
      case 0:
        goto LABEL_196;
      case 1:
        v67 = 2;
        break;
      case 2:
        v67 = 1;
        break;
      default:
        return v7;
      }
    }
    *(_DWORD*)(a1 + 368) |= v67;
  LABEL_196:
    v68 = CudaDriverRoutine_11f790(a1, 1u);
    if (v68 <= 1) {
      if (v68 == 0) {
        goto LABEL_207;
      }
      if (v68 != 1) {
        return v7;
      }
      v69 = 16;
    }
    else {
      switch (v68) {
      case 4:
        v69 = 32;
        break;
      case 3:
        v69 = 24;
        break;
      case 2:
        v69 = 8;
        break;
      default:
        return v7;
      }
    }
    *(_DWORD*)(a1 + 368) |= v69;
  LABEL_207:
    v70 = CudaDriverRoutine_11f790(a1, 2u);
    if (v70 <= 1) {
      if (v70 != 0) {
        if (v70 != 1) {
          return v7;
        }
        v71 = *(_DWORD*)(a1 + 368) | 0x80;
      }
      else {
        v71 = *(_DWORD*)(a1 + 368);
      }
    LABEL_218:
      *(_DWORD*)(a1 + 368) = v71 | 0x2000;
      v72 = *(_DWORD*)(a1 + 296);
      v73 = 1056768;
      if ((int)v72 > 5) {
        if (v72 <= 0xF) {
          if (((1 << v72) & 0xF000) != 0) {
            v73 = 6299648;
            goto LABEL_233;
          }
          if (((1 << v72) & 0x300) != 0) {
            v73 = 4202496;
            goto LABEL_233;
          }
          if (((1 << v72) & 0xC00) != 0) {
            v73 = 5251072;
            goto LABEL_233;
          }
        }
        if (v72 - 6 < 2) {
          v73 = 3153920;
          goto LABEL_233;
        }
      }
      else {
        if (v72 < 2) {
          goto LABEL_234;
        }
        if (v72 - 2 < 2) {
        LABEL_233:
          *(_DWORD*)(a1 + 368) = v71 | v73;
        LABEL_234:
          if (*(_DWORD*)(a1 + 276) == 1) {
            v74 = 34;
          }
          else {
            v74 = 17;
          }
          v75 = *(_DWORD*)(a1 + 372) | v74;
          v76 = *(_QWORD*)(a1 + 88);
          if (v76 != 0) {
            v77 = 0x0.0p+0f;
            if (*(_DWORD*)(a1 + 280) == 1) {
              v78 = 192;
            }
            else {
              v78 = 128;
            }
            v79 = v75 | v78;
            if ((v29 & 1) == 0 && (*(_BYTE*)(a1 + 328) & 0x20) == 0) {
              if (v72 > 7) {
                v77 = -0x1.0000000000000p-2f;
                v79 |= 0x20000000u;
              }
              else {
                v80 = 1 << v72;
                if ((v80 & 0xF0) != 0) {
                  v79 |= 0x18000000u;
                  v77 = -0x1.b6db6e0000000p-3f;
                }
                else if ((v80 & 3) != 0) {
                  v77 = -0x0.0p+0f;
                }
                else {
                  v79 |= 0x10000000u;
                  v77 = -0x1.5555560000000p-3f;
                }
              }
            }
            v82 = v77 + *(float*)(a1 + 284);
            v83 = v82 >= 0x1.e000000000000p+3f;
            v84 = v82 <= -0x1.e000000000000p+3f;
            v85 = v82;
            v86 = !v84 || v83;
            if (v84) {
              v83 = true;
            }
            if (v86 != 0) {
              v87 = 3840;
            }
            else {
              v87 = 4352;
            }
            v88 = vcvtd_n_s32_f64(v85, 8u) & 0x1FFF;
            if (!v83) {
              v87 = v88;
            }
            v81 = v79 | (v87 << 12);
            *(_DWORD*)(a1 + 372) = v81;
            if ((v29 & 1) != 0) {
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
                goto LABEL_265;
              }
            }
            else {
              *(_DWORD*)(a1 + 360) =
                  *(_DWORD*)(a1 + 360) & 0xFFF8003F | ((v87 & 0x1FFF) << 6);
              if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              LABEL_265:
                if (v76 == 0) {
                  goto LABEL_266;
                }
                goto LABEL_270;
              }
            }
          }
          else {
            v81 = v75 | 0x40;
            *(_DWORD*)(a1 + 372) = v75 | 0x40;
            if ((*(_BYTE*)(a1 + 328) & 0x40) == 0) {
              goto LABEL_265;
            }
          }
          *(_DWORD*)(a1 + 372) = v81 | 0x300;
          if (v76 == 0) {
          LABEL_266:
            if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) != 3) {
            LABEL_292:
              if ((unsigned int)CudaDriverRoutine_11f790(a1, 1u) != 3 &&
                  (unsigned int)CudaDriverRoutine_11f790(a1, 2u) != 3) {
                return 0;
              }
            }
          LABEL_294:
            CudaDriverRoutine_11f810(&v107, a1);
            v100 = *(_QWORD*)&v107;
            *(_DWORD*)(a1 + 392) = DWORD2(v107);
            *(_QWORD*)(a1 + 384) = v100;
            if (CudaDriverRoutine_11f2f0(a1)) {
              if (*(_QWORD*)a1 != 0) {
                v104 = (__int64*)(*(_QWORD*)a1 + 24LL);
              }
              else {
                v104 = v5;
              }
              if (!CudaDriverStub_985a0(*v104)) {
                goto LABEL_302;
              }
              v105 = *(_DWORD*)(a1 + 396) | 1;
            }
            else {
              v105 = HIDWORD(v107);
            }
            *(_DWORD*)(a1 + 396) = v105;
          LABEL_302:
            if ((*(_BYTE*)(a1 + 328) & 0x10) != 0) {
              cuda_driver_11f820(v108, (float*)&v107);
              v106 = v108[2];
              *(_DWORD*)(a1 + 376) |= v108[0] << 24;
              *(_DWORD*)(a1 + 380) = (v108[1] << 12) | (v106 << 20);
            }
            return 0;
          }
        LABEL_270:
          v89 = *(float*)(a1 + 288);
          v90 = v89 >= 0x1.e000000000000p+3f;
          v91 = v89 <= 0x0.0p+0f;
          v92 = vcvtd_n_s32_f64(v89, 8u);
          v93 = *(float*)(a1 + 292);
          v94 = !v91 || v90;
          if (v91) {
            v90 = true;
          }
          if (v94 != 0) {
            v95 = 3840;
          }
          else {
            v95 = 0;
          }
          v96 = v92 & 0xFFF;
          if (v90) {
            v97 = v95;
          }
          else {
            v97 = v96;
          }
          if (v93 <= 0x0.0p+0f && v93 < 0x1.e000000000000p+3f) {
            v99 = 0;
          }
          else {
            v99 = 15728640;
          }
          if (v93 < 0x1.e000000000000p+3f && v93 > 0x0.0p+0f) {
            v99 = (vcvtd_n_s32_f64(v93, 8u) & 0xFFF) << 12;
          }
          *(_DWORD*)(a1 + 376) |= v99 | v97;
          if ((unsigned int)CudaDriverRoutine_11f790(a1, 0) == 3) {
            goto LABEL_294;
          }
          goto LABEL_292;
        }
        if (v72 - 4 < 2) {
          v73 = 2105344;
          goto LABEL_233;
        }
      }
      v73 = 7348224;
      goto LABEL_233;
    }
    switch (v70) {
    case 2:
      v71 = *(_DWORD*)(a1 + 368) | 0x40;
      goto LABEL_218;
    case 3:
      v71 = *(_DWORD*)(a1 + 368) | 0xC0;
      goto LABEL_218;
    case 4:
      v71 = *(_DWORD*)(a1 + 368) | 0x100;
      goto LABEL_218;
    default:
      break;
    }
    return v7;
  default:
    return v7;
  }
}

__int64 cuda_driver_2590(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) == 0) {
    v1 = *(unsigned int*)(a1 + 36);
    if ((unsigned int)v1 > 4) {
      return 1;
    }
    v2 = *(_DWORD*)(a1 + 40);
    v3 = CudaDriverData_1130110[v1];
    v4 = 1;
    *(_DWORD*)(a1 + 56) = v3;
    if (v2 <= 1) {
      if (v2 == 0) {
        goto LABEL_15;
      }
      if (v2 != 1) {
        return v4;
      }
      v5 = 16;
    }
    else {
      switch (v2) {
      case 4:
        v5 = 32;
        break;
      case 3:
        v5 = 24;
        break;
      case 2:
        v5 = 8;
        break;
      default:
        return v4;
      }
    }
    v3 |= v5;
    *(_DWORD*)(a1 + 56) = v3;
  LABEL_15:
    v7 = *(_DWORD*)(a1 + 44);
    v4 = 1;
    if (v7 <= 1) {
      if (v7 == 0) {
        goto LABEL_25;
      }
      if (v7 == 1) {
        v3 |= 0x80u;
        goto LABEL_25;
      }
    }
    else {
      switch (v7) {
      case 2:
        v3 |= 0x40u;
        goto LABEL_25;
      case 3:
        v3 |= 0xC0u;
        goto LABEL_25;
      case 4:
        v3 |= 0x100u;
      LABEL_25:
        v8 = v3 | 0x2000;
        if (*(_DWORD*)(a1 + 48) == 1) {
          v9 = 98;
        }
        else {
          v9 = 81;
        }
        *(_DWORD*)(a1 + 56) = v8;
        *(_DWORD*)(a1 + 60) = v9;
        if (*(_BYTE*)(a1 + 52) != 0) {
          *(_DWORD*)(a1 + 60) = v9 | 0x2000000;
        }
        v4 = 0;
        *(_QWORD*)(a1 + 72) = 0;
        *(_QWORD*)(a1 + 80) = 0;
        *(_QWORD*)(a1 + 64) = &CudaDriverData_f00000;
        break;
      default:
        break;
      }
    }
    return v4;
  }
  v10 = *(_DWORD*)(a1 + 36);
  v11 = *(_DWORD*)(a1 + 40);
  *(_OWORD*)(a1 + 128) = (__typeof__(*(_OWORD*)(a1 + 128))){0};
  *(_OWORD*)(a1 + 144) = (__typeof__(*(_OWORD*)(a1 + 144))){0};
  *(_OWORD*)(a1 + 160) = (__typeof__(*(_OWORD*)(a1 + 160))){0};
  *(_OWORD*)(a1 + 176) = (__typeof__(*(_OWORD*)(a1 + 176))){0};
  *(_BYTE*)(a1 + 164) = v10;
  *(_BYTE*)(a1 + 165) = v11;
  v12 = *(_DWORD*)(a1 + 48);
  *(_BYTE*)(a1 + 166) = *(_DWORD*)(a1 + 44);
  *(_DWORD*)(a1 + 172) = v12 == 1;
  *(_BYTE*)(a1 + 176) = *(_BYTE*)(a1 + 52);
  *(_BYTE*)(a1 + 177) = 1;
  *(_DWORD*)(a1 + 140) = 1164967936;
  return 0;
}

__int64 cuda_driver_33e0(__int64 result, unsigned __int64 a2, unsigned int a3)
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

__int64 cuda_driver_3580(__int64 a1)
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

__int64 cuda_driver_5ee0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  _WORD* v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  uint32x2_t v25;
  __int64 v26;
  void* v27;
  unsigned int v28;
  unsigned int v29;
  unsigned __int16 v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned int v38;
  bool v39;
  __int64 v40;
  unsigned __int8 v41;
  __int64 v42;
  int v43;
  unsigned __int8 v44;
  int v45;
  int v46;
  unsigned __int8 v47;
  int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  unsigned int v52;
  __int64 v53;
  int v55;
  unsigned int v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v63;
  int v64;
  __int64 v65;

  v3 = *(_QWORD*)(a3 + 8);
  v4 = *(_QWORD*)(a3 + 16);
  v65 = 0;
  if (CudaDriverRoutine_bbdf0(a2)) {
    v7 = v4 + 512;
  }
  else {
    v7 = 0;
  }
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
  if (*(_BYTE*)(a3 + 199) != 0) {
    *(_DWORD*)(v3 + 16) |= 0x40000000u;
  }
  v8 = (_WORD*)(a2 + 977);
  if (*(_BYTE*)(a3 + 202) != 0) {
    v9 = 0x2000000;
  }
  else {
    v9 = 0;
  }
  v10 = v9 | *(_DWORD*)(v3 + 20) & 0x81FFFFFF;
  v11 = v10 | 0x3C000000;
  v12 = v10 | 0xBC000000;
  *(_DWORD*)(v3 + 20) = v11;
  v13 = v11 & 0x3FFFFFFF;
  if (*(_BYTE*)(a3 + 207) == 0) {
    v12 = v13;
  }
  *(_DWORD*)(v3 + 20) = v12;
  if ((*v8 & 0x1000) != 0) {
    v14 = *(_DWORD*)(v3 + 44) & 0xFFFCFFFF;
    goto LABEL_20;
  }
  if (*(_BYTE*)(a3 + 206) != 0) {
    v14 = *(_DWORD*)(v3 + 44) | 0x30000;
  LABEL_20:
    *(_DWORD*)(v3 + 44) = v14;
    v15 = *(_DWORD*)(v3 + 100) & 0xFFF7FFFF;
    goto LABEL_21;
  }
  v55 = *(_DWORD*)(v3 + 44);
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 64) + 17097LL) & 1) == 0) {
    v14 = v55 & 0xFFFCFFFF | 0x10000;
    goto LABEL_20;
  }
  *(_DWORD*)(v3 + 44) = v55 | 0x30000;
  v15 = *(_DWORD*)(v3 + 100) | 0x80000;
LABEL_21:
  *(_DWORD*)(v3 + 100) = v15;
  *(_DWORD*)(v3 + 116) &= ~0x80000u;
  *(_DWORD*)(v3 + 212) &= ~0x80000u;
  if (CudaDriverRoutine_bbe30(a2)) {
    v16 = CudaDriverRoutine_98340(a1);
    v17 = *(_DWORD*)(v3 + 196);
    *(_DWORD*)(v3 + 192) = *(_QWORD*)(v16 + 2392);
    v18 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2396);
  LABEL_23:
    *(_DWORD*)(v3 + 196) = v17 & 0xFFFE0000 | v18 & 0x1FFFF;
    goto LABEL_24;
  }
  if ((*v8 & 8) != 0) {
    CudaDriverRoutine_928b0(a2, &v64, &v63);
    v56 = *(_DWORD*)(v3 + 196) & 0xFFFE0000 | v63 & 0x1FFFF;
    *(_DWORD*)(v3 + 192) = v64;
    *(_DWORD*)(v3 + 196) = v56;
  }
  else {
    if (*(_BYTE*)(a3 + 204) != 0 && *(_BYTE*)(a3 + 205) != 0) {
      v22 = CudaDriverRoutine_98340(a1);
      v17 = *(_DWORD*)(v3 + 196);
      *(_DWORD*)(v3 + 192) = *(_QWORD*)(v22 + 2408);
      v18 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2412);
      goto LABEL_23;
    }
    if (*(_DWORD*)(a2 + 404) != 0) {
      v57 = CudaDriverRoutine_98340(a1);
      v17 = *(_DWORD*)(v3 + 196);
      *(_DWORD*)(v3 + 192) = *(_QWORD*)(v57 + 2424);
      v18 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2428);
      goto LABEL_23;
    }
    CudaDriverRoutine_bbd70(a2, &v65);
    v58 = HIDWORD(v65) & 0x1FFFF | (*(_DWORD*)(v3 + 196) >> 17 << 17);
    *(_DWORD*)(v3 + 192) = v65;
    *(_DWORD*)(v3 + 196) = v58;
  }
LABEL_24:
  v19 = *(_DWORD*)(v3 + 44);
  *(_DWORD*)(v3 + 44) = v19 | 0x4000000;
  v20 = *(_DWORD*)(*(_QWORD*)(a2 + 32) + 276LL);
  if (v20 != 0) {
    if (v20 == 2) {
      v21 = v19 & 0xBBFFFFFF | 0x4000000;
    }
    else {
      if (v20 != 1) {
        return 0;
      }
      v21 = v19 | 0x44000000;
    }
    *(_DWORD*)(v3 + 44) = v21;
  }
  v59 = v7;
  v60 = v4;
  v23 = *(_DWORD*)(v3 + 608);
  v24 = *(_DWORD*)(v3 + 620);
  PSEUDO_LOW_LANE64(v25, n64_u64, *(unsigned __int64*)(v3 + 612));
  *(_DWORD*)(v3 + 48) = *(_DWORD*)(a3 + 156);
  *(_WORD*)(v3 + 52) = *(_DWORD*)(a3 + 160);
  *(_WORD*)(v3 + 56) = *(_DWORD*)(a3 + 164);
  if (CudaDriverRoutine_bbdf0(a2)) {
    if (v23 <= 0x100) {
      v23 = 256;
    }
    if (v24 <= 0x8000) {
      v24 = 0x8000;
    }
    LANES64(v25).n64_u64[0] =
        LANES64_OF(vmax_u32(v25, COERCE_AS(uint32x2_t, 0x800000008000LL)))
            .n64_u64[0];
  }
  v61 = a2;
  v26 = a1;
  v27 = CudaDriverData_1422118;
  v28 =
      *(_DWORD*)((char*)((_UNKNOWN*)0x1D48LL) + (_QWORD)CudaDriverData_1422118);
  if (*((_BYTE*)((_UNKNOWN*)0x1D40LL) + (_QWORD)CudaDriverData_1422118) == 0) {
    v28 = v23;
  }
  v29 = *(_DWORD*)(v3 + 68) & 0xFFFC0000 | v28 & 0x3FFFF;
  *(_DWORD*)(v3 + 68) = v29;
  if (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)v27 + 3) != 0) {
    *(_DWORD*)(v3 + 620) = v24;
    *(uint32x2_t*)(v3 + 612) = v25;
  }
  else {
    *(_DWORD*)(v3 + 68) = v29 & 0x8103FFFF;
    *(_DWORD*)(v3 + 80) &= 0xFF81FFFF;
  }
  *(_WORD*)(v3 + 74) = *(_WORD*)(a3 + 168);
  v30 = *(_DWORD*)(a3 + 172);
  *(_WORD*)(v3 + 76) = v30;
  *(_DWORD*)(v3 + 76) = v30 | ((unsigned __int16)*(_DWORD*)(a3 + 176) << 16);
  v31 = *(_QWORD*)(a1 + 64);
  if (*(_DWORD*)(v31 + 3776) != 0) {
    v32 = 1075;
    v33 = 640;
    v34 = 104;
    v35 = 40;
    do {
      v37 = (unsigned int)v33 >> 5;
      if (*(_QWORD*)(a3 + v35) != 0) {
        v38 =
            (unsigned int)(*(_DWORD*)(a3 + v34) + *(_DWORD*)(v31 + 3784) - 1) /
            *(_DWORD*)(v31 + 3784) * *(_DWORD*)(v31 + 3784);
        v39 = CudaDriverRoutine_e7cb0(a1, a3, v33 - 640);
        v40 = *(_QWORD*)(a3 + v35);
        v26 = a1;
        *(_DWORD*)(v3 + 4 * v37) |= 1 << (v33 + 0x80);
        *(_DWORD*)(v3 + 4LL * (v32 >> 5)) =
            (v38 << 15) & 0xFFF80000 |
            *(_DWORD*)(v3 + 4LL * (v32 >> 5)) & 0x7FFFF;
        *(_DWORD*)(v3 + 4LL * ((v32 - 19) >> 5)) =
            HIDWORD(v40) & 0x1FFFF |
            (*(_DWORD*)(v3 + 4LL * ((v32 - 19) >> 5)) >> 17 << 17);
        *(_DWORD*)(v3 + 4LL * ((v32 - 51) >> 5)) = v40;
        if (v39) {
          *(_DWORD*)(v3 + 4LL * ((v32 - 1) >> 5)) |= 0x40000u;
        }
      }
      else {
        *(_DWORD*)(v3 + 4 * v37) &= ~(1 << (v33 + 0x80));
      }
      v31 = *(_QWORD*)(v26 + 64);
      v36 = v33 - 639;
      ++v33;
      v32 += 64;
      v34 += 4;
      v35 += 8;
    } while (v36 < *(unsigned int*)(v31 + 3776));
  }
  v41 = *(_BYTE*)(v3 + 95);
  v42 = v26;
  v43 =
      *(_DWORD*)(CudaDriverRoutine_98340(v26) + 1276) & 0xFFFFFF | (v41 << 24);
  v44 = *(_BYTE*)(v3 + 203);
  *(_DWORD*)(v3 + 92) = v43;
  v45 =
      *(_DWORD*)(CudaDriverRoutine_98340(v42) + 1280) & 0xFFFFFF | (v44 << 24);
  v46 = *(_DWORD*)(v3 + 92);
  *(_DWORD*)(v3 + 200) = v45;
  v47 = CudaDriverRoutine_bc770(v61);
  v48 = *(_DWORD*)(v3 + 80);
  *(_DWORD*)(v3 + 92) = v46 & 0x7FFFFFF | (v47 << 27);
  v49 = v48 & 0xFFFE00FF;
  if (*(_DWORD*)(v61 + 392) != 0) {
    v50 = (*(_DWORD*)(v61 + 392) & 0x1FF) << 8;
  }
  else {
    v50 = 768;
  }
  *(_DWORD*)(v3 + 80) = v50 | v49;
  if (*(_BYTE*)(a3 + 376) != 0) {
    *(_DWORD*)(v3 + 84) = *(_DWORD*)(a3 + 380);
    *(_DWORD*)(v3 + 88) = *(_DWORD*)(a3 + 384);
    v51 = *(_DWORD*)(v3 + 44) & 0xFC0FFFFF |
          ((*(_DWORD*)(a3 + 388) & 0x3F) << 20);
    *(_DWORD*)(v3 + 44) = v51;
    *(_DWORD*)(v3 + 44) =
        v51 & 0xE7FFFFFF | (((*(_DWORD*)(a3 + 388) >> 6) & 3) << 27);
    if (CudaDriverRoutine_bbdf0(v61)) {
      *(_DWORD*)(v60 + 596) = *(_DWORD*)(a3 + 380);
      *(_DWORD*)(v60 + 600) = *(_DWORD*)(a3 + 384);
      v52 = *(_DWORD*)(v59 + 44) & 0xFC0FFFFF |
            ((*(_DWORD*)(a3 + 388) & 0x3F) << 20);
      *(_DWORD*)(v59 + 44) = v52;
      *(_DWORD*)(v59 + 44) =
          v52 & 0xE7FFFFFF | (((*(_DWORD*)(a3 + 388) >> 6) & 3) << 27);
    }
  }
  *(_DWORD*)(v3 + 16) |= 0x40u;
  if (*(_BYTE*)(a3 + 203) == 0) {
    *(_DWORD*)(v3 + 100) = *(_DWORD*)(v3 + 100) & 0x3F7FFFFF | 0x40800000;
  }
  *(_BYTE*)(v3 + 72) = 48;
  *(_BYTE*)(v3 + 207) =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3164LL) << 24) +
                     (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3160LL) << 28)) >>
      24;
  v53 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_92a90(v53, v61, a3);
  return 0;
}

__int64 cuda_driver_7410(__int64 result, __int64 a2, __int64 a3,
                         unsigned __int8 a4, char a5)
{
  _DWORD* v5;
  unsigned int v6;
  void* v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;

  v5 = *(_DWORD**)(a2 + 8);
  v6 = *(_DWORD*)(a3 + 104);
  v7 = CudaDriverData_1422118;
  if (v6 != 0) {
    v8 = *(_QWORD*)(a3 + 40);
    v9 = *(_DWORD*)((char*)&CudaDriverRoutine_41c0 +
                    (_QWORD)CudaDriverData_1422118);
    v10 = a4 + 5;
    if (v6 >= v9) {
      v11 = *(_DWORD*)((char*)&CudaDriverRoutine_41c0 +
                       (_QWORD)CudaDriverData_1422118);
    }
    else {
      v11 = *(_DWORD*)(a3 + 104);
    }
    if (v9 != 0) {
      v6 = v11;
    }
    v12 = (*(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) + v6 - 1) /
          *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) *
          *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL);
    v5[((unsigned int)a4 + 645) >> 5] |= 1 << (a4 + 5);
    v5[(unsigned int)((v10 << 6) + 1075) >> 5] =
        (v12 << 15) & 0xFFF80000 |
        v5[(unsigned int)((v10 << 6) + 1075) >> 5] & 0x7FFFF;
    v5[(unsigned int)((v10 << 6) + 1056) >> 5] =
        HIDWORD(v8) & 0x1FFFF |
        (v5[(unsigned int)((v10 << 6) + 1056) >> 5] >> 17 << 17);
    v5[(unsigned int)((v10 << 6) + 1024) >> 5] = v8;
    v5[(unsigned int)((v10 << 6) + 1073) >> 5] |= 0x20000u;
  }
  if (a5 != 0) {
    v13 = *(_DWORD*)(a3 + 112);
    if (v13 != 0) {
      v14 = *(_QWORD*)(a3 + 56);
      v15 = *(_DWORD*)((char*)&CudaDriverRoutine_41c8 + (_QWORD)v7);
      if (v13 >= v15) {
        v16 = v15;
      }
      else {
        v16 = *(_DWORD*)(a3 + 112);
      }
      if (v15 != 0) {
        v17 = v16;
      }
      else {
        v17 = *(_DWORD*)(a3 + 112);
      }
      v18 = ((*(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) + v17 - 1) /
             *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) *
             *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL)) >>
            4;
      v5[20] |= 0x40u;
      v19 = v5[45] & 0x40000 | ((unsigned __int16)v18 << 19) |
            HIDWORD(v14) & 0x1FFFF | 0x20000;
      v5[44] = v14;
      v5[45] = v19;
    }
  }
  return result;
}

__int64 cuda_driver_77a0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
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
  _DWORD* v24;
  struct {
    unsigned int v25;
    unsigned int v26;
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
    char gap_[176];
  } f_;
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
    f_.v28_.v28[0] = *(_QWORD*)(v11 + 24);
    f_.v28_.v28[1] = v11;
    f_.v28_.v28[2] = a3;
    f_.v28_.v28[3] = v5;
    v15 = *(_QWORD*)(v6 + 8);
    f_.v27[0] = 104;
    f_.v28_.v31 = v14;
    f_.v28_.v29 = v13;
    f_.v28_.v32 = a5;
    f_.v28_.v28[4] = v15;
    f_.v28_.v30 = (__int64*)&v33;
    cuda_driver_20b420(0xBu, 2u, (__int64)f_.v27);
  }
  if (CudaDriverStub_b9300(a3) && CudaDriverRoutine_bbdf0(a3)) {
    v16 = v33;
    v17 = (unsigned __int64)(*(_QWORD*)(v6 + 8) + 512LL) >> 8;
    *((_QWORD*)v33 + 1) = 0x3200120B0LL;
    *v16 = 536944813;
    v16[1] = v17;
    v33 = v16 + 4;
  }
  if (*(_BYTE*)(*(_QWORD*)(v12 + 16104) + 3096LL) != 0 &&
      *(_BYTE*)(a5 + 197) == 0) {
    if (*(_QWORD*)(a3 + 832) != 0) {
      v21 = *(_QWORD*)(v6 + 8);
      f_.v27[0] = 541204678;
      f_.v27[1] = v21 >> 40;
      LODWORD(f_.v28_.v28[0]) = v21 >> 8;
      CudaDriverStub_640d0((char*)f_.v28_.v28 + 4, v5, 256);
      f_.v25 = 12;
      f_.v26 = 64;
      result = CudaDriverRoutine_197480((__int64)v33, a2, 1u, &f_.v26,
                                        (__int64)f_.v27, 0x110u,
                                        (_QWORD*)(a3 + 832), &f_.v25);
    }
    else {
      v22 = (__int64)v33;
      v23 = *(_QWORD*)(v6 + 8);
      v24 = v33 + 3;
      *v33 = 541204678;
      *(_DWORD*)(v22 + 4) = v23 >> 40;
      *(_DWORD*)(v22 + 8) = v23 >> 8;
      CudaDriverStub_640d0(v24, v5, 256);
      result = v22 + 268;
    }
  }
  else {
    v18 = (__int64)v33;
    v19 = *(_QWORD*)(v6 + 8) >> 8;
    result = (__int64)(v33 + 4);
    *v33 = 536944813;
    *(_DWORD*)(v18 + 4) = v19;
    *(_QWORD*)(v18 + 8) = 0x3200120B0LL;
  }
  *a1 = result;
  return result;
}

int8x8_t cuda_driver_7a60(__int64 a1, int8x8_t* a2, __int64 a3)
{
  unsigned __int64 v3;
  __int64 v4;
  int v5;
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
          ++v5;
        }
      }
      if (v10 + v12 - 1 >= 7) {
        break;
      }
    LABEL_3:
      v3 = *(unsigned int*)(a3 + 24);
    LABEL_4:
      if (++v4 >= v3) {
        goto LABEL_113;
      }
    }
    while (1) {
      if ((v13 & 1) != 0) {
        LANES64(*(a2)).n64_u32[v5] |= 1 << v6;
        v31 = v6 + 1;
        if (v6 == 31) {
          v18 = 0;
        }
        else {
          v18 = v6 + 1;
        }
        if (v31 == 32) {
          ++v5;
        }
        if ((v13 & 2) == 0) {
        LABEL_33:
          v19 = v18 + 1;
          if (v18 == 31) {
            v20 = 0;
          }
          else {
            v20 = v18 + 1;
          }
          if (v19 == 32) {
            ++v5;
          }
          if ((v13 & 4) == 0) {
            goto LABEL_39;
          }
          goto LABEL_82;
        }
      }
      else {
        v17 = v6 + 1;
        if (v6 == 31) {
          v18 = 0;
        }
        else {
          v18 = v6 + 1;
        }
        if (v17 == 32) {
          ++v5;
        }
        if ((v13 & 2) == 0) {
          goto LABEL_33;
        }
      }
      LANES64(*(a2)).n64_u32[v5] |= 1 << v18;
      v32 = v18 + 1;
      if (v18 == 31) {
        v20 = 0;
      }
      else {
        v20 = v18 + 1;
      }
      if (v32 == 32) {
        ++v5;
      }
      if ((v13 & 4) == 0) {
      LABEL_39:
        v21 = v20 + 1;
        if (v20 == 31) {
          v22 = 0;
        }
        else {
          v22 = v20 + 1;
        }
        if (v21 == 32) {
          ++v5;
        }
        if ((v13 & 8) == 0) {
          goto LABEL_45;
        }
        goto LABEL_88;
      }
    LABEL_82:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v20;
      v33 = v20 + 1;
      if (v20 == 31) {
        v22 = 0;
      }
      else {
        v22 = v20 + 1;
      }
      if (v33 == 32) {
        ++v5;
      }
      if ((v13 & 8) == 0) {
      LABEL_45:
        v23 = v22 + 1;
        if (v22 == 31) {
          v24 = 0;
        }
        else {
          v24 = v22 + 1;
        }
        if (v23 == 32) {
          ++v5;
        }
        if ((v13 & 0x10) == 0) {
          goto LABEL_51;
        }
        goto LABEL_94;
      }
    LABEL_88:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v22;
      v34 = v22 + 1;
      if (v22 == 31) {
        v24 = 0;
      }
      else {
        v24 = v22 + 1;
      }
      if (v34 == 32) {
        ++v5;
      }
      if ((v13 & 0x10) == 0) {
      LABEL_51:
        v25 = v24 + 1;
        if (v24 == 31) {
          v26 = 0;
        }
        else {
          v26 = v24 + 1;
        }
        if (v25 == 32) {
          ++v5;
        }
        if ((v13 & 0x20) == 0) {
          goto LABEL_57;
        }
        goto LABEL_100;
      }
    LABEL_94:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v24;
      v35 = v24 + 1;
      if (v24 == 31) {
        v26 = 0;
      }
      else {
        v26 = v24 + 1;
      }
      if (v35 == 32) {
        ++v5;
      }
      if ((v13 & 0x20) == 0) {
      LABEL_57:
        v27 = v26 + 1;
        if (v26 == 31) {
          v28 = 0;
        }
        else {
          v28 = v26 + 1;
        }
        if (v27 == 32) {
          ++v5;
        }
        if ((v13 & 0x40) == 0) {
          goto LABEL_63;
        }
        goto LABEL_106;
      }
    LABEL_100:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v26;
      v36 = v26 + 1;
      if (v26 == 31) {
        v28 = 0;
      }
      else {
        v28 = v26 + 1;
      }
      if (v36 == 32) {
        ++v5;
      }
      if ((v13 & 0x40) == 0) {
      LABEL_63:
        v29 = v28 + 1;
        if (v28 == 31) {
          v30 = 0;
        }
        else {
          v30 = v28 + 1;
        }
        if (v29 == 32) {
          ++v5;
        }
        if ((v13 & 0x80) == 0) {
          goto LABEL_20;
        }
        goto LABEL_112;
      }
    LABEL_106:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v28;
      v37 = v28 + 1;
      if (v28 == 31) {
        v30 = 0;
      }
      else {
        v30 = v28 + 1;
      }
      if (v37 == 32) {
        ++v5;
      }
      if ((v13 & 0x80) != 0) {
      LABEL_112:
        LANES64(*(a2)).n64_u32[v5] |= 1 << v30;
      }
    LABEL_20:
      v16 = v30 + 1;
      v13 >>= 8;
      if (v30 == 31) {
        v6 = 0;
      }
      else {
        v6 = v30 + 1;
      }
      if (v16 == 32) {
        ++v5;
      }
      v9 -= 8;
      if (v9 == 0) {
        goto LABEL_3;
      }
    }
  }
LABEL_113:
  LANES64(result).n64_u64[0] =
      LANES64_OF(vmvn_s8(COERCE_AS(int8x8_t, LANES64(*(a2)).n64_u64[0])))
          .n64_u64[0];
  LANES64(a2[1]).n64_u32[0] = ~LANES64(a2[1]).n64_u32[0];
  LANES64(*(a2)).n64_u64[0] = LANES64(result).n64_u64[0];
  return result;
}

__int64 cuda_driver_7d10(__int64* a1, __int64 a2, __int64 a3, char a4)
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

__int64 cuda_driver_9060(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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

  v14 = 0;
  v39 = 0;
  v3 = *(_QWORD*)(a1 + 80);
  v33 = (__typeof__(v33)){0};
  v34 = (__typeof__(v34)){0};
  v35 = (__typeof__(v35)){0};
  v36 = (__typeof__(v36)){0};
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
  v21 = (__typeof__(v21)){0};
  v20 = (__typeof__(v20)){0};
  v19 = (__typeof__(v19)){0};
  v18 = (__typeof__(v18)){0};
  v17 = (__typeof__(v17)){0};
  v37 = (__typeof__(v37)){0};
  v38 = (__typeof__(v38)){0};
  if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) &
       1) != 0) {
    v5 = 0x119000211LL;
  }
  else {
    v5 = 0x119000219LL;
  }
  v16 = (__typeof__(v16)){0};
  v15 = v5;
  if ((unsigned int)cuda_driver_1da1b0(v3, &v15, 64, a2 + 30) != 0) {
    goto LABEL_5;
  }
  a2[31] = CudaDriverStub_1db800(a2[30]);
  a2[23] = 0;
  v8 = cuda_driver_8c000(21, *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3152LL),
                         *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3156LL));
  if (v8 == 0) {
    goto LABEL_5;
  }
  v9 = v8;
  v10 = CudaDriverRoutine_98340(a1);
  if ((unsigned int)CudaDriverRoutine_1059a0(v10, &v14, v9, 9, 0, 0, 1) != 0 ||
      (v11 = v14, a2[20] = v14,
       (unsigned int)cuda_driver_checks_bae90(
           v11, (__int64)"nanosleep_war_bug2100522", a2 + 21) != 0) ||
      (v12 = (*(_DWORD*)(a2[21] + 64LL) + 7) & 0xFFFFFFF8, a2[22] = v12,
       v13 = CudaDriverStub_12e330(v12), a2[23] = v13, v13 == 0) ||
      (unsigned int)CudaDriverRoutine_10480(
          a2 + 24, a2[21], (__int64)"NANOSLEEP_WAR_BUG2100522_BRA_LOC") != 0 ||
      (unsigned int)CudaDriverRoutine_10480(
          a2 + 27, a2[21], (__int64)"NANOSLEEP_WAR_BUG2100522_SLEEP_LOC") !=
          0) {
  LABEL_5:
    v6 = a2[23];
    if (v6 != 0) {
      CudaDriverRoutine_12e340(v6);
      a2[23] = 0;
    }
  }
  return 0;
}

bool cuda_driver_9b60(__int64 a1, __int64 a2)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_4394 +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_DWORD*)(a2 + 364) != 2;
}

bool cuda_driver_9b90(__int64 a1, __int64 a2)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_4394 +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_DWORD*)(a2 + 364) != 2;
}

bool cuda_driver_9bc0()
{
  return (*((_BYTE*)&CudaDriverRoutine_747c + (_QWORD)CudaDriverData_1422118) &
          0x10) != 0;
}

bool cuda_driver_9c20(__int64 a1, __int64 a2)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_43a4 +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_BYTE*)(*(_QWORD*)(a1 + 64) + 16850LL) != 0 &&
         *(_DWORD*)(a2 + 364) != 2;
}

bool cuda_driver_9c60(__int64 a1, __int64 a2)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_43ac +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_BYTE*)(*(_QWORD*)(a1 + 64) + 16850LL) != 0 &&
         *(_DWORD*)(a2 + 364) != 2;
}

bool cuda_driver_9ca0(__int64 a1, __int64 a2)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_43b4 +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_BYTE*)(*(_QWORD*)(a1 + 64) + 16850LL) != 0 &&
         *(_DWORD*)(a2 + 364) != 2;
}

bool cuda_driver_9ce0()
{
  return (*((_BYTE*)&CudaDriverRoutine_747c + (_QWORD)CudaDriverData_1422118) &
          8) != 0;
}

bool cuda_driver_9d00(__int64 a1, __int64 a2, _WORD* a3)
{
  return (*(_DWORD*)((char*)&CudaDriverRoutine_4360 +
                     (_QWORD)CudaDriverData_1422118) |
          *(_DWORD*)((char*)&CudaDriverRoutine_436c +
                     (_QWORD)CudaDriverData_1422118)) != 0 &&
         *(_DWORD*)(a2 + 364) == 0 && (*(_WORD*)(a2 + 36) & 4) == 0 &&
         (*a3 & 4) == 0;
}

bool cuda_driver_9d50(__int64 a1, __int64 a2)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_4394 +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_DWORD*)(a2 + 364) != 2;
}

bool cuda_driver_9d80(__int64 a1, __int64 a2, _WORD* a3)
{
  return (*(_DWORD*)((char*)&CudaDriverRoutine_4360 +
                     (_QWORD)CudaDriverData_1422118) |
          *(_DWORD*)((char*)&CudaDriverRoutine_436c +
                     (_QWORD)CudaDriverData_1422118)) != 0 &&
         *(_DWORD*)(a2 + 364) == 0 && (*(_WORD*)(a2 + 36) & 4) == 0 &&
         (*a3 & 4) == 0;
}

bool cuda_driver_9dd0(__int64 a1, __int64 a2)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_4394 +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_DWORD*)(a2 + 364) != 2;
}

bool cuda_driver_9e00(__int64 a1, __int64 a2, _WORD* a3)
{
  __int16 v3;

  if (*(_DWORD*)((char*)&CudaDriverRoutine_437c +
                 (_QWORD)CudaDriverData_1422118) == 0) {
    return false;
  }
  if (*(_DWORD*)(a2 + 364) != 0) {
    return false;
  }
  v3 = *(_WORD*)(a2 + 36);
  return (v3 & 8) == 0 && (*a3 & 4 | v3 & 1) == 0;
}

bool cuda_driver_9e50(__int64 a1, __int64 a2)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_4394 +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_DWORD*)(a2 + 364) != 2;
}

bool cuda_driver_9e80(__int64 a1, __int64 a2, _WORD* a3)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_4374 +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_DWORD*)(a2 + 364) == 0 && (*a3 & 4) == 0 &&
         (*(_BYTE*)(a2 + 36) & 1) == 0;
}

bool cuda_driver_9ec0(__int64 a1, __int64 a2, _WORD* a3)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_4384 +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_DWORD*)(a2 + 364) == 0 && (*a3 & 4) == 0 &&
         (*(_WORD*)(a2 + 36) & 1) == 0 && *(_DWORD*)(a2 + 284) == 70;
}

bool cuda_driver_9f10(__int64 a1, __int64 a2, _WORD* a3)
{
  __int16 v3;

  if (*(_DWORD*)((char*)&CudaDriverRoutine_437c +
                 (_QWORD)CudaDriverData_1422118) == 0) {
    return false;
  }
  if (*(_DWORD*)(a2 + 364) != 0) {
    return false;
  }
  v3 = *(_WORD*)(a2 + 36);
  return (v3 & 8) == 0 && (*a3 & 4 | v3 & 1) == 0;
}

bool cuda_driver_9f60(__int64 a1, __int64 a2, _WORD* a3)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_438c +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_DWORD*)(a2 + 364) == 0 && (*a3 & 4) == 0;
}

bool cuda_driver_9fa0(__int64 a1, __int64 a2)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_4394 +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_DWORD*)(a2 + 364) != 2;
}

bool cuda_driver_9fd0(__int64 a1, __int64 a2, _WORD* a3)
{
  return *(_DWORD*)((char*)&CudaDriverRoutine_4374 +
                    (_QWORD)CudaDriverData_1422118) != 0 &&
         *(_DWORD*)(a2 + 364) == 0 && (*a3 & 4) == 0 &&
         (*(_BYTE*)(a2 + 36) & 1) == 0;
}

bool cuda_driver_a0f0(__int64 a1, __int64 a2)
{
  __int64 v2;
  void* v3;
  _BOOL4 v4;
  _BOOL4 v5;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 16104) + 2080LL);
  v3 = CudaDriverData_1422118;
  v4 = (*(_WORD*)(a2 + 977) & 0x80) != 0;
  if (*(_DWORD*)((char*)&CudaDriverRoutine_4360 +
                 (_QWORD)CudaDriverData_1422118) == 0) {
    v4 = true;
  }
  *(_BYTE*)(v2 + 48) = v4;
  v5 = (*(_WORD*)(a2 + 977) & 0x100) != 0;
  if (*(_DWORD*)((char*)&CudaDriverRoutine_436c + (_QWORD)v3) == 0) {
    v5 = true;
  }
  *(_BYTE*)(v2 + 49) = v5;
  return !v4 || !v5;
}

bool cuda_driver_a170(__int64 a1, __int64 a2)
{
  __int64 v2;
  void* v3;
  _BOOL4 v4;
  _BOOL4 v5;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 16104) + 2080LL);
  v3 = CudaDriverData_1422118;
  v4 = (*(_WORD*)(a2 + 977) & 0x80) != 0;
  if (*(_DWORD*)((char*)&CudaDriverRoutine_4360 +
                 (_QWORD)CudaDriverData_1422118) == 0) {
    v4 = true;
  }
  *(_BYTE*)(v2 + 48) = v4;
  v5 = (*(_WORD*)(a2 + 977) & 0x100) != 0;
  if (*(_DWORD*)((char*)&CudaDriverRoutine_436c + (_QWORD)v3) == 0) {
    v5 = true;
  }
  *(_BYTE*)(v2 + 49) = v5;
  return !v4 || !v5;
}

__int64 cuda_driver_unplaced_a650(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned int v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  unsigned int v52;
  struct {
    _QWORD v53[2];
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    int v59;
    int v60;
    __int128 v61;
    __int128 v62;
  } v53_;
  struct {
    __int128 v63;
    __int128 v64;
  } v63_;

  result = 0;
  v5 = (__int64*)(*(_QWORD*)a3 + 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12)));
  v6 = *v5;
  if ((*v5 & 0xFFF) != 0x992) {
    return result;
  }
  v7 = v5[1];
  if ((v7 & 0x7000) != 0x3000) {
    return result;
  }
  v8 = *(_QWORD*)(a1 + 16104);
  v53_.v53[0] = 0;
  v11 = *(__int64**)(v8 + 3104);
  v12 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_ba080(v12, *(unsigned int*)(a1 + 188), v11[3], 64,
                                   (__int64)v53_.v53);
  if ((_DWORD)result != 0) {
    return result;
  }
  v14 = v53_.v53[0];
  ++*(_DWORD*)&CudaDriverData_4398[(_QWORD)CudaDriverData_1422118];
  v15 = CudaDriverStub_b9660(v11[2]);
  memcpy_plt(v11[4], v15, v11[3]);
  v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
      *(_QWORD*)(a2 + 96));
  v17 = *(unsigned int*)(a3 + 12);
  v18 = v16;
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 19448LL))(v14);
  v20 = v11[4];
  v21 = (unsigned __int64*)(v20 + (v11[10] & 0x7FFFFFFF0LL));
  v22 = v11[8] & 0xFFFFFFFFFFFF0FFFLL | (unsigned __int16)v6 & 0xF000;
  v11[8] = v22;
  *v21 = v22;
  v21[1] = v11[9];
  v23 = v11[6] & 0xFFFFFFFFFFFE7FFFLL | (((v7 >> 15) & 3) << 15);
  v24 = v11[5] & 0xFFFFFFFFFFFF0FFFLL | (unsigned __int16)v6 & 0xF000;
  v25 = v11[7];
  v11[5] = v24;
  v11[6] = v23;
  v26 = (unsigned __int64*)(v20 + (v25 & 0x7FFFFFFF0LL));
  *v26 = v24;
  v26[1] = v11[6];
  v27 = v19;
  v28 = v11[13];
  v29 = v18 + 16LL * (unsigned int)(v17 + 1) - v19 - v28 - 16;
  v30 = (unsigned __int64*)(v20 + (v28 & 0x7FFFFFFF0LL));
  v31 = v11[12] & 0xFFFFFFFFFFFC0000LL | HIDWORD(v29) & 0x3FFFF;
  v32 = v11[11] & 0x3FFFFFFFFLL |
        ((unsigned __int64)(unsigned int)(v29 >> 2) << 34);
  v11[11] = v32;
  v11[12] = v31;
  *v30 = v32;
  v30[1] = v11[12];
  v33 = CudaDriverData_14358d0 == 2 ? 8 : 0;
  result = CudaDriverRoutine_f60f0(a1, v14, 0, v11[4], v11[3],
                                   *(_QWORD*)(a1 + 96), 2u, 0, v33);
  if ((_DWORD)result != 0) {
    return result;
  }
  v34 = v18 + 16 * v17;
  v35 = v27 - v34 - 16;
  v36 = v11[12] & 0xFFFFFFFFFFFC0000LL | HIDWORD(v35) & 0x3FFFF;
  v37 = 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12));
  *(_QWORD*)(*(_QWORD*)a3 + v37) =
      (v35 << 32) & 0xFFFFFFFC00000000LL | v11[11] & 0x3FFFFFFFFLL;
  *(_QWORD*)(*(_QWORD*)a3 + v37 + 8) = v36;
  v63_.v63 = (__typeof__(v63_.v63)){0};
  v63_.v64 = (__typeof__(v63_.v64)){0};
  v53_.v62 = (__typeof__(v53_.v62)){0};
  v38 = *(_DWORD*)(a2 + 392);
  if (v38 <= 6) {
    v38 = 6;
  }
  *(_DWORD*)(a2 + 392) = v38;
  if (!cuda_debugger_api_7cff0()) {
    v39 = 16;
    if (*(_DWORD*)(a1 + 188) == 3) {
      v39 = 168;
    }
    v40 = 132;
    v41 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v39);
    if (*(_DWORD*)(a1 + 188) == 3) {
      v40 = 52;
    }
    if (*(_DWORD*)(v41 + v40) == 0) {
      v34 = 0;
      LODWORD(v44) = 0;
      v27 = 0;
      a2 = 0;
      if (!cuda_debugger_api_7cff0()) {
        goto LABEL_18;
      }
      goto LABEL_17;
    }
  }
  v42 = *(_QWORD*)(a1 + 16104);
  *(_QWORD*)&v63_.v63 = v6;
  *((_QWORD*)&v63_.v63 + 1) = v7;
  *(_QWORD*)&v63_.v64 = v27;
  v43 = *(_QWORD*)(v42 + 3104);
  *(_QWORD*)&v53_.v62 = a2;
  *((_QWORD*)&v53_.v62 + 1) = v18 + 16 * v17;
  v44 = *(_QWORD*)(v43 + 24);
  *((_QWORD*)&v63_.v64 + 1) = v44;
  if (cuda_debugger_api_7cff0()) {
  LABEL_17:
    v45 = CudaDriverStub_1db800(*(_QWORD*)(a2 + 96));
    CudaDriverRoutine_7fa50(a1, 64, v45, v27, v44, v34, 0, (__int64)&v63_.v63,
                            0x10u, 1);
  }
LABEL_18:
  v46 = *(_DWORD*)(a1 + 188);
  v47 = 16;
  if (v46 == 3) {
    v47 = 168;
  }
  v48 = 132;
  v49 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v47);
  if (v46 == 3) {
    v48 = 52;
  }
  if (*(_DWORD*)(v49 + v48) != 0) {
    v53_.v54 = *(_QWORD*)(v53_.v62 + 32);
    v53_.v55 = v53_.v62;
    v50 = *(_QWORD*)(v53_.v54 + 24);
    v53_.v56 = 0;
    v53_.v57 = *((_QWORD*)&v53_.v62 + 1);
    v53_.v61 = v63_.v63;
    v53_.v53[0] = 80;
    v53_.v53[1] = v50;
    v53_.v58 = v63_.v64;
    v53_.v59 = DWORD2(v63_.v64);
    v53_.v60 = 4;
    if (v46 == 3) {
      v51 = 21;
    }
    else {
      v51 = 2;
    }
    if (v46 == 3) {
      v52 = 13;
    }
    else {
      v52 = 33;
    }
    cuda_driver_20b420(v51, v52, (__int64)v53_.v53);
  }
  return 0;
}

__int64 cuda_driver_a9f0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v9;
  __int64 v10;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16104) + 4512LL);
  v4 = (__int64*)(*(_QWORD*)a3 + 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12)));
  v6 = *v4;
  v5 = v4[1];
  if ((*v4 & 0xFFF) == 0x992 && (v4[1] & 0x7000) == 0) {
    v9 = (v5 >> 49) & 7;
    result = 0;
    if ((_DWORD)v9 == 7) {
      v5 = v5 & 0xFFF1FFFFFFFF8FFFLL | 0x6000000000000LL;
      LODWORD(v9) = 3;
    }
    *(_DWORD*)(v3 + 412) = v9;
    v10 = 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12));
    *(_QWORD*)(*(_QWORD*)a3 + v10) = v6;
    *(_QWORD*)(*(_QWORD*)a3 + v10 + 8) = v5;
    atomic_fetch_add((atomic_uint* volatile)((char*)&CudaDriverRoutine_43c0 +
                                             (_QWORD)CudaDriverData_1422118),
                     1u);
    *(_BYTE*)(v3 + 408) = 1;
  }
  else {
    if (*(_BYTE*)(v3 + 408) != 0) {
      v4[1] =
          v5 & 0xFC0FFFFFFFFFFFFFLL |
          ((((1 << *(_DWORD*)(v3 + 412)) | (unsigned int)(v5 >> 52)) & 0x3FLL)
           << 52);
      atomic_fetch_add((atomic_uint* volatile)((char*)&CudaDriverRoutine_43c4 +
                                               (_QWORD)CudaDriverData_1422118),
                       1u);
      *(_BYTE*)(v3 + 408) = 0;
      *(_DWORD*)(v3 + 412) = -1;
    }
    return 0;
  }
  return result;
}

__int64 cuda_driver_unplaced_b260(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64* v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  unsigned int v46;
  __int64 v47;
  unsigned __int64 v48;
  struct {
    _QWORD v49[2];
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    int v55;
    int v56;
    __int128 v57;
    __int128 v58;
  } v49_;
  struct {
    __int128 v59;
    __int128 v60;
  } v59_;

  result = 0;
  v5 = (__int64*)(*(_QWORD*)a3 + 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12)));
  v6 = *v5;
  if ((*v5 & 0xFFF) != 0x992) {
    return result;
  }
  v7 = v5[1];
  if ((v7 & 0x7000) != 0x3000) {
    return result;
  }
  v8 = *(_QWORD*)(a1 + 16104);
  v49_.v49[0] = 0;
  v11 = *(__int64**)(v8 + 4512);
  v12 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_ba080(v12, *(unsigned int*)(a1 + 188), v11[39], 64,
                                   (__int64)v49_.v49);
  if ((_DWORD)result != 0) {
    return result;
  }
  v14 = v49_.v49[0];
  ++*(_DWORD*)((char*)&CudaDriverRoutine_43b8 + (_QWORD)CudaDriverData_1422118);
  v15 = CudaDriverStub_b9660(v11[38]);
  memcpy_plt(v11[40], v15, v11[39]);
  v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
      *(_QWORD*)(a2 + 96));
  v17 = *(unsigned int*)(a3 + 12);
  v47 = v16;
  v18 = v16 + 16LL * (unsigned int)(v17 + 1);
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 19448LL))(v14);
  v20 = v11[40];
  v48 = v19;
  v21 = (_QWORD*)(v20 + (v11[43] & 0x7FFFFFFF0LL));
  *v21 = v6;
  v21[1] = v7;
  v22 = (_QWORD*)(v20 + (v11[46] & 0x7FFFFFFF0LL));
  *v22 = v6;
  v22[1] = v7;
  v23 = v11[48] & 0xFFFFFFFFFFFE0000LL | (v18 >> 40) & 0x1FFFF;
  v24 = ((_DWORD)v18 << 14) & 0xFF0000 |
        ((unsigned __int64)(unsigned int)(v18 >> 10) << 34) |
        v11[47] & 0x3FF00FFFFLL;
  v25 = v11[49];
  v11[47] = v24;
  v11[48] = v23;
  v26 = (unsigned __int64*)(v20 + (v25 & 0x7FFFFFFF0LL));
  *v26 = v24;
  v26[1] = v11[48];
  v27 = CudaDriverData_14358d0 == 2 ? 8 : 0;
  result = CudaDriverRoutine_f60f0(a1, v14, 0, v11[40], v11[39],
                                   *(_QWORD*)(a1 + 96), 2u, 0, v27);
  if ((_DWORD)result != 0) {
    return result;
  }
  v28 = v17;
  v29 = v48;
  v30 = v11[48] & 0xFFFFFFFFFFFE0000LL | (v48 >> 40) & 0x1FFFF;
  v31 = 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12));
  *(_QWORD*)(*(_QWORD*)a3 + v31) =
      ((_DWORD)v48 << 14) & 0xFF0000 |
      ((unsigned __int64)(unsigned int)(v48 >> 10) << 34) |
      v11[47] & 0x3FF00FFFFLL;
  *(_QWORD*)(*(_QWORD*)a3 + v31 + 8) = v30;
  v59_.v59 = (__typeof__(v59_.v59)){0};
  v59_.v60 = (__typeof__(v59_.v60)){0};
  v49_.v58 = (__typeof__(v49_.v58)){0};
  v32 = *(_DWORD*)(a2 + 392);
  if (v32 <= 6) {
    v32 = 6;
  }
  *(_DWORD*)(a2 + 392) = v32;
  if (!cuda_debugger_api_7cff0()) {
    v33 = 16;
    if (*(_DWORD*)(a1 + 188) == 3) {
      v33 = 168;
    }
    v34 = 132;
    v35 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v33);
    if (*(_DWORD*)(a1 + 188) == 3) {
      v34 = 52;
    }
    if (*(_DWORD*)(v35 + v34) == 0) {
      v37 = 0;
      LODWORD(v38) = 0;
      v29 = 0;
      a2 = 0;
      if (!cuda_debugger_api_7cff0()) {
        goto LABEL_18;
      }
      goto LABEL_17;
    }
  }
  v36 = *(_QWORD*)(a1 + 16104);
  v37 = v47 + 16 * v28;
  *(_QWORD*)&v59_.v59 = v6;
  *((_QWORD*)&v59_.v59 + 1) = v7;
  *(_QWORD*)&v49_.v58 = a2;
  *((_QWORD*)&v49_.v58 + 1) = v37;
  v38 = *(_QWORD*)(*(_QWORD*)(v36 + 4512) + 312LL);
  *(_QWORD*)&v59_.v60 = v48;
  *((_QWORD*)&v59_.v60 + 1) = v38;
  if (cuda_debugger_api_7cff0()) {
  LABEL_17:
    v39 = CudaDriverStub_1db800(*(_QWORD*)(a2 + 96));
    CudaDriverRoutine_7fa50(a1, 64, v39, v29, v38, v37, 0, (__int64)&v59_.v59,
                            0x10u, 1);
  }
LABEL_18:
  v40 = *(_DWORD*)(a1 + 188);
  v41 = 16;
  if (v40 == 3) {
    v41 = 168;
  }
  v42 = 132;
  v43 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v41);
  if (v40 == 3) {
    v42 = 52;
  }
  if (*(_DWORD*)(v43 + v42) != 0) {
    v49_.v50 = *(_QWORD*)(v49_.v58 + 32);
    v49_.v51 = v49_.v58;
    v44 = *(_QWORD*)(v49_.v50 + 24);
    v49_.v52 = 0;
    v49_.v53 = *((_QWORD*)&v49_.v58 + 1);
    v49_.v57 = v59_.v59;
    v49_.v49[0] = 80;
    v49_.v49[1] = v44;
    v49_.v54 = v59_.v60;
    v49_.v55 = DWORD2(v59_.v60);
    v49_.v56 = 9;
    if (v40 == 3) {
      v45 = 21;
    }
    else {
      v45 = 2;
    }
    if (v40 == 3) {
      v46 = 13;
    }
    else {
      v46 = 33;
    }
    cuda_driver_20b420(v45, v46, (__int64)v49_.v49);
  }
  return 0;
}

__int64 cuda_driver_unplaced_b660(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3;
  unsigned __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _BYTE* v11;
  bool v12;
  bool v13;
  bool v15;
  int v16;
  char v17;
  __int64 v18;
  void* v19;
  char* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 result;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned int v51;
  __int64 v52;
  int v53;
  int v54;
  __int64 v55;
  int v56;
  __int64 v57;
  void* v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  __int64 v81;
  int v82;
  struct {
    __int64 v83[2];
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    int v89;
    int v90;
    int8x16_t v91;
    __int128 v92;
  } v83_;
  struct {
    int8x16_t v93;
    __int128 v94;
  } v93_;

  v3 = *(_DWORD*)(a3 + 12);
  v7 = *(_QWORD*)(*(_QWORD*)a3 + 32LL * (v3 / 3));
  v8 = v3 % 3;
  v9 = *(_QWORD*)(*(_QWORD*)a3 + 8LL * (v3 % 3 + 4 * (v3 / 3) + 1));
  v10 = HIDWORD(v9) & 7;
  v11 = *(_BYTE**)(*(_QWORD*)(a1 + 16104) + 2080LL);
  v12 = v9 >> 51 == 7701 && v10 < 3;
  if (v9 >> 51 == 7703) {
    v13 = (v9 & 0x300000000LL) == 0x100000000LL;
  }
  else {
    v13 = v12;
  }
  v15 = v9 >> 51 != 7701 || v10 > 4 || ((1LL << (BYTE4(v9) & 7)) & 0x15) == 0;
  if (v15) {
    v11[200] = 0;
  }
  else {
    v16 = (unsigned __int8)v11[49];
    v11[200] = v11[49] == 0;
    if (v16 == 0) {
      goto LABEL_20;
    }
  }
  v15 = v11[48] == 0;
  v17 = !v13;
  if (!v15) {
    v17 = 1;
  }
  if ((v17 & 1) != 0) {
    return 0;
  }
LABEL_20:
  v18 = *(_QWORD*)(*(_QWORD*)(a1 + 16104) + 2080LL);
  v19 = CudaDriverData_1422118;
  if (*(_BYTE*)(v18 + 200) != 0) {
    v20 = (char*)&CudaDriverRoutine_436c + (_QWORD)CudaDriverData_1422118;
  }
  else {
    v20 = (char*)&CudaDriverRoutine_4360 + (_QWORD)CudaDriverData_1422118;
  }
  v21 = *(_DWORD*)v20;
  v83_.v83[0] = 0;
  if (v21 == 1 && (v22 = CudaDriverRoutine_1a2980(*(int**)(v18 + 208), v9, a3),
                   v83_.v83[0] = v22, v22 != 0)) {
    v23 = v22;
    v82 = 1;
  }
  else {
    v24 = CudaDriverRoutine_98340(a1);
    result =
        CudaDriverRoutine_ba080(v24, *(unsigned int*)(a1 + 188),
                                *(_QWORD*)(v18 + 32), 64, (__int64)v83_.v83);
    if ((_DWORD)result != 0) {
      return result;
    }
    atomic_fetch_add(
        (atomic_uint* volatile)((char*)&CudaDriverRoutine_4368 + (_QWORD)v19),
        1u);
    v23 = v83_.v83[0];
    if (v21 == 1 && v83_.v83[0] != 0) {
      result = CudaDriverStub_1a2960(*(_QWORD*)(v18 + 208), v9, v83_.v83[0]);
      if ((_DWORD)result != 0) {
        return result;
      }
      v23 = v83_.v83[0];
    }
    v82 = 0;
  }
  v28 = (v7 >> (21 * (unsigned __int8)v8)) & 0x1FFFFF;
  v29 = CudaDriverStub_b9660(*(_QWORD*)(v18 + 24));
  memcpy_plt(*(_QWORD*)(v18 + 40), v29, *(_QWORD*)(v18 + 32));
  v30 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
      *(_QWORD*)(a2 + 96));
  v31 = *(_QWORD*)(v18 + 40);
  v81 = v30;
  v80 = *(_DWORD*)(a3 + 12);
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 19448LL))(v23);
  v33 = v21 == 1;
  v34 = 72;
  if (v21 == 1) {
    v34 = 120;
  }
  v35 = *(_QWORD*)(v18 + v34) + v32;
  if (!v33) {
    v46 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
        *(_QWORD*)(a2 + 96));
    v47 = *(_DWORD*)(a3 + 12);
    v48 = *(_QWORD*)(v18 + 64);
    v49 = *(_QWORD*)(v18 + 88) & 0x1FFFFFLL;
    v50 = *(_QWORD*)(v18 + 80) & 0xFFF000000000FFFFLL |
          (((unsigned __int64)((v47 + 1) % 3 + 4 * ((v47 + 1) / 3) + 1) << 23) +
           (v46 << 20)) &
              0xFFFFFFFF00000LL |
          0x70000;
    v51 = v47 / 3;
    v47 %= 3u;
    v52 = *(_QWORD*)(*(_QWORD*)a3 + 32LL * v51);
    *(_QWORD*)(*(_QWORD*)a3 + 8LL * (v47 + 4 * v51 + 1)) =
        *(_QWORD*)(v18 + 56) & 0xFFF000000000FFFFLL |
        ((unsigned __int64)(unsigned int)v35 << 20) | 0x70000;
    *(_QWORD*)(*(_QWORD*)a3 + 32LL * v51) =
        v52 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v47)) |
        ((v48 & 0x1FFFFF) << (21 * (unsigned __int8)v47));
    v53 = (((*(_QWORD*)(v18 + 72) >> 3) & 3) +
           3 * (unsigned int)(*(_QWORD*)(v18 + 72) >> 5) - 1) /
          3;
    v54 = (((*(_QWORD*)(v18 + 72) >> 3) & 3) +
           3 * (unsigned int)(*(_QWORD*)(v18 + 72) >> 5) - 1) %
          3;
    v55 = *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v53));
    *(_QWORD*)(v31 + 8LL * (((*(_QWORD*)(v18 + 72) >> 3) & 3) +
                            3 * (unsigned int)(*(_QWORD*)(v18 + 72) >> 5) -
                            3 * v53 + 4 * v53)) = v9;
    *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v53)) =
        v55 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v54)) |
        (v28 << (21 * (unsigned __int8)v54));
    LODWORD(v48) = (((*(_QWORD*)(v18 + 96) >> 3) & 3) +
                    3 * (unsigned int)(*(_QWORD*)(v18 + 96) >> 5) - 1) /
                   3;
    v56 = (((*(_QWORD*)(v18 + 96) >> 3) & 3) +
           3 * (unsigned int)(*(_QWORD*)(v18 + 96) >> 5) - 1) %
          3;
    v57 = *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v48));
    *(_QWORD*)(v31 + 8LL * (((*(_QWORD*)(v18 + 96) >> 3) & 3) +
                            3 * (unsigned int)(*(_QWORD*)(v18 + 96) >> 5) -
                            3 * (int)v48 + 4 * (int)v48)) = v50;
    *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v48)) =
        v57 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v56)) |
        (v49 << (21 * (unsigned __int8)v56));
    if (*(_BYTE*)(v18 + 200) == 0) {
      v59 = (((*(_QWORD*)(v18 + 144) >> 3) & 3) +
             3 * (unsigned int)(*(_QWORD*)(v18 + 144) >> 5) - 1) /
            3;
      v60 = (((*(_QWORD*)(v18 + 144) >> 3) & 3) +
             3 * (unsigned int)(*(_QWORD*)(v18 + 144) >> 5) - 1) %
            3;
      v61 = *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v59));
      *(_QWORD*)(v31 + 8LL * (((*(_QWORD*)(v18 + 144) >> 3) & 3) +
                              3 * (unsigned int)(*(_QWORD*)(v18 + 144) >> 5) -
                              3 * v59 + 4 * v59)) = v50;
      *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v59)) =
          v61 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v60)) |
          (v49 << (21 * (unsigned __int8)v60));
      if (v82 != 0) {
        goto LABEL_43;
      }
      goto LABEL_45;
    }
    goto LABEL_42;
  }
  v36 = *(_DWORD*)(a3 + 12);
  v37 = *(_QWORD*)(v18 + 112);
  v38 = v36 / 3;
  v36 %= 3u;
  v39 = *(_QWORD*)(*(_QWORD*)a3 + 32LL * v38);
  *(_QWORD*)(*(_QWORD*)a3 + 8LL * (v36 + 4 * v38 + 1)) =
      *(_QWORD*)(v18 + 104) & 0xFFF00000000FFFFFLL |
      ((unsigned __int64)(unsigned int)(*(_DWORD*)(v18 + v34) + v32) << 20);
  *(_QWORD*)(*(_QWORD*)a3 + 32LL * v38) =
      v39 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v36)) |
      ((v37 & 0x1FFFFF) << (21 * (unsigned __int8)v36));
  LODWORD(v37) = (((*(_QWORD*)(v18 + 120) >> 3) & 3) +
                  3 * (unsigned int)(*(_QWORD*)(v18 + 120) >> 5) - 1) /
                 3;
  v40 = (((*(_QWORD*)(v18 + 120) >> 3) & 3) +
         3 * (unsigned int)(*(_QWORD*)(v18 + 120) >> 5) - 1) %
        3;
  v41 = *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v37));
  *(_QWORD*)(v31 + 8LL * (((*(_QWORD*)(v18 + 120) >> 3) & 3) +
                          3 * (unsigned int)(*(_QWORD*)(v18 + 120) >> 5) -
                          3 * (int)v37 + 4 * (int)v37)) = v9;
  *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v37)) =
      v41 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v40)) |
      (v28 << (21 * (unsigned __int8)v40));
  if (*(_BYTE*)(v18 + 200) != 0) {
  LABEL_42:
    if (v82 != 0) {
      goto LABEL_43;
    }
    goto LABEL_45;
  }
  v42 = *(_QWORD*)(v18 + 184) & 0x1FFFFFLL;
  v43 = (((*(_QWORD*)(v18 + 168) >> 3) & 3) +
         3 * (unsigned int)(*(_QWORD*)(v18 + 168) >> 5) - 1) /
        3;
  v44 = (((*(_QWORD*)(v18 + 168) >> 3) & 3) +
         3 * (unsigned int)(*(_QWORD*)(v18 + 168) >> 5) - 1) %
        3;
  v45 = *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v43));
  *(_QWORD*)(v31 + 8LL * (((*(_QWORD*)(v18 + 168) >> 3) & 3) +
                          3 * (unsigned int)(*(_QWORD*)(v18 + 168) >> 5) -
                          3 * v43 + 4 * v43)) = *(_QWORD*)(v18 + 176);
  *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v43)) =
      v45 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v44)) |
      (v42 << (21 * (unsigned __int8)v44));
  if (v82 != 0) {
  LABEL_43:
    v93_.v93 = (__typeof__(v93_.v93)){0};
    v93_.v94 = (__typeof__(v93_.v94)){0};
    v83_.v92 = (__typeof__(v83_.v92)){0};
    v58 = CudaDriverData_1422118;
    goto LABEL_46;
  }
LABEL_45:
  result =
      CudaDriverRoutine_f6230(a1, v23, 0, *(_QWORD*)(v18 + 40),
                              *(_QWORD*)(v18 + 32), *(_QWORD*)(a1 + 96), 2u, 0);
  v93_.v93 = (__typeof__(v93_.v93)){0};
  v93_.v94 = (__typeof__(v93_.v94)){0};
  v83_.v92 = (__typeof__(v83_.v92)){0};
  v58 = CudaDriverData_1422118;
  if ((_DWORD)result != 0) {
    return result;
  }
LABEL_46:
  v62 = v35;
  v63 = *(_QWORD*)(*(_QWORD*)(a1 + 16104) + 2080LL);
  if (*(_BYTE*)(v63 + 200) != 0) {
    v64 = (char*)&CudaDriverRoutine_436c + (_QWORD)v58;
  }
  else {
    v64 = (char*)&CudaDriverRoutine_4360 + (_QWORD)v58;
  }
  v65 = *(_DWORD*)v64;
  if (!cuda_debugger_api_7cff0()) {
    v66 = 16;
    if (*(_DWORD*)(a1 + 188) == 3) {
      v66 = 168;
    }
    v67 = 132;
    v68 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v66);
    if (*(_DWORD*)(a1 + 188) == 3) {
      v67 = 52;
    }
    if (*(_DWORD*)(v68 + v67) == 0) {
      v69 = 0;
      LODWORD(v71) = 0;
      v62 = 0;
      a2 = 0;
      if (!cuda_debugger_api_7cff0()) {
        goto LABEL_57;
      }
      goto LABEL_56;
    }
  }
  *(_QWORD*)&v83_.v92 = a2;
  LANES128(v93_.v93).n128_u64[0] = v9;
  v69 = v81 + 8LL * (v80 % 3 + 4 * (v80 / 3) + 1);
  v70 = *(_QWORD*)(*(_QWORD*)a3 +
                   8LL * ((unsigned int)(2 * ((2863311531u *
                                               (unsigned __int64)*(
                                                   unsigned int*)(a3 + 12)) >>
                                              32)) &
                          0xFFFFFFFC));
  *((_QWORD*)&v83_.v92 + 1) = v69;
  LANES128(v93_.v93).n128_u64[1] = v70;
  *(_QWORD*)&v93_.v94 = v62;
  v71 = *(_QWORD*)(v63 + 32);
  *((_QWORD*)&v93_.v94 + 1) = v71;
  if (cuda_debugger_api_7cff0()) {
  LABEL_56:
    v72 = CudaDriverStub_1db800(*(_QWORD*)(a2 + 96));
    CudaDriverRoutine_7fa50(a1, 128, v72, v62, v71, v69, v65 == 1,
                            (__int64)&v93_.v93, 8u, 1);
  }
LABEL_57:
  v73 = *(_DWORD*)(a1 + 188);
  v74 = 16;
  if (v73 == 3) {
    v74 = 168;
  }
  v75 = 132;
  v76 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v74);
  if (v73 == 3) {
    v75 = 52;
  }
  if (*(_DWORD*)(v76 + v75) != 0) {
    v83_.v84 = *(_QWORD*)(v83_.v92 + 32);
    v83_.v85 = v83_.v92;
    v77 = *(_QWORD*)(v83_.v84 + 24);
    v83_.v86 = 0;
    v83_.v87 = *((_QWORD*)&v83_.v92 + 1);
    v83_.v91 = vextq_s8(v93_.v93, v93_.v93, 8u);
    v83_.v83[0] = 80;
    v83_.v83[1] = v77;
    v83_.v88 = v93_.v94;
    v83_.v89 = DWORD2(v93_.v94);
    v83_.v90 = 1;
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
    cuda_driver_20b420(v78, v79, (__int64)v83_.v83);
  }
  return 0;
}

__int64 cuda_driver_unplaced_c280(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3;
  unsigned __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _BYTE* v11;
  bool v12;
  bool v13;
  bool v15;
  int v16;
  char v17;
  __int64 v18;
  void* v19;
  char* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 result;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned int v51;
  __int64 v52;
  int v53;
  int v54;
  __int64 v55;
  int v56;
  __int64 v57;
  void* v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  __int64 v81;
  int v82;
  struct {
    __int64 v83[2];
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    int v89;
    int v90;
    int8x16_t v91;
    __int128 v92;
  } v83_;
  struct {
    int8x16_t v93;
    __int128 v94;
  } v93_;

  v3 = *(_DWORD*)(a3 + 12);
  v7 = *(_QWORD*)(*(_QWORD*)a3 + 32LL * (v3 / 3));
  v8 = v3 % 3;
  v9 = *(_QWORD*)(*(_QWORD*)a3 + 8LL * (v3 % 3 + 4 * (v3 / 3) + 1));
  v10 = HIDWORD(v9) & 7;
  v11 = *(_BYTE**)(*(_QWORD*)(a1 + 16104) + 2080LL);
  v12 = v9 >> 51 == 7701 && v10 < 3;
  if (v9 >> 51 == 7703) {
    v13 = (v9 & 0x300000000LL) == 0x100000000LL;
  }
  else {
    v13 = v12;
  }
  v15 = v9 >> 51 != 7701 || v10 > 4 || ((1LL << (BYTE4(v9) & 7)) & 0x15) == 0;
  if (v15) {
    v11[200] = 0;
  }
  else {
    v16 = (unsigned __int8)v11[49];
    v11[200] = v11[49] == 0;
    if (v16 == 0) {
      goto LABEL_20;
    }
  }
  v15 = v11[48] == 0;
  v17 = !v13;
  if (!v15) {
    v17 = 1;
  }
  if ((v17 & 1) != 0) {
    return 0;
  }
LABEL_20:
  v18 = *(_QWORD*)(*(_QWORD*)(a1 + 16104) + 2080LL);
  v19 = CudaDriverData_1422118;
  if (*(_BYTE*)(v18 + 200) != 0) {
    v20 = (char*)&CudaDriverRoutine_436c + (_QWORD)CudaDriverData_1422118;
  }
  else {
    v20 = (char*)&CudaDriverRoutine_4360 + (_QWORD)CudaDriverData_1422118;
  }
  v21 = *(_DWORD*)v20;
  v83_.v83[0] = 0;
  if (v21 == 1 && (v22 = CudaDriverRoutine_1a2980(*(int**)(v18 + 208), v9, a3),
                   v83_.v83[0] = v22, v22 != 0)) {
    v23 = v22;
    v82 = 1;
  }
  else {
    v24 = CudaDriverRoutine_98340(a1);
    result =
        CudaDriverRoutine_ba080(v24, *(unsigned int*)(a1 + 188),
                                *(_QWORD*)(v18 + 32), 64, (__int64)v83_.v83);
    if ((_DWORD)result != 0) {
      return result;
    }
    atomic_fetch_add(
        (atomic_uint* volatile)((char*)&CudaDriverRoutine_4368 + (_QWORD)v19),
        1u);
    v23 = v83_.v83[0];
    if (v21 == 1 && v83_.v83[0] != 0) {
      result = CudaDriverStub_1a2960(*(_QWORD*)(v18 + 208), v9, v83_.v83[0]);
      if ((_DWORD)result != 0) {
        return result;
      }
      v23 = v83_.v83[0];
    }
    v82 = 0;
  }
  v28 = (v7 >> (21 * (unsigned __int8)v8)) & 0x1FFFFF;
  v29 = CudaDriverStub_b9660(*(_QWORD*)(v18 + 24));
  memcpy_plt(*(_QWORD*)(v18 + 40), v29, *(_QWORD*)(v18 + 32));
  v30 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
      *(_QWORD*)(a2 + 96));
  v31 = *(_QWORD*)(v18 + 40);
  v81 = v30;
  v80 = *(_DWORD*)(a3 + 12);
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 19448LL))(v23);
  v33 = v21 == 1;
  v34 = 72;
  if (v21 == 1) {
    v34 = 120;
  }
  v35 = *(_QWORD*)(v18 + v34) + v32;
  if (!v33) {
    v46 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
        *(_QWORD*)(a2 + 96));
    v47 = *(_DWORD*)(a3 + 12);
    v48 = *(_QWORD*)(v18 + 64);
    v49 = *(_QWORD*)(v18 + 88) & 0x1FFFFFLL;
    v50 = *(_QWORD*)(v18 + 80) & 0xFFF000000000FFFFLL |
          (((unsigned __int64)((v47 + 1) % 3 + 4 * ((v47 + 1) / 3) + 1) << 23) +
           (v46 << 20)) &
              0xFFFFFFFF00000LL |
          0x70000;
    v51 = v47 / 3;
    v47 %= 3u;
    v52 = *(_QWORD*)(*(_QWORD*)a3 + 32LL * v51);
    *(_QWORD*)(*(_QWORD*)a3 + 8LL * (v47 + 4 * v51 + 1)) =
        *(_QWORD*)(v18 + 56) & 0xFFF000000000FFFFLL |
        ((unsigned __int64)(unsigned int)v35 << 20) | 0x70000;
    *(_QWORD*)(*(_QWORD*)a3 + 32LL * v51) =
        v52 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v47)) |
        ((v48 & 0x1FFFFF) << (21 * (unsigned __int8)v47));
    v53 = (((*(_QWORD*)(v18 + 72) >> 3) & 3) +
           3 * (unsigned int)(*(_QWORD*)(v18 + 72) >> 5) - 1) /
          3;
    v54 = (((*(_QWORD*)(v18 + 72) >> 3) & 3) +
           3 * (unsigned int)(*(_QWORD*)(v18 + 72) >> 5) - 1) %
          3;
    v55 = *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v53));
    *(_QWORD*)(v31 + 8LL * (((*(_QWORD*)(v18 + 72) >> 3) & 3) +
                            3 * (unsigned int)(*(_QWORD*)(v18 + 72) >> 5) -
                            3 * v53 + 4 * v53)) = v9;
    *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v53)) =
        v55 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v54)) |
        (v28 << (21 * (unsigned __int8)v54));
    LODWORD(v48) = (((*(_QWORD*)(v18 + 96) >> 3) & 3) +
                    3 * (unsigned int)(*(_QWORD*)(v18 + 96) >> 5) - 1) /
                   3;
    v56 = (((*(_QWORD*)(v18 + 96) >> 3) & 3) +
           3 * (unsigned int)(*(_QWORD*)(v18 + 96) >> 5) - 1) %
          3;
    v57 = *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v48));
    *(_QWORD*)(v31 + 8LL * (((*(_QWORD*)(v18 + 96) >> 3) & 3) +
                            3 * (unsigned int)(*(_QWORD*)(v18 + 96) >> 5) -
                            3 * (int)v48 + 4 * (int)v48)) = v50;
    *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v48)) =
        v57 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v56)) |
        (v49 << (21 * (unsigned __int8)v56));
    if (*(_BYTE*)(v18 + 200) == 0) {
      v59 = (((*(_QWORD*)(v18 + 144) >> 3) & 3) +
             3 * (unsigned int)(*(_QWORD*)(v18 + 144) >> 5) - 1) /
            3;
      v60 = (((*(_QWORD*)(v18 + 144) >> 3) & 3) +
             3 * (unsigned int)(*(_QWORD*)(v18 + 144) >> 5) - 1) %
            3;
      v61 = *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v59));
      *(_QWORD*)(v31 + 8LL * (((*(_QWORD*)(v18 + 144) >> 3) & 3) +
                              3 * (unsigned int)(*(_QWORD*)(v18 + 144) >> 5) -
                              3 * v59 + 4 * v59)) = v50;
      *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v59)) =
          v61 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v60)) |
          (v49 << (21 * (unsigned __int8)v60));
      if (v82 != 0) {
        goto LABEL_43;
      }
      goto LABEL_45;
    }
    goto LABEL_42;
  }
  v36 = *(_DWORD*)(a3 + 12);
  v37 = *(_QWORD*)(v18 + 112);
  v38 = v36 / 3;
  v36 %= 3u;
  v39 = *(_QWORD*)(*(_QWORD*)a3 + 32LL * v38);
  *(_QWORD*)(*(_QWORD*)a3 + 8LL * (v36 + 4 * v38 + 1)) =
      *(_QWORD*)(v18 + 104) & 0xFFF00000000FFFFFLL |
      ((unsigned __int64)(unsigned int)(*(_DWORD*)(v18 + v34) + v32) << 20);
  *(_QWORD*)(*(_QWORD*)a3 + 32LL * v38) =
      v39 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v36)) |
      ((v37 & 0x1FFFFF) << (21 * (unsigned __int8)v36));
  LODWORD(v37) = (((*(_QWORD*)(v18 + 120) >> 3) & 3) +
                  3 * (unsigned int)(*(_QWORD*)(v18 + 120) >> 5) - 1) /
                 3;
  v40 = (((*(_QWORD*)(v18 + 120) >> 3) & 3) +
         3 * (unsigned int)(*(_QWORD*)(v18 + 120) >> 5) - 1) %
        3;
  v41 = *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v37));
  *(_QWORD*)(v31 + 8LL * (((*(_QWORD*)(v18 + 120) >> 3) & 3) +
                          3 * (unsigned int)(*(_QWORD*)(v18 + 120) >> 5) -
                          3 * (int)v37 + 4 * (int)v37)) = v9;
  *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v37)) =
      v41 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v40)) |
      (v28 << (21 * (unsigned __int8)v40));
  if (*(_BYTE*)(v18 + 200) != 0) {
  LABEL_42:
    if (v82 != 0) {
      goto LABEL_43;
    }
    goto LABEL_45;
  }
  v42 = *(_QWORD*)(v18 + 184) & 0x1FFFFFLL;
  v43 = (((*(_QWORD*)(v18 + 168) >> 3) & 3) +
         3 * (unsigned int)(*(_QWORD*)(v18 + 168) >> 5) - 1) /
        3;
  v44 = (((*(_QWORD*)(v18 + 168) >> 3) & 3) +
         3 * (unsigned int)(*(_QWORD*)(v18 + 168) >> 5) - 1) %
        3;
  v45 = *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v43));
  *(_QWORD*)(v31 + 8LL * (((*(_QWORD*)(v18 + 168) >> 3) & 3) +
                          3 * (unsigned int)(*(_QWORD*)(v18 + 168) >> 5) -
                          3 * v43 + 4 * v43)) = *(_QWORD*)(v18 + 176);
  *(_QWORD*)(v31 + 8LL * (unsigned int)(4 * v43)) =
      v45 & ~(0x1FFFFFLL << (21 * (unsigned __int8)v44)) |
      (v42 << (21 * (unsigned __int8)v44));
  if (v82 != 0) {
  LABEL_43:
    v93_.v93 = (__typeof__(v93_.v93)){0};
    v93_.v94 = (__typeof__(v93_.v94)){0};
    v83_.v92 = (__typeof__(v83_.v92)){0};
    v58 = CudaDriverData_1422118;
    goto LABEL_46;
  }
LABEL_45:
  result =
      CudaDriverRoutine_f6230(a1, v23, 0, *(_QWORD*)(v18 + 40),
                              *(_QWORD*)(v18 + 32), *(_QWORD*)(a1 + 96), 2u, 0);
  v93_.v93 = (__typeof__(v93_.v93)){0};
  v93_.v94 = (__typeof__(v93_.v94)){0};
  v83_.v92 = (__typeof__(v83_.v92)){0};
  v58 = CudaDriverData_1422118;
  if ((_DWORD)result != 0) {
    return result;
  }
LABEL_46:
  v62 = v35;
  v63 = *(_QWORD*)(*(_QWORD*)(a1 + 16104) + 2080LL);
  if (*(_BYTE*)(v63 + 200) != 0) {
    v64 = (char*)&CudaDriverRoutine_436c + (_QWORD)v58;
  }
  else {
    v64 = (char*)&CudaDriverRoutine_4360 + (_QWORD)v58;
  }
  v65 = *(_DWORD*)v64;
  if (!cuda_debugger_api_7cff0()) {
    v66 = 16;
    if (*(_DWORD*)(a1 + 188) == 3) {
      v66 = 168;
    }
    v67 = 132;
    v68 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v66);
    if (*(_DWORD*)(a1 + 188) == 3) {
      v67 = 52;
    }
    if (*(_DWORD*)(v68 + v67) == 0) {
      v69 = 0;
      LODWORD(v71) = 0;
      v62 = 0;
      a2 = 0;
      if (!cuda_debugger_api_7cff0()) {
        goto LABEL_57;
      }
      goto LABEL_56;
    }
  }
  *(_QWORD*)&v83_.v92 = a2;
  LANES128(v93_.v93).n128_u64[0] = v9;
  v69 = v81 + 8LL * (v80 % 3 + 4 * (v80 / 3) + 1);
  v70 = *(_QWORD*)(*(_QWORD*)a3 +
                   8LL * ((unsigned int)(2 * ((2863311531u *
                                               (unsigned __int64)*(
                                                   unsigned int*)(a3 + 12)) >>
                                              32)) &
                          0xFFFFFFFC));
  *((_QWORD*)&v83_.v92 + 1) = v69;
  LANES128(v93_.v93).n128_u64[1] = v70;
  *(_QWORD*)&v93_.v94 = v62;
  v71 = *(_QWORD*)(v63 + 32);
  *((_QWORD*)&v93_.v94 + 1) = v71;
  if (cuda_debugger_api_7cff0()) {
  LABEL_56:
    v72 = CudaDriverStub_1db800(*(_QWORD*)(a2 + 96));
    CudaDriverRoutine_7fa50(a1, 128, v72, v62, v71, v69, v65 == 1,
                            (__int64)&v93_.v93, 8u, 1);
  }
LABEL_57:
  v73 = *(_DWORD*)(a1 + 188);
  v74 = 16;
  if (v73 == 3) {
    v74 = 168;
  }
  v75 = 132;
  v76 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v74);
  if (v73 == 3) {
    v75 = 52;
  }
  if (*(_DWORD*)(v76 + v75) != 0) {
    v83_.v84 = *(_QWORD*)(v83_.v92 + 32);
    v83_.v85 = v83_.v92;
    v77 = *(_QWORD*)(v83_.v84 + 24);
    v83_.v86 = 0;
    v83_.v87 = *((_QWORD*)&v83_.v92 + 1);
    v83_.v91 = vextq_s8(v93_.v93, v93_.v93, 8u);
    v83_.v83[0] = 80;
    v83_.v83[1] = v77;
    v83_.v88 = v93_.v94;
    v83_.v89 = DWORD2(v93_.v94);
    v83_.v90 = 1;
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
    cuda_driver_20b420(v78, v79, (__int64)v83_.v83);
  }
  return 0;
}

__int64 cuda_driver_cea0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v9;

  v3 = (__int64*)(*(_QWORD*)a3 + 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12)));
  v5 = *v3;
  v4 = v3[1];
  v6 = *v3 & 0x1FF;
  if ((*v3 & 0x1EF) == 0x149) {
    if (v6 != 330 && v6 != 327) {
      goto LABEL_10;
    }
  }
  else {
    v7 = v6 - 323;
    if (v7 > 0xD) {
      return 0;
    }
    if (((1LL << v7) & 0x2203) != 0) {
      goto LABEL_10;
    }
    if (((1LL << v7) & 0x90) == 0) {
      return 0;
    }
  }
  if ((v5 & 0x300000000LL) != 0) {
    return 0;
  }
LABEL_10:
  v9 = (~(_WORD)v5 & 0x7000) == 0 && (v3[1] & 0x3800000) == 58720256;
  if (v9 || ((v4 >> 41) & 0xF) - 5 < 0xFFFFFFFFFFFFFFFCLL) {
    return 0;
  }
  v3[1] = v4 & 0xFFFFE1FFFFFFFFFFLL | 0xA0000000000LL;
  atomic_fetch_add((atomic_uint* volatile)((char*)&CudaDriverRoutine_4380 +
                                           (_QWORD)CudaDriverData_1422118),
                   1u);
  return 0;
}

__int64 cuda_driver_unplaced_d300(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v10;
  __int64 v11;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  unsigned int v46;
  struct {
    _QWORD v47[2];
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    int v53;
    int v54;
    __int128 v55;
    __int128 v56;
  } v47_;
  struct {
    __int128 v57;
    __int128 v58;
  } v57_;

  v3 = (__int64*)(*(_QWORD*)a3 + 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12)));
  v4 = *v3;
  if ((*v3 & 0x1FF) != 0x15D) {
    return 0;
  }
  v5 = v3[1];
  v6 = *(_QWORD*)(a1 + 16104);
  v47_.v47[0] = 0;
  v10 = *(__int64**)(v6 + 3104);
  v11 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_ba080(v11, *(unsigned int*)(a1 + 188), v10[22], 64,
                                   (__int64)v47_.v47);
  if ((_DWORD)result == 0) {
    atomic_fetch_add((atomic_uint* volatile)((char*)&CudaDriverRoutine_4378 +
                                             (_QWORD)CudaDriverData_1422118),
                     1u);
    v14 = v47_.v47[0];
    v15 = CudaDriverStub_b9660(v10[21]);
    memcpy_plt(v10[23], v15, v10[22]);
    v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 64) + 19448LL))(
        *(_QWORD*)(a2 + 96));
    v17 = *(unsigned int*)(a3 + 12);
    v18 = v16;
    v19 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 19448LL))(v14);
    v20 = v10[26];
    v21 = v10[23];
    v22 = v19;
    v23 = v18 + 16LL * (unsigned int)(v17 + 1) - v19 - v20 - 16;
    v24 = v10[25] & 0xFFFFFFFFFFFC0000LL | HIDWORD(v23) & 0x3FFFF;
    v25 = v10[24] & 0x3FFFFFFFFLL |
          ((unsigned __int64)(unsigned int)(v23 >> 2) << 34);
    v26 = (unsigned __int64*)(v21 + (v20 & 0x7FFFFFFF0LL));
    v10[24] = v25;
    v10[25] = v24;
    *v26 = v25;
    v26[1] = v10[25];
    v27 = v10[29];
    v10[27] = v4;
    v10[28] = v5 | 0x200000;
    v28 = (__int64*)(v21 + (v27 & 0x7FFFFFFF0LL));
    *v28 = v4;
    v28[1] = v10[28];
    result = CudaDriverRoutine_f6230(a1, v14, 0, v10[23], v10[22],
                                     *(_QWORD*)(a1 + 96), 2u, 0);
    if ((_DWORD)result == 0) {
      v29 = v18 + 16 * v17;
      v30 = v22 - v29 - 16;
      v31 = v10[25] & 0xFFFFFFFFFFFC0000LL | HIDWORD(v30) & 0x3FFFF;
      v32 = (unsigned __int16)v4 & 0xF000 |
            ((unsigned __int64)(unsigned int)(v30 >> 2) << 34) |
            v10[24] & 0x3FFFF0FFFLL;
      v33 = 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12));
      *(_QWORD*)(*(_QWORD*)a3 + v33) = v32;
      *(_QWORD*)(*(_QWORD*)a3 + v33 + 8) = v31;
      v57_.v57 = (__typeof__(v57_.v57)){0};
      v57_.v58 = (__typeof__(v57_.v58)){0};
      v47_.v56 = (__typeof__(v47_.v56)){0};
      if (cuda_debugger_api_7cff0()) {
        goto LABEL_10;
      }
      v34 = 16;
      if (*(_DWORD*)(a1 + 188) == 3) {
        v34 = 168;
      }
      v35 = 132;
      v36 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v34);
      if (*(_DWORD*)(a1 + 188) == 3) {
        v35 = 52;
      }
      if (*(_DWORD*)(v36 + v35) != 0) {
      LABEL_10:
        v37 = *(_QWORD*)(a1 + 16104);
        *(_QWORD*)&v57_.v57 = v4;
        *((_QWORD*)&v57_.v57 + 1) = v5;
        *(_QWORD*)&v47_.v56 = a2;
        *((_QWORD*)&v47_.v56 + 1) = v18 + 16 * v17;
        v38 = *(_QWORD*)(*(_QWORD*)(v37 + 3104) + 176LL);
        *(_QWORD*)&v57_.v58 = v22;
        *((_QWORD*)&v57_.v58 + 1) = v38;
        if (!cuda_debugger_api_7cff0()) {
        LABEL_12:
          v40 = *(_DWORD*)(a1 + 188);
          v41 = 16;
          if (v40 == 3) {
            v41 = 168;
          }
          v42 = 132;
          v43 = *(_QWORD*)((char*)&CudaDriverData_1432130 + v41);
          if (v40 == 3) {
            v42 = 52;
          }
          if (*(_DWORD*)(v43 + v42) != 0) {
            v47_.v48 = *(_QWORD*)(v47_.v56 + 32);
            v47_.v49 = v47_.v56;
            v44 = *(_QWORD*)(v47_.v48 + 24);
            v47_.v50 = 0;
            v47_.v51 = *((_QWORD*)&v47_.v56 + 1);
            v47_.v55 = v57_.v57;
            v47_.v47[0] = 80;
            v47_.v47[1] = v44;
            v47_.v52 = v57_.v58;
            v47_.v53 = DWORD2(v57_.v58);
            v47_.v54 = 2;
            if (v40 == 3) {
              v45 = 21;
            }
            else {
              v45 = 2;
            }
            if (v40 == 3) {
              v46 = 13;
            }
            else {
              v46 = 33;
            }
            cuda_driver_20b420(v45, v46, (__int64)v47_.v47);
          }
          return 0;
        }
      }
      else {
        v29 = 0;
        LODWORD(v38) = 0;
        v22 = 0;
        a2 = 0;
        if (!cuda_debugger_api_7cff0()) {
          goto LABEL_12;
        }
      }
      v39 = CudaDriverStub_1db800(*(_QWORD*)(a2 + 96));
      CudaDriverRoutine_7fa50(a1, 512, v39, v22, v38, v29, 0,
                              (__int64)&v57_.v57, 0x10u, 1);
      goto LABEL_12;
    }
  }
  return result;
}

__int64 cuda_driver_d620(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;

  v3 = (_QWORD*)(*(_QWORD*)a3 + 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12)));
  if (((*v3 & 0x1FFLL) == 0x162 || (*v3 & 0x1FELL) == 352) &&
      (v3[1] & 0x3800000LL) == 0x2000000) {
    v3[1] |= 0x3000000uLL;
    atomic_fetch_add((atomic_uint* volatile)((char*)&CudaDriverRoutine_4388 +
                                             (_QWORD)CudaDriverData_1422118),
                     1u);
  }
  return 0;
}

__int64 cuda_driver_d680(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v3;
  __int64 v4;
  char v5;
  unsigned __int64 v6;
  bool v7;

  v3 = (__int64*)(*(_QWORD*)a3 + 8LL * (unsigned int)(2 * *(_DWORD*)(a3 + 12)));
  v4 = *v3;
  v5 = *(_BYTE*)v3 - 67;
  if ((*v3 & 0x1FFuLL) - 323 > 0xD) {
    return 0;
  }
  v6 = v3[1];
  if (((1LL << v5) & 0x2243) == 0 &&
      (((1LL << v5) & 0x90) == 0 || (v4 & 0x300000000LL) != 0)) {
    return 0;
  }
  v7 = (~(_WORD)v4 & 0x7000) == 0 && (v3[1] & 0x3800000) == 58720256;
  if (v7 || ((v6 >> 41) & 0xF) - 5 < 0xFFFFFFFFFFFFFFFCLL) {
    return 0;
  }
  v3[1] = v6 & 0xFFFFE1FFFFFFFFFFLL | 0xA0000000000LL;
  atomic_fetch_add((atomic_uint* volatile)((char*)&CudaDriverRoutine_4380 +
                                           (_QWORD)CudaDriverData_1422118),
                   1u);
  return 0;
}

_DWORD* cuda_driver_e320(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
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
      a1 = (_DWORD*)cuda_driver_misc_helpers_4be0((__int64)a1, a7);
    }
    a3 += v15;
    a4 += v15;
    v14 -= v15;
  } while (v14 != 0);
  return a1;
}

_DWORD* cuda_driver_f6a0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
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

__int64 cuda_driver_11140(__int64 a1, __int64 a2, __int64 a3, bool* a4)
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
        v10 += 31872;
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

__int64 cuda_driver_112a0(__int64 a1, __int64 a2, int a3)
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
      v7 += 31872;
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

void cuda_driver_11b00(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned int v16;
  int32x4_t* v17;
  float* v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  unsigned __int64 v22;
  int32x4_t v23;
  int32x4_t v24;
  _QWORD v25[768];
  _DWORD v26[768];
  float32x4x3_t v27;
  float32x4x3_t v28;

  v9 = 0;
  v2 = *(_QWORD*)(a1 + 64);
  v4 = *(unsigned int*)(v2 + 3732);
  if ((_DWORD)v4 != 0) {
    v5 = *(_QWORD*)(a1 + 16104);
    v6 = v5 + 1048;
    if ((unsigned int)v4 < 0xC ||
        ((unsigned int)(v4 - 1) <= 0x55555554 ? (v7 = (v4 - 1) >> 32 == 0)
                                              : (v7 = false),
         !v7 || v6 < (unsigned __int64)&v26[3 * (unsigned int)v4] &&
                    (unsigned __int64)v26 < v5 + 4 * v4 + 1048)) {
      v8 = 0;
      v9 = 0;
      do {
      LABEL_11:
        v10 = *(_DWORD*)(v6 + 4 * v8);
        v11 = v9 + 1;
        v12 = v9 + 2;
        ++v8;
        v10 += 5261064;
        v26[v9] = v10;
        v9 += 3;
        v26[v11] = v10 + 16;
        v26[v12] = v10 + 8;
      } while (v8 < v4);
      goto LABEL_12;
    }
    v8 = (unsigned int)v4 & 0xFFFFFFF8;
    v17 = (int32x4_t*)(v5 + 1064);
    v9 = 3 * (v4 & 0xFFFFFFF8);
    v18 = (float*)v26;
    v19 = vdupq_n_s32(0x504710u);
    v20 = vdupq_n_s32(0x504708u);
    v21 = vdupq_n_s32(0x504718u);
    v22 = v8;
    do {
      v23 = v17[-1];
      v24 = *v17;
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
  v13 = ((int (*)(__int64, int, unsigned int, _DWORD*, _QWORD*,
                  __int64))CudaDriverStub_10fdf0)(CudaDriverRoutine_98340(a1),
                                                  2, v9, v26, v25, 0);
  if (v13 == 0 && *(_DWORD*)(v2 + 3732) != 0) {
    v14 = 0;
    v15 = 0;
    do {
      ++v14;
      *a2 = v25[v15];
      a2[2] = v25[v15 + 1];
      v16 = v15 + 2;
      v15 += 3;
      a2[6] = v25[v16];
      a2 += 40;
    } while (v14 < *(unsigned int*)(v2 + 3732));
  }
}

__int64 cuda_driver_11ea0(__int64 a1, _BYTE* a2)
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

__int64 cuda_driver_120d0(__int64 a1, __int64 a2)
{
  *(_DWORD*)(CudaDriverStub_1dbab0(a2) + 4) = 0;
  __builtin_arm_dmb(0xFu);
  return 0;
}

__int64 cuda_driver_12100(__int64 a1, __int64 a2, int a3)
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

long double cuda_driver_12bc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  int v16;
  int v17;
  __int64 v18;
  unsigned int* v19;
  unsigned int v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  int8x16_t v26;
  int8x8_t v27;
  int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int8x16_t v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  int v38;
  unsigned __int64 v39;
  int v40;
  int8x16_t v41;
  int v42;
  __int64 v43;
  int8x16_t v45;
  int8x16_t v46;
  __int128 v47;
  __int64 v48;
  _DWORD v49[8];
  struct {
    _QWORD v50[2];
    int8x16_t v51;
    int8x16_t v52;
    __int128 v53;
  } v50_;

  v4 = *(_DWORD*)(a3 + 20);
  v48 = 0;
  *(_OWORD*)v50_.v50 = (__typeof__(*(_OWORD*)v50_.v50)){0};
  v50_.v51 = (__typeof__(v50_.v51)){0};
  v50_.v52 = (__typeof__(v50_.v52)){0};
  v50_.v53 = (__typeof__(v50_.v53)){0};
  *(_DWORD*)(a3 + 20) = v4 & 0x3FFFFFF;
  v9 = *(_DWORD*)(a3 + 44) & 0xFFFCFFFF;
  memset(v49, 0, sizeof(v49));
  *(_DWORD*)(a3 + 44) = v9;
  *(_DWORD*)(a3 + 100) &= ~0x80000u;
  *(_DWORD*)(a3 + 116) &= ~0x80000u;
  *(_DWORD*)(a3 + 212) &= ~0x80000u;
  CudaDriverRoutine_bbd70(a2, &v48);
  v10 = *(_DWORD*)(a3 + 68);
  v11 = HIDWORD(v48) & 0x1FFFF | (*(_DWORD*)(a3 + 196) >> 17 << 17);
  *(_DWORD*)(a3 + 192) = v48;
  *(_DWORD*)(a3 + 196) = v11;
  *(_DWORD*)(a3 + 44) |= 0x44000000u;
  v12 = *(_DWORD*)(a3 + 80);
  *(_DWORD*)(a3 + 92) = *(_DWORD*)(a3 + 92) & 0x7FFFFFF | 0x8000000;
  v13 = *(_DWORD*)(a2 + 392);
  *(_DWORD*)(a3 + 88) = 0;
  *(_DWORD*)(a3 + 80) = v12 & 0xFFFE00FF | ((v13 & 0x1FF) << 8);
  *(_DWORD*)(a3 + 84) = 0;
  *(_BYTE*)(a3 + 72) = 48;
  *(_BYTE*)(a3 + 207) = -122;
  v14 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3888LL);
  v15 = v10 & 0xFFFC0000 |
        (((unsigned __int64)(unsigned int)(v14 - 1) + 8448) / v14 * v14) &
            0x3FFFF;
  *(_DWORD*)(a3 + 68) = v15;
  v16 = v15 & 0xFF03FFFF | ((CudaDriverRoutine_3750(0x4000u, 0) & 0x3F) << 18);
  *(_DWORD*)(a3 + 68) = v16;
  *(_DWORD*)(a3 + 68) =
      v16 & 0x81FFFFFF | ((CudaDriverRoutine_3750(0x19000u, 0) & 0x3F) << 25);
  v17 = *(_DWORD*)(a3 + 80);
  *(_DWORD*)(a3 + 80) =
      v17 & 0xFF81FFFF | ((CudaDriverRoutine_3750(0x4000u, 0) & 0x3F) << 17);
  v18 = CudaDriverStub_112e30(*(_QWORD*)(a1 + 96));
  CudaDriverRoutine_96f20(a1, a2, v18, 0, (__int64)v50_.v50, (__int64)v49);
  v19 = *(unsigned int**)(a1 + 64);
  if (v19[944] != 0) {
    v20 = 1075;
    v21 = 0;
    do {
      while (1) {
        v22 = v50_.v50[v21];
        if (v22 != 0) {
          break;
        }
        *(_DWORD*)(a3 + 4LL * ((unsigned int)(v21 + 640) >> 5)) &= ~(1 << v21);
        v19 = *(unsigned int**)(a1 + 64);
        ++v21;
        v20 += 64;
        if (v21 >= v19[944]) {
          goto LABEL_6;
        }
      }
      v23 = ((v49[v21] + v19[946] - 1) / v19[946] * v19[946]) << 15;
      *(_DWORD*)(a3 + 4LL * ((unsigned int)(v21 + 640) >> 5)) |= 1 << v21;
      *(_DWORD*)(a3 + 4LL * (v20 >> 5)) =
          v23 & 0xFFF80000 | *(_DWORD*)(a3 + 4LL * (v20 >> 5)) & 0x7FFFF;
      *(_DWORD*)(a3 + 4LL * ((v20 - 19) >> 5)) =
          HIDWORD(v22) & 0x1FFFF |
          (*(_DWORD*)(a3 + 4LL * ((v20 - 19) >> 5)) >> 17 << 17);
      *(_DWORD*)(a3 + 4LL * ((v20 - 51) >> 5)) = v22;
      v19 = *(unsigned int**)(a1 + 64);
      ++v21;
      v20 += 64;
    } while (v21 < v19[944]);
  }
LABEL_6:
  *(_DWORD*)(a3 + 4LL * ((v19[2927] + 640) >> 5)) |= 1 << v19[2927];
  v24 =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1075) >>
      5;
  *(_DWORD*)(a3 + 4LL * v24) = *(_DWORD*)(a3 + 4LL * v24) & 0x7FFFF | 0xE000000;
  v25 =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1056) >>
      5;
  *(_DWORD*)(a3 + 4LL * v25) = ((unsigned __int64)(a4 + 2048) >> 32) & 0x1FFFF |
                               (*(_DWORD*)(a3 + 4LL * v25) >> 17 << 17);
  *(_DWORD*)(a3 +
             4LL * ((unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL)
                                    << 6) +
                                   1024) >>
                    5)) = a4 + 2048;
  *(_WORD*)(a3 + 74) = 32;
  LANES128(v26).n128_u64[0] = *(_QWORD*)(a3 + 8);
  PSEUDO_LOW_LANE64(v27, n64_u64, *(unsigned __int64*)(a3 + 16));
  *(_DWORD*)(a3 + 76) = 65537;
  LOBYTE(v25) = *(_BYTE*)(a3 + 203);
  *(_DWORD*)(a3 + 92) =
      *(_DWORD*)(a1 + 1276) & 0xFFFFFF | (*(unsigned __int8*)(a3 + 95) << 24);
  v28 = *(_DWORD*)(a1 + 1280) & 0xFFFFFF | ((unsigned __int8)v25 << 24);
  v29 = *(_DWORD*)(a3 + 44);
  *(_DWORD*)(a3 + 200) = v28;
  v30 = *(_DWORD*)(a3 + 100) & 0xFF7FFFFF;
  *(_QWORD*)(a3 + 44) = (v29 & 0xFFF74000) + 557056;
  *(_DWORD*)(a3 + 100) = v30;
  *(_DWORD*)(a3 + 116) &= ~0x800000u;
  v31 = *(_DWORD*)(a3 + 4) & 0x80000000 | 0xFFFFF;
  *(_DWORD*)a3 &= 0x80000000;
  *(_DWORD*)(a3 + 4) = v31;
  *(_DWORD*)(a3 + 64) = (*(_DWORD*)(a3 + 64) & 0xFF8003FF) + 1327104;
  *(int8x8_t*)&LANES128(v26).n128_i8[8] =
      vand_s8(v27, COERCE_AS(int8x8_t, 0xFE000000FFFFFEC0LL));
  LANES128(v32).n128_u64[0] = 0x8000000080000000LL;
  LANES128(v32).n128_u64[1] = 0x8000000080000000LL;
  LANES128(v32).n128_u64[0] = LANES128_OF(vandq_s8(v26, v32)).n128_u64[0];
  LANES128(v32).n128_u64[1] =
      LANES128_OF(vorrq_s8(v26, COERCE_AS(int8x16_t, CudaDriverData_1115760)))
          .n128_u64[1];
  LANES128(v26).n128_u64[0] = *(_QWORD*)(a3 + 52);
  *(int8x16_t*)(a3 + 8) = v32;
  *(int8x8_t*)(a3 + 52) =
      vand_s8(COERCE_AS(int8x8_t, LANES128(v26).n128_u64[0]),
              COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL));
  v33 = CudaDriverRoutine_98340(a1);
  v34 = v48;
  v35 = v33;
  v36 = CudaDriverRoutine_15d80(v33);
  v37 = CudaDriverRoutine_13b30(v35);
  v38 = v37;
  v39 = HIDWORD(v37);
  v40 = CudaDriverRoutine_15fd0(a2);
  PSEUDO_LOW_LANE128(v41, n128_u64, v50_.v53);
  v42 = v40;
  v46 = vextq_s8(v50_.v51, v50_.v52, 8u);
  v47 = *(_OWORD*)v50_.v50;
  v45 = vextq_s8(v50_.v52, v41, 8u);
  v43 = CudaDriverStub_1db800(*(_QWORD*)(v35 + 2232));
  *(_QWORD*)(a3 + 2072) = v36;
  *(_DWORD*)(a3 + 2080) = v38;
  *(_DWORD*)(a3 + 2084) = v39;
  *(_DWORD*)(a3 + 2088) = v42;
  *(_DWORD*)(a3 + 2092) = 0;
  *(_QWORD*)(a3 + 2104) = a4;
  *(_QWORD*)(a3 + 2352) = 0;
  *(_QWORD*)(a3 + 2360) = v43;
  *(_QWORD*)(a3 + 8288) = v34;
  *(_QWORD*)(a3 + 8312) = 0;
  *(_QWORD*)(a3 + 1088) = a4 + 2048;
  *(_QWORD*)(a3 + 2064) = 0x100000001LL;
  *(int8x16_t*)(a3 + 2128) = v46;
  *(int8x16_t*)(a3 + 2144) = v45;
  *(_QWORD*)(a3 + 2096) = -4;
  *(_OWORD*)(a3 + 2112) = v47;
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

_DWORD* cuda_driver_13280(__int64 a1, _DWORD** a2, __int64 a3)
{
  _DWORD* v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int16 v14;
  int v15;
  unsigned __int64 v16;
  int v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned int* v22;
  unsigned __int64 v23;
  unsigned int v24;
  unsigned __int64 i;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned __int8 v33;
  int v34;
  unsigned __int8 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  _DWORD* result;
  __int64 (*v43)(_DWORD*, __int64, _QWORD, _QWORD*, __int64, __int64);
  __int64 v44;
  _DWORD* v45;
  struct {
    _QWORD v46[2];
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
  } v46_;
  __int64 v62;
  _DWORD v63[8];
  _QWORD v64[10];

  v3 = *a2;
  memset(v63, 0, sizeof(v63));
  memset(v64, 0, 64);
  v7 = *(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072);
  v62 = 0;
  v8 = *(_QWORD*)(v7 + 392);
  v9 = *(_QWORD*)(a3 + 136);
  *(_OWORD*)v46_.v46 = (__typeof__(*(_OWORD*)v46_.v46)){0};
  v46_.v47 = (__typeof__(v46_.v47)){0};
  v46_.v48 = (__typeof__(v46_.v48)){0};
  v46_.v49 = (__typeof__(v46_.v49)){0};
  v10 = *(_QWORD*)(v9 + 192);
  v11 = *(_QWORD*)(a1 + 64);
  v46_.v50 = (__typeof__(v46_.v50)){0};
  v46_.v51 = (__typeof__(v46_.v51)){0};
  v12 = *(unsigned int*)(v11 + 11708);
  v46_.v52 = (__typeof__(v46_.v52)){0};
  v46_.v53 = (__typeof__(v46_.v53)){0};
  v46_.v54 = (__typeof__(v46_.v54)){0};
  v46_.v55 = (__typeof__(v46_.v55)){0};
  v46_.v56 = (__typeof__(v46_.v56)){0};
  v46_.v57 = (__typeof__(v46_.v57)){0};
  v13 = *(_QWORD*)(a3 + 8 * v12 + 40);
  v46_.v58 = (__typeof__(v46_.v58)){0};
  v46_.v59 = (__typeof__(v46_.v59)){0};
  v46_.v60 = (__typeof__(v46_.v60)){0};
  v46_.v61 = (__typeof__(v46_.v61)){0};
  *(_QWORD*)&v46_.v47 = 0x3C00000000001000LL;
  CudaDriverRoutine_bbd70(v8, &v62);
  v14 = *(_DWORD*)(v8 + 392);
  DWORD2(v46_.v51) = 0;
  v15 = (v14 & 0x1FF) << 8;
  *(_QWORD*)&v46_.v58 = v62 & 0x1FFFFFFFFFFFFLL;
  DWORD2(v46_.v50) = 36;
  DWORD3(v46_.v48) = 1141047296;
  DWORD1(v46_.v53) = 0x8000000;
  DWORD3(v46_.v53) = -2113929216;
  v16 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3888LL);
  v17 = ((unsigned __int64)(unsigned int)(v16 - 1) + 8448) / v16 * v16;
  v18 = (CudaDriverRoutine_3750(0x4000u, 0) & 0x7F) << 18;
  DWORD1(v46_.v50) = v18 & 0x3FC0000 |
                     ((unsigned int)CudaDriverRoutine_3750(0x29000u, 0) << 25) |
                     v17 & 0x3FFFF;
  v19 = v15 & 0x1FFFF | ((CudaDriverRoutine_3750(0x4000u, 0) & 0x7F) << 17);
  v20 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)&v46_.v51 = v19;
  v21 = CudaDriverStub_112e30(v20);
  CudaDriverRoutine_96f20(a1, v8, v21, 0, (__int64)v64, (__int64)v63);
  v22 = *(unsigned int**)(a1 + 64);
  v23 = v22[944];
  if ((_DWORD)v23 != 0) {
    v24 = 1075;
    for (i = 0; i < v23; ++i) {
      while (1) {
        v26 = v64[i];
        if (v26 != 0) {
          break;
        }
        *((_DWORD*)v46_.v46 + ((unsigned int)(i + 640) >> 5)) &= ~(1 << i);
        ++i;
        v24 += 64;
        if (i >= v23) {
          goto LABEL_6;
        }
      }
      v27 = ((v63[i] + v22[946] - 1) / v22[946] * v22[946]) << 15;
      *((_DWORD*)v46_.v46 + ((unsigned int)(i + 640) >> 5)) |= 1 << i;
      *((_DWORD*)v46_.v46 + (v24 >> 5)) =
          v27 & 0xFFF80000 | *((_DWORD*)v46_.v46 + (v24 >> 5)) & 0x7FFFF;
      *((_DWORD*)v46_.v46 + ((v24 - 19) >> 5)) =
          HIDWORD(v26) & 0x1FFFF |
          (*((_DWORD*)v46_.v46 + ((v24 - 19) >> 5)) >> 17 << 17);
      *((_DWORD*)v46_.v46 + ((v24 - 51) >> 5)) = v26;
      v24 += 64;
    }
  }
LABEL_6:
  v28 = v22[2927];
  v29 = v28 + 640;
  v30 = 1 << v28;
  v28 <<= 6;
  *((_DWORD*)v46_.v46 + (v29 >> 5)) |= v30;
  *((_DWORD*)v46_.v46 + ((v28 + 1075) >> 5)) =
      *((_DWORD*)v46_.v46 + ((v28 + 1075) >> 5)) & 0x7FFFF | 0xE000000;
  v31 = (v28 + 1056) >> 5;
  v32 = *((_DWORD*)v46_.v46 + v31);
  *((_DWORD*)v46_.v46 + ((v28 + 1024) >> 5)) = v13;
  *((_DWORD*)v46_.v46 + v31) = HIDWORD(v13) & 0x1FFFF | (v32 >> 17 << 17);
  WORD5(v46_.v50) = 1;
  DWORD3(v46_.v50) = 65537;
  v33 = BYTE7(v46_.v53);
  v34 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1276) & 0xFFFFFF | (v33 << 24);
  v35 = BYTE11(v46_.v53);
  DWORD1(v46_.v53) = v34;
  v36 = CudaDriverRoutine_98340(a1);
  v37 = v46_.v47;
  DWORD2(v46_.v53) = *(_DWORD*)(v36 + 1280) & 0xFFFFFF | (v35 << 24);
  v38 = CudaDriverStub_1223e0(*(_QWORD*)(v10 + 24));
  v39 = v46_.v52;
  v40 = v38;
  v41 = CudaDriverStub_8e230(v10);
  DWORD3(v46_.v51) = v40;
  LODWORD(v46_.v49) = 1;
  LODWORD(v46_.v52) = v39 & 0x7B8FFF00 | 0x84000000 | BYTE4(v40);
  DWORD1(v46_.v52) = v41;
  LODWORD(v46_.v47) = v37 & 0xFFFFF2C0 | 0x400;
  *(_QWORD*)((char*)&v46_.v49 + 4) =
      LANES64_OF(vand_s8(*(int8x8_t*)((char*)&v46_.v49 + 4),
                         COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL)))
          .n64_u64[0] |
      0x100000001LL;
  if (*(_BYTE*)(*(_QWORD*)(CudaDriverRoutine_98340(a1) + 16104) + 3096LL) !=
          0 &&
      *(_BYTE*)(a3 + 196) != 0) {
    result =
        CudaDriverRoutine_19180(v3, *(_QWORD*)(v10 + 8), (__int64)v46_.v46);
  }
  else {
    v43 = *(__int64 (**)(_DWORD*, __int64, _QWORD, _QWORD*, __int64, __int64))(
        *(_QWORD*)(a1 + 64) + 19248LL);
    v44 = CudaDriverRoutine_98340(a1);
    v45 = (_DWORD*)v43(v3, v44, *(_QWORD*)(v10 + 8), v46_.v46, 256, 2);
    result = cuda_driver_misc_helpers_19130(v45, *(_QWORD*)(v10 + 8), 1u);
  }
  *a2 = result;
  return result;
}

_DWORD* cuda_driver_13660(__int64 a1, _DWORD** a2, __int64 a3)
{
  _DWORD* v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int16 v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  unsigned int* v22;
  unsigned int v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned __int8 v29;
  int v30;
  unsigned __int8 v31;
  int v32;
  __int64 v33;
  int v34;
  _DWORD* result;
  __int64 (*v36)(_DWORD*, __int64, _QWORD, _QWORD*, __int64, __int64);
  __int64 v37;
  _DWORD* v38;
  struct {
    _QWORD v39[2];
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
  } v39_;
  __int64 v55;
  _DWORD v56[8];
  _QWORD v57[8];

  v3 = *a2;
  memset(v56, 0, sizeof(v56));
  memset(v57, 0, sizeof(v57));
  v7 = *(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072);
  v55 = 0;
  v8 = *(_QWORD*)(v7 + 392);
  v9 = *(_QWORD*)(a3 + 136);
  *(_OWORD*)v39_.v39 = (__typeof__(*(_OWORD*)v39_.v39)){0};
  v39_.v40 = (__typeof__(v39_.v40)){0};
  v39_.v41 = (__typeof__(v39_.v41)){0};
  v39_.v42 = (__typeof__(v39_.v42)){0};
  v10 = *(_QWORD*)(v9 + 192);
  v11 = *(_QWORD*)(a1 + 64);
  v39_.v43 = (__typeof__(v39_.v43)){0};
  v39_.v44 = (__typeof__(v39_.v44)){0};
  v12 = *(unsigned int*)(v11 + 11708);
  v39_.v45 = (__typeof__(v39_.v45)){0};
  v39_.v46 = (__typeof__(v39_.v46)){0};
  v39_.v47 = (__typeof__(v39_.v47)){0};
  v39_.v48 = (__typeof__(v39_.v48)){0};
  v39_.v49 = (__typeof__(v39_.v49)){0};
  v39_.v50 = (__typeof__(v39_.v50)){0};
  v13 = *(_QWORD*)(a3 + 8 * v12 + 40);
  DWORD1(v39_.v46) = 0;
  v39_.v51 = (__typeof__(v39_.v51)){0};
  v39_.v52 = (__typeof__(v39_.v52)){0};
  v39_.v53 = (__typeof__(v39_.v53)){0};
  v39_.v54 = (__typeof__(v39_.v54)){0};
  *(_QWORD*)&v39_.v40 = 0x3C00000000001000LL;
  CudaDriverRoutine_bbd70(v8, &v55);
  *(_QWORD*)&v39_.v51 = v55 & 0x1FFFFFFFFFFFFLL;
  HIDWORD(v39_.v41) = 1141047296;
  v14 = *(_DWORD*)(v8 + 392);
  HIDWORD(v39_.v44) = 0x8000000;
  v15 = (v14 & 0x1FF) << 8;
  BYTE8(v39_.v43) = 48;
  HIBYTE(v39_.v51) = -122;
  v16 = *(_QWORD*)(a1 + 64);
  LODWORD(v39_.v44) = v15;
  *(_QWORD*)((char*)&v39_.v44 + 4) = 0;
  v17 = (((unsigned __int64)(unsigned int)(*(_DWORD*)(v16 + 3888) - 1) + 8448) /
         *(unsigned int*)(v16 + 3888) * *(_DWORD*)(v16 + 3888)) &
        0x3FFFF;
  v18 = v17 | ((CudaDriverRoutine_3750(0x4000u, 0) & 0x3F) << 18);
  DWORD1(v39_.v43) = v18 | ((CudaDriverRoutine_3750(0x19000u, 0) & 0x3F) << 25);
  v19 = v39_.v44 & 0xFF81FFFF |
        ((CudaDriverRoutine_3750(0x4000u, 0) & 0x3F) << 17);
  v20 = *(_QWORD*)(a1 + 96);
  LODWORD(v39_.v44) = v19;
  v21 = CudaDriverStub_112e30(v20);
  CudaDriverRoutine_96f20(a1, v8, v21, 0, (__int64)v57, (__int64)v56);
  v22 = *(unsigned int**)(a1 + 64);
  if (v22[944] != 0) {
    v23 = 1075;
    v24 = 0;
    do {
      while (1) {
        v25 = v57[v24];
        if (v25 != 0) {
          break;
        }
        *((_DWORD*)v39_.v39 + ((unsigned int)(v24 + 640) >> 5)) &= ~(1 << v24);
        ++v24;
        v23 += 64;
        if (v24 >= v22[944]) {
          goto LABEL_6;
        }
      }
      v26 = ((v56[v24] + v22[946] - 1) / v22[946] * v22[946]) << 15;
      *((_DWORD*)v39_.v39 + ((unsigned int)(v24 + 640) >> 5)) |= 1 << v24;
      *((_DWORD*)v39_.v39 + (v23 >> 5)) =
          v26 & 0xFFF80000 | *((_DWORD*)v39_.v39 + (v23 >> 5)) & 0x7FFFF;
      *((_DWORD*)v39_.v39 + ((v23 - 19) >> 5)) =
          HIDWORD(v25) & 0x1FFFF |
          (*((_DWORD*)v39_.v39 + ((v23 - 19) >> 5)) >> 17 << 17);
      *((_DWORD*)v39_.v39 + ((v23 - 51) >> 5)) = v25;
      ++v24;
      v23 += 64;
    } while (v24 < v22[944]);
  }
LABEL_6:
  *((_DWORD*)v39_.v39 + ((v22[2927] + 640) >> 5)) |= 1 << v22[2927];
  v27 = ((v22[2927] << 6) + 1075) >> 5;
  *((_DWORD*)v39_.v39 + v27) = *((_DWORD*)v39_.v39 + v27) & 0x7FFFF | 0xE000000;
  v28 = ((v22[2927] << 6) + 1056) >> 5;
  *((_DWORD*)v39_.v39 + v28) =
      HIDWORD(v13) & 0x1FFFF | (*((_DWORD*)v39_.v39 + v28) >> 17 << 17);
  *((_DWORD*)v39_.v39 + (((v22[2927] << 6) + 1024) >> 5)) = v13;
  WORD5(v39_.v43) = 1;
  v29 = HIBYTE(v39_.v44);
  HIDWORD(v39_.v43) = 65537;
  v30 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1276) & 0xFFFFFF | (v29 << 24);
  v31 = BYTE11(v39_.v51);
  HIDWORD(v39_.v44) = v30;
  v32 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1280) & 0xFFFFFF | (v31 << 24);
  LODWORD(v39_.v40) = v39_.v40 & 0xFFFFFFC0;
  DWORD2(v39_.v51) = v32;
  v33 = CudaDriverStub_1223e0(*(_QWORD*)(v10 + 24));
  DWORD1(v39_.v45) = DWORD1(v39_.v45) & 0x1B0FFFFF | 0x44800000;
  v34 = CudaDriverStub_8e230(v10);
  LODWORD(v39_.v45) = v33;
  DWORD2(v39_.v45) = v34;
  BYTE4(v39_.v45) = BYTE4(v33);
  LODWORD(v39_.v42) = 1;
  DWORD1(v39_.v46) &= ~0x800000u;
  LODWORD(v39_.v40) = v39_.v40 & 0xFFFFFEFF;
  *(_QWORD*)((char*)&v39_.v42 + 4) =
      LANES64_OF(vand_s8(*(int8x8_t*)((char*)&v39_.v42 + 4),
                         COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL)))
          .n64_u64[0] |
      0x100000001LL;
  if (*(_BYTE*)(*(_QWORD*)(CudaDriverRoutine_98340(a1) + 16104) + 3096LL) !=
          0 &&
      *(_BYTE*)(a3 + 196) != 0) {
    result =
        CudaDriverRoutine_19180(v3, *(_QWORD*)(v10 + 8), (__int64)v39_.v39);
  }
  else {
    v36 = *(__int64 (**)(_DWORD*, __int64, _QWORD, _QWORD*, __int64, __int64))(
        *(_QWORD*)(a1 + 64) + 19248LL);
    v37 = CudaDriverRoutine_98340(a1);
    v38 = (_DWORD*)v36(v3, v37, *(_QWORD*)(v10 + 8), v39_.v39, 256, 2);
    result = cuda_driver_misc_helpers_19130(v38, *(_QWORD*)(v10 + 8), 1u);
  }
  *a2 = result;
  return result;
}

__int64 cuda_driver_13b70(__int64 a1, __int64 a2, unsigned int a3, int a4,
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

__int64 cuda_driver_13dd0(__int64 a1, unsigned int* a2, unsigned __int64* a3,
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

__int64 cuda_driver_13f10(__int64 a1, int a2, int a3, unsigned int* a4,
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

__int64 cuda_driver_15030(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  if (*((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118) == 0) {
    v1 = *(unsigned int*)(a1 + 36);
    if ((unsigned int)v1 > 4) {
      return 1;
    }
    v2 = *(_DWORD*)(a1 + 40);
    v3 = CudaDriverData_1130110[v1];
    v4 = 1;
    *(_DWORD*)(a1 + 56) = v3;
    if (v2 <= 1) {
      if (v2 == 0) {
        goto LABEL_15;
      }
      if (v2 != 1) {
        return v4;
      }
      v5 = 16;
    }
    else {
      switch (v2) {
      case 4:
        v5 = 32;
        break;
      case 3:
        v5 = 24;
        break;
      case 2:
        v5 = 8;
        break;
      default:
        return v4;
      }
    }
    v3 |= v5;
    *(_DWORD*)(a1 + 56) = v3;
  LABEL_15:
    v7 = *(_DWORD*)(a1 + 44);
    v4 = 1;
    if (v7 <= 1) {
      if (v7 == 0) {
        goto LABEL_25;
      }
      if (v7 == 1) {
        v3 |= 0x80u;
        goto LABEL_25;
      }
    }
    else {
      switch (v7) {
      case 2:
        v3 |= 0x40u;
        goto LABEL_25;
      case 3:
        v3 |= 0xC0u;
        goto LABEL_25;
      case 4:
        v3 |= 0x100u;
      LABEL_25:
        v8 = v3 | 0x2000;
        if (*(_DWORD*)(a1 + 48) == 1) {
          v9 = 98;
        }
        else {
          v9 = 81;
        }
        *(_DWORD*)(a1 + 56) = v8;
        *(_DWORD*)(a1 + 60) = v9;
        if (*(_BYTE*)(a1 + 52) != 0) {
          *(_DWORD*)(a1 + 60) = v9 | 0x2000000;
        }
        v4 = 0;
        *(_QWORD*)(a1 + 72) = 0;
        *(_QWORD*)(a1 + 80) = 0;
        *(_QWORD*)(a1 + 64) = &CudaDriverData_f00000;
        break;
      default:
        break;
      }
    }
    return v4;
  }
  v10 = *(_DWORD*)(a1 + 36);
  v11 = *(_DWORD*)(a1 + 40);
  *(_OWORD*)(a1 + 128) = (__typeof__(*(_OWORD*)(a1 + 128))){0};
  *(_OWORD*)(a1 + 144) = (__typeof__(*(_OWORD*)(a1 + 144))){0};
  *(_OWORD*)(a1 + 160) = (__typeof__(*(_OWORD*)(a1 + 160))){0};
  *(_OWORD*)(a1 + 176) = (__typeof__(*(_OWORD*)(a1 + 176))){0};
  *(_BYTE*)(a1 + 164) = v10;
  *(_BYTE*)(a1 + 165) = v11;
  v12 = *(_DWORD*)(a1 + 48);
  *(_BYTE*)(a1 + 166) = *(_DWORD*)(a1 + 44);
  *(_DWORD*)(a1 + 172) = v12 == 1;
  *(_BYTE*)(a1 + 176) = *(_BYTE*)(a1 + 52);
  *(_BYTE*)(a1 + 177) = 1;
  *(_DWORD*)(a1 + 140) = 1164967936;
  return 0;
}

__int64 cuda_driver_15c20(__int64 result, unsigned __int64 a2, unsigned int a3)
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

__int64 cuda_driver_15dc0(__int64 a1)
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

__int64 cuda_driver_191d0(__int64 a1, _DWORD** a2, __int64 a3)
{
  __int64 v3;
  _DWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _DWORD* v11;
  _DWORD* v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v16[8];
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
  } v16_;

  v3 = *(_QWORD*)(a3 + 136);
  v6 = *a2;
  v7 = *(_QWORD*)(v3 + 56);
  memset(v16_.v16, 0, sizeof(v16_.v16));
  v8 = *(_QWORD*)(v3 + 72);
  v16_.v17 = (__typeof__(v16_.v17)){0};
  v16_.v18 = (__typeof__(v16_.v18)){0};
  v16_.v19 = (__typeof__(v16_.v19)){0};
  v16_.v20 = (__typeof__(v16_.v20)){0};
  v16_.v21 = (__typeof__(v16_.v21)){0};
  v16_.v22 = (__typeof__(v16_.v22)){0};
  v16_.v23 = (__typeof__(v16_.v23)){0};
  v16_.v24 = (__typeof__(v16_.v24)){0};
  v16_.v25 = (__typeof__(v16_.v25)){0};
  v16_.v26 = (__typeof__(v16_.v26)){0};
  v16_.v27 = (__typeof__(v16_.v27)){0};
  v16_.v28 = (__typeof__(v16_.v28)){0};
  v9 = *(_QWORD*)(v7 + 8);
  *(_QWORD*)((char*)&v16_.v16[5] + 4) = 0x40000000;
  LODWORD(v16_.v18) = 2048;
  LODWORD(v16_.v25) = 0;
  *((_QWORD*)&v16_.v18 + 1) = 0;
  LODWORD(v16_.v16[4]) = 0;
  DWORD1(v16_.v19) = 0;
  DWORD1(v16_.v20) = 0;
  DWORD1(v16_.v26) = 0;
  *((_QWORD*)&v16_.v25 + 1) = 0;
  LODWORD(v16_.v16[7]) = 0;
  HIDWORD(v16_.v16[7]) = v9 >> 8;
  LODWORD(v16_.v16[2]) = 1073774592;
  LODWORD(v9) = *(unsigned __int8*)(*(_QWORD*)(a1 + 16104) + 3096LL);
  v16_.v17 = CudaDriverData_11155a0;
  if ((_DWORD)v9 != 0 && *(_BYTE*)(a3 + 196) != 0) {
    v10 = *(_QWORD*)(v8 + 8);
    v11 = v6;
    *v6 = 541204678;
    v6[1] = v10 >> 40;
    v6[2] = v10 >> 8;
    CudaDriverStub_640d0(v6 + 3, v16_.v16, 256);
    v12 = v11 + 67;
  }
  else {
    v13 = (*(__int64 (**)(_DWORD*, __int64, _QWORD, _QWORD*, __int64, __int64))(
        *(_QWORD*)(a1 + 64) + 19248LL))(v6, a1, *(_QWORD*)(v8 + 8), v16_.v16,
                                        256, 2);
    v14 = *(_QWORD*)(v8 + 8) >> 8;
    *(_DWORD*)v13 = 536944813;
    *(_DWORD*)(v13 + 4) = v14;
    v12 = (_DWORD*)(v13 + 16);
    *(_QWORD*)(v13 + 8) = 0x3200120B0LL;
  }
  *(_BYTE*)(v3 + 80) = 1;
  *a2 = v12;
  return 0;
}

__int64 cuda_driver_19720(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  _WORD* v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  _WORD* v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  uint32x2_t v41;
  __int64 v42;
  void* v43;
  unsigned int v44;
  unsigned __int16 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned int v53;
  bool v54;
  __int64 v55;
  unsigned __int8 v56;
  __int64 v57;
  int v58;
  unsigned __int8 v59;
  __int64 v60;
  int v61;
  int v62;
  unsigned __int8 v63;
  int v64;
  unsigned int v65;
  int v66;
  int v67;
  __int64 v68;
  unsigned int v69;
  unsigned int v70;
  uint32x2_t v71;
  __int64 v72;
  unsigned int v73;
  unsigned __int16 v74;
  __int64 v75;
  unsigned int v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  unsigned int v81;
  bool v82;
  __int64 v83;
  unsigned __int8 v84;
  __int64 v85;
  int v86;
  unsigned __int8 v87;
  int v88;
  int v89;
  unsigned __int8 v90;
  int v91;
  unsigned int v92;
  int v93;
  __int64 v94;
  int v96;
  int v97;
  unsigned int v98;
  unsigned int v99;
  __int64 v100;
  __int64 v101;
  int v102;
  int v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  int v109;
  int v110;
  __int64 v111;

  v3 = *(_QWORD*)(a3 + 16);
  v5 = a2;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3384LL) != 50880) {
    v14 = *(_QWORD*)(a3 + 8);
    v111 = 0;
    v15 = CudaDriverRoutine_bbdf0(a2);
    v16 = v3 + 512;
    if (!v15) {
      v16 = 0;
    }
    v104 = v16;
    if (*(_BYTE*)(a3 + 201) == 0) {
      *(_OWORD*)v14 = (__typeof__(*(_OWORD*)v14)){0};
      *(_OWORD*)(v14 + 16) = (__typeof__(*(_OWORD*)(v14 + 16))){0};
      *(_OWORD*)(v14 + 32) = (__typeof__(*(_OWORD*)(v14 + 32))){0};
      *(_OWORD*)(v14 + 48) = (__typeof__(*(_OWORD*)(v14 + 48))){0};
      *(_OWORD*)(v14 + 64) = (__typeof__(*(_OWORD*)(v14 + 64))){0};
      *(_OWORD*)(v14 + 80) = (__typeof__(*(_OWORD*)(v14 + 80))){0};
      *(_OWORD*)(v14 + 96) = (__typeof__(*(_OWORD*)(v14 + 96))){0};
      *(_OWORD*)(v14 + 112) = (__typeof__(*(_OWORD*)(v14 + 112))){0};
      *(_OWORD*)(v14 + 128) = (__typeof__(*(_OWORD*)(v14 + 128))){0};
      *(_OWORD*)(v14 + 144) = (__typeof__(*(_OWORD*)(v14 + 144))){0};
      *(_OWORD*)(v14 + 160) = (__typeof__(*(_OWORD*)(v14 + 160))){0};
      *(_OWORD*)(v14 + 176) = (__typeof__(*(_OWORD*)(v14 + 176))){0};
      *(_OWORD*)(v14 + 192) = (__typeof__(*(_OWORD*)(v14 + 192))){0};
      *(_OWORD*)(v14 + 208) = (__typeof__(*(_OWORD*)(v14 + 208))){0};
      *(_OWORD*)(v14 + 224) = (__typeof__(*(_OWORD*)(v14 + 224))){0};
      *(_OWORD*)(v14 + 240) = (__typeof__(*(_OWORD*)(v14 + 240))){0};
      if (CudaDriverStub_b9300(v5)) {
        memset_plt(*(_QWORD*)(a3 + 16), 0, 2048);
      }
    }
    if (*(_BYTE*)(a3 + 198) != 0) {
      *(_DWORD*)(v14 + 16) |= 0x1000u;
    }
    if (*(_BYTE*)(a3 + 199) != 0) {
      *(_DWORD*)(v14 + 16) |= 0x40000000u;
    }
    v17 = (_WORD*)(v5 + 977);
    if (*(_BYTE*)(a3 + 202) != 0) {
      v18 = 0x2000000;
    }
    else {
      v18 = 0;
    }
    v19 = v18 | *(_DWORD*)(v14 + 20) & 0x81FFFFFF;
    v20 = v19 | 0x3C000000;
    v21 = v19 | 0xBC000000;
    *(_DWORD*)(v14 + 20) = v20;
    v22 = v20 & 0x3FFFFFFF;
    if (*(_BYTE*)(a3 + 207) == 0) {
      v21 = v22;
    }
    *(_DWORD*)(v14 + 20) = v21;
    if ((*v17 & 0x1000) != 0) {
      v23 = *(_DWORD*)(v14 + 44) & 0xFFFCFFFF;
    }
    else if (*(_BYTE*)(a3 + 206) != 0) {
      v23 = *(_DWORD*)(v14 + 44) | 0x30000;
    }
    else {
      v97 = *(_DWORD*)(v14 + 44);
      if ((*(_BYTE*)(*(_QWORD*)(a1 + 64) + 17097LL) & 1) != 0) {
        *(_DWORD*)(v14 + 44) = v97 | 0x30000;
        v30 = *(_DWORD*)(v14 + 100) | 0x80000;
      LABEL_44:
        *(_DWORD*)(v14 + 100) = v30;
        *(_DWORD*)(v14 + 116) &= ~0x80000u;
        *(_DWORD*)(v14 + 212) &= ~0x80000u;
        if (CudaDriverRoutine_bbe30(v5)) {
          v31 = CudaDriverRoutine_98340(a1);
          v32 = *(_DWORD*)(v14 + 196);
          *(_DWORD*)(v14 + 192) = *(_QWORD*)(v31 + 2392);
          v33 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2396);
        LABEL_46:
          *(_DWORD*)(v14 + 196) = v32 & 0xFFFE0000 | v33 & 0x1FFFF;
          goto LABEL_47;
        }
        if ((*v17 & 8) != 0) {
          CudaDriverRoutine_928b0(v5, &v110, &v109);
          v99 = *(_DWORD*)(v14 + 196) & 0xFFFE0000 | v109 & 0x1FFFF;
          *(_DWORD*)(v14 + 192) = v110;
          *(_DWORD*)(v14 + 196) = v99;
        }
        else {
          if (*(_BYTE*)(a3 + 204) != 0 && *(_BYTE*)(a3 + 205) != 0) {
            v38 = CudaDriverRoutine_98340(a1);
            v32 = *(_DWORD*)(v14 + 196);
            *(_DWORD*)(v14 + 192) = *(_QWORD*)(v38 + 2408);
            v33 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2412);
            goto LABEL_46;
          }
          if (*(_DWORD*)(v5 + 404) != 0) {
            v101 = CudaDriverRoutine_98340(a1);
            v32 = *(_DWORD*)(v14 + 196);
            *(_DWORD*)(v14 + 192) = *(_QWORD*)(v101 + 2424);
            v33 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2428);
            goto LABEL_46;
          }
          CudaDriverRoutine_bbd70(v5, &v111);
          v103 = HIDWORD(v111) & 0x1FFFF | (*(_DWORD*)(v14 + 196) >> 17 << 17);
          *(_DWORD*)(v14 + 192) = v111;
          *(_DWORD*)(v14 + 196) = v103;
        }
      LABEL_47:
        v34 = *(_DWORD*)(v14 + 44);
        *(_DWORD*)(v14 + 44) = v34 | 0x4000000;
        v35 = *(_DWORD*)(*(_QWORD*)(v5 + 32) + 276LL);
        if (v35 != 0) {
          if (v35 == 2) {
            v36 = v34 & 0xBBFFFFFF | 0x4000000;
          }
          else {
            if (v35 != 1) {
              return 0;
            }
            v36 = v34 | 0x44000000;
          }
          *(_DWORD*)(v14 + 44) = v36;
        }
        v107 = v3;
        v69 = *(_DWORD*)(v14 + 608);
        v70 = *(_DWORD*)(v14 + 620);
        PSEUDO_LOW_LANE64(v71, n64_u64, *(unsigned __int64*)(v14 + 612));
        *(_DWORD*)(v14 + 48) = *(_DWORD*)(a3 + 156);
        *(_WORD*)(v14 + 52) = *(_DWORD*)(a3 + 160);
        *(_WORD*)(v14 + 56) = *(_DWORD*)(a3 + 164);
        if (CudaDriverRoutine_bbdf0(v5)) {
          if (v69 <= 0x100) {
            v69 = 256;
          }
          if (v70 <= 0x8000) {
            v70 = 0x8000;
          }
          LANES64(v71).n64_u64[0] =
              LANES64_OF(vmax_u32(v71, COERCE_AS(uint32x2_t, 0x800000008000LL)))
                  .n64_u64[0];
        }
        v72 = a1;
        v73 = *(_DWORD*)(v14 + 68) & 0xFFFC0000 | v69 & 0x3FFFF;
        *(_DWORD*)(v14 + 68) = v73;
        if (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118 +
              3) != 0) {
          *(_DWORD*)(v14 + 620) = v70;
          *(uint32x2_t*)(v14 + 612) = v71;
        }
        else {
          *(_DWORD*)(v14 + 68) = v73 & 0x8103FFFF;
          *(_DWORD*)(v14 + 80) &= 0xFF81FFFF;
        }
        *(_WORD*)(v14 + 74) = *(_WORD*)(a3 + 168);
        v74 = *(_DWORD*)(a3 + 172);
        *(_WORD*)(v14 + 76) = v74;
        *(_DWORD*)(v14 + 76) =
            v74 | ((unsigned __int16)*(_DWORD*)(a3 + 176) << 16);
        v75 = *(_QWORD*)(a1 + 64);
        if (*(_DWORD*)(v75 + 3776) != 0) {
          v76 = 1075;
          v77 = 640;
          v78 = 104;
          v79 = 40;
          do {
            if (*(_QWORD*)(a3 + v79) != 0) {
              v81 = (unsigned int)(*(_DWORD*)(a3 + v78) +
                                   *(_DWORD*)(v75 + 3784) - 1) /
                    *(_DWORD*)(v75 + 3784) * *(_DWORD*)(v75 + 3784);
              v82 = CudaDriverRoutine_e7cb0(a1, a3, v77 - 640);
              v83 = *(_QWORD*)(a3 + v79);
              v72 = a1;
              *(_DWORD*)(v14 + 4LL * ((unsigned int)v77 >> 5)) |=
                  1 << (v77 + 0x80);
              *(_DWORD*)(v14 + 4LL * (v76 >> 5)) =
                  (v81 << 15) & 0xFFF80000 |
                  *(_DWORD*)(v14 + 4LL * (v76 >> 5)) & 0x7FFFF;
              *(_DWORD*)(v14 + 4LL * ((v76 - 19) >> 5)) =
                  HIDWORD(v83) & 0x1FFFF |
                  (*(_DWORD*)(v14 + 4LL * ((v76 - 19) >> 5)) >> 17 << 17);
              *(_DWORD*)(v14 + 4LL * ((v76 - 51) >> 5)) = v83;
              if (v82) {
                *(_DWORD*)(v14 + 4LL * ((v76 - 1) >> 5)) |= 0x40000u;
              }
            }
            else {
              *(_DWORD*)(v14 + 4LL * ((unsigned int)v77 >> 5)) &=
                  ~(1 << (v77 + 0x80));
            }
            v75 = *(_QWORD*)(v72 + 64);
            v80 = v77 - 639;
            ++v77;
            v76 += 64;
            v78 += 4;
            v79 += 8;
          } while (v80 < *(unsigned int*)(v75 + 3776));
        }
        v84 = *(_BYTE*)(v14 + 95);
        v85 = v72;
        v86 = *(_DWORD*)(CudaDriverRoutine_98340(v72) + 1276) & 0xFFFFFF |
              (v84 << 24);
        v87 = *(_BYTE*)(v14 + 203);
        *(_DWORD*)(v14 + 92) = v86;
        v88 = *(_DWORD*)(CudaDriverRoutine_98340(v85) + 1280) & 0xFFFFFF |
              (v87 << 24);
        v89 = *(_DWORD*)(v14 + 92);
        *(_DWORD*)(v14 + 200) = v88;
        v90 = CudaDriverRoutine_bc770(v5);
        v91 = *(_DWORD*)(v14 + 80);
        *(_DWORD*)(v14 + 92) = v89 & 0x7FFFFFF | (v90 << 27);
        v92 = v91 & 0xFFFE00FF;
        if (*(_DWORD*)(v5 + 392) != 0) {
          v93 = (*(_DWORD*)(v5 + 392) & 0x1FF) << 8;
        }
        else {
          v93 = 768;
        }
        *(_DWORD*)(v14 + 80) = v93 | v92;
        if (*(_BYTE*)(a3 + 376) != 0) {
          *(_DWORD*)(v14 + 84) = *(_DWORD*)(a3 + 380);
          *(_DWORD*)(v14 + 88) = *(_DWORD*)(a3 + 384);
          if (CudaDriverRoutine_bbdf0(v5)) {
            *(_DWORD*)(v107 + 596) = *(_DWORD*)(a3 + 380);
            *(_DWORD*)(v107 + 600) = *(_DWORD*)(a3 + 384);
          }
        }
        *(_DWORD*)(v14 + 16) |= 0x40u;
        if (*(_BYTE*)(a3 + 203) == 0) {
          *(_DWORD*)(v14 + 100) =
              *(_DWORD*)(v14 + 100) & 0x3F7FFFFF | 0x40800000;
        }
        *(_BYTE*)(v14 + 72) = 48;
        *(_BYTE*)(v14 + 207) =
            (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3164LL) << 24) +
                           (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3160LL) << 28)) >>
            24;
        if (CudaDriverStub_b9300(v5)) {
          *(_DWORD*)(v14 + 16) |= 0x3Fu;
          if (CudaDriverRoutine_bbdf0(v5)) {
            *(_DWORD*)(v104 + 16) = *(_DWORD*)(v104 + 16) & 0xFFFFFFC0 | 0x3E;
          }
        }
        v68 = a1;
        goto LABEL_119;
      }
      v23 = v97 & 0xFFFCFFFF | 0x10000;
    }
    *(_DWORD*)(v14 + 44) = v23;
    v30 = *(_DWORD*)(v14 + 100) & 0xFFF7FFFF;
    goto LABEL_44;
  }
  v6 = *(_QWORD*)(a3 + 8);
  v111 = 0;
  CudaDriverRoutine_bbdf0(a2);
  if (*(_BYTE*)(a3 + 201) == 0) {
    *(_OWORD*)v6 = (__typeof__(*(_OWORD*)v6)){0};
    *(_OWORD*)(v6 + 16) = (__typeof__(*(_OWORD*)(v6 + 16))){0};
    *(_OWORD*)(v6 + 32) = (__typeof__(*(_OWORD*)(v6 + 32))){0};
    *(_OWORD*)(v6 + 48) = (__typeof__(*(_OWORD*)(v6 + 48))){0};
    *(_OWORD*)(v6 + 64) = (__typeof__(*(_OWORD*)(v6 + 64))){0};
    *(_OWORD*)(v6 + 80) = (__typeof__(*(_OWORD*)(v6 + 80))){0};
    *(_OWORD*)(v6 + 96) = (__typeof__(*(_OWORD*)(v6 + 96))){0};
    *(_OWORD*)(v6 + 112) = (__typeof__(*(_OWORD*)(v6 + 112))){0};
    *(_OWORD*)(v6 + 128) = (__typeof__(*(_OWORD*)(v6 + 128))){0};
    *(_OWORD*)(v6 + 144) = (__typeof__(*(_OWORD*)(v6 + 144))){0};
    *(_OWORD*)(v6 + 160) = (__typeof__(*(_OWORD*)(v6 + 160))){0};
    *(_OWORD*)(v6 + 176) = (__typeof__(*(_OWORD*)(v6 + 176))){0};
    *(_OWORD*)(v6 + 192) = (__typeof__(*(_OWORD*)(v6 + 192))){0};
    *(_OWORD*)(v6 + 208) = (__typeof__(*(_OWORD*)(v6 + 208))){0};
    *(_OWORD*)(v6 + 224) = (__typeof__(*(_OWORD*)(v6 + 224))){0};
    *(_OWORD*)(v6 + 240) = (__typeof__(*(_OWORD*)(v6 + 240))){0};
    if (CudaDriverStub_b9300(v5)) {
      memset_plt(*(_QWORD*)(a3 + 16), 0, 2048);
    }
  }
  if (*(_BYTE*)(a3 + 198) != 0) {
    *(_DWORD*)(v6 + 16) |= 0x1000u;
  }
  if (*(_BYTE*)(a3 + 199) != 0) {
    *(_DWORD*)(v6 + 16) |= 0x40000000u;
  }
  v7 = (_WORD*)(v5 + 977);
  if (*(_BYTE*)(a3 + 202) != 0) {
    v8 = 0x2000000;
  }
  else {
    v8 = 0;
  }
  v9 = v8 | *(_DWORD*)(v6 + 20) & 0x81FFFFFF;
  v10 = v9 | 0x3C000000;
  v11 = v9 | 0xBC000000;
  *(_DWORD*)(v6 + 20) = v10;
  v12 = v10 & 0x3FFFFFFF;
  if (*(_BYTE*)(a3 + 207) == 0) {
    v11 = v12;
  }
  *(_DWORD*)(v6 + 20) = v11;
  if ((*v7 & 0x1000) != 0) {
    v13 = *(_DWORD*)(v6 + 44) & 0xFFFCBFFF;
  }
  else if (*(_BYTE*)(a3 + 206) != 0) {
    v13 = *(_DWORD*)(v6 + 44) & 0xFFFCBFFF | 0x30000;
  }
  else {
    v96 = *(_DWORD*)(v6 + 44);
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 64) + 17097LL) & 1) != 0) {
      v13 = v96 | 0x34000;
    }
    else {
      v13 = v96 & 0xFFFCBFFF | 0x10000;
    }
  }
  *(_DWORD*)(v6 + 44) = v13;
  if (CudaDriverRoutine_bbe30(v5)) {
    v24 = CudaDriverRoutine_98340(a1);
    v25 = *(_DWORD*)(v6 + 196);
    *(_DWORD*)(v6 + 192) = *(_QWORD*)(v24 + 2392);
    v26 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2396);
  }
  else {
    if ((*v7 & 8) != 0) {
      CudaDriverRoutine_928b0(v5, &v110, &v109);
      v98 = *(_DWORD*)(v6 + 196) & 0xFFFE0000 | v109 & 0x1FFFF;
      *(_DWORD*)(v6 + 192) = v110;
      *(_DWORD*)(v6 + 196) = v98;
      goto LABEL_38;
    }
    if (*(_BYTE*)(a3 + 204) != 0 && *(_BYTE*)(a3 + 205) != 0) {
      v37 = CudaDriverRoutine_98340(a1);
      v25 = *(_DWORD*)(v6 + 196);
      *(_DWORD*)(v6 + 192) = *(_QWORD*)(v37 + 2408);
      v26 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2412);
    }
    else {
      if (*(_DWORD*)(v5 + 404) == 0) {
        CudaDriverRoutine_bbd70(v5, &v111);
        v102 = HIDWORD(v111) & 0x1FFFF | (*(_DWORD*)(v6 + 196) >> 17 << 17);
        *(_DWORD*)(v6 + 192) = v111;
        *(_DWORD*)(v6 + 196) = v102;
        goto LABEL_38;
      }
      v100 = CudaDriverRoutine_98340(a1);
      v25 = *(_DWORD*)(v6 + 196);
      *(_DWORD*)(v6 + 192) = *(_QWORD*)(v100 + 2424);
      v26 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 2428);
    }
  }
  *(_DWORD*)(v6 + 196) = v25 & 0xFFFE0000 | v26 & 0x1FFFF;
LABEL_38:
  v27 = *(_DWORD*)(v6 + 44);
  *(_DWORD*)(v6 + 44) = v27 | 0x4000000;
  v28 = *(_DWORD*)(*(_QWORD*)(v5 + 32) + 276LL);
  switch (v28) {
  case 0:
  LABEL_61:
    v106 = v3;
    v39 = *(_DWORD*)(v6 + 608);
    v40 = *(_DWORD*)(v6 + 620);
    PSEUDO_LOW_LANE64(v41, n64_u64, *(unsigned __int64*)(v6 + 612));
    *(_DWORD*)(v6 + 48) = *(_DWORD*)(a3 + 156);
    *(_WORD*)(v6 + 52) = *(_DWORD*)(a3 + 160);
    *(_WORD*)(v6 + 56) = *(_DWORD*)(a3 + 164);
    if (CudaDriverRoutine_bbdf0(v5)) {
      if (v39 <= 0x100) {
        v39 = 256;
      }
      if (v40 <= 0x8000) {
        v40 = 0x8000;
      }
      LANES64(v41).n64_u64[0] =
          LANES64_OF(vmax_u32(v41, COERCE_AS(uint32x2_t, 0x800000008000LL)))
              .n64_u64[0];
    }
    v105 = v5;
    v42 = a1;
    v43 = CudaDriverData_1422118;
    if (*((_BYTE*)((_UNKNOWN*)0x1D40LL) + (_QWORD)CudaDriverData_1422118) !=
        0) {
      v44 = *(_DWORD*)((char*)((_UNKNOWN*)0x1D48LL) +
                       (_QWORD)CudaDriverData_1422118);
    }
    else {
      v44 = v39;
    }
    *(_DWORD*)(v6 + 68) = *(_DWORD*)(v6 + 68) & 0xFFFC0000 | v44 & 0x3FFFF;
    if (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)v43 + 3) != 0) {
      *(_DWORD*)(v6 + 620) = v40;
      *(uint32x2_t*)(v6 + 612) = v41;
    }
    else {
      *(_DWORD*)(v6 + 68) = v44 & 0x3FFFF;
      *(_DWORD*)(v6 + 80) &= 0xFF01FFFF;
    }
    *(_WORD*)(v6 + 74) = *(_WORD*)(a3 + 168);
    v45 = *(_DWORD*)(a3 + 172);
    *(_WORD*)(v6 + 76) = v45;
    *(_DWORD*)(v6 + 76) = v45 | ((unsigned __int16)*(_DWORD*)(a3 + 176) << 16);
    v46 = *(_QWORD*)(a1 + 64);
    if (*(_DWORD*)(v46 + 3776) != 0) {
      v47 = 1075;
      v48 = 640;
      v49 = 104;
      v50 = 40;
      do {
        v52 = (unsigned int)v48 >> 5;
        if (*(_QWORD*)(a3 + v50) != 0) {
          v53 = (unsigned int)(*(_DWORD*)(a3 + v49) + *(_DWORD*)(v46 + 3784) -
                               1) /
                *(_DWORD*)(v46 + 3784) * *(_DWORD*)(v46 + 3784);
          v54 = CudaDriverRoutine_e7cb0(a1, a3, v48 - 640);
          v55 = *(_QWORD*)(a3 + v50);
          v42 = a1;
          *(_DWORD*)(v6 + 4 * v52) |= 1 << (v48 + 0x80);
          *(_DWORD*)(v6 + 4LL * (v47 >> 5)) =
              (v53 << 15) & 0xFFF80000 |
              *(_DWORD*)(v6 + 4LL * (v47 >> 5)) & 0x7FFFF;
          *(_DWORD*)(v6 + 4LL * ((v47 - 19) >> 5)) =
              HIDWORD(v55) & 0x1FFFF |
              (*(_DWORD*)(v6 + 4LL * ((v47 - 19) >> 5)) >> 17 << 17);
          *(_DWORD*)(v6 + 4LL * ((v47 - 51) >> 5)) = v55;
          if (v54) {
            *(_DWORD*)(v6 + 4LL * ((v47 - 1) >> 5)) |= 0x40000u;
          }
        }
        else {
          *(_DWORD*)(v6 + 4 * v52) &= ~(1 << (v48 + 0x80));
        }
        v46 = *(_QWORD*)(v42 + 64);
        v51 = v48 - 639;
        ++v48;
        v47 += 64;
        v49 += 4;
        v50 += 8;
      } while (v51 < *(unsigned int*)(v46 + 3776));
    }
    v56 = *(_BYTE*)(v6 + 119);
    v57 = v42;
    v58 = *(_DWORD*)(CudaDriverRoutine_98340(v42) + 1276) & 0xFFFFFF |
          (v56 << 24);
    v59 = *(_BYTE*)(v6 + 123);
    *(_DWORD*)(v6 + 116) = v58;
    v60 = CudaDriverRoutine_98340(v57);
    v5 = v105;
    v61 = *(_DWORD*)(v60 + 1280) & 0xFFFFFF | (v59 << 24);
    v62 = *(_DWORD*)(v6 + 116);
    *(_DWORD*)(v6 + 120) = v61;
    v63 = CudaDriverRoutine_bc770(v105);
    v64 = *(_DWORD*)(v6 + 80);
    *(_DWORD*)(v6 + 116) = v62 & 0x7FFFFFF | (v63 << 27);
    v65 = v64 & 0xFFFE00FF;
    if (*(_DWORD*)(v105 + 392) != 0) {
      v66 = (*(_DWORD*)(v105 + 392) & 0x1FF) << 8;
    }
    else {
      v66 = 768;
    }
    *(_DWORD*)(v6 + 80) = v66 | v65;
    if (*(_BYTE*)(a3 + 376) != 0) {
      *(_DWORD*)(v6 + 84) = *(_DWORD*)(a3 + 380);
      *(_DWORD*)(v6 + 88) = *(_DWORD*)(a3 + 384);
      if (CudaDriverRoutine_bbdf0(v105)) {
        *(_DWORD*)(v106 + 596) = *(_DWORD*)(a3 + 380);
        *(_DWORD*)(v106 + 600) = *(_DWORD*)(a3 + 384);
      }
    }
    v67 = *(_DWORD*)(v6 + 16);
    *(_DWORD*)(v6 + 16) = v67 | 0x40;
    if (*(_BYTE*)(a3 + 203) == 0) {
      *(_DWORD*)(v6 + 16) = v67 | 0x440;
      *(_DWORD*)(v6 + 96) |= 0x80000000;
    }
    v68 = a1;
    *(_BYTE*)(v6 + 72) = 36;
    *(_BYTE*)(v6 + 127) =
        (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3164LL) << 24) +
                       (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3160LL) << 28)) >>
        24;
  LABEL_119:
    v94 = CudaDriverRoutine_98340(v68);
    CudaDriverRoutine_92a90(v94, v5, a3);
    return 0;
  case 2:
    v29 = v27 & 0xBBFFFFFF | 0x4000000;
    goto LABEL_60;
  case 1:
    v29 = v27 | 0x44000000;
  LABEL_60:
    *(_DWORD*)(v6 + 44) = v29;
    goto LABEL_61;
  default:
    break;
  }
  return 0;
}

__int64 cuda_driver_1b720(__int64 result, __int64 a2, __int64 a3,
                          unsigned __int8 a4, char a5, char a6)
{
  _DWORD* v6;
  unsigned int v7;
  void* v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;

  v6 = *(_DWORD**)(a2 + 8);
  v7 = *(_DWORD*)(a3 + 104);
  v8 = CudaDriverData_1422118;
  if (v7 != 0) {
    v9 = *(_QWORD*)(a3 + 40);
    v10 = *(_DWORD*)((char*)&CudaDriverRoutine_41c0 +
                     (_QWORD)CudaDriverData_1422118);
    if (v7 >= v10) {
      v11 = *(_DWORD*)((char*)&CudaDriverRoutine_41c0 +
                       (_QWORD)CudaDriverData_1422118);
    }
    else {
      v11 = *(_DWORD*)(a3 + 104);
    }
    if (v10 != 0) {
      v7 = v11;
    }
    v12 = (*(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) + v7 - 1) /
          *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) *
          *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL);
    v6[((unsigned int)a4 + 645) >> 5] |= 1 << (a4 + 5);
    v13 = (a4 + 5) << 6;
    v6[(unsigned int)(v13 + 1075) >> 5] =
        (v12 << 15) & 0xFFF80000 |
        v6[(unsigned int)(v13 + 1075) >> 5] & 0x7FFFF;
    v6[(unsigned int)(v13 + 1056) >> 5] =
        HIDWORD(v9) & 0x1FFFF |
        (v6[(unsigned int)(v13 + 1056) >> 5] >> 17 << 17);
    v6[(unsigned int)(v13 + 1024) >> 5] = v9;
    if (a6 != 0) {
      v6[(unsigned int)(v13 + 1073) >> 5] |= 0x20000u;
    }
  }
  if (a5 != 0) {
    v14 = *(_DWORD*)(a3 + 112);
    if (v14 != 0) {
      v15 = *(_QWORD*)(a3 + 56);
      v16 = *(_DWORD*)((char*)&CudaDriverRoutine_41c8 + (_QWORD)v8);
      if (v14 >= v16) {
        v17 = v16;
      }
      else {
        v17 = *(_DWORD*)(a3 + 112);
      }
      if (v16 != 0) {
        v18 = v17;
      }
      else {
        v18 = *(_DWORD*)(a3 + 112);
      }
      v19 = ((*(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) + v18 - 1) /
             *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) *
             *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL)) >>
            4;
      v6[20] |= 0x40u;
      v20 = v6[45] & 0x60000 | ((unsigned __int16)v19 << 19) |
            HIDWORD(v15) & 0x1FFFF;
      v6[44] = v15;
      v6[45] = v20;
      if (a6 != 0) {
        v6[45] |= 0x20000u;
      }
    }
  }
  return result;
}

__int64 cuda_driver_1b870(__int64 result, __int64 a2, __int64 a3,
                          unsigned __int8 a4, char a5, char a6)
{
  _DWORD* v6;
  unsigned int v7;
  void* v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;

  v6 = *(_DWORD**)(a2 + 8);
  v7 = *(_DWORD*)(a3 + 104);
  v8 = CudaDriverData_1422118;
  if (v7 != 0) {
    v9 = *(_QWORD*)(a3 + 40);
    v10 = *(_DWORD*)((char*)&CudaDriverRoutine_41c0 +
                     (_QWORD)CudaDriverData_1422118);
    if (v7 >= v10) {
      v11 = *(_DWORD*)((char*)&CudaDriverRoutine_41c0 +
                       (_QWORD)CudaDriverData_1422118);
    }
    else {
      v11 = *(_DWORD*)(a3 + 104);
    }
    if (v10 != 0) {
      v7 = v11;
    }
    v12 = (*(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) + v7 - 1) /
          *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) *
          *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL);
    v6[((unsigned int)a4 + 645) >> 5] |= 1 << (a4 + 5);
    v13 = (a4 + 5) << 6;
    v6[(unsigned int)(v13 + 1075) >> 5] =
        (v12 << 15) & 0xFFF80000 |
        v6[(unsigned int)(v13 + 1075) >> 5] & 0x7FFFF;
    v6[(unsigned int)(v13 + 1056) >> 5] =
        HIDWORD(v9) & 0x1FFFF |
        (v6[(unsigned int)(v13 + 1056) >> 5] >> 17 << 17);
    v6[(unsigned int)(v13 + 1024) >> 5] = v9;
    if (a6 != 0) {
      v6[(unsigned int)(v13 + 1073) >> 5] |= 0x20000u;
    }
  }
  if (a5 != 0) {
    v14 = *(_DWORD*)(a3 + 112);
    if (v14 != 0) {
      v15 = *(_QWORD*)(a3 + 56);
      v16 = *(_DWORD*)((char*)&CudaDriverRoutine_41c8 + (_QWORD)v8);
      if (v14 >= v16) {
        v17 = v16;
      }
      else {
        v17 = *(_DWORD*)(a3 + 112);
      }
      if (v16 != 0) {
        v18 = v17;
      }
      else {
        v18 = *(_DWORD*)(a3 + 112);
      }
      v19 = ((*(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) + v18 - 1) /
             *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL) *
             *(_DWORD*)(*(_QWORD*)(result + 64) + 3784LL)) >>
            4;
      v6[20] |= 0x40u;
      v20 = v6[45] & 0x60000 | ((unsigned __int16)v19 << 19) |
            HIDWORD(v15) & 0x1FFFF;
      v6[44] = v15;
      v6[45] = v20;
      if (a6 != 0) {
        v6[45] |= 0x20000u;
      }
    }
  }
  return result;
}

__int64 cuda_driver_1b9c0(__int64 result, __int64 a2, __int64 a3, char a4)
{
  __int64 v4;
  _QWORD* v7;
  void* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  _DWORD* v17;
  unsigned int v18;
  unsigned int v19;
  __int16 v20;
  unsigned int v21;
  int v22;
  unsigned __int64 v23;

  v23 = 0;
  if ((*(_WORD*)(a2 + 977) & 0x1000) == 0) {
    v4 = *(_QWORD*)(a3 + 8);
    v7 = (_QWORD*)result;
    v8 = CudaDriverData_1422118;
    if ((*((_BYTE*)&CudaDriverRoutine_4460 + (_QWORD)CudaDriverData_1422118) &
         8) != 0) {
      if (CudaDriverRoutine_bbe30(a2)) {
        v9 = v7[299];
        v23 = v9;
      }
      else {
        CudaDriverRoutine_bbd70(a2, &v23);
        v9 = v23;
      }
    }
    else {
      v9 = CudaDriverStub_1db800(*(_QWORD*)(a2 + 96));
      v23 = v9;
    }
    *(_DWORD*)(v4 + 32) = v9 >> 8;
    *(_DWORD*)(v4 + 124) =
        (v9 >> 40) & 0x1FF | (*(_DWORD*)(v4 + 124) >> 9 << 9);
    v10 = *(_QWORD*)(a2 + 96);
    if (v9 < CudaDriverStub_1db800(v10) ||
        (v11 = v23, (v12 = v11 - CudaDriverStub_1db800(v10)) >=
                        CudaDriverStub_1dbf90(v10))) {
      v10 = cuda_driver_helpers_1db920(v7[10], v23);
    }
    v13 = CudaDriverStub_1dbf90(v10);
    v14 = v23;
    v15 = v13;
    result = CudaDriverStub_1db800(v10);
    v16 = v15 - v14 + result;
    v17 = (_DWORD*)v7[8];
    if (v17[1033] + *(_DWORD*)(a2 + 64) < v16) {
      v16 = v17[1033] + *(_DWORD*)(a2 + 64);
    }
    v18 = v16 / v17[1054];
    v19 = *(_DWORD*)((char*)((_UNKNOWN*)0x187CLL) + (_QWORD)v8);
    if (v19 == 0) {
      v19 = v17[1052];
    }
    if (v19 >= v18) {
      v20 = v18;
    }
    else {
      v20 = v19;
    }
    v21 = *(_DWORD*)(v4 + 124) & 0xFFF001FF | ((v20 & 0x1FF) << 9);
    v22 = v21 | 0x40000;
    if (a4 == 0) {
      v22 = v21;
    }
    *(_DWORD*)(v4 + 124) = v22;
  }
  return result;
}

int8x8_t cuda_driver_1c100(__int64 a1, int8x8_t* a2, __int64 a3)
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

__int64 cuda_driver_1c3b0(__int64* a1, __int64 a2, __int64 a3, char a4)
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

__int64 cuda_driver_1c980(_DWORD* a1, __int64 a2, __int64 a3,
                          unsigned __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v7;
  __int64 v8;
  void* v11;
  unsigned int* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned int v18;
  __int64 v19;

  v7 = a5;
  v8 = a4;
  v11 = CudaDriverData_1422118;
  if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                 (_QWORD)CudaDriverData_1422118) > 1u) {
    v13 = cuda_driver_helpers_1db920(*(_QWORD*)(a2 + 80), a4);
    if (v13 != 0 && CudaDriverRoutine_1dd060(v13)) {
      return 0;
    }
    a1[2] = a3;
    a1[3] = 537010272;
    *a1 = 537010274;
    a1[1] = HIDWORD(a3);
    a1[4] = v7;
    a1[5] = 1;
    if (a6 != 0 ||
        (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)v11) & 1) != 0) {
      a1[6] = 536944748;
      a1[7] = 65;
      v12 = a1 + 8;
      if (v7 == 0) {
        goto LABEL_24;
      }
    }
    else {
      a1[6] = 536944748;
      a1[7] = 17;
      v12 = a1 + 8;
      if (v7 == 0) {
        goto LABEL_24;
      }
    }
    do {
      if ((unsigned int)v7 >= 0x7FFC) {
        v17 = 32764;
      }
      else {
        v17 = (unsigned int)v7;
      }
      v18 = (unsigned int)(v17 + 3) >> 2;
      *v12 = (v18 << 16) | 0x6000206D;
      v19 = (__int64)(v12 + 1);
      *(_DWORD*)(v19 + (((_DWORD)v17 - 1) & 0xFFFFFFFC)) = 0;
      CudaDriverStub_640d0_alt1(v19, v8, v17);
      v7 -= v17;
      v8 += v17;
      v12 = (unsigned int*)(v19 + 4 * v18);
    } while (v7 != 0);
  }
  else {
    a1[2] = a3;
    a1[3] = 537010272;
    *a1 = 537010274;
    a1[1] = HIDWORD(a3);
    a1[4] = a5;
    a1[5] = 1;
    if (a6 != 0 ||
        (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)v11) & 1) != 0) {
      a1[6] = 536944748;
      a1[7] = 65;
      v12 = a1 + 8;
      if (a5 == 0) {
        goto LABEL_24;
      }
    }
    else {
      a1[6] = 536944748;
      a1[7] = 17;
      v12 = a1 + 8;
      if (a5 == 0) {
        goto LABEL_24;
      }
    }
    do {
      if ((unsigned int)v7 >= 0x7FFC) {
        v14 = 32764;
      }
      else {
        v14 = (unsigned int)v7;
      }
      v15 = (unsigned int)(v14 + 3) >> 2;
      *v12 = (v15 << 16) | 0x6000206D;
      v16 = (__int64)(v12 + 1);
      *(_DWORD*)(v16 + (((_DWORD)v14 - 1) & 0xFFFFFFFC)) = 0;
      CudaDriverStub_640d0_alt1(v16, v8, v14);
      v7 -= v14;
      v8 += v14;
      v12 = (unsigned int*)(v16 + 4 * v15);
    } while (v7 != 0);
  }
LABEL_24:
  if ((unsigned __int8)cuda_driver_misc_helpers_4bb0(a6) != 0) {
    return cuda_driver_misc_helpers_17fc0((__int64)v12, a6);
  }
  return (__int64)v12;
}

__int64 cuda_driver_1cbc0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, unsigned int a6)
{
  __int64 v7;
  unsigned int* v9;
  __int64 v10;
  unsigned int v11;
  _DWORD* v12;

  v7 = a5;
  a1[2] = a3;
  a1[3] = 537010272;
  *a1 = 537010274;
  a1[1] = HIDWORD(a3);
  a1[4] = a5;
  a1[5] = 1;
  if (a6 != 0 ||
      (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118) &
       1) != 0) {
    v9 = a1 + 8;
    a1[6] = 536944748;
    a1[7] = 65;
    if (a5 == 0) {
      goto LABEL_10;
    }
  }
  else {
    v9 = a1 + 8;
    a1[6] = 536944748;
    a1[7] = 17;
    if (a5 == 0) {
      goto LABEL_10;
    }
  }
  do {
    if ((unsigned int)v7 >= 0x7FFC) {
      v10 = 32764;
    }
    else {
      v10 = (unsigned int)v7;
    }
    v11 = (unsigned int)(v10 + 3) >> 2;
    *v9 = (v11 << 16) | 0x6000206D;
    v12 = v9 + 1;
    *(_DWORD*)((char*)v12 + (((_DWORD)v10 - 1) & 0xFFFFFFFC)) = 0;
    CudaDriverStub_640d0(v12, a4, v10);
    v7 -= v10;
    a4 += v10;
    v9 = &v12[v11];
  } while (v7 != 0);
LABEL_10:
  if ((unsigned __int8)cuda_driver_misc_helpers_4bb0(a6) != 0) {
    return cuda_driver_misc_helpers_17fc0((__int64)v9, a6);
  }
  else {
    return (__int64)v9;
  }
}

_DWORD* cuda_driver_1ce20(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                          unsigned __int64 a5, __int64 a6, char a7,
                          unsigned int a8)
{
  _BOOL4 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int v18;
  bool v19;
  int v20;
  unsigned __int64 v21;
  int v22;
  int v23;
  _DWORD* v24;
  int v25;
  int v26;
  int v27;

  v15 = a6 != 0 && *(_BYTE*)(a6 + 35) != 0;
  v16 = a5;
  do {
    if (v16 >= 0xFFFFFFFF) {
      v17 = 0xFFFFFFFFLL;
    }
    else {
      v17 = v16;
    }
    if (v15) {
      v18 = (unsigned int)v17 / (*(unsigned __int8*)(a6 + 32) *
                                 (unsigned int)*(unsigned __int8*)(a6 + 34));
    }
    else {
      v18 = v17;
    }
    a1[6] = v18;
    *a1 = 537166080;
    a1[1] = HIDWORD(a4) & 0x1FFFF;
    v19 = a7 == 0 && v16 == a5;
    a1[2] = a4;
    a1[3] = HIDWORD(a3) & 0x1FFFF;
    v20 = v19;
    a1[4] = a3;
    a1[5] = 536969478;
    v21 = HIDWORD(v16);
    if (a8 != 0 || v21 != 0 ||
        (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118) &
         1) != 0) {
      v22 = 0;
      if (!v15) {
      LABEL_22:
        v23 = 0;
        v24 = a1 + 7;
        goto LABEL_25;
      }
    }
    else {
      v22 = 4;
      if (!v15) {
        goto LABEL_22;
      }
    }
    v25 = *(_BYTE*)a6 & 7 | (unsigned __int8)(16 * (*(_BYTE*)(a6 + 4) & 7)) |
          ((*(_DWORD*)(a6 + 8) & 7) << 8) | ((*(_DWORD*)(a6 + 12) & 7) << 12) |
          ((*(unsigned __int8*)(a6 + 34) << 16) - 0x10000) & 0x30000 |
          ((*(unsigned __int8*)(a6 + 32) << 20) - 0x100000) & 0x300000 |
          ((*(unsigned __int8*)(a6 + 33) << 24) - 0x1000000) & 0x3000000;
    a1[7] = 537100736;
    a1[8] = *(_DWORD*)(a6 + 24);
    a1[9] = *(_DWORD*)(a6 + 28);
    a1[10] = v25;
    v24 = a1 + 11;
    v23 = 1024;
  LABEL_25:
    a1 = v24 + 2;
    v26 = v22 | v23;
    if (v20 != 0) {
      v27 = 386;
    }
    else {
      v27 = 385;
    }
    *v24 = 536969408;
    v24[1] = v27 | v26;
    if (v21 == 0 && (unsigned __int8)cuda_driver_misc_helpers_4bb0(a8) != 0) {
      a1 = (_DWORD*)cuda_driver_misc_helpers_17fc0((__int64)a1, a8);
    }
    a3 += v17;
    a4 += v17;
    v16 -= v17;
  } while (v16 != 0);
  return a1;
}

__int64 cuda_driver_unplaced_1d140(__int64* a1, __int64 a2, __int64 a3,
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
            if (v121 == 0) {
              v140 = 2;
            }
            *v129 = 536969408;
            v129[1] = v139 | v140;
            v66 = v184_.v191;
            v203 += 2;
            if (v135 < 0xFFFFFFFFFFFF8000LL || v184_.v191 - 1 == v120) {
              v142 = v116;
              if ((unsigned __int8)cuda_driver_misc_helpers_4bb0(v116) != 0) {
                v203 = (_DWORD*)cuda_driver_misc_helpers_17fc0((__int64)v203,
                                                               v142);
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
            v20 = (_DWORD*)cuda_driver_misc_helpers_17fc0((__int64)v20, a7);
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

_DWORD* cuda_driver_1e000(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
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

__int64 cuda_driver_1e1c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(_QWORD*)(a2 + 56);
  if (v4 == 0) {
    return CudaDriverRoutine_19a660(a1, (__int64*)a2, a3, a4);
  }
  v10 = *(_QWORD*)(a2 + 24);
  v9 = *(_QWORD*)(a2 + 32);
  v21 = *(unsigned int*)(a2 + 12);
  v22 = *(_QWORD*)(a2 + 16);
  CudaDriverStub_102e00(*(_QWORD*)(a2 + 56)),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = *(_QWORD*)a2;
  v12 = CudaDriverStub_102e00(v4),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (!CudaDriverRoutine_1dc6f0(v4)) {
    return CudaDriverRoutine_19a660(a1, (__int64*)a2, a3, a4);
  }
  v13 = CudaDriverStub_1dc330(v4),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v13 == 0) {
    return CudaDriverRoutine_19a660(a1, (__int64*)a2, a3, a4);
  }
  v14 = v13;
  v15 = v11 - v12;
  if (CudaDriverStub_1dbf90(v13) <
      (unsigned __int64)((v9 - 1) * v10 + v22 * v21 + v15)) {
    return CudaDriverRoutine_19a660(a1, (__int64*)a2, a3, a4);
  }
  v16 = CudaDriverStub_102e00(v14),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a2 + 56) = v14;
  *(_QWORD*)a2 = v16 + v15;
  v17 = *(_QWORD*)(a1 + 64);
  CudaDriverRoutine_1db1b0(v14),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (!cuda_driver_9b4d0(v17, (v18 >> 9) & 3) || *(_BYTE*)(a2 + 69) != 0 ||
      *(_BYTE*)(a2 + 70) != 0) {
    return CudaDriverRoutine_19a660(a1, (__int64*)a2, a3, a4);
  }
  v20 = CudaDriverStub_1dc330(a4),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return cuda_driver_1394c0(a1, (__int64*)a2, a3, v20);
}

__int64 cuda_driver_20440(__int64 a1, __int64 a2, __int64 a3, bool* a4)
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

__int64 cuda_driver_205a0(__int64 a1, __int64 a2, int a3)
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

void cuda_driver_20e00(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned int v16;
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
  v2 = *(_QWORD*)(a1 + 64);
  v4 = *(unsigned int*)(v2 + 3732);
  if ((_DWORD)v4 != 0) {
    v5 = *(_QWORD*)(a1 + 16104);
    v6 = v5 + 1048;
    if ((unsigned int)v4 < 0xC ||
        ((unsigned int)(v4 - 1) <= 0x55555554 ? (v7 = (v4 - 1) >> 32 == 0)
                                              : (v7 = false),
         !v7 || v6 < (unsigned __int64)&v26[3 * (unsigned int)v4] &&
                    (unsigned __int64)v26 < v5 + 4 * v4 + 1048)) {
      v8 = 0;
      v9 = 0;
      do {
      LABEL_11:
        v10 = *(_DWORD*)(v6 + 4 * v8);
        v11 = v9 + 1;
        v12 = v9 + 2;
        ++v8;
        v10 += 5261064;
        v26[v9] = v10;
        v9 += 3;
        v26[v11] = v10 + 16;
        v26[v12] = v10 + 8;
      } while (v8 < v4);
      goto LABEL_12;
    }
    v8 = (unsigned int)v4 & 0xFFFFFFF8;
    v17 = (int32x4_t*)(v5 + 1064);
    v9 = 3 * (v4 & 0xFFFFFFF8);
    v18 = (float*)v26;
    v19 = vdupq_n_s32(0x504710u);
    v20 = vdupq_n_s32(0x504708u);
    v21 = vdupq_n_s32(0x504718u);
    v22 = v8;
    do {
      v23 = v17[-1];
      v24 = *v17;
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
    v14 = 0;
    v15 = 0;
    do {
      ++v14;
      *a2 = *((_QWORD*)&v25 + v15);
      a2[2] = *((_QWORD*)&v25 + v15 + 1);
      v16 = v15 + 2;
      v15 += 3;
      a2[6] = *((_QWORD*)&v25 + v16);
      a2 += 40;
    } while (v14 < *(unsigned int*)(v2 + 3732));
  }
}

__int64 cuda_driver_211a0(__int64 a1, _BYTE* a2)
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

__int64 cuda_driver_213d0(__int64 a1, __int64 a2)
{
  *(_DWORD*)(CudaDriverStub_1dbab0(a2) + 4) = 0;
  __builtin_arm_dmb(0xFu);
  return 0;
}

#pragma GCC visibility pop
