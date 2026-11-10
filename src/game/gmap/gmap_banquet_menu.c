#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1642910(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17871c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_969e20(_QWORD, _QWORD);
__int64 GameRoutine_96a120(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_gmap_BanquetManager_EachItem(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aa85de;
extern _UNKNOWN GameData_21f4988;
extern __int64 (*GameData_1fb0600[])();
extern __int64 (*GameData_1fb0690[])();
extern __int64 (*GameData_2072818[])();
extern __int64 GameData_1a90b83;
extern __int64 GameData_1a98a5c;
extern __int64 GameData_1acaa67;
extern __int64 GameData_2071e68;
extern __int64 GameData_21f4978;
extern __int64 GameData_21f4980;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_g_game_setting_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 GmapBanquetMenu_Unknown48(__int64 a1, __int64* a2);
__int64 GmapBanquetMenu_Unknown41(__int64 result);
__int64 GmapBanquetMenu_16415a0(__int64 result, __int64 a2);
__int64 GmapBanquetMenu_16416e0(__int64 a1);
__int64 GmapBanquetMenu_16420e0(__int64 a1);
__int64 GameRoutine_1360d40(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212d750;
extern __int64 GameData_21f3d10;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
bool game_gmap_GmapBanquetMenu_SubImpl_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 game_gmap_GmapBanquetMenu_Run_lambda0_Invoke(__int64 a1);

__int64 GmapBanquetMenu_Unknown48(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "TroopList";
    *(_QWORD*)(v15 + 8) = "MID_SysMenu_TroopList";
    *(_BYTE*)(v15 + 28) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_BYTE*)(v15 + 16) = 1;
    v16 = v14 + 40 * v12;
    v6 = v14 + v8 + 40;
    *(_DWORD*)(v15 + 20) = 7;
    *(_DWORD*)(v15 + 24) = result;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "TroopList";
    *(_QWORD*)(v4 + 8) = "MID_SysMenu_TroopList";
    v6 = v4 + 40;
    *(_BYTE*)(v4 + 16) = 1;
    *(_DWORD*)(v4 + 20) = 7;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

__int64 GmapBanquetMenu_Unknown41(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(result + 356) & 1) != 0) {
    v1 = result;
    GameRoutine_1567590("Tutorial", 1);
    GameRoutine_1567590("TroopList", 1);
    v2 = *(_QWORD*)(v1 + 320);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v2 + 240LL))(v2, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v2 + 248LL))(v2, 0);
    v3 = *(_QWORD*)(v1 + 312);
    LODWORD(v1) =
        *(_DWORD*)(*(_QWORD*)(v1 + 8LL * *(unsigned int*)(v1 + 352) + 304) +
                   1064LL) != 0;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v3 + 240LL))(v3, (unsigned int)v1);
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v3 + 248LL))(
        v3, (unsigned int)v1);
  }
  return result;
}

