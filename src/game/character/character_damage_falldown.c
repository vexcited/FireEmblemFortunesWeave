#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_109d5e0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterDamageFalldown_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CharacterDamageFalldown_Destructor(_QWORD* a1);
__int64 CharacterDamageFalldown_DeletingDestructor(_QWORD* a1);
extern __int128 GameData_1a83610;
long double
game_character_CharacterDamageFalldown_OnEnable_lambda0_Invoke(__int64 a1);
__int64
game_character_CharacterDamageFalldown_OnEnable_lambda1_Invoke(__int64 result);

__int64 CharacterDamageFalldown_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 result;

  *a1 = game_character_CharacterDamageFalldown_vtable;
  GameRoutine_109d5e0(a1 + 11);
  v2 = a1[14];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  result = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 CharacterDamageFalldown_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_character_CharacterDamageFalldown_vtable;
  GameRoutine_109d5e0(a1 + 11);
  v2 = a1[14];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

long double

game_character_CharacterDamageFalldown_OnEnable_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  long double result;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 32);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(_QWORD*)(v1 + 40);
    v5 = v3 == -1 || v4 == 0;
    if (!v5 && *(_DWORD*)(*(_QWORD*)(v4 + 72) + 120LL) == -1193575788) {
      *(_DWORD*)(*(_QWORD*)(v4 + 104) + 56LL) |= 0x400u;
      *(_DWORD*)(v1 + 80) = 1;
      *(_OWORD*)(v1 + 64) = GameData_1a83610;
      return *(long double*)&GameData_1a83610;
    }
  }
  return result;
}

__int64

game_character_CharacterDamageFalldown_OnEnable_lambda1_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;

  v1 = *(_QWORD*)(result + 8);
  if (*(_DWORD*)(v1 + 80) == 1) {
    v2 = *(_QWORD*)(v1 + 32);
    if (v2 != 0) {
      v3 = *(_QWORD*)(v2 + 8);
      v4 = *(_QWORD*)(v1 + 40);
      v5 = v3 == -1 || v4 == 0;
      if (!v5 && *(_DWORD*)(*(_QWORD*)(v4 + 72) + 120LL) == -1193575788) {
        *(_DWORD*)(*(_QWORD*)(v4 + 104) + 56LL) &= ~0x400u;
        *(_DWORD*)(v1 + 80) = 2;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
