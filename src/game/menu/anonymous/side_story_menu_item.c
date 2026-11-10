#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1847120(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_menu_anonymous_BaseQuestMenuItem_vtable)();
extern __int64 GameData_2131920[17];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d630[11];
__int64 SideStoryMenuItem_Destructor(__int64 a1);
__int64 SideStoryMenuItem_DeletingDestructor(__int64 a1);
__int64 SideStoryMenuItem_ACall(__int64 a1);
bool SideStoryMenuItem_IsActive(__int64 a1);
bool SideStoryMenuItem_Unknown71(__int64 a1);

__int64 SideStoryMenuItem_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)(a1 + 144) = GameData_2131920[0] + 16;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 208) = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v2);
  }
  v6 = *(_QWORD*)(a1 + 176);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 184) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)a1 = &game_menu_anonymous_BaseQuestMenuItem_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = GameData_212d630[0] + 2;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 32);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v11);
    }
  }
  return result;
}

__int64 SideStoryMenuItem_DeletingDestructor(__int64 a1)
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

  v2 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)(a1 + 144) = GameData_2131920[0] + 16;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 208) = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v2);
  }
  v6 = *(_QWORD*)(a1 + 176);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 184) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)a1 = &game_menu_anonymous_BaseQuestMenuItem_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = GameData_212d630[0] + 2;
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 32);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v11);
    }
  }
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v13 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, a1);
}

__int64 SideStoryMenuItem_ACall(__int64 a1)
{
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 152) + 8LL) & 0xFE) == 4 ||
      (unsigned int)(*(_DWORD*)(a1 + 96) - 1) > 1) {
    return 0;
  }
  else {
    return GameRoutine_1847120();
  }
}

bool SideStoryMenuItem_IsActive(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 152) + 8LL) & 0xFE) != 4;
}

bool SideStoryMenuItem_Unknown71(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 152) + 8LL) & 0xFE) != 4 &&
         (unsigned int)(*(_DWORD*)(a1 + 96) - 1) < 2;
}

#pragma GCC visibility pop
