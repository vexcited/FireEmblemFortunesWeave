#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterDie_Unknown5(__int64 a1);
__int64 GameRoutine_10fec60(_QWORD, long double);
__int64 GameRoutine_10ff3b0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterDie_vtable[])();
extern __int64 GameData_21ec7b0;
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CharacterDie_Destructor(_QWORD* a1);
__int64 CharacterDie_DeletingDestructor(_QWORD* a1);
__int64 game_character_CharacterDie_CharacterDie_lambda0_Invoke(__int64 a1,
                                                                long double a2);

__int64 CharacterDie_Unknown5(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2);
  }
  result = *(_QWORD*)(a1 + 64);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
  }
  return result;
}

__n128 CharacterDie_Destructor(_QWORD* a1)
{
  __int64 v2;
  __n128 result;
  __int64 v4;
  __int64 v5;

  *a1 = game_character_CharacterDie_vtable;
  v2 = a1[8];
  a1[8] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v4 = a1[7];
  a1[7] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 CharacterDie_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = game_character_CharacterDie_vtable;
  v2 = a1[8];
  a1[8] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[7];
  a1[7] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5);
}

__int64 game_character_CharacterDie_CharacterDie_lambda0_Invoke(__int64 a1,
                                                                long double a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  __int64 v14;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = v2[7];
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  }
  result = v2[8];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  v5 = v2[4];
  if (v5 == 0) {
    return result;
  }
  v6 = v2[5];
  if (*(_QWORD*)(v5 + 8) == -1 || v6 == 0) {
    return result;
  }
  v8 = *(_DWORD*)(v6 + 340);
  if (*(_QWORD*)(v5 + 8) == -1) {
    if ((v8 & 0x20) == 0) {
      return result;
    }
    v6 = 0;
  LABEL_20:
    *(_QWORD*)&a2 = 0;
    return GameRoutine_10fec60(v6, a2);
  }
  if ((v8 & 0x20) != 0) {
    goto LABEL_20;
  }
  result = GameRoutine_10ff3b0(v6);
  if ((result & 1) != 0) {
    v9 = *(_DWORD*)(v6 + 340);
    if ((v9 & 0x800000) == 0) {
      v10 = *(_DWORD*)(*(_QWORD*)(v6 + 72) + 120LL);
      if (v10 > -77626399) {
        v11 = v10 == 1400556095;
        v12 = -77626398;
      }
      else {
        v11 = v10 == -972548316;
        v12 = -93581017;
      }
      if ((v11 || v10 == v12) &&
          (GameData_21ec7b0 == 0 ||
           (v14 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 || (v9 & 1) != 0 ||
           (*(_DWORD*)(v14 + 112) & 0x10000000) == 0)) {
        LODWORD(a2) = 1055846127;
        return GameRoutine_10fec60(v6, a2);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
