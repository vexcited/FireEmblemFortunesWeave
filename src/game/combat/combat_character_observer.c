#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_212fe68;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CombatCharacterObserver_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_10f15b0();
__n128 GameRoutine_106c820(_QWORD*, __int64, __n128 result);
extern __int64 (*GameData_200ece8[])();
extern __int64 GameData_21ec7b0;
void CharacterSelfie_10a6ac0(__int64);
void game_combat_CombatCharacterObserver_CombatCharacterObserver_lambda1_Invoke(
    __int64 a1, __n128 a2);

__int64 CombatCharacterObserver_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = GameData_212fe68 + 16;
  v2 = a1[3];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

void game_combat_CombatCharacterObserver_CombatCharacterObserver_lambda1_Invoke(
    __int64 a1, __n128 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  long double v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  v2 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v2 + 40) != 0) {
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(_QWORD*)(v3 + 80);
    if (v4 != 0) {
      v5 = *(_QWORD*)(v3 + 88);
      if (*(_QWORD*)(v4 + 8) != -1 && v5 != 0) {
        if (GameData_21ec7b0 != 0) {
          v9_.v9[0] = GameData_200ece8;
          v9_.v9[1] = v5;
          v9_.v10 = v9_.v9;
          v9_.v9[2] = 1;
          *(__n128*)&v7 = GameRoutine_106c820((_QWORD*)GameData_21ec7b0,
                                              (__int64)v9_.v9, a2);
          if (v9_.v10 == v9_.v9) {
            v8 = 32;
            goto LABEL_12;
          }
          if (v9_.v10 != nullptr) {
            v8 = 40;
          LABEL_12:
            (*(void (**)(long double))(*v9_.v10 + v8))(v7);
          }
        }
        GameRoutine_10f15b0();
        CharacterSelfie_10a6ac0(*(_QWORD*)(v5 + 128));
        *(_BYTE*)(v2 + 40) = 0;
      }
    }
  }
}

#pragma GCC visibility pop
