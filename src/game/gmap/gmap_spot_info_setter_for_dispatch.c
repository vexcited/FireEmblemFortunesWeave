#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1657240(_QWORD* result);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_gmap_GmapSpotInfoSetter_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GmapSpotInfoSetterForDispatch_DeletingDestructor(_QWORD* a1);
_DWORD* GameRoutine_157b170(__int64*, __int64, char);
__attribute__((swiftcall)) void game_gmap_165d4a0(PSEUDO_X8, __int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_151b120(__int64);
__int64 Impl_13261c0(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 SpotAttachmentFort_151c7c0(float*, __int64*, __int64, __int64**);
__int64 Util_1582b50(__int64*, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameHr_6ed030(__int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_GmapExploreData_GetShowRareFlagName(__int64);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1bebb60;
extern _UNKNOWN GameData_22594f0;
extern __int64* GameData_212cbf8[72];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 game_GameModeData_instance_;
extern int GameData_1bebc40[];
extern int GameData_22594e8;
int __cxa_guard_acquire(__int64);
unsigned int* game_de7fb0(__int64, unsigned int*);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64, const char*, int, ...);
void __attribute__((noreturn)) GameRoutine_151cd70();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6e5c60();
void __cxa_guard_release(__int64);
void game_gmap_1659b80(__int64**);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GmapSpotInfoSetterForDispatch_Unknown3(__int64** a1);

void GmapSpotInfoSetterForDispatch_Unknown3(__int64** a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  const char* v3;
  unsigned __int8 v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v16;
  __int64 v17;
  int v18;
  _BYTE* v19;
  __int64 v20;
  unsigned __int64 v21;
  bool v22;
  __int64* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned int v31;
  int v32;
  int v33;
  char* v34;
  char* v35;
  __int64 v36;
  __int64* v37;
  int v38;
  char* v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  const char* v44;
  const char* v45;
  int v46;
  int v47;
  __int64 v48;
  char* v49;
  const char* v50;
  const char* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  char* v68;
  __int64 v69;
  char* v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  char* v74;
  __int64 v75;
  char* v76;
  __int64 v77;
  char* v78;
  __int64 v79;
  char* v80;
  _QWORD* v81;
  __int64 v82;
  _QWORD* v83;
  __int64 v84;
  __int64* v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  char* v90;
  __int64* v91;
  __int64* v92;
  __int64 v93;
  char* v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  __int64* v105;
  char* v106;
  __int64* v107;
  unsigned __int64 v108;
  __int64* v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  _QWORD* v113;
  _QWORD* v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned int v117;
  __int64* v118;
  const char* v119;
  const char* v120;
  char* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  _QWORD* v126;
  __int64 v127;
  _QWORD* v128;
  __int64 v129;
  __int64* v130;
  __int64 v131;
  __int64 v132;
  __int64* v133;
  __int64 v134;
  __int64 v135;
  _BOOL4 v136;
  __int64* v137;
  __int64 v138;
  struct {
    __int64* v139;
    unsigned __int64 v140;
    _QWORD* v141;
    __int64 v142;
  } v139_;
  struct {
    __int64* v143;
    unsigned __int64 v144;
    unsigned __int64 v145;
    unsigned __int64 v146;
    int v147;
    int v148;
    __int64 v149;
    __int64 v150;
    __int64 v151;
    __int64 v152;
    __int64 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
  } v143_;
  __int64* v162;

  v1 = (__int64)a1;
  game_gmap_1659b80(a1);
  Util_1582b50(*(__int64**)(v1 + 8), *(_QWORD*)(v1 + 24));
  v2 = *(_QWORD*)(v1 + 24);
  if ((*(_BYTE*)(v2 + 178) & 4) != 0 && game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v3 = "MID_LegionCombackMenu_ReconstructionInfo";
  }
  else {
    v4 = Impl_13261c0(v2) - 5;
    if (v4 > 4u) {
      v3 = (const char*)&GameData_1bebb60;
    }
    else {
      v3 = (char*)GameData_1bebc40 + GameData_1bebc40[v4];
    }
  }
  v5 = *(__int64**)(v1 + 8);
  v143_.v149 = -1;
  v143_.v150 = -1;
  v143_.v151 = -1;
  v143_.v152 = -1;
  v143_.v153 = -1;
  v143_.v154 = -1;
  v6 = *msg_MessageManager_instance__ptr[0];
  v7 = GameData_212e348;
  v143_.v155 = -1;
  v143_.v156 = -1;
  v143_.v157 = -1;
  v143_.v158 = -1;
  v143_.v159 = -1;
  v143_.v160 = -1;
  v143_.v143 = GameData_212e348 + 2;
  v143_.v144 = 0xFFFF0001FFFF0000LL;
  v143_.v145 = 0xFFFF0004FFFF0002LL;
  v143_.v146 = 0xFFFF0006FFFF0005LL;
  v143_.v161 = 8;
  v143_.v147 = -65529;
  v143_.v148 = -65528;
  v8 = GameRoutine_a4dbe0(v6, v3, 0);
  if (v8 != nullptr) {
    v9 = (__int64)v8;
    v10 = ui_LayoutAccessor_FindTextBox(v5, (__int64)"T_Txt");
    if (v10 != 0) {
      GameRoutine_156c5d0(v10, v9, 0);
    }
  }
  v11 = (unsigned __int8)Impl_13261c0(*(_QWORD*)(v1 + 24));
  v138 = v1;
  if (v11 != 9) {
    if (v11 != 5) {
      return;
    }
    v12 = *(_QWORD*)(v1 + 24);
    v13 = Impl_13261c0(v12);
    v137 = *(__int64**)(v12 + 144);
    if (v13 == 5) {
      v14 = *(_QWORD*)(v12 + 144);
    }
    else {
      v14 = 0;
    }
    game_gmap_165d4a0((void*)((__int64)&v139_.v139), v1);
    v17 = *(_QWORD*)(v14 + 8);
    v16 = *(_QWORD*)(v14 + 16);
    if (v17 == v16) {
      v18 = 0;
    LABEL_98:
      v63 = *(_QWORD*)(v1 + 8);
      v64 = game_util_Format("L_Item%02d", 0);
      ui_LayoutAccessor_SetPaneVisible(v63, (__int64)v64, v18 > 0);
      v65 = *(_QWORD*)(v1 + 8);
      v66 = game_util_Format("L_Item%02d", 1);
      ui_LayoutAccessor_SetPaneVisible(v65, (__int64)v66, v18 > 1);
      v67 = *(_QWORD*)(v1 + 8);
      v68 = game_util_Format("L_Item%02d", 2);
      ui_LayoutAccessor_SetPaneVisible(v67, (__int64)v68, v18 > 2);
      v69 = *(_QWORD*)(v1 + 8);
      v70 = game_util_Format("L_Item%02d", 3);
      ui_LayoutAccessor_SetPaneVisible(v69, (__int64)v70, v18 > 3);
      v71 = *(_QWORD*)(v1 + 8);
      v72 = game_util_Format("L_Item%02d", 4);
      ui_LayoutAccessor_SetPaneVisible(v71, (__int64)v72, v18 > 4);
      v73 = *(_QWORD*)(v1 + 8);
      v74 = game_util_Format("L_Item%02d", 5);
      ui_LayoutAccessor_SetPaneVisible(v73, (__int64)v74, v18 > 5);
      v75 = *(_QWORD*)(v1 + 8);
      v76 = game_util_Format("L_Item%02d", 6);
      ui_LayoutAccessor_SetPaneVisible(v75, (__int64)v76, v18 > 6);
      v77 = *(_QWORD*)(v1 + 8);
      v78 = game_util_Format("L_Item%02d", 7);
      ui_LayoutAccessor_SetPaneVisible(v77, (__int64)v78, v18 > 7);
      v79 = *(_QWORD*)(v1 + 8);
      v80 = game_util_Format("L_Item%02d", 8);
      ui_LayoutAccessor_SetPaneVisible(v79, (__int64)v80, v18 > 8);
      v81 = v139_.v141;
      v82 = fw_memory_g_heap_manager_ptr;
      if (v139_.v141 != nullptr) {
        do {
          v83 = (_QWORD*)*v81;
          if (*(_QWORD*)(*(_QWORD*)v82 + 200LL) != 0) {
            v84 = 128;
          }
          else {
            v84 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v82 + v84, (__int64)v81);
          v81 = v83;
        } while (v83 != nullptr);
      }
      v85 = v139_.v139;
      v139_.v139 = nullptr;
      if (v85 != nullptr) {
        v86 = *(_QWORD*)v82;
        goto LABEL_180;
      }
      return;
    }
    v18 = 0;
    v135 = v14;
    v133 = v7 + 2;
    v134 = *(_QWORD*)(v14 + 16);
  LABEL_20:
    if (v18 >= (unsigned __int64)((__int64)(*(_QWORD*)(v14 + 16) -
                                            *(_QWORD*)(v14 + 8)) >>
                                  3)) {
      goto LABEL_98;
    }
    v19 = *(_BYTE**)v17;
    v20 = *(_QWORD*)(*(_QWORD*)v17 + 48LL);
    if (v20 == 0) {
      goto LABEL_19;
    }
    v21 = v139_.v140;
    v22 = v139_.v140 == 0 || v139_.v142 == 0;
    if (v22) {
      goto LABEL_48;
    }
    v23 = *(__int64**)(v20 + 8);
    v143_.v143 = v23;
    v24 = std___1___hash_memory((__int64)&v143_.v143, 8u);
    v25 = v21 - 1;
    if ((v21 & (v21 - 1)) != 0) {
      v26 = v24;
      if (v24 >= v21) {
        v26 = v24 % v21;
      }
    }
    else {
      v26 = v24 & v25;
    }
    v27 = (_QWORD*)v139_.v139[v26];
    if (v27 == nullptr) {
      goto LABEL_48;
    }
    v28 = (_QWORD*)*v27;
    if (v28 == nullptr) {
      goto LABEL_48;
    }
    if ((v21 & v25) == 0) {
      while (1) {
        v30 = v28[1];
        if (v24 == v30) {
          if ((__int64*)v28[2] == v23) {
            goto LABEL_46;
          }
        }
        else if ((v30 & v25) != v26) {
          goto LABEL_48;
        }
        v28 = (_QWORD*)*v28;
        if (v28 == nullptr) {
          goto LABEL_48;
        }
      }
    }
    while (1) {
      v29 = v28[1];
      if (v24 == v29) {
        if ((__int64*)v28[2] == v23) {
        LABEL_46:
          v162 = v23;
          v143_.v143 = (__int64*)&v162;
          v31 = *(_DWORD*)(SpotAttachmentFort_151c7c0(
                               (float*)&v139_.v139, (__int64*)&v162,
                               (__int64)std___1_piecewise_construct_ptr,
                               &v143_.v143) +
                           24);
          if (v31 != 0) {
            v32 = 0;
            goto LABEL_51;
          }
        LABEL_48:
          if (v19[57] == 1 && v19[56] == 0) {
            goto LABEL_19;
          }
          v31 = 0;
          v32 = 1;
        LABEL_51:
          v33 = (unsigned __int8)v19[58];
          v34 = game_GmapExploreData_GetShowRareFlagName(*v137);
          v35 = v34;
          if (v34 != nullptr) {
            v143_.v144 = (unsigned __int64)v34;
            v143_.v143 = (__int64*)game_HashString((__int64)v34);
            v136 = game_GameModeData_instance_ != 0 &&
                   (v36 = game_GameVariableTable_Find(
                        *(_QWORD**)(game_GameModeData_instance_ + 48),
                        (unsigned __int64*)&v143_.v143)) != 0 &&
                   *(_DWORD*)(v36 + 32) != 0;
          }
          v22 = v35 == nullptr;
          v37 = *(__int64**)(v1 + 8);
          v38 = v22;
          v39 = game_util_Format("L_Item%02d", (unsigned int)v18);
          v40 = LayoutAccessor_155fbe0(v37, v39);
          v41 = LayoutAccessor_155fbe0(v40, "L_Icon");
          v42 = ui_LayoutAccessor_FindPane(v41, (__int64)"Icon");
          if (v42 == 0) {
            if (v32 != 0) {
              if (v33 != 0) {
                v45 = "Item_DisableRare";
              }
              else {
                v45 = "Item_DisableDefault";
              }
              GameHr_1562680((__int64)v40, v45, 0x1.0000000000000p+0f);
              goto LABEL_71;
            }
            if (v33 != 0) {
              v51 = "Item_Rare";
            }
            else {
              v51 = "Item_Default";
            }
            GameHr_1562680((__int64)v40, v51, 0x1.0000000000000p+0f);
            v16 = v134;
            v14 = v135;
          LABEL_84:
            v49 = GameHr_6ed030(v20);
            if (v49 != nullptr) {
              goto LABEL_85;
            }
            goto LABEL_87;
          }
          v43 =
              __dynamic_cast(v42, GameData_212d670[0], GameData_212d678[0], 0);
          if ((v32 & 1) == 0) {
            if (v33 != 0) {
              v50 = "Item_Rare";
            }
            else {
              v50 = "Item_Default";
            }
            GameHr_1562680((__int64)v40, v50, 0x1.0000000000000p+0f);
            v16 = v134;
            v14 = v135;
            if (v43 != 0) {
              if ((atomic_load_explicit(
                       (atomic_uchar* volatile)&GameData_22594f0,
                       memory_order_acquire) &
                   1) == 0 &&
                  __cxa_guard_acquire((__int64)&GameData_22594f0) != 0) {
                GameData_22594e8 = -1;
                __cxa_guard_release((__int64)&GameData_22594f0);
              }
              LODWORD(v143_.v143) = GameData_22594e8;
              (*(void (**)(__int64, _QWORD, __int64**))(*(_QWORD*)v43 + 40LL))(
                  v43, 0, &v143_.v143);
              (*(void (**)(__int64, __int64, __int64**))(*(_QWORD*)v43 + 40LL))(
                  v43, 1, &v143_.v143);
              (*(void (**)(__int64, __int64, __int64**))(*(_QWORD*)v43 + 40LL))(
                  v43, 2, &v143_.v143);
              (*(void (**)(__int64, __int64, __int64**))(*(_QWORD*)v43 + 40LL))(
                  v43, 3, &v143_.v143);
            }
            goto LABEL_84;
          }
          if (v33 != 0) {
            v44 = "Item_DisableRare";
          }
          else {
            v44 = "Item_DisableDefault";
          }
          GameHr_1562680((__int64)v40, v44, 0x1.0000000000000p+0f);
          if (v43 != 0) {
            LODWORD(v143_.v143) = *(_DWORD*)((char*)((_UNKNOWN*)0x78LL) +
                                             (_QWORD)GameData_212da30);
            (*(void (**)(__int64, _QWORD, __int64**))(*(_QWORD*)v43 + 40LL))(
                v43, 0, &v143_.v143);
            (*(void (**)(__int64, __int64, __int64**))(*(_QWORD*)v43 + 40LL))(
                v43, 1, &v143_.v143);
            (*(void (**)(__int64, __int64, __int64**))(*(_QWORD*)v43 + 40LL))(
                v43, 2, &v143_.v143);
            (*(void (**)(__int64, __int64, __int64**))(*(_QWORD*)v43 + 40LL))(
                v43, 3, &v143_.v143);
          }
        LABEL_71:
          v46 = v32 & v33;
          v47 = v38 | !v136;
          v16 = v134;
          v14 = v135;
          if ((v46 & v47) == 0) {
            goto LABEL_84;
          }
          v48 = *msg_MessageManager_instance__ptr[0];
          v143_.v149 = -1;
          v143_.v150 = -1;
          v143_.v151 = -1;
          v143_.v152 = -1;
          v143_.v153 = -1;
          v143_.v154 = -1;
          v143_.v155 = -1;
          v143_.v156 = -1;
          v143_.v157 = -1;
          v143_.v158 = -1;
          v143_.v159 = -1;
          v143_.v160 = -1;
          v143_.v143 = v133;
          v143_.v144 = 0xFFFF0001FFFF0000LL;
          v143_.v145 = 0xFFFF0004FFFF0002LL;
          v143_.v146 = 0xFFFF0006FFFF0005LL;
          v143_.v161 = 8;
          v143_.v147 = -65529;
          v143_.v148 = -65528;
          v49 = GameRoutine_a4dbe0(v48, "MID_Sys_Unknown", 0);
          if (v49 != nullptr) {
          LABEL_85:
            v52 = ui_LayoutAccessor_FindTextBox(v40, (__int64)"T_Txt");
            if (v52 != 0) {
              GameRoutine_156c5d0(v52, (__int64)v49, 0);
            }
          }
        LABEL_87:
          v53 = ui_LayoutAccessor_FindPane(v40, (__int64)"T_Num");
          if (v53 != 0) {
            v54 = __dynamic_cast(v53, GameData_212d670[0], GameData_212d690, 0);
            if (v54 != 0) {
              GameRoutine_156c910(v54, "%d", 1, v31);
            }
          }
          GameRoutine_157b170(v41, v20, 0);
          v1 = v138;
          ++v18;
        LABEL_19:
          v17 += 8;
          if (v17 == v16) {
            goto LABEL_98;
          }
          goto LABEL_20;
        }
      }
      else {
        if (v29 >= v21) {
          v29 %= v21;
        }
        if (v29 != v26) {
          goto LABEL_48;
        }
      }
      v28 = (_QWORD*)*v28;
      if (v28 == nullptr) {
        goto LABEL_48;
      }
    }
  }
  if (game_de7fb0(*GameData_212cbf8[0],
                  *(unsigned int**)(*(_QWORD*)(v1 + 24) + 120LL)) == nullptr) {
    return;
  }
  v55 = *(_QWORD*)(v1 + 24);
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v55 + 280) + 24LL))(
          *(_QWORD*)(v55 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v55 + 280) + 112LL))(
        *(_QWORD*)(v55 + 280));
  }
  v56 = GameRoutine_151b120(*(_QWORD*)(v55 + 280));
  v57 = *(__int64**)(v56 + 40);
  v58 = v56;
  v59 = *v57;
  v60 = v57[1] - *v57;
  if ((unsigned int)((unsigned __int64)v60 >> 3) != 0) {
    v87 = (int)(v60 >> 3);
    if (v87 >> 61 != 0) {
    LABEL_185:
      GameRoutine_6e5c60();
    }
    v88 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v87, 16, 0);
    v61 = v88 + 8 * v87;
    v62 = v88;
  }
  else {
    v61 = 0;
    v62 = 0;
  }
  if ((int)((unsigned __int64)v60 >> 3) >= 1) {
    v89 = 0;
    v90 = (char*)v62;
    v91 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      if (v89 >= v60 >> 3) {
        GameRoutine_151cd70();
      }
      v93 = *(_QWORD*)(*(_QWORD*)(v59 + 8 * v89) + 40LL);
      if ((unsigned __int64)v90 < v61) {
        *(_QWORD*)v90 = v93;
        v90 += 8;
      }
      else {
        v94 = &v90[-v62];
        v95 = (__int64)&v90[-v62] >> 3;
        v96 = v95 + 1;
        if ((unsigned __int64)(v95 + 1) >> 61 != 0) {
          goto LABEL_185;
        }
        if ((__int64)(v61 - v62) >> 2 > v96) {
          v96 = (__int64)(v61 - v62) >> 2;
        }
        if (v61 - v62 >= 0x7FFFFFFFFFFFFFF8LL) {
          v97 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v97 = v96;
        }
        if (v97 != 0) {
          if (v97 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v98 = fw_memory_HeapManager_Allocate(*v91, 8 * v97, 16, 0);
        }
        else {
          v98 = 0;
        }
        v61 = v98 + 8 * v97;
        v99 = (unsigned __int64)&v90[-v62];
        v100 = (__int64)&v94[v98 + -8 * v95];
        *(_QWORD*)&v94[v98] = v93;
        v90 = &v94[v98 + 8];
        memcpy(v100, v62, v99);
        if (v62 != 0) {
          v101 = 128;
          if (*(_QWORD*)(*v91 + 200) == 0) {
            v101 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v91 + v101, v62);
        }
        v62 = v100;
      }
      v92 = *(__int64**)(v58 + 40);
      ++v89;
      v59 = *v92;
      v60 = v92[1] - *v92;
      if ((__int64)v89 >= (int)((unsigned __int64)v60 >> 3)) {
        goto LABEL_129;
      }
    }
  }
  v90 = (char*)v62;
