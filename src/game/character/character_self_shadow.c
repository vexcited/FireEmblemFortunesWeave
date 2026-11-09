#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_bf8240(_QWORD, _QWORD);
__int64 GameRoutine_bf8420(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212df10;
extern __int64 (*game_character_CharacterSelfShadow_vtable[])();
extern int* GameData_212df08;
__int64 CharacterSelfShadow_Destructor(__int64 result);

__int64 CharacterSelfShadow_Destructor(__int64 result)
{
  __int64 v1;
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;

  *(_QWORD*)result = game_character_CharacterSelfShadow_vtable;
  if (*(_BYTE*)(result + 32) == 1) {
    v1 = *(_QWORD*)(result + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v3 = GameData_212df08;
    if ((explicit & 1) == 0) {
      v11 = result;
      v10 = v1;
      v9 = __cxa_guard_acquire(GameData_212df10);
      v3 = GameData_212df08;
      v1 = v10;
      result = v11;
      if (v9 != 0) {
        *GameData_212df08 = wld_Crc32(0, "ModelModule", 11);
        __cxa_guard_release(GameData_212df10);
        v3 = GameData_212df08;
        v1 = v10;
        result = v11;
      }
    }
    v4 = *v3;
    v5 = *(_QWORD*)(v1 + 512);
    v6 = v5;
    do {
      v7 = *(_DWORD*)(v6 - 16);
      v6 -= 16;
      v5 -= 16;
    } while (v7 != v4);
    v8 = result;
    GameRoutine_bf8420(*(_QWORD*)(result + 40), *(_QWORD*)(result + 24),
                       *(_QWORD*)(*(_QWORD*)(v5 + 8) + 24LL));
    return GameRoutine_bf8240(*(_QWORD*)(v8 + 40), *(_QWORD*)(v8 + 24));
  }
  return result;
}

#pragma GCC visibility pop
