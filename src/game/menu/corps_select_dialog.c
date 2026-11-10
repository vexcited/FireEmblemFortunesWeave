#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_133e4e0(_QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_menu_anonymous_CorpsSelectDialogItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0c8[6];
__int64 CorpsSelectDialog_Unknown128(__int64 result);
__int64 CorpsSelectDialog_Unknown100(__int64 a1);
__int64 game_GetHero(_QWORD);
bool game_menu_CorpsSelectDialog_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                              __int64* a2,
                                                              __int64* a3);
__int64 Alignment_56b600(__int64 result);
__int64 BasicMenu_16e1f40(__int64 result, __int64, __int64);
__int64 CorpsManager_9726e0(__int64);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Pane_58f8a0(__int64);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_CorpsManager_EachUnit(__int64 result, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero_alt1(unsigned __int8) __asm__("game_GetHero");
__int64 game_HashString(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN GameData_1a96743;
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_1fb0cb0[])();
extern __int64 (*GameData_1fb0e30[])();
extern __int64 (*GameData_2075680[])();
extern __int64 (*GameData_2075780[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char* GameData_20757f0[7];
extern char GameData_1a9f09e;
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64, __int64, int, ...);
void LayoutAccessor_1562060(__int64*, __int64, _BYTE*);
__int64 game_menu_CorpsSelectDialog_SortAndFilter(__int64 a1);
__int64 CorpsSelectDialog_Unknown88(__int64 result);

__int64 CorpsSelectDialog_Unknown128(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(__int64**)(result + 1552);
  v2 = *(__int64**)(result + 1560);
  if (v1 != v2) {
    v3 = result;
    v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v5 = fw_memory_HeapManager_Allocate(*v4, 104, 16, 0);
      v6 = *v1++;
      v7 = v5;
      v8 = GameRoutine_133e4e0(v6);
      *(_WORD*)(v7 + 16) = 0;
      *(_DWORD*)(v7 + 40) = 0;
      *(_QWORD*)(v7 + 48) = 0;
      *(_QWORD*)(v7 + 56) = 0;
      *(_QWORD*)(v7 + 64) = 0;
      *(_QWORD*)(v7 + 72) = 0;
      *(_WORD*)(v7 + 80) = 257;
      *(_BYTE*)(v7 + 82) = 1;
      *(_QWORD*)v7 = game_menu_anonymous_CorpsSelectDialogItem_vtable;
      *(_QWORD*)(v7 + 8) = 0;
      *(_QWORD*)(v7 + 88) = v8;
      *(_QWORD*)(v7 + 96) = v6;
      result = GameRoutine_16e0c00(v3, v7);
    } while (v1 != v2);
  }
  return result;
}

__int64 game_menu_CorpsSelectDialog_SortAndFilter(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;
  struct {
    _BYTE v6[32];
    _BYTE* v7;
  } v6_;

  v6_.v7 = nullptr;
  v4_.v4[0] = GameData_2075780;
  v4_.v5 = v4_.v4;
  BasicMenu_16e1f40(a1, (__int64)v6_.v6, (__int64)v4_.v4);
  if (v4_.v5 == v4_.v4) {
    v1 = 32;
  }
  else {
    if (v4_.v5 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v4_.v5 + v1))((__int64)v4_.v5);
LABEL_6:
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v3 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v6_.v7 + v3))((__int64)v6_.v7);
}

__int64 CorpsSelectDialog_Unknown100(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], GameData_212e0c8[0], 0);
    if (v3 != 0) {
      v4 = v3;
      v5 = *(_QWORD*)(a1 + 1536);
      if (v5 != 0) {
        v7 = *(_QWORD*)(v4 + 88);
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5, &v7);
      }
    }
  }
  return 2;
}

