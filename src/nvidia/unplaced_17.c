#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* NgxRoutine_36f0(_DWORD* result, unsigned int*, unsigned int);
_QWORD* NgxRoutine_312c0(__int64, _QWORD*);
_QWORD* NgxRoutine_b1640(__int64, unsigned __int8*, char*);
_QWORD* NgxRoutine_bcd70(_QWORD*);
_QWORD* NgxRoutine_bd1d0(_QWORD*, unsigned __int8);
_QWORD* NgxRoutine_bf120(_QWORD* result);
_QWORD* nvidia_28900_alt1(_QWORD*, __int64, __int64) __asm__("nvidia_28900");
__attribute__((swiftcall)) void NgxRoutine_33440(PSEUDO_X8, _DWORD*,
                                                 const char*);
__attribute__((swiftcall)) void
ngx_cubin_vulkan_b9220(PSEUDO_X8, __int64 result, unsigned __int64*);
__int64* NgxRoutine_db210(__int64* result, __int64*);
__int64 NgxRoutine_12ed0(_QWORD);
__int64 NgxRoutine_1d280(_QWORD);
__int64 NgxRoutine_27d10(__int64);
__int64 NgxRoutine_282c0(__int64);
__int64 NgxRoutine_283b0(__int64, _QWORD*);
__int64 NgxRoutine_28650(__int64, _QWORD*);
__int64 NgxRoutine_28a20(__int64, __int64, __int64, __int64, __int64, char);
__int64 NgxRoutine_29120(__int64*, unsigned __int64);
__int64 NgxRoutine_29320(__int64*, __int64, unsigned __int64);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_430_alt1(_QWORD) __asm__("NgxRoutine_430");
__int64 NgxRoutine_8b20(_QWORD);
__int64 NgxRoutine_b3540(_QWORD);
__int64 NgxRoutine_b3620(_QWORD*, __int64, unsigned __int64);
__int64 NgxRoutine_b4b90(__int64, __int64, __int64, __int64, ...);
__int64 NgxRoutine_b4c00(__int64 result, __int64, __int64, __int64, __int64,
                         __int64, __int64, __int64, char);
__int64 NgxRoutine_b4c80(__int64, __int64, __int64, ...);
__int64 NgxRoutine_badc0(__int64, __int64*);
__int64 NgxRoutine_baf10(__int64 result);
__int64 NgxRoutine_baf70(__int64, __int64);
__int64 NgxRoutine_bcf20(__int64 result, __int64*);
__int64 NgxRoutine_bcf80(__int64 result);
__int64 NgxRoutine_bf010(_QWORD);
__int64 NgxRoutine_db240(__int64*);
__int64 NgxRoutine_db310(__int64*, __int64);
__int64 NgxRoutine_e2c70();
__int64 NgxRoutine_e2ca0();
__int64 _Unwind_Resume_plt(_QWORD);
__int64 __errno_location_plt(_QWORD);
__int64 fopen_plt(const char*, const char*);
__int64 getenv_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_31860(__int64, __int64);
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 std_exception_Destroy_exception_plt();
__int64 strerror_r_plt(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 strtoull_plt(_QWORD, _QWORD, _QWORD);
__int64 ungetc_plt(_QWORD, _QWORD);
__int64 ungetwc_plt(_QWORD, _QWORD);
__int64 util_log_b49c0(_DWORD*, _DWORD*, int);
__int64 vkDestroyBuffer_plt(_QWORD, _QWORD, _QWORD);
__int64 vkDestroyImageView_plt(_QWORD, _QWORD, _QWORD);
__int64 vkDestroyImage_plt(_QWORD, _QWORD, _QWORD);
__int64 vkFreeMemory_plt(_QWORD, _QWORD, _QWORD);
__int64 vkMapMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkUnmapMemory_plt(_QWORD, _QWORD);
__int64 wcsdup_plt(_QWORD);
__int64 wcslen_plt(_QWORD);
__int64 wcsncat_plt(_QWORD, _QWORD, _QWORD);
__int64 wcsncpy_plt(_QWORD, _QWORD, _QWORD);
extern _DWORD NgxData_f5650[];
extern _UNKNOWN* NgxData_94c0b0;
extern _UNKNOWN* NgxData_9511b8;
extern _UNKNOWN* NgxData_951328;
extern _UNKNOWN** NgxData_954780[2];
extern _UNKNOWN** NgxData_954788;
extern _UNKNOWN NgxData_f5558;
extern _UNKNOWN NgxData_f5560;
extern _UNKNOWN NgxData_f5a78;
extern _UNKNOWN NgxData_f5c1c;
extern __int64 (*NgxData_94c000[])();
extern __int64* NgxData_9521a8[16];
extern __int64* NgxData_9521b0[15];
extern __int64* NgxData_9521b8[14];
extern __int64* NgxData_9521c0[13];
extern __int64* NgxData_9521c8[12];
extern __int64* NgxData_9521d0[11];
extern __int64* NgxData_9521d8[10];
extern __int64* NgxData_9521e8[8];
extern __int64* NgxData_9521f8[6];
extern __int64* NgxData_952208[4];
extern __int64* NgxData_954750;
extern __int64* NgxData_954770;
extern __int64 NgxData_951178[7];
extern char* NgxData_954790[2];
extern char* NgxData_954798;
extern char NgxData_ebe5a;
extern int* NgxData_954768[3];
extern int* NgxData_954778;
extern void (*NgxData_954740)();
int atoi_plt(const char*);
int fclose_plt(__int64);
unsigned __int64 NgxRoutine_e2400(unsigned __int64);
void** NgxRoutine_db280(void** result, void**);
void NgxRoutine_27fe0(__int64, _QWORD*);
void __attribute__((noreturn)) NgxRoutine_be3e0();
void __attribute__((noreturn)) NgxRoutine_be780(__int64);
void __attribute__((noreturn)) NgxRoutine_bfba0(__int64);
void __attribute__((noreturn)) NgxRoutine_bff20(__int64);
void __attribute__((noreturn)) abort_plt(_QWORD);
__int64 nvidia_1b0(unsigned __int64 a1);
__int64 nvidia_4d0(__int64 result);
__int64 nvidia_590(__int64 result);
__int64 nvidia_650(__int64 result);
__int64 nvidia_710(__int64 result);
__int64 nvidia_7d0(__int64 result);
__int64 nvidia_2880(__int64 result);
__int64 nvidia_2a00(__int64 result);
_DWORD* nvidia_3600(__int64 a1, int a2);
_DWORD* nvidia_3970(__int64 a1, int a2);
_DWORD* nvidia_3ab0(__int64 a1, int a2);
_DWORD* nvidia_3bf0(__int64 a1, int a2);
_DWORD* nvidia_3d30(__int64 a1, int a2);
_DWORD* nvidia_3e70(__int64 a1, int a2);
_DWORD* nvidia_3fb0(__int64 a1, int a2);
_DWORD* nvidia_40f0(__int64 a1, int a2);
_DWORD* nvidia_4230(__int64 a1);
_DWORD* nvidia_45c0(__int64 a1);
_DWORD* nvidia_5500(__int64 a1);
_DWORD* nvidia_5980(__int64 a1);
_DWORD* nvidia_5cb0(__int64 a1, int a2);
_DWORD* nvidia_5db0(__int64 a1, int a2);
_DWORD* nvidia_5eb0(__int64 a1);
_DWORD* nvidia_5fa0(__int64 a1);
_DWORD* nvidia_6520(__int64 a1, int a2);
__int64 nvidia_85f0(__int64 a1);
__int64 nvidia_86b0(__int64 a1);
__int64 nvidia_8770(__int64 a1);
__int64 nvidia_8830(__int64 a1);
_QWORD* nvidia_88b0(__int64 a1, int a2);
__attribute__((swiftcall)) void nvidia_27630(PSEUDO_X8 x8_, _QWORD* result);
__attribute__((swiftcall)) void nvidia_27750(PSEUDO_X8 x8_, _QWORD* result,
                                             _QWORD* a2);
__attribute__((swiftcall)) void nvidia_278e0(PSEUDO_X8 x8_, _QWORD* result,
                                             _QWORD* a2);
__attribute__((swiftcall)) void nvidia_27a00(PSEUDO_X8 x8_, _QWORD* result,
                                             _QWORD* a2);
__int64 nvidia_27b30(_DWORD* a1);
__int64 nvidia_27bf0(_DWORD* a1, __int64 a2);
void nvidia_27e80(_QWORD* a1);
__int64 nvidia_27f20(__int64 a1);
void nvidia_28160(_QWORD* a1);
__int64 nvidia_28200(__int64 a1);
void nvidia_284f0(_QWORD* a1);
__int64 nvidia_28590(__int64 a1);
void nvidia_287a0(_QWORD* a1);
__int64 nvidia_28840(__int64 a1);
__int64* nvidia_28900(__int64* a1, __int64 a2, __int64 a3);
__int64 nvidia_29cf0(_DWORD* a1, int a2, int a3, int a4, int a5, int a6);
_QWORD* nvidia_29e50(_QWORD* a1);
__int64 nvidia_aea40(__int64 a1, int* a2, int* a3);
unsigned __int64 nvidia_b1500(unsigned __int64 result, __int64 a2);
__int64 nvidia_b1a80(__int64 a1, __int64* a2, __int64 a3, _QWORD** a4);
void __attribute__((noreturn)) nvidia_b3380();
__attribute__((swiftcall)) void nvidia_b37a0(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2);
bool nvidia_b42a0(__int64 a1, __int64 a2, char a3, int a4, void* a5, char a6,
                  int a7);
__int64 nvidia_ba050(__int64 result, __int64 a2);
__int64 nvidia_ba2d0(__int64 a1, unsigned __int64* a2, __int64 a3, __int64 a4,
                     void (***a5)(_QWORD, __int64, _QWORD, unsigned __int64));
__int64 nvidia_bbb20(__int64 a1, unsigned int a2);
void __attribute__((noreturn)) nvidia_bbecc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10);
__int64 nvidia_bc340(__int64 a1, unsigned int a2);
void __attribute__((noreturn)) nvidia_bc6dc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10);
__int64* nvidia_bd030(__int64* a1);
__attribute__((swiftcall)) void nvidia_be4b0(PSEUDO_X8 x8_, __int64 a1,
                                             signed int a2);
__attribute__((swiftcall)) void nvidia_be5c0(PSEUDO_X8 x8_, _QWORD* a1,
                                             void** a2);
__attribute__((swiftcall)) void nvidia_be650(PSEUDO_X8 x8_, __int64 a1);
__int64 nvidia_be740(__int64 result, int a2);
__attribute__((swiftcall)) void nvidia_be8c0(PSEUDO_X8 x8_, __int64 a1,
                                             unsigned int a2);
__attribute__((swiftcall)) void nvidia_be9f0(PSEUDO_X8 x8_, __int64 a1,
                                             signed int a2);
__attribute__((swiftcall)) void nvidia_bea70(PSEUDO_X8 x8_, __int64 a1,
                                             signed int a2);
void __attribute__((noreturn)) nvidia_bef60(__int64 a1);
__int64 nvidia_beffc(__int64 a1);
void __attribute__((noreturn)) nvidia_bf080(__int64 a1);
void __attribute__((noreturn)) nvidia_bf100();
__int64 nvidia_bfc00(char* a1, _QWORD* a2, unsigned int a3);
__attribute__((swiftcall)) void nvidia_c04d0(PSEUDO_X8 x8_, __int64 unused_int0,
                                             __int64 a1, __int64 a2);
__attribute__((swiftcall)) void nvidia_c06d0(PSEUDO_X8 x8_, __int64 unused_int0,
                                             __int64 a1, __int64 a2);

__int64 nvidia_1b0(unsigned __int64 a1)
{
  if (a1 < (unsigned __int64)NgxData_94c000 ||
      a1 >= (unsigned __int64)&NgxData_94c0b0 || (a1 & 7) != 0) {
    __udf(0x8003u);
  }
  return ((__typeof__((*(__int64 (**)(void))a1)()) (*)())(
      *(__int64 (**)(void))a1))(a1);
}

__int64 nvidia_4d0(__int64 result)
{
  int v1;
  int v2;
  bool v3;
  __int64 v4;
  int v5;
  char v6;

  v2 = *(_DWORD*)(result + 56);
  v1 = *(_DWORD*)(result + 60);
  v3 = v1 * v2 == 1;
  v4 = v1 * (__int64)v2 * *(int*)(result + 52);
  if (v3) {
    v5 = 32;
  }
  else {
    v5 = 8;
  }
  v6 = 3;
  if (v3) {
    v6 = 5;
  }
  *(_QWORD*)(result + 88) =
      2 * ((*(int*)(result + 36) * (__int64)*(int*)(result + 32)) << v6);
  *(_QWORD*)(result + 96) = 2 * (v4 << v6);
  *(_DWORD*)(result + 368) = (v5 + *(int*)(result + 40) - 1) / v5 - 1;
  return result;
}

__int64 nvidia_590(__int64 result)
{
  int v1;
  int v2;
  bool v3;
  __int64 v4;
  int v5;
  char v6;

  v2 = *(_DWORD*)(result + 56);
  v1 = *(_DWORD*)(result + 60);
  v3 = v1 * v2 == 1;
  v4 = v1 * (__int64)v2 * *(int*)(result + 52);
  if (v3) {
    v5 = 32;
  }
  else {
    v5 = 8;
  }
  v6 = 3;
  if (v3) {
    v6 = 5;
  }
  *(_QWORD*)(result + 88) =
      2 * ((*(int*)(result + 36) * (__int64)*(int*)(result + 32)) << v6);
  *(_QWORD*)(result + 96) = 2 * (v4 << v6);
  *(_DWORD*)(result + 368) = (v5 + *(_DWORD*)(result + 40) - 1) / v5 - 1;
  return result;
}

__int64 nvidia_650(__int64 result)
{
  int v1;
  int v2;
  bool v3;
  __int64 v4;
  int v5;
  char v6;

  v2 = *(_DWORD*)(result + 56);
  v1 = *(_DWORD*)(result + 60);
  v3 = v1 * v2 == 1;
  v4 = v1 * (__int64)v2 * *(int*)(result + 52);
  if (v3) {
    v5 = 32;
  }
  else {
    v5 = 8;
  }
  v6 = 3;
  if (v3) {
    v6 = 5;
  }
  *(_QWORD*)(result + 88) =
      2 * ((*(int*)(result + 36) * (__int64)*(int*)(result + 32)) << v6);
  *(_QWORD*)(result + 96) = 2 * (v4 << v6);
  *(_DWORD*)(result + 368) = (v5 + *(int*)(result + 40) - 1) / v5 - 1;
  return result;
}

__int64 nvidia_710(__int64 result)
{
  int v1;
  int v2;
  bool v3;
  __int64 v4;
  int v5;
  char v6;

  v2 = *(_DWORD*)(result + 56);
  v1 = *(_DWORD*)(result + 60);
  v3 = v1 * v2 == 1;
  v4 = v1 * (__int64)v2 * *(int*)(result + 52);
  if (v3) {
    v5 = 32;
  }
  else {
    v5 = 8;
  }
  v6 = 3;
  if (v3) {
    v6 = 5;
  }
  *(_QWORD*)(result + 88) =
      2 * ((*(int*)(result + 36) * (__int64)*(int*)(result + 32)) << v6);
  *(_QWORD*)(result + 96) = 2 * (v4 << v6);
  *(_DWORD*)(result + 368) = (v5 + *(int*)(result + 40) - 1) / v5 - 1;
  return result;
}

