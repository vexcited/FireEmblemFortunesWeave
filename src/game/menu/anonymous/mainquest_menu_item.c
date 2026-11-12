#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_BaseQuestMenuItem_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MainquestMenuItem_DeletingDestructor(__int64 a1);
__int64 MainquestMenuItem_Unknown75(__int64 a1);
__int64 MainquestMenuItem_Unknown74(__int64 a1);
__int64 MainquestMenuItem_Destructor(__int64 a1);
__int64 MainquestMenuItem_DeletingDestructor_18466e0(__int64 a1);
bool MainquestMenuItem_Unknown13(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 game_menu_anonymous_1846100(__int64, __int64*, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 ui_LayoutAccessor_empty_;
__int64 MainquestMenuItem_DrawText(__int64 a1);

__int64 MainquestMenuItem_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = &game_menu_anonymous_BaseQuestMenuItem_vtable;
  v2 = *(_QWORD*)(a1 + 112);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, a1);
}

__int64 MainquestMenuItem_DrawText(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v13 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
    v6 = v13;
    if (v13 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_1560070((void*)(&v16_.v16), v6, "L_State");
  if (v16_.v17 != 0) {
    v7 = std___1___shared_weak_count_lock(v16_.v17);
    if (v7 != 0) {
      v8 = v7;
      if (v16_.v16 != 0) {
        LayoutAccessor_155e830(v16_.v16, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v8);
      }
    }
    if (v16_.v17 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v16_.v17);
    }
  }
  v9 = *(_QWORD*)(a1 + 56);
  if (v9 == 0) {
    goto LABEL_18;
  }
  v10 = std___1___shared_weak_count_lock(v9);
  if (v10 == 0) {
    goto LABEL_18;
  }
  v11 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v14 = v10;
    v15 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt1(v14);
    v11 = v15;
    if (v15 != nullptr) {
      return game_menu_anonymous_1846100(a1, v11, 1);
    }
    goto LABEL_18;
  }
  if (v11 == nullptr) {
  LABEL_18:
    v11 = &ui_LayoutAccessor_empty_;
  }
  return game_menu_anonymous_1846100(a1, v11, 1);
}

bool MainquestMenuItem_Unknown73(__int64 a1)
{
  return (*(_BYTE*)(a1 + 160) & 1) == 0;
}

__int64 MainquestMenuItem_Unknown74(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(a1 + 152) + 24LL) + 96LL;
}

__int64 MainquestMenuItem_Unknown75(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    return *(_QWORD*)(a1 + 32);
  }
  else {
    return a1 + 17;
  }
}

__int64 MainquestMenuItem_Destructor(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 96LL;
}

__int64 MainquestMenuItem_DeletingDestructor_18466e0(__int64 a1)
{
  if ((*(_BYTE*)(a1 - 128) & 1) != 0) {
    return *(_QWORD*)(a1 - 112);
  }
  else {
    return a1 - 127;
  }
}

bool MainquestMenuItem_Unknown13(__int64 a1)
{
  return (*(_BYTE*)(a1 + 16) & 1) == 0;
}

#pragma GCC visibility pop
