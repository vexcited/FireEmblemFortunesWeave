#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1566d90(_QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_1567980(_QWORD);
__int64 GameRoutine_17a7290(_QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_667ea0(_QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20d0e78[])();
extern __int64 (*GameData_20d0ef8[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcMouseGuide_Unknown96(__int64 a1);
__int64 ProcMouseGuide_Unknown112(__int64 a1);
__int64 ProcMouseGuide_Unknown140(__int64 a1, __int64* a2);
__int64 ProcMouseGuide_Unknown142(__int64 result);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_717fc0(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1566d90(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 game_HashString(void);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1ab18ee;
extern __int64 GameData_2258178;
extern char* GameData_204d1d8[15];
__int64 ProcMouseGuide_Unknown13(__int64 result);
__int64 ProcMouseGuide_17a7290(__int64 a1);
__int64 game_menu_anonymous_ProcMouseGuide_StickRCall_closure_Invoke();
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 Alignment_56b600(_QWORD);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 GameRoutine_16e8d70(_QWORD, long double);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64
ProcMouseGuide_17a7290_alt1(_QWORD,
                            long double) __asm__("ProcMouseGuide_17a7290");
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_21318d0[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20d0e40[3];
extern char* msg_MessageManager_empty_text_;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ProcMouseGuide_Unknown141(__int64 a1);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcMouseGuide_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 unused_int0,
                                                         int* a1);
__n128 ProcMouseGuide_17a8800(__int64 a1, const char* a2, int a3, __int64 a4);

__int64 ProcMouseGuide_Unknown96(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD v7[4];
  _QWORD* v8;
  _QWORD v9[4];
  _QWORD* v10;

  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  if ((*(_BYTE*)(a1 + 1065) & 1) == 0) {
    GameRoutine_1567980(100);
  }
  v3 = v7;
  v7[0] = GameData_20d0e78;
  v7[1] = a1;
  v8 = v7;
  if (game_gameui_Footer_instance_ == 0) {
    goto LABEL_14;
  }
  v9[0] = GameData_20d0e78;
  v9[1] = a1;
  v10 = v9;
  GameRoutine_654050(v9, game_gameui_Footer_instance_ + 448);
  if (v10 == v9) {
    v4 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_11;
    }
    v4 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v10 + v4))(v10, v2);

LABEL_11:
  v3 = v8;
  if (v8 == v7) {
  LABEL_14:
    v5 = 32;
    goto LABEL_15;
  }
  if (v8 != nullptr) {
    v5 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v3 + v5))(v3, v2);
  }
  return GameRoutine_17a7290(a1);
}

__int64 ProcMouseGuide_Unknown112(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;
  _BYTE v13[32];
  _BYTE* v14;
  __int64 v15;
  __int64 v16;
  const char* v17;

  if (*(_BYTE*)(game_g_game_setting + 807) != 1 ||
      (*(_BYTE*)(game_g_game_setting + 804) & 1) == 0 &&
          (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
           (*(_BYTE*)(game_g_game_setting + 805) & 1) == 0 ||
           (*(_BYTE*)(game_g_game_setting + 806) & 1) == 0)) {
    if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
      return 1;
    }
    if ((*(_BYTE*)(game_g_game_setting + 900) & 1) == 0) {
      v7 = 1;
      if (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
          (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0) {
        return v7;
      }
      if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
        return 1;
      }
    }
  }
  v15 = v1;
  v16 = v2;
  v3 = *(_QWORD*)(a1 + 152);
  v17 = "MID_MouseCalibration_Message";
  v12 = v11;
  v11[0] = GameData_20d0ef8;
  v11[1] = a1;
  if (v3 == 0) {
    v3 = a1;
  }
  v4 = GameRoutine_667ea0(v3);
  if (v4 != 0) {
    v6 = v4;
    if (v12 != nullptr) {
      if (v12 == v11) {
        v14 = v13;
        (*(void (**)(_QWORD*, _BYTE*))(*v12 + 24LL))(v12, v13);
      }
      else {
        v14 = (_BYTE*)(*(__int64 (**)(_QWORD*, __int64))(*v12 + 16LL))(v12, v5);
      }
    }
    else {
      v14 = nullptr;
    }
    GameRoutine_6680e0(v13, v6 + 1248);
    if (v14 == v13) {
      v9 = 32;
    }
    else {
      if (v14 == nullptr) {
        goto LABEL_25;
      }
      v9 = 40;
    }
    (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v14 + v9))(v14, v5);
  }