__int64 nvidia_7d0(__int64 result)
{
  int v1;
  int v2;
  bool v3;
  __int64 v4;
  int v5;
  char v6;

  v2 = *(_DWORD*)(result + 56);
  v1 = *(_DWORD*)(result + 60);
  v3 = v1 * v2 == 1;
  v4 = v1 * (__int64)v2 * *(int*)(result + 52);
  if (v3) {
    v5 = 32;
  }
  else {
    v5 = 8;
  }
  v6 = 3;
  if (v3) {
    v6 = 5;
  }
  *(_QWORD*)(result + 88) =
      2 * ((*(int*)(result + 36) * (__int64)*(int*)(result + 32)) << v6);
  *(_QWORD*)(result + 96) = 2 * (v4 << v6);
  *(_DWORD*)(result + 368) = (v5 + *(_DWORD*)(result + 40) - 1) / v5 - 1;
  return result;
}

__int64 nvidia_2880(__int64 result)
{
  int v1;
  int v2;
  bool v3;
  __int64 v4;
  int v5;
  char v6;

  v2 = *(_DWORD*)(result + 64);
  v1 = *(_DWORD*)(result + 68);
  v3 = v1 * v2 == 1;
  v4 = v1 * (__int64)v2 * *(int*)(result + 60);
  if (v3) {
    v5 = 32;
  }
  else {
    v5 = 8;
  }
  v6 = 3;
  if (v3) {
    v6 = 5;
  }
  *(_QWORD*)(result + 104) =
      2 * ((*(int*)(result + 44) * (__int64)*(int*)(result + 40)) << v6);
  *(_QWORD*)(result + 112) = 2 * (v4 << v6);
  *(_DWORD*)(result + 384) = (v5 + *(_DWORD*)(result + 48) - 1) / v5 - 1;
  return result;
}

__int64 nvidia_2a00(__int64 result)
{
  int v1;
  int v2;
  bool v3;
  __int64 v4;
  int v5;
  char v6;

  v2 = *(_DWORD*)(result + 64);
  v1 = *(_DWORD*)(result + 68);
  v3 = v1 * v2 == 1;
  v4 = v1 * (__int64)v2 * *(int*)(result + 60);
  if (v3) {
    v5 = 32;
  }
  else {
    v5 = 8;
  }
  v6 = 3;
  if (v3) {
    v6 = 5;
  }
  *(_QWORD*)(result + 104) =
      2 * ((*(int*)(result + 44) * (__int64)*(int*)(result + 40)) << v6);
  *(_QWORD*)(result + 112) = 2 * (v4 << v6);
  *(_DWORD*)(result + 384) = (v5 + *(_DWORD*)(result + 48) - 1) / v5 - 1;
  return result;
}

_DWORD* nvidia_3600(__int64 a1, int a2)
{
  int v3;
  int v4;
  int v5;
  _DWORD* v6;
  bool v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  _DWORD* result;
  __int64 v16;
  int v17;

  if (*(_DWORD*)(a1 + 116) == 1 && *(_DWORD*)(a1 + 120) == 1) {
    v3 = 32;
  }
  else if (a2 <= 79) {
    v3 = 8;
  }
  else {
    v3 = 16;
  }
  v4 = *(_DWORD*)(a1 + 100);
  v5 = *(_DWORD*)(a1 + 104);
  v6 = (_DWORD*)(a1 + 312);
  v8 = __OFADD__(v4, 7);
  v9 = v4 + 7;
  v7 = v4 + 7 < 0;
  v10 = v4 + 14;
  if (v7 == v8) {
    v10 = v9;
  }
  v8 = __OFADD__(v5, 7);
  v11 = v5 + 7;
  v7 = v5 + 7 < 0;
  v12 = v5 + 14;
  if (v7 == v8) {
    v12 = v11;
  }
  v13 = v12 >> 3;
  v14 = v13 * (v10 >> 3);
  *(_DWORD*)(a1 + 308) = v13;
  *(_DWORD*)(a1 + 304) = v14;
  NgxRoutine_36f0(v6, (unsigned int*)(a1 + 316), v14);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  v16 = 2 * v3 * (__int64)*(int*)(a1 + 116) * *(int*)(a1 + 120) *
        *(int*)(a1 + 108);
  *(_QWORD*)(a1 + 160) = *(int*)(a1 + 80) * (__int64)v3 * *(int*)(a1 + 84);
  *(_QWORD*)(a1 + 168) = v16;
  v17 = (v3 + *(_DWORD*)(a1 + 92) - 1) / v3 - 1;
  *(_DWORD*)(a1 + 352) = v17;
  *(_DWORD*)(a1 + 356) = v17 * v3;
  return result;
}

_DWORD* nvidia_3970(__int64 a1, int a2)
{
  int v3;
  int v4;
  int v5;
  _DWORD* v6;
  bool v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  _DWORD* result;
  __int64 v16;
  int v17;

  if (*(_DWORD*)(a1 + 116) == 1 && *(_DWORD*)(a1 + 120) == 1) {
    v3 = 32;
  }
  else if (a2 <= 79) {
    v3 = 8;
  }
  else {
    v3 = 16;
  }
  v4 = *(_DWORD*)(a1 + 100);
  v5 = *(_DWORD*)(a1 + 104);
  v6 = (_DWORD*)(a1 + 312);
  v8 = __OFADD__(v4, 7);
  v9 = v4 + 7;
  v7 = v4 + 7 < 0;
  v10 = v4 + 14;
  if (v7 == v8) {
    v10 = v9;
  }
  v8 = __OFADD__(v5, 7);
  v11 = v5 + 7;
  v7 = v5 + 7 < 0;
  v12 = v5 + 14;
  if (v7 == v8) {
    v12 = v11;
  }
  v13 = v12 >> 3;
  v14 = v13 * (v10 >> 3);
  *(_DWORD*)(a1 + 308) = v13;
  *(_DWORD*)(a1 + 304) = v14;
  NgxRoutine_36f0(v6, (unsigned int*)(a1 + 316), v14);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  v16 = 2 * v3 * (__int64)*(int*)(a1 + 116) * *(int*)(a1 + 120) *
        *(int*)(a1 + 108);
  *(_QWORD*)(a1 + 160) = *(int*)(a1 + 80) * (__int64)v3 * *(int*)(a1 + 84);
  *(_QWORD*)(a1 + 168) = v16;
  v17 = (v3 + *(int*)(a1 + 92) - 1) / v3 - 1;
  *(_DWORD*)(a1 + 352) = v17;
  *(_DWORD*)(a1 + 356) = v17 * v3;
  return result;
}

_DWORD* nvidia_3ab0(__int64 a1, int a2)
{
  int v3;
  int v4;
  int v5;
  _DWORD* v6;
  bool v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  _DWORD* result;
  __int64 v16;
  int v17;

  if (*(_DWORD*)(a1 + 116) == 1 && *(_DWORD*)(a1 + 120) == 1) {
    v3 = 32;
  }
  else if (a2 <= 79) {
    v3 = 8;
  }
  else {
    v3 = 16;
  }
  v4 = *(_DWORD*)(a1 + 100);
  v5 = *(_DWORD*)(a1 + 104);
  v6 = (_DWORD*)(a1 + 312);
  v8 = __OFADD__(v4, 3);
  v9 = v4 + 3;
  v7 = v4 + 3 < 0;
  v10 = v4 + 6;
  if (v7 == v8) {
    v10 = v9;
  }
  v8 = __OFADD__(v5, 3);
  v11 = v5 + 3;
  v7 = v5 + 3 < 0;
  v12 = v5 + 6;
  if (v7 == v8) {
    v12 = v11;
  }
  v13 = v12 >> 2;
  v14 = v13 * (v10 >> 2);
  *(_DWORD*)(a1 + 308) = v13;
  *(_DWORD*)(a1 + 304) = v14;
  NgxRoutine_36f0(v6, (unsigned int*)(a1 + 316), v14);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  v16 = 2 * v3 * (__int64)*(int*)(a1 + 116) * *(int*)(a1 + 120) *
        *(int*)(a1 + 108);
  *(_QWORD*)(a1 + 160) = *(int*)(a1 + 80) * (__int64)v3 * *(int*)(a1 + 84);
  *(_QWORD*)(a1 + 168) = v16;
  v17 = (v3 + *(_DWORD*)(a1 + 92) - 1) / v3 - 1;
  *(_DWORD*)(a1 + 352) = v17;
  *(_DWORD*)(a1 + 356) = v17 * v3;
  return result;
}

_DWORD* nvidia_3bf0(__int64 a1, int a2)
{
  int v3;
  int v4;
  int v5;
  _DWORD* v6;
  bool v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  _DWORD* result;
  __int64 v16;
  int v17;

  if (*(_DWORD*)(a1 + 116) == 1 && *(_DWORD*)(a1 + 120) == 1) {
    v3 = 32;
  }
  else if (a2 <= 79) {
    v3 = 8;
  }
  else {
    v3 = 16;
  }
  v4 = *(_DWORD*)(a1 + 100);
  v5 = *(_DWORD*)(a1 + 104);
  v6 = (_DWORD*)(a1 + 312);
  v8 = __OFADD__(v4, 3);
  v9 = v4 + 3;
  v7 = v4 + 3 < 0;
  v10 = v4 + 6;
  if (v7 == v8) {
    v10 = v9;
  }
  v8 = __OFADD__(v5, 3);
  v11 = v5 + 3;
  v7 = v5 + 3 < 0;
  v12 = v5 + 6;
  if (v7 == v8) {
    v12 = v11;
  }
  v13 = v12 >> 2;
  v14 = v13 * (v10 >> 2);
  *(_DWORD*)(a1 + 308) = v13;
  *(_DWORD*)(a1 + 304) = v14;
  NgxRoutine_36f0(v6, (unsigned int*)(a1 + 316), v14);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  v16 = 2 * v3 * (__int64)*(int*)(a1 + 116) * *(int*)(a1 + 120) *
        *(int*)(a1 + 108);
  *(_QWORD*)(a1 + 160) = 2 * v3 * (__int64)*(int*)(a1 + 80) * *(int*)(a1 + 84);
  *(_QWORD*)(a1 + 168) = v16;
  v17 = (v3 + *(_DWORD*)(a1 + 92) - 1) / v3 - 1;
  *(_DWORD*)(a1 + 352) = v17;
  *(_DWORD*)(a1 + 356) = v17 * v3;
  return result;
}

_DWORD* nvidia_3d30(__int64 a1, int a2)
{
  int v3;
  int v4;
  int v5;
  _DWORD* v6;
  bool v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  _DWORD* result;
  __int64 v16;
  int v17;

  if (*(_DWORD*)(a1 + 116) == 1 && *(_DWORD*)(a1 + 120) == 1) {
    v3 = 32;
  }
  else if (a2 <= 79) {
    v3 = 8;
  }
  else {
    v3 = 16;
  }
  v4 = *(_DWORD*)(a1 + 100);
  v5 = *(_DWORD*)(a1 + 104);
  v6 = (_DWORD*)(a1 + 312);
  v8 = __OFADD__(v4, 3);
  v9 = v4 + 3;
  v7 = v4 + 3 < 0;
  v10 = v4 + 6;
  if (v7 == v8) {
    v10 = v9;
  }
  v8 = __OFADD__(v5, 7);
  v11 = v5 + 7;
  v7 = v5 + 7 < 0;
  v12 = v5 + 14;
  if (v7 == v8) {
    v12 = v11;
  }
  v13 = v12 >> 3;
  v14 = v13 * (v10 >> 2);
  *(_DWORD*)(a1 + 308) = v13;
  *(_DWORD*)(a1 + 304) = v14;
  NgxRoutine_36f0(v6, (unsigned int*)(a1 + 316), v14);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  v16 = 2 * v3 * (__int64)*(int*)(a1 + 116) * *(int*)(a1 + 120) *
        *(int*)(a1 + 108);
  *(_QWORD*)(a1 + 160) = *(int*)(a1 + 80) * (__int64)v3 * *(int*)(a1 + 84);
  *(_QWORD*)(a1 + 168) = v16;
  v17 = (v3 + *(_DWORD*)(a1 + 92) - 1) / v3 - 1;
  *(_DWORD*)(a1 + 352) = v17;
  *(_DWORD*)(a1 + 356) = v17 * v3;
  return result;
}

_DWORD* nvidia_3e70(__int64 a1, int a2)
{
  int v3;
  int v4;
  int v5;
  _DWORD* v6;
  bool v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  _DWORD* result;
  __int64 v16;
  int v17;

  if (*(_DWORD*)(a1 + 116) == 1 && *(_DWORD*)(a1 + 120) == 1) {
    v3 = 32;
  }
  else if (a2 <= 79) {
    v3 = 8;
  }
  else {
    v3 = 16;
  }
  v4 = *(_DWORD*)(a1 + 100);
  v5 = *(_DWORD*)(a1 + 104);
  v6 = (_DWORD*)(a1 + 312);
  v8 = __OFADD__(v4, 3);
  v9 = v4 + 3;
  v7 = v4 + 3 < 0;
  v10 = v4 + 6;
  if (v7 == v8) {
    v10 = v9;
  }
  v8 = __OFADD__(v5, 7);
  v11 = v5 + 7;
  v7 = v5 + 7 < 0;
  v12 = v5 + 14;
  if (v7 == v8) {
    v12 = v11;
  }
  v13 = v12 >> 3;
  v14 = v13 * (v10 >> 2);
  *(_DWORD*)(a1 + 308) = v13;
  *(_DWORD*)(a1 + 304) = v14;
  NgxRoutine_36f0(v6, (unsigned int*)(a1 + 316), v14);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  v16 = 2 * v3 * (__int64)*(int*)(a1 + 116) * *(int*)(a1 + 120) *
        *(int*)(a1 + 108);
  *(_QWORD*)(a1 + 160) = 2 * v3 * (__int64)*(int*)(a1 + 80) * *(int*)(a1 + 84);
  *(_QWORD*)(a1 + 168) = v16;
  v17 = (v3 + *(int*)(a1 + 92) - 1) / v3 - 1;
  *(_DWORD*)(a1 + 352) = v17;
  *(_DWORD*)(a1 + 356) = v17 * v3;
  return result;
}

