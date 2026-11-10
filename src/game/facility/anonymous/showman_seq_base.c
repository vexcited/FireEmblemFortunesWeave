#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int GameData_222e468;
__int64 GameRoutine_1479fc0(void);
__int64 GameRoutine_187d290(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_187d880(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_efb6f0(_QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125af60(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ffd3a0[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_21c9718;
extern __int64 GameData_21f3ff8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 game_facility_anonymous_ShowmanSeqBase_TryReportBarQuestPre(__int64 a1);
__int64 ShowmanSeqBase_fc95e0(__int64 result);
__int64 ShowmanSeqBase_fc9640(__int64 a1);
__int64 ShowmanSeqBase_fc9720();
__int64 ShowmanSeqBase_fc97d0(__int64 result);
__int64 ShowmanSeqBase_fc9810(__int64 a1);
__int64 ShowmanSeqBase_fc98e0(__int64 a1);
__int64
game_facility_anonymous_ShowmanSeqBase_TryReportBarQuestPre_closure_Invoke(
    __int64 result);

__int64 game_facility_anonymous_ShowmanSeqBase_TryReportBarQuestPre(__int64 a1)
{
  __int64 result;
  __int64** v3;
  __int64** v4;
  __int64 v5;
  int v6;
  unsigned int v7;
  bool v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  __int64** v14;
  __int64** v15;
  __int64 v16;

  *(_BYTE*)(a1 + 160) = 0;
  v15 = nullptr;
  v16 = 0;
  v14 = nullptr;
  result = GameSubquestData_125af60(*(_QWORD*)GameData_212c7b0[0], &v14);
  v3 = v14;
  if (v14 != v15) {
    v4 = v14;
    while (1) {
      v5 = **v4;
      v6 = *(unsigned __int8*)(v5 + 112);
      v7 = *(unsigned __int8*)(v5 + 113) - 3;
      v8 = v6 != 7 || v7 > 1;
      if (!v8 && (*((_BYTE*)*v4 + 9) & 0xFE) == 2) {
        break;
      }
      if (++v4 == v15) {
        goto LABEL_15;
      }
    }
    v9 = *v4;
    v12[0] = GameData_1ffd3a0;
    v12[1] = a1;
    v13 = v12;
    GameRoutine_187d880(a1, v9, v12);
    result = (__int64)v13;
    if (v13 == v12) {
      v10 = 32;
    }
    else {
      if (v13 == nullptr) {
      LABEL_14:
        v3 = v14;
        *(_QWORD*)(a1 + 168) = *v4;
        goto LABEL_15;
      }
      v10 = 40;
    }
    result = (*(__int64 (**)(void))(*v13 + v10))();
    goto LABEL_14;
  }
LABEL_15:
  if (v3 != nullptr) {
    v15 = v3;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  return result;
}

__int64 ShowmanSeqBase_fc95e0(__int64 result)
{
  int v1;
  __int64 v2;

  if (*(_BYTE*)(result + 160) != 0) {
    v1 = 4;
  }
  else {
    v1 = 6;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

__int64 ShowmanSeqBase_fc9640(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  _QWORD v7[3];

  v2 = *(_QWORD*)GameData_212dbf0[0];
  v3 = fw_memory_g_heap_manager_ptr;
  v4 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v7[0] = 41;
  v7[1] = 34;
  v7[2] = v4;
  strcpy(v4, "MID_LGV_1LED_Dagsion_Showman01_m03");
  GameRoutine_efb6f0(v2, a1, v7);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
}

__int64 ShowmanSeqBase_fc9720()
{
  unsigned int v0;
  __int64 v1;
  __int64** v2;
  __int64** v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  bool v8;
  int v9;

  if (GameData_21c9718 == 0) {
    goto LABEL_15;
  }
  v0 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v0 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v1 = GameData_21c9718 + 136LL * v0;
  v2 = *(__int64***)(v1 + 72);
  v3 = *(__int64***)(v1 + 80);
  if (v2 == v3) {
  LABEL_15:
    v9 = 1;
  }
  else {
    v4 = 0;
    do {
      v5 = **v2;
      v6 = *(unsigned __int8*)(v5 + 112);
      v7 = *(unsigned __int8*)(v5 + 113);
      v8 = v6 == 7 && v7 == 3;
      if (v8 && *((_BYTE*)*v2 + 9) == 4) {
        ++v4;
      }
      ++v2;
    } while (v2 != v3);
    v9 = v4 + 1;
  }
  if (GameData_21f3ff8 != 0) {
    if (v9 <= 1) {
      v9 = 1;
    }
    if (v9 >= 5) {
      v9 = 5;
    }
    *(_DWORD*)(GameData_21f3ff8 + 12) = v9;
  }
  return GameRoutine_1479fc0();
}

__int64 ShowmanSeqBase_fc97d0(__int64 result)
{
  __int64 v1;
  _QWORD v2[3];

  v1 = *(_QWORD*)(result + 168);
  if (v1 != 0) {
    memset(v2, 0, sizeof(v2));
    return GameRoutine_187d290(result, v1, v2);
  }
  return result;
}

__int64 ShowmanSeqBase_fc9810(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64 result;
  _QWORD v7[3];

  v2 = *(_QWORD*)GameData_212dbf0[0];
  v3 = fw_memory_g_heap_manager_ptr;
  v4 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v7[0] = 41;
  v7[1] = 34;
  v7[2] = v4;
  strcpy(v4, "MID_LGV_1LED_Dagsion_Showman01_m04");
  GameRoutine_efb6f0(v2, a1, v7);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
  *(_BYTE*)(a1 + 176) = 1;
  return result;
}

__int64 ShowmanSeqBase_fc98e0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  _QWORD v7[3];

  v2 = *(_QWORD*)GameData_212dbf0[0];
  v3 = fw_memory_g_heap_manager_ptr;
  v4 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v7[0] = 41;
  v7[1] = 34;
  v7[2] = v4;
  strcpy(v4, "MID_LGV_1LED_Dagsion_Showman01_m06");
  GameRoutine_efb6f0(v2, a1, v7);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
}

__int64

game_facility_anonymous_ShowmanSeqBase_TryReportBarQuestPre_closure_Invoke(
    __int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 160LL) = 1;
  return result;
}

void __attribute__((noreturn)) ShowmanSeqBase_DeletingDestructor()
{
  __udf(0x8002u);
}

#pragma GCC visibility pop
