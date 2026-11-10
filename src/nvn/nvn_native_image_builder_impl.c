#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* SdkRoutine_6afd00(__int64* result);
__int64 NvRmMemHandleFree_plt(_QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nvn_6b0240(__int64, __int64, unsigned int, __int64, int);
__int64 nvn_6b03c0(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* SdkData_1045120_alt1 __asm__("SdkData_1045120");
extern __int64 (*SdkData_1045120)(_QWORD, _QWORD);
extern __int64 (*SdkData_1045130)(void);
extern __int64 (*SdkData_1045138)(_QWORD*, __int64);
extern __int64 (*SdkData_1045140)(_QWORD*);
extern __int64 (*SdkData_1045170)(_QWORD*, __int64, __int64);
extern __int64 (*SdkData_1045188)(__int64, _QWORD*);
bool nvnNativeImageInitialize(void* a1, __int64 a2);
__int64 nvnNativeImageFinalize(__int64 result);
bool nvnTextureInitializeFromNativeImage(__int64 a1, __int64 a2);

bool nvnNativeImageInitialize(void* a1, __int64 a2)
{
  unsigned __int64 v5;

  SdkRoutine_6afd00(*(__int64**)a2);
  v5 = atomic_load((unsigned __int64*)&SdkData_1045120);
  if (v5 == 0) {
    return false;
  }
  memset_plt(a1, nullptr, 416);
  return (unsigned int)nvn_6b0240((__int64)a1, *(_QWORD*)a2, *(_DWORD*)(a2 + 8),
                                  *(unsigned int*)(a2 + 12),
                                  *(_DWORD*)(a2 + 16)) == 0;
}

__int64 nvnNativeImageFinalize(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;

  v1 = atomic_load((unsigned __int64*)&SdkData_1045120_alt1);
  if (v1 != 0) {
    v2 = result;
    SdkData_1045130();
    result = NvRmMemHandleFree_plt(*(unsigned int*)(v2 + 412));
    *(_QWORD*)(v2 + 256) = 0;
    *(_DWORD*)(v2 + 264) = 0;
    *(_QWORD*)(v2 + 272) = 0;
    *(_QWORD*)(v2 + 280) = 0;
    *(_QWORD*)(v2 + 288) = 0;
    *(_QWORD*)(v2 + 296) = 0;
    *(_QWORD*)(v2 + 304) = 0;
    *(_QWORD*)(v2 + 312) = 0;
    *(_QWORD*)(v2 + 320) = 0;
    *(_QWORD*)(v2 + 328) = 0;
    *(_QWORD*)(v2 + 336) = 0;
    *(_QWORD*)(v2 + 344) = 0;
    *(_QWORD*)(v2 + 352) = 0;
    *(_QWORD*)(v2 + 360) = 0;
    *(_QWORD*)(v2 + 368) = 0;
    *(_QWORD*)(v2 + 376) = 0;
    *(_QWORD*)(v2 + 384) = 0;
    *(_QWORD*)(v2 + 392) = 0;
    *(_QWORD*)(v2 + 400) = 0;
    *(_QWORD*)(v2 + 408) = 0;
  }
  return result;
}

bool nvnTextureInitializeFromNativeImage(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  __int64 v4;
  unsigned int v5;
  __int64 v7;
  _QWORD v9[16];

  v2 = atomic_load((unsigned __int64*)&SdkData_1045120_alt1);
  if (v2 == 0) {
    return false;
  }
  v4 = *(_QWORD*)(a2 + 256);
  v5 = *(_DWORD*)(a2 + 264);
  v7 = *(_QWORD*)(a2 + 272);
  memset(v9, 0, sizeof(v9));
  SdkData_1045138(v9, v4);
  SdkData_1045140(v9);
  if ((unsigned int)nvn_6b03c0(v9, v5, a2 + 280) != 0) {
    return false;
  }
  SdkData_1045170(v9, a2, v7);
  return (unsigned __int8)SdkData_1045188(a1, v9) != 0;
}

#pragma GCC visibility pop
