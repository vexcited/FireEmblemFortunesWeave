#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

const char* ReportMenuItem_Yes_Unknown3(__int64 a1);
bool ReportMenuItem_Yes_Unknown58(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_173eee0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_187f3c0(__int64);
__int64 HelpQuestInfo_12568a0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64
game_menu_anonymous_ReportMenuItem_Yes_ACall_closure_Invoke_187f620(__int64 a1);
__int64 game_menu_anonymous_ReportMenuItem_Yes_ACall_closure_Invoke_187f810(
    __int64 a1, __int64* a2);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 ProcList_9bd480(_QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_20fb6d8[])();
extern __int64 (*GameData_20fb758[])();
__int64 ReportMenuItem_Yes_187f3c0(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 GameRoutine_173eee0_alt1(__int64, _QWORD*,
                                 __int64) __asm__("GameRoutine_173eee0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* HelpQuestInfo_12568a0_alt1(__int64*) __asm__("HelpQuestInfo_12568a0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
_QWORD* ScoutBaseProc_f6c060(__int64, _BYTE**, const char*, __int64, __int64,
                             __int64);
__attribute__((swiftcall)) void GameSubquestData_1256d00(PSEUDO_X8, __int64);
__int64 BasicMenuCursor_16ddaa0(__int64 result, int);
__int64 GameRoutine_171cd00(__int64, __int64);
__int64 GameRoutine_171ee20(__int64, __int64);
__int64 GameRoutine_17a0340(__int64, __int64);
__int64 GameSubquestData_125b8e0(_QWORD*, const char*, unsigned __int8);
__int64 GameSubquestData_1267be0(__int64, __int64, __int64, _BYTE*);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern _UNKNOWN* GameData_2130b30;
extern __int64 (*GameData_20fb5d8[])();
extern __int64 (*GameData_20fb658[])();
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_2132650[6];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char** msg_MessageManager_empty_text__ptr;
void GameSubquestData_1267cf0(__int64, __int64, __int64*, __int64, _BYTE*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 ReportMenuItem_Yes_Unknown25(__int64 a1);
void game_menu_anonymous_ReportMenuItem_Yes_ACall_closure_Invoke(__int64 a1,
                                                                 __int64* a2);

const char* ReportMenuItem_Yes_Unknown3(__int64 a1)
{
  if (*(_BYTE*)(**(_QWORD**)(a1 + 88) + 112LL) != 0) {
    return "MID_QuestMenu_Report_Yes";
  }
  else {
    return "MID_QuestMenu_Delivery_Yes";
  }
}

__int64 ReportMenuItem_Yes_Unknown25(__int64 a1)
{
  _BYTE* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    _QWORD v30[4];
    _QWORD* v31;
  } v30_;
  struct {
    _QWORD v32[4];
    _QWORD* v33;
  } v32_;
  struct {
    __int64* v34;
    unsigned __int64 v35;
    unsigned __int64 v36;
    unsigned __int64 v37;
    __int64* v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
  } v34_;
  const char* v52;

  v1 = *(_BYTE**)(a1 + 88);
  if (v1[9] != 3) {
    return 1;
  }
  v2 = *(_QWORD*)v1;
  v3 = *(_QWORD*)(*(_QWORD*)v1 + 344LL);
  if (v3 == 0 || *(_WORD*)(v3 + 40) == 0) {
    if (*(_WORD*)(v2 + 320) != 0) {
      v10 = *(_QWORD*)(*(_QWORD*)(v2 + 328) + 8LL);
      if (v10 != 0 && (((0x10000000000LL << *(_BYTE*)(v10 + 72)) |
                        (1LL << *(_BYTE*)(v10 + 73))) &
                       0xFFBFFFFFFFA39FFFLL) != 0) {
      LABEL_22:
        v13 = *(_QWORD*)(a1 + 8);
        if (*(_QWORD*)(v13 + 152) != 0) {
          v14 = *(_QWORD*)(v13 + 152);
        }
        else {
          v14 = *(_QWORD*)(a1 + 8);
        }
        GameRoutine_171ee20(v14, (__int64)v1);
        return 9;
      }
    }
    if (*(_QWORD*)(v2 + 360) != 0) {
      v11 = *(_QWORD*)(a1 + 8);
      if (*(_QWORD*)(v11 + 152) != 0) {
        v12 = *(_QWORD*)(v11 + 152);
      }
      else {
        v12 = *(_QWORD*)(a1 + 8);
      }
      GameRoutine_171cd00(v12, (__int64)v1);
      return 9;
    }
    v15 = *(_QWORD*)(v2 + 208);
    if (v15 == 0 ||
        (game_GameModeData_instance_ == 0
             ? (v17 = a1, v16 = 0)
             : (v16 = *(_BYTE*)(game_GameModeData_instance_ + 15), v17 = a1),
         (v20 = (_BYTE*)GameSubquestData_125b8e0(*(_QWORD**)GameData_212c7b0[0],
                                                 *(const char**)(v15 + 8), v16),
          a1 = v17, v20 == nullptr) ||
             (v20[9] & 0xFE) != 2)) {
      ReportMenuItem_Yes_187f3c0(a1);
      return 13;
    }
    v21 = *(_QWORD*)(v17 + 8);
    if (*(_QWORD*)(v21 + 152) != 0) {
      v22 = *(_QWORD*)(v21 + 152);
    }
    else {
      v22 = *(_QWORD*)(v17 + 8);
    }
    v52 = "MID_QuestMenu_ExclusiveQuest_Confirm";
    v23 = *(_BYTE**)(*(_QWORD*)v20 + 32LL);
    if (v23 != nullptr && *v23 != 0) {
      v24 = a1;
      v34_.v39 = -1;
      v34_.v40 = -1;
      v34_.v41 = -1;
      v34_.v42 = -1;
      v25 = *msg_MessageManager_instance__ptr[0];
      v34_.v43 = -1;
      v34_.v44 = -1;
      v34_.v45 = -1;
      v34_.v46 = -1;
      v34_.v47 = -1;
      v34_.v48 = -1;
      v34_.v49 = -1;
      v34_.v50 = -1;
      v34_.v34 = GameData_212e348 + 2;
      v34_.v35 = 0xFFFF0001FFFF0000LL;
      v34_.v36 = 0xFFFF0004FFFF0002LL;
      v34_.v37 = 0xFFFF0006FFFF0005LL;
      v34_.v51 = 8;
      v34_.v38 = (__int64*)0xFFFF0008FFFF0007LL;
      v26 = GameRoutine_a4dbe0(v25, v23, 0);
      a1 = v24;
    }
    else {
      v26 = *msg_MessageManager_empty_text__ptr;
    }
    v34_.v34 = (__int64*)GameData_20fb5d8;
    v34_.v35 = a1;
    v32_.v33 = v32_.v32;
    v30_.v31 = v30_.v30;
    v34_.v38 = (__int64*)&v34_.v34;
    v32_.v32[0] = GameData_20fb658;
    v30_.v30[0] = GameData_20fb658;
    ScoutBaseProc_f6c060(v22, (_BYTE**)&v52, v26, (__int64)&v34_.v34,
                         (__int64)v32_.v32, (__int64)v30_.v30);
    if (v30_.v31 == v30_.v30) {
      v27 = 32;
    }
    else {
      if (v30_.v31 == nullptr) {
        goto LABEL_53;
      }
      v27 = 40;
    }
    (*(void (**)(__int64))(*v30_.v31 + v27))((__int64)v30_.v31);
  LABEL_53:
    if (v32_.v33 == v32_.v32) {
      v28 = 32;
    }
    else {
      if (v32_.v33 == nullptr) {
        goto LABEL_58;
      }
      v28 = 40;
    }
    (*(void (**)(__int64))(*v32_.v33 + v28))((__int64)v32_.v33);
  LABEL_58:
    if (v34_.v38 == (__int64*)&v34_.v34) {
      v29 = 32;
    }
    else {
      if (v34_.v38 == nullptr) {
        return 12;
      }
      v29 = 40;
    }
    (*(void (**)(__int64))(*v34_.v38 + v29))((__int64)v34_.v38);
    return 12;
  }
  v4 = a1;
  GameSubquestData_1256d00((void*)((__int64*)&v34_.v34), *(_QWORD*)(a1 + 88));
  v5 = v34_.v34;
  a1 = v4;
  if (v34_.v34 == (__int64*)v34_.v35) {
  LABEL_8:
    if (v34_.v34 != nullptr) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    (__int64)v34_.v34);
      a1 = v4;
    }
    v1 = *(_BYTE**)(a1 + 88);
    goto LABEL_22;
  }
  v6 = v34_.v34;
  while (1) {
    v7 = *v6++;
    if ((((0x10000000000LL << *(_BYTE*)(v7 + 72)) |
          (1LL << *(_BYTE*)(v7 + 73))) &
         0xFFBFFFFFFFA39FFFLL) == 0) {
      break;
    }
    if (v6 == (__int64*)v34_.v35) {
      goto LABEL_8;
    }
  }
  v18 = *(_QWORD*)(v4 + 8);
  if (*(_QWORD*)(v18 + 152) != 0) {
    v18 = *(_QWORD*)(v18 + 152);
  }
  GameRoutine_17a0340(v18, *(_QWORD*)(v4 + 88));
  if (v5 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  (__int64)v5);
  }
  return 9;
}