__int64 GmapBanquetMenu_16415a0(__int64 result, __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 (***v8)();
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 (**v14)();
  unsigned int v15;
  __int64 (***v16)();
  __int64 v17;

  v2 = *(_DWORD*)(*(_QWORD*)(result + 360) + 4LL * (int)a2);
  if (v2 == -1) {
    return result;
  }
  v3 = *(_QWORD*)(result + 312);
  v4 = a2;
  v5 = result;
  if (v3 == 0) {
    goto LABEL_16;
  }
  v7 = *(_QWORD*)(v3 + 256);
  v6 = *(_QWORD*)(v3 + 264);
  v8 = &v14;
  v15 = v2;
  v14 = GameData_2072818;
  v16 = &v14;
  if (v6 == v7) {
    goto LABEL_14;
  }
  v9 = 0;
  v10 = GameData_212e008[0];
  do {
    v11 = *(_QWORD*)(v7 + 8 * v9);
    if (v11 != 0) {
      v12 = __dynamic_cast(v11, v10, &GameData_2071e68, 0);
      if (v12 == 0) {
        goto LABEL_5;
      }
      v17 = v12;
      if (v16 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      if ((((__int64 (*)(__int64 (***)(), __int64*))(*v16)[6])(v16, &v17) &
           1) != 0) {
        break;
      }
      v7 = *(_QWORD*)(v3 + 256);
      v6 = *(_QWORD*)(v3 + 264);
    }
  LABEL_5:
    ++v9;
  } while (v9 < (v6 - v7) >> 3);
  v8 = v16;
  if (v16 != &v14) {
    if (v16 != nullptr) {
      v13 = 5;
      goto LABEL_15;
    }
    goto LABEL_16;
  }

LABEL_14:
  v13 = 4;

LABEL_15:
  ((void (*)(__int64 (***)(), __int64))(*v8)[v13])(v8, a2);

LABEL_16:
  result = GameRoutine_96a120(v5 + 384, v2);
  *(_DWORD*)(*(_QWORD*)(v5 + 360) + 4LL * v4) = -1;
  return result;
}

__int64 GmapBanquetMenu_16416e0(__int64 a1)
{
  int* v1;
  int* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 (**v21)();
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 (**v39)();
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 (**v47)();
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 (**v54)();
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 (**v61)();
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 (**v68)();
  __int64 v69;
  unsigned int v70;
  __int64 v71;
  unsigned int v72;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int64 (**v78)();
  __int64* v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  __int64 (***v82)();
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;

  v1 = *(int**)(a1 + 360);
  v2 = *(int**)(a1 + 368);
  v76 = 0;
  v77 = 0;
  v74 = 0;
  v75 = 0;
  if (v1 == v2) {
    v14 = 0;
    v15 = 0;
    v12 = 0;
    v13 = 0;
    v11 = 0;
    v10 = 0;
    v9 = 0;
  }
  else {
    v4 = *(_QWORD*)game_TransporterConst_List_instance__ptr[0];
    v5 = *GameData_212c878[0];
    do {
      if (*v1 != -1) {
        v6 = *(_QWORD*)(*(_QWORD*)(v5 + 64) +
                        8LL *
                            *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) +
                                                            8LL) +
                                                 12LL * *v1 + 4));
        v7 = *(unsigned __int8*)(v6 + 94);
        v8 = *(unsigned __int8*)(v6 + 95);
        ++*((_DWORD*)&v76 + v7);
        ++*((_DWORD*)&v74 + v8);
      }
      ++v1;
    } while (v1 != v2);
    v9 = v76;
    v10 = HIDWORD(v76);
    v11 = v77;
    v13 = v74;
    v12 = HIDWORD(v74);
    v15 = v75;
    v14 = HIDWORD(v75);
  }
  v16 = a1 + 200;
  if (v13 > v12) {
    v12 = v13;
  }
  if (v12 > v15) {
    v15 = v12;
  }
  if (v15 > v14) {
    v14 = v15;
  }
  if (v14 <= 1) {
    v17 = 1;
  }
  else {
    v17 = v14;
  }
  if (v9 <= v10) {
    v18 = v10;
  }
  else {
    v18 = v9;
  }
  if (v18 <= v11) {
    v18 = v11;
  }
  if (v18 <= 1) {
    v19 = 1;
  }
  else {
    v19 = v18;
  }
  GameRoutine_1560070(&v78, v16, "L_List");
  if (v79 != nullptr) {
    v20 = std___1___shared_weak_count_lock(v79);
    v21 = v78;
    if (v79 != nullptr) {
      std___1___shared_weak_count___release_weak(v79);
    }
    if (v20 == 0 || v21 == nullptr) {
    LABEL_113:
      if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak(v20);
      }
      goto LABEL_116;
    }
    if (v19 == v9 &&
        (v22 = game_util_Format("IconFood%02d", 0),
         (v23 = ui_LayoutAccessor_FindPane(v21, v22)) != 0) &&
        (v24 = __dynamic_cast(v23, GameData_212d670[0], GameData_212d678[0],
                              0)) != 0) {
      *(_BYTE*)(v24 + 88) |= 1u;
      GameRoutine_136a920(ui_Manager_instance_ + 1264, v24, 0, 2,
                          &GameData_1a98a5c);
      v25 = 1;
      if (v19 != v10) {
        goto LABEL_39;
      }
    }
    else {
      v25 = 0;
      if (v19 != v10) {
        goto LABEL_39;
      }
    }
    v26 = game_util_Format("IconFood%02d", v25);
    v27 = ui_LayoutAccessor_FindPane(v21, v26);
    if (v27 != 0) {
      v28 = __dynamic_cast(v27, GameData_212d670[0], GameData_212d678[0], 0);
      if (v28 != 0) {
        *(_BYTE*)(v28 + 88) |= 1u;
        GameRoutine_136a920(ui_Manager_instance_ + 1264, v28, 0, 2,
                            &GameData_1a90b83);
        ++v25;
      }
    }
  LABEL_39:
    if (v19 == v11) {
      v29 = game_util_Format("IconFood%02d", v25);
      v30 = ui_LayoutAccessor_FindPane(v21, v29);
      if (v30 != 0) {
        v31 = __dynamic_cast(v30, GameData_212d670[0], GameData_212d678[0], 0);
        if (v31 != 0) {
          *(_BYTE*)(v31 + 88) |= 1u;
          GameRoutine_136a920(ui_Manager_instance_ + 1264, v31, 0, 2,
                              &GameData_1acaa67);
          if (v25 >= 2) {
            goto LABEL_49;
          }
          ++v25;
        }
      }
    }
    v32 = GameData_212d670[0];
    v33 = GameData_212d678[0];
    do {
      v34 = game_util_Format("IconFood%02d", v25);
      v35 = ui_LayoutAccessor_FindPane(v21, v34);
      if (v35 != 0) {
        v36 = __dynamic_cast(v35, v32, v33, 0);
        if (v36 != 0) {
          *(_BYTE*)(v36 + 88) &= ~1u;
        }
      }
      ++v25;
    } while (v25 != 3);
  LABEL_49:
    if (v17 == v13 && (v37 = game_util_Format("L_Taste%02d", 0),
                       GameRoutine_1560070(&v78, v21, v37), v79 != nullptr)) {
      v38 = std___1___shared_weak_count_lock(v79);
      v39 = v78;
      if (v79 != nullptr) {
        std___1___shared_weak_count___release_weak(v79);
      }
      if (v38 != 0 && v39 != nullptr) {
        v40 = 1;
        GameRoutine_155e830(v39, 1);
        v83 = -1;
        v84 = -1;
        v85 = -1;
        v86 = -1;
        v41 = *msg_MessageManager_instance__ptr[0];
        v87 = -1;
        v88 = -1;
        v89 = -1;
        v90 = -1;
        v91 = -1;
        v92 = -1;
        v93 = -1;
        v94 = -1;
        v78 = (__int64 (**)())(GameData_212e348 + 2);
        v79 = (__int64*)0xFFFF0001FFFF0000LL;
        v80 = 0xFFFF0004FFFF0002LL;
        v81 = 0xFFFF0006FFFF0005LL;
        v95 = 8;
        v82 = (__int64 (***)())0xFFFF0008FFFF0007LL;
        v42 = GameRoutine_a4dbe0(v41, "MID_Sys_Taste_Sweet", 0, &v78);
        if (v42 != 0) {
          v43 = v42;
          v44 = ui_LayoutAccessor_FindTextBox(v39, "T_Taste");
          if (v44 != 0) {
            GameRoutine_156c5d0(v44, v43, 0);
          }
        }
      }
      else {
        v40 = 0;
        if (v38 == 0) {
          goto LABEL_59;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
        std___1___shared_weak_count___release_weak(v38);
      }
    }
    else {
      v40 = 0;
    }
  LABEL_59:
    if (v17 == HIDWORD(v74)) {
      v45 = game_util_Format("L_Taste%02d", v40);
      GameRoutine_1560070(&v78, v21, v45);
      if (v79 != nullptr) {
        v46 = std___1___shared_weak_count_lock(v79);
        v47 = v78;
        if (v79 != nullptr) {
          std___1___shared_weak_count___release_weak(v79);
        }
        if (v46 != 0 && v47 != nullptr) {
          GameRoutine_155e830(v47, 1);
          v83 = -1;
          v84 = -1;
          v85 = -1;
          v86 = -1;
          v48 = *msg_MessageManager_instance__ptr[0];
          v87 = -1;
          v88 = -1;
          v89 = -1;
          v90 = -1;
          v91 = -1;
          v92 = -1;
          v93 = -1;
          v94 = -1;
          v78 = (__int64 (**)())(GameData_212e348 + 2);
          v79 = (__int64*)0xFFFF0001FFFF0000LL;
          v80 = 0xFFFF0004FFFF0002LL;
          v81 = 0xFFFF0006FFFF0005LL;
          v95 = 8;
          v82 = (__int64 (***)())0xFFFF0008FFFF0007LL;
          v49 = GameRoutine_a4dbe0(v48, "MID_Sys_Taste_Spicy", 0, &v78);
          if (v49 != 0) {
            v50 = v49;
            v51 = ui_LayoutAccessor_FindTextBox(v47, "T_Taste");
            if (v51 != 0) {
              GameRoutine_156c5d0(v51, v50, 0);
            }
          }
          ++v40;
        }
        else if (v46 == 0) {
          goto LABEL_75;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
          std___1___shared_weak_count___release_weak(v46);
        }
      }
    }
  LABEL_75:
    if (v17 == (_DWORD)v75) {
      v52 = game_util_Format("L_Taste%02d", v40);
      GameRoutine_1560070(&v78, v21, v52);
      if (v79 != nullptr) {
        v53 = std___1___shared_weak_count_lock(v79);
        v54 = v78;
        if (v79 != nullptr) {
          std___1___shared_weak_count___release_weak(v79);
        }
        if (v53 != 0 && v54 != nullptr) {
          GameRoutine_155e830(v54, 1);
          v83 = -1;
          v84 = -1;
          v85 = -1;
          v86 = -1;
          v55 = *msg_MessageManager_instance__ptr[0];
          v87 = -1;
          v88 = -1;
          v89 = -1;
          v90 = -1;
          v91 = -1;
          v92 = -1;
          v93 = -1;
          v94 = -1;
          v78 = (__int64 (**)())(GameData_212e348 + 2);
          v79 = (__int64*)0xFFFF0001FFFF0000LL;
          v80 = 0xFFFF0004FFFF0002LL;
          v81 = 0xFFFF0006FFFF0005LL;
          v95 = 8;
          v82 = (__int64 (***)())0xFFFF0008FFFF0007LL;
          v56 = GameRoutine_a4dbe0(v55, "MID_Sys_Taste_Bitter", 0, &v78);
          if (v56 != 0) {
            v57 = v56;
            v58 = ui_LayoutAccessor_FindTextBox(v54, "T_Taste");
            if (v58 != 0) {
              GameRoutine_156c5d0(v58, v57, 0);
            }
          }
          ++v40;
          goto LABEL_86;
        }
        if (v53 != 0) {
        LABEL_86:
          if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
            std___1___shared_weak_count___release_weak(v53);
          }
        }
      }
    }
    if (v17 == HIDWORD(v75)) {
      v59 = game_util_Format("L_Taste%02d", v40);
      GameRoutine_1560070(&v78, v21, v59);
      if (v79 != nullptr) {
        v60 = std___1___shared_weak_count_lock(v79);
        v61 = v78;
        if (v79 != nullptr) {
          std___1___shared_weak_count___release_weak(v79);
        }
        if (v60 != 0 && v61 != nullptr) {
          GameRoutine_155e830(v61, 1);
          v83 = -1;
          v84 = -1;
          v85 = -1;
          v86 = -1;
          v62 = *msg_MessageManager_instance__ptr[0];
          v87 = -1;
          v88 = -1;
          v89 = -1;
          v90 = -1;
          v91 = -1;
          v92 = -1;
          v93 = -1;
          v94 = -1;
          v78 = (__int64 (**)())(GameData_212e348 + 2);
          v79 = (__int64*)0xFFFF0001FFFF0000LL;
          v80 = 0xFFFF0004FFFF0002LL;
          v81 = 0xFFFF0006FFFF0005LL;
          v95 = 8;
          v82 = (__int64 (***)())0xFFFF0008FFFF0007LL;
          v63 = GameRoutine_a4dbe0(v62, "MID_Sys_TasteCate", 0, &v78);
          if (v63 != 0) {
            v64 = v63;
            v65 = ui_LayoutAccessor_FindTextBox(v61, "T_Taste");
            if (v65 != 0) {
              GameRoutine_156c5d0(v65, v64, 0);
            }
          }
          ++v40;
        }
        else if (v60 == 0) {
          goto LABEL_104;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
          std___1___shared_weak_count___release_weak(v60);
        }
        if (v40 >= 4) {
          goto LABEL_113;
        }
      }
    }
    while (1) {
    LABEL_104:
      v66 = game_util_Format("L_Taste%02d", v40);
      GameRoutine_1560070(&v78, v21, v66);
      if (v79 != nullptr) {
        v67 = std___1___shared_weak_count_lock(v79);
        v68 = v78;
        if (v79 != nullptr) {
          std___1___shared_weak_count___release_weak(v79);
        }
        if (v67 != 0 && v68 != nullptr) {
          GameRoutine_155e830(v68, 0);
        LABEL_111:
          if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
            std___1___shared_weak_count___release_weak(v67);
          }
          goto LABEL_103;
        }
        if (v67 != 0) {
          goto LABEL_111;
        }
      }
    LABEL_103:
      if (++v40 == 4) {
        goto LABEL_113;
      }
    }
  }