LABEL_25:
  if (v12 == v11) {
    v10 = 32;
    goto LABEL_29;
  }
  if (v12 != nullptr) {
    v10 = 40;
  LABEL_29:
    (*(void (**)(_QWORD*, __int64))(*v12 + v10))(v12, v5);
  }
  return 12;
}

__int64 ProcMouseGuide_Unknown140(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      goto LABEL_50;
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        goto LABEL_51;
      }
      v14 = result;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      LODWORD(result) = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = &GameData_1a9f09e;
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_HelpDetail";
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    *(_DWORD*)(v16 + 20) = 2;
    *(_DWORD*)(v16 + 24) = result;
    memcpy(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, v8);
    }
  }
  else {
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)v5 = &GameData_1a9f09e;
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_HelpDetail";
    v7 = v5 + 40;
    *(_BYTE*)(v5 + 16) = 1;
    *(_DWORD*)(v5 + 20) = 2;
    *(_DWORD*)(v5 + 24) = result;
  }
  a2[1] = v7;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v19 = a2[1];
  v20 = a2[2];
  if (v19 >= v20) {
    v22 = *a2;
    v23 = v19 - *a2;
    v24 = 1 - 0x3333333333333333LL * (v23 >> 3);
    if (v24 > 0x666666666666666LL) {
      goto LABEL_50;
    }
    v25 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v20 - v22) >> 3);
    if (2 * v25 > v24) {
      v24 = 2 * v25;
    }
    if (v25 >= 0x333333333333333LL) {
      v26 = 0x666666666666666LL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 > 0x666666666666666LL) {
        goto LABEL_51;
      }
      v27 = result;
      v28 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v26,
                                           16, 0);
      LODWORD(result) = v27;
    }
    else {
      v28 = 0;
    }
    v29 = v28 + v23;
    *(_QWORD*)v29 = "MouseCalib";
    *(_QWORD*)(v29 + 8) = "MID_KeyHelp_MouseCalibration";
    *(_BYTE*)(v29 + 28) = 0;
    *(_QWORD*)(v29 + 32) = 0;
    *(_BYTE*)(v29 + 16) = 1;
    v30 = v28 + 40 * v26;
    v21 = v28 + v23 + 40;
    *(_DWORD*)(v29 + 20) = 11;
    *(_DWORD*)(v29 + 24) = result;
    memcpy(v28, v22, v23);
    *a2 = v28;
    a2[1] = v21;
    a2[2] = v30;
    if (v22 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v22);
    }
  }
  else {
    *(_BYTE*)(v19 + 28) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)v19 = "MouseCalib";
    *(_QWORD*)(v19 + 8) = "MID_KeyHelp_MouseCalibration";
    v21 = v19 + 40;
    *(_BYTE*)(v19 + 16) = 1;
    *(_DWORD*)(v19 + 20) = 11;
    *(_DWORD*)(v19 + 24) = result;
  }
  a2[1] = v21;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v32 = a2[1];
  v33 = a2[2];
  if (v32 < v33) {
    *(_BYTE*)(v32 + 28) = 0;
    *(_QWORD*)(v32 + 32) = 0;
    *(_QWORD*)v32 = "MouseReset";
    *(_QWORD*)(v32 + 8) = "MID_KeyHelp_MouseReset";
    v34 = v32 + 40;
    *(_BYTE*)(v32 + 16) = 1;
    *(_DWORD*)(v32 + 20) = 27;
    *(_DWORD*)(v32 + 24) = result;
    goto LABEL_49;
  }
  v35 = *a2;
  v36 = v32 - *a2;
  v37 = 1 - 0x3333333333333333LL * (v36 >> 3);
  if (v37 > 0x666666666666666LL) {
  LABEL_50:
    GameRoutine_874520(result);
  }
  v38 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v33 - v35) >> 3);
  if (2 * v38 > v37) {
    v37 = 2 * v38;
  }
  if (v38 >= 0x333333333333333LL) {
    v39 = 0x666666666666666LL;
  }
  else {
    v39 = v37;
  }
  if (v39 != 0) {
    if (v39 <= 0x666666666666666LL) {
      v40 = result;
      v41 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v39,
                                           16, 0);
      LODWORD(result) = v40;
      goto LABEL_45;
    }
  LABEL_51:
    GameRoutine_60a210(result);
  }
  v41 = 0;