bool ReportMenuItem_Yes_Unknown58(__int64 a1)
{
  return *(_BYTE*)(*(_QWORD*)(a1 + 88) + 9LL) == 3;
}

__int64 ReportMenuItem_Yes_187f3c0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  _QWORD v10[2];
  _QWORD v11[4];
  _QWORD* v12;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v1 = *(_QWORD*)(v1 + 152);
  }
  v3 = ProcList_9bd480(*(_QWORD*)(v1 + 32));
  if (v3 == 0) {
    goto LABEL_14;
  }
  v4 = v3;
  v11[0] = GameData_20fb6d8;
  v11[1] = a1;
  v12 = v11;
  game_ProcList_Call_9bcfa0(v3, v11);
  if (v12 == v11) {
    v5 = 32;
    goto LABEL_8;
  }
  if (v12 != nullptr) {
    v5 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v12 + v5))((__int64)v12);
  }
  v11[0] = GameData_20fb758;
  v11[1] = a1;
  v12 = v11;
  game_ProcList_Call_9bcfa0(v4, v11);
  if (v12 == v11) {
    v6 = 32;
    goto LABEL_13;
  }
  if (v12 != nullptr) {
    v6 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v12 + v6))((__int64)v12);
  }
LABEL_14:
  snd_Fade_Fade_10c830(v11, 0.0f);
  snd_play_ff2d0((void*)(v10), "SE_SYS_Decide_M", "SE_SYS_Decide_M", v11, 0,
                 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v11);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 56LL))(a1, 1);
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 356LL) |= 4u;
  *(_BYTE*)(a1 + 78) = 1;
  v7 = *(_QWORD*)(a1 + 8);
  v8 = *(_DWORD*)(v7 + 356);
  *(_BYTE*)(v7 + 648) = 0;
  *(_DWORD*)(v7 + 356) = v8 | 2;
  snd_Fade_Fade_10c830(v11, 0.0f);
  snd_play_ff2d0((void*)(v10), "SE_SYS_Stamp", "SE_SYS_Stamp", v11, 0, 65537, 0,
                 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v11);
}

