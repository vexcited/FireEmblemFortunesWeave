#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 vfprintf_plt(_QWORD, _QWORD, _QWORD);
__int64 vswprintf_plt(_QWORD, _QWORD, _QWORD, _QWORD);
extern int* NgxData_954778;
void util_log_b4d10(__int64, unsigned int, __int64, __int64, unsigned int,
                    _QWORD*);
__int64 nvidia_dlss_rel_source_common_33310(__int64 a1, __int64 a2, __int64 a3,
                                            ...);
void nvidia_dlss_rel_source_common_b4b90(__int64 a1, __int64 a2, __int64 a3,
                                         __int64 a4, ...);
void nvidia_dlss_rel_source_common_b4c00(__int64 result, __int64 a2, __int64 a3,
                                         __int64 a4, ...);
__int64 nvidia_dlss_rel_source_common_b4c80(__int64 a1, __int64 a2, __int64 a3,
                                            ...);
__int64 nvidia_dlss_rel_source_common_b5230(__int64 a1, char* a2, ...);

__int64 nvidia_dlss_rel_source_common_33310(__int64 a1, __int64 a2, __int64 a3,
                                            ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a3);
  __builtin_va_start(va1, a3);
  return vswprintf_plt(a1, a2, a3, (__int64)&va);
}

void nvidia_dlss_rel_source_common_b4b90(__int64 a1, __int64 a2, __int64 a3,
                                         __int64 a4, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a4);
  __builtin_va_start(va1, a4);
  util_log_b4d10(a1, a2, a3, a4, 1u, (__int64)&va);
}

void nvidia_dlss_rel_source_common_b4c00(__int64 result, __int64 a2, __int64 a3,
                                         __int64 a4, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  if ((unsigned int)*NgxData_954778 >= 2) {
    __builtin_va_start(va1, a4);
    __builtin_va_start(va, a4);
    util_log_b4d10(result, a2, a3, a4, 2u, (__int64)&va);
  }
}

__int64 nvidia_dlss_rel_source_common_b4c80(__int64 a1, __int64 a2, __int64 a3,
                                            ...)
{
  __int64 result;
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a3);
  __builtin_va_start(va1, a3);
  result = vswprintf_plt(a1, a2, a3, (__int64)&va);
  *(_DWORD*)(a1 + 4 * a2 - 4) = 0;
  return result;
}

__int64 nvidia_dlss_rel_source_common_b5230(__int64 a1, char* a2, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a2);
  __builtin_va_start(va1, a2);
  return vfprintf_plt(a1, a2, (__int64)&va);
}

#pragma GCC visibility pop