_DWORD* nvidia_3fb0(__int64 a1, int a2)
{
  int v3;
  int v4;
  int v5;
  _DWORD* v6;
  bool v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  _DWORD* result;
  __int64 v16;
  int v17;

  if (*(_DWORD*)(a1 + 116) == 1 && *(_DWORD*)(a1 + 120) == 1) {
    v3 = 32;
  }
  else if (a2 <= 79) {
    v3 = 8;
  }
  else {
    v3 = 16;
  }
  v4 = *(_DWORD*)(a1 + 100);
  v5 = *(_DWORD*)(a1 + 104);
  v6 = (_DWORD*)(a1 + 312);
  v8 = __OFADD__(v4, 7);
  v9 = v4 + 7;
  v7 = v4 + 7 < 0;
  v10 = v4 + 14;
  if (v7 == v8) {
    v10 = v9;
  }
  v8 = __OFADD__(v5, 15);
  v11 = v5 + 15;
  v7 = v5 + 15 < 0;
  v12 = v5 + 30;
  if (v7 == v8) {
    v12 = v11;
  }
  v13 = v12 >> 4;
  v14 = v13 * (v10 >> 3);
  *(_DWORD*)(a1 + 308) = v13;
  *(_DWORD*)(a1 + 304) = v14;
  NgxRoutine_36f0(v6, (unsigned int*)(a1 + 316), v14);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  v16 = 2 * v3 * (__int64)*(int*)(a1 + 116) * *(int*)(a1 + 120) *
        *(int*)(a1 + 108);
  *(_QWORD*)(a1 + 160) = 2 * v3 * (__int64)*(int*)(a1 + 80) * *(int*)(a1 + 84);
  *(_QWORD*)(a1 + 168) = v16;
  v17 = (v3 + *(int*)(a1 + 92) - 1) / v3 - 1;
  *(_DWORD*)(a1 + 352) = v17;
  *(_DWORD*)(a1 + 356) = v17 * v3;
  return result;
}

_DWORD* nvidia_40f0(__int64 a1, int a2)
{
  int v3;
  int v4;
  int v5;
  _DWORD* v6;
  bool v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  _DWORD* result;
  __int64 v16;
  int v17;

  if (*(_DWORD*)(a1 + 116) == 1 && *(_DWORD*)(a1 + 120) == 1) {
    v3 = 32;
  }
  else if (a2 <= 79) {
    v3 = 8;
  }
  else {
    v3 = 16;
  }
  v4 = *(_DWORD*)(a1 + 100);
  v5 = *(_DWORD*)(a1 + 104);
  v6 = (_DWORD*)(a1 + 312);
  v8 = __OFADD__(v4, 7);
  v9 = v4 + 7;
  v7 = v4 + 7 < 0;
  v10 = v4 + 14;
  if (v7 == v8) {
    v10 = v9;
  }
  v8 = __OFADD__(v5, 15);
  v11 = v5 + 15;
  v7 = v5 + 15 < 0;
  v12 = v5 + 30;
  if (v7 == v8) {
    v12 = v11;
  }
  v13 = v12 >> 4;
  v14 = v13 * (v10 >> 3);
  *(_DWORD*)(a1 + 308) = v13;
  *(_DWORD*)(a1 + 304) = v14;
  NgxRoutine_36f0(v6, (unsigned int*)(a1 + 316), v14);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  v16 = 2 * v3 * (__int64)*(int*)(a1 + 116) * *(int*)(a1 + 120) *
        *(int*)(a1 + 108);
  *(_QWORD*)(a1 + 160) = 2 * v3 * (__int64)*(int*)(a1 + 80) * *(int*)(a1 + 84);
  *(_QWORD*)(a1 + 168) = v16;
  v17 = (v3 + *(int*)(a1 + 92) - 1) / v3 - 1;
  *(_DWORD*)(a1 + 352) = v17;
  *(_DWORD*)(a1 + 356) = v17 * v3;
  return result;
}

_DWORD* nvidia_4230(__int64 a1)
{
  int v1;
  int v2;
  bool v4;
  bool v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  _DWORD* result;
  int v13;
  int v14;
  int v15;
  __int64 v16;

  v1 = *(_DWORD*)(a1 + 188);
  v2 = *(_DWORD*)(a1 + 192);
  v5 = __OFADD__(v1, 3);
  v6 = v1 + 3;
  v4 = v1 + 3 < 0;
  v7 = v1 + 6;
  if (v4 == v5) {
    v7 = v6;
  }
  v5 = __OFADD__(v2, 7);
  v8 = v2 + 7;
  v4 = v2 + 7 < 0;
  v9 = v2 + 14;
  if (v4 == v5) {
    v9 = v8;
  }
  v10 = v9 >> 3;
  v11 = v10 * (v7 >> 2);
  *(_DWORD*)(a1 + 352) = v10;
  *(_DWORD*)(a1 + 348) = v11;
  NgxRoutine_36f0((_DWORD*)(a1 + 356), (unsigned int*)(a1 + 360), v11);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 364), (unsigned int*)(a1 + 368),
                           *(_DWORD*)(a1 + 352));
  v13 = *(_DWORD*)(a1 + 352);
  v14 = *(_DWORD*)(a1 + 368);
  *(_DWORD*)(a1 + 124) = v13;
  *(_DWORD*)(a1 + 212) = v13;
  v15 = *(_DWORD*)(a1 + 364);
  *(_DWORD*)(a1 + 136) = v15;
  *(_DWORD*)(a1 + 140) = v14;
  *(_DWORD*)(a1 + 224) = v15;
  *(_DWORD*)(a1 + 228) = v14;
  v16 = 144LL * *(int*)(a1 + 20);
  *(_QWORD*)(a1 + 144) = 16 * *(int*)(a1 + 316) * (__int64)*(int*)(a1 + 320);
  *(_QWORD*)(a1 + 152) = v16;
  return result;
}

_DWORD* nvidia_45c0(__int64 a1)
{
  int v1;
  int v2;
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  _DWORD* result;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  int v22;
  int v23;
  int v24;

  v1 = *(_DWORD*)(a1 + 100);
  v2 = *(_DWORD*)(a1 + 104);
  v5 = v1 + 7;
  v4 = v1 < -7;
  v6 = v1 + 14;
  if (!v4) {
    v6 = v5;
  }
  v7 = v2 + 7;
  v4 = v2 < -7;
  v8 = v2 + 14;
  if (!v4) {
    v8 = v7;
  }
  v9 = v8 >> 3;
  v10 = v9 * (v6 >> 3);
  *(_DWORD*)(a1 + 308) = v9;
  *(_DWORD*)(a1 + 304) = v10;
  NgxRoutine_36f0((_DWORD*)(a1 + 312), (unsigned int*)(a1 + 316), v10);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 160) = 64;
  v12 = *(_DWORD*)(a1 + 120) * *(_DWORD*)(a1 + 116);
  v13 = *(int*)(a1 + 92);
  v14 = v12 - 1;
  v15 = v12 - 2;
  if (v12 >= 2) {
    v16 = 2 * v13;
    v17 = v14 & 7;
    if (v15 < 7) {
      v18 = 0;
      if ((v14 & 7) == 0) {
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    v19 = (__int64*)(a1 + 224);
    v20 = 0;
    do {
      *(v19 - 7) = v16;
      *(v19 - 6) = v16;
      *(v19 - 5) = v16;
      *(v19 - 4) = v16;
      v20 -= 8;
      *(v19 - 3) = v16;
      *(v19 - 2) = v16;
      *(v19 - 1) = v16;
      *v19 = v16;
      v19 += 8;
    } while (-(__int64)(v14 & 0x7FFFFFF8) != v20);
    v18 = -v20;
    if ((v14 & 7) != 0) {
    LABEL_12:
      v21 = (__int64*)(a1 + 8 * v18 + 168);
      do {
        *v21++ = v16;
        --v17;
      } while (v17 != 0);
    }
  }
LABEL_14:
  *(_QWORD*)(a1 + 8LL * v14 + 168) = 64 - 2LL * (int)v13 * v14;
  v22 = v13 + 31;
  v4 = (int)v13 < -31;
  v23 = v13 + 62;
  if (!v4) {
    v23 = v22;
  }
  v24 = (v23 >> 5) - 1;
  *(_DWORD*)(a1 + 352) = v24;
  *(_DWORD*)(a1 + 356) = 32 * v24;
  return result;
}

_DWORD* nvidia_5500(__int64 a1)
{
  int v1;
  int v2;
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  _DWORD* result;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  int v22;
  int v23;
  int v24;

  v1 = *(_DWORD*)(a1 + 100);
  v2 = *(_DWORD*)(a1 + 104);
  v5 = v1 + 7;
  v4 = v1 < -7;
  v6 = v1 + 14;
  if (!v4) {
    v6 = v5;
  }
  v7 = v2 + 7;
  v4 = v2 < -7;
  v8 = v2 + 14;
  if (!v4) {
    v8 = v7;
  }
  v9 = v8 >> 3;
  v10 = v9 * (v6 >> 3);
  *(_DWORD*)(a1 + 308) = v9;
  *(_DWORD*)(a1 + 304) = v10;
  NgxRoutine_36f0((_DWORD*)(a1 + 312), (unsigned int*)(a1 + 316), v10);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 160) = 64;
  v12 = *(_DWORD*)(a1 + 120) * *(_DWORD*)(a1 + 116);
  v13 = *(int*)(a1 + 92);
  v14 = v12 - 1;
  v15 = v12 - 2;
  if (v12 >= 2) {
    v16 = 2 * v13;
    v17 = v14 & 7;
    if (v15 < 7) {
      v18 = 0;
      if ((v14 & 7) == 0) {
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    v19 = (__int64*)(a1 + 224);
    v20 = 0;
    do {
      *(v19 - 7) = v16;
      *(v19 - 6) = v16;
      *(v19 - 5) = v16;
      *(v19 - 4) = v16;
      v20 -= 8;
      *(v19 - 3) = v16;
      *(v19 - 2) = v16;
      *(v19 - 1) = v16;
      *v19 = v16;
      v19 += 8;
    } while (-(__int64)(v14 & 0x7FFFFFF8) != v20);
    v18 = -v20;
    if ((v14 & 7) != 0) {
    LABEL_12:
      v21 = (__int64*)(a1 + 8 * v18 + 168);
      do {
        *v21++ = v16;
        --v17;
      } while (v17 != 0);
    }
  }
LABEL_14:
  *(_QWORD*)(a1 + 8LL * v14 + 168) = 64 - 2LL * (int)v13 * v14;
  v22 = v13 + 31;
  v4 = (int)v13 < -31;
  v23 = v13 + 62;
  if (!v4) {
    v23 = v22;
  }
  v24 = (v23 >> 5) - 1;
  *(_DWORD*)(a1 + 352) = v24;
  *(_DWORD*)(a1 + 356) = 32 * v24;
  return result;
}

_DWORD* nvidia_5980(__int64 a1)
{
  int v1;
  int v2;
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  _DWORD* result;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  int v22;

  v1 = *(_DWORD*)(a1 + 100);
  v2 = *(_DWORD*)(a1 + 104);
  v5 = v1 + 3;
  v4 = v1 < -3;
  v6 = v1 + 6;
  if (!v4) {
    v6 = v5;
  }
  v7 = v2 + 7;
  v4 = v2 < -7;
  v8 = v2 + 14;
  if (!v4) {
    v8 = v7;
  }
  v9 = v8 >> 3;
  v10 = v9 * (v6 >> 2);
  *(_DWORD*)(a1 + 308) = v9;
  *(_DWORD*)(a1 + 304) = v10;
  NgxRoutine_36f0((_DWORD*)(a1 + 312), (unsigned int*)(a1 + 316), v10);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 160) = 80;
  v12 = *(_DWORD*)(a1 + 120) * *(_DWORD*)(a1 + 116);
  v13 = *(int*)(a1 + 92);
  v14 = v12 - 1;
  v15 = v12 - 2;
  if (v12 >= 2) {
    v16 = 2 * v13;
    v17 = v14 & 7;
    if (v15 < 7) {
      v18 = 0;
      if ((v14 & 7) == 0) {
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    v19 = (__int64*)(a1 + 224);
    v20 = 0;
    do {
      *(v19 - 7) = v16;
      *(v19 - 6) = v16;
      *(v19 - 5) = v16;
      *(v19 - 4) = v16;
      v20 -= 8;
      *(v19 - 3) = v16;
      *(v19 - 2) = v16;
      *(v19 - 1) = v16;
      *v19 = v16;
      v19 += 8;
    } while (-(__int64)(v14 & 0x7FFFFFF8) != v20);
    v18 = -v20;
    if ((v14 & 7) != 0) {
    LABEL_12:
      v21 = (__int64*)(a1 + 8 * v18 + 168);
      do {
        *v21++ = v16;
        --v17;
      } while (v17 != 0);
    }
  }
LABEL_14:
  *(_QWORD*)(a1 + 8LL * v14 + 168) = 80 - 2LL * (int)v13 * v14;
  v22 = ((int)v13 + 39) / 40 - 1;
  *(_DWORD*)(a1 + 352) = v22;
  *(_DWORD*)(a1 + 356) = 40 * v22;
  return result;
}

_DWORD* nvidia_5cb0(__int64 a1, int a2)
{
  int v2;
  int v3;
  int v4;
  _DWORD* v6;
  int v7;
  int v8;
  bool v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  _DWORD* result;

  v2 = *(_DWORD*)(a1 + 92);
  v3 = *(_DWORD*)(a1 + 120);
  v4 = 1;
  if (a2 >= 80) {
    v4 = *(_DWORD*)(a1 + 116);
  }
  *(_DWORD*)(a1 + 76) = 1;
  *(_DWORD*)(a1 + 96) = 1;
  v6 = (_DWORD*)(a1 + 312);
  *(_DWORD*)(a1 + 276) = v3 * v2 * v4;
  v7 = *(_DWORD*)(a1 + 100);
  v8 = *(_DWORD*)(a1 + 104);
  v10 = __OFADD__(v7, 3);
  v11 = v7 + 3;
  v9 = v7 + 3 < 0;
  v12 = v7 + 6;
  if (v9 == v10) {
    v12 = v11;
  }
  v10 = __OFADD__(v8, 15);
  v13 = v8 + 15;
  v9 = v8 + 15 < 0;
  v14 = v8 + 30;
  if (v9 == v10) {
    v14 = v13;
  }
  v15 = v14 >> 4;
  v16 = v15 * (v12 >> 2);
  *(_DWORD*)(a1 + 308) = v15;
  *(_DWORD*)(a1 + 304) = v16;
  NgxRoutine_36f0(v6, (unsigned int*)(a1 + 316), v16);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 168) = 2LL * *(int*)(a1 + 276);
  return result;
}

_DWORD* nvidia_5db0(__int64 a1, int a2)
{
  int v2;
  int v3;
  int v4;
  _DWORD* v6;
  int v7;
  int v8;
  bool v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  _DWORD* result;

  v2 = *(_DWORD*)(a1 + 92);
  v3 = *(_DWORD*)(a1 + 120);
  v4 = 1;
  if (a2 >= 80) {
    v4 = *(_DWORD*)(a1 + 116);
  }
  *(_DWORD*)(a1 + 76) = 1;
  *(_DWORD*)(a1 + 96) = 1;
  v6 = (_DWORD*)(a1 + 312);
  *(_DWORD*)(a1 + 276) = v3 * v2 * v4;
  v7 = *(_DWORD*)(a1 + 100);
  v8 = *(_DWORD*)(a1 + 104);
  v10 = __OFADD__(v7, 3);
  v11 = v7 + 3;
  v9 = v7 + 3 < 0;
  v12 = v7 + 6;
  if (v9 == v10) {
    v12 = v11;
  }
  v10 = __OFADD__(v8, 15);
  v13 = v8 + 15;
  v9 = v8 + 15 < 0;
  v14 = v8 + 30;
  if (v9 == v10) {
    v14 = v13;
  }
  v15 = v14 >> 4;
  v16 = v15 * (v12 >> 2);
  *(_DWORD*)(a1 + 308) = v15;
  *(_DWORD*)(a1 + 304) = v16;
  NgxRoutine_36f0(v6, (unsigned int*)(a1 + 316), v16);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 168) = 2LL * *(int*)(a1 + 276);
  return result;
}

_DWORD* nvidia_5eb0(__int64 a1)
{
  int v2;
  int v3;
  bool v4;
  bool v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  _DWORD* result;

  *(_DWORD*)(a1 + 276) = *(_DWORD*)(a1 + 120) * *(_DWORD*)(a1 + 92);
  *(_DWORD*)(a1 + 76) = 1;
  *(_DWORD*)(a1 + 96) = 1;
  v2 = *(_DWORD*)(a1 + 100);
  v3 = *(_DWORD*)(a1 + 104);
  v5 = __OFADD__(v2, 3);
  v6 = v2 + 3;
  v4 = v2 + 3 < 0;
  v7 = v2 + 6;
  if (v4 == v5) {
    v7 = v6;
  }
  v5 = __OFADD__(v3, 15);
  v8 = v3 + 15;
  v4 = v3 + 15 < 0;
  v9 = v3 + 30;
  if (v4 == v5) {
    v9 = v8;
  }
  v10 = v9 >> 4;
  v11 = v10 * (v7 >> 2);
  *(_DWORD*)(a1 + 308) = v10;
  *(_DWORD*)(a1 + 304) = v11;
  NgxRoutine_36f0((_DWORD*)(a1 + 312), (unsigned int*)(a1 + 316), v11);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 168) = 2LL * *(int*)(a1 + 276);
  return result;
}