__int64

game_menu_anonymous_ReportMenuItem_Yes_ACall_closure_Invoke_187f620(__int64 a1)
{
  GameRoutine_187f3c0(*(_QWORD*)(a1 + 8));
  return 2;
}

__int64

game_menu_anonymous_ReportMenuItem_Yes_ACall_closure_Invoke_187f810(__int64 a1,
                                                                    __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[2];
  struct {
    __int64* v13;
    __int64 v14;
  } v13_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  LayoutAccessor_1560070((void*)(&v13_.v13),
                         (__int64*)(*(_QWORD*)(v2 + 8) + 848LL),
                         "L_Info/L_Stamp");
  if (v13_.v14 != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v13_.v14);
    if (v4 != 0) {
      v5 = v13_.v13;
    }
    else {
      v5 = nullptr;
    }
    if (v13_.v14 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v13_.v14);
    }
    if (v5 != nullptr) {
      v13_.v13 = v5;
      v13_.v14 = v4;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
      }
      v12[0] = "In";
      v12[1] = 2;
      GameRoutine_173eee0_alt1(v3, &v13_.v13, (__int64)v12);
      if (v13_.v14 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v13_.v14);
      }
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
  LayoutAccessor_1560070((void*)(&v13_.v13),
                         (__int64*)(*(_QWORD*)(v2 + 8) + 848LL), "L_Info");
  result = v13_.v14;
  if (v13_.v14 != 0) {
    v7 = std___1___shared_weak_count_lock_alt1(v13_.v14);
    v8 = v13_.v13;
    result = v13_.v14;
    if (v13_.v14 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v13_.v14);
    }
    if (v7 != 0 && v8 != nullptr) {
      v9 = HelpQuestInfo_12568a0_alt1(*(__int64**)(v2 + 88));
      if (v9 != nullptr) {
        v10 = (__int64)v9;
        v11 = ui_LayoutAccessor_FindTextBox_alt1(v8, (__int64)"T_Help");
        if (v11 != 0) {
          GameRoutine_156c5d0_alt1(v11, v10, 0);
        }
      }
      result = ui_LayoutAccessor_FindAlignment_alt1(v8, (__int64)"A_Help");
      if (result != 0) {
        result = Alignment_56b600_alt1(result);
      }
    }
    else if (v7 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      return std___1___shared_weak_count___release_weak_alt1(v7);
    }
  }
  return result;
}