LABEL_116:
  LODWORD(v74) = 0;
  v78 = GameData_1fb0600;
  v79 = &v74;
  v82 = &v78;
  game_gmap_BanquetManager_EachItem(a1 + 384, &v78);
  if (v82 == &v78) {
    v69 = 4;
  }
  else {
    if (v82 == nullptr) {
      goto LABEL_121;
    }
    v69 = 5;
  }
  (*v82)[v69]();

LABEL_121:
  v70 = v74;
  LODWORD(v74) = 0;
  v78 = GameData_1fb0690;
  v79 = &v74;
  v82 = &v78;
  game_gmap_BanquetManager_EachItem(a1 + 384, &v78);
  if (v82 == &v78) {
    v71 = 4;
    goto LABEL_125;
  }
  if (v82 != nullptr) {
    v71 = 5;
  LABEL_125:
    (*v82)[v71]();
  }
  v72 = v74;
  GameRoutine_1642910(a1, "T_NumHP", v70);
  return GameRoutine_1642910(a1, "T_NumMajic", v72);
}

__int64 GmapBanquetMenu_16420e0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  char* v7;
  char* v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 result;
  int v28;
  _QWORD* v29;
  __int64 v30;
  __int64* v31;
  __int64* v32;
  int v33;
  __int64* v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;

  *(_DWORD*)(a1 + 356) &= ~1u;
  GameRoutine_1567590("Tutorial", 0);
  GameRoutine_1567590("TroopList", 0);
  v2 = *(_QWORD*)(a1 + 312);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v2 + 240LL))(v2, 1);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v2 + 248LL))(v2, 1);
  v3 = *(_QWORD*)(a1 + 320);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 240LL))(v3, 1);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 248LL))(v3, 1);
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 328) + 8LL);
  v5 = *(_DWORD*)(*(_QWORD*)(a1 + 336) + 8LL);
  if ((v5 & 0x80000000) == 0) {
    v6 = *(_QWORD*)(a1 + 312);
    v7 = *(char**)(v6 + 232);
    v8 = *(char**)(v6 + 240);
    if (v7 != v8) {
      v9 = v8 - v7 - 8;
      v10 = (v9 >> 3) + 1;
      if (v9 >= 0x18) {
        v14 = 0;
        while (v5 != (_DWORD)v14) {
          if (v5 == (_DWORD)v14 + 1) {
            v15 = *((_QWORD*)v7 + 1);
            if (v15 != 0) {
              goto LABEL_21;
            }
            goto LABEL_23;
          }
          if (v5 == (_DWORD)v14 + 2) {
            v7 += 16;
            break;
          }
          if (v5 == (_DWORD)v14 + 3) {
            v15 = *((_QWORD*)v7 + 3);
            if (v15 != 0) {
              goto LABEL_21;
            }
            goto LABEL_23;
          }
          v7 += 32;
          v14 += 4;
          v11 = v14;
          if ((v10 & 0x3FFFFFFFFFFFFFFCLL) == v14) {
            goto LABEL_5;
          }
        }
      }
      else {
        v11 = 0;
      LABEL_5:
        v12 = v10 & 3;
        if (v12 == 0) {
          goto LABEL_23;
        }
        v13 = v5 - v11;
        while (v13 != 0) {
          v7 += 8;
          --v13;
          if (--v12 == 0) {
            goto LABEL_23;
          }
        }
      }
      v15 = *(_QWORD*)v7;
      if (*(_QWORD*)v7 != 0) {
      LABEL_21:
        v16 = __dynamic_cast(v15, GameData_212e008[0], &GameData_2071e68, 0);
        goto LABEL_24;
      }
    }
  }