_DWORD* nvidia_5fa0(__int64 a1)
{
  int v2;
  int v3;
  bool v4;
  bool v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  _DWORD* result;

  *(_DWORD*)(a1 + 276) = *(_DWORD*)(a1 + 120) * *(_DWORD*)(a1 + 92);
  *(_DWORD*)(a1 + 76) = 1;
  *(_DWORD*)(a1 + 96) = 1;
  v2 = *(_DWORD*)(a1 + 100);
  v3 = *(_DWORD*)(a1 + 104);
  v5 = __OFADD__(v2, 3);
  v6 = v2 + 3;
  v4 = v2 + 3 < 0;
  v7 = v2 + 6;
  if (v4 == v5) {
    v7 = v6;
  }
  v5 = __OFADD__(v3, 15);
  v8 = v3 + 15;
  v4 = v3 + 15 < 0;
  v9 = v3 + 30;
  if (v4 == v5) {
    v9 = v8;
  }
  v10 = v9 >> 4;
  v11 = v10 * (v7 >> 2);
  *(_DWORD*)(a1 + 308) = v10;
  *(_DWORD*)(a1 + 304) = v11;
  NgxRoutine_36f0((_DWORD*)(a1 + 312), (unsigned int*)(a1 + 316), v11);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 168) = 2LL * *(int*)(a1 + 276);
  return result;
}

_DWORD* nvidia_6520(__int64 a1, int a2)
{
  int v3;
  int v4;
  int v5;
  unsigned int* v6;
  _DWORD* v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  _DWORD* result;
  int v26;
  __int64 v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  int v36;
  int v37;

  v3 = *(_DWORD*)(a1 + 28) * *(_DWORD*)(a1 + 16);
  if (a2 < 80) {
    v4 = 1;
  }
  else {
    v4 = *(_DWORD*)(a1 + 24);
  }
  v5 = *(_DWORD*)(a1 + 312);
  v6 = (unsigned int*)(a1 + 360);
  v7 = (_DWORD*)(a1 + 356);
  *(_DWORD*)(a1 + 16) = v3 * v4;
  v8 = *(_DWORD*)(a1 + 100);
  v9 = *(_DWORD*)(a1 + 104);
  v11 = v8 + 3;
  v10 = v8 < -3;
  v12 = v8 + 6;
  if (!v10) {
    v12 = v11;
  }
  v13 = v9 + 15;
  v10 = v9 < -15;
  v14 = v9 + 30;
  if (!v10) {
    v14 = v13;
  }
  v15 = *(_DWORD*)(a1 + 320);
  v16 = v14 >> 4;
  v17 = v16 * (v12 >> 2);
  *(_DWORD*)(a1 + 352) = v16;
  *(_DWORD*)(a1 + 348) = v17;
  *(_DWORD*)(a1 + 324) = v5 * v15;
  NgxRoutine_36f0(v7, v6, v17);
  NgxRoutine_36f0((_DWORD*)(a1 + 364), (unsigned int*)(a1 + 368),
                  *(_DWORD*)(a1 + 352));
  v18 = *(_DWORD*)(a1 + 352);
  *(_DWORD*)(a1 + 120) = *(_DWORD*)(a1 + 348);
  *(_DWORD*)(a1 + 124) = v18;
  v19 = *(_DWORD*)(a1 + 368);
  *(_QWORD*)(a1 + 128) = *(_QWORD*)(a1 + 356);
  *(_DWORD*)(a1 + 136) = *(_DWORD*)(a1 + 364);
  *(_DWORD*)(a1 + 140) = v19;
  *(_QWORD*)(a1 + 152) = 2LL * *(int*)(a1 + 16);
  v20 = *(_DWORD*)(a1 + 100);
  v21 = *(_DWORD*)(a1 + 104);
  *(_DWORD*)(a1 + 188) = v20 / 2;
  *(_DWORD*)(a1 + 192) = v21 / 2;
  v22 = v21 / 2 + 14;
  if (v21 / 2 >= -7) {
    v22 = v21 / 2 + 7;
  }
  v23 = v22 >> 3;
  v24 = v23 * ((v20 / 2 + 1) / 2);
  *(_DWORD*)(a1 + 208) = v24;
  *(_DWORD*)(a1 + 212) = v23;
  NgxRoutine_36f0((_DWORD*)(a1 + 216), (unsigned int*)(a1 + 220), v24);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 224), (unsigned int*)(a1 + 228),
                           *(_DWORD*)(a1 + 212));
  *(_QWORD*)(a1 + 232) = 32;
  v26 = *(_DWORD*)(a1 + 60) * *(_DWORD*)(a1 + 56);
  v27 = *(int*)(a1 + 48);
  v28 = v26 - 1;
  v29 = v26 - 2;
  if (v26 >= 2) {
    v30 = 2 * v27;
    v31 = v28 & 7;
    if (v29 < 7) {
      v32 = 0;
      if ((v28 & 7) == 0) {
        goto LABEL_19;
      }
      goto LABEL_17;
    }
    v33 = (__int64*)(a1 + 296);
    v34 = 0;
    do {
      *(v33 - 7) = v30;
      *(v33 - 6) = v30;
      *(v33 - 5) = v30;
      *(v33 - 4) = v30;
      v34 -= 8;
      *(v33 - 3) = v30;
      *(v33 - 2) = v30;
      *(v33 - 1) = v30;
      *v33 = v30;
      v33 += 8;
    } while (-(__int64)(v28 & 0x7FFFFFF8) != v34);
    v32 = -v34;
    if ((v28 & 7) != 0) {
    LABEL_17:
      v35 = (__int64*)(a1 + 8 * v32 + 240);
      do {
        *v35++ = v30;
        --v31;
      } while (v31 != 0);
    }
  }
LABEL_19:
  *(_QWORD*)(a1 + 8LL * v28 + 240) = 64 - 2LL * (int)v27 * v28;
  v36 = v27 + 31;
  v10 = (int)v27 < -31;
  v37 = v27 + 62;
  if (!v10) {
    v37 = v36;
  }
  *(_DWORD*)(a1 + 328) = (v37 >> 5) - 1;
  return result;
}

__int64 nvidia_85f0(__int64 a1)
{
  __int64 result;
  int v3;
  int v4;
  bool v5;
  bool v6;
  int v7;
  unsigned int v8;

  result = memcpy_plt(a1 + 544, a1, 136);
  v3 = *(_DWORD*)(a1 + 592);
  *(_QWORD*)(a1 + 608) = 0x100000001LL;
  *(_DWORD*)(a1 + 652) = 1;
  v3 *= 9;
  *(_DWORD*)(a1 + 592) = v3;
  *(_DWORD*)(a1 + 656) = v3;
  v4 = *(_DWORD*)(a1 + 68) * *(_DWORD*)(a1 + 64);
  v6 = __OFADD__(v4, 15);
  v7 = v4 + 15;
  v5 = v4 + 15 < 0;
  v8 = v4 + 30;
  if (v5 == v6) {
    v8 = v7;
  }
  *(_DWORD*)(a1 + 664) = 16 * *(_DWORD*)(a1 + 48) * (v8 >> 4);
  return result;
}

__int64 nvidia_86b0(__int64 a1)
{
  __int64 result;
  int v3;
  int v4;
  bool v5;
  bool v6;
  int v7;
  unsigned int v8;

  result = memcpy_plt(a1 + 544, a1, 136);
  v3 = *(_DWORD*)(a1 + 592);
  *(_QWORD*)(a1 + 608) = 0x100000001LL;
  *(_DWORD*)(a1 + 652) = 1;
  v3 *= 9;
  *(_DWORD*)(a1 + 592) = v3;
  *(_DWORD*)(a1 + 656) = v3;
  v4 = *(_DWORD*)(a1 + 68) * *(_DWORD*)(a1 + 64);
  v6 = __OFADD__(v4, 15);
  v7 = v4 + 15;
  v5 = v4 + 15 < 0;
  v8 = v4 + 30;
  if (v5 == v6) {
    v8 = v7;
  }
  *(_DWORD*)(a1 + 664) = 16 * *(_DWORD*)(a1 + 48) * (v8 >> 4);
  return result;
}

__int64 nvidia_8770(__int64 a1)
{
  __int64 result;
  int v3;
  int v4;
  int v5;
  bool v6;
  bool v7;
  int v8;
  unsigned int v9;

  result = memcpy_plt(a1 + 544, a1, 136);
  v3 = *(_DWORD*)(a1 + 592);
  *(_QWORD*)(a1 + 608) = 0x100000001LL;
  *(_DWORD*)(a1 + 652) = 1;
  v4 = 9 * v3 / 2;
  *(_DWORD*)(a1 + 592) = v4;
  *(_DWORD*)(a1 + 656) = v4;
  v5 = *(_DWORD*)(a1 + 68) * *(_DWORD*)(a1 + 64);
  v7 = __OFADD__(v5, 15);
  v8 = v5 + 15;
  v6 = v5 + 15 < 0;
  v9 = v5 + 30;
  if (v6 == v7) {
    v9 = v8;
  }
  *(_DWORD*)(a1 + 664) = 16 * *(_DWORD*)(a1 + 48) * (v9 >> 4);
  return result;
}

__int64 nvidia_8830(__int64 a1)
{
  __int64 result;
  int v3;
  int v4;
  int v5;
  bool v6;
  bool v7;
  int v8;
  unsigned int v9;

  result = memcpy_plt(a1 + 544, a1, 136);
  v3 = *(_DWORD*)(a1 + 592);
  *(_QWORD*)(a1 + 608) = 0x100000001LL;
  *(_DWORD*)(a1 + 652) = 1;
  v4 = 9 * v3 / 2;
  *(_DWORD*)(a1 + 592) = v4;
  *(_DWORD*)(a1 + 656) = v4;
  v5 = *(_DWORD*)(a1 + 68) * *(_DWORD*)(a1 + 64);
  v7 = __OFADD__(v5, 15);
  v8 = v5 + 15;
  v6 = v5 + 15 < 0;
  v9 = v5 + 30;
  if (v6 == v7) {
    v9 = v8;
  }
  *(_DWORD*)(a1 + 664) = 16 * *(_DWORD*)(a1 + 48) * (v9 >> 4);
  return result;
}

_QWORD* nvidia_88b0(__int64 a1, int a2)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* result;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int8 v17;
  __int64 v18;

  *(_DWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  v3 = NgxRoutine_420(64);
  *(_QWORD*)(v3 + 16) = 0;
  v4 = NgxData_9521a8[0];
  v5 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_DWORD*)(v3 + 56) = 1065353216;
  *(_QWORD*)(a1 + 16) = v3;
  *(_QWORD*)v3 = v4 + 2;
  *(_QWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_QWORD*)(a1 + 8) = v3 + 24;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    NgxRoutine_baf10(v5);
  }
  v6 = NgxRoutine_420(64);
  v7 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)v6 = v4 + 2;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_DWORD*)(v6 + 56) = 1065353216;
  *(_QWORD*)(a1 + 32) = v6;
  *(_QWORD*)(v6 + 24) = 0;
  *(_QWORD*)(a1 + 24) = v6 + 24;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    NgxRoutine_baf10(v7);
  }
  v8 = NgxRoutine_420(64);
  v9 = *(_QWORD*)(a1 + 48);
  v10 = v4 + 2;
  *(_QWORD*)(v8 + 8) = 0;
  *(_QWORD*)(v8 + 16) = 0;
  *(_QWORD*)(v8 + 32) = 0;
  *(_QWORD*)(v8 + 40) = 0;
  *(_QWORD*)(v8 + 48) = 0;
  *(_QWORD*)(a1 + 48) = v8;
  *(_QWORD*)v8 = v10;
  *(_DWORD*)(v8 + 56) = 1065353216;
  *(_QWORD*)(v8 + 24) = 0;
  *(_QWORD*)(a1 + 40) = v8 + 24;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    NgxRoutine_baf10(v9);
  }
  v11 = NgxRoutine_420(64);
  v12 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_QWORD*)v11 = v10;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_DWORD*)(v11 + 56) = 1065353216;
  *(_QWORD*)(a1 + 64) = v11;
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(a1 + 56) = v11 + 24;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    NgxRoutine_baf10(v12);
  }
  NgxRoutine_8b20(a1);
  NgxRoutine_12ed0(a1);
  result = (_QWORD*)NgxRoutine_1d280(a1);
  if (*(_DWORD*)a1 == 0) {
    v14 = strlen_plt("Not fast kernels codebase");
    v15 = nvidia_28900_alt1((_QWORD*)NgxData_951178[0],
                            (__int64)"Not fast kernels codebase", v14);
    nvidia_be650((void*)((__int64)&v18),
                 (__int64)v15 + *(_QWORD*)(*v15 - 24LL));
    v16 = NgxRoutine_db310(&v18, (__int64)NgxData_9511b8);
    v17 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v16 + 56LL))(v16, 10);
    NgxRoutine_db240(&v18);
    NgxRoutine_bd1d0(v15, v17);
    return NgxRoutine_bcd70(v15);
  }
  return result;
}

