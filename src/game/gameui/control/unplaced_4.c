#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* MenuItemMorphName_18bb1d0(__int64);
_QWORD* MenuItemMorphSkill_18bb8b0(_QWORD*);
__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void Layout_1363f00(PSEUDO_X8, __int64, __int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 Alignment_56b600(__int64 result);
__int64 GameRoutine_1896a00(__int64 result, _QWORD*);
__int64 GameRoutine_18bb600(__int64 result, _QWORD*);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 MenuItemLegionGambit_1897250(__int64);
__int64 MenuItemMorph_18bc9c0(__int64, _DWORD*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_GetPartsLayout(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameHr_6fb960(__int64);
char* GameHr_6fbd80(__int64, int);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
extern _UNKNOWN* GameData_212c8a8;
extern _UNKNOWN* GameData_212dfd0;
extern __int64 (*game_gameui_control_MenuItemLegionGambit_vtable[])();
extern __int64 (*game_gameui_control_MenuItemMorphName_vtable[])();
extern __int64 (*game_gameui_control_MenuItemMorphRage_vtable[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_212e348;
extern __int64* GameData_21320b8[5];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
int __cxa_guard_acquire(__int64);
void GameHr_157e0f0(__int64, const char*, const char*);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void GameRoutine_158e7e0(__int64, unsigned int*, __int64, char);
void GameRoutine_1896ee0();
void MenuItemInfo_18be1b0(__int64, const char*, const char*);
void __cxa_guard_release(__int64);
void game_gameui_157e3a0(__int64*, unsigned int*, unsigned int, _QWORD*);
void game_gameui_Util_SetArtsSkillStatus(__int64, _DWORD*, __int64, char, char);
void game_gameui_Util_SetGambitSkillStatus(__int64, _DWORD*, __int64,
                                           const char*);
void game_gameui_control_18a5bc0(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
__int64 game_gameui_control_1897520(__int64 a1);
void game_gameui_control_18a7ae0(__int64 a1, unsigned int* a2, _QWORD* a3,
                                 char a4, int a5, _BYTE* a6, char a7);
void game_gameui_control_18a8b50(__int64 a1, int a2);
__int64 game_gameui_control_18bbf20(__int64 a1);

__int64 game_gameui_control_1897520(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  char v25;
  struct {
    const char* v27;
    __int64 v28;
  } v27_;
  struct {
    const char* v29;
    __int64 v30;
  } v29_;

  v2 = LayoutAccessor_155fbe0((__int64*)(a1 + 88), "L_Legion_Gambit_Info");
  GameHr_157e0f0((__int64)v2, "MID_BtlMenu_Gambit", "MID_Sys_Remaining");
  v29_.v29 = "L_MenuItem_Name";
  v29_.v30 = 15;
  GameRoutine_15d4100((void*)(&v27_.v27), (__int64*)(a1 + 88), &v29_.v29);
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  v5 = v27_.v28;
  v6 = v4;
  v29_.v29 = v27_.v27;
  v29_.v30 = v27_.v28;
  if (v27_.v28 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v27_.v28 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1896a00(v4, &v29_.v29);
    std___1___shared_weak_count___release_weak(v5);
  }
  else {
    GameRoutine_1896a00(v4, &v29_.v29);
  }
  v7 = *(_QWORD*)(a1 + 1080);
  *(_QWORD*)(a1 + 1080) = v6;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  if (v27_.v28 != 0) {
    std___1___shared_weak_count___release_weak(v27_.v28);
  }
  v27_.v27 = "L_MenuItem_Gambit";
  v27_.v28 = 17;
  GameRoutine_15d4100((void*)(&v29_.v29), (__int64*)(a1 + 88), &v27_.v27);
  v8 = fw_memory_HeapManager_Allocate(*v3, 40, 16, 0);
  v9 = v29_.v29;
  v10 = v29_.v30;
  v11 = v8;
  if (v29_.v30 != 0) {
    v12 = v29_.v30;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29_.v30 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v11 + 16) = v10;
    *(_QWORD*)v11 = game_gameui_control_MenuItemLegionGambit_vtable;
    *(_QWORD*)(v11 + 8) = v9;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v11 + 24) = 0;
    *(_BYTE*)(v11 + 32) = 0;
    v13 = std___1___shared_weak_count_lock(v12);
    if (v13 != 0) {
      v14 = *(_QWORD**)(v11 + 8);
      if (v14 != nullptr) {
        v15 = (_QWORD*)v14[131];
        v16 = v14 + 130;
        if (v15 == v14 + 130) {
          goto LABEL_14;
        }
        while (v15[2] != v11) {
          v15 = (_QWORD*)v15[1];
          if (v15 == v16) {
            goto LABEL_14;
          }
        }
        if (v15 == v16) {
        LABEL_14:
          v17 = *v3;
          v18 = v13;
          v19 = (_QWORD*)fw_memory_HeapManager_Allocate(v17, 24, 16, 0);
          v19[1] = v16;
          v19[2] = v11;
          v13 = v18;
          v20 = v14[130];
          *v19 = v20;
          *(_QWORD*)(v20 + 8) = v19;
          v14[130] = v19;
          ++v14[132];
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v21 = v13;
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v21);
      }
    }
    std___1___shared_weak_count___release_weak(v10);
  }
  else {
    *(_QWORD*)(v8 + 16) = 0;
    *(_QWORD*)(v8 + 24) = 0;
    *(_BYTE*)(v8 + 32) = 0;
    *(_QWORD*)v8 = game_gameui_control_MenuItemLegionGambit_vtable;
    *(_QWORD*)(v8 + 8) = v9;
  }
  v22 = *(_QWORD*)(a1 + 1088);
  *(_QWORD*)(a1 + 1088) = v11;
  if (v22 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
  }
  if (v29_.v30 != 0) {
    std___1___shared_weak_count___release_weak(v29_.v30);
  }
  v23 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88),
                                   (__int64)"L_GambitRange") == 0;
  v24 = *(_QWORD*)(a1 + 1080);
  v25 = !v23;
  *(_BYTE*)(a1 + 1076) = v25;
  ((void (*)(__int64))GameRoutine_1896ee0)(v24);
  MenuItemLegionGambit_1897250(*(_QWORD*)(a1 + 1088));
  return ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_GambitRange", 0);
}

void game_gameui_control_18a7ae0(__int64 a1, unsigned int* a2, _QWORD* a3,
                                 char a4, int a5, _BYTE* a6, char a7)
{

#pragma clang fp contract(off)
  __int64* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  int v32;
  int v33;
  char v34;
  const char* v35;
  __int64* v36;
  const char* v37;
  const char* v38;
  const char* v39;
  const char* v40;
  const char* v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  float v48;
  _DWORD v49[2];
  struct {
    _QWORD v50[2];
    unsigned __int64 v51;
    unsigned __int64 v52;
    int v53;
    int v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
  } v50_;

  v13 = GameData_212c880[0];
  if ((*a2 & 0xFFF) != 0) {
    v14 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                         8LL * (*a2 & 0xFFF)) +
                              104LL);
  }
  else {
    v14 = 0;
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  if ((a4 & 1) != 0) {
    if (a6 != nullptr) {
      LayoutAccessor_1562cf0(a1 + 88, "Icon");
      v15 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88), (__int64)"Icon");
      if (v15 != 0) {
        v16 = __dynamic_cast(v15, GameData_212d670[0], GameData_212d678[0], 0);
      }
      else {
        v16 = 0;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v16, 0, 7u, a6);
      ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"T_Txt",
                                       (*a2 & 0xFFF) != 0);
      if ((*a2 & 0xFFF) != 0) {
        v17 = GameHr_6fb960(
            *(_QWORD*)(*(_QWORD*)(*v13 + 64) + 8LL * (*a2 & 0xFFF)));
        if (v17 != nullptr) {
          v18 = (__int64)v17;
          v19 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                              (__int64)"T_Txt");
          if (v19 != 0) {
            GameRoutine_156c5d0(v19, v18, 0);
          }
        }
      }
      LayoutAccessor_1562cf0(a1 + 88, "NumNone");
    }
    else {
      LayoutAccessor_1562cf0(a1 + 88, "L_Icon");
      game_gameui_157e3a0((__int64*)(a1 + 88), a2,
                          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v13 + 64) +
                                                         8LL * (*a2 & 0xFFF)) +
                                              104LL),
                          a3);
    }
  }
  v20 = *a2;
  v21 = msg_MessageManager_instance__ptr[0];
  v22 = GameData_212e348;
  if ((*a2 & 0xFFF) != 0 && *(_QWORD*)((v23 = *(_QWORD*)(*(_QWORD*)(*v13 + 64) +
                                                         8LL * (v20 & 0xFFF))) +
                                       48) != 0) {
    v24 = GameData_212e348;
    v25 = GameHr_6fbd80(v23,
                        *(unsigned __int8*)(v23 + 304) - (HIBYTE(v20) & 0x1F));
    if (v25 == nullptr) {
      goto LABEL_22;
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
    v26 = *v21;
    v24 = v22;
    v50_.v55 = -1;
    v50_.v56 = -1;
    v50_.v57 = -1;
    v50_.v58 = -1;
    v50_.v59 = -1;
    v50_.v60 = -1;
    v50_.v61 = -1;
    v50_.v62 = -1;
    v50_.v63 = -1;
    v50_.v64 = -1;
    v50_.v65 = -1;
    v50_.v66 = -1;
    v50_.v50[0] = v22 + 2;
    v50_.v50[1] = 0xFFFF0001FFFF0000LL;
    v50_.v51 = 0xFFFF0004FFFF0002LL;
    v50_.v52 = 0xFFFF0006FFFF0005LL;
    v50_.v67 = 8;
    v50_.v53 = -65529;
    v50_.v54 = -65528;
    v25 = GameRoutine_a4dbe0(v26, "MID_Sys_ValueEmptyLong", 0);
    if (v25 == nullptr) {
      goto LABEL_22;
    }
  }
  v27 = (__int64)v25;
  v28 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v28 != 0) {
    GameRoutine_156c5d0(v28, v27, 0);
  }
