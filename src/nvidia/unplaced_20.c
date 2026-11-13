#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* NgxRoutine_36f0(_DWORD* result, unsigned int*, unsigned int);
__int64 NgxRoutine_dfab0(__int64 result, unsigned __int64);
__int64 NgxRoutine_e0c40();
__int64 NgxRoutine_e21e0(unsigned __int64*, __int64, void (*)(__int64));
__int64 uselocale_plt(_QWORD);
__int64 vasprintf_plt(_QWORD, _QWORD, _QWORD);
__int64 vfprintf_plt(_QWORD, _QWORD, _QWORD);
__int64 vsscanf_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* NgxData_9511d8;
extern _UNKNOWN* NgxData_9511f8;
extern _UNKNOWN* NgxData_951350;
extern _UNKNOWN* NgxData_951380;
extern _UNKNOWN* NgxData_9522a0;
extern _UNKNOWN NgxData_2b70b30;
extern char NgxData_2b78b2f;
extern void (*NgxData_9513b0[27])();
int vsnprintf_plt(__int64, unsigned __int64, const char*, __int64);
void abort_plt();
void util_log_b4d10(__int64, unsigned int, __int64, __int64, unsigned int,
                    _QWORD*);
_DWORD* nvidia_60a0(__int64 a1);
void nvidia_ae900(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                  __int64 a5, ...);
char* nvidia_b41e0(char* result, ...);
__int64 nvidia_d9890(__int64 a1, __int64 a2);
__int64 nvidia_da0e0(__int64 a1, __int64 a2);
__int64 nvidia_da6d0(__int64 a1, __int64 a2);
__int64 nvidia_dadf0(__int64 a1, __int64 a2);
__int64 nvidia_e1860(__int64 a1, __int64 a2, __int64 a3, ...);
__int64 nvidia_e2030(__int64 a1, unsigned __int64 a2, __int64 a3, char* a4,
                     ...);
__int64 nvidia_e2100(__int64 a1, __int64 a2, __int64 a3, ...);
void __attribute__((noreturn)) nvidia_e2370(__int64 a1, ...);

