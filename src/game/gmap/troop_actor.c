#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 TroopActor_Unknown2(__int64 a1);
__int64 GameRoutine_bd7f40(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212d4d8;
extern int* GameData_212d4d0;
__int64 game_gmap_TroopActor_SetIsSilhouette_lambda0_Invoke(__int64 result,
                                                            __int64 a2);

__int64 TroopActor_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned int v4;

  v1 = *(_QWORD*)(a1 + 392);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 96);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(unsigned __int8*)(v2 + 32);
  if (v3 == 2) {
    v4 = 4;
  }
  else {
    v4 = 0;
  }
  if (v3 == 1) {
    return 2;
  }
  else {
    return v4;
  }
}

__int64 game_gmap_TroopActor_SetIsSilhouette_lambda0_Invoke(__int64 result,
                                                            __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 i;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                  memory_order_acquire);
  v3 = GameData_212d4d0;
  if ((explicit & 1) == 0) {
    v12 = a2;
    v13 = result;
    v8 = __cxa_guard_acquire(GameData_212d4d8);
    v3 = GameData_212d4d0;
    a2 = v12;
    result = v13;
    if (v8 != 0) {
      *GameData_212d4d0 = wld_Crc32(0, "CharacterMaterial", 17);
      __cxa_guard_release(GameData_212d4d8, v9, v10, v11);
      v3 = GameData_212d4d0;
      a2 = v12;
      result = v13;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  for (i = v5; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == v4) {
      if (*(_QWORD*)(a2 + 512) != v5 && *(_QWORD*)(v5 + 8) != 0) {
        return GameRoutine_bd7f40(*(_QWORD*)(v5 + 8),
                                  *(unsigned __int8*)(result + 8));
      }
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
