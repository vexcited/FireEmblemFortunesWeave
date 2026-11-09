#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gxc_DeviceChild_Destroy_DeviceChild(_QWORD);
__int64 gxc_GpuMemory_Destroy_GpuMemory(_QWORD);
extern _UNKNOWN** GameData_2133058;
extern __int64 (*GameData_2177cb0)(void*);
void GameRoutine_651250(void*, unsigned __int64);
__int64 NvnSwapChain_Destructor(_QWORD* a1);

__int64 NvnSwapChain_Destructor(_QWORD* a1)
{
  void** v2;
  void** v3;
  void* v4;
  __int64 v5;
  __int64 v6;
  void* v7;
  __int64 v8;
  void* v9;
  __int64 v10;
  void* v11;
  __int64 v12;

  ((void (*)(_QWORD*))*GameData_2133058)(a1 + 1);
  v2 = (void**)a1[81];
  v3 = (void**)a1[82];
  while (v2 != v3) {
    v4 = *v2++;
    GameData_2177cb0(v4);
    GameRoutine_651250(v4, 0x80u);
  }
  v5 = a1[87];
  if (v5 != 0) {
    v6 = a1[88];
    v7 = (void*)a1[87];
    if (v5 != v6) {
      do {
        v6 -= 24;
        gxc_GpuMemory_Destroy_GpuMemory(v6);
      } while (v6 != v5);
      v7 = (void*)a1[87];
    }
    v8 = a1[89];
    a1[88] = v5;
    GameRoutine_651250(v7, v8 - (_QWORD)v7);
  }
  v9 = (void*)a1[84];
  if (v9 != nullptr) {
    v10 = a1[86];
    a1[85] = v9;
    GameRoutine_651250(v9, v10 - (_QWORD)v9);
  }
  v11 = (void*)a1[81];
  if (v11 != nullptr) {
    v12 = a1[83];
    a1[82] = v11;
    GameRoutine_651250(v11, v12 - (_QWORD)v11);
  }
  return gxc_DeviceChild_Destroy_DeviceChild(a1);
}

#pragma GCC visibility pop