LABEL_22:
  v29 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v29 != 0) {
    v30 = v29;
    v31 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v31 != nullptr) {
      ui_text_190a0c0((float*)v50_.v50, (__int64)v49, &v48, v31, v31[27]);
      v32 = v49[0];
      v33 = v49[1];
    }
    else {
      v32 = 0;
      v33 = 0;
    }
    v34 = *(_BYTE*)(v30 + 88);
    *(_DWORD*)(v30 + 80) = v32;
    *(_DWORD*)(v30 + 84) = v33;
    *(_BYTE*)(v30 + 88) = v34 | 0x10;
  }
  if ((a4 & 1) != 0) {
    v35 = "InfoTitleOn";
  }
  else {
    v35 = "InfoTitleOff";
  }
  LayoutAccessor_1562cf0(a1 + 88, v35);
  LayoutAccessor_1562cf0(a1 + 88, "StatusDetailOff");
  if (v14 == 5) {
    LayoutAccessor_1562cf0(a1 + 88, "Status03");
    if ((a4 & 1) != 0) {
      v40 = "Wdw_TitleOn_Status04";
    }
    else {
      v40 = "Wdw_TitleOff_Status04";
    }
    LayoutAccessor_1562cf0(a1 + 88, v40);
    game_gameui_Util_SetGambitSkillStatus(a1 + 88, a2, (__int64)a3, nullptr);
    v36 = v24;
    if (a5 < 2) {
      goto LABEL_58;
    }
  }
  else {
    v36 = v24;
    if (v14 == 3) {
      LayoutAccessor_1562cf0(a1 + 88, "Status05");
      if ((a4 & 1) != 0) {
        v39 = "Wdw_TitleOn_Status08";
      }
      else {
        v39 = "Wdw_TitleOff_Status08";
      }
      LayoutAccessor_1562cf0(a1 + 88, v39);
      *(_BYTE*)(a1 + 1060) = 1;
      GameRoutine_158e7e0(a1 + 88, a2, (__int64)a3, 1);
      if (a5 < 2) {
        goto LABEL_58;
      }
    }
    else if (v14 == 2) {
      if ((a7 & 1) != 0) {
        v37 = "Status03";
      }
      else {
        v37 = "Status04";
      }
      LayoutAccessor_1562cf0(a1 + 88, v37);
      if ((a4 & 1) != 0) {
        v38 = "Wdw_TitleOn_Status08";
      }
      else {
        v38 = "Wdw_TitleOff_Status08";
      }
      LayoutAccessor_1562cf0(a1 + 88, v38);
      game_gameui_Util_SetArtsSkillStatus(a1 + 88, a2, (__int64)a3, a7 & 1, 0);
      if (a5 < 2) {
        goto LABEL_58;
      }
    }
    else {
      LayoutAccessor_1562cf0(a1 + 88, "StatusOff");
      if ((a4 & 1) != 0) {
        v41 = "Wdw_TitleOn_Status02";
      }
      else {
        v41 = "Wdw_TitleOff_Status02";
      }
      LayoutAccessor_1562cf0(a1 + 88, v41);
      if (a5 < 2) {
        goto LABEL_58;
      }
    }
  }
  LayoutAccessor_1562cf0(a1 + 88, "NumCost");
  v42 = *v21;
  v50_.v55 = -1;
  v50_.v56 = -1;
  v50_.v57 = -1;
  v50_.v58 = -1;
  v50_.v59 = -1;
  v50_.v60 = -1;
  v50_.v61 = -1;
  v50_.v62 = -1;
  v50_.v63 = -1;
  v50_.v64 = -1;
  v50_.v65 = -1;
  v50_.v66 = -1;
  v50_.v50[0] = v36 + 2;
  v50_.v50[1] = 0xFFFF0001FFFF0000LL;
  v50_.v51 = 0xFFFF0004FFFF0002LL;
  v50_.v52 = 0xFFFF0006FFFF0005LL;
  v50_.v67 = 8;
  v50_.v53 = -65529;
  v50_.v54 = -65528;
  v43 = GameRoutine_a4dbe0(v42, "MID_Sys_Multiply", 0);
  v44 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88), (__int64)"T_Cost");
  if (v44 != 0) {
    v45 = __dynamic_cast(v44, GameData_212d670[0], GameData_212d690, 0);
    if (v45 != 0) {
      GameRoutine_156c910(v45, "%s%d", 2, v43, (unsigned int)a5);
    }
  }
