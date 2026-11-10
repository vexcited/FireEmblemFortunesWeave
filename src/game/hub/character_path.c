#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__n128 GameRoutine_d97500(_QWORD*, __n128 result);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_CharacterPath_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CharacterPath_DeletingDestructor(_QWORD* a1, __n128 a2);
__int64 GameRoutine_cfd8e0(__int64 result, char);
__int64 HubCharacterNatives_cf7b40(__int64 result, char);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 game_hub_d96f00(__int64, __int64*);
extern __int64 GameData_22124e0;
__n128 CharacterPath_Destructor(_QWORD* a1);
__n128 CharacterPath_d97500(_QWORD* a1);

__n128 CharacterPath_Destructor(_QWORD* a1)
{
  __n128 result;
  __int64 v3;

  *a1 = game_hub_CharacterPath_vtable;
  result = CharacterPath_d97500(a1);
  v3 = a1[3];
  if (v3 != 0) {
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__n128 CharacterPath_d97500(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = a1[3];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 != 0) {
      v5 = v3;
      if (a1[2] != 0) {
        v6 = GameData_22124e0;
        v7 = a1[3];
        v10_.v10 = a1[2];
        v10_.v11 = v7;
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
        }
        game_hub_d96f00(v6, &v10_.v10),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v10_.v11 != 0) {
          std___1___shared_weak_count___release_weak(v10_.v11),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v8 = a1[3];
        a1[2] = 0;
        a1[3] = 0;
        if (v8 != 0) {
          std___1___shared_weak_count___release_weak(v8),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v9 = *(_QWORD*)(*(_QWORD*)(a1[1] + 24LL) + 16LL);
        *(_BYTE*)(v9 + 288) = 0;
        GameRoutine_cfd8e0(v9 + 136, 0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        HubCharacterNatives_cf7b40(*(_QWORD*)(*(_QWORD*)(a1[1] + 24LL) + 8LL),
                                   1),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

__int64 CharacterPath_DeletingDestructor(_QWORD* a1, __n128 a2)
{
  __int64 v3;
  __int64 v4;

  *a1 = game_hub_CharacterPath_vtable;
  GameRoutine_d97500(a1, a2);
  v3 = a1[3];
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

#pragma GCC visibility pop