_DWORD* nvidia_60a0(__int64 a1)
{
  int v1;
  _QWORD* v2;
  int v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  _DWORD* result;
  int v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64* v31;
  int v32;
  int v33;

  {
    v1 = *(_DWORD*)(a1 + 312);
    __asm__ volatile("" ::"r"(v1));
  }
  v2 = (_QWORD*)(a1 + 356);
  *(_DWORD*)(a1 + 16) *= *(_DWORD*)(a1 + 28);
  {
    v4 = *(_DWORD*)(a1 + 100);
    __asm__ volatile("" ::"r"(v4));
  }
  {
    v5 = *(_DWORD*)(a1 + 104);
    __asm__ volatile("" ::"r"(v5));
  }
  v7 = v4 + 3;
  v6 = v4 < -3;
  v8 = v4 + 6;
  if (!v6) {
    v8 = v7;
  }
  v9 = v5 + 15;
  v6 = v5 < -15;
  v10 = v5 + 30;
  if (!v6) {
    v10 = v9;
  }
  {
    v11 = *(_DWORD*)(a1 + 320);
    __asm__ volatile("" ::"r"(v11));
  }
  v12 = v10 >> 4;
  v13 = v12 * (v8 >> 2);
  *(_DWORD*)(a1 + 352) = v12;
  *(_DWORD*)(a1 + 348) = v13;
  *(_DWORD*)(a1 + 324) = v1 * v11;
  NgxRoutine_36f0((_DWORD*)(a1 + 356), (unsigned int*)(a1 + 360), v13);
  NgxRoutine_36f0((_DWORD*)(a1 + 364), (unsigned int*)(a1 + 368),
                  *(_DWORD*)(a1 + 352));
  {
    v14 = *(_DWORD*)(a1 + 352);
    __asm__ volatile("" ::"r"(v14));
  }
  *(_DWORD*)(a1 + 120) = *(_DWORD*)(a1 + 348);
  *(_DWORD*)(a1 + 124) = v14;
  {
    v15 = *(_DWORD*)(a1 + 368);
    __asm__ volatile("" ::"r"(v15));
  }
  *(_QWORD*)(a1 + 128) = *v2;
  *(_DWORD*)(a1 + 136) = *(_DWORD*)(a1 + 364);
  *(_DWORD*)(a1 + 140) = v15;
  *(_QWORD*)(a1 + 152) = 2LL * *(int*)(a1 + 16);
  {
    v16 = *(_DWORD*)(a1 + 100);
    __asm__ volatile("" ::"r"(v16));
  }
  {
    v17 = *(_DWORD*)(a1 + 104);
    __asm__ volatile("" ::"r"(v17));
  }
  *(_DWORD*)(a1 + 188) = v16 / 2;
  *(_DWORD*)(a1 + 192) = v17 / 2;
  v18 = v17 / 2 + 14;
  if (v17 / 2 >= -7) {
    v18 = v17 / 2 + 7;
  }
  v19 = v18 >> 3;
  v20 = v19 * ((v16 / 2 + 1) / 2);
  *(_DWORD*)(a1 + 208) = v20;
  *(_DWORD*)(a1 + 212) = v19;
  NgxRoutine_36f0((_DWORD*)(a1 + 216), (unsigned int*)(a1 + 220), v20);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 224), (unsigned int*)(a1 + 228),
                           *(_DWORD*)(a1 + 212));
  *(_QWORD*)(a1 + 232) = 32;
  {
    v22 = *(int*)(a1 + 60) * *(int*)(a1 + 56);
    __asm__ volatile("" ::"r"(v22));
  }
  {
    v23 = *(int*)(a1 + 48);
    __asm__ volatile("" ::"r"(v23));
  }
  v24 = v22 - 1;
  v25 = v22 - 2;
  if (v22 >= 2) {
    v26 = 2 * v23;
    v27 = v24 & 7;
    if (v25 < 7) {
      v28 = 0;
      if ((v24 & 7) == 0) {
        goto LABEL_16;
      }
      goto LABEL_14;
    }
    v29 = (__int64*)(a1 + 296);
    v30 = 0;
    do {
      *(v29 - 7) = v26;
      *(v29 - 6) = v26;
      *(v29 - 5) = v26;
      *(v29 - 4) = v26;
      v30 -= 8;
      *(v29 - 3) = v26;
      *(v29 - 2) = v26;
      *(v29 - 1) = v26;
      *v29 = v26;
      v29 += 8;
    } while (-(__int64)(v24 & 0x7FFFFFF8) != v30);
    v28 = -v30;
    if ((v24 & 7) != 0) {
    LABEL_14:
      v31 = (__int64*)(a1 + 8 * v28 + 240);
      do {
        *v31++ = v26;
        --v27;
      } while (v27 != 0);
    }
  }
LABEL_16:
  *(_QWORD*)(a1 + 8LL * v24 + 240) = 64 - 2LL * (int)v23 * v24;
  v32 = v23 + 31;
  v6 = (int)v23 < -31;
  v33 = v23 + 62;
  if (!v6) {
    v33 = v32;
  }
  *(_DWORD*)(a1 + 328) = (v33 >> 5) - 1;
  return result;
}

void nvidia_ae900(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                  __int64 a5, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a5);
  __builtin_va_start(va1, a5);
  util_log_b4d10(a2, a3, a4, a5, 1u, (__int64)&va);
}

char* nvidia_b41e0(char* result, ...)
{
  __int64 (**v1)(void*);
  __builtin_va_list va;
  __builtin_va_list va1;

  v1 = (__int64 (**)(void*))NgxData_9522a0;
  if (*(_QWORD*)NgxData_9522a0 != 0) {
    __builtin_va_start(va, result);
    __builtin_va_start(va1, result);
    vsnprintf_plt((__int64)&NgxData_2b70b30, 0x8000u, result, (__int64)&va1);
    NgxData_2b78b2f = 0;
    return (const char*)(*v1)(&NgxData_2b70b30);
  }
  return result;
}