LABEL_129:
  v102 = v138;
  game_gmap_165d4a0((void*)((__int64)&v143_.v143), v138);
  v103 = 0;
  v104 = (__int64)&v90[-v62] >> 3;
  while (2) {
    v105 = *(__int64**)(v102 + 8);
    v106 = game_util_Format("L_Item%02d", v103);
    v107 = LayoutAccessor_155fbe0(v105, v106);
    LayoutAccessor_155e830((__int64)v107, v104 > v103);
    if (v104 <= v103) {
      goto LABEL_131;
    }
    v108 = v143_.v144;
    if (v143_.v144 == 0 || v143_.v146 == 0) {
      goto LABEL_154;
    }
    v109 = *(__int64**)(*(_QWORD*)(v62 + 8 * v103) + 8LL);
    v139_.v139 = v109;
    v110 = std___1___hash_memory((__int64)&v139_.v139, 8u);
    v111 = v108 - 1;
    if ((v108 & (v108 - 1)) != 0) {
      v112 = v110;
      if (v110 >= v108) {
        v112 = v110 % v108;
      }
    }
    else {
      v112 = v110 & v111;
    }
    v113 = (_QWORD*)v143_.v143[v112];
    if (v113 == nullptr || (v114 = (_QWORD*)*v113) == nullptr) {
    LABEL_154:
      v117 = 0;
      goto LABEL_155;
    }
    if ((v108 & v111) == 0) {
      while (1) {
        v116 = v114[1];
        if (v110 == v116) {
          if ((__int64*)v114[2] == v109) {
            goto LABEL_167;
          }
        }
        else if ((v116 & v111) != v112) {
          goto LABEL_154;
        }
        v114 = (_QWORD*)*v114;
        if (v114 == nullptr) {
          goto LABEL_154;
        }
      }
    }
    while (1) {
      v115 = v114[1];
      if (v110 == v115) {
        break;
      }
      if (v115 >= v108) {
        v115 %= v108;
      }
      if (v115 != v112) {
        goto LABEL_154;
      }
    LABEL_144:
      v114 = (_QWORD*)*v114;
      if (v114 == nullptr) {
        goto LABEL_154;
      }
    }
    if ((__int64*)v114[2] != v109) {
      goto LABEL_144;
    }
  LABEL_167:
    v162 = *(__int64**)(*(_QWORD*)(v62 + 8 * v103) + 8LL);
    v139_.v139 = (__int64*)&v162;
    v117 =
        *(_DWORD*)(SpotAttachmentFort_151c7c0(
                       (float*)&v143_.v143, (__int64*)&v162,
                       (__int64)std___1_piecewise_construct_ptr, &v139_.v139) +
                   24);
  LABEL_155:
    v118 = LayoutAccessor_155fbe0(v107, "L_Icon");
    if (v117 != 0) {
      v119 = "Item_Default";
    }
    else {
      v119 = "Item_DisableDefault";
    }
    if (v117 != 0) {
      v120 = "Default";
    }
    else {
      v120 = "DisableDefault";
    }
    GameHr_1562680((__int64)v107, v119, 0x1.0000000000000p+0f);
    GameHr_1562680((__int64)v107, v120, 0x1.0000000000000p+0f);
    v121 = GameHr_6ed030(*(_QWORD*)(v62 + 8 * v103));
    if (v121 != nullptr) {
      v122 = (__int64)v121;
      v123 = ui_LayoutAccessor_FindTextBox(v107, (__int64)"T_Txt");
      if (v123 != 0) {
        GameRoutine_156c5d0(v123, v122, 0);
      }
    }
    v124 = ui_LayoutAccessor_FindPane(v107, (__int64)"T_Num");
    if (v124 != 0) {
      v125 = __dynamic_cast(v124, GameData_212d670[0], GameData_212d690, 0);
      if (v125 != 0) {
        GameRoutine_156c910(v125, "%d", 1, v117);
      }
    }
    GameRoutine_157b170(v118, *(_QWORD*)(v62 + 8 * v103), 0);
    v102 = v138;
  LABEL_131:
    if (++v103 != 9) {
      continue;
    }
    break;
  }
  v126 = (_QWORD*)v143_.v145;
  if (v143_.v145 != 0) {
    v127 = fw_memory_g_heap_manager_ptr;
    do {
      v128 = (_QWORD*)*v126;
      if (*(_QWORD*)(*(_QWORD*)v127 + 200LL) != 0) {
        v129 = 128;
      }
      else {
        v129 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v127 + v129, (__int64)v126);
      v126 = v128;
    } while (v128 != nullptr);
  }
  v130 = v143_.v143;
  v143_.v143 = nullptr;
  if (v130 != nullptr) {
    v131 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v131 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v131, (__int64)v130);
  }
  if (v62 != 0) {
    v85 = (__int64*)v62;
    v86 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  LABEL_180:
    v132 = 128;
    if (*(_QWORD*)(v86 + 200) == 0) {
      v132 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v86 + v132, (__int64)v85);
  }
}

__int64 GmapSpotInfoSetterForDispatch_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = &game_gmap_GmapSpotInfoSetter_vtable;
  v2 = a1[9];
  a1[9] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1 + 5;
  v4 = fw_memory_g_heap_manager_ptr;
  if (a1[5] != 0) {
    GameRoutine_1657240(a1 + 5);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5, *v3);
    }
  }
  v6 = a1[2];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, a1);
}

double GmapSpotInfoSetterForDispatch_Unknown7() { return 0.0; }

#pragma GCC visibility pop