LABEL_58:
  v46 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88), "A_InfoDetail");
  if (v46 != 0) {
    Alignment_56b600(v46);
  }
  game_gameui_control_18a5bc0(a1);
}

void game_gameui_control_18a8b50(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  unsigned int v4;
  const char* v5;
  const char* v6;
  const char* v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  const char* v19;
  const char* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  int v24;
  int v25;
  char v26;
  __int64 v27;
  __int64 v28[3];
  float v29;
  _DWORD v30[2];
  float v31;

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusOff");
  LayoutAccessor_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v4 = 0;
  memset(v28, 0, sizeof(v28));
  switch (a2) {
  case 0:
    v4 = 32;
    v5 = "MID_H_Sys_Attack";
    goto LABEL_23;
  case 1:
    GameRoutine_60a020((__int64)v28, "MID_H_Sys_Physicalattack");
    v4 = LOBYTE(v28[0]);
    break;
  case 2:
    v4 = 42;
    v7 = "MID_H_Sys_Magicattack";
    goto LABEL_18;
  case 3:
    v4 = 42;
    v7 = "MID_H_Sys_Otherattack";
    goto LABEL_18;
  case 10:
    v4 = 26;
    v6 = "MID_H_Sys_Hit";
    goto LABEL_28;
  case 11:
    v4 = 42;
    v7 = "MID_H_Sys_Attackspeed";
    goto LABEL_18;
  case 12:
    v4 = 30;
    LOBYTE(v28[0]) = 30;
    strcpy((char*)v28 + 1, "MID_H_Sys_Avoid");
    break;
  case 13:
    v4 = 36;
    BYTE3(v28[2]) = 0;
    *(_WORD*)((char*)&v28[2] + 1) = 27745;
    v8 = "MID_H_Sys_Critical";
    LOBYTE(v28[0]) = 36;
    goto LABEL_21;
  case 14:
    v4 = 32;
    v5 = "MID_H_Sys_Secure";
  LABEL_23:
    LOBYTE(v28[0]) = 32;
    v13 = *(_QWORD*)v5;
    v12 = *((_QWORD*)v5 + 1);
    BYTE1(v28[2]) = 0;
    goto LABEL_24;
  case 15:
    v4 = 40;
    BYTE5(v28[2]) = 0;
    LOBYTE(v28[0]) = 40;
    *(_DWORD*)((char*)&v28[2] + 1) = 1852795252;
    v8 = "MID_H_Sys_Protection";
  LABEL_21:
    v13 = *(_QWORD*)v8;
    v12 = *((_QWORD*)v8 + 1);
  LABEL_24:
    *(__int64*)((char*)v28 + 1) = v13;
    *(__int64*)((char*)&v28[1] + 1) = v12;
    break;
  case 16:
    v4 = 42;
    v7 = "MID_H_Sys_Enduremagic";
  LABEL_18:
    LOBYTE(v28[0]) = 42;
    v9 = *(_QWORD*)v7;
    v10 = *((_QWORD*)v7 + 1);
    v11 = *(_QWORD*)(v7 + 13);
    BYTE6(v28[2]) = 0;
    *(__int64*)((char*)v28 + 1) = v9;
    *(__int64*)((char*)&v28[1] + 1) = v10;
    *(__int64*)((char*)&v28[1] + 6) = v11;
    break;
  case 17:
    v4 = 26;
    v6 = "MID_H_Sys_Rng";
    goto LABEL_28;
  case 28:
    v4 = 24;
    LOBYTE(v28[0]) = 24;
    strcpy((char*)v28 + 1, "MID_H_Sys_Hp");
    break;
  case 29:
    v4 = 26;
    v6 = "MID_H_Sys_Str";
    goto LABEL_28;
  case 30:
    v4 = 26;
    v6 = "MID_H_Sys_Mag";
    goto LABEL_28;
  case 31:
    v4 = 26;
    v6 = "MID_H_Sys_Tec";
    goto LABEL_28;
  case 32:
    v4 = 26;
    v6 = "MID_H_Sys_Spd";
    goto LABEL_28;
  case 33:
    v4 = 26;
    v6 = "MID_H_Sys_Lck";
    goto LABEL_28;
  case 34:
    v4 = 26;
    v6 = "MID_H_Sys_Def";
    goto LABEL_28;
  case 35:
    v4 = 26;
    v6 = "MID_H_Sys_Res";
    goto LABEL_28;
  case 36:
    v4 = 26;
    v6 = "MID_H_Sys_Cha";
    goto LABEL_28;
  case 37:
    v4 = 26;
    v6 = "MID_H_Sys_Mov";
  LABEL_28:
    LOBYTE(v28[0]) = 26;
    v14 = *(_QWORD*)v6;
    v15 = *(_QWORD*)(v6 + 5);
    BYTE6(v28[1]) = 0;
    *(__int64*)((char*)v28 + 1) = v14;
    *(__int64*)((char*)v28 + 6) = v15;
    break;
  default:
    break;
  }
  v16 = v4 >> 1;
  v17 = (v4 & 1) == 0;
  v18 = v28[1];
  if (v17) {
    v18 = v16;
    v19 = (char*)v28 + 1;
  }
  else {
    v19 = (const char*)v28[2];
  }
  if (v18 != 0) {
    v20 = v19;
  }
  else {
    v20 = &GameData_1a9f09e;
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
  LayoutAccessor_1562060((char*)(a1 + 88), (__int64)"L_InfoTxt/T_Txt", v20);
  v21 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v21 != 0) {
    v22 = v21;
    v23 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v23 != nullptr) {
      ui_text_190a0c0(&v31, (__int64)v30, &v29, v23, v23[27]);
      v24 = v30[0];
      v25 = v30[1];
    }
    else {
      v24 = 0;
      v25 = 0;
    }
    v26 = *(_BYTE*)(v22 + 88);
    *(_DWORD*)(v22 + 80) = v24;
    *(_DWORD*)(v22 + 84) = v25;
    *(_BYTE*)(v22 + 88) = v26 | 0x10;
  }
  game_gameui_control_18a5bc0(a1);
  if ((v28[0] & 1) != 0 && v28[2] != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  v28[2]);
  }
}

