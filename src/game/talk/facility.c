#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_140bb40(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2043250[])();
extern __int64 GameData_212dce8;
__int64 game_talk_Facility_TickBefore(__int64 result);
__int64 GameRoutine_14127e0(__int64, unsigned __int8*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern __int64 fw_memory_g_heap_manager_ptr;
float game_facility_14107c0(__int64, __int64);
__n128 game_talk_Facility_TickBefore_lambda0_Invoke(__int64 a1, __int64* a2);

__int64 game_talk_Facility_TickBefore(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned int v11;
  bool v12;
  int v13;
  _QWORD v15[4];
  _QWORD* v16;

  v1 = result;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    v2 = *(unsigned __int8*)(result + 968);
    v3 = *(_QWORD*)(result + 984);
    v4 = result + 992;
    v16 = v15;
    v5 = (v2 & 1) == 0;
    v6 = v2 >> 1;
    if (v5) {
      v7 = v1 + 969;
    }
    else {
      v7 = v3;
    }
    if (v5) {
      v8 = v6;
    }
    else {
      v8 = *(_QWORD*)(v1 + 976);
    }
    v15[0] = GameData_2043250;
    v15[1] = v1 + 944;
    GameRoutine_140bb40(v4, v7, v8, v15);
    result = (__int64)v16;
    if (v16 == v15) {
      v9 = 32;
    }
    else {
      if (v16 == nullptr) {
        goto LABEL_13;
      }
      v9 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v16 + v9))((__int64)v16);
  }
LABEL_13:
  v10 = *(unsigned __int8**)(v1 + 16);
  if (v10 != nullptr) {
    v11 = *v10;
    v12 = v11 > 0x10;
    v13 = (1 << v11) & 0x1CE00;
    if (!v12 && v13 != 0) {
      *(_WORD*)(v1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v1 + 136) |= 8u;
  return result;
}

__n128 game_talk_Facility_TickBefore_lambda0_Invoke(__int64 a1, __int64* a2)
{
  unsigned __int8* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __n128 result;
  __int64 v15;
  struct {
    unsigned __int8 v16[16];
    __int64 v17;
  } v16_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(unsigned __int8**)(a1 + 8);
  v4 = *a2;
  v5 = *v3;
  if ((v5 & 1) != 0) {
    v6 = *((_QWORD*)v3 + 1);
  }
  else {
    v6 = v5 >> 1;
  }
  if (v4 != 0 && v6 != 0) {
    v9 = v3[96];
    v8 = (__int64)(v3 + 96);
    v10 = (unsigned __int64)v9 >> 1;
    v11 = (v9 & 1) != 0 ? *(_QWORD*)(v8 + 8) : v10;
    if (v11 != 0) {
      game_facility_14107c0((__int64)v16_.v16, v8),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v12 = *(_QWORD*)(v4 + 112);
      v13 = *(_QWORD*)(v4 + 120);
      if (v13 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                  memory_order_relaxed);
        GameRoutine_14127e0(v12, v16_.v16),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          result = std___1___shared_weak_count___release_weak();
        }
      }
      else {
        GameRoutine_14127e0(v12, v16_.v16),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((v16_.v16[0] & 1) != 0 && v16_.v17 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
