#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e02040(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fe21b0[])();
extern __int64 (*game_hub_ObjectManager_vtable[])();
extern __int64 GameData_220f950;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2213fb0;
__int64
ObjectManager_Destructor_alt1(_QWORD* a1) __asm__("ObjectManager_Destructor");
__int64 GameRoutine_d914a0(_QWORD);
_QWORD*
ObjectManager_e02040_alt1(_QWORD* result) __asm__("ObjectManager_e02040");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void SmoothPath_Destructor(_QWORD*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ObjectManager_Destructor(__int64 a1);
void ObjectManager_e02040(_QWORD* a1);

void ObjectManager_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  *(_QWORD*)a1 = game_hub_ObjectManager_vtable;
  ObjectManager_e02040(*(_QWORD**)(a1 + 104));
  v2 = *(_QWORD*)(a1 + 64);
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 72);
    if (v2 == v3) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v3 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
      v3 -= 16;
    } while (v3 != v2);
    v5 = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a1 + 72) = v2;
    v2 = v5;
    if (v5 != 0) {
    LABEL_9:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v2);
    }
  }
  v7 = *(_QWORD*)(a1 + 40);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 48);
    if (v7 == v8) {
      goto LABEL_20;
    }
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt1(v9);
      }
      v8 -= 16;
    } while (v8 != v7);
    v10 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 48) = v7;
    v7 = v10;
    if (v10 != 0) {
    LABEL_20:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v7);
    }
  }
  v12 = *(_QWORD*)(a1 + 32);
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  v13 = *(_QWORD*)(a1 + 16);
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak_alt1(v13);
  }
  *(_QWORD*)a1 = GameData_1fe21b0;
  if (GameData_220f950 == a1) {
    GameData_220f950 = 0;
    GameData_2213fb0 = 0;
  }
}

void ObjectManager_e02040(_QWORD* a1)
{
  __int64 v2;

  if (a1 != nullptr) {
    ObjectManager_e02040((_QWORD*)*a1);
    ObjectManager_e02040((_QWORD*)a1[1]);
    SmoothPath_Destructor(a1 + 5);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, (__int64)a1);
  }
}

#pragma GCC visibility pop
