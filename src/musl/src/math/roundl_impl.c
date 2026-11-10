#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __gttf2(long double, long double);
__int64 __netf2(long double, long double);
extern __int128 SdkData_bb1aa0;
extern __int128 SdkData_bb2850;
extern __int128 SdkData_bb3590;
extern __int128 SdkData_bb35c0;
extern __int128 SdkData_bb35d0;
extern __int128 SdkData_bb3e40;
extern __int128 SdkData_bb4110;
long double SdkRoutine_854fd0(long double, long double);
long double __addtf3(long double, long double);
long double __subtf3(long double, long double);
long double roundl(long double result);

long double roundl(long double result)
{
  unsigned int v1;
  unsigned int v2;
  long double v3;
  long double v4;
  long double v5;
  __int128 v6;
  long double v7;
  long double v8;
  long double v9;
  long double v10;
  long double v11;
  long double v12;

  v1 = HIWORD(result);
  v2 = HIWORD(result) & 0x7FFF;
  if (v2 > 0x406E) {
    return result;
  }
  v12 = result;
  v9 = result;
  if (HIWORD(result) >= 0x8000u) {
    HIBYTE(v12) = HIBYTE(result) ^ 0x80;
    result = v12;
  }
  v8 = result;
  v3 = __addtf3(result, *(long double*)&SdkData_bb3e40);
  if (v2 <= 0x3FFD) {
    return SdkRoutine_854fd0(v9, *(long double*)&SdkData_bb4110);
  }
  v4 = __addtf3(v3, *(long double*)&SdkData_bb35d0);
  v7 = __subtf3(v4, v8);
  if ((int)__gttf2(v7, *(long double*)&SdkData_bb2850) <= 0) {
    v10 = __addtf3(v8, v7);
    if ((int)__netf2(v7, *(long double*)&SdkData_bb35c0) > 0) {
      result = v10;
      v11 = v10;
      HIBYTE(v11) = HIBYTE(v10) ^ 0x80;
      if (v1 >= 0x8000) {
        return v11;
      }
      return result;
    }
    v5 = v10;
    v6 = SdkData_bb3590;
  }
  else {
    v5 = __addtf3(v8, v7);
    v6 = SdkData_bb1aa0;
  }
  result = __addtf3(v5, *(long double*)&v6);
  v11 = result;
  HIBYTE(v11) = HIBYTE(result) ^ 0x80;
  if (v1 >= 0x8000) {
    return v11;
  }
  return result;
}

#pragma GCC visibility pop