__attribute__((swiftcall)) void nvidia_27630(PSEUDO_X8 x8_, _QWORD* result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int8 v6;
  __int64 v7;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;

  v2 = *(_DWORD*)result;
  *a2 = 0;
  if (v2 == 2) {
    v7 = (__int64)result;
    v9 = (_QWORD*)NgxRoutine_420(2160);
    NgxRoutine_27d10((__int64)v9);
    v10 = NgxData_9521b0[0];
    *a2 = v9;
    *v9 = v10 + 2;
    {
      (_QWORD*)nvidia_dlss_rel_source_31860((__int64)v9, v7);
      return;
    }
  }
  else if (v2 <= 1) {
    v3 = strlen_plt("Not fast kernels codebase");
    v4 = nvidia_28900_alt1((_QWORD*)NgxData_951178[0],
                           (__int64)"Not fast kernels codebase", v3);
    nvidia_be650((void*)((__int64)&v11), (__int64)v4 + *(_QWORD*)(*v4 - 24LL));
    v5 = NgxRoutine_db310(&v11, (__int64)NgxData_9511b8);
    v6 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 56LL))(v5, 10);
    NgxRoutine_db240(&v11);
    NgxRoutine_bd1d0(v4, v6);
    {
      NgxRoutine_bcd70(v4);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nvidia_27750(PSEUDO_X8 x8_, _QWORD* result,
                                             _QWORD* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned int v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int8 v7;
  __int64 v8;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v3 = *(_DWORD*)result;
  *a3 = 0;
  if (v3 == 2) {
    v8 = (__int64)result;
    v11 = NgxRoutine_420(3280);
    NgxRoutine_312c0(v11, a2);
    *(_QWORD*)v11 = NgxData_9521b8[0] + 2;
    NgxRoutine_282c0(v11 + 104);
    *(_BYTE*)(v11 + 880) = 0;
    *(_WORD*)(v11 + 3232) = 0;
    *(_BYTE*)(v11 + 3276) = 0;
    *(_QWORD*)(v11 + 3236) = -1;
    *(_QWORD*)(v11 + 3244) = -1;
    *(_QWORD*)(v11 + 3252) = 0xFFFFFFFF00000000LL;
    *(_QWORD*)(v11 + 3260) = -1;
    *(_QWORD*)(v11 + 3268) = -1;
    if (*(_DWORD*)(v11 + 84) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 96LL))(v11);
    }
    v12 = NgxData_9521c0[0];
    *a3 = v11;
    *(_QWORD*)v11 = v12 + 2;
    {
      (_QWORD*)nvidia_dlss_rel_source_31860(v11, v8);
      return;
    }
  }
  else if (v3 <= 1) {
    v4 = strlen_plt("Not fast kernels codebase");
    v5 = nvidia_28900_alt1((_QWORD*)NgxData_951178[0],
                           (__int64)"Not fast kernels codebase", v4);
    nvidia_be650((void*)((__int64)&v13), (__int64)v5 + *(_QWORD*)(*v5 - 24LL));
    v6 = NgxRoutine_db310(&v13, (__int64)NgxData_9511b8);
    v7 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v6 + 56LL))(v6, 10);
    NgxRoutine_db240(&v13);
    NgxRoutine_bd1d0(v5, v7);
    {
      NgxRoutine_bcd70(v5);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nvidia_278e0(PSEUDO_X8 x8_, _QWORD* result,
                                             _QWORD* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned int v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int8 v7;
  __int64 v8;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;

  v3 = *(_DWORD*)result;
  *a3 = 0;
  if (v3 == 2) {
    v8 = (__int64)result;
    v11 = (_QWORD*)NgxRoutine_420(1872);
    NgxRoutine_283b0((__int64)v11, a2);
    v12 = NgxData_9521c8[0];
    *a3 = v11;
    *v11 = v12 + 2;
    {
      (_QWORD*)nvidia_dlss_rel_source_31860((__int64)v11, v8);
      return;
    }
  }
  else if (v3 <= 1) {
    v4 = strlen_plt("Not fast kernels codebase");
    v5 = nvidia_28900_alt1((_QWORD*)NgxData_951178[0],
                           (__int64)"Not fast kernels codebase", v4);
    nvidia_be650((void*)((__int64)&v13), (__int64)v5 + *(_QWORD*)(*v5 - 24LL));
    v6 = NgxRoutine_db310(&v13, (__int64)NgxData_9511b8);
    v7 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v6 + 56LL))(v6, 10);
    NgxRoutine_db240(&v13);
    NgxRoutine_bd1d0(v5, v7);
    {
      NgxRoutine_bcd70(v5);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nvidia_27a00(PSEUDO_X8 x8_, _QWORD* result,
                                             _QWORD* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned int v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int8 v7;
  __int64 v8;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;

  v3 = *(_DWORD*)result;
  *a3 = 0;
  if (v3 == 2) {
    v8 = (__int64)result;
    v11 = (_QWORD*)NgxRoutine_420(1968);
    NgxRoutine_28650((__int64)v11, a2);
    v12 = NgxData_9521d0[0];
    *a3 = v11;
    *v11 = v12 + 2;
    {
      (_QWORD*)nvidia_dlss_rel_source_31860((__int64)v11, v8);
      return;
    }
  }
  else if (v3 <= 1) {
    v4 = strlen_plt("Not fast kernels codebase");
    v5 = nvidia_28900_alt1((_QWORD*)NgxData_951178[0],
                           (__int64)"Not fast kernels codebase", v4);
    nvidia_be650((void*)((__int64)&v13), (__int64)v5 + *(_QWORD*)(*v5 - 24LL));
    v6 = NgxRoutine_db310(&v13, (__int64)NgxData_9511b8);
    v7 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v6 + 56LL))(v6, 10);
    NgxRoutine_db240(&v13);
    NgxRoutine_bd1d0(v5, v7);
    {
      NgxRoutine_bcd70(v5);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 nvidia_27b30(_DWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int8 v6;
  __int64 v8[3];

  if (*a1 > 1u) {
    return 0;
  }
  v8[1] = v1;
  v8[2] = v2;
  v3 = strlen_plt("Compiled not in CODEBASE_FASTKERNELS, but requires cuda.");
  v4 = nvidia_28900_alt1(
      (_QWORD*)NgxData_951178[0],
      (__int64)"Compiled not in CODEBASE_FASTKERNELS, but requires cuda.", v3);
  nvidia_be650((void*)((__int64)v8), (__int64)v4 + *(_QWORD*)(*v4 - 24LL));
  v5 = NgxRoutine_db310(v8, (__int64)NgxData_9511b8);
  v6 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 56LL))(v5, 10);
  NgxRoutine_db240(v8);
  NgxRoutine_bd1d0(v4, v6);
  NgxRoutine_bcd70(v4);
  return 1;
}

__int64 nvidia_27bf0(_DWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int8 v7;
  __int64 v9[3];

  if (*a1 > 1u) {
    *(_QWORD*)(a2 + 16) = 0;
    return 0;
  }
  else {
    v9[1] = v2;
    v9[2] = v3;
    v4 = strlen_plt("Compiled not in CODEBASE_FASTKERNELS, but requires cuda.");
    v5 = nvidia_28900_alt1(
        (_QWORD*)NgxData_951178[0],
        (__int64)"Compiled not in CODEBASE_FASTKERNELS, but requires cuda.",
        v4);
    nvidia_be650((void*)((__int64)v9), (__int64)v5 + *(_QWORD*)(*v5 - 24LL));
    v6 = NgxRoutine_db310(v9, (__int64)NgxData_9511b8);
    v7 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v6 + 56LL))(v6, 10);
    NgxRoutine_db240(v9);
    NgxRoutine_bd1d0(v5, v7);
    NgxRoutine_bcd70(v5);
    return 1;
  }
}

void nvidia_27e80(_QWORD* a1)
{
  void (*v2)(__int64);
  __int64* v3;
  _QWORD* v4;

  v2 = *(void (**)(__int64))((char*)NgxData_9521d8[0] +
                             (unsigned __int64)((_UNKNOWN*)0x48LL));
  *a1 = NgxData_9521d8[0] + 2;
  v2((__int64)a1);
  v3 = NgxData_9521e8[0];
  v4 = (_QWORD*)a1[11];
  a1[11] = 0;
  *a1 = v3 + 2;
  if (v4 != nullptr) {
    NgxRoutine_27fe0((__int64)(a1 + 11), v4);
  }
  if ((a1[7] & 1) != 0) {
    NgxRoutine_430(a1[9], a1[7] & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((a1[4] & 1) != 0) {
    NgxRoutine_430(a1[6], a1[4] & 0xFFFFFFFFFFFFFFFELL);
  }
}

__int64 nvidia_27f20(__int64 a1)
{
  void (*v2)(__int64);
  __int64* v3;
  _QWORD* v4;

  v2 = *(void (**)(__int64))((char*)NgxData_9521d8[0] +
                             (unsigned __int64)((_UNKNOWN*)0x48LL));
  *(_QWORD*)a1 = NgxData_9521d8[0] + 2;
  v2(a1);
  v3 = NgxData_9521e8[0];
  v4 = *(_QWORD**)(a1 + 88);
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v3 + 2;
  if (v4 != nullptr) {
    NgxRoutine_27fe0(a1 + 88, v4);
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    NgxRoutine_430(*(_QWORD*)(a1 + 72),
                   *(_QWORD*)(a1 + 56) & 0xFFFFFFFFFFFFFFFELL);
    if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
      return NgxRoutine_430(a1, 2160);
    }
  LABEL_8:
    NgxRoutine_430(*(_QWORD*)(a1 + 48),
                   *(_QWORD*)(a1 + 32) & 0xFFFFFFFFFFFFFFFELL);
    return NgxRoutine_430(a1, 2160);
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    goto LABEL_8;
  }
  return NgxRoutine_430(a1, 2160);
}

void nvidia_28160(_QWORD* a1)
{
  void (*v2)(__int64);
  __int64* v3;
  _QWORD* v4;

  v2 = *(void (**)(__int64))((char*)NgxData_9521b8[0] +
                             (unsigned __int64)((_UNKNOWN*)0x48LL));
  *a1 = NgxData_9521b8[0] + 2;
  v2((__int64)a1);
  v3 = NgxData_9521e8[0];
  v4 = (_QWORD*)a1[11];
  a1[11] = 0;
  *a1 = v3 + 2;
  if (v4 != nullptr) {
    NgxRoutine_27fe0((__int64)(a1 + 11), v4);
  }
  if ((a1[7] & 1) != 0) {
    NgxRoutine_430(a1[9], a1[7] & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((a1[4] & 1) != 0) {
    NgxRoutine_430(a1[6], a1[4] & 0xFFFFFFFFFFFFFFFELL);
  }
}

__int64 nvidia_28200(__int64 a1)
{
  void (*v2)(__int64);
  __int64* v3;
  _QWORD* v4;

  v2 = *(void (**)(__int64))((char*)NgxData_9521b8[0] +
                             (unsigned __int64)((_UNKNOWN*)0x48LL));
  *(_QWORD*)a1 = NgxData_9521b8[0] + 2;
  v2(a1);
  v3 = NgxData_9521e8[0];
  v4 = *(_QWORD**)(a1 + 88);
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v3 + 2;
  if (v4 != nullptr) {
    NgxRoutine_27fe0(a1 + 88, v4);
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    NgxRoutine_430(*(_QWORD*)(a1 + 72),
                   *(_QWORD*)(a1 + 56) & 0xFFFFFFFFFFFFFFFELL);
    if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
      return NgxRoutine_430(a1, 3280);
    }
  LABEL_8:
    NgxRoutine_430(*(_QWORD*)(a1 + 48),
                   *(_QWORD*)(a1 + 32) & 0xFFFFFFFFFFFFFFFELL);
    return NgxRoutine_430(a1, 3280);
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    goto LABEL_8;
  }
  return NgxRoutine_430(a1, 3280);
}

void nvidia_284f0(_QWORD* a1)
{
  void (*v2)(__int64);
  __int64* v3;
  _QWORD* v4;

  v2 = *(void (**)(__int64))((char*)NgxData_9521f8[0] +
                             (unsigned __int64)((_UNKNOWN*)0x48LL));
  *a1 = NgxData_9521f8[0] + 2;
  v2((__int64)a1);
  v3 = NgxData_9521e8[0];
  v4 = (_QWORD*)a1[11];
  a1[11] = 0;
  *a1 = v3 + 2;
  if (v4 != nullptr) {
    NgxRoutine_27fe0((__int64)(a1 + 11), v4);
  }
  if ((a1[7] & 1) != 0) {
    NgxRoutine_430(a1[9], a1[7] & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((a1[4] & 1) != 0) {
    NgxRoutine_430(a1[6], a1[4] & 0xFFFFFFFFFFFFFFFELL);
  }
}

__int64 nvidia_28590(__int64 a1)
{
  void (*v2)(__int64);
  __int64* v3;
  _QWORD* v4;

  v2 = *(void (**)(__int64))((char*)NgxData_9521f8[0] +
                             (unsigned __int64)((_UNKNOWN*)0x48LL));
  *(_QWORD*)a1 = NgxData_9521f8[0] + 2;
  v2(a1);
  v3 = NgxData_9521e8[0];
  v4 = *(_QWORD**)(a1 + 88);
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v3 + 2;
  if (v4 != nullptr) {
    NgxRoutine_27fe0(a1 + 88, v4);
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    NgxRoutine_430(*(_QWORD*)(a1 + 72),
                   *(_QWORD*)(a1 + 56) & 0xFFFFFFFFFFFFFFFELL);
    if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
      return NgxRoutine_430(a1, 1872);
    }
  LABEL_8:
    NgxRoutine_430(*(_QWORD*)(a1 + 48),
                   *(_QWORD*)(a1 + 32) & 0xFFFFFFFFFFFFFFFELL);
    return NgxRoutine_430(a1, 1872);
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    goto LABEL_8;
  }
  return NgxRoutine_430(a1, 1872);
}

void nvidia_287a0(_QWORD* a1)
{
  void (*v2)(__int64);
  __int64* v3;
  _QWORD* v4;

  v2 = *(void (**)(__int64))((char*)NgxData_952208[0] +
                             (unsigned __int64)((_UNKNOWN*)0x48LL));
  *a1 = NgxData_952208[0] + 2;
  v2((__int64)a1);
  v3 = NgxData_9521e8[0];
  v4 = (_QWORD*)a1[11];
  a1[11] = 0;
  *a1 = v3 + 2;
  if (v4 != nullptr) {
    NgxRoutine_27fe0((__int64)(a1 + 11), v4);
  }
  if ((a1[7] & 1) != 0) {
    NgxRoutine_430(a1[9], a1[7] & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((a1[4] & 1) != 0) {
    NgxRoutine_430(a1[6], a1[4] & 0xFFFFFFFFFFFFFFFELL);
  }
}

__int64 nvidia_28840(__int64 a1)
{
  void (*v2)(__int64);
  __int64* v3;
  _QWORD* v4;

  v2 = *(void (**)(__int64))((char*)NgxData_952208[0] +
                             (unsigned __int64)((_UNKNOWN*)0x48LL));
  *(_QWORD*)a1 = NgxData_952208[0] + 2;
  v2(a1);
  v3 = NgxData_9521e8[0];
  v4 = *(_QWORD**)(a1 + 88);
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v3 + 2;
  if (v4 != nullptr) {
    NgxRoutine_27fe0(a1 + 88, v4);
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    NgxRoutine_430(*(_QWORD*)(a1 + 72),
                   *(_QWORD*)(a1 + 56) & 0xFFFFFFFFFFFFFFFELL);
    if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
      return NgxRoutine_430(a1, 1968);
    }
  LABEL_8:
    NgxRoutine_430(*(_QWORD*)(a1 + 48),
                   *(_QWORD*)(a1 + 32) & 0xFFFFFFFFFFFFFFFELL);
    return NgxRoutine_430(a1, 1968);
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    goto LABEL_8;
  }
  return NgxRoutine_430(a1, 1968);
}

__int64* nvidia_28900(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  char* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8 v12;
  _BYTE v14[16];
  __int64 v15;

  NgxRoutine_bcf20((__int64)v14, a1);
  if (v14[0] == 1) {
    v6 = a2 + a3;
    v7 = (char*)a1 + *(_QWORD*)(*a1 - 24);
    v8 = *((_QWORD*)v7 + 5);
    v9 = *((_DWORD*)v7 + 36);
    if ((*((_DWORD*)v7 + 2) & 0xB0) == 0x20) {
      v10 = v6;
    }
    else {
      v10 = a2;
    }
    if (v9 == -1) {
      nvidia_be650((void*)((__int64)&v15), (__int64)a1 + *(_QWORD*)(*a1 - 24));
      v11 = NgxRoutine_db310(&v15, (__int64)NgxData_9511b8);
      v12 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v11 + 56LL))(v11, 32);
      NgxRoutine_db240(&v15);
      LOBYTE(v9) = v12;
      *((_DWORD*)v7 + 36) = v12;
    }
    if (NgxRoutine_28a20(v8, a2, v10, v6, (__int64)v7, v9) == 0) {
      nvidia_be740((__int64)a1 + *(_QWORD*)(*a1 - 24),
                   *(_DWORD*)((char*)a1 + *(_QWORD*)(*a1 - 24) + 32) | 5);
    }
  }
  NgxRoutine_bcf80((__int64)v14);
  return a1;
}

__int64 nvidia_29cf0(_DWORD* a1, int a2, int a3, int a4, int a5, int a6)
{
  bool v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  unsigned __int8 v10;
  __int64 v12;
  __int64* v13;
  __int64 v14;

  if (a1[6] == -1 && a1[7] == -1 && a1[8] == -1 &&
      (a1[9] == -1 ? (v6 = *a1 == -1) : (v6 = false), v6)) {
    if (a2 == -1 || a3 == -1 || a4 == -1 || a5 == -1 || a6 == -1) {
      v12 = strlen_plt("One or more dimensions are incorrect");
      v13 = nvidia_28900((__int64*)NgxData_951178[0],
                         (__int64)"One or more dimensions are incorrect", v12);
      nvidia_29e50(v13);
      return 2;
    }
    else {
      a1[6] = a2;
      a1[7] = a3;
      a1[8] = a4;
      a1[9] = a5;
      *a1 = a6;
      return 0;
    }
  }
  else {
    v7 = strlen_plt("Dimensions are already set");
    v8 = nvidia_28900((__int64*)NgxData_951178[0],
                      (__int64)"Dimensions are already set", v7);
    nvidia_be650((void*)((__int64)&v14), (__int64)v8 + *(_QWORD*)(*v8 - 24));
    v9 = NgxRoutine_db310(&v14, (__int64)NgxData_9511b8);
    v10 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v9 + 56LL))(v9, 10);
    NgxRoutine_db240(&v14);
    NgxRoutine_bd1d0(v8, v10);
    NgxRoutine_bcd70(v8);
    return 2;
  }
}