__int64 CorpsSelectDialog_Unknown88(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64* v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64* v59;
  __int64* v60;
  char* v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  char* v65;
  unsigned __int64 v66;
  char* v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int64 v71;
  _DWORD* v72;
  char* v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  const char* v78;
  __int64 v79;
  _BYTE* v80;
  int v81;
  struct {
    __int64 v82;
    char* v83;
    __int64 v84;
  } v82_;
  __int64 v85;
  __int64 v86;
  unsigned int v87;
  int v88;
  struct {
    __int64 (**v89)();
    __int64* v90;
    unsigned __int64 v91;
    unsigned __int64 v92;
    unsigned __int64* v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
  } v89_;

  v1 = *(_QWORD*)(result + 336);
  if (v1 == 0) {
    return result;
  }
  if (*(__int64 (***)(void))v1 !=
      game_menu_anonymous_CorpsSelectDialogItem_vtable) {
    return result;
  }
  v2 = *(_QWORD*)(v1 + 88);
  if (v2 == 0) {
    return result;
  }
  v3 = *(_QWORD*)(v2 + 392);
  v4 = result;
  if (v3 == 0 || (v5 = game_GetHero_alt1(9u)) == 0 ||
      *(_QWORD*)(*(_QWORD*)(v3 + 24) + 1672LL) !=
          *(_QWORD*)(*(_QWORD*)(v5 + 24) + 1672LL)) {
    LayoutAccessor_1562cf0(v4 + 952, (__int64)"InfoUnit");
    v87 = 0;
    v85 = 0;
    v86 = 0;
    v8 = ui_LayoutAccessor_FindPane((__int64*)(v4 + 952), (__int64)"A_Icon");
    if (v8 == 0 || (v9 = *(_QWORD*)(v8 + 40)) == v8 + 32) {
      v10 = nullptr;
    }
    else {
      v10 = nullptr;
      do {
        v9 = *(_QWORD*)(v9 + 8);
        ++v10;
      } while (v9 != v8 + 32);
    }
    v82_.v83 = nullptr;
    v82_.v84 = 0;
    v82_.v82 = 0;
    v11 = *(_QWORD*)(v1 + 96);
    v12 = (unsigned __int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v89_.v93 = v12;
    *v12 = (unsigned __int64)GameData_2075680;
    v12[1] = (unsigned __int64)&v87;
    v12[2] = (unsigned __int64)&v86 + 4;
    v12[3] = (unsigned __int64)&v86;
    v12[4] = (unsigned __int64)&v85 + 4;
    v12[5] = (unsigned __int64)&v85;
    v12[6] = (unsigned __int64)&v82_.v82;
    Troop_133ed80(v11, (__int64)&v89_.v89);
    if (v89_.v93 == (unsigned __int64*)&v89_.v89) {
      v13 = 32;
    }
    else {
      if (v89_.v93 == nullptr) {
        goto LABEL_22;
      }
      v13 = 40;
    }
    (*(void (**)(__int64))(*v89_.v93 + v13))((__int64)v89_.v93);
  LABEL_22:
    v14 = *(_QWORD*)(v1 + 96);
    v88 = 0;
    v15 = *(unsigned int*)(v14 + 84);
    if ((v15 & 0x80000000) != 0) {
      goto LABEL_32;
    }
    v89_.v89 = GameData_1fb0e30;
    v89_.v90 = (__int64*)&v88;
    v89_.v93 = (unsigned __int64*)&v89_.v89;
    game_CorpsManager_EachUnit(v15, (__int64)&v89_.v89);
    if (v89_.v93 == (unsigned __int64*)&v89_.v89) {
      v16 = 32;
    }
    else {
      if (v89_.v93 == nullptr) {
        goto LABEL_28;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v89_.v93 + v16))((__int64)v89_.v93);
  LABEL_28:
    if (v88 != 0) {
      v17 = *(_QWORD*)(v1 + 96);
      v18 = v86;
      v88 = 0;
      v89_.v93 = (unsigned __int64*)&v89_.v89;
      v19 = *(unsigned int*)(v17 + 84);
      v89_.v89 = GameData_1fb0e30;
      v89_.v90 = (__int64*)&v88;
      game_CorpsManager_EachUnit(v19, (__int64)&v89_.v89);
      if (v89_.v93 == (unsigned __int64*)&v89_.v89) {
        v20 = 32;
      }
      else {
        if (v89_.v93 == nullptr) {
          goto LABEL_51;
        }
        v20 = 40;
      }
      (*(void (**)(__int64))(*v89_.v93 + v20))((__int64)v89_.v93);
    LABEL_51:
      v41 = v88;
      v42 =
          ui_LayoutAccessor_FindPane((__int64*)(v4 + 952), (__int64)"T_LvNum");
      if (v42 != 0) {
        v43 = __dynamic_cast(v42, GameData_212d670[0], GameData_212d690, 0);
        if (v43 != 0) {
          GameRoutine_156c910(v43, (__int64)"%d", 1, (unsigned int)(v18 / v41));
        }
      }
      v44 = v87;
      v45 =
          ui_LayoutAccessor_FindPane((__int64*)(v4 + 952), (__int64)"T_HpNum");
      if (v45 != 0) {
        v46 = __dynamic_cast(v45, GameData_212d670[0], GameData_212d690, 0);
        if (v46 != 0) {
          GameRoutine_156c910(v46, (__int64)"%d", 1, v44);
        }
      }
      v47 = HIDWORD(v86);
      v48 = ui_LayoutAccessor_FindPane((__int64*)(v4 + 952),
                                       (__int64)"T_HpMaxNum");
      if (v48 != 0) {
        v49 = __dynamic_cast(v48, GameData_212d670[0], GameData_212d690, 0);
        if (v49 != 0) {
          GameRoutine_156c910(v49, (__int64)"%d", 1, v47);
        }
      }
      v50 = v85;
      if ((int)v85 < 1) {
        v89_.v94 = -1;
        v89_.v95 = -1;
        v89_.v96 = -1;
        v89_.v97 = -1;
        v54 = *msg_MessageManager_instance__ptr[0];
        v89_.v98 = -1;
        v89_.v99 = -1;
        v89_.v100 = -1;
        v89_.v101 = -1;
        v89_.v102 = -1;
        v89_.v103 = -1;
        v89_.v104 = -1;
        v89_.v105 = -1;
        v89_.v89 = (__int64 (**)(void))(GameData_212e348 + 2);
        v89_.v90 = (__int64*)0xFFFF0001FFFF0000LL;
        v89_.v91 = 0xFFFF0004FFFF0002LL;
        v89_.v92 = 0xFFFF0006FFFF0005LL;
        v89_.v106 = 8;
        v89_.v93 = (unsigned __int64*)0xFFFF0008FFFF0007LL;
        v55 = GameRoutine_a4dbe0(v54, "MID_Sys_ValueEmpty", 0);
        if (v55 != nullptr) {
          v56 = (__int64)v55;
          v57 = ui_LayoutAccessor_FindTextBox((__int64*)(v4 + 952),
                                              (__int64)"T_MagicEndureNum");
          if (v57 != 0) {
            GameRoutine_156c5d0(v57, v56, 0);
          }
        }
      }
      else {
        v51 = HIDWORD(v85);
        v52 = ui_LayoutAccessor_FindPane((__int64*)(v4 + 952),
                                         (__int64)"T_MagicEndureNum");
        if (v52 != 0) {
          v53 = __dynamic_cast(v52, GameData_212d670[0], GameData_212d690, 0);
          if (v53 != 0) {
            GameRoutine_156c910(v53, (__int64)"%d", 1,
                                (unsigned int)(100 * v51 / v50));
          }
        }
      }
      ui_LayoutAccessor_SetPaneVisible(v4 + 952, (__int64)"A_Icon", 1);
      if (v82_.v83 == (char*)v82_.v82) {
        v61 = nullptr;
      }
      else {
        v58 = nullptr;
        v59 = GameData_212d670[0];
        v60 = GameData_212d678[0];
        do {
          v62 = game_util_Format("Icon%02d", (_DWORD)v58);
          ui_LayoutAccessor_SetPaneVisible(v4 + 952, (__int64)v62, 1);
          v63 = ui_LayoutAccessor_FindPane((__int64*)(v4 + 952), (__int64)v62);
          if (v63 != 0) {
            v64 = __dynamic_cast(v63, v59, v60, 0);
            if (v64 != 0) {
              v65 = &GameData_1a9f09e;
              v66 = (unsigned __int8)v58[v82_.v82];
              if (v66 <= 6) {
                v65 = GameData_20757f0[v66];
              }
              Manager_136a920(ui_Manager_instance_ + 1264, v64, 0, 7u, v65);
            }
          }
          ++v58;
          v61 = &v82_.v83[-v82_.v82];
        } while (&v82_.v83[-v82_.v82] > v58);
      }
      if (v61 < v10) {
        do {
          v67 = game_util_Format("Icon%02d", (_DWORD)v61);
          ui_LayoutAccessor_SetPaneVisible(v4 + 952, (__int64)v67, 0);
          ++v61;
        } while (v10 != v61);
      }
      result = ui_LayoutAccessor_FindAlignment((__int64*)(v4 + 952),
                                               (__int64)"A_Icon");
      if (result != 0) {
        result = Alignment_56b600(result);
      }
    LABEL_80:
      if (v82_.v82 == 0) {
        return result;
      }
      v82_.v83 = (char*)v82_.v82;
      goto LABEL_82;
    }
  LABEL_32:
    v21 = msg_MessageManager_instance__ptr[0];
    v89_.v94 = -1;
    v89_.v95 = -1;
    v89_.v96 = -1;
    v89_.v97 = -1;
    v22 = *msg_MessageManager_instance__ptr[0];
    v89_.v98 = -1;
    v89_.v99 = -1;
    v89_.v100 = -1;
    v89_.v101 = -1;
    v89_.v102 = -1;
    v89_.v103 = -1;
    v89_.v104 = -1;
    v89_.v105 = -1;
    v89_.v91 = 0xFFFF0004FFFF0002LL;
    v89_.v92 = 0xFFFF0006FFFF0005LL;
    v89_.v93 = (unsigned __int64*)0xFFFF0008FFFF0007LL;
    v23 = GameData_212e348 + 2;
    v89_.v89 = (__int64 (**)(void))(GameData_212e348 + 2);
    v89_.v90 = (__int64*)0xFFFF0001FFFF0000LL;
    v89_.v106 = 8;
    v24 = GameRoutine_a4dbe0(v22, "MID_Sys_ValueEmpty", 0);
    if (v24 != nullptr) {
      v25 = (__int64)v24;
      v26 = ui_LayoutAccessor_FindTextBox((__int64*)(v4 + 952),
                                          (__int64)"T_LvNum");
      if (v26 != 0) {
        GameRoutine_156c5d0(v26, v25, 0);
      }
    }
    v27 = *v21;
    v89_.v94 = -1;
    v89_.v95 = -1;
    v89_.v96 = -1;
    v89_.v97 = -1;
    v89_.v98 = -1;
    v89_.v99 = -1;
    v89_.v100 = -1;
    v89_.v101 = -1;
    v89_.v102 = -1;
    v89_.v103 = -1;
    v89_.v104 = -1;
    v89_.v105 = -1;
    v89_.v89 = (__int64 (**)(void))v23;
    v89_.v90 = (__int64*)0xFFFF0001FFFF0000LL;
    v89_.v91 = 0xFFFF0004FFFF0002LL;
    v89_.v92 = 0xFFFF0006FFFF0005LL;
    v89_.v106 = 8;
    v89_.v93 = (unsigned __int64*)0xFFFF0008FFFF0007LL;
    v28 = GameRoutine_a4dbe0(v27, "MID_Sys_ValueEmpty", 0);
    if (v28 != nullptr) {
      v29 = (__int64)v28;
      v30 = ui_LayoutAccessor_FindTextBox((__int64*)(v4 + 952),
                                          (__int64)"T_HpNum");
      if (v30 != 0) {
        GameRoutine_156c5d0(v30, v29, 0);
      }
    }
    v31 = *v21;
    v89_.v94 = -1;
    v89_.v95 = -1;
    v89_.v96 = -1;
    v89_.v97 = -1;
    v89_.v98 = -1;
    v89_.v99 = -1;
    v89_.v100 = -1;
    v89_.v101 = -1;
    v89_.v102 = -1;
    v89_.v103 = -1;
    v89_.v104 = -1;
    v89_.v105 = -1;
    v32 = GameData_212e348 + 2;
    v89_.v91 = 0xFFFF0004FFFF0002LL;
    v89_.v92 = 0xFFFF0006FFFF0005LL;
    v89_.v93 = (unsigned __int64*)0xFFFF0008FFFF0007LL;
    v89_.v89 = (__int64 (**)(void))(GameData_212e348 + 2);
    v89_.v90 = (__int64*)0xFFFF0001FFFF0000LL;
    v89_.v106 = 8;
    v33 = GameRoutine_a4dbe0(v31, "MID_Sys_ValueEmpty", 0);
    if (v33 != nullptr) {
      v34 = (__int64)v33;
      v35 = ui_LayoutAccessor_FindTextBox((__int64*)(v4 + 952),
                                          (__int64)"T_HpMaxNum");
      if (v35 != 0) {
        GameRoutine_156c5d0(v35, v34, 0);
      }
    }
    v36 = *v21;
    v89_.v94 = -1;
    v89_.v95 = -1;
    v89_.v96 = -1;
    v89_.v97 = -1;
    v89_.v98 = -1;
    v89_.v99 = -1;
    v89_.v100 = -1;
    v89_.v101 = -1;
    v89_.v102 = -1;
    v89_.v103 = -1;
    v89_.v104 = -1;
    v89_.v105 = -1;
    v89_.v89 = (__int64 (**)(void))v32;
    v89_.v90 = (__int64*)0xFFFF0001FFFF0000LL;
    v89_.v91 = 0xFFFF0004FFFF0002LL;
    v89_.v92 = 0xFFFF0006FFFF0005LL;
    v89_.v106 = 8;
    v89_.v93 = (unsigned __int64*)0xFFFF0008FFFF0007LL;
    v37 = GameRoutine_a4dbe0(v36, "MID_Sys_ValueEmpty", 0);
    if (v37 != nullptr) {
      v38 = (__int64)v37;
      v39 = ui_LayoutAccessor_FindTextBox((__int64*)(v4 + 952),
                                          (__int64)"T_MagicEndureNum");
      if (v39 != 0) {
        GameRoutine_156c5d0(v39, v38, 0);
      }
    }
    result = ui_LayoutAccessor_SetPaneVisible(v4 + 952, (__int64)"A_Icon", 0);
    goto LABEL_80;
  }
  LayoutAccessor_1562cf0(v4 + 952, (__int64)"InfoIsm");
  v89_.v90 = (__int64*)&GameData_1ade186;
  v89_.v89 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ade186);
  if (game_GameModeData_instance_ != 0 &&
      (v6 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v89_.v89)) != 0) {
    v7 = *(_DWORD*)(v6 + 32);
  }
  else {
    v7 = 0;
  }
  LODWORD(v82_.v82) = 0;
  v89_.v89 = GameData_1fb0cb0;
  v89_.v90 = &v82_.v82;
  v89_.v93 = (unsigned __int64*)&v89_.v89;
  CorpsManager_9726e0((__int64)&v89_.v89);
  if (v89_.v93 == (unsigned __int64*)&v89_.v89) {
    v40 = 32;
    goto LABEL_86;
  }
  if (v89_.v93 != nullptr) {
    v40 = 40;
  LABEL_86:
    (*(void (**)(__int64))(*v89_.v93 + v40))((__int64)v89_.v93);
  }
  v69 = ((v82_.v82 & 2) != 0) + (v82_.v82 & 1) + ((v82_.v82 & 4) != 0) +
        ((v82_.v82 & 8) != 0) + ((v82_.v82 & 0x10) != 0) +
        ((v82_.v82 & 0x20) != 0) + ((v82_.v82 & 0x40) != 0) +
        ((v82_.v82 & 0x80) != 0) + ((v82_.v82 & 0x100) != 0);
  v70 = ui_LayoutAccessor_FindPane((__int64*)(v4 + 952), (__int64)"T_Num");
  if (v70 != 0) {
    v71 = __dynamic_cast(v70, GameData_212d670[0], GameData_212d690, 0);
    if (v71 != 0) {
      GameRoutine_156c910(v71, (__int64)"%d", 1, (unsigned int)(v7 - v69));
    }
  }
  v72 = GameData_212da30;
  v73 = (char*)GameData_212da30 + 60;
  if (v7 != v69) {
    v73 = (char*)GameData_212da30 + 36;
  }
  v74 = *(_DWORD*)v73;
  v75 = ui_LayoutAccessor_FindTextBox((__int64*)(v4 + 952), (__int64)"T_Num");
  if (v75 != 0) {
    v76 = Pane_58f8a0(v75);
    if (v76 != 0) {
      *(_DWORD*)(v76 + 12) = v74;
    }
  }
  LOWORD(v89_.v89) = 0;
  v82_.v83 = (char*)&GameData_1a96743;
  v82_.v82 = game_HashString((__int64)&GameData_1a96743);
  if (game_GameModeData_instance_ != 0 &&
      (v77 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v82_.v82)) != 0) {
    if (*(_DWORD*)(v77 + 32) != 0) {
      v78 = "MID_Gmap_CoopsSelect_Hub_Disable";
    }
    else {
      v78 = "MID_Gmap_CoopsSelect_Hub_Enable";
    }
    if (*(_DWORD*)(v77 + 32) != 0) {
      v79 = 18;
    }
    else {
      v79 = 11;
    }
  }
  else {
    v78 = "MID_Gmap_CoopsSelect_Hub_Enable";
    v79 = 11;
  }
  GameRoutine_60a020((__int64)&v89_.v89, (__int64)v78);
  if (((unsigned __int8)v89_.v89 & 1) != 0) {
    v80 = (_BYTE*)v89_.v91;
  }
  else {
    v80 = (char*)&v89_.v89 + 1;
  }
  LayoutAccessor_1562060((__int64*)(v4 + 952), (__int64)"T_Stay", v80);
  v81 = v72[v79];
  result =
      ui_LayoutAccessor_FindTextBox((__int64*)(v4 + 952), (__int64)"T_Stay");
  if (result != 0) {
    result = Pane_58f8a0(result);
    if (result != 0) {
      *(_DWORD*)(result + 12) = v81;
    }
  }
  if (((unsigned __int8)v89_.v89 & 1) != 0 && v89_.v91 != 0) {
  LABEL_82:
    v68 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v68 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v68);
  }
  return result;
}