LABEL_45:
  v42 = v41 + v36;
  *(_QWORD*)v42 = "MouseReset";
  *(_QWORD*)(v42 + 8) = "MID_KeyHelp_MouseReset";
  *(_BYTE*)(v42 + 28) = 0;
  *(_QWORD*)(v42 + 32) = 0;
  *(_BYTE*)(v42 + 16) = 1;
  v43 = v41 + 40 * v39;
  v34 = v41 + v36 + 40;
  *(_DWORD*)(v42 + 20) = 27;
  *(_DWORD*)(v42 + 24) = result;
  result = memcpy(v41, v35, v36);
  *a2 = v41;
  a2[1] = v34;
  a2[2] = v43;
  if (v35 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v35);
  }

LABEL_49:
  a2[1] = v34;
  return result;
}

__int64 ProcMouseGuide_Unknown141(__int64 a1)
{
  long double v2;
  long double v3;
  __int64 v4;
  char* v5;
  long double v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 i;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  char* v22;
  const char* v23;
  char v24;
  int v25;
  int v26;
  char v27;
  __int64 v28;

  if (*(_BYTE*)(a1 + 1065) == 1) {
    ui_LayoutAccessor_SetPaneVisible(a1 + 848, "L_Header", 0);
    *(__n128*)&v2 = ui_LayoutAccessor_SetPaneVisible(a1 + 848, "L_Footer", 0);
    GameRoutine_16e8d70(a1 + 1056, v2);
    return ProcMouseGuide_17a7290_alt1(a1, v3);
  }
  LayoutAccessor_1560070((void*)(&v22), a1 + 848, "L_Header");
  if (v23 != nullptr) {
    v4 = std___1___shared_weak_count_lock(v23);
    v5 = v22;
    if (v23 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1();
    }
    if (v4 != 0 && v5 != nullptr) {
      LayoutAccessor_1562cf0(v5, "TitleOn");
      LayoutAccessor_1562cf0(v5, "Default");
      *(__n128*)&v6 = ui_LayoutAccessor_SetPaneVisible(v5, "A_Stock", 0);
      v7 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)a1 + 1112LL))(a1,
                                                                          v6);
      LayoutAccessor_1562060(v5, "T_Title", v7);
      v8 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 40LL))(a1 + 1056);
      LayoutAccessor_1562060(v5, "T_Help", v8);
    }
    else if (v4 == 0) {
      goto LABEL_12;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1();
    }
  }