_QWORD* nvidia_29e50(_QWORD* a1)
{
  __int64 v2;
  unsigned __int8 v3;
  __int64 v5;

  nvidia_be650((void*)((__int64)&v5), (__int64)a1 + *(_QWORD*)(*a1 - 24LL));
  v2 = NgxRoutine_db310(&v5, (__int64)NgxData_9511b8);
  v3 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 56LL))(v2, 10);
  NgxRoutine_db240(&v5);
  NgxRoutine_bd1d0(a1, v3);
  NgxRoutine_bcd70(a1);
  return a1;
}

__int64 nvidia_aea40(__int64 a1, int* a2, int* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  __int64 v19;
  __int64* v20;
  float v22;
  _BOOL8 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;

  v4 = *a2;
  v5 = *(_QWORD*)(a1 + 8);
  if (v5 == 0) {
    goto LABEL_24;
  }
  v8 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v3 = *a2;
    if (v5 <= v4) {
      v3 = v4 % v5;
    }
    v9 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
    if (v9 == nullptr) {
      goto LABEL_24;
    }
  }
  else {
    v3 = v8 & v4;
    v9 = *(__int64**)(*(_QWORD*)a1 + 8 * (v8 & v4));
    if (v9 == nullptr) {
      goto LABEL_24;
    }
  }
  v10 = *v9;
  if (*v9 != 0) {
    if ((v5 & v8) == 0) {
      while (1) {
        v12 = *(_QWORD*)(v10 + 8);
        if (v12 == v4) {
          if (*(_DWORD*)(v10 + 16) == (_DWORD)v4) {
            return v10;
          }
        }
        else if ((v12 & v8) != v3) {
          goto LABEL_24;
        }
        v10 = *(_QWORD*)v10;
        if (v10 == 0) {
          goto LABEL_24;
        }
      }
    }
    do {
      v11 = *(_QWORD*)(v10 + 8);
      if (v11 == v4) {
        if (*(_DWORD*)(v10 + 16) == (_DWORD)v4) {
          return v10;
        }
      }
      else {
        if (v11 >= v5) {
          v11 %= v5;
        }
        if (v11 != v3) {
          break;
        }
      }
      v10 = *(_QWORD*)v10;
    } while (v10 != 0);
  }
LABEL_24:
  v13 = NgxRoutine_420(48);
  v14 = *a3;
  v10 = v13;
  *(_QWORD*)v13 = 0;
  *(_QWORD*)(v13 + 8) = v4;
  *(_DWORD*)(v13 + 16) = v14;
  if ((a3[2] & 1) != 0) {
    NgxRoutine_29320((__int64*)(v13 + 24), *((_QWORD*)a3 + 3),
                     *((_QWORD*)a3 + 2));
    v17 = *(float*)(a1 + 32);
    v18 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
    if (v5 == 0) {
      goto LABEL_33;
    }
  }
  else {
    v15 = *((_QWORD*)a3 + 2);
    v16 = *((_QWORD*)a3 + 3);
    *(_QWORD*)(v13 + 24) = *((_QWORD*)a3 + 1);
    *(_QWORD*)(v13 + 32) = v15;
    *(_QWORD*)(v13 + 40) = v16;
    v17 = *(float*)(a1 + 32);
    v18 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
    if (v5 == 0) {
      goto LABEL_33;
    }
  }
  if ((float)(v17 * (float)v5) >= v18) {
    v19 = *(_QWORD*)a1;
    v20 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
    if (v20 == nullptr) {
      goto LABEL_61;
    }
    goto LABEL_30;
  }
LABEL_33:
  v22 = v18 / v17;
  v23 = true;
  if (v5 >= 3) {
    v23 = (v5 & (v5 - 1)) != 0;
  }
  v24 = v23 | (2 * v5);
  v25 = vcvtps_u64_f32(v22);
  if (v24 <= v25) {
    v26 = v25;
  }
  else {
    v26 = v24;
  }
  if (v26 == 1) {
    v26 = 2;
  }
  else if ((v26 & (v26 - 1)) != 0) {
    v26 = NgxRoutine_e2400(v26);
  }
  v27 = *(_QWORD*)(a1 + 8);
  if (v26 > v27) {
    goto LABEL_43;
  }
  if (v26 < v27) {
    v28 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                         *(float*)(a1 + 32));
    if (v27 >= 3 && (v27 & (v27 - 1)) == 0) {
      v29 = 1LL << -(char)__clz(v28 - 1);
      if (v28 >= 2) {
        v28 = v29;
      }
      if (v26 <= v28) {
        v26 = v28;
      }
      if (v26 >= v27) {
        goto LABEL_56;
      }
    LABEL_43:
      NgxRoutine_29120((__int64*)a1, v26);
      goto LABEL_56;
    }
    v30 = NgxRoutine_e2400(v28);
    if (v26 <= v30) {
      v26 = v30;
    }
    if (v26 < v27) {
      goto LABEL_43;
    }
  }
LABEL_56:
  v5 = *(_QWORD*)(a1 + 8);
  if ((v5 & (v5 - 1)) != 0) {
    if (v5 <= v4) {
      v3 = v4 % v5;
      v19 = *(_QWORD*)a1;
      v20 = *(__int64**)(*(_QWORD*)a1 + 8 * (v4 % v5));
      if (v20 == nullptr) {
      LABEL_61:
        v31 = *(_QWORD*)(a1 + 16);
        *(_QWORD*)(a1 + 16) = v10;
        *(_QWORD*)v10 = v31;
        *(_QWORD*)(v19 + 8 * v3) = a1 + 16;
        if (*(_QWORD*)v10 != 0) {
          v32 = *(_QWORD*)(*(_QWORD*)v10 + 8LL);
          if ((v5 & (v5 - 1)) != 0) {
            if (v32 >= v5) {
              v32 %= v5;
            }
            *(_QWORD*)(v19 + 8 * v32) = v10;
          }
          else {
            *(_QWORD*)(v19 + 8 * (v32 & (v5 - 1))) = v10;
          }
        }
        goto LABEL_31;
      }
    }
    else {
      v3 = v4;
      v19 = *(_QWORD*)a1;
      v20 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
      if (v20 == nullptr) {
        goto LABEL_61;
      }
    }
  }
  else {
    v3 = (v5 - 1) & v4;
    v19 = *(_QWORD*)a1;
    v20 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
    if (v20 == nullptr) {
      goto LABEL_61;
    }
  }
LABEL_30:
  *(_QWORD*)v10 = *v20;
  *v20 = v10;
LABEL_31:
  ++*(_QWORD*)(a1 + 24);
  return v10;
}

unsigned __int64 nvidia_b1500(unsigned __int64 result, __int64 a2)
{

#pragma clang fp contract(off)
  int v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  bool v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int8* i;

  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  v3 = *(_DWORD*)(a2 + 32);
  v4 = result;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  v5 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(result + 32) = v3;
  if (v5 == 1) {
    v5 = 2;
    goto LABEL_20;
  }
  if ((v5 & (v5 - 1)) != 0) {
    result = NgxRoutine_e2400(v5);
    v6 = *(_QWORD*)(v4 + 8);
    v5 = result;
    v7 = result >= v6;
    if (result > v6) {
      goto LABEL_20;
    }
  }
  else {
    v6 = 0;
    v7 = true;
    if (v5 != 0) {
      goto LABEL_20;
    }
  }
  if (v7) {
    goto LABEL_21;
  }
  result =
      vcvtps_u64_f32((float)*(unsigned __int64*)(v4 + 24) / *(float*)(v4 + 32));
  if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
    v9 = v5;
    result = NgxRoutine_e2400(result);
    if (v9 <= result) {
      v5 = result;
    }
    else {
      v5 = v9;
    }
    if (v5 >= v6) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  v8 = 1LL << -(char)__clz(result - 1);
  if (result >= 2) {
    result = v8;
  }
  if (v5 <= result) {
    v5 = result;
  }
  if (v5 < v6) {
  LABEL_20:
    result = NgxRoutine_29120((__int64*)v4, v5);
  }
LABEL_21:
  for (i = *(unsigned __int8**)(a2 + 16); i != nullptr;
       i = *(unsigned __int8**)i) {
    result = (unsigned __int64)NgxRoutine_b1640(v4, i + 16, (char*)i + 16);
  }
  return result;
}

__int64 nvidia_b1a80(__int64 a1, __int64* a2, __int64 a3, _QWORD** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 result;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  float v17;
  float v18;
  __int64 v19;
  _QWORD* v20;
  float v21;
  _BOOL8 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;

  v5 = *a2;
  v35 = *a2;
  v8 = NgxRoutine_baf70((__int64)&v35, 8);
  v9 = *(_QWORD*)(a1 + 8);
  v10 = v8;
  if (v9 == 0) {
    goto LABEL_24;
  }
  v11 = v9 - 1;
  if ((v9 & (v9 - 1)) != 0) {
    v4 = v8;
    if (v8 >= v9) {
      v4 = v8 % v9;
    }
    v12 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v12 == nullptr) {
      goto LABEL_24;
    }
  }
  else {
    v4 = v11 & v8;
    v12 = *(__int64**)(*(_QWORD*)a1 + 8 * (v11 & v8));
    if (v12 == nullptr) {
      goto LABEL_24;
    }
  }
  result = *v12;
  if (*v12 != 0) {
    if ((v9 & v11) == 0) {
      while (1) {
        v15 = *(_QWORD*)(result + 8);
        if (v15 == v10) {
          if (*(_QWORD*)(result + 16) == v5) {
            return result;
          }
        }
        else if ((v15 & v11) != v4) {
          goto LABEL_24;
        }
        result = *(_QWORD*)result;
        if (result == 0) {
          goto LABEL_24;
        }
      }
    }
    do {
      v14 = *(_QWORD*)(result + 8);
      if (v14 == v10) {
        if (*(_QWORD*)(result + 16) == v5) {
          return result;
        }
      }
      else {
        if (v14 >= v9) {
          v14 %= v9;
        }
        if (v14 != v4) {
          break;
        }
      }
      result = *(_QWORD*)result;
    } while (result != 0);
  }
LABEL_24:
  result = NgxRoutine_420(32);
  v16 = *a4;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v10;
  v17 = *(float*)(a1 + 32);
  *(_DWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 16) = *v16;
  v18 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v9 == 0 || (float)(v17 * (float)v9) < v18) {
    v21 = v18 / v17;
    v22 = true;
    if (v9 >= 3) {
      v22 = (v9 & (v9 - 1)) != 0;
    }
    v23 = v22 | (2 * v9);
    v24 = vcvtps_u64_f32(v21);
    if (v23 <= v24) {
      v25 = v24;
    }
    else {
      v25 = v23;
    }
    if (v25 == 1) {
      v25 = 2;
    }
    else if ((v25 & (v25 - 1)) != 0) {
      v26 = result;
      v25 = NgxRoutine_e2400(v25);
      result = v26;
    }
    v27 = *(_QWORD*)(a1 + 8);
    if (v25 > v27) {
      goto LABEL_39;
    }
    if (v25 < v27) {
      v29 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v27 >= 3 && (v27 & (v27 - 1)) == 0) {
        v30 = 1LL << -(char)__clz(v29 - 1);
        if (v29 >= 2) {
          v29 = v30;
        }
        if (v25 <= v29) {
          v25 = v29;
        }
        if (v25 >= v27) {
          goto LABEL_52;
        }
      LABEL_39:
        v28 = result;
        NgxRoutine_29120((__int64*)a1, v25);
        result = v28;
        goto LABEL_52;
      }
      v31 = result;
      v32 = NgxRoutine_e2400(v29);
      result = v31;
      if (v25 <= v32) {
        v25 = v32;
      }
      if (v25 < v27) {
        goto LABEL_39;
      }
    }
  LABEL_52:
    v9 = *(_QWORD*)(a1 + 8);
    if ((v9 & (v9 - 1)) != 0) {
      if (v10 >= v9) {
        v4 = v10 % v9;
        v19 = *(_QWORD*)a1;
        v20 = *(_QWORD**)(*(_QWORD*)a1 + 8 * (v10 % v9));
        if (v20 != nullptr) {
          goto LABEL_27;
        }
      }
      else {
        v4 = v10;
        v19 = *(_QWORD*)a1;
        v20 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v10);
        if (v20 != nullptr) {
          goto LABEL_27;
        }
      }
    }
    else {
      v4 = (v9 - 1) & v10;
      v19 = *(_QWORD*)a1;
      v20 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
      if (v20 != nullptr) {
        goto LABEL_27;
      }
    }
  LABEL_57:
    v33 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v33;
    *(_QWORD*)(v19 + 8 * v4) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v34 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v9 & (v9 - 1)) != 0) {
        if (v34 >= v9) {
          v34 %= v9;
        }
        *(_QWORD*)(v19 + 8 * v34) = result;
      }
      else {
        *(_QWORD*)(v19 + 8 * (v34 & (v9 - 1))) = result;
      }
    }
    goto LABEL_28;
  }
  v19 = *(_QWORD*)a1;
  v20 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v20 == nullptr) {
    goto LABEL_57;
  }
