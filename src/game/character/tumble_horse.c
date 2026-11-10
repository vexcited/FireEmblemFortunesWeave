#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CharacterBuilder_1083bf0(_QWORD* result);
__int64 GameRoutine_10bc1a0(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_character_CharacterDie_Body_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TumbleHorse_DeletingDestructor(_QWORD* a1);
_BYTE* CharacterModel_1070320(__int64, unsigned int);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
void* GameRoutine_1070860(__int64, int);
_BYTE* TumbleHorse_10bc820(__int64 a1, unsigned int a2);

_BYTE* TumbleHorse_10bc820(__int64 a1, unsigned int a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  _BYTE* result;
  _BYTE* v10;

  v4 = GameRoutine_10bc1a0(a1);
  v5 = *(unsigned __int8*)(a1 + 16);
  v6 = *(_QWORD*)(v4 + 392);
  v7 = *(_QWORD*)(v4 + 400);
  if (v5 == 1) {
    if (v7 == 0) {
      return GameRoutine_1070860(*(_QWORD*)(v6 + 11608), a2);
    }
    v8 = (atomic_ullong*)(v7 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    result = GameRoutine_1070860(*(_QWORD*)(v6 + 11608), a2);
  }
  else {
    if (v7 == 0) {
      return CharacterModel_1070320(*(_QWORD*)(v6 + 11608), a2);
    }
    v8 = (atomic_ullong*)(v7 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    result = CharacterModel_1070320(*(_QWORD*)(v6 + 11608), a2);
  }
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v10 = result;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    return v10;
  }
  return result;
}

__int64 TumbleHorse_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  long double v2;
  __int64 v3;

  *a1 = &game_character_CharacterDie_Body_vtable;
  v1 = (_QWORD*)GameRoutine_10bc1a0((__int64)a1);
  if (v1 != nullptr) {
    CharacterBuilder_1083bf0(v1);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
}

#pragma GCC visibility pop
