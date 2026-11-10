#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_1017028;
extern _UNKNOWN SdkData_f77028;
extern __int64 (*SdkData_103b048)(unsigned __int64, _QWORD);
extern __int64 (*SdkData_103b050)(unsigned __int64, char*, _QWORD);
extern __int64 (*nv_g_GraphicsAllocator)(__int64, __int64, _QWORD);
extern __int64 (*nv_g_GraphicsAllocator_alt1)(char*, __int64, _QWORD) __asm__(
    "nv_g_GraphicsAllocator");
__int64 nv_graphics_config_5f8a20(__int64 a1, __int64 a2, __int64 a3);
__int64 nv_graphics_config_5f8a40(__int64 a1, unsigned __int64 a2, char* a3);
__int64 nv_graphics_config_5f8b00(__int64 a1, unsigned __int64 a2);

__int64 nv_graphics_config_5f8a20(__int64 a1, __int64 a2, __int64 a3)
{
  return nv_g_GraphicsAllocator(a3, a2, 0);
}

__int64 nv_graphics_config_5f8a40(__int64 a1, unsigned __int64 a2, char* a3)
{
  __int64 result;
  char* v7;

  if (a2 == 0) {
    return SdkData_103b050(a2, a3, 0);
  }
  if (a2 < (unsigned __int64)&SdkData_f77028 ||
      a2 >= (unsigned __int64)&SdkData_1017028) {
    return SdkData_103b050(a2, a3, 0);
  }
  result = nv_g_GraphicsAllocator_alt1(a3, 16, 0);
  if (result != 0) {
    if ((char*)&SdkData_f77028 - a2 + 655360 >= a3) {
      v7 = a3;
    }
    else {
      v7 = (char*)&SdkData_f77028 - a2 + 655360;
    }
    return memcpy_plt(result, a2, v7);
  }
  return result;
}

__int64 nv_graphics_config_5f8b00(__int64 a1, unsigned __int64 a2)
{
  __int64 result;

  if (a2 < (unsigned __int64)&SdkData_f77028 ||
      a2 >= (unsigned __int64)&SdkData_1017028) {
    return SdkData_103b048(a2, 0);
  }
  return result;
}

#pragma GCC visibility pop