__int64 game_gameui_control_18bbf20(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  const char** v15;
  char v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  const char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  const char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  struct {
    const char* v59;
    __int64 v60;
  } v59_;
  struct {
    const char* v61;
    __int64 v62;
  } v61_;
  struct {
    const char* v63;
    __int64 v64;
  } v63_;

  v3 = LayoutAccessor_155fbe0((__int64*)(a1 + 88), "L_Info_Attack");
  GameHr_157e0f0((__int64)v3, "MID_Menu_ExclusiveItem", nullptr);
  v4 = *(_QWORD*)(a1 + 96);
  if (v4 != 0) {
    v5 = std___1___shared_weak_count_lock(v4);
    if (v5 != 0) {
      v6 = *(_QWORD*)(a1 + 88);
      v7 = v5;
      if (v6 != 0 && (v8 = ui_LayoutAccessor_GetPartsLayout(
                          (__int64*)(a1 + 88), "L_MenuItem_InfoMorph")) != 0) {
        v9 = *(_QWORD*)(v8 + 24);
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)GameData_212dfd0) != 0) {
          *GameData_212dfc8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
          __cxa_guard_release((__int64)GameData_212dfd0);
        }
        if (v9 == 0) {
          goto LABEL_14;
        }
        v10 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        if (v10 != GameData_212dfc8) {
          do {
            v10 = (__int64*)*v10;
          } while (v10 != GameData_212dfc8 && v10 != nullptr);
          if (v10 == nullptr) {
          LABEL_14:
            v9 = 0;
          }
        }
        Layout_1363f00((void*)(&v59_.v59), v6, v9);
        v61_.v61 = nullptr;
        v61_.v62 = 0;
        if (v59_.v60 != 0 &&
            (v12 = std___1___shared_weak_count_lock(v59_.v60), v61_.v62 = v12,
             v12 != 0) &&
            (v61_.v61 = v59_.v59, v59_.v59 != nullptr) &&
            (v13 = v12, (v14 = __dynamic_cast(v59_.v59, GameData_212dfc0[0],
                                              GameData_21320b8[0], 0)) != 0)) {
          v15 = &v61_.v61;
          v63_.v63 = (const char*)v14;
          v63_.v64 = v13;
        }
        else {
          v15 = &v63_.v63;
        }
        *v15 = nullptr;
        v15[1] = nullptr;
        v6 = (__int64)v63_.v63;
        v1 = v63_.v64;
        if (v63_.v64 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v63_.v64 + 16),
                                    1u, memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
            std___1___shared_weak_count___release_weak(v1);
          }
        }
        v17 = v61_.v62;
        if (v61_.v62 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v61_.v62 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
        }
        if (v59_.v60 != 0) {
          std___1___shared_weak_count___release_weak(v59_.v60);
        }
        v16 = 0;
      }
      else {
        v16 = 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
      v18 = v1 != 0 ? v16 : 1;
      if ((v18 & 1) == 0) {
        v19 = std___1___shared_weak_count_lock(v1);
        std___1___shared_weak_count___release_weak(v1);
        if (v19 != 0 && v6 != 0) {
          MenuItemInfo_18be1b0(v6, "MID_BtlMenu_Rage", "MID_Sys_Remaining");
        }
        else if (v19 == 0) {
          goto LABEL_43;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
        }
      }
    }
  }
