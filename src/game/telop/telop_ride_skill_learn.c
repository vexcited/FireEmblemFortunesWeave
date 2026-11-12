#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopRideSkillLearn_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopRideSkillLearn_Unknown56(__int64 a1);
__int64 TelopRideSkillLearn_Destructor(__int64 a1);
__int64 TelopRideSkillLearn_DeletingDestructor(__int64 a1);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);

__int64 TelopRideSkillLearn_Unknown56(__int64 a1)
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

__int64 TelopRideSkillLearn_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_telop_TelopRideSkillLearn_vtable;
  if ((*(_BYTE*)(a1 + 1176) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 1192);
    if (v1 != 0) {
      v2 = a1;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      a1 = v2;
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopRideSkillLearn_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_telop_TelopRideSkillLearn_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1176) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 1192);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

#pragma GCC visibility pop