LABEL_12:
  LayoutAccessor_1560070((void*)(&v22), a1 + 848, "L_Footer");
  if (v23 != nullptr) {
    v9 = std___1___shared_weak_count_lock(v23);
    v10 = v22;
    if (v23 != nullptr) {
      *(__n128*)&v3 = std___1___shared_weak_count___release_weak_alt1();
    }
    if (v9 != 0 && v10 != nullptr) {
      v11 = ui_LayoutAccessor_FindPane(v10, "A_KeyHelp");
      if (v11 != 0) {
        v12 = __dynamic_cast(v11, GameData_212d670[0], GameData_21318d0[0], 0);
        if (v12 != 0) {
          v13 = *(_QWORD*)(v12 + 40);
          for (i = v12; v13 != v12 + 32; v13 = *(_QWORD*)(v13 + 8)) {
            *(_BYTE*)(v13 + 80) &= ~1u;
          }
          v15 = LayoutAccessor_155fbe0(v10, "L_KeyHelp00");
          v16 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
          v27 = 0;
          v28 = 0;
          v22 = "MouseCalib";
          v23 = "MID_KeyHelp_MouseCalibration";
          v24 = 1;
          v25 = 11;
          v26 = v16;
          GameRoutine_1593d90(v15, &v22);
          v17 = LayoutAccessor_155fbe0(v10, "L_KeyHelp01");
          v18 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
          v24 = 1;
          v27 = 0;
          v28 = 0;
          v22 = &GameData_1a9f09e;
          v23 = "MID_KeyHelp_HelpDetail";
          v25 = 2;
          v26 = v18;
          GameRoutine_1593d90(v17, &v22);
          v19 = LayoutAccessor_155fbe0(v10, "L_KeyHelp02");
          v20 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
          v24 = 1;
          v27 = 0;
          v28 = 0;
          v22 = "MouseReset";
          v23 = "MID_KeyHelp_MouseReset";
          v25 = 27;
          v26 = v20;
          GameRoutine_1593d90(v19, &v22);
          Alignment_56b600(i);
        }
      }
    }
    else if (v9 == 0) {
      return ProcMouseGuide_17a7290_alt1(a1, v3);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      *(__n128*)&v3 = std___1___shared_weak_count___release_weak_alt1();
    }
  }
  return ProcMouseGuide_17a7290_alt1(a1, v3);
}

__int64 ProcMouseGuide_Unknown142(__int64 result)
{
  if (*(_BYTE*)(result + 1065) == 1) {
    if (game_gameui_Header_instance_ != 0) {
      GameRoutine_1566d90(game_gameui_Header_instance_, 0);
    }
    result = game_gameui_Footer_instance_;
    if (game_gameui_Footer_instance_ != 0) {
      return GameRoutine_1567000(game_gameui_Footer_instance_, 0);
    }
  }
  return result;
}

__int64 ProcMouseGuide_Unknown13(__int64 result)
{
  if (*(_BYTE*)(result + 9) == 1) {
    if (game_gameui_Header_instance_ != 0) {
      LayoutAccessor_1566d90(game_gameui_Header_instance_, 0);
    }
    result = game_gameui_Footer_instance_;
    if (game_gameui_Footer_instance_ != 0) {
      return LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
    }
  }
  return result;
}

__int64 ProcMouseGuide_17a7290(__int64 a1)
{
  char v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __int64 v11;

  if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
      ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
       *(_BYTE*)(game_g_game_setting + 940) == 1 &&
           (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
           (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_8;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) == 1) {
    if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
    LABEL_8:
      v1 = 0;
      goto LABEL_10;
    }
    v1 = 1;
    if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
        (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
      v1 = *(_BYTE*)(game_g_game_setting + 902) ^ 1;
    }
  }
  else {
    v1 = 1;
  }