bool game_menu_CorpsSelectDialog_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                              __int64* a2,
                                                              __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v3 = *a2;
  v4 = *a3;
  v5 = *(_QWORD*)(*a2 + 88);
  if (v5 != 0 && (v6 = *(_QWORD*)(v5 + 392)) != 0 &&
      (v7 = game_GetHero(9)) != 0 &&
      *(_QWORD*)(*(_QWORD*)(v6 + 24) + 1672LL) ==
          *(_QWORD*)(*(_QWORD*)(v7 + 24) + 1672LL)) {
    v8 = -1;
    v9 = *(_QWORD*)(v4 + 88);
    if (v9 == 0) {
      goto LABEL_12;
    }
  }
  else {
    v8 = *(_DWORD*)(*(_QWORD*)(v3 + 96) + 84LL) &
         ~(*(int*)(*(_QWORD*)(v3 + 96) + 84LL) >> 31);
    v9 = *(_QWORD*)(v4 + 88);
    if (v9 == 0) {
    LABEL_12:
      v12 = *(_DWORD*)(*(_QWORD*)(v4 + 96) + 84LL) &
            ~(*(int*)(*(_QWORD*)(v4 + 96) + 84LL) >> 31);
      return v8 < v12;
    }
  }
  v10 = *(_QWORD*)(v9 + 392);
  if (v10 == 0) {
    goto LABEL_12;
  }
  v11 = game_GetHero(9);
  if (v11 == 0 || *(_QWORD*)(*(_QWORD*)(v10 + 24) + 1672LL) !=
                      *(_QWORD*)(*(_QWORD*)(v11 + 24) + 1672LL)) {
    goto LABEL_12;
  }
  v12 = -1;
  return v8 < v12;
}

#pragma GCC visibility pop