LABEL_23:
  v16 = 0;

LABEL_24:
  ++*(_DWORD*)(v16 + 96);
  GmapBanquetMenu_16415a0(a1, (unsigned int)v4);
  v17 = *(_DWORD*)(v16 + 40);
  GameRoutine_969e20(a1 + 384, v17);
  v18 = a1 + 304;
  *(_DWORD*)(*(_QWORD*)(a1 + 360) + 4 * v4) = v17;
  v19 = *(_QWORD*)(*(_QWORD*)(a1 + 304) + 232LL);
  if ((_DWORD)v4 != 0) {
    v20 = v4 & 7;
    if ((unsigned int)v4 >= 8) {
      v21 = v4 & 0x7FFFFFF8;
      do {
        v19 += 64;
        v21 -= 8;
      } while (v21 != 0);
    }
    if ((v4 & 7) != 0) {
      do {
        v19 += 8;
        --v20;
      } while (v20 != 0);
    }
  }
  *(_DWORD*)(*(_QWORD*)v19 + 40LL) = v17;
  game_menu_BasicMenu_Unknown16dd9a0(*(_QWORD*)(a1 + 304));
  game_menu_BasicMenu_Unknown16dd9a0(*(_QWORD*)(a1 + 312));
  game_menu_BasicMenu_Unknown16dd9a0(*(_QWORD*)(a1 + 320));
  v22 = *(_QWORD*)(v18 + 8LL * *(unsigned int*)(a1 + 352));
  if (v22 != 0) {
    v23 = *(_QWORD*)(v22 + 336);
    if (v23 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v23 + 168LL))(*(_QWORD*)(v22 + 336));
    }
    *(_QWORD*)(v22 + 336) = v23;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v22, 1, 0, 0);
    v24 = *(_QWORD*)(v22 + 336);
    if (v24 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 160LL))(v24);
      game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr + 712LL);
      v25 = *(_QWORD*)(v22 + 336);
      v26 = 4;
      if (v25 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v25 + 120LL))(v25) & 1) != 0) {
          v26 = 4;
        }
        else {
          v26 = 0;
        }
      }
    }
    else {
      v26 = 4;
    }
    *(_DWORD*)(v22 + 356) = *(_DWORD*)(v22 + 356) & 0xFFFFFFFB | v26;
  }
  GmapBanquetMenu_16416e0(a1);
  result = GameRoutine_17871c0(
      a1,
      *(_DWORD*)(*(_QWORD*)(v18 + 8LL * *(unsigned int*)(a1 + 352)) + 1064LL) ==
          0,
      0);
  v28 = *(_DWORD*)(a1 + 356);
  if ((v28 & 2) != 0) {
    *(_DWORD*)(a1 + 356) = v28 & 0xFFFFFFFD;
    v29 = *(_QWORD**)(a1 + 304);
    v30 = v29[42];
    if (v30 != 0) {
      v31 = (__int64*)v29[29];
      v32 = (__int64*)v29[30];
      if (v31 != v32) {
        v33 = 1;
        v34 = (__int64*)v29[29];
        do {
          v35 = *v34++;
          if (v35 == v30) {
            goto LABEL_47;
          }
          ++v33;
        } while (v34 != v32);
        v33 = 0;
      LABEL_47:
        v36 = 0;
        do {
          v37 = *v31;
          result = (*(__int64 (**)(__int64))(*(_QWORD*)*v31 + 40LL))(*v31);
          if ((result & 1) != 0) {
            if (v33 == v36) {
              (*(void (**)(__int64, _QWORD))(*(_QWORD*)v30 + 64LL))(v30, 0);
              v38 = *(_QWORD*)v18;
              v39 = *(_QWORD*)(*(_QWORD*)v18 + 336LL);
              if (v39 != 0) {
                (*(void (**)(__int64))(*(_QWORD*)v39 + 168LL))(v39);
              }
              *(_QWORD*)(v38 + 336) = v37;
              _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v38, 1, 0, 0);
              result = *(_QWORD*)(v38 + 336);
              if (result != 0) {
                (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
                game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr +
                                        712LL);
                result = *(_QWORD*)(v38 + 336);
                v40 = 4;
                if (result != 0) {
                  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(
                      result);
                  if ((result & 1) != 0) {
                    v40 = 4;
                  }
                  else {
                    v40 = 0;
                  }
                }
              }
              else {
                v40 = 4;
              }
              *(_DWORD*)(v38 + 356) = *(_DWORD*)(v38 + 356) & 0xFFFFFFFB | v40;
              break;
            }
            ++v36;
          }
          ++v31;
        } while (v31 != v32);
      }
    }
  }
  v41 = *(_DWORD*)(a1 + 392);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4988,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21f4988);
    if ((_DWORD)result != 0) {
      GameData_21f4980 = (__int64)&GameData_1aa85de;
      GameData_21f4978 = game_HashString(&GameData_1aa85de, v43);
      result = __cxa_guard_release(&GameData_21f4988);
    }
  }
  v42 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
  LABEL_65:
    if (v41 < v42) {
      return result;
    }
    return GameRoutine_17871c0(a1, 2, 0);
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f4978);
  if (result != 0) {
    v42 = *(_DWORD*)(result + 32);
    goto LABEL_65;
  }
  if (v41 >= 0) {
    return GameRoutine_17871c0(a1, 2, 0);
  }
  return result;
}