void game_menu_anonymous_ReportMenuItem_Yes_ACall_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  int v5;
  unsigned __int8* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _BYTE v11[32];
    _BYTE* v12;
  } v11_;
  struct {
    __int64 v13;
    __int64 v14;
    __int64 v15;
  } v13_;
  _BYTE v16[4];

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *(_QWORD**)(v2 + 8);
  while (1) {
    v4 = (_QWORD*)v4[4];
    if (v4 == nullptr) {
      break;
    }
    if (*v4 == GameData_2132650[0] + 16) {
      v5 = 6;
      goto LABEL_6;
    }
  }
  v5 = 4;
LABEL_6:
  BasicMenuCursor_16ddaa0(*(_QWORD*)(v2 + 8), v5);
  v6 = *(unsigned __int8**)(v2 + 88);
  v13_.v14 = 0;
  v13_.v15 = 0;
  v11_.v12 = nullptr;
  v7 = v6[9];
  v13_.v13 = 0;
  if (v7 == 3) {
    v6[9] = 4;
    v16[0] = 1;
    if ((*(_BYTE*)(*(_QWORD*)v6 + 161LL) & 4) != 0) {
      GameSubquestData_1267be0((__int64)v6, (__int64)&v13_.v13,
                               (__int64)v11_.v11, v16);
    }
    else {
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
      GameSubquestData_1267cf0(v8, (__int64)v6, &v13_.v13, (__int64)v11_.v11,
                               v16);
      ProcInst_657850(v8, (__int64)GameData_2130b30, (__int64)"ProcReward", 1,
                      v3);
    }
    if (v11_.v12 == v11_.v11) {
      v9 = 32;
    }
    else {
      if (v11_.v12 == nullptr) {
        goto LABEL_15;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v11_.v12 + v9))((__int64)v11_.v12);
  }
LABEL_15:
  if (v13_.v13 != 0) {
    v13_.v14 = v13_.v13;
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v13_.v13);
  }
}

#pragma GCC visibility pop