__int64 nvidia_d9890(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9511d8;
  v10 = NgxData_9511d8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d8,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d8, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  {
    v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
    __asm__ volatile("" ::"r"(v5));
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  {
    v6 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = (__int64*)(a1 + 16);
  {
    v8 = (*(_QWORD*)(a1 + 24) - v6) >> 3;
    __asm__ volatile("" ::"r"(v8));
  }
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      {
        v6 = *v7;
        __asm__ volatile("" ::"r"(v6));
      }
    }
  }
  {
    result = *(_QWORD*)(v6 + 8 * v5);
    __asm__ volatile("" ::"r"(result));
  }
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_da0e0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9511f8;
  v10 = NgxData_9511f8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511f8,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511f8, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  {
    v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
    __asm__ volatile("" ::"r"(v5));
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  {
    v6 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = (__int64*)(a1 + 16);
  {
    v8 = (*(_QWORD*)(a1 + 24) - v6) >> 3;
    __asm__ volatile("" ::"r"(v8));
  }
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      {
        v6 = *v7;
        __asm__ volatile("" ::"r"(v6));
      }
    }
  }
  {
    result = *(_QWORD*)(v6 + 8 * v5);
    __asm__ volatile("" ::"r"(result));
  }
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_da6d0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951350;
  v10 = NgxData_951350;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951350,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951350, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  {
    v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
    __asm__ volatile("" ::"r"(v5));
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  {
    v6 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = (__int64*)(a1 + 16);
  {
    v8 = (*(_QWORD*)(a1 + 24) - v6) >> 3;
    __asm__ volatile("" ::"r"(v8));
  }
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      {
        v6 = *v7;
        __asm__ volatile("" ::"r"(v6));
      }
    }
  }
  {
    result = *(_QWORD*)(v6 + 8 * v5);
    __asm__ volatile("" ::"r"(result));
  }
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_dadf0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951380;
  v10 = NgxData_951380;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951380,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951380, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  {
    v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
    __asm__ volatile("" ::"r"(v5));
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  {
    v6 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = (__int64*)(a1 + 16);
  {
    v8 = (*(_QWORD*)(a1 + 24) - v6) >> 3;
    __asm__ volatile("" ::"r"(v8));
  }
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      {
        v6 = *v7;
        __asm__ volatile("" ::"r"(v6));
      }
    }
  }
  {
    result = *(_QWORD*)(v6 + 8 * v5);
    __asm__ volatile("" ::"r"(result));
  }
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_e1860(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v5;
  unsigned int v6;
  __builtin_va_list va1;
  __builtin_va_list va;

  __builtin_va_start(va, a3);
  v5 = uselocale_plt(a2);
  __builtin_va_copy(va1, va);
  v6 = vsscanf_plt(a1, a3, (__int64)&va1);
  if (v5 != 0) {
    uselocale_plt(v5);
  }
  return v6;
}

__int64 nvidia_e2030(__int64 a1, unsigned __int64 a2, __int64 a3, char* a4, ...)
{
  __int64 v7;
  unsigned int v8;
  __builtin_va_list va1;
  __builtin_va_list va;

  __builtin_va_start(va, a4);
  v7 = uselocale_plt(a3);
  __builtin_va_copy(va1, va);
  v8 = vsnprintf_plt(a1, a2, a4, (__int64)&va1);
  if (v7 != 0) {
    uselocale_plt(v7);
  }
  return v8;
}

__int64 nvidia_e2100(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v5;
  unsigned int v6;
  __builtin_va_list va1;
  __int64 v9;
  __builtin_va_list va;

  __builtin_va_start(va, a3);
  v5 = uselocale_plt(a2);
  __builtin_va_copy(va1, va);
  v9 = v5;
  v6 = vasprintf_plt(a1, a3, (__int64)&va1);
  if (v5 != 0) {
    uselocale_plt(v5);
  }
  return v6;
}

void __attribute__((noreturn)) nvidia_e2370(__int64 a1, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a1);
  __builtin_va_start(va1, a1);
  vfprintf_plt(*(_QWORD*)NgxData_9513b0[0], a1, (__int64)&va);
  abort_plt();
}

#pragma GCC visibility pop