bool game_gmap_GmapBanquetMenu_SubImpl_lambda0_Invoke(__int64 a1, __int64 a2)
{
  int v2;
  int v3;

  v2 = *(_DWORD*)(a1 + 8);
  v3 = *(_DWORD*)(*(_QWORD*)a2 + 40LL);
  if (v3 == v2) {
    --*(_DWORD*)(*(_QWORD*)a2 + 96LL);
  }
  return v3 == v2;
}

__int64 game_gmap_GmapBanquetMenu_Run_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL);
  *(_DWORD*)(v2 + 24) = *(_DWORD*)(v1 + 392);
  if (v2 + 16 != v1 + 384) {
    *(_DWORD*)(v2 + 64) = *(_DWORD*)(v1 + 432);
    GameRoutine_1360d40(v2 + 32, *(_QWORD*)(v1 + 416), 0);
  }
  if (GameData_21f3d10 == 0 || *(_BYTE*)(GameData_21f3d10 + 9) != 1 ||
      *(_DWORD*)(GameData_21f3d10 + 136) != 1) {
    if (GameData_22549a8 != 0) {
      *(_DWORD*)(GameData_22549a8 + 272) = 6;
    }
    else {
      v3 = GameData_22506e0;
      if (GameData_22506e0 != 0) {
        *(_DWORD*)(GameData_22506e0 + 208) = 6;
        v4 = 5;
      }
      else {
        v3 = *(_QWORD*)GameData_212d750;
        *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 6;
        v4 = 12;
      }
      *(_DWORD*)(v3 + 152) = v4;
    }
  }
  return 4;
}

#pragma GCC visibility pop
