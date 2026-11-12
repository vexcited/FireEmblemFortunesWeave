#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_MasteryExpChange_vtable[])();
extern __int64 (*game_telop_TelopGrowMastery_vtable[])();
extern __int64 GameData_2131cf8[27];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130fa0[3];
__int64 TelopGrowMastery_Unknown56(__int64 a1);
__int64 TelopGrowMastery_Destructor(__int64 a1);
__int64 TelopGrowMastery_DeletingDestructor(__int64 a1);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);

__int64 TelopGrowMastery_Unknown56(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  __int128 v6;
  __int64 v7;

  v1 = *(unsigned __int8*)(a1 + 824);
  v2 = *(_QWORD*)(a1 + 832);
  v7 = 0;
  v6 = (__typeof__(v6)){0};
  if ((v1 & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = v1 >> 1;
  }
  if (v4 != 0) {
    *(_WORD*)((char*)&v6 + 9) = 28239;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOn";
  }
  else {
    DWORD2(v6) = 1717981035;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOff";
  }
  LayoutAccessor_1562cf0(a1 + 168, (const char*)&v6 + 1);
  return LayoutAccessor_1562cf0(a1 + 168, "Type_TitleOff");
}

__int64 TelopGrowMastery_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_telop_TelopGrowMastery_vtable;
  *(_QWORD*)(a1 + 1184) = game_gameui_GaugeUtil_MasteryExpChange_vtable;
  if (*(_QWORD*)(a1 + 1320) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)(a1 + 1184) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 1288) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 1304);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  if ((*(_BYTE*)(a1 + 1264) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 1280);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if ((*(_BYTE*)(a1 + 1240) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 1256);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopGrowMastery_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_telop_TelopGrowMastery_vtable;
  *(_QWORD*)(a1 + 1184) = GameData_2131cf8[0] + 16;
  if (*(_QWORD*)(a1 + 1320) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)(a1 + 1184) = GameData_2130fa0[0] + 2;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1288) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 1304);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 1264) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 1280);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 1240) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 1256);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, v7);
    }
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, a1);
}

#pragma GCC visibility pop
