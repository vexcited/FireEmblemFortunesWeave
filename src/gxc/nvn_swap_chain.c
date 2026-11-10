#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gxc_DeviceChild_Destroy_DeviceChild(_QWORD);
__int64 gxc_GpuMemory_Destroy_GpuMemory(_QWORD);
extern _UNKNOWN** GameData_2133058;
extern __int64 (*GameData_2177cb0)(void*);
void GameRoutine_651250(void*, unsigned __int64);
__int64 NvnSwapChain_Destructor(_QWORD* a1);
_QWORD* gxc_GpuMemory_Destroy_GpuMemory_alt1(_QWORD* result) __asm__(
    "gxc_GpuMemory_Destroy_GpuMemory");
extern __int64 (*GameData_2177cb0_alt1)(__int64) __asm__("GameData_2177cb0");
void GameRoutine_651250_alt1(__int64) __asm__("GameRoutine_651250");

__int64 NvnSwapChain_Destructor(_QWORD* a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  ((void (*)(_QWORD*))*GameData_2133058)(a1 + 1);
  v2 = (__int64*)a1[81];
  v3 = (__int64*)a1[82];
  while (v2 != v3) {
    v4 = *v2++;
    GameData_2177cb0_alt1(v4);
    GameRoutine_651250_alt1(v4);
  }
  v5 = (_QWORD*)a1[87];
  if (v5 != nullptr) {
    v6 = (_QWORD*)a1[88];
    v7 = a1[87];
    if (v5 != v6) {
      do {
        v6 -= 3;
        gxc_GpuMemory_Destroy_GpuMemory_alt1(v6);
      } while (v6 != v5);
      v7 = a1[87];
    }
    a1[88] = v5;
    GameRoutine_651250_alt1(v7);
  }
  v8 = a1[84];
  if (v8 != 0) {
    a1[85] = v8;
    GameRoutine_651250_alt1(v8);
  }
  v9 = a1[81];
  if (v9 != 0) {
    a1[82] = v9;
    GameRoutine_651250_alt1(v9);
  }
  return gxc_DeviceChild_Destroy_DeviceChild(a1);
}

#pragma GCC visibility pop