LABEL_10:
  if (*(_BYTE*)(a1 + 1065) == 1) {
    GameRoutine_1567590("MouseCalib", v1 & 1);
    return GameRoutine_1567590("MouseReset", v1 & 1);
  }
  GameRoutine_1560070((void*)&v10, a1 + 848, "L_Footer");
  result = v11;
  if (v11 != 0) {
    v3 = std___1___shared_weak_count_lock(v11);
    v4 = v10;
    result = v11;
    if (v11 != 0) {
      result = std___1___shared_weak_count___release_weak();
    }
    if (v3 != 0 && v4 != 0) {
      v5 = GameData_204d1d8[v1 & 1];
      v6 = LayoutAccessor_155fbe0(v4, "L_KeyHelp00");
      LODWORD(v7) = 1.0;
      LayoutAccessor_1562680(v6, v5, v7);
      v8 = LayoutAccessor_155fbe0(v4, "L_KeyHelp02");
      LODWORD(v9) = 1.0;
      result = LayoutAccessor_1562680(v8, v5, v9);
    }
    else if (v3 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak();
    }
  }
  return result;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcMouseGuide_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 unused_int0,
                                                         int* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v3;
  __int64 v4;
  char* v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v3 = GameData_20d0e40[*a1];
  if (*v3 != 0) {
    v14 = -1;
    v15 = -1;
    v16 = -1;
    v17 = -1;
    v4 = *msg_MessageManager_instance__ptr[0];
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v11[0] = msg_TagSelector_vtable;
    v11[1] = 0xFFFF0001FFFF0000LL;
    v11[2] = 0xFFFF0004FFFF0002LL;
    v11[3] = 0xFFFF0006FFFF0005LL;
    v26 = 8;
    v12 = -65529;
    v13 = -65528;
    v5 = (char*)GameRoutine_a4dbe0(v4, v3, 0, v11);
  }
  else {
    v5 = msg_MessageManager_empty_text_;
  }
  result = strlen(v5);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v7 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a2[1] = v7;
    a2[2] = v10;
    *a2 = v9 | 1;
    v8 = (char*)v10;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v8 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_13;
    }
  }
  result = memmove(v8, v5, v7);
LABEL_13:
  v8[v7] = 0;
  {
    result;
    return;
  }
}

__n128 ProcMouseGuide_17a8800(__int64 a1, const char* a2, int a3, __int64 a4)
{
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  char* v11;
  __n128 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[2];
  char* v19;

  v6 = game_util_Format("%s%02d", a2, a3);
  v7 = strlen(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v7);
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10,
                                               16, 0);
    v18[1] = v8;
    v19 = v9;
    v18[0] = v10 | 1;
    goto LABEL_9;
  }
  LOBYTE(v18[0]) = 2 * v7;
  v9 = (char*)v18 + 1;
  if (v7 != 0) {
  LABEL_9:
    memmove(v9, v6, v8);
  }
  v9[v8] = 0;
  if ((v18[0] & 1) != 0) {
    v11 = v19;
  }
  else {
    v11 = (char*)v18 + 1;
  }
  LayoutAccessor_1560070((void*)(&v16), a1 + 848, v11);
  if (v17 != 0) {
    v13 = std___1___shared_weak_count_lock(v17);
    v14 = v16;
    if (v17 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1();
    }
    if (v13 != 0 && v14 != 0) {
      LayoutAccessor_1562cf0(v14, a4);
    }
    else if (v13 == 0) {
      goto LABEL_21;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      result = std___1___shared_weak_count___release_weak_alt1();
      if ((v18[0] & 1) == 0) {
        return result;
      }
      goto LABEL_22;
    }
  }
LABEL_21:
  if ((v18[0] & 1) == 0) {
    return result;
  }
LABEL_22:
  if (v19 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v15);
  }
  return result;
}

__int64 game_menu_anonymous_ProcMouseGuide_StickRCall_closure_Invoke()
{
  __int64 v0;
  _QWORD v2[2];

  v0 = GameData_2258178;
  if (GameData_2258178 != 0) {
    v2[1] = &GameData_1ab18ee;
    v2[0] = game_HashString();
    GameRoutine_717fc0(v2, 0);
    *(_DWORD*)(v0 + 564) = 0;
  }
  return 2;
}

#pragma GCC visibility pop
