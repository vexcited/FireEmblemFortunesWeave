#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD** SdkRoutine_687a20(_DWORD** result, __int64, __int64);
_QWORD* SdkRoutine_67b920(_QWORD* result, int, int, unsigned __int64);
_QWORD* SdkRoutine_6a13c0(_QWORD* result);
_QWORD* nvidia_64ac60(_QWORD* result, _QWORD*, unsigned int);
__int64 (*nn_650c00(__int64, _BYTE*))();
__int64* SdkRoutine_685980(__int64* result, __int64, __int64, int, char);
__int64 NvOsDrvClose_plt(_QWORD);
__int64 NvOsDrvIoctl3_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvOsDrvOpen_plt(_QWORD);
__int64 SdkRoutine_64b750(__int64 result, __int64, __int64);
__int64 SdkRoutine_650bc0(__int64, unsigned int, _DWORD*);
__int64 SdkRoutine_661df0(__int64);
__int64 SdkRoutine_6668a0(__int64);
__int64 SdkRoutine_66a500(_DWORD*, __int64, unsigned int, unsigned int,
                          unsigned int, int, int, __int16);
__int64 SdkRoutine_66a6d0(__int64 result, __int64, __int64*);
__int64 SdkRoutine_6704c0(__int64 result, __int64);
__int64 SdkRoutine_671c20(__int64, __int64);
__int64 SdkRoutine_672000(__int64 result, __int64);
__int64 SdkRoutine_672c40(__int64 result, int, __int64);
__int64 SdkRoutine_672c50(__int64 result, int, __int64);
__int64 SdkRoutine_672c60(__int64 result, int, __int64);
__int64 SdkRoutine_672c70(__int64 result, int, __int64);
__int64 SdkRoutine_672cb0(__int64 result, int, __int64, int);
__int64 SdkRoutine_672ce0(__int64 result, int, __int64);
__int64 SdkRoutine_678120(__int64 result);
__int64 SdkRoutine_6859f0(__int64, __int64, __int64);
__int64 SdkRoutine_6860f0(__int64 result, int, __int64);
__int64 SdkRoutine_686150(__int64 result, int, __int64);
__int64 SdkRoutine_686170(__int64 result, int, __int64);
__int64 SdkRoutine_686190(__int64 result, int, __int64);
__int64 SdkRoutine_6861b0(__int64 result, int, __int64);
__int64 SdkRoutine_686330(__int64 result, int, __int64, int);
__int64 SdkRoutine_686d90(__int64, __int64, unsigned int*, unsigned int,
                          __int64);
__int64 SdkRoutine_688090(__int64 result, __int64, _DWORD*, unsigned int,
                          __int64, char);
__int64 SdkRoutine_689bc0(__int64 result);
__int64 SdkRoutine_690f30();
__int64 SdkRoutine_69a140(__int64 result, char, char);
__int64 SdkRoutine_6a0860();
__int64 SdkRoutine_6a0870(__int64 result);
__int64 SdkRoutine_6a0900(__int64 result, __int64, __int64);
__int64 SdkRoutine_6a0c00(unsigned int);
__int64 SdkRoutine_6a0c20(int);
__int64 SdkRoutine_6a11f0(__int64 result, int, __int64, int, char, __int64);
__int64 SdkRoutine_6ade10();
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 memset_plt_alt1(void* this_, void*, int,
                        unsigned __int64) __asm__("memset_plt");
__int64 nn_6554e0(_BYTE*, __int64, const char*);
__int64 nn_6ade20(__int64);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nvidia_649b10(__int64);
__int64 nvidia_649b40(__int64, __int64*, unsigned __int64, unsigned __int64);
__int64 strcpy_plt(void* this_, char*);
bool SdkRoutine_653ca0(__int64, __int64);
bool SdkRoutine_654120(__int64);
bool SdkRoutine_66ff80(__int64, __int64, __int64, int, int, int);
double SdkRoutine_68a1d0(__int64, unsigned int);
extern _DWORD SdkData_bb00b0[8];
extern _DWORD SdkData_bb0430[8];
extern _DWORD SdkData_bb0530[8];
extern _DWORD SdkData_bb0570[8];
extern _DWORD SdkData_bb0690[8];
extern _DWORD SdkData_c77cf4[5];
extern _DWORD SdkData_c8e9e0[7];
extern _DWORD SdkData_c8e9fc[7];
extern _DWORD SdkData_c8ea8c[5];
extern _DWORD SdkData_c8eb70[5];
extern _DWORD SdkData_c925a4[7];
extern _DWORD SdkData_c9260c[7];
extern _QWORD SdkData_c7e180[5];
extern _UNKNOWN* SdkData_10450b8;
extern _UNKNOWN* SdkData_e89ba0;
extern _UNKNOWN* SdkData_e89bd8;
extern _UNKNOWN* SdkData_e89c10;
extern _UNKNOWN* SdkData_e89c38;
extern _UNKNOWN* SdkData_e89dd0;
extern _UNKNOWN* SdkData_e89dd8;
extern _UNKNOWN* SdkData_e89de0;
extern _UNKNOWN* SdkData_e89de8;
extern _UNKNOWN* SdkData_e89df0;
extern _UNKNOWN* SdkData_e89df8;
extern _UNKNOWN* SdkData_e89e00;
extern _UNKNOWN* SdkData_e89e08;
extern _UNKNOWN* SdkData_e89e10;
extern _UNKNOWN* SdkData_e89e18;
extern _UNKNOWN* SdkData_e89e70;
extern _UNKNOWN* SdkData_e89e78;
extern _UNKNOWN** SdkData_e89ea8[2];
extern _UNKNOWN** SdkData_e89eb0;
extern _UNKNOWN SdkData_c926e8;
extern _UNKNOWN SdkData_c926f8;
extern _UNKNOWN SdkData_ea7c40;
extern __int128 SdkData_bb0d70;
extern __int128 SdkData_bb0d80;
extern __int128 SdkData_bb0ec0;
extern __int128 SdkData_bb0ed0;
extern __int128 SdkData_bb0fd0;
extern __int128 SdkData_bb0fe0;
extern __int128 SdkData_bb0ff0;
extern __int128 SdkData_bb1240;
extern __int128 SdkData_bb1250;
extern __int128 SdkData_bb1260;
extern __int128 SdkData_bb1270;
extern __int128 SdkData_bb1280;
extern __int128 SdkData_bb1470;
extern __int128 SdkData_bb1480;
extern __int128 SdkData_bb1490;
extern __int128 SdkData_bb1660;
extern __int128 SdkData_bb1720;
extern __int128 SdkData_bb1870;
extern __int128 SdkData_bb1880;
extern __int128 SdkData_bb1890;
extern __int128 SdkData_bb1af0;
extern __int128 SdkData_bb1b00;
extern __int128 SdkData_bb1b10;
extern __int128 SdkData_bb1b20;
extern __int128 SdkData_bb1c80;
extern __int128 SdkData_bb1cc0;
extern __int128 SdkData_bb1cd0;
extern __int128 SdkData_bb1ce0;
extern __int128 SdkData_bb1f20;
extern __int128 SdkData_bb1f30;
extern __int128 SdkData_bb1f40;
extern __int128 SdkData_bb1f60;
extern __int128 SdkData_bb2130;
extern __int128 SdkData_bb2140;
extern __int128 SdkData_bb2150;
extern __int128 SdkData_bb22b0;
extern __int128 SdkData_bb2330;
extern __int128 SdkData_bb2340;
extern __int128 SdkData_bb2350;
extern __int128 SdkData_bb2360;
extern __int128 SdkData_bb25b0;
extern __int128 SdkData_bb25c0;
extern __int128 SdkData_bb25d0;
extern __int128 SdkData_bb2880;
extern __int128 SdkData_bb2a80;
extern __int128 SdkData_bb2a90;
extern __int128 SdkData_bb2cb0;
extern __int128 SdkData_bb2cc0;
extern __int128 SdkData_bb2cd0;
extern __int128 SdkData_bb2de0;
extern __int128 SdkData_bb2e80;
extern __int128 SdkData_bb2eb0;
extern __int128 SdkData_bb2ec0;
extern __int128 SdkData_bb2ed0;
extern __int128 SdkData_bb2ee0;
extern __int128 SdkData_bb30a0;
extern __int128 SdkData_bb30b0;
extern __int128 SdkData_bb30c0;
extern __int128 SdkData_bb30e0;
extern __int128 SdkData_bb3330;
extern __int128 SdkData_bb3340;
extern __int128 SdkData_bb3570;
extern __int128 SdkData_bb3630;
extern __int128 SdkData_bb3640;
extern __int128 SdkData_bb3840;
extern __int128 SdkData_bb3850;
extern __int128 SdkData_bb3ac0;
extern __int128 SdkData_bb3ad0;
extern __int128 SdkData_bb3bd0;
extern __int128 SdkData_bb3c70;
extern __int128 SdkData_bb3c80;
extern __int128 SdkData_bb3e50;
extern __int128 SdkData_bb3e60;
extern __int128 SdkData_bb4050;
extern __int128 SdkData_bb4130;
extern __int128 SdkData_bb4140;
extern __int128 SdkData_bb4150;
extern __int128 SdkData_bb4160;
extern __int128 SdkData_bb4170;
extern __int128 SdkData_bb4590;
extern __int128 SdkData_bb45a0;
extern __int128 SdkData_bb45b0;
extern __int128 SdkData_bb4800;
extern __int128 SdkData_bb4810;
extern __int128 SdkData_bb4820;
extern __int128 SdkData_bb4830;
extern __int128 SdkData_bb4ad0;
extern __int128 SdkData_bb4ae0;
extern __int128 SdkData_bb4cf0;
extern __int128 SdkData_bb4d00;
extern __int128 SdkData_bb5150;
extern __int128 SdkData_bb5160;
extern __int128 SdkData_bb5170;
extern __int128 SdkData_bb52d0;
extern __int128 SdkData_bb52e0;
extern __int64 (*SdkData_1042148)(__int64, __int64);
extern __int64 (*SdkData_1042158)(__int64);
extern __int64 (*SdkData_e89c50[4])();
extern __int64 (*SdkData_e89ea0)();
extern __int64 (*SdkData_ea6528[100])();
extern __int64* SdkData_e89c18;
extern __int64* SdkData_e89eb8;
extern int* SdkData_e89c28;
extern int SdkData_10422a8;
extern int SdkData_c92788[];
extern int SdkData_c927a8[];
extern void (*SdkData_ea8308[68])();
extern void (*SdkData_ea8310)(_QWORD*, __int64, __int64);
extern void (*SdkData_ea8318[66])();
extern void (*SdkData_ea8338)(_QWORD*, __int64, __int64);
extern void (*SdkData_ea83a0[49])();
extern void (*SdkData_ea84d8[10])();
int* SdkRoutine_66a6d0_alt1(int* result, __int64,
                            __int64*) __asm__("SdkRoutine_66a6d0");
int* SdkRoutine_678d00(__int64, _DWORD*);
int* SdkRoutine_69aee0(int* result, char, char, __int16, char, int);
int32x2_t nn_6790b0_alt1(__int64, unsigned int,
                         unsigned int) __asm__("nn_6790b0");
int32x2_t nn_6796c0_alt1(__int64*, int, unsigned int) __asm__("nn_6796c0");
long double SdkRoutine_679cf0(__int64*, int, int);
long double SdkRoutine_6a10c0(__int64);
long double nn_65fa80(__int64, __int64, __int64);
void SdkRoutine_64b940();
void SdkRoutine_66fd00();
bool nn_66fe20(int64x2_t* a1);
__int64 nn_670700(__int64 a1, unsigned __int64 a2, __int64 a3,
                  unsigned __int64 a4, __int64 a5);
__int64 nn_671720(__int64 a1);
void* nn_6717d0(__int64 a1);
__int64 nn_6718f0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  int a6, int a7, int a8);
__int64 nn_672190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64* a5,
                  __int64 a6);
int32x2_t nn_673e60(char a1, char a2, __int64* a3);
int32x2_t nn_673fd0(__int64* a1, unsigned __int32 a2, unsigned __int32 a3,
                    unsigned __int32 a4);
__int64 nn_674030(__int64 a1, int a2, int a3, int a4);
int32x2_t nn_677de0(__int64* a1, unsigned __int32 a2, unsigned __int32 a3,
                    unsigned __int32 a4, unsigned __int32 a5,
                    unsigned __int32 a6);
int32x2_t nn_677e30(__int64* a1, int a2, int a3, int a4);
int32x2_t nn_677e90(__int64* a1, unsigned __int32 a2, unsigned __int32 a3,
                    unsigned __int32 a4, unsigned __int32 a5);
int32x2_t nn_677ee0(__int64* a1, int a2, int a3);
int32x2_t nn_677f40(__int64* a1, unsigned __int32 a2, unsigned __int32 a3,
                    unsigned __int32 a4, unsigned __int32 a5);
int32x2_t nn_677fa0(__int64* a1, unsigned __int32 a2, unsigned __int32 a3,
                    unsigned __int32 a4, unsigned __int32 a5,
                    unsigned __int32 a6);
int32x2_t nn_677ff0(__int64* a1, int a2, int a3, int a4);
int32x2_t nn_678050(__int64* a1, int a2, int a3, int a4);
int32x2_t nn_6780b0(__int64* a1, unsigned __int32 a2, unsigned __int32 a3,
                    unsigned __int32 a4);
int* nn_678ac0(int a1, int a2, char a3, char a4, int** a5);
int32x2_t nn_6790b0(__int64 a1, int a2, int a3);
long double nn_6794b0(__int64* a1, int a2, int a3, int a4);
int32x2_t nn_6796c0(__int64* a1, int a2, int a3);
__int64* nn_67a390(__int64* result, __int64 a2);
__int64 nn_67bba0(__int64 result, int a2, int a3, unsigned int a4, __int64* a5);
__int64 nn_67bfc0(__int64 result, int a2, int a3, unsigned int a4,
                  unsigned __int64 a5);
__int64 nn_67c500(__int64 result, int a2, int a3, int a4, unsigned __int64 a5);
__int64 nn_67cc80(__int64 result, int a2, int a3, unsigned int a4,
                  int32x4_t* a5);
__int64 nn_67d180(__int64 result, int a2, int a3, int a4, __int64* a5);
__int64 nn_67d760(__int64 result, int a2, int a3, unsigned int a4,
                  int32x4_t* a5);
__int64 nn_67dc60(__int64 result, int a2, int a3, int a4, __int64* a5);
__int64 nn_67e0c0(__int64 result, int a2, int a3, unsigned int a4,
                  int32x4_t* a5);
__int64 nn_67e5c0(__int64 result, int a2, int a3, int a4, __int64* a5);
__int64 nn_67eba0(__int64 result, int a2, int a3, unsigned int a4,
                  int32x4_t* a5);
__int64 nn_67f0a0(__int64 result, int a2, int a3, int a4, __int64* a5);
__int64 nn_67f8a0(__int64 result, int a2, __int64 a3);
__int64 nn_67fab0(__int64 result, int a2, int a3, __int64 a4, __int64 a5);
__int64 nn_67fe00(__int64 result, unsigned int a2, unsigned int a3,
                  unsigned int a4, __int64 a5, __int64 a6, int a7, int a8,
                  char a9, char a10);
__int64 nn_6804c0(__int64 result, __int64 a2);
__int64 nn_680950(__int64 result, __int64 a2);
__int64 nn_681ca0(__int64 result, unsigned int a2, unsigned int a3,
                  const float* a4);
__int64 nn_681f60(__int64 result, unsigned int a2, unsigned int a3,
                  const float* a4);
double nn_682650(__int64 a1, __int64 a2);
int** nn_682840(int** result, __int64 a2);
__int64 nn_682ab0(__int64 a1, int a2, __int64 a3);
double nn_683580(__int64 a1, __int64 a2, __int64 a3);
double nn_684d90(__int64 a1, int a2);
double nn_684e00(__int64 a1, int a2);
double nn_685160(__int64 a1, unsigned __int8 a2);
__int64 nn_685bd0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_687020(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6,
                  __int64 a7, unsigned int a8, _OWORD* a9);
__int64 nn_6886c0(__int64 result, int a2);
int** nn_688a40(int** result, __int64 a2, __int64 a3, int a4, char a5);
__int64 nn_688b60(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
double nn_695b00(__int64 a1, unsigned __int64 a2, unsigned int a3);
__int64 nn_695c40(__int64 result, int a2, __int64* a3, __int64** a4, __int64 a5,
                  __int64* a6);
__int64 nn_696650(__int64 result, int a2);
double nn_697220(__int64 a1, __int64 a2, __int64* a3);
double nn_697a00(__int64 a1, __int64 a2, __int64* a3, int* a4, _DWORD* a5,
                 char a6);
double nn_697e10(__int64 a1, __int64 a2, __int64* a3, int* a4, _DWORD* a5,
                 char a6);
double nn_698210(__int64 a1, __int64 a2, __int64* a3, int* a4, _DWORD* a5,
                 char a6);
int8x8_t nn_698df0(__int64 a1, unsigned int* a2);
__int64* nn_6990d0(__int64* result, __int64 a2, int* a3);
double nn_69a400(__int64 a1, char a2, unsigned int a3, __int64 a4);
__int64 nn_69a740(__int64 result, unsigned int a2, unsigned int a3,
                  const float* a4);
__int64 nn_69a9a0(__int64 result, int* a2, __int64* a3);
__int64 nn_69abc0(_QWORD* a1);
__int64 nn_69af20(__int64 result);
__int64 nn_69b120(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_69b220(__int64 result, __int64 a2, unsigned __int64* a3);
__int64 nn_69b3e0(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_69b9e0(__int64 a1, int a2, __int64 a3);
__int64 nn_69bce0(__int64 result, __int64 a2);
void* nn_69be20(void* result, void* a2, __int64 a3);
__int64 (*nn_69be70(_BYTE* a1, __int64 a2, const char* a3))();
__int64 nn_69c0a0(__int64* a1);
__int64 nn_69d250();
int8x8_t nn_69d490(int8x8_t* a1);
double nn_69d8e0(__int64 a1, int a2);
bool nn_69e030(char* a1, char* a2, __int64 a3, __int64 a4, _QWORD* a5);
__int64 (*nn_69f0c0(__int64 a1))(__int64);

bool nn_66fe20(int64x2_t* a1)
{
  unsigned __int64 v1;
  int64x2_t* v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  int64x2_t* v6;
  int64x2_t v7;
  void* v8;
  void* v9;
  unsigned __int64 v10;
  int v11;
  int v12;
  int v13;
  _BOOL8 result;

  v1 = LANES128(a1[695]).n128_u32[1];
  v2 = a1 + 512;
  v4 = LANES128(a1[674]).n128_u64[0] + LANES128(a1[695]).n128_u32[0];
  LANES128(a1[636]).n128_u64[1] = v1;
  LANES128(a1[639]).n128_u8[0] = 0;
  LANES128(a1[636]).n128_u64[0] = 0;
  v5 = LANES128(a1[1]).n128_u64[0];
  v6 = a1 + 527;
  LANES128(a1[637]).n128_u64[0] = v4;
  LANES128(a1[637]).n128_u64[1] = v4;
  LANES128(a1[638]).n128_u64[0] = v4;
  LANES128(a1[639]).n128_u64[1] = v4;
  v7 = vdupq_n_s64(v4);
  LANES128(a1[638]).n128_u64[1] = v4 + v1;
  LANES128(a1[635]).n128_u64[1] = (unsigned __int64)LANES128(a1[527]).n128_u64;
  v8 = SdkData_e89e70;
  LANES128(a1[640]).n128_u64[0] = (unsigned __int64)LANES128(a1[644]).n128_u64;
  LANES128(a1[640]).n128_u32[2] = 16;
  LANES128(a1[641]).n128_u64[0] = -1;
  a1[645] = v7;
  a1[644] = v7;
  a1[647] = v7;
  a1[646] = v7;
  a1[649] = v7;
  a1[648] = v7;
  LANES128(a1[641]).n128_u32[2] = 1;
  a1[651] = v7;
  a1[650] = v7;
  LANES128(a1[635]).n128_u64[0] = (unsigned __int64)v8 + 16;
  SdkRoutine_653ca0((__int64)&a1[527], (__int64)&a1[635]);
  v9 = SdkData_e89e78;
  LANES128(a1[642]).n128_u64[0] = (unsigned __int64)a1;
  LANES128(a1[643]).n128_u64[1] = 0;
  LANES128(a1[635]).n128_u64[0] = (unsigned __int64)v9 + 16;
  v10 = LANES128(a1[637]).n128_u64[1];
  LANES128(a1[642]).n128_u64[1] = v10;
  LANES128(a1[643]).n128_u64[0] = v10;
  LANES128(v2[160]).n128_u8[0] |= 4u;
  if (*(_QWORD*)(v5 + 7704) != 0) {
    v11 = 2048;
  }
  else {
    v11 = 0x40000;
  }
  if (*(_QWORD*)(v5 + 7704) != 0) {
    v12 = 128;
  }
  else {
    v12 = 0x20000;
  }
  if (*(_QWORD*)(v5 + 7704) != 0) {
    v13 = 16;
  }
  else {
    v13 = 0x10000;
  }
  result = SdkRoutine_66ff80((__int64)&a1[652], (__int64)a1, (__int64)v6, v11,
                             v13, v12);
  LANES128(v2[160]).n128_u8[0] |= 8u;
  return result;
}

__int64 nn_670700(__int64 a1, unsigned __int64 a2, __int64 a3,
                  unsigned __int64 a4, __int64 a5)
{
  _BYTE* v5;
  unsigned __int64 v8;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  int32x4_t v13;
  int32x4_t v14;
  unsigned __int64 v15;
  unsigned __int32* v16;
  int32x4_t v17;
  int32x4_t v18;
  unsigned __int32* v19;
  unsigned __int32* v20;
  unsigned __int32* v21;
  unsigned __int32* v22;
  __int64 v23;
  __int64 v24;
  int* v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  unsigned int* v30;
  int v31;
  __int64 v32;
  void (*v33)(__int64, _QWORD, _BOOL4*, __int64*, _QWORD, __int64, _QWORD,
              _QWORD*, _DWORD, _BYTE*);
  __int64 v34;
  __int64 v35;
  __int64 (*v36)(__int64, _QWORD, _QWORD, __int64, __int64*);
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  int* v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int128 v48;
  __int128 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  unsigned int* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _DWORD* v73;
  __int64* v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  void (*v79)(__int64);
  __int64 v80;
  __int64 v81;
  __int64 (*v82)(__int64, _QWORD, _QWORD, __int64, __int64*);
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 result;
  unsigned int* v90;
  int v91;
  unsigned int* v92;
  __int64 v93;
  _BYTE* v94;
  __int64 v96;
  struct {
    _QWORD v97[4];
    __int64 v98;
  } v97_;
  __int64 v99;
  _BYTE v100[20];
  __int128 v101;
  __int128 v102;
  int v103;
  _BOOL4 v104;
  __int64 v105;
  __int64 v106;
  int v107;
  _BYTE v108[64];
  __int64 v109;
  struct {
    __int64 v110;
    __int64 v111;
    char gap360_[16];
    __int64 v112;
  } v110_;

  v5 = v108;
  v8 = a2;
  if (a4 == 0) {
    v5 = nullptr;
  }
  v94 = v5;
  if (a2 == 0) {
    v12 = 0;
    goto LABEL_15;
  }
  if (a2 < 8) {
    v10 = 0;
    v11 = 0;
    goto LABEL_10;
  }
  v13 = (__typeof__(v13)){0};
  v14 = (__typeof__(v14)){0};
  v10 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v15 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v16 = (unsigned __int32*)(a3 + 272);
  do {
    LANES128(v17).n128_u32[0] = *(v16 - 64);
    LANES128(v18).n128_u32[0] = *v16;
    v19 = v16 - 32;
    v20 = v16 + 32;
    LANES128(v17).n128_u32[1] = *(v16 - 48);
    LANES128(v18).n128_u32[1] = v16[16];
    v21 = v16 - 16;
    v22 = v16 + 48;
    v15 -= 8LL;
    v16 += 128;
    LANES128(v17).n128_u32[2] = *v19;
    LANES128(v18).n128_u32[2] = *v20;
    LANES128(v17).n128_u32[3] = *v21;
    LANES128(v18).n128_u32[3] = *v22;
    v13 = vmaxq_s32(v13, v17);
    v14 = vmaxq_s32(v14, v18);
  } while (v15 != 0);
  v11 = vmaxvq_s32(vmaxq_s32(v13, v14));
  if (a2 != v10) {
  LABEL_10:
    v23 = a3 + (v10 << 6);
    v24 = a2 - v10;
    v25 = (int*)(v23 + 16);
    do {
      v27 = *v25;
      v25 += 16;
      v26 = v27;
      if (v11 <= v27) {
        v11 = v26;
      }
      --v24;
    } while (v24 != 0);
  }
  v12 = (unsigned int)v11;
LABEL_15:
  v96 = *(_QWORD*)(a1 + 16);
  v28 = SdkData_1042148(v12, 80);
  v29 = *(_DWORD*)(a1 + 356);
  v110_.v112 = v28;
  v107 = 0;
  v106 = 0;
  v104 = (v29 & 0x14) != 0;
  v105 = 0xFFFFFF00104000LL;
  if ((v29 & 0x10) == 0) {
    SdkRoutine_69aee0((int*)&v99, 10, 0, 4, 0, 0);
    v30 = *(unsigned int**)(a1 + 11240);
    v31 = v99;
    if ((unsigned __int64)(v30 + 1) > *(_QWORD*)(a1 + 11248)) {
      SdkRoutine_64b750(a1 + 11240, (__int64)v30,
                        4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 1));
      v30 = *(unsigned int**)(a1 + 11240);
    }
    *v30 = (v31 << 16) | 0x80002E8C;
    *(_QWORD*)(a1 + 11240) = v30 + 1;
  }
  if (v8 != 0) {
    v32 = 0;
    v92 = (unsigned int*)(a5 + 64);
    v93 = a5 + 8;
    while (1) {
      v41 = v8;
      v103 = 0;
      v102 = (__typeof__(v102)){0};
      v101 = (__typeof__(v101)){0};
      *(_OWORD*)&v100[4] = (__typeof__(*(_OWORD*)&v100[4])){0};
      *(_QWORD*)&v100[8] = 0x100000001LL;
      v42 = (int*)(a3 + (v32 << 6));
      v43 = *v42;
      v44 = v42[1];
      LODWORD(v99) = 3;
      HIDWORD(v99) = v43;
      LODWORD(v101) = 1;
      DWORD2(v101) = 1;
      *(_DWORD*)v100 = v44 == 1;
      if ((v43 & 0x10000000) != 0) {
        v103 = 1;
        HIDWORD(v99) = v43 & 0xEFFFFFFF;
      }
      if (v42[4] >= 1) {
        v45 = v110_.v112;
        v46 = 0;
        v47 = 0;
        do {
          SdkRoutine_6704c0(v45, *((_QWORD*)v42 + 1) + v46);
          ++v47;
          v46 += 64;
          v45 += 80;
        } while (v47 < v42[4]);
      }
      v48 = *(_OWORD*)(v42 + 6);
      v49 = *(_OWORD*)(v42 + 10);
      v8 = v41;
      v97_.v98 = *((_QWORD*)v42 + 7);
      *(_OWORD*)v97_.v97 = v48;
      *(_OWORD*)&v97_.v97[2] = v49;
      if (a4 != 0) {
        if (a4 >= 8) {
          break;
        }
        v50 = 0;
        if ((a4 & 7) != 0) {
          goto LABEL_66;
        }
      }
    LABEL_21:
      v33 = *(void (**)(__int64, _QWORD, _BOOL4*, __int64*, _QWORD, __int64,
                        _QWORD, _QWORD*, _DWORD,
                        _BYTE*))(*(_QWORD*)(v96 + 7688) + 216LL);
      v34 = SdkRoutine_6668a0(a1);
      v33(v34, *(unsigned int*)(a1 + 5984), &v104, &v99, (unsigned int)v42[4],
          v110_.v112, 0, v97_.v97, a4, v94);
      v35 = *(_QWORD*)(a1 + 16);
      v110_.v110 = 0;
      v110_.v111 = 0;
      v36 = *(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64*))(
          *(_QWORD*)(v35 + 7688) + 552LL);
      v37 = SdkRoutine_6668a0(a1);
      v38 = v36(v37, 0, 0, 3222077441LL, &v110_.v110);
      v39 = *(_QWORD*)(a1 + 10208);
      v40 = v110_.v110 + HIDWORD(v110_.v111);
      if (v110_.v110 == 0) {
        v40 = 0;
      }
      if (v38 == 0) {
        v51 = v110_.v110 != 0 ? v110_.v110 + (unsigned int)v110_.v111 : 0LL;
        if (v39 == v51) {
          v52 = *(_QWORD*)(a1 + 10296);
          *(_QWORD*)(a1 + 10208) = v40;
          *(_QWORD*)(a1 + 10296) = v40 - v39 + v52;
          v39 = v40;
        }
      }
      ++v32;
      *(_QWORD*)(a1 + 10280) = v39;
      if (v32 == v41) {
        goto LABEL_71;
      }
    }
    v53 = &v109;
    v54 = v92;
    v55 = 0;
    do {
      v58 = *(v54 - 16);
      *((_DWORD*)v53 - 14) = v58;
      if ((unsigned int)v58 > 4) {
        v59 = 0;
      }
      else {
        v59 = SdkData_c7e180[v58];
      }
      *(v53 - 8) = *((_QWORD*)v54 - 7) + v59 * v32;
      v60 = *(v54 - 12);
      *((_DWORD*)v53 - 10) = v60;
      if ((unsigned int)v60 > 4) {
        v61 = 0;
      }
      else {
        v61 = SdkData_c7e180[v60];
      }
      *(v53 - 6) = *((_QWORD*)v54 - 5) + v61 * v32;
      v62 = *(v54 - 8);
      *((_DWORD*)v53 - 6) = v62;
      if ((unsigned int)v62 > 4) {
        v63 = 0;
      }
      else {
        v63 = SdkData_c7e180[v62];
      }
      *(v53 - 4) = *((_QWORD*)v54 - 3) + v63 * v32;
      v64 = *(v54 - 4);
      *((_DWORD*)v53 - 2) = v64;
      if ((unsigned int)v64 > 4) {
        v65 = 0;
      }
      else {
        v65 = SdkData_c7e180[v64];
      }
      *(v53 - 2) = *((_QWORD*)v54 - 1) + v65 * v32;
      v66 = *v54;
      *((_DWORD*)v53 + 2) = v66;
      if ((unsigned int)v66 > 4) {
        v67 = 0;
      }
      else {
        v67 = SdkData_c7e180[v66];
      }
      *v53 = *((_QWORD*)v54 + 1) + v67 * v32;
      v68 = v54[4];
      *((_DWORD*)v53 + 6) = v68;
      if ((unsigned int)v68 > 4) {
        v69 = 0;
      }
      else {
        v69 = SdkData_c7e180[v68];
      }
      v53[2] = *((_QWORD*)v54 + 3) + v69 * v32;
      v70 = v54[8];
      *((_DWORD*)v53 + 10) = v70;
      if ((unsigned int)v70 > 4) {
        v71 = 0;
      }
      else {
        v71 = SdkData_c7e180[v70];
      }
      v53[4] = *((_QWORD*)v54 + 5) + v71 * v32;
      v72 = v54[12];
      *((_DWORD*)v53 + 14) = v72;
      if ((unsigned int)v72 <= 4) {
        v56 = SdkData_c7e180[v72];
      }
      else {
        v56 = 0;
      }
      v57 = *((_QWORD*)v54 + 7);
      v54 += 32;
      v55 -= 8;
      v53[6] = v57 + v56 * v32;
      v53 += 16;
    } while (-(__int64)(a4 & 0xFFFFFFFFFFFFFFF8LL) != v55);
    v50 = -v55;
    if ((a4 & 7) == 0) {
      goto LABEL_21;
    }
  LABEL_66:
    v73 = &v108[16 * v50 + 8];
    v74 = (__int64*)(v93 + 16 * v50);
    v75 = a4 & 7;
    do {
      v78 = *((unsigned int*)v74 - 2);
      *v73 = v78;
      if ((unsigned int)v78 <= 4) {
        v76 = SdkData_c7e180[v78];
      }
      else {
        v76 = 0;
      }
      v77 = *v74;
      v74 += 2;
      --v75;
      *((_QWORD*)v73 - 1) = v77 + v76 * v32;
      v73 += 4;
    } while (v75 != 0);
    goto LABEL_21;
  }
LABEL_71:
  v79 = *(void (**)(__int64))(*(_QWORD*)(v96 + 7688) + 224LL);
  v80 = SdkRoutine_6668a0(a1);
  v79(v80);
  v81 = *(_QWORD*)(a1 + 16);
  v99 = 0;
  *(_QWORD*)v100 = 0;
  v82 = *(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64*))(
      *(_QWORD*)(v81 + 7688) + 552LL);
  v83 = SdkRoutine_6668a0(a1);
  v84 = v82(v83, 0, 0, 3222077441LL, &v99);
  v85 = *(_QWORD*)(a1 + 10208);
  v86 = v99 + *(unsigned int*)&v100[4];
  if (v99 == 0) {
    v86 = 0;
  }
  if (v84 == 0) {
    v87 = v99 != 0 ? v99 + *(unsigned int*)v100 : 0LL;
    if (v85 == v87) {
      v88 = *(_QWORD*)(a1 + 10296);
      *(_QWORD*)(a1 + 10208) = v86;
      *(_QWORD*)(a1 + 10296) = v86 - v85 + v88;
      v85 = v86;
    }
  }
  *(_QWORD*)(a1 + 10280) = v85;
  result = SdkData_1042158(v110_.v112);
  if ((*(_BYTE*)(a1 + 356) & 0x10) == 0) {
    result = (__int64)SdkRoutine_69aee0((int*)&v99, 11, 2, 4, 0, 0);
    v90 = *(unsigned int**)(a1 + 11240);
    v91 = v99;
    if ((unsigned __int64)(v90 + 1) > *(_QWORD*)(a1 + 11248)) {
      result =
          SdkRoutine_64b750(a1 + 11240, (__int64)v90,
                            4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 1));
      v90 = *(unsigned int**)(a1 + 11240);
    }
    *v90 = (v91 << 16) | 0x80002E8C;
    *(_QWORD*)(a1 + 11240) = v90 + 1;
  }
  return result;
}

__int64 nn_671720(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v10;
  unsigned int v11;

  v1 = *(__int64**)(a1 + 152);
  if (v1 == nullptr) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 8);
  v3 = *v1;
  v11 = 0;
  (*(void (**)(__int64, __int64, __int64, unsigned int*))(
      *(_QWORD*)(v2 + 7688) + 328LL))(v3, 9, 4, &v11);
  v5 = v11;
  v6 = *(_QWORD*)(a1 + 8);
  if (v11 <= 0x400) {
    v5 = 1024;
  }
  v7 = (32 * v5 + 26080) & 0xFFFFFE00;
  if (*(_QWORD*)(v6 + 7704) != 0) {
    v8 = 160;
  }
  else {
    v8 = 148;
  }
  SdkRoutine_650bc0(v6, v8, &v10);
  if (v7 <= v10) {
    return v10;
  }
  else {
    return v7;
  }
}

void* nn_6717d0(__int64 a1)
{
  void* v2;
  __int64 v5;

  v2 = (void*)(*(__int64 (**)(__int64))SdkData_e89bd8)(1088);
  memset_plt(v2, nullptr, 1088);
  v5 = *(_QWORD*)(a1 + 10784) + *(unsigned int*)(a1 + 11040);
  *((_QWORD*)v2 + 131) = 0;
  *((_QWORD*)v2 + 130) = v5;
  return v2;
}

__int64 nn_6718f0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  int a6, int a7, int a8)
{
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned __int64 v21;
  void (*v22)(__int64, _QWORD, int*, _QWORD, _QWORD, __int64, __int64, __int64,
              _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
              _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
  __int64 v23;
  __int64 v24;
  __int64 (*v25)(__int64, _QWORD, _QWORD, __int64, __int64*);
  __int64 v26;
  __int64 result;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  unsigned int* v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v38;
  struct {
    int v40[5];
    int v41;
  } v40_;
  struct {
    __int64 v42;
    __int64 v43;
  } v42_;

  v14 = *(_QWORD**)(*(_QWORD*)(a1 + 5992) + 152LL);
  v35 = *(_QWORD*)(a1 + 5992);
  v15 = v14[3];
  if (v15 != 0) {
    v38 = ((__int64 (*)(__int64, __int64, __int64))SdkRoutine_66fd00)(
        a1 + 10160, v15, 1024);
  }
  else {
    v38 = 0;
  }
  v36 = ((__int64 (*)(__int64, _QWORD, _QWORD))SdkRoutine_66fd00)(
      a1 + 10160, v14[1], v14[2]);
  v16 = v14[4] + v36;
  nn_688a40((int**)(a1 + 11240), v16, *(_QWORD*)(a1 + 7856), 1072, 0);
  v17 = *(_QWORD*)(a1 + 7856);
  if (v17 != 0) {
    v18 = v17 + 1072;
  }
  else {
    v18 = 0;
  }
  nn_688a40((int**)(a1 + 11240), v16 + 5024, v18, 16, 0);
  SdkRoutine_671c20(a1, v16 + 1072);
  SdkRoutine_672000(a1, v16 + 2968);
  v19 = *(_DWORD*)(a1 + 356);
  if ((v19 & 0x10) == 0) {
    SdkRoutine_69aee0(v40_.v40, 8, 0, 16, 0, 0);
    v20 = *(_QWORD*)(a1 + 11240);
    v21 = *(_QWORD*)(a1 + 11248);
    v40_.v40[1] = a6;
    v40_.v40[2] = a7;
    v40_.v40[3] = a8;
    if (v20 + 20 > v21) {
      SdkRoutine_64b750(a1 + 11240, v20,
                        4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 5));
      v20 = *(_QWORD*)(a1 + 11240);
    }
    *(_DWORD*)v20 = -1610338676;
    *(_OWORD*)(v20 + 4) = *(_OWORD*)v40_.v40;
    *(_QWORD*)(a1 + 11240) = v20 + 20;
    v19 = *(_DWORD*)(a1 + 356);
  }
  v40_.v41 = 0;
  *(_QWORD*)&v40_.v40[3] = 0;
  v40_.v40[0] = (v19 & 0x14) != 0;
  *(_QWORD*)&v40_.v40[1] = 0xFFFFFF00104000LL;
  v22 = *(void (**)(__int64, _QWORD, int*, _QWORD, _QWORD, __int64, __int64,
                    __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                    _QWORD, _QWORD,
                    _QWORD))(*(_QWORD*)(*(_QWORD*)(v35 + 8) + 7688LL) + 384LL);
  v23 = SdkRoutine_6668a0(a1);
  v22(v23, *(unsigned int*)(a1 + 5984), v40_.v40, *v14, 0, v36, v38, a2, 0,
      *(_QWORD*)a3, *(unsigned int*)(a3 + 16), *(_QWORD*)(a3 + 8), *(_QWORD*)a4,
      *(unsigned int*)(a4 + 16), *(_QWORD*)(a4 + 8), *(_QWORD*)a5,
      *(unsigned int*)(a5 + 16), *(_QWORD*)(a5 + 8), 0, 0, v14[3],
      (unsigned int)a6, (unsigned int)a7, (unsigned int)a8);
  v24 = *(_QWORD*)(a1 + 16);
  v42_.v42 = 0;
  v42_.v43 = 0;
  v25 = *(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64*))(
      *(_QWORD*)(v24 + 7688) + 552LL);
  v26 = SdkRoutine_6668a0(a1);
  result = v25(v26, 0, 0, 3222077441LL, &v42_.v42);
  v28 = *(_QWORD*)(a1 + 10208);
  v29 = v42_.v42 + HIDWORD(v42_.v43);
  if (v42_.v42 == 0) {
    v29 = 0;
  }
  if ((_DWORD)result == 0) {
    v30 = v42_.v42 != 0 ? v42_.v42 + (unsigned int)v42_.v43 : 0LL;
    if (v28 == v30) {
      v31 = *(_QWORD*)(a1 + 10296);
      *(_QWORD*)(a1 + 10208) = v29;
      *(_QWORD*)(a1 + 10296) = v29 - v28 + v31;
      v28 = v29;
    }
  }
  v32 = *(_BYTE*)(a1 + 356);
  *(_QWORD*)(a1 + 10280) = v28;
  if ((v32 & 0x10) == 0) {
    result = (__int64)SdkRoutine_69aee0((int*)&v42_.v42, 9, 2, 4, 0, 0);
    v33 = *(unsigned int**)(a1 + 11240);
    v34 = v42_.v42;
    if ((unsigned __int64)(v33 + 1) > *(_QWORD*)(a1 + 11248)) {
      result =
          SdkRoutine_64b750(a1 + 11240, (__int64)v33,
                            4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 1));
      v33 = *(unsigned int**)(a1 + 11240);
    }
    *v33 = (v34 << 16) | 0x80002E8C;
    *(_QWORD*)(a1 + 11240) = v33 + 1;
  }
  return result;
}

__int64 nn_672190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64* a5,
                  __int64 a6)
{
  __int64 v6;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  _DWORD* v18;
  char* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  char* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* v27;
  int v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  int8x16_t v33;
  __int64 v34;
  int8x16_t v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  bool v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;
  __int64 (*v54)(__int64, _QWORD, _QWORD, __int64, __int64*);
  __int64 v55;
  __int64 result;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  unsigned int* v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v67;
  __int64 v69;
  struct {
    char gap48_[8];
    __int64 v70;
    __int128 v71;
    int8x16_t v72;
  } v70_;
  struct {
    _QWORD v73[4];
    int8x16_t v74;
    __int128 v75;
    __int128 v76;
    __int128 v77;
  } v73_;
  unsigned __int64 v78;
  unsigned __int64 v79;
  _DWORD v80[6];
  struct {
    __int64 v81;
    __int64 v82;
  } v81_;

  v6 = *(_QWORD*)(a1 + 5992);
  v11 = *(_QWORD**)(v6 + 152);
  v67 = *(_QWORD*)(a1 + 11352);
  v12 = v11[3];
  if (v12 != 0) {
    v65 = ((__int64 (*)(__int64, __int64, __int64))SdkRoutine_66fd00)(
        a1 + 10160, v12, 1024);
  }
  else {
    v65 = 0;
  }
  v13 = ((__int64 (*)(__int64, _QWORD, _QWORD))SdkRoutine_66fd00)(
      a1 + 10160, v11[1], v11[2]);
  v14 = v11[4] + v13;
  nn_688a40((int**)(a1 + 11240), v14, *(_QWORD*)(a1 + 7856), 1072, 0);
  v15 = *(_QWORD*)(a1 + 7856);
  if (v15 != 0) {
    v16 = v15 + 1072;
  }
  else {
    v16 = 0;
  }
  nn_688a40((int**)(a1 + 11240), v14 + 5024, v16, 16, 0);
  SdkRoutine_671c20(a1, v14 + 1072);
  SdkRoutine_672000(a1, v14 + 2968);
  v17 = *(_DWORD*)(a1 + 356);
  if ((v17 & 0x10) == 0) {
    SdkRoutine_69aee0((int*)&v70_.v70, 22, 0, 28, 0, 0);
    if ((unsigned __int64)(*(_QWORD*)(a1 + 11280) + 56LL) >
        *(_QWORD*)(a1 + 11288)) {
      ((void (*)(__int64))SdkRoutine_64b940)(a1 + 11240);
    }
    v18 = *(_DWORD**)(a1 + 11240);
    if ((unsigned __int64)(v18 + 2) > *(_QWORD*)(a1 + 11248)) {
      SdkRoutine_64b750(a1 + 11240, (__int64)v18,
                        4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 2));
      v18 = *(_DWORD**)(a1 + 11240);
    }
    *v18 = -1610142068;
    v18[1] = v70_.v70;
    v19 = (char*)(v18 + 2);
    v20 = *(char**)(a1 + 11312);
    v21 = *(_QWORD*)(a1 + 11280);
    *(_QWORD*)(a1 + 11240) = v19;
    if (v19 != v20) {
      v64 = v6;
      v22 = *(_QWORD*)(a1 + 11296);
      v23 = (unsigned __int64)(v19 - v20) >> 2;
      v24 = &v20[*(_QWORD*)(a1 + 11336)];
      v25 = *(_QWORD*)(a1 + 11288);
      *(_QWORD*)(a1 + 11312) = v19;
      if (v21 + 32 > v25) {
        v26 = a4;
        v27 = a5;
        v28 = (unsigned __int64)(v19 - v20) >> 2;
        ((void (*)(__int64))SdkRoutine_64b940)(a1 + 11240);
        v21 = *(_QWORD*)(a1 + 11280);
        LODWORD(v23) = v28;
        a5 = v27;
        a4 = v26;
      }
      v29 = *(_QWORD*)(a1 + 11328);
      v30 = &v24[-v22];
      if (v29 != 0) {
        *(_DWORD*)(v29 + 4) =
            (((unsigned __int64)*(unsigned int*)(v29 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v21 + 8) = 0;
        *(_QWORD*)(v21 + 16) = 0;
        *(_QWORD*)(v21 + 24) = 0;
        *(_QWORD*)v21 = 0x100000003LL;
        *(_QWORD*)(a1 + 11328) = v21;
        v21 += 8;
      }
      v6 = v64;
      *(_QWORD*)v21 = v30;
      *(_QWORD*)(v21 + 8) = v20;
      *(_DWORD*)(v21 + 16) = v23;
      *(_BYTE*)(v21 + 20) = 1;
      v21 += 24;
      *(_QWORD*)(a1 + 11280) = v21;
    }
    if ((unsigned __int64)(v21 + 32) > *(_QWORD*)(a1 + 11288)) {
      ((void (*)(__int64))SdkRoutine_64b940)(a1 + 11240);
      v21 = *(_QWORD*)(a1 + 11280);
    }
    v31 = *(_QWORD*)(a1 + 11328);
    if (v31 != 0) {
      *(_DWORD*)(v31 + 4) =
          (((unsigned __int64)*(unsigned int*)(v31 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v21 + 8) = 0;
      *(_QWORD*)(v21 + 16) = 0;
      *(_QWORD*)(v21 + 24) = 0;
      *(_QWORD*)v21 = 0x100000003LL;
      *(_QWORD*)(a1 + 11328) = v21;
      v21 += 8;
    }
    *(_QWORD*)v21 = a6;
    *(_QWORD*)(v21 + 8) = 0;
    *(_DWORD*)(v21 + 16) = 6;
    *(_BYTE*)(v21 + 20) = *(_BYTE*)(v21 + 20) & 0xF8 | 2;
    *(_QWORD*)(a1 + 11280) = v21 + 24;
    v17 = *(_DWORD*)(a1 + 356);
  }
  v80[5] = 0;
  *(_QWORD*)&v80[3] = 0;
  v80[0] = (v17 & 0x14) != 0;
  *(_QWORD*)&v80[1] = 0xFFFFFF00104000LL;
  v32 = SdkRoutine_6668a0(a1);
  (*(void (**)(__int64, _QWORD, _DWORD*, _QWORD, __int64, __int64, _QWORD,
               unsigned __int64*, unsigned __int64*))(
      *(_QWORD*)(*(_QWORD*)(v6 + 8) + 7688LL) + 392LL))(
      v32, *(unsigned int*)(a1 + 5984), v80, *v11, v13, v65, v11[3], &v79,
      &v78);
  v70_.v71 = (__typeof__(v70_.v71)){0};
  memset(v73_.v73, 0, sizeof(v73_.v73));
  v73_.v77 = (__typeof__(v73_.v77)){0};
  v73_.v75 = (__typeof__(v73_.v75)){0};
  v73_.v76 = (__typeof__(v73_.v76)){0};
  v73_.v74 = (__typeof__(v73_.v74)){0};
  v33 = vextq_s8(*(int8x16_t*)(a3 + 8), *(int8x16_t*)(a3 + 8), 8u);
  v70_.v70 = a2;
  *((_QWORD*)&v70_.v71 + 1) = *(_QWORD*)a3;
  v73_.v73[0] = *(_QWORD*)a4;
  v34 = *a5;
  v70_.v72 = v33;
  v35 = *(int8x16_t*)(a4 + 8);
  v73_.v73[3] = v34;
  *(int8x16_t*)&v73_.v73[1] = vextq_s8(v35, v35, 8u);
  v73_.v74 = vextq_s8(*(int8x16_t*)(a5 + 1), *(int8x16_t*)(a5 + 1), 8u);
  nn_688a40((int**)(a1 + 11240), v11[5] + v13, (__int64)&v70_.v70, 136, 1);
  v36 = v11[5];
  v37 = *(_QWORD*)(a1 + 11240);
  v38 = *(_QWORD*)(a1 + 11280) + 56LL;
  v39 = *(_QWORD*)(a1 + 11288);
  v69 = v37;
  if (v38 > v39) {
    ((void (*)(__int64))SdkRoutine_64b940)(a1 + 11240);
  }
  if ((unsigned __int64)(v37 + 28) > *(_QWORD*)(a1 + 11248)) {
    SdkRoutine_64b750(a1 + 11240, v37,
                      4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 7));
    v69 = *(_QWORD*)(a1 + 11240);
  }
  SdkRoutine_685980(&v69, *(_QWORD*)(a1 + 16) + 16LL, v13 + v36 + 104, 24, 0);
  v40 = v69;
  v41 = *(_QWORD*)(a1 + 11312);
  v42 = *(_QWORD*)(a1 + 11280);
  v44 = v69 - v41;
  v43 = v69 == v41;
  *(_QWORD*)(a1 + 11240) = v69;
  if (!v43) {
    v45 = *(_QWORD*)(a1 + 11296);
    v46 = v44 >> 2;
    v47 = *(_QWORD*)(a1 + 11288);
    v48 = *(_QWORD*)(a1 + 11336) + v41;
    *(_QWORD*)(a1 + 11312) = v40;
    if (v42 + 32 > v47) {
      ((void (*)(__int64))SdkRoutine_64b940)(a1 + 11240);
      v42 = *(_QWORD*)(a1 + 11280);
    }
    v49 = *(_QWORD*)(a1 + 11328);
    if (v49 != 0) {
      *(_DWORD*)(v49 + 4) =
          (((unsigned __int64)*(unsigned int*)(v49 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v42 + 8) = 0;
      *(_QWORD*)(v42 + 16) = 0;
      *(_QWORD*)(v42 + 24) = 0;
      *(_QWORD*)v42 = 0x100000003LL;
      *(_QWORD*)(a1 + 11328) = v42;
      v42 += 8;
    }
    *(_QWORD*)v42 = v48 - v45;
    *(_QWORD*)(v42 + 8) = v41;
    *(_DWORD*)(v42 + 16) = v46;
    *(_BYTE*)(v42 + 20) = 1;
    v42 += 24;
    *(_QWORD*)(a1 + 11280) = v42;
  }
  if ((unsigned __int64)(v42 + 32) > *(_QWORD*)(a1 + 11288)) {
    ((void (*)(__int64))SdkRoutine_64b940)(a1 + 11240);
    v42 = *(_QWORD*)(a1 + 11280);
  }
  v50 = *(_QWORD*)(a1 + 11328);
  if (v50 != 0) {
    *(_DWORD*)(v50 + 4) =
        (((unsigned __int64)*(unsigned int*)(v50 + 4) << 32) + 0x100000000LL) >>
        32;
  }
  else {
    *(_QWORD*)(v42 + 8) = 0;
    *(_QWORD*)(v42 + 16) = 0;
    *(_QWORD*)(v42 + 24) = 0;
    *(_QWORD*)v42 = 0x100000003LL;
    *(_QWORD*)(a1 + 11328) = v42;
    v42 += 8;
  }
  *(_QWORD*)v42 = a6;
  *(_QWORD*)(v42 + 8) = 0;
  *(_DWORD*)(v42 + 16) = 6;
  *(_BYTE*)(v42 + 20) = *(_BYTE*)(v42 + 20) & 0xF8 | 2;
  *(_QWORD*)(a1 + 11280) = v42 + 24;
  if (*(_BYTE*)(v67 + 7712) == 1) {
    v81_.v81 = *(_QWORD*)(a1 + 11240);
    v51 = v81_.v81;
    v52 = nvidia_649b10(a1);
    if (v51 + 4 * (unsigned __int64)v52 > *(_QWORD*)(a1 + 11248)) {
      SdkRoutine_64b750(a1 + 11240, v51, 4LL * (*(_DWORD*)(a1 + 11344) + v52));
      v81_.v81 = *(_QWORD*)(a1 + 11240);
    }
    nvidia_649b40(a1, &v81_.v81, v79, v78);
    *(_QWORD*)(a1 + 11240) = v81_.v81;
  }
  else {
    (*(void (**)(__int64, __int64*))(*(_QWORD*)(*(_QWORD*)(v6 + 8) + 7688LL) +
                                     112LL))(v32, &v81_.v81);
    (*(void (**)(__int64, unsigned __int64, unsigned __int64))(
        *(_QWORD*)(*(_QWORD*)(v6 + 8) + 7648LL) + 216LL))(v81_.v81, v79, v78);
  }
  v53 = *(_QWORD*)(a1 + 16);
  v81_.v81 = 0;
  v81_.v82 = 0;
  v54 = *(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64*))(
      *(_QWORD*)(v53 + 7688) + 552LL);
  v55 = SdkRoutine_6668a0(a1);
  result = v54(v55, 0, 0, 3222077441LL, &v81_.v81);
  v57 = *(_QWORD*)(a1 + 10208);
  v58 = v81_.v81 + HIDWORD(v81_.v82);
  if (v81_.v81 == 0) {
    v58 = 0;
  }
  if ((_DWORD)result == 0) {
    v59 = v81_.v81 != 0 ? v81_.v81 + (unsigned int)v81_.v82 : 0LL;
    if (v57 == v59) {
      v60 = *(_QWORD*)(a1 + 10296);
      *(_QWORD*)(a1 + 10208) = v58;
      *(_QWORD*)(a1 + 10296) = v58 - v57 + v60;
      v57 = v58;
    }
  }
  v61 = *(_BYTE*)(a1 + 356);
  *(_QWORD*)(a1 + 10280) = v57;
  if ((v61 & 0x10) == 0) {
    result = (__int64)SdkRoutine_69aee0((int*)&v81_.v81, 23, 2, 4, 0, 0);
    v62 = *(unsigned int**)(a1 + 11240);
    v63 = v81_.v81;
    if ((unsigned __int64)(v62 + 1) > *(_QWORD*)(a1 + 11248)) {
      result =
          SdkRoutine_64b750(a1 + 11240, (__int64)v62,
                            4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 1));
      v62 = *(unsigned int**)(a1 + 11240);
    }
    *v62 = (v63 << 16) | 0x80002E8C;
    *(_QWORD*)(a1 + 11240) = v62 + 1;
  }
  return result;
}

int32x2_t nn_673e60(char a1, char a2, __int64* a3)
{
  int v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  int32x2_t v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  int32x2_t v20;
  __int64 v21;
  int v22;
  int v23;
  int32x2_t v24;
  __int64 v25;
  int32x2_t result;

  if ((a2 & 1) != 0) {
    v3 = *((_DWORD*)a3 + 2);
    v4 = *a3;
    v6 = *((_DWORD*)a3 + 6);
    v5 = *((_DWORD*)a3 + 7);
    v8 = *((_DWORD*)a3 + 4);
    v7 = *((_DWORD*)a3 + 5);
    *((_DWORD*)a3 + 2) = v3 + 1;
    v9 = v4 + 48LL * v3;
    *(_DWORD*)v9 = v8;
    *(_DWORD*)(v9 + 28) = v7;
    if ((a1 & 1) != 0) {
      *(_DWORD*)(v9 + 40) = v5;
      *(_BYTE*)(v9 + 44) = 0;
      *(_DWORD*)(v9 + 20) = 20;
      *(_DWORD*)(v9 + 24) = v6;
      *(_OWORD*)(v9 + 4) = SdkData_bb4590;
      *(_QWORD*)(v9 + 32) = 1;
      v10 = *((_DWORD*)a3 + 2);
      v11 = *a3;
      v12 = *((_DWORD*)a3 + 4);
      PSEUDO_LOW_LANE64(v13, n64_u64, *(__int64*)((char*)a3 + 20));
      v14 = *((_DWORD*)a3 + 7);
      *((_DWORD*)a3 + 2) = v10 + 1;
      v15 = v11 + 48LL * v10;
      *(_DWORD*)v15 = v12;
      *(_DWORD*)(v15 + 20) = 20;
      *(_DWORD*)(v15 + 40) = v14;
      *(_BYTE*)(v15 + 44) = 0;
      *(int32x2_t*)(v15 + 24) = vrev64_s32(v13);
      *(_QWORD*)(v15 + 32) = 1;
      *(_OWORD*)(v15 + 4) = SdkData_bb25b0;
    }
    else {
      *(_QWORD*)(v9 + 32) = 0;
      *(_DWORD*)(v9 + 40) = v5;
      *(_BYTE*)(v9 + 44) = 0;
      *(_DWORD*)(v9 + 20) = 20;
      *(_DWORD*)(v9 + 24) = v6;
      *(_OWORD*)(v9 + 4) = SdkData_bb4130;
    }
  }
  v16 = *((_DWORD*)a3 + 2);
  v17 = *a3;
  v18 = *((_DWORD*)a3 + 4);
  v19 = *((_DWORD*)a3 + 7);
  PSEUDO_LOW_LANE64(v20, n64_u64, *(__int64*)((char*)a3 + 20));
  *((_DWORD*)a3 + 2) = v16 + 1;
  v21 = v17 + 48LL * v16;
  *(_DWORD*)v21 = v18;
  *(_DWORD*)(v21 + 40) = v19;
  *(_BYTE*)(v21 + 44) = 0;
  *(_DWORD*)(v21 + 20) = 20;
  *(_OWORD*)(v21 + 4) = SdkData_bb0fd0;
  *(int32x2_t*)(v21 + 24) = vrev64_s32(v20);
  *(_QWORD*)(v21 + 32) = 3;
  v22 = *((_DWORD*)a3 + 2);
  v23 = *((_DWORD*)a3 + 4);
  PSEUDO_LOW_LANE64(v24, n64_u64, *(__int64*)((char*)a3 + 20));
  LODWORD(v21) = *((_DWORD*)a3 + 7);
  v25 = *a3 + 48LL * v22;
  *((_DWORD*)a3 + 2) = v22 + 1;
  LANES64(result).n64_u64[0] = LANES64_OF(vrev64_s32(v24)).n64_u64[0];
  *(_DWORD*)v25 = v23;
  *(_DWORD*)(v25 + 20) = 20;
  *(_DWORD*)(v25 + 40) = v21;
  *(_BYTE*)(v25 + 44) = 0;
  *(int32x2_t*)(v25 + 24) = result;
  *(_QWORD*)(v25 + 32) = 3;
  *(_OWORD*)(v25 + 4) = SdkData_bb1af0;
  return result;
}

int32x2_t nn_673fd0(__int64* a1, unsigned __int32 a2, unsigned __int32 a3,
                    unsigned __int32 a4)
{
  int v4;
  int32x2_t v5;
  __int64 v6;
  unsigned __int32 v7;
  unsigned __int32 v8;
  int32x2_t result;
  int32x2_t* v10;

  v4 = *((_DWORD*)a1 + 2);
  PSEUDO_LOW_LANE64(v5, n64_u64, *(__int64*)((char*)a1 + 20));
  v6 = *a1;
  v7 = *((_DWORD*)a1 + 4);
  v8 = *((_DWORD*)a1 + 7);
  *((_DWORD*)a1 + 2) = v4 + 1;
  LANES64(result).n64_u64[0] = LANES64_OF(vrev64_s32(v5)).n64_u64[0];
  v10 = (int32x2_t*)(v6 + 48LL * v4);
  LANES64(*(v10)).n64_u32[0] = v7;
  LANES64(*(v10)).n64_u32[1] = 2;
  LANES64(v10[4]).n64_u32[0] = a2;
  LANES64(v10[4]).n64_u32[1] = 0;
  LANES64(v10[5]).n64_u32[0] = v8;
  LANES64(v10[5]).n64_u8[4] = 0;
  LANES64(v10[1]).n64_u32[0] = a3;
  LANES64(v10[1]).n64_u32[1] = 16;
  LANES64(v10[3]).n64_u64[0] = LANES64(result).n64_u64[0];
  LANES64(v10[2]).n64_u32[0] = a4;
  LANES64(v10[2]).n64_u32[1] = 20;
  return result;
}

__int64 nn_674030(__int64 a1, int a2, int a3, int a4)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned __int64 v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char v21;
  int v22;
  int v23;
  __int64 v24;
  int v25;
  int v26;
  int32x2_t v27;
  __int64 v28;
  unsigned int v29;
  int v30;
  __int64 v31;
  int v32;
  int v33;
  int32x2_t v34;
  __int64 v35;
  int8x16_t v36;
  uint32x4_t v37;
  int8x16_t v38;
  int v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  __int64 v66;
  int v67;
  int v68;
  int v69;
  int v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  __int64 v75;
  int v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;
  __int64 v81;
  __int128 v82;
  __int128 v83;
  __int64 v84;
  int v85;
  int v86;
  __int64 v87;
  int v88;
  int v89;
  int32x2_t v90;
  __int64 v91;
  int32x2_t v92;
  int v93;
  __int64 v94;
  int v95;
  int v96;
  __int64 v97;
  int v98;
  int v99;
  int v100;
  int v101;
  __int64 v102;
  int v103;
  int v104;
  __int64 v105;
  int v106;
  int32x2_t v107;
  int v108;
  int v109;
  __int64 v110;
  int v111;
  int v112;
  unsigned int v113;
  int v114;
  int v115;
  __int64 v116;
  int v117;
  int32x2_t v118;
  __int64 v119;
  int v120;
  int v121;
  int32x2_t v122;
  __int64 v123;
  int v124;
  int32x2_t v125;
  __int64 v126;
  int32x2_t v127;
  int v128;
  __int64 v129;
  int v130;
  __int64 v131;
  int v132;
  unsigned __int32 v133;
  bool v134;
  int32x2_t v135;
  unsigned __int32 v136;
  _BOOL4 v137;
  int32x2_t v138;
  int32x2_t* v139;
  int v140;
  int v141;
  int v142;
  __int64 v143;
  bool v144;
  int v145;
  int v146;
  int32x2_t v147;
  int32x2_t v148;
  _BOOL4 v149;
  int16x4_t v150;
  __int64 v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int32x2_t v156;
  int v157;
  __int64 v158;
  int v159;
  int v160;
  __int64 v161;
  unsigned __int64 v162;
  int v163;
  int v164;
  __int64 v165;
  int v166;
  int32x2_t v167;
  __int64 v168;
  __int128 v169;
  int v170;
  __int64 v171;
  int v172;
  int v173;
  int32x2_t v174;
  __int64 v175;
  int v176;
  int v177;
  int32x2_t v178;
  __int64 v179;
  int v180;
  int32x2_t v181;
  __int64 v182;
  int32x2_t v183;
  int v184;
  __int64 v185;
  int32x2_t v186;
  int v187;
  __int64 v188;
  int v189;
  int32x2_t v190;
  __int64 v191;
  int v192;
  __int64 v193;
  int v194;
  unsigned int v195;
  unsigned int v196;
  int v197;
  __int64 v198;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  __int64 v204;
  int v205;
  int v206;
  int32x2_t v207;
  __int64 v208;
  int v209;
  int v210;
  int v211;
  __int64 v212;
  int v213;
  int v214;
  int32x2_t v215;
  int v216;
  __int64 v217;
  int v218;
  int32x2_t v219;
  int v220;
  __int64 v221;
  int v222;
  int v223;
  int32x2_t v224;
  __int64 v225;
  int v226;
  int32x2_t v227;
  __int64 v228;
  int32x2_t v229;
  __int64 v230;
  int v231;
  __int64 v232;
  int v233;
  int v234;
  int v235;
  int v236;
  int v237;
  __int128 v238;
  int v239;
  __int64 v240;
  int v241;
  int v242;
  int32x2_t v243;
  __int64 v244;
  int v245;
  int v246;
  int32x2_t v247;
  __int64 v248;
  int32x2_t v249;
  int v250;
  __int64 v251;
  int32x2_t v252;
  int v253;
  __int64 v254;
  int v255;
  __int64 v256;
  int v257;
  int v258;
  int v259;
  int v260;
  int v261;
  __int64 v262;
  __int64 v263;
  int v264;
  int v265;
  int v266;
  int v267;
  int v268;
  int v269;
  __int64 v270;
  int v271;
  __int64 v272;
  __int64 v273;
  int v274;
  int v275;
  int v276;
  int v277;
  int v278;
  int v279;
  int v280;
  int32x2_t v281;
  __int64 v282;
  int v283;
  int v284;
  int32x2_t v285;
  __int64 v286;
  int v287;
  __int64 v288;
  int v289;
  int v290;
  int v291;
  int v292;
  __int64 v293;
  bool v294;
  int v295;
  int v296;
  int32x2_t v297;
  int32x2_t v298;
  _BOOL4 v299;
  int16x4_t v300;
  __int64 v301;
  int v302;
  int v303;
  int v304;
  unsigned __int32 v305;
  int32x2_t v306;
  int v307;
  int v308;
  __int64 v309;
  int v310;
  int32x2_t v311;
  __int64 v312;
  int v313;
  int v314;
  __int64 v315;
  int32x2_t v316;
  __int64 v317;
  int v318;
  int v319;
  __int64 v320;
  int v321;
  int32x2_t v322;
  __int64 v323;
  int v324;
  int v325;
  int32x2_t v326;
  __int64 v327;
  int v328;
  int32x2_t v329;
  int v330;
  __int64 v331;
  int v332;
  __int64 v333;
  int32x2_t v334;
  int v335;
  int v336;
  __int64 v337;
  int v338;
  int v339;
  __int64 v340;
  int v341;
  int32x2_t v342;
  __int64 v343;
  int v344;
  int v345;
  __int64 v346;
  int32x2_t v347;
  __int64 v348;
  int v349;
  int v350;
  __int64 v351;
  int v352;
  int32x2_t v353;
  __int64 v354;
  int v355;
  int v356;
  int32x2_t v357;
  __int64 v358;
  int v359;
  int v360;
  __int64 v361;
  int v362;
  int32x2_t v363;
  __int64 v364;
  int v365;
  int v366;
  __int64 v367;
  unsigned __int64 v368;
  int v369;
  __int64 v370;
  unsigned __int64 v371;
  int v372;
  int v373;
  int32x2_t v374;
  __int64 v375;
  int v376;
  int32x2_t v377;
  __int64 v378;
  int v379;
  int32x2_t v380;
  __int64 v381;
  int v382;
  __int64 v383;
  unsigned __int64 v384;
  int v385;
  __int64 v386;
  unsigned __int64 v387;
  int v388;
  int32x2_t v389;
  int v390;
  int v391;
  __int64 v392;
  int v393;
  int32x2_t v394;
  __int64 v395;
  int v396;
  int32x2_t v397;
  int v398;
  __int64 v399;
  int v400;
  int v401;
  int32x2_t v402;
  __int64 v403;
  int v404;
  int32x2_t v405;
  __int64 v406;
  int v407;
  int32x2_t v408;
  __int64 v409;
  int32x2_t v410;
  __int64 v411;
  int32x2_t v412;
  __int64 v413;
  int32x2_t v414;
  __int64 v415;
  int32x2_t v416;
  __int64 v417;
  int32x2_t v418;
  __int64 v419;
  int32x2_t v420;
  __int64 v421;
  __int64 v422;
  unsigned __int64 v423;
  int v424;
  __int64 v425;
  unsigned __int64 v426;
  int32x2_t v427;
  int v428;
  __int64 v429;
  int32x2_t v430;
  int v431;
  __int64 v432;
  int32x2_t v433;
  int v434;
  __int64 v435;
  bool v436;
  int v437;
  int v438;
  int32x2_t v439;
  int32x2_t v440;
  int16x4_t v441;
  __int64 v442;
  int v443;
  int8x8_t v444;
  int v445;
  int v446;
  int v447;
  int32x2_t v448;
  __int64 v449;
  int v450;
  int v451;
  int32x2_t v452;
  int v453;
  __int64 v454;
  int v455;
  int32x2_t v456;
  __int64 v457;
  int v458;
  int v459;
  int32x2_t v460;
  __int64 v461;
  int v462;
  int v463;
  int v464;
  __int64 v465;
  int v466;
  int v467;
  int32x2_t v468;
  __int64 v469;
  __int128 v470;
  int v471;
  int v472;
  int v473;
  int v474;
  int v475;
  unsigned int v476;
  int v477;
  int32x2_t v478;
  __int64 v479;
  int v480;
  int v481;
  int v482;
  int v483;
  int v484;
  __int64 v485;
  __int64 v486;
  int v487;
  __int64 v488;
  int v489;
  int v490;
  __int64 v491;
  int v492;
  int v493;
  int32x2_t v494;
  __int64 v495;
  int v496;
  int v497;
  int32x2_t v498;
  __int128 v499;
  int v500;
  __int64 v501;
  int v502;
  int v503;
  int32x2_t v504;
  __int64 v505;
  int v506;
  int v507;
  int32x2_t v508;
  __int64 v509;
  int v510;
  int32x2_t v511;
  __int64 v512;
  int v513;
  __int64 v514;
  unsigned __int64 v515;
  int v516;
  int32x2_t v517;
  __int64 v518;
  int v519;
  __int64 v520;
  unsigned __int64 v521;
  int v522;
  int32x2_t v523;
  int v524;
  __int64 v525;
  __int128 v526;
  int v527;
  __int64 v528;
  int v529;
  int v530;
  int32x2_t v531;
  __int64 v532;
  int v533;
  int v534;
  int v535;
  int32x2_t v536;
  __int64 v537;
  int v538;
  int v539;
  int32x2_t v540;
  int v541;
  __int64 v542;
  int v543;
  int v544;
  int32x2_t v545;
  int v546;
  __int64 v547;
  int v548;
  int v549;
  int32x2_t v550;
  __int64 v551;
  int v552;
  int v553;
  int32x2_t v554;
  int v555;
  int v556;
  __int64 v557;
  int v558;
  int32x2_t v559;
  __int64 v560;
  int v561;
  int v562;
  int32x2_t v563;
  __int64 v564;
  int v565;
  int32x2_t v566;
  __int64 v567;
  int v568;
  int32x2_t v569;
  __int64 v570;
  int v571;
  int v572;
  __int64 v573;
  int v574;
  int32x2_t v575;
  __int64 v576;
  int v577;
  __int64 v578;
  int v579;
  int v580;
  int32x2_t v581;
  __int64 v582;
  int v583;
  int v584;
  int v585;
  int32x2_t v586;
  __int64 v587;
  int v588;
  int v589;
  int v590;
  int v591;
  int v592;
  int32x2_t v593;
  __int64 v594;
  int v595;
  int v596;
  int v597;
  int v598;
  int v599;
  __int64 v600;
  int v601;
  int v602;
  int32x2_t v603;
  __int64 v604;
  int v605;
  __int64 v606;
  int32x2_t v607;
  int v608;
  __int64 v609;
  int v610;
  int32x2_t v611;
  int v612;
  int v613;
  __int64 v614;
  int32x2_t v615;
  int v616;
  int v617;
  __int64 v618;
  int v619;
  int32x2_t v620;
  int v621;
  __int64 v622;
  int v623;
  int32x2_t v624;
  __int64 v625;
  int v626;
  __int64 v627;
  unsigned __int64 v628;
  int32x2_t v629;
  int v630;
  __int64 v631;
  int v632;
  __int64 v633;
  int v634;
  int v635;
  int32x2_t v636;
  __int64 v637;
  int v638;
  __int64 v639;
  unsigned __int32 v640;
  int32x2_t v641;
  int v642;
  __int64 v643;
  int v644;
  int v645;
  int32x2_t v646;
  __int64 v647;
  int v648;
  int v649;
  int32x2_t v650;
  __int128 v651;
  int v652;
  __int64 v653;
  int32x2_t v654;
  int v655;
  __int64 v656;
  int v657;
  int v658;
  __int64 v659;
  unsigned __int64 v660;
  int v661;
  __int64 v662;
  int32x2_t v663;
  int v664;
  __int64 v665;
  int v666;
  int32x2_t v667;
  int v668;
  int v669;
  __int64 v670;
  int v671;
  int32x2_t v672;
  int v673;
  int v674;
  __int64 v675;
  int v676;
  int32x2_t v677;
  int v678;
  __int64 v679;
  int v680;
  int32x2_t v681;
  int v682;
  __int64 v683;
  int v684;
  unsigned __int64 v685;
  int v686;
  int v687;
  unsigned int v688;
  int v689;
  int v690;
  int v691;
  int v692;
  int v693;
  int v694;
  int v695;
  int v696;
  int v697;
  int v698;
  int v699;
  int v700;
  int v701;
  int v702;
  int v703;
  int v704;
  int v705;
  __int64 v706;
  int v707;
  int v708;
  int32x2_t v709;
  __int64 v710;
  __int128 v711;
  int v712;
  int v713;
  __int64 v714;
  int v715;
  int v716;
  int32x2_t v717;
  __int64 v718;
  int v719;
  int v720;
  int32x2_t v721;
  __int128 v722;
  int v723;
  __int64 v724;
  int v725;
  int32x2_t v726;
  int v727;
  __int64 v728;
  int v729;
  int v730;
  __int64 v731;
  int v732;
  int v733;
  int32x2_t v734;
  __int64 v735;
  int v736;
  int v737;
  int v738;
  __int64 v739;
  int v740;
  int v741;
  int32x2_t v742;
  __int64 v743;
  __int64 result;
  int v745;
  __int64 v746;
  int v747;
  int v748;
  unsigned __int32 v749;
  unsigned __int32 v750;
  int v751;
  __int64 v752;
  int v753;
  int v754;
  int32x2_t v755;
  __int64 v756;
  int v757;
  int v758;
  int v759;
  unsigned __int32 v760;
  unsigned __int32 v761;
  __int64* v762;
  int v763;
  int v764;
  __int64* v765;
  __int64* v766;
  int v767;
  int v768;
  unsigned __int32 v769;
  unsigned __int32 v770;
  int v771;
  __int64 v772;
  __int64 v773;
  int v774;
  __int64 v775;
  __int64 v776;
  __int64 v777;
  _DWORD* v778;
  __int64 v779;
  __int64 v780;
  int v781;
  int v782;
  bool v783;
  bool v784;
  __int64 v785;
  __int64 v786;
  unsigned int v787;
  __int64 v788;
  __int64 v789;
  __int64 v790;
  unsigned int v791;
  __int64 v792;
  char v793;
  unsigned int v794;
  int v795;
  int v796;
  __int64 v797;
  int v798;
  __int64 v799;
  _DWORD* v800;
  bool v802;
  __int64 v803;
  __int64 v804;
  int v805;
  __int64 v806;
  int v807;
  __int64 v808;
  __int64 v809;
  int v810;
  int v811;
  int v812;
  int v813;
  int v814;
  int v815;
  _DWORD* v817;
  unsigned int v818;
  unsigned int v819;
  __int64 v820;
  unsigned int v821;
  __int64 v822;
  __int64 v823;
  __int64 v824;
  int v825;
  __int64 v826;
  int v827;
  int v828;
  __int64 vars10;
  __int64 _28;

  v8 = 1;
  nn_673e60(*(_BYTE*)(a1 + 163), 1, (__int64*)a1);
  if ((unsigned int)(a2 - 5) <= 0x2D) {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0x400000004000LL;
    v16 = 1;
    v17 = 1;
    switch (a2) {
    case 5:
      goto LABEL_36;
    case 6:
    case 15:
      goto LABEL_5;
    case 7:
    case 14:
    case 35:
    case 36:
      v8 = 0;
      goto LABEL_4;
    case 8:
    case 9:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 33:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 47:
    case 48:
    case 49:
    case 50:
      goto LABEL_4;
    case 10:
    case 11:
      v9 = 0;
      v10 = 0;
      v8 = 0;
      goto LABEL_5;
    case 12:
      v9 = 0;
      v10 = 0;
      goto LABEL_27;
    case 13:
      v8 = 0;
      goto LABEL_24;
    case 16:
    LABEL_24:
      v16 = 0;
      v17 = 0;
    LABEL_4:
      v9 = 1;
      v10 = 1;
      goto LABEL_5;
    case 17:
    case 18:
    case 19:
    case 20:
    case 31:
    case 32:
    case 34:
    case 37:
    case 44:
    case 45:
    case 46:
      break;
    default:
      abort();
    }
  }
  v9 = 0;
  v10 = 0;
  v8 = 0;
LABEL_27:
  v16 = 0;
  v17 = 0;
LABEL_5:
  v14 = v17;
  v13 = v16;
  v12 = v8;
  v11 = v8;
  if (a3 == 0) {
    if ((*(_BYTE*)(a1 + 163) & 1) != 0) {
      v15 = 0x400100004000LL;
      switch (a2) {
      case 6:
        goto LABEL_36;
      case 7:
        goto LABEL_22;
      case 8:
        v15 = 0x400100004303LL;
        goto LABEL_36;
      case 9:
        v15 = 0x430500004001LL;
        goto LABEL_36;
      case 10:
        v15 = 0x430400004000LL;
        goto LABEL_36;
      case 11:
        goto LABEL_20;
      case 12:
        v15 = 0x430500004000LL;
        goto LABEL_36;
      case 13:
        goto LABEL_21;
      case 14:
        v15 = 0x430400004303LL;
        goto LABEL_36;
      case 15:
        v15 = 0x430500004302LL;
        goto LABEL_36;
      case 16:
        v15 = 0x430500004303LL;
        goto LABEL_36;
      case 17:
        v15 = LANES64_OF(vdup_n_s32(0x4001u)).n64_u64[0];
        goto LABEL_36;
      default:
        break;
      }
    }
    else {
      if (a2 > 10) {
        switch (a2) {
        case 11:
        LABEL_20:
          v15 = 0x400000004302LL;
          break;
        case 13:
        LABEL_21:
          v15 = 0x400000004303LL;
          break;
        case 17:
          v15 = 0x430200004001LL;
          break;
        default:
          goto LABEL_37;
        }
      }
      else {
        switch (a2) {
        case 6:
          v15 = 0x430200004000LL;
          break;
        case 7:
        LABEL_22:
          v15 = 0x400000004001LL;
          break;
        case 8:
          v15 = 0x430200004303LL;
          break;
        default:
          goto LABEL_37;
        }
      }
    LABEL_36:
      *(_QWORD*)(a1 + 136) = v15;
      *(_BYTE*)(a1 + 161) = 1;
    }
  }
LABEL_37:
  if (a2 <= 31) {
    if ((unsigned int)(a2 - 18) < 3) {
      v20 = 32774;
    LABEL_61:
      *(_DWORD*)(a1 + 144) = v20;
      *(_BYTE*)(a1 + 162) = 1;
      *(int32x2_t*)(a1 + 148) = vdup_n_s32(0x4001u);
    LABEL_62:
      *(_WORD*)(a1 + 160) = 0;
      goto LABEL_63;
    }
    if (a2 == 17) {
      v19 = 16385;
      v20 = 32774;
    }
    else {
      if (a2 != 31) {
        goto LABEL_53;
      }
      v19 = 16385;
      v20 = 32779;
    }
  LABEL_51:
    v21 = 1;
    v18 = 16385;
    goto LABEL_52;
  }
  v18 = 16385;
  v19 = 0x4000;
  v20 = 32774;
  v21 = 1;
  if (a2 > 43) {
    if ((unsigned int)(a2 - 44) < 3) {
      goto LABEL_52;
    }
    goto LABEL_53;
  }
  if (a2 == 32) {
  LABEL_60:
    v20 = 32779;
    goto LABEL_61;
  }
  if (a2 != 34) {
    if (a2 == 37) {
      v18 = 17155;
      v19 = 16385;
      goto LABEL_52;
    }
  LABEL_53:
    if (a3 != 0) {
      if (a3 == 1) {
        v475 = (2 * v11) | (4 * v13) | v9;
        v20 = 32774;
        if (v475 <= 4) {
          if ((unsigned int)(v475 - 1) < 4) {
            v21 = 0;
            v19 = 0x4000;
            v18 = 0x4000;
            goto LABEL_52;
          }
          v19 = 0x4000;
        LABEL_329:
          v21 = 1;
          v18 = 0x4000;
          goto LABEL_52;
        }
        if (v475 == 5) {
          v18 = 16385;
          v19 = 0x4000;
        }
        else {
          if (v475 != 6) {
            goto LABEL_61;
          }
          v18 = 0x4000;
          v19 = 16385;
        }
      LABEL_187:
        v21 = 1;
        goto LABEL_52;
      }
      if (a3 != 2) {
        if ((*(_BYTE*)(a1 + 162) & 1) == 0) {
          goto LABEL_63;
        }
        goto LABEL_62;
      }
      v22 = (2 * v11) | (4 * v13) | v9;
      if (v22 <= 3) {
        if (v22 > 1) {
          if (v22 != 2) {
            v21 = 0;
            v19 = 0x4000;
            v20 = 32774;
            v18 = 0x4000;
            goto LABEL_52;
          }
          v20 = 32778;
          goto LABEL_61;
        }
        if (v22 == 0) {
          v19 = 0x4000;
          v20 = 32774;
          goto LABEL_329;
        }
        goto LABEL_60;
      }
      if (v22 > 5) {
        if (v22 != 6) {
          v19 = 16385;
          v20 = 32776;
          goto LABEL_51;
        }
        v18 = 0x4000;
        v19 = 16385;
      }
      else {
        if (v22 == 4) {
          v19 = 16385;
          v20 = 32775;
          goto LABEL_51;
        }
        v18 = 16385;
        v19 = 0x4000;
      }
    }
    else {
      v476 = (2 * v11) | (4 * v13) | v9;
      v19 = SdkData_bb0430[v476];
      v18 = SdkData_bb0690[v476];
    }
    v20 = 32774;
    goto LABEL_187;
  }
LABEL_52:
  *(_BYTE*)(a1 + 160) = v21;
  *(_BYTE*)(a1 + 162) = 0;
  *(_DWORD*)(a1 + 148) = v18;
  *(_DWORD*)(a1 + 152) = v19;
  *(_DWORD*)(a1 + 144) = v20;
LABEL_63:
  switch (a2) {
  case 5:
  case 12:
  case 13:
  case 16:
    v23 = *(_DWORD*)(a1 + 8);
    v24 = *(_QWORD*)a1;
    v25 = *(_DWORD*)(a1 + 16);
    v26 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v27, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v23 + 1;
    v28 = v24 + 48LL * v23;
    *(_DWORD*)v28 = v25;
    *(_DWORD*)(v28 + 20) = 20;
    *(_OWORD*)(v28 + 4) = SdkData_bb2a80;
    *(int32x2_t*)(v28 + 24) = vrev64_s32(v27);
    *(_QWORD*)(v28 + 32) = 4;
    goto LABEL_65;
  case 6:
  case 8:
  case 10:
  case 14:
    v39 = *(_DWORD*)(a1 + 8);
    v40 = *(_QWORD*)a1;
    v41 = *(_DWORD*)(a1 + 16);
    v33 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v34, n64_u64, *(unsigned __int64*)(a1 + 20));
    v29 = *(_DWORD*)(a1 + 156) == 0;
    *(_DWORD*)(a1 + 8) = v39 + 1;
    v35 = v40 + 48LL * v39;
    *(_DWORD*)v35 = v41;
    v37 = vmovl_u16(vdup_n_s16(v29));
    v36 = COERCE_AS(int8x16_t, SdkData_bb3330);
    v38 = COERCE_AS(int8x16_t, SdkData_bb25d0);
    goto LABEL_72;
  case 7:
  case 9:
  case 11:
  case 15:
    v30 = *(_DWORD*)(a1 + 8);
    v31 = *(_QWORD*)a1;
    v134 = *(_DWORD*)(a1 + 156) == 0;
    v32 = *(_DWORD*)(a1 + 16);
    v33 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v34, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v30 + 1;
    v29 = v134;
    v35 = v31 + 48LL * v30;
    *(_DWORD*)v35 = v32;
    v36 = COERCE_AS(int8x16_t, SdkData_bb25c0);
    v37 = vmovl_u16(vdup_n_s16(v29));
    v38 = COERCE_AS(int8x16_t, SdkData_bb1880);
  LABEL_72:
    *(_DWORD*)(v35 + 20) = 20;
    *(int8x16_t*)(v35 + 4) =
        vbslq_s8(vcltzq_s32(vshlq_n_s32(v37, 0x1Fu)), v38, v36);
    goto LABEL_73;
  case 21:
    v130 = *(_DWORD*)(a1 + 8);
    v131 = *(_QWORD*)a1;
    v132 = *(_DWORD*)(a1 + 156);
    v133 = *(_DWORD*)(a1 + 16);
    v134 = v132 == 0;
    PSEUDO_LOW_LANE64(v135, n64_u64, *(unsigned __int64*)(a1 + 20));
    v136 = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v130 + 1;
    v137 = v132 != 0;
    LANES64(v138).n64_u64[0] = LANES64_OF(vrev64_s32(v135)).n64_u64[0];
    v29 = v134;
    v139 = (int32x2_t*)(v131 + 48LL * v130);
    if (v134) {
      v140 = 2;
    }
    else {
      v140 = 3;
    }
    LANES64(*(v139)).n64_u32[0] = v133;
    LANES64(*(v139)).n64_u32[1] = 2;
    LANES64(v139[1]).n64_u32[0] = v137;
    LANES64(v139[1]).n64_u32[1] = 16;
    LANES64(v139[2]).n64_u32[0] = v140;
    LANES64(v139[2]).n64_u32[1] = 20;
    goto LABEL_214;
  case 22:
    v291 = *(_DWORD*)(a1 + 156);
    v292 = *(_DWORD*)(a1 + 8);
    v293 = *(_QWORD*)a1;
    v294 = v291 == 0;
    v295 = *(_DWORD*)(a1 + 16);
    v296 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v297, n64_u64, *(unsigned __int64*)(a1 + 20));
    v29 = v291 == 0;
    *(_DWORD*)(a1 + 8) = v292 + 1;
    LANES64(v298).n64_u64[0] = LANES64_OF(vrev64_s32(v297)).n64_u64[0];
    v299 = v291 != 0;
    LANES64(v300).n64_u64[0] = LANES64_OF(vdup_n_s16(v29)).n64_u64[0];
    v301 = v293 + 48LL * v292;
    if (v294) {
      v302 = 18;
    }
    else {
      v302 = 3;
    }
    *(_DWORD*)v301 = v295;
    *(_DWORD*)(v301 + 20) = v302;
    *(_DWORD*)(v301 + 40) = v296;
    *(_BYTE*)(v301 + 44) = 0;
    if (v294) {
      v303 = 2;
    }
    else {
      v303 = 3;
    }
    *(int8x16_t*)(v301 + 4) =
        vbslq_s8(vcltzq_s32(vshlq_n_s32(vmovl_u16(v300), 0x1Fu)),
                 COERCE_AS(int8x16_t, SdkData_bb3340),
                 COERCE_AS(int8x16_t, SdkData_bb3330));
    *(int32x2_t*)(v301 + 24) = v298;
    *(_QWORD*)(v301 + 32) = 4;
    v304 = *(_DWORD*)(a1 + 8);
    v305 = *(_DWORD*)(a1 + 16);
    v136 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v306, n64_u64, *(unsigned __int64*)(a1 + 20));
    v139 = (int32x2_t*)(*(_QWORD*)a1 + 48LL * v304);
    *(_DWORD*)(a1 + 8) = v304 + 1;
    LANES64(v138).n64_u64[0] = LANES64_OF(vrev64_s32(v306)).n64_u64[0];
    LANES64(*(v139)).n64_u32[0] = v305;
    LANES64(v139[2]).n64_u32[1] = v303;
    LANES64(v139[1]).n64_u32[1] = v299;
    LANES64(v139[2]).n64_u32[0] = 24;
    *(unsigned __int64*)((char*)LANES64(*(v139)).n64_u64 + 4) = 0x400000003LL;
    goto LABEL_214;
  case 23:
    v210 = *(_DWORD*)(a1 + 128);
    if ((v210 & 1) == 0) {
      *(_DWORD*)(a1 + 128) = v210 | 1;
      *(_DWORD*)(a1 + 40) = 1056964608;
      *(_QWORD*)(a1 + 32) = 0x3F0000003F000000LL;
    }
    v211 = *(_DWORD*)(a1 + 8);
    v212 = *(_QWORD*)a1;
    v213 = *(_DWORD*)(a1 + 16);
    v29 = 0;
    *(_DWORD*)(a1 + 28) = 0;
    PSEUDO_LOW_LANE64(v167, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v211 + 1;
    v168 = v212 + 48LL * v211;
    *(_DWORD*)v168 = v213;
    v169 = SdkData_bb4cf0;
    goto LABEL_122;
  case 24:
    v231 = *(_DWORD*)(a1 + 8);
    v232 = *(_QWORD*)a1;
    v233 = *(_DWORD*)(a1 + 156);
    v235 = *(_DWORD*)(a1 + 24);
    v234 = *(_DWORD*)(a1 + 28);
    v237 = *(_DWORD*)(a1 + 16);
    v236 = *(_DWORD*)(a1 + 20);
    *(_DWORD*)(a1 + 8) = v231 + 1;
    v204 = v232 + 48LL * v231;
    *(_DWORD*)v204 = v237;
    if (v233 != 0) {
      v29 = 0;
      v238 = SdkData_bb3840;
      goto LABEL_133;
    }
    *(_DWORD*)(v204 + 28) = v236;
    *(_DWORD*)(v204 + 40) = v234;
    *(_BYTE*)(v204 + 44) = 0;
    *(_DWORD*)(v204 + 20) = 20;
    *(_DWORD*)(v204 + 24) = v235;
    *(_OWORD*)(v204 + 4) = SdkData_bb25d0;
    *(_QWORD*)(v204 + 32) = 4;
    v642 = *(_DWORD*)(a1 + 8);
    v643 = *(_QWORD*)a1;
    v644 = *(_DWORD*)(a1 + 16);
    v645 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v646, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v642 + 1;
    v647 = v643 + 48LL * v642;
    *(_DWORD*)v647 = v644;
    *(_DWORD*)(v647 + 20) = 20;
    *(_DWORD*)(v647 + 40) = v645;
    *(_BYTE*)(v647 + 44) = 0;
    *(_OWORD*)(v647 + 4) = SdkData_bb1880;
    *(int32x2_t*)(v647 + 24) = vrev64_s32(v646);
    *(_QWORD*)(v647 + 32) = 9;
    v648 = *(_DWORD*)(a1 + 8);
    v649 = *(_DWORD*)(a1 + 16);
    v26 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v650, n64_u64, *(unsigned __int64*)(a1 + 20));
    v28 = *(_QWORD*)a1 + 48LL * v648;
    *(_DWORD*)(a1 + 8) = v648 + 1;
    *(_DWORD*)v28 = v649;
    v651 = SdkData_bb3640;
    goto LABEL_296;
  case 25:
    v287 = *(_DWORD*)(a1 + 8);
    v288 = *(_QWORD*)a1;
    v289 = *(_DWORD*)(a1 + 156);
    v235 = *(_DWORD*)(a1 + 24);
    v234 = *(_DWORD*)(a1 + 28);
    v290 = *(_DWORD*)(a1 + 16);
    v236 = *(_DWORD*)(a1 + 20);
    *(_DWORD*)(a1 + 8) = v287 + 1;
    v204 = v288 + 48LL * v287;
    *(_DWORD*)v204 = v290;
    if (v289 != 0) {
      v29 = 0;
      v238 = SdkData_bb5160;
    LABEL_133:
      *(_OWORD*)(v204 + 4) = v238;
      *(_DWORD*)(v204 + 28) = v236;
      *(_DWORD*)(v204 + 40) = v234;
      *(_BYTE*)(v204 + 44) = 0;
      *(_DWORD*)(v204 + 20) = 20;
      *(_DWORD*)(v204 + 24) = v235;
      goto LABEL_217;
    }
    *(_DWORD*)(v204 + 28) = v236;
    *(_DWORD*)(v204 + 40) = v234;
    *(_BYTE*)(v204 + 44) = 0;
    *(_DWORD*)(v204 + 20) = 20;
    *(_DWORD*)(v204 + 24) = v235;
    *(_OWORD*)(v204 + 4) = SdkData_bb25d0;
    *(_QWORD*)(v204 + 32) = 4;
    v751 = *(_DWORD*)(a1 + 8);
    v752 = *(_QWORD*)a1;
    v753 = *(_DWORD*)(a1 + 16);
    v754 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v755, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v751 + 1;
    v756 = v752 + 48LL * v751;
    *(_DWORD*)v756 = v753;
    *(_DWORD*)(v756 + 20) = 20;
    *(_DWORD*)(v756 + 40) = v754;
    *(_BYTE*)(v756 + 44) = 0;
    *(_OWORD*)(v756 + 4) = SdkData_bb1880;
    *(int32x2_t*)(v756 + 24) = vrev64_s32(v755);
    *(_QWORD*)(v756 + 32) = 9;
    v757 = *(_DWORD*)(a1 + 8);
    v758 = *(_DWORD*)(a1 + 16);
    v26 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v650, n64_u64, *(unsigned __int64*)(a1 + 20));
    v28 = *(_QWORD*)a1 + 48LL * v757;
    *(_DWORD*)(a1 + 8) = v757 + 1;
    *(_DWORD*)v28 = v758;
    v651 = SdkData_bb4170;
  LABEL_296:
    *(_OWORD*)(v28 + 4) = v651;
    *(_DWORD*)(v28 + 20) = 20;
    *(int32x2_t*)(v28 + 24) = vrev64_s32(v650);
    *(_QWORD*)(v28 + 32) = 4;
  LABEL_65:
    *(_DWORD*)(v28 + 40) = v26;
    *(_BYTE*)(v28 + 44) = 0;
    v29 = 1;
    if (a3 == 2) {
      goto LABEL_74;
    }
    goto LABEL_225;
  case 26:
    v255 = *(_DWORD*)(a1 + 8);
    v256 = *(_QWORD*)a1;
    v258 = *(_DWORD*)(a1 + 16);
    v257 = *(_DWORD*)(a1 + 20);
    v259 = *(_DWORD*)(a1 + 156);
    v261 = *(_DWORD*)(a1 + 24);
    v260 = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v255 + 1;
    v29 = v259 == 0;
    v262 = v256 + 48LL * v255;
    *(_DWORD*)v262 = v258;
    *(_DWORD*)(v262 + 12) = 18;
    *(_QWORD*)(v262 + 4) = 0x1200000001LL;
    *(_DWORD*)(v262 + 24) = v261;
    *(_DWORD*)(v262 + 28) = v257;
    *(_DWORD*)(v262 + 40) = v260;
    if (v259 != 0) {
      v263 = 0x400000004LL;
      v264 = 6;
      v265 = 24;
      *(_BYTE*)(v262 + 44) = 0;
      v266 = 20;
      v267 = 0;
      v268 = 3;
      v269 = 4;
      *(_QWORD*)(v262 + 16) = 0x100000018LL;
      *(_QWORD*)(v262 + 32) = 0x100000004LL;
      v270 = 0x1800000012LL;
      v271 = 3;
      *(_DWORD*)(a1 + 16) = 6;
      v272 = 0x400000002LL;
      v273 = 0x400000006LL;
      v274 = 18;
    }
    else {
      v266 = 2;
      v268 = 9;
      *(_BYTE*)(v262 + 44) = 0;
      *(_QWORD*)(v262 + 16) = 18;
      *(_QWORD*)(v262 + 32) = 0x100000009LL;
      *(_DWORD*)(a1 + 16) = 6;
      v652 = *(_DWORD*)(a1 + 8);
      v653 = *(_QWORD*)a1;
      PSEUDO_LOW_LANE64(v654, n64_u64, *(unsigned __int64*)(a1 + 20));
      v655 = *(_DWORD*)(a1 + 28);
      *(_DWORD*)(a1 + 8) = v652 + 1;
      v656 = v653 + 48LL * v652;
      *(_DWORD*)(v656 + 40) = v655;
      *(_BYTE*)(v656 + 44) = 0;
      *(_OWORD*)v656 = SdkData_bb2cc0;
      *(_QWORD*)(v656 + 16) = 0x1400000014LL;
      *(int32x2_t*)(v656 + 24) = vrev64_s32(v654);
      *(_QWORD*)(v656 + 32) = 9;
      v657 = *(_DWORD*)(a1 + 8);
      v658 = *(_DWORD*)(a1 + 16);
      LODWORD(v656) = *(_DWORD*)(a1 + 28);
      v659 = *(_QWORD*)a1 + 48LL * v657;
      v265 = 18;
      v660 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
      *(_DWORD*)(a1 + 8) = v657 + 1;
      v269 = 9;
      *(_DWORD*)v659 = v658;
      *(_DWORD*)(v659 + 40) = v656;
      *(_BYTE*)(v659 + 44) = 0;
      v274 = 16;
      *(_DWORD*)(v659 + 20) = 20;
      *(_QWORD*)(v659 + 24) = v660;
      *(_QWORD*)(v659 + 32) = 9;
      v270 = 0x1300000010LL;
      v272 = 0x1300000004LL;
      v273 = 0x900000002LL;
      v267 = 2;
      *(_OWORD*)(v659 + 4) = SdkData_bb4160;
      v271 = 2;
      v264 = *(_DWORD*)(a1 + 16);
      v263 = 0x900000002LL;
    }
    v661 = *(_DWORD*)(a1 + 8);
    v662 = *(_QWORD*)a1;
    PSEUDO_LOW_LANE64(v663, n64_u64, *(unsigned __int64*)(a1 + 20));
    v664 = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v661 + 1;
    v665 = v662 + 48LL * v661;
    *(_QWORD*)(v665 + 4) = v273;
    *(_DWORD*)v665 = v264;
    *(_DWORD*)(v665 + 12) = 16;
    *(_DWORD*)(v665 + 16) = v266;
    *(_DWORD*)(v665 + 32) = v269;
    *(_DWORD*)(v665 + 36) = 0;
    *(_DWORD*)(v665 + 40) = v664;
    *(_BYTE*)(v665 + 44) = 0;
    *(_DWORD*)(v665 + 20) = 20;
    *(int32x2_t*)(v665 + 24) = vrev64_s32(v663);
    v666 = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v667, n64_u64, *(unsigned __int64*)(a1 + 20));
    v668 = *(_DWORD*)(a1 + 16);
    v669 = *(_DWORD*)(a1 + 28);
    v670 = *(_QWORD*)a1 + 48LL * v666;
    *(_DWORD*)(a1 + 8) = v666 + 1;
    *(_QWORD*)(v670 + 4) = v272;
    *(_DWORD*)v670 = v668;
    *(_DWORD*)(v670 + 12) = 16;
    *(_DWORD*)(v670 + 16) = v268;
    *(_DWORD*)(v670 + 20) = 20;
    *(_DWORD*)(v670 + 32) = v269;
    *(_DWORD*)(v670 + 36) = 0;
    *(_DWORD*)(v670 + 40) = v669;
    *(_BYTE*)(v670 + 44) = 0;
    *(int32x2_t*)(v670 + 24) = vrev64_s32(v667);
    v671 = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v672, n64_u64, *(unsigned __int64*)(a1 + 20));
    v673 = *(_DWORD*)(a1 + 16);
    v674 = *(_DWORD*)(a1 + 28);
    v675 = *(_QWORD*)a1 + 48LL * v671;
    *(_DWORD*)(a1 + 8) = v671 + 1;
    *(_DWORD*)(v675 + 12) = 16;
    *(_DWORD*)(v675 + 16) = v265;
    *(_QWORD*)(v675 + 4) = v263;
    *(_DWORD*)v675 = v673;
    *(_DWORD*)(v675 + 20) = 20;
    *(_DWORD*)(v675 + 40) = v674;
    *(_BYTE*)(v675 + 44) = 0;
    *(int32x2_t*)(v675 + 24) = vrev64_s32(v672);
    *(_QWORD*)(v675 + 32) = 4;
    v676 = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v677, n64_u64, *(unsigned __int64*)(a1 + 20));
    v678 = *(_DWORD*)(a1 + 28);
    v679 = *(_QWORD*)a1 + 48LL * v676;
    *(_DWORD*)(a1 + 8) = v676 + 1;
    *(_QWORD*)(v679 + 12) = v270;
    *(_DWORD*)v679 = 5;
    *(_DWORD*)(v679 + 4) = v267;
    *(_DWORD*)(v679 + 8) = 18;
    *(_DWORD*)(v679 + 20) = 20;
    *(_DWORD*)(v679 + 40) = v678;
    *(_BYTE*)(v679 + 44) = 0;
    *(int32x2_t*)(v679 + 24) = vrev64_s32(v677);
    *(_QWORD*)(v679 + 32) = 4;
    v680 = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v681, n64_u64, *(unsigned __int64*)(a1 + 20));
    v682 = *(_DWORD*)(a1 + 28);
    v683 = *(_QWORD*)a1 + 48LL * v680;
    *(_DWORD*)(a1 + 8) = v680 + 1;
    *(_DWORD*)(v683 + 16) = v271;
    *(_DWORD*)(v683 + 20) = 20;
    *(_DWORD*)(v683 + 40) = v682;
    *(_BYTE*)(v683 + 44) = 0;
    *(_OWORD*)v683 = SdkData_bb5150;
    *(int32x2_t*)(v683 + 24) = vrev64_s32(v681);
    *(_QWORD*)(v683 + 32) = 0x100000009LL;
    LODWORD(v683) = *(_DWORD*)(a1 + 8);
    v684 = *(_DWORD*)(a1 + 28);
    v631 = *(_QWORD*)a1 + 48LL * (int)v683;
    v685 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
    *(_DWORD*)(a1 + 8) = v683 + 1;
    *(_DWORD*)v631 = 5;
    *(_DWORD*)(v631 + 4) = v267;
    *(_DWORD*)(v631 + 8) = 18;
    *(_DWORD*)(v631 + 12) = v274;
    *(_QWORD*)(v631 + 32) = 4;
    *(_DWORD*)(v631 + 40) = v684;
    *(_QWORD*)(v631 + 16) = 0x1400000014LL;
    *(_QWORD*)(v631 + 24) = v685;
    goto LABEL_222;
  case 27:
    v64 = *(_DWORD*)(a1 + 8);
    v65 = *(_DWORD*)(a1 + 156);
    v66 = *(_QWORD*)a1;
    v68 = *(_DWORD*)(a1 + 24);
    v67 = *(_DWORD*)(a1 + 28);
    v70 = *(_DWORD*)(a1 + 16);
    v69 = *(_DWORD*)(a1 + 20);
    *(_DWORD*)(a1 + 8) = v64 + 1;
    v29 = v65 == 0;
    v71 = v66 + 48LL * v64;
    *(_DWORD*)v71 = v70;
    if (v65 != 0) {
      *(_DWORD*)(v71 + 40) = v67;
      v72 = 20;
      *(_DWORD*)(v71 + 24) = v68;
      *(_DWORD*)(v71 + 28) = v69;
      v73 = 6;
      *(_BYTE*)(v71 + 44) = 0;
      v74 = 0;
      *(_DWORD*)(v71 + 20) = 20;
      v75 = 0x1800000012LL;
      v76 = 4;
      v77 = 0x300000018LL;
      v78 = 0x500000001LL;
      *(_OWORD*)(v71 + 4) = SdkData_bb4140;
      *(_QWORD*)(v71 + 32) = 0x100000004LL;
      v79 = 4;
      v80 = 3;
      *(_DWORD*)(a1 + 16) = 6;
      v81 = 0x400000018LL;
      v82 = SdkData_bb3e50;
      v83 = SdkData_bb1870;
      v84 = 0x100000006LL;
      v85 = 4;
    }
    else {
      *(_DWORD*)(v71 + 28) = v69;
      *(_DWORD*)(v71 + 40) = v67;
      v76 = 9;
      v74 = 2;
      *(_BYTE*)(v71 + 44) = 0;
      *(_DWORD*)(v71 + 20) = 2;
      *(_DWORD*)(v71 + 24) = v68;
      *(_OWORD*)(v71 + 4) = SdkData_bb2140;
      *(_QWORD*)(v71 + 32) = 4;
      v599 = *(_DWORD*)(a1 + 8);
      v600 = *(_QWORD*)a1;
      v601 = *(_DWORD*)(a1 + 16);
      v602 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v603, n64_u64, *(unsigned __int64*)(a1 + 20));
      *(_DWORD*)(a1 + 8) = v599 + 1;
      v604 = v600 + 48LL * v599;
      v80 = 20;
      *(_DWORD*)v604 = v601;
      *(_DWORD*)(v604 + 20) = 20;
      *(_DWORD*)(v604 + 40) = v602;
      *(_BYTE*)(v604 + 44) = 0;
      v72 = 9;
      *(_OWORD*)(v604 + 4) = SdkData_bb4ae0;
      *(int32x2_t*)(v604 + 24) = vrev64_s32(v603);
      *(_QWORD*)(v604 + 32) = 9;
      v75 = 0x1300000010LL;
      v77 = 0x200000013LL;
      v73 = *(_DWORD*)(a1 + 16);
      v78 = 0x200000005LL;
      v79 = 0x100000009LL;
      v81 = 0x1400000000LL;
      v82 = SdkData_bb1270;
      v83 = SdkData_bb4d00;
      v84 = 0x400000002LL;
      v85 = 18;
    }
    v605 = *(_DWORD*)(a1 + 8);
    v606 = *(_QWORD*)a1;
    PSEUDO_LOW_LANE64(v607, n64_u64, *(unsigned __int64*)(a1 + 20));
    v608 = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v605 + 1;
    v609 = v606 + 48LL * v605;
    *(_QWORD*)(v609 + 4) = v84;
    *(_DWORD*)v609 = v73;
    *(_DWORD*)(v609 + 32) = v76;
    *(_DWORD*)(v609 + 36) = 0;
    *(_DWORD*)(v609 + 40) = v608;
    *(_BYTE*)(v609 + 44) = 0;
    *(_DWORD*)(v609 + 12) = 16;
    *(_DWORD*)(v609 + 16) = v72;
    *(_DWORD*)(v609 + 20) = 20;
    *(int32x2_t*)(v609 + 24) = vrev64_s32(v607);
    v610 = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v611, n64_u64, *(unsigned __int64*)(a1 + 20));
    v612 = *(_DWORD*)(a1 + 16);
    v613 = *(_DWORD*)(a1 + 28);
    v614 = *(_QWORD*)a1 + 48LL * v610;
    *(_DWORD*)(a1 + 8) = v610 + 1;
    *(_DWORD*)(v614 + 20) = v80;
    *(_OWORD*)(v614 + 4) = v83;
    *(_DWORD*)v614 = v612;
    *(_DWORD*)(v614 + 40) = v613;
    *(_BYTE*)(v614 + 44) = 0;
    *(int32x2_t*)(v614 + 24) = vrev64_s32(v611);
    *(_QWORD*)(v614 + 32) = 9;
    LODWORD(v614) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v615, n64_u64, *(unsigned __int64*)(a1 + 20));
    v616 = *(_DWORD*)(a1 + 16);
    v617 = *(_DWORD*)(a1 + 28);
    v618 = *(_QWORD*)a1 + 48LL * (int)v614;
    *(_DWORD*)(a1 + 8) = v614 + 1;
    *(_DWORD*)(v618 + 20) = v72;
    *(_OWORD*)(v618 + 4) = v82;
    *(_DWORD*)v618 = v616;
    *(_DWORD*)(v618 + 40) = v617;
    *(_BYTE*)(v618 + 44) = 0;
    *(int32x2_t*)(v618 + 24) = vrev64_s32(v615);
    *(_QWORD*)(v618 + 32) = 4;
    LODWORD(v618) = *(_DWORD*)(a1 + 8);
    v619 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v620, n64_u64, *(unsigned __int64*)(a1 + 20));
    v621 = *(_DWORD*)(a1 + 28);
    v622 = *(_QWORD*)a1 + 48LL * (int)v618;
    *(_DWORD*)(a1 + 8) = v618 + 1;
    *(_DWORD*)v622 = v619;
    *(_QWORD*)(v622 + 32) = v79;
    *(_DWORD*)(v622 + 40) = v621;
    *(_BYTE*)(v622 + 44) = 0;
    *(_DWORD*)(v622 + 12) = 18;
    *(_QWORD*)(v622 + 16) = v81;
    *(int32x2_t*)(v622 + 24) = vrev64_s32(v620);
    *(_QWORD*)(v622 + 4) = 0x1200000001LL;
    LODWORD(v618) = *(_DWORD*)(a1 + 8);
    v623 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v624, n64_u64, *(unsigned __int64*)(a1 + 20));
    v625 = *(_QWORD*)a1 + 48LL * (int)v618;
    *(_DWORD*)(a1 + 8) = v618 + 1;
    *(_DWORD*)(v625 + 8) = v85;
    *(_QWORD*)v625 = v78;
    *(_DWORD*)(v625 + 20) = 20;
    *(_DWORD*)(v625 + 40) = v623;
    *(_BYTE*)(v625 + 44) = 0;
    *(_QWORD*)(v625 + 12) = 0x1400000010LL;
    *(int32x2_t*)(v625 + 24) = vrev64_s32(v624);
    *(_QWORD*)(v625 + 32) = 4;
    LODWORD(v625) = *(_DWORD*)(a1 + 8);
    v626 = *(_DWORD*)(a1 + 28);
    v627 = *(_QWORD*)a1 + 48LL * (int)v625;
    v628 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
    *(_DWORD*)(a1 + 8) = v625 + 1;
    *(_DWORD*)(v627 + 40) = v626;
    *(_BYTE*)(v627 + 44) = 0;
    *(_QWORD*)(v627 + 16) = v77;
    *(_QWORD*)(v627 + 24) = v628;
    *(_OWORD*)v627 = SdkData_bb5150;
    *(_QWORD*)(v627 + 32) = 0x100000009LL;
    LODWORD(v625) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v629, n64_u64, *(unsigned __int64*)(a1 + 20));
    v630 = *(_DWORD*)(a1 + 28);
    v631 = *(_QWORD*)a1 + 48LL * (int)v625;
    *(_DWORD*)(a1 + 8) = v625 + 1;
    *(_QWORD*)(v631 + 12) = v75;
    *(_DWORD*)v631 = 5;
    *(_DWORD*)(v631 + 4) = v74;
    *(_DWORD*)(v631 + 8) = 18;
    *(_DWORD*)(v631 + 20) = 20;
    *(_DWORD*)(v631 + 40) = v630;
    *(int32x2_t*)(v631 + 24) = vrev64_s32(v629);
    *(_QWORD*)(v631 + 32) = 4;
  LABEL_222:
    *(_BYTE*)(v631 + 44) = 0;
    goto LABEL_223;
  case 28:
    v163 = *(_DWORD*)(a1 + 128);
    if ((v163 & 1) == 0) {
      *(_DWORD*)(a1 + 128) = v163 | 1;
      *(_DWORD*)(a1 + 40) = 1056964608;
      *(_QWORD*)(a1 + 32) = 0x3F0000003F000000LL;
    }
    v164 = *(_DWORD*)(a1 + 8);
    v165 = *(_QWORD*)a1;
    v166 = *(_DWORD*)(a1 + 16);
    v29 = 0;
    *(_DWORD*)(a1 + 28) = 0;
    PSEUDO_LOW_LANE64(v167, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v164 + 1;
    v168 = v165 + 48LL * v164;
    *(_DWORD*)v168 = v166;
    v169 = SdkData_bb4140;
  LABEL_122:
    *(_OWORD*)(v168 + 4) = v169;
    *(_DWORD*)(v168 + 40) = 0;
    *(_BYTE*)(v168 + 44) = 0;
    *(_DWORD*)(v168 + 20) = 23;
    *(int32x2_t*)(v168 + 24) = vrev64_s32(v167);
    *(_QWORD*)(v168 + 32) = 0x100000004LL;
    v214 = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v215, n64_u64, *(unsigned __int64*)(a1 + 20));
    v216 = *(_DWORD*)(a1 + 28);
    v217 = *(_QWORD*)a1 + 48LL * v214;
    *(_DWORD*)(a1 + 8) = v214 + 1;
    *(_DWORD*)(v217 + 40) = v216;
    *(_BYTE*)(v217 + 44) = 0;
    *(_OWORD*)v217 = SdkData_bb2130;
    *(_QWORD*)(v217 + 16) = 0x300000003LL;
    *(int32x2_t*)(v217 + 24) = vrev64_s32(v215);
    *(_QWORD*)(v217 + 32) = 4;
    *(_DWORD*)(a1 + 16) = 6;
    v218 = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v219, n64_u64, *(unsigned __int64*)(a1 + 20));
    v220 = *(_DWORD*)(a1 + 28);
    v221 = *(_QWORD*)a1 + 48LL * v218;
    *(_DWORD*)(a1 + 8) = v218 + 1;
    *(_QWORD*)(v221 + 32) = 4;
    *(_DWORD*)(v221 + 40) = v220;
    *(_BYTE*)(v221 + 44) = 0;
    *(_OWORD*)v221 = SdkData_bb2cb0;
    *(_QWORD*)(v221 + 16) = 0x300000018LL;
    *(int32x2_t*)(v221 + 24) = vrev64_s32(v219);
    v222 = *(_DWORD*)(a1 + 8);
    v223 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v224, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v221) = *(_DWORD*)(a1 + 28);
    v225 = *(_QWORD*)a1 + 48LL * v222;
    *(_DWORD*)(a1 + 8) = v222 + 1;
    *(_DWORD*)v225 = v223;
    *(_DWORD*)(v225 + 40) = v221;
    *(_BYTE*)(v225 + 44) = 0;
    *(_DWORD*)(v225 + 20) = 1;
    *(int32x2_t*)(v225 + 24) = vrev64_s32(v224);
    *(_QWORD*)(v225 + 32) = 9;
    *(_OWORD*)(v225 + 4) = SdkData_bb1870;
    v226 = *(_DWORD*)(a1 + 8);
    LODWORD(v221) = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v227, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v225) = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v226 + 1;
    v228 = *(_QWORD*)a1 + 48LL * v226;
    *(_DWORD*)v228 = v221;
    *(int32x2_t*)(v228 + 24) = vrev64_s32(v227);
    *(_QWORD*)(v228 + 32) = 4;
    *(_DWORD*)(v228 + 40) = v225;
    *(_BYTE*)(v228 + 44) = 0;
    *(_DWORD*)(v228 + 20) = 9;
    *(_OWORD*)(v228 + 4) = SdkData_bb1cd0;
    LODWORD(v228) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v229, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v221) = *(_DWORD*)(a1 + 16);
    LODWORD(v225) = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v228 + 1;
    v230 = *(_QWORD*)a1 + 48LL * (int)v228;
    *(_DWORD*)v230 = v221;
    *(_OWORD*)(v230 + 4) = SdkData_bb1870;
    *(int32x2_t*)(v230 + 24) = vrev64_s32(v229);
    *(_QWORD*)(v230 + 32) = 4;
    *(_DWORD*)(v230 + 40) = v225;
    *(_BYTE*)(v230 + 44) = 0;
    *(_DWORD*)(v230 + 20) = 4;
    *(_DWORD*)(a1 + 16) = 1;
    if (a3 == 2) {
      goto LABEL_74;
    }
    goto LABEL_225;
  case 29:
    v307 = *(_DWORD*)(a1 + 128);
    if ((v307 & 0x10) == 0) {
      *(_DWORD*)(a1 + 128) = v307 | 0x10;
      *(_DWORD*)(a1 + 88) = 1048576000;
      *(_QWORD*)(a1 + 80) = 0x3E8000003E800000LL;
    }
    v308 = *(_DWORD*)(a1 + 8);
    v309 = *(_QWORD*)a1;
    v310 = *(_DWORD*)(a1 + 16);
    *(_DWORD*)(a1 + 28) = 4;
    PSEUDO_LOW_LANE64(v311, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v308 + 1;
    v312 = v309 + 48LL * v308;
    *(_DWORD*)v312 = v310;
    *(_DWORD*)(v312 + 40) = 4;
    *(_BYTE*)(v312 + 44) = 0;
    *(_DWORD*)(v312 + 20) = 23;
    *(_OWORD*)(v312 + 4) = SdkData_bb4cf0;
    *(int32x2_t*)(v312 + 24) = vrev64_s32(v311);
    *(_QWORD*)(v312 + 32) = 0x100000009LL;
    *(_DWORD*)(a1 + 16) = 6;
    v313 = *(_DWORD*)(a1 + 128);
    if ((v313 & 1) == 0) {
      *(_DWORD*)(a1 + 128) = v313 | 1;
      *(_DWORD*)(a1 + 40) = 1048928450;
      *(int32x2_t*)(a1 + 32) = vdup_n_s32(0x3E8560C2u);
    }
    v314 = *(_DWORD*)(a1 + 8);
    v315 = *(_QWORD*)a1;
    PSEUDO_LOW_LANE64(v316, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v314 + 1;
    v317 = v315 + 48LL * v314;
    *(_QWORD*)(v317 + 36) = 0;
    *(_BYTE*)(v317 + 44) = 0;
    *(_DWORD*)(v317 + 32) = 9;
    *(_OWORD*)v317 = SdkData_bb4810;
    *(_QWORD*)(v317 + 16) = 0x1400000017LL;
    *(int32x2_t*)(v317 + 24) = vrev64_s32(v316);
    v318 = *(_DWORD*)(a1 + 128);
    if ((v318 & 2) == 0) {
      *(_DWORD*)(a1 + 128) = v318 | 2;
      *(_DWORD*)(a1 + 52) = -1085790087;
      *(int32x2_t*)(a1 + 44) = vdup_n_s32(0xBF482879);
    }
    v319 = *(_DWORD*)(a1 + 8);
    v320 = *(_QWORD*)a1;
    v321 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v322, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 28) = 1;
    *(_DWORD*)(a1 + 8) = v319 + 1;
    v323 = v320 + 48LL * v319;
    *(_DWORD*)v323 = v321;
    *(_DWORD*)(v323 + 40) = 1;
    *(_BYTE*)(v323 + 44) = 0;
    *(_DWORD*)(v323 + 20) = 23;
    *(int32x2_t*)(v323 + 24) = vrev64_s32(v322);
    *(_QWORD*)(v323 + 32) = 9;
    *(_OWORD*)(v323 + 4) = SdkData_bb1260;
    v324 = *(_DWORD*)(a1 + 8);
    v325 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v326, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v323) = *(_DWORD*)(a1 + 28);
    v327 = *(_QWORD*)a1 + 48LL * v324;
    *(_DWORD*)(a1 + 8) = v324 + 1;
    *(_DWORD*)v327 = v325;
    *(_DWORD*)(v327 + 40) = v323;
    *(_BYTE*)(v327 + 44) = 0;
    *(_DWORD*)(v327 + 20) = 20;
    *(int32x2_t*)(v327 + 24) = vrev64_s32(v326);
    *(_QWORD*)(v327 + 32) = 9;
    *(_OWORD*)(v327 + 4) = SdkData_bb1720;
    v328 = *(_DWORD*)(a1 + 128);
    if ((v328 & 4) == 0) {
      *(_DWORD*)(a1 + 128) = v328 | 4;
      *(_DWORD*)(a1 + 64) = 1050331008;
      *(int32x2_t*)(a1 + 56) = vdup_n_s32(0x3E9AC780u);
    }
    PSEUDO_LOW_LANE64(v329, n64_u64, *(unsigned __int64*)(a1 + 20));
    v330 = *(_DWORD*)(a1 + 8);
    v331 = *(_QWORD*)a1;
    v332 = *(_DWORD*)(a1 + 16);
    *(_DWORD*)(a1 + 28) = 2;
    *(_DWORD*)(a1 + 8) = v330 + 1;
    v333 = v331 + 48LL * v330;
    *(_DWORD*)v333 = v332;
    *(_OWORD*)(v333 + 4) = SdkData_bb1260;
    *(_DWORD*)(v333 + 20) = 23;
    *(_DWORD*)(v333 + 40) = 2;
    *(_BYTE*)(v333 + 44) = 0;
    *(int32x2_t*)(v333 + 24) = vrev64_s32(v329);
    *(_QWORD*)(v333 + 32) = 9;
    LODWORD(v333) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v334, n64_u64, *(unsigned __int64*)(a1 + 20));
    v335 = *(_DWORD*)(a1 + 16);
    v336 = *(_DWORD*)(a1 + 28);
    v337 = *(_QWORD*)a1 + 48LL * (int)v333;
    *(_DWORD*)(a1 + 8) = v333 + 1;
    *(_OWORD*)(v337 + 4) = SdkData_bb1720;
    *(_DWORD*)v337 = v335;
    *(_DWORD*)(v337 + 20) = 20;
    *(_DWORD*)(v337 + 40) = v336;
    *(_BYTE*)(v337 + 44) = 0;
    *(int32x2_t*)(v337 + 24) = vrev64_s32(v334);
    *(_QWORD*)(v337 + 32) = 9;
    v338 = *(_DWORD*)(a1 + 128);
    if ((v338 & 8) == 0) {
      *(_DWORD*)(a1 + 128) = v338 | 8;
      *(_DWORD*)(a1 + 76) = 1046509811;
      *(int32x2_t*)(a1 + 68) = vdup_n_s32(0x3E6078F3u);
    }
    v339 = *(_DWORD*)(a1 + 8);
    v340 = *(_QWORD*)a1;
    v341 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v342, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 28) = 3;
    *(_DWORD*)(a1 + 8) = v339 + 1;
    v343 = v340 + 48LL * v339;
    *(_DWORD*)v343 = v341;
    *(_OWORD*)(v343 + 4) = SdkData_bb1260;
    *(_DWORD*)(v343 + 40) = 3;
    *(_BYTE*)(v343 + 44) = 0;
    *(_DWORD*)(v343 + 20) = 23;
    *(int32x2_t*)(v343 + 24) = vrev64_s32(v342);
    *(_QWORD*)(v343 + 32) = 4;
    *(_DWORD*)(a1 + 16) = 5;
    v344 = *(_DWORD*)(a1 + 128);
    if ((v344 & 0x20) == 0) {
      *(_DWORD*)(a1 + 128) = v344 | 0x20;
      *(_DWORD*)(a1 + 100) = 1098907648;
      *(_QWORD*)(a1 + 92) = 0x4180000041800000LL;
    }
    v345 = *(_DWORD*)(a1 + 8);
    v346 = *(_QWORD*)a1;
    PSEUDO_LOW_LANE64(v347, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v345 + 1;
    v348 = v346 + 48LL * v345;
    *(_QWORD*)(v348 + 32) = 4;
    *(_DWORD*)(v348 + 40) = 5;
    *(_BYTE*)(v348 + 44) = 0;
    *(_QWORD*)(v348 + 16) = 0x1400000017LL;
    *(int32x2_t*)(v348 + 24) = vrev64_s32(v347);
    *(_OWORD*)v348 = SdkData_bb1b20;
    v349 = *(_DWORD*)(a1 + 128);
    if ((v349 & 0x40) == 0) {
      *(_DWORD*)(a1 + 128) = v349 | 0x40;
      *(_DWORD*)(a1 + 112) = 1094713344;
      *(_QWORD*)(a1 + 104) = 0x4140000041400000LL;
    }
    v350 = *(_DWORD*)(a1 + 8);
    v351 = *(_QWORD*)a1;
    v352 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v353, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 28) = 6;
    *(_DWORD*)(a1 + 8) = v350 + 1;
    v354 = v351 + 48LL * v350;
    *(_DWORD*)v354 = v352;
    *(_DWORD*)(v354 + 20) = 23;
    *(_DWORD*)(v354 + 40) = 6;
    *(_BYTE*)(v354 + 44) = 0;
    *(int32x2_t*)(v354 + 24) = vrev64_s32(v353);
    *(_QWORD*)(v354 + 32) = 4;
    *(_OWORD*)(v354 + 4) = SdkData_bb3630;
    v355 = *(_DWORD*)(a1 + 8);
    v356 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v357, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v354) = *(_DWORD*)(a1 + 28);
    v358 = *(_QWORD*)a1 + 48LL * v355;
    *(_DWORD*)(a1 + 8) = v355 + 1;
    *(_DWORD*)v358 = v356;
    *(_DWORD*)(v358 + 20) = 20;
    *(_DWORD*)(v358 + 40) = v354;
    *(_BYTE*)(v358 + 44) = 0;
    *(int32x2_t*)(v358 + 24) = vrev64_s32(v357);
    *(_QWORD*)(v358 + 32) = 4;
    *(_OWORD*)(v358 + 4) = SdkData_bb0ff0;
    v359 = *(_DWORD*)(a1 + 128);
    if ((v359 & 0x80) == 0) {
      *(_DWORD*)(a1 + 124) = 1077936128;
      *(_DWORD*)(a1 + 128) = v359 | 0x80;
      *(_QWORD*)(a1 + 116) = 0x4040000040400000LL;
    }
    v360 = *(_DWORD*)(a1 + 8);
    v361 = *(_QWORD*)a1;
    v362 = *(_DWORD*)(a1 + 16);
    v29 = 0;
    PSEUDO_LOW_LANE64(v363, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 28) = 7;
    *(_DWORD*)(a1 + 8) = v360 + 1;
    v364 = v361 + 48LL * v360;
    *(_DWORD*)v364 = v362;
    *(_DWORD*)(v364 + 20) = 23;
    *(_DWORD*)(v364 + 40) = 7;
    *(_BYTE*)(v364 + 44) = 0;
    *(int32x2_t*)(v364 + 24) = vrev64_s32(v363);
    *(_QWORD*)(v364 + 32) = 4;
    *(_OWORD*)(v364 + 4) = SdkData_bb3ac0;
    LODWORD(v364) = *(_DWORD*)(a1 + 8);
    v365 = *(_DWORD*)(a1 + 16);
    v366 = *(_DWORD*)(a1 + 28);
    v367 = *(_QWORD*)a1 + 48LL * (int)v364;
    v368 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
    *(_DWORD*)(a1 + 8) = v364 + 1;
    *(_DWORD*)v367 = v365;
    *(_OWORD*)(v367 + 4) = SdkData_bb0ff0;
    *(_DWORD*)(v367 + 20) = 20;
    *(_DWORD*)(v367 + 40) = v366;
    *(_BYTE*)(v367 + 44) = 0;
    *(_QWORD*)(v367 + 24) = v368;
    *(_QWORD*)(v367 + 32) = 4;
    *(_DWORD*)(a1 + 16) = 1;
    LODWORD(v364) = *(_DWORD*)(a1 + 8);
    v369 = *(_DWORD*)(a1 + 28);
    v370 = *(_QWORD*)a1 + 48LL * (int)v364;
    v371 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
    *(_DWORD*)(a1 + 8) = v364 + 1;
    *(_QWORD*)(v370 + 32) = 9;
    *(_DWORD*)(v370 + 40) = v369;
    *(_BYTE*)(v370 + 44) = 0;
    *(_QWORD*)(v370 + 16) = 0x100000001LL;
    *(_QWORD*)(v370 + 24) = v371;
    *(_OWORD*)v370 = SdkData_bb4ad0;
    v372 = *(_DWORD*)(a1 + 8);
    v373 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v374, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v370) = *(_DWORD*)(a1 + 28);
    v375 = *(_QWORD*)a1 + 48LL * v372;
    *(_DWORD*)(a1 + 8) = v372 + 1;
    *(_DWORD*)v375 = v373;
    *(_DWORD*)(v375 + 40) = v370;
    *(_BYTE*)(v375 + 44) = 0;
    *(_DWORD*)(v375 + 20) = 24;
    *(int32x2_t*)(v375 + 24) = vrev64_s32(v374);
    *(_QWORD*)(v375 + 32) = 0x100000009LL;
    *(_OWORD*)(v375 + 4) = SdkData_bb3c70;
    *(_DWORD*)(a1 + 16) = 5;
    v376 = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v377, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v370) = *(_DWORD*)(a1 + 28);
    v378 = *(_QWORD*)a1 + 48LL * v376;
    *(_DWORD*)(a1 + 8) = v376 + 1;
    *(_QWORD*)(v378 + 32) = 4;
    *(_DWORD*)(v378 + 40) = v370;
    *(_BYTE*)(v378 + 44) = 0;
    *(_OWORD*)v378 = SdkData_bb1f30;
    *(_QWORD*)(v378 + 16) = 0x300000018LL;
    *(int32x2_t*)(v378 + 24) = vrev64_s32(v377);
    v379 = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v380, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v370) = *(_DWORD*)(a1 + 16);
    LODWORD(v378) = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v379 + 1;
    v381 = *(_QWORD*)a1 + 48LL * v379;
    *(_DWORD*)v381 = v370;
    *(_OWORD*)(v381 + 4) = SdkData_bb0ff0;
    *(_DWORD*)(v381 + 20) = 20;
    *(int32x2_t*)(v381 + 24) = vrev64_s32(v380);
    *(_QWORD*)(v381 + 32) = 4;
    *(_DWORD*)(v381 + 40) = v378;
    *(_BYTE*)(v381 + 44) = 0;
    *(_DWORD*)(a1 + 16) = 1;
    LODWORD(v370) = *(_DWORD*)(a1 + 8);
    v382 = *(_DWORD*)(a1 + 28);
    v383 = *(_QWORD*)a1 + 48LL * (int)v370;
    v384 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
    *(_DWORD*)(a1 + 8) = v370 + 1;
    *(_OWORD*)v383 = SdkData_bb4ad0;
    *(_QWORD*)(v383 + 32) = 9;
    *(_DWORD*)(v383 + 40) = v382;
    *(_BYTE*)(v383 + 44) = 0;
    *(_QWORD*)(v383 + 16) = 0x100000001LL;
    *(_QWORD*)(v383 + 24) = v384;
    LODWORD(v378) = *(_DWORD*)(a1 + 8);
    v385 = *(_DWORD*)(a1 + 16);
    LODWORD(v383) = *(_DWORD*)(a1 + 28);
    v386 = *(_QWORD*)a1 + 48LL * (int)v378;
    v387 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
    *(_DWORD*)(a1 + 8) = v378 + 1;
    *(_DWORD*)v386 = v385;
    *(_OWORD*)(v386 + 4) = SdkData_bb3c70;
    *(_DWORD*)(v386 + 20) = 24;
    *(_DWORD*)(v386 + 40) = v383;
    *(_BYTE*)(v386 + 44) = 0;
    *(_QWORD*)(v386 + 24) = v387;
    *(_QWORD*)(v386 + 32) = 9;
    LODWORD(v378) = *(_DWORD*)(a1 + 8);
    v388 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v389, n64_u64, *(unsigned __int64*)(a1 + 20));
    v128 = *(_DWORD*)(a1 + 28);
    v129 = *(_QWORD*)a1 + 48LL * (int)v378;
    *(_DWORD*)(a1 + 8) = v378 + 1;
    *(_DWORD*)v129 = v388;
    *(_DWORD*)(v129 + 20) = 24;
    *(int32x2_t*)(v129 + 24) = vrev64_s32(v389);
    *(_QWORD*)(v129 + 32) = 4;
    *(_OWORD*)(v129 + 4) = SdkData_bb0d70;
    goto LABEL_158;
  case 30:
    v86 = *(_DWORD*)(a1 + 8);
    v87 = *(_QWORD*)a1;
    v88 = *(_DWORD*)(a1 + 16);
    v29 = 0;
    v89 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v90, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v86 + 1;
    v91 = v87 + 48LL * v86;
    *(_DWORD*)v91 = v88;
    *(_DWORD*)(v91 + 40) = v89;
    *(_BYTE*)(v91 + 44) = 0;
    *(_DWORD*)(v91 + 20) = 1;
    *(_OWORD*)(v91 + 4) = SdkData_bb4cf0;
    *(int32x2_t*)(v91 + 24) = vrev64_s32(v90);
    *(_QWORD*)(v91 + 32) = 0x100000004LL;
    LODWORD(v91) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v92, n64_u64, *(unsigned __int64*)(a1 + 20));
    v93 = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v91 + 1;
    v94 = *(_QWORD*)a1 + 48LL * (int)v91;
    *(_DWORD*)(v94 + 40) = v93;
    *(_BYTE*)(v94 + 44) = 0;
    *(_OWORD*)v94 = SdkData_bb1490;
    *(_QWORD*)(v94 + 16) = 0x300000001LL;
    *(int32x2_t*)(v94 + 24) = vrev64_s32(v92);
    *(_QWORD*)(v94 + 32) = 4;
    goto LABEL_223;
  case 33:
    v141 = *(_DWORD*)(a1 + 156);
    v142 = *(_DWORD*)(a1 + 8);
    v143 = *(_QWORD*)a1;
    v144 = v141 == 0;
    v145 = *(_DWORD*)(a1 + 16);
    v146 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v147, n64_u64, *(unsigned __int64*)(a1 + 20));
    v29 = v141 == 0;
    *(_DWORD*)(a1 + 8) = v142 + 1;
    LANES64(v148).n64_u64[0] = LANES64_OF(vrev64_s32(v147)).n64_u64[0];
    v149 = v141 != 0;
    LANES64(v150).n64_u64[0] = LANES64_OF(vdup_n_s16(v29)).n64_u64[0];
    v151 = v143 + 48LL * v142;
    if (v144) {
      v152 = 18;
    }
    else {
      v152 = 3;
    }
    *(_DWORD*)v151 = v145;
    *(_DWORD*)(v151 + 20) = v152;
    *(_DWORD*)(v151 + 40) = v146;
    *(_BYTE*)(v151 + 44) = 0;
    if (v144) {
      v153 = 2;
    }
    else {
      v153 = 3;
    }
    *(int8x16_t*)(v151 + 4) =
        vbslq_s8(vcltzq_s32(vshlq_n_s32(vmovl_u16(v150), 0x1Fu)),
                 COERCE_AS(int8x16_t, SdkData_bb3340),
                 COERCE_AS(int8x16_t, SdkData_bb3330));
    *(int32x2_t*)(v151 + 24) = v148;
    *(_QWORD*)(v151 + 32) = 4;
    v154 = *(_DWORD*)(a1 + 8);
    v155 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v156, n64_u64, *(unsigned __int64*)(a1 + 20));
    v157 = *(_DWORD*)(a1 + 28);
    v158 = *(_QWORD*)a1 + 48LL * v154;
    *(_DWORD*)(a1 + 8) = v154 + 1;
    *(_DWORD*)v158 = v155;
    *(_DWORD*)(v158 + 20) = v153;
    *(_DWORD*)(v158 + 40) = v157;
    *(_BYTE*)(v158 + 44) = 0;
    *(_DWORD*)(v158 + 12) = v149;
    *(_DWORD*)(v158 + 16) = 24;
    *(int32x2_t*)(v158 + 24) = vrev64_s32(v156);
    *(_QWORD*)(v158 + 32) = 4;
    *(_QWORD*)(v158 + 4) = 0x400000003LL;
    v159 = *(_DWORD*)(a1 + 8);
    v160 = *(_DWORD*)(a1 + 16);
    LODWORD(v158) = *(_DWORD*)(a1 + 28);
    v161 = *(_QWORD*)a1 + 48LL * v159;
    v162 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
    *(_DWORD*)(a1 + 8) = v159 + 1;
    *(_DWORD*)v161 = v160;
    *(_QWORD*)(v161 + 4) = 0x400000003LL;
    *(_DWORD*)(v161 + 12) = v149;
    *(_DWORD*)(v161 + 16) = 24;
    *(_DWORD*)(v161 + 20) = v153;
    *(_DWORD*)(v161 + 40) = v158;
    *(_BYTE*)(v161 + 44) = 0;
    *(_QWORD*)(v161 + 24) = v162;
    *(_QWORD*)(v161 + 32) = 4;
    if (a3 == 2) {
      goto LABEL_74;
    }
    goto LABEL_225;
  case 35:
    v104 = *(_DWORD*)(a1 + 8);
    v105 = *(_QWORD*)a1;
    v134 = *(_DWORD*)(a1 + 156) == 0;
    v106 = *(_DWORD*)(a1 + 16);
    v33 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v34, n64_u64, *(unsigned __int64*)(a1 + 20));
    v29 = v134;
    *(_DWORD*)(a1 + 8) = v104 + 1;
    v35 = v105 + 48LL * v104;
    LANES64(v107).n64_u64[0] = LANES64_OF(vdup_n_s32(v134)).n64_u64[0];
    if (v134) {
      v108 = 3;
    }
    else {
      v108 = 1;
    }
    *(_DWORD*)v35 = v106;
    *(_DWORD*)(v35 + 4) = v108;
    *(_QWORD*)(v35 + 8) = 0x1200000012LL;
    *(int8x8_t*)(v35 + 16) = vbsl_s8(vcltz_s32(vshl_n_s32(v107, 0x1Fu)),
                                     COERCE_AS(int8x8_t, 0x200000013LL),
                                     COERCE_AS(int8x8_t, 0x300000018LL));
  LABEL_73:
    *(_DWORD*)(v35 + 40) = v33;
    *(_BYTE*)(v35 + 44) = 0;
    *(int32x2_t*)(v35 + 24) = vrev64_s32(v34);
    *(_QWORD*)(v35 + 32) = 4;
    if (a3 == 2) {
      goto LABEL_74;
    }
    goto LABEL_225;
  case 36:
    v197 = *(_DWORD*)(a1 + 8);
    v198 = *(_QWORD*)a1;
    v199 = *(_DWORD*)(a1 + 156);
    v201 = *(_DWORD*)(a1 + 24);
    v200 = *(_DWORD*)(a1 + 28);
    v203 = *(_DWORD*)(a1 + 16);
    v202 = *(_DWORD*)(a1 + 20);
    *(_DWORD*)(a1 + 8) = v197 + 1;
    v204 = v198 + 48LL * v197;
    *(_DWORD*)v204 = v203;
    if (v199 == 0) {
      *(_DWORD*)(v204 + 28) = v202;
      *(_DWORD*)(v204 + 40) = v200;
      v29 = 1;
      *(_BYTE*)(v204 + 44) = 0;
      *(_DWORD*)(v204 + 20) = 2;
      *(_DWORD*)(v204 + 24) = v201;
      *(_OWORD*)(v204 + 4) = SdkData_bb1250;
    LABEL_217:
      *(_QWORD*)(v204 + 32) = 4;
      if (a3 == 2) {
        goto LABEL_74;
      }
    LABEL_225:
      v42 = a2;
      if (a3 == 1) {
        if ((v10 & v12 & v14) == 1) {
          v693 = v9;
          v694 = v10;
          nn_677f40((__int64*)a1, 9u, 0x13u, 0x15u, 0);
          nn_677fa0((__int64*)a1, 9u, 9u, 3u, 9u, 4u);
          nn_677e90((__int64*)a1, 8u, 4u, 0x13u, 9u);
          nn_677f40((__int64*)a1, 9u, 0x12u, 0x16u, 0);
          nn_677e90((__int64*)a1, 8u, 9u, 1u, 8u);
          v10 = v694;
          a3 = 1;
          v9 = v693;
        }
        else {
          v695 = v10;
          v696 = v14;
          v697 = v9;
          if (v14 != 0) {
            nn_677f40((__int64*)a1, 5u, 0x13u, 0x15u, 0);
            nn_677ff0((__int64*)a1, 5, 19, 5);
            nn_673fd0((__int64*)a1, 8u, 4u, 5u);
            if ((v12 & 1) != 0) {
              nn_677f40((__int64*)a1, 6u, 0x12u, 0x16u, 0);
              nn_677e90((__int64*)a1, 8u, 1u, 6u, 8u);
            }
          }
          else if ((v12 & 1) != 0) {
            nn_677f40((__int64*)a1, 6u, 0x12u, 0x16u, 0);
            nn_673fd0((__int64*)a1, 8u, 1u, 6u);
          }
          v9 = v697;
          v10 = v695;
          if (v695 != 0) {
            nn_677f40((__int64*)a1, 7u, 0x13u, 0x15u, 0);
            if ((v12 | v696) == 1) {
              nn_677e90((__int64*)a1, 8u, 3u, 7u, 8u);
            }
            else {
              nn_673fd0((__int64*)a1, 8u, 3u, 7u);
            }
            v9 = v697;
            v10 = v695;
            a3 = 1;
          }
        }
        goto LABEL_258;
      }
      if (a3 != 0) {
        goto LABEL_258;
      }
      v686 = v12;
      v687 = v12 & v14;
      v688 = v29;
      v689 = a4;
      v690 = v11;
      if ((v10 & v687) == 1) {
        v691 = v13;
        v692 = v9;
        v472 = 0;
        v473 = v10;
        nn_677de0((__int64*)a1, 0xAu, 0, 0x16u, 2u, 0x15u);
        if (v688 != 0) {
          nn_677e30((__int64*)a1, 8, 4, 10);
        }
        else {
          nn_673fd0((__int64*)a1, 5u, 0x12u, 0x13u);
          nn_677e90((__int64*)a1, 8u, 4u, 5u, 0xAu);
        }
        v9 = v692;
        v13 = v691;
        v11 = v690;
        a4 = v689;
        goto LABEL_246;
      }
      v698 = v13;
      v699 = v10;
      v700 = v14;
      v701 = v9;
      if (v14 == 0) {
        if ((v686 & 1) != 0) {
          nn_673fd0((__int64*)a1, 8u, 0, 0x16u);
        }
        goto LABEL_253;
      }
      if (v29 != 0) {
        nn_677ee0((__int64*)a1, 8, 4);
        if ((v686 & 1) == 0) {
        LABEL_253:
          v10 = v699;
          a3 = 0;
          v9 = v701;
          v13 = v698;
          v11 = v690;
          a4 = v689;
          if (v10 != 0) {
            v702 = v700;
            v703 = v9;
            v704 = v10;
            if ((v686 | v702) == 1) {
              nn_677e90((__int64*)a1, 8u, 2u, 0x15u, 8u);
            }
            else {
              nn_673fd0((__int64*)a1, 8u, 2u, 0x15u);
            }
            v10 = v704;
            a3 = 0;
            v9 = v703;
          }
          goto LABEL_258;
        }
      }
      else {
        nn_673fd0((__int64*)a1, 5u, 0x12u, 0x13u);
        nn_673fd0((__int64*)a1, 8u, 4u, 5u);
        if ((v686 & 1) == 0) {
          goto LABEL_253;
        }
      }
      nn_677e90((__int64*)a1, 8u, 0, 0x16u, 8u);
      goto LABEL_253;
    }
    *(_DWORD*)(v204 + 28) = v202;
    *(_DWORD*)(v204 + 40) = v200;
    v29 = 0;
    *(_BYTE*)(v204 + 44) = 0;
    *(_DWORD*)(v204 + 20) = 3;
    *(_DWORD*)(v204 + 24) = v201;
    *(_OWORD*)(v204 + 4) = SdkData_bb1870;
    *(_QWORD*)(v204 + 32) = 4;
    v205 = *(_DWORD*)(a1 + 8);
    v206 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v207, n64_u64, *(unsigned __int64*)(a1 + 20));
    v208 = *(_QWORD*)a1 + 48LL * v205;
    v209 = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v205 + 1;
    *(_DWORD*)v208 = v206;
    *(_BYTE*)(v208 + 44) = 0;
    *(_DWORD*)(v208 + 20) = 20;
    *(_DWORD*)(v208 + 40) = v209;
    *(int32x2_t*)(v208 + 24) = vrev64_s32(v207);
    *(_QWORD*)(v208 + 32) = 4;
    *(_OWORD*)(v208 + 4) = SdkData_bb1480;
    if (a3 != 2) {
      goto LABEL_225;
    }
  LABEL_74:
    v42 = a2;
    if ((v10 & v12 & v14) == 1) {
      v43 = a4;
      v44 = v11;
      v45 = v13;
      v46 = v9;
      v47 = a3;
      v48 = v10;
      nn_678050((__int64*)a1, 6, 18, 19);
      *(_DWORD*)(a1 + 16) = 7;
      nn_677de0((__int64*)a1, 8u, 4u, 0x13u, 1u, 6u);
      *(_DWORD*)(a1 + 16) = 4;
      nn_677ff0((__int64*)a1, 6, 19, 18);
      nn_677de0((__int64*)a1, 8u, 4u, 0x12u, 3u, 6u);
      v10 = v48;
      a3 = v47;
      v9 = v46;
      v13 = v45;
      v11 = v44;
      a4 = v43;
      *(_DWORD*)(a1 + 16) = 1;
      goto LABEL_258;
    }
    if (v14 != 0) {
      v49 = a4;
      v50 = v12;
      v51 = v11;
      v52 = v13;
      v53 = v9;
      v54 = v14;
      v55 = a3;
      v56 = v10;
      nn_677f40((__int64*)a1, 5u, 0x13u, 0x12u, 0);
      nn_673fd0((__int64*)a1, 8u, 4u, 5u);
      v10 = v56;
      a3 = v55;
      v14 = v54;
      v9 = v53;
      v13 = v52;
      v11 = v51;
      v12 = v50;
      a4 = v49;
      if (v12 == 0) {
        goto LABEL_78;
      }
    }
    else if (v12 == 0) {
    LABEL_78:
      if (v10 == 0) {
        goto LABEL_258;
      }
      goto LABEL_178;
    }
    v828 = a4;
    v57 = v12;
    v58 = v11;
    v59 = v13;
    v60 = v9;
    v61 = a3;
    v62 = v10;
    v63 = v14;
    nn_677ff0((__int64*)a1, 6, 18, 19);
    nn_6780b0((__int64*)a1, 6u, 6u, 0x14u);
    if (v63 != 0) {
      nn_677e90((__int64*)a1, 8u, 1u, 6u, 8u);
    }
    else {
      nn_673fd0((__int64*)a1, 8u, 1u, 6u);
    }
    v9 = v60;
    v13 = v59;
    v11 = v58;
    v12 = v57;
    a4 = v828;
    v14 = v63;
    v10 = v62;
    a3 = v61;
    if (v10 != 0) {
    LABEL_178:
      v471 = v9;
      v472 = a3;
      v473 = v10;
      v474 = v14;
      nn_677ff0((__int64*)a1, 6, 19, 18);
      nn_6780b0((__int64*)a1, 6u, 6u, 0x14u);
      if ((v12 | v474) == 1) {
        nn_677e90((__int64*)a1, 8u, 3u, 7u, 8u);
      }
      else {
        nn_673fd0((__int64*)a1, 8u, 3u, 7u);
      }
      v9 = v471;
    LABEL_246:
      v10 = v473;
      a3 = v472;
    }
  LABEL_258:
    a2 = v42;
    if ((v42 == 11 || v42 == 7) && ((a4 & 1) != 0 || a3 == 0)) {
      *(_DWORD*)(a1 + 132) = 3;
    }
    if (((a4 | (a3 == 0)) & v10) == 1) {
      *(_DWORD*)(a1 + 132) = 2;
    }
  LABEL_265:
    if ((*(_BYTE*)(a1 + 160) & 1) == 0) {
      if (a2 <= 31) {
        if ((unsigned int)(a2 - 18) >= 3) {
          if (a2 == 17) {
            v745 = *(_DWORD*)(a1 + 8);
            v746 = *(_QWORD*)a1;
            v747 = *(_DWORD*)(a1 + 16);
            v708 = *(_DWORD*)(a1 + 28);
            PSEUDO_LOW_LANE64(v709, n64_u64, *(unsigned __int64*)(a1 + 20));
            *(_DWORD*)(a1 + 8) = v745 + 1;
            v710 = v746 + 48LL * v745;
            *(_DWORD*)v710 = v747;
            v711 = SdkData_bb5170;
            v712 = 19;
            goto LABEL_276;
          }
          if (a2 == 31) {
            v727 = *(_DWORD*)(a1 + 8);
            v728 = *(_QWORD*)a1;
            v729 = *(_DWORD*)(a1 + 16);
            v708 = *(_DWORD*)(a1 + 28);
            PSEUDO_LOW_LANE64(v709, n64_u64, *(unsigned __int64*)(a1 + 20));
            *(_DWORD*)(a1 + 8) = v727 + 1;
            v710 = v728 + 48LL * v727;
            *(_DWORD*)v710 = v729;
            v711 = SdkData_bb1ce0;
            v712 = 18;
            goto LABEL_276;
          }
          goto LABEL_288;
        }
        v713 = *(_DWORD*)(a1 + 8);
        v714 = *(_QWORD*)a1;
        v715 = *(_DWORD*)(a1 + 16);
        v716 = *(_DWORD*)(a1 + 28);
        PSEUDO_LOW_LANE64(v717, n64_u64, *(unsigned __int64*)(a1 + 20));
        *(_DWORD*)(a1 + 8) = v713 + 1;
        v718 = v714 + 48LL * v713;
        *(_DWORD*)v718 = v715;
        *(_DWORD*)(v718 + 40) = v716;
        *(_BYTE*)(v718 + 44) = 0;
        *(_DWORD*)(v718 + 20) = 19;
        *(_OWORD*)(v718 + 4) = SdkData_bb5170;
        *(int32x2_t*)(v718 + 24) = vrev64_s32(v717);
        *(_QWORD*)(v718 + 32) = 10;
        v719 = *(_DWORD*)(a1 + 8);
        v720 = *(_DWORD*)(a1 + 16);
        v708 = *(_DWORD*)(a1 + 28);
        PSEUDO_LOW_LANE64(v721, n64_u64, *(unsigned __int64*)(a1 + 20));
        v710 = *(_QWORD*)a1 + 48LL * v719;
        *(_DWORD*)(a1 + 8) = v719 + 1;
        *(_DWORD*)v710 = v720;
        v722 = SdkData_bb30c0;
      }
      else {
        if (a2 > 43) {
          if ((unsigned int)(a2 - 44) >= 3) {
            goto LABEL_288;
          }
          goto LABEL_275;
        }
        if (a2 != 32) {
          if (a2 != 34) {
            if (a2 == 37) {
              v705 = *(_DWORD*)(a1 + 8);
              v706 = *(_QWORD*)a1;
              v707 = *(_DWORD*)(a1 + 16);
              v708 = *(_DWORD*)(a1 + 28);
              PSEUDO_LOW_LANE64(v709, n64_u64, *(unsigned __int64*)(a1 + 20));
              *(_DWORD*)(a1 + 8) = v705 + 1;
              v710 = v706 + 48LL * v705;
              *(_DWORD*)v710 = v707;
              v711 = SdkData_bb3ad0;
              v712 = 21;
            LABEL_276:
              *(_OWORD*)(v710 + 4) = v711;
              *(_DWORD*)(v710 + 20) = v712;
              LANES64(v726).n64_u64[0] =
                  LANES64_OF(vrev64_s32(v709)).n64_u64[0];
            LABEL_282:
              *(int32x2_t*)(v710 + 24) = v726;
              *(_QWORD*)(v710 + 32) = 10;
              *(_DWORD*)(v710 + 40) = v708;
              *(_BYTE*)(v710 + 44) = 0;
            LABEL_283:
              if ((*(_BYTE*)(a1 + 160) & 1) == 0) {
                *(_DWORD*)(*(_QWORD*)a1 + 48LL * *(int*)(a1 + 8) - 24) = 5;
              }
              v738 = *(_DWORD*)(a1 + 8);
              v739 = *(_QWORD*)a1;
              v740 = *(_DWORD*)(a1 + 16);
              v741 = *(_DWORD*)(a1 + 28);
              PSEUDO_LOW_LANE64(v742, n64_u64, *(unsigned __int64*)(a1 + 20));
              *(_DWORD*)(a1 + 8) = v738 + 1;
              v743 = v739 + 48LL * v738;
              *(_DWORD*)v743 = v740;
              *(_DWORD*)(v743 + 40) = v741;
              *(_BYTE*)(v743 + 44) = 0;
              *(_DWORD*)(v743 + 20) = 20;
              *(_OWORD*)(v743 + 4) = SdkData_bb2ee0;
              *(int32x2_t*)(v743 + 24) = vrev64_s32(v742);
              *(_QWORD*)(v743 + 32) = 8;
              goto LABEL_286;
            }
          LABEL_288:
            if (a3 != 2) {
              if (a3 != 1) {
                if (a3 != 0) {
                  goto LABEL_283;
                }
                v748 = (2 * v11) | (4 * v13) | v9;
                if (v748 <= 3) {
                  if (v748 > 1) {
                    if (v748 == 2) {
                      nn_673fd0((__int64*)a1, 0xAu, 0x12u, 0x16u);
                    }
                    else {
                      nn_677de0((__int64*)a1, 0xAu, 0x13u, 0x15u, 0x12u, 0x16u);
                    }
                    goto LABEL_283;
                  }
                  if (v748 != 0) {
                    v749 = 19;
                    v750 = 21;
                  LABEL_324:
                    nn_673fd0((__int64*)a1, 0xAu, v749, v750);
                    goto LABEL_283;
                  }
                  goto LABEL_304;
                }
                if (v748 <= 5) {
                  if (v748 == 4) {
                    v749 = 18;
                    v750 = 19;
                    goto LABEL_324;
                  }
                  goto LABEL_327;
                }
                if (v748 != 6) {
                  nn_677e90((__int64*)a1, 0xAu, 0x13u, 0x15u, 0x12u);
                  goto LABEL_283;
                }
              LABEL_345:
                v765 = (__int64*)a1;
                v764 = 18;
                goto LABEL_352;
              }
              v759 = (2 * v11) | (4 * v13) | v9;
              if (v759 <= 3) {
                if (v759 > 1) {
                  v762 = (__int64*)a1;
                  if (v759 != 2) {
                    nn_677f40((__int64*)a1, 0xAu, 0x13u, 0x15u, 0);
                    nn_677f40((__int64*)a1, 9u, 0x12u, 0x16u, 0);
                    nn_677e30((__int64*)a1, 10, 10, 9);
                    goto LABEL_283;
                  }
                  v760 = 18;
                  v761 = 22;
                  goto LABEL_335;
                }
                if (v759 != 0) {
                  v760 = 19;
                  v761 = 21;
                  v762 = (__int64*)a1;
                  goto LABEL_335;
                }
              LABEL_304:
                v764 = 20;
                v765 = (__int64*)a1;
              LABEL_352:
                nn_677ee0(v765, 10, v764);
                goto LABEL_283;
              }
              if (v759 > 5) {
                if (v759 == 6) {
                  goto LABEL_345;
                }
                nn_677e30((__int64*)a1, 10, 18, 19);
                v762 = (__int64*)a1;
                v760 = 10;
                v761 = 24;
              LABEL_335:
                nn_677f40(v762, 0xAu, v760, v761, 0);
                goto LABEL_283;
              }
              if (v759 == 4) {
                nn_677f40((__int64*)a1, 0xAu, 0x13u, 0x15u, 0);
                nn_677ff0((__int64*)a1, 10, 19, 10);
                goto LABEL_283;
              }
            LABEL_327:
              v765 = (__int64*)a1;
              v764 = 19;
              goto LABEL_352;
            }
            v763 = (2 * v11) | (4 * v13) | v9;
            if (v763 > 3) {
              if (v763 <= 5) {
                if (v763 == 4) {
                  v762 = (__int64*)a1;
                  v760 = 18;
                  v761 = 19;
                  goto LABEL_335;
                }
                goto LABEL_327;
              }
              if (v763 == 6) {
                goto LABEL_345;
              }
              v769 = 18;
              v770 = 19;
            }
            else {
              if (v763 > 1) {
                v766 = (__int64*)a1;
                if (v763 != 2) {
                  nn_678050((__int64*)a1, 10, 19, 18);
                  *(_DWORD*)(a1 + 16) = 4;
                  nn_677ff0((__int64*)a1, 10, 18, 19);
                  v765 = (__int64*)a1;
                  v764 = 10;
                  *(_DWORD*)(a1 + 16) = 1;
                  goto LABEL_352;
                }
                v767 = 18;
                v768 = 19;
              }
              else {
                if (v763 == 0) {
                  goto LABEL_304;
                }
                v767 = 19;
                v768 = 18;
                v766 = (__int64*)a1;
              }
              nn_677ff0(v766, 10, v767, v768);
              v769 = 10;
              v770 = 20;
            }
            nn_6780b0((__int64*)a1, 0xAu, v769, v770);
            goto LABEL_283;
          }
        LABEL_275:
          v723 = *(_DWORD*)(a1 + 8);
          v724 = *(_QWORD*)a1;
          v725 = *(_DWORD*)(a1 + 16);
          v708 = *(_DWORD*)(a1 + 28);
          PSEUDO_LOW_LANE64(v709, n64_u64, *(unsigned __int64*)(a1 + 20));
          *(_DWORD*)(a1 + 8) = v723 + 1;
          v710 = v724 + 48LL * v723;
          *(_DWORD*)v710 = v725;
          v711 = SdkData_bb2360;
          v712 = 20;
          goto LABEL_276;
        }
        v730 = *(_DWORD*)(a1 + 8);
        v731 = *(_QWORD*)a1;
        v732 = *(_DWORD*)(a1 + 16);
        v733 = *(_DWORD*)(a1 + 28);
        PSEUDO_LOW_LANE64(v734, n64_u64, *(unsigned __int64*)(a1 + 20));
        *(_DWORD*)(a1 + 8) = v730 + 1;
        v735 = v731 + 48LL * v730;
        *(_DWORD*)v735 = v732;
        *(_DWORD*)(v735 + 40) = v733;
        *(_BYTE*)(v735 + 44) = 0;
        *(_DWORD*)(v735 + 20) = 18;
        *(_OWORD*)(v735 + 4) = SdkData_bb1ce0;
        *(int32x2_t*)(v735 + 24) = vrev64_s32(v734);
        *(_QWORD*)(v735 + 32) = 10;
        v736 = *(_DWORD*)(a1 + 8);
        v737 = *(_DWORD*)(a1 + 16);
        v708 = *(_DWORD*)(a1 + 28);
        PSEUDO_LOW_LANE64(v721, n64_u64, *(unsigned __int64*)(a1 + 20));
        v710 = *(_QWORD*)a1 + 48LL * v736;
        *(_DWORD*)(a1 + 8) = v736 + 1;
        *(_DWORD*)v710 = v737;
        v722 = SdkData_bb2cd0;
      }
      *(_OWORD*)(v710 + 4) = v722;
      LANES64(v726).n64_u64[0] = LANES64_OF(vrev64_s32(v721)).n64_u64[0];
      *(_DWORD*)(v710 + 20) = 20;
      goto LABEL_282;
    }
  LABEL_286:
    SdkRoutine_678120(a1);
    result = a1;
    v771 = *(_DWORD*)(a1 + 8);
    v772 = (unsigned int)(v771 - 2);
    if (v771 >= 2) {
      vars10 = _28;
      v773 = (unsigned int)(v771 - 1);
      v774 = 0;
      v775 = -v773;
      v776 = 16 * (v772 + 2LL * (unsigned int)v772);
      v777 = 16 * (v773 + 2LL * (unsigned int)v773);
      while (1) {
        v779 = *(_QWORD*)result;
        v780 = *(_QWORD*)result + 48 * v772;
        v781 = *(_DWORD*)(v780 + 32);
        if (*(_DWORD*)v780 != 1 || *(_DWORD*)(v780 + 4) != 0 ||
            *(_DWORD*)(v780 + 20) != 20 || *(_DWORD*)(v780 + 24) != 0 ||
            *(_DWORD*)(v780 + 28) != 0) {
          break;
        }
        v782 = *(_DWORD*)(v780 + 16);
        v783 = v782 != 15 && v782 < 20;
        if (!v783) {
          break;
        }
        if (*(_DWORD*)(v780 + 36) != 0) {
          goto LABEL_369;
        }
        if (v781 != v782) {
          v784 = true;
          goto LABEL_370;
        }
        *(_BYTE*)(v780 + 44) = 1;
      LABEL_480:
        ++*(_DWORD*)(result + 12);
      LABEL_358:
        v776 -= 48;
        ++v775;
        LODWORD(v773) = v773 - 1;
        v777 -= 48;
        v783 = v772-- <= 0;
        if (v783) {
          goto LABEL_497;
        }
      }
      v782 = *(_DWORD*)(v780 + 16);
    LABEL_369:
      v784 = false;
    LABEL_370:
      v785 = 0;
      v786 = v777;
      v787 = v773;
      v788 = v776;
      do {
        v789 = v785;
        v790 = v779 + v788;
        v791 = v787;
        v792 = v786;
        v788 += 48;
        ++v787;
        v786 += 48;
        v793 = *(_BYTE*)(v790 + 92);
        v785 = v789 + 1;
      } while ((v793 & 1) != 0);
      if (*(_DWORD*)v780 == *(_DWORD*)(v779 + v788) &&
          *(_DWORD*)(v780 + 36) == 0) {
        if (*(_DWORD*)(v779 + v788 + 8) == v781) {
          *(_DWORD*)(v779 + v788 + 8) = 15;
          ++v774;
          v779 = *(_QWORD*)result;
        }
        if (*(_DWORD*)(v779 + v788 + 16) == v781) {
          *(_DWORD*)(v779 + v788 + 16) = 15;
          ++v774;
          v779 = *(_QWORD*)result;
        }
        if (*(_DWORD*)(v779 + v788 + 12) == v781) {
          *(_DWORD*)(v779 + v788 + 12) = 15;
          ++v774;
          v779 = *(_QWORD*)result;
        }
        if (*(_DWORD*)(v779 + v788 + 20) == v781) {
          *(_DWORD*)(v779 + v788 + 20) = 15;
          ++v774;
          v779 = *(_QWORD*)result;
        }
      }
      v778 = (_DWORD*)(v779 + 48 * v772);
      if (v778[9] != 0) {
        goto LABEL_358;
      }
      v794 = *v778 - 1;
      if (v794 > 6) {
        v795 = 0;
      }
      else {
        v795 = SdkData_c8e9e0[v794];
      }
      v796 = v772 + v785;
      if ((signed __int32)*(_DWORD*)(result + 8) <= v796) {
        v798 = v796;
      }
      else {
        v797 = v775 - v789 + v791;
        v798 = v796;
        while (1) {
          if ((*(_BYTE*)(v779 + v792 + 44) & 1) == 0) {
            if (*(_DWORD*)(v779 + v792 + 36) != 0) {
              v795 = 7;
            }
            if (v784) {
              v811 = *(_DWORD*)(v779 + v792 + 8);
              if (v811 == v781 || v797 == 0 && v811 == 15) {
                *(_DWORD*)(v779 + v792 + 8) = v782;
                v779 = *(_QWORD*)result;
              }
              v812 = *(_DWORD*)(v779 + v792 + 16);
              if (v812 == v781 || v797 == 0 && v812 == 15) {
                *(_DWORD*)(v779 + v792 + 16) = v782;
                v779 = *(_QWORD*)result;
              }
              v813 = *(_DWORD*)(v779 + v792 + 12);
              if (v813 == v781 || v797 == 0 && v813 == 15) {
                *(_DWORD*)(v779 + v792 + 12) = v782;
                v779 = *(_QWORD*)result;
              }
              v814 = *(_DWORD*)(v779 + v792 + 20);
              if (v814 == v781 || v797 == 0 && v814 == 15) {
                *(_DWORD*)(v779 + v792 + 20) = v782;
                v779 = *(_QWORD*)result;
              }
              v815 = *(_DWORD*)(v779 + v792 + 32);
              v784 = v815 != v782 && v815 != v781;
            }
            else {
              v784 = false;
            }
            v817 = (_DWORD*)(v779 + v792);
            if (*(_DWORD*)(v779 + v792 + 8) == v781 || v817[4] == v781 ||
                *(_DWORD*)(v779 + v792 + 12) == v781 ||
                *(_DWORD*)(v779 + v792 + 20) == v781) {
              v818 = *(_DWORD*)(v779 + v792) - 1;
              if (v818 <= 6 && (SdkData_c8e9e0[v818] & v795) != 0) {
                goto LABEL_388;
              }
            }
            if (*(_DWORD*)(v779 + v792 + 32) == v781) {
              if (*(_DWORD*)(v779 + v792 + 28) == 0) {
                v819 = *v817 - 1;
                if (v819 <= 6) {
                  v810 = SdkData_c8e9fc[v819];
                }
                else {
                  v810 = -1;
                }
                v795 &= v810;
              }
              if (v795 == 0) {
                break;
              }
            }
          }
          ++v798;
          --v797;
          v792 += 48;
          if ((signed __int32)*(_DWORD*)(result + 8) <= v798) {
            goto LABEL_388;
          }
        }
        v822 = v779 + v788;
        if (*(_DWORD*)(v779 + v788 + 8) == 15 || *(_DWORD*)(v822 + 12) == 15 ||
            *(_DWORD*)(v822 + 16) == 15 || *(_DWORD*)(v779 + v788 + 20) == 15) {
          v795 = 0;
          ++v774;
          *(_DWORD*)(v779 + 48 * v772 + 32) = 15;
        }
        else {
          v823 = v779 + 48 * v772;
          if (*(_DWORD*)(v823 + 24) == 5) {
            v795 = 0;
          }
          else {
            *(_BYTE*)(v823 + 44) = 1;
            v795 = 0;
            ++*(_DWORD*)(result + 12);
          }
        }
      }
    LABEL_388:
      if (v798 == *(_DWORD*)(result + 8)) {
        v799 = *(_QWORD*)result;
        v800 = (_DWORD*)(*(_QWORD*)result + v788);
        v802 = v800[2] == 15 || v800[3] == 15 || v800[4] == 15;
        if (v802 || v800[5] == 15) {
          ++v774;
          *(_DWORD*)(v799 + 48 * v772 + 32) = 15;
          goto LABEL_398;
        }
        if (v781 == 12) {
          v820 = v799 + 48LL * v798;
          if (*(_DWORD*)(v820 - 20) != 0) {
            goto LABEL_398;
          }
          v821 = *(_DWORD*)(v820 - 48) - 1;
          if (v821 > 6) {
            if (v795 != 0) {
              goto LABEL_398;
            }
          }
          else if ((SdkData_c8e9fc[v821] & v795) != 0) {
            goto LABEL_398;
          }
        }
        v824 = v799 + 48 * v772;
        if (*(_DWORD*)(v824 + 24) != 5) {
          *(_BYTE*)(v824 + 44) = 1;
          ++*(_DWORD*)(result + 12);
        }
      }
    LABEL_398:
      v803 = *(_QWORD*)result;
      v804 = *(_QWORD*)result + 48 * v772;
      v805 = *(_DWORD*)(v804 + 32);
      if (v805 != 15) {
        goto LABEL_410;
      }
      if (*(_DWORD*)(v804 + 4) > 1u) {
        goto LABEL_410;
      }
      if (*(_DWORD*)(v803 + v788 + 4) != 2) {
        goto LABEL_410;
      }
      if (*(_DWORD*)(v803 + v788 + 20) != 20) {
        goto LABEL_410;
      }
      v806 = v803 + v788;
      v807 = *(_DWORD*)(v803 + v788 + 8);
      if (v807 != 15 && *(_DWORD*)(v806 + 16) != 15) {
        goto LABEL_410;
      }
      if (*(_DWORD*)(v804 + 36) != 0 ||
          *(_DWORD*)v804 != *(_DWORD*)(v803 + v788) ||
          *(_DWORD*)(v804 + 40) != *(_DWORD*)(v803 + v788 + 40) ||
          *(_DWORD*)(v804 + 28) != 0 || *(_DWORD*)(v803 + v788 + 28) != 0 ||
          *(_DWORD*)(v804 + 24) != 0) {
        goto LABEL_410;
      }
      if (v807 == 15) {
        v825 = *(_DWORD*)(v803 + v788 + 16);
        if (v825 <= 19) {
          *(_DWORD*)(v806 + 8) = v825;
          *(_DWORD*)(*(_QWORD*)result + v788 + 12) =
              *(_DWORD*)(*(_QWORD*)result + v788 + 16);
        LABEL_491:
          *(_DWORD*)(*(_QWORD*)result + v788 + 16) =
              *(_DWORD*)(*(_QWORD*)result + 48 * v772 + 16);
          *(_DWORD*)(*(_QWORD*)result + v788 + 20) =
              *(_DWORD*)(*(_QWORD*)result + 48 * v772 + 20);
          v826 = *(_QWORD*)result + v788;
          if (*(_DWORD*)(*(_QWORD*)result + 48 * v772 + 4) != 0) {
            v827 = 3;
          }
          else {
            v827 = 2;
          }
          *(_DWORD*)(v826 + 4) = v827;
          v809 = *(_QWORD*)result + 48 * v772;
        LABEL_495:
          *(_BYTE*)(v809 + 44) = 1;
          goto LABEL_480;
        }
      }
      else if (v807 <= 19) {
        *(_DWORD*)(v803 + v788 + 12) = v807;
        goto LABEL_491;
      }
    LABEL_410:
      if (*(_DWORD*)(result + 8) - 1 <= v796) {
        goto LABEL_358;
      }
      if ((*(_BYTE*)(v804 + 44) & 1) != 0) {
        goto LABEL_358;
      }
      if (v805 != 15) {
        goto LABEL_358;
      }
      if ((*(_BYTE*)(v803 + v788 + 44) & 1) != 0) {
        goto LABEL_358;
      }
      if (*(_DWORD*)(v803 + v788 + 4) != 0) {
        goto LABEL_358;
      }
      if (*(_DWORD*)(v803 + v788 + 16) != 15) {
        goto LABEL_358;
      }
      if (*(_DWORD*)(v803 + v788 + 20) != 20) {
        goto LABEL_358;
      }
      if (*(_DWORD*)v804 != 1) {
        goto LABEL_358;
      }
      if (*(_DWORD*)(v803 + v788) != 1) {
        goto LABEL_358;
      }
      if (*(_DWORD*)(v804 + 36) != 0) {
        goto LABEL_358;
      }
      if (*(_DWORD*)(v803 + v788 + 36) != 0) {
        goto LABEL_358;
      }
      if (*(_DWORD*)(v803 + v788 + 24) != 0) {
        goto LABEL_358;
      }
      v808 = v803 + v788;
      if (*(_DWORD*)(v808 + 28) != 0) {
        goto LABEL_358;
      }
      *(_DWORD*)(v804 + 32) = *(_DWORD*)(v808 + 32);
      v809 = *(_QWORD*)result + v788;
      goto LABEL_495;
    }
    v774 = 0;
  LABEL_497:
    SdkData_10422a8 += v774;
    return result;
  case 38:
    v95 = *(_DWORD*)(a1 + 8);
    v96 = *(_DWORD*)(a1 + 156);
    v97 = *(_QWORD*)a1;
    v99 = *(_DWORD*)(a1 + 24);
    v98 = *(_DWORD*)(a1 + 28);
    v101 = *(_DWORD*)(a1 + 16);
    v100 = *(_DWORD*)(a1 + 20);
    *(_DWORD*)(a1 + 8) = v95 + 1;
    v29 = v96 == 0;
    v102 = v97 + 48LL * v95;
    *(_DWORD*)v102 = v101;
    if (v96 != 0) {
      *(_DWORD*)(v102 + 40) = v98;
      v103 = 24;
      *(_DWORD*)(v102 + 28) = v100;
      *(_BYTE*)(v102 + 44) = 0;
      *(_DWORD*)(v102 + 20) = 3;
      *(_DWORD*)(v102 + 24) = v99;
      *(_OWORD*)(v102 + 4) = SdkData_bb3330;
      *(_QWORD*)(v102 + 32) = 4;
    }
    else {
      *(_DWORD*)(v102 + 28) = v100;
      *(_DWORD*)(v102 + 40) = v98;
      *(_BYTE*)(v102 + 44) = 0;
      *(_DWORD*)(v102 + 20) = 18;
      *(_DWORD*)(v102 + 24) = v99;
      *(_OWORD*)(v102 + 4) = SdkData_bb3340;
      *(_QWORD*)(v102 + 32) = 4;
      v632 = *(_DWORD*)(a1 + 8);
      v633 = *(_QWORD*)a1;
      v634 = *(_DWORD*)(a1 + 16);
      v635 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v636, n64_u64, *(unsigned __int64*)(a1 + 20));
      *(_DWORD*)(a1 + 8) = v632 + 1;
      v637 = v633 + 48LL * v632;
      *(_DWORD*)v637 = v634;
      *(_DWORD*)(v637 + 40) = v635;
      *(_BYTE*)(v637 + 44) = 0;
      *(_DWORD*)(v637 + 20) = 20;
      *(_OWORD*)(v637 + 4) = SdkData_bb1f20;
      v103 = 9;
      *(int32x2_t*)(v637 + 24) = vrev64_s32(v636);
      *(_QWORD*)(v637 + 32) = 9;
    }
    v638 = *(_DWORD*)(a1 + 8);
    v639 = *(_QWORD*)a1;
    v640 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v641, n64_u64, *(unsigned __int64*)(a1 + 20));
    v136 = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v638 + 1;
    LANES64(v138).n64_u64[0] = LANES64_OF(vrev64_s32(v641)).n64_u64[0];
    v139 = (int32x2_t*)(v639 + 48LL * v638);
    LANES64(*(v139)).n64_u32[0] = v640;
    *(unsigned __int64*)((char*)LANES64(*(v139)).n64_u64 + 4) = 0x400000004LL;
    LANES64(v139[1]).n64_u32[1] = 16;
    LANES64(v139[2]).n64_u32[0] = v103;
    LANES64(v139[2]).n64_u32[1] = 20;
  LABEL_214:
    LANES64(v139[3]).n64_u64[0] = LANES64(v138).n64_u64[0];
    LANES64(v139[4]).n64_u64[0] = 4;
    LANES64(v139[5]).n64_u32[0] = v136;
    LANES64(v139[5]).n64_u8[4] = 0;
    if (a3 == 2) {
      goto LABEL_74;
    }
    goto LABEL_225;
  case 39:
    v434 = *(_DWORD*)(a1 + 8);
    v435 = *(_QWORD*)a1;
    v436 = *(_DWORD*)(a1 + 156) == 0;
    v437 = *(_DWORD*)(a1 + 16);
    v438 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v439, n64_u64, *(unsigned __int64*)(a1 + 20));
    v29 = v436;
    *(_DWORD*)(a1 + 8) = v434 + 1;
    LANES64(v440).n64_u64[0] = LANES64_OF(vrev64_s32(v439)).n64_u64[0];
    LANES64(v441).n64_u64[0] = LANES64_OF(vdup_n_s16(v436)).n64_u64[0];
    v442 = v435 + 48LL * v434;
    if (v436) {
      v443 = 18;
    }
    else {
      v443 = 3;
    }
    *(_DWORD*)v442 = v437;
    *(_DWORD*)(v442 + 20) = v443;
    *(_DWORD*)(v442 + 40) = v438;
    *(_BYTE*)(v442 + 44) = 0;
    *(int8x16_t*)(v442 + 4) =
        vbslq_s8(vcltzq_s32(vshlq_n_s32(vmovl_u16(v441), 0x1Fu)),
                 COERCE_AS(int8x16_t, SdkData_bb3340),
                 COERCE_AS(int8x16_t, SdkData_bb3330));
    LANES64(v444).n64_u64[0] =
        LANES64_OF(vcltz_s32(vshl_n_s32(vdup_n_s32(v436), 0x1Fu))).n64_u64[0];
    *(int32x2_t*)(v442 + 24) = v440;
    *(_QWORD*)(v442 + 32) = 4;
    v445 = *(_DWORD*)(a1 + 8);
    v446 = *(_DWORD*)(a1 + 16);
    v447 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v448, n64_u64, *(unsigned __int64*)(a1 + 20));
    v449 = *(_QWORD*)a1 + 48LL * v445;
    *(_DWORD*)(a1 + 8) = v445 + 1;
    *(_DWORD*)v449 = v446;
    *(_DWORD*)(v449 + 12) = 18;
    *(_QWORD*)(v449 + 32) = 4;
    *(_DWORD*)(v449 + 40) = v447;
    *(_BYTE*)(v449 + 44) = 0;
    *(int8x8_t*)(v449 + 4) = vbsl_s8(v444, COERCE_AS(int8x8_t, 0x400000003LL),
                                     COERCE_AS(int8x8_t, 0x1200000001LL));
    *(int8x8_t*)(v449 + 16) = vbsl_s8(v444, COERCE_AS(int8x8_t, 0x1300000018LL),
                                      COERCE_AS(int8x8_t, 0x1800000004LL));
    *(int32x2_t*)(v449 + 24) = vrev64_s32(v448);
    v450 = *(_DWORD*)(a1 + 8);
    v451 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v452, n64_u64, *(unsigned __int64*)(a1 + 20));
    v453 = *(_DWORD*)(a1 + 28);
    v454 = *(_QWORD*)a1 + 48LL * v450;
    *(_DWORD*)(a1 + 8) = v450 + 1;
    *(_DWORD*)v454 = v451;
    *(_DWORD*)(v454 + 40) = v453;
    *(_BYTE*)(v454 + 44) = 0;
    *(_DWORD*)(v454 + 20) = 20;
    *(int32x2_t*)(v454 + 24) = vrev64_s32(v452);
    *(_QWORD*)(v454 + 32) = 4;
    *(_OWORD*)(v454 + 4) = SdkData_bb0fe0;
    if (a3 == 2) {
      goto LABEL_74;
    }
    goto LABEL_225;
  case 40:
    v390 = *(_DWORD*)(a1 + 128);
    if ((v390 & 1) == 0) {
      *(_DWORD*)(a1 + 128) = v390 | 1;
      *(_DWORD*)(a1 + 40) = 1056964608;
      *(_QWORD*)(a1 + 32) = 0x3F0000003F000000LL;
    }
    v391 = *(_DWORD*)(a1 + 8);
    v392 = *(_QWORD*)a1;
    v393 = *(_DWORD*)(a1 + 16);
    v29 = 0;
    *(_DWORD*)(a1 + 28) = 0;
    PSEUDO_LOW_LANE64(v394, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v391 + 1;
    v395 = v392 + 48LL * v391;
    *(_DWORD*)v395 = v393;
    *(_DWORD*)(v395 + 40) = 0;
    *(_BYTE*)(v395 + 44) = 0;
    *(_DWORD*)(v395 + 20) = 23;
    *(_OWORD*)(v395 + 4) = SdkData_bb4140;
    *(int32x2_t*)(v395 + 24) = vrev64_s32(v394);
    *(_QWORD*)(v395 + 32) = 0x100000009LL;
    *(_DWORD*)(a1 + 16) = 7;
    v396 = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v397, n64_u64, *(unsigned __int64*)(a1 + 20));
    v398 = *(_DWORD*)(a1 + 28);
    v399 = *(_QWORD*)a1 + 48LL * v396;
    *(_DWORD*)(a1 + 8) = v396 + 1;
    *(_DWORD*)(v399 + 40) = v398;
    *(_BYTE*)(v399 + 44) = 0;
    *(_OWORD*)v399 = SdkData_bb1470;
    *(_QWORD*)(v399 + 16) = 0x100000018LL;
    *(int32x2_t*)(v399 + 24) = vrev64_s32(v397);
    *(_QWORD*)(v399 + 32) = 4;
    v400 = *(_DWORD*)(a1 + 8);
    v401 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v402, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v399) = *(_DWORD*)(a1 + 28);
    v403 = *(_QWORD*)a1 + 48LL * v400;
    *(_DWORD*)(a1 + 8) = v400 + 1;
    *(_DWORD*)v403 = v401;
    *(_DWORD*)(v403 + 40) = v399;
    *(_BYTE*)(v403 + 44) = 0;
    *(_DWORD*)(v403 + 20) = 4;
    *(int32x2_t*)(v403 + 24) = vrev64_s32(v402);
    *(_QWORD*)(v403 + 32) = 4;
    *(_OWORD*)(v403 + 4) = SdkData_bb3ac0;
    v404 = *(_DWORD*)(a1 + 8);
    LODWORD(v399) = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v405, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v403) = *(_DWORD*)(a1 + 28);
    v406 = *(_QWORD*)a1 + 48LL * v404;
    *(_DWORD*)(a1 + 8) = v404 + 1;
    *(_DWORD*)v406 = v399;
    *(_DWORD*)(v406 + 40) = v403;
    *(_BYTE*)(v406 + 44) = 0;
    *(_DWORD*)(v406 + 20) = 20;
    *(int32x2_t*)(v406 + 24) = vrev64_s32(v405);
    *(_QWORD*)(v406 + 32) = 4;
    *(_OWORD*)(v406 + 4) = SdkData_bb1b10;
    v407 = *(_DWORD*)(a1 + 8);
    LODWORD(v403) = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v408, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v406) = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v407 + 1;
    v409 = *(_QWORD*)a1 + 48LL * v407;
    *(_DWORD*)v409 = v403;
    *(_DWORD*)(v409 + 20) = 20;
    *(int32x2_t*)(v409 + 24) = vrev64_s32(v408);
    *(_QWORD*)(v409 + 32) = 4;
    *(_DWORD*)(v409 + 40) = v406;
    *(_BYTE*)(v409 + 44) = 0;
    *(_OWORD*)(v409 + 4) = SdkData_bb0ff0;
    LODWORD(v409) = *(_DWORD*)(a1 + 8);
    LODWORD(v403) = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v410, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v406) = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v409 + 1;
    v411 = *(_QWORD*)a1 + 48LL * (int)v409;
    *(_DWORD*)v411 = v403;
    *(_DWORD*)(v411 + 20) = 20;
    *(int32x2_t*)(v411 + 24) = vrev64_s32(v410);
    *(_QWORD*)(v411 + 32) = 4;
    *(_DWORD*)(v411 + 40) = v406;
    *(_BYTE*)(v411 + 44) = 0;
    *(_OWORD*)(v411 + 4) = SdkData_bb30b0;
    *(_DWORD*)(a1 + 16) = 4;
    LODWORD(v411) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v412, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v403) = *(_DWORD*)(a1 + 28);
    v413 = *(_QWORD*)a1 + 48LL * (int)v411;
    *(_DWORD*)(a1 + 8) = v411 + 1;
    *(_QWORD*)(v413 + 32) = 4;
    *(_DWORD*)(v413 + 40) = v403;
    *(_BYTE*)(v413 + 44) = 0;
    *(_OWORD*)v413 = SdkData_bb4150;
    *(_QWORD*)(v413 + 16) = 0x100000001LL;
    *(int32x2_t*)(v413 + 24) = vrev64_s32(v412);
    LODWORD(v411) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v414, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v403) = *(_DWORD*)(a1 + 16);
    LODWORD(v413) = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v411 + 1;
    v415 = *(_QWORD*)a1 + 48LL * (int)v411;
    *(_OWORD*)(v415 + 4) = SdkData_bb1b10;
    *(_DWORD*)v415 = v403;
    *(_DWORD*)(v415 + 20) = 20;
    *(_DWORD*)(v415 + 40) = v413;
    *(_BYTE*)(v415 + 44) = 0;
    *(int32x2_t*)(v415 + 24) = vrev64_s32(v414);
    *(_QWORD*)(v415 + 32) = 4;
    LODWORD(v415) = *(_DWORD*)(a1 + 8);
    LODWORD(v403) = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v416, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v413) = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v415 + 1;
    v417 = *(_QWORD*)a1 + 48LL * (int)v415;
    *(_DWORD*)v417 = v403;
    *(_DWORD*)(v417 + 40) = v413;
    *(_BYTE*)(v417 + 44) = 0;
    *(_DWORD*)(v417 + 20) = 3;
    *(_OWORD*)(v417 + 4) = SdkData_bb1870;
    *(int32x2_t*)(v417 + 24) = vrev64_s32(v416);
    *(_QWORD*)(v417 + 32) = 9;
    LODWORD(v417) = *(_DWORD*)(a1 + 8);
    LODWORD(v403) = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v418, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v413) = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v417 + 1;
    v419 = *(_QWORD*)a1 + 48LL * (int)v417;
    *(_DWORD*)v419 = v403;
    *(_DWORD*)(v419 + 20) = 20;
    *(int32x2_t*)(v419 + 24) = vrev64_s32(v418);
    *(_QWORD*)(v419 + 32) = 4;
    *(_DWORD*)(v419 + 40) = v413;
    *(_BYTE*)(v419 + 44) = 0;
    *(_OWORD*)(v419 + 4) = SdkData_bb3e50;
    LODWORD(v419) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v420, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v403) = *(_DWORD*)(a1 + 16);
    LODWORD(v413) = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v419 + 1;
    v421 = *(_QWORD*)a1 + 48LL * (int)v419;
    *(_OWORD*)(v421 + 4) = SdkData_bb30b0;
    *(_DWORD*)v421 = v403;
    *(_DWORD*)(v421 + 20) = 20;
    *(_DWORD*)(v421 + 40) = v413;
    *(_BYTE*)(v421 + 44) = 0;
    *(int32x2_t*)(v421 + 24) = vrev64_s32(v420);
    *(_QWORD*)(v421 + 32) = 4;
    LODWORD(v421) = *(_DWORD*)(a1 + 8);
    LODWORD(v399) = *(_DWORD*)(a1 + 16);
    LODWORD(v403) = *(_DWORD*)(a1 + 28);
    v422 = *(_QWORD*)a1 + 48LL * (int)v421;
    v423 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
    *(_DWORD*)(a1 + 8) = v421 + 1;
    *(_DWORD*)v422 = v399;
    *(_OWORD*)(v422 + 4) = SdkData_bb1870;
    *(_DWORD*)(v422 + 20) = 4;
    *(_DWORD*)(v422 + 40) = v403;
    *(_BYTE*)(v422 + 44) = 0;
    *(_QWORD*)(v422 + 24) = v423;
    *(_QWORD*)(v422 + 32) = 4;
    LODWORD(v403) = *(_DWORD*)(a1 + 8);
    v424 = *(_DWORD*)(a1 + 28);
    v425 = *(_QWORD*)a1 + 48LL * (int)v403;
    v426 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
    *(_DWORD*)(a1 + 8) = v403 + 1;
    *(_QWORD*)(v425 + 32) = 0x100000009LL;
    *(_DWORD*)(v425 + 40) = v424;
    *(_BYTE*)(v425 + 44) = 0;
    *(_OWORD*)v425 = SdkData_bb5150;
    *(_QWORD*)(v425 + 16) = 0x1400000001LL;
    *(_QWORD*)(v425 + 24) = v426;
    LODWORD(v403) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v427, n64_u64, *(unsigned __int64*)(a1 + 20));
    v428 = *(_DWORD*)(a1 + 28);
    v429 = *(_QWORD*)a1 + 48LL * (int)v403;
    *(_DWORD*)(a1 + 8) = v403 + 1;
    *(_QWORD*)(v429 + 32) = 4;
    *(_DWORD*)(v429 + 40) = v428;
    *(_BYTE*)(v429 + 44) = 0;
    *(_OWORD*)v429 = SdkData_bb45b0;
    *(_QWORD*)(v429 + 16) = 0x1400000014LL;
    *(int32x2_t*)(v429 + 24) = vrev64_s32(v427);
    LODWORD(v403) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v430, n64_u64, *(unsigned __int64*)(a1 + 20));
    v431 = *(_DWORD*)(a1 + 28);
    v432 = *(_QWORD*)a1 + 48LL * (int)v403;
    *(_DWORD*)(a1 + 8) = v403 + 1;
    *(_OWORD*)v432 = SdkData_bb5150;
    *(_QWORD*)(v432 + 32) = 0x100000009LL;
    *(_DWORD*)(v432 + 40) = v431;
    *(_BYTE*)(v432 + 44) = 0;
    *(_QWORD*)(v432 + 16) = 0x1800000001LL;
    *(int32x2_t*)(v432 + 24) = vrev64_s32(v430);
    LODWORD(v403) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v433, n64_u64, *(unsigned __int64*)(a1 + 20));
    v253 = *(_DWORD*)(a1 + 28);
    v254 = *(_QWORD*)a1 + 48LL * (int)v403;
    *(_DWORD*)(a1 + 8) = v403 + 1;
    *(_QWORD*)(v254 + 32) = 4;
    *(_OWORD*)v254 = SdkData_bb45a0;
    *(_QWORD*)(v254 + 16) = 0x1400000018LL;
    *(int32x2_t*)(v254 + 24) = vrev64_s32(v433);
    goto LABEL_163;
  case 41:
    v114 = *(_DWORD*)(a1 + 128);
    if ((v114 & 1) == 0) {
      *(_DWORD*)(a1 + 128) = v114 | 1;
      *(_DWORD*)(a1 + 40) = 0x40000000;
      *(_QWORD*)(a1 + 32) = 0x4000000040000000LL;
    }
    v115 = *(_DWORD*)(a1 + 8);
    v116 = *(_QWORD*)a1;
    v117 = *(_DWORD*)(a1 + 16);
    v29 = 0;
    PSEUDO_LOW_LANE64(v118, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 28) = 0;
    *(_DWORD*)(a1 + 8) = v115 + 1;
    v119 = v116 + 48LL * v115;
    *(_DWORD*)v119 = v117;
    *(_DWORD*)(v119 + 32) = 4;
    *(_QWORD*)(v119 + 36) = 0;
    *(_BYTE*)(v119 + 44) = 0;
    *(int32x2_t*)(v119 + 24) = vrev64_s32(v118);
    *(_DWORD*)(v119 + 20) = 24;
    *(_OWORD*)(v119 + 4) = SdkData_bb1b00;
    v120 = *(_DWORD*)(a1 + 8);
    LODWORD(v119) = *(_DWORD*)(a1 + 16);
    v121 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v122, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v120 + 1;
    v123 = *(_QWORD*)a1 + 48LL * v120;
    *(_DWORD*)v123 = v119;
    *(_DWORD*)(v123 + 20) = 24;
    *(_DWORD*)(v123 + 40) = v121;
    *(_BYTE*)(v123 + 44) = 0;
    *(_OWORD*)(v123 + 4) = SdkData_bb3630;
    *(int32x2_t*)(v123 + 24) = vrev64_s32(v122);
    *(_QWORD*)(v123 + 32) = 4;
    LODWORD(v123) = *(_DWORD*)(a1 + 8);
    v124 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v125, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v119) = *(_DWORD*)(a1 + 28);
    v126 = *(_QWORD*)a1 + 48LL * (int)v123;
    *(_DWORD*)(a1 + 8) = v123 + 1;
    *(_DWORD*)v126 = v124;
    *(_DWORD*)(v126 + 40) = v119;
    *(_BYTE*)(v126 + 44) = 0;
    *(_DWORD*)(v126 + 20) = 20;
    *(int32x2_t*)(v126 + 24) = vrev64_s32(v125);
    *(_QWORD*)(v126 + 32) = 4;
    *(_OWORD*)(v126 + 4) = SdkData_bb0fe0;
    LODWORD(v123) = *(_DWORD*)(a1 + 8);
    LODWORD(v119) = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v127, n64_u64, *(unsigned __int64*)(a1 + 20));
    v128 = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v123 + 1;
    v129 = *(_QWORD*)a1 + 48LL * (int)v123;
    *(_DWORD*)v129 = v119;
    *(_DWORD*)(v129 + 20) = 20;
    *(int32x2_t*)(v129 + 24) = vrev64_s32(v127);
    *(_QWORD*)(v129 + 32) = 4;
    *(_OWORD*)(v129 + 4) = SdkData_bb30b0;
  LABEL_158:
    *(_DWORD*)(v129 + 40) = v128;
    *(_BYTE*)(v129 + 44) = 0;
    if (a3 == 2) {
      goto LABEL_74;
    }
    goto LABEL_225;
  case 42:
    v170 = *(_DWORD*)(a1 + 8);
    v171 = *(_QWORD*)a1;
    v172 = *(_DWORD*)(a1 + 16);
    v29 = 0;
    v173 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v174, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v170 + 1;
    v175 = v171 + 48LL * v170;
    *(_DWORD*)v175 = v172;
    *(_DWORD*)(v175 + 40) = v173;
    *(_BYTE*)(v175 + 44) = 0;
    *(_DWORD*)(v175 + 20) = 1;
    *(_OWORD*)(v175 + 4) = SdkData_bb3330;
    *(int32x2_t*)(v175 + 24) = vrev64_s32(v174);
    *(_QWORD*)(v175 + 32) = 4;
    v176 = *(_DWORD*)(a1 + 8);
    v177 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v178, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v175) = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v176 + 1;
    v179 = *(_QWORD*)a1 + 48LL * v176;
    *(_DWORD*)v179 = v177;
    *(int32x2_t*)(v179 + 24) = vrev64_s32(v178);
    *(_QWORD*)(v179 + 32) = 4;
    *(_DWORD*)(v179 + 40) = v175;
    *(_BYTE*)(v179 + 44) = 0;
    *(_DWORD*)(v179 + 20) = 24;
    *(_OWORD*)(v179 + 4) = SdkData_bb3630;
    LODWORD(v179) = *(_DWORD*)(a1 + 8);
    v180 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v181, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v175) = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v179 + 1;
    v182 = *(_QWORD*)a1 + 48LL * (int)v179;
    *(_DWORD*)v182 = v180;
    *(_OWORD*)(v182 + 4) = SdkData_bb3630;
    *(_DWORD*)(v182 + 40) = v175;
    *(_BYTE*)(v182 + 44) = 0;
    *(_DWORD*)(v182 + 20) = 3;
    *(int32x2_t*)(v182 + 24) = vrev64_s32(v181);
    *(_QWORD*)(v182 + 32) = 0x100000009LL;
    LODWORD(v182) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v183, n64_u64, *(unsigned __int64*)(a1 + 20));
    v184 = *(_DWORD*)(a1 + 28);
    v185 = *(_QWORD*)a1 + 48LL * (int)v182;
    *(_DWORD*)(a1 + 8) = v182 + 1;
    *(_QWORD*)(v185 + 32) = 4;
    *(_DWORD*)(v185 + 40) = v184;
    *(_BYTE*)(v185 + 44) = 0;
    *(_OWORD*)v185 = SdkData_bb2330;
    *(_QWORD*)(v185 + 16) = 0x1400000014LL;
    *(int32x2_t*)(v185 + 24) = vrev64_s32(v183);
    *(_DWORD*)(a1 + 16) = 5;
    LODWORD(v182) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v186, n64_u64, *(unsigned __int64*)(a1 + 20));
    v187 = *(_DWORD*)(a1 + 28);
    v188 = *(_QWORD*)a1 + 48LL * (int)v182;
    *(_DWORD*)(a1 + 8) = v182 + 1;
    *(_QWORD*)(v188 + 32) = 4;
    *(_DWORD*)(v188 + 40) = v187;
    *(_BYTE*)(v188 + 44) = 0;
    *(_OWORD*)v188 = SdkData_bb2eb0;
    *(_QWORD*)(v188 + 16) = 0x100000001LL;
    *(int32x2_t*)(v188 + 24) = vrev64_s32(v186);
    LODWORD(v182) = *(_DWORD*)(a1 + 8);
    v189 = *(_DWORD*)(a1 + 16);
    PSEUDO_LOW_LANE64(v190, n64_u64, *(unsigned __int64*)(a1 + 20));
    LODWORD(v188) = *(_DWORD*)(a1 + 28);
    *(_DWORD*)(a1 + 8) = v182 + 1;
    v191 = *(_QWORD*)a1 + 48LL * (int)v182;
    *(_DWORD*)v191 = v189;
    *(int32x2_t*)(v191 + 24) = vrev64_s32(v190);
    *(_QWORD*)(v191 + 32) = 4;
    *(_DWORD*)(v191 + 40) = v188;
    *(_BYTE*)(v191 + 44) = 0;
    *(_DWORD*)(v191 + 20) = 20;
    *(_OWORD*)(v191 + 4) = SdkData_bb1240;
    goto LABEL_223;
  case 43:
    v239 = *(_DWORD*)(a1 + 8);
    v240 = *(_QWORD*)a1;
    v241 = *(_DWORD*)(a1 + 16);
    v29 = 0;
    v242 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v243, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v239 + 1;
    v244 = v240 + 48LL * v239;
    *(_DWORD*)v244 = v241;
    *(_DWORD*)(v244 + 40) = v242;
    *(_BYTE*)(v244 + 44) = 0;
    *(_DWORD*)(v244 + 20) = 3;
    *(_OWORD*)(v244 + 4) = SdkData_bb3330;
    *(int32x2_t*)(v244 + 24) = vrev64_s32(v243);
    *(_QWORD*)(v244 + 32) = 4;
    LODWORD(v244) = *(_DWORD*)(a1 + 8);
    v245 = *(_DWORD*)(a1 + 16);
    v246 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v247, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v244 + 1;
    v248 = *(_QWORD*)a1 + 48LL * (int)v244;
    *(_DWORD*)v248 = v245;
    *(_DWORD*)(v248 + 40) = v246;
    *(_BYTE*)(v248 + 44) = 0;
    *(_DWORD*)(v248 + 20) = 24;
    *(_OWORD*)(v248 + 4) = SdkData_bb3630;
    *(int32x2_t*)(v248 + 24) = vrev64_s32(v247);
    *(_QWORD*)(v248 + 32) = 0x100000004LL;
    LODWORD(v248) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v249, n64_u64, *(unsigned __int64*)(a1 + 20));
    v250 = *(_DWORD*)(a1 + 28);
    v251 = *(_QWORD*)a1 + 48LL * (int)v248;
    *(_DWORD*)(a1 + 8) = v248 + 1;
    *(_QWORD*)(v251 + 32) = 4;
    *(_DWORD*)(v251 + 40) = v250;
    *(_BYTE*)(v251 + 44) = 0;
    *(_OWORD*)v251 = SdkData_bb4800;
    *(_QWORD*)(v251 + 16) = 0x1400000014LL;
    *(int32x2_t*)(v251 + 24) = vrev64_s32(v249);
    LODWORD(v248) = *(_DWORD*)(a1 + 8);
    PSEUDO_LOW_LANE64(v252, n64_u64, *(unsigned __int64*)(a1 + 20));
    v253 = *(_DWORD*)(a1 + 28);
    v254 = *(_QWORD*)a1 + 48LL * (int)v248;
    *(_DWORD*)(a1 + 8) = v248 + 1;
    *(_QWORD*)(v254 + 32) = 4;
    *(_OWORD*)v254 = SdkData_bb45a0;
    *(_QWORD*)(v254 + 16) = 0x1400000018LL;
    *(int32x2_t*)(v254 + 24) = vrev64_s32(v252);
  LABEL_163:
    *(_DWORD*)(v254 + 40) = v253;
    *(_BYTE*)(v254 + 44) = 0;
  LABEL_223:
    *(_DWORD*)(a1 + 16) = 1;
  LABEL_224:
    if (a3 != 2) {
      goto LABEL_225;
    }
    goto LABEL_74;
  case 47:
    v192 = *(_DWORD*)(a1 + 8);
    v193 = *(_QWORD*)a1;
    v194 = *(_DWORD*)(a1 + 16);
    v195 = 11;
    v196 = 10;
    goto LABEL_170;
  case 48:
    v192 = *(_DWORD*)(a1 + 8);
    v193 = *(_QWORD*)a1;
    v194 = *(_DWORD*)(a1 + 16);
    v195 = 10;
    v196 = 11;
  LABEL_170:
    v275 = v10;
    v276 = v14;
    v277 = a4;
    v278 = v13;
    v279 = v9;
    v455 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v456, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v192 + 1;
    v457 = v193 + 48LL * v192;
    *(_DWORD*)v457 = v194;
    *(_DWORD*)(v457 + 40) = v455;
    *(_BYTE*)(v457 + 44) = 0;
    *(_DWORD*)(v457 + 20) = 20;
    *(_OWORD*)(v457 + 4) = SdkData_bb25c0;
    *(int32x2_t*)(v457 + 24) = vrev64_s32(v456);
    *(_QWORD*)(v457 + 32) = 10;
    v458 = *(_DWORD*)(a1 + 8);
    v459 = *(_DWORD*)(a1 + 16);
    LODWORD(v457) = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v460, n64_u64, *(unsigned __int64*)(a1 + 20));
    v461 = *(_QWORD*)a1 + 48LL * v458;
    *(_DWORD*)(a1 + 8) = v458 + 1;
    *(_DWORD*)v461 = v459;
    *(_DWORD*)(v461 + 20) = 20;
    *(_DWORD*)(v461 + 40) = v457;
    *(_BYTE*)(v461 + 44) = 0;
    *(_OWORD*)(v461 + 4) = SdkData_bb3330;
    *(int32x2_t*)(v461 + 24) = vrev64_s32(v460);
    *(_QWORD*)(v461 + 32) = 11;
    nn_6790b0_alt1(a1, v195, v196);
    goto LABEL_171;
  case 49:
    v109 = *(_DWORD*)(a1 + 8);
    v110 = *(_QWORD*)a1;
    v111 = *(_DWORD*)(a1 + 16);
    v112 = 11;
    v113 = 10;
    goto LABEL_130;
  case 50:
    v109 = *(_DWORD*)(a1 + 8);
    v110 = *(_QWORD*)a1;
    v111 = *(_DWORD*)(a1 + 16);
    v112 = 10;
    v113 = 11;
  LABEL_130:
    v275 = v10;
    v276 = v14;
    v277 = a4;
    v278 = v13;
    v279 = v9;
    v280 = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v281, n64_u64, *(unsigned __int64*)(a1 + 20));
    *(_DWORD*)(a1 + 8) = v109 + 1;
    v282 = v110 + 48LL * v109;
    *(_DWORD*)v282 = v111;
    *(_DWORD*)(v282 + 40) = v280;
    *(_BYTE*)(v282 + 44) = 0;
    *(_DWORD*)(v282 + 20) = 20;
    *(_OWORD*)(v282 + 4) = SdkData_bb25c0;
    *(int32x2_t*)(v282 + 24) = vrev64_s32(v281);
    *(_QWORD*)(v282 + 32) = 10;
    v283 = *(_DWORD*)(a1 + 8);
    v284 = *(_DWORD*)(a1 + 16);
    LODWORD(v282) = *(_DWORD*)(a1 + 28);
    PSEUDO_LOW_LANE64(v285, n64_u64, *(unsigned __int64*)(a1 + 20));
    v286 = *(_QWORD*)a1 + 48LL * v283;
    *(_DWORD*)(a1 + 8) = v283 + 1;
    *(_DWORD*)v286 = v284;
    *(_DWORD*)(v286 + 20) = 20;
    *(_DWORD*)(v286 + 40) = v282;
    *(_BYTE*)(v286 + 44) = 0;
    *(_OWORD*)(v286 + 4) = SdkData_bb3330;
    *(int32x2_t*)(v286 + 24) = vrev64_s32(v285);
    *(_QWORD*)(v286 + 32) = 11;
    nn_6796c0_alt1((__int64*)a1, v112, v113);
    goto LABEL_171;
  default:
    v275 = v10;
    v276 = v14;
    v277 = a4;
    v278 = v13;
    v279 = v9;
    if ((unsigned int)(a2 - 47) <= 3) {
    LABEL_171:
      nn_673e60(*(_BYTE*)(a1 + 163), 1, (__int64*)a1);
    }
    v29 = 0;
    v462 = v279;
    v463 = v278;
    v9 = v279;
    v13 = v278;
    a4 = v277;
    v14 = v276;
    v10 = v275;
    switch (a2) {
    case 17:
      v464 = *(_DWORD*)(a1 + 8);
      v465 = *(_QWORD*)a1;
      v466 = *(_DWORD*)(a1 + 16);
      v467 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v468, n64_u64, *(unsigned __int64*)(a1 + 20));
      *(_DWORD*)(a1 + 8) = v464 + 1;
      v469 = v465 + 48LL * v464;
      *(_DWORD*)v469 = v466;
      v470 = SdkData_bb2340;
      goto LABEL_192;
    case 18:
      v546 = *(_DWORD*)(a1 + 8);
      v547 = *(_QWORD*)a1;
      v548 = *(_DWORD*)(a1 + 16);
      v549 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v550, n64_u64, *(unsigned __int64*)(a1 + 20));
      *(_DWORD*)(a1 + 8) = v546 + 1;
      v551 = v547 + 48LL * v546;
      *(_DWORD*)v551 = v548;
      *(_DWORD*)(v551 + 20) = 0;
      *(_DWORD*)(v551 + 40) = v549;
      *(_BYTE*)(v551 + 44) = 0;
      *(_OWORD*)(v551 + 4) = SdkData_bb2340;
      *(int32x2_t*)(v551 + 24) = vrev64_s32(v550);
      *(_QWORD*)(v551 + 32) = 4;
      v552 = *(_DWORD*)(a1 + 8);
      v553 = *(_DWORD*)(a1 + 16);
      v467 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v498, n64_u64, *(unsigned __int64*)(a1 + 20));
      v469 = *(_QWORD*)a1 + 48LL * v552;
      *(_DWORD*)(a1 + 8) = v552 + 1;
      *(_DWORD*)v469 = v553;
      v499 = SdkData_bb30b0;
      goto LABEL_198;
    case 19:
      v527 = *(_DWORD*)(a1 + 8);
      v528 = *(_QWORD*)a1;
      v529 = *(_DWORD*)(a1 + 16);
      v530 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v531, n64_u64, *(unsigned __int64*)(a1 + 20));
      *(_DWORD*)(a1 + 8) = v527 + 1;
      v532 = v528 + 48LL * v527;
      *(_DWORD*)v532 = v529;
      *(_DWORD*)(v532 + 20) = 0;
      *(_DWORD*)(v532 + 40) = v530;
      *(_BYTE*)(v532 + 44) = 0;
      *(_OWORD*)(v532 + 4) = SdkData_bb2340;
      *(int32x2_t*)(v532 + 24) = vrev64_s32(v531);
      *(_QWORD*)(v532 + 32) = 4;
      v533 = *(_DWORD*)(a1 + 8);
      v534 = *(_DWORD*)(a1 + 16);
      v535 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v536, n64_u64, *(unsigned __int64*)(a1 + 20));
      v537 = *(_QWORD*)a1 + 48LL * v533;
      *(_DWORD*)(a1 + 8) = v533 + 1;
      *(_DWORD*)v537 = v534;
      *(_DWORD*)(v537 + 40) = v535;
      *(_BYTE*)(v537 + 44) = 0;
      *(_DWORD*)(v537 + 20) = 19;
      *(_OWORD*)(v537 + 4) = SdkData_bb5170;
      *(int32x2_t*)(v537 + 24) = vrev64_s32(v536);
      *(_QWORD*)(v537 + 32) = 9;
      v538 = *(_DWORD*)(a1 + 8);
      v539 = *(_DWORD*)(a1 + 16);
      PSEUDO_LOW_LANE64(v540, n64_u64, *(unsigned __int64*)(a1 + 20));
      v541 = *(_DWORD*)(a1 + 28);
      v542 = *(_QWORD*)a1 + 48LL * v538;
      *(_DWORD*)(a1 + 8) = v538 + 1;
      *(_DWORD*)v542 = v539;
      *(_DWORD*)(v542 + 40) = v541;
      *(_BYTE*)(v542 + 44) = 0;
      *(_DWORD*)(v542 + 20) = 20;
      *(int32x2_t*)(v542 + 24) = vrev64_s32(v540);
      *(_QWORD*)(v542 + 32) = 9;
      *(_OWORD*)(v542 + 4) = SdkData_bb0d80;
      v543 = *(_DWORD*)(a1 + 8);
      v544 = *(_DWORD*)(a1 + 16);
      PSEUDO_LOW_LANE64(v545, n64_u64, *(unsigned __int64*)(a1 + 20));
      v524 = *(_DWORD*)(a1 + 28);
      v525 = *(_QWORD*)a1 + 48LL * v543;
      *(_DWORD*)(a1 + 8) = v543 + 1;
      *(_DWORD*)v525 = v544;
      *(_DWORD*)(v525 + 20) = 20;
      v526 = SdkData_bb3640;
      *(int32x2_t*)(v525 + 24) = vrev64_s32(v545);
      *(_QWORD*)(v525 + 32) = 4;
      goto LABEL_196;
    case 20:
      v500 = *(_DWORD*)(a1 + 8);
      v501 = *(_QWORD*)a1;
      v502 = *(_DWORD*)(a1 + 16);
      v503 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v504, n64_u64, *(unsigned __int64*)(a1 + 20));
      *(_DWORD*)(a1 + 8) = v500 + 1;
      v505 = v501 + 48LL * v500;
      *(_DWORD*)v505 = v502;
      *(_DWORD*)(v505 + 40) = v503;
      *(_BYTE*)(v505 + 44) = 0;
      *(_DWORD*)(v505 + 20) = 19;
      *(_OWORD*)(v505 + 4) = SdkData_bb5170;
      *(int32x2_t*)(v505 + 24) = vrev64_s32(v504);
      *(_QWORD*)(v505 + 32) = 4;
      v506 = *(_DWORD*)(a1 + 8);
      v507 = *(_DWORD*)(a1 + 16);
      PSEUDO_LOW_LANE64(v508, n64_u64, *(unsigned __int64*)(a1 + 20));
      LODWORD(v505) = *(_DWORD*)(a1 + 28);
      v509 = *(_QWORD*)a1 + 48LL * v506;
      *(_DWORD*)(a1 + 8) = v506 + 1;
      *(_DWORD*)v509 = v507;
      *(_DWORD*)(v509 + 40) = v505;
      *(_BYTE*)(v509 + 44) = 0;
      *(_DWORD*)(v509 + 20) = 20;
      *(int32x2_t*)(v509 + 24) = vrev64_s32(v508);
      *(_QWORD*)(v509 + 32) = 4;
      *(_OWORD*)(v509 + 4) = SdkData_bb30b0;
      v510 = *(_DWORD*)(a1 + 8);
      LODWORD(v505) = *(_DWORD*)(a1 + 16);
      PSEUDO_LOW_LANE64(v511, n64_u64, *(unsigned __int64*)(a1 + 20));
      LODWORD(v509) = *(_DWORD*)(a1 + 28);
      v512 = *(_QWORD*)a1 + 48LL * v510;
      *(_DWORD*)(a1 + 8) = v510 + 1;
      *(_DWORD*)v512 = v505;
      *(_DWORD*)(v512 + 20) = 0;
      *(_DWORD*)(v512 + 40) = v509;
      *(_BYTE*)(v512 + 44) = 0;
      *(int32x2_t*)(v512 + 24) = vrev64_s32(v511);
      *(_QWORD*)(v512 + 32) = 4;
      *(_OWORD*)(v512 + 4) = SdkData_bb3ac0;
      v513 = *(_DWORD*)(a1 + 8);
      LODWORD(v505) = *(_DWORD*)(a1 + 16);
      LODWORD(v509) = *(_DWORD*)(a1 + 28);
      v514 = *(_QWORD*)a1 + 48LL * v513;
      v515 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
      *(_DWORD*)(a1 + 8) = v513 + 1;
      *(_DWORD*)v514 = v505;
      *(_OWORD*)(v514 + 4) = SdkData_bb3ac0;
      *(_DWORD*)(v514 + 40) = v509;
      *(_BYTE*)(v514 + 44) = 0;
      *(_DWORD*)(v514 + 20) = 2;
      *(_QWORD*)(v514 + 24) = v515;
      *(_QWORD*)(v514 + 32) = 4;
      v516 = *(_DWORD*)(a1 + 8);
      LODWORD(v505) = *(_DWORD*)(a1 + 16);
      PSEUDO_LOW_LANE64(v517, n64_u64, *(unsigned __int64*)(a1 + 20));
      LODWORD(v509) = *(_DWORD*)(a1 + 28);
      v518 = *(_QWORD*)a1 + 48LL * v516;
      *(_DWORD*)(a1 + 8) = v516 + 1;
      *(_DWORD*)v518 = v505;
      *(_DWORD*)(v518 + 40) = v509;
      *(_BYTE*)(v518 + 44) = 0;
      *(_DWORD*)(v518 + 20) = 18;
      *(int32x2_t*)(v518 + 24) = vrev64_s32(v517);
      *(_QWORD*)(v518 + 32) = 4;
      *(_OWORD*)(v518 + 4) = SdkData_bb3630;
      v519 = *(_DWORD*)(a1 + 8);
      LODWORD(v505) = *(_DWORD*)(a1 + 16);
      LODWORD(v509) = *(_DWORD*)(a1 + 28);
      v520 = *(_QWORD*)a1 + 48LL * v519;
      v521 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
      *(_DWORD*)(a1 + 8) = v519 + 1;
      *(_DWORD*)v520 = v505;
      *(_OWORD*)(v520 + 4) = SdkData_bb3630;
      *(_DWORD*)(v520 + 20) = 19;
      *(_DWORD*)(v520 + 40) = v509;
      *(_BYTE*)(v520 + 44) = 0;
      *(_QWORD*)(v520 + 24) = v521;
      *(_QWORD*)(v520 + 32) = 4;
      LODWORD(v520) = *(_DWORD*)(a1 + 8);
      v522 = *(_DWORD*)(a1 + 16);
      PSEUDO_LOW_LANE64(v523, n64_u64, *(unsigned __int64*)(a1 + 20));
      v524 = *(_DWORD*)(a1 + 28);
      v525 = *(_QWORD*)a1 + 48LL * (int)v520;
      *(_DWORD*)(a1 + 8) = v520 + 1;
      *(_DWORD*)v525 = v522;
      *(_DWORD*)(v525 + 20) = 20;
      v526 = SdkData_bb0fe0;
      *(int32x2_t*)(v525 + 24) = vrev64_s32(v523);
      *(_QWORD*)(v525 + 32) = 4;
    LABEL_196:
      *(_OWORD*)(v525 + 4) = v526;
      *(_DWORD*)(v525 + 40) = v524;
      *(_BYTE*)(v525 + 44) = 0;
      goto LABEL_265;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 33:
    case 35:
    case 36:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
      goto LABEL_224;
    case 31:
      v487 = *(_DWORD*)(a1 + 8);
      v488 = *(_QWORD*)a1;
      v489 = *(_DWORD*)(a1 + 16);
      v467 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v468, n64_u64, *(unsigned __int64*)(a1 + 20));
      *(_DWORD*)(a1 + 8) = v487 + 1;
      v469 = v488 + 48LL * v487;
      *(_DWORD*)v469 = v489;
      v470 = SdkData_bb2150;
    LABEL_192:
      *(_OWORD*)(v469 + 4) = v470;
      *(_DWORD*)(v469 + 20) = 0;
      goto LABEL_205;
    case 32:
      v490 = *(_DWORD*)(a1 + 8);
      v491 = *(_QWORD*)a1;
      v492 = *(_DWORD*)(a1 + 16);
      v493 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v494, n64_u64, *(unsigned __int64*)(a1 + 20));
      *(_DWORD*)(a1 + 8) = v490 + 1;
      v495 = v491 + 48LL * v490;
      *(_DWORD*)v495 = v492;
      *(_DWORD*)(v495 + 20) = 0;
      *(_DWORD*)(v495 + 40) = v493;
      *(_BYTE*)(v495 + 44) = 0;
      *(_OWORD*)(v495 + 4) = SdkData_bb2150;
      *(int32x2_t*)(v495 + 24) = vrev64_s32(v494);
      *(_QWORD*)(v495 + 32) = 4;
      v496 = *(_DWORD*)(a1 + 8);
      v497 = *(_DWORD*)(a1 + 16);
      v467 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v498, n64_u64, *(unsigned __int64*)(a1 + 20));
      v469 = *(_QWORD*)a1 + 48LL * v496;
      *(_DWORD*)(a1 + 8) = v496 + 1;
      *(_DWORD*)v469 = v497;
      v499 = SdkData_bb0fe0;
    LABEL_198:
      *(_OWORD*)(v469 + 4) = v499;
      LANES64(v554).n64_u64[0] = LANES64_OF(vrev64_s32(v498)).n64_u64[0];
      *(_DWORD*)(v469 + 20) = 20;
      goto LABEL_206;
    case 34:
      v555 = *(_DWORD*)(a1 + 128);
      if ((v555 & 1) == 0) {
        *(_DWORD*)(a1 + 128) = v555 | 1;
        *(_DWORD*)(a1 + 40) = 0x40000000;
        *(_QWORD*)(a1 + 32) = 0x4000000040000000LL;
      }
      v556 = *(_DWORD*)(a1 + 8);
      v557 = *(_QWORD*)a1;
      v558 = *(_DWORD*)(a1 + 16);
      PSEUDO_LOW_LANE64(v559, n64_u64, *(unsigned __int64*)(a1 + 20));
      *(_DWORD*)(a1 + 28) = 0;
      *(_DWORD*)(a1 + 8) = v556 + 1;
      v560 = v557 + 48LL * v556;
      *(_DWORD*)v560 = v558;
      *(_DWORD*)(v560 + 32) = 4;
      *(_QWORD*)(v560 + 36) = 0;
      *(_BYTE*)(v560 + 44) = 0;
      *(int32x2_t*)(v560 + 24) = vrev64_s32(v559);
      *(_DWORD*)(v560 + 20) = 24;
      *(_OWORD*)(v560 + 4) = SdkData_bb2350;
      v561 = *(_DWORD*)(a1 + 8);
      LODWORD(v560) = *(_DWORD*)(a1 + 16);
      v562 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v563, n64_u64, *(unsigned __int64*)(a1 + 20));
      v564 = *(_QWORD*)a1 + 48LL * v561;
      *(_DWORD*)(a1 + 8) = v561 + 1;
      *(_DWORD*)v564 = v560;
      *(_DWORD*)(v564 + 20) = 24;
      *(_DWORD*)(v564 + 40) = v562;
      *(_BYTE*)(v564 + 44) = 0;
      *(_OWORD*)(v564 + 4) = SdkData_bb1f40;
      *(int32x2_t*)(v564 + 24) = vrev64_s32(v563);
      *(_QWORD*)(v564 + 32) = 9;
      LODWORD(v564) = *(_DWORD*)(a1 + 8);
      v565 = *(_DWORD*)(a1 + 16);
      LODWORD(v560) = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v566, n64_u64, *(unsigned __int64*)(a1 + 20));
      v567 = *(_QWORD*)a1 + 48LL * (int)v564;
      *(_DWORD*)(a1 + 8) = v564 + 1;
      *(_DWORD*)v567 = v565;
      *(_DWORD*)(v567 + 40) = v560;
      *(_BYTE*)(v567 + 44) = 0;
      *(_DWORD*)(v567 + 20) = 20;
      *(_OWORD*)(v567 + 4) = SdkData_bb3e50;
      *(int32x2_t*)(v567 + 24) = vrev64_s32(v566);
      *(_QWORD*)(v567 + 32) = 4;
      v568 = *(_DWORD*)(a1 + 8);
      LODWORD(v560) = *(_DWORD*)(a1 + 16);
      PSEUDO_LOW_LANE64(v569, n64_u64, *(unsigned __int64*)(a1 + 20));
      LODWORD(v567) = *(_DWORD*)(a1 + 28);
      v570 = *(_QWORD*)a1 + 48LL * v568;
      *(_DWORD*)(a1 + 8) = v568 + 1;
      *(_DWORD*)v570 = v560;
      *(_DWORD*)(v570 + 40) = v567;
      *(_BYTE*)(v570 + 44) = 0;
      *(_DWORD*)(v570 + 20) = 19;
      *(int32x2_t*)(v570 + 24) = vrev64_s32(v569);
      *(_QWORD*)(v570 + 32) = 4;
      *(_OWORD*)(v570 + 4) = SdkData_bb3ac0;
      v571 = *(_DWORD*)(a1 + 128);
      if ((v571 & 2) == 0) {
        *(_DWORD*)(a1 + 128) = v571 | 2;
        *(_DWORD*)(a1 + 52) = 1056964608;
        *(_QWORD*)(a1 + 44) = 0x3F0000003F000000LL;
      }
      v572 = *(_DWORD*)(a1 + 8);
      v573 = *(_QWORD*)a1;
      v574 = *(_DWORD*)(a1 + 16);
      PSEUDO_LOW_LANE64(v575, n64_u64, *(unsigned __int64*)(a1 + 20));
      *(_DWORD*)(a1 + 28) = 1;
      *(_DWORD*)(a1 + 8) = v572 + 1;
      v576 = v573 + 48LL * v572;
      *(_DWORD*)v576 = v574;
      *(_DWORD*)(v576 + 20) = 20;
      *(_DWORD*)(v576 + 40) = 1;
      *(_BYTE*)(v576 + 44) = 0;
      *(int32x2_t*)(v576 + 24) = vrev64_s32(v575);
      *(_QWORD*)(v576 + 32) = 4;
      *(_OWORD*)(v576 + 4) = SdkData_bb2ed0;
      goto LABEL_265;
    case 37:
      v577 = *(_DWORD*)(a1 + 8);
      v578 = *(_QWORD*)a1;
      v579 = *(_DWORD*)(a1 + 16);
      v580 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v581, n64_u64, *(unsigned __int64*)(a1 + 20));
      *(_DWORD*)(a1 + 8) = v577 + 1;
      v582 = v578 + 48LL * v577;
      *(_DWORD*)v582 = v579;
      *(_DWORD*)(v582 + 40) = v580;
      *(_BYTE*)(v582 + 44) = 0;
      *(_DWORD*)(v582 + 20) = 2;
      *(_OWORD*)(v582 + 4) = SdkData_bb1870;
      *(int32x2_t*)(v582 + 24) = vrev64_s32(v581);
      *(_QWORD*)(v582 + 32) = 9;
      v583 = *(_DWORD*)(a1 + 8);
      v584 = *(_DWORD*)(a1 + 16);
      v467 = *(_DWORD*)(a1 + 28);
      PSEUDO_LOW_LANE64(v468, n64_u64, *(unsigned __int64*)(a1 + 20));
      v469 = *(_QWORD*)a1 + 48LL * v583;
      *(_DWORD*)(a1 + 8) = v583 + 1;
      *(_DWORD*)v469 = v584;
      *(_DWORD*)(v469 + 20) = 21;
      *(_OWORD*)(v469 + 4) = SdkData_bb1280;
    LABEL_205:
      LANES64(v554).n64_u64[0] = LANES64_OF(vrev64_s32(v468)).n64_u64[0];
    LABEL_206:
      *(int32x2_t*)(v469 + 24) = v554;
      *(_QWORD*)(v469 + 32) = 4;
      *(_DWORD*)(v469 + 40) = v467;
      *(_BYTE*)(v469 + 44) = 0;
      goto LABEL_265;
    case 44:
      v592 = *(_DWORD*)(a1 + 8);
      PSEUDO_LOW_LANE64(v593, n64_u64, *(unsigned __int64*)(a1 + 20));
      v594 = *(_QWORD*)a1 + 48LL * v592;
      v595 = *(_DWORD*)(a1 + 16);
      v596 = *(_DWORD*)(a1 + 28);
      *(_DWORD*)(a1 + 8) = v592 + 1;
      *(_OWORD*)(v594 + 4) = SdkData_bb2340;
      *(_DWORD*)v594 = v595;
      *(_DWORD*)(v594 + 20) = 20;
      *(_DWORD*)(v594 + 40) = v596;
      *(_BYTE*)(v594 + 44) = 0;
      *(int32x2_t*)(v594 + 24) = vrev64_s32(v593);
      *(_QWORD*)(v594 + 32) = 4;
      v597 = *(_DWORD*)(a1 + 8);
      LODWORD(v594) = *(_DWORD*)(a1 + 16);
      v598 = *(_DWORD*)(a1 + 24);
      v484 = *(_DWORD*)(a1 + 28);
      v485 = *(_QWORD*)a1 + 48LL * v597;
      *(_DWORD*)(a1 + 8) = v597 + 1;
      *(_DWORD*)v485 = v594;
      *(_DWORD*)(v485 + 20) = 20;
      *(_DWORD*)(v485 + 24) = v598;
      *(_OWORD*)(v485 + 4) = SdkData_bb2ec0;
      v486 = 0x400000001LL;
      goto LABEL_209;
    case 45:
      v585 = *(_DWORD*)(a1 + 8);
      PSEUDO_LOW_LANE64(v586, n64_u64, *(unsigned __int64*)(a1 + 20));
      v587 = *(_QWORD*)a1 + 48LL * v585;
      v588 = *(_DWORD*)(a1 + 16);
      v589 = *(_DWORD*)(a1 + 28);
      *(_DWORD*)(a1 + 8) = v585 + 1;
      *(_OWORD*)(v587 + 4) = SdkData_bb2340;
      *(_DWORD*)v587 = v588;
      *(_DWORD*)(v587 + 20) = 20;
      *(_DWORD*)(v587 + 40) = v589;
      *(_BYTE*)(v587 + 44) = 0;
      *(int32x2_t*)(v587 + 24) = vrev64_s32(v586);
      *(_QWORD*)(v587 + 32) = 4;
      v590 = *(_DWORD*)(a1 + 8);
      LODWORD(v587) = *(_DWORD*)(a1 + 16);
      v591 = *(_DWORD*)(a1 + 24);
      v484 = *(_DWORD*)(a1 + 28);
      v485 = *(_QWORD*)a1 + 48LL * v590;
      *(_DWORD*)(a1 + 8) = v590 + 1;
      *(_DWORD*)v485 = v587;
      *(_DWORD*)(v485 + 20) = 20;
      *(_DWORD*)(v485 + 24) = v591;
      *(_OWORD*)(v485 + 4) = SdkData_bb2ec0;
      v486 = 0x400000002LL;
      goto LABEL_209;
    case 46:
      v477 = *(_DWORD*)(a1 + 8);
      PSEUDO_LOW_LANE64(v478, n64_u64, *(unsigned __int64*)(a1 + 20));
      v479 = *(_QWORD*)a1 + 48LL * v477;
      v480 = *(_DWORD*)(a1 + 16);
      v481 = *(_DWORD*)(a1 + 28);
      *(_DWORD*)(a1 + 8) = v477 + 1;
      *(_OWORD*)(v479 + 4) = SdkData_bb2340;
      *(_DWORD*)v479 = v480;
      *(_DWORD*)(v479 + 20) = 20;
      *(_DWORD*)(v479 + 40) = v481;
      *(_BYTE*)(v479 + 44) = 0;
      *(int32x2_t*)(v479 + 24) = vrev64_s32(v478);
      *(_QWORD*)(v479 + 32) = 4;
      v482 = *(_DWORD*)(a1 + 8);
      LODWORD(v479) = *(_DWORD*)(a1 + 16);
      v483 = *(_DWORD*)(a1 + 24);
      v484 = *(_DWORD*)(a1 + 28);
      v485 = *(_QWORD*)a1 + 48LL * v482;
      *(_DWORD*)(a1 + 8) = v482 + 1;
      *(_DWORD*)v485 = v479;
      *(_DWORD*)(v485 + 20) = 20;
      *(_DWORD*)(v485 + 24) = v483;
      *(_OWORD*)(v485 + 4) = SdkData_bb2ec0;
      v486 = 0x400000003LL;
    LABEL_209:
      *(_QWORD*)(v485 + 28) = v486;
      *(_DWORD*)(v485 + 36) = 0;
      *(_DWORD*)(v485 + 40) = v484;
      *(_BYTE*)(v485 + 44) = 0;
      *(_DWORD*)(a1 + 20) = 0;
      break;
    default:
      v9 = v462;
      v13 = v463;
      a4 = v277;
      v14 = v276;
      v10 = v275;
      if (a3 == 2) {
        goto LABEL_74;
      }
      goto LABEL_225;
    }
    goto LABEL_265;
  }
}

int32x2_t nn_677de0(__int64* a1, unsigned __int32 a2, unsigned __int32 a3,
                    unsigned __int32 a4, unsigned __int32 a5,
                    unsigned __int32 a6)
{
  int v6;
  __int64 v7;
  unsigned __int32 v8;
  unsigned __int32 v9;
  int32x2_t result;
  int32x2_t* v11;

  v6 = *((_DWORD*)a1 + 2);
  v7 = *a1;
  v8 = *((_DWORD*)a1 + 4);
  v9 = *((_DWORD*)a1 + 7);
  LANES64(result).n64_u64[0] =
      LANES64_OF(vrev64_s32(*(int32x2_t*)((char*)a1 + 20))).n64_u64[0];
  *((_DWORD*)a1 + 2) = v6 + 1;
  v11 = (int32x2_t*)(v7 + 48LL * v6);
  LANES64(*(v11)).n64_u32[0] = v8;
  LANES64(*(v11)).n64_u32[1] = 2;
  LANES64(v11[1]).n64_u32[0] = a3;
  LANES64(v11[1]).n64_u32[1] = a5;
  LANES64(v11[2]).n64_u32[0] = a4;
  LANES64(v11[2]).n64_u32[1] = a6;
  LANES64(v11[4]).n64_u32[0] = a2;
  LANES64(v11[4]).n64_u32[1] = 0;
  LANES64(v11[5]).n64_u32[0] = v9;
  LANES64(v11[5]).n64_u8[4] = 0;
  LANES64(v11[3]).n64_u64[0] = LANES64(result).n64_u64[0];
  return result;
}

int32x2_t nn_677e30(__int64* a1, int a2, int a3, int a4)
{
  int v4;
  __int64 v5;
  int v6;
  int32x2_t v7;
  int v8;
  int32x2_t result;
  __int64 v10;

  v4 = *((_DWORD*)a1 + 2);
  v5 = *a1;
  v6 = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v7, n64_u64, *(__int64*)((char*)a1 + 20));
  v8 = *((_DWORD*)a1 + 7);
  *((_DWORD*)a1 + 2) = v4 + 1;
  LANES64(result).n64_u64[0] = LANES64_OF(vrev64_s32(v7)).n64_u64[0];
  v10 = v5 + 48LL * v4;
  *(_DWORD*)v10 = v6;
  *(_DWORD*)(v10 + 20) = a4;
  *(_DWORD*)(v10 + 32) = a2;
  *(_DWORD*)(v10 + 36) = 0;
  *(_DWORD*)(v10 + 40) = v8;
  *(_BYTE*)(v10 + 44) = 0;
  *(int32x2_t*)(v10 + 24) = result;
  *(_DWORD*)(v10 + 12) = 18;
  *(_DWORD*)(v10 + 16) = a3;
  *(_QWORD*)(v10 + 4) = 0x1200000000LL;
  return result;
}

int32x2_t nn_677e90(__int64* a1, unsigned __int32 a2, unsigned __int32 a3,
                    unsigned __int32 a4, unsigned __int32 a5)
{
  int v5;
  int32x2_t v6;
  __int64 v7;
  unsigned __int32 v8;
  unsigned __int32 v9;
  int32x2_t result;
  int32x2_t* v11;

  v5 = *((_DWORD*)a1 + 2);
  PSEUDO_LOW_LANE64(v6, n64_u64, *(__int64*)((char*)a1 + 20));
  v7 = *a1;
  v8 = *((_DWORD*)a1 + 4);
  v9 = *((_DWORD*)a1 + 7);
  *((_DWORD*)a1 + 2) = v5 + 1;
  LANES64(result).n64_u64[0] = LANES64_OF(vrev64_s32(v6)).n64_u64[0];
  v11 = (int32x2_t*)(v7 + 48LL * v5);
  LANES64(*(v11)).n64_u32[0] = v8;
  LANES64(*(v11)).n64_u32[1] = 2;
  LANES64(v11[1]).n64_u32[0] = a3;
  LANES64(v11[1]).n64_u32[1] = a5;
  LANES64(v11[4]).n64_u32[0] = a2;
  LANES64(v11[4]).n64_u32[1] = 0;
  LANES64(v11[5]).n64_u32[0] = v9;
  LANES64(v11[5]).n64_u8[4] = 0;
  LANES64(v11[2]).n64_u32[0] = a4;
  LANES64(v11[2]).n64_u32[1] = 24;
  LANES64(v11[3]).n64_u64[0] = LANES64(result).n64_u64[0];
  return result;
}

int32x2_t nn_677ee0(__int64* a1, int a2, int a3)
{
  int v3;
  __int64 v4;
  int v5;
  int32x2_t v6;
  int v7;
  int32x2_t result;
  __int64 v9;

  v3 = *((_DWORD*)a1 + 2);
  v4 = *a1;
  v5 = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v6, n64_u64, *(__int64*)((char*)a1 + 20));
  v7 = *((_DWORD*)a1 + 7);
  *((_DWORD*)a1 + 2) = v3 + 1;
  LANES64(result).n64_u64[0] = LANES64_OF(vrev64_s32(v6)).n64_u64[0];
  v9 = v4 + 48LL * v3;
  *(_DWORD*)v9 = v5;
  *(_DWORD*)(v9 + 32) = a2;
  *(_DWORD*)(v9 + 36) = 0;
  *(_DWORD*)(v9 + 40) = v7;
  *(_BYTE*)(v9 + 44) = 0;
  *(int32x2_t*)(v9 + 24) = result;
  *(_DWORD*)(v9 + 12) = 18;
  *(_DWORD*)(v9 + 16) = a3;
  *(_DWORD*)(v9 + 20) = 20;
  *(_QWORD*)(v9 + 4) = 0x1200000000LL;
  return result;
}

int32x2_t nn_677f40(__int64* a1, unsigned __int32 a2, unsigned __int32 a3,
                    unsigned __int32 a4, unsigned __int32 a5)
{
  int v5;
  int32x2_t v6;
  __int64 v7;
  unsigned __int32 v8;
  unsigned __int32 v9;
  int32x2_t result;
  int32x2_t* v11;

  v5 = *((_DWORD*)a1 + 2);
  PSEUDO_LOW_LANE64(v6, n64_u64, *(__int64*)((char*)a1 + 20));
  v7 = *a1;
  v8 = *((_DWORD*)a1 + 4);
  v9 = *((_DWORD*)a1 + 7);
  *((_DWORD*)a1 + 2) = v5 + 1;
  LANES64(result).n64_u64[0] = LANES64_OF(vrev64_s32(v6)).n64_u64[0];
  v11 = (int32x2_t*)(v7 + 48LL * v5);
  LANES64(*(v11)).n64_u32[0] = v8;
  LANES64(*(v11)).n64_u32[1] = 4;
  LANES64(v11[4]).n64_u32[0] = a2;
  LANES64(v11[4]).n64_u32[1] = a5;
  LANES64(v11[5]).n64_u32[0] = v9;
  LANES64(v11[5]).n64_u8[4] = 0;
  LANES64(v11[1]).n64_u32[0] = a3;
  LANES64(v11[1]).n64_u32[1] = 16;
  LANES64(v11[3]).n64_u64[0] = LANES64(result).n64_u64[0];
  LANES64(v11[2]).n64_u32[0] = a4;
  LANES64(v11[2]).n64_u32[1] = 20;
  return result;
}

int32x2_t nn_677fa0(__int64* a1, unsigned __int32 a2, unsigned __int32 a3,
                    unsigned __int32 a4, unsigned __int32 a5,
                    unsigned __int32 a6)
{
  int v6;
  __int64 v7;
  unsigned __int32 v8;
  unsigned __int32 v9;
  int32x2_t result;
  int32x2_t* v11;

  v6 = *((_DWORD*)a1 + 2);
  v7 = *a1;
  v8 = *((_DWORD*)a1 + 4);
  v9 = *((_DWORD*)a1 + 7);
  LANES64(result).n64_u64[0] =
      LANES64_OF(vrev64_s32(*(int32x2_t*)((char*)a1 + 20))).n64_u64[0];
  *((_DWORD*)a1 + 2) = v6 + 1;
  v11 = (int32x2_t*)(v7 + 48LL * v6);
  LANES64(*(v11)).n64_u32[0] = v8;
  LANES64(*(v11)).n64_u32[1] = 3;
  LANES64(v11[1]).n64_u32[0] = a3;
  LANES64(v11[1]).n64_u32[1] = a5;
  LANES64(v11[2]).n64_u32[0] = a4;
  LANES64(v11[2]).n64_u32[1] = a6;
  LANES64(v11[4]).n64_u32[0] = a2;
  LANES64(v11[4]).n64_u32[1] = 0;
  LANES64(v11[5]).n64_u32[0] = v9;
  LANES64(v11[5]).n64_u8[4] = 0;
  LANES64(v11[3]).n64_u64[0] = LANES64(result).n64_u64[0];
  return result;
}

int32x2_t nn_677ff0(__int64* a1, int a2, int a3, int a4)
{
  int v4;
  __int64 v5;
  int v6;
  int32x2_t v7;
  int v8;
  int32x2_t result;
  __int64 v10;

  v4 = *((_DWORD*)a1 + 2);
  v5 = *a1;
  v6 = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v7, n64_u64, *(__int64*)((char*)a1 + 20));
  v8 = *((_DWORD*)a1 + 7);
  *((_DWORD*)a1 + 2) = v4 + 1;
  LANES64(result).n64_u64[0] = LANES64_OF(vrev64_s32(v7)).n64_u64[0];
  v10 = v5 + 48LL * v4;
  *(_DWORD*)v10 = v6;
  *(_DWORD*)(v10 + 20) = a4;
  *(_DWORD*)(v10 + 32) = a2;
  *(_DWORD*)(v10 + 36) = 0;
  *(_DWORD*)(v10 + 40) = v8;
  *(_BYTE*)(v10 + 44) = 0;
  *(int32x2_t*)(v10 + 24) = result;
  *(_DWORD*)(v10 + 12) = 18;
  *(_DWORD*)(v10 + 16) = a3;
  *(_QWORD*)(v10 + 4) = 0x1200000001LL;
  return result;
}

int32x2_t nn_678050(__int64* a1, int a2, int a3, int a4)
{
  int v4;
  __int64 v5;
  int v6;
  int32x2_t v7;
  int v8;
  int32x2_t result;
  __int64 v10;

  v4 = *((_DWORD*)a1 + 2);
  v5 = *a1;
  v6 = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v7, n64_u64, *(__int64*)((char*)a1 + 20));
  v8 = *((_DWORD*)a1 + 7);
  *((_DWORD*)a1 + 2) = v4 + 1;
  LANES64(result).n64_u64[0] = LANES64_OF(vrev64_s32(v7)).n64_u64[0];
  v10 = v5 + 48LL * v4;
  *(_DWORD*)v10 = v6;
  *(_DWORD*)(v10 + 20) = a4;
  *(_DWORD*)(v10 + 40) = v8;
  *(_BYTE*)(v10 + 44) = 0;
  *(int32x2_t*)(v10 + 24) = result;
  *(_DWORD*)(v10 + 12) = 18;
  *(_DWORD*)(v10 + 16) = a3;
  *(_DWORD*)(v10 + 32) = a2;
  *(_DWORD*)(v10 + 36) = 1;
  *(_QWORD*)(v10 + 4) = 0x1200000001LL;
  return result;
}

int32x2_t nn_6780b0(__int64* a1, unsigned __int32 a2, unsigned __int32 a3,
                    unsigned __int32 a4)
{
  int v4;
  int32x2_t v5;
  __int64 v6;
  unsigned __int32 v7;
  unsigned __int32 v8;
  int32x2_t result;
  int32x2_t* v10;

  v4 = *((_DWORD*)a1 + 2);
  PSEUDO_LOW_LANE64(v5, n64_u64, *(__int64*)((char*)a1 + 20));
  v6 = *a1;
  v7 = *((_DWORD*)a1 + 4);
  v8 = *((_DWORD*)a1 + 7);
  *((_DWORD*)a1 + 2) = v4 + 1;
  LANES64(result).n64_u64[0] = LANES64_OF(vrev64_s32(v5)).n64_u64[0];
  v10 = (int32x2_t*)(v6 + 48LL * v4);
  LANES64(*(v10)).n64_u32[0] = v7;
  LANES64(*(v10)).n64_u32[1] = 5;
  LANES64(v10[4]).n64_u32[0] = a2;
  LANES64(v10[4]).n64_u32[1] = 0;
  LANES64(v10[5]).n64_u32[0] = v8;
  LANES64(v10[5]).n64_u8[4] = 0;
  LANES64(v10[1]).n64_u32[0] = a3;
  LANES64(v10[1]).n64_u32[1] = 16;
  LANES64(v10[3]).n64_u64[0] = LANES64(result).n64_u64[0];
  LANES64(v10[2]).n64_u32[0] = a4;
  LANES64(v10[2]).n64_u32[1] = 20;
  return result;
}

int* nn_678ac0(int a1, int a2, char a3, char a4, int** a5)
{
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  int* result;
  __int64 v14;
  int v15;
  struct {
    _QWORD v16[2];
    __int128 v17;
    char gap48_[96];
    int v18;
    int v19;
    char gap152_[20];
    int v20;
    __int16 v21;
    char v22;
    char v23;
  } v16_;

  v16_.v23 = a3;
  v16_.v18 = 0;
  v16_.v17 = SdkData_bb30a0;
  v9 = (_QWORD*)SdkRoutine_6ade10();
  if (v9 != nullptr) {
    v15 = a1;
    v10 = 0x1FFFFFFFFFFFFD00LL;
    *v9 = 128;
    do {
      v11 = &v9[v10];
      v10 += 48;
      *(_OWORD*)(v11 + 769) = SdkData_bb2a90;
      *(_OWORD*)(v11 + 771) = SdkData_bb4820;
      *((_DWORD*)v11 + 1546) = 12;
      *(_OWORD*)(v11 + 775) = SdkData_bb2a90;
      *(_OWORD*)(v11 + 777) = SdkData_bb4820;
      *((_DWORD*)v11 + 1558) = 12;
      *(_OWORD*)(v11 + 781) = SdkData_bb2a90;
      *(_OWORD*)(v11 + 783) = SdkData_bb4820;
      *((_DWORD*)v11 + 1570) = 12;
      *(_OWORD*)(v11 + 787) = SdkData_bb2a90;
      *(_OWORD*)(v11 + 789) = SdkData_bb4820;
      *((_DWORD*)v11 + 1582) = 12;
      *(_OWORD*)(v11 + 793) = SdkData_bb2a90;
      *(_OWORD*)(v11 + 795) = SdkData_bb4820;
      *((_DWORD*)v11 + 1594) = 12;
      *(_OWORD*)(v11 + 799) = SdkData_bb2a90;
      *(_OWORD*)(v11 + 801) = SdkData_bb4820;
      *((_DWORD*)v11 + 1606) = 12;
      *(_OWORD*)(v11 + 805) = SdkData_bb2a90;
      *(_OWORD*)(v11 + 807) = SdkData_bb4820;
      *((_DWORD*)v11 + 1618) = 12;
      *(_QWORD*)((char*)v11 + 6188) = 0;
      *((_BYTE*)v11 + 6196) = 0;
      *(_OWORD*)(v11 + 811) = SdkData_bb2a90;
      *(_OWORD*)(v11 + 813) = SdkData_bb4820;
      *((_DWORD*)v11 + 1630) = 12;
      *(_QWORD*)((char*)v11 + 6236) = 0;
      *((_BYTE*)v11 + 6244) = 0;
      *(_QWORD*)((char*)v11 + 6284) = 0;
      *((_BYTE*)v11 + 6292) = 0;
      *((_BYTE*)v11 + 6340) = 0;
      *(_QWORD*)((char*)v11 + 6332) = 0;
      *(_QWORD*)((char*)v11 + 6380) = 0;
      *((_BYTE*)v11 + 6388) = 0;
      *(_QWORD*)((char*)v11 + 6428) = 0;
      *((_BYTE*)v11 + 6436) = 0;
      *((_BYTE*)v11 + 6484) = 0;
      *(_QWORD*)((char*)v11 + 6476) = 0;
      *((_BYTE*)v11 + 6532) = 0;
      *(_QWORD*)((char*)v11 + 6524) = 0;
    } while (v10 != 0);
    a1 = v15;
    v12 = v9 + 1;
  }
  else {
    v12 = nullptr;
  }
  v16_.v16[0] = v12;
  v16_.v16[1] = 0;
  v16_.v21 = 0;
  v16_.v22 = 0;
  v16_.v19 = 0;
  v16_.v20 = a2;
  nn_674030((__int64)v16_.v16, a1, a2, a4 & 1);
  result = SdkRoutine_678d00((__int64)v16_.v16, *a5);
  v14 = v16_.v16[0];
  *a5 = result;
  if (v14 != 0) {
    return (int*)nn_6ade20(v14 - 8);
  }
  return result;
}

int32x2_t nn_6790b0(__int64 a1, int a2, int a3)
{
  __int64 v6;
  int v7;
  int32x2_t v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int32x2_t v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  unsigned __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int32x2_t v27;
  __int64 v28;
  int32x2_t v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  int32x2_t v34;
  int v35;
  int v36;
  __int64 v37;
  unsigned __int64 v38;
  int v39;
  __int64 v40;
  unsigned __int64 v41;
  int v42;
  int v43;
  int32x2_t v44;
  __int64 v45;
  int v46;
  int v47;
  int32x2_t v48;
  __int64 v49;
  int v50;
  int v51;
  int32x2_t v52;
  __int64 v53;

  nn_6794b0((__int64*)a1, 4, a2, 1);
  v6 = *(_QWORD*)a1;
  v7 = *(_DWORD*)(a1 + 8);
  PSEUDO_LOW_LANE64(v8, n64_u64, *(unsigned __int64*)(a1 + 20));
  *(_DWORD*)(a1 + 16) = 6;
  v9 = *(_DWORD*)(a1 + 28);
  v10 = v6 + 48LL * v7;
  *(_DWORD*)(a1 + 8) = v7 + 1;
  *(_DWORD*)(v10 + 40) = v9;
  *(_BYTE*)(v10 + 44) = 0;
  *(_QWORD*)(v10 + 16) = 0x1400000014LL;
  *(int32x2_t*)(v10 + 24) = vrev64_s32(v8);
  *(_OWORD*)v10 = SdkData_bb3e60;
  *(_QWORD*)(v10 + 32) = 4;
  *(_DWORD*)(a1 + 24) = 1;
  v11 = *(_DWORD*)(a1 + 8);
  v12 = *(_DWORD*)(a1 + 16);
  v13 = *(_DWORD*)(a1 + 20);
  LODWORD(v10) = *(_DWORD*)(a1 + 28);
  v14 = *(_QWORD*)a1 + 48LL * v11;
  *(_DWORD*)(a1 + 8) = v11 + 1;
  *(_DWORD*)v14 = v12;
  *(_DWORD*)(v14 + 28) = v13;
  *(_DWORD*)(v14 + 40) = v10;
  *(_BYTE*)(v14 + 44) = 0;
  *(_DWORD*)(v14 + 12) = 18;
  *(_DWORD*)(v14 + 16) = a2;
  *(_QWORD*)(v14 + 4) = 0x1200000000LL;
  *(_QWORD*)(v14 + 20) = 0x100000014LL;
  *(_QWORD*)(v14 + 32) = 9;
  v15 = *(_DWORD*)(a1 + 8);
  LODWORD(v10) = *(_DWORD*)(a1 + 16);
  PSEUDO_LOW_LANE64(v16, n64_u64, *(unsigned __int64*)(a1 + 20));
  v17 = *(_DWORD*)(a1 + 28);
  v18 = *(_QWORD*)a1 + 48LL * v15;
  *(_DWORD*)(a1 + 8) = v15 + 1;
  *(_DWORD*)v18 = v10;
  *(_DWORD*)(v18 + 12) = 16;
  *(_DWORD*)(v18 + 16) = a2;
  *(_DWORD*)(v18 + 20) = 20;
  *(_DWORD*)(v18 + 40) = v17;
  *(_BYTE*)(v18 + 44) = 0;
  *(int32x2_t*)(v18 + 24) = vrev64_s32(v16);
  *(_QWORD*)(v18 + 32) = 9;
  *(_QWORD*)(v18 + 4) = 0x900000004LL;
  v19 = *(_DWORD*)(a1 + 8);
  LODWORD(v10) = *(_DWORD*)(a1 + 16);
  v20 = *(_DWORD*)(a1 + 28);
  v21 = *(_QWORD*)a1 + 48LL * v19;
  v22 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
  *(_DWORD*)(a1 + 8) = v19 + 1;
  *(_DWORD*)v21 = v10;
  *(_QWORD*)(v21 + 4) = 0x900000004LL;
  *(_DWORD*)(v21 + 12) = 16;
  *(_DWORD*)(v21 + 16) = a2;
  *(_DWORD*)(v21 + 20) = 20;
  *(_DWORD*)(v21 + 40) = v20;
  *(_BYTE*)(v21 + 44) = 0;
  *(_QWORD*)(v21 + 24) = v22;
  *(_QWORD*)(v21 + 32) = 9;
  *(_DWORD*)(a1 + 24) = 0;
  v23 = *(_DWORD*)(a1 + 8);
  v24 = *(_DWORD*)(a1 + 16);
  LODWORD(v21) = *(_DWORD*)(a1 + 20);
  LODWORD(v10) = *(_DWORD*)(a1 + 28);
  v25 = *(_QWORD*)a1 + 48LL * v23;
  *(_DWORD*)(a1 + 8) = v23 + 1;
  *(_DWORD*)v25 = v24;
  *(_DWORD*)(v25 + 12) = 18;
  *(_DWORD*)(v25 + 16) = a2;
  *(_QWORD*)(v25 + 20) = 9;
  *(_DWORD*)(v25 + 28) = v21;
  *(_QWORD*)(v25 + 32) = 9;
  *(_DWORD*)(v25 + 40) = v10;
  *(_BYTE*)(v25 + 44) = 0;
  *(_QWORD*)(v25 + 4) = 0x1200000001LL;
  LODWORD(v21) = *(_DWORD*)(a1 + 8);
  v26 = *(_DWORD*)(a1 + 16);
  PSEUDO_LOW_LANE64(v27, n64_u64, *(unsigned __int64*)(a1 + 20));
  LODWORD(v10) = *(_DWORD*)(a1 + 28);
  v28 = *(_QWORD*)a1 + 48LL * (int)v21;
  *(_DWORD*)(a1 + 8) = v21 + 1;
  LANES64(v29).n64_u64[0] = LANES64_OF(vrev64_s32(v27)).n64_u64[0];
  *(_DWORD*)v28 = v26;
  *(_DWORD*)(v28 + 20) = 20;
  *(_DWORD*)(v28 + 40) = v10;
  *(_BYTE*)(v28 + 44) = 0;
  if (a3 == 10) {
    v30 = 11;
  }
  else {
    v30 = 10;
  }
  *(int32x2_t*)(v28 + 24) = v29;
  *(_QWORD*)(v28 + 32) = 4;
  *(_OWORD*)(v28 + 4) = SdkData_bb3e50;
  nn_6794b0((__int64*)a1, v30, a3, 0);
  v31 = *(_DWORD*)(a1 + 8);
  v32 = *(_DWORD*)(a1 + 16);
  v33 = *(_QWORD*)a1 + 48LL * v31;
  PSEUDO_LOW_LANE64(v34, n64_u64, *(unsigned __int64*)(a1 + 20));
  v35 = *(_DWORD*)(a1 + 28);
  *(_DWORD*)(a1 + 8) = v31 + 1;
  *(_DWORD*)v33 = v32;
  *(_DWORD*)(v33 + 12) = 16;
  *(_DWORD*)(v33 + 16) = v30;
  *(_DWORD*)(v33 + 20) = 20;
  *(_DWORD*)(v33 + 40) = v35;
  *(_BYTE*)(v33 + 44) = 0;
  *(int32x2_t*)(v33 + 24) = vrev64_s32(v34);
  *(_QWORD*)(v33 + 32) = 4;
  *(_QWORD*)(v33 + 4) = 0x400000002LL;
  LODWORD(v33) = *(_DWORD*)(a1 + 8);
  v36 = *(_DWORD*)(a1 + 28);
  v37 = *(_QWORD*)a1 + 48LL * (int)v33;
  v38 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
  *(_DWORD*)(a1 + 8) = v33 + 1;
  *(_QWORD*)(v37 + 32) = 4;
  *(_DWORD*)(v37 + 40) = v36;
  *(_BYTE*)(v37 + 44) = 0;
  *(_QWORD*)(v37 + 16) = 0x1400000014LL;
  *(_QWORD*)(v37 + 24) = v38;
  *(_OWORD*)v37 = SdkData_bb45b0;
  *(_DWORD*)(a1 + 16) = 1;
  LODWORD(v33) = *(_DWORD*)(a1 + 8);
  v39 = *(_DWORD*)(a1 + 28);
  v40 = *(_QWORD*)a1 + 48LL * (int)v33;
  v41 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a1 + 20))).n64_u64[0];
  *(_DWORD*)(a1 + 8) = v33 + 1;
  *(_DWORD*)(v40 + 40) = v39;
  *(_BYTE*)(v40 + 44) = 0;
  *(_QWORD*)(v40 + 16) = 0x1400000014LL;
  *(_QWORD*)(v40 + 24) = v41;
  *(_OWORD*)v40 = SdkData_bb3850;
  *(_QWORD*)(v40 + 32) = 3;
  v42 = *(_DWORD*)(a1 + 8);
  v43 = *(_DWORD*)(a1 + 16);
  PSEUDO_LOW_LANE64(v44, n64_u64, *(unsigned __int64*)(a1 + 20));
  LODWORD(v40) = *(_DWORD*)(a1 + 28);
  v45 = *(_QWORD*)a1 + 48LL * v42;
  *(_DWORD*)(a1 + 8) = v42 + 1;
  *(_DWORD*)v45 = v43;
  *(_DWORD*)(v45 + 20) = 20;
  *(_DWORD*)(v45 + 40) = v40;
  *(_BYTE*)(v45 + 44) = 0;
  *(int32x2_t*)(v45 + 24) = vrev64_s32(v44);
  *(_QWORD*)(v45 + 32) = 3;
  *(_OWORD*)(v45 + 4) = SdkData_bb1af0;
  v46 = *(_DWORD*)(a1 + 8);
  v47 = *(_DWORD*)(a1 + 16);
  LODWORD(v40) = *(_DWORD*)(a1 + 28);
  PSEUDO_LOW_LANE64(v48, n64_u64, *(unsigned __int64*)(a1 + 20));
  v49 = *(_QWORD*)a1 + 48LL * v46;
  *(_DWORD*)(a1 + 8) = v46 + 1;
  *(_DWORD*)v49 = v47;
  *(_DWORD*)(v49 + 20) = 20;
  *(_DWORD*)(v49 + 40) = v40;
  *(_BYTE*)(v49 + 44) = 0;
  *(_OWORD*)(v49 + 4) = SdkData_bb25c0;
  *(int32x2_t*)(v49 + 24) = vrev64_s32(v48);
  *(_QWORD*)(v49 + 32) = 10;
  v50 = *(_DWORD*)(a1 + 8);
  v51 = *(_DWORD*)(a1 + 16);
  LODWORD(v40) = *(_DWORD*)(a1 + 28);
  PSEUDO_LOW_LANE64(v52, n64_u64, *(unsigned __int64*)(a1 + 20));
  v53 = *(_QWORD*)a1 + 48LL * v50;
  *(_DWORD*)(a1 + 8) = v50 + 1;
  *(_DWORD*)v53 = v51;
  *(_DWORD*)(v53 + 20) = 20;
  *(_DWORD*)(v53 + 40) = v40;
  *(_BYTE*)(v53 + 44) = 0;
  *(_OWORD*)(v53 + 4) = SdkData_bb3ac0;
  *(int32x2_t*)(v53 + 24) = vrev64_s32(v52);
  *(_QWORD*)(v53 + 32) = 11;
  return nn_6796c0_alt1((__int64*)a1, 11, 0xAu);
}

long double nn_6794b0(__int64* a1, int a2, int a3, int a4)
{

#pragma clang fp contract(off)
  int v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  int32x2_t v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  int v23;
  int32x2_t v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;

  v4 = *((_DWORD*)a1 + 2);
  v5 = *a1;
  v6 = *((_DWORD*)a1 + 4);
  v7 = *((_DWORD*)a1 + 5);
  *((_DWORD*)a1 + 6) = 1;
  v8 = *((_DWORD*)a1 + 7);
  *((_DWORD*)a1 + 2) = v4 + 1;
  v9 = v5 + 48LL * v4;
  *(_DWORD*)v9 = v6;
  *(_DWORD*)(v9 + 12) = 18;
  *(_DWORD*)(v9 + 16) = a3;
  *(_DWORD*)(v9 + 28) = v7;
  *(_DWORD*)(v9 + 40) = v8;
  *(_BYTE*)(v9 + 44) = 0;
  *(_QWORD*)(v9 + 4) = 0x1200000000LL;
  *(_QWORD*)(v9 + 20) = 0x100000014LL;
  *(_QWORD*)(v9 + 32) = 9;
  LODWORD(v9) = *((_DWORD*)a1 + 2);
  v10 = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v11, n64_u64, *(__int64*)((char*)a1 + 20));
  v12 = *((_DWORD*)a1 + 7);
  v13 = v9 + 1;
  v14 = *a1 + 48LL * (int)v9;
  *((_DWORD*)a1 + 2) = v13;
  *(_DWORD*)v14 = v10;
  *(_DWORD*)(v14 + 20) = 20;
  *(_DWORD*)(v14 + 40) = v12;
  *(_BYTE*)(v14 + 44) = 0;
  *(_DWORD*)(v14 + 12) = 16;
  *(_DWORD*)(v14 + 16) = a3;
  *(int32x2_t*)(v14 + 24) = vrev64_s32(v11);
  *(_QWORD*)(v14 + 32) = 9;
  *(_QWORD*)(v14 + 4) = 0x900000004LL;
  v15 = *((_DWORD*)a1 + 2);
  v16 = *((_DWORD*)a1 + 4);
  LODWORD(v14) = *((_DWORD*)a1 + 7);
  v17 = *a1 + 48LL * v15;
  v18 = LANES64_OF(vrev64_s32(*(int32x2_t*)((char*)a1 + 20))).n64_u64[0];
  *((_DWORD*)a1 + 2) = v15 + 1;
  *(_DWORD*)v17 = v16;
  *(_QWORD*)(v17 + 4) = 0x900000004LL;
  *(_DWORD*)(v17 + 12) = 16;
  *(_DWORD*)(v17 + 16) = a3;
  *(_DWORD*)(v17 + 20) = 20;
  *(_DWORD*)(v17 + 32) = a2;
  *(_DWORD*)(v17 + 36) = 0;
  *(_DWORD*)(v17 + 40) = v14;
  *(_BYTE*)(v17 + 44) = 0;
  *(_QWORD*)(v17 + 24) = v18;
  *((_DWORD*)a1 + 6) = 1;
  v19 = *((_DWORD*)a1 + 2);
  v20 = *((_DWORD*)a1 + 7);
  v21 = *((_DWORD*)a1 + 4);
  LODWORD(v14) = *((_DWORD*)a1 + 5);
  v22 = *a1 + 48LL * v19;
  *((_DWORD*)a1 + 2) = v19 + 1;
  *(_DWORD*)v22 = v21;
  *(_QWORD*)(v22 + 4) = 0x1200000000LL;
  *(_DWORD*)(v22 + 12) = 18;
  *(_DWORD*)(v22 + 16) = a3;
  *(_QWORD*)(v22 + 20) = 0x100000014LL;
  *(_DWORD*)(v22 + 28) = v14;
  *(_QWORD*)(v22 + 32) = 9;
  *(_DWORD*)(v22 + 40) = v20;
  *(_BYTE*)(v22 + 44) = 0;
  LODWORD(v14) = *((_DWORD*)a1 + 2);
  v23 = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v24, n64_u64, *(__int64*)((char*)a1 + 20));
  LODWORD(v5) = *((_DWORD*)a1 + 7);
  v25 = *a1 + 48LL * (int)v14;
  *((_DWORD*)a1 + 2) = v14 + 1;
  *(_DWORD*)v25 = v23;
  *(_DWORD*)(v25 + 12) = 16;
  *(_DWORD*)(v25 + 16) = a3;
  *(_DWORD*)(v25 + 20) = 20;
  *(_DWORD*)(v25 + 40) = v5;
  *(_BYTE*)(v25 + 44) = 0;
  *(int32x2_t*)(v25 + 24) = vrev64_s32(v24);
  *(_QWORD*)(v25 + 32) = 9;
  *(_QWORD*)(v25 + 4) = 0x900000005LL;
  LODWORD(v14) = *((_DWORD*)a1 + 2);
  v26 = *((_DWORD*)a1 + 4);
  LODWORD(v5) = *((_DWORD*)a1 + 7);
  v27 = *a1 + 48LL * (int)v14;
  v28 = LANES64_OF(vrev64_s32(*(int32x2_t*)((char*)a1 + 20))).n64_u64[0];
  *((_DWORD*)a1 + 2) = v14 + 1;
  *(_DWORD*)v27 = v26;
  *(_QWORD*)(v27 + 4) = 0x900000005LL;
  *(_DWORD*)(v27 + 12) = 16;
  *(_DWORD*)(v27 + 16) = a3;
  *(_DWORD*)(v27 + 20) = 20;
  *(_DWORD*)(v27 + 40) = v5;
  *(_BYTE*)(v27 + 44) = 0;
  *(_QWORD*)(v27 + 24) = v28;
  *(_QWORD*)(v27 + 32) = 9;
  *((_DWORD*)a1 + 6) = 0;
  LODWORD(v27) = *((_DWORD*)a1 + 2);
  v29 = *((_DWORD*)a1 + 4);
  v30 = *((_DWORD*)a1 + 5);
  v31 = *((_DWORD*)a1 + 7);
  v32 = *a1 + 48LL * (int)v27;
  *((_DWORD*)a1 + 2) = v27 + 1;
  *(_DWORD*)v32 = v29;
  *(_DWORD*)(v32 + 20) = a2;
  *(_DWORD*)(v32 + 24) = 0;
  *(_DWORD*)(v32 + 28) = v30;
  *(_DWORD*)(v32 + 32) = a2;
  *(_DWORD*)(v32 + 36) = a4;
  *(_DWORD*)(v32 + 40) = v31;
  *(_BYTE*)(v32 + 44) = 0;
  *(_OWORD*)(v32 + 4) = SdkData_bb3c70;
  return *(long double*)&SdkData_bb3c70;
}

int32x2_t nn_6796c0(__int64* a1, int a2, int a3)
{
  int v6;
  __int64 v7;
  int v8;
  int32x2_t v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int32x2_t v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  int32x2_t v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  int32x2_t v25;
  __int64 v26;
  int v27;
  __int64 v28;
  unsigned __int64 v29;
  int v30;
  __int64 v31;
  int32x2_t v32;
  __int64 v33;
  int32x2_t v34;
  __int64 v35;
  int32x2_t v36;
  __int64 v37;
  int32x2_t v38;
  __int64 v39;
  int32x2_t v40;
  __int64 v41;
  int32x2_t v42;
  __int64 v43;
  int32x2_t v44;
  __int64 v45;
  __int64 v46;
  int32x2_t v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  int v54;
  __int64 v55;
  unsigned __int64 v56;
  int v57;
  int32x2_t v58;
  __int64 v59;
  int32x2_t result;

  SdkRoutine_679cf0(a1, a3, a3);
  SdkRoutine_679cf0(a1, 9, a2);
  v6 = *((_DWORD*)a1 + 2);
  v7 = *a1;
  v8 = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v9, n64_u64, *(__int64*)((char*)a1 + 20));
  v10 = *((_DWORD*)a1 + 7);
  *((_DWORD*)a1 + 2) = v6 + 1;
  v11 = v7 + 48LL * v6;
  *(_DWORD*)v11 = v8;
  *(_DWORD*)(v11 + 12) = 18;
  *(_DWORD*)(v11 + 16) = a3;
  *(_DWORD*)(v11 + 20) = 9;
  *(_DWORD*)(v11 + 40) = v10;
  *(_BYTE*)(v11 + 44) = 0;
  *(_QWORD*)(v11 + 4) = 0x1200000001LL;
  *(int32x2_t*)(v11 + 24) = vrev64_s32(v9);
  *(_QWORD*)(v11 + 32) = 9;
  v12 = *((_DWORD*)a1 + 2);
  v13 = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v14, n64_u64, *(__int64*)((char*)a1 + 20));
  v15 = *((_DWORD*)a1 + 7);
  v16 = *a1 + 48LL * v12;
  *((_DWORD*)a1 + 2) = v12 + 1;
  *(_DWORD*)v16 = v13;
  *(_DWORD*)(v16 + 12) = 18;
  *(_DWORD*)(v16 + 16) = a2;
  *(_DWORD*)(v16 + 20) = 9;
  *(_DWORD*)(v16 + 32) = a2;
  *(_DWORD*)(v16 + 36) = 0;
  *(_DWORD*)(v16 + 40) = v15;
  *(_BYTE*)(v16 + 44) = 0;
  *(int32x2_t*)(v16 + 24) = vrev64_s32(v14);
  *(_QWORD*)(v16 + 4) = 0x1200000000LL;
  v17 = *((_DWORD*)a1 + 2);
  v18 = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v19, n64_u64, *(__int64*)((char*)a1 + 20));
  LODWORD(v16) = *((_DWORD*)a1 + 7);
  v20 = v17 + 1;
  v21 = *a1 + 48LL * v17;
  *((_DWORD*)a1 + 2) = v20;
  *(_DWORD*)v21 = v18;
  *(_QWORD*)(v21 + 4) = 0x1200000000LL;
  *(_DWORD*)(v21 + 12) = 18;
  *(_DWORD*)(v21 + 16) = a2;
  *(_DWORD*)(v21 + 20) = 20;
  *(_DWORD*)(v21 + 40) = v16;
  *(_BYTE*)(v21 + 44) = 0;
  *(int32x2_t*)(v21 + 24) = vrev64_s32(v19);
  *(_QWORD*)(v21 + 32) = 4;
  *((_DWORD*)a1 + 6) = 1;
  v22 = *((_DWORD*)a1 + 2);
  LODWORD(v21) = *((_DWORD*)a1 + 4);
  v23 = *((_DWORD*)a1 + 5);
  LODWORD(v16) = *((_DWORD*)a1 + 7);
  v24 = *a1 + 48LL * v22;
  *((_DWORD*)a1 + 2) = v22 + 1;
  *(_DWORD*)v24 = v21;
  *(_QWORD*)(v24 + 4) = 0x1200000000LL;
  *(_DWORD*)(v24 + 12) = 18;
  *(_DWORD*)(v24 + 16) = a2;
  *(_DWORD*)(v24 + 28) = v23;
  *(_QWORD*)(v24 + 32) = 9;
  *(_DWORD*)(v24 + 40) = v16;
  *(_BYTE*)(v24 + 44) = 0;
  *(_QWORD*)(v24 + 20) = 0x100000014LL;
  LODWORD(v24) = *((_DWORD*)a1 + 2);
  LODWORD(v16) = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v25, n64_u64, *(__int64*)((char*)a1 + 20));
  LODWORD(v21) = *((_DWORD*)a1 + 7);
  v26 = *a1 + 48LL * (int)v24;
  *((_DWORD*)a1 + 2) = v24 + 1;
  *(_DWORD*)v26 = v16;
  *(_DWORD*)(v26 + 20) = 20;
  *(_DWORD*)(v26 + 40) = v21;
  *(_BYTE*)(v26 + 44) = 0;
  *(_DWORD*)(v26 + 12) = 16;
  *(_DWORD*)(v26 + 16) = a2;
  *(int32x2_t*)(v26 + 24) = vrev64_s32(v25);
  *(_QWORD*)(v26 + 32) = 9;
  *(_QWORD*)(v26 + 4) = 0x900000005LL;
  v27 = *((_DWORD*)a1 + 2);
  LODWORD(v21) = *((_DWORD*)a1 + 4);
  LODWORD(v26) = *((_DWORD*)a1 + 7);
  v28 = *a1 + 48LL * v27;
  v29 = LANES64_OF(vrev64_s32(*(int32x2_t*)((char*)a1 + 20))).n64_u64[0];
  *((_DWORD*)a1 + 2) = v27 + 1;
  *(_DWORD*)v28 = v21;
  *(_QWORD*)(v28 + 4) = 0x900000005LL;
  *(_DWORD*)(v28 + 12) = 16;
  *(_DWORD*)(v28 + 16) = a2;
  *(_DWORD*)(v28 + 20) = 20;
  *(_DWORD*)(v28 + 40) = v26;
  *(_BYTE*)(v28 + 44) = 0;
  *(_QWORD*)(v28 + 24) = v29;
  *(_QWORD*)(v28 + 32) = 9;
  *((_DWORD*)a1 + 6) = 0;
  v30 = *((_DWORD*)a1 + 2);
  LODWORD(v26) = *((_DWORD*)a1 + 4);
  LODWORD(v28) = *((_DWORD*)a1 + 5);
  LODWORD(v21) = *((_DWORD*)a1 + 7);
  v31 = *a1 + 48LL * v30;
  *((_DWORD*)a1 + 2) = v30 + 1;
  *(_DWORD*)v31 = v26;
  *(_DWORD*)(v31 + 28) = v28;
  *(_DWORD*)(v31 + 40) = v21;
  *(_BYTE*)(v31 + 44) = 0;
  *(_OWORD*)(v31 + 4) = SdkData_bb3c70;
  *(_QWORD*)(v31 + 20) = 24;
  *(_QWORD*)(v31 + 32) = 0x100000009LL;
  *((_DWORD*)a1 + 4) = 6;
  LODWORD(v28) = *((_DWORD*)a1 + 2);
  PSEUDO_LOW_LANE64(v32, n64_u64, *(__int64*)((char*)a1 + 20));
  LODWORD(v21) = *((_DWORD*)a1 + 7);
  v33 = *a1 + 48LL * (int)v28;
  *((_DWORD*)a1 + 2) = v28 + 1;
  *(_QWORD*)(v33 + 32) = 9;
  *(_DWORD*)(v33 + 40) = v21;
  *(_BYTE*)(v33 + 44) = 0;
  *(_OWORD*)v33 = SdkData_bb4830;
  *(_QWORD*)(v33 + 16) = 0x1800000009LL;
  *(int32x2_t*)(v33 + 24) = vrev64_s32(v32);
  LODWORD(v31) = *((_DWORD*)a1 + 2);
  PSEUDO_LOW_LANE64(v34, n64_u64, *(__int64*)((char*)a1 + 20));
  LODWORD(v21) = *((_DWORD*)a1 + 4);
  LODWORD(v33) = *((_DWORD*)a1 + 7);
  v35 = *a1 + 48LL * (int)v31;
  *((_DWORD*)a1 + 2) = v31 + 1;
  *(_OWORD*)(v35 + 4) = SdkData_bb3c70;
  *(_DWORD*)v35 = v21;
  *(_DWORD*)(v35 + 20) = a3;
  *(_DWORD*)(v35 + 40) = v33;
  *(_BYTE*)(v35 + 44) = 0;
  *(int32x2_t*)(v35 + 24) = vrev64_s32(v34);
  *(_QWORD*)(v35 + 32) = 9;
  LODWORD(v31) = *((_DWORD*)a1 + 2);
  LODWORD(v21) = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v36, n64_u64, *(__int64*)((char*)a1 + 20));
  LODWORD(v33) = *((_DWORD*)a1 + 7);
  v37 = *a1 + 48LL * (int)v31;
  *((_DWORD*)a1 + 2) = v31 + 1;
  *(_DWORD*)v37 = v21;
  *(_DWORD*)(v37 + 20) = 20;
  *(_DWORD*)(v37 + 40) = v33;
  *(_BYTE*)(v37 + 44) = 0;
  *(int32x2_t*)(v37 + 24) = vrev64_s32(v36);
  *(_QWORD*)(v37 + 32) = 4;
  *(_OWORD*)(v37 + 4) = SdkData_bb2880;
  LODWORD(v31) = *((_DWORD*)a1 + 2);
  LODWORD(v21) = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v38, n64_u64, *(__int64*)((char*)a1 + 20));
  LODWORD(v33) = *((_DWORD*)a1 + 7);
  v39 = *a1 + 48LL * (int)v31;
  *((_DWORD*)a1 + 2) = v31 + 1;
  *(_DWORD*)v39 = v21;
  *(_DWORD*)(v39 + 20) = a3;
  *(_DWORD*)(v39 + 40) = v33;
  *(_BYTE*)(v39 + 44) = 0;
  *(int32x2_t*)(v39 + 24) = vrev64_s32(v38);
  *(_QWORD*)(v39 + 32) = 9;
  *(_OWORD*)(v39 + 4) = SdkData_bb1870;
  LODWORD(v31) = *((_DWORD*)a1 + 2);
  LODWORD(v21) = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v40, n64_u64, *(__int64*)((char*)a1 + 20));
  LODWORD(v33) = *((_DWORD*)a1 + 7);
  v41 = *a1 + 48LL * (int)v31;
  *((_DWORD*)a1 + 2) = v31 + 1;
  *(_DWORD*)v41 = v21;
  *(_DWORD*)(v41 + 20) = 20;
  *(_DWORD*)(v41 + 40) = v33;
  *(_BYTE*)(v41 + 44) = 0;
  *(int32x2_t*)(v41 + 24) = vrev64_s32(v40);
  *(_QWORD*)(v41 + 32) = 4;
  *(_OWORD*)(v41 + 4) = SdkData_bb3e50;
  LODWORD(v31) = *((_DWORD*)a1 + 2);
  PSEUDO_LOW_LANE64(v42, n64_u64, *(__int64*)((char*)a1 + 20));
  LODWORD(v21) = *((_DWORD*)a1 + 4);
  LODWORD(v33) = *((_DWORD*)a1 + 7);
  v43 = *a1 + 48LL * (int)v31;
  *((_DWORD*)a1 + 2) = v31 + 1;
  *(_QWORD*)(v43 + 4) = 0x1200000001LL;
  *(_DWORD*)v43 = v21;
  *(_DWORD*)(v43 + 12) = 18;
  *(_DWORD*)(v43 + 16) = a2;
  *(_DWORD*)(v43 + 20) = a3;
  *(_DWORD*)(v43 + 40) = v33;
  *(_BYTE*)(v43 + 44) = 0;
  *(int32x2_t*)(v43 + 24) = vrev64_s32(v42);
  *(_QWORD*)(v43 + 32) = 9;
  LODWORD(v43) = *((_DWORD*)a1 + 2);
  LODWORD(v7) = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v44, n64_u64, *(__int64*)((char*)a1 + 20));
  LODWORD(v21) = *((_DWORD*)a1 + 7);
  v45 = *a1 + 48LL * (int)v43;
  *((_DWORD*)a1 + 2) = v43 + 1;
  *(_DWORD*)v45 = v7;
  *(_DWORD*)(v45 + 12) = a3;
  *(_QWORD*)(v45 + 32) = 4;
  *(_DWORD*)(v45 + 40) = v21;
  *(_BYTE*)(v45 + 44) = 0;
  *(_QWORD*)(v45 + 16) = 0x1800000009LL;
  *(int32x2_t*)(v45 + 24) = vrev64_s32(v44);
  *(_QWORD*)(v45 + 4) = 0x400000002LL;
  *((_DWORD*)a1 + 4) = 1;
  *((_DWORD*)a1 + 6) = 1;
  LODWORD(v43) = *((_DWORD*)a1 + 2);
  LODWORD(v7) = *((_DWORD*)a1 + 7);
  LODWORD(v21) = *((_DWORD*)a1 + 5);
  v46 = *a1 + 48LL * (int)v43;
  *((_DWORD*)a1 + 2) = v43 + 1;
  *(_DWORD*)(v46 + 16) = a2;
  *(_QWORD*)(v46 + 20) = 0x100000014LL;
  *(_DWORD*)(v46 + 28) = v21;
  *(_QWORD*)(v46 + 32) = 9;
  *(_DWORD*)(v46 + 40) = v7;
  *(_BYTE*)(v46 + 44) = 0;
  *(_OWORD*)v46 = SdkData_bb4ad0;
  LODWORD(v43) = *((_DWORD*)a1 + 2);
  LODWORD(v7) = *((_DWORD*)a1 + 4);
  PSEUDO_LOW_LANE64(v47, n64_u64, *(__int64*)((char*)a1 + 20));
  LODWORD(v21) = *((_DWORD*)a1 + 7);
  v48 = *a1 + 48LL * (int)v43;
  *((_DWORD*)a1 + 2) = v43 + 1;
  *(_DWORD*)v48 = v7;
  *(_DWORD*)(v48 + 12) = 16;
  *(_DWORD*)(v48 + 16) = a2;
  *(_DWORD*)(v48 + 20) = 20;
  *(_DWORD*)(v48 + 40) = v21;
  *(_BYTE*)(v48 + 44) = 0;
  *(int32x2_t*)(v48 + 24) = vrev64_s32(v47);
  *(_QWORD*)(v48 + 32) = 9;
  *(_QWORD*)(v48 + 4) = 0x900000004LL;
  LODWORD(v43) = *((_DWORD*)a1 + 2);
  LODWORD(v7) = *((_DWORD*)a1 + 4);
  LODWORD(v21) = *((_DWORD*)a1 + 7);
  v49 = *a1 + 48LL * (int)v43;
  v50 = LANES64_OF(vrev64_s32(*(int32x2_t*)((char*)a1 + 20))).n64_u64[0];
  *((_DWORD*)a1 + 2) = v43 + 1;
  *(_DWORD*)v49 = v7;
  *(_QWORD*)(v49 + 4) = 0x900000004LL;
  *(_DWORD*)(v49 + 12) = 16;
  *(_DWORD*)(v49 + 16) = a2;
  *(_DWORD*)(v49 + 20) = 20;
  *(_DWORD*)(v49 + 40) = v21;
  *(_BYTE*)(v49 + 44) = 0;
  *(_QWORD*)(v49 + 24) = v50;
  *(_QWORD*)(v49 + 32) = 0x100000009LL;
  *((_DWORD*)a1 + 4) = 4;
  *((_DWORD*)a1 + 6) = 0;
  LODWORD(v49) = *((_DWORD*)a1 + 2);
  LODWORD(v7) = *((_DWORD*)a1 + 7);
  LODWORD(v16) = *((_DWORD*)a1 + 5);
  v51 = *a1 + 48LL * (int)v49;
  *((_DWORD*)a1 + 2) = v49 + 1;
  *(_DWORD*)(v51 + 16) = a3;
  *(_QWORD*)(v51 + 20) = 9;
  *(_DWORD*)(v51 + 28) = v16;
  *(_QWORD*)(v51 + 32) = 9;
  *(_DWORD*)(v51 + 40) = v7;
  *(_BYTE*)(v51 + 44) = 0;
  *(_OWORD*)v51 = SdkData_bb1490;
  LODWORD(v49) = *((_DWORD*)a1 + 2);
  LODWORD(v7) = *((_DWORD*)a1 + 4);
  LODWORD(v16) = *((_DWORD*)a1 + 7);
  v52 = *a1 + 48LL * (int)v49;
  v53 = LANES64_OF(vrev64_s32(*(int32x2_t*)((char*)a1 + 20))).n64_u64[0];
  *((_DWORD*)a1 + 2) = v49 + 1;
  *(_DWORD*)v52 = v7;
  *(_OWORD*)(v52 + 4) = SdkData_bb2880;
  *(_DWORD*)(v52 + 20) = 20;
  *(_DWORD*)(v52 + 40) = v16;
  *(_BYTE*)(v52 + 44) = 0;
  *(_QWORD*)(v52 + 24) = v53;
  *(_QWORD*)(v52 + 32) = 4;
  LODWORD(v52) = *((_DWORD*)a1 + 2);
  v54 = *((_DWORD*)a1 + 4);
  LODWORD(v7) = *((_DWORD*)a1 + 7);
  v55 = *a1 + 48LL * (int)v52;
  v56 = LANES64_OF(vrev64_s32(*(int32x2_t*)((char*)a1 + 20))).n64_u64[0];
  *((_DWORD*)a1 + 2) = v52 + 1;
  *(_DWORD*)v55 = v54;
  *(_DWORD*)(v55 + 4) = 3;
  *(_DWORD*)(v55 + 8) = a2;
  *(_DWORD*)(v55 + 12) = a3;
  *(_DWORD*)(v55 + 16) = a3;
  *(_DWORD*)(v55 + 20) = a3;
  *(_DWORD*)(v55 + 40) = v7;
  *(_BYTE*)(v55 + 44) = 0;
  *(_QWORD*)(v55 + 24) = v56;
  *(_QWORD*)(v55 + 32) = 9;
  LODWORD(v52) = *((_DWORD*)a1 + 2);
  v57 = *((_DWORD*)a1 + 4);
  LODWORD(v7) = *((_DWORD*)a1 + 7);
  PSEUDO_LOW_LANE64(v58, n64_u64, *(__int64*)((char*)a1 + 20));
  v59 = *a1 + 48LL * (int)v52;
  *((_DWORD*)a1 + 2) = v52 + 1;
  LANES64(result).n64_u64[0] = LANES64_OF(vrev64_s32(v58)).n64_u64[0];
  *(_DWORD*)v59 = v57;
  *(_DWORD*)(v59 + 12) = a3;
  *(_QWORD*)(v59 + 32) = 4;
  *(_DWORD*)(v59 + 40) = v7;
  *(_BYTE*)(v59 + 44) = 0;
  *(_QWORD*)(v59 + 4) = 0x900000002LL;
  *(_QWORD*)(v59 + 16) = 0x1800000004LL;
  *(int32x2_t*)(v59 + 24) = result;
  *((_DWORD*)a1 + 4) = 1;
  return result;
}

__int64* nn_67a390(__int64* result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  int32x2_t v12;
  int8x8_t* v13;
  int v14;
  int8x8_t v15;
  int8x8_t v16;
  int32x2_t v17;
  int8x8_t v18;
  int8x8_t v19;
  unsigned int v20;
  int8x8_t v21;
  char* v22;
  struct {
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
    int v39;
  } v23_;

  v2 = *(_QWORD*)(a2 + 24);
  if (v2 != 0) {
    v4 = result[14];
    v5 = *result;
    v6 = (__int64)result;
    v7 = *(_DWORD*)(v4 + 20);
    v23_.v23 = (__typeof__(v23_.v23)){0};
    v23_.v24 = (__typeof__(v23_.v24)){0};
    v23_.v25 = (__typeof__(v23_.v25)){0};
    v23_.v26 = (__typeof__(v23_.v26)){0};
    v23_.v27 = (__typeof__(v23_.v27)){0};
    v23_.v28 = (__typeof__(v23_.v28)){0};
    if (v7 == 52928) {
      v8 = 2;
    }
    else {
      v8 = 0;
    }
    v23_.v29 = (__typeof__(v23_.v29)){0};
    v23_.v30 = (__typeof__(v23_.v30)){0};
    if (v7 == 51648) {
      v8 = 1;
    }
    v23_.v39 = v8;
    v23_.v31 = (__typeof__(v23_.v31)){0};
    v23_.v32 = (__typeof__(v23_.v32)){0};
    v23_.v33 = (__typeof__(v23_.v33)){0};
    v23_.v34 = (__typeof__(v23_.v34)){0};
    v23_.v35 = (__typeof__(v23_.v35)){0};
    v23_.v36 = (__typeof__(v23_.v36)){0};
    v23_.v37 = (__typeof__(v23_.v37)){0};
    v23_.v38 = (__typeof__(v23_.v38)){0};
    if (v7 == 52928) {
      DWORD2(v23_.v37) = 1;
      DWORD2(v23_.v26) = 5243136;
      HIDWORD(v23_.v27) = 196608;
      v9 = 0x1000000;
    }
    else {
      LODWORD(v23_.v28) = 1;
      DWORD2(v23_.v27) = 48;
      v9 = 64;
      HIDWORD(v23_.v25) = 67305472;
    }
    v10 = *(_DWORD*)(v2 + 56);
    v11 = *(unsigned int*)(a2 + 16);
    LODWORD(v23_.v24) = v9;
    result = (__int64*)SdkRoutine_686d90((__int64)&v23_.v23, v4,
                                         (unsigned int*)v2, v10, v11);
    if ((unsigned __int64)(v5 + 76) > *(_QWORD*)(v6 + 8)) {
      result = (__int64*)SdkRoutine_64b750(
          v6, v5, 4LL * (unsigned int)(*(_DWORD*)(v6 + 104) + 19));
      v5 = *(_QWORD*)v6;
    }
    v13 = (int8x8_t*)(v5 + 76);
    *(_QWORD*)v5 = 0x110036A0122EA6LL;
    *(_QWORD*)(v5 + 8) = v23_.v24;
    *(_DWORD*)(v5 + 16) = HIDWORD(v23_.v25);
    *(_OWORD*)(v5 + 20) = v23_.v27;
    *(_DWORD*)(v5 + 36) = v23_.v28;
    *(_DWORD*)(v5 + 40) = HIDWORD(v23_.v28);
    *(_QWORD*)(v5 + 44) = *((_QWORD*)&v23_.v31 + 1);
    *(_OWORD*)(v5 + 52) = v23_.v35;
    *(_QWORD*)(v5 + 68) = *((_QWORD*)&v23_.v38 + 1);
    *(_QWORD*)v6 = v5 + 76;
    v14 = *(_DWORD*)(*(_QWORD*)(v6 + 112) + 180LL) * *(_DWORD*)(v2 + 52) *
          *(_DWORD*)(*(_QWORD*)(v6 + 112) + 176LL);
    if (*(_BYTE*)(v2 + 32) == 1) {
      LANES64(v12).n64_u8[0] = *(_QWORD*)(v2 + 33);
      LANES64(v12).n64_u8[4] = BYTE4(*(_QWORD*)(v2 + 33));
      LANES64(v15).n64_u32[0] = (*(unsigned __int16*)(v2 + 50) >> 3) & 0xFFF;
      LANES64(v15).n64_u32[1] =
          *(_BYTE*)(v2 + 41) & 0x3F | ((*(_BYTE*)(v2 + 42) & 0x3F) << 6);
      LANES64(v16).n64_u64[0] =
          LANES64_OF(
              vorr_s8(vand_s8(vadd_s32(vshl_n_s32(v12, 0xAu),
                                       COERCE_AS(int32x2_t, 0xC0000000C00LL)),
                              vdup_n_s32(0x1F000u)),
                      v15))
              .n64_u64[0];
      LANES64(v15).n64_u8[0] = BYTE1(*(_QWORD*)(v2 + 33));
      LANES64(v15).n64_u8[4] =
          (unsigned __int16)WORD2(*(_QWORD*)(v2 + 33)) >> 8;
      LANES64(v17).n64_u64[0] = 0x3E0000003E0000LL;
      LANES64(v17).n64_u8[0] = BYTE2(*(_QWORD*)(v2 + 33));
      LANES64(v17).n64_u8[4] = BYTE6(*(_QWORD*)(v2 + 33));
      LANES64(v18).n64_u64[0] =
          LANES64_OF(
              vorr_s8(
                  vand_s8(vadd_s32(vshl_n_s32(v15, 0xFu), vdup_n_s32(0x18000u)),
                          COERCE_AS(int8x8_t, 0x3E0000003E0000LL)),
                  vand_s8(vadd_s32(vshl_n_s32(v17, 0x14u),
                                   COERCE_AS(int32x2_t, 0x30000000300000LL)),
                          vdup_n_s32(0x7C00000u))))
              .n64_u64[0];
      LANES64(v19).n64_u64[0] = LANES64_OF(vorr_s8(v16, v18)).n64_u64[0];
      LANES64(v18).n64_u8[0] = BYTE3(*(_QWORD*)(v2 + 33));
      LANES64(v18).n64_u8[4] = HIBYTE(*(_QWORD*)(v2 + 33));
      v20 = *(_BYTE*)(v2 + 43) & 0x3F |
            (*(unsigned __int8*)(v2 + 44) << 6) & 0x3FFF |
            ((*(_BYTE*)(v2 + 45) & 0x3F) << 14) & 0xFFFFF |
            ((*(_BYTE*)(v2 + 46) & 0xF) << 20) & 0xFFFFFF |
            ((*(_BYTE*)(v2 + 47) & 0x3F) << 24) & 0xBFFFFFFF |
            ((*(_BYTE*)(v2 + 48) & 1) << 30) |
            (*(unsigned __int8*)(v2 + 49) << 31);
      LANES64(v21).n64_u64[0] =
          LANES64_OF(
              vorr_s8(v19,
                      COERCE_AS(
                          int8x8_t,
                          (LANES64_OF(vadd_s32(vshl_n_s32(v18, 0x19u),
                                               COERCE_AS(int32x2_t,
                                                         0x600000006000000LL)))
                               .n64_u64[0] &
                           0xF9FFFFFFF9FFFFFFLL))))
              .n64_u64[0];
      if ((unsigned __int64)(v5 + 104) > *(_QWORD*)(v6 + 8)) {
        SdkRoutine_64b750(v6, v5 + 76,
                          4LL * (unsigned int)(*(_DWORD*)(v6 + 104) + 7));
        v13 = *(int8x8_t**)v6;
      }
      LANES64(v13[2]).n64_u32[0] = v20;
      LANES64(*(v13)).n64_u64[0] = 0x50047A0062EA6LL;
      LANES64(v13[1]).n64_u64[0] = LANES64(v21).n64_u64[0];
      result = (__int64*)SdkRoutine_661df0(a2);
      LANES64(v13[2]).n64_u32[1] = (unsigned int)result;
      LANES64(v13[3]).n64_u32[0] = v14;
      v22 = (char*)&v13[3] + 4;
    }
    else {
      if ((unsigned __int64)(v5 + 88) > *(_QWORD*)(v6 + 8)) {
        result = (__int64*)SdkRoutine_64b750(
            v6, v5 + 76, 4LL * (unsigned int)(*(_DWORD*)(v6 + 104) + 3));
        v13 = *(int8x8_t**)v6;
      }
      LANES64(v13[1]).n64_u32[0] = v14;
      v22 = (char*)&v13[1] + 4;
      LANES64(*(v13)).n64_u64[0] = 0x4BA0022E68LL;
    }
    *(_QWORD*)v6 = v22;
  }
  return result;
}

__int64 nn_67bba0(__int64 result, int a2, int a3, unsigned int a4, __int64* a5)
{
  __int64 v7;
  __int64 i;
  __int64 v10;
  unsigned int* v11;
  unsigned int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 k;
  unsigned __int64 v17;
  __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 j;
  unsigned __int64 v22;
  char v23;
  int32x4_t* v24;
  __int64* v25;
  __int64 v26;
  int64x2_t v27;
  int64x2_t v28;
  int64x2_t v29;
  int64x2_t v30;
  __int64 m;
  __int64 v32;

  v7 = result;
  if (a2 != 5) {
    if (a2 == 8) {
      if ((int)a4 >= 1) {
        for (i = a4; i != 0; --i) {
          v10 = *a5++;
          result = SdkRoutine_672ce0(v7, a3++, v10);
        }
      }
    }
    else if ((int)a4 >= 1) {
      for (j = a4; j != 0; --j) {
        v22 = *a5++;
        result =
            (__int64)SdkRoutine_67b920((_QWORD*)(v7 + 11240), a2, a3++, v22);
      }
    }
    return result;
  }
  if (*(_BYTE*)(result + 11408) != 1) {
    v23 = 0;
    if ((int)a4 < 1) {
      return result;
    }
    goto LABEL_31;
  }
  v11 = *(unsigned int**)(result + 11240);
  if ((unsigned __int64)&v11[a4 + 2] > *(_QWORD*)(result + 11248)) {
    v12 = a4;
    result = SdkRoutine_64b750(result + 11240, (__int64)v11,
                               4LL * (*(_DWORD*)(result + 11344) + a4 + 2));
    v11 = *(unsigned int**)(v7 + 11240);
    a4 = v12;
  }
  *v11 = ((a4 << 16) + 0x10000) & 0x1FFF0000 | 0xA0002EA6;
  v11[1] = (a4 << 16) | (a3 + 828);
  v13 = (__int64*)(v11 + 2);
  if ((int)a4 >= 1) {
    if (a4 >= 0xC && (v13 >= &a5[a4] || a5 >= (__int64*)&v11[a4 + 2])) {
      v14 = a4 & 0x7FFFFFF8;
      v24 = (int32x4_t*)(v11 + 6);
      v25 = a5 + 4;
      v13 = (__int64*)((char*)v13 + 4 * v14);
      v26 = v14;
      do {
        v28 = *((int64x2_t*)v25 - 2);
        v27 = *((int64x2_t*)v25 - 1);
        v30 = *(int64x2_t*)v25;
        v29 = *((int64x2_t*)v25 + 1);
        v25 += 8;
        v26 -= 8;
        v24[-1] = vshrn_high_n_s64(vshrn_n_s64(v28, 8u), v27, 8u);
        *v24 = vshrn_high_n_s64(vshrn_n_s64(v30, 8u), v29, 8u);
        v24 += 2;
      } while (v26 != 0);
      if (v14 == a4) {
        goto LABEL_30;
      }
    }
    else {
      v14 = 0;
    }
    v15 = a4 & 7;
    for (k = v14; v15 != 0; v13 = (__int64*)((char*)v13 + 4)) {
      v17 = a5[k++];
      --v15;
      *(_DWORD*)v13 = v17 >> 8;
    }
    if (v14 - (unsigned __int64)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v18 = a4 - k;
      v19 = &a5[k + 4];
      do {
        v18 -= 8;
        *(_DWORD*)v13 = (unsigned __int64)*(v19 - 4) >> 8;
        *((_DWORD*)v13 + 1) = (unsigned __int64)*(v19 - 3) >> 8;
        *((_DWORD*)v13 + 2) = (unsigned __int64)*(v19 - 2) >> 8;
        *((_DWORD*)v13 + 3) = (unsigned __int64)*(v19 - 1) >> 8;
        *((_DWORD*)v13 + 4) = (unsigned __int64)*v19 >> 8;
        *((_DWORD*)v13 + 5) = (unsigned __int64)v19[1] >> 8;
        *((_DWORD*)v13 + 6) = (unsigned __int64)v19[2] >> 8;
        v20 = v19[3];
        v19 += 8;
        *((_DWORD*)v13 + 7) = v20 >> 8;
        v13 += 4;
      } while (v18 != 0);
    }
  }
LABEL_30:
  *(_QWORD*)(v7 + 11240) = v13;
  v23 = *(_BYTE*)(v7 + 11408);
  if ((int)a4 < 1) {
    return result;
  }
LABEL_31:
  if ((v23 & 1) == 0) {
    for (m = a4; m != 0; --m) {
      v32 = *a5++;
      result = SdkRoutine_6860f0(v7, a3++, v32);
    }
  }
  return result;
}

__int64 nn_67bfc0(__int64 result, int a2, int a3, unsigned int a4,
                  unsigned __int64 a5)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int* v11;
  int v12;
  unsigned int v13;
  unsigned __int64 v14;
  unsigned int v15;
  float* v16;
  __int64 v17;
  __int64 v19;
  unsigned int v20;
  unsigned __int64 v21;
  unsigned int v22;
  float* v23;
  char* v24;
  float* v25;
  __int64* v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  const double* v36;
  char* v37;
  const double* v38;
  __int64 v39;
  const double* v40;
  float* v41;
  __int64 v42;
  const double* v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  float64x2x2_t v56;
  float64x2x2_t v57;
  float64x2x2_t v58;
  float64x2x2_t v59;
  float32x4x3_t v60;
  float32x4x4_t v61;

  v6 = result;
  if (a2 != 5) {
    if (a2 == 8) {
      if ((int)a4 >= 1) {
        v7 = (__int64*)(a5 + 8);
        v8 = a4;
        do {
          result = (__int64)nvidia_64ac60((_QWORD*)v6, &v55, 0x18u);
          --v8;
          *(_BYTE*)v55 = 75;
          *(_DWORD*)(v55 + 4) = a3++;
          v9 = v55;
          *(_QWORD*)(v55 + 8) = *(v7 - 1);
          v10 = *v7;
          v7 += 2;
          *(_DWORD*)(v9 + 16) = v10;
        } while (v8 != 0);
      }
      return result;
    }
    v19 = *(_QWORD*)result;
    v20 = (4 * a4) | 2;
    if (*(_QWORD*)result + 4 * (unsigned __int64)v20 > *(_QWORD*)(result + 8)) {
      v21 = a5;
      v22 = a4;
      result = SdkRoutine_64b750(result, v19,
                                 4LL * (*(_DWORD*)(result + 104) + v20));
      v19 = *(_QWORD*)v6;
      a4 = v22;
      a5 = v21;
    }
    v23 = (float*)(v19 + 8);
    *(_DWORD*)v19 = ((SdkData_bb0570[a2] + a3) << 18) | 0x80000E36;
    *(_DWORD*)(v19 + 4) = (a4 << 18) | 0x600008E4;
    if ((int)a4 >= 1) {
      if (a4 < 4 || (unsigned __int64)v23 < a5 + 16LL * a4 &&
                        a5 < v19 + 16 * (unsigned __int64)a4 + 8) {
        v24 = nullptr;
        v25 = (float*)(v19 + 8);
      LABEL_22:
        v23 = (float*)(a4 & 3);
        if (v23 != nullptr) {
          v26 = (__int64*)(a5 + 16LL * (_QWORD)v24 + 8);
          v27 = (char*)v23 + (_QWORD)v24;
          do {
            v28 = *(v26 - 1);
            v23 = (float*)((char*)v23 - 1);
            *(_DWORD*)v25 = v28;
            *(_DWORD*)(v19 + 12) = HIDWORD(v28);
            v29 = *v26;
            v26 += 2;
            *(_QWORD*)(v19 + 16) = (unsigned int)v29;
            v19 += 16;
            v25 = (float*)(v19 + 8);
          } while (v23 != nullptr);
          v23 = (float*)(v19 + 8);
        }
        else {
          v27 = v24;
        }
        if ((unsigned __int64)&v24[-a4] <= 0xFFFFFFFFFFFFFFFCLL) {
          v31 = v19 + 36;
          v32 = a4 - (_QWORD)v27;
          v33 = (_QWORD*)(a5 + 16LL * (_QWORD)v27 + 32);
          do {
            v34 = *(v33 - 4);
            v32 -= 4;
            *(_DWORD*)v25 = v34;
            *(_DWORD*)(v31 - 24) = HIDWORD(v34);
            *(_QWORD*)(v31 - 20) = (unsigned int)*(v33 - 3);
            *(_QWORD*)(v31 - 12) = *(v33 - 2);
            *(_QWORD*)(v31 - 4) = (unsigned int)*(v33 - 1);
            *(_QWORD*)(v31 + 4) = *v33;
            *(_QWORD*)(v31 + 12) = (unsigned int)v33[1];
            *(_QWORD*)(v31 + 20) = v33[2];
            v25 = (float*)(v19 + 72);
            v19 += 64;
            v35 = v33[3];
            v33 += 8;
            *(_QWORD*)(v31 + 28) = (unsigned int)v35;
            v31 += 64;
          } while (v32 != 0);
          v23 = (float*)(v31 - 28);
        }
        goto LABEL_36;
      }
      v61.val[3] = (__typeof__(v61.val[3])){0};
      v24 = (char*)(a4 & 0x7FFFFFFC);
      v36 = (const double*)a5;
      v25 = &v23[4 * (_QWORD)v24];
      v19 += 16LL * (_QWORD)v24;
      v37 = v24;
      do {
        v58 = vld2q_f64(v36);
        v38 = v36 + 4;
        v37 -= 4;
        v36 += 8;
        v59 = vld2q_f64(v38);
        v61.val[2] = vuzp1q_s32(v58.val[1], v59.val[1]);
        v61.val[1] = vuzp2q_s32(v58.val[0], v59.val[0]);
        v61.val[0] = vuzp1q_s32(v58.val[0], v59.val[0]);
        vst4q_f32(v23, v61);
        v23 += 16;
      } while (v37 != nullptr);
      if (v24 != (char*)a4) {
        goto LABEL_22;
      }
    }
  LABEL_36:
    *(_QWORD*)v6 = v23;
    return result;
  }
  if (*(_BYTE*)(result + 168) != 1) {
    v30 = 0;
    if ((int)a4 < 1) {
      return result;
    }
    goto LABEL_51;
  }
  v11 = *(unsigned int**)result;
  v12 = 3 * a4;
  v13 = 3 * a4 + 2;
  if (*(_QWORD*)result + 4 * (unsigned __int64)v13 > *(_QWORD*)(result + 8)) {
    v14 = a5;
    v15 = a4;
    result = SdkRoutine_64b750(result, (__int64)v11,
                               4LL * (*(_DWORD*)(result + 104) + v13));
    v11 = *(unsigned int**)v6;
    a4 = v15;
    a5 = v14;
  }
  *v11 = ((v12 << 16) + 0x10000) & 0x1FFF0000 | 0xA0002EA6;
  v11[1] = (v12 << 16) | (3 * a3 + 588);
  v16 = (float*)(v11 + 2);
  if ((int)a4 >= 1) {
    if (a4 > 4 && ((unsigned __int64)v16 >= a5 + 16LL * a4 ||
                   a5 >= (unsigned __int64)&v11[3 * a4 + 2])) {
      v39 = a4 & 3;
      v40 = (const double*)a5;
      if (v39 == 0) {
        v39 = 4;
      }
      v17 = a4 - v39;
      v41 = &v16[3 * v17];
      v42 = v17;
      do {
        v56 = vld2q_f64(v40);
        v43 = v40 + 4;
        v42 -= 4;
        v40 += 8;
        v57 = vld2q_f64(v43);
        v60.val[2] = vuzp1q_s32(v56.val[1], v57.val[1]);
        v60.val[1] = vuzp2q_s32(v56.val[0], v57.val[0]);
        v60.val[0] = vuzp1q_s32(v56.val[0], v57.val[0]);
        vst3q_f32(v16, v60);
        v16 += 12;
      } while (v42 != 0);
      v16 = v41;
    }
    else {
      v17 = 0;
    }
    v44 = (a4 - (unsigned int)v17) & 3LL;
    if (v44 != 0) {
      v45 = a5 + 16 * v17;
      v46 = v17 + v44;
      do {
        --v44;
        *(_DWORD*)v16 = *(_QWORD*)v45;
        v16[1] = *(float*)(v45 + 4);
        v47 = *(_QWORD*)(v45 + 8);
        v45 += 16LL;
        *((_DWORD*)v16 + 2) = v47;
        v16 += 3;
      } while (v44 != 0);
    }
    else {
      v46 = v17;
    }
    if (v17 - (unsigned __int64)a4 <= 0xFFFFFFFFFFFFFFFCLL) {
      v48 = a4 - v46;
      v49 = a5 + 16 * v46 + 32;
      do {
        v48 -= 4;
        *(_DWORD*)v16 = *(_QWORD*)(v49 - 32);
        v16[1] = *(float*)(v49 - 28);
        *((_DWORD*)v16 + 2) = *(_QWORD*)(v49 - 24);
        *((_DWORD*)v16 + 3) = *(_QWORD*)(v49 - 16);
        v16[4] = *(float*)(v49 - 12);
        *((_DWORD*)v16 + 5) = *(_QWORD*)(v49 - 8);
        *((_DWORD*)v16 + 6) = *(_QWORD*)v49;
        v16[7] = *(float*)(v49 + 4);
        *((_DWORD*)v16 + 8) = *(_QWORD*)(v49 + 8);
        *((_DWORD*)v16 + 9) = *(_QWORD*)(v49 + 16);
        v16[10] = *(float*)(v49 + 20);
        v50 = *(_QWORD*)(v49 + 24);
        v49 += 64;
        *((_DWORD*)v16 + 11) = v50;
        v16 += 12;
      } while (v48 != 0);
    }
  }
  *(_QWORD*)v6 = v16;
  v30 = *(_BYTE*)(v6 + 168);
  if ((int)a4 >= 1) {
  LABEL_51:
    if ((v30 & 1) == 0) {
      v51 = (__int64*)(a5 + 8);
      v52 = a4;
      do {
        result = (__int64)nvidia_64ac60((_QWORD*)v6, &v55, 0x18u);
        --v52;
        *(_BYTE*)v55 = 14;
        *(_DWORD*)(v55 + 4) = a3++;
        v53 = v55;
        *(_QWORD*)(v55 + 8) = *(v51 - 1);
        v54 = *v51;
        v51 += 2;
        *(_DWORD*)(v53 + 16) = v54;
      } while (v52 != 0);
    }
  }
  return result;
}

__int64 nn_67c500(__int64 result, int a2, int a3, int a4, unsigned __int64 a5)
{

#pragma clang fp contract(off)
  __int64 v6;
  int* v7;
  __int64 i;
  __int64 v9;
  int v10;
  unsigned int* v11;
  unsigned int v12;
  unsigned int v13;
  unsigned __int64 v14;
  int v15;
  float* v16;
  __int64 v17;
  __int64 v19;
  unsigned int v20;
  unsigned __int64 v21;
  int v22;
  float* v23;
  char* v24;
  float* v25;
  __int64* v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  const double* v36;
  char* v37;
  const double* v38;
  __int64 v39;
  const double* v40;
  float* v41;
  __int64 v42;
  const double* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  int* v51;
  __int64 j;
  __int64 v53;
  int v54;
  float64x2x2_t v55;
  float64x2x2_t v56;
  float64x2x2_t v57;
  float64x2x2_t v58;
  float32x4x3_t v59;
  float32x4x4_t v60;

  v6 = result;
  if (a2 != 5) {
    if (a2 == 8) {
      if (a4 >= 1) {
        v7 = (int*)(a5 + 8);
        for (i = (unsigned int)a4; i != 0; --i) {
          v9 = *((_QWORD*)v7 - 1);
          v10 = *v7;
          v7 += 4;
          result = SdkRoutine_672cb0(v6, a3++, v9, v10);
        }
      }
      return result;
    }
    v19 = *(_QWORD*)(result + 11240);
    v20 = (4 * a4) | 2;
    if (v19 + 4 * (unsigned __int64)v20 > *(_QWORD*)(result + 11248)) {
      v21 = a5;
      v22 = a4;
      result = SdkRoutine_64b750(result + 11240, v19,
                                 4LL * (*(_DWORD*)(result + 11344) + v20));
      v19 = *(_QWORD*)(v6 + 11240);
      a4 = v22;
      a5 = v21;
    }
    v23 = (float*)(v19 + 8);
    *(_DWORD*)v19 = ((SdkData_bb0570[a2] + a3) << 18) | 0x80000E36;
    *(_DWORD*)(v19 + 4) = (a4 << 18) | 0x600008E4;
    if (a4 >= 1) {
      if ((unsigned int)a4 < 4 ||
          (unsigned __int64)v23 < a5 + 16LL * (unsigned int)a4 &&
              a5 < v19 + 16 * (unsigned __int64)(unsigned int)a4 + 8) {
        v24 = nullptr;
        v25 = (float*)(v19 + 8);
      LABEL_22:
        v23 = (float*)(a4 & 3);
        if (v23 != nullptr) {
          v26 = (__int64*)(a5 + 16LL * (_QWORD)v24 + 8);
          v27 = (char*)v23 + (_QWORD)v24;
          do {
            v28 = *(v26 - 1);
            v23 = (float*)((char*)v23 - 1);
            *(_DWORD*)v25 = v28;
            *(_DWORD*)(v19 + 12) = HIDWORD(v28);
            v29 = *v26;
            v26 += 2;
            *(_QWORD*)(v19 + 16) = (unsigned int)v29;
            v19 += 16;
            v25 = (float*)(v19 + 8);
          } while (v23 != nullptr);
          v23 = (float*)(v19 + 8);
        }
        else {
          v27 = v24;
        }
        if ((unsigned __int64)&v24[-a4] <= 0xFFFFFFFFFFFFFFFCLL) {
          v31 = v19 + 36;
          v32 = (unsigned int)a4 - (_QWORD)v27;
          v33 = (_QWORD*)(a5 + 16LL * (_QWORD)v27 + 32);
          do {
            v34 = *(v33 - 4);
            v32 -= 4;
            *(_DWORD*)v25 = v34;
            *(_DWORD*)(v31 - 24) = HIDWORD(v34);
            *(_QWORD*)(v31 - 20) = (unsigned int)*(v33 - 3);
            *(_QWORD*)(v31 - 12) = *(v33 - 2);
            *(_QWORD*)(v31 - 4) = (unsigned int)*(v33 - 1);
            *(_QWORD*)(v31 + 4) = *v33;
            *(_QWORD*)(v31 + 12) = (unsigned int)v33[1];
            *(_QWORD*)(v31 + 20) = v33[2];
            v25 = (float*)(v19 + 72);
            v19 += 64;
            v35 = v33[3];
            v33 += 8;
            *(_QWORD*)(v31 + 28) = (unsigned int)v35;
            v31 += 64;
          } while (v32 != 0);
          v23 = (float*)(v31 - 28);
        }
        goto LABEL_36;
      }
      v60.val[3] = (__typeof__(v60.val[3])){0};
      v24 = (char*)(a4 & 0x7FFFFFFC);
      v36 = (const double*)a5;
      v25 = &v23[4 * (_QWORD)v24];
      v19 += 16LL * (_QWORD)v24;
      v37 = v24;
      do {
        v57 = vld2q_f64(v36);
        v38 = v36 + 4;
        v37 -= 4;
        v36 += 8;
        v58 = vld2q_f64(v38);
        v60.val[2] = vuzp1q_s32(v57.val[1], v58.val[1]);
        v60.val[1] = vuzp2q_s32(v57.val[0], v58.val[0]);
        v60.val[0] = vuzp1q_s32(v57.val[0], v58.val[0]);
        vst4q_f32(v23, v60);
        v23 += 16;
      } while (v37 != nullptr);
      if (v24 != (char*)(unsigned int)a4) {
        goto LABEL_22;
      }
    }
  LABEL_36:
    *(_QWORD*)(v6 + 11240) = v23;
    return result;
  }
  if (*(_BYTE*)(result + 11408) != 1) {
    v30 = 0;
    if (a4 < 1) {
      return result;
    }
    goto LABEL_51;
  }
  v11 = *(unsigned int**)(result + 11240);
  v12 = 3 * a4;
  v13 = 3 * a4 + 2;
  if ((unsigned __int64)&v11[v13] > *(_QWORD*)(result + 11248)) {
    v14 = a5;
    v15 = a4;
    result = SdkRoutine_64b750(result + 11240, (__int64)v11,
                               4LL * (*(_DWORD*)(result + 11344) + v13));
    v11 = *(unsigned int**)(v6 + 11240);
    a4 = v15;
    a5 = v14;
  }
  *v11 = ((v12 << 16) + 0x10000) & 0x1FFF0000 | 0xA0002EA6;
  v11[1] = (v12 << 16) | (3 * a3 + 588);
  v16 = (float*)(v11 + 2);
  if (a4 >= 1) {
    if ((unsigned int)a4 > 4 &&
        ((unsigned __int64)v16 >= a5 + 16LL * (unsigned int)a4 ||
         a5 >= (unsigned __int64)&v11[3 * a4 + 2])) {
      v39 = a4 & 3;
      v40 = (const double*)a5;
      if (v39 == 0) {
        v39 = 4;
      }
      v17 = (unsigned int)a4 - v39;
      v41 = &v16[3 * v17];
      v42 = v17;
      do {
        v55 = vld2q_f64(v40);
        v43 = v40 + 4;
        v42 -= 4;
        v40 += 8;
        v56 = vld2q_f64(v43);
        v59.val[2] = vuzp1q_s32(v55.val[1], v56.val[1]);
        v59.val[1] = vuzp2q_s32(v55.val[0], v56.val[0]);
        v59.val[0] = vuzp1q_s32(v55.val[0], v56.val[0]);
        vst3q_f32(v16, v59);
        v16 += 12;
      } while (v42 != 0);
      v16 = v41;
    }
    else {
      v17 = 0;
    }
    v44 = (a4 - (int)v17) & 3LL;
    if (v44 != 0) {
      v45 = a5 + 16 * v17;
      v46 = v17 + v44;
      do {
        --v44;
        *(_DWORD*)v16 = *(_QWORD*)v45;
        v16[1] = *(float*)(v45 + 4);
        v47 = *(_QWORD*)(v45 + 8);
        v45 += 16;
        *((_DWORD*)v16 + 2) = v47;
        v16 += 3;
      } while (v44 != 0);
    }
    else {
      v46 = v17;
    }
    if (v17 - (unsigned __int64)(unsigned int)a4 <= 0xFFFFFFFFFFFFFFFCLL) {
      v48 = (unsigned int)a4 - v46;
      v49 = a5 + 16 * v46 + 32;
      do {
        v48 -= 4;
        *(_DWORD*)v16 = *(_QWORD*)(v49 - 32);
        v16[1] = *(float*)(v49 - 28);
        *((_DWORD*)v16 + 2) = *(_QWORD*)(v49 - 24);
        *((_DWORD*)v16 + 3) = *(_QWORD*)(v49 - 16);
        v16[4] = *(float*)(v49 - 12);
        *((_DWORD*)v16 + 5) = *(_QWORD*)(v49 - 8);
        *((_DWORD*)v16 + 6) = *(_QWORD*)v49;
        v16[7] = *(float*)(v49 + 4);
        *((_DWORD*)v16 + 8) = *(_QWORD*)(v49 + 8);
        *((_DWORD*)v16 + 9) = *(_QWORD*)(v49 + 16);
        v16[10] = *(float*)(v49 + 20);
        v50 = *(_QWORD*)(v49 + 24);
        v49 += 64LL;
        *((_DWORD*)v16 + 11) = v50;
        v16 += 12;
      } while (v48 != 0);
    }
  }
  *(_QWORD*)(v6 + 11240) = v16;
  v30 = *(_BYTE*)(v6 + 11408);
  if (a4 >= 1) {
  LABEL_51:
    if ((v30 & 1) == 0) {
      v51 = (int*)(a5 + 8);
      for (j = (unsigned int)a4; j != 0; --j) {
        v53 = *((_QWORD*)v51 - 1);
        v54 = *v51;
        v51 += 4;
        result = SdkRoutine_686330(v6, a3++, v53, v54);
      }
    }
  }
  return result;
}

__int64 nn_67cc80(__int64 result, int a2, int a3, unsigned int a4,
                  int32x4_t* a5)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned int* v10;
  unsigned int v11;
  unsigned __int32* v12;
  __int64 v13;
  __int64 v14;
  __int64 i;
  __int64 v16;
  __int64 v17;
  unsigned __int64* v18;
  unsigned __int64 v19;
  unsigned int v20;
  unsigned int* v21;
  int v22;
  unsigned int v23;
  unsigned int* v24;
  float* v25;
  bool v26;
  __int64 v27;
  int32x4_t* v28;
  float* v29;
  __int64 v30;
  int32x4_t v31;
  int32x4_t v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64* v35;
  float* v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int32x4_t* v40;
  int32x4_t* v41;
  __int64 v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  float32x4x2_t v50;

  v7 = result;
  if (a2 != 5) {
    if (a2 == 8) {
      if ((int)a4 >= 1) {
        v8 = a4;
        do {
          result = (__int64)nvidia_64ac60((_QWORD*)v7, &v49, 0x10u);
          --v8;
          *(_BYTE*)v49 = 71;
          *(_DWORD*)(v49 + 4) = a3++;
          v9 = LANES128(*(a5)).n128_u64[0];
          a5 = (int32x4_t*)((char*)a5 + 8);
          *(_QWORD*)(v49 + 8) = v9;
        } while (v8 != 0);
      }
      return result;
    }
    v20 = 2 * a4 + 4;
    v21 = *(unsigned int**)result;
    if (*(_QWORD*)result + 4 * (unsigned __int64)v20 > *(_QWORD*)(result + 8)) {
      v22 = a2;
      v23 = a4;
      result = SdkRoutine_64b750(result, *(_QWORD*)result,
                                 4LL * (*(_DWORD*)(result + 104) + v20));
      v21 = *(unsigned int**)v7;
      a2 = v22;
      a4 = v23;
    }
    *v21 = (SdkData_bb00b0[a2] << 16) | 0x80000E1C;
    v24 = v21 + 1;
    if ((*(_BYTE*)(v7 + 19) & 8) != 0) {
      v24 = v21 + 2;
      v21[1] = -2147481973;
    }
    v25 = (float*)(v24 + 2);
    *v24 = ((a4 & 0xFFF) << 17) | 0xA00108E3;
    v24[1] = 8 * a3 + 360;
    if ((int)a4 < 1) {
      *(_QWORD*)v7 = v25;
      return result;
    }
    if (a4 >= 8 && (v25 < &LANES128(*(a5)).n128_f32[2 * a4]
                        ? (v26 = a5 >= (int32x4_t*)&v24[2 * a4 + 2])
                        : (v26 = true),
                    v26)) {
      v27 = a4 & 0x7FFFFFFC;
      v28 = a5;
      v29 = &v25[2 * v27];
      v24 += 2 * v27;
      v30 = v27;
      do {
        v32 = *v28;
        v31 = v28[1];
        v28 += 2;
        v30 -= 4;
        v50.val[0] = vuzp1q_s32(v32, v31);
        v50.val[1] = vuzp2q_s32(v32, v31);
        vst2q_f32(v25, v50);
        v25 += 8;
      } while (v30 != 0);
      if (v27 == a4) {
      LABEL_46:
        *(_QWORD*)v7 = v29;
        return result;
      }
    }
    else {
      v27 = 0;
      v29 = (float*)(v24 + 2);
    }
    v33 = (a4 - (unsigned int)v27) & 7LL;
    if (v33 != 0) {
      v34 = v27;
      do {
        v35 = &LANES128(*(a5)).n128_u64[v34];
        v36 = v29;
        ++v34;
        --v33;
        *(_DWORD*)v29 = *v35;
        v29 += 2;
        v24[3] = *((_DWORD*)v35 + 1);
        v24 = (unsigned int*)v36;
      } while (v33 != 0);
      v24 = (unsigned int*)(v29 - 2);
    }
    else {
      v34 = v27;
    }
    if (v27 - (unsigned __int64)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v37 = a4 - v34;
      v38 = (__int64)&LANES128(a5[2]).n128_i64[v34];
      do {
        v37 -= 8;
        *(_DWORD*)v29 = *(_QWORD*)(v38 - 32);
        v24[3] = *(_DWORD*)(v38 - 28);
        *((_DWORD*)v29 + 2) = *(_QWORD*)(v38 - 24);
        v29[3] = *(float*)(v38 - 20);
        *((_DWORD*)v29 + 4) = *(_QWORD*)(v38 - 16);
        v29[5] = *(float*)(v38 - 12);
        *((_DWORD*)v29 + 6) = *(_QWORD*)(v38 - 8);
        v29[7] = *(float*)(v38 - 4);
        *((_DWORD*)v29 + 8) = *(_QWORD*)v38;
        v29[9] = *(float*)(v38 + 4);
        *((_DWORD*)v29 + 10) = *(_QWORD*)(v38 + 8);
        v29[11] = *(float*)(v38 + 12);
        *((_DWORD*)v29 + 12) = *(_QWORD*)(v38 + 16);
        v29[13] = *(float*)(v38 + 20);
        *((_DWORD*)v29 + 14) = *(_QWORD*)(v38 + 24);
        v39 = *(_DWORD*)(v38 + 28);
        v24 = (unsigned int*)(v29 + 14);
        v38 += 64;
        *((_DWORD*)v29 + 15) = v39;
        v29 += 16;
      } while (v37 != 0);
    }
    goto LABEL_46;
  }
  if (*(_BYTE*)(result + 168) == 1) {
    v10 = *(unsigned int**)result;
    if (*(_QWORD*)result + 4 * (unsigned __int64)(a4 + 2) >
        *(_QWORD*)(result + 8)) {
      v11 = a4;
      result = SdkRoutine_64b750(result, (__int64)v10,
                                 4LL * (*(_DWORD*)(result + 104) + a4 + 2));
      v10 = *(unsigned int**)v7;
      a4 = v11;
    }
    *v10 = ((a4 << 16) + 0x10000) & 0x1FFF0000 | 0xA0002EA6;
    v10[1] = (a4 << 16) | (a3 + 668);
    v12 = v10 + 2;
    if ((int)a4 >= 1) {
      if (a4 >= 0xC && (v12 >= &LANES128(*(a5)).n128_u32[2 * a4] ||
                        a5 >= (int32x4_t*)&v10[a4 + 2])) {
        v13 = a4 & 0x7FFFFFF8;
        v40 = (int32x4_t*)(v10 + 6);
        v41 = a5 + 2;
        v12 += v13;
        v42 = v13;
        do {
          v44 = v41[-2];
          v43 = v41[-1];
          v46 = *v41;
          v45 = v41[1];
          v41 += 4;
          v42 -= 8;
          v40[-1] = vuzp1q_s32(v44, v43);
          *v40 = vuzp1q_s32(v46, v45);
          v40 += 2;
        } while (v42 != 0);
        if (v13 == a4) {
          goto LABEL_50;
        }
      }
      else {
        v13 = 0;
      }
      v14 = a4 & 7;
      for (i = v13; v14 != 0; ++v12) {
        v16 = LANES128(*(a5)).n128_i64[i++];
        --v14;
        *v12 = v16;
      }
      if (v13 - (unsigned __int64)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
        v17 = a4 - i;
        v18 = &LANES128(a5[2]).n128_u64[i];
        do {
          v17 -= 8;
          *v12 = *(v18 - 4);
          v12[1] = *(v18 - 3);
          v12[2] = *(v18 - 2);
          v12[3] = *(v18 - 1);
          v12[4] = *v18;
          v12[5] = v18[1];
          v12[6] = v18[2];
          v19 = v18[3];
          v18 += 8;
          v12[7] = v19;
          v12 += 8;
        } while (v17 != 0);
      }
    }
  LABEL_50:
    *(_QWORD*)v7 = v12;
    if ((*(_BYTE*)(v7 + 168) & 1) != 0) {
      return result;
    }
  }
  if ((int)a4 >= 1) {
    v47 = a4;
    do {
      result = (__int64)nvidia_64ac60((_QWORD*)v7, &v49, 0x10u);
      --v47;
      *(_BYTE*)v49 = 10;
      *(_DWORD*)(v49 + 4) = a3++;
      v48 = LANES128(*(a5)).n128_u64[0];
      a5 = (int32x4_t*)((char*)a5 + 8);
      *(_QWORD*)(v49 + 8) = v48;
    } while (v47 != 0);
  }
  return result;
}

__int64 nn_67d180(__int64 result, int a2, int a3, int a4, __int64* a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v8;
  __int64 i;
  __int64 v10;
  unsigned int* v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 j;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  unsigned int* v21;
  unsigned int v22;
  int v23;
  int v24;
  unsigned int* v25;
  float* v26;
  bool v27;
  __int64 v28;
  __int64* v29;
  float* v30;
  __int64 v31;
  int32x4_t v32;
  int32x4_t v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  float* v38;
  __int64 v39;
  __int64* v40;
  int v41;
  int32x4_t* v42;
  __int64* v43;
  __int64 v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  __int64 k;
  __int64 v50;
  float32x4x2_t v51;

  v5 = result + 0x2000;
  v8 = result;
  if (a2 != 5) {
    if (a2 == 8) {
      if (a4 >= 1) {
        for (i = (unsigned int)a4; i != 0; --i) {
          v10 = *a5++;
          result = SdkRoutine_672c50(v8, a3++, v10);
        }
      }
      return result;
    }
    v21 = *(unsigned int**)(result + 11240);
    v22 = 2 * a4 + 4;
    if ((unsigned __int64)&v21[v22] > *(_QWORD*)(result + 11248)) {
      v23 = a2;
      v24 = a4;
      result = SdkRoutine_64b750(result + 11240, *(_QWORD*)(result + 11240),
                                 4LL * (*(_DWORD*)(result + 11344) + v22));
      v21 = *(unsigned int**)(v8 + 11240);
      a2 = v23;
      a4 = v24;
    }
    *v21 = (SdkData_bb00b0[a2] << 16) | 0x80000E1C;
    v25 = v21 + 1;
    if ((*(_BYTE*)(v5 + 3067) & 8) != 0) {
      v25 = v21 + 2;
      v21[1] = -2147481973;
    }
    v26 = (float*)(v25 + 2);
    *v25 = ((a4 & 0xFFF) << 17) | 0xA00108E3;
    v25[1] = 8 * a3 + 360;
    if (a4 < 1) {
      *(_QWORD*)(v8 + 11240) = v26;
      return result;
    }
    if ((unsigned int)a4 >= 8 &&
        (v26 < (float*)&a5[a4] ? (v27 = a5 >= (__int64*)&v25[2 * a4 + 2])
                               : (v27 = true),
         v27)) {
      v28 = a4 & 0x7FFFFFFC;
      v29 = a5;
      v30 = &v26[2 * v28];
      v25 += 2 * v28;
      v31 = v28;
      do {
        v33 = *(int32x4_t*)v29;
        v32 = *((int32x4_t*)v29 + 1);
        v29 += 4;
        v31 -= 4;
        v51.val[0] = vuzp1q_s32(v33, v32);
        v51.val[1] = vuzp2q_s32(v33, v32);
        vst2q_f32(v26, v51);
        v26 += 8;
      } while (v31 != 0);
      if (v28 == a4) {
      LABEL_48:
        *(_QWORD*)(v8 + 11240) = v30;
        return result;
      }
    }
    else {
      v28 = 0;
      v30 = (float*)(v25 + 2);
    }
    v35 = (a4 - (int)v28) & 7LL;
    if (v35 != 0) {
      v36 = v28;
      do {
        v37 = &a5[v36];
        v38 = v30;
        ++v36;
        --v35;
        *(_DWORD*)v30 = *v37;
        v30 += 2;
        v25[3] = *((_DWORD*)v37 + 1);
        v25 = (unsigned int*)v38;
      } while (v35 != 0);
      v25 = (unsigned int*)(v30 - 2);
    }
    else {
      v36 = v28;
    }
    if (v28 - (unsigned __int64)(unsigned int)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v39 = (unsigned int)a4 - v36;
      v40 = &a5[v36 + 4];
      do {
        v39 -= 8;
        *(_DWORD*)v30 = *(v40 - 4);
        v25[3] = *((_DWORD*)v40 - 7);
        *((_DWORD*)v30 + 2) = *(v40 - 3);
        v30[3] = *((float*)v40 - 5);
        *((_DWORD*)v30 + 4) = *(v40 - 2);
        v30[5] = *((float*)v40 - 3);
        *((_DWORD*)v30 + 6) = *(v40 - 1);
        v30[7] = *((float*)v40 - 1);
        *((_DWORD*)v30 + 8) = *v40;
        v30[9] = *((float*)v40 + 1);
        *((_DWORD*)v30 + 10) = v40[1];
        v30[11] = *((float*)v40 + 3);
        *((_DWORD*)v30 + 12) = v40[2];
        v30[13] = *((float*)v40 + 5);
        *((_DWORD*)v30 + 14) = v40[3];
        v41 = *((_DWORD*)v40 + 7);
        v25 = (unsigned int*)(v30 + 14);
        v40 += 8;
        *((_DWORD*)v30 + 15) = v41;
        v30 += 16;
      } while (v39 != 0);
    }
    goto LABEL_48;
  }
  if (*(_BYTE*)(result + 11408) != 1) {
    v34 = 0;
    if (a4 < 1) {
      return result;
    }
    goto LABEL_53;
  }
  v11 = *(unsigned int**)(result + 11240);
  if ((unsigned __int64)&v11[a4 + 2] > *(_QWORD*)(result + 11248)) {
    v12 = a4;
    result = SdkRoutine_64b750(
        result + 11240, (__int64)v11,
        4LL * (unsigned int)(*(_DWORD*)(result + 11344) + a4 + 2));
    v11 = *(unsigned int**)(v8 + 11240);
    a4 = v12;
  }
  *v11 = ((a4 << 16) + 0x10000) & 0x1FFF0000 | 0xA0002EA6;
  v11[1] = (a4 << 16) | (a3 + 668);
  v13 = (__int64*)(v11 + 2);
  if (a4 >= 1) {
    if ((unsigned int)a4 >= 0xC &&
        (v13 >= &a5[a4] || a5 >= (__int64*)&v11[a4 + 2])) {
      v14 = a4 & 0x7FFFFFF8;
      v42 = (int32x4_t*)(v11 + 6);
      v43 = a5 + 4;
      v13 = (__int64*)((char*)v13 + 4 * v14);
      v44 = v14;
      do {
        v46 = *((int32x4_t*)v43 - 2);
        v45 = *((int32x4_t*)v43 - 1);
        v48 = *(int32x4_t*)v43;
        v47 = *((int32x4_t*)v43 + 1);
        v43 += 8;
        v44 -= 8;
        v42[-1] = vuzp1q_s32(v46, v45);
        *v42 = vuzp1q_s32(v48, v47);
        v42 += 2;
      } while (v44 != 0);
      if (v14 == a4) {
        goto LABEL_52;
      }
    }
    else {
      v14 = 0;
    }
    v15 = a4 & 7;
    for (j = v14; v15 != 0; v13 = (__int64*)((char*)v13 + 4)) {
      v17 = a5[j++];
      --v15;
      *(_DWORD*)v13 = v17;
    }
    if (v14 - (unsigned __int64)(unsigned int)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v18 = (unsigned int)a4 - j;
      v19 = &a5[j + 4];
      do {
        v18 -= 8;
        *(_DWORD*)v13 = *(v19 - 4);
        *((_DWORD*)v13 + 1) = *(v19 - 3);
        *((_DWORD*)v13 + 2) = *(v19 - 2);
        *((_DWORD*)v13 + 3) = *(v19 - 1);
        *((_DWORD*)v13 + 4) = *v19;
        *((_DWORD*)v13 + 5) = v19[1];
        *((_DWORD*)v13 + 6) = v19[2];
        v20 = v19[3];
        v19 += 8;
        *((_DWORD*)v13 + 7) = v20;
        v13 += 4;
      } while (v18 != 0);
    }
  }
LABEL_52:
  *(_QWORD*)(v8 + 11240) = v13;
  v34 = *(_BYTE*)(v5 + 3216);
  if (a4 < 1) {
    return result;
  }
LABEL_53:
  if ((v34 & 1) == 0) {
    for (k = (unsigned int)a4; k != 0; --k) {
      v50 = *a5++;
      result = SdkRoutine_686170(v8, a3++, v50);
    }
  }
  return result;
}

__int64 nn_67d760(__int64 result, int a2, int a3, unsigned int a4,
                  int32x4_t* a5)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned int* v10;
  unsigned int v11;
  unsigned __int32* v12;
  __int64 v13;
  __int64 v14;
  __int64 i;
  __int64 v16;
  __int64 v17;
  unsigned __int64* v18;
  unsigned __int64 v19;
  unsigned int v20;
  unsigned int* v21;
  int v22;
  unsigned int v23;
  unsigned int* v24;
  float* v25;
  bool v26;
  __int64 v27;
  int32x4_t* v28;
  float* v29;
  __int64 v30;
  int32x4_t v31;
  int32x4_t v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64* v35;
  float* v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int32x4_t* v40;
  int32x4_t* v41;
  __int64 v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  float32x4x2_t v50;

  v7 = result;
  if (a2 != 5) {
    if (a2 == 8) {
      if ((int)a4 >= 1) {
        v8 = a4;
        do {
          result = (__int64)nvidia_64ac60((_QWORD*)v7, &v49, 0x10u);
          --v8;
          *(_BYTE*)v49 = 72;
          *(_DWORD*)(v49 + 4) = a3++;
          v9 = LANES128(*(a5)).n128_u64[0];
          a5 = (int32x4_t*)((char*)a5 + 8);
          *(_QWORD*)(v49 + 8) = v9;
        } while (v8 != 0);
      }
      return result;
    }
    v20 = 2 * a4 + 4;
    v21 = *(unsigned int**)result;
    if (*(_QWORD*)result + 4 * (unsigned __int64)v20 > *(_QWORD*)(result + 8)) {
      v22 = a2;
      v23 = a4;
      result = SdkRoutine_64b750(result, *(_QWORD*)result,
                                 4LL * (*(_DWORD*)(result + 104) + v20));
      v21 = *(unsigned int**)v7;
      a2 = v22;
      a4 = v23;
    }
    *v21 = (SdkData_bb00b0[a2] << 16) | 0x80000E1C;
    v24 = v21 + 1;
    if ((*(_BYTE*)(v7 + 19) & 8) != 0) {
      v24 = v21 + 2;
      v21[1] = -2147481973;
    }
    v25 = (float*)(v24 + 2);
    *v24 = ((a4 & 0xFFF) << 17) | 0xA00108E3;
    v24[1] = 8 * a3 + 1384;
    if ((int)a4 < 1) {
      *(_QWORD*)v7 = v25;
      return result;
    }
    if (a4 >= 8 && (v25 < &LANES128(*(a5)).n128_f32[2 * a4]
                        ? (v26 = a5 >= (int32x4_t*)&v24[2 * a4 + 2])
                        : (v26 = true),
                    v26)) {
      v27 = a4 & 0x7FFFFFFC;
      v28 = a5;
      v29 = &v25[2 * v27];
      v24 += 2 * v27;
      v30 = v27;
      do {
        v32 = *v28;
        v31 = v28[1];
        v28 += 2;
        v30 -= 4;
        v50.val[0] = vuzp1q_s32(v32, v31);
        v50.val[1] = vuzp2q_s32(v32, v31);
        vst2q_f32(v25, v50);
        v25 += 8;
      } while (v30 != 0);
      if (v27 == a4) {
      LABEL_46:
        *(_QWORD*)v7 = v29;
        return result;
      }
    }
    else {
      v27 = 0;
      v29 = (float*)(v24 + 2);
    }
    v33 = (a4 - (unsigned int)v27) & 7LL;
    if (v33 != 0) {
      v34 = v27;
      do {
        v35 = &LANES128(*(a5)).n128_u64[v34];
        v36 = v29;
        ++v34;
        --v33;
        *(_DWORD*)v29 = *v35;
        v29 += 2;
        v24[3] = *((_DWORD*)v35 + 1);
        v24 = (unsigned int*)v36;
      } while (v33 != 0);
      v24 = (unsigned int*)(v29 - 2);
    }
    else {
      v34 = v27;
    }
    if (v27 - (unsigned __int64)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v37 = a4 - v34;
      v38 = (__int64)&LANES128(a5[2]).n128_i64[v34];
      do {
        v37 -= 8;
        *(_DWORD*)v29 = *(_QWORD*)(v38 - 32);
        v24[3] = *(_DWORD*)(v38 - 28);
        *((_DWORD*)v29 + 2) = *(_QWORD*)(v38 - 24);
        v29[3] = *(float*)(v38 - 20);
        *((_DWORD*)v29 + 4) = *(_QWORD*)(v38 - 16);
        v29[5] = *(float*)(v38 - 12);
        *((_DWORD*)v29 + 6) = *(_QWORD*)(v38 - 8);
        v29[7] = *(float*)(v38 - 4);
        *((_DWORD*)v29 + 8) = *(_QWORD*)v38;
        v29[9] = *(float*)(v38 + 4);
        *((_DWORD*)v29 + 10) = *(_QWORD*)(v38 + 8);
        v29[11] = *(float*)(v38 + 12);
        *((_DWORD*)v29 + 12) = *(_QWORD*)(v38 + 16);
        v29[13] = *(float*)(v38 + 20);
        *((_DWORD*)v29 + 14) = *(_QWORD*)(v38 + 24);
        v39 = *(_DWORD*)(v38 + 28);
        v24 = (unsigned int*)(v29 + 14);
        v38 += 64;
        *((_DWORD*)v29 + 15) = v39;
        v29 += 16;
      } while (v37 != 0);
    }
    goto LABEL_46;
  }
  if (*(_BYTE*)(result + 168) == 1) {
    v10 = *(unsigned int**)result;
    if (*(_QWORD*)result + 4 * (unsigned __int64)(a4 + 2) >
        *(_QWORD*)(result + 8)) {
      v11 = a4;
      result = SdkRoutine_64b750(result, (__int64)v10,
                                 4LL * (*(_DWORD*)(result + 104) + a4 + 2));
      v10 = *(unsigned int**)v7;
      a4 = v11;
    }
    *v10 = ((a4 << 16) + 0x10000) & 0x1FFF0000 | 0xA0002EA6;
    v10[1] = (a4 << 16) | (a3 + 796);
    v12 = v10 + 2;
    if ((int)a4 >= 1) {
      if (a4 >= 0xC && (v12 >= &LANES128(*(a5)).n128_u32[2 * a4] ||
                        a5 >= (int32x4_t*)&v10[a4 + 2])) {
        v13 = a4 & 0x7FFFFFF8;
        v40 = (int32x4_t*)(v10 + 6);
        v41 = a5 + 2;
        v12 += v13;
        v42 = v13;
        do {
          v44 = v41[-2];
          v43 = v41[-1];
          v46 = *v41;
          v45 = v41[1];
          v41 += 4;
          v42 -= 8;
          v40[-1] = vuzp1q_s32(v44, v43);
          *v40 = vuzp1q_s32(v46, v45);
          v40 += 2;
        } while (v42 != 0);
        if (v13 == a4) {
          goto LABEL_50;
        }
      }
      else {
        v13 = 0;
      }
      v14 = a4 & 7;
      for (i = v13; v14 != 0; ++v12) {
        v16 = LANES128(*(a5)).n128_i64[i++];
        --v14;
        *v12 = v16;
      }
      if (v13 - (unsigned __int64)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
        v17 = a4 - i;
        v18 = &LANES128(a5[2]).n128_u64[i];
        do {
          v17 -= 8;
          *v12 = *(v18 - 4);
          v12[1] = *(v18 - 3);
          v12[2] = *(v18 - 2);
          v12[3] = *(v18 - 1);
          v12[4] = *v18;
          v12[5] = v18[1];
          v12[6] = v18[2];
          v19 = v18[3];
          v18 += 8;
          v12[7] = v19;
          v12 += 8;
        } while (v17 != 0);
      }
    }
  LABEL_50:
    *(_QWORD*)v7 = v12;
    if ((*(_BYTE*)(v7 + 168) & 1) != 0) {
      return result;
    }
  }
  if ((int)a4 >= 1) {
    v47 = a4;
    do {
      result = (__int64)nvidia_64ac60((_QWORD*)v7, &v49, 0x10u);
      --v47;
      *(_BYTE*)v49 = 11;
      *(_DWORD*)(v49 + 4) = a3++;
      v48 = LANES128(*(a5)).n128_u64[0];
      a5 = (int32x4_t*)((char*)a5 + 8);
      *(_QWORD*)(v49 + 8) = v48;
    } while (v47 != 0);
  }
  return result;
}

__int64 nn_67dc60(__int64 result, int a2, int a3, int a4, __int64* a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v8;
  __int64 i;
  __int64 v10;
  unsigned int* v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 j;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  unsigned int* v21;
  unsigned int v22;
  int v23;
  int v24;
  unsigned int* v25;
  float* v26;
  bool v27;
  __int64 v28;
  __int64* v29;
  float* v30;
  __int64 v31;
  int32x4_t v32;
  int32x4_t v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  float* v38;
  __int64 v39;
  __int64* v40;
  int v41;
  int32x4_t* v42;
  __int64* v43;
  __int64 v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  __int64 k;
  __int64 v50;
  float32x4x2_t v51;

  v5 = result + 0x2000;
  v8 = result;
  if (a2 != 5) {
    if (a2 == 8) {
      if (a4 >= 1) {
        for (i = (unsigned int)a4; i != 0; --i) {
          v10 = *a5++;
          result = SdkRoutine_672c60(v8, a3++, v10);
        }
      }
      return result;
    }
    v21 = *(unsigned int**)(result + 11240);
    v22 = 2 * a4 + 4;
    if ((unsigned __int64)&v21[v22] > *(_QWORD*)(result + 11248)) {
      v23 = a2;
      v24 = a4;
      result = SdkRoutine_64b750(result + 11240, *(_QWORD*)(result + 11240),
                                 4LL * (*(_DWORD*)(result + 11344) + v22));
      v21 = *(unsigned int**)(v8 + 11240);
      a2 = v23;
      a4 = v24;
    }
    *v21 = (SdkData_bb00b0[a2] << 16) | 0x80000E1C;
    v25 = v21 + 1;
    if ((*(_BYTE*)(v5 + 3067) & 8) != 0) {
      v25 = v21 + 2;
      v21[1] = -2147481973;
    }
    v26 = (float*)(v25 + 2);
    *v25 = ((a4 & 0xFFF) << 17) | 0xA00108E3;
    v25[1] = 8 * a3 + 1384;
    if (a4 < 1) {
      *(_QWORD*)(v8 + 11240) = v26;
      return result;
    }
    if ((unsigned int)a4 >= 8 &&
        (v26 < (float*)&a5[a4] ? (v27 = a5 >= (__int64*)&v25[2 * a4 + 2])
                               : (v27 = true),
         v27)) {
      v28 = a4 & 0x7FFFFFFC;
      v29 = a5;
      v30 = &v26[2 * v28];
      v25 += 2 * v28;
      v31 = v28;
      do {
        v33 = *(int32x4_t*)v29;
        v32 = *((int32x4_t*)v29 + 1);
        v29 += 4;
        v31 -= 4;
        v51.val[0] = vuzp1q_s32(v33, v32);
        v51.val[1] = vuzp2q_s32(v33, v32);
        vst2q_f32(v26, v51);
        v26 += 8;
      } while (v31 != 0);
      if (v28 == a4) {
      LABEL_48:
        *(_QWORD*)(v8 + 11240) = v30;
        return result;
      }
    }
    else {
      v28 = 0;
      v30 = (float*)(v25 + 2);
    }
    v35 = (a4 - (int)v28) & 7LL;
    if (v35 != 0) {
      v36 = v28;
      do {
        v37 = &a5[v36];
        v38 = v30;
        ++v36;
        --v35;
        *(_DWORD*)v30 = *v37;
        v30 += 2;
        v25[3] = *((_DWORD*)v37 + 1);
        v25 = (unsigned int*)v38;
      } while (v35 != 0);
      v25 = (unsigned int*)(v30 - 2);
    }
    else {
      v36 = v28;
    }
    if (v28 - (unsigned __int64)(unsigned int)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v39 = (unsigned int)a4 - v36;
      v40 = &a5[v36 + 4];
      do {
        v39 -= 8;
        *(_DWORD*)v30 = *(v40 - 4);
        v25[3] = *((_DWORD*)v40 - 7);
        *((_DWORD*)v30 + 2) = *(v40 - 3);
        v30[3] = *((float*)v40 - 5);
        *((_DWORD*)v30 + 4) = *(v40 - 2);
        v30[5] = *((float*)v40 - 3);
        *((_DWORD*)v30 + 6) = *(v40 - 1);
        v30[7] = *((float*)v40 - 1);
        *((_DWORD*)v30 + 8) = *v40;
        v30[9] = *((float*)v40 + 1);
        *((_DWORD*)v30 + 10) = v40[1];
        v30[11] = *((float*)v40 + 3);
        *((_DWORD*)v30 + 12) = v40[2];
        v30[13] = *((float*)v40 + 5);
        *((_DWORD*)v30 + 14) = v40[3];
        v41 = *((_DWORD*)v40 + 7);
        v25 = (unsigned int*)(v30 + 14);
        v40 += 8;
        *((_DWORD*)v30 + 15) = v41;
        v30 += 16;
      } while (v39 != 0);
    }
    goto LABEL_48;
  }
  if (*(_BYTE*)(result + 11408) != 1) {
    v34 = 0;
    if (a4 < 1) {
      return result;
    }
    goto LABEL_53;
  }
  v11 = *(unsigned int**)(result + 11240);
  if ((unsigned __int64)&v11[a4 + 2] > *(_QWORD*)(result + 11248)) {
    v12 = a4;
    result = SdkRoutine_64b750(
        result + 11240, (__int64)v11,
        4LL * (unsigned int)(*(_DWORD*)(result + 11344) + a4 + 2));
    v11 = *(unsigned int**)(v8 + 11240);
    a4 = v12;
  }
  *v11 = ((a4 << 16) + 0x10000) & 0x1FFF0000 | 0xA0002EA6;
  v11[1] = (a4 << 16) | (a3 + 796);
  v13 = (__int64*)(v11 + 2);
  if (a4 >= 1) {
    if ((unsigned int)a4 >= 0xC &&
        (v13 >= &a5[a4] || a5 >= (__int64*)&v11[a4 + 2])) {
      v14 = a4 & 0x7FFFFFF8;
      v42 = (int32x4_t*)(v11 + 6);
      v43 = a5 + 4;
      v13 = (__int64*)((char*)v13 + 4 * v14);
      v44 = v14;
      do {
        v46 = *((int32x4_t*)v43 - 2);
        v45 = *((int32x4_t*)v43 - 1);
        v48 = *(int32x4_t*)v43;
        v47 = *((int32x4_t*)v43 + 1);
        v43 += 8;
        v44 -= 8;
        v42[-1] = vuzp1q_s32(v46, v45);
        *v42 = vuzp1q_s32(v48, v47);
        v42 += 2;
      } while (v44 != 0);
      if (v14 == a4) {
        goto LABEL_52;
      }
    }
    else {
      v14 = 0;
    }
    v15 = a4 & 7;
    for (j = v14; v15 != 0; v13 = (__int64*)((char*)v13 + 4)) {
      v17 = a5[j++];
      --v15;
      *(_DWORD*)v13 = v17;
    }
    if (v14 - (unsigned __int64)(unsigned int)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v18 = (unsigned int)a4 - j;
      v19 = &a5[j + 4];
      do {
        v18 -= 8;
        *(_DWORD*)v13 = *(v19 - 4);
        *((_DWORD*)v13 + 1) = *(v19 - 3);
        *((_DWORD*)v13 + 2) = *(v19 - 2);
        *((_DWORD*)v13 + 3) = *(v19 - 1);
        *((_DWORD*)v13 + 4) = *v19;
        *((_DWORD*)v13 + 5) = v19[1];
        *((_DWORD*)v13 + 6) = v19[2];
        v20 = v19[3];
        v19 += 8;
        *((_DWORD*)v13 + 7) = v20;
        v13 += 4;
      } while (v18 != 0);
    }
  }
LABEL_52:
  *(_QWORD*)(v8 + 11240) = v13;
  v34 = *(_BYTE*)(v5 + 3216);
  if (a4 < 1) {
    return result;
  }
LABEL_53:
  if ((v34 & 1) == 0) {
    for (k = (unsigned int)a4; k != 0; --k) {
      v50 = *a5++;
      result = SdkRoutine_686190(v8, a3++, v50);
    }
  }
  return result;
}

__int64 nn_67e0c0(__int64 result, int a2, int a3, unsigned int a4,
                  int32x4_t* a5)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned int* v10;
  unsigned int v11;
  unsigned __int32* v12;
  __int64 v13;
  __int64 v14;
  __int64 i;
  __int64 v16;
  __int64 v17;
  unsigned __int64* v18;
  unsigned __int64 v19;
  unsigned int v20;
  unsigned int* v21;
  int v22;
  unsigned int v23;
  unsigned int* v24;
  float* v25;
  bool v26;
  __int64 v27;
  int32x4_t* v28;
  float* v29;
  __int64 v30;
  int32x4_t v31;
  int32x4_t v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64* v35;
  float* v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int32x4_t* v40;
  int32x4_t* v41;
  __int64 v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  float32x4x2_t v50;

  v7 = result;
  if (a2 != 5) {
    if (a2 == 8) {
      if ((int)a4 >= 1) {
        v8 = a4;
        do {
          result = (__int64)nvidia_64ac60((_QWORD*)v7, &v49, 0x10u);
          --v8;
          *(_BYTE*)v49 = 70;
          *(_DWORD*)(v49 + 4) = a3++;
          v9 = LANES128(*(a5)).n128_u64[0];
          a5 = (int32x4_t*)((char*)a5 + 8);
          *(_QWORD*)(v49 + 8) = v9;
        } while (v8 != 0);
      }
      return result;
    }
    v20 = 2 * a4 + 4;
    v21 = *(unsigned int**)result;
    if (*(_QWORD*)result + 4 * (unsigned __int64)v20 > *(_QWORD*)(result + 8)) {
      v22 = a2;
      v23 = a4;
      result = SdkRoutine_64b750(result, *(_QWORD*)result,
                                 4LL * (*(_DWORD*)(result + 104) + v20));
      v21 = *(unsigned int**)v7;
      a2 = v22;
      a4 = v23;
    }
    *v21 = (SdkData_bb00b0[a2] << 16) | 0x80000E1C;
    v24 = v21 + 1;
    if ((*(_BYTE*)(v7 + 19) & 8) != 0) {
      v24 = v21 + 2;
      v21[1] = -2147481973;
    }
    v25 = (float*)(v24 + 2);
    *v24 = ((a4 & 0xFFF) << 17) | 0xA00108E3;
    v24[1] = 8 * a3 + 32;
    if ((int)a4 < 1) {
      *(_QWORD*)v7 = v25;
      return result;
    }
    if (a4 >= 8 && (v25 < &LANES128(*(a5)).n128_f32[2 * a4]
                        ? (v26 = a5 >= (int32x4_t*)&v24[2 * a4 + 2])
                        : (v26 = true),
                    v26)) {
      v27 = a4 & 0x7FFFFFFC;
      v28 = a5;
      v29 = &v25[2 * v27];
      v24 += 2 * v27;
      v30 = v27;
      do {
        v32 = *v28;
        v31 = v28[1];
        v28 += 2;
        v30 -= 4;
        v50.val[0] = vuzp1q_s32(v32, v31);
        v50.val[1] = vuzp2q_s32(v32, v31);
        vst2q_f32(v25, v50);
        v25 += 8;
      } while (v30 != 0);
      if (v27 == a4) {
      LABEL_46:
        *(_QWORD*)v7 = v29;
        return result;
      }
    }
    else {
      v27 = 0;
      v29 = (float*)(v24 + 2);
    }
    v33 = (a4 - (unsigned int)v27) & 7LL;
    if (v33 != 0) {
      v34 = v27;
      do {
        v35 = &LANES128(*(a5)).n128_u64[v34];
        v36 = v29;
        ++v34;
        --v33;
        *(_DWORD*)v29 = *v35;
        v29 += 2;
        v24[3] = *((_DWORD*)v35 + 1);
        v24 = (unsigned int*)v36;
      } while (v33 != 0);
      v24 = (unsigned int*)(v29 - 2);
    }
    else {
      v34 = v27;
    }
    if (v27 - (unsigned __int64)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v37 = a4 - v34;
      v38 = (__int64)&LANES128(a5[2]).n128_i64[v34];
      do {
        v37 -= 8;
        *(_DWORD*)v29 = *(_QWORD*)(v38 - 32);
        v24[3] = *(_DWORD*)(v38 - 28);
        *((_DWORD*)v29 + 2) = *(_QWORD*)(v38 - 24);
        v29[3] = *(float*)(v38 - 20);
        *((_DWORD*)v29 + 4) = *(_QWORD*)(v38 - 16);
        v29[5] = *(float*)(v38 - 12);
        *((_DWORD*)v29 + 6) = *(_QWORD*)(v38 - 8);
        v29[7] = *(float*)(v38 - 4);
        *((_DWORD*)v29 + 8) = *(_QWORD*)v38;
        v29[9] = *(float*)(v38 + 4);
        *((_DWORD*)v29 + 10) = *(_QWORD*)(v38 + 8);
        v29[11] = *(float*)(v38 + 12);
        *((_DWORD*)v29 + 12) = *(_QWORD*)(v38 + 16);
        v29[13] = *(float*)(v38 + 20);
        *((_DWORD*)v29 + 14) = *(_QWORD*)(v38 + 24);
        v39 = *(_DWORD*)(v38 + 28);
        v24 = (unsigned int*)(v29 + 14);
        v38 += 64;
        *((_DWORD*)v29 + 15) = v39;
        v29 += 16;
      } while (v37 != 0);
    }
    goto LABEL_46;
  }
  if (*(_BYTE*)(result + 168) == 1) {
    v10 = *(unsigned int**)result;
    if (*(_QWORD*)result + 4 * (unsigned __int64)(a4 + 2) >
        *(_QWORD*)(result + 8)) {
      v11 = a4;
      result = SdkRoutine_64b750(result, (__int64)v10,
                                 4LL * (*(_DWORD*)(result + 104) + a4 + 2));
      v10 = *(unsigned int**)v7;
      a4 = v11;
    }
    *v10 = ((a4 << 16) + 0x10000) & 0x1FFF0000 | 0xA0002EA6;
    v10[1] = (a4 << 16) | (a3 + 636);
    v12 = v10 + 2;
    if ((int)a4 >= 1) {
      if (a4 >= 0xC && (v12 >= &LANES128(*(a5)).n128_u32[2 * a4] ||
                        a5 >= (int32x4_t*)&v10[a4 + 2])) {
        v13 = a4 & 0x7FFFFFF8;
        v40 = (int32x4_t*)(v10 + 6);
        v41 = a5 + 2;
        v12 += v13;
        v42 = v13;
        do {
          v44 = v41[-2];
          v43 = v41[-1];
          v46 = *v41;
          v45 = v41[1];
          v41 += 4;
          v42 -= 8;
          v40[-1] = vuzp1q_s32(v44, v43);
          *v40 = vuzp1q_s32(v46, v45);
          v40 += 2;
        } while (v42 != 0);
        if (v13 == a4) {
          goto LABEL_50;
        }
      }
      else {
        v13 = 0;
      }
      v14 = a4 & 7;
      for (i = v13; v14 != 0; ++v12) {
        v16 = LANES128(*(a5)).n128_i64[i++];
        --v14;
        *v12 = v16;
      }
      if (v13 - (unsigned __int64)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
        v17 = a4 - i;
        v18 = &LANES128(a5[2]).n128_u64[i];
        do {
          v17 -= 8;
          *v12 = *(v18 - 4);
          v12[1] = *(v18 - 3);
          v12[2] = *(v18 - 2);
          v12[3] = *(v18 - 1);
          v12[4] = *v18;
          v12[5] = v18[1];
          v12[6] = v18[2];
          v19 = v18[3];
          v18 += 8;
          v12[7] = v19;
          v12 += 8;
        } while (v17 != 0);
      }
    }
  LABEL_50:
    *(_QWORD*)v7 = v12;
    if ((*(_BYTE*)(v7 + 168) & 1) != 0) {
      return result;
    }
  }
  if ((int)a4 >= 1) {
    v47 = a4;
    do {
      result = (__int64)nvidia_64ac60((_QWORD*)v7, &v49, 0x10u);
      --v47;
      *(_BYTE*)v49 = 9;
      *(_DWORD*)(v49 + 4) = a3++;
      v48 = LANES128(*(a5)).n128_u64[0];
      a5 = (int32x4_t*)((char*)a5 + 8);
      *(_QWORD*)(v49 + 8) = v48;
    } while (v47 != 0);
  }
  return result;
}

__int64 nn_67e5c0(__int64 result, int a2, int a3, int a4, __int64* a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v8;
  __int64 i;
  __int64 v10;
  unsigned int* v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 j;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  unsigned int* v21;
  unsigned int v22;
  int v23;
  int v24;
  unsigned int* v25;
  float* v26;
  bool v27;
  __int64 v28;
  __int64* v29;
  float* v30;
  __int64 v31;
  int32x4_t v32;
  int32x4_t v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  float* v38;
  __int64 v39;
  __int64* v40;
  int v41;
  int32x4_t* v42;
  __int64* v43;
  __int64 v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  __int64 k;
  __int64 v50;
  float32x4x2_t v51;

  v5 = result + 0x2000;
  v8 = result;
  if (a2 != 5) {
    if (a2 == 8) {
      if (a4 >= 1) {
        for (i = (unsigned int)a4; i != 0; --i) {
          v10 = *a5++;
          result = SdkRoutine_672c40(v8, a3++, v10);
        }
      }
      return result;
    }
    v21 = *(unsigned int**)(result + 11240);
    v22 = 2 * a4 + 4;
    if ((unsigned __int64)&v21[v22] > *(_QWORD*)(result + 11248)) {
      v23 = a2;
      v24 = a4;
      result = SdkRoutine_64b750(result + 11240, *(_QWORD*)(result + 11240),
                                 4LL * (*(_DWORD*)(result + 11344) + v22));
      v21 = *(unsigned int**)(v8 + 11240);
      a2 = v23;
      a4 = v24;
    }
    *v21 = (SdkData_bb00b0[a2] << 16) | 0x80000E1C;
    v25 = v21 + 1;
    if ((*(_BYTE*)(v5 + 3067) & 8) != 0) {
      v25 = v21 + 2;
      v21[1] = -2147481973;
    }
    v26 = (float*)(v25 + 2);
    *v25 = ((a4 & 0xFFF) << 17) | 0xA00108E3;
    v25[1] = 8 * a3 + 32;
    if (a4 < 1) {
      *(_QWORD*)(v8 + 11240) = v26;
      return result;
    }
    if ((unsigned int)a4 >= 8 &&
        (v26 < (float*)&a5[a4] ? (v27 = a5 >= (__int64*)&v25[2 * a4 + 2])
                               : (v27 = true),
         v27)) {
      v28 = a4 & 0x7FFFFFFC;
      v29 = a5;
      v30 = &v26[2 * v28];
      v25 += 2 * v28;
      v31 = v28;
      do {
        v33 = *(int32x4_t*)v29;
        v32 = *((int32x4_t*)v29 + 1);
        v29 += 4;
        v31 -= 4;
        v51.val[0] = vuzp1q_s32(v33, v32);
        v51.val[1] = vuzp2q_s32(v33, v32);
        vst2q_f32(v26, v51);
        v26 += 8;
      } while (v31 != 0);
      if (v28 == a4) {
      LABEL_48:
        *(_QWORD*)(v8 + 11240) = v30;
        return result;
      }
    }
    else {
      v28 = 0;
      v30 = (float*)(v25 + 2);
    }
    v35 = (a4 - (int)v28) & 7LL;
    if (v35 != 0) {
      v36 = v28;
      do {
        v37 = &a5[v36];
        v38 = v30;
        ++v36;
        --v35;
        *(_DWORD*)v30 = *v37;
        v30 += 2;
        v25[3] = *((_DWORD*)v37 + 1);
        v25 = (unsigned int*)v38;
      } while (v35 != 0);
      v25 = (unsigned int*)(v30 - 2);
    }
    else {
      v36 = v28;
    }
    if (v28 - (unsigned __int64)(unsigned int)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v39 = (unsigned int)a4 - v36;
      v40 = &a5[v36 + 4];
      do {
        v39 -= 8;
        *(_DWORD*)v30 = *(v40 - 4);
        v25[3] = *((_DWORD*)v40 - 7);
        *((_DWORD*)v30 + 2) = *(v40 - 3);
        v30[3] = *((float*)v40 - 5);
        *((_DWORD*)v30 + 4) = *(v40 - 2);
        v30[5] = *((float*)v40 - 3);
        *((_DWORD*)v30 + 6) = *(v40 - 1);
        v30[7] = *((float*)v40 - 1);
        *((_DWORD*)v30 + 8) = *v40;
        v30[9] = *((float*)v40 + 1);
        *((_DWORD*)v30 + 10) = v40[1];
        v30[11] = *((float*)v40 + 3);
        *((_DWORD*)v30 + 12) = v40[2];
        v30[13] = *((float*)v40 + 5);
        *((_DWORD*)v30 + 14) = v40[3];
        v41 = *((_DWORD*)v40 + 7);
        v25 = (unsigned int*)(v30 + 14);
        v40 += 8;
        *((_DWORD*)v30 + 15) = v41;
        v30 += 16;
      } while (v39 != 0);
    }
    goto LABEL_48;
  }
  if (*(_BYTE*)(result + 11408) != 1) {
    v34 = 0;
    if (a4 < 1) {
      return result;
    }
    goto LABEL_53;
  }
  v11 = *(unsigned int**)(result + 11240);
  if ((unsigned __int64)&v11[a4 + 2] > *(_QWORD*)(result + 11248)) {
    v12 = a4;
    result = SdkRoutine_64b750(
        result + 11240, (__int64)v11,
        4LL * (unsigned int)(*(_DWORD*)(result + 11344) + a4 + 2));
    v11 = *(unsigned int**)(v8 + 11240);
    a4 = v12;
  }
  *v11 = ((a4 << 16) + 0x10000) & 0x1FFF0000 | 0xA0002EA6;
  v11[1] = (a4 << 16) | (a3 + 636);
  v13 = (__int64*)(v11 + 2);
  if (a4 >= 1) {
    if ((unsigned int)a4 >= 0xC &&
        (v13 >= &a5[a4] || a5 >= (__int64*)&v11[a4 + 2])) {
      v14 = a4 & 0x7FFFFFF8;
      v42 = (int32x4_t*)(v11 + 6);
      v43 = a5 + 4;
      v13 = (__int64*)((char*)v13 + 4 * v14);
      v44 = v14;
      do {
        v46 = *((int32x4_t*)v43 - 2);
        v45 = *((int32x4_t*)v43 - 1);
        v48 = *(int32x4_t*)v43;
        v47 = *((int32x4_t*)v43 + 1);
        v43 += 8;
        v44 -= 8;
        v42[-1] = vuzp1q_s32(v46, v45);
        *v42 = vuzp1q_s32(v48, v47);
        v42 += 2;
      } while (v44 != 0);
      if (v14 == a4) {
        goto LABEL_52;
      }
    }
    else {
      v14 = 0;
    }
    v15 = a4 & 7;
    for (j = v14; v15 != 0; v13 = (__int64*)((char*)v13 + 4)) {
      v17 = a5[j++];
      --v15;
      *(_DWORD*)v13 = v17;
    }
    if (v14 - (unsigned __int64)(unsigned int)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v18 = (unsigned int)a4 - j;
      v19 = &a5[j + 4];
      do {
        v18 -= 8;
        *(_DWORD*)v13 = *(v19 - 4);
        *((_DWORD*)v13 + 1) = *(v19 - 3);
        *((_DWORD*)v13 + 2) = *(v19 - 2);
        *((_DWORD*)v13 + 3) = *(v19 - 1);
        *((_DWORD*)v13 + 4) = *v19;
        *((_DWORD*)v13 + 5) = v19[1];
        *((_DWORD*)v13 + 6) = v19[2];
        v20 = v19[3];
        v19 += 8;
        *((_DWORD*)v13 + 7) = v20;
        v13 += 4;
      } while (v18 != 0);
    }
  }
LABEL_52:
  *(_QWORD*)(v8 + 11240) = v13;
  v34 = *(_BYTE*)(v5 + 3216);
  if (a4 < 1) {
    return result;
  }
LABEL_53:
  if ((v34 & 1) == 0) {
    for (k = (unsigned int)a4; k != 0; --k) {
      v50 = *a5++;
      result = SdkRoutine_686150(v8, a3++, v50);
    }
  }
  return result;
}

__int64 nn_67eba0(__int64 result, int a2, int a3, unsigned int a4,
                  int32x4_t* a5)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned int* v10;
  unsigned int v11;
  unsigned __int32* v12;
  __int64 v13;
  __int64 v14;
  __int64 i;
  __int64 v16;
  __int64 v17;
  unsigned __int64* v18;
  unsigned __int64 v19;
  unsigned int v20;
  unsigned int* v21;
  int v22;
  unsigned int v23;
  unsigned int* v24;
  float* v25;
  bool v26;
  __int64 v27;
  int32x4_t* v28;
  float* v29;
  __int64 v30;
  int32x4_t v31;
  int32x4_t v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64* v35;
  float* v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int32x4_t* v40;
  int32x4_t* v41;
  __int64 v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  float32x4x2_t v50;

  v7 = result;
  if (a2 != 5) {
    if (a2 == 8) {
      if ((int)a4 >= 1) {
        v8 = a4;
        do {
          result = (__int64)nvidia_64ac60((_QWORD*)v7, &v49, 0x10u);
          --v8;
          *(_BYTE*)v49 = 73;
          *(_DWORD*)(v49 + 4) = a3++;
          v9 = LANES128(*(a5)).n128_u64[0];
          a5 = (int32x4_t*)((char*)a5 + 8);
          *(_QWORD*)(v49 + 8) = v9;
        } while (v8 != 0);
      }
      return result;
    }
    v20 = 2 * a4 + 4;
    v21 = *(unsigned int**)result;
    if (*(_QWORD*)result + 4 * (unsigned __int64)v20 > *(_QWORD*)(result + 8)) {
      v22 = a2;
      v23 = a4;
      result = SdkRoutine_64b750(result, *(_QWORD*)result,
                                 4LL * (*(_DWORD*)(result + 104) + v20));
      v21 = *(unsigned int**)v7;
      a2 = v22;
      a4 = v23;
    }
    *v21 = (SdkData_bb00b0[a2] << 16) | 0x80000E1C;
    v24 = v21 + 1;
    if ((*(_BYTE*)(v7 + 19) & 8) != 0) {
      v24 = v21 + 2;
      v21[1] = -2147481973;
    }
    v25 = (float*)(v24 + 2);
    *v24 = ((a4 & 0xFFF) << 17) | 0xA00108E3;
    v24[1] = 8 * a3 + 288;
    if ((int)a4 < 1) {
      *(_QWORD*)v7 = v25;
      return result;
    }
    if (a4 >= 8 && (v25 < &LANES128(*(a5)).n128_f32[2 * a4]
                        ? (v26 = a5 >= (int32x4_t*)&v24[2 * a4 + 2])
                        : (v26 = true),
                    v26)) {
      v27 = a4 & 0x7FFFFFFC;
      v28 = a5;
      v29 = &v25[2 * v27];
      v24 += 2 * v27;
      v30 = v27;
      do {
        v32 = *v28;
        v31 = v28[1];
        v28 += 2;
        v30 -= 4;
        v50.val[0] = vuzp1q_s32(v32, v31);
        v50.val[1] = vuzp2q_s32(v32, v31);
        vst2q_f32(v25, v50);
        v25 += 8;
      } while (v30 != 0);
      if (v27 == a4) {
      LABEL_46:
        *(_QWORD*)v7 = v29;
        return result;
      }
    }
    else {
      v27 = 0;
      v29 = (float*)(v24 + 2);
    }
    v33 = (a4 - (unsigned int)v27) & 7LL;
    if (v33 != 0) {
      v34 = v27;
      do {
        v35 = &LANES128(*(a5)).n128_u64[v34];
        v36 = v29;
        ++v34;
        --v33;
        *(_DWORD*)v29 = *v35;
        v29 += 2;
        v24[3] = *((_DWORD*)v35 + 1);
        v24 = (unsigned int*)v36;
      } while (v33 != 0);
      v24 = (unsigned int*)(v29 - 2);
    }
    else {
      v34 = v27;
    }
    if (v27 - (unsigned __int64)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v37 = a4 - v34;
      v38 = (__int64)&LANES128(a5[2]).n128_i64[v34];
      do {
        v37 -= 8;
        *(_DWORD*)v29 = *(_QWORD*)(v38 - 32);
        v24[3] = *(_DWORD*)(v38 - 28);
        *((_DWORD*)v29 + 2) = *(_QWORD*)(v38 - 24);
        v29[3] = *(float*)(v38 - 20);
        *((_DWORD*)v29 + 4) = *(_QWORD*)(v38 - 16);
        v29[5] = *(float*)(v38 - 12);
        *((_DWORD*)v29 + 6) = *(_QWORD*)(v38 - 8);
        v29[7] = *(float*)(v38 - 4);
        *((_DWORD*)v29 + 8) = *(_QWORD*)v38;
        v29[9] = *(float*)(v38 + 4);
        *((_DWORD*)v29 + 10) = *(_QWORD*)(v38 + 8);
        v29[11] = *(float*)(v38 + 12);
        *((_DWORD*)v29 + 12) = *(_QWORD*)(v38 + 16);
        v29[13] = *(float*)(v38 + 20);
        *((_DWORD*)v29 + 14) = *(_QWORD*)(v38 + 24);
        v39 = *(_DWORD*)(v38 + 28);
        v24 = (unsigned int*)(v29 + 14);
        v38 += 64;
        *((_DWORD*)v29 + 15) = v39;
        v29 += 16;
      } while (v37 != 0);
    }
    goto LABEL_46;
  }
  if (*(_BYTE*)(result + 168) == 1) {
    v10 = *(unsigned int**)result;
    if (*(_QWORD*)result + 4 * (unsigned __int64)(a4 + 2) >
        *(_QWORD*)(result + 8)) {
      v11 = a4;
      result = SdkRoutine_64b750(result, (__int64)v10,
                                 4LL * (*(_DWORD*)(result + 104) + a4 + 2));
      v10 = *(unsigned int**)v7;
      a4 = v11;
    }
    *v10 = ((a4 << 16) + 0x10000) & 0x1FFF0000 | 0xA0002EA6;
    v10[1] = (a4 << 16) | (a3 + 860);
    v12 = v10 + 2;
    if ((int)a4 >= 1) {
      if (a4 >= 0xC && (v12 >= &LANES128(*(a5)).n128_u32[2 * a4] ||
                        a5 >= (int32x4_t*)&v10[a4 + 2])) {
        v13 = a4 & 0x7FFFFFF8;
        v40 = (int32x4_t*)(v10 + 6);
        v41 = a5 + 2;
        v12 += v13;
        v42 = v13;
        do {
          v44 = v41[-2];
          v43 = v41[-1];
          v46 = *v41;
          v45 = v41[1];
          v41 += 4;
          v42 -= 8;
          v40[-1] = vuzp1q_s32(v44, v43);
          *v40 = vuzp1q_s32(v46, v45);
          v40 += 2;
        } while (v42 != 0);
        if (v13 == a4) {
          goto LABEL_50;
        }
      }
      else {
        v13 = 0;
      }
      v14 = a4 & 7;
      for (i = v13; v14 != 0; ++v12) {
        v16 = LANES128(*(a5)).n128_i64[i++];
        --v14;
        *v12 = v16;
      }
      if (v13 - (unsigned __int64)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
        v17 = a4 - i;
        v18 = &LANES128(a5[2]).n128_u64[i];
        do {
          v17 -= 8;
          *v12 = *(v18 - 4);
          v12[1] = *(v18 - 3);
          v12[2] = *(v18 - 2);
          v12[3] = *(v18 - 1);
          v12[4] = *v18;
          v12[5] = v18[1];
          v12[6] = v18[2];
          v19 = v18[3];
          v18 += 8;
          v12[7] = v19;
          v12 += 8;
        } while (v17 != 0);
      }
    }
  LABEL_50:
    *(_QWORD*)v7 = v12;
    if ((*(_BYTE*)(v7 + 168) & 1) != 0) {
      return result;
    }
  }
  if ((int)a4 >= 1) {
    v47 = a4;
    do {
      result = (__int64)nvidia_64ac60((_QWORD*)v7, &v49, 0x10u);
      --v47;
      *(_BYTE*)v49 = 12;
      *(_DWORD*)(v49 + 4) = a3++;
      v48 = LANES128(*(a5)).n128_u64[0];
      a5 = (int32x4_t*)((char*)a5 + 8);
      *(_QWORD*)(v49 + 8) = v48;
    } while (v47 != 0);
  }
  return result;
}

__int64 nn_67f0a0(__int64 result, int a2, int a3, int a4, __int64* a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v8;
  __int64 i;
  __int64 v10;
  unsigned int* v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 j;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  unsigned int* v21;
  unsigned int v22;
  int v23;
  int v24;
  unsigned int* v25;
  float* v26;
  bool v27;
  __int64 v28;
  __int64* v29;
  float* v30;
  __int64 v31;
  int32x4_t v32;
  int32x4_t v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  float* v38;
  __int64 v39;
  __int64* v40;
  int v41;
  int32x4_t* v42;
  __int64* v43;
  __int64 v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  __int64 k;
  __int64 v50;
  float32x4x2_t v51;

  v5 = result + 0x2000;
  v8 = result;
  if (a2 != 5) {
    if (a2 == 8) {
      if (a4 >= 1) {
        for (i = (unsigned int)a4; i != 0; --i) {
          v10 = *a5++;
          result = SdkRoutine_672c70(v8, a3++, v10);
        }
      }
      return result;
    }
    v21 = *(unsigned int**)(result + 11240);
    v22 = 2 * a4 + 4;
    if ((unsigned __int64)&v21[v22] > *(_QWORD*)(result + 11248)) {
      v23 = a2;
      v24 = a4;
      result = SdkRoutine_64b750(result + 11240, *(_QWORD*)(result + 11240),
                                 4LL * (*(_DWORD*)(result + 11344) + v22));
      v21 = *(unsigned int**)(v8 + 11240);
      a2 = v23;
      a4 = v24;
    }
    *v21 = (SdkData_bb00b0[a2] << 16) | 0x80000E1C;
    v25 = v21 + 1;
    if ((*(_BYTE*)(v5 + 3067) & 8) != 0) {
      v25 = v21 + 2;
      v21[1] = -2147481973;
    }
    v26 = (float*)(v25 + 2);
    *v25 = ((a4 & 0xFFF) << 17) | 0xA00108E3;
    v25[1] = 8 * a3 + 288;
    if (a4 < 1) {
      *(_QWORD*)(v8 + 11240) = v26;
      return result;
    }
    if ((unsigned int)a4 >= 8 &&
        (v26 < (float*)&a5[a4] ? (v27 = a5 >= (__int64*)&v25[2 * a4 + 2])
                               : (v27 = true),
         v27)) {
      v28 = a4 & 0x7FFFFFFC;
      v29 = a5;
      v30 = &v26[2 * v28];
      v25 += 2 * v28;
      v31 = v28;
      do {
        v33 = *(int32x4_t*)v29;
        v32 = *((int32x4_t*)v29 + 1);
        v29 += 4;
        v31 -= 4;
        v51.val[0] = vuzp1q_s32(v33, v32);
        v51.val[1] = vuzp2q_s32(v33, v32);
        vst2q_f32(v26, v51);
        v26 += 8;
      } while (v31 != 0);
      if (v28 == a4) {
      LABEL_48:
        *(_QWORD*)(v8 + 11240) = v30;
        return result;
      }
    }
    else {
      v28 = 0;
      v30 = (float*)(v25 + 2);
    }
    v35 = (a4 - (int)v28) & 7LL;
    if (v35 != 0) {
      v36 = v28;
      do {
        v37 = &a5[v36];
        v38 = v30;
        ++v36;
        --v35;
        *(_DWORD*)v30 = *v37;
        v30 += 2;
        v25[3] = *((_DWORD*)v37 + 1);
        v25 = (unsigned int*)v38;
      } while (v35 != 0);
      v25 = (unsigned int*)(v30 - 2);
    }
    else {
      v36 = v28;
    }
    if (v28 - (unsigned __int64)(unsigned int)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v39 = (unsigned int)a4 - v36;
      v40 = &a5[v36 + 4];
      do {
        v39 -= 8;
        *(_DWORD*)v30 = *(v40 - 4);
        v25[3] = *((_DWORD*)v40 - 7);
        *((_DWORD*)v30 + 2) = *(v40 - 3);
        v30[3] = *((float*)v40 - 5);
        *((_DWORD*)v30 + 4) = *(v40 - 2);
        v30[5] = *((float*)v40 - 3);
        *((_DWORD*)v30 + 6) = *(v40 - 1);
        v30[7] = *((float*)v40 - 1);
        *((_DWORD*)v30 + 8) = *v40;
        v30[9] = *((float*)v40 + 1);
        *((_DWORD*)v30 + 10) = v40[1];
        v30[11] = *((float*)v40 + 3);
        *((_DWORD*)v30 + 12) = v40[2];
        v30[13] = *((float*)v40 + 5);
        *((_DWORD*)v30 + 14) = v40[3];
        v41 = *((_DWORD*)v40 + 7);
        v25 = (unsigned int*)(v30 + 14);
        v40 += 8;
        *((_DWORD*)v30 + 15) = v41;
        v30 += 16;
      } while (v39 != 0);
    }
    goto LABEL_48;
  }
  if (*(_BYTE*)(result + 11408) != 1) {
    v34 = 0;
    if (a4 < 1) {
      return result;
    }
    goto LABEL_53;
  }
  v11 = *(unsigned int**)(result + 11240);
  if ((unsigned __int64)&v11[a4 + 2] > *(_QWORD*)(result + 11248)) {
    v12 = a4;
    result = SdkRoutine_64b750(
        result + 11240, (__int64)v11,
        4LL * (unsigned int)(*(_DWORD*)(result + 11344) + a4 + 2));
    v11 = *(unsigned int**)(v8 + 11240);
    a4 = v12;
  }
  *v11 = ((a4 << 16) + 0x10000) & 0x1FFF0000 | 0xA0002EA6;
  v11[1] = (a4 << 16) | (a3 + 860);
  v13 = (__int64*)(v11 + 2);
  if (a4 >= 1) {
    if ((unsigned int)a4 >= 0xC &&
        (v13 >= &a5[a4] || a5 >= (__int64*)&v11[a4 + 2])) {
      v14 = a4 & 0x7FFFFFF8;
      v42 = (int32x4_t*)(v11 + 6);
      v43 = a5 + 4;
      v13 = (__int64*)((char*)v13 + 4 * v14);
      v44 = v14;
      do {
        v46 = *((int32x4_t*)v43 - 2);
        v45 = *((int32x4_t*)v43 - 1);
        v48 = *(int32x4_t*)v43;
        v47 = *((int32x4_t*)v43 + 1);
        v43 += 8;
        v44 -= 8;
        v42[-1] = vuzp1q_s32(v46, v45);
        *v42 = vuzp1q_s32(v48, v47);
        v42 += 2;
      } while (v44 != 0);
      if (v14 == a4) {
        goto LABEL_52;
      }
    }
    else {
      v14 = 0;
    }
    v15 = a4 & 7;
    for (j = v14; v15 != 0; v13 = (__int64*)((char*)v13 + 4)) {
      v17 = a5[j++];
      --v15;
      *(_DWORD*)v13 = v17;
    }
    if (v14 - (unsigned __int64)(unsigned int)a4 <= 0xFFFFFFFFFFFFFFF8LL) {
      v18 = (unsigned int)a4 - j;
      v19 = &a5[j + 4];
      do {
        v18 -= 8;
        *(_DWORD*)v13 = *(v19 - 4);
        *((_DWORD*)v13 + 1) = *(v19 - 3);
        *((_DWORD*)v13 + 2) = *(v19 - 2);
        *((_DWORD*)v13 + 3) = *(v19 - 1);
        *((_DWORD*)v13 + 4) = *v19;
        *((_DWORD*)v13 + 5) = v19[1];
        *((_DWORD*)v13 + 6) = v19[2];
        v20 = v19[3];
        v19 += 8;
        *((_DWORD*)v13 + 7) = v20;
        v13 += 4;
      } while (v18 != 0);
    }
  }
LABEL_52:
  *(_QWORD*)(v8 + 11240) = v13;
  v34 = *(_BYTE*)(v5 + 3216);
  if (a4 < 1) {
    return result;
  }
LABEL_53:
  if ((v34 & 1) == 0) {
    for (k = (unsigned int)a4; k != 0; --k) {
      v50 = *a5++;
      result = SdkRoutine_6861b0(v8, a3++, v50);
    }
  }
  return result;
}

__int64 nn_67f8a0(__int64 result, int a2, __int64 a3)
{
  __int64 v3;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  v3 = *(_QWORD*)result;
  v6 = result;
  if ((unsigned __int64)(*(_QWORD*)result + 32LL) > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, *(_QWORD*)result,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 8));
    v3 = *(_QWORD*)v6;
  }
  *(_DWORD*)(v3 + 8) = -1610281396;
  *(_DWORD*)(v3 + 12) = a2;
  v7 = (_DWORD*)(v3 + 16);
  *(_QWORD*)v3 = 0x81900E3691100002LL;
  v8 = *(_QWORD*)(v6 + 72);
  if (v3 + 16 == v8) {
    v14 = *(_QWORD*)(v6 + 40);
  }
  else {
    v9 = *(_QWORD*)(v6 + 40);
    v10 = *(_QWORD*)(v6 + 48);
    v11 = *(_QWORD*)(v6 + 56);
    v12 = *(_QWORD*)(v6 + 96) + v8;
    *(_QWORD*)v6 = v7;
    *(_QWORD*)(v6 + 72) = v7;
    if (v9 + 32 > v10) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v6);
      v9 = *(_QWORD*)(v6 + 40);
    }
    v13 = *(_QWORD*)(v6 + 88);
    if (v13 != 0) {
      *(_DWORD*)(v13 + 4) =
          (((unsigned __int64)*(unsigned int*)(v13 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v9 + 8) = 0;
      *(_QWORD*)(v9 + 16) = 0;
      *(_QWORD*)(v9 + 24) = 0;
      *(_QWORD*)v9 = 0x100000003LL;
      *(_QWORD*)(v6 + 88) = v9;
      v9 += 8;
    }
    *(_QWORD*)v9 = v12 - v11;
    *(_QWORD*)(v9 + 8) = v8;
    *(_DWORD*)(v9 + 16) = (unsigned __int64)(v3 + 16 - v8) >> 2;
    *(_BYTE*)(v9 + 20) = 1;
    v14 = v9 + 24;
    *(_QWORD*)(v6 + 40) = v14;
  }
  if ((unsigned __int64)(v14 + 32) > *(_QWORD*)(v6 + 48)) {
    result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v6);
    v14 = *(_QWORD*)(v6 + 40);
  }
  v15 = *(_QWORD*)(v6 + 88);
  if (v15 != 0) {
    *(_DWORD*)(v15 + 4) =
        (((unsigned __int64)*(unsigned int*)(v15 + 4) << 32) + 0x100000000LL) >>
        32;
  }
  else {
    *(_QWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)v14 = 0x100000003LL;
    *(_QWORD*)(v6 + 88) = v14;
    v14 += 8;
  }
  *(_QWORD*)v14 = a3;
  *(_QWORD*)(v14 + 8) = 0;
  *(_DWORD*)(v14 + 16) = 4;
  *(_BYTE*)(v14 + 20) = *(_BYTE*)(v14 + 20) & 0xF8 | 2;
  *(_QWORD*)v6 = v7;
  v16 = *(_QWORD*)(v6 + 8);
  *(_QWORD*)(v6 + 40) = v14 + 24;
  if (v3 + 20 > v16) {
    result = SdkRoutine_64b750(v6, v3 + 16,
                               4LL * (unsigned int)(*(_DWORD*)(v6 + 104) + 1));
    v7 = *(_DWORD**)v6;
  }
  v17 = *(unsigned int*)(v6 + 24);
  if ((unsigned int)v17 <= 4) {
    *v7++ = SdkData_c77cf4[v17];
  }
  *(_QWORD*)v6 = v7;
  return result;
}

__int64 nn_67fab0(__int64 result, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;

  v5 = *(_QWORD*)result;
  v10 = result;
  if ((unsigned __int64)(*(_QWORD*)result + 52LL) > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, *(_QWORD*)result,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 13));
    v5 = *(_QWORD*)v10;
  }
  *(_DWORD*)(v5 + 8) = (a3 << 16) | 0x800005F6;
  *(_DWORD*)(v5 + 12) = 537003506;
  *(_DWORD*)(v5 + 16) = HIDWORD(a4);
  *(_DWORD*)(v5 + 20) = a4;
  *(_QWORD*)v5 = 0x81900E3691110002LL;
  *(_DWORD*)(v5 + 24) = -1610215856;
  *(_DWORD*)(v5 + 28) = a2;
  v11 = (_DWORD*)(v5 + 32);
  v12 = *(_QWORD*)(v10 + 72);
  if (v5 + 32 == v12) {
    v18 = *(_QWORD*)(v10 + 40);
  }
  else {
    v13 = *(_QWORD*)(v10 + 40);
    v14 = *(_QWORD*)(v10 + 48);
    v15 = *(_QWORD*)(v10 + 56);
    v16 = *(_QWORD*)(v10 + 96) + v12;
    *(_QWORD*)v10 = v11;
    *(_QWORD*)(v10 + 72) = v11;
    if (v13 + 32 > v14) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v10);
      v13 = *(_QWORD*)(v10 + 40);
    }
    v17 = *(_QWORD*)(v10 + 88);
    if (v17 != 0) {
      *(_DWORD*)(v17 + 4) =
          (((unsigned __int64)*(unsigned int*)(v17 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v13 + 8) = 0;
      *(_QWORD*)(v13 + 16) = 0;
      *(_QWORD*)(v13 + 24) = 0;
      *(_QWORD*)v13 = 0x100000003LL;
      *(_QWORD*)(v10 + 88) = v13;
      v13 += 8;
    }
    *(_QWORD*)v13 = v16 - v15;
    *(_QWORD*)(v13 + 8) = v12;
    *(_DWORD*)(v13 + 16) = (unsigned __int64)(v5 + 32 - v12) >> 2;
    *(_BYTE*)(v13 + 20) = 1;
    v18 = v13 + 24;
    *(_QWORD*)(v10 + 40) = v18;
  }
  if ((unsigned __int64)(v18 + 32) > *(_QWORD*)(v10 + 48)) {
    result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v10);
    v18 = *(_QWORD*)(v10 + 40);
  }
  v19 = *(_QWORD*)(v10 + 88);
  if (v19 != 0) {
    *(_DWORD*)(v19 + 4) =
        (((unsigned __int64)*(unsigned int*)(v19 + 4) << 32) + 0x100000000LL) >>
        32;
  }
  else {
    *(_QWORD*)(v18 + 8) = 0;
    *(_QWORD*)(v18 + 16) = 0;
    *(_QWORD*)(v18 + 24) = 0;
    *(_QWORD*)v18 = 0x100000003LL;
    *(_QWORD*)(v10 + 88) = v18;
    v18 += 8;
  }
  *(_QWORD*)v18 = a5;
  *(_QWORD*)(v18 + 8) = 0;
  *(_DWORD*)(v18 + 16) = 5;
  *(_BYTE*)(v18 + 20) = *(_BYTE*)(v18 + 20) & 0xF8 | 2;
  *(_QWORD*)v10 = v11;
  v20 = *(_QWORD*)(v10 + 8);
  *(_QWORD*)(v10 + 40) = v18 + 24;
  if (v5 + 36 > v20) {
    result = SdkRoutine_64b750(v10, v5 + 32,
                               4LL * (unsigned int)(*(_DWORD*)(v10 + 104) + 1));
    v11 = *(_DWORD**)v10;
  }
  v21 = *(unsigned int*)(v10 + 24);
  if ((unsigned int)v21 <= 4) {
    *v11++ = SdkData_c77cf4[v21];
  }
  *(_QWORD*)v10 = v11;
  return result;
}

__int64 nn_67fe00(__int64 result, unsigned int a2, unsigned int a3,
                  unsigned int a4, __int64 a5, __int64 a6, int a7, int a8,
                  char a9, char a10)
{
  __int64 v14;
  unsigned int* v15;
  unsigned int* v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  char v23;
  bool v24;
  signed int v25;
  unsigned int v26;
  unsigned int* v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  char v43;
  char* v44;
  __int64 v45;
  int v46;
  unsigned int v49;
  unsigned int v50;
  unsigned int v52;
  unsigned int v53;
  __int64 v54;
  __int16 v55;
  unsigned int v56;
  signed int v57;
  unsigned int v58;

  v14 = result;
  v15 = *(unsigned int**)result;
  if ((unsigned __int64)(*(_QWORD*)result + 8LL) > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, *(_QWORD*)result,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 2));
    v15 = *(unsigned int**)v14;
  }
  *v15 = -2121265610;
  v16 = v15 + 1;
  if (a8 >= 1) {
    v17 = a8;
  }
  else {
    v17 = a3;
  }
  v18 = a3;
  if ((a10 & 1) != 0) {
    v19 = 3;
  }
  else {
    v19 = 4;
  }
  if (a7 >= 1) {
    v20 = 0;
    v46 = a7;
    v52 = v17;
    v56 = (v17 - a3) >> 2;
    v57 = (32756 - (a3 + 4 * v19)) / v17 + 1;
    v55 = v19 + 1;
    v21 = v19 + 1 + (unsigned int)((a9 & 1) == 0);
    v54 = v21;
    v53 = (a2 >> 2) | 0xA0000000;
    while (1) {
      if (a7 >= v57) {
        v25 = v57;
      }
      else {
        v25 = a7;
      }
      if ((unsigned __int64)&v16[v21] > *(_QWORD*)(v14 + 8)) {
        result = SdkRoutine_64b750(
            v14, (__int64)v16,
            4LL * (unsigned int)(*(_DWORD*)(v14 + 104) + v21));
        v16 = *(unsigned int**)v14;
      }
      v58 = v20 + v25;
      v16[2] = v20 + v25;
      v26 = (v18 + (v25 - 1) * v17) >> 2;
      *v16 = ((((_WORD)v26 + v55) & 0x1FFF) << 16) | v53;
      v16[1] = v20;
      if ((a10 & 1) != 0) {
        v27 = v16 + 3;
      }
      else {
        v16[3] = a4;
        v27 = v16 + 4;
      }
      *v27 = v56;
      v16 = v27 + 1;
      if ((a9 & 1) != 0) {
        break;
      }
      v16 = v27 + 2;
      v27[1] = v46;
      v33 = *(char**)(v14 + 72);
      v22 = *(_QWORD*)(v14 + 40);
      v34 = (char*)(v27 + 2) - v33;
      if (v27 + 2 != (unsigned int*)v33) {
        v35 = *(_QWORD*)(v14 + 96);
        v36 = *(_QWORD*)(v14 + 48);
        v37 = *(_QWORD*)(v14 + 56);
        *(_QWORD*)v14 = v16;
        *(_QWORD*)(v14 + 72) = v16;
        if (v22 + 32 > v36) {
          v38 = v26;
          v39 = v37;
          result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v14);
          v22 = *(_QWORD*)(v14 + 40);
          v37 = v39;
          v26 = v38;
        }
        v40 = *(_QWORD*)(v14 + 88);
        if (v40 != 0) {
          *(_DWORD*)(v40 + 4) =
              (((unsigned __int64)*(unsigned int*)(v40 + 4) << 32) +
               0x100000000LL) >>
              32;
        }
        else {
          *(_QWORD*)(v22 + 8) = 0;
          *(_QWORD*)(v22 + 16) = 0;
          *(_QWORD*)(v22 + 24) = 0;
          *(_QWORD*)v22 = 0x100000003LL;
          *(_QWORD*)(v14 + 88) = v22;
          v22 += 8;
        }
        v44 = &v33[v35];
        v18 = a3;
        v17 = v52;
        *(_DWORD*)(v22 + 16) = v34 >> 2;
        *(_QWORD*)v22 = &v44[-v37];
        *(_QWORD*)(v22 + 8) = v33;
        v43 = v49 & 0xF8 | 1;
        v49 = v49 & 0xFFFFFFF8 | 1;
        goto LABEL_43;
      }
      v17 = v52;
    LABEL_44:
      if ((unsigned __int64)(v22 + 32) > *(_QWORD*)(v14 + 48)) {
        result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v14);
        v22 = *(_QWORD*)(v14 + 40);
      }
      v21 = v54;
      v45 = *(_QWORD*)(v14 + 88);
      if (v45 != 0) {
        *(_DWORD*)(v45 + 4) =
            (((unsigned __int64)*(unsigned int*)(v45 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v22 + 8) = 0;
        *(_QWORD*)(v22 + 16) = 0;
        *(_QWORD*)(v22 + 24) = 0;
        *(_QWORD*)v22 = 0x100000003LL;
        *(_QWORD*)(v14 + 88) = v22;
        v22 += 8;
      }
      v23 = *(_BYTE*)(v22 + 20);
      v20 = v58;
      *(_QWORD*)v22 = a5;
      *(_QWORD*)(v22 + 8) = 0;
      v24 = __OFSUB__(a7, v25);
      a7 -= v25;
      *(_DWORD*)(v22 + 16) = v26;
      *(_BYTE*)(v22 + 20) = v23 & 0xF8 | 2;
      *(_QWORD*)(v14 + 40) = v22 + 24;
      a5 += v25 * v17;
      if ((a7 < 0) ^ v24 | (a7 == 0)) {
        goto LABEL_48;
      }
    }
    v28 = *(char**)(v14 + 72);
    v22 = *(_QWORD*)(v14 + 40);
    if (v16 != (unsigned int*)v28) {
      v29 = *(_QWORD*)(v14 + 96);
      v30 = *(_QWORD*)(v14 + 48);
      v31 = *(_QWORD*)(v14 + 56);
      *(_QWORD*)v14 = v16;
      *(_QWORD*)(v14 + 72) = v16;
      if (v22 + 32 > v30) {
        result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v14);
        v22 = *(_QWORD*)(v14 + 40);
      }
      v32 = *(_QWORD*)(v14 + 88);
      if (v32 != 0) {
        *(_DWORD*)(v32 + 4) =
            (((unsigned __int64)*(unsigned int*)(v32 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v22 + 8) = 0;
        *(_QWORD*)(v22 + 16) = 0;
        *(_QWORD*)(v22 + 24) = 0;
        *(_QWORD*)v22 = 0x100000003LL;
        *(_QWORD*)(v14 + 88) = v22;
        v22 += 8;
      }
      v41 = &v28[v29];
      v18 = a3;
      *(_DWORD*)(v22 + 16) = (unsigned __int64)((char*)v16 - v28) >> 2;
      *(_QWORD*)v22 = &v41[-v31];
      *(_QWORD*)(v22 + 8) = v28;
      *(_BYTE*)(v22 + 20) = v50 & 0xF8 | 1;
      v22 += 24;
      v50 = v50 & 0xFFFFFFF8 | 1;
      *(_QWORD*)(v14 + 40) = v22;
    }
    v17 = v52;
    if ((unsigned __int64)(v22 + 32) > *(_QWORD*)(v14 + 48)) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v14);
      v22 = *(_QWORD*)(v14 + 40);
    }
    v42 = *(_QWORD*)(v14 + 88);
    if (v42 != 0) {
      *(_DWORD*)(v42 + 4) =
          (((unsigned __int64)*(unsigned int*)(v42 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v22 + 8) = 0;
      *(_QWORD*)(v22 + 16) = 0;
      *(_QWORD*)(v22 + 24) = 0;
      *(_QWORD*)v22 = 0x100000003LL;
      *(_QWORD*)(v14 + 88) = v22;
      v22 += 8;
    }
    *(_QWORD*)v22 = a6;
    *(_QWORD*)(v22 + 8) = 0;
    *(_DWORD*)(v22 + 16) = 1;
    v43 = *(_BYTE*)(v22 + 20) & 0xF8;
  LABEL_43:
    *(_BYTE*)(v22 + 20) = v43;
    v22 += 24;
    *(_QWORD*)(v14 + 40) = v22;
    goto LABEL_44;
  }
LABEL_48:
  *(_QWORD*)v14 = v16;
  return result;
}

__int64 nn_6804c0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;

  v2 = *(_QWORD*)result;
  v4 = result;
  if ((unsigned __int64)(*(_QWORD*)result + 12LL) > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, *(_QWORD*)result,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 3));
    v2 = *(_QWORD*)v4;
  }
  v5 = (_DWORD*)(v2 + 12);
  *(_DWORD*)(v2 + 8) = -1610477982;
  *(_QWORD*)v2 = 0x81900E3691120002LL;
  v6 = *(_QWORD*)(v4 + 72);
  if (v2 + 12 == v6) {
    v12 = *(_QWORD*)(v4 + 40);
  }
  else {
    v7 = *(_QWORD*)(v4 + 40);
    v8 = *(_QWORD*)(v4 + 48);
    v9 = *(_QWORD*)(v4 + 56);
    v10 = *(_QWORD*)(v4 + 96) + v6;
    *(_QWORD*)v4 = v5;
    *(_QWORD*)(v4 + 72) = v5;
    if (v7 + 32 > v8) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v4);
      v7 = *(_QWORD*)(v4 + 40);
    }
    v11 = *(_QWORD*)(v4 + 88);
    if (v11 != 0) {
      *(_DWORD*)(v11 + 4) =
          (((unsigned __int64)*(unsigned int*)(v11 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v7 + 8) = 0;
      *(_QWORD*)(v7 + 16) = 0;
      *(_QWORD*)(v7 + 24) = 0;
      *(_QWORD*)v7 = 0x100000003LL;
      *(_QWORD*)(v4 + 88) = v7;
      v7 += 8;
    }
    *(_QWORD*)v7 = v10 - v9;
    *(_QWORD*)(v7 + 8) = v6;
    *(_DWORD*)(v7 + 16) = (unsigned __int64)(v2 + 12 - v6) >> 2;
    *(_BYTE*)(v7 + 20) = 1;
    v12 = v7 + 24;
    *(_QWORD*)(v4 + 40) = v12;
  }
  if ((unsigned __int64)(v12 + 32) > *(_QWORD*)(v4 + 48)) {
    result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v4);
    v12 = *(_QWORD*)(v4 + 40);
  }
  v13 = *(_QWORD*)(v4 + 88);
  if (v13 != 0) {
    *(_DWORD*)(v13 + 4) =
        (((unsigned __int64)*(unsigned int*)(v13 + 4) << 32) + 0x100000000LL) >>
        32;
  }
  else {
    *(_QWORD*)(v12 + 8) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_QWORD*)(v12 + 24) = 0;
    *(_QWORD*)v12 = 0x100000003LL;
    *(_QWORD*)(v4 + 88) = v12;
    v12 += 8;
  }
  *(_QWORD*)v12 = a2;
  *(_QWORD*)(v12 + 8) = 0;
  *(_DWORD*)(v12 + 16) = 2;
  *(_BYTE*)(v12 + 20) = *(_BYTE*)(v12 + 20) & 0xF8 | 2;
  *(_QWORD*)v4 = v5;
  v14 = *(_QWORD*)(v4 + 8);
  *(_QWORD*)(v4 + 40) = v12 + 24;
  if (v2 + 16 > v14) {
    result = SdkRoutine_64b750(v4, v2 + 12,
                               4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 1));
    v5 = *(_DWORD**)v4;
  }
  v15 = *(unsigned int*)(v4 + 24);
  if ((unsigned int)v15 <= 4) {
    *v5++ = SdkData_c77cf4[v15];
  }
  *(_QWORD*)v4 = v5;
  return result;
}

__int64 nn_680950(__int64 result, __int64 a2)
{
  _DWORD* v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  _DWORD* v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  v2 = *(_DWORD**)result;
  v4 = result;
  if ((unsigned __int64)(*(_QWORD*)result + 4LL) > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, *(_QWORD*)result,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 1));
    v2 = *(_DWORD**)v4;
  }
  v5 = *(unsigned int*)(v4 + 24);
  if ((unsigned int)v5 <= 4) {
    *v2++ = SdkData_c8ea8c[v5];
  }
  v6 = *(_QWORD*)(v4 + 8);
  *(_QWORD*)v4 = v2;
  if ((unsigned __int64)(v2 + 1) > v6) {
    result = SdkRoutine_64b750(v4, (__int64)v2,
                               4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 1));
    v2 = *(_DWORD**)v4;
  }
  *v2 = -1610412324;
  v7 = v2 + 1;
  v8 = *(char**)(v4 + 72);
  if (v2 + 1 == (_DWORD*)v8) {
    v14 = *(_QWORD*)(v4 + 40);
  }
  else {
    v9 = *(_QWORD*)(v4 + 40);
    v10 = *(_QWORD*)(v4 + 48);
    v11 = *(_QWORD*)(v4 + 56);
    v12 = &v8[*(_QWORD*)(v4 + 96)];
    *(_QWORD*)v4 = v7;
    *(_QWORD*)(v4 + 72) = v7;
    if (v9 + 32 > v10) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v4);
      v9 = *(_QWORD*)(v4 + 40);
    }
    v13 = *(_QWORD*)(v4 + 88);
    if (v13 != 0) {
      *(_DWORD*)(v13 + 4) =
          (((unsigned __int64)*(unsigned int*)(v13 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v9 + 8) = 0;
      *(_QWORD*)(v9 + 16) = 0;
      *(_QWORD*)(v9 + 24) = 0;
      *(_QWORD*)v9 = 0x100000003LL;
      *(_QWORD*)(v4 + 88) = v9;
      v9 += 8;
    }
    *(_QWORD*)v9 = &v12[-v11];
    *(_QWORD*)(v9 + 8) = v8;
    *(_DWORD*)(v9 + 16) = (unsigned __int64)((char*)(v2 + 1) - v8) >> 2;
    *(_BYTE*)(v9 + 20) = 1;
    v14 = v9 + 24;
    *(_QWORD*)(v4 + 40) = v14;
  }
  if ((unsigned __int64)(v14 + 32) > *(_QWORD*)(v4 + 48)) {
    result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v4);
    v14 = *(_QWORD*)(v4 + 40);
  }
  v15 = *(_QWORD*)(v4 + 88);
  if (v15 != 0) {
    *(_DWORD*)(v15 + 4) =
        (((unsigned __int64)*(unsigned int*)(v15 + 4) << 32) + 0x100000000LL) >>
        32;
  }
  else {
    *(_QWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)v14 = 0x100000003LL;
    *(_QWORD*)(v4 + 88) = v14;
    v14 += 8;
  }
  *(_QWORD*)v14 = a2;
  *(_QWORD*)(v14 + 8) = 0;
  *(_DWORD*)(v14 + 16) = 3;
  *(_BYTE*)(v14 + 20) = *(_BYTE*)(v14 + 20) & 0xF8 | 2;
  *(_QWORD*)v4 = v7;
  v16 = *(_QWORD*)(v4 + 8);
  *(_QWORD*)(v4 + 40) = v14 + 24;
  if ((unsigned __int64)(v2 + 2) > v16) {
    result = SdkRoutine_64b750(v4, (__int64)(v2 + 1),
                               4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 1));
    v7 = *(_DWORD**)v4;
  }
  v17 = *(unsigned int*)(v4 + 24);
  if ((unsigned int)v17 <= 4) {
    *v7++ = SdkData_c77cf4[v17];
  }
  *(_QWORD*)v4 = v7;
  return result;
}

__int64 nn_681ca0(__int64 result, unsigned int a2, unsigned int a3,
                  const float* a4)
{

#pragma clang fp contract(off)
  float* v5;
  float** v8;
  int8x16_t v10;
  int8x16_t v11;
  int32x4_t v12;
  __int64 v13;
  int32x4_t v14;
  int8x16_t v15;
  int8x16_t v16;
  float* v17;
  __int64 v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  const float* v22;
  int32x4_t v23;
  __int64 v24;
  int v25;
  __int64 v26;
  const float* v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  float32x4x2_t v33;
  float32x4x4_t v34;

  v5 = *(float**)result;
  v8 = (float**)result;
  if (*(_QWORD*)result + 4 * (unsigned __int64)(2 * a3) >
      *(_QWORD*)(result + 8)) {
    result = SdkRoutine_64b750(result, (__int64)v5,
                               4LL * (*(_DWORD*)(result + 104) + 2 * a3));
    v5 = *v8;
  }
  if ((int)a3 < 1) {
    v17 = v5;
    goto LABEL_22;
  }
  if (a3 >= 4 && (v5 >= &a4[4 * a3] || a4 >= &v5[2 * a3])) {
    LANES128(v10).n128_u64[0] = 0x700000007LL;
    LANES128(v10).n128_u64[1] = 0x700000007LL;
    LANES128(v11).n128_u64[0] = 0x7000000070LL;
    LANES128(v11).n128_u64[1] = 0x7000000070LL;
    v12 = vdupq_n_s32(a2);
    v13 = a3 & 0x7FFFFFFC;
    v14 = COERCE_AS(int32x4_t, SdkData_bb1cc0);
    LANES128(v15).n128_u64[0] = 0x70000000700LL;
    LANES128(v15).n128_u64[1] = 0x70000000700LL;
    LANES128(v16).n128_u64[0] = 0x700000007000LL;
    LANES128(v16).n128_u64[1] = 0x700000007000LL;
    v17 = &v5[2 * v13];
    v18 = v13;
    v19 = vdupq_n_s32(0xA18u);
    LANES128(v20).n128_u64[0] = 0x400000004LL;
    LANES128(v20).n128_u64[1] = 0x400000004LL;
    v21 = vdupq_n_s32(0x20010000u);
    v22 = a4;
    do {
      v34 = vld4q_f32(v22);
      v22 += 16;
      v18 -= 4;
      v23 = vaddq_s32(v12, v14);
      v14 = vaddq_s32(v14, v20);
      v33.val[0] =
          vorrq_s8(vshrq_n_u32(vaddq_s32(vshlq_n_s32(v23, 5u), v19), 2u), v21);
      v33.val[1] =
          vorrq_s8(vorrq_s8(vandq_s8(vshlq_n_s32(v34.val[1], 4u), v11),
                            vandq_s8(v34.val[0], v10)),
                   vorrq_s8(vandq_s8(vshlq_n_s32(v34.val[2], 8u), v15),
                            vandq_s8(vshlq_n_s32(v34.val[3], 0xCu), v16)));
      vst2q_f32(v5, v33);
      v5 += 8;
    } while (v18 != 0);
    if (v13 == a3) {
      goto LABEL_22;
    }
    if ((a3 & 1) != 0) {
      goto LABEL_16;
    }
  LABEL_14:
    v24 = v13;
    goto LABEL_17;
  }
  v13 = 0;
  v17 = v5;
  if ((a3 & 1) == 0) {
    goto LABEL_14;
  }
LABEL_16:
  *(_DWORD*)v17 = ((32 * (a2 + (unsigned int)v13) + 2584) >> 2) | 0x20010000;
  v24 = v13 | 1;
  *((_DWORD*)v17 + 1) = LOBYTE(a4[4 * v13]) & 7 |
                        (unsigned __int8)(16 * (LOBYTE(a4[4 * v13 + 1]) & 7)) |
                        ((LODWORD(a4[4 * v13 + 2]) & 7) << 8) |
                        ((LODWORD(a4[4 * v13 + 3]) & 7) << 12);
  v17 += 2;
LABEL_17:
  if (v13 != a3 - 1LL) {
    v25 = a2 + v24;
    v26 = a3 - v24;
    v27 = &a4[4 * v24 + 4];
    v28 = 32 * v25 + 2616;
    do {
      v26 -= 2;
      *(_DWORD*)v17 = ((v28 - 32) >> 2) | 0x20010000;
      v29 = (v28 >> 2) | 0x20010000;
      v28 += 64;
      *((_DWORD*)v17 + 1) = *(_BYTE*)(v27 - 4) & 7 |
                            (unsigned __int8)(16 * (*(_BYTE*)(v27 - 3) & 7)) |
                            ((*(_DWORD*)(v27 - 2) & 7) << 8) |
                            ((*(_DWORD*)(v27 - 1) & 7) << 12);
      *((_DWORD*)v17 + 2) = v29;
      v30 = *(_DWORD*)v27 & 7 | (16 * ((_DWORD)v27[1] & 7));
      v31 = *((_DWORD*)v27 + 2);
      v32 = *((_DWORD*)v27 + 3);
      v27 += 8;
      *((_DWORD*)v17 + 3) =
          (unsigned __int8)v30 | ((v31 & 7) << 8) | ((v32 & 7) << 12);
      v17 += 4;
    } while (v26 != 0);
  }
LABEL_22:
  *v8 = v17;
  return result;
}

__int64 nn_681f60(__int64 result, unsigned int a2, unsigned int a3,
                  const float* a4)
{

#pragma clang fp contract(off)
  float* v5;
  float** v8;
  bool v9;
  int32x4_t v10;
  __int64 v11;
  int32x4_t v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  float* v16;
  __int64 v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  const float* v21;
  int8x16_t v22;
  int8x16_t v23;
  int8x16_t v24;
  int32x4_t v25;
  int8x16_t v26;
  int8x16_t v27;
  int v28;
  __int64 v29;
  const float* v30;
  unsigned int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v39;
  int v40;
  int v41;
  float32x4x3_t v43;
  float32x4x4_t v44;

  v5 = *(float**)result;
  v8 = (float**)result;
  if (*(_QWORD*)result + 4 * (unsigned __int64)(3 * a3) >
      *(_QWORD*)(result + 8)) {
    result = SdkRoutine_64b750(result, (__int64)v5,
                               4LL * (*(_DWORD*)(result + 104) + 3 * a3));
    v5 = *v8;
  }
  if ((int)a3 < 1) {
    v16 = v5;
    goto LABEL_36;
  }
  if (a3 >= 4 &&
      (v5 < &a4[4 * a3] ? (v9 = a4 >= &v5[3 * a3]) : (v9 = true), v9)) {
    LANES128(v10).n128_u64[0] = 0x1000100010001LL;
    LANES128(v10).n128_u64[1] = 0x1000100010001LL;
    v11 = a3 & 0x7FFFFFFC;
    v12 = vdupq_n_s32(a2);
    v13 = COERCE_AS(int32x4_t, SdkData_bb1cc0);
    LANES128(v14).n128_u64[0] = 0xFFFF0000FFFFLL;
    LANES128(v14).n128_u64[1] = 0xFFFF0000FFFFLL;
    LANES128(v15).n128_u64[0] = 0x400000004LL;
    LANES128(v15).n128_u64[1] = 0x400000004LL;
    v16 = &v5[3 * v11];
    v17 = v11;
    v18 = vdupq_n_s32(0xFFFEu);
    v19 = vdupq_n_s32(0xE04u);
    v20 = vdupq_n_s32(0x20020000u);
    v21 = a4;
    do {
      v44 = vld4q_f32(v21);
      v21 += 16;
      v17 -= 4;
      v22 = vaddq_s32(v44.val[2],
                      vminq_s32(v44.val[0], COERCE_AS(int32x4_t, 0LL)));
      v23 = vorrq_s8(vcgtq_s32(v44.val[0], v18), vclezq_s32(v22));
      v24 = vmaxq_s32(v44.val[0], COERCE_AS(int32x4_t, 0LL));
      v44.val[0] = vmaxq_s32(v44.val[1], COERCE_AS(int32x4_t, 0LL));
      v25 = vaddq_s32(vshlq_n_s32(vbslq_s8(vcgtq_u32(vaddq_s32(v22, v24), v18),
                                           vmvnq_s8(v24), v22),
                                  0x10u),
                      v24);
      v26 = vaddq_s32(v44.val[3],
                      vminq_s32(v44.val[1], COERCE_AS(int32x4_t, 0LL)));
      v44.val[3] = vbicq_s8(vmulq_s32(v25, v10), v23);
      v27 = vandq_s8(
          vandq_s8(vcgtq_s32(v14, v44.val[1]), vcgtzq_s32(v26)),
          vmulq_s32(
              vaddq_s32(vshlq_n_s32(
                            vbslq_s8(vcgtq_u32(vaddq_s32(v26, v44.val[0]), v18),
                                     vmvnq_s8(v44.val[0]), v26),
                            0x10u),
                        v44.val[0]),
              v10));
      v44.val[0] = vaddq_s32(v12, v13);
      v13 = vaddq_s32(v13, v15);
      v43.val[0] = vorrq_s8(
          vshrq_n_u32(vaddq_s32(vshlq_n_s32(v44.val[0], 4u), v19), 2u), v20);
      v43.val[1] = v44.val[3];
      v43.val[2] = v27;
      vst3q_f32(v5, v43);
      v5 += 12;
    } while (v17 != 0);
    if (v11 == a3) {
      goto LABEL_36;
    }
  }
  else {
    v11 = 0;
    v16 = v5;
  }
  v28 = a2 + v11;
  v29 = a3 - v11;
  v30 = &a4[4 * v11 + 2];
  v31 = 16 * v28 + 3588;
  do {
    v36 = *((_DWORD*)v30 - 2);
    v37 = *(_DWORD*)v30 + (v36 & (v36 >> 31));
    if (v36 > 65534 || v37 < 1) {
      v39 = 0;
    }
    else {
      v40 = v36 & ~(v36 >> 31);
      if ((unsigned int)(v37 + v40) > 0xFFFE) {
        v37 = ~v40;
      }
      v39 = 65537 * (v40 + (v37 << 16));
    }
    v41 = *((_DWORD*)v30 - 1);
    v33 = *((_DWORD*)v30 + 1) + (v41 & (v41 >> 31));
    if (v41 > 65534 || v33 < 1) {
      v34 = 0;
    }
    else {
      v32 = v41 & ~(v41 >> 31);
      if ((unsigned int)(v33 + v32) > 0xFFFE) {
        v33 = ~v32;
      }
      v34 = 65537 * (v32 + (v33 << 16));
    }
    v35 = (v31 >> 2) | 0x20020000;
    v30 += 4;
    *((_DWORD*)v16 + 2) = v34;
    v31 += 16;
    --v29;
    *(_DWORD*)v16 = v35;
    *((_DWORD*)v16 + 1) = v39;
    v16 += 3;
  } while (v29 != 0);
LABEL_36:
  *v8 = v16;
  return result;
}

double nn_682650(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;

  v3 = *(_QWORD*)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 84LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1, v3, 4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 21));
    v3 = *(_QWORD*)a1;
  }
  *(_DWORD*)(v3 + 32) = a2 + 8;
  *(_DWORD*)(v3 + 24) = 537134784;
  *(_DWORD*)(v3 + 28) = (unsigned __int64)(a2 + 8) >> 32;
  *(_QWORD*)v3 = 0x200406C0800001D1LL;
  *(_QWORD*)(v3 + 16) = 0x1D00500200000000LL;
  *(_DWORD*)(v3 + 8) = (unsigned __int64)(a2 + 4) >> 32;
  *(_DWORD*)(v3 + 12) = a2 + 4;
  *(_DWORD*)(v3 + 52) = a2 + 12;
  *(_DWORD*)(v3 + 44) = 537134784;
  *(_DWORD*)(v3 + 48) = (unsigned __int64)(a2 + 12) >> 32;
  *(_DWORD*)(v3 + 72) = a2 + 16;
  *(_QWORD*)(v3 + 36) = 0x1D00502200000000LL;
  *(_DWORD*)(v3 + 64) = 537134784;
  *(_DWORD*)(v3 + 68) = (unsigned __int64)(a2 + 16) >> 32;
  *(_QWORD*)(v3 + 56) = 0x1D00504200000000LL;
  *(_QWORD*)(v3 + 76) = 0x1D00506200000000LL;
  *(_QWORD*)a1 = v3 + 84;
  return 0x1.0506200000000p-559;
}

int** nn_682840(int** result, __int64 a2)
{
  int* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  _BYTE* v17;

  v2 = *result;
  v3 = (__int64)result;
  if (a2 != 0) {
    result = (int**)nvidia_64ac60(result, &v17, 8u);
    v5 = a2 + 4;
    v6 = 0;
    v7 = 536936676;
    *v17 = 94;
    *(_QWORD*)v17 &= 0xFFFFFFFFFFFF00FFLL;
    do {
      if ((unsigned __int64)(v2 + 1) > *(_QWORD*)(v3 + 8)) {
        result = (int**)SdkRoutine_64b750(
            v3, (__int64)v2, 4LL * (unsigned int)(*(_DWORD*)(v3 + 104) + 1));
        v2 = *(int**)v3;
      }
      *v2++ = v7;
      v9 = *(char**)(v3 + 72);
      v8 = *(_QWORD*)(v3 + 40);
      if (v2 != (int*)v9) {
        v10 = *(_QWORD*)(v3 + 96);
        v11 = *(_QWORD*)(v3 + 48);
        v12 = *(_QWORD*)(v3 + 56);
        if (v6 != 0) {
          v13 = 0;
        }
        else {
          v13 = 4;
        }
        *(_QWORD*)v3 = v2;
        *(_QWORD*)(v3 + 72) = v2;
        if (v8 + 32 > v11) {
          result = (int**)((__int64 (*)(__int64))SdkRoutine_64b940)(v3);
          v8 = *(_QWORD*)(v3 + 40);
        }
        v14 = *(_QWORD*)(v3 + 88);
        if (v14 != 0) {
          *(_DWORD*)(v14 + 4) =
              (((unsigned __int64)*(unsigned int*)(v14 + 4) << 32) +
               0x100000000LL) >>
              32;
        }
        else {
          *(_QWORD*)(v8 + 8) = 0;
          *(_QWORD*)(v8 + 16) = 0;
          *(_QWORD*)(v8 + 24) = 0;
          *(_QWORD*)v8 = 0x100000003LL;
          *(_QWORD*)(v3 + 88) = v8;
          v8 += 8;
        }
        *(_DWORD*)(v8 + 16) = (unsigned __int64)((char*)v2 - v9) >> 2;
        *(_QWORD*)v8 = &v9[v10 - v12];
        *(_QWORD*)(v8 + 8) = v9;
        *(_BYTE*)(v8 + 20) = v16 & 0xF8 | v13 | 1;
        v8 += 24;
        v16 = v16 & 0xFFFFFFF8 | v13 | 1;
        *(_QWORD*)(v3 + 40) = v8;
      }
      if ((unsigned __int64)(v8 + 32) > *(_QWORD*)(v3 + 48)) {
        result = (int**)((__int64 (*)(__int64))SdkRoutine_64b940)(v3);
        v8 = *(_QWORD*)(v3 + 40);
      }
      v15 = *(_QWORD*)(v3 + 88);
      if (v15 != 0) {
        *(_DWORD*)(v15 + 4) =
            (((unsigned __int64)*(unsigned int*)(v15 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v8 + 8) = 0;
        *(_QWORD*)(v8 + 16) = 0;
        *(_QWORD*)(v8 + 24) = 0;
        *(_QWORD*)v8 = 0x100000003LL;
        *(_QWORD*)(v3 + 88) = v8;
        v8 += 8;
      }
      *(_QWORD*)v8 = v5;
      *(_QWORD*)(v8 + 8) = 0;
      ++v6;
      v7 += 8;
      v5 += 4;
      *(_DWORD*)(v8 + 16) = 1;
      *(_BYTE*)(v8 + 20) = *(_BYTE*)(v8 + 20) & 0xF8 | 2;
      *(_QWORD*)(v3 + 40) = v8 + 24;
    } while (v6 != 4);
  }
  if ((unsigned __int64)(v2 + 1) > *(_QWORD*)(v3 + 8)) {
    result = (int**)SdkRoutine_64b750(
        v3, (__int64)v2, 4LL * (unsigned int)(*(_DWORD*)(v3 + 104) + 1));
    v2 = *(int**)v3;
  }
  *v2 = -2147417647;
  *(_QWORD*)v3 = v2 + 1;
  return result;
}

__int64 nn_682ab0(__int64 a1, int a2, __int64 a3)
{
  _DWORD* v3;
  _DWORD* v7;
  __int64 result;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  _DWORD* v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _BYTE* v26;

  v3 = *(_DWORD**)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 4LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1, *(_QWORD*)a1,
                      4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 1));
    v3 = *(_DWORD**)a1;
  }
  *v3 = -1861287934;
  v7 = v3 + 1;
  result = (__int64)nvidia_64ac60((_QWORD*)a1, &v26, 8u);
  *v26 = 94;
  *(_QWORD*)v26 &= 0xFFFFFFFFFFFF00FFLL;
  v9 = *(char**)(a1 + 72);
  if (v3 + 1 != (_DWORD*)v9) {
    v10 = *(_QWORD*)(a1 + 40);
    v11 = *(_QWORD*)(a1 + 48);
    v12 = *(_QWORD*)(a1 + 56);
    v13 = &v9[*(_QWORD*)(a1 + 96)];
    *(_QWORD*)a1 = v7;
    *(_QWORD*)(a1 + 72) = v7;
    if (v10 + 32 > v11) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(a1);
      v10 = *(_QWORD*)(a1 + 40);
    }
    v14 = *(_QWORD*)(a1 + 88);
    if (v14 != 0) {
      *(_DWORD*)(v14 + 4) =
          (((unsigned __int64)*(unsigned int*)(v14 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v10 + 8) = 0;
      *(_QWORD*)(v10 + 16) = 0;
      *(_QWORD*)(v10 + 24) = 0;
      *(_QWORD*)v10 = 0x100000003LL;
      *(_QWORD*)(a1 + 88) = v10;
      v10 += 8;
    }
    *(_QWORD*)v10 = &v13[-v12];
    *(_QWORD*)(v10 + 8) = v9;
    *(_DWORD*)(v10 + 16) = (unsigned __int64)((char*)v7 - v9) >> 2;
    *(_BYTE*)(v10 + 20) = 1;
    *(_QWORD*)(a1 + 40) = v10 + 24;
  }
  if ((unsigned __int64)(v3 + 3) > *(_QWORD*)(a1 + 8)) {
    result = SdkRoutine_64b750(a1, (__int64)(v3 + 1),
                               4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 2));
    v7 = *(_DWORD**)a1;
  }
  *v7 = -1610412460;
  v7[1] = a2;
  v15 = v7 + 2;
  v16 = *(char**)(a1 + 72);
  if (v7 + 2 == (_DWORD*)v16) {
    v22 = *(_QWORD*)(a1 + 40);
  }
  else {
    v17 = *(_QWORD*)(a1 + 40);
    v18 = *(_QWORD*)(a1 + 48);
    v19 = *(_QWORD*)(a1 + 56);
    v20 = &v16[*(_QWORD*)(a1 + 96)];
    *(_QWORD*)a1 = v15;
    *(_QWORD*)(a1 + 72) = v15;
    if (v17 + 32 > v18) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(a1);
      v17 = *(_QWORD*)(a1 + 40);
    }
    v21 = *(_QWORD*)(a1 + 88);
    if (v21 != 0) {
      *(_DWORD*)(v21 + 4) =
          (((unsigned __int64)*(unsigned int*)(v21 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v17 + 8) = 0;
      *(_QWORD*)(v17 + 16) = 0;
      *(_QWORD*)(v17 + 24) = 0;
      *(_QWORD*)v17 = 0x100000003LL;
      *(_QWORD*)(a1 + 88) = v17;
      v17 += 8;
    }
    *(_QWORD*)v17 = &v20[-v19];
    *(_QWORD*)(v17 + 8) = v16;
    *(_DWORD*)(v17 + 16) = (unsigned __int64)((char*)(v7 + 2) - v16) >> 2;
    *(_BYTE*)(v17 + 20) = 5;
    v22 = v17 + 24;
    *(_QWORD*)(a1 + 40) = v22;
  }
  if ((unsigned __int64)(v22 + 32) > *(_QWORD*)(a1 + 48)) {
    result = ((__int64 (*)(__int64))SdkRoutine_64b940)(a1);
    v22 = *(_QWORD*)(a1 + 40);
  }
  v23 = *(_QWORD*)(a1 + 88);
  if (v23 != 0) {
    *(_DWORD*)(v23 + 4) =
        (((unsigned __int64)*(unsigned int*)(v23 + 4) << 32) + 0x100000000LL) >>
        32;
  }
  else {
    *(_QWORD*)(v22 + 8) = 0;
    *(_QWORD*)(v22 + 16) = 0;
    *(_QWORD*)(v22 + 24) = 0;
    *(_QWORD*)v22 = 0x100000003LL;
    *(_QWORD*)(a1 + 88) = v22;
    v22 += 8;
  }
  *(_QWORD*)v22 = a3;
  *(_QWORD*)(v22 + 8) = 0;
  *(_DWORD*)(v22 + 16) = 2;
  *(_BYTE*)(v22 + 20) = *(_BYTE*)(v22 + 20) & 0xF8 | 2;
  *(_QWORD*)a1 = v15;
  v24 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 40) = v22 + 24;
  if ((unsigned __int64)(v7 + 3) > v24) {
    result = SdkRoutine_64b750(a1, (__int64)(v7 + 2),
                               4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 1));
    v15 = *(_DWORD**)a1;
  }
  v25 = *(unsigned int*)(a1 + 24);
  if ((unsigned int)v25 <= 4) {
    *v15++ = SdkData_c77cf4[v25];
  }
  *(_QWORD*)a1 = v15;
  return result;
}

double nn_683580(__int64 a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  double result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  if (*(_DWORD*)(*(_QWORD*)(a1 + 112) + 7292LL) != 147371889) {
    v3 = *(_QWORD*)a1;
    if ((unsigned __int64)(*(_QWORD*)a1 + 28LL) > *(_QWORD*)(a1 + 8)) {
      v4 = (__int64*)a1;
      v5 = a2;
      v6 = a3;
      SdkRoutine_64b750(a1, *(_QWORD*)a1,
                        4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 7)),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(double, "d0", "=w"));
      v3 = *v4;
      a3 = v6;
      a2 = v5;
      a1 = (__int64)v4;
    }
    *(_DWORD*)(v3 + 16) = a3 + a2;
    *(_DWORD*)v3 = 537133562;
    *(_DWORD*)(v3 + 4) = HIDWORD(a2);
    *(_DWORD*)(v3 + 8) = a2;
    *(_DWORD*)(v3 + 12) = (unsigned __int64)(a3 + a2) >> 32;
    *(_QWORD*)(v3 + 20) = 0x8000068B80000519LL;
    *(_QWORD*)a1 = v3 + 28;
    *(_QWORD*)&result = 0x8000068B80000519LL;
  }
  return result;
}

double nn_684d90(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v3;

  v3 = *(_QWORD*)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 12LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1, v3, 4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 3));
    v3 = *(_QWORD*)a1;
  }
  *(_DWORD*)(v3 + 8) = a2;
  *(_QWORD*)v3 = 0x1000000A0020E48LL;
  *(_QWORD*)a1 = v3 + 12;
  return 0x1.00000a0020e48p-1007;
}

double nn_684e00(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v3;

  v3 = *(_QWORD*)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 12LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1, v3, 4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 3));
    v3 = *(_QWORD*)a1;
  }
  *(_DWORD*)(v3 + 8) = a2;
  *(_QWORD*)v3 = 0x1800000A0022E48LL;
  *(_QWORD*)a1 = v3 + 12;
  return 0x1.00000a0022e48p-999;
}

double nn_685160(__int64 a1, unsigned __int8 a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  int v8;
  int v9;
  char v10;
  int v11;
  unsigned int v12;
  int v13;
  char v14;
  double result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  if (*(_DWORD*)(*(_QWORD*)(a1 + 11352) + 7292LL) != 147371889) {
    v2 = a2;
    if (a2 != *(unsigned __int8*)(a1 + 7994)) {
      v3 = *(_QWORD*)(a1 + 11240);
      if ((unsigned __int64)(v3 + 48) > *(_QWORD*)(a1 + 11248)) {
        v4 = a1;
        SdkRoutine_64b750(a1 + 11240, v3,
                          4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 12)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(double, "d0", "=w"));
        v3 = *(_QWORD*)(v4 + 11240);
        a1 = v4;
      }
      v5 = 304;
      if (v2 == 0) {
        v5 = 300;
      }
      *(_QWORD*)v3 = 0x300002001036FLL;
      v6 = *(_QWORD*)(*(_QWORD*)(a1 + 11352) + 288LL);
      v7 = *(_BYTE*)(v6 + 288);
      v8 = *(_DWORD*)(v6 + 284);
      v9 = *(_DWORD*)(v6 + v5);
      v10 = *(_BYTE*)(v6 + 296);
      v11 = 1 << v7;
      if (v2 == 0) {
        v11 = 0;
      }
      v12 = 0xFFFFFFFF >> -*(_BYTE*)(v6 + 289) << v7;
      v13 = *(_DWORD*)(v6 + 292);
      v14 = *(_BYTE*)(v6 + 297);
      *(_DWORD*)(v3 + 16) = v11;
      *(_DWORD*)(v3 + 20) = v12;
      *(_DWORD*)(v3 + 32) = v9 << v10;
      *(_DWORD*)(v3 + 36) = 0xFFFFFFFF >> -v14 << v10;
      *(_DWORD*)(v3 + 8) = -1610412520;
      *(_DWORD*)(v3 + 12) = v8;
      *(_DWORD*)(v3 + 24) = -1610412520;
      *(_DWORD*)(v3 + 28) = v13;
      *(_QWORD*)(v3 + 40) = 0x300012001036FLL;
      *(_QWORD*)(a1 + 11240) = v3 + 48;
      *(_BYTE*)(a1 + 7994) = v2;
      *(_QWORD*)&result = 0x300012001036FLL;
    }
  }
  return result;
}

__int64 nn_685bd0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  bool v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 result;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *(_DWORD*)(a1 + 360) = -513;
  memset_plt_alt1((void*)(a1 + 368), nullptr, 3912, a4),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *(_DWORD*)(a1 + 4280) = 256;
  *(_BYTE*)(a1 + 5976) = 0;
  v6 = *(_DWORD*)(a1 + 356);
  *(_DWORD*)(a1 + 5980) = (v6 & 8) == 0;
  if ((v6 & 0x14) != 0) {
    v7 = 32;
  }
  else {
    v7 = 31;
  }
  *(_DWORD*)(a1 + 5984) = v7;
  memset_plt_alt1((void*)(a1 + 5992), nullptr, 1864, v5),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v9 = *(_QWORD*)(a1 + 10784);
  v10 = *(_DWORD*)(a1 + 11060);
  v11 = v9 + *(unsigned int*)(a1 + 11056);
  v12 = v10 == 0;
  *(_DWORD*)(a1 + 5912) = v10;
  v13 = *(_DWORD*)(a1 + 11068);
  if (v12) {
    v11 = 0;
  }
  *(_QWORD*)(a1 + 5904) = v11;
  *(_QWORD*)(a1 + 5916) = 0;
  v14 = *(unsigned int*)(a1 + 11064);
  v12 = v13 == 0;
  *(_DWORD*)(a1 + 5936) = v13;
  v15 = *(_DWORD*)(a1 + 11076);
  v16 = v9 + v14;
  if (v12) {
    v16 = 0;
  }
  v12 = v15 == 0;
  *(_DWORD*)(a1 + 5960) = v15;
  v17 = *(_DWORD*)(a1 + 328);
  *(_QWORD*)(a1 + 5928) = v16;
  *(_QWORD*)(a1 + 5940) = 0;
  v18 = v9 + *(unsigned int*)(a1 + 11072);
  if (v12) {
    v18 = 0;
  }
  *(_QWORD*)(a1 + 5952) = v18;
  if (v17 == 52928) {
    v19 = 2;
  }
  else {
    v19 = 0;
  }
  *(_QWORD*)(a1 + 5964) = 0;
  if (v17 == 51648) {
    v19 = 1;
  }
  *(_DWORD*)(a1 + 4540) = v19;
  *(_OWORD*)(a1 + 4284) = (__typeof__(*(_OWORD*)(a1 + 4284))){0};
  *(_OWORD*)(a1 + 4300) = (__typeof__(*(_OWORD*)(a1 + 4300))){0};
  *(_OWORD*)(a1 + 4316) = (__typeof__(*(_OWORD*)(a1 + 4316))){0};
  *(_OWORD*)(a1 + 4332) = (__typeof__(*(_OWORD*)(a1 + 4332))){0};
  *(_OWORD*)(a1 + 4348) = (__typeof__(*(_OWORD*)(a1 + 4348))){0};
  *(_OWORD*)(a1 + 4364) = (__typeof__(*(_OWORD*)(a1 + 4364))){0};
  *(_OWORD*)(a1 + 4380) = (__typeof__(*(_OWORD*)(a1 + 4380))){0};
  *(_OWORD*)(a1 + 4396) = (__typeof__(*(_OWORD*)(a1 + 4396))){0};
  *(_OWORD*)(a1 + 4412) = (__typeof__(*(_OWORD*)(a1 + 4412))){0};
  *(_OWORD*)(a1 + 4428) = (__typeof__(*(_OWORD*)(a1 + 4428))){0};
  *(_OWORD*)(a1 + 4444) = (__typeof__(*(_OWORD*)(a1 + 4444))){0};
  *(_OWORD*)(a1 + 4460) = (__typeof__(*(_OWORD*)(a1 + 4460))){0};
  *(_OWORD*)(a1 + 4476) = (__typeof__(*(_OWORD*)(a1 + 4476))){0};
  *(_OWORD*)(a1 + 4492) = (__typeof__(*(_OWORD*)(a1 + 4492))){0};
  *(_OWORD*)(a1 + 4508) = (__typeof__(*(_OWORD*)(a1 + 4508))){0};
  *(_OWORD*)(a1 + 4524) = (__typeof__(*(_OWORD*)(a1 + 4524))){0};
  if (v17 == 52928) {
    *(_DWORD*)(a1 + 4516) = 1;
    *(_DWORD*)(a1 + 4352) = 1;
    v7 <<= 16;
    *(_DWORD*)(a1 + 4340) = 5243136;
    *(_DWORD*)(a1 + 4360) = 196608;
    v20 = *(_QWORD*)(a1 + 11144);
    *(_DWORD*)(a1 + 4344) = v20;
    *(_DWORD*)(a1 + 4348) = HIDWORD(v20) & 0x1FFFFFF;
    *(_DWORD*)(a1 + 4320) = 19;
    v21 = 0x1000000;
  }
  else {
    *(_DWORD*)(a1 + 4364) = 1;
    *(_DWORD*)(a1 + 4388) = 1;
    *(_DWORD*)(a1 + 4356) = 48;
    *(_DWORD*)(a1 + 4328) = 67305472;
    v22 = *(_QWORD*)(a1 + 11144);
    *(_DWORD*)(a1 + 4380) = v22;
    *(_DWORD*)(a1 + 4384) = BYTE4(v22) | 0x44800000;
    v21 = 64;
  }
  *(_DWORD*)(a1 + 4300) = v7 | v21;
  result = memset_plt_alt1((void*)(a1 + 4544), nullptr, 1360, v8),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v24 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 5600) = v9 + *(unsigned int*)(a1 + 11040);
  if ((*(_BYTE*)(v24 + 9) & 2) != 0) {
    result = (__int64)nn_6717d0(a1),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v24 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 7856) = result;
  }
  v25 = *(_QWORD*)(a1 + 11240);
  if ((unsigned __int64)(v25 + 2048) > *(_QWORD*)(a1 + 11248)) {
    result = SdkRoutine_64b750(
        a1 + 11240, v25, 4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 512)),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v25 = *(_QWORD*)(a1 + 11240);
  }
  *(_OWORD*)v25 = SdkData_bb1f60;
  v26 = v25 + 16;
  if ((*(_BYTE*)(a1 + 356) & 8) != 0) {
    *(_OWORD*)(v25 + 16) = SdkData_bb1890;
    *(_OWORD*)(v25 + 32) = SdkData_bb3c80;
    *(_QWORD*)(v25 + 48) = 0x8001236C801F236BLL;
    if (*(_DWORD*)(v24 + 140) *
            (unsigned int)((double)(unsigned int)(*(_DWORD*)(v24 + 172) /
                                                  *(_DWORD*)(v24 + 140)) *
                           0x1.999999999999ap-2) <=
        1) {
      v27 = 1;
    }
    else {
      v27 = *(_DWORD*)(v24 + 140) *
            (unsigned int)((double)(unsigned int)(*(_DWORD*)(v24 + 172) /
                                                  *(_DWORD*)(v24 + 140)) *
                           0x1.999999999999ap-2);
    }
    *(_DWORD*)(v25 + 56) = 536944796;
    *(_DWORD*)(v25 + 60) = v27 & 0x1FF | 0x1000000;
    v26 = v25 + 64;
    *(_DWORD*)(a1 + 11452) = 0;
    *(_DWORD*)(a1 + 11456) = v27;
  }
  v28 = *(_DWORD*)(v24 + 184);
  if (v28 > 2056) {
    if (v28 == 2057) {
      v29 = -2012667708;
      goto LABEL_37;
    }
    if (v28 == 2564) {
      *(_DWORD*)(v26 + 8) = 65616;
      v30 = 12;
      *(_QWORD*)v26 = 0x200120A28A0420C4LL;
      goto LABEL_38;
    }
    goto LABEL_35;
  }
  if ((unsigned int)(v28 - 2054) >= 3) {
    if (v28 == 1797) {
      v29 = -2029707068;
      goto LABEL_37;
    }
  LABEL_35:
    v29 = -2029838140;
    goto LABEL_37;
  }
  v29 = -2012864316;
LABEL_37:
  *(_DWORD*)v26 = v29;
  v30 = 4;
LABEL_38:
  *(_QWORD*)(a1 + 11240) = v26 + v30;
  v31 = *(_DWORD*)(a1 + 356);
  if ((v31 & 0x14) != 0) {
    if ((v31 & 4) == 0) {
      return result;
    }
  }
  else {
    result = SdkRoutine_689bc0(a1),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if ((*(_DWORD*)(a1 + 356) & 4) == 0) {
      return result;
    }
  }
  SdkRoutine_68a1d0(a1, 1u),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v32 = *(_QWORD*)(a1 + 7920);
  v33 = *(_QWORD*)(a1 + 11240);
  if (*(_BYTE*)(v32 + 7928) == 1) {
    if ((unsigned __int64)(v33 + 36) > *(_QWORD*)(a1 + 11248)) {
      SdkRoutine_64b750(a1 + 11240, v33,
                        4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 9)),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v33 = *(_QWORD*)(a1 + 11240);
      v32 = *(_QWORD*)(a1 + 7920);
    }
    v34 = *(_QWORD*)(v32 + 10784) + *(unsigned int*)(v32 + 11104);
    *(_DWORD*)(v33 + 8) = 919;
    *(_QWORD*)(v33 + 12) = v34;
    *(_QWORD*)v33 = 0x4A0062E66LL;
    *(_OWORD*)(v33 + 20) = SdkData_bb30e0;
    v33 += 36;
    *(_QWORD*)(a1 + 11240) = v33;
  }
  if ((unsigned __int64)(v33 + 4) > *(_QWORD*)(a1 + 11248)) {
    SdkRoutine_64b750(a1 + 11240, v33,
                      4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 1)),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v33 = *(_QWORD*)(a1 + 11240);
  }
  if ((*(_DWORD*)(a1 + 356) & 4) != 0) {
    v35 = ((*(_DWORD*)(a1 + 216) & 0x3F) << 20) | 0x80012E90;
  }
  else {
    v35 = -2147406192;
  }
  *(_DWORD*)v33 = v35;
  *(_QWORD*)(a1 + 11240) = v33 + 4;
  return SdkRoutine_689bc0(a1);
}

__int64 nn_687020(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6,
                  __int64 a7, unsigned int a8, _OWORD* a9)
{
  int v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  int v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  char v28;
  __int64 v29;
  int v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  _BYTE* v35;
  int v36;
  __int64 v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  _DWORD* v43;
  _DWORD* v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  int v54;
  __int64 v55;
  char* v56;
  char* v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  _BYTE* v61;
  char* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int* v66;
  __int64 v67;
  unsigned __int64 v68;
  _DWORD* v69;
  _DWORD* v70;
  unsigned __int64 v71;
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
  __int64 v82;
  unsigned __int64 v83;
  __int128 v84;
  __int128 v85;
  __int64 v86;
  __int64 result;
  _DWORD* v88;
  __int128 v89;
  __int128 v90;
  unsigned int v91;
  _DWORD* v92;
  _DWORD* v93;
  int v94;
  int v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  _DWORD* v99;
  __int64 v100;
  void(__attribute__((noreturn)) * v101)(_QWORD*, _DWORD*, __int64);
  __int64 v103;
  unsigned __int64 v105;
  __int64 v106;
  unsigned int v109;
  _BYTE* v110;
  _DWORD* var8[3];
  _QWORD vars30[6];

  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v110 = (_BYTE*)(a2 + 32);
  if (*(_BYTE*)(a2 + 32) == 1) {
    v14 = *(unsigned __int16*)(a2 + 50);
    v15 = 16;
    if (*(_BYTE*)(a1 + 5976) != 0) {
      v14 = ((v14 + 15) & 0x1FFF0) + 48;
    }
    v16 = (v14 + 255) & 0x7FF00;
    v109 = v14 - 16;
  }
  else {
    v16 = 1536;
    if (*(_BYTE*)(a1 + 5976) != 0) {
      v17 = 256;
    }
    else {
      v17 = 512;
    }
    v15 = v17;
    v109 = 1360 - v17;
  }
  v18 = (unsigned int)(v16 + 256);
  v19 = SdkRoutine_6859f0(a1 + 5904, a1, (unsigned int)v18),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v20 = *(_QWORD*)(a1 + 8);
  v21 = v19 + 256;
  *(_DWORD*)(a1 + 5056) = a3;
  *(_DWORD*)(a1 + 5060) = a4;
  *(_QWORD*)(a1 + 8) = v20 + v18;
  *(_DWORD*)(a1 + 5064) = a5;
  if (*(_BYTE*)(a1 + 5976) == 1) {
    *(_QWORD*)(a1 + 4840) = v19;
  }
  v22 = *(_DWORD*)(a7 + 256);
  v23 = 48;
  v24 = v15;
  if (v22 > 1) {
    v23 = 156;
  }
  v25 = 52;
  if (v22 > 1) {
    v25 = 160;
  }
  *(_DWORD*)(a7 + v23) = a3;
  *(_WORD*)(a7 + v25) = a4;
  if (v22 <= 1) {
    v26 = 56;
  }
  else {
    v26 = 164;
  }
  *(_WORD*)(a7 + v26) = a5;
  if (v22 < 2) {
    v30 = 0x1FFFF;
    v27 = 393216;
    v28 = 32;
    v29 = 33;
    *(_DWORD*)(a7 + 128) = v21;
  }
  else {
    v27 = 0;
    v28 = 38;
    v29 = 43;
    *(_DWORD*)(a7 + 168) = v21 >> 6;
    v30 = 0x7FFFF;
  }
  v105 = v19 + 256;
  v106 = v19;
  *(_DWORD*)(a7 + 4 * v29) =
      v27 & *(_DWORD*)(a7 + 4 * v29) | v30 & (v21 >> v28) | (v16 << 15);
  v31 = *(_DWORD*)(a7 + 16);
  if (v22 == 2) {
    v32 = v31 & 0xFFC0FFFF | ((*(_DWORD*)(a1 + 5984) & 0x3F) << 16);
  }
  else {
    v32 = v31 & 0xFFFFFFC0 | *(_DWORD*)(a1 + 5984) & 0x3F;
  }
  v33 = a8;
  *(_DWORD*)(a7 + 16) = v32;
  SdkRoutine_6a0900(a1, a7, a6),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (a8 != 0) {
    v24 = 0;
    v109 = a8;
    v35 = (_BYTE*)(a1 + 11408);
    if (a6 != 0) {
      v36 = 11;
    }
    else {
      v36 = 14;
    }
    v37 = a1 + 11240;
    v38 = v36 + (a8 >> 2);
    if (*(_BYTE*)(a1 + 11408) != 1) {
      goto LABEL_43;
    }
  }
  else {
    a9 = (_OWORD*)(a1 + 4544);
    if (a6 != 0) {
      v39 = 4;
    }
    else {
      v39 = 7;
    }
    if (*(_BYTE*)(a1 + 11408) != 1) {
      v35 = (_BYTE*)(a1 + 11408);
      v42 = v109 >> 2;
      if (*v110 != 0) {
        v42 = (v109 >> 2) + 4;
      }
      v38 = v42 + v39;
      v37 = a1 + 11240;
      goto LABEL_43;
    }
    v35 = (_BYTE*)(a1 + 11408);
    if (*(_BYTE*)(a1 + 5976) != 0) {
      v40 = 19;
    }
    else {
      v40 = 2;
    }
    v38 = v40 + v39;
    v37 = a1 + 11240;
  }
  if (*v110 != 2) {
    v41 = v38 + 5;
    goto LABEL_44;
  }
LABEL_43:
  v41 = v38 + 55;
LABEL_44:
  v44 = *(_DWORD**)(a1 + 11248);
  var8[0] = *(_DWORD**)(a1 + 11240);
  v43 = var8[0];
  if (&var8[0][v41] > v44) {
    v45 = v37;
    SdkRoutine_64b750(v37, (__int64)var8[0],
                      4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + v41)),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v43 = *(_DWORD**)(a1 + 11240);
    v37 = v45;
  }
  v46 = *(_QWORD*)(a1 + 11144);
  if (*(_DWORD*)(a7 + 256) == 2) {
    v47 = *(_DWORD*)(a7 + 36);
    v48 = HIDWORD(v46) & 0x1FFFFFF | (*(_DWORD*)(a7 + 64) >> 25 << 25);
    *(_DWORD*)(a7 + 60) = v46;
    *(_DWORD*)(a7 + 64) = v48;
    *(_DWORD*)(a7 + 68) = 1;
    *(_DWORD*)(a7 + 36) = v47 & 0xFFFFEC00 | 0x13;
  }
  else {
    v49 = *(_DWORD*)(a7 + 100);
    *(_DWORD*)(a7 + 96) = v46;
    *(_DWORD*)(a7 + 100) = BYTE4(v46) | v49 & 0x1807FF00 | 0x44800000;
    *(_DWORD*)(a7 + 104) = 1;
  }
  if (*(_BYTE*)(a1 + 11136) == 1) {
    v50 = *(_DWORD*)(a1 + 11168) + *(_DWORD*)(a1 + 11153);
    *v43 = 536944813;
    v43[1] = v50;
    v43[2] = -2146688848;
    v43 += 3;
    v51 = *(_DWORD*)(a1 + 11168) + *(_DWORD*)(a1 + 11153);
    v52 = 64;
    if (*(_DWORD*)(a7 + 256) == 2) {
      v52 = 40;
      v53 = -983041;
    }
    else {
      v53 = -16;
    }
    if (*(_DWORD*)(a7 + 256) == 2) {
      v54 = 589824;
    }
    else {
      v54 = 9;
    }
    v55 = 60;
    if (*(_DWORD*)(a7 + 256) == 2) {
      v55 = 48;
    }
    *(_DWORD*)(a7 + v52) = v53 & *(_DWORD*)(a7 + v52) | v54;
    *(_DWORD*)(a7 + v55) = v51;
  }
  *v43 = -1610404236;
  v56 = (char*)(v43 + 1);
  var8[0] = v43 + 1;
  if (a6 != 0) {
    v57 = *(char**)(a1 + 11312);
    *(_QWORD*)(a1 + 11240) = v56;
    if (v56 == v57) {
      v43 = *(_DWORD**)(a1 + 11280);
    }
    else {
      v58 = *(_QWORD*)(a1 + 11280);
      v59 = *(_QWORD*)(a1 + 11296);
      v60 = (unsigned __int64)(v56 - v57) >> 2;
      v61 = v35;
      v62 = &v57[*(_QWORD*)(a1 + 11336)];
      v63 = *(_QWORD*)(a1 + 11288);
      *(_QWORD*)(a1 + 11312) = v56;
      if (v58 + 32 > v63) {
        v64 = v37;
        ((void (*)(void))SdkRoutine_64b940)(),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v58 = *(_QWORD*)(a1 + 11280);
        v37 = v64;
      }
      v65 = *(_QWORD*)(a1 + 11328);
      if (v65 != 0) {
        *(_DWORD*)(v65 + 4) =
            (((unsigned __int64)*(unsigned int*)(v65 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v58 + 8) = 0;
        *(_QWORD*)(v58 + 16) = 0;
        *(_QWORD*)(v58 + 24) = 0;
        *(_QWORD*)v58 = 0x100000003LL;
        *(_QWORD*)(a1 + 11328) = v58;
        v58 += 8;
      }
      *(_DWORD*)(v58 + 16) = v60;
      v33 = a8;
      *(_QWORD*)v58 = &v62[-v59];
      *(_QWORD*)(v58 + 8) = v57;
      v35 = v61;
      *(_BYTE*)(v58 + 20) = 1;
      v43 = (_DWORD*)(v58 + 24);
      *(_QWORD*)(a1 + 11280) = v43;
    }
    if ((unsigned __int64)(v43 + 8) > *(_QWORD*)(a1 + 11288)) {
      ((void (*)(__int64))SdkRoutine_64b940)(v37),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v43 = *(_DWORD**)(a1 + 11280);
    }
    v67 = *(_QWORD*)(a1 + 11328);
    if (v67 != 0) {
      *(_DWORD*)(v67 + 4) =
          (((unsigned __int64)*(unsigned int*)(v67 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *((_QWORD*)v43 + 1) = 0;
      *((_QWORD*)v43 + 2) = 0;
      *((_QWORD*)v43 + 3) = 0;
      *(_QWORD*)v43 = 0x100000003LL;
      *(_QWORD*)(a1 + 11328) = v43;
      v43 += 2;
    }
    *(_QWORD*)v43 = a6;
    *((_QWORD*)v43 + 1) = 0;
    v43[4] = 3;
    *((_BYTE*)v43 + 20) = v43[5] & 0xF8 | 2;
    *(_QWORD*)(a1 + 11280) = v43 + 6;
    v66 = *(unsigned int**)(a1 + 11240);
  }
  else {
    v66 = v43 + 4;
    v43[1] = a3;
    v43[2] = a4;
    v43[3] = a5;
  }
  var8[0] = v66;
  if (v33 == 0) {
    if (*v110 != 0) {
      if (*v35 == 0) {
        v91 = ((*(unsigned __int16*)(a2 + 50) << 16) + 983040) & 0xFFF00000 |
              v109;
        *v66 = ((v109 << 14) + 196608) & 0x1FFF0000 | 0xA0002E7A;
        v66[1] = v91;
        v66[2] = HIDWORD(v105);
        v66[3] = v105;
        var8[0] = v66 + 4;
        SdkRoutine_687a20(var8, a1, (__int64)v110),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v70 = var8[0];
        goto LABEL_77;
      }
      v71 = v106;
      *v66 = 536948396;
      v66[1] = v105 >> 8;
      if (*(_BYTE*)(a1 + 5976) == 1) {
        v83 = ((*(unsigned __int16*)(a2 + 50) + 15) & 0x1FFF0) + v105;
        *((_QWORD*)v66 + 1) = 0x30A0032E82LL;
        v66[4] = HIDWORD(v83);
        v66[5] = v83;
        v66[6] = 1611407469;
        var8[0] = v66 + 7;
        v85 = a9[17];
        v84 = a9[18];
        *(_OWORD*)(v66 + 7) = a9[16];
        *(_OWORD*)(v66 + 11) = v85;
        *(_OWORD*)(v66 + 15) = v84;
        v70 = v66 + 19;
        goto LABEL_78;
      }
    }
    else {
      if (*v35 == 0) {
        v92 = v66 + 4;
        v93 = v66 + 4;
        v94 = 32 - (v24 >> 4);
        v95 = (v24 >> 4) + (v109 >> 4) - 33;
        v96 = v105 + v24;
        *v66 = ((v109 >> 4 << 18) + 536805376) & 0x1FFF0000 | 0xA0002E78;
        v66[1] = (v109 << 16) | (v95 << 8) | v94;
        var8[0] = v66 + 4;
        v66[2] = HIDWORD(v96);
        v66[3] = v96;
        v97 = v24 & 0x3FC;
        v98 = (unsigned int)(4 * v94);
        memcpy_plt(v93, (char*)a9 + v97, v98 * 4),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v99 = &v92[v98];
        memcpy_plt(v99, a9 + 33, 4LL * (unsigned int)(4 * v95)),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v70 = &v99[4 * v95];
        goto LABEL_77;
      }
      v71 = v106;
      *v66 = 536948400;
      v66[1] = (unsigned __int64)(v106 + 768) >> 8;
      if (*(_BYTE*)(a1 + 5976) == 1) {
        v66[6] = 1611407469;
        v88 = v66 + 6;
        *(v88 - 2) = (unsigned __int64)(v106 + 512) >> 32;
        *(v88 - 1) = v106 + 512;
        var8[0] = v88;
        *((_QWORD*)v88 - 2) = 0x30A0032E82LL;
        v90 = a9[16];
        v89 = a9[17];
        *(_OWORD*)(v88 + 9) = a9[18];
        *(_OWORD*)(v88 + 1) = v90;
        *(_OWORD*)(v88 + 5) = v89;
        v70 = v88 + 13;
        goto LABEL_78;
      }
    }
    v70 = v66 + 2;
    goto LABEL_78;
  }
  v68 = v105 + v24;
  v69 = v66 + 5;
  *v66 = -1610404222;
  v66[1] = v109 & 0xFFFFFFFC;
  var8[0] = v66 + 5;
  v66[2] = HIDWORD(v68);
  v66[3] = v68;
  v66[4] = (v109 >> 2 << 16) | 0x6000206D;
  memcpy_plt(v66 + 5, (char*)a9 + (v24 & 0x3FC), v109),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v70 = &v69[v109 >> 2];
LABEL_77:
  v71 = v106;
LABEL_78:
  *v70 = -2147471740;
  var8[0] = v70 + 1;
  if (*v35 == 1 && *v110 != 2) {
    v86 = *(_QWORD*)(a7 + 128);
    v70[1] = -1610404184;
    v70[2] = v71 >> 8;
    v82 = 5;
    *(_QWORD*)(v70 + 3) = v86;
  }
  else {
    v70[1] = -1607127434;
    v70[2] = v71 >> 8;
    v72 = *(_OWORD*)a7;
    v73 = *(_OWORD*)(a7 + 16);
    *(_OWORD*)(v70 + 11) = *(_OWORD*)(a7 + 32);
    *(_OWORD*)(v70 + 7) = v73;
    *(_OWORD*)(v70 + 3) = v72;
    v74 = *(_OWORD*)(a7 + 60);
    v75 = *(_OWORD*)(a7 + 76);
    v76 = *(_OWORD*)(a7 + 92);
    v70[27] = *(_DWORD*)(a7 + 108);
    *(_OWORD*)(v70 + 23) = v76;
    *(_OWORD*)(v70 + 19) = v75;
    *(_OWORD*)(v70 + 15) = v74;
    v78 = *(_OWORD*)(a7 + 192);
    v77 = *(_OWORD*)(a7 + 208);
    v79 = *(_OWORD*)(a7 + 176);
    v70[52] = *(_DWORD*)(a7 + 224);
    *((_OWORD*)v70 + 11) = v78;
    *((_OWORD*)v70 + 12) = v77;
    *((_OWORD*)v70 + 10) = v79;
    v80 = *(_OWORD*)(a7 + 128);
    v81 = *(_OWORD*)(a7 + 160);
    *((_OWORD*)v70 + 8) = *(_OWORD*)(a7 + 144);
    *((_OWORD*)v70 + 9) = v81;
    *((_OWORD*)v70 + 7) = v80;
    *(_QWORD*)(v70 + 53) = *(_QWORD*)(a7 + 248);
    v82 = 55;
  }
  result = a1;
  *(_QWORD*)(a1 + 11240) = &v70[v82];
  v100 = *(_QWORD*)(a1 + 7888);
  v101 = *(void(__attribute__((noreturn))**)(_QWORD*, _DWORD*, __int64))(
      (char*)((_UNKNOWN*)0x190LL) + (_QWORD)SdkData_e89eb0);
  if (v101 != nullptr && v100 != 0) {
    vars30[4] = var8[1];
    vars30[5] = var8[2];
    v103 = *(_QWORD*)(v100 + 16);
    vars30[2] = v100;
    vars30[0] = 0x2000040005LL;
    vars30[1] = v103;
    v101(vars30, v43, v34),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  return result;
}

__int64 nn_6886c0(__int64 result, int a2)
{
  unsigned int* v3;
  __int64 v4;
  __int64 v5;
  unsigned int* v6;
  unsigned int v7;
  unsigned int* v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  unsigned int* v17;
  int v18;
  unsigned int* v19;
  __int64 v20;
  _BYTE* v21;

  v3 = *(unsigned int**)result;
  v4 = result;
  if ((unsigned __int64)(*(_QWORD*)result + 4LL) > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, (__int64)v3,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 1));
    v3 = *(unsigned int**)v4;
  }
  v5 = *(unsigned int*)(v4 + 24);
  if ((unsigned int)v5 <= 4) {
    *v3++ = SdkData_c8eb70[v5];
  }
  *(_QWORD*)v4 = v3;
  if ((a2 & 0x80000000) == 0 && *(_DWORD*)(v4 + 24) != 2) {
    result = (__int64)SdkRoutine_69aee0((int*)&v21, 20, 0, 4, 1, a2);
    v6 = *(unsigned int**)v4;
    if ((unsigned __int64)(*(_QWORD*)v4 + 8LL) > *(_QWORD*)(v4 + 8)) {
      result = SdkRoutine_64b750(
          v4, (__int64)v6, 4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 2));
      v6 = *(unsigned int**)v4;
    }
    *v6 = -1610535284;
    v6[1] = (unsigned int)v21;
    v3 = v6 + 2;
    *(_QWORD*)v4 = v3;
  }
  v7 = a2 & 0x800;
  if ((a2 & 8) != 0) {
    result = (__int64)nvidia_64ac60((_QWORD*)v4, &v21, 8u);
    *v21 = 94;
    *(_QWORD*)v21 = *(_QWORD*)v21 & 0xFFFFFFFFFFFF00FFLL | (v7 >> 3);
    v3 = *(unsigned int**)v4;
  }
  if ((unsigned __int64)(v3 + 6) > *(_QWORD*)(v4 + 8)) {
    result = SdkRoutine_64b750(v4, (__int64)v3,
                               4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 6));
    v3 = *(unsigned int**)v4;
  }
  if ((a2 & 0x408) == 0) {
    if ((a2 & 1) != 0) {
      v8 = v3;
      result = (__int64)nvidia_64ac60((_QWORD*)v4, &v21, 8u);
      v3 = v8;
      *v21 = 89;
      *(_QWORD*)v21 = *(_QWORD*)v21 & 0xFFFFFFFFFFFF00FFLL | (v7 >> 3);
      if ((a2 & 0x10) != 0) {
        goto LABEL_25;
      }
    }
    else if ((a2 & 0x10) != 0) {
      goto LABEL_25;
    }
  LABEL_19:
    if ((a2 & 0x20) != 0) {
      goto LABEL_26;
    }
  LABEL_20:
    if ((a2 & 0x40) != 0) {
      goto LABEL_27;
    }
  LABEL_21:
    *(_QWORD*)v4 = v3;
    if ((a2 & 0x100) != 0) {
      goto LABEL_28;
    }
    goto LABEL_22;
  }
  *v3++ = -2147475392;
  if ((a2 & 0x10) == 0) {
    goto LABEL_19;
  }
LABEL_25:
  *v3++ = -2147474270;
  if ((a2 & 0x20) == 0) {
    goto LABEL_20;
  }
LABEL_26:
  *v3++ = -1877924442;
  if ((a2 & 0x40) == 0) {
    goto LABEL_21;
  }
LABEL_27:
  *(_QWORD*)v3 = 0x8000250980002091LL;
  v3 += 2;
  *(_QWORD*)v4 = v3;
  if ((a2 & 0x100) != 0) {
  LABEL_28:
    result = SdkRoutine_69a140(v4, 1, 1);
    v3 = *(unsigned int**)v4;
    if ((a2 & 0x408) == 0) {
      goto LABEL_36;
    }
    goto LABEL_29;
  }
LABEL_22:
  if ((a2 & 0x408) == 0) {
    goto LABEL_36;
  }
LABEL_29:
  v9 = *(char**)(v4 + 72);
  v10 = (char*)v3 - v9;
  if (v3 != (unsigned int*)v9) {
    v11 = *(_QWORD*)(v4 + 96);
    *(_QWORD*)v4 = v3;
    *(_QWORD*)(v4 + 72) = v3;
    v12 = *(_QWORD*)(v4 + 40);
    v13 = v10 >> 2;
    v14 = &v9[v11];
    v15 = *(_QWORD*)(v4 + 56);
    if ((unsigned __int64)(v12 + 32) > *(_QWORD*)(v4 + 48)) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v4);
      v12 = *(_QWORD*)(v4 + 40);
    }
    v16 = *(_QWORD*)(v4 + 88);
    if (v16 != 0) {
      *(_DWORD*)(v16 + 4) =
          (((unsigned __int64)*(unsigned int*)(v16 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v12 + 8) = 0;
      *(_QWORD*)(v12 + 16) = 0;
      *(_QWORD*)(v12 + 24) = 0;
      *(_QWORD*)v12 = 0x100000003LL;
      *(_QWORD*)(v4 + 88) = v12;
      v12 += 8;
    }
    *(_QWORD*)v12 = &v14[-v15];
    *(_QWORD*)(v12 + 8) = v9;
    *(_DWORD*)(v12 + 16) = v13;
    *(_BYTE*)(v12 + 20) = 7;
    *(_QWORD*)(v4 + 40) = v12 + 24;
  }
LABEL_36:
  if (a2 < 0 || *(_DWORD*)(v4 + 24) == 2) {
    v19 = *(unsigned int**)v4;
  }
  else {
    result = (__int64)SdkRoutine_69aee0((int*)&v21, 21, 0, 4, 0, 0);
    v17 = *(unsigned int**)v4;
    v18 = (int)v21;
    if ((unsigned __int64)(*(_QWORD*)v4 + 4LL) > *(_QWORD*)(v4 + 8)) {
      result = SdkRoutine_64b750(
          v4, (__int64)v17, 4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 1));
      v17 = *(unsigned int**)v4;
    }
    *v17 = (v18 << 16) | 0x80002E8C;
    v19 = v17 + 1;
    *(_QWORD*)v4 = v19;
  }
  if ((unsigned __int64)(v19 + 1) > *(_QWORD*)(v4 + 8)) {
    result = SdkRoutine_64b750(v4, (__int64)v19,
                               4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 1));
    v19 = *(unsigned int**)v4;
  }
  v20 = *(unsigned int*)(v4 + 24);
  if ((unsigned int)v20 <= 4) {
    *v19++ = SdkData_c77cf4[v20];
  }
  *(_QWORD*)v4 = v19;
  return result;
}

int** nn_688a40(int** result, __int64 a2, __int64 a3, int a4, char a5)
{
  int* v6;
  int v7;
  int** v9;
  int v10;
  _DWORD* v11;
  bool v12;
  __int64 v13;
  unsigned int v14;

  if (a4 >= 1) {
    v6 = *result;
    v7 = a4;
    v9 = result;
    if ((a5 & 1) != 0) {
      v10 = -1610404218;
    }
    else {
      v10 = -1610404222;
    }
    do {
      if ((unsigned int)v7 >= 0x1910) {
        v13 = 6416;
      }
      else {
        v13 = (unsigned int)v7;
      }
      v14 = (unsigned int)(v13 + 3) >> 2;
      if (&v6[v14 + 7] > v9[1]) {
        SdkRoutine_64b750((__int64)v9, (__int64)v6,
                          4LL * (*((_DWORD*)v9 + 26) + v14 + 7));
        v6 = *v9;
      }
      v11 = v6 + 5;
      *v6 = v10;
      v6[1] = v13;
      v6[2] = HIDWORD(a2);
      v6[3] = a2;
      v6[4] = (((_DWORD)v13 << 14) + 49152) & 0xFFF0000 | 0x6000206D;
      result = (int**)memcpy_plt(v6 + 5, a3, v13);
      v6 = &v11[v14];
      a3 += v13;
      v12 = __OFSUB__(v7, (_DWORD)v13);
      v7 -= v13;
      *v9 = v6;
      a2 += ((_WORD)v13 + 3) & 0x3FFC;
    } while (!((v7 < 0) ^ v12 | (v7 == 0)));
  }
  return result;
}

__int64 nn_688b60(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6;
  unsigned __int64 v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int128 v15;
  __int128 v16;
  __int64 result;
  __int16 v18;
  __int128 v19;
  int v20;
  struct {
    _QWORD v21[4];
    __int128 v22;
  } v21_;
  _QWORD v23[8];
  _DWORD v24[68];

  if ((((unsigned __int8)(a3 | a2) | (unsigned __int8)a4) & 0xF) != 0) {
    if ((((unsigned __int8)(a3 | a2) | (unsigned __int8)a4) & 7) != 0) {
      if ((((unsigned __int8)(a3 | a2) | (unsigned __int8)a4) & 3) != 0) {
        v6 = ((unsigned __int8)(a3 | a2) | (unsigned __int8)a4) & 1;
        v7 = 2 - v6;
        v8 = 8 - v6;
      }
      else {
        v8 = 9;
        v7 = 4;
      }
    }
    else {
      v8 = 10;
      v7 = 8;
    }
  }
  else {
    v8 = 11;
    v7 = 16;
  }
  v9 = *(_DWORD*)(a1 + 328);
  memset(v24, 0, 64);
  if (v9 == 52928) {
    v10 = 2;
  }
  else {
    v10 = 0;
  }
  if (v9 == 51648) {
    v10 = 1;
  }
  memset(&v24[16], 0, 192);
  v24[64] = v10;
  if (v9 == 52928) {
    v24[58] = 1;
    v24[14] = 5243136;
    v24[19] = 196608;
    v11 = 0x1000000;
  }
  else {
    v24[20] = 1;
    v24[18] = 48;
    v11 = 64;
    v24[11] = 67305472;
  }
  v24[4] = v11;
  v12 = *(_QWORD*)(a1 + 16);
  v21_.v22 = (__typeof__(v21_.v22)){0};
  memset(v23, 0, sizeof(v23));
  v13 = v12 + 40LL * v8;
  v14 = *(_DWORD*)(v13 + 2600);
  v15 = *(_OWORD*)(v13 + 2568);
  v16 = *(_OWORD*)(v13 + 2584);
  *(_QWORD*)&v19 = a2;
  *((_QWORD*)&v19 + 1) = a3;
  LOBYTE(v21_.v22) = 2;
  v20 = a4;
  LODWORD(v23[1]) = v14;
  *(_OWORD*)v21_.v21 = v15;
  *(_OWORD*)&v21_.v21[2] = v16;
  HIDWORD(v23[2]) = 1;
  *(_QWORD*)((char*)&v23[1] + 4) = 0x100000020LL;
  result = SdkRoutine_688090(a1, (__int64)v21_.v21, v24, v14, 0, 1);
  v18 = *(_WORD*)(a1 + 360);
  if ((v18 & 0x200) != 0) {
    result = nn_687020(a1, (__int64)v21_.v21,
                       ((a4 >> __clz(__rbit64(v7))) + 31) >> 5, 1, 1, 0,
                       (__int64)v24, 0x18u, &v19);
    ++*(_DWORD*)(a1 + 11140);
    v18 = *(_WORD*)(a1 + 360);
  }
  *(_WORD*)(a1 + 360) = v18 | 0x101;
  return result;
}

double nn_695b00(__int64 a1, unsigned __int64 a2, unsigned int a3)
{

#pragma clang fp contract(off)
  _DWORD* v3;
  __int64 v5;
  int v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  int v12;
  int v13;
  int v14;
  _DWORD* v15;
  unsigned __int64 v16;
  unsigned int v18;

  v3 = *(_DWORD**)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 11240);
  v9 = v3[44];
  v8 = v3[45];
  v10 = v3[43];
  *(_DWORD*)(a1 + 7872) = a3;
  *(_DWORD*)(a1 + 7876) = (a3 / (v10 * v8 * v9)) & 0xFFFFFE00;
  *(_DWORD*)(a1 + 4280) = 256;
  v11 = *(_QWORD*)(a1 + 11248);
  *(_WORD*)(a1 + 360) |= 0x102u;
  if (v5 + 68 > v11) {
    SdkRoutine_64b750(a1 + 11240, v5,
                      4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 17));
    v5 = *(_QWORD*)(a1 + 11240);
    v3 = *(_DWORD**)(a1 + 16);
  }
  v12 = v3[43];
  v15 = v3 + 44;
  v13 = v3[44];
  v14 = v15[1];
  if ((*(_BYTE*)(a1 + 356) & 4) != 0) {
    v16 = HIDWORD(a2);
  }
  else {
    *(_DWORD*)(v5 + 8) = a2;
    *(_DWORD*)(v5 + 12) = 0;
    *(_DWORD*)(v5 + 16) = a3;
    *(_DWORD*)v5 = 537133540;
    *(_DWORD*)(v5 + 4) = HIDWORD(a2);
    v5 += 20;
    LODWORD(v16) = HIDWORD(a2);
  }
  *(_DWORD*)v5 = 537010660;
  *(_DWORD*)(v5 + 4) = v16;
  *(_DWORD*)(v5 + 8) = a2;
  *(_QWORD*)(v5 + 12) = 537075897;
  *(_QWORD*)(v5 + 24) = 0xA0042EA600000100LL;
  v18 = ((a3 / (v13 * v14 * v12)) & 0xFFFFFE00) * v13 * v14;
  *(_DWORD*)(v5 + 32) = 197521;
  *(_DWORD*)(v5 + 36) = v18;
  *(_DWORD*)(v5 + 20) = v18;
  *(_DWORD*)(v5 + 40) = v18;
  *(_DWORD*)(v5 + 44) = a3;
  *(_QWORD*)(a1 + 7864) = a2;
  *(_QWORD*)(a1 + 11240) = v5 + 48;
  return -0x1.42ea600000100p-511;
}

__int64 nn_695c40(__int64 result, int a2, __int64* a3, __int64** a4, __int64 a5,
                  __int64* a6)
{
  _DWORD* v7;
  __int64 v11;
  __int64 v12;
  char v13;
  int32x2_t v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  __int64** v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  int v23;
  unsigned __int64 v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned __int64 v31;
  int v32;
  unsigned __int32 v33;
  int v34;
  bool v36;
  __int64 v37;
  int v38;
  unsigned __int64 v39;
  char v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  int v45;
  __int64 v46;
  int v47;
  int v48;
  unsigned int v49;
  int32x2_t v50;
  int32x2_t v51;
  int v52;
  __int64 v53;
  int8x8_t v54;
  _BOOL4 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  bool v59;
  int v60;
  int v61;
  unsigned int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  bool v68;
  signed int v69;
  int8x8_t v70;
  int32x2_t v71;
  int v72;
  int v73;
  unsigned int v74;
  unsigned __int64 v75;
  int v76;
  int v77;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  int v82;
  unsigned __int64 v83;
  int v84;
  unsigned __int64 v85;
  int v86;
  int v87;
  unsigned __int64 v88;
  int v89;
  int8x8_t v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  char v96;
  int v97;
  int v98;
  unsigned __int64 v99;
  int v100;
  unsigned __int64 v101;

  v7 = *(_DWORD**)result;
  v11 = result;
  if ((unsigned __int64)(*(_QWORD*)result + 196LL) > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, (__int64)v7,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 49));
    v7 = *(_DWORD**)v11;
  }
  v12 = (__int64)(v7 + 2);
  v80 = a5;
  v79 = a2;
  v13 = 0;
  *v7 = 536937607;
  v7[1] = a2 & 0xF | 0xFAC6880;
  if (a2 >= 1) {
    PSEUDO_LOW_LANE64(v14, n64_u64, 0xFFFF0000FFFFLL);
    v15 = (unsigned int)a2;
    v16 = 31;
    v17 = 2064;
    v18 = a4;
    while (1) {
      v20 = *a3++;
      v19 = v20;
      if (v20 != 0) {
        break;
      }
      *(_DWORD*)v12 = (v17 >> 2) | 0x80000000;
      v12 += 4;
    LABEL_26:
      if ((unsigned __int64)(v12 + 196) > *(_QWORD*)(v11 + 8)) {
        result = SdkRoutine_64b750(
            v11, v12, 4LL * (unsigned int)(*(_DWORD*)(v11 + 104) + 49));
        v12 = *(_QWORD*)v11;
      }
      v17 += 64;
      ++v18;
      if (--v15 == 0) {
        goto LABEL_29;
      }
    }
    if (a4 != nullptr) {
      v21 = *v18;
      if (*v18 != nullptr && (*v21 & 0x2000000000000000LL) != 0) {
        v22 = *v21 << 8 >> 56;
      LABEL_14:
        result = SdkRoutine_66a6d0(v19, (__int64)&v88, v21);
        v23 = v88;
        v24 = HIDWORD(v88);
        if (v92 == 2) {
          v25 = v98;
          v26 = v91;
          v27 = v95 & 0xF | (unsigned __int8)(16 * (v96 & 0xF)) |
                ((v97 & 0xF) << 8);
          if (v22 == 2) {
            v27 |= 0x10000u;
          }
          v28 = 64 / v100;
          v29 = v93;
          *(_DWORD*)(v12 + 16) = v94;
          *(_DWORD*)v12 = ((v17 - 16) >> 2) | 0x20080000;
          *(_DWORD*)(v12 + 4) = v24;
          *(_DWORD*)(v12 + 8) = v23;
          *(_DWORD*)(v12 + 12) = (v29 + v25 * v28 - 1) & -(v25 * v28);
          v30 = *((_DWORD*)SdkData_e89ba0 + 12 * SHIDWORD(v101) + 8);
          *(_DWORD*)(v12 + 28) = v26;
          *(_DWORD*)(v12 + 20) = v30;
          *(_DWORD*)(v12 + 24) = v27;
          v31 = v99 >> 2;
        }
        else {
          v32 = v89;
          v33 = LANES64(v90).n64_u32[1];
          LODWORD(v31) = 0;
          *(_DWORD*)v12 = ((v17 - 16) >> 2) | 0x20080000;
          *(_DWORD*)(v12 + 4) = v24;
          *(_DWORD*)(v12 + 8) = v23;
          *(_DWORD*)(v12 + 12) = v32;
          *(_DWORD*)(v12 + 16) = v33;
          v34 = *((_DWORD*)SdkData_e89ba0 + 12 * SHIDWORD(v101) + 8);
          *(_QWORD*)(v12 + 24) = 0x100001000LL;
          *(_DWORD*)(v12 + 20) = v34;
        }
        *(_DWORD*)(v12 + 32) = v31;
        v12 += 36;
        v16 = v101;
        LANES64(v14).n64_u64[0] = LANES64_OF(vmin_s32(v14, v90)).n64_u64[0];
        v36 = (*(_QWORD*)(v19 + 40) & 0xFE000000LL) == 0x4000000 && v91 > 1;
        v13 |= v36;
        goto LABEL_26;
      }
    }
    else {
      v21 = nullptr;
    }
    v22 = (__int64)(int)*(_QWORD*)(v19 + 40) >> 25;
    goto LABEL_14;
  }
  PSEUDO_LOW_LANE64(v14, n64_u64, 0xFFFF0000FFFFLL);
  v16 = 31;
LABEL_29:
  if (v79 >= 8) {
    v37 = v80;
  }
  else {
    v37 = v80;
    *(_DWORD*)v12 = (16 * v79) | 0x80000204;
    if (v79 == 7) {
      v12 += 4;
    }
    else {
      *(_DWORD*)(v12 + 4) = (16 * (v79 + 1)) | 0x80000204;
      if (v79 == 6) {
        v12 += 8;
      }
      else {
        *(_DWORD*)(v12 + 8) = (16 * (v79 + 2)) | 0x80000204;
        if (v79 == 5) {
          v12 += 12;
        }
        else {
          *(_DWORD*)(v12 + 12) = (16 * (v79 + 3)) | 0x80000204;
          if (v79 == 4) {
            v12 += 16;
          }
          else {
            *(_DWORD*)(v12 + 16) = (16 * (v79 + 4)) | 0x80000204;
            if (v79 == 3) {
              v12 += 20;
            }
            else {
              *(_DWORD*)(v12 + 20) = (16 * (v79 + 5)) | 0x80000204;
              if (v79 == 2) {
                v12 += 24;
              }
              else {
                *(_DWORD*)(v12 + 24) = (16 * (v79 + 6)) | 0x80000204;
                if (v79 == 1) {
                  v12 += 28;
                }
                else {
                  *(_DWORD*)(v12 + 28) = (16 * (v79 + 7)) | 0x80000204;
                  v12 += 32;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((unsigned __int64)(v12 + 196) > *(_QWORD*)(v11 + 8)) {
    result = SdkRoutine_64b750(
        v11, v12, 4LL * (unsigned int)(*(_DWORD*)(v11 + 104) + 49));
    v12 = *(_QWORD*)v11;
  }
  if (v37 == 0) {
    v47 = 31;
    *(_OWORD*)v12 = SdkData_bb0ec0;
    v46 = v12 + 16;
    goto LABEL_103;
  }
  if ((unsigned __int64)(v12 + 392) > *(_QWORD*)(v11 + 8)) {
    SdkRoutine_64b750(v11, v12,
                      4LL * (unsigned int)(*(_DWORD*)(v11 + 104) + 98));
    v12 = *(_QWORD*)v11;
  }
  SdkRoutine_66a6d0(v37, (__int64)&v88, a6);
  v38 = v88;
  v39 = HIDWORD(v88);
  v40 = *((_DWORD*)SdkData_e89ba0 + 12 * SHIDWORD(v101) + 8);
  *(_DWORD*)v12 = 537199608;
  *(_DWORD*)(v12 + 4) = v39;
  *(_DWORD*)(v12 + 8) = v38;
  *(_DWORD*)(v12 + 12) = v40 & 0x1F;
  v41 = LANES64(v90).n64_u32[0];
  *(_DWORD*)(v12 + 16) =
      v95 & 0xF | (unsigned __int8)(16 * (v96 & 0xF)) | ((v97 & 0xF) << 8);
  *(_DWORD*)(v12 + 20) = v99 >> 2;
  v42 = LANES64(v90).n64_u32[1];
  v43 = v91;
  *(_QWORD*)(v12 + 24) = 0x8001054E8000054ELL;
  v44 = v94;
  v45 = (v93 + v98 * (64 / v100) - 1) & -(v98 * (64 / v100));
  *(_DWORD*)(v12 + 32) = 537068682;
  *(_DWORD*)(v12 + 36) = v45;
  *(_DWORD*)(v12 + 40) = v44;
  *(_DWORD*)(v12 + 44) = (unsigned __int16)v43;
  result = SdkRoutine_66a500(*(_DWORD**)(v11 + 112), (__int64)&v81, v41, v42,
                             v43, SHIDWORD(v101), *(char*)(v37 + 31),
                             *(_WORD*)(v37 + 40));
  if (*(_DWORD*)(*(_QWORD*)(v11 + 112) + 7292LL) == 147371889) {
    v46 = v12 + 48;
    goto LABEL_96;
  }
  LANES64(v51).n64_u64[0] = v83;
  v48 = v84;
  *(_DWORD*)(v12 + 48) = 537002488;
  v49 = v48 - 1;
  LANES64(v50).n64_u32[0] = LANES64_OF(vshl_n_s32(v51, 0x10u)).n64_u32[0];
  LANES64(v51).n64_u16[3] = 0;
  if (v49 >= 3) {
    v52 = -2147482254;
  }
  else {
    v52 = (v49 << 16) - 2147416718;
  }
  *(_DWORD*)(v12 + 60) = v52;
  *(_DWORD*)(v12 + 64) = 537068016;
  LANES64(v50).n64_u32[1] = LANES64(v51).n64_u32[1];
  v53 = v81;
  *(_DWORD*)(v12 + 76) = v82;
  *(_QWORD*)(v12 + 68) = v53;
  *(int32x2_t*)(v12 + 52) = v50;
  *(_DWORD*)(v12 + 88) = -2147483149;
  *(_QWORD*)(v12 + 80) = 0x800005808000057FLL;
  result = SdkRoutine_654120(*(_QWORD*)(v11 + 112));
  if ((result & 1) == 0 || (*(_QWORD*)(v37 + 40) & 0x80) == 0) {
    LANES64(v54).n64_u64[0] = v101;
    v55 = false;
    *(_DWORD*)(v12 + 100) = v88 >> 8;
    v56 = v12 + 112;
    *(_QWORD*)(v12 + 92) = 0xA0030E10800000BALL;
    *(int8x8_t*)(v12 + 104) =
        vorr_s8(vshl_n_s32(vext_s8(v90, v54, 4u), 0x10u),
                COERCE_AS(int8x8_t, __PAIR64__(LANES64(v54).n64_u32[1],
                                               LANES64(v90).n64_u32[0])));
    goto LABEL_95;
  }
  v55 = (*(_QWORD*)(v37 + 40) & 0x80LL) != 0;
  v57 = 0;
  v58 = (v86 & 0xFFFFF) << 8;
  v59 = (v86 & 0xFFFFFFFu) >= 0xFFF;
  *(_OWORD*)(v12 + 92) = SdkData_bb52d0;
  if (v59) {
    v60 = 1048321;
  }
  else {
    v60 = v58 + 1;
  }
  *(_DWORD*)(v12 + 108) = v60;
  *(_DWORD*)(v12 + 112) = 1611661502;
  v61 = 1;
  do {
    LOWORD(v62) = v86;
    v64 = (v85 >> v57) & 0xF;
    if (((v85 >> v57) & 0xF) > 8) {
      if (((v85 >> v57) & 0xF) > 0xB) {
        if ((_DWORD)v64 == 15) {
          LOWORD(v62) = 0;
        }
        if ((_DWORD)v64 == 12) {
          LOWORD(v62) = 8 * v86;
        }
      }
      else {
        if ((unsigned int)(v64 - 9) < 2) {
        LABEL_64:
          LOWORD(v62) = 2 * v86;
          goto LABEL_76;
        }
        if ((_DWORD)v64 == 11) {
          goto LABEL_75;
        }
      }
    }
    else if (((v85 >> v57) & 0xF) > 6) {
      if ((_DWORD)v64 == 7) {
        goto LABEL_73;
      }
      if ((_DWORD)v64 == 8) {
      LABEL_75:
        LOWORD(v62) = 4 * v86;
      }
    }
    else {
      if ((unsigned int)(v64 - 5) < 2) {
        goto LABEL_64;
      }
      if ((_DWORD)v64 == 0) {
      LABEL_73:
        v62 = (unsigned int)(v86 + 1) >> 1;
      }
    }
  LABEL_76:
    v65 = v12 + v57;
    *(_DWORD*)(v12 + v57 + 116) =
        v61 + (((unsigned __int16)v62 << 8) | ((_DWORD)v64 << 24)) - 1;
    LOWORD(v62) = v86;
    v66 = (v85 >> ((unsigned __int8)v57 + 4)) & 0xF;
    if (((v85 >> ((unsigned __int8)v57 + 4)) & 0xF) > 8) {
      if (((v85 >> ((unsigned __int8)v57 + 4)) & 0xF) > 0xB) {
        if ((_DWORD)v66 == 15) {
          LOWORD(v62) = 0;
        }
        if ((_DWORD)v66 == 12) {
          LOWORD(v62) = 8 * v86;
        }
      }
      else {
        if ((unsigned int)(v66 - 9) < 2) {
        LABEL_55:
          LOWORD(v62) = 2 * v86;
          goto LABEL_56;
        }
        if ((_DWORD)v66 == 11) {
          goto LABEL_87;
        }
      }
    }
    else {
      if (((v85 >> ((unsigned __int8)v57 + 4)) & 0xF) > 6) {
        if ((_DWORD)v66 != 7) {
          if ((_DWORD)v66 != 8) {
            goto LABEL_56;
          }
        LABEL_87:
          LOWORD(v62) = 4 * v86;
          goto LABEL_56;
        }
      LABEL_93:
        v62 = (unsigned int)(v86 + 1) >> 1;
        goto LABEL_56;
      }
      if ((unsigned int)(v66 - 5) < 2) {
        goto LABEL_55;
      }
      if ((_DWORD)v66 == 0) {
        goto LABEL_93;
      }
    }
  LABEL_56:
    v57 += 8;
    v63 = v61 + (((unsigned __int16)v62 << 8) | ((_DWORD)v66 << 24));
    v61 += 2;
    *(_DWORD*)(v65 + 120) = v63;
  } while (v57 != 64);
  *(_DWORD*)(v12 + 180) = 536936668;
  *(_DWORD*)(v12 + 184) = (16 * (v87 & 7)) | 1;
  *(_QWORD*)(v12 + 188) = 0x1200100BFLL;
  v56 = v12 + 196;
LABEL_95:
  v46 = v56 + 12;
  *(_DWORD*)(v56 + 8) = v55;
  *(_QWORD*)v56 = 0x544A0020E68LL;
LABEL_96:
  v47 = v101;
  LANES64(v14).n64_u64[0] = LANES64_OF(vmin_s32(v14, v90)).n64_u64[0];
  v68 = (*(_QWORD*)(v37 + 40) & 0xFE000000LL) == 0x4000000 && v91 > 1;
  v13 |= v68;
LABEL_103:
  if ((unsigned __int64)(v46 + 196) > *(_QWORD*)(v11 + 8)) {
    result = SdkRoutine_64b750(
        v11, v46, 4LL * (unsigned int)(*(_DWORD*)(v11 + 104) + 49));
    v46 = *(_QWORD*)v11;
  }
  v69 = *(_DWORD*)(*(_QWORD*)(v11 + 112) + 64LL);
  *(_DWORD*)v46 = 537003005;
  LANES64(v70).n64_u64[0] =
      LANES64_OF(vorr_s8(vdup_n_s32(v69 < 1), vclez_s32(v14))).n64_u64[0];
  LANES64(v71).n64_u64[0] = LANES64_OF(vdup_n_s32(v69)).n64_u64[0];
  if (v16 == 31) {
    v72 = v47;
  }
  else {
    v72 = v16;
  }
  if (v72 == 31) {
    v73 = -2;
  }
  else {
    v73 = v72 - 2;
  }
  HIDWORD(v75) = v73;
  LODWORD(v75) = v73;
  v74 = v75 >> 1;
  *(int8x8_t*)(v46 + 4) = vand_s8(vcgez_s32(vshl_n_s32(v70, 0x1Fu)),
                                  vshl_n_s32(vmin_u32(v14, v71), 0x10u));
  if (v74 > 7) {
    v76 = -2147482252;
  }
  else {
    v76 = SdkData_bb0530[v74];
  }
  if ((v13 & 1) != 0) {
    v77 = -2147414382;
  }
  else {
    v77 = -2147479918;
  }
  *(_DWORD*)(v46 + 12) = v76;
  *(_DWORD*)(v46 + 16) = v77;
  *(_QWORD*)v11 = v46 + 20;
  if (v37 != 0 && (((__int64)(*(_QWORD*)(v37 + 40) << 39) >> 55) | 2) == 0x36) {
    result = (__int64)nvidia_64ac60((_QWORD*)v11, &v88, 0x10u);
    *(_BYTE*)v88 = 32;
    *(_DWORD*)(v88 + 8) = *(unsigned __int16*)(v37 + 120);
  }
  return result;
}

__int64 nn_696650(__int64 result, int a2)
{
  unsigned int v2;
  __int64 v4;
  int* v5;
  int v6;
  bool v7;
  int* v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  bool v23;
  int* v24;
  int v25;
  int v26;
  int* v27;
  __int64 v28;
  _BYTE* v29;

  v2 = *(_DWORD*)(result + 24);
  v4 = result;
  if (v2 == 4) {
    return nn_6886c0(result, a2);
  }
  if (v2 != 2) {
    if (v2 == 1) {
      return nn_6886c0(result, a2);
    }
    v5 = *(int**)result;
    if ((unsigned __int64)(*(_QWORD*)result + 4LL) <= *(_QWORD*)(result + 8)) {
      if (v2 > 4) {
      LABEL_7:
        *(_QWORD*)v4 = v5;
        if (a2 < 0) {
          goto LABEL_24;
        }
        goto LABEL_11;
      }
    }
    else {
      result =
          SdkRoutine_64b750(result, (__int64)v5,
                            4LL * (unsigned int)(*(_DWORD*)(result + 104) + 1));
      v5 = *(int**)v4;
      v2 = *(_DWORD*)(v4 + 24);
      if (v2 > 4) {
        goto LABEL_7;
      }
    }
    *v5++ = SdkData_c8eb70[v2];
    *(_QWORD*)v4 = v5;
    if (a2 < 0) {
      goto LABEL_24;
    }
  LABEL_11:
    if (*(_DWORD*)(v4 + 24) != 2) {
      result = (__int64)SdkRoutine_69aee0((int*)&v29, 20, 0, 4, 1, a2);
      v6 = *(_DWORD*)(v4 + 24);
      v7 = v6 == 1 || v6 == 4;
      v8 = *(int**)v4;
      v9 = v7;
      if ((unsigned __int64)(v8 + 2) > *(_QWORD*)(v4 + 8)) {
        result = SdkRoutine_64b750(
            v4, (__int64)v8, 4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 2));
        v8 = *(int**)v4;
      }
      if (v9 != 0) {
        v10 = -1610535284;
      }
      else {
        v10 = -1610543476;
      }
      *v8 = v10;
      v8[1] = (int)v29;
      v5 = v8 + 2;
      *(_QWORD*)v4 = v5;
    }
  LABEL_24:
    if ((a2 & 8) != 0) {
      result = (__int64)nvidia_64ac60((_QWORD*)v4, &v29, 8u);
      *v29 = 94;
      v29[1] = (a2 & 0x800) != 0;
      v5 = *(int**)v4;
    }
    if ((unsigned __int64)(v5 + 8) > *(_QWORD*)(v4 + 8)) {
      result = SdkRoutine_64b750(
          v4, (__int64)v5, 4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 8));
      v5 = *(int**)v4;
    }
    if ((a2 & 0x408) != 0) {
      v11 = -2147475392;
    }
    else {
      if ((a2 & 1) == 0) {
        v12 = -2147482659;
        v11 = -2147351688;
        if ((a2 & 2) == 0) {
          if ((a2 & 4) == 0) {
            v12 = -2147482462;
            goto LABEL_37;
          }
          v11 = -2147351585;
        }
      LABEL_36:
        *v5++ = v11;
      LABEL_37:
        if ((a2 & 0x10) != 0) {
          *v5++ = v12;
          if ((a2 & 0x20) == 0) {
          LABEL_39:
            if ((a2 & 0x40) == 0) {
              goto LABEL_40;
            }
            goto LABEL_47;
          }
        }
        else if ((a2 & 0x20) == 0) {
          goto LABEL_39;
        }
        *v5++ = -1877933207;
        if ((a2 & 0x40) == 0) {
        LABEL_40:
          if ((a2 & 0x80) == 0) {
            goto LABEL_41;
          }
          goto LABEL_48;
        }
      LABEL_47:
        *(_QWORD*)v5 = 0x800005098000050ALL;
        v5 += 2;
        if ((a2 & 0x80) == 0) {
        LABEL_41:
          if ((a2 & 0x200) == 0) {
            goto LABEL_42;
          }
          goto LABEL_49;
        }
      LABEL_48:
        *v5++ = -2145844046;
        if ((a2 & 0x200) == 0) {
        LABEL_42:
          *(_QWORD*)v4 = v5;
          if ((a2 & 0x100) == 0) {
            goto LABEL_43;
          }
          goto LABEL_50;
        }
      LABEL_49:
        *(_QWORD*)v5 = 0x8000009F80000044LL;
        v5 += 2;
        *(_QWORD*)v4 = v5;
        if ((a2 & 0x100) == 0) {
        LABEL_43:
          if ((a2 & 0x408) == 0) {
          LABEL_58:
            if (a2 < 0 || *(_DWORD*)(v4 + 24) == 2) {
              v27 = *(int**)v4;
            }
            else {
              result = (__int64)SdkRoutine_69aee0((int*)&v29, 21, 1, 4, 0, 0);
              v21 = *(_DWORD*)(v4 + 24);
              v22 = (int)v29;
              v23 = v21 == 1 || v21 == 4;
              v24 = *(int**)v4;
              v25 = v23;
              if ((unsigned __int64)(v24 + 1) > *(_QWORD*)(v4 + 8)) {
                result = SdkRoutine_64b750(
                    v4, (__int64)v24,
                    4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 1));
                v24 = *(int**)v4;
              }
              if (v25 != 0) {
                v26 = 0x2000;
              }
              else {
                v26 = 0;
              }
              *v24 = v26 | (v22 << 16) | 0x80000E8C;
              v27 = v24 + 1;
              *(_QWORD*)v4 = v27;
            }
            if ((unsigned __int64)(v27 + 1) > *(_QWORD*)(v4 + 8)) {
              result = SdkRoutine_64b750(
                  v4, (__int64)v27,
                  4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 1));
              v27 = *(int**)v4;
            }
            v28 = *(unsigned int*)(v4 + 24);
            if ((unsigned int)v28 <= 4) {
              *v27++ = SdkData_c77cf4[v28];
            }
            *(_QWORD*)v4 = v27;
            return result;
          }
        LABEL_51:
          v13 = *(char**)(v4 + 72);
          v14 = (char*)v5 - v13;
          if (v5 != (int*)v13) {
            v15 = *(_QWORD*)(v4 + 96);
            *(_QWORD*)v4 = v5;
            *(_QWORD*)(v4 + 72) = v5;
            v16 = *(_QWORD*)(v4 + 40);
            v17 = v14 >> 2;
            v18 = &v13[v15];
            v19 = *(_QWORD*)(v4 + 56);
            if ((unsigned __int64)(v16 + 32) > *(_QWORD*)(v4 + 48)) {
              result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v4);
              v16 = *(_QWORD*)(v4 + 40);
            }
            v20 = *(_QWORD*)(v4 + 88);
            if (v20 != 0) {
              *(_DWORD*)(v20 + 4) =
                  (((unsigned __int64)*(unsigned int*)(v20 + 4) << 32) +
                   0x100000000LL) >>
                  32;
            }
            else {
              *(_QWORD*)(v16 + 8) = 0;
              *(_QWORD*)(v16 + 16) = 0;
              *(_QWORD*)(v16 + 24) = 0;
              *(_QWORD*)v16 = 0x100000003LL;
              *(_QWORD*)(v4 + 88) = v16;
              v16 += 8;
            }
            *(_QWORD*)v16 = &v18[-v19];
            *(_QWORD*)(v16 + 8) = v13;
            *(_DWORD*)(v16 + 16) = v17;
            *(_BYTE*)(v16 + 20) = 7;
            *(_QWORD*)(v4 + 40) = v16 + 24;
          }
          goto LABEL_58;
        }
      LABEL_50:
        result = SdkRoutine_69a140(v4, 1, 1);
        v5 = *(int**)v4;
        if ((a2 & 0x408) == 0) {
          goto LABEL_58;
        }
        goto LABEL_51;
      }
      v11 = -2147483580;
    }
    v12 = -2147482462;
    goto LABEL_36;
  }
  return result;
}

double nn_697220(__int64 a1, __int64 a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned __int64 v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  _BOOL4 v12;
  _BOOL4 v13;
  int v14;
  int v15;
  double result;

  v3 = *a3;
  HIDWORD(v4) = *((_DWORD*)a3 + 19);
  LODWORD(v4) = HIDWORD(v4);
  v5 = (v4 >> 1) - 2;
  if (v5 > 6) {
    v6 = 16;
  }
  else {
    v6 = SdkData_c925a4[v5];
  }
  v7 = (*((_DWORD*)a3 + 8) +
        64 / (signed __int32)*((_DWORD*)a3 + 18) * *((_DWORD*)a3 + 14) - 1) &
       -(64 / (signed __int32)*((_DWORD*)a3 + 18) * *((_DWORD*)a3 + 14));
  v8 = 8 << *((_DWORD*)a3 + 12);
  if (v8 >= v6) {
    v8 = v6;
  }
  v9 = *((_DWORD*)a3 + 9);
  *(_DWORD*)(a2 + 8) = v3;
  *(_DWORD*)(a2 + 12) = v7;
  v10 = (v9 + v8 - 1) & -v8;
  *(_DWORD*)a2 = 537395712;
  *(_DWORD*)(a2 + 4) = HIDWORD(v3);
  *(_DWORD*)(a2 + 16) = v10;
  *(_DWORD*)(a2 + 20) = *((_DWORD*)SdkData_e89ba0 + 12 * *((int*)a3 + 20) + 8);
  *(_DWORD*)(a2 + 24) = *((_BYTE*)a3 + 44) & 0xF |
                        (unsigned __int8)(16 * (a3[6] & 0xF)) |
                        ((*((_DWORD*)a3 + 13) & 0xF) << 8);
  *(_DWORD*)(a2 + 28) = 1;
  *(_DWORD*)(a2 + 32) = (unsigned __int64)a3[8] >> 2;
  *(_DWORD*)(a2 + 36) = -2147482252;
  v11 = *(_DWORD*)(a1 + 64);
  v12 = v11 < 1;
  v13 = v7 < 1 || v11 < 1;
  if (v7 >= (unsigned int)v11) {
    v7 = *(_DWORD*)(a1 + 64);
  }
  v14 = v7 << 16;
  if (v13) {
    v14 = 0;
  }
  if (v10 < 1) {
    v12 = true;
  }
  if (v10 < (unsigned int)v11) {
    v11 = v10;
  }
  v15 = v11 << 16;
  *(_DWORD*)(a2 + 40) = 537003005;
  *(_DWORD*)(a2 + 44) = v14;
  if (v12) {
    v15 = 0;
  }
  *(_DWORD*)(a2 + 48) = v15;
  *(_QWORD*)(a2 + 52) = 0x800003ED801004EBLL;
  *(_QWORD*)&result = 0x800003ED801004EBLL;
  return result;
}

double nn_697a00(__int64 a1, __int64 a2, __int64* a3, int* a4, _DWORD* a5,
                 char a6)
{

#pragma clang fp contract(off)
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  __int64 v15;
  int v16;
  __int64 v18;
  __int64* v19;
  _DWORD* v20;
  int v21;
  __int64 v22;
  int v23;
  int v24;
  _DWORD* v25;
  unsigned __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  unsigned __int64 v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v50;
  int v51;
  int v52;
  int v53;
  unsigned __int64 v54;
  int v55;
  double result;
  __int64 v57;
  int v58;
  struct {
    unsigned __int64 v59;
    int v60;
    char gap36_[4];
    int v61;
    int v62;
    int v63;
    char gap52_[4];
    int v64;
    int v65;
    char gap64_[4];
    int v66;
    char v67;
    char gap73_[3];
    int v68;
    int v69;
    char gap84_[4];
    unsigned __int64 v70;
    int v71;
    int v72;
    int v73;
  } v59_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  v6 = a4[3];
  v7 = a4[5];
  if ((*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x6000000) {
    v7 = a4[4];
    v8 = 1;
  }
  else {
    v8 = a4[4];
  }
  if ((*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x6000000) {
    v9 = a4[1];
  }
  else {
    v9 = a4[2];
  }
  if ((*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x6000000) {
    v10 = 0;
  }
  else {
    v10 = a4[1];
  }
  if (v6 != 0 && v8 != 0 && v7 != 0) {
    if (a3 != nullptr && (v15 = *a3, (*a3 & 0x200000000000000LL) != 0)) {
      if (WORD1(v15) != 0) {
        v15 = (__int64)(int)v15 >> 16;
      }
      else {
        LODWORD(v15) = *(unsigned __int16*)(a2 + 38) - (__int16)v15;
      }
    }
    else {
      LODWORD(v15) = *(unsigned __int16*)(a2 + 38);
    }
    if ((unsigned int)v15 > v9) {
      v16 = *a4;
      if (v9 + v7 >= (unsigned int)v15) {
        v7 = v15 - v9;
      }
      v58 = v7;
      v18 = *(_QWORD*)a1;
      if ((unsigned __int64)(*(_QWORD*)a1 + 164LL) > *(_QWORD*)(a1 + 8)) {
        v19 = a3;
        v20 = a5;
        SdkRoutine_64b750(a1, *(_QWORD*)a1,
                          4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 41)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(double, "d0", "=w"));
        a3 = v19;
        v18 = *(_QWORD*)a1;
        a5 = v20;
      }
      *(_QWORD*)v18 = 0x2004036091080002LL;
      *(_DWORD*)(v18 + 8) = *a5;
      *(_DWORD*)(v18 + 12) = a5[1];
      *(_DWORD*)(v18 + 16) = a5[2];
      v21 = a5[3];
      *(_DWORD*)(v18 + 24) = -2147352503;
      *(_DWORD*)(v18 + 20) = v21;
      if (a3 != nullptr && (*a3 & 0x2000000000000000LL) != 0) {
        v22 = *a3 << 8 >> 56;
      }
      else {
        v22 = (__int64)(int)*(_QWORD*)(a2 + 40) >> 25;
      }
      v57 = v22;
      SdkRoutine_66a6d0_alt1((int*)a2, (__int64)&v59_.v59, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(double, "d0", "=w"));
      v23 = v59_.v59;
      v24 = v59_.v63;
      v25 = SdkData_e89ba0;
      v26 = HIDWORD(v59_.v59);
      if (v59_.v63 == 2) {
        v27 = v59_.v69;
        v28 = v59_.v62;
        v29 = v59_.v66 & 0xF | (unsigned __int8)(16 * (v59_.v67 & 0xF)) |
              ((v59_.v68 & 0xF) << 8) | 0x10000;
        if (v57 != 2) {
          v29 = v59_.v66 & 0xF | (unsigned __int8)(16 * (v59_.v67 & 0xF)) |
                ((v59_.v68 & 0xF) << 8);
        }
        v30 = 64 / v59_.v71;
        v32 = v59_.v64;
        v31 = v59_.v65;
        *(_DWORD*)(v18 + 28) = 537395712;
        *(_DWORD*)(v18 + 32) = v26;
        *(_DWORD*)(v18 + 44) = v31;
        *(_DWORD*)(v18 + 36) = v23;
        *(_DWORD*)(v18 + 40) = (v32 + v27 * v30 - 1) & -(v27 * v30);
        v33 = v59_.v73;
        v34 = v25[12 * v59_.v73 + 8];
        *(_DWORD*)(v18 + 56) = v28;
        *(_DWORD*)(v18 + 48) = v34;
        *(_DWORD*)(v18 + 52) = v29;
        v35 = v59_.v70 >> 2;
      }
      else {
        v36 = v59_.v60;
        v37 = v59_.v61;
        *(_DWORD*)(v18 + 28) = 537395712;
        *(_DWORD*)(v18 + 32) = v26;
        LODWORD(v35) = 0;
        *(_DWORD*)(v18 + 36) = v23;
        *(_DWORD*)(v18 + 40) = v36;
        *(_DWORD*)(v18 + 44) = v37;
        v33 = v59_.v73;
        *(_DWORD*)(v18 + 48) = v25[12 * v59_.v73 + 8];
        *(_QWORD*)(v18 + 52) = 0x100001000LL;
      }
      *(_DWORD*)(v18 + 60) = v35;
      v38 = 0;
      v39 = *(_DWORD*)(*(_QWORD*)(a1 + 112) + 64LL);
      v40 = v16 & ~(v16 >> 31);
      if ((int)v39 > v40) {
        v41 = v6 + (v16 & (v16 >> 31));
        if (v41 >= 1) {
          if (v41 + v40 >= v39) {
            v42 = v39 - v40;
          }
          else {
            v42 = v6 + (v16 & (v16 >> 31));
          }
          v38 = v40 | (v42 << 16);
        }
      }
      v43 = 0;
      v44 = v10 & ~(v10 >> 31);
      if ((int)v39 > v44) {
        v45 = (v10 & (v10 >> 31)) + v8;
        if (v45 >= 1) {
          if (v45 + v44 >= v39) {
            v46 = v39 - v44;
          }
          else {
            v46 = (v10 & (v10 >> 31)) + v8;
          }
          v43 = v44 | (v46 << 16);
        }
      }
      if ((unsigned int)(v59_.v72 - 2) > 6) {
        v47 = 0;
      }
      else {
        v47 = SdkData_c9260c[v59_.v72 - 2];
      }
      *(_DWORD*)(v18 + 72) = v43;
      *(_DWORD*)(v18 + 76) = v47;
      *(_DWORD*)(v18 + 64) = -1610412492;
      *(_DWORD*)(v18 + 68) = v38;
      v48 = v59_.v62;
      if (v59_.v62 > 1 && (*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x4000000) {
        v50 = -2147414380;
      }
      else {
        v50 = -2147479916;
      }
      *(_DWORD*)(v18 + 80) = v50;
      *(_DWORD*)(v18 + 84) = 537005580;
      *(_DWORD*)(v18 + 88) = (4 * (a6 & 0xF)) | ((unsigned __int16)v9 << 10);
      *(_DWORD*)(v18 + 92) = v58;
      *(_DWORD*)(v18 + 96) = v50;
      *(_DWORD*)(v18 + 100) = -2147286967;
      if (v24 == 2) {
        v51 = v59_.v66 & 0xF | (unsigned __int8)(16 * (v59_.v67 & 0xF)) |
              ((v59_.v68 & 0xF) << 8);
        if (v57 == 2) {
          v51 |= 0x10000u;
        }
        v52 = v59_.v65;
        v53 = (v59_.v64 + v59_.v69 * (64 / v59_.v71) - 1) &
              -(v59_.v69 * (64 / v59_.v71));
        v54 = v59_.v70 >> 2;
      }
      else {
        v53 = v59_.v60;
        v52 = v59_.v61;
        v48 = 1;
        v51 = 4096;
        LODWORD(v54) = 0;
      }
      *(_DWORD*)(v18 + 112) = v23;
      *(_DWORD*)(v18 + 116) = v53;
      *(_DWORD*)(v18 + 104) = 537395712;
      *(_DWORD*)(v18 + 108) = v26;
      *(_DWORD*)(v18 + 120) = v52;
      v55 = v25[12 * v33 + 8];
      *(_DWORD*)(v18 + 132) = v48;
      *(_DWORD*)(v18 + 136) = v54;
      *(_DWORD*)(v18 + 140) = -1610412492;
      *(_DWORD*)(v18 + 144) = v38;
      *(_DWORD*)(v18 + 148) = v43;
      *(_DWORD*)(v18 + 152) = v47;
      *(_DWORD*)(v18 + 124) = v55;
      *(_DWORD*)(v18 + 128) = v51;
      result = -0x1.0000280010049p-751;
      *(_QWORD*)(v18 + 156) = 0x9100000280010049LL;
      *(_QWORD*)a1 = v18 + 164;
    }
  }
  return result;
}

double nn_697e10(__int64 a1, __int64 a2, __int64* a3, int* a4, _DWORD* a5,
                 char a6)
{

#pragma clang fp contract(off)
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  __int64 v15;
  int v16;
  __int64 v18;
  __int64* v19;
  _DWORD* v20;
  __int64 v21;
  int v22;
  int v23;
  _DWORD* v24;
  unsigned __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v49;
  int v50;
  int v51;
  int v52;
  unsigned __int64 v53;
  int v54;
  double result;
  __int64 v56;
  int v57;
  struct {
    unsigned __int64 v58;
    int v59;
    char gap36_[4];
    int v60;
    int v61;
    int v62;
    char gap52_[4];
    int v63;
    int v64;
    char gap64_[4];
    int v65;
    char v66;
    char gap73_[3];
    int v67;
    int v68;
    char gap84_[4];
    unsigned __int64 v69;
    int v70;
    int v71;
    int v72;
  } v58_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  v6 = a4[3];
  v7 = a4[5];
  if ((*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x6000000) {
    v7 = a4[4];
    v8 = 1;
  }
  else {
    v8 = a4[4];
  }
  if ((*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x6000000) {
    v9 = a4[1];
  }
  else {
    v9 = a4[2];
  }
  if ((*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x6000000) {
    v10 = 0;
  }
  else {
    v10 = a4[1];
  }
  if (v6 != 0 && v8 != 0 && v7 != 0) {
    if (a3 != nullptr && (v15 = *a3, (*a3 & 0x200000000000000LL) != 0)) {
      if (WORD1(v15) != 0) {
        v15 = (__int64)(int)v15 >> 16;
      }
      else {
        LODWORD(v15) = *(unsigned __int16*)(a2 + 38) - (__int16)v15;
      }
    }
    else {
      LODWORD(v15) = *(unsigned __int16*)(a2 + 38);
    }
    if ((unsigned int)v15 > v9) {
      v16 = *a4;
      if (v9 + v7 >= (unsigned int)v15) {
        v7 = v15 - v9;
      }
      v57 = v7;
      v18 = *(_QWORD*)a1;
      if ((unsigned __int64)(*(_QWORD*)a1 + 164LL) > *(_QWORD*)(a1 + 8)) {
        v19 = a3;
        v20 = a5;
        SdkRoutine_64b750(a1, *(_QWORD*)a1,
                          4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 41)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(double, "d0", "=w"));
        a3 = v19;
        v18 = *(_QWORD*)a1;
        a5 = v20;
      }
      *(_QWORD*)v18 = 0x2004036091080002LL;
      *(_DWORD*)(v18 + 8) = *a5;
      *(_DWORD*)(v18 + 12) = a5[1];
      *(_DWORD*)(v18 + 16) = a5[2];
      *(_DWORD*)(v18 + 20) = a5[3];
      *(_DWORD*)(v18 + 24) = -2147352503;
      if (a3 != nullptr && (*a3 & 0x2000000000000000LL) != 0) {
        v21 = *a3 << 8 >> 56;
      }
      else {
        v21 = (__int64)(int)*(_QWORD*)(a2 + 40) >> 25;
      }
      v56 = v21;
      SdkRoutine_66a6d0_alt1((int*)a2, (__int64)&v58_.v58, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(double, "d0", "=w"));
      v22 = v58_.v58;
      v23 = v58_.v62;
      v24 = SdkData_e89ba0;
      v25 = HIDWORD(v58_.v58);
      if (v58_.v62 == 2) {
        v26 = v58_.v68;
        v27 = v58_.v61;
        v28 = v58_.v65 & 0xF | (unsigned __int8)(16 * (v58_.v66 & 0xF)) |
              ((v58_.v67 & 0xF) << 8) | 0x10000;
        if (v56 != 2) {
          v28 = v58_.v65 & 0xF | (unsigned __int8)(16 * (v58_.v66 & 0xF)) |
                ((v58_.v67 & 0xF) << 8);
        }
        v29 = 64 / v58_.v70;
        v31 = v58_.v63;
        v30 = v58_.v64;
        *(_DWORD*)(v18 + 28) = 537395712;
        *(_DWORD*)(v18 + 32) = v25;
        *(_DWORD*)(v18 + 44) = v30;
        *(_DWORD*)(v18 + 36) = v22;
        *(_DWORD*)(v18 + 40) = (v31 + v26 * v29 - 1) & -(v26 * v29);
        v32 = v58_.v72;
        v33 = v24[12 * v58_.v72 + 8];
        *(_DWORD*)(v18 + 56) = v27;
        *(_DWORD*)(v18 + 48) = v33;
        *(_DWORD*)(v18 + 52) = v28;
        v34 = v58_.v69 >> 2;
      }
      else {
        v35 = v58_.v59;
        v36 = v58_.v60;
        *(_DWORD*)(v18 + 28) = 537395712;
        *(_DWORD*)(v18 + 32) = v25;
        LODWORD(v34) = 0;
        *(_DWORD*)(v18 + 36) = v22;
        *(_DWORD*)(v18 + 40) = v35;
        *(_DWORD*)(v18 + 44) = v36;
        v32 = v58_.v72;
        *(_DWORD*)(v18 + 48) = v24[12 * v58_.v72 + 8];
        *(_QWORD*)(v18 + 52) = 0x100001000LL;
      }
      *(_DWORD*)(v18 + 60) = v34;
      v37 = 0;
      v38 = *(_DWORD*)(*(_QWORD*)(a1 + 112) + 64LL);
      v39 = v16 & ~(v16 >> 31);
      if ((int)v38 > v39) {
        v40 = v6 + (v16 & (v16 >> 31));
        if (v40 >= 1) {
          if (v40 + v39 >= v38) {
            v41 = v38 - v39;
          }
          else {
            v41 = v6 + (v16 & (v16 >> 31));
          }
          v37 = v39 | (v41 << 16);
        }
      }
      v42 = 0;
      v43 = v10 & ~(v10 >> 31);
      if ((int)v38 > v43) {
        v44 = (v10 & (v10 >> 31)) + v8;
        if (v44 >= 1) {
          if (v44 + v43 >= v38) {
            v45 = v38 - v43;
          }
          else {
            v45 = (v10 & (v10 >> 31)) + v8;
          }
          v42 = v43 | (v45 << 16);
        }
      }
      if ((unsigned int)(v58_.v71 - 2) > 6) {
        v46 = 0;
      }
      else {
        v46 = SdkData_c9260c[v58_.v71 - 2];
      }
      *(_DWORD*)(v18 + 72) = v42;
      *(_DWORD*)(v18 + 76) = v46;
      *(_DWORD*)(v18 + 64) = -1610412492;
      *(_DWORD*)(v18 + 68) = v37;
      v47 = v58_.v61;
      if (v58_.v61 > 1 && (*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x4000000) {
        v49 = -2147414380;
      }
      else {
        v49 = -2147479916;
      }
      *(_DWORD*)(v18 + 80) = v49;
      *(_DWORD*)(v18 + 84) = 537005580;
      *(_DWORD*)(v18 + 88) = (4 * (a6 & 0xF)) | ((unsigned __int16)v9 << 10);
      *(_DWORD*)(v18 + 92) = v57;
      *(_DWORD*)(v18 + 96) = v49;
      *(_DWORD*)(v18 + 100) = -2147286967;
      if (v23 == 2) {
        v50 = v58_.v65 & 0xF | (unsigned __int8)(16 * (v58_.v66 & 0xF)) |
              ((v58_.v67 & 0xF) << 8);
        if (v56 == 2) {
          v50 |= 0x10000u;
        }
        v51 = v58_.v64;
        v52 = (v58_.v63 + v58_.v68 * (64 / v58_.v70) - 1) &
              -(v58_.v68 * (64 / v58_.v70));
        v53 = v58_.v69 >> 2;
      }
      else {
        v52 = v58_.v59;
        v51 = v58_.v60;
        v47 = 1;
        v50 = 4096;
        LODWORD(v53) = 0;
      }
      *(_DWORD*)(v18 + 112) = v22;
      *(_DWORD*)(v18 + 116) = v52;
      *(_DWORD*)(v18 + 104) = 537395712;
      *(_DWORD*)(v18 + 108) = v25;
      *(_DWORD*)(v18 + 120) = v51;
      v54 = v24[12 * v32 + 8];
      *(_DWORD*)(v18 + 132) = v47;
      *(_DWORD*)(v18 + 136) = v53;
      *(_DWORD*)(v18 + 140) = -1610412492;
      *(_DWORD*)(v18 + 144) = v37;
      *(_DWORD*)(v18 + 148) = v42;
      *(_DWORD*)(v18 + 152) = v46;
      *(_DWORD*)(v18 + 124) = v54;
      *(_DWORD*)(v18 + 128) = v50;
      result = -0x1.0000280010049p-751;
      *(_QWORD*)(v18 + 156) = 0x9100000280010049LL;
      *(_QWORD*)a1 = v18 + 164;
    }
  }
  return result;
}

double nn_698210(__int64 a1, __int64 a2, __int64* a3, int* a4, _DWORD* a5,
                 char a6)
{

#pragma clang fp contract(off)
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  __int64 v15;
  int v16;
  __int64 v18;
  __int64* v19;
  _DWORD* v20;
  __int64 v21;
  int v22;
  int v23;
  _DWORD* v24;
  unsigned __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v49;
  int v50;
  int v51;
  int v52;
  unsigned __int64 v53;
  int v54;
  double result;
  __int64 v56;
  int v57;
  struct {
    unsigned __int64 v58;
    int v59;
    char gap36_[4];
    int v60;
    int v61;
    int v62;
    char gap52_[4];
    int v63;
    int v64;
    char gap64_[4];
    int v65;
    char v66;
    char gap73_[3];
    int v67;
    int v68;
    char gap84_[4];
    unsigned __int64 v69;
    int v70;
    int v71;
    int v72;
  } v58_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  v6 = a4[3];
  v7 = a4[5];
  if ((*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x6000000) {
    v7 = a4[4];
    v8 = 1;
  }
  else {
    v8 = a4[4];
  }
  if ((*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x6000000) {
    v9 = a4[1];
  }
  else {
    v9 = a4[2];
  }
  if ((*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x6000000) {
    v10 = 0;
  }
  else {
    v10 = a4[1];
  }
  if (v6 != 0 && v8 != 0 && v7 != 0) {
    if (a3 != nullptr && (v15 = *a3, (*a3 & 0x200000000000000LL) != 0)) {
      if (WORD1(v15) != 0) {
        v15 = (__int64)(int)v15 >> 16;
      }
      else {
        LODWORD(v15) = *(unsigned __int16*)(a2 + 38) - (__int16)v15;
      }
    }
    else {
      LODWORD(v15) = *(unsigned __int16*)(a2 + 38);
    }
    if ((unsigned int)v15 > v9) {
      v16 = *a4;
      if (v9 + v7 >= (unsigned int)v15) {
        v7 = v15 - v9;
      }
      v57 = v7;
      v18 = *(_QWORD*)a1;
      if ((unsigned __int64)(*(_QWORD*)a1 + 164LL) > *(_QWORD*)(a1 + 8)) {
        v19 = a3;
        v20 = a5;
        SdkRoutine_64b750(a1, *(_QWORD*)a1,
                          4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 41)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(double, "d0", "=w"));
        a3 = v19;
        v18 = *(_QWORD*)a1;
        a5 = v20;
      }
      *(_QWORD*)v18 = 0x2004036091080002LL;
      *(_DWORD*)(v18 + 8) = *a5;
      *(_DWORD*)(v18 + 12) = a5[1];
      *(_DWORD*)(v18 + 16) = a5[2];
      *(_DWORD*)(v18 + 20) = a5[3];
      *(_DWORD*)(v18 + 24) = -2147352503;
      if (a3 != nullptr && (*a3 & 0x2000000000000000LL) != 0) {
        v21 = *a3 << 8 >> 56;
      }
      else {
        v21 = (__int64)(int)*(_QWORD*)(a2 + 40) >> 25;
      }
      v56 = v21;
      SdkRoutine_66a6d0_alt1((int*)a2, (__int64)&v58_.v58, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(double, "d0", "=w"));
      v22 = v58_.v58;
      v23 = v58_.v62;
      v24 = SdkData_e89ba0;
      v25 = HIDWORD(v58_.v58);
      if (v58_.v62 == 2) {
        v26 = v58_.v68;
        v27 = v58_.v61;
        v28 = v58_.v65 & 0xF | (unsigned __int8)(16 * (v58_.v66 & 0xF)) |
              ((v58_.v67 & 0xF) << 8) | 0x10000;
        if (v56 != 2) {
          v28 = v58_.v65 & 0xF | (unsigned __int8)(16 * (v58_.v66 & 0xF)) |
                ((v58_.v67 & 0xF) << 8);
        }
        v29 = 64 / v58_.v70;
        v31 = v58_.v63;
        v30 = v58_.v64;
        *(_DWORD*)(v18 + 28) = 537395712;
        *(_DWORD*)(v18 + 32) = v25;
        *(_DWORD*)(v18 + 44) = v30;
        *(_DWORD*)(v18 + 36) = v22;
        *(_DWORD*)(v18 + 40) = (v31 + v26 * v29 - 1) & -(v26 * v29);
        v32 = v58_.v72;
        v33 = v24[12 * v58_.v72 + 8];
        *(_DWORD*)(v18 + 56) = v27;
        *(_DWORD*)(v18 + 48) = v33;
        *(_DWORD*)(v18 + 52) = v28;
        v34 = v58_.v69 >> 2;
      }
      else {
        v35 = v58_.v59;
        v36 = v58_.v60;
        *(_DWORD*)(v18 + 28) = 537395712;
        *(_DWORD*)(v18 + 32) = v25;
        LODWORD(v34) = 0;
        *(_DWORD*)(v18 + 36) = v22;
        *(_DWORD*)(v18 + 40) = v35;
        *(_DWORD*)(v18 + 44) = v36;
        v32 = v58_.v72;
        *(_DWORD*)(v18 + 48) = v24[12 * v58_.v72 + 8];
        *(_QWORD*)(v18 + 52) = 0x100001000LL;
      }
      *(_DWORD*)(v18 + 60) = v34;
      v37 = 0;
      v38 = *(_DWORD*)(*(_QWORD*)(a1 + 112) + 64LL);
      v39 = v16 & ~(v16 >> 31);
      if ((int)v38 > v39) {
        v40 = v6 + (v16 & (v16 >> 31));
        if (v40 >= 1) {
          if (v40 + v39 >= v38) {
            v41 = v38 - v39;
          }
          else {
            v41 = v6 + (v16 & (v16 >> 31));
          }
          v37 = v39 | (v41 << 16);
        }
      }
      v42 = 0;
      v43 = v10 & ~(v10 >> 31);
      if ((int)v38 > v43) {
        v44 = (v10 & (v10 >> 31)) + v8;
        if (v44 >= 1) {
          if (v44 + v43 >= v38) {
            v45 = v38 - v43;
          }
          else {
            v45 = (v10 & (v10 >> 31)) + v8;
          }
          v42 = v43 | (v45 << 16);
        }
      }
      if ((unsigned int)(v58_.v71 - 2) > 6) {
        v46 = 0;
      }
      else {
        v46 = SdkData_c9260c[v58_.v71 - 2];
      }
      *(_DWORD*)(v18 + 72) = v42;
      *(_DWORD*)(v18 + 76) = v46;
      *(_DWORD*)(v18 + 64) = -1610412492;
      *(_DWORD*)(v18 + 68) = v37;
      v47 = v58_.v61;
      if (v58_.v61 > 1 && (*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x4000000) {
        v49 = -2147414380;
      }
      else {
        v49 = -2147479916;
      }
      *(_DWORD*)(v18 + 80) = v49;
      *(_DWORD*)(v18 + 84) = 537005580;
      *(_DWORD*)(v18 + 88) = (4 * (a6 & 0xF)) | ((unsigned __int16)v9 << 10);
      *(_DWORD*)(v18 + 92) = v57;
      *(_DWORD*)(v18 + 96) = v49;
      *(_DWORD*)(v18 + 100) = -2147286967;
      if (v23 == 2) {
        v50 = v58_.v65 & 0xF | (unsigned __int8)(16 * (v58_.v66 & 0xF)) |
              ((v58_.v67 & 0xF) << 8);
        if (v56 == 2) {
          v50 |= 0x10000u;
        }
        v51 = v58_.v64;
        v52 = (v58_.v63 + v58_.v68 * (64 / v58_.v70) - 1) &
              -(v58_.v68 * (64 / v58_.v70));
        v53 = v58_.v69 >> 2;
      }
      else {
        v52 = v58_.v59;
        v51 = v58_.v60;
        v47 = 1;
        v50 = 4096;
        LODWORD(v53) = 0;
      }
      *(_DWORD*)(v18 + 112) = v22;
      *(_DWORD*)(v18 + 116) = v52;
      *(_DWORD*)(v18 + 104) = 537395712;
      *(_DWORD*)(v18 + 108) = v25;
      *(_DWORD*)(v18 + 120) = v51;
      v54 = v24[12 * v32 + 8];
      *(_DWORD*)(v18 + 132) = v47;
      *(_DWORD*)(v18 + 136) = v53;
      *(_DWORD*)(v18 + 140) = -1610412492;
      *(_DWORD*)(v18 + 144) = v37;
      *(_DWORD*)(v18 + 148) = v42;
      *(_DWORD*)(v18 + 152) = v46;
      *(_DWORD*)(v18 + 124) = v54;
      *(_DWORD*)(v18 + 128) = v50;
      result = -0x1.0000280010049p-751;
      *(_QWORD*)(v18 + 156) = 0x9100000280010049LL;
      *(_QWORD*)a1 = v18 + 164;
    }
  }
  return result;
}

int8x8_t nn_698df0(__int64 a1, unsigned int* a2)
{
  uint32x4_t v2;
  int8x16_t v3;
  int8x16_t v4;
  int8x8_t result;
  unsigned __int32 v6;
  int v7;
  int v8;
  int v9;

  v2 = vdupq_n_s32(*a2);
  LANES128(v3).n128_u64[0] =
      LANES128_OF(vshlq_u32(v2, COERCE_AS(uint32x4_t, SdkData_bb52e0)))
          .n128_u64[0];
  LANES128(v3).n128_u64[1] =
      LANES128_OF(vshlq_u32(v2, COERCE_AS(uint32x4_t, SdkData_bb1c80)))
          .n128_u64[1];
  v4 = vandq_s8(v3, COERCE_AS(int8x16_t, SdkData_bb2de0));
  LANES64(result).n64_u64[0] =
      LANES64_OF(
          vorr_s8(COERCE_AS(int8x8_t, LANES128(v4).n128_u64[0]),
                  COERCE_AS(int8x8_t,
                            LANES128_OF(vextq_s8(v4, v4, 8u)).n128_u64[0])))
          .n64_u64[0];
  v6 = *a2 & 1 | (16 * ((*a2 & 2) != 0)) | (((*a2 & 4) != 0) << 8) |
       (((*a2 & 8) != 0) << 12) |
       ((LANES64(result).n64_u32[0] | LANES64(result).n64_u32[1]) << 16);
  v7 = (*a2 >> 5) & 0x10 | ((*a2 & 0x100) != 0) | (*a2 >> 2) & 0x100 |
       (((*a2 & 0x800) != 0) << 12) |
       (((*a2 >> 9) & 0x10 | ((*a2 & 0x1000) != 0) | (*a2 >> 6) & 0x100 |
         (*a2 >> 3) & 0x1000)
        << 16);
  v8 = (*a2 >> 13) & 0x10 | ((*a2 & 0x10000) != 0) | (*a2 >> 10) & 0x100 |
       (*a2 >> 7) & 0x1000 |
       (((*a2 >> 17) & 0x10 | ((*a2 & 0x100000) != 0) | (*a2 >> 14) & 0x100 |
         (*a2 >> 11) & 0x1000)
        << 16);
  v9 = (*a2 >> 21) & 0x10 | ((*a2 & 0x1000000) != 0) | (*a2 >> 18) & 0x100 |
       (*a2 >> 15) & 0x1000 |
       (((*a2 >> 25) & 0x10 | ((*a2 & 0x10000000) != 0) | (*a2 >> 22) & 0x100 |
         (*a2 >> 31 << 12))
        << 16);
  **(_DWORD**)a1 = -1610346976;
  *(_DWORD*)(*(_QWORD*)a1 + 4LL) = v6;
  *(_DWORD*)(*(_QWORD*)a1 + 8LL) = v7;
  *(_DWORD*)(*(_QWORD*)a1 + 12LL) = v8;
  *(_DWORD*)(*(_QWORD*)a1 + 16LL) = v9;
  *(_QWORD*)a1 += 20LL;
  return result;
}

__int64* nn_6990d0(__int64* result, __int64 a2, int* a3)
{
  unsigned int v3;
  unsigned int v4;
  int v5;
  _DWORD* v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  char v10;
  _DWORD* v11;
  int v12;
  _DWORD* v13;
  unsigned int v14;
  unsigned int v15;
  unsigned __int64 v16;
  char* v17;
  __int128* v18;
  unsigned __int64 v19;
  bool v20;
  _DWORD* v21;
  _DWORD* v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  _DWORD* v27;
  int v28;
  int v29;
  int v30;
  int* v31;
  unsigned int* v32;
  int* v33;
  __int64 v34;
  __int128 v35;

  v3 = ((unsigned int)*a3 >> 15) & 0x1F;
  v4 = ((unsigned int)*a3 >> 8) & 0x1F;
  v5 = *a3 & (v4 > 1);
  *(_DWORD*)*result = ((((*a3 & 2) != 0) << 16) | 0x800003F5) + 346;
  v6 = (_DWORD*)*result;
  *result += 4;
  if (v3 > v4) {
    v7 = 1;
  }
  else {
    v7 = v5;
  }
  v8 = v7 & 0xFFFFFFFB | (4 * (*a3 & 1));
  if (v3 > v4) {
    v8 |= 8u;
  }
  v9 = ((v8 | ((unsigned int)*a3 >> 4) & 0x1F0) << 16) | 0x800003F5;
  if (v3 <= v4) {
    v10 = 8;
  }
  else {
    v10 = 15;
  }
  v6[1] = v9 + 2777;
  v11 = (_DWORD*)*result;
  *result += 4;
  if ((*a3 & 4) != 0) {
    v12 = -2147416904;
  }
  else {
    v12 = -2147482440;
  }
  v11[1] = v12;
  v13 = (_DWORD*)(*result + 4);
  *result = (__int64)v13;
  v14 = *a3;
  HIDWORD(v16) = (((unsigned int)*a3 >> v10) & 0x1F) - 2;
  LODWORD(v16) = HIDWORD(v16);
  v15 = v16 >> 1;
  if (v15 > 7) {
    v18 = (__int128*)&SdkData_c926e8;
    v17 = (char*)&SdkData_c926f8;
    if ((v14 & 8) == 0) {
      goto LABEL_29;
    }
  LABEL_16:
    v35 = *(_OWORD*)(a3 + 1);
    if ((v14 & 0x10) == 0) {
      if ((int)v15 <= 2) {
        if (v15 == 0) {
        LABEL_25:
          WORD1(v35) = v35;
        }
        else if (v15 != 1) {
        LABEL_24:
          BYTE1(v35) = v35;
          goto LABEL_25;
        }
        DWORD1(v35) = v35;
        v19 = LANES64_OF(vdup_n_s32(v35)).n64_u64[0];
        goto LABEL_27;
      }
      if (v15 != 7) {
        if (v15 == 3) {
          v19 = v35;
        LABEL_27:
          *((_QWORD*)&v35 + 1) = v19;
          goto LABEL_28;
        }
        goto LABEL_24;
      }
    }
  LABEL_28:
    v18 = &v35;
    goto LABEL_29;
  }
  v17 = (char*)SdkData_c92788 + SdkData_c92788[v15];
  v18 = (__int128*)((char*)SdkData_c927a8 + SdkData_c927a8[v15]);
  if ((v14 & 8) != 0) {
    goto LABEL_16;
  }
LABEL_29:
  v20 = v5 == 0;
  if (v5 != 0) {
    v21 = v17;
  }
  else {
    v21 = &SdkData_c926f8;
  }
  *v13 = 537134200;
  *(_DWORD*)(*result + 4) = *(_DWORD*)v18;
  *(_DWORD*)(*result + 8) = *((_DWORD*)v18 + 1);
  *(_DWORD*)(*result + 12) = *((_DWORD*)v18 + 2);
  *(_DWORD*)(*result + 16) = *((_DWORD*)v18 + 3);
  v22 = (_DWORD*)(*result + 20);
  *result = (__int64)v22;
  *v22 = -2121789898;
  *(_DWORD*)(*result + 4) = 537397476;
  v23 = *(_DWORD*)v18 ^ 0x88888888;
  if (v20) {
    v23 = 0;
  }
  *(_DWORD*)(*result + 8) = v23;
  v24 = *((_DWORD*)v18 + 1) ^ 0x88888888;
  if (v20) {
    v24 = 0;
  }
  *(_DWORD*)(*result + 12) = v24;
  v25 = *((_DWORD*)v18 + 2) ^ 0x88888888;
  if (v20) {
    v25 = 0;
  }
  *(_DWORD*)(*result + 16) = v25;
  v26 = *((_DWORD*)v18 + 3) ^ 0x88888888;
  if (v20) {
    v26 = 0;
  }
  *(_DWORD*)(*result + 20) = v26;
  *(_DWORD*)(*result + 24) = *v21;
  *(_DWORD*)(*result + 28) = v21[1];
  *(_DWORD*)(*result + 32) = v21[2];
  *(_DWORD*)(*result + 36) = v21[3];
  v27 = (_DWORD*)(*result + 40);
  *result = (__int64)v27;
  if (v3 <= v4) {
    *v27 = -2147482643;
  }
  else {
    v28 = -2147351570;
    v29 = ((unsigned int)*a3 >> 15) & 0x1F;
    switch (v29) {
    case 16:
      v28 = -2147089426;
      break;
    case 8:
      v28 = -2147220498;
      break;
    case 4:
    LABEL_59:
      break;
    default:
      v28 = -2147154962;
      goto LABEL_59;
    }
    v30 = -2146237364;
    *v27 = -2147417107;
    v31 = (int*)(*result + 4);
    *result = (__int64)v31;
    *v31 = v28;
    v32 = (unsigned int*)(*result + 4);
    *result = (__int64)v32;
    if ((*a3 & 0x20) != 0) {
      *v32 = -2147482635;
      v30 = -2145975220;
    }
    else {
      *v32 = (8 * *a3) & 0x30000 | 0x800003F5;
    }
    v33 = (int*)(*result + 4);
    *result = (__int64)v33;
    *v33 = v30;
  }
  v34 = *result;
  *result += 4;
  *(_DWORD*)(v34 + 4) =
      ((((unsigned int)*a3 >> 17) & 0x70 | ((*a3 & 0x100000) != 0)) << 16) -
      2147482498;
  *result += 4;
  return result;
}

double nn_69a400(__int64 a1, char a2, unsigned int a3, __int64 a4)
{

#pragma clang fp contract(off)
  int v4;
  __int64 v6;
  __int64 v7;
  int* v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  char v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  int v22;
  int v23;
  unsigned int v24;
  char v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  char v29;
  __int64 v30;
  double result;
  double v32;

  v4 = 16 * (a2 & 0xF);
  v32 = 0x0.0p+0;
  if (a4 == 0) {
    v32 = 0x1.5555555555555p+342;
    goto LABEL_19;
  }
  v4 |= 1u;
  if ((int)a3 < 1) {
    a3 = 0;
  LABEL_13:
    v21 = a3 ^ 0xF;
    v22 = -a3 & 3;
    if (v22 != 0) {
      v23 = 4 * a3;
      do {
        v24 = a3 >> 3;
        v25 = v23 & 0x1C;
        ++a3;
        v23 += 4;
        --v22;
        *((_DWORD*)&v32 + v24) |= 5 << v25;
      } while (v22 != 0);
    }
    if (v21 >= 3) {
      v26 = a3 + 3;
      v27 = 4 * a3;
      do {
        *((_DWORD*)&v32 + ((v26 - 3) >> 3)) |= 5 << (v27 & 0x1C);
        *((_DWORD*)&v32 + ((v26 - 2) >> 3)) |= 5 << ((v27 + 4) & 0x1C);
        *((_DWORD*)&v32 + ((v26 - 1) >> 3)) |= 5 << ((v27 + 8) & 0x1C);
        v28 = v26 >> 3;
        v29 = v27 + 12;
        v26 += 4;
        v27 += 16;
        *((_DWORD*)&v32 + v28) |= 5 << (v29 & 0x1C);
      } while (v26 != 19);
    }
    goto LABEL_19;
  }
  v6 = a3 & 3;
  if (a3 >= 4) {
    v8 = (int*)(a4 + 8);
    v9 = 12;
    v7 = 0;
    do {
      v10 = *(v8 - 2);
      v11 = *(v8 - 1);
      v12 = *v8;
      v13 = v8[1];
      v8 += 4;
      v14 = v10 << ((v9 - 12) & 0x10);
      v15 = (unsigned int)v7 >> 3;
      v7 += 4;
      v16 = *((_DWORD*)&v32 + v15) | v14 | (v11 << ((v9 - 8) & 0x14)) |
            (v12 << ((v9 - 4) & 0x18));
      LOBYTE(v11) = v9 & 0x1C;
      v9 += 16;
      *((_DWORD*)&v32 + v15) = v16 | (v13 << v11);
    } while ((a3 & 0x7FFFFFFC) != v7);
  }
  else {
    v7 = 0;
  }
  if ((a3 & 3) != 0) {
    v17 = 4 * v7;
    do {
      v18 = v17 & 0x1C;
      v17 += 4;
      --v6;
      v19 = *(_DWORD*)(a4 + 4 * v7) << v18;
      v20 = (unsigned int)v7++ >> 3;
      *((_DWORD*)&v32 + v20) |= v19;
    } while (v6 != 0);
  }
  if (a3 <= 0xF) {
    goto LABEL_13;
  }
LABEL_19:
  v30 = *(_QWORD*)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 16LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1, v30, 4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 4));
    v30 = *(_QWORD*)a1;
  }
  result = v32;
  *(_DWORD*)v30 = -1610412336;
  *(_DWORD*)(v30 + 4) = v4;
  *(double*)(v30 + 8) = result;
  *(_QWORD*)a1 = v30 + 16;
  return result;
}

__int64 nn_69a740(__int64 result, unsigned int a2, unsigned int a3,
                  const float* a4)
{

#pragma clang fp contract(off)
  float* v5;
  float** v8;
  bool v9;
  int32x4_t v10;
  __int64 v11;
  int32x4_t v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  float* v16;
  __int64 v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  const float* v21;
  int8x16_t v22;
  int8x16_t v23;
  int8x16_t v24;
  int32x4_t v25;
  int8x16_t v26;
  int8x16_t v27;
  __int64 v28;
  unsigned int v29;
  const float* v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v38;
  int v39;
  int v40;
  float32x4x3_t v42;
  float32x4x4_t v43;

  v5 = *(float**)result;
  v8 = (float**)result;
  if (*(_QWORD*)result + 4 * (unsigned __int64)(3 * a3) >
      *(_QWORD*)(result + 8)) {
    result = SdkRoutine_64b750(result, (__int64)v5,
                               4LL * (*(_DWORD*)(result + 104) + 3 * a3));
    v5 = *v8;
  }
  if ((int)a3 < 1) {
    v16 = v5;
    goto LABEL_36;
  }
  if (a3 >= 4 &&
      (v5 < &a4[4 * a3] ? (v9 = a4 >= &v5[3 * a3]) : (v9 = true), v9)) {
    LANES128(v10).n128_u64[0] = 0x1000100010001LL;
    LANES128(v10).n128_u64[1] = 0x1000100010001LL;
    v11 = a3 & 0x7FFFFFFC;
    v12 = vdupq_n_s32(a2);
    v13 = COERCE_AS(int32x4_t, SdkData_bb1cc0);
    LANES128(v14).n128_u64[0] = 0xFFFF0000FFFFLL;
    LANES128(v14).n128_u64[1] = 0xFFFF0000FFFFLL;
    LANES128(v15).n128_u64[0] = 0x400000004LL;
    LANES128(v15).n128_u64[1] = 0x400000004LL;
    v16 = &v5[3 * v11];
    v17 = v11;
    v18 = vdupq_n_s32(0xFFFEu);
    v19 = vdupq_n_s32(0x2614u);
    v20 = vdupq_n_s32(0x20020000u);
    v21 = a4;
    do {
      v43 = vld4q_f32(v21);
      v21 += 16;
      v17 -= 4;
      v22 = vaddq_s32(v43.val[2],
                      vminq_s32(v43.val[0], COERCE_AS(int32x4_t, 0LL)));
      v23 = vorrq_s8(vcgtq_s32(v43.val[0], v18), vclezq_s32(v22));
      v24 = vmaxq_s32(v43.val[0], COERCE_AS(int32x4_t, 0LL));
      v43.val[0] = vmaxq_s32(v43.val[1], COERCE_AS(int32x4_t, 0LL));
      v25 = vaddq_s32(vshlq_n_s32(vbslq_s8(vcgtq_u32(vaddq_s32(v22, v24), v18),
                                           vmvnq_s8(v24), v22),
                                  0x10u),
                      v24);
      v26 = vaddq_s32(v43.val[3],
                      vminq_s32(v43.val[1], COERCE_AS(int32x4_t, 0LL)));
      v43.val[3] = vbicq_s8(vmulq_s32(v25, v10), v23);
      v27 = vandq_s8(
          vandq_s8(vcgtq_s32(v14, v43.val[1]), vcgtzq_s32(v26)),
          vmulq_s32(
              vaddq_s32(vshlq_n_s32(
                            vbslq_s8(vcgtq_u32(vaddq_s32(v26, v43.val[0]), v18),
                                     vmvnq_s8(v43.val[0]), v26),
                            0x10u),
                        v43.val[0]),
              v10));
      v43.val[0] = vaddq_s32(v12, v13);
      v13 = vaddq_s32(v13, v15);
      v42.val[0] = vorrq_s8(
          vshrq_n_u32(vaddq_s32(vshlq_n_s32(v43.val[0], 4u), v19), 2u), v20);
      v42.val[1] = v43.val[3];
      v42.val[2] = v27;
      vst3q_f32(v5, v42);
      v5 += 12;
    } while (v17 != 0);
    if (v11 == a3) {
      goto LABEL_36;
    }
  }
  else {
    v11 = 0;
    v16 = v5;
  }
  v28 = a3 - v11;
  v29 = 16 * (a2 + v11) + 9748;
  v30 = &a4[4 * v11 + 2];
  do {
    v35 = *((_DWORD*)v30 - 2);
    v36 = *(_DWORD*)v30 + (v35 & (v35 >> 31));
    if (v35 > 65534 || v36 < 1) {
      v38 = 0;
    }
    else {
      v39 = v35 & ~(v35 >> 31);
      if ((unsigned int)(v36 + v39) > 0xFFFE) {
        v36 = ~v39;
      }
      v38 = 65537 * (v39 + (v36 << 16));
    }
    v40 = *((_DWORD*)v30 - 1);
    v32 = *((_DWORD*)v30 + 1) + (v40 & (v40 >> 31));
    if (v40 > 65534 || v32 < 1) {
      v33 = 0;
    }
    else {
      v31 = v40 & ~(v40 >> 31);
      if ((unsigned int)(v32 + v31) > 0xFFFE) {
        v32 = ~v31;
      }
      v33 = 65537 * (v31 + (v32 << 16));
    }
    v34 = (v29 >> 2) | 0x20020000;
    v30 += 4;
    *((_DWORD*)v16 + 2) = v33;
    v29 += 16;
    --v28;
    *(_DWORD*)v16 = v34;
    *((_DWORD*)v16 + 1) = v38;
    v16 += 3;
  } while (v28 != 0);
LABEL_36:
  *v8 = v16;
  return result;
}

__int64 nn_69a9a0(__int64 result, int* a2, __int64* a3)
{
  __int64 v3;
  __int64* v5;
  __int64* v6;
  __int16 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    int v10;
    __int16 v11;
    char gap46_[2];
    int v12;
    int v13;
    char v14;
    char gap57_[3];
    int v15;
    int v16;
    char gap68_[4];
    unsigned __int64 v17;
    int v18;
  } v9_;

  v3 = *(_QWORD*)result;
  v5 = (__int64*)result;
  if ((unsigned __int64)(*(_QWORD*)result + 40LL) > *(_QWORD*)(result + 8)) {
    v6 = a3;
    result =
        SdkRoutine_64b750(result, *(_QWORD*)result,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 10));
    a3 = v6;
    v3 = *v5;
  }
  if (a2 != nullptr) {
    result = (__int64)SdkRoutine_66a6d0_alt1(a2, (__int64)v9_.v9, a3);
    *(_DWORD*)v3 = 537396394;
    *(_QWORD*)(v3 + 4) = __ROR8__(v9_.v9[0], 32);
    v7 = v9_.v10;
    *(_DWORD*)(v3 + 12) = v9_.v10 & 0xFFF | ((v9_.v11 & 0xFFF) << 16);
    *(_DWORD*)(v3 + 16) = v9_.v12 & 0xFFF;
    *(_DWORD*)(v3 + 20) = 0;
    *(_DWORD*)(v3 + 24) = v9_.v17 >> 2;
    *(_DWORD*)(v3 + 28) = v9_.v13 & 0xF |
                          (unsigned __int8)(16 * (v9_.v14 & 0xF)) |
                          ((v9_.v15 & 0xF) << 8);
    *(_DWORD*)(v3 + 32) =
        (unsigned __int16)-(__int16)(v9_.v16 * (64 / v9_.v18)) &
        (unsigned __int16)(v7 + v9_.v16 * (64 / v9_.v18) - 1) & 0xFFF;
    *(_DWORD*)(v3 + 36) = -2147483489;
    v8 = v3 + 40;
  }
  else {
    v8 = v3 + 28;
    *(_DWORD*)v3 = 537265322;
    *(_QWORD*)(v3 + 4) = 0;
    *(_QWORD*)(v3 + 20) = 0;
    *(_QWORD*)(v3 + 12) = 0;
  }
  *v5 = v8;
  return result;
}

__int64 nn_69abc0(_QWORD* a1)
{
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
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
  struct {
    _QWORD v21[2];
    __int64 v22;
    char gap24_[8];
    int v23;
    char gap36_[4];
    __int64 v24;
    char gap48_[8];
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
  } v21_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(unsigned __int8 (**)(void))SdkData_e89ea8[0])() == 0) {
    return 0;
  }
  v21_.v26 = v21_.v28;
  v21_.v27 = v21_.v29;
  v21_.v31 = v21_.v30;
  a1[909] = 0;
  v3 = (_QWORD*)SdkRoutine_6a0860(),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v3 != nullptr) {
    v4 = v3;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    SdkRoutine_6a10c0((__int64)(v3 + 4)),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4[1] = a1;
    *(_DWORD*)v4 = 1;
    if ((unsigned int)SdkRoutine_690f30() >= 0x11201) {
      v5 = a1[945];
      v6 = *(_QWORD*)(v5 + 56);
      if (*(_DWORD*)(v5 + 32) == 0 && (*(_BYTE*)(v5 + 48) & 1) != 0) {
        v7 = 0;
      }
      else {
        v7 = *(_QWORD*)(v5 + 80);
      }
      v8 = SdkRoutine_690f30(),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      SdkRoutine_6a11f0((__int64)(v4 + 4), v8 - 70144, v6 + 68096, 256, 1,
                        v7 + 68096),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    a1[909] = v4;
    nn_os_LockMutex_plt(&SdkData_ea7c40),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (SdkData_ea8338 != nullptr) {
      v11 = a1[909];
      if (v11 != 0) {
        v12 = *(_QWORD*)(v11 + 16);
        v21_.v22 = a1[909];
        v21_.v23 = 4;
        v21_.v21[0] = 0x2800070001LL;
        v21_.v21[1] = v12;
        SdkData_ea8338(v21_.v21, v9, v10);
      }
    }
    if (SdkData_ea8308[0] != nullptr) {
      v13 = a1[909];
      if (v13 != 0) {
        v14 = *(_QWORD*)(v13 + 16);
        v21_.v22 = a1[909];
        v21_.v23 = 4;
        v21_.v21[0] = 0x2800010001LL;
        v21_.v21[1] = v14;
        ((void(__attribute__((noreturn))*)(
            _QWORD*, __int64, __int64))SdkData_ea8308[0])(v21_.v21, v9, v10);
      }
    }
    if (SdkData_ea83a0[0] != nullptr) {
      v15 = a1[909];
      if (v15 != 0) {
        v16 = *(_QWORD*)(v15 + 16);
        v21_.v22 = a1[909];
        v17 = a1[944];
        v21_.v23 = 0;
        v21_.v24 = 0;
        v18 = *(_QWORD*)(v17 + 24);
        v21_.v21[0] = 0x4000090003LL;
        v21_.v21[1] = v16;
        v21_.v25 = v18;
        ((void(__attribute__((noreturn))*)(
            _QWORD*, __int64, __int64))SdkData_ea83a0[0])(v21_.v21, v9, v10);
      }
    }
    nn_os_UnlockMutex_plt(&SdkData_ea7c40),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return 1;
  }
  else {
    v19 = a1[909];
    if (v19 != 0) {
      SdkRoutine_6a13c0((_QWORD*)(v19 + 32)),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v20 = a1[909];
      if (v20 != 0) {
        SdkRoutine_6a0870(v20),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    a1[909] = 0;
    (*(void (**)(_QWORD*))(*SdkData_e89eb8 + 2224))(a1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return 0;
  }
}

__int64 nn_69af20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[2];
    __int64 v12;
    __int64 v13;
  } v11_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (result != 0) {
    v1 = *(_QWORD*)(result + 7272);
    v2 = result;
    if (v1 != 0) {
      v3 = *(_QWORD*)(v1 + 16);
      nn_os_LockMutex_plt(SdkData_e89c10),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (SdkData_ea8310 != nullptr) {
        v6 = *(_QWORD*)(v1 + 16);
        v11_.v12 = v1;
        v11_.v11[0] = 0x2000020001LL;
        v11_.v11[1] = v6;
        SdkData_ea8310(v11_.v11, v4, v5);
      }
      nn_os_UnlockMutex_plt(&SdkData_ea7c40),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v7 = *(_QWORD*)(v2 + 7272);
      if (v7 != 0) {
        SdkRoutine_6a13c0((_QWORD*)(v7 + 32)),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v8 = *(_QWORD*)(v2 + 7272);
        if (v8 != 0) {
          SdkRoutine_6a0870(v8),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      *(_QWORD*)(v2 + 7272) = 0;
      result = (*(__int64 (**)(__int64))(*SdkData_e89eb8 + 2224))(v2),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (SdkData_ea8318[0] != nullptr) {
        v11_.v12 = v1;
        v11_.v13 = 0;
        v11_.v11[0] = 0x2000030001LL;
        v11_.v11[1] = v3;
        ((void(__attribute__((noreturn))*)(
            _QWORD*, __int64, __int64))SdkData_ea8318[0])(v11_.v11, v9, v10);
      }
    }
  }
  return result;
}

__int64 nn_69b120(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _UNKNOWN** v7;
  void(__attribute__((noreturn)) * v8)(_QWORD*, __int64, __int64);
  __int64 result;
  __int64 v10;
  __int64 v11;
  void(__attribute__((noreturn)) * v12)(_QWORD*, __int64, __int64);
  struct {
    _QWORD v13[2];
    __int64 v14;
    __int64 v15;
  } v13_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (a1 == 0) {
    if ((*(_UNKNOWN*)0x1ED0LL) != 0) {
      SdkRoutine_6a0870((*(_UNKNOWN*)0x1ED0LL)),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    goto LABEL_10;
  }
  v4 = *(_QWORD*)(a1 + 7888);
  if (v4 == 0) {
  LABEL_10:
    *(_QWORD*)(a1 + 7888) = 0;
    return (*(__int64 (**)(__int64))(*SdkData_e89eb8 + 4160))(a1);
  }
  v5 = *(_QWORD*)(v4 + 16);
  v6 = *(_QWORD*)(a1 + 7888);
  v7 = SdkData_e89eb0;
  v8 = *(void(__attribute__((noreturn))**)(_QWORD*, __int64, __int64))(
      (char*)((__int64*)0x38LL) + (_QWORD)SdkData_e89eb0);
  if (v8 != nullptr) {
    v13_.v13[0] = 0x2000020001LL;
    v13_.v13[1] = v5;
    v13_.v14 = v4;
    v8(v13_.v13, a2, a3),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  SdkRoutine_6a0870(v6),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_QWORD*)(a1 + 7888) = 0;
  result = (*(__int64 (**)(__int64))(*SdkData_e89eb8 + 4160))(a1),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v12 = *(void(__attribute__((noreturn))**)(_QWORD*, __int64, __int64))(
      (char*)((char*)0x40LL) + (_QWORD)v7);
  if (v12 != nullptr) {
    v13_.v14 = v4;
    v13_.v15 = 0;
    v13_.v13[0] = 0x2000030001LL;
    v13_.v13[1] = v5;
    v12(v13_.v13, v10, v11),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  return result;
}

__int64 nn_69b220(__int64 result, __int64 a2, unsigned __int64* a3)
{
  unsigned __int64* v3;
  __int64 v4;
  __int64 v5;
  _BOOL4 v6;
  __int64 v7;
  __int64 (*v8)(__int64, __int64, unsigned __int64*);
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int128 v17;
  struct {
    _QWORD v18[2];
    __int64 v19;
    __int64 v20;
    __int64 v21;
    int v22;
    int v23;
    _QWORD* v24;
    __int64 v25;
  } v18_;

  v3 = a3;
  v4 = result;
  if (result == 0) {
    v5 = 0;
  LABEL_6:
    v6 = false;
    if ((_DWORD)a2 == 0) {
      return result;
    }
    goto LABEL_7;
  }
  v5 = *(_QWORD*)(result + 7888);
  if (v5 == 0) {
    goto LABEL_6;
  }
  v6 = SdkData_ea84d8[0] != nullptr;
  if ((_DWORD)a2 != 0) {
  LABEL_7:
    v7 = (unsigned int)a2;
    v8 = *(__int64 (**)(__int64, __int64, unsigned __int64*))(*SdkData_e89eb8 +
                                                              4256);
    while (1) {
      v10 = *v3++;
      v9 = v10;
      v16 = v10;
      if (v6) {
        break;
      }
    LABEL_8:
      result = v8(v4, 1, &v16);
      if (--v7 == 0) {
        return result;
      }
    }
    v18_.v22 = v9 & 3;
    if (v18_.v22 == 1) {
      v13 = 0;
      v9 = (v9 & 0xFFFFFFFFFFFCLL) - 8;
    }
    else {
      if ((v9 & 3) == 2) {
        v11 = v9 & 0xFFFFFFFFFCLL;
        v12 = v9 >> 40;
        v18_.v19 = 0;
        BYTE4(v18_.v20) = 3;
        LODWORD(v18_.v20) = v12;
        v18_.v21 = 2;
        v18_.v23 = 0;
        v18_.v24 = v18_.v18;
        v18_.v18[0] = 0x100000003LL;
        v18_.v18[1] = v11;
        v13 = 4 * v12;
        v9 = (unsigned __int64)v18_.v18;
        v17 = SdkData_bb2e80;
        goto LABEL_16;
      }
      v13 = 0;
    }
    v18_.v23 = 0;
    v18_.v24 = (_QWORD*)v9;
  LABEL_16:
    v18_.v25 = v13;
    if (*(_QWORD*)(v9 - 16) == -255) {
      v14 = *(_QWORD*)(v9 - 8);
      if (v14 != 0) {
        v15 = *(_QWORD*)(v5 + 16);
        v18_.v18[0] = v5;
        v18_.v19 = v14;
        v18_.v20 = 0;
        v18_.v21 = 0;
        v18_.v22 = 0;
        *(_QWORD*)&v17 = 0x4000030007LL;
        *((_QWORD*)&v17 + 1) = v15;
        (*(void(__attribute__((noreturn))**)(__int128*, __int64,
                                             unsigned __int64*))(
            (char*)((_UNKNOWN*)0x200LL) + (_QWORD)SdkData_e89eb0))(&v17, a2,
                                                                   a3);
      }
    }
    goto LABEL_8;
  }
  return result;
}

__int64 nn_69b3e0(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN** v4;
  void(__attribute__((noreturn)) * v5)(_QWORD*, __int64, __int64);
  __int64 v6;
  __int64 v7;
  void(__attribute__((noreturn)) * v8)(_QWORD*, __int64, __int64);
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  void(__attribute__((noreturn)) * v14)(_QWORD*, __int64, __int64);
  __int64 v15;
  __int64 v16;
  void(__attribute__((noreturn)) * v17)(_QWORD*, __int64, __int64);
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v20[2];
    __int64 v21;
  } v20_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v4 = SdkData_e89eb0;
  v5 = *(void(__attribute__((noreturn))**)(_QWORD*, __int64, __int64))(
      (char*)((_UNKNOWN*)0x98LL) + (_QWORD)SdkData_e89eb0);
  if (v5 != nullptr) {
    if (a1 == 0) {
      goto LABEL_9;
    }
    v6 = *(_QWORD*)(a1 + 7888);
    if (v6 != 0) {
      v7 = *(_QWORD*)(v6 + 16);
      v20_.v21 = *(_QWORD*)(a1 + 7888);
      v20_.v20[0] = 0x2000030003LL;
      v20_.v20[1] = v7;
      v5(v20_.v20, a2, a3),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
  if (a1 != 0) {
    v8 = *(void(__attribute__((noreturn))**)(_QWORD*, __int64, __int64))(
        (char*)((_UNKNOWN*)0x88LL) + (_QWORD)SdkData_e89eb0);
    if (v8 != nullptr) {
      v9 = *(_QWORD*)(a1 + 7888);
      if (v9 != 0) {
        v10 = *(_QWORD*)(v9 + 16);
        v20_.v21 = *(_QWORD*)(a1 + 7888);
        v20_.v20[0] = 0x2000010003LL;
        v20_.v20[1] = v10;
        v8(v20_.v20, a2, a3),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
  }
LABEL_9:
  result = (*(__int64 (**)(__int64))(*SdkData_e89eb8 + 4232))(a1),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v14 = *(void(__attribute__((noreturn))**)(_QWORD*, __int64, __int64))(
      (char*)((_UNKNOWN*)0x90LL) + (_QWORD)v4);
  if (v14 != nullptr) {
    if (a1 == 0) {
      return result;
    }
    v15 = *(_QWORD*)(a1 + 7888);
    if (v15 != 0) {
      v16 = *(_QWORD*)(v15 + 16);
      v20_.v21 = *(_QWORD*)(a1 + 7888);
      v20_.v20[0] = 0x2000020003LL;
      v20_.v20[1] = v16;
      v14(v20_.v20, v12, v13),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
  if (a1 != 0) {
    v17 = *(void(__attribute__((noreturn))**)(_QWORD*, __int64, __int64))(
        (char*)((_UNKNOWN*)0x9CLL) + (_QWORD)v4 + 4);
    if (v17 != nullptr) {
      v18 = *(_QWORD*)(a1 + 7888);
      if (v18 != 0) {
        v19 = *(_QWORD*)(v18 + 16);
        v20_.v21 = *(_QWORD*)(a1 + 7888);
        v20_.v20[0] = 0x2000040003LL;
        v20_.v20[1] = v19;
        v17(v20_.v20, v12, v13),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
  }
  return result;
}

__int64 nn_69b9e0(__int64 a1, int a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64 v7;
  __int64 (*v8)(__int64, _QWORD, __int64);
  _QWORD* v10;
  __int64* v13;
  void* v14;
  _UNKNOWN** v15;
  __int64 v16;
  unsigned int v17;
  int v18;
  char* v26;
  _QWORD* v27;
  long double v28;
  unsigned __int8 v29;
  __int128 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  void(__attribute__((noreturn)) * v35)(_QWORD*, __int64, __int64);
  __int64 v36;
  void(__attribute__((noreturn)) * v37)(_QWORD*, __int64, __int64);
  __int64 v38;
  unsigned int v39;
  struct {
    _QWORD v40[2];
    __int64 v41;
    char gap32_[8];
    __int64 v42;
  } v40_;
  _QWORD v43[224];
  struct {
    _QWORD v44[4];
    _QWORD* v45;
  } v44_;

  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v3 = *(_QWORD*)(a1 + 8);
  LODWORD(v5) = a2;
  if (v3 != 0) {
    v7 = *(_QWORD*)(v3 + 7272);
  }
  else {
    v7 = 0;
  }
  v8 = *(__int64 (**)(__int64, _QWORD, __int64))(*SdkData_e89eb8 + 3952),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  nn_69bce0(v7, a1),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v39 = v8(a1, (unsigned int)v5, a3),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((_BYTE)v39 != 0) {
    v10 = *(_QWORD**)(a1 + 120);
    if (v10 != nullptr && *v10 != 0 && (_DWORD)v5 != 0) {
      v13 = (__int64*)(a3 + 16);
      v5 = (unsigned int)v5;
      v14 = SdkData_e89c10;
      v15 = SdkData_e89eb0;
      do {
        v16 = *(v13 - 1);
        if (v16 != 0) {
          v18 = *(_DWORD*)(v16 + 4);
          v17 = *(_DWORD*)(v16 + 8);
          if (v18 == 201 && v17 < 2) {
            v26 = (char*)SdkData_e89dd0;
          LABEL_53:
            v27 = v44_.v44;
            v44_.v44[0] = v26 + 16;
            v44_.v44[1] = v16;
            v44_.v45 = v44_.v44;
          LABEL_54:
            v28 = nn_65fa80((__int64)v43, (__int64)v27, *v13),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            v29 = (*(__int64 (**)(_QWORD*, long double))(*v44_.v45 + 168LL))(
                v44_.v45, v28),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            v30 = *(_OWORD*)&v43[215];
            v31 = v29;
            v32 = **(_QWORD**)(a1 + 120) + 88LL * v29;
            *(_OWORD*)(v32 + 16) = *(_OWORD*)&v43[213];
            *(_OWORD*)(v32 + 32) = v30;
            *(_QWORD*)v32 = a1;
            *(_DWORD*)(v32 + 8) = SdkRoutine_6a0c00(v29),
                             v33 = COERCE_AS(__typeof__(v33),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                             v34 = COERCE_AS(__typeof__(v34),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x2", "=r"));
            nn_os_LockMutex_plt(v14),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            v35 =
                *(void(__attribute__((noreturn))**)(_QWORD*, __int64, __int64))(
                    (char*)((__int64*)0x48LL) + (_QWORD)v15);
            if (v35 != nullptr) {
              if (v7 != 0) {
                v36 = *(_QWORD*)(v7 + 16);
                v40_.v41 = v7;
                v40_.v40[0] = 0x2800040001LL;
                v40_.v40[1] = v36;
                v40_.v42 = **(_QWORD**)(a1 + 120) + 88LL * v31;
                v35(v40_.v40, v33, v34),
                    v33 = COERCE_AS(
                        __typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v34 = COERCE_AS(
                        __typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              }
            }
            else if (v7 != 0) {
              v37 = *(
                  void(__attribute__((noreturn))**)(_QWORD*, __int64, __int64))(
                  (char*)((_UNKNOWN*)0xC0LL) + (_QWORD)v15);
              if (v37 != nullptr) {
                v38 = *(_QWORD*)(v7 + 16);
                v40_.v41 = v7;
                v40_.v40[0] = 0x2800080003LL;
                v40_.v40[1] = v38;
                v40_.v42 = **(_QWORD**)(a1 + 120) + 88LL * v31;
                v37(v40_.v40, v33, v34),
                    v33 = COERCE_AS(
                        __typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v34 = COERCE_AS(
                        __typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              }
            }
            nn_os_UnlockMutex_plt(v14),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            goto LABEL_13;
          }
          if (v18 == 201 && v17 == 2) {
            v26 = (char*)SdkData_e89de0;
            goto LABEL_53;
          }
          if (v18 == 201 && v17 - 3 < 0xA) {
            v26 = (char*)SdkData_e89de8;
            goto LABEL_53;
          }
          if (v18 == 201 && v17 - 13 < 2) {
            v26 = (char*)SdkData_e89df0;
            goto LABEL_53;
          }
          if (v18 == 201 && v17 == 15) {
            v26 = (char*)SdkData_e89df8;
            goto LABEL_53;
          }
          if (v18 == 201 && v17 == 16) {
            v26 = (char*)SdkData_e89e00;
            goto LABEL_53;
          }
          if (v18 == 201 && v17 == 17) {
            v26 = (char*)SdkData_e89dd8;
            goto LABEL_53;
          }
          if (v18 == 201 && v17 == 18) {
            v26 = (char*)SdkData_e89e10;
            goto LABEL_53;
          }
          if (v18 == 201 && v17 == 19) {
            v26 = (char*)SdkData_e89e08;
            goto LABEL_53;
          }
          if (v18 == 201 && v17 == 20) {
            v26 = (char*)SdkData_e89e18;
            goto LABEL_53;
          }
          v27 = v44_.v45;
          if (v44_.v45 != nullptr) {
            goto LABEL_54;
          }
        }
      LABEL_13:
        v13 += 3;
        --v5;
      } while (v5 != 0);
    }
  }
  return v39;
}

__int64 nn_69bce0(__int64 result, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  void* v6;
  _UNKNOWN** v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  void(__attribute__((noreturn)) * v13)(_QWORD*, __int64, __int64);
  __int64 v14;
  unsigned int v15;
  _QWORD v16[6];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v2 = *(_QWORD**)(a2 + 120);
  if (v2 != nullptr && *v2 != 0) {
    v4 = result;
    v5 = 0;
    v6 = SdkData_e89c10;
    v7 = SdkData_e89eb0;
    do {
      v10 = (_QWORD*)(**(_QWORD**)(a2 + 120) + v5);
      if (*v10 != 0) {
        nn_os_LockMutex_plt(v6),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v4 != 0) {
          v13 = *(void(__attribute__((noreturn))**)(_QWORD*, __int64, __int64))(
              (char*)((__int64*)0x50LL) + (_QWORD)v7);
          if (v13 != nullptr) {
            v14 = *(_QWORD*)(v4 + 16);
            v16[2] = v4;
            v16[4] = v10;
            v16[0] = 0x2800050001LL;
            v16[1] = v14;
            v13(v16, v11, v12),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
        }
        v8 = *(_QWORD**)(a2 + 120);
        memset((char*)v16 + 4, 0, 44);
        v9 = *v8 + v5;
        *(_QWORD*)v9 = 0;
        *(_DWORD*)(v9 + 8) = 0;
        qmemcpy((void*)(v9 + 12), v16, 48);
        *(_OWORD*)(v9 + 60) = v15;
        *(_OWORD*)(v9 + 72) = (__typeof__(*(_OWORD*)(v9 + 72))){0};
        result = nn_os_UnlockMutex_plt(v6),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v5 += 88;
    } while (v5 != 792);
  }
  return result;
}

void* nn_69be20(void* result, void* a2, __int64 a3)
{
  _UNKNOWN** v3;

  v3 = SdkData_e89eb0;
  *SdkData_e89eb0 = result;
  v3[1] = a2;
  *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v3 + 4) = a3;
  *((_BYTE*)((_UNKNOWN*)0x240LL) + (_QWORD)v3) = 1;
  return result;
}

__int64 (*nn_69be70(_BYTE* a1, __int64 a2, const char* a3))()
{
  int v4;

  v4 = nn_6554e0(a1, a2, a3);
  if (v4 < 0) {
    return nn_650c00(0, a1);
  }
  else {
    return SdkData_ea6528[v4];
  }
}

__int64 nn_69c0a0(__int64* a1)
{
  int64x2_t v1;
  __int64 v2;
  struct {
    char gap0_[8];
    __int64 v4;
    __int128 v5;
    __int128 v6;
    int64x2_t v7;
    __int128 v8;
    __int128 v9;
    __int128 v10;
    __int128 v11;
  } v4_;

  v1 = vdupq_n_s64(0x18u);
  v4_.v5 = SdkData_bb0ed0;
  if ((unsigned __int64)*a1 >= 0x78) {
    v2 = 120;
  }
  else {
    v2 = *a1;
  }
  v4_.v6 = SdkData_bb1660;
  v4_.v7 = v1;
  v4_.v4 = v2;
  v4_.v8 = SdkData_bb3570;
  v4_.v9 = SdkData_bb4050;
  v4_.v10 = SdkData_bb22b0;
  v4_.v11 = SdkData_bb3bd0;
  return memcpy_plt(a1, &v4_.v4, v2);
}

__int64 nn_69d250()
{
  _UNKNOWN** v0;
  __int64 (*v2)();

  v0 = SdkData_e89eb0;
  if (*((_BYTE*)((_UNKNOWN*)0x22CLL) + (_QWORD)SdkData_e89eb0) == 0) {
    v2 = SdkData_e89c50[0];
    *SdkData_e89ea8[0] = *(_UNKNOWN**)SdkData_e89c50[0];
    *(_QWORD*)v2 = SdkData_e89ea0;
    *((_BYTE*)((_UNKNOWN*)0x22CLL) + (_QWORD)v0) = 1;
  }
  return 0;
}

int8x8_t nn_69d490(int8x8_t* a1)
{
  bool v2;
  unsigned int v3;
  int8x8_t result;

  v2 = (unsigned int)SdkRoutine_6a0c20(LANES64(a1[2]).n64_i32[0]) == 5;
  LANES64(a1[2]).n64_u32[1] = 0;
  v3 = v2;
  LANES64(result).n64_u64[0] =
      LANES64_OF(vbsl_s8(vcltz_s32(vshl_n_s32(vdup_n_s32(v3), 0x1Fu)),
                         COERCE_AS(int8x8_t, 0xC00000100LL),
                         COERCE_AS(int8x8_t, 0x4000000000LL)))
          .n64_u64[0];
  LANES64(a1[3]).n64_u64[0] = LANES64(result).n64_u64[0];
  return result;
}

double nn_69d8e0(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  int v4;
  int v5;
  _DWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  double result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  v2 = (__int64*)(a1 + 7880);
  while (1) {
    v2 = (__int64*)*v2;
    if (v2 == nullptr) {
      break;
    }
    if (*((_DWORD*)v2 + 2) == 16777218) {
      v3 = v2[5];
      if (v3 != 0) {
        v4 = *(_DWORD*)(v3 + 0x2000);
        v5 = v4 & 0x3FF;
        v6 = (_DWORD*)(v3 + 8LL * (v4 & 0x3FF));
        *v6 = v4;
        v6[1] = a2;
        *(_DWORD*)(v3 + 0x2000) = v4 + 1;
        v7 = *(_QWORD*)(a1 + 11240);
        if ((unsigned __int64)(v7 + 48) > *(_QWORD*)(a1 + 11248)) {
          v8 = a1;
          SdkRoutine_64b750(a1 + 11240, v7,
                            4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 12)),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
          v7 = *(_QWORD*)(v8 + 11240);
          a1 = v8;
        }
        v9 = v2[4];
        *(_DWORD*)(v7 + 32) = v5;
        v10 = HIDWORD(v9);
        *(_DWORD*)(v7 + 8) = v9;
        *(_DWORD*)(v7 + 12) = v5;
        v9 += 4LL;
        *(_DWORD*)v7 = 537182212;
        *(_DWORD*)(v7 + 4) = v10;
        *(_DWORD*)(v7 + 24) = HIDWORD(v9);
        *(_DWORD*)(v7 + 28) = v9;
        *(_QWORD*)(v7 + 16) = 0x2003809001100002LL;
        *(_QWORD*)(v7 + 36) = 0xC200180C0LL;
        *(_QWORD*)(a1 + 11240) = v7 + 44;
        *(_QWORD*)&result = 0xC200180C0LL;
      }
      return result;
    }
  }
  return result;
}

bool nn_69e030(char* a1, char* a2, __int64 a3, __int64 a4, _QWORD* a5)
{
  unsigned int v10;
  int v13;
  _BOOL4 v14;
  _QWORD v16[8];
  struct {
    _QWORD v17[8];
    unsigned int v18;
  } v17_;

  v10 = NvOsDrvOpen_plt("/dev/nvhost-dbg-gpu");
  v17_.v18 = 0;
  memset(v16, 0, sizeof(v16));
  memset(v17_.v17, 0, sizeof(v17_.v17));
  strcpy_plt((void*)v16, a1);
  strcpy_plt((void*)v17_.v17, a2);
  v13 = NvOsDrvIoctl3_plt(v10, 3229893660LL, v16, 132, a3, a4);
  if (v13 == 0) {
    *a5 = v17_.v18;
  }
  v14 = v13 == 0;
  NvOsDrvClose_plt(v10);
  return v14;
}

__int64 (*nn_69f0c0(__int64 a1))(__int64)
{
  __int64 (*result)(__int64);
  void* v3;
  __int64* v4;
  void* v5;
  __int64 (*v6)(__int64);

  result = (__int64 (*)(__int64))SdkData_10450b8;
  if (SdkData_10450b8 != nullptr) {
    *SdkData_e89c28 |= 2u;
    v3 = SdkData_e89c10;
    v6 = result;
    nn_os_LockMutex_plt(SdkData_e89c10);
    v4 = SdkData_e89c18;
    v5 = SdkData_e89c38;
    memcpy_plt(SdkData_e89c38, *SdkData_e89c18, 5880);
    *v4 = (__int64)v5;
    nn_os_UnlockMutex_plt(v3);
    return (__int64 (*)(__int64))v6(a1);
  }
  return result;
}

#pragma GCC visibility pop
