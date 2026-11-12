#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* game_UnitPool_Get(_BYTE*);
__int64 ExchangeDialog_Unknown135(__int64);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 Impl_13261c0(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 SpotMgr_132ffa0(unsigned int*);
__int64 Util_1582f00(__int64*, unsigned __int8*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64* GameData_212c780;
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212cf80[5];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_1a9f09e;
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_6e3b50(__int64, _QWORD*);
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void __attribute__((noreturn)) GameRoutine_e66f80();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void LegionDialog_Unknown135(__int64 a1);

void LegionDialog_Unknown135(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  bool v9;
  __int64 v10;
  const char* v11;
  _BYTE* v12;
  int v13;
  __int64 v14;
  __int64* v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  const char* v22;
  int v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  const char* v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
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
  _QWORD* v49;
  __int64 v50;
  char v51;
  __int64 v52;
  _QWORD** v53;
  char v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  struct {
    __int64* v62;
    __int64 v63;
  } v62_;
  struct {
    __int64 v64;
    char* v65;
    unsigned __int64 v66;
    unsigned __int64 v67;
    int v68;
    int v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
  } v64_;

  ExchangeDialog_Unknown135(a1);
  v2 = *(unsigned int*)(a1 + 1572);
  if ((int)v2 >= 0) {
    v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v2);
  }
  else {
    v3 = GameData_212ceb0;
  }
  if (*(_BYTE*)v3 == 0) {
    return;
  }
  v4 = LayoutAccessor_155fbe0((__int64*)(a1 + 848), "L_Legion");
  Util_1582f00(v4, (unsigned __int8*)v3, *(_QWORD*)(a1 + 1576));
  LayoutAccessor_1560070((void*)(&v62_.v62), (__int64*)(a1 + 848), "L_Info");
  if (v62_.v63 != 0) {
    v5 = std___1___shared_weak_count_lock(v62_.v63);
    if (v5 == 0) {
    LABEL_50:
      if (v62_.v63 != 0) {
        std___1___shared_weak_count___release_weak(v62_.v63);
      }
      goto LABEL_52;
    }
    v6 = v62_.v62;
    v7 = v5;
    if (v62_.v62 == nullptr) {
    LABEL_48:
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
      goto LABEL_50;
    }
    v8 = *((_DWORD*)v3 + 1);
    v9 = v8 == 0 || *GameData_212c780 == 0;
    if (v9 || (v64_.v64 = v8, v64_.v65 = &GameData_1a9f09e,
               (v10 = SpotMgr_132ffa0((unsigned int*)&v64_.v64)) == 0)) {
      v13 = *((unsigned __int8*)v3 + 1);
      v12 = (char*)v3 + 1;
      if (v13 != 0 && game_UnitPool_Get(v12) != nullptr) {
        v64_.v70 = -1;
        v64_.v71 = -1;
        v64_.v72 = -1;
        v64_.v73 = -1;
        v14 = *msg_MessageManager_instance__ptr[0];
        v64_.v74 = -1;
        v64_.v75 = -1;
        v64_.v76 = -1;
        v64_.v77 = -1;
        v64_.v78 = -1;
        v64_.v79 = -1;
        v64_.v80 = -1;
        v64_.v81 = -1;
        v64_.v66 = 0xFFFF0004FFFF0002LL;
        v64_.v67 = 0xFFFF0006FFFF0005LL;
        v64_.v68 = -65529;
        v64_.v69 = -65528;
        v15 = GameData_212e348 + 2;
        v64_.v64 = (__int64)(GameData_212e348 + 2);
        v64_.v65 = (char*)0xFFFF0001FFFF0000LL;
        v64_.v82 = 8;
        v16 = GameRoutine_a4dbe0(v14, "MID_LegionDispatchMenu_Deployed", 0);
        if (v16 != nullptr) {
          v17 = (__int64)v16;
          v18 = ui_LayoutAccessor_FindTextBox(v6, "T_Title");
          if (v18 != 0) {
            GameRoutine_156c5d0(v18, v17, 0);
          }
        }
        v64_.v70 = -1;
        v64_.v71 = -1;
        v64_.v72 = -1;
        v64_.v73 = -1;
        v64_.v74 = -1;
        v64_.v75 = -1;
        v64_.v76 = -1;
        v64_.v77 = -1;
        v19 = *msg_MessageManager_instance__ptr[0];
        v64_.v78 = -1;
        v64_.v79 = -1;
        v64_.v80 = -1;
        v64_.v81 = -1;
        v64_.v66 = 0xFFFF0004FFFF0002LL;
        v64_.v67 = 0xFFFF0006FFFF0005LL;
        v64_.v68 = -65529;
        v64_.v69 = -65528;
        v64_.v64 = (__int64)v15;
        v64_.v65 = (char*)0xFFFF0001FFFF0000LL;
        v64_.v82 = 8;
        v20 = GameRoutine_a4dbe0(v19, "MID_Menu_Own", 0);
        if (v20 == nullptr) {
          goto LABEL_34;
        }
        v21 = (__int64)v20;
        v22 = "T_State";
      LABEL_30:
        v26 = ui_LayoutAccessor_FindTextBox(v6, v22);
        if (v26 != 0) {
          GameRoutine_156c5d0(v26, v21, 0);
          v27 = *(_QWORD*)(a1 + 1576);
          if (v27 == 0) {
            goto LABEL_47;
          }
        LABEL_35:
          if ((*(_BYTE*)(v27 + 178) & 4) != 0 &&
              game_GameModeData_instance_ != 0 &&
              *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
            goto LABEL_47;
          }
          v28 = (unsigned __int8)Impl_13261c0(v27);
          if (v28 != 9) {
            if (v28 == 8) {
              v29 = "MID_LegionDispatchMenu_FortInfo";
              goto LABEL_43;
            }
            if (v28 != 5) {
            LABEL_47:
              LayoutAccessor_1562cf0((__int64)v6, (unsigned int*)"HelpOff");
              goto LABEL_48;
            }
          }
          v29 = "MID_LegionDispatchMenu_ExploreInfo";
        LABEL_43:
          v64_.v70 = -1;
          v64_.v71 = -1;
          v64_.v72 = -1;
          v64_.v73 = -1;
          v30 = *msg_MessageManager_instance__ptr[0];
          v64_.v74 = -1;
          v64_.v75 = -1;
          v64_.v76 = -1;
          v64_.v77 = -1;
          v64_.v78 = -1;
          v64_.v79 = -1;
          v64_.v80 = -1;
          v64_.v81 = -1;
          v64_.v64 = (__int64)(GameData_212e348 + 2);
          v64_.v65 = (char*)0xFFFF0001FFFF0000LL;
          v64_.v66 = 0xFFFF0004FFFF0002LL;
          v64_.v67 = 0xFFFF0006FFFF0005LL;
          v64_.v82 = 8;
          v64_.v68 = -65529;
          v64_.v69 = -65528;
          v31 = GameRoutine_a4dbe0(v30, v29, 0);
          if (v31 != nullptr) {
            v32 = (__int64)v31;
            v33 = ui_LayoutAccessor_FindTextBox(v6, "T_Help");
            if (v33 != 0) {
              GameRoutine_156c5d0(v33, v32, 0);
            }
          }
          goto LABEL_48;
        }
      LABEL_34:
        v27 = *(_QWORD*)(a1 + 1576);
        if (v27 == 0) {
          goto LABEL_47;
        }
        goto LABEL_35;
      }
    }
    else {
      if ((*(_BYTE*)(v10 + 178) & 4) != 0 && game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v11 = "MID_LegionDispatchMenu_Reconstruction";
      LABEL_28:
        v64_.v70 = -1;
        v64_.v71 = -1;
        v64_.v72 = -1;
        v64_.v73 = -1;
        v24 = *msg_MessageManager_instance__ptr[0];
        v64_.v74 = -1;
        v64_.v75 = -1;
        v64_.v76 = -1;
        v64_.v77 = -1;
        v64_.v78 = -1;
        v64_.v79 = -1;
        v64_.v80 = -1;
        v64_.v81 = -1;
        v64_.v64 = (__int64)(GameData_212e348 + 2);
        v64_.v65 = (char*)0xFFFF0001FFFF0000LL;
        v64_.v66 = 0xFFFF0004FFFF0002LL;
        v64_.v67 = 0xFFFF0006FFFF0005LL;
        v64_.v82 = 8;
        v64_.v68 = -65529;
        v64_.v69 = -65528;
        v25 = GameRoutine_a4dbe0(v24, v11, 0);
        if (v25 == nullptr) {
          goto LABEL_34;
        }
        v22 = "T_Title";
        v21 = (__int64)v25;
        goto LABEL_30;
      }
      v23 = (unsigned __int8)Impl_13261c0(v10);
      switch (v23) {
      case 9:
        goto LABEL_27;
      case 8:
        LayoutAccessor_1562060(v6, "T_Title", "MID_LegionDispatchMenu_Fort");
        v27 = *(_QWORD*)(a1 + 1576);
        if (v27 == 0) {
          goto LABEL_47;
        }
        goto LABEL_35;
      case 5:
      LABEL_27:
        v11 = "MID_LegionDispatchMenu_Explore";
        goto LABEL_28;
      default:
        break;
      }
    }
    LayoutAccessor_1562cf0((__int64)v6, (unsigned int*)"StateOff");
    goto LABEL_34;
  }
LABEL_52:
  LayoutAccessor_1560070((void*)(&v64_.v64), (__int64*)(a1 + 848), "L_Legion");
  if (v64_.v65 != nullptr &&
      (v34 = std___1___shared_weak_count_lock((__int64)v64_.v65)) != 0) {
    v35 = v34;
    LayoutAccessor_1562cf0(v64_.v64, (unsigned int*)"Info");
    if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      std___1___shared_weak_count___release_weak(v35);
    }
  }
  else {
    LayoutAccessor_1562cf0(0, (unsigned int*)"Info");
  }
  if (v64_.v65 != nullptr) {
    std___1___shared_weak_count___release_weak((__int64)v64_.v65);
  }
  LayoutAccessor_1560070((void*)(&v64_.v64), (__int64*)(a1 + 848),
                         "L_InfoResult");
  if (v64_.v65 != nullptr) {
    v36 = std___1___shared_weak_count_lock((__int64)v64_.v65);
    v37 = (__int64*)v64_.v64;
    if (v64_.v65 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v64_.v65);
    }
    if (v36 != 0 && v37 != nullptr) {
      v38 = *(_QWORD*)(a1 + 1544);
      v39 = *(_QWORD*)(a1 + 1552);
      v40 = v39 - v38;
      if (v39 == v38) {
        LayoutAccessor_155e830((__int64)v37, v40);
      }
      else {
        v61 = v37;
        if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v40 >> 4)) >=
            0x24924924924924ALL) {
          GameRoutine_e66f80();
        }
        v41 = fw_memory_g_heap_manager_ptr;
        v42 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v40, 16, 0);
        v43 = 0;
        do {
          v47 = v38 + v43;
          v48 = v42 + v43;
          *(_DWORD*)v48 = *(_DWORD*)(v38 + v43);
          *(_QWORD*)(v48 + 4) = *(_QWORD*)(v38 + v43 + 4);
          if (*(_BYTE*)(v38 + v43 + 12) != 0) {
            v44 = *(_QWORD*)(v47 + 12);
          }
          else {
            v44 = 0;
          }
          *(_QWORD*)(v48 + 48) = 0;
          v45 = v48 + 48;
          *(_QWORD*)(v48 + 12) = v44;
          *(_WORD*)(v48 + 26) = 0;
          *(_DWORD*)(v48 + 28) = 0;
          *(_QWORD*)(v48 + 40) = v48 + 48;
          *(_QWORD*)(v48 + 56) = 0;
          *(_QWORD*)(v48 + 64) = 0;
          *(_QWORD*)(v48 + 72) = 0;
          *(_QWORD*)(v48 + 80) = 0;
          GameRoutine_930b90(v48 + 24, v47 + 24);
          v46 = *(_QWORD*)(v47 + 88);
          v43 += 112;
          *(_DWORD*)(v45 + 48) = *(_DWORD*)(v47 + 96);
          *(_QWORD*)(v45 + 40) = v46;
          *(_WORD*)(v45 + 56) = *(_WORD*)(v47 + 104);
        } while (v38 + v43 != v39);
        LayoutAccessor_155e830((__int64)v37, 1);
        do {
          v50 = v42 + v43;
          v51 = *(_BYTE*)(v42 + v43 - 48);
          *(_DWORD*)(v50 - 80) = 0;
          *(_QWORD*)(v50 - 88) = 0;
          if ((v51 & 1) != 0) {
            **(_BYTE**)(v50 - 32) = 0;
            *(_QWORD*)(v50 - 40) = 0;
          }
          else {
            *(_WORD*)(v50 - 48) = 0;
          }
          v52 = v42 + v43;
          v53 = (_QWORD**)(v42 + v43 - 64);
          GameRoutine_6e3b50(v42 + v43 - 72, *v53);
          v54 = *(_BYTE*)(v50 - 48);
          *(_QWORD*)(v52 - 56) = 0;
          *(_QWORD*)(v52 - 72) = v53;
          *v53 = nullptr;
          if ((v54 & 1) != 0) {
            v49 = *(_QWORD**)(v52 - 32);
            if (v49 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)v41 + 200LL) != 0) {
                v55 = 128;
              }
              else {
                v55 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v41 + v55, (__int64)v49);
              v49 = *(_QWORD**)(v52 - 64);
            }
          }
          else {
            v49 = nullptr;
          }
          GameRoutine_6e3b50(v42 + v43 - 72, v49);
          v43 -= 112;
        } while (v43 != 0);
        v56 = 128;
        if (*(_QWORD*)(*(_QWORD*)v41 + 200LL) == 0) {
          v56 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v41 + v56, v42);
        v37 = v61;
      }
      v64_.v70 = -1;
      v64_.v71 = -1;
      v64_.v72 = -1;
      v64_.v73 = -1;
      v57 = *msg_MessageManager_instance__ptr[0];
      v64_.v74 = -1;
      v64_.v75 = -1;
      v64_.v76 = -1;
      v64_.v77 = -1;
      v64_.v78 = -1;
      v64_.v79 = -1;
      v64_.v80 = -1;
      v64_.v81 = -1;
      v64_.v64 = (__int64)(GameData_212e348 + 2);
      v64_.v65 = (char*)0xFFFF0001FFFF0000LL;
      v64_.v66 = 0xFFFF0004FFFF0002LL;
      v64_.v67 = 0xFFFF0006FFFF0005LL;
      v64_.v82 = 8;
      v64_.v68 = -65529;
      v64_.v69 = -65528;
      v58 = GameRoutine_a4dbe0(v57, "MID_Shop_Aquisition", 0);
      if (v58 != nullptr) {
        v59 = (__int64)v58;
        v60 = ui_LayoutAccessor_FindTextBox(v37, "T_Txt");
        if (v60 != 0) {
          GameRoutine_156c5d0(v60, v59, 0);
        }
      }
    }
    else if (v36 == 0) {
      return;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      std___1___shared_weak_count___release_weak(v36);
    }
  }
}

#pragma GCC visibility pop
