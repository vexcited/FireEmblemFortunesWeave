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
void game_combat_CombatCharacterObserver_CombatCharacterObserver_lambda1_Invoke_alt1(
    __int64 a1, __n128 a2) __asm__("game_combat_CombatCharacterObserver_"
                                   "CombatCharacterObserver_lambda1_Invoke");
__int64
CharacterSelfie_10a6ac0_alt1(__int64 result) __asm__("CharacterSelfie_10a6ac0");
__int64 GameHr_10f15b0();
__int64 GameRoutine_106c820_alt1(_QWORD*,
                                 __int64) __asm__("GameRoutine_106c820");
__int64
game_combat_CombatCharacterObserver_CombatCharacterObserver_lambda1_Invoke(
    __int64 result);

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

__int64

game_combat_CombatCharacterObserver_CombatCharacterObserver_lambda1_Invoke(
    __int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  v1 = *(_QWORD*)(result + 8);
  if (*(_BYTE*)(v1 + 40) != 0) {
    v2 = *(_QWORD*)(v1 + 8);
    v3 = *(_QWORD*)(v2 + 80);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v2 + 88);
      if (*(_QWORD*)(v3 + 8) != -1 && v4 != 0) {
        if (GameData_21ec7b0 != 0) {
          v7_.v7[0] = GameData_200ece8;
          v7_.v7[1] = v4;
          v7_.v8 = v7_.v7;
          v7_.v7[2] = 1;
          GameRoutine_106c820_alt1((_QWORD*)GameData_21ec7b0, (__int64)v7_.v7);
          if (v7_.v8 == v7_.v7) {
            v6 = 32;
            goto LABEL_12;
          }
          if (v7_.v8 != nullptr) {
            v6 = 40;
          LABEL_12:
            (*(void (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
          }
        }
        GameHr_10f15b0();
        result = CharacterSelfie_10a6ac0_alt1(*(_QWORD*)(v4 + 128));
        *(_BYTE*)(v1 + 40) = 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