LABEL_43:
  v61_.v61 = "L_MenuItem_Name";
  v61_.v62 = 15;
  GameRoutine_15d4100((void*)(&v63_.v63), (__int64*)(a1 + 88), &v61_.v61);
  v20 = (__int64*)fw_memory_g_heap_manager_ptr;
  v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       56, 16, 0);
  v22 = v63_.v63;
  v23 = v63_.v64;
  v24 = v21;
  if (v63_.v64 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v63_.v64 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v21 + 16) = v23;
    *(_QWORD*)v21 = game_gameui_control_MenuItemMorphName_vtable;
    *(_QWORD*)(v21 + 8) = v22;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)(v21 + 24) = 0;
    *(_QWORD*)(v21 + 32) = 0;
    *(_QWORD*)(v21 + 40) = 0;
    *(_DWORD*)(v21 + 48) = 0;
    v25 = *(_QWORD*)(v21 + 16);
    if (v25 != 0) {
      v26 = std___1___shared_weak_count_lock(v25);
      if (v26 != 0) {
        v27 = *(_QWORD**)(v24 + 8);
        if (v27 != nullptr) {
          v28 = (_QWORD*)v27[131];
          v29 = v27 + 130;
          if (v28 == v27 + 130) {
            goto LABEL_50;
          }
          while (v28[2] != v24) {
            v28 = (_QWORD*)v28[1];
            if (v28 == v29) {
              goto LABEL_50;
            }
          }
          if (v28 == v29) {
          LABEL_50:
            v30 = v26;
            v31 = (_QWORD*)fw_memory_HeapManager_Allocate(*v20, 24, 16, 0);
            v31[1] = v29;
            v31[2] = v24;
            v26 = v30;
            v32 = v27[130];
            *v31 = v32;
            *(_QWORD*)(v32 + 8) = v31;
            v27[130] = v31;
            ++v27[132];
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v33 = v26;
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          std___1___shared_weak_count___release_weak(v33);
        }
      }
    }
    std___1___shared_weak_count___release_weak(v23);
  }
  else {
    *(_QWORD*)(v21 + 16) = 0;
    *(_DWORD*)(v21 + 24) = 0;
    *(_QWORD*)(v21 + 32) = 0;
    *(_QWORD*)(v21 + 40) = 0;
    *(_DWORD*)(v21 + 48) = 0;
    *(_QWORD*)v21 = game_gameui_control_MenuItemMorphName_vtable;
    *(_QWORD*)(v21 + 8) = v22;
  }
  v34 = *(_QWORD*)(a1 + 1080);
  *(_QWORD*)(a1 + 1080) = v24;
  if (v34 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 8LL))(v34);
  }
  if (v63_.v64 != 0) {
    std___1___shared_weak_count___release_weak(v63_.v64);
  }
  v63_.v63 = "L_MenuItem_Attack00";
  v63_.v64 = 19;
  GameRoutine_15d4100((void*)(&v61_.v61), (__int64*)(a1 + 88), &v63_.v63);
  v35 = fw_memory_HeapManager_Allocate(*v20, 40, 16, 0);
  v36 = v61_.v62;
  v37 = v35;
  v63_.v63 = v61_.v61;
  v63_.v64 = v61_.v62;
  if (v61_.v62 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v61_.v62 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_18bb600(v35, &v63_.v63);
    std___1___shared_weak_count___release_weak(v36);
  }
  else {
    GameRoutine_18bb600(v35, &v63_.v63);
  }
  v38 = *(_QWORD*)(a1 + 1088);
  *(_QWORD*)(a1 + 1088) = v37;
  if (v38 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 8LL))(v38);
  }
  if (v61_.v62 != 0) {
    std___1___shared_weak_count___release_weak(v61_.v62);
  }
  v63_.v63 = "L_MenuItem_Attack01";
  v63_.v64 = 19;
  GameRoutine_15d4100((void*)(&v61_.v61), (__int64*)(a1 + 88), &v63_.v63);
  v39 = fw_memory_HeapManager_Allocate(*v20, 40, 16, 0);
  v40 = v61_.v62;
  v41 = v39;
  v63_.v63 = v61_.v61;
  v63_.v64 = v61_.v62;
  if (v61_.v62 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v61_.v62 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_18bb600(v39, &v63_.v63);
    std___1___shared_weak_count___release_weak(v40);
  }
  else {
    GameRoutine_18bb600(v39, &v63_.v63);
  }
  v42 = *(_QWORD*)(a1 + 1096);
  *(_QWORD*)(a1 + 1096) = v41;
  if (v42 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
  }
  if (v61_.v62 != 0) {
    std___1___shared_weak_count___release_weak(v61_.v62);
  }
  v61_.v61 = "L_MenuItem_Morph";
  v61_.v62 = 16;
  GameRoutine_15d4100((void*)(&v63_.v63), (__int64*)(a1 + 88), &v61_.v61);
  v43 = fw_memory_HeapManager_Allocate(*v20, 56, 16, 0);
  v44 = v63_.v63;
  v45 = v63_.v64;
  v46 = v43;
  if (v63_.v64 != 0) {
    v47 = v63_.v64;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v63_.v64 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v46 + 16) = v45;
    *(_QWORD*)v46 = game_gameui_control_MenuItemMorphRage_vtable;
    *(_QWORD*)(v46 + 8) = v44;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)(v46 + 48) = 0;
    *(_QWORD*)(v46 + 24) = 0;
    *(_QWORD*)(v46 + 32) = 0;
    *(_QWORD*)(v46 + 37) = 0;
    v48 = std___1___shared_weak_count_lock(v47);
    if (v48 != 0) {
      v49 = *(_QWORD**)(v46 + 8);
      if (v49 != nullptr) {
        v50 = (_QWORD*)v49[131];
        v51 = v49 + 130;
        if (v50 == v49 + 130) {
          goto LABEL_79;
        }
        while (v50[2] != v46) {
          v50 = (_QWORD*)v50[1];
          if (v50 == v51) {
            goto LABEL_79;
          }
        }
        if (v50 == v51) {
        LABEL_79:
          v52 = *v20;
          v53 = v48;
          v54 = (_QWORD*)fw_memory_HeapManager_Allocate(v52, 24, 16, 0);
          v54[1] = v51;
          v54[2] = v46;
          v48 = v53;
          v55 = v49[130];
          *v54 = v55;
          *(_QWORD*)(v55 + 8) = v54;
          v49[130] = v54;
          ++v49[132];
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v56 = v48;
        (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
        std___1___shared_weak_count___release_weak(v56);
      }
    }
    std___1___shared_weak_count___release_weak(v45);
  }
  else {
    *(_DWORD*)(v43 + 48) = 0;
    *(_QWORD*)(v43 + 16) = 0;
    *(_QWORD*)(v43 + 24) = 0;
    *(_QWORD*)(v43 + 32) = 0;
    *(_QWORD*)(v43 + 37) = 0;
    *(_QWORD*)v43 = game_gameui_control_MenuItemMorphRage_vtable;
    *(_QWORD*)(v43 + 8) = v44;
  }
  v57 = *(_QWORD*)(a1 + 1104);
  *(_QWORD*)(a1 + 1104) = v46;
  if (v57 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 8LL))(v57);
  }
  if (v63_.v64 != 0) {
    std___1___shared_weak_count___release_weak(v63_.v64);
  }
  *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 48LL) = *(_DWORD*)(a1 + 1112);
  *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 24LL) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 32LL) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 40LL) = *(_QWORD*)(a1 + 1064);
  MenuItemMorphName_18bb1d0(*(_QWORD*)(a1 + 1080));
  MenuItemMorphSkill_18bb8b0(*(_QWORD**)(a1 + 1088));
  MenuItemMorphSkill_18bb8b0(*(_QWORD**)(a1 + 1096));
  LayoutAccessor_1562cf0(a1 + 88, "DragonInfo_Attack00");
  return MenuItemMorph_18bc9c0(a1, GameData_212c8a8);
}

#pragma GCC visibility pop
