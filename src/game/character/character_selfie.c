#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1084400(_QWORD, _QWORD);
__int64 GameRoutine_66ae00(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterSelfie_vtable[])();
extern __int64 GameData_21ec7b0;
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CharacterSelfie_Destructor(_QWORD* a1);
__int64 CharacterSelfie_DeletingDestructor(_QWORD* a1);
void CharacterSelfie_10a6ac0(__int64 a1);

__n128 CharacterSelfie_Destructor(_QWORD* a1)
{
  __int64 v1;
  __n128 result;
  __int64 v4;
  __int64 v5;

  v1 = a1[22];
  *a1 = game_character_CharacterSelfie_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak(v1);
  }
  v4 = a1[20];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 CharacterSelfie_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = a1[22];
  *a1 = game_character_CharacterSelfie_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = a1[20];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
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

void CharacterSelfie_10a6ac0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  if (*(_QWORD*)(a1 + 128) != 0 && *(_QWORD*)(a1 + 136) != 0 &&
      *(_QWORD*)(a1 + 120) != 0) {
    v5 = *(_QWORD*)(a1 + 168);
    *(_DWORD*)(a1 + 144) = 0;
    *(_QWORD*)(a1 + 128) = 0;
    *(_QWORD*)(a1 + 136) = 0;
    *(_QWORD*)(a1 + 120) = 0;
    if (v5 != 0) {
      v14 = v1;
      v15 = v2;
      v6 = *(_QWORD*)(a1 + 176);
      v12 = v5;
      v13 = v6;
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_66ae00(&v12);
      if (v13 != 0) {
        std___1___shared_weak_count___release_weak(v13);
      }
      v8 = *(_QWORD*)(a1 + 32);
      if (v8 != 0) {
        v9 = *(_QWORD*)(a1 + 40);
        if (*(_QWORD*)(v8 + 8) != -1 && v9 != 0) {
          CharacterBuilder_1084400(v9, 0xFFFFFFFFLL);
        }
      }
      if (GameData_21ec7b0 != 0) {
        v11 = *(_QWORD*)(GameData_21ec7b0 + 128);
        if (v11 != 0) {
          *(_WORD*)(v11 + 192) = 257;
        }
      }
    }
  }
}

#pragma GCC visibility pop