LABEL_27:
  *(_QWORD*)result = *v20;
  *v20 = result;
LABEL_28:
  ++*(_QWORD*)(a1 + 24);
  return result;
}

void __attribute__((noreturn)) nvidia_b3380() { NgxData_954740(); }

__attribute__((swiftcall)) void nvidia_b37a0(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2)
{
  _QWORD** a3 = (_QWORD**)PSEUDO_X8_VALUE(x8_);
  char* v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  char* v10;
  _QWORD* v11;
  __int64 v12;
  char* v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  _BYTE* v28;
  _BYTE* v29;
  __int64 v30;
  __int64 v31;
  char v32;
  char* v33;
  _BYTE* v34;
  char v35;
  __int64 v36;
  __int64 v37;

  NgxRoutine_b3540(a3);
  if (*(_QWORD*)a1 != 0) {
    v6 = *(char**)(*(_QWORD*)a1 + 8LL);
    v7 = *a3;
    if (*a3 != nullptr) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v6 = "";
  v7 = *a3;
  if (*a3 == nullptr) {
  LABEL_3:
    v7 = (_QWORD*)NgxRoutine_420(48);
    v8 = NgxData_954750;
    v7[2] = 0;
    v7[3] = 0;
    *a3 = v7;
    *v7 = v8 + 2;
    v7[1] = 0;
    v7[4] = 0;
    v7[5] = 32;
  }
LABEL_4:
  v9 = strlen_plt(v6);
  NgxRoutine_b3620(v7, (__int64)v6, v9 + 1);
  if (*(_QWORD*)a2 == 0) {
    v10 = "";
    v11 = *a3;
    if (*a3 != nullptr) {
      goto LABEL_6;
    }
  LABEL_10:
    v14 = (_QWORD*)NgxRoutine_420(48);
    v15 = NgxData_954750;
    v14[2] = 0;
    v14[3] = 0;
    *a3 = v14;
    *v14 = v15 + 2;
    v14[1] = 0;
    v14[4] = 0;
    v14[5] = 32;
    v16 = strlen_plt(v10);
    {
      NgxRoutine_b3620(v14, (__int64)v10, v16 + 1);
      return;
    }
  }
  v10 = *(char**)(*(_QWORD*)a2 + 8LL);
  v11 = *a3;
  if (*a3 == nullptr) {
    goto LABEL_10;
  }
LABEL_6:
  v12 = strlen_plt(v10) + 1;
  v13 = v10;
  v18 = v12;
  v19 = v11[3] + v12;
  if (v11[4] >= v19) {
    goto LABEL_33;
  }
  v20 = v11[1];
  v11[4] = v19;
  v21 = NgxRoutine_420(v19);
  v11[1] = v21;
  if (v21 != 0) {
    if (v20 == 0) {
      v26 = v11[4];
      v13 = v10;
      v11[3] = v26;
      if (v26 != 0) {
        v27 = 0;
        do {
          *(_BYTE*)(v11[1] + v27++) = 0;
        } while (v11[4] > v27);
      }
      goto LABEL_33;
    }
    if (v11[4] >= v11[3]) {
      v23 = v11[3];
    }
    else {
      v23 = v11[4];
    }
    v11[3] = v23;
    if (v23 == 0) {
      goto LABEL_31;
    }
    v24 = v23 & 7;
    if (v23 >= 8) {
      v28 = (_BYTE*)(v20 + 3);
      v29 = (_BYTE*)(v21 + 3);
      v30 = 0;
      v31 = -(__int64)(v23 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        v30 -= 8;
        *(v29 - 3) = *(v28 - 3);
        *(v29 - 2) = *(v28 - 2);
        *(v29 - 1) = *(v28 - 1);
        *v29 = *v28;
        v29[1] = v28[1];
        v29[2] = v28[2];
        v29[3] = v28[3];
        v32 = v28[4];
        v28 += 8;
        v29[4] = v32;
        v29 += 8;
      } while (v31 != v30);
      v25 = -v30;
      if (v24 == 0) {
        goto LABEL_31;
      }
    }
    else {
      v25 = 0;
      if (v24 == 0) {
      LABEL_31:
        NgxRoutine_430_alt1(v20);
        goto LABEL_32;
      }
    }
    v33 = (char*)(v20 + v25);
    v34 = (_BYTE*)(v21 + v25);
    do {
      v35 = *v33++;
      --v24;
      *v34++ = v35;
    } while (v24 != 0);
    goto LABEL_31;
  }
  NgxRoutine_430_alt1(v20);
  v11[3] = 0;
  v11[4] = 0;
LABEL_32:
  v13 = v10;
LABEL_33:
  v36 = v11[3] - 1LL;
  v37 = v11[1] + v36;
  v11[3] = v36;
  result = memcpy_plt(v37, v13, v18);
  v11[3] += v18;
  {
    result;
    return;
  }
}

bool nvidia_b42a0(__int64 a1, __int64 a2, char a3, int a4, void* a5, char a6,
                  int a7)
{
  __int64* v13;
  __int64 v14;
  const char* v15;
  int* v16;
  char* v17;
  char* v18;
  char* v20;
  __int64 v21;
  const char* v22;
  const char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _DWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char v56;
  wchar_t v57[785];
  __int64 v58[3];
  __int64 v59[3];

  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *NgxData_954768[0] = a7;
  v13 = NgxData_954770;
  if (*NgxData_954770 != 0) {
    fclose_plt(*NgxData_954770),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *v13 = 0;
  }
  if (a1 != 0) {
    *(_DWORD*)(wcsncpy_plt(v57, a1, 785) +
               3136) = 0,
               v25 = COERCE_AS(__typeof__(v25),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
               v26 = COERCE_AS(__typeof__(v26),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
               v27 = COERCE_AS(__typeof__(v27),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
               v37 = COERCE_AS(__typeof__(v37),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
               v54 = COERCE_AS(__typeof__(v54),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
               v55 = COERCE_AS(__typeof__(v55),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_DWORD*)(wcsncat_plt(v57, &NgxData_f5558, 785) +
               3136) = 0,
               v25 = COERCE_AS(__typeof__(v25),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
               v26 = COERCE_AS(__typeof__(v26),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
               v27 = COERCE_AS(__typeof__(v27),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
               v37 = COERCE_AS(__typeof__(v37),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
               v54 = COERCE_AS(__typeof__(v54),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
               v55 = COERCE_AS(__typeof__(v55),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v14 = wcsncat_plt(v57, a2, 785),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v14 = wcsncpy_plt(v57, a2, 785),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_DWORD*)(v14 + 3136) = 0;
  v15 = (const char*)getenv_plt("__NGX_LOG_LEVEL"),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = NgxData_954778;
  *NgxData_954778 = 0;
  if (v15 != nullptr) {
    LODWORD(v15) = atoi_plt(v15),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *v16 = (int)v15;
  }
  if (a4 > (int)v15) {
    *v16 = a4;
    LODWORD(v15) = a4;
  }
  if ((_DWORD)v15 == 0) {
    return true;
  }
  *NgxData_954780[0] = nullptr;
  *NgxData_954788 = a5;
  v17 = NgxData_954790[0];
  if ((_DWORD)v15 == 1) {
    v18 = NgxData_954798;
    *NgxData_954798 = (*NgxData_954790[0] ^ 1) & 1;
    if ((a6 & 1) == 0) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  *NgxData_954790[0] = 0;
  v18 = NgxData_954798;
  *NgxData_954798 = 1;
  if ((a6 & 1) != 0) {
  LABEL_15:
    *v17 = 0;
    *v18 = 0;
  }
LABEL_16:
  if (wcslen_plt(v57) != 0 && ((a6 & 1) == 0 || *v16 == 256)) {
    if ((a3 & 1) != 0) {
      v20 = (char*)&NgxData_f5a78;
    }
    else {
      v20 = "w";
    }
    v21 = util_log_b49c0(v57, v20, 1),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *v13 = v21;
    if (v21 != 0) {
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/common/util-log.cpp",
          259, (__int64)"setLogFilename",
          (__int64)"Logging to requested file (%S) enabled successfully", v57),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return true;
    }
    NgxRoutine_33440((void*)(v59), v57, nullptr),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v59[0] & 1) != 0) {
      v22 = (const char*)v59[2];
    }
    else {
      v22 = (char*)v59 + 1;
    }
    NgxRoutine_33440((void*)(v58), NgxData_f5650, nullptr),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v58[0] & 1) != 0) {
      v23 = (const char*)v58[2];
    }
    else {
      v23 = (char*)v58 + 1;
    }
    v24 = fopen_plt(v22, v23),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v58[0] & 1) != 0) {
      NgxRoutine_430(v58[2], v58[0] & 0xFFFFFFFFFFFFFFFELL),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((v59[0] & 1) == 0) {
      LABEL_34:
        if (v24 != 0) {
          goto LABEL_35;
        }
        goto LABEL_54;
      }
    }
    else if ((v59[0] & 1) == 0) {
      goto LABEL_34;
    }
    NgxRoutine_430(v59[2], v59[0] & 0xFFFFFFFFFFFFFFFELL),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v24 != 0) {
    LABEL_35:
      fclose_plt(v24),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      NgxRoutine_b4c00(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/common/util-log.cpp",
          279, (__int64)"setLogFilename",
          (__int64)"Warning: Log file (%S) exists but is unwritable.  Trying "
                   "renamed file for logging.",
          (__int64)v57, v25, v26, v27, v56),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v28 = wcsdup_plt(v57),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v28 == 0) {
        return *v13 != 0;
      }
      v29 = v28;
      v30 = wcslen_plt(v57),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v31 = v30 - 1;
      v32 = v29 + 4 * v30 + 4;
      while (1) {
        v33 = 0;
        if (v31 == 0) {
          break;
        }
        v34 = *(_DWORD*)(v32 - 8);
        if (v34 == 92 || v34 == 47) {
          break;
        }
        v32 -= 4;
        --v31;
        if (v34 == 46) {
          *(_DWORD*)(v32 - 4) = 0;
          v33 = v32;
          break;
        }
      }
      v35 = v30 + 8;
      v36 = NgxRoutine_420(4 * (v30 + 8)),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v36 == 0) {
        NgxRoutine_430(v29, v37),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        return false;
      }
      v38 = (_DWORD*)v36;
      if (v33 != 0) {
        NgxRoutine_b4c80(v36, v35, (__int64)&NgxData_f5560, v29, 1, v33),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v39 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v39;
        if (v39 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5560, v29, 2,
                         v33),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v40 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v40;
        if (v40 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5560, v29, 3,
                         v33),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v41 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v41;
        if (v41 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5560, v29, 4,
                         v33),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v42 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v42;
        if (v42 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5560, v29, 5,
                         v33),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v43 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v43;
        if (v43 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5560, v29, 6,
                         v33),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v44 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v44;
        if (v44 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5560, v29, 7,
                         v33),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v45 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v45;
        if (v45 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5560, v29, 8,
                         v33),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        NgxRoutine_b4c80(v36, v35, (__int64)&NgxData_f5c1c, v29, 1),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v46 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v46;
        if (v46 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5c1c, v29, 2),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v47 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v47;
        if (v47 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5c1c, v29, 3),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v48 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v48;
        if (v48 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5c1c, v29, 4),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v49 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v49;
        if (v49 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5c1c, v29, 5),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v50 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v50;
        if (v50 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5c1c, v29, 6),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v51 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v51;
        if (v51 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5c1c, v29, 7),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v52 = util_log_b49c0(v38, v20, 1),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *v13 = v52;
        if (v52 != 0) {
          goto LABEL_65;
        }
        NgxRoutine_b4c80((__int64)v38, v35, (__int64)&NgxData_f5c1c, v29, 8),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v53 = util_log_b49c0(v38, v20, 1),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *v13 = v53;
      if (v53 == 0) {
        NgxRoutine_b4b90(
            (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/rel/source/common/util-log.cpp",
            318, (__int64)"setLogFilename",
            (__int64)"Warning: Could not open any log file in given directory "
                     "(%S).  Logging to file is disabled",
            v57),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_66;
      }
    LABEL_65:
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/common/util-log.cpp",
          314, (__int64)"setLogFilename",
          (__int64)"Warning: Logging to renamed logging file (%S)", v38),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_66:
      NgxRoutine_430(v29, v54),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      NgxRoutine_430(v38, v55),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return *v13 != 0;
    }
  LABEL_54:
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/common/util-log.cpp",
        272, (__int64)"setLogFilename",
        (__int64)"Warning: Log file directory (%S) appears unwritable.  "
                 "Logging to file is disabled",
        v57),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return false;
  }
  return true;
}

__int64 nvidia_ba050(__int64 result, __int64 a2)
{
  int v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;

  v2 = *(_DWORD*)(a2 + 48);
  if (v2 != 0) {
    if (v2 == 1) {
      v4 = result;
      NgxRoutine_e2c70();
      v8 = *(_QWORD*)a2;
      ngx_cubin_vulkan_b9220((void*)(&v7), v4 + 992, &v8);
      vkDestroyBuffer_plt(*(_QWORD*)(v4 + 840), v8, 0);
      vkFreeMemory_plt(*(_QWORD*)(v4 + 840), *(_QWORD*)(v7 + 8), 0);
      ngx_cubin_vulkan_b9220((void*)(&v9), v4 + 992, &v8);
      NgxRoutine_badc0(v4 + 992, &v9);
      NgxRoutine_430(a2, 56);
      return NgxRoutine_e2ca0();
    }
  }
  else {
    v5 = *(_QWORD*)a2;
    v6 = result;
    v8 = *(_QWORD*)(a2 + 8);
    ngx_cubin_vulkan_b9220((void*)(&v7), result + 1048, &v8);
    vkDestroyImageView_plt(*(_QWORD*)(v6 + 840), v5, 0);
    vkDestroyImage_plt(*(_QWORD*)(v6 + 840), v8, 0);
    vkFreeMemory_plt(*(_QWORD*)(v6 + 840), *(_QWORD*)(v7 + 8), 0);
    ngx_cubin_vulkan_b9220((void*)(&v9), v6 + 1048, &v8);
    NgxRoutine_badc0(v6 + 1048, &v9);
    return NgxRoutine_430(a2, 56);
  }
  return result;
}

__int64 nvidia_ba2d0(__int64 a1, unsigned __int64* a2, __int64 a3, __int64 a4,
                     void (***a5)(_QWORD, __int64, _QWORD, unsigned __int64))
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  NgxRoutine_e2c70();
  ngx_cubin_vulkan_b9220((void*)(&v14), a1 + 992, a2);
  if (v14 == a1 + 1017) {
    NgxRoutine_e2ca0();
  }
  else {
    v10 = (a3 >> 32) * a4;
    v11 = *(_QWORD*)(v14 + 8);
    NgxRoutine_e2ca0();
    v12 = *(_QWORD*)(a1 + 840);
    v14 = 0;
    if ((unsigned int)vkMapMemory_plt(v12, v11, 0, v10, 0, &v14) == 0) {
      (**a5)(a5, v14, (unsigned int)a3, HIDWORD(a3));
      vkUnmapMemory_plt(*(_QWORD*)(a1 + 840), v11);
      return 0;
    }
  }
  return 0xFFFFFFFFLL;
}

__int64 nvidia_bbb20(__int64 a1, unsigned int a2)
{
  unsigned int v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  char* v9;
  __int64 v10;
  bool v11;
  int v12;
  struct {
    _BYTE v14[12];
    char v15;
    _BYTE v16[3];
  } v14_;
  char* v17;
  struct {
    char v18;
    _BYTE v19[7];
  } v18_;
  __int64 vars0;

  if (a2 != -1) {
    v3 = a2;
    if (*(_BYTE*)(a1 + 97) != 1 || *(_BYTE*)(a1 + 96) == 0) {
      if (*(_BYTE*)(a1 + 96) == 0) {
      LABEL_17:
        v11 = true;
        *(_DWORD*)(a1 + 92) = v3;
        goto LABEL_18;
      }
      v5 = *(__int64**)(a1 + 72);
      v6 = *(_QWORD*)(a1 + 80);
      v7 = *v5;
      v14_.v15 = *(_DWORD*)(a1 + 92);
      v8 = (*(__int64 (**)(__int64*, __int64, char*, _BYTE*, _BYTE*, char*,
                           __int64*, char**))(v7 + 24))(
          v5, v6, &v14_.v15, v14_.v16, v14_.v14, &v18_.v18, &vars0, &v17);
      if ((unsigned int)(v8 - 1) >= 2) {
        if (v8 == 3) {
          v18_.v18 = *(_DWORD*)(a1 + 92);
          v17 = v18_.v19;
        }
        while (1) {
          v9 = v17;
          if (v17 <= &v18_.v18) {
            break;
          }
          v10 = *(_QWORD*)(a1 + 64);
          --v17;
          if ((unsigned int)ungetc_plt((unsigned __int8)*(v9 - 1), v10) == -1) {
            return (unsigned int)-1;
          }
        }
        goto LABEL_17;
      }
    }
    else {
      v12 = ungetc_plt(*(unsigned int*)(a1 + 92), *(_QWORD*)(a1 + 64));
      if (v12 != -1) {
        goto LABEL_17;
      }
    }
    return (unsigned int)-1;
  }
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    return (unsigned int)-1;
  }
  v3 = *(_DWORD*)(a1 + 92);
  v11 = v3 != -1;
LABEL_18:
  *(_BYTE*)(a1 + 96) = v11;
  return v3;
}

void __attribute__((noreturn)) nvidia_bbecc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10)
{
  _QWORD* v10;
  __int64 v11;

  NgxRoutine_db240(&a10);
  *v10 = v11;
  NgxRoutine_db240(v10 + 1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_bc340(__int64 a1, unsigned int a2)
{
  unsigned int v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  char* v9;
  __int64 v10;
  bool v11;
  int v12;
  struct {
    _BYTE v14[12];
    int v15;
  } v14_;
  char* v16;
  struct {
    char v17;
    _BYTE v18[7];
  } v17_;
  __int64 vars0;

  if (a2 != -1) {
    v3 = a2;
    if (*(_BYTE*)(a1 + 97) != 1 || *(_BYTE*)(a1 + 96) == 0) {
      if (*(_BYTE*)(a1 + 96) == 0) {
      LABEL_17:
        v11 = true;
        *(_DWORD*)(a1 + 92) = v3;
        goto LABEL_18;
      }
      v5 = *(__int64**)(a1 + 72);
      v6 = *(_QWORD*)(a1 + 80);
      v7 = *v5;
      v14_.v15 = *(_DWORD*)(a1 + 92);
      v8 = (*(__int64 (**)(__int64*, __int64, int*, char**, _BYTE*, char*,
                           __int64*, char**))(v7 + 24))(
          v5, v6, &v14_.v15, &v16, v14_.v14, &v17_.v17, &vars0, &v16);
      if ((unsigned int)(v8 - 1) >= 2) {
        if (v8 == 3) {
          v17_.v17 = *(_DWORD*)(a1 + 92);
          v16 = v17_.v18;
        }
        while (1) {
          v9 = v16;
          if (v16 <= &v17_.v17) {
            break;
          }
          v10 = *(_QWORD*)(a1 + 64);
          --v16;
          if ((unsigned int)ungetc_plt((unsigned __int8)*(v9 - 1), v10) == -1) {
            return (unsigned int)-1;
          }
        }
        goto LABEL_17;
      }
    }
    else {
      v12 = ungetwc_plt(*(unsigned int*)(a1 + 92), *(_QWORD*)(a1 + 64));
      if (v12 != -1) {
        goto LABEL_17;
      }
    }
    return (unsigned int)-1;
  }
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    return (unsigned int)-1;
  }
  v3 = *(_DWORD*)(a1 + 92);
  v11 = v3 != -1;
LABEL_18:
  *(_BYTE*)(a1 + 96) = v11;
  return v3;
}

void __attribute__((noreturn)) nvidia_bc6dc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10)
{
  _QWORD* v10;
  __int64 v11;

  NgxRoutine_db240(&a10);
  *v10 = v11;
  NgxRoutine_db240(v10 + 1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64* nvidia_bd030(__int64* a1)
{
  __int64 v1;
  __int64 v4;
  char* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  unsigned __int8 v9;
  _BYTE v11[16];
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  v12_.v13 = v1;
  NgxRoutine_bcf20((__int64)v11, a1);
  if (v11[0] == 1) {
    nvidia_be650((void*)((__int64)&v12_.v12),
                 (__int64)a1 + *(_QWORD*)(*a1 - 24));
    v4 = NgxRoutine_db310(&v12_.v12, (__int64)NgxData_951328);
    NgxRoutine_db240(&v12_.v12);
    v5 = (char*)a1 + *(_QWORD*)(*a1 - 24);
    v6 = *((_QWORD*)v5 + 5);
    if (*((_DWORD*)v5 + 36) == -1) {
      v7 = (char*)a1 + *(_QWORD*)(*a1 - 24);
      nvidia_be650((void*)((__int64)&v12_.v12), (__int64)v7);
      v8 = NgxRoutine_db310(&v12_.v12, (__int64)NgxData_9511b8);
      v9 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v8 + 56LL))(v8, 32);
      NgxRoutine_db240(&v12_.v12);
      v5 = v7;
      *((_DWORD*)v7 + 36) = v9;
    }
    if ((*(__int64 (**)(__int64, __int64, char*))(*(_QWORD*)v4 + 48LL))(
            v4, v6, v5) == 0) {
      nvidia_be740((__int64)a1 + *(_QWORD*)(*a1 - 24),
                   *(_DWORD*)((char*)a1 + *(_QWORD*)(*a1 - 24) + 32) | 5);
    }
  }
  NgxRoutine_bcf80((__int64)v11);
  return a1;
}

