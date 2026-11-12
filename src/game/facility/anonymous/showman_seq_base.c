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
__int64 game_facility_anonymous_ShowmanSeqBase_TryReportBarQuestPre_alt1(
    __int64 a1) __asm__("game_facility_anonymous_ShowmanSeqBase_"
                        "TryReportBarQuestPre");
__int64 ShowmanSeqBase_fc95e0(__int64 result);
__int64 ShowmanSeqBase_fc9640_alt1(__int64 a1) __asm__("ShowmanSeqBase_fc9640");
__int64 ShowmanSeqBase_fc9720();
__int64 ShowmanSeqBase_fc97d0(__int64 result);
__int64 ShowmanSeqBase_fc9810_alt1(__int64 a1) __asm__("ShowmanSeqBase_fc9810");
__int64 ShowmanSeqBase_fc98e0_alt1(__int64 a1) __asm__("ShowmanSeqBase_fc98e0");
__int64
game_facility_anonymous_ShowmanSeqBase_TryReportBarQuestPre_closure_Invoke(
    __int64 result);
__int64 GameHr_187d880(__int64, __int64, __int64);
__int64 GameRoutine_efb6f0_alt1(__int64, __int64,
                                _QWORD*) __asm__("GameRoutine_efb6f0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void GameSubquestData_125af60_alt1(__int64, __int64*) __asm__(
    "GameSubquestData_125af60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_anonymous_ShowmanSeqBase_TryReportBarQuestPre(__int64 a1);
void ShowmanSeqBase_fc9640(__int64 a1);
void ShowmanSeqBase_fc9810(__int64 a1);
void ShowmanSeqBase_fc98e0(__int64 a1);

void game_facility_anonymous_ShowmanSeqBase_TryReportBarQuestPre(__int64 a1)
{
  __int64 v2;
  __int64** v3;
  __int64 v4;
  int v5;
  unsigned int v6;
  bool v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    __int64** v13;
    __int64** v14;
    __int64 v15;
  } v13_;

  *(_BYTE*)(a1 + 160) = 0;
  v13_.v14 = nullptr;
  v13_.v15 = 0;
  v13_.v13 = nullptr;
  GameSubquestData_125af60_alt1(*(_QWORD*)GameData_212c7b0[0],
                                (__int64*)&v13_.v13);
  v2 = (__int64)v13_.v13;
  if (v13_.v13 != v13_.v14) {
    v3 = v13_.v13;
    while (1) {
      v4 = **v3;
      v5 = *(unsigned __int8*)(v4 + 112);
      v6 = *(unsigned __int8*)(v4 + 113) - 3;
      v7 = v5 != 7 || v6 > 1;
      if (!v7 && (*((_BYTE*)*v3 + 9) & 0xFE) == 2) {
        break;
      }
      if (++v3 == v13_.v14) {
        goto LABEL_15;
      }
    }
    v8 = *v3;
    v11_.v11[0] = GameData_1ffd3a0;
    v11_.v11[1] = a1;
    v11_.v12 = v11_.v11;
    GameHr_187d880(a1, (__int64)v8, (__int64)v11_.v11);
    if (v11_.v12 == v11_.v11) {
      v9 = 32;
    }
    else {
      if (v11_.v12 == nullptr) {
      LABEL_14:
        v2 = (__int64)v13_.v13;
        *(_QWORD*)(a1 + 168) = *v3;
        goto LABEL_15;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v11_.v12 + v9))((__int64)v11_.v12);
    goto LABEL_14;
  }
LABEL_15:
  if (v2 != 0) {
    v13_.v14 = (__int64**)v2;
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v2);
  }
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

void ShowmanSeqBase_fc9640(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  _QWORD v6[3];

  v2 = *(_QWORD*)GameData_212dbf0[0];
  v3 = fw_memory_g_heap_manager_ptr;
  v4 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v6[0] = 41;
  v6[1] = 34;
  v6[2] = v4;
  strcpy(v4, "MID_LGV_1LED_Dagsion_Showman01_m03");
  GameRoutine_efb6f0_alt1(v2, a1, v6);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, (__int64)v4);
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

void ShowmanSeqBase_fc9810(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  _QWORD v6[3];

  v2 = *(_QWORD*)GameData_212dbf0[0];
  v3 = fw_memory_g_heap_manager_ptr;
  v4 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v6[0] = 41;
  v6[1] = 34;
  v6[2] = v4;
  strcpy(v4, "MID_LGV_1LED_Dagsion_Showman01_m04");
  GameRoutine_efb6f0_alt1(v2, a1, v6);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, (__int64)v4);
  *(_BYTE*)(a1 + 176) = 1;
}

void ShowmanSeqBase_fc98e0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  _QWORD v6[3];

  v2 = *(_QWORD*)GameData_212dbf0[0];
  v3 = fw_memory_g_heap_manager_ptr;
  v4 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v6[0] = 41;
  v6[1] = 34;
  v6[2] = v4;
  strcpy(v4, "MID_LGV_1LED_Dagsion_Showman01_m06");
  GameRoutine_efb6f0_alt1(v2, a1, v6);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, (__int64)v4);
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
