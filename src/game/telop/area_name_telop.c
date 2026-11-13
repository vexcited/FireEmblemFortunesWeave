#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1386f80(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
extern __int64 (*GameData_20c2a50[])();
extern __int64 GameData_2263c30;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 AreaNameTelop_Unknown33(__int64 a1);
__int64 AreaNameTelop_Destructor(__int64 a1);
__int64 AreaNameTelop_DeletingDestructor(__int64 a1);
__int64 TelopReliance_1386f80(_QWORD);
__int64 AreaNameTelop_Destructor_17824b0(__int64 a1);
__int64 AreaNameTelop_DeletingDestructor_1782540(__int64 a1);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
bool AreaNameTelop_1782140(__int64 a1);

bool AreaNameTelop_1782140(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  long double v3;
  __int64 v5;
  _BYTE v6[200];

  v1 = GameData_2263c30;
  if (GameData_2263c30 != 0) {
    GameRoutine_60a020(GameData_2263c30 + 840, a1);
    if ((*(_BYTE*)(v1 + 840) & 1) != 0) {
      v2 = *(_QWORD*)(v1 + 856);
    }
    else {
      v2 = v1 + 841;
    }
    LayoutAccessor_1562060(v1 + 168, "T_Title", v2);
    *(_DWORD*)(v1 + 832) = 1;
    LayoutAccessor_155e830(v1 + 168, 1);
    LODWORD(v3) = COERCE_UNSIGNED_INT((float)(1.0));
    LayoutAccessor_1562680(v1 + 168, "In", v3);
    snd_Fade_Fade_10c830(v6, 0.0);
    snd_play_ff2d0((void*)(&v5), "SE_SYS_Telop_AreaTelop",
                   "SE_SYS_Telop_AreaTelop", v6, 0, 65537, 0, 0.0, 1.0);
    snd_Fade_Destroy_Fade(v6);
  }
  return v1 != 0;
}

__int64 AreaNameTelop_Unknown33(__int64 a1)
{
  ui_LayoutAccessor_SetPriority(a1 + 168, 80);
  return GameRoutine_155e830(a1 + 168, 0);
}

__int64 AreaNameTelop_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(a1 + 840) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 856);
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
  *(_QWORD*)(a1 + 824) = GameData_20c2a50;
  if (GameData_2263c30 == a1) {
    GameData_2263c30 = 0;
  }
  return GameRoutine_1386f80(a1);
}

__int64 AreaNameTelop_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 840) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 856);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  *(_QWORD*)(a1 + 824) = GameData_20c2a50;
  if (GameData_2263c30 == a1) {
    GameData_2263c30 = 0;
  }
  GameRoutine_1386f80(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

__int64 AreaNameTelop_Destructor_17824b0(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *(_BYTE*)(a1 + 16);
  v3 = a1 - 824;
  if ((v2 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 32);
    if (v4 != 0) {
      v5 = v3;
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v4);
      v3 = v5;
    }
  }
  *(_QWORD*)a1 = GameData_20c2a50;
  if (GameData_2263c30 == v3) {
    GameData_2263c30 = 0;
  }
  return TelopReliance_1386f80(v3);
}

__int64 AreaNameTelop_DeletingDestructor_1782540(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1 - 824;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 32);
    if (v3 != 0) {
      v4 = a1;
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v3);
      a1 = v4;
    }
  }
  *(_QWORD*)a1 = GameData_20c2a50;
  if (GameData_2263c30 == v1) {
    GameData_2263c30 = 0;
  }
  TelopReliance_1386f80(v1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v1);
}

#pragma GCC visibility pop