__attribute__((swiftcall)) void nvidia_be4b0(PSEUDO_X8 x8_, __int64 a1,
                                             signed int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* result;

  if (a2 != 1 && a2 <= 4095) {
    (char*)X8CALL_X0(unsigned __int64, nvidia_be8c0((void*)(a3), a1, a2));
    return;
  }
  result = (char*)NgxRoutine_420(40);
  *a3 = 41;
  a3[1] = 35;
  a3[2] = (__int64)result;
  strcpy(result, "unspecified iostream_category error");
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nvidia_be5c0(PSEUDO_X8 x8_, _QWORD* a1,
                                             void** a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  void** result;
  __int64 v6;
  __int64 v7;

  NgxRoutine_db210(a3, a1 + 6);
  result = NgxRoutine_db280((void**)a1 + 6, a2);
  v6 = a1[9];
  if (v6 != 0) {
    v7 = v6 - 1;
    do {
      result = (void**)(*(__int64 (**)(__int64, _QWORD*, _QWORD))(
          a1[7] + 8 * v7))(1, a1, *(unsigned int*)(a1[8] + 4 * v7));
      --v7;
    } while (v7 != -1);
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nvidia_be650(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  {
    NgxRoutine_db210(a2, (__int64*)(a1 + 48));
    return;
  }
}

__int64 nvidia_be740(__int64 result, int a2)
{
  int v2;
  int v3;

  v2 = *(_DWORD*)(result + 36);
  v3 = a2 | (*(_QWORD*)(result + 40) == 0);
  *(_DWORD*)(result + 32) = v3;
  if ((v2 & v3) != 0) {
    NgxRoutine_be780((__int64)"ios_base::clear");
  }
  return result;
}

__attribute__((swiftcall)) void nvidia_be8c0(PSEUDO_X8 x8_, __int64 a1,
                                             unsigned int a2)
{
  unsigned __int64* a3 = (unsigned __int64*)PSEUDO_X8_VALUE(x8_);
  _DWORD* v5;
  int v6;
  _DWORD* v7;
  char* v8;
  __int64 v9;
  unsigned __int64 result;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  _BYTE v15[1024];

  v5 = (_DWORD*)__errno_location_plt(a1);
  v6 = *v5;
  v7 = v5;
  v8 = v15;
  v9 = strerror_r_plt(a2, v15, 1024);
  if ((_DWORD)v9 != 0) {
    if ((_DWORD)v9 == -1) {
      v9 = (unsigned int)*v7;
    }
    if ((_DWORD)v9 != 22) {
      abort_plt(v9);
    }
    v8 = &NgxData_ebe5a;
  }
  if (*v8 == 0) {
    v8 = v15;
    snprintf_plt(v15, 1024, "Unknown error %d", a2);
  }
  *v7 = v6;
  result = strlen_plt(v8);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_be3e0();
  }
  v11 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (result | 7) + 1;
    }
    v14 = NgxRoutine_420(v13);
    a3[1] = v11;
    a3[2] = v14;
    *a3 = v13 | 1;
    v12 = (char*)v14;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v12 = (char*)a3 + 1;
    if (result == 0) {
      goto LABEL_17;
    }
  }
  result = memmove_plt(v12, v8, v11);
LABEL_17:
  v12[v11] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nvidia_be9f0(PSEUDO_X8 x8_, __int64 a1,
                                             signed int a2)
{
  unsigned __int64* a3 = (unsigned __int64*)PSEUDO_X8_VALUE(x8_);
  char* result;

  if (a2 < 4096) {
    (char*)X8CALL_X0(unsigned __int64, nvidia_be8c0((void*)(a3), a1, a2));
    return;
  }
  result = (char*)NgxRoutine_420(40);
  *a3 = 41;
  a3[1] = 34;
  a3[2] = (unsigned __int64)result;
  strcpy(result, "unspecified generic_category error");
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nvidia_bea70(PSEUDO_X8 x8_, __int64 a1,
                                             signed int a2)
{
  unsigned __int64* a3 = (unsigned __int64*)PSEUDO_X8_VALUE(x8_);
  char* result;

  if (a2 < 4096) {
    (char*)X8CALL_X0(unsigned __int64, nvidia_be8c0((void*)(a3), a1, a2));
    return;
  }
  result = (char*)NgxRoutine_420(40);
  *a3 = 41;
  a3[1] = 33;
  a3[2] = (unsigned __int64)result;
  strcpy(result, "unspecified system_category error");
  {
    result;
    return;
  }
}

void __attribute__((noreturn)) nvidia_bef60(__int64 a1)
{

  std_exception_Destroy_exception_plt();
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_beffc(__int64 a1)
{
  __int64 v3;

  std_exception_Destroy_exception_plt();
  v3 = _Unwind_Resume_plt(a1);
  return NgxRoutine_bf010(v3);
}

void __attribute__((noreturn)) nvidia_bf080(__int64 a1)
{

  std_exception_Destroy_exception_plt();
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_bf100()
{
  NgxRoutine_bfba0((__int64)"basic_string");
}

__int64 nvidia_bfc00(char* a1, _QWORD* a2, unsigned int a3)
{
  char* v3;
  char v6;
  char* v7;
  int* v8;
  int v9;
  int* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  _QWORD v15[3];
  _WORD v16[12];
  char* v17;

  v3 = *((char**)a1 + 2);
  v17 = nullptr;
  LOBYTE(v15[0]) = 12;
  v6 = *a1;
  strcpy((char*)v15 + 1, "stoull");
  if ((v6 & 1) != 0) {
    v7 = v3;
  }
  else {
    v7 = a1 + 1;
  }
  v8 = (int*)__errno_location_plt(a1);
  v9 = *v8;
  v10 = v8;
  *v8 = 0;
  v11 = strtoull_plt(v7, &v17, a3);
  v12 = *v10;
  *v10 = v9;
  if (v12 == 34) {
    HIBYTE(v16[10]) = 0;
    v16[11] = 0;
    strcpy((char*)v16, "(stoull: out of rang");
    NgxRoutine_bfba0((__int64)v16 + 1);
  }
  if (v17 == v7) {
    HIBYTE(v16[11]) = 0;
    strcpy((char*)v16, "*stoull: no conversion");
    NgxRoutine_bff20((__int64)v16 + 1);
  }
  v13 = v11;
  if (a2 != nullptr) {
    *a2 = v17 - v7;
  }
  NgxRoutine_bf120(v15);
  return v13;
}

__attribute__((swiftcall)) void nvidia_c04d0(PSEUDO_X8 x8_, __int64 unused_int0,
                                             __int64 a1, __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = a2 - a1;
  if ((unsigned __int64)(a2 - a1) >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_be3e0();
  }
  if (v3 <= 0x16) {
    *(_BYTE*)a3 = 2 * v3;
    v6 = a3 + 1;
    if (a2 == a1) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v7 = a1;
  if ((v3 | 7) == 0x17) {
    v8 = 26;
  }
  else {
    v8 = (v3 | 7) + 1;
  }
  v9 = NgxRoutine_420(v8);
  a1 = v7;
  *(_QWORD*)(a3 + 8) = v3;
  *(_QWORD*)(a3 + 16) = v9;
  *(_QWORD*)a3 = v8 | 1;
  v6 = v9;
  if (a2 != v7) {
  LABEL_9:
    memcpy_plt(v6, a1, v3);
  }
LABEL_10:
  *(_BYTE*)(v6 + v3) = 0;
}

__attribute__((swiftcall)) void nvidia_c06d0(PSEUDO_X8 x8_, __int64 unused_int0,
                                             __int64 a1, __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v4 = a2 - a1;
  v5 = (a2 - a1) >> 2;
  if (v5 >= 0x3FFFFFFFFFFFFFF6LL) {
    NgxRoutine_be3e0();
  }
  if (v5 <= 4) {
    *(_BYTE*)a3 = ((unsigned int)v4 >> 1) & 0xFE;
    v7 = a3 + 4;
    if (a2 == a1) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v8 = a1;
  if ((v5 | 1) == 5) {
    v9 = 8;
  }
  else {
    v9 = (v5 | 1) + 1;
  }
  v10 = NgxRoutine_420(4 * v9);
  a1 = v8;
  *(_QWORD*)(a3 + 8) = v5;
  *(_QWORD*)(a3 + 16) = v10;
  *(_QWORD*)a3 = v9 | 1;
  v7 = v10;
  if (a2 != v8) {
  LABEL_9:
    memcpy_plt(v7, a1, v4);
  }
LABEL_10:
  *(_DWORD*)(v7 + v4) = 0;
}

#pragma GCC visibility pop
