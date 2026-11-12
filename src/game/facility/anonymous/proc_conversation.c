#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2043cf8[])();
extern __int64 (*game_facility_anonymous_ProcConversation_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;
__int64 ProcConversation_Destructor_1496620_alt1(__int64 a1) __asm__(
    "ProcConversation_Destructor_1496620");
__int64 ProcConversation_DeletingDestructor_1496750_alt1(__int64 a1) __asm__(
    "ProcConversation_DeletingDestructor_1496750");
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21f4000;
extern __int64 GameData_22420e0;
float GameRoutine_144f360(__int64);
void ProcConversation_1496480();
void game_facility_anonymous_ProcConversation_PlaySpecialTelop_closure_Invoke();
__int64 ProcConversation_Destructor_14968a0_alt1(__int64* a1) __asm__(
    "ProcConversation_Destructor_14968a0");
__int64 ProcConversation_DeletingDestructor_14969d0_alt1(__int64* a1) __asm__(
    "ProcConversation_DeletingDestructor_14969d0");
_QWORD* ProcConversation_1495fa0(_QWORD* result);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64
game_facility_ReleaseGroups_alt1() __asm__("game_facility_ReleaseGroups");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 (*ProcConversation_Destructor_14968a0_ptr[])();
float GameHr_144f360(__int64);
void FacilitySceneBase_1958ed0(__int64, __int64);
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcConversation_Destructor_1496620(__int64 a1);
void ProcConversation_DeletingDestructor_1496750(__int64 a1);
void ProcConversation_Destructor_14968a0(__int64* a1);
void ProcConversation_DeletingDestructor_14969d0(__int64* a1);

_QWORD* ProcConversation_1495fa0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = result[24];
  if (v1 != 0 && (*(_BYTE*)(v1 + 136) & 1) == 0) {
    result = *(_QWORD**)(v1 + 96);
    *(_QWORD*)(v1 + 96) = 0;
    *(_BYTE*)(v1 + 136) = 1;
    if (result == (_QWORD*)(v1 + 64)) {
      v2 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_8;
      }
      v2 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v2))((__int64)result);
  LABEL_8:
    v3 = *(_QWORD*)(v1 + 112);
    v4 = *(_QWORD*)(v1 + 120);
    if (v3 == v4) {
    LABEL_9:
      *(_QWORD*)(v1 + 120) = v3;
      return result;
    }
    while (1) {
      result = *(_QWORD**)(v4 - 16);
      *(_QWORD*)(v4 - 16) = 0;
      if ((_QWORD*)(v4 - 48) == result) {
        v6 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_13;
        }
        v6 = 40;
      }
      (*(void (**)(__int64))(*result + v6))((__int64)result);
      result = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == result) {
        v5 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_13;
        }
        v5 = 40;
      }
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*result + v5))((__int64)result);
    LABEL_13:
      v4 -= 64;
      if (v4 == v3) {
        goto LABEL_9;
      }
    }
  }
  return result;
}

void ProcConversation_1496480()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  long double v4;

  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock_alt1(v2),
    v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v0),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 != 0) {
      if (v1 != 0) {
        *(float*)&v4 = GameHr_144f360(v1),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v3 + 16LL))(v3, v4),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v3),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
}

void game_facility_anonymous_ProcConversation_PlaySpecialTelop_closure_Invoke()
{
  if (GameData_22420e0 != 0) {
    *(_WORD*)(GameData_22420e0 + 880) = 1;
  }
}

void ProcConversation_Destructor_1496620(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)a1 = game_facility_anonymous_ProcConversation_vtable;
  *(_QWORD*)(a1 + 152) = ProcConversation_Destructor_14968a0_ptr;
  v3 = a1 + 152;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v4 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
    v3 = v4;
  }
  v5 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v5;
  FacilitySceneBase_1958ed0(v3, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void ProcConversation_DeletingDestructor_1496750(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)a1 = game_facility_anonymous_ProcConversation_vtable;
  *(_QWORD*)(a1 + 152) = ProcConversation_Destructor_14968a0_ptr;
  v3 = a1 + 152;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v4 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
    v3 = v4;
  }
  v5 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v5;
  FacilitySceneBase_1958ed0(v3, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, a1);
}

void ProcConversation_Destructor_14968a0(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  v1 = a1[6];
  *(a1 - 19) = (__int64)game_facility_anonymous_ProcConversation_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)ProcConversation_Destructor_14968a0_ptr;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  FacilitySceneBase_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (_QWORD*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    if (*v5 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v5 + 8LL))(*v5);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(v3);
  GameRoutine_658c00_alt1(a1 - 8);
}

void ProcConversation_DeletingDestructor_14969d0(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v8;

  v1 = a1[6];
  *(a1 - 19) = (__int64)game_facility_anonymous_ProcConversation_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)ProcConversation_Destructor_14968a0_ptr;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  FacilitySceneBase_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (_QWORD*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    if (*v5 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v5 + 8LL))(*v5);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(v3);
  GameRoutine_658c00_alt1(a1 - 8);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v3);
}

#pragma GCC visibility pop
