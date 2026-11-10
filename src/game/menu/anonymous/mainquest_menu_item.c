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
