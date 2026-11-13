#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nvidia_dlss_rel_source_a31d0(_QWORD*, unsigned int*, __int64, char,
                                     __int64);
int vsnprintf_plt(__int64, unsigned __int64, const char*, __int64);
__int64 nvidia_dlss_rel_source_a33f0(_QWORD* a1, unsigned int* a2, char* a3,
                                     ...);
__int64 nvidia_dlss_rel_source_a34d0(_QWORD* a1, unsigned int* a2, char* a3,
                                     ...);

__int64 nvidia_dlss_rel_source_a33f0(_QWORD* a1, unsigned int* a2, char* a3,
                                     ...)
{

#pragma clang fp contract(off)
  __int64 v5;
  int v6;
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a3);
  __builtin_va_arg(va, double);
  __builtin_va_arg(va, double);
  __builtin_va_end(va);
  __builtin_va_start(va1, a3);
  __builtin_va_start(va, a3);
  {
    v5 = a1[10];
    __asm__ volatile("" ::"r"(v5));
  }
  v6 = vsnprintf_plt(a1[9], v5 - a1[9], a3, (__int64)&va1);
  *(_BYTE*)(v5 - 1) = 0;
  if (v6 == -1 || a1[10] - a1[9] <= (unsigned __int64)v6) {
    return *(_QWORD*)a2;
  }
  else {
    return nvidia_dlss_rel_source_a31d0(a1, a2, v6, 0, 0);
  }
}

__int64 nvidia_dlss_rel_source_a34d0(_QWORD* a1, unsigned int* a2, char* a3,
                                     ...)
{

#pragma clang fp contract(off)
  __int64 v5;
  int v6;
  long double v7;
  long double v8;
  int v9;
  unsigned int v11;
  unsigned int v12;
  int v13;
  bool v14;
  int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a3);
  __builtin_va_arg(va, double);
  __builtin_va_arg(va, double);
  __builtin_va_end(va);
  __builtin_va_start(va1, a3);
  __builtin_va_start(va, a3);
  {
    v5 = a1[10];
    __asm__ volatile("" ::"r"(v5));
  }
  v6 = vsnprintf_plt(a1[9], v5 - a1[9], a3, (__int64)&va1);
  *(_BYTE*)(v5 - 1) = 0;
  if (v6 == -1 || a1[10] - a1[9] <= (unsigned __int64)v6) {
    return *(_QWORD*)a2;
  }
  {
    v9 = *((_DWORD*)a1 + 17);
    __asm__ volatile("" ::"r"(v9));
  }
  if (a2[1] != 0 || v9 == 0) {
    v11 = *a2 + 1;
    __asm__ volatile("" ::"r"(v11));
  }
  else {
    v11 = *a2;
    __asm__ volatile("" ::"r"(v11));
  }
  if (v9 != 0) {
    v12 = v6;
  }
  else {
    v12 = 0;
  }
  v13 = v6 / -2;
  if (v9 != 0) {
    v13 = 0;
  }
  v14 = v9 == -1;
  if (v9 == -1) {
    v15 = -v6;
  }
  else {
    v15 = v13;
  }
  if (v14) {
    v16 = -v6;
  }
  else {
    v16 = v12;
  }
  {
    __typeof__(v7) z_ = (__typeof__(v7)){0};
    LODWORD(z_) = *((_DWORD*)a1 + 10);
    v7 = z_;
  }
  {
    __typeof__(v8) z_ = (__typeof__(v8)){0};
    LODWORD(z_) = *((_DWORD*)a1 + 11);
    v8 = z_;
  }
  v17 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD, long double,
                        long double))(*(_QWORD*)*a1 + 504LL))(
      *a1, a1[1], (unsigned int)(*((_DWORD*)a1 + 12) + 8 * v15),
      *((_DWORD*)a1 + 13) + *((_DWORD*)a1 + 16) * v11, v7, v8);
  LODWORD(v18) = *a2;
  LODWORD(v19) = a2[1];
  if (v17 != 0) {
    v18 = (unsigned int)v18;
  }
  else {
    v18 = v11;
  }
  if (v17 != 0) {
    v19 = (unsigned int)v19;
  }
  else {
    v19 = v16;
  }
  return v18 | (v19 << 32);
}

#pragma GCC visibility pop
