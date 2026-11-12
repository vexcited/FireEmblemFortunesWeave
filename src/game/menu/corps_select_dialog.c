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
__int64 CorpsSelectDialog_Unknown88_alt1(__int64 result) __asm__(
    "CorpsSelectDialog_Unknown88");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c910_alt1(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
void LayoutAccessor_1562060_alt1(__int64*, const char*,
                                 const char*) __asm__("LayoutAccessor_1562060");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CorpsSelectDialog_Unknown88(__int64 a1);

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

void CorpsSelectDialog_Unknown88(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
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
  __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  _DWORD* v74;
  char* v75;
  int v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  const char* v80;
  __int64 v81;
  const char* v82;
  int v83;
  __int64 v84;
  __int64 v85;
  struct {
    __int64 v86;
    char* v87;
    __int64 v88;
  } v86_;
  __int64 v89;
  __int64 v90;
  unsigned int v91;
  int v92;
  struct {
    __int64 (**v93)();
    __int64* v94;
    unsigned __int64 v95;
    unsigned __int64 v96;
    unsigned __int64* v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
  } v93_;

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 == 0) {
    return;
  }
  if (*(__int64 (***)(void))v1 !=
      game_menu_anonymous_CorpsSelectDialogItem_vtable) {
    return;
  }
  v2 = *(_QWORD*)(v1 + 88);
  if (v2 == 0) {
    return;
  }
  v3 = *(_QWORD*)(v2 + 392);
  if (v3 == 0 || (v5 = game_GetHero_alt1(9u)) == 0 ||
      *(_QWORD*)(*(_QWORD*)(v3 + 24) + 1672LL) !=
          *(_QWORD*)(*(_QWORD*)(v5 + 24) + 1672LL)) {
    LayoutAccessor_1562cf0_alt1(a1 + 952, (unsigned int*)"InfoUnit");
    v91 = 0;
    v89 = 0;
    v90 = 0;
    v8 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 952), "A_Icon");
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
    v86_.v87 = nullptr;
    v86_.v88 = 0;
    v86_.v86 = 0;
    v11 = *(_QWORD*)(v1 + 96);
    v12 = (unsigned __int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v93_.v97 = v12;
    *v12 = (unsigned __int64)GameData_2075680;
    v12[1] = (unsigned __int64)&v91;
    v12[2] = (unsigned __int64)&v90 + 4;
    v12[3] = (unsigned __int64)&v90;
    v12[4] = (unsigned __int64)&v89 + 4;
    v12[5] = (unsigned __int64)&v89;
    v12[6] = (unsigned __int64)&v86_.v86;
    Troop_133ed80(v11, (__int64)&v93_.v93);
    if (v93_.v97 == (unsigned __int64*)&v93_.v93) {
      v13 = 32;
    }
    else {
      if (v93_.v97 == nullptr) {
        goto LABEL_22;
      }
      v13 = 40;
    }
    (*(void (**)(__int64))(*v93_.v97 + v13))((__int64)v93_.v97);
  LABEL_22:
    v14 = *(_QWORD*)(v1 + 96);
    v92 = 0;
    v15 = *(unsigned int*)(v14 + 84);
    if ((v15 & 0x80000000) != 0) {
      goto LABEL_32;
    }
    v93_.v93 = GameData_1fb0e30;
    v93_.v94 = (__int64*)&v92;
    v93_.v97 = (unsigned __int64*)&v93_.v93;
    game_CorpsManager_EachUnit(v15, (__int64)&v93_.v93);
    if (v93_.v97 == (unsigned __int64*)&v93_.v93) {
      v16 = 32;
    }
    else {
      if (v93_.v97 == nullptr) {
        goto LABEL_28;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v93_.v97 + v16))((__int64)v93_.v97);
  LABEL_28:
    if (v92 != 0) {
      v17 = *(_QWORD*)(v1 + 96);
      v18 = v90;
      v92 = 0;
      v93_.v97 = (unsigned __int64*)&v93_.v93;
      v19 = *(unsigned int*)(v17 + 84);
      v93_.v93 = GameData_1fb0e30;
      v93_.v94 = (__int64*)&v92;
      game_CorpsManager_EachUnit(v19, (__int64)&v93_.v93);
      if (v93_.v97 == (unsigned __int64*)&v93_.v93) {
        v20 = 32;
      }
      else {
        if (v93_.v97 == nullptr) {
          goto LABEL_51;
        }
        v20 = 40;
      }
      (*(void (**)(__int64))(*v93_.v97 + v20))((__int64)v93_.v97);
    LABEL_51:
      v41 = v92;
      v42 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 952), "T_LvNum");
      if (v42 != 0) {
        v43 = __dynamic_cast(v42, GameData_212d670[0], GameData_212d690, 0);
        if (v43 != 0) {
          GameRoutine_156c910_alt1(v43, "%d", 1, (unsigned int)(v18 / v41));
        }
      }
      v44 = v91;
      v45 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 952), "T_HpNum");
      if (v45 != 0) {
        v46 = __dynamic_cast(v45, GameData_212d670[0], GameData_212d690, 0);
        if (v46 != 0) {
          GameRoutine_156c910_alt1(v46, "%d", 1, v44);
        }
      }
      v47 = HIDWORD(v90);
      v48 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 952), "T_HpMaxNum");
      if (v48 != 0) {
        v49 = __dynamic_cast(v48, GameData_212d670[0], GameData_212d690, 0);
        if (v49 != 0) {
          GameRoutine_156c910_alt1(v49, "%d", 1, v47);
        }
      }
      v50 = v89;
      if ((int)v89 < 1) {
        v93_.v98 = -1;
        v93_.v99 = -1;
        v93_.v100 = -1;
        v93_.v101 = -1;
        v54 = *msg_MessageManager_instance__ptr[0];
        v93_.v102 = -1;
        v93_.v103 = -1;
        v93_.v104 = -1;
        v93_.v105 = -1;
        v93_.v106 = -1;
        v93_.v107 = -1;
        v93_.v108 = -1;
        v93_.v109 = -1;
        v93_.v93 = (__int64 (**)(void))(GameData_212e348 + 2);
        v93_.v94 = (__int64*)0xFFFF0001FFFF0000LL;
        v93_.v95 = 0xFFFF0004FFFF0002LL;
        v93_.v96 = 0xFFFF0006FFFF0005LL;
        v93_.v110 = 8;
        v93_.v97 = (unsigned __int64*)0xFFFF0008FFFF0007LL;
        v55 = GameRoutine_a4dbe0_alt1(v54, "MID_Sys_ValueEmpty", 0);
        if (v55 != nullptr) {
          v56 = (__int64)v55;
          v57 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 952),
                                                   "T_MagicEndureNum");
          if (v57 != 0) {
            GameRoutine_156c5d0(v57, v56, 0);
          }
        }
      }
      else {
        v51 = HIDWORD(v89);
        v52 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 952),
                                              "T_MagicEndureNum");
        if (v52 != 0) {
          v53 = __dynamic_cast(v52, GameData_212d670[0], GameData_212d690, 0);
          if (v53 != 0) {
            GameRoutine_156c910_alt1(v53, "%d", 1,
                                     (unsigned int)(100 * v51 / v50));
          }
        }
      }
      ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 952, "A_Icon", 1);
      if (v86_.v87 == (char*)v86_.v86) {
        v61 = nullptr;
      }
      else {
        v58 = nullptr;
        v59 = GameData_212d670[0];
        v60 = GameData_212d678[0];
        do {
          v62 = game_util_Format("Icon%02d", (_DWORD)v58);
          ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 952, v62, 1);
          v63 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 952), v62);
          if (v63 != 0) {
            v64 = __dynamic_cast(v63, v59, v60, 0);
            if (v64 != 0) {
              v65 = &GameData_1a9f09e;
              v66 = (unsigned __int8)v58[v86_.v86];
              if (v66 <= 6) {
                v65 = GameData_20757f0[v66];
              }
              Manager_136a920(ui_Manager_instance_ + 1264, v64, 0, 7u, v65);
            }
          }
          ++v58;
          v61 = &v86_.v87[-v86_.v86];
        } while (&v86_.v87[-v86_.v86] > v58);
      }
      if (v61 < v10) {
        do {
          v67 = game_util_Format("Icon%02d", (_DWORD)v61);
          ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 952, v67, 0);
          ++v61;
        } while (v10 != v61);
      }
      v68 =
          ui_LayoutAccessor_FindAlignment_alt1((__int64*)(a1 + 952), "A_Icon");
      if (v68 != 0) {
        Alignment_56b600(v68);
      }
    LABEL_80:
      v69 = v86_.v86;
      if (v86_.v86 == 0) {
        return;
      }
      v86_.v87 = (char*)v86_.v86;
      goto LABEL_82;
    }
  LABEL_32:
    v21 = msg_MessageManager_instance__ptr[0];
    v93_.v98 = -1;
    v93_.v99 = -1;
    v93_.v100 = -1;
    v93_.v101 = -1;
    v22 = *msg_MessageManager_instance__ptr[0];
    v93_.v102 = -1;
    v93_.v103 = -1;
    v93_.v104 = -1;
    v93_.v105 = -1;
    v93_.v106 = -1;
    v93_.v107 = -1;
    v93_.v108 = -1;
    v93_.v109 = -1;
    v93_.v95 = 0xFFFF0004FFFF0002LL;
    v93_.v96 = 0xFFFF0006FFFF0005LL;
    v93_.v97 = (unsigned __int64*)0xFFFF0008FFFF0007LL;
    v23 = GameData_212e348 + 2;
    v93_.v93 = (__int64 (**)(void))(GameData_212e348 + 2);
    v93_.v94 = (__int64*)0xFFFF0001FFFF0000LL;
    v93_.v110 = 8;
    v24 = GameRoutine_a4dbe0_alt1(v22, "MID_Sys_ValueEmpty", 0);
    if (v24 != nullptr) {
      v25 = (__int64)v24;
      v26 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 952), "T_LvNum");
      if (v26 != 0) {
        GameRoutine_156c5d0(v26, v25, 0);
      }
    }
    v27 = *v21;
    v93_.v98 = -1;
    v93_.v99 = -1;
    v93_.v100 = -1;
    v93_.v101 = -1;
    v93_.v102 = -1;
    v93_.v103 = -1;
    v93_.v104 = -1;
    v93_.v105 = -1;
    v93_.v106 = -1;
    v93_.v107 = -1;
    v93_.v108 = -1;
    v93_.v109 = -1;
    v93_.v93 = (__int64 (**)(void))v23;
    v93_.v94 = (__int64*)0xFFFF0001FFFF0000LL;
    v93_.v95 = 0xFFFF0004FFFF0002LL;
    v93_.v96 = 0xFFFF0006FFFF0005LL;
    v93_.v110 = 8;
    v93_.v97 = (unsigned __int64*)0xFFFF0008FFFF0007LL;
    v28 = GameRoutine_a4dbe0_alt1(v27, "MID_Sys_ValueEmpty", 0);
    if (v28 != nullptr) {
      v29 = (__int64)v28;
      v30 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 952), "T_HpNum");
      if (v30 != 0) {
        GameRoutine_156c5d0(v30, v29, 0);
      }
    }
    v31 = *v21;
    v93_.v98 = -1;
    v93_.v99 = -1;
    v93_.v100 = -1;
    v93_.v101 = -1;
    v93_.v102 = -1;
    v93_.v103 = -1;
    v93_.v104 = -1;
    v93_.v105 = -1;
    v93_.v106 = -1;
    v93_.v107 = -1;
    v93_.v108 = -1;
    v93_.v109 = -1;
    v32 = GameData_212e348 + 2;
    v93_.v95 = 0xFFFF0004FFFF0002LL;
    v93_.v96 = 0xFFFF0006FFFF0005LL;
    v93_.v97 = (unsigned __int64*)0xFFFF0008FFFF0007LL;
    v93_.v93 = (__int64 (**)(void))(GameData_212e348 + 2);
    v93_.v94 = (__int64*)0xFFFF0001FFFF0000LL;
    v93_.v110 = 8;
    v33 = GameRoutine_a4dbe0_alt1(v31, "MID_Sys_ValueEmpty", 0);
    if (v33 != nullptr) {
      v34 = (__int64)v33;
      v35 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 952),
                                               "T_HpMaxNum");
      if (v35 != 0) {
        GameRoutine_156c5d0(v35, v34, 0);
      }
    }
    v36 = *v21;
    v93_.v98 = -1;
    v93_.v99 = -1;
    v93_.v100 = -1;
    v93_.v101 = -1;
    v93_.v102 = -1;
    v93_.v103 = -1;
    v93_.v104 = -1;
    v93_.v105 = -1;
    v93_.v106 = -1;
    v93_.v107 = -1;
    v93_.v108 = -1;
    v93_.v109 = -1;
    v93_.v93 = (__int64 (**)(void))v32;
    v93_.v94 = (__int64*)0xFFFF0001FFFF0000LL;
    v93_.v95 = 0xFFFF0004FFFF0002LL;
    v93_.v96 = 0xFFFF0006FFFF0005LL;
    v93_.v110 = 8;
    v93_.v97 = (unsigned __int64*)0xFFFF0008FFFF0007LL;
    v37 = GameRoutine_a4dbe0_alt1(v36, "MID_Sys_ValueEmpty", 0);
    if (v37 != nullptr) {
      v38 = (__int64)v37;
      v39 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 952),
                                               "T_MagicEndureNum");
      if (v39 != 0) {
        GameRoutine_156c5d0(v39, v38, 0);
      }
    }
    ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 952, "A_Icon", 0);
    goto LABEL_80;
  }
  LayoutAccessor_1562cf0_alt1(a1 + 952, (unsigned int*)"InfoIsm");
  v93_.v94 = (__int64*)&GameData_1ade186;
  v93_.v93 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ade186);
  if (game_GameModeData_instance_ != 0 &&
      (v6 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v93_.v93)) != 0) {
    v7 = *(_DWORD*)(v6 + 32);
  }
  else {
    v7 = 0;
  }
  LODWORD(v86_.v86) = 0;
  v93_.v93 = GameData_1fb0cb0;
  v93_.v94 = &v86_.v86;
  v93_.v97 = (unsigned __int64*)&v93_.v93;
  CorpsManager_9726e0((__int64)&v93_.v93);
  if (v93_.v97 == (unsigned __int64*)&v93_.v93) {
    v40 = 32;
    goto LABEL_86;
  }
  if (v93_.v97 != nullptr) {
    v40 = 40;
  LABEL_86:
    (*(void (**)(__int64))(*v93_.v97 + v40))((__int64)v93_.v97);
  }
  v71 = ((v86_.v86 & 2) != 0) + (v86_.v86 & 1) + ((v86_.v86 & 4) != 0) +
        ((v86_.v86 & 8) != 0) + ((v86_.v86 & 0x10) != 0) +
        ((v86_.v86 & 0x20) != 0) + ((v86_.v86 & 0x40) != 0) +
        ((v86_.v86 & 0x80) != 0) + ((v86_.v86 & 0x100) != 0);
  v72 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 952), "T_Num");
  if (v72 != 0) {
    v73 = __dynamic_cast(v72, GameData_212d670[0], GameData_212d690, 0);
    if (v73 != 0) {
      GameRoutine_156c910_alt1(v73, "%d", 1, (unsigned int)(v7 - v71));
    }
  }
  v74 = GameData_212da30;
  v75 = (char*)GameData_212da30 + 60;
  if (v7 != v71) {
    v75 = (char*)GameData_212da30 + 36;
  }
  v76 = *(_DWORD*)v75;
  v77 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 952), "T_Num");
  if (v77 != 0) {
    v78 = Pane_58f8a0(v77);
    if (v78 != 0) {
      *(_DWORD*)(v78 + 12) = v76;
    }
  }
  LOWORD(v93_.v93) = 0;
  v86_.v87 = (char*)&GameData_1a96743;
  v86_.v86 = game_HashString((__int64)&GameData_1a96743);
  if (game_GameModeData_instance_ != 0 &&
      (v79 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v86_.v86)) != 0) {
    if (*(_DWORD*)(v79 + 32) != 0) {
      v80 = "MID_Gmap_CoopsSelect_Hub_Disable";
    }
    else {
      v80 = "MID_Gmap_CoopsSelect_Hub_Enable";
    }
    if (*(_DWORD*)(v79 + 32) != 0) {
      v81 = 18;
    }
    else {
      v81 = 11;
    }
  }
  else {
    v80 = "MID_Gmap_CoopsSelect_Hub_Enable";
    v81 = 11;
  }
  GameRoutine_60a020_alt1((__int64)&v93_.v93, v80);
  if (((unsigned __int8)v93_.v93 & 1) != 0) {
    v82 = (const char*)v93_.v95;
  }
  else {
    v82 = (char*)&v93_.v93 + 1;
  }
  LayoutAccessor_1562060_alt1((__int64*)(a1 + 952), "T_Stay", v82);
  v83 = v74[v81];
  v84 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 952), "T_Stay");
  if (v84 != 0) {
    v85 = Pane_58f8a0(v84);
    if (v85 != 0) {
      *(_DWORD*)(v85 + 12) = v83;
    }
  }
  if (((unsigned __int8)v93_.v93 & 1) != 0) {
    v69 = v93_.v95;
    if (v93_.v95 != 0) {
    LABEL_82:
      v70 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v70 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v69);
    }
  }
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
