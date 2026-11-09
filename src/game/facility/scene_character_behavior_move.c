#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
__int64 SceneCharacterBehaviorMove_Unknown7(__int64 result);

__int64 SceneCharacterBehaviorMove_Unknown7(__int64 result)
{
  unsigned int v1;
  int v2;
  __int128 v3;
  int v4;
  __int64 v5;
  __int64 v6;

  *(_BYTE*)(result + 24) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v6 = result;
    v4 = __cxa_guard_acquire(&GameData_21a6130);
    result = v6;
    if (v4 != 0) {
      v5 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v5;
      __cxa_guard_release(&GameData_21a6130);
      result = v6;
    }
  }
  v1 = DWORD2(GameData_21a6120);
  v2 = *(unsigned __int8*)(result + 96);
  *(_QWORD*)(result + 64) = GameData_21a6120;
  v3 = *(_OWORD*)(result + 64);
  *((_QWORD*)&v3 + 1) = v1;
  *(_OWORD*)(result + 64) = v3;
  if (v2 == 1) {
    *(_BYTE*)(result + 96) = 0;
  }
  *(_DWORD*)(result + 112) = 0;
  return result;
}

#pragma GCC visibility pop
